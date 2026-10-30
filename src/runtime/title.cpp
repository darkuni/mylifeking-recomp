// WiiWare titles: TMD + decrypted contents in <game>/content/<index>.app, plus DLC titles in
// <game>/dlc (and dlc2, dlc3 ...) laid out the same way. Replaces the disc; /dev/es serves
// content reads, ticket and TMD views for all of them.
#include "hle.h"
#include "title.h"
#include <vector>
#include <string>
#include <filesystem>

Title g_title;
std::vector<Title> g_dlc_titles;

static std::vector<uint8_t> slurp(const std::string& p) {
    std::vector<uint8_t> v;
    FILE* f = fopen(p.c_str(), "rb");
    if (!f) return v;
    fseek(f, 0, SEEK_END); v.resize(ftell(f)); fseek(f, 0, SEEK_SET);
    if (fread(v.data(), 1, v.size(), f) != v.size()) v.clear();
    fclose(f);
    return v;
}
static uint16_t be16(const uint8_t* p) { return (uint16_t)(p[0] << 8 | p[1]); }
static uint32_t be32(const uint8_t* p) { return (uint32_t)be16(p) << 16 | be16(p + 2); }
static uint64_t be64(const uint8_t* p) { return (uint64_t)be32(p) << 32 | be32(p + 4); }

static bool load_title(const std::string& root, Title& T) {
    T.root = root;
    T.tmd = slurp(root + "/tmd.bin");
    T.ticket = slurp(root + "/ticket.bin");
    auto& t = T.tmd;
    if (t.size() < 0x1E4) return false;
    T.title_id = be64(&t[0x18C]);
    T.ios_id = be64(&t[0x184]);
    T.group_id = be16(&t[0x198]);
    T.title_version = be16(&t[0x1DC]);
    T.boot_index = be16(&t[0x1E0]);
    unsigned n = be16(&t[0x1DE]);
    for (unsigned i = 0; i < n && 0x1E4 + 36 * (i + 1) <= t.size(); i++) {
        const uint8_t* e = &t[0x1E4 + 36 * i];
        TitleContent c;
        c.id = be32(e); c.index = be16(e + 4); c.type = be16(e + 6); c.size = be64(e + 8);
        char nm[32]; snprintf(nm, sizeof nm, "/content/%08x.app", c.index);
        c.path = root + nm;
        T.contents.push_back(c);
    }
    fprintf(g_log, "[title] %016llX ios %llu, %zu contents, boot index %u (%s)\n",
            (unsigned long long)T.title_id, (unsigned long long)(T.ios_id & 0xFFFFFFFF),
            T.contents.size(), T.boot_index, root.c_str());
    return true;
}

bool title_init(const char* root) {
    if (!load_title(root, g_title)) { fprintf(g_log, "[title] no tmd.bin in %s\n", root); return false; }
    for (int k = 1; k < 16; k++) {
        std::string d = std::string(root) + (k == 1 ? "/dlc" : "/dlc" + std::to_string(k));
        if (!std::filesystem::exists(d + "/tmd.bin")) continue;
        Title t;
        if (load_title(d, t)) g_dlc_titles.push_back(std::move(t));
    }
    return true;
}

const Title* title_find(uint64_t tid) {
    if (tid == g_title.title_id) return &g_title;
    for (auto& t : g_dlc_titles) if (t.title_id == tid) return &t;
    return nullptr;
}
std::vector<const Title*> title_all() {
    std::vector<const Title*> v{&g_title};
    for (auto& t : g_dlc_titles) v.push_back(&t);
    return v;
}

const TitleContent* title_content(const Title& T, uint32_t index) {
    for (auto& c : T.contents) if (c.index == index) return &c;
    return nullptr;
}

// TMD view (Dolphin TMDReader::GetRawView): header 0x180..0x1D8, title_version, num_contents,
// then 16 bytes per content (id, index, type, size - no hash).
std::vector<uint8_t> title_tmd_view(const Title& T) {
    auto& t = T.tmd;
    std::vector<uint8_t> v(t.begin() + 0x180, t.begin() + 0x1D8);
    v.insert(v.end(), t.begin() + 0x1DC, t.begin() + 0x1DE);
    v.insert(v.end(), t.begin() + 0x1DE, t.begin() + 0x1E0);
    for (size_t i = 0; i < T.contents.size(); i++)
        v.insert(v.end(), t.begin() + 0x1E4 + 36 * i, t.begin() + 0x1E4 + 36 * i + 16);
    return v;
}

// Ticket view (Dolphin TicketReader::GetRawTicketView): 4-byte version + ticket bytes
// 0x1D0 (ticket_id) .. 0x2A4 (incl. content access permissions and limits), 0xD8 bytes total.
std::vector<uint8_t> title_ticket_view(const Title& T) {
    std::vector<uint8_t> v(0xD8, 0);
    auto& k = T.ticket;
    if (k.size() >= 0x2A4) {
        v[0] = k[0x1BC];   // ticket version
        std::copy(k.begin() + 0x1D0, k.begin() + 0x1D0 + 0xD4, v.begin() + 4);
    }
    return v;
}
