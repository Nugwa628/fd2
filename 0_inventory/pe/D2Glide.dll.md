# D2Glide.dll

- Size: 98,304 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x4b95c1e2 (2010-03-09 03:34:58 UTC)
- ImageBase 0x6f850000, entry 0x6f85176e (in .text)
- Linker 7.10; .NET: no; overlay 0 bytes
- PDB: `X:\trunk\Diablo2\Builder\PDB\D2Glide.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 0
- TLS callbacks: none
- Packer/protector heuristics: none

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 62,781 | 65,536 | 6.66 | 0x60000020 |
| .rdata | 0x11000 | 8,824 | 12,288 | 4.26 | 0x40000040 |
| .data | 0x14000 | 16,216 | 8,192 | 2.88 | 0xc0000040 |
| .reloc | 0x18000 | 6,404 | 8,192 | 4.67 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 4 | 8447 | 10 | VC6 SP5/6 |
| 0 | 0 | 45 | ? |
| 93 | 6030 | 8 | VS2003 |
| 93 | 2067 | 2 | ? |
| 93 | 2179 | 5 | ? |
| 1 | 0 | 114 | ? |
| 96 | 6030 | 2 | VS2003 |
| 15 | 6030 | 22 | VS2003 |
| 95 | 6030 | 82 | VS2003 |
| 100 | 6030 | 15 | VS2003 |
| 92 | 6030 | 1 | VS2003 |
| 90 | 6030 | 1 | VS2003 |

## Imports

- **KERNEL32.dll** (59): GetEnvironmentStrings, FreeEnvironmentStringsW, WideCharToMultiByte, GetEnvironmentStringsW, HeapDestroy, HeapCreate, VirtualFree, UnhandledExceptionFilter, WriteFile, VirtualAlloc, RtlUnwind, InterlockedExchange, VirtualQuery, GetACP, GetOEMCP, GetCPInfo, LoadLibraryA, FreeEnvironmentStringsA, GetLocaleInfoA, GetStringTypeA, MultiByteToWideChar, GetStringTypeW, LCMapStringA, LCMapStringW, QueryPerformanceCounter, GetCurrentProcessId, GetSystemTimeAsFileTime, VirtualProtect, GetSystemInfo, GetModuleFileNameA, GetStartupInfoA, GetFileType, GetStdHandle, SetHandleCount, HeapFree, TlsGetValue, TlsSetValue, TlsFree, GetLastError, SetLastError, ... (+19)
- **USER32.dll** (6): DrawTextA, wvsprintfA, TranslateMessage, PeekMessageA, DispatchMessageA, SetRect
- **GDI32.dll** (11): DeleteObject, SelectObject, GetCharWidthA, GetPixel, SetBkMode, CreateDCA, SetBkColor, CreateFontA, SetTextColor, DeleteDC, CreateBitmap
- **Storm.dll** (5): #281, #321, #268, #403, #401
- **Fog.dll** (7): #10024, #10198, #10029, #10265, #10117, #10043, #10042
- **D2sound.dll** (1): #10061
- **D2CMP.dll** (10): #10069, #10067, #10015, #10000, #10106, #10005, #10098, #10002, #10087, #10060
- **smackw32.dll** (6): _SmackClose@4, _SmackToBuffer@28, _SmackDoFrame@4, _SmackWait@4, _SmackOpen@12, _SmackNextFrame@4
- **binkw32.dll** (8): _BinkWait@4, _BinkOpenDirectSound@4, _BinkCopyToBuffer@28, _BinkNextFrame@4, _BinkSetSoundSystem@8, _BinkDoFrame@4, _BinkClose@4, _BinkOpen@8
- **glide3x.dll** (35): _grTexSource@16, _grDrawVertexArrayContiguous@16, _grTexDownloadMipMap@16, _grDitherMode@4, _grDrawPoint@4, _grSstWinClose@4, _grVertexLayout@12, _grBufferSwap@4, _grChromakeyMode@4, _grDrawLine@8, _grTexMaxAddress@4, _grTexDownloadTable@8, _grSstSelect@4, _grCoordinateSpace@4, _grChromakeyValue@4, _grColorMask@8, _grColorCombine@20, _grTexMinAddress@4, _grGet@12, _grFinish@0, _grGlideInit@0, _grTexFilterMode@12, _grSstWinOpen@28, _grAlphaCombine@20, _grLoadGammaTable@16, _grLfbLock@24, _grLfbUnlock@8, _grTexCombine@28, _grAlphaBlendFunction@16, _guGammaCorrectionRGB@12, _grGlideShutdown@0, _grDepthMask@4, _grConstantColorValue@4, _grDrawVertexArray@12, _grBufferClear@12

## Exports (1)

- 10000 0x6f8592d0 
