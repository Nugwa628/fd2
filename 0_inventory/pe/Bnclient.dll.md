# Bnclient.dll

- Size: 139,264 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x4b95c135 (2010-03-09 03:32:05 UTC)
- ImageBase 0x6ff20000, entry 0x6ff2215e (in .text)
- Linker 7.10; .NET: no; overlay 0 bytes
- PDB: `X:\trunk\Diablo2\Builder\PDB\Bnclient.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 2
- TLS callbacks: none
- Packer/protector heuristics: none

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 96,044 | 98,304 | 6.67 | 0x60000020 |
| .rdata | 0x19000 | 12,555 | 16,384 | 4.65 | 0x40000040 |
| .data | 0x1d000 | 15,652 | 8,192 | 2.81 | 0xc0000040 |
| .rsrc | 0x21000 | 288 | 4,096 | 0.29 | 0x40000040 |
| .reloc | 0x22000 | 7,738 | 8,192 | 5.57 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 93 | 6030 | 6 | VS2003 |
| 93 | 2067 | 2 | ? |
| 93 | 2179 | 5 | ? |
| 1 | 0 | 184 | ? |
| 96 | 6030 | 9 | VS2003 |
| 15 | 6030 | 24 | VS2003 |
| 95 | 6030 | 95 | VS2003 |
| 100 | 6030 | 21 | VS2003 |
| 92 | 6030 | 1 | VS2003 |
| 94 | 3052 | 1 | ? |
| 90 | 6030 | 1 | VS2003 |

## Imports

- **KERNEL32.dll** (88): Sleep, GetProcAddress, GetLocalTime, LoadLibraryA, InterlockedIncrement, InterlockedDecrement, WaitForSingleObject, CreateThread, SetFileTime, CreateProcessA, GetFileTime, GetSystemDefaultLCID, ExitProcess, TerminateProcess, GetCurrentProcess, GetSystemTimeAsFileTime, ExitThread, GetCurrentThreadId, GetLastError, GetCommandLineA, GetVersionExA, HeapReAlloc, HeapAlloc, HeapSize, TlsAlloc, SetLastError, TlsFree, TlsSetValue, TlsGetValue, LCMapStringA, WideCharToMultiByte, MultiByteToWideChar, LCMapStringW, HeapFree, UnhandledExceptionFilter, SetHandleCount, GetUserDefaultLCID, GetFileType, GetStartupInfoA, FreeEnvironmentStringsA, ... (+48)
- **USER32.dll** (2): wsprintfA, CharLowerBuffA
- **WSOCK32.dll** (12): inet_ntoa, send, socket, recv, inet_addr, htons, connect, ntohs, select, WSAGetLastError, setsockopt, gethostbyname
- **Storm.dll** (49): #501, #421, #428, #509, #424, #494, #405, #510, #491, #426, #425, #422, #266, #571, #267, #251, #265, #269, #253, #252, #268, #902, #423, #912, #506, #279, #502, #465, #550, #542, #403, #401, #548, #541, #607, #624, #601, #633, #612, #609, ... (+9)
- **Fog.dll** (20): #10043, #10001, #10007, #10017, #10006, #10262, #10005, #10004, #10042, #10227, #10012, #10112, #10107, #10000, #10109, #10111, #10263, #10008, #10024, #10265
- **D2Lang.dll** (1): #10004

## Exports (23)

- 1 0x6ff21050 ??4BNGatewayAccess@@QAEAAV0@ABV0@@Z
- 2 0x6ff21040 ?CurGateway@BNGatewayAccess@@QAGHXZ
- 3 0x6ff34fa0 ?DNS@BNGatewayAccess@@QAGPADH@Z
- 4 0x6ff34d70 ?FindKey@BNGatewayAccess@@AAEPADPAD0@Z
- 5 0x6ff34e10 ?FindSection@BNGatewayAccess@@AAEPADPAD0@Z
- 6 0x6ff34f60 ?GMT@BNGatewayAccess@@QAGHH@Z
- 7 0x6ff34ee0 ?GetBattlenetGatewayList@BNGatewayAccess@@AAEXXZ
- 8 0x6ff34b60 ?GetBattlenetRealmsList@BNGatewayAccess@@AAEXXZ
- 9 0x6ff34bb0 ?GetGatewayList@BNGatewayAccess@@AAEXPBD@Z
- 10 0x6ff34d20 ?GetSystemTimeZone@BNGatewayAccess@@AAEHXZ
- 11 0x6ff355d0 ?Load@BNGatewayAccess@@QAGXXZ
- 12 0x6ff34f20 ?Name@BNGatewayAccess@@QAGPADH@Z
- 13 0x6ff34cc0 ?Nth@BNGatewayAccess@@AAEPADH@Z
- 14 0x6ff21030 ?NumGateways@BNGatewayAccess@@QAGHXZ
- 15 0x6ff35130 ?PickClosestZone@BNGatewayAccess@@AAEXH@Z
- 16 0x6ff34fc0 ?Realm@BNGatewayAccess@@QAGPADH@Z
- 17 0x6ff35030 ?SaveAndUnload@BNGatewayAccess@@QAGXXZ
- 18 0x6ff34c90 ?SetCurGateway@BNGatewayAccess@@QAGXH@Z
- 19 0x6ff34aa0 ?SkipEOL@BNGatewayAccess@@AAEPADPAD0@Z
- 20 0x6ff34ad0 ?SkipToEOL@BNGatewayAccess@@AAEPADPAD0@Z
- 21 0x6ff35260 ?UpdateGatewaysFromIni@BNGatewayAccess@@QAGXPAD@Z
- 22 0x6ff35560 ?WriteDefaultGatewayList@BNGatewayAccess@@AAEXXZ
- 23 0x6ff37390 QueryInterface
