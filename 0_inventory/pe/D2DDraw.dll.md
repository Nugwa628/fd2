# D2DDraw.dll

- Size: 69,632 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x4b95c17d (2010-03-09 03:33:17 UTC)
- ImageBase 0x6f8c0000, entry 0x6f8c142b (in .text)
- Linker 7.10; .NET: no; overlay 0 bytes
- PDB: `X:\trunk\Diablo2\Builder\PDB\D2DDraw.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 0
- TLS callbacks: none
- Packer/protector heuristics: none

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 40,268 | 40,960 | 6.74 | 0x60000020 |
| .rdata | 0xb000 | 10,536 | 12,288 | 4.91 | 0x40000040 |
| .data | 0xe000 | 9,752 | 4,096 | 3.80 | 0xc0000040 |
| .reloc | 0x11000 | 5,138 | 8,192 | 3.63 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 4 | 8447 | 11 | VC6 SP5/6 |
| 0 | 0 | 8 | ? |
| 93 | 6030 | 8 | VS2003 |
| 25 | 9210 | 2 | ? |
| 93 | 2067 | 2 | ? |
| 93 | 2179 | 5 | ? |
| 1 | 0 | 122 | ? |
| 96 | 6030 | 2 | VS2003 |
| 15 | 6030 | 20 | VS2003 |
| 95 | 6030 | 82 | VS2003 |
| 100 | 6030 | 9 | VS2003 |
| 92 | 6030 | 1 | VS2003 |
| 90 | 6030 | 1 | VS2003 |

## Imports

- **KERNEL32.dll** (59): VirtualFree, UnhandledExceptionFilter, WriteFile, VirtualAlloc, RtlUnwind, InterlockedExchange, VirtualQuery, GetACP, GetOEMCP, GetCPInfo, LoadLibraryA, GetLocaleInfoA, HeapFree, GetStringTypeA, HeapCreate, GetStringTypeW, LCMapStringA, LCMapStringW, QueryPerformanceCounter, GetCurrentProcessId, GetSystemTimeAsFileTime, VirtualProtect, GetSystemInfo, TlsGetValue, TlsSetValue, TlsFree, GetLastError, SetLastError, TlsAlloc, HeapDestroy, GetEnvironmentStringsW, WideCharToMultiByte, FreeEnvironmentStringsW, GetEnvironmentStrings, FreeEnvironmentStringsA, GetModuleFileNameA, GetStartupInfoA, GetFileType, GetStdHandle, MultiByteToWideChar, ... (+19)
- **USER32.dll** (6): PeekMessageA, DispatchMessageA, DrawTextA, SetRect, wvsprintfA, TranslateMessage
- **GDI32.dll** (11): DeleteDC, CreateFontA, SetBkColor, CreateDCA, CreateBitmap, SetBkMode, DeleteObject, SelectObject, GetCharWidthA, GetPixel, SetTextColor
- **DDRAW.dll** (1): DirectDrawCreate
- **Storm.dll** (7): #268, #423, #421, #422, #281, #321, #403
- **Fog.dll** (9): #10042, #10117, #10043, #10198, #10022, gdwBitMasks, #10024, #10265, #10029
- **D2sound.dll** (1): #10061
- **D2CMP.dll** (11): #10106, #10000, #10031, #10015, #10080, #10072, #10069, #10060, #10005, #10002, #10049
- **smackw32.dll** (6): _SmackClose@4, _SmackToBuffer@28, _SmackDoFrame@4, _SmackOpen@12, _SmackNextFrame@4, _SmackWait@4
- **binkw32.dll** (9): _BinkOpenDirectSound@4, _BinkCopyToBuffer@28, _BinkNextFrame@4, _BinkWait@4, _BinkDoFrame@4, _BinkSetSoundSystem@8, _BinkClose@4, _BinkDDSurfaceType@4, _BinkOpen@8

## Exports (1)

- 10000 0x6f8c9320 
