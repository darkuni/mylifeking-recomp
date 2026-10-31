Final Fantasy Crystal Chronicles: My Life as a King + DLC - native Windows build (static recompilation)
@VERSION@
https://github.com/darkuni/mylifeking-recomp

No game data is included. You need your own copy of the game (and optionally the DLC) as WAD files.

Setup
  Put your WAD(s) in this folder and run mylifeking.exe:
       FFCC_My_Life_As_A_King.wad                  (base game, required - any file name works)
       FFCC_My_Life_as_a_King_DLC_Complete.wad     (DLC pack, optional)
  On the first start it builds the "game" folder (and game\dlc) from them in a few seconds.
  The WADs aren't needed after that. Nothing else to install.

Folder layout (portable)
  mylifeking.exe, SDL2.dll, libwinpthread-1.dll   the program
  mylifeking.ini                                   settings (created on first run)
  mylifeking.log                                   log of the last run - send this with bug reports
  game\                                            base game (made on the first start)
  game\dlc\                                        DLC pack, loaded as installed add-on content
  nand\                                            saves (created on first run)

Requirements: 64-bit Windows 10/11, a GPU with OpenGL 3.3.

Controls - pick one in the settings menu (F1) or with "controls =" in mylifeking.ini.
The game switches its own control style to match; there is no separate grip menu to change.
  classic (default, best on a PC gamepad) - Classic Controller, buttons by label:
    Gamepad:  left stick = move, right stick = camera, d-pad = d-pad, A/B/X/Y = A/B/X/Y,
              LB/RB = L/R, LT/RT = ZL/ZR, Start = +, Back = -
    Keyboard: arrows = left stick, I/J/K/L = right stick, X = A, Z = B, S = X, A = Y,
              Q/W = L/R, 1/2 = ZL/ZR, Enter = +, Backspace = -
  nunchuk - Wii Remote + Nunchuk:
    Gamepad:  left stick = Nunchuk stick, d-pad = Wii Remote d-pad, A = A, B = B, X = 1, Y = 2,
              LB/LT = Z, RB/RT = C, Start = +, Back = -
    Keyboard: arrows = Nunchuk stick, X = A, Z = B, Shift / Q / 1 = Z, C / W / 2 = C,
              I/J/K/L = Wii Remote d-pad, Enter = +, Backspace = -
  sideways (shown as "Wii Remote") - Wii Remote alone. This game uses the remote upright, so the
    d-pad is NOT rotated: up is up. Gamepad: d-pad or left stick = d-pad, A = A, B = B, X = 1, Y = 2.
  Upgrading from v0.2: your mylifeking.ini still says "controls = nunchuk" - switch to Classic
  Controller in the F1 menu (or delete the ini) to get the new default.
  Hold Tab (or click the right stick) for fast-forward. F1 / Esc or Start+Back = settings menu.
  F11 / Alt+Enter = fullscreen.

Add-on content: all 15 items in the DLC pack are installed and readable by the game.
"Purchase add-on content" on the title menu needs the Wii Shop, which is offline here.

Changes in v0.5
  - No Python or setup script any more: the game unpacks your WAD(s) itself on the first start.

Changes in v0.4
  - Performance: graphics processing now runs on its own CPU thread beside the game, like the
    Wii's GPU does, instead of on the game's thread. Heavy scenes (lighting, particles, cut scenes)
    used to max out one core; the load is now split over two.
  - The log's [perf] lines show "GX thread busy" (graphics thread load) and the overlay's CPU %
    is the game thread alone.

Changes in v0.3
  - Classic Controller mode works (it sent nothing to the game before) and is now the default.
  - Nunchuk stick works (it was never sent to the game before).
  - Wii Remote mode: d-pad no longer rotated - this game holds the remote upright, not sideways.

Changes in v0.2
  - Audio: the stutter/crackle (repeated or skipped 3 ms sound blocks) is fixed; newer audio buffering.
  - Window no longer freezes or shows "Not Responding" while the game keeps running.
  - Game speed setting (1x-8x) and Tab fast-forward.
  - mylifeking.log is written next to the exe.

Reporting problems
  Send mylifeking.log from right after the problem happened (it is overwritten on the next start).
  For sound problems, run record-audio.bat instead of mylifeking.exe: it also saves exactly what the
  game sends to the sound card as mlk_audio.wav - send that too.

Unofficial fan project, not affiliated with Square Enix or Nintendo.
System font: Droid Sans replacements from Dolphin (Apache 2.0, see ipl-font-licenses.txt).
