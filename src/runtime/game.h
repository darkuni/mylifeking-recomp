// Per-game constants for Final Fantasy Crystal Chronicles: My Life as a King (WFCE, WiiWare, NTSC-U)
// with its DLC title (00010005-57464345) loaded from game/dlc.
// Addresses come from config/symbols.txt (dtk + naming passes vs Alien Crush Returns / Chocobo / Gradius);
// r13 offsets were read from the instruction that loads the variable in the named SDK function.
#pragma once
#define GAME_NAME        "My Life as a King"
#define GAME_EXE         "mylifeking"
#define GAME_INI         "mylifeking.ini"
#define GAME_DEFAULT_CONTROLS "classic"   // the game reads the Classic Controller natively; maps 1:1 to a PC gamepad
// The game picks its control style from the attached extension (core / Nunchuk / Classic) and maps the bare
// Wii Remote's d-pad unrotated (button table 0x8025F018: remote UP = up), so the remote is not held sideways.
#define GAME_REMOTE_UPRIGHT 1

#define G_AX_RESUME_CB          0x800FE454u   // __AXDSPResumeCallback
#define G_DECREMENTER_CB        0x800DF7D0u   // DecrementerExceptionCallback
#define G_IOS_FREE              0x8012B990u   // iosFree(heap, ptr)
#define G_OS_EXIT_THREAD        0x800E83D0u   // OSExitThread
#define G_SDA_INTERRUPT_TABLE   0x6A20u       // __OSGetInterruptHandler: lwz r4,-0x6A20(r13)
#define G_SDA_IOS_HEAP          0x72E4u       // __ios_Ipc2: lwz r3,-0x72E4(r13) before iosFree
#define G_FN_OS_EXIT_THREAD     f_800E83D0
#define G_FN_IOS_FREE           f_8012B990
