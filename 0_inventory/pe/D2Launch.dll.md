# D2Launch.dll

- Size: 167,936 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x4b95c258 (2010-03-09 03:36:56 UTC)
- ImageBase 0x6fa40000, entry 0x6fa41a87 (in .text)
- Linker 7.10; .NET: no; overlay 0 bytes
- PDB: `X:\trunk\Diablo2\Builder\PDB\D2Launch.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 0
- TLS callbacks: none
- Packer/protector heuristics: none

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 107,553 | 110,592 | 6.49 | 0x60000020 |
| .rdata | 0x1c000 | 15,118 | 16,384 | 5.23 | 0x40000040 |
| .data | 0x20000 | 32,992 | 20,480 | 2.66 | 0xc0000040 |
| .reloc | 0x29000 | 13,900 | 16,384 | 5.76 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 93 | 6030 | 18 | VS2003 |
| 93 | 2067 | 2 | ? |
| 93 | 2179 | 3 | ? |
| 1 | 0 | 288 | ? |
| 96 | 6030 | 2 | VS2003 |
| 15 | 6030 | 21 | VS2003 |
| 95 | 6030 | 103 | VS2003 |
| 100 | 6030 | 8 | VS2003 |
| 92 | 6030 | 1 | VS2003 |
| 90 | 6030 | 1 | VS2003 |

## Imports

- **KERNEL32.dll** (74): GetProcAddress, LoadLibraryA, OutputDebugStringA, ExitProcess, GetModuleHandleA, GetSystemTimeAsFileTime, GetLastError, GetCommandLineA, GetVersionExA, DeleteCriticalSection, LeaveCriticalSection, LCMapStringW, LCMapStringA, GetStringTypeW, GetStringTypeA, GetLocaleInfoA, SetEndOfFile, GetCurrentProcessId, QueryPerformanceCounter, GetCPInfo, GetOEMCP, GetACP, FlushFileBuffers, SetStdHandle, CreateFileA, InterlockedExchange, HeapSize, HeapReAlloc, RtlUnwind, TerminateProcess, GetCurrentProcess, DeleteFileA, FindNextFileA, GetFileAttributesA, GetDiskFreeSpaceA, FindClose, FindFirstFileA, Sleep, GetTickCount, WaitForSingleObject, ... (+34)
- **USER32.dll** (6): MessageBoxA, wsprintfA, TranslateMessage, PeekMessageA, GetCursorPos, DispatchMessageA
- **Storm.dll** (19): #509, #508, #426, #502, #571, #422, #503, #401, #403, #423, #506, #578, #491, #253, #582, #501, #425, #268, #494
- **Fog.dll** (27): #10227, #10109, #10110, #10043, #10024, #10102, #10029, #10107, #10042, #10015, #10191, #10115, #10013, #10108, #10265, #10103, #10105, #10114, #10229, #10112, #10086, #10111, #10233, #10085, gdwInvBitMasks, #10104, gdwBitMasks
- **D2Win.dll** (81): #10089, #10071, #10140, #10093, #10054, #10182, #10205, #10035, #10080, #10172, #10195, #10124, #10193, #10160, #10194, #10114, #10133, #10179, #10109, #10154, #10032, #10000, #10091, #10173, #10069, #10037, #10014, #10174, #10184, #10202, #10146, #10134, #10044, #10167, #10079, #10106, #10151, #10196, #10103, #10098, ... (+41)
- **D2sound.dll** (11): #10035, #10014, #10017, #10023, #10019, #10070, #10021, #10045, #10048, #10061, #10036
- **D2Net.dll** (4): #10026, #10019, #10034, #10020
- **D2MCPClient.dll** (21): #10034, #10031, #10056, #10061, #10054, #10007, #10019, #10012, #10023, #10049, #10036, #10045, #10050, #10037, #10013, #10028, #10035, #10018, #10011, #10062, #10039
- **D2Lang.dll** (21): ?utf8ToUnicode@Unicode@@SIPAU1@PAU1@PBDH@Z, ?strcmp@Unicode@@SIHPBU1@0@Z, ?isAlpha@Unicode@@QBEHXZ, ??_FUnicode@@QAEXXZ, #10003, #10009, ?isLineBreak@Unicode@@SIHPBU1@I@Z, ?toUnicode@Unicode@@SIPAU1@PAU1@PBDH@Z, ?toUtf@Unicode@@SIPADPADPBU1@H@Z, ?win2Unicode@Unicode@@SIPAU1@PAU1@PBDH@Z, ?unicode2Win@Unicode@@SIPADPADPBU1@H@Z, ?strcat@Unicode@@SIPAU1@PAU1@PBU1@@Z, ?strcpy@Unicode@@SIPAU1@PAU1@PBU1@@Z, ?stricmp@Unicode@@SIHPBU1@0@Z, ?sprintf@Unicode@@SAXHPAU1@PBU1@ZZ, ?strlen@Unicode@@SIHPBU1@@Z, ?strncpy@Unicode@@SIPAU1@PAU1@PBU1@H@Z, ?_toUpperTable@Unicode@@0PAGA, #10004, #10005, #10008
- **D2gfx.dll** (2): #10067, #10027
- **Bnclient.dll** (4): ?SaveAndUnload@BNGatewayAccess@@QAGXXZ, ?SetCurGateway@BNGatewayAccess@@QAGXH@Z, ?Name@BNGatewayAccess@@QAGPADH@Z, ?Realm@BNGatewayAccess@@QAGPADH@Z

## Exports (1)

- 1 0x6fa49b60 QueryInterface
