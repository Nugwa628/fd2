# SmackW32.dll

- Size: 95,232 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x34bfa011 (1998-01-16 17:59:45 UTC)
- ImageBase 0x10000000, entry 0x1000bf10 (in .text)
- Linker 4.20; .NET: no; overlay 0 bytes
- PDB: `(none)`
- RTTI type descriptors (`.?AV`/`.?AU`): 0
- TLS callbacks: none
- Packer/protector heuristics: none

## Version resource

- Comments: Thank you for using Smacker!
- CompanyName: RAD Game Tools, Inc.
- FileDescription: Smacker Video Technology
- FileVersion: 3.1n
- LegalCopyright: Copyright (C) 1994-97 RAD Game Tools, Inc.
- LegalTrademarks: Smacker is a trademark of RAD Game Tools, Inc.
- ProductName: Smacker
- ProductVersion: 3.1n
- _FileVersion: 3.0.0.0

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 50,434 | 50,688 | 6.38 | 0x60000020 |
| _UNSTEXT | 0xe000 | 19,120 | 19,456 | 6.23 | 0x60000020 |
| .rdata | 0x13000 | 2,715 | 3,072 | 5.14 | 0x40000040 |
| .data | 0x14000 | 8,124 | 6,656 | 4.17 | 0xc0000040 |
| .idata | 0x16000 | 2,994 | 3,072 | 5.13 | 0xc0000040 |
| .rsrc | 0x17000 | 1,996 | 2,048 | 3.59 | 0x40000040 |
| .reloc | 0x18000 | 5,852 | 6,144 | 6.40 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|

## Imports

- **USER32.dll** (41): SendMessageA, GetWindow, GetTopWindow, GetFocus, IsWindow, LoadStringA, IsWindowVisible, GetForegroundWindow, IsChild, SystemParametersInfoA, GetWindowRect, GetParent, ClientToScreen, GetClassInfoA, GetWindowLongA, CreateWindowExA, GetDC, ReleaseDC, GetClassLongA, LoadCursorA, SetWindowLongA, ShowWindow, GetSystemMetrics, SetWindowPos, SetFocus, CallWindowProcA, GetWindowThreadProcessId, GetActiveWindow, GetCursorPos, MessageBoxA, RegisterClassA, ShowCursor, PeekMessageA, ScreenToClient, SetCursor, DestroyWindow, UnregisterClassA, EndPaint, DefWindowProcA, BeginPaint, ... (+1)
- **WINMM.dll** (11): waveOutUnprepareHeader, timeKillEvent, timeSetEvent, waveOutGetID, waveOutSetVolume, waveOutReset, waveOutClose, waveOutOpen, waveOutPrepareHeader, waveOutWrite, timeGetTime
- **KERNEL32.dll** (43): FreeLibrary, lstrcpyA, GetCurrentProcessId, ReadFile, GetOEMCP, CloseHandle, GetCPInfo, GetStartupInfoA, GetACP, GetFileType, SetHandleCount, GetStdHandle, TerminateProcess, ExitProcess, GetCurrentProcess, HeapCreate, GetCommandLineA, HeapDestroy, GetProcAddress, GetModuleHandleA, GetVersion, GetStringTypeW, GetStringTypeA, LCMapStringW, LCMapStringA, WriteFile, DisableThreadLibraryCalls, WideCharToMultiByte, GetEnvironmentStringsW, FreeEnvironmentStringsW, GetEnvironmentStrings, MultiByteToWideChar, FreeEnvironmentStringsA, SetFilePointer, GetProfileIntA, LoadLibraryA, SetErrorMode, LoadModule, HeapFree, GetModuleFileNameA, ... (+3)
- **GDI32.dll** (19): StretchBlt, GetPixel, SetPixel, CreateCompatibleBitmap, GetDIBits, SetStretchBltMode, StretchDIBits, BitBlt, PatBlt, DeleteDC, GetDeviceCaps, CreatePalette, SelectPalette, RealizePalette, DeleteObject, GetSystemPaletteUse, GetSystemPaletteEntries, CreateCompatibleDC, SelectObject

## Exports (61)

- 1 0x10001060 _CopyData@20
- 2 0x1000af80 _SmackBlit@44
- 3 0x1000b380 _SmackBlitClear@32
- 4 0x1000b480 _SmackBlitClose@4
- 5 0x1000b2a0 _SmackBlitMask@52
- 6 0x1000b310 _SmackBlitMerge@52
- 7 0x1000a860 _SmackBlitOpen@4
- 8 0x1000ad80 _SmackBlitSetFlags@8
- 9 0x1000ab90 _SmackBlitSetPalette@12
- 10 0x1000ade0 _SmackBlitString@8
- 11 0x1000b230 _SmackBlitTrans@48
- 12 0x10001f60 _SmackBufferBlit@32
- 13 0x10003cf0 _SmackBufferClear@8
- 14 0x10003750 _SmackBufferClose@4
- 15 0x10003b80 _SmackBufferCopyPalette@12
- 16 0x100033c0 _SmackBufferEndMultipleBlits@4
- 17 0x10003410 _SmackBufferFocused@4
- 18 0x10003960 _SmackBufferFromScreen@16
- 19 0x10003460 _SmackBufferNewPalette@12
- 20 0x100012f0 _SmackBufferOpen@24
- 21 0x100038a0 _SmackBufferSetPalette@4
- 22 0x10003370 _SmackBufferStartMultipleBlits@4
- 23 0x100010a0 _SmackBufferString@8
- 24 0x1000b4a0 _SmackBufferToBuffer@32
- 25 0x1000b6a0 _SmackBufferToBufferMask@40
- 26 0x1000b7c0 _SmackBufferToBufferMerge@40
- 27 0x1000b5a0 _SmackBufferToBufferTrans@36
- 28 0x100042b0 _SmackCheckCursor@20
- 29 0x10005b20 _SmackClose@4
- 30 0x10006e20 _SmackColorRemap@16
- 31 0x10006de0 _SmackColorTrans@8
- 32 0x10003e70 _SmackDDSurfaceType@4
- 33 0x10005c70 _SmackDoFrame@4
- 34 0x100058c0 _SmackFrameRate@4
- 35 0x10007070 _SmackGetTrackData@12
- 36 0x10007170 _SmackGoto@8
- 37 0x10003f90 _SmackIsSoftwareCursor@8
- 38 0x10006440 _SmackNextFrame@4
- 39 0x100043a0 _SmackOpen@12
- 40 0x10004370 _SmackRestoreCursor@4
- 41 0x10003d60 _SmackSetSystemRes@4
- 42 0x100058b0 _SmackSimulate@4
- 43 0x10007710 _SmackSoundCheck@0
- 44 0x10007620 _SmackSoundInTrack@8
- 45 0x100058f0 _SmackSoundOnOff@8
- 46 0x10008d50 _SmackSoundSetDirectSoundHWND@4
- 47 0x10008090 _SmackSoundUseDW@12
- 48 0x100094a0 _SmackSoundUseDirectSound@4
- 49 0x100078d0 _SmackSoundUseMSS@4
- 50 0x10008720 _SmackSoundUseWin@0
- 51 0x100061f0 _SmackSummary@8
- 52 0x10006b00 _SmackToBuffer@28
- 53 0x100071c0 _SmackToBufferRect@8
- 54 0x100064e0 _SmackToScreen@28
- 55 0x100078c0 _SmackUseMMX@4
- 56 0x10007680 _SmackVolumePan@16
- 57 0x10007720 _SmackWait@4
- 58 0x10008e20 _TimerFunc@20
- 59 0x10009490 _ailcallback@4
- 60 0x10001040 _radfree@4
- 61 0x10001000 _radmalloc@4
