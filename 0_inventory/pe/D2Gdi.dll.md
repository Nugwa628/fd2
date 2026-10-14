# D2Gdi.dll

- Size: 53,248 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x4b95c1b7 (2010-03-09 03:34:15 UTC)
- ImageBase 0x6f870000, entry 0x6f871339 (in .text)
- Linker 7.10; .NET: no; overlay 0 bytes
- PDB: `X:\trunk\Diablo2\Builder\PDB\D2Gdi.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 0
- TLS callbacks: none
- Packer/protector heuristics: none

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 28,862 | 32,768 | 6.33 | 0x60000020 |
| .rdata | 0x9000 | 6,962 | 8,192 | 4.60 | 0x40000040 |
| .data | 0xb000 | 7,772 | 4,096 | 2.21 | 0xc0000040 |
| .reloc | 0xd000 | 4,078 | 4,096 | 4.78 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 0 | 0 | 8 | ? |
| 93 | 6030 | 8 | VS2003 |
| 93 | 2067 | 2 | ? |
| 93 | 2179 | 5 | ? |
| 1 | 0 | 113 | ? |
| 96 | 6030 | 2 | VS2003 |
| 15 | 6030 | 20 | VS2003 |
| 95 | 6030 | 66 | VS2003 |
| 100 | 6030 | 8 | VS2003 |
| 92 | 6030 | 1 | VS2003 |
| 90 | 6030 | 1 | VS2003 |

## Imports

- **KERNEL32.dll** (57): WriteFile, RtlUnwind, HeapReAlloc, HeapSize, InterlockedExchange, VirtualQuery, GetACP, GetOEMCP, GetCPInfo, VirtualAlloc, LoadLibraryA, GetLocaleInfoA, GetVersionExA, GetStringTypeA, MultiByteToWideChar, UnhandledExceptionFilter, TlsSetValue, LCMapStringW, QueryPerformanceCounter, GetTickCount, GetCurrentProcessId, GetSystemTimeAsFileTime, VirtualProtect, GetSystemInfo, TlsFree, GetCommandLineA, GetCurrentThreadId, GetCurrentProcess, TerminateProcess, GetModuleHandleA, VirtualFree, HeapCreate, HeapDestroy, GetEnvironmentStringsW, WideCharToMultiByte, FreeEnvironmentStringsW, GetEnvironmentStrings, FreeEnvironmentStringsA, GetModuleFileNameA, GetStartupInfoA, ... (+17)
- **USER32.dll** (6): GetClientRect, DrawTextA, GetDC, SetRect, ReleaseDC, wvsprintfA
- **GDI32.dll** (16): StretchBlt, SetDIBColorTable, GdiFlush, CreatePalette, RealizePalette, SelectPalette, SetPaletteEntries, SetTextColor, DeleteDC, CreateFontA, SetBkColor, SetBkMode, DeleteObject, SelectObject, CreateCompatibleDC, CreateDIBSection
- **Storm.dll** (3): #281, #321, #403
- **Fog.dll** (4): #10042, #10043, #10024, #10265
- **D2CMP.dll** (11): #10049, #10002, #10005, #10060, #10069, #10072, #10080, #10015, #10031, #10000, #10106
- **D2gfx.dll** (1): #10048
- **smackw32.dll** (6): _SmackWait@4, _SmackDoFrame@4, _SmackToBuffer@28, _SmackClose@4, _SmackNextFrame@4, _SmackOpen@12

## Exports (4)

- 10000 0x6f877f20 
- 10001 0x6f876930 
- 10002 0x6f8768d0 
- 10003 0x6f8768c0 
