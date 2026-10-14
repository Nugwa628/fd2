# ddraw.dll

- Size: 279,552 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x6056cc40 (2021-03-21 04:32:00 UTC)
- ImageBase 0x10000000, entry 0x1001a4ed (in .text)
- Linker 14.28; .NET: no; overlay 0 bytes
- PDB: `C:\Users\Nutzer\source\repos\cpp\cnc-ddraw\bin\Release\ddraw.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 4
- TLS callbacks: none
- Packer/protector heuristics: none

## Version resource

- Comments: https://cncnet.org
- CompanyName: cncnet.org
- FileDescription: DirectDraw replacement
- FileVersion: 1.4.0.2
- InternalName: ddraw
- LegalCopyright: Copyright (c) 2010-2021
- LegalTrademarks: 
- OriginalFileName: ddraw.dll
- ProductName: cnc-ddraw
- ProductVersion: 1.4.0.2
- _FileVersion: 1.4.0.2

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 193,009 | 193,024 | 6.64 | 0x60000020 |
| .rdata | 0x31000 | 46,334 | 46,592 | 5.70 | 0x40000040 |
| .data | 0x3d000 | 12,072 | 8,192 | 2.02 | 0xc0000040 |
| .detourc | 0x40000 | 13,912 | 14,336 | 4.14 | 0x40000040 |
| .detourd | 0x44000 | 36 | 512 | 0.16 | 0xc0000040 |
| .rsrc | 0x45000 | 1,352 | 1,536 | 3.79 | 0x40000040 |
| .reloc | 0x46000 | 14,264 | 14,336 | 6.64 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 241 | 40116 | 11 | ? |
| 243 | 40116 | 152 | ? |
| 242 | 40116 | 24 | ? |
| 199 | 41118 | 2 | ? |
| 261 | 29118 | 36 | VS2019 |
| 260 | 29118 | 15 | VS2019 |
| 259 | 29118 | 22 | VS2019 |
| 147 | 30729 | 11 | VS2008 SP1 |
| 1 | 0 | 216 | ? |
| 264 | 29334 | 40 | VS2019 |
| 256 | 29334 | 1 | VS2019 |
| 255 | 29334 | 1 | VS2019 |
| 151 | 0 | 1 | ? |
| 258 | 29334 | 1 | VS2019 |

## Imports

- **WINMM.dll** (3): timeBeginPeriod, timeEndPeriod, timeGetTime
- **KERNEL32.dll** (107): ResumeThread, GetLastError, CloseHandle, ExitProcess, VirtualProtect, VirtualFree, GetCurrentProcess, InterlockedCompareExchange, VirtualAlloc, SuspendThread, GetCurrentThread, GetThreadContext, FlushInstructionCache, SetThreadContext, VirtualQuery, WriteFile, LoadLibraryExA, GetProcAddress, GetModuleHandleW, FreeLibrary, LoadLibraryExW, GetModuleHandleA, CompareFileTime, SetWaitableTimer, Sleep, LoadLibraryA, GetSystemTimeAsFileTime, HeapFree, ReleaseSemaphore, GetModuleFileNameA, LoadLibraryW, InterlockedExchange, CancelWaitableTimer, CreateThread, DeleteCriticalSection, CreateSemaphoreA, InterlockedExchangeAdd, SetProcessAffinityMask, GetProcessAffinityMask, GetCurrentDirectoryA, ... (+67)
- **USER32.dll** (55): GetAsyncKeyState, CopyRect, CallWindowProcA, GetForegroundWindow, DefWindowProcA, KillTimer, SetTimer, SetFocus, GetDCEx, FillRect, SendMessageTimeoutA, EnumChildWindows, SetCapture, ReleaseCapture, LoadCursorA, PostMessageA, RedrawWindow, GetWindowTextA, AdjustWindowRect, PeekMessageA, GetWindowRect, DestroyWindow, SetWindowPos, ScreenToClient, GetSystemMetrics, WindowFromPoint, SetWindowLongA, ClientToScreen, GetClipCursor, MoveWindow, CreateWindowExA, ClipCursor, SendMessageA, SetCursor, GetClientRect, ShowCursor, SetCursorPos, GetCursorPos, EnableWindow, AdjustWindowRectEx, ... (+15)
- **GDI32.dll** (16): SelectObject, CreateDIBSection, GetDIBColorTable, CreateCompatibleDC, GdiTransparentBlt, StretchDIBits, GetStockObject, SetDIBitsToDevice, SwapBuffers, ChoosePixelFormat, SetPixelFormat, DeleteDC, DeleteObject, GetDeviceCaps, BitBlt, SetDIBColorTable

## Exports (11)

- 15 0x1003d964 AmdPowerXpressRequestHighPerformance
- 8 0x10004b50 DirectDrawCreate
- 9 0x10004b70 DirectDrawCreateClipper
- 10 0x10004bb0 DirectDrawCreateEx
- 11 0x10004bd0 DirectDrawEnumerateA
- 12 0x10004c00 DirectDrawEnumerateExA
- 13 0x10004c30 DirectDrawEnumerateExW
- 14 0x10004c60 DirectDrawEnumerateW
- 16 0x1003ff10 GameHandlesClose
- 17 0x1003d960 NvOptimusEnablement
- 18 0x1003ff14 pvBmpBits
