# D2Game.dll

- Size: 1,138,688 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x4b95c6b2 (2010-03-09 03:55:30 UTC)
- ImageBase 0x6fc20000, entry 0x6fc2373c (in .text)
- Linker 7.10; .NET: no; overlay 0 bytes
- PDB: `X:\trunk\Diablo2\Builder\PDB\D2Game.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 2
- TLS callbacks: none
- Packer/protector heuristics: none

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 1,010,100 | 1,011,712 | 6.63 | 0x60000020 |
| .rdata | 0xf8000 | 27,223 | 28,672 | 5.21 | 0x40000040 |
| .data | 0xff000 | 115,548 | 69,632 | 1.78 | 0xc0000040 |
| .reloc | 0x11c000 | 23,990 | 24,576 | 6.18 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 93 | 6030 | 12 | VS2003 |
| 93 | 2067 | 2 | ? |
| 93 | 2179 | 5 | ? |
| 1 | 0 | 863 | ? |
| 96 | 6030 | 10 | VS2003 |
| 15 | 6030 | 26 | VS2003 |
| 95 | 6030 | 114 | VS2003 |
| 100 | 6030 | 91 | VS2003 |
| 92 | 6030 | 1 | VS2003 |
| 90 | 6030 | 1 | VS2003 |

## Imports

- **KERNEL32.dll** (75): SetUnhandledExceptionFilter, SetEndOfFile, GetCurrentProcessId, GetSystemInfo, VirtualProtect, LoadLibraryA, IsBadWritePtr, VirtualAlloc, FlushFileBuffers, SetStdHandle, CreateFileA, SetFilePointer, VirtualQuery, InterlockedExchange, GetOEMCP, GetACP, RtlUnwind, GetStringTypeW, GetStringTypeA, GetLocaleInfoA, GetCPInfo, LCMapStringW, MultiByteToWideChar, LCMapStringA, UnhandledExceptionFilter, VirtualFree, HeapCreate, HeapDestroy, GetEnvironmentStringsW, WideCharToMultiByte, FreeEnvironmentStringsW, GetEnvironmentStrings, FreeEnvironmentStringsA, GetModuleFileNameA, GetStartupInfoA, GetFileType, GetStdHandle, SetHandleCount, HeapSize, HeapAlloc, ... (+35)
- **USER32.dll** (3): PtInRect, CopyRect, wsprintfA
- **WINMM.dll** (1): timeGetTime
- **Storm.dll** (10): #494, #405, #423, #491, #506, #571, #509, #501, #403, #401
- **Fog.dll** (30): #10147, #10143, #10030, #10137, #10086, #10050, #10043, #10042, #10115, #10142, #10120, #10119, #10213, gdwInvBitMasks, #10252, #10055, #10046, #10045, #10127, #10265, #10130, #10128, #10129, #10024, #10230, #10126, gdwBitMasks, #10229, #10118, #10029
- **D2Net.dll** (11): #10003, #10017, #10000, #10016, #10035, #10014, #10015, #10002, #10001, #10009, #10021
- **D2Common.dll** (716): #11050, #10108, #11079, #10890, #10872, #10208, #10684, #10503, #10259, #10822, #11094, #10926, #10312, #10461, #10220, #10525, #10248, #10480, #10295, #10492, #10957, #10395, #11007, #10110, #10718, #11036, #10999, #10690, #10425, #11105, #10929, #10650, #10850, #10001, #10096, #10566, #10592, #10678, #10868, #10352, ... (+676)
- **D2CMP.dll** (1): #10051
- **D2Lang.dll** (2): #10003, ?unicode2Win@Unicode@@SIPADPADPBU1@H@Z

## Exports (61)

- 10000 0x6fc4b840 
- 10001 0x6fc4b350 
- 10002 0x6fc729f0 
- 10003 0x6fc4cfd0 
- 10004 0x6fc74400 
- 10005 0x6fc58c70 
- 10006 0x6fc4d820 
- 10007 0x6fc49ad0 
- 10008 0x6fc4e1e0 
- 10009 0x6fc4b550 
- 10010 0x6fcfb860 
- 10011 0x6fc49ae0 
- 10012 0x6fc4a6d0 
- 10013 0x6fc331c0 
- 10014 0x6fc4b160 
- 10015 0x6fc72390 
- 10016 0x6fc72140 
- 10017 0x6fc4a210 
- 10018 0x6fc58d40 
- 10019 0x6fc732b0 
- 10020 0x6fcd87b0 
- 10021 0x6fc72650 
- 10022 0x6fc49b10 
- 10023 0x6fc66b10 
- 10024 0x6fc4df10 
- 10025 0x6fc4b050 
- 10026 0x6fc49800 
- 10027 0x6fc53970 
- 10028 0x6fc4ad80 
- 10029 0x6fc58bb0 
- 10030 0x6fc61f40 
- 10031 0x6fc4b9a0 
- 10032 0x6fc497c0 
- 10033 0x6fc4ae40 
- 10034 0x6fc4dec0 
- 10035 0x6fc4d3b0 
- 10036 0x6fc72240 
- 10037 0x6fc4a370 
- 10038 0x6fc4d4b0 
- 10039 0x6fc58dc0 
- 10040 0x6fc4e460 
- 10041 0x6fc6c180 
- 10042 0x6fc58bc0 
- 10043 0x6fc497f0 
- 10044 0x6fc4c570 
- 10045 0x6fc4b7c0 
- 10046 0x6fcd87c0 
- 10047 0x6fc4a9a0 
- 10048 0x6fc4a330 
- 10049 0x6fc57430 
- 10050 0x6fc49b00 
- 10051 0x6fc539e0 
- 10052 0x6fc4a1f0 
- 10053 0x6fc4b440 
- 10054 0x6fc4b900 
- 10055 0x6fc4bd70 
- 10056 0x6fc722d0 
- 10057 0x6fc72010 
- 10058 0x6fc72090 
- 10059 0x6fc4af80 
- 10060 0x6fc4b4d0 
