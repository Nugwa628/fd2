# D2Lang.dll

- Size: 77,824 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x4b95c108 (2010-03-09 03:31:20 UTC)
- ImageBase 0x6fc00000, entry 0x6fc01a71 (in .text)
- Linker 7.10; .NET: no; overlay 0 bytes
- PDB: `X:\trunk\Diablo2\Builder\PDB\D2Lang.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 0
- TLS callbacks: none
- Packer/protector heuristics: none

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 43,087 | 45,056 | 6.59 | 0x60000020 |
| .rdata | 0xc000 | 9,474 | 12,288 | 4.54 | 0x40000040 |
| .data | 0xf000 | 11,836 | 8,192 | 3.05 | 0xc0000040 |
| .reloc | 0x12000 | 4,524 | 8,192 | 3.13 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 93 | 6030 | 4 | VS2003 |
| 93 | 2179 | 5 | ? |
| 1 | 0 | 102 | ? |
| 96 | 6030 | 2 | VS2003 |
| 15 | 6030 | 21 | VS2003 |
| 95 | 6030 | 88 | VS2003 |
| 100 | 6030 | 9 | VS2003 |
| 92 | 6030 | 1 | VS2003 |
| 90 | 6030 | 1 | VS2003 |

## Imports

- **KERNEL32.dll** (66): TlsGetValue, DeleteCriticalSection, LeaveCriticalSection, EnterCriticalSection, HeapFree, HeapAlloc, SetHandleCount, GetStdHandle, GetFileType, GetStartupInfoA, GetModuleFileNameA, FreeEnvironmentStringsA, GetEnvironmentStrings, FreeEnvironmentStringsW, WideCharToMultiByte, GetEnvironmentStringsW, HeapDestroy, HeapCreate, VirtualFree, UnhandledExceptionFilter, WriteFile, GetStringTypeA, MultiByteToWideChar, GetStringTypeW, GetCPInfo, GetLocaleInfoA, TlsSetValue, RtlUnwind, GetACP, GetOEMCP, InitializeCriticalSection, HeapReAlloc, HeapSize, InterlockedExchange, VirtualQuery, QueryPerformanceCounter, GetTickCount, GetCurrentProcessId, GetSystemTimeAsFileTime, LCMapStringA, ... (+26)
- **ADVAPI32.dll** (3): RegQueryValueExA, RegCloseKey, RegOpenKeyExA
- **Storm.dll** (9): #904, #403, #401, #266, #276, #503, #571, #501, #252
- **Fog.dll** (10): #10102, #10104, #10029, #10043, #10265, #10024, #10103, #10106, #10042, #10105

## Exports (63)

- 10014 0x6fc01000 ??0Unicode@@QAE@G@Z
- 10015 0x6fc011b0 ??4Unicode@@QAEAAU0@ABU0@@Z
- 10016 0x6fc01010 ??BUnicode@@QBEGXZ
- 10017 0x6fc011c0 ??_FUnicode@@QAEXXZ
- 10018 0x6fc08740 ?Personalize@Unicode@@SIXPAU1@PBU1@1HW4ELANGUAGE@@@Z
- 10019 0x6fc100e8 ?_toLowerTable@Unicode@@0PAGA
- 10020 0x6fc0fee8 ?_toUpperTable@Unicode@@0PAGA
- 10021 0x6fc010e0 ?compare@Unicode@@QBEHU1@@Z
- 10022 0x6fc01120 ?compare@Unicode@@SIHU1@0@Z
- 10023 0x6fc081f0 ?directionality@Unicode@@QAE?AW4Direction@1@XZ
- 10024 0x6fc01070 ?isASCII@Unicode@@QBEHXZ
- 10025 0x6fc01080 ?isAlpha@Unicode@@QBEHXZ
- 10026 0x6fc082c0 ?isLeftToRight@Unicode@@QBEHXZ
- 10027 0x6fc08630 ?isLineBreak@Unicode@@SIHPBU1@I@Z
- 10028 0x6fc01040 ?isNewline@Unicode@@QBEHXZ
- 10029 0x6fc01050 ?isPipe@Unicode@@QBEHXZ
- 10030 0x6fc01020 ?isWhitespace@Unicode@@QBEHXZ
- 10031 0x6fc01160 ?isWordEnd@Unicode@@SIHPBU1@I@Z
- 10032 0x6fc0a9d0 ?loadSysMap@Unicode@@SIHPAUHD2ARCHIVE__@@PBD@Z
- 10033 0x6fc0b250 ?sprintf@Unicode@@SAXHPAU1@PBU1@ZZ
- 10034 0x6fc0afe0 ?strcat@Unicode@@SIPAU1@PAU1@PBU1@@Z
- 10035 0x6fc0b170 ?strchr@Unicode@@SIPAU1@PBU1@U1@@Z
- 10036 0x6fc0b200 ?strcmp@Unicode@@SIHPBU1@0@Z
- 10037 0x6fc011a0 ?strcoll@Unicode@@SIHPBU1@0@Z
- 10038 0x6fc0afc0 ?strcpy@Unicode@@SIPAU1@PAU1@PBU1@@Z
- 10039 0x6fc0b610 ?stricmp@Unicode@@SIHPBU1@0@Z
- 10040 0x6fc0b0b0 ?strlen@Unicode@@SIHPBU1@@Z
- 10041 0x6fc0b120 ?strncat@Unicode@@SIPAU1@PAU1@PBU1@H@Z
- 10042 0x6fc0b1b0 ?strncmp@Unicode@@SIHPBU1@0I@Z
- 10043 0x6fc0b7a0 ?strncoll@Unicode@@SIHPBU1@0H@Z
- 10044 0x6fc0b0d0 ?strncpy@Unicode@@SIPAU1@PAU1@PBU1@H@Z
- 10045 0x6fc0b560 ?strnicmp@Unicode@@SIHPBU1@0I@Z
- 10046 0x6fc0b020 ?strstr@Unicode@@SIPAU1@PBU1@0@Z
- 10047 0x6fc0b680 ?strstri@Unicode@@SIPAU1@PBU1@0@Z
- 10048 0x6fc0af20 ?sys2Unicode@Unicode@@SIPAU1@PAU1@PBDH@Z
- 10049 0x6fc0ad90 ?sysWidth@Unicode@@SIKPBU1@H@Z
- 10050 0x6fc010c0 ?toLower@Unicode@@QBE?AU1@XZ
- 10051 0x6fc08cd0 ?toUnicode@Unicode@@SIPAU1@PAU1@PBDH@Z
- 10052 0x6fc010a0 ?toUpper@Unicode@@QBE?AU1@XZ
- 10053 0x6fc08e80 ?toUtf@Unicode@@SIPADPADPBU1@H@Z
- 10054 0x6fc0ae40 ?unicode2Sys@Unicode@@SIPADPADPBU1@H@Z
- 10055 0x6fc082f0 ?unicode2Win@Unicode@@SIPADPADPBU1@H@Z
- 10056 0x6fc0acf0 ?unicodeWidth@Unicode@@SIKPBDH@Z
- 10057 0x6fc08d70 ?unicodenwidth@Unicode@@SIIPBDH@Z
- 10058 0x6fc0ac40 ?unloadSysMap@Unicode@@SIXXZ
- 10059 0x6fc08370 ?utf8ToUnicode@Unicode@@SIPAU1@PAU1@PBDH@Z
- 10060 0x6fc08e30 ?utfnwidth@Unicode@@SIIPBU1@H@Z
- 10061 0x6fc08ed0 ?utfwidth@Unicode@@QBEHXZ
- 10062 0x6fc08320 ?win2Unicode@Unicode@@SIPAU1@PAU1@PBDH@Z
- 10000 0x6fc08fe0 
- 10001 0x6fc092f0 
- 10002 0x6fc09bc0 
- 10003 0x6fc09450 
- 10004 0x6fc09d00 
- 10005 0x6fc09e20 
- 10006 0x6fc09a80 
- 10007 0x6fc09790 
- 10008 0x6fc0a130 
- 10009 0x6fc09290 
- 10010 0x6fc0a7b0 
- 10011 0x6fc0a8a0 
- 10012 0x6fc09940 
- 10013 0x6fc09180 
