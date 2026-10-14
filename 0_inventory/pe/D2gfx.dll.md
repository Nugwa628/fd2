# D2gfx.dll

- Size: 77,824 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x4b95c154 (2010-03-09 03:32:36 UTC)
- ImageBase 0x6fa80000, entry 0x6fa81807 (in .text)
- Linker 7.10; .NET: no; overlay 0 bytes
- PDB: `X:\trunk\Diablo2\Builder\PDB\D2gfx.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 2
- TLS callbacks: none
- Packer/protector heuristics: none

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 48,203 | 49,152 | 6.73 | 0x60000020 |
| .rdata | 0xd000 | 9,018 | 12,288 | 4.16 | 0x40000040 |
| .data | 0x10000 | 59,964 | 4,096 | 2.33 | 0xc0000040 |
| .reloc | 0x1f000 | 5,868 | 8,192 | 4.06 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 93 | 6030 | 4 | VS2003 |
| 25 | 9210 | 2 | ? |
| 93 | 2067 | 2 | ? |
| 93 | 2179 | 5 | ? |
| 1 | 0 | 117 | ? |
| 96 | 6030 | 8 | VS2003 |
| 15 | 6030 | 21 | VS2003 |
| 95 | 6030 | 88 | VS2003 |
| 100 | 6030 | 13 | VS2003 |
| 92 | 6030 | 1 | VS2003 |
| 90 | 6030 | 1 | VS2003 |

## Imports

- **KERNEL32.dll** (66): GetVersionExA, DeleteCriticalSection, LeaveCriticalSection, EnterCriticalSection, HeapReAlloc, HeapAlloc, HeapSize, TlsAlloc, SetLastError, TlsFree, TlsSetValue, TlsGetValue, HeapFree, SetHandleCount, GetStdHandle, GetFileType, GetStartupInfoA, GetModuleFileNameA, FreeEnvironmentStringsA, GetEnvironmentStrings, FreeEnvironmentStringsW, WideCharToMultiByte, GetEnvironmentStringsW, HeapDestroy, HeapCreate, VirtualFree, UnhandledExceptionFilter, WriteFile, InitializeCriticalSection, RtlUnwind, InterlockedExchange, VirtualQuery, GetCommandLineA, VirtualAlloc, IsBadWritePtr, GetACP, GetOEMCP, GetCPInfo, SetStdHandle, QueryPerformanceCounter, ... (+26)
- **USER32.dll** (24): GetWindowRect, DestroyWindow, ShowWindow, AdjustWindowRectEx, SystemParametersInfoA, IsIconic, GetClientRect, SetFocus, ShowCursor, GetWindowPlacement, CreateWindowExA, GetSystemMetrics, UpdateWindow, FindWindowA, ChangeDisplaySettingsA, wsprintfA, MessageBoxA, UnregisterClassA, wvsprintfA, GetDesktopWindow, LoadImageA, LoadCursorA, RegisterClassA, SetWindowPos
- **GDI32.dll** (2): GetStockObject, GdiSetBatchLimit
- **SHELL32.dll** (1): SHAppBarMessage
- **Storm.dll** (4): #403, #401, #423, #501
- **Fog.dll** (6): #10233, #10028, #10024, #10265, #10227, #10029

## Exports (88)

- 10087 0x6fa9d470 ?rInitialWindowRect@@3UtagRECT@@A
- 10000 0x6fa87e20 
- 10001 0x6fa8bb50 
- 10002 0x6fa8b730 
- 10003 0x6fa87cc0 
- 10004 0x6fa8b330 
- 10005 0x6fa888c0 
- 10006 0x6fa8b190 
- 10007 0x6fa8b1c0 
- 10008 0x6fa8b8f0 
- 10009 0x6fa8b870 
- 10010 0x6fa8b9c0 
- 10011 0x6fa8afd0 
- 10012 0x6fa8b920 
- 10013 0x6fa8b290 
- 10014 0x6fa8ba30 
- 10015 0x6fa8b580 
- 10016 0x6fa8b0b0 
- 10017 0x6fa8adc0 
- 10018 0x6fa8b350 
- 10019 0x6fa8b050 
- 10020 0x6fa8b900 
- 10021 0x6fa8b9a0 
- 10022 0x6fa8b100 
- 10023 0x6fa8b7a0 
- 10024 0x6fa87de0 
- 10025 0x6fa87fd0 
- 10026 0x6fa882d0 
- 10027 0x6fa87e90 
- 10028 0x6fa8ba70 
- 10029 0x6fa88290 
- 10030 0x6fa8b250 
- 10031 0x6fa8b320 
- 10032 0x6fa87f50 
- 10033 0x6fa8b240 
- 10034 0x6fa8b1e0 
- 10035 0x6fa8bab0 
- 10036 0x6fa8b310 
- 10037 0x6fa8b6e0 
- 10038 0x6fa8b0e0 
- 10039 0x6fa87d00 
- 10040 0x6fa8add0 
- 10041 0x6fa8b080 
- 10042 0x6fa8b8a0 
- 10043 0x6fa888b0 
- 10044 0x6fa87ed0 
- 10045 0x6fa8b9f0 
- 10046 0x6fa8afb0 
- 10047 0x6fa8b210 
- 10048 0x6fa87fb0 
- 10049 0x6fa8b260 
- 10050 0x6fa8bba0 
- 10051 0x6fa8adb0 
- 10052 0x6fa87da0 
- 10053 0x6fa8b220 
- 10054 0x6fa8b8d0 
- 10055 0x6fa8b2b0 
- 10056 0x6fa87f10 
- 10057 0x6fa8b800 
- 10058 0x6fa8bb20 
- 10059 0x6fa87fc0 
- 10060 0x6fa88360 
- 10061 0x6fa8b120 
- 10062 0x6fa8b200 
- 10063 0x6fa87e60 
- 10064 0x6fa8af90 
- 10065 0x6fa8b300 
- 10066 0x6fa8b1b0 
- 10067 0x6fa880d0 
- 10068 0x6fa8b180 
- 10069 0x6fa8baf0 
- 10070 0x6fa8bad0 
- 10071 0x6fa8ba90 
- 10072 0x6fa885a0 
- 10073 0x6fa8b1a0 
- 10074 0x6fa8b020 
- 10075 0x6fa8bb80 
- 10076 0x6fa87c80 
- 10077 0x6fa8b2d0 
- 10078 0x6fa8b340 
- 10079 0x6fa8aff0 
- 10080 0x6fa87f70 
- 10081 0x6fa8b280 
- 10082 0x6fa8b1d0 
- 10083 0x6fa8b2e0 
- 10084 0x6fa8b4b0 
- 10085 0x6fa8adf0 
- 10086 0x6fa87f00 
