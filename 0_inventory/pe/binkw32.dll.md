# binkw32.dll

- Size: 200,704 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x389fe100 (2000-02-08 09:25:20 UTC)
- ImageBase 0x10000000, entry 0x1001d335 (in .text)
- Linker 6.0; .NET: no; overlay 0 bytes
- PDB: `(none)`
- RTTI type descriptors (`.?AV`/`.?AU`): 0
- TLS callbacks: none
- Packer/protector heuristics: none

## Version resource

- Comments: Thank you for using Bink!
- CompanyName: RAD Game Tools, Inc.
- FileDescription: Bink Video
- FileVersion: 1.0f
- LegalCopyright: Copyright (C) 1994-2000, RAD Game Tools, Inc.
- LegalTrademarks: Bink is a trademark of RAD Game Tools, Inc.
- ProductName: Bink
- ProductVersion: 1.0f
- _FileVersion: 3.0.0.0

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 137,614 | 137,728 | 6.72 | 0x60000020 |
| .rdata | 0x23000 | 26,400 | 26,624 | 6.27 | 0x40000040 |
| .data | 0x2a000 | 77,336 | 20,480 | 7.30 | 0xc0000040 |
| .rsrc | 0x3d000 | 2,328 | 2,560 | 3.30 | 0x40000040 |
| .reloc | 0x3e000 | 12,212 | 12,288 | 6.63 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 1 | 0 | 89 | ? |
| 19 | 8034 | 9 | ? |
| 11 | 8168 | 1 | VC6 |
| 14 | 7299 | 17 | ? |
| 10 | 8168 | 49 | VC6 |
| 6 | 1735 | 1 | ? |
| 18 | 8444 | 21 | ? |
| 10 | 8447 | 11 | VC6 SP5/6 |
| 11 | 8447 | 2 | VC6 SP5/6 |
| 4 | 8447 | 1 | VC6 SP5/6 |

## Imports

- **KERNEL32.dll** (47): GetCurrentProcessId, HeapAlloc, CreateThread, HeapFree, RtlUnwind, GetCommandLineA, GetVersion, HeapDestroy, HeapCreate, VirtualFree, VirtualAlloc, HeapReAlloc, RaiseException, ExitProcess, TerminateProcess, GetCurrentProcess, GetProcAddress, SetErrorMode, GetFileType, GetStartupInfoA, FreeEnvironmentStringsA, FreeEnvironmentStringsW, WideCharToMultiByte, GetEnvironmentStrings, GetEnvironmentStringsW, WriteFile, MultiByteToWideChar, LCMapStringA, LCMapStringW, GetCPInfo, GetACP, GetOEMCP, GetSystemDirectoryA, GetStringTypeW, LoadLibraryA, CloseHandle, FreeLibrary, GetModuleHandleA, SetFilePointer, Sleep, ... (+7)
- **USER32.dll** (27): GetCursorPos, RegisterClassA, ClientToScreen, IsWindowVisible, GetClientRect, GetWindowRect, GetClassLongA, ChangeDisplaySettingsA, GetActiveWindow, GetWindowThreadProcessId, GetWindowLongA, GetWindow, GetTopWindow, MessageBoxA, CreateWindowExA, UnregisterClassA, PeekMessageA, ScreenToClient, ShowCursor, SetCursor, DestroyWindow, DefWindowProcA, BeginPaint, EndPaint, GetSystemMetrics, GetDC, ReleaseDC
- **WINMM.dll** (1): timeGetTime
- **GDI32.dll** (12): SetPixel, GetPixel, GetDeviceCaps, DeleteDC, CreateDIBSection, SelectObject, DeleteObject, GetDIBits, CreateCompatibleDC, StretchBlt, SetStretchBltMode, CreateCompatibleBitmap

## Exports (68)

- 1 0x100071e0 _BinkBufferBlit@12
- 2 0x10005cd0 _BinkBufferCheckWinPos@12
- 3 0x10007810 _BinkBufferClear@8
- 4 0x10006f90 _BinkBufferClose@4
- 5 0x10007680 _BinkBufferGetDescription@4
- 6 0x10007800 _BinkBufferGetError@0
- 7 0x10007040 _BinkBufferLock@4
- 8 0x10005f70 _BinkBufferOpen@16
- 9 0x100055b0 _BinkBufferSetDirectDraw@8
- 10 0x10007670 _BinkBufferSetHWND@8
- 11 0x10005d80 _BinkBufferSetOffset@12
- 12 0x10005cb0 _BinkBufferSetResolution@12
- 13 0x10007560 _BinkBufferSetScale@12
- 14 0x10007170 _BinkBufferUnlock@4
- 15 0x10005bd0 _BinkCheckCursor@20
- 16 0x10009940 _BinkClose@4
- 17 0x1000a7b0 _BinkCloseTrack@4
- 18 0x10008b80 _BinkCopyToBuffer@28
- 19 0x10007860 _BinkDDSurfaceType@4
- 20 0x10009240 _BinkDoFrame@4
- 21 0x10007aa0 _BinkGetError@0
- 22 0x100097a0 _BinkGetKeyFrame@12
- 23 0x10009e20 _BinkGetRealtime@12
- 24 0x10009f50 _BinkGetRects@8
- 25 0x10009c70 _BinkGetSummary@8
- 26 0x1000a7e0 _BinkGetTrackData@8
- 27 0x1000a6b0 _BinkGetTrackID@8
- 28 0x1000a690 _BinkGetTrackMaxSize@8
- 29 0x1000a670 _BinkGetTrackType@8
- 30 0x10009880 _BinkGoto@12
- 31 0x100058a0 _BinkIsSoftwareCursor@8
- 32 0x1000a660 _BinkLogoAddress@0
- 33 0x10009720 _BinkNextFrame@4
- 34 0x10007b50 _BinkOpen@8
- 35 0x1001bec0 _BinkOpenDirectSound@4
- 36 0x1001a510 _BinkOpenMiles@4
- 37 0x1000a6d0 _BinkOpenTrack@8
- 38 0x10009be0 _BinkPause@8
- 39 0x10005c80 _BinkRestoreCursor@4
- 40 0x1000a5e0 _BinkService@4
- 41 0x10007a70 _BinkSetError@4
- 42 0x10007b00 _BinkSetFrameRate@8
- 43 0x10007b20 _BinkSetIOSize@4
- 44 0x1000a630 _BinkSetPan@8
- 45 0x10007b30 _BinkSetSimulate@4
- 46 0x1000a920 _BinkSetSoundOnOff@8
- 47 0x10007ab0 _BinkSetSoundSystem@8
- 48 0x10007b40 _BinkSetSoundTrack@4
- 49 0x1000a900 _BinkSetVideoOnOff@8
- 50 0x1000a600 _BinkSetVolume@8
- 51 0x10009a10 _BinkWait@4
- 52 0x10005440 _ExpandBink@56
- 53 0x10002510 _ExpandBundleSizes@8
- 54 0x10002610 _ExpandPlane@44
- 55 0x1000ef60 _YUV_blit_16bpp@48
- 56 0x10011200 _YUV_blit_16bpp_mask@48
- 57 0x1000e1d0 _YUV_blit_24bpp@48
- 58 0x100111b0 _YUV_blit_24bpp_mask@48
- 59 0x1000bea0 _YUV_blit_32bpp@48
- 60 0x10010a60 _YUV_blit_32bpp_mask@48
- 61 0x10010720 _YUV_blit_UYVY@48
- 62 0x100112a0 _YUV_blit_UYVY_mask@48
- 63 0x1000fae0 _YUV_blit_YUY2@48
- 64 0x10011250 _YUV_blit_YUY2_mask@48
- 65 0x100107b0 _YUV_blit_YV12@52
- 66 0x1000ab20 _YUV_init@4
- 67 0x10001050 _radfree@4
- 68 0x10001000 _radmalloc@4
