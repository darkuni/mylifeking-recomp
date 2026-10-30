# My Life as a King (WFCE) - recomp notes

## Source
- Base title 00010001-57464345 (WFCE), IOS 37; add-on title 00010005-57464345, 16 contents (index 0 + 15 items).
- `tools/prepare_wad.py base.wad game dlc.wad` writes `game/{tmd,ticket}.bin`, `game/content/*.app`, `game/main.dol`
  and `game/dlc/`. The runtime's ES answers the add-on title from `game/dlc` (title views, contents, OpenContent).

## Input
- The game reads controllers with raw `WPADRead` (fn_80041AD0): 0x2A bytes for the core remote, 0x32 (WPADFSStatus)
  for the Nunchuk + `WPADClampStick`, 0x36 (WPADCLStatus) for the Classic Controller. KPAD is only used by a
  pointer/cursor helper (fn_800D1EB4).
- Control style follows the attached extension (pad struct +0xA0, fn_800CBD08 -> style 3/4/5).
- Button table 0x8025F018 maps the bare remote's d-pad unrotated (UP = up), so `GAME_REMOTE_UPRIGHT` disables the
  sideways rotation used by the ReBirth ports.
- v0.2 sent the Nunchuk stick only after a `WPADSetDataFormat` to a Nunchuk format, which this game never does,
  and had no Classic Controller path.

## Audio
- AX mixes 96-sample (3 ms) frames; `ax_dsp.cpp output()` pushes each mixed frame straight to the host
  (`audio_out`). The old AI-buffer read raced the mixer and clicked at frame boundaries.

## Performance
- Typical field/cut-scene frame: ~36k GX primitives of ~5 vertices, batched into ~370 GL draws.
- The FIFO is parsed and rendered on a GX thread (`gx_fifo.cpp`): FIFO writes go to a 32 MiB ring; PE draw-done
  and token interrupts are posted when the GX thread reaches them; the CPU waits if the GX thread is >12 MiB behind.
  MMIO registers are behind a mutex since the GX thread pokes PE registers.
- Vertex setup is cached until CP/XF state changes; batches store each vertex once with an index buffer.

## Testing
- Headless: `AUTOPRESS_FRAMES=1 AUTOPRESS="A@100-103,..."` (times in rendered frames), scripted sticks
  `LSU/LSD/LSL/LSR/RSU/...`, `CONTROLS=classic`, `INPUTLOG=1`, `PERF=1`, `SHOT_EVERY`/`SHOT_DIR`.
