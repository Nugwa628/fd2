# BH.dll

- Size: 1,423,360 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x6a049baa (2026-05-13 15:41:30 UTC)
- ImageBase 0x10000000, entry 0x100d3808 (in .text)
- Linker 14.39; .NET: no; overlay 0 bytes
- PDB: `C:\projects\Project-Diablo-2\scripts\build-bh-release\BH.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 207
- TLS callbacks: none
- Packer/protector heuristics: none

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 1,109,437 | 1,109,504 | 6.48 | 0x60000020 |
| .rdata | 0x110000 | 213,878 | 214,016 | 5.13 | 0x40000040 |
| .data | 0x145000 | 38,316 | 29,696 | 3.59 | 0xc0000040 |
| .fptable | 0x14f000 | 128 | 512 | -0.00 | 0xc0000040 |
| .rsrc | 0x150000 | 480 | 512 | 4.71 | 0x40000040 |
| .reloc | 0x151000 | 67,796 | 68,096 | 6.64 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 261 | 33145 | 184 | VS2022 |
| 259 | 33145 | 28 | VS2022 |
| 260 | 33145 | 28 | VS2022 |
| 260 | 33218 | 15 | VS2022 |
| 259 | 33218 | 25 | VS2022 |
| 261 | 33218 | 127 | VS2022 |
| 257 | 33145 | 9 | VS2022 |
| 1 | 0 | 189 | ? |
| 265 | 33523 | 41 | VS2022 |
| 256 | 33523 | 1 | VS2022 |
| 255 | 33523 | 1 | VS2022 |
| 258 | 33523 | 1 | VS2022 |

## Imports

- **KERNEL32.dll** (111): EnterCriticalSection, LeaveCriticalSection, InitializeCriticalSection, DeleteCriticalSection, GetModuleFileNameA, GetModuleHandleA, CreateThread, GetProcAddress, ReadFile, MultiByteToWideChar, LoadLibraryA, CloseHandle, WideCharToMultiByte, GetTickCount, Sleep, GlobalAlloc, GlobalLock, GlobalUnlock, IsBadReadPtr, VirtualProtect, GetCurrentProcess, ReadProcessMemory, CreateDirectoryA, WaitForSingleObject, SetEvent, CreateEventA, SetEndOfFile, HeapSize, CreateFileW, SetStdHandle, GetProcessHeap, SetEnvironmentVariableW, FreeEnvironmentStringsW, GetEnvironmentStringsW, GetCommandLineW, GetCommandLineA, GetOEMCP, GetACP, IsValidCodePage, FindNextFileW, ... (+71)
- **SHLWAPI.dll** (1): PathRemoveFileSpecA
- **USER32.dll** (13): MessageBoxA, PostMessageW, IsClipboardFormatAvailable, GetKeyState, OpenClipboard, CloseClipboard, EmptyClipboard, GetClipboardData, SetClipboardData, GetAsyncKeyState, CallWindowProcA, SetWindowLongA, GetWindowLongA
- **VERSION.dll** (3): VerQueryValueA, GetFileVersionInfoA, GetFileVersionInfoSizeA

## Exports (9)

- 3 0x10047d60 BHIsReady
- 8 0x10048130 BHShowPlayersGear
- 9 0x100462e0 Initialize
- 1 0x10047d70 _BHGetConfig@4
- 2 0x10047fc0 _BHInteract@4
- 4 0x10098c80 _BHOnDamagePropertyBuild@16
- 5 0x100974a0 _BHOnProperties@4
- 6 0x10099080 _BHOnPropertyBuild@16
- 7 0x10047e80 _BHSetConfig@8
