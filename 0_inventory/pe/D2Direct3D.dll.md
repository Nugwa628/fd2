# D2Direct3D.dll

- Size: 110,592 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x4b95c1a3 (2010-03-09 03:33:55 UTC)
- ImageBase 0x6f880000, entry 0x6f88142b (in .text)
- Linker 7.10; .NET: no; overlay 0 bytes
- PDB: `X:\trunk\Diablo2\Builder\PDB\D2Direct3D.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 0
- TLS callbacks: none
- Packer/protector heuristics: none

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 71,661 | 73,728 | 6.64 | 0x60000020 |
| .rdata | 0x13000 | 13,275 | 16,384 | 4.82 | 0x40000040 |
| .data | 0x17000 | 116,824 | 8,192 | 2.71 | 0xc0000040 |
| .reloc | 0x34000 | 7,722 | 8,192 | 5.45 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 4 | 8447 | 11 | VC6 SP5/6 |
| 0 | 0 | 8 | ? |
| 93 | 6030 | 8 | VS2003 |
| 25 | 9210 | 2 | ? |
| 29 | 9178 | 1 | ? |
| 93 | 2067 | 2 | ? |
| 93 | 2179 | 5 | ? |
| 1 | 0 | 121 | ? |
| 96 | 6030 | 2 | VS2003 |
| 15 | 6030 | 21 | VS2003 |
| 95 | 6030 | 82 | VS2003 |
| 100 | 6030 | 15 | VS2003 |
| 92 | 6030 | 1 | VS2003 |
| 90 | 6030 | 1 | VS2003 |

## Imports

- **KERNEL32.dll** (59): HeapDestroy, HeapCreate, VirtualFree, UnhandledExceptionFilter, WriteFile, RtlUnwind, InterlockedExchange, VirtualQuery, VirtualAlloc, GetACP, GetOEMCP, GetCPInfo, LoadLibraryA, GetLocaleInfoA, TlsSetValue, GetStringTypeA, GetEnvironmentStringsW, GetStringTypeW, LCMapStringA, LCMapStringW, QueryPerformanceCounter, GetCurrentProcessId, GetSystemTimeAsFileTime, VirtualProtect, GetSystemInfo, TlsFree, GetLastError, SetLastError, TlsAlloc, HeapSize, HeapAlloc, HeapReAlloc, WideCharToMultiByte, FreeEnvironmentStringsW, GetEnvironmentStrings, FreeEnvironmentStringsA, GetModuleFileNameA, GetStartupInfoA, GetFileType, GetStdHandle, ... (+19)
- **USER32.dll** (7): PeekMessageA, DispatchMessageA, MoveWindow, DrawTextA, SetRect, wvsprintfA, TranslateMessage
- **GDI32.dll** (11): DeleteDC, CreateFontA, SetBkColor, CreateDCA, CreateBitmap, SetBkMode, DeleteObject, SelectObject, GetCharWidthA, GetPixel, SetTextColor
- **DDRAW.dll** (1): DirectDrawCreate
- **Storm.dll** (7): #268, #423, #421, #422, #281, #321, #403
- **Fog.dll** (9): #10117, #10029, #10022, gdwBitMasks, #10024, #10265, #10042, #10198, #10043
- **D2sound.dll** (1): #10061
- **D2CMP.dll** (10): #10087, #10000, #10015, #10067, #10069, #10060, #10005, #10098, #10002, #10106
- **smackw32.dll** (6): _SmackClose@4, _SmackToBuffer@28, _SmackDoFrame@4, _SmackWait@4, _SmackNextFrame@4, _SmackOpen@12
- **binkw32.dll** (9): _BinkOpenDirectSound@4, _BinkCopyToBuffer@28, _BinkNextFrame@4, _BinkWait@4, _BinkDoFrame@4, _BinkSetSoundSystem@8, _BinkClose@4, _BinkDDSurfaceType@4, _BinkOpen@8

## Exports (1)

- 10000 0x6f88caf0 
