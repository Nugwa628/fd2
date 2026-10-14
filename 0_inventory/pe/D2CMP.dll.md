# D2CMP.dll

- Size: 163,840 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x4b95c0db (2010-03-09 03:30:35 UTC)
- ImageBase 0x6fe10000, entry 0x6fe12c23 (in .text)
- Linker 7.10; .NET: no; overlay 0 bytes
- PDB: `X:\trunk\Diablo2\Builder\PDB\D2CMP.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 5
- TLS callbacks: none
- Packer/protector heuristics: none

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 106,683 | 110,592 | 6.68 | 0x60000020 |
| .rdata | 0x1c000 | 20,958 | 24,576 | 3.26 | 0x40000040 |
| .data | 0x22000 | 929,720 | 12,288 | 2.65 | 0xc0000040 |
| .reloc | 0x105000 | 9,512 | 12,288 | 3.55 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 93 | 6030 | 4 | VS2003 |
| 93 | 2067 | 2 | ? |
| 93 | 2179 | 3 | ? |
| 1 | 0 | 120 | ? |
| 96 | 6030 | 8 | VS2003 |
| 15 | 6030 | 24 | VS2003 |
| 95 | 6030 | 102 | VS2003 |
| 100 | 6030 | 23 | VS2003 |
| 92 | 6030 | 1 | VS2003 |
| 90 | 6030 | 1 | VS2003 |

## Imports

- **KERNEL32.dll** (73): HeapFree, HeapReAlloc, HeapAlloc, HeapSize, TlsAlloc, SetLastError, GetLastError, TlsFree, TlsSetValue, TlsGetValue, SetHandleCount, GetStdHandle, GetFileType, GetStartupInfoA, GetModuleFileNameA, FreeEnvironmentStringsA, GetEnvironmentStrings, FreeEnvironmentStringsW, WideCharToMultiByte, GetEnvironmentStringsW, HeapDestroy, HeapCreate, VirtualFree, UnhandledExceptionFilter, WriteFile, RtlUnwind, VirtualAlloc, IsBadWritePtr, InterlockedExchange, VirtualQuery, GetACP, GetVersionExA, GetCPInfo, LoadLibraryA, SetStdHandle, QueryPerformanceCounter, GetCurrentProcessId, GetSystemTimeAsFileTime, GetLocaleInfoA, GetStringTypeA, ... (+33)
- **USER32.dll** (1): wsprintfA
- **Storm.dll** (13): #506, #423, #509, #405, #502, #403, #266, #276, #503, #571, #501, #252, #401
- **Fog.dll** (19): #10095, #10105, #10103, #10029, #10102, #10104, gdwBitMasks, #10043, #10094, #10097, #10046, #10265, #10024, #10045, #10042, #10092, #10091, #10106, #10022

## Exports (107)

- 10000 0x6fe21700 
- 10001 0x6fe251b0 
- 10002 0x6fe216d0 
- 10003 0x6fe19720 
- 10004 0x6fe21ee0 
- 10005 0x6fe1e1d0 
- 10006 0x6fe21ac0 
- 10007 0x6fe25480 
- 10008 0x6fe26600 
- 10009 0x6fe1ba40 
- 10010 0x6fe1c250 
- 10011 0x6fe251e0 
- 10012 0x6fe21b90 
- 10013 0x6fe219c0 
- 10014 0x6fe26750 
- 10015 0x6fe21890 
- 10016 0x6fe25e20 
- 10017 0x6fe228b0 
- 10018 0x6fe21a30 
- 10019 0x6fe1c9a0 
- 10020 0x6fe21fb0 
- 10021 0x6fe222e0 
- 10022 0x6fe25360 
- 10023 0x6fe22790 
- 10024 0x6fe24f00 
- 10025 0x6fe21f80 
- 10026 0x6fe19a10 
- 10027 0x6fe252a0 
- 10028 0x6fe1ba30 
- 10029 0x6fe19c60 
- 10030 0x6fe21d00 
- 10031 0x6fe1fc20 
- 10032 0x6fe1c280 
- 10033 0x6fe199d0 
- 10034 0x6fe1e460 
- 10035 0x6fe25150 
- 10036 0x6fe25270 
- 10037 0x6fe1d1f0 
- 10038 0x6fe25180 
- 10039 0x6fe1a250 
- 10040 0x6fe1a2e0 
- 10041 0x6fe19da0 
- 10042 0x6fe1b930 
- 10043 0x6fe22280 
- 10044 0x6fe1ba00 
- 10045 0x6fe25330 
- 10046 0x6fe26a10 
- 10047 0x6fe250d0 
- 10048 0x6fe252d0 
- 10049 0x6fe19d30 
- 10050 0x6fe215f0 
- 10051 0x6fe25300 
- 10052 0x6fe19a00 
- 10053 0x6fe1ba20 
- 10054 0x6fe1bbb0 
- 10055 0x6fe1be10 
- 10056 0x6fe259b0 
- 10057 0x6fe221c0 
- 10058 0x6fe1c270 
- 10059 0x6fe253a0 
- 10060 0x6fe21730 
- 10061 0x6fe22380 
- 10062 0x6fe1ba50 
- 10063 0x6fe263b0 
- 10064 0x6fe1ba60 
- 10065 0x6fe21520 
- 10066 0x6fe19af0 
- 10067 0x6fe21600 
- 10068 0x6fe1d680 
- 10069 0x6fe216a0 
- 10070 0x6fe1c9d0 
- 10071 0x6fe1cfa0 
- 10072 0x6fe22480 
- 10073 0x6fe22240 
- 10074 0x6fe1ba70 
- 10075 0x6fe22580 
- 10076 0x6fe1bdb0 
- 10077 0x6fe1cfb0 
- 10078 0x6fe1bc60 
- 10079 0x6fe21640 
- 10080 0x6fe21780 
- 10081 0x6fe21a80 
- 10082 0x6fe1c260 
- 10083 0x6fe25210 
- 10084 0x6fe19cc0 
- 10085 0x6fe21670 
- 10086 0x6fe21610 
- 10087 0x6fe25390 
- 10088 0x6fe25b00 
- 10089 0x6fe1bd70 
- 10090 0x6fe269b0 
- 10091 0x6fe24ec0 
- 10092 0x6fe1bea0 
- 10093 0x6fe25d10 
- 10094 0x6fe22400 
- 10095 0x6fe220a0 
- 10096 0x6fe19880 
- 10097 0x6fe26250 
- 10098 0x6fe214f0 
- 10099 0x6fe25240 
- 10100 0x6fe22670 
- 10101 0x6fe1b920 
- 10102 0x6fe22190 
- 10103 0x6fe1def0 
- 10104 0x6fe1d560 
- 10105 0x6fe26c20 
- 10106 0x6fe1bc90 
