#!/usr/bin/env python3
"""Turn a WiiWare WAD (plus optional DLC WAD) into the 'game' folder the native build reads.

usage: prepare_wad.py Game.wad game [DLC.wad]
Writes: game/tmd.bin, game/ticket.bin, game/content/<index>.app (decrypted),
        game/main.dol (content 1; LZ11-decompressed when compressed),
        game/dlc/tmd.bin, ticket.bin, content/<index>.app for the DLC title.
Needs: pip install libWiiPy (Python 3.11+)
"""
import sys, os, hashlib
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from lz11 import lz11
import libWiiPy

EXPECT_DOL_SHA1 = 'ab2944ddbae018d562839a4a48b222ada1d3c915'

def unpack(wad, out):
    t = libWiiPy.title.Title()
    t.load_wad(open(wad, 'rb').read())
    os.makedirs(os.path.join(out, 'content'), exist_ok=True)
    open(os.path.join(out, 'tmd.bin'), 'wb').write(t.tmd.dump())
    open(os.path.join(out, 'ticket.bin'), 'wb').write(t.ticket.dump())
    for i, c in enumerate(t.content.content_records):
        data = t.get_content_by_index(i)
        open(os.path.join(out, 'content', f'{c.index:08x}.app'), 'wb').write(data)
        print(f'  content {c.index}: id {c.content_id:08x} type {c.content_type:04x} {len(data)} bytes')
    return t

def main(wad, out, dlc=None):
    print('base', wad)
    t = unpack(wad, out)
    d = t.get_content_by_index(1)
    dol = lz11(d) if d[0] == 0x11 else d
    open(os.path.join(out, 'main.dol'), 'wb').write(dol)
    h = hashlib.sha1(dol).hexdigest()
    print('main.dol', len(dol), h, '' if EXPECT_DOL_SHA1 is None else ('OK' if h == EXPECT_DOL_SHA1 else '(different build than the recomp was made from!)'))
    if dlc:
        print('dlc', dlc)
        unpack(dlc, os.path.join(out, 'dlc'))

if __name__ == '__main__':
    main(*sys.argv[1:4])
