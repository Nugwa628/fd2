# D2Multi.dll

- Size: 126,976 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x4b95c235 (2010-03-09 03:36:21 UTC)
- ImageBase 0x6f9d0000, entry 0x6f9d2076 (in .text)
- Linker 7.10; .NET: no; overlay 0 bytes
- PDB: `X:\trunk\Diablo2\Builder\PDB\D2Multi.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 0
- TLS callbacks: none
- Packer/protector heuristics: none

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 82,873 | 86,016 | 6.52 | 0x60000020 |
| .rdata | 0x16000 | 11,869 | 12,288 | 5.39 | 0x40000040 |
| .data | 0x19000 | 140,476 | 12,288 | 2.35 | 0xc0000040 |
| .reloc | 0x3c000 | 10,380 | 12,288 | 5.42 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 93 | 6030 | 12 | VS2003 |
| 93 | 2067 | 2 | ? |
| 93 | 2179 | 5 | ? |
| 1 | 0 | 248 | ? |
| 96 | 6030 | 2 | VS2003 |
| 15 | 6030 | 22 | VS2003 |
| 95 | 6030 | 90 | VS2003 |
| 100 | 6030 | 5 | VS2003 |
| 92 | 6030 | 1 | VS2003 |
| 90 | 6030 | 1 | VS2003 |

## Imports

- **KERNEL32.dll** (70): InitializeCriticalSection, LeaveCriticalSection, CreateProcessA, FileTimeToSystemTime, GetACP, MultiByteToWideChar, EnterCriticalSection, DeleteCriticalSection, CloseHandle, FileTimeToLocalFileTime, ExitProcess, GetDateFormatA, FlushFileBuffers, SetStdHandle, LoadLibraryA, GetSystemInfo, VirtualAlloc, VirtualProtect, VirtualQuery, InterlockedExchange, HeapSize, HeapReAlloc, GetSystemTimeAsFileTime, GetCurrentProcessId, QueryPerformanceCounter, GetOEMCP, RtlUnwind, GetLocaleInfoA, GetCPInfo, GetStringTypeW, GetStringTypeA, SetFilePointer, WriteFile, UnhandledExceptionFilter, VirtualFree, WaitForSingleObject, DeleteFileA, GetTempPathA, GetTempFileNameA, GetFileAttributesA, ... (+30)
- **USER32.dll** (4): SetForegroundWindow, SetRect, GetDesktopWindow, wsprintfA
- **ADVAPI32.dll** (3): RegOpenKeyExA, RegCloseKey, RegQueryValueExA
- **Storm.dll** (9): #494, #582, #506, #426, #423, #578, #501, #571, #422
- **Fog.dll** (15): #10043, #10107, #10042, gdwInvBitMasks, #10109, #10265, #10014, #10024, #10138, #10013, #10085, #10227, #10111, #10029, gdwBitMasks
- **D2Win.dll** (77): #10196, #10103, #10123, #10047, #10095, #10205, #10068, #10120, #10156, #10125, #10201, #10094, #10144, #10006, #10067, #10016, #10101, #10133, #10001, #10033, #10176, #10099, #10061, #10126, #10100, #10121, #10060, #10140, #10054, #10080, #10172, #10002, #10082, #10023, #10194, #10117, #10069, #10111, #10168, #10179, ... (+37)
- **D2sound.dll** (5): #10017, #10021, #10045, #10048, #10035
- **D2MCPClient.dll** (28): #10000, #10026, #10019, #10030, #10017, #10049, #10046, #10027, #10052, #10037, #10038, #10020, #10057, #10035, #10001, #10016, #10018, #10054, #10024, #10036, #10053, #10050, #10058, #10060, #10009, #10042, #10007, #10010
- **D2Lang.dll** (17): #10007, #10008, ?utf8ToUnicode@Unicode@@SIPAU1@PAU1@PBDH@Z, ?strlen@Unicode@@SIHPBU1@@Z, ?strstr@Unicode@@SIPAU1@PBU1@0@Z, ?strncat@Unicode@@SIPAU1@PAU1@PBU1@H@Z, #10005, ??_FUnicode@@QAEXXZ, #10003, ?toUnicode@Unicode@@SIPAU1@PAU1@PBDH@Z, ?toUtf@Unicode@@SIPADPADPBU1@H@Z, ?win2Unicode@Unicode@@SIPAU1@PAU1@PBDH@Z, ?unicode2Win@Unicode@@SIPADPADPBU1@H@Z, ?strcat@Unicode@@SIPAU1@PAU1@PBU1@@Z, ?strcpy@Unicode@@SIPAU1@PAU1@PBU1@@Z, ?sprintf@Unicode@@SAXHPAU1@PBU1@ZZ, #10009

## Exports (1)

- 1 0x6f9d7ed0 QueryInterface
