# D2Client.dll

- Size: 1,093,632 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x4b95ca3e (2010-03-09 04:10:38 UTC)
- ImageBase 0x6fab0000, entry 0x6fab45f6 (in .text)
- Linker 7.10; .NET: no; overlay 0 bytes
- PDB: `X:\trunk\Diablo2\Builder\PDB\D2Client.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 6
- TLS callbacks: none
- Packer/protector heuristics: none

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 839,163 | 839,680 | 6.76 | 0x60000020 |
| .rdata | 0xce000 | 49,290 | 53,248 | 5.29 | 0x40000040 |
| .data | 0xdb000 | 301,788 | 131,072 | 2.25 | 0xc0000040 |
| .rsrc | 0x125000 | 3,544 | 4,096 | 2.99 | 0x40000040 |
| .reloc | 0x126000 | 59,696 | 61,440 | 6.56 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 93 | 6030 | 22 | VS2003 |
| 93 | 2067 | 2 | ? |
| 93 | 2179 | 9 | ? |
| 1 | 0 | 1105 | ? |
| 105 | 2067 | 1 | ? |
| 96 | 6030 | 8 | VS2003 |
| 15 | 6030 | 26 | VS2003 |
| 95 | 6030 | 123 | VS2003 |
| 100 | 6030 | 128 | VS2003 |
| 92 | 6030 | 1 | VS2003 |
| 94 | 3052 | 1 | ? |
| 90 | 6030 | 1 | VS2003 |

## Imports

- **KERNEL32.dll** (84): SetStdHandle, FlushFileBuffers, GetStringTypeA, GetStringTypeW, GetCPInfo, GetLocaleInfoA, GetACP, GetFileType, InterlockedExchange, SetEndOfFile, IsBadReadPtr, SetUnhandledExceptionFilter, GetStdHandle, SetHandleCount, GetLogicalDriveStringsA, GetVolumeInformationA, GetDriveTypeA, IsBadWritePtr, RtlUnwind, UnhandledExceptionFilter, HeapCreate, HeapDestroy, GetEnvironmentStringsW, FreeEnvironmentStringsW, GetEnvironmentStrings, FreeEnvironmentStringsA, SetFilePointer, GetCurrentProcessId, GetStartupInfoA, HeapSize, HeapReAlloc, VirtualQuery, HeapAlloc, LCMapStringW, LCMapStringA, TlsGetValue, TlsSetValue, TlsFree, SetLastError, TlsAlloc, ... (+44)
- **USER32.dll** (27): SetCursorPos, ShowCursor, GetDlgItem, EndDialog, DialogBoxParamA, GetMessageA, PostQuitMessage, TranslateMessage, TranslateAcceleratorA, DefWindowProcA, DispatchMessageA, RegisterWindowMessageA, PeekMessageA, GetSystemMetrics, FindWindowA, LoadAcceleratorsA, GetKeyboardLayout, IntersectRect, GetAsyncKeyState, PtInRect, GetKeyState, MessageBoxA, wvsprintfA, SetRect, wsprintfA, SendMessageA, GetWindowRect
- **ADVAPI32.dll** (1): GetUserNameA
- **WINMM.dll** (1): timeGetTime
- **IMM32.dll** (11): ImmGetConversionStatus, ImmSimulateHotKey, ImmSetOpenStatus, ImmSetConversionStatus, ImmGetCompositionStringA, ImmReleaseContext, ImmIsIME, ImmGetCandidateListCountA, ImmGetContext, ImmGetCandidateListA, ImmGetOpenStatus
- **Storm.dll** (50): #476, #508, #475, #515, #416, #418, #417, #414, #419, #514, #415, #513, #512, #405, #464, #462, #477, #502, #504, #571, #509, #426, #624, #609, #491, #495, #492, #510, #638, #606, #628, #268, #425, #253, #422, #578, #412, #501, #506, #423, ... (+10)
- **Fog.dll** (56): #10142, #10145, #10143, #10055, #10098, #10105, #10207, #10103, #10210, #10208, #10102, #10091, #10092, #10095, #10094, #10097, #10209, #10111, #10108, #10109, #10110, #10107, #10112, #10114, #10013, #10046, #10045, #10060, #10061, #10083, #10065, #10062, #10064, #10084, #10063, #10248, #10249, #10250, #10116, #10191, ... (+16)
- **D2CMP.dll** (36): #10051, #10019, #10047, #10078, #10076, #10003, #10010, #10074, #10082, #10032, #10064, #10058, #10036, #10045, #10022, #10055, #10092, #10006, #10020, #10057, #10083, #10068, #10089, #10104, #10054, #10021, #10000, #10069, #10060, #10005, #10002, #10086, #10070, #10024, #10065, #10103
- **D2Common.dll** (625): #10186, #10333, #10516, #10026, #10578, #10902, #10455, #10991, #10835, #11093, #10906, #10324, #10793, #10594, #10577, #10604, #10037, #10263, #10435, #10597, #10975, #11091, #10621, #10121, #11038, #10510, #10402, #10653, #10323, #10353, #10947, #10847, #10310, #10165, #10868, #10721, #11125, #10715, #10376, #10047, ... (+585)
- **D2Game.dll** (13): #10038, #10047, #10037, #10040, #10017, #10039, #10049, #10053, #10006, #10024, #10019, #10008, #10043
- **D2gfx.dll** (58): #10081, #10023, #10040, #10021, #10041, #10012, #10003, #10045, #10076, #10029, #10051, #10074, #10006, #10070, #10043, #10085, #10031, #10048, #10014, #10075, #10047, #10083, #10001, #10058, #10069, #10019, #10054, #10008, #10020, #10057, #10010, #10027, #10078, #10077, #10036, #10016, #10046, #10007, #10066, #10084, ... (+18)
- **D2Lang.dll** (27): #10004, #10011, ?Personalize@Unicode@@SIXPAU1@PBU1@1HW4ELANGUAGE@@@Z, ?strncpy@Unicode@@SIPAU1@PAU1@PBU1@H@Z, ?strstr@Unicode@@SIPAU1@PBU1@0@Z, ?strlen@Unicode@@SIHPBU1@@Z, ?sprintf@Unicode@@SAXHPAU1@PBU1@ZZ, ?strcpy@Unicode@@SIPAU1@PAU1@PBU1@@Z, ?strcat@Unicode@@SIPAU1@PAU1@PBU1@@Z, ?win2Unicode@Unicode@@SIPAU1@PAU1@PBDH@Z, ?toUnicode@Unicode@@SIPAU1@PAU1@PBDH@Z, #10009, #10003, #10005, #10008, ?_toLowerTable@Unicode@@0PAGA, ?isWhitespace@Unicode@@QBEHXZ, ?utf8ToUnicode@Unicode@@SIPAU1@PAU1@PBDH@Z, ?isLineBreak@Unicode@@SIHPBU1@I@Z, ?toUtf@Unicode@@SIPADPADPBU1@H@Z, ?strchr@Unicode@@SIPAU1@PBU1@U1@@Z, #10002, ?unicodenwidth@Unicode@@SIIPBDH@Z, #10006, ??0Unicode@@QAE@G@Z, ??_FUnicode@@QAEXXZ, ?_toUpperTable@Unicode@@0PAGA
- **D2MCPClient.dll** (1): #10050
- **D2Net.dll** (12): #10028, #10004, #10034, #10019, #10026, #10005, #10012, #10022, #10033, #10008, #10024, #10020
- **D2sound.dll** (43): #10065, #10054, #10044, #10025, #10069, #10023, #10046, #10051, #10008, #10037, #10003, #10056, #10038, #10020, #10058, #10032, #10066, #10028, #10049, #10059, #10047, #10050, #10006, #10026, #10039, #10005, #10004, #10057, #10014, #10018, #10061, #10062, #10063, #10053, #10011, #10001, #10034, #10067, #10022, #10029, ... (+3)
- **D2Win.dll** (38): #10176, #10100, #10187, #10144, #10143, #10024, #10016, #10165, #10164, #10008, #10159, #10153, #10171, #10162, #10173, #10141, #10005, #10088, #10148, #10043, #10205, #10203, #10177, #10013, #10184, #10028, #10070, #10110, #10066, #10138, #10059, #10150, #10085, #10083, #10190, #10128, #10065, #10062

## Exports (4)

- 10004 0x6fafbe70 QueryInterface
- 10001 0x6fb12e20 
- 10002 0x6fb12de0 
- 10003 0x6fac08c0 
