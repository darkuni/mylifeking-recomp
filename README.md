# Final Fantasy Crystal Chronicles: My Life as a King (WiiWare, NTSC-U) - native recompilation

A static recompilation of **Final Fantasy Crystal Chronicles: My Life as a King** (WiiWare, NTSC-U, title `WFCE`)
and its add-on content to native code. The game's PowerPC executable is translated to C++ and runs on Windows
(and Linux) with a small runtime that replaces the Wii hardware, IOS and the DSP.

**No game data is included.** You need your own copy of the game (and optionally the DLC) as WAD files. The build
turns your WADs into a `game` folder and generates the C++ from the executable inside it.

## Status (v0.4)

- Plays on Windows: tested through intro, kingdom building, cut scenes and menus; locked 30 fps on testers' PCs.
- All three control styles work: Classic Controller (default, best on a PC gamepad), Wii Remote + Nunchuk, and
  Wii Remote alone. The game picks its control style from the attached extension, so the setting is all you change.
- DLC: all 15 items of the add-on pack are installed as add-on content (`game/dlc`) and read by the game.
  "Purchase add-on content" needs the Wii Shop and does not work.
- Audio: AX mixed frames are sent to the host in mixer order (no clicks); 60 ms jitter buffer.
- GX runs on its own thread beside the game thread, like the Wii's GPU (set `GX_SYNC=1` to parse on the game thread).

Shares its recompiler and runtime with [chocobo-dungeon-recomp](https://github.com/darkuni/chocobo-dungeon-recomp),
[geometry-wars-wii-recomp](https://github.com/darkuni/geometry-wars-wii-recomp) and the ReBirth ports; per-game
addresses are in `src/runtime/game.h` and the idle loop in `src/recomp.py`. See [NOTES.md](NOTES.md).

## Controls

`controls = classic | nunchuk | sideways` in `mylifeking.ini`, or the F1 settings menu.

- classic: left stick move, right stick camera, A/B/X/Y by label, LB/RB = L/R, LT/RT = ZL/ZR, Start = +, Back = -.
- nunchuk: left stick = Nunchuk stick, d-pad = remote d-pad, A = A, B = B, X = 1, Y = 2, LB/LT = Z, RB/RT = C.
- sideways (shown as "Wii Remote"): the game uses the bare remote upright, so the d-pad is not rotated.

Hold Tab (or click the right stick) for fast-forward, F1 / Esc for settings, F11 / Alt+Enter for fullscreen.

## Layout

| Path | What it is |
| --- | --- |
| `tools/prepare_wad.py` | Unpacks the game WAD (and the DLC WAD into `game/dlc`) |
| `src/recomp.py` | Recompiler: `main.dol` + symbols -> `src/gen/*.cpp` |
| `src/runtime/` | Runtime: CPU context and memory, threads, IOS/ES, GX -> OpenGL 3.3, AX audio, input |
| `src/runtime/game.h` | Game-specific addresses the runtime needs |
| `src/hle.txt` | Guest functions replaced by host code or stubbed |
| `config/` | Symbols and decomp-toolkit (dtk) project files |
| `dist/` | Batch files shipped with the Windows build (game folder setup, audio recording) |

## Building

Requirements: Python 3.11+, `pip install libWiiPy`, CMake, Ninja, a C++17 compiler; Windows builds are
cross-compiled with mingw-w64 (posix threads) and the SDL2 mingw development package.

```sh
python3 tools/prepare_wad.py <game>.wad game [<dlc>.wad]
cd src
python3 recomp.py ../game/main.dol symbols.txt gen 300
cmake -S . -B build-win -G Ninja -DCMAKE_TOOLCHAIN_FILE=mingw.cmake \
      -DSDL2_DIR=/path/to/SDL2-2.30.x/x86_64-w64-mingw32
ninja -C build-win
# Linux headless test build:
cmake -S . -B build -G Ninja -DCMAKE_CXX_COMPILER=clang++ && ninja -C build
SHOT_EVERY=100 SHOT_DIR=shots TIMEOUT=120 ./build/mylifeking ../game
```

Ship `mylifeking.exe` with `SDL2.dll`, `libwinpthread-1.dll`, `src/runtime/ipl-font-licenses.txt`, the files in
`dist/` and `tools/prepare_wad.py` + `tools/lz11.py`.

## Disclaimer

This is an unofficial fan project. It is **not affiliated with, endorsed by, or sponsored by** Square Enix or
Nintendo. *Final Fantasy Crystal Chronicles: My Life as a King* and all related names and marks belong to their
respective owners. This repository contains no game code or game data; you need your own legally obtained copy.

## License

The project's own code is released under the [MIT License](LICENSE). Bundled third-party components (fonts,
OpenGL headers) keep their own licenses; see [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md).
