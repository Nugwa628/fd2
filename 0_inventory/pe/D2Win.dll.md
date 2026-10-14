# D2Win.dll

- Size: 147,456 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x4b95c21d (2010-03-09 03:35:57 UTC)
- ImageBase 0x6f8e0000, entry 0x6f8e187e (in .text)
- Linker 7.10; .NET: no; overlay 0 bytes
- PDB: `X:\trunk\Diablo2\Builder\PDB\D2Win.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 0
- TLS callbacks: none
- Packer/protector heuristics: none

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 103,073 | 106,496 | 6.62 | 0x60000020 |
| .rdata | 0x1b000 | 13,166 | 16,384 | 4.70 | 0x40000040 |
| .data | 0x1f000 | 707,672 | 8,192 | 3.95 | 0xc0000040 |
| .reloc | 0xcc000 | 9,920 | 12,288 | 4.37 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 4 | 8168 | 5 | VC6 |
| 93 | 6030 | 12 | VS2003 |
| 93 | 2067 | 2 | ? |
| 93 | 2179 | 3 | ? |
| 1 | 0 | 236 | ? |
| 96 | 6030 | 2 | VS2003 |
| 15 | 6030 | 22 | VS2003 |
| 95 | 6030 | 99 | VS2003 |
| 100 | 6030 | 21 | VS2003 |
| 92 | 6030 | 1 | VS2003 |
| 90 | 6030 | 1 | VS2003 |

## Imports

- **KERNEL32.dll** (71): LCMapStringA, VirtualQuery, InterlockedExchange, HeapSize, HeapReAlloc, RtlUnwind, InitializeCriticalSection, SetFilePointer, WriteFile, UnhandledExceptionFilter, VirtualFree, HeapCreate, GetTickCount, MultiByteToWideChar, LCMapStringW, GetCPInfo, GetLocaleInfoA, GetStringTypeA, GetStringTypeW, GetACP, GetOEMCP, VirtualAlloc, LoadLibraryA, SetStdHandle, QueryPerformanceCounter, GetCurrentProcessId, GetSystemTimeAsFileTime, VirtualProtect, GetSystemInfo, GetDriveTypeA, GetVolumeInformationA, GetLogicalDriveStringsA, CloseHandle, FlushFileBuffers, HeapDestroy, GetEnvironmentStringsW, WideCharToMultiByte, FreeEnvironmentStringsW, GetEnvironmentStrings, FreeEnvironmentStringsA, ... (+31)
- **USER32.dll** (25): IsClipboardFormatAvailable, GetClipboardData, EmptyClipboard, OpenClipboard, SetClipboardData, GetKeyState, GetMessageA, GetWindowRect, PostQuitMessage, GetClientRect, PtInRect, GetMonitorInfoA, TranslateMessage, GetWindowPlacement, SetCursorPos, wsprintfA, DispatchMessageA, SetWindowPos, GetDesktopWindow, PeekMessageA, MonitorFromWindow, DefWindowProcA, CloseClipboard, SetRect, MessageBoxA
- **Storm.dll** (18): #501, #503, #515, #416, #417, #414, #514, #415, #513, #512, #403, #401, #412, #511, #252, #571, #276, #266
- **Fog.dll** (27): #10104, #10105, #10212, #10106, #10227, #10116, #10117, #10046, #10207, #10215, #10103, #10210, #10211, #10208, #10102, gdwBitMasks, #10045, #10209, #10265, #10029, #10039, #10109, #10043, #10024, #10107, #10042, gdwInvBitMasks
- **D2sound.dll** (8): #10045, #10070, #10004, #10011, #10030, #10024, #10035, #10013
- **D2CMP.dll** (14): #10104, #10068, #10019, #10060, #10086, #10000, #10002, #10069, #10049, #10005, #10006, #10070, #10065, #10021
- **D2Lang.dll** (16): ?unicode2Win@Unicode@@SIPADPADPBU1@H@Z, ?strcat@Unicode@@SIPAU1@PAU1@PBU1@@Z, ??_FUnicode@@QAEXXZ, #10003, ?win2Unicode@Unicode@@SIPAU1@PAU1@PBDH@Z, ?strcpy@Unicode@@SIPAU1@PAU1@PBU1@@Z, ?strlen@Unicode@@SIHPBU1@@Z, ?strnicmp@Unicode@@SIHPBU1@0I@Z, ?strncmp@Unicode@@SIHPBU1@0I@Z, ?toUnicode@Unicode@@SIPAU1@PAU1@PBDH@Z, ?isLineBreak@Unicode@@SIHPBU1@I@Z, #10009, ?isWhitespace@Unicode@@QBEHXZ, ?sprintf@Unicode@@SAXHPAU1@PBU1@ZZ, ?utf8ToUnicode@Unicode@@SIPAU1@PAU1@PBDH@Z, ?strncpy@Unicode@@SIPAU1@PAU1@PBU1@H@Z
- **D2gfx.dll** (38): #10059, #10025, #10019, #10005, #10026, #10015, #10044, #10063, #10051, #10040, #10021, #10041, #10067, #10072, #10065, #10029, #10086, #10060, ?rInitialWindowRect@@3UtagRECT@@A, #10043, #10085, #10080, #10031, #10045, #10048, #10017, #10014, #10074, #10032, #10078, #10024, #10000, #10052, #10035, #10079, #10061, #10022, #10011
- **ijl11.dll** (3): #2, #3, #5

## Exports (207)

- 10000 0x6f8e93c0 
- 10001 0x6f8f70b0 
- 10002 0x6f8f14a0 
- 10003 0x6f8ef860 
- 10004 0x6f8f2de0 
- 10005 0x6f8ea890 
- 10006 0x6f8f7b30 
- 10007 0x6f8eb480 
- 10008 0x6f8f1760 
- 10009 0x6f8ead30 
- 10010 0x6f8f3930 
- 10011 0x6f8f16a0 
- 10012 0x6f8f6d70 
- 10013 0x6f8f2e90 
- 10014 0x6f8f8980 
- 10015 0x6f8e80c0 
- 10016 0x6f8ea4f0 
- 10017 0x6f8f1190 
- 10018 0x6f8eb450 
- 10019 0x6f8e8740 
- 10020 0x6f8e9730 
- 10021 0x6f8f3720 
- 10022 0x6f8e9740 
- 10023 0x6f8eb370 
- 10024 0x6f8f87e0 
- 10025 0x6f8f13f0 
- 10026 0x6f8f3110 
- 10027 0x6f8e8290 
- 10028 0x6f8f2b20 
- 10029 0x6f8f10b0 
- 10030 0x6f8e82d0 
- 10031 0x6f8f70a0 
- 10032 0x6f8f7c50 
- 10033 0x6f8e8170 
- 10034 0x6f8f7a80 
- 10035 0x6f8e85f0 
- 10036 0x6f8e8110 
- 10037 0x6f8e88a0 
- 10038 0x6f8e9ff0 
- 10039 0x6f8f6770 
- 10040 0x6f8f7090 
- 10041 0x6f8e8b00 
- 10042 0x6f8f4df0 
- 10043 0x6f8eed40 
- 10044 0x6f8f7060 
- 10045 0x6f8eec70 
- 10046 0x6f8f6720 
- 10047 0x6f8f7ad0 
- 10048 0x6f8f59e0 
- 10049 0x6f8ef790 
- 10050 0x6f8f8490 
- 10051 0x6f8f2720 
- 10052 0x6f8f7c90 
- 10053 0x6f8f7a90 
- 10054 0x6f8ec4a0 
- 10055 0x6f8f2080 
- 10056 0x6f8f0c40 
- 10057 0x6f8f61b0 
- 10058 0x6f8f0150 
- 10059 0x6f8f2410 
- 10060 0x6f8f1450 
- 10061 0x6f8e8310 
- 10062 0x6f8eedf0 
- 10063 0x6f8eeba0 
- 10064 0x6f8f5450 
- 10065 0x6f8ef2d0 
- 10066 0x6f8f2200 
- 10067 0x6f8e8350 
- 10068 0x6f8efd70 
- 10069 0x6f8f64a0 
- 10070 0x6f8f2730 
- 10071 0x6f8ef750 
- 10072 0x6f8eb4b0 
- 10073 0x6f8ea6d0 
- 10074 0x6f8eabb0 
- 10075 0x6f8eb240 
- 10076 0x6f8f6dd0 
- 10077 0x6f8eac50 
- 10078 0x6f8f0c50 
- 10079 0x6f8e8ab0 
- 10080 0x6f8ec770 
- 10081 0x6f8eabe0 
- 10082 0x6f8eb650 
- 10083 0x6f8f1e60 
- 10084 0x6f8ea050 
- 10085 0x6f8f18f0 
- 10086 0x6f8eaa20 
- 10087 0x6f8e8020 
- 10088 0x6f8ea340 
- 10089 0x6f8e8690 
- 10090 0x6f8f1240 
- 10091 0x6f8f0700 
- 10092 0x6f8eed30 
- 10093 0x6f8ec410 
- 10094 0x6f8e8400 
- 10095 0x6f8e8070 
- 10096 0x6f8f2f60 
- 10097 0x6f8ef830 
- 10098 0x6f8f8560 
- 10099 0x6f8f7b10 
- 10100 0x6f8f8400 
- 10101 0x6f8eb4c0 
- 10102 0x6f8f78b0 
- 10103 0x6f8e9200 
- 10104 0x6f8f6580 
- 10105 0x6f8f3770 
- 10106 0x6f8e8450 
- 10107 0x6f8f2ba0 
- 10108 0x6f8f7920 
- 10109 0x6f8e84f0 
- 10110 0x6f8f33a0 
- 10111 0x6f8ea7a0 
- 10112 0x6f8f0030 
- 10113 0x6f8ea690 
- 10114 0x6f8e8230 
- 10115 0x6f8f7b00 
- 10116 0x6f8f1400 
- 10117 0x6f8e8550 
- 10118 0x6f8f0600 
- 10119 0x6f8f0ed0 
- 10120 0x6f8e8a30 
- 10121 0x6f8eb420 
- 10122 0x6f8ef6e0 
- 10123 0x6f8ec7c0 
- 10124 0x6f8e8640 
- 10125 0x6f8e9290 
- 10126 0x6f8ea6f0 
- 10127 0x6f8f03d0 
- 10128 0x6f8ef240 
- 10129 0x6f8f1340 
- 10130 0x6f8ea0a0 
- 10131 0x6f8f78e0 
- 10132 0x6f8ebb50 
- 10133 0x6f8e7f40 
- 10134 0x6f8f08a0 
- 10135 0x6f8e8830 
- 10136 0x6f8f3590 
- 10137 0x6f8e9f30 
- 10138 0x6f8f17a0 
- 10139 0x6f8ea6b0 
- 10140 0x6f8eb3e0 
- 10141 0x6f8f7c00 
- 10142 0x6f8f7d40 
- 10143 0x6f8f7c70 
- 10144 0x6f8f8060 
- 10145 0x6f8f66f0 
- 10146 0x6f8f3640 
- 10147 0x6f8f7950 
- 10148 0x6f8f7c40 
- 10149 0x6f8f70e0 
- 10150 0x6f8f2fa0 
- 10151 0x6f8f0900 
- 10152 0x6f8f35c0 
- 10153 0x6f8eeda0 
- 10154 0x6f8ee3c0 
- 10155 0x6f8ef8a0 
- 10156 0x6f8f7890 
- 10157 0x6f8eb160 
- 10158 0x6f8ea500 
- 10159 0x6f8f1880 
- 10160 0x6f8e86e0 
- 10161 0x6f8f00b0 
- 10162 0x6f8f1c30 
- 10163 0x6f8eacf0 
- 10164 0x6f8eee50 
- 10165 0x6f8ea470 
- 10166 0x6f8f36a0 
- 10167 0x6f8e97c0 
- 10168 0x6f8ee240 
- 10169 0x6f8ea250 
- 10170 0x6f8f3970 
- 10171 0x6f8f20c0 
- 10172 0x6f8ec720 
- 10173 0x6f8ea820 
- 10174 0x6f8f0070 
- 10175 0x6f8f6cf0 
- 10176 0x6f8f7b60 
- 10177 0x6f8f2700 
- 10178 0x6f8e8500 
- 10179 0x6f8eb3a0 
- 10180 0x6f8ea710 
- 10181 0x6f8ef6b0 
- 10182 0x6f8f0110 
- 10183 0x6f8ebe80 
- 10184 0x6f8f2fe0 
- 10185 0x6f8f4e70 
- 10186 0x6f8e8a50 
- 10187 0x6f8f7eb0 
- 10188 0x6f8eac80 
- 10189 0x6f8eacb0 
- 10190 0x6f8eed70 
- 10191 0x6f8f6b90 
- 10192 0x6f8ef7e0 
- 10193 0x6f8ef5e0 
- 10194 0x6f8eb340 
- 10195 0x6f8e85a0 
- 10196 0x6f8f7070 
- 10197 0x6f8e9ee0 
- 10198 0x6f8f15a0 
- 10199 0x6f8f7af0 
- 10200 0x6f8ebe00 
- 10201 0x6f8f6470 
- 10202 0x6f8f36e0 
- 10203 0x6f8f7b50 
- 10204 0x6f8e9c00 
- 10205 0x6f8ebd00 
- 10206 0x6f8f1010 
