# Fog.dll

- Size: 212,992 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x4b95c0aa (2010-03-09 03:29:46 UTC)
- ImageBase 0x6ff50000, entry 0x6ff53162 (in .text)
- Linker 7.10; .NET: no; overlay 0 bytes
- PDB: `X:\trunk\Diablo2\Builder\PDB\Fog.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 2
- TLS callbacks: none
- Packer/protector heuristics: none

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 146,379 | 147,456 | 6.71 | 0x60000020 |
| .rdata | 0x25000 | 36,464 | 36,864 | 6.11 | 0x40000040 |
| .data | 0x2e000 | 172,704 | 12,288 | 4.00 | 0xc0000040 |
| .reloc | 0x59000 | 10,854 | 12,288 | 5.35 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 93 | 6030 | 2 | VS2003 |
| 93 | 2067 | 2 | ? |
| 93 | 2179 | 7 | ? |
| 1 | 0 | 179 | ? |
| 96 | 6030 | 9 | VS2003 |
| 15 | 6030 | 34 | VS2003 |
| 95 | 6030 | 139 | VS2003 |
| 100 | 6030 | 37 | VS2003 |
| 92 | 6030 | 1 | VS2003 |
| 90 | 6030 | 1 | VS2003 |

## Imports

- **KERNEL32.dll** (105): Sleep, IsBadCodePtr, CreateEventA, LeaveCriticalSection, CreateThread, ResetEvent, CloseHandle, GetFileAttributesA, GlobalMemoryStatus, FreeLibrary, GetTickCount, GetCurrentThread, InitializeCriticalSection, SetThreadPriority, GetProcAddress, LoadLibraryA, GetDiskFreeSpaceA, GetThreadPriority, DeleteCriticalSection, GetVersionExA, QueryPerformanceCounter, QueryPerformanceFrequency, VirtualFree, RaiseException, VirtualAlloc, EnterCriticalSection, GetComputerNameA, SystemTimeToFileTime, IsBadReadPtr, CreateDirectoryA, FindFirstFileA, FindClose, GetLocalTime, FindNextFileA, DeleteFileA, CreateFileA, SetFilePointer, WriteFile, ReadFile, GetLastError, ... (+65)
- **USER32.dll** (3): GetKeyState, GetAsyncKeyState, MessageBoxA
- **ADVAPI32.dll** (1): GetUserNameA
- **WSOCK32.dll** (24): connect, inet_ntoa, WSAStartup, inet_addr, getsockname, WSACleanup, __WSAFDIsSet, closesocket, gethostbyname, ioctlsocket, gethostname, htons, setsockopt, recv, bind, socket, WSASetLastError, listen, accept, WSAGetLastError, send, getpeername, ntohs, select
- **Storm.dll** (32): #578, #405, #494, #508, #509, #423, #495, #502, #572, #286, #425, #263, #253, #265, #289, #270, #267, #571, #304, #274, #271, #422, #506, #503, #282, #283, #284, #285, #501, #401, #403, #491

## Exports (268)

- 10168 0x6ff82f40 PERFORMANCE_ACCUMULATOR
- 10169 0x6ffa6e7c PERFORMANCE_ACCUMULATOR_INDEX
- 10256 0x6ff82f38 PERFORMANCE_FREQUENCY_TICKS_PER_MICROSEC
- 10257 0x6ff82f3c PERFORMANCE_FREQUENCY_TICKS_PER_MILLISEC
- 10258 0x6ff82f34 gcsCriticalSectionTimer
- 10259 0x6ff76798 gdwBitMasks
- 10261 0x6ff76818 gdwInvBitMasks
- 10266 0x6ff82ef8 gfTimeCriticalSections
- 10267 0x6ff82ef4 gqwCriticalSectionTimer
- 10000 0x6ff66920 
- 10001 0x6ff66900 
- 10002 0x6ff668f0 
- 10003 0x6ff66dd0 
- 10004 0x6ff66b10 
- 10005 0x6ff67020 
- 10006 0x6ff66fb0 
- 10007 0x6ff66f00 
- 10008 0x6ff66800 
- 10009 0x6ff66eb0 
- 10010 0x6ff66e90 
- 10011 0x6ff668e0 
- 10012 0x6ff66e40 
- 10013 0x6ff66a10 
- 10014 0x6ff667e0 
- 10015 0x6ff66930 
- 10016 0x6ff667c0 
- 10017 0x6ff667a0 
- 10018 0x6ff60600 
- 10019 0x6ff61860 
- 10020 0x6ff613a0 
- 10021 0x6ff60810 
- 10022 0x6ff605d0 
- 10023 0x6ff61130 
- 10024 0x6ff61100 
- 10025 0x6ff610d0 
- 10026 0x6ff61070 
- 10027 0x6ff610a0 
- 10028 0x6ff60f30 
- 10029 0x6ff69100 
- 10030 0x6ff690a0 
- 10031 0x6ff69040 
- 10032 0x6ff68950 
- 10033 0x6ff66430 
- 10034 0x6ff66470 
- 10035 0x6ff60dd0 
- 10036 0x6ff60d40 
- 10037 0x6ff60d60 
- 10038 0x6ff60cd0 
- 10039 0x6ff5fcc0 
- 10040 0x6ff68940 
- 10041 0x6ff6ccb0 
- 10042 0x6ff6cd10 
- 10043 0x6ff6ccf0 
- 10044 0x6ff6cdf0 
- 10045 0x6ff6cd50 
- 10046 0x6ff6ccc0 
- 10047 0x6ff6cda0 
- 10048 0x6ff60630 
- 10049 0x6ff60620 
- 10050 0x6ff617c0 
- 10051 0x6ff60640 
- 10052 0x6ff61160 
- 10053 0x6ff5fd60 
- 10054 0x6ff5fd50 
- 10055 0x6ff6c9e0 
- 10056 0x6ff6ca70 
- 10057 0x6ff6c970 
- 10058 0x6ff5fb90 
- 10059 0x6ff5fb80 
- 10060 0x6ff6fa90 
- 10061 0x6ff6fa60 
- 10062 0x6ff6fd70 
- 10063 0x6ff6fcd0 
- 10064 0x6ff6fbd0 
- 10065 0x6ff6fdc0 
- 10066 0x6ff6fd80 
- 10067 0x6ff6fb20 
- 10068 0x6ff6e3d0 
- 10069 0x6ff6e940 
- 10070 0x6ff6eb50 
- 10071 0x6ff6e800 
- 10072 0x6ff6e7d0 
- 10073 0x6ff6ed20 
- 10074 0x6ff6ecd0 
- 10075 0x6ff6e9a0 
- 10076 0x6ff6e360 
- 10077 0x6ff6e3b0 
- 10078 0x6ff6e380 
- 10079 0x6ff6e340 
- 10080 0x6ff6e320 
- 10081 0x6ff6e310 
- 10082 0x6ff66750 
- 10083 0x6ff66730 
- 10084 0x6ff66710 
- 10085 0x6ff680b0 
- 10086 0x6ff68090 
- 10087 0x6ff68050 
- 10088 0x6ff67ff0 
- 10089 0x6ff6df00 
- 10090 0x6ff6d7f0 
- 10091 0x6ff6dcc0 
- 10092 0x6ff6dc40 
- 10093 0x6ff6e170 
- 10094 0x6ff6e240 
- 10095 0x6ff6da20 
- 10096 0x6ff6d930 
- 10097 0x6ff6e010 
- 10098 0x6ff6d730 
- 10099 0x6ff6db40 
- 10100 0x6ff6daa0 
- 10101 0x6ff67ef0 
- 10102 0x6ff67e40 
- 10103 0x6ff67e30 
- 10104 0x6ff67e00 
- 10105 0x6ff67df0 
- 10106 0x6ff67dd0 
- 10107 0x6ff67da0 
- 10108 0x6ff67d90 
- 10109 0x6ff67d80 
- 10110 0x6ff67d60 
- 10111 0x6ff67d40 
- 10112 0x6ff67d20 
- 10113 0x6ff67c00 
- 10114 0x6ff67c40 
- 10115 0x6ff67f60 
- 10116 0x6ff67e60 
- 10117 0x6ff67bc0 
- 10118 0x6ff64090 
- 10119 0x6ff64070 
- 10120 0x6ff64040 
- 10121 0x6ff64010 
- 10122 0x6ff63f70 
- 10123 0x6ff63ed0 
- 10124 0x6ff63e40 
- 10125 0x6ff63da0 
- 10126 0x6ff641e0 
- 10127 0x6ff63d80 
- 10128 0x6ff64120 
- 10129 0x6ff640c0 
- 10130 0x6ff64100 
- 10131 0x6ff63ca0 
- 10132 0x6ff64240 
- 10133 0x6ff63c40 
- 10134 0x6ff6d190 
- 10135 0x6ff6cfa0 
- 10136 0x6ff6ce50 
- 10137 0x6ff6f8c0 
- 10138 0x6ff6f910 
- 10139 0x6ff6f8a0 
- 10140 0x6ff6f710 
- 10141 0x6ff6f640 
- 10142 0x6ff6ae90 
- 10143 0x6ff6b830 
- 10144 0x6ff6bcb0 
- 10145 0x6ff6b7e0 
- 10146 0x6ff6a9d0 
- 10147 0x6ff6b790 
- 10148 0x6ff6a9c0 
- 10149 0x6ff5f730 
- 10150 0x6ff5f6e0 
- 10151 0x6ff5e790 
- 10152 0x6ff5f3c0 
- 10153 0x6ff5f2f0 
- 10154 0x6ff5cfd0 
- 10155 0x6ff5e7e0 
- 10156 0x6ff5da60 
- 10157 0x6ff5ee00 
- 10158 0x6ff5d8c0 
- 10159 0x6ff5d940 
- 10160 0x6ff5d820 
- 10161 0x6ff5d7a0 
- 10162 0x6ff5ec10 
- 10163 0x6ff5eb60 
- 10164 0x6ff5eb10 
- 10165 0x6ff5eaf0 
- 10166 0x6ff5ea50 
- 10167 0x6ff5d1f0 
- 10170 0x6ff5d1a0 
- 10171 0x6ff5cfa0 
- 10172 0x6ff5ea20 
- 10173 0x6ff5e9f0 
- 10174 0x6ff5cff0 
- 10175 0x6ff5d360 
- 10176 0x6ff6c920 
- 10177 0x6ff5f6a0 
- 10178 0x6ff5cf70 
- 10179 0x6ff5cf90 
- 10180 0x6ff5d020 
- 10181 0x6ff5d2f0 
- 10182 0x6ff5cf60 
- 10183 0x6ff5cf50 
- 10184 0x6ff5db70 
- 10185 0x6ff5d070 
- 10186 0x6ff5d040 
- 10187 0x6ff5cf00 
- 10188 0x6ff5d270 
- 10189 0x6ff6d700 
- 10190 0x6ff6c830 
- 10191 0x6ff6c640 
- 10192 0x6ff6cc40 
- 10193 0x6ff6cca0 
- 10194 0x6ff6cc50 
- 10195 0x6ff6cc80 
- 10196 0x6ff6cc70 
- 10197 0x6ff6cc60 
- 10198 0x6ff712c0 
- 10199 0x6ff67260 
- 10200 0x6ff67140 
- 10201 0x6ff67210 
- 10202 0x6ff67130 
- 10203 0x6ff671c0 
- 10204 0x6ff672b0 
- 10205 0x6ff670f0 
- 10206 0x6ff67170 
- 10207 0x6ff62a60 
- 10208 0x6ff62770 
- 10209 0x6ff620e0 
- 10210 0x6ff61f80 
- 10211 0x6ff62720 
- 10212 0x6ff62120 
- 10213 0x6ff61f00 
- 10214 0x6ff61e40 
- 10215 0x6ff62930 
- 10216 0x6ff62610 
- 10217 0x6ff621a0 
- 10218 0x6ff6f550 
- 10219 0x6ff6efd0 
- 10220 0x6ff6efc0 
- 10221 0x6ff6f540 
- 10222 0x6ff6ef10 
- 10223 0x6ff6ee60 
- 10224 0x6ff6eda0 
- 10225 0x6ff61a40 
- 10226 0x6ff60660 
- 10227 0x6ff6f9b0 
- 10228 0x6ff5fcd0 
- 10229 0x6ff63c10 
- 10230 0x6ff63be0 
- 10231 0x6ff5fc70 
- 10232 0x6ff63b60 
- 10233 0x6ff64530 
- 10234 0x6ff68580 
- 10235 0x6ff68c40 
- 10236 0x6ff5fce0 
- 10237 0x6ff663c0 
- 10238 0x6ff68af0 
- 10239 0x6ff67bd0 
- 10240 0x6ff5fc60 
- 10241 0x6ff5fc50 
- 10242 0x6ff5fc40 
- 10243 0x6ff5fc30 
- 10244 0x6ff5edc0 
- 10245 0x6ff5ed70 
- 10246 0x6ff5ed30 
- 10247 0x6ff5ece0 
- 10248 0x6ff634e0 
- 10249 0x6ff639e0 
- 10250 0x6ff63a90 
- 10251 0x6ff61690 
- 10252 0x6ff63b70 
- 10253 0x6ff69e90 
- 10254 0x6ff6a4a0 
- 10255 0x6ff61fe0 
- 10260 0x6ff6e910 
- 10262 0x6ff66df0 
- 10263 0x6ff64d10 
- 10264 0x6ff63b50 
- 10265 0x6ff5fc20 
