# ijl11.dll

- Size: 180,224 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x37baf34e (1999-08-18 17:54:22 UTC)
- ImageBase 0x60000000, entry 0x6001f680 (in .text)
- Linker 6.0; .NET: no; overlay 0 bytes
- PDB: `(none)`
- RTTI type descriptors (`.?AV`/`.?AU`): 0
- TLS callbacks: none
- Packer/protector heuristics: none

## Version resource

- Comments: IntelÂ® JPEG Library
- CompanyName: Intel Corporation
- FileDescription: IntelÂ® JPEG Library - Retail Version
- FileVersion: 1.1.2
- InternalName: IntelÂ® JPEG Library
- LegalCopyright: Copyright Â© 1999
- LegalTrademarks: 
- OriginalFilename: ijl11.dll
- PrivateBuild: 16
- ProductName: IntelÂ® JPEG Library
- ProductVersion: 1.1.2
- SpecialBuild: 
- _FileVersion: 1.1.2.16

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 147,146 | 147,456 | 6.75 | 0x60000020 |
| .rdata | 0x25000 | 5,772 | 8,192 | 4.71 | 0x40000040 |
| .data | 0x27000 | 12,348 | 8,192 | 3.57 | 0xc0000040 |
| .rsrc | 0x2b000 | 1,048 | 4,096 | 1.10 | 0x40000040 |
| .reloc | 0x2c000 | 6,120 | 8,192 | 4.15 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 14 | 7299 | 23 | ? |
| 10 | 8168 | 87 | VC6 |
| 19 | 8034 | 9 | ? |
| 1 | 0 | 84 | ? |
| 11 | 8168 | 41 | VC6 |
| 6 | 1720 | 1 | ? |
| 4 | 8168 | 1 | VC6 |

## Imports

- **KERNEL32.dll** (57): OutputDebugStringA, CloseHandle, WriteFile, LocalFree, LocalAlloc, SetFilePointer, ReadFile, GetCurrentThreadId, GetModuleFileNameA, GetLastError, FreeEnvironmentStringsW, WideCharToMultiByte, FreeEnvironmentStringsA, RtlUnwind, ExitProcess, TerminateProcess, GetCurrentProcess, GetCommandLineA, GetVersion, GetProcAddress, GetModuleHandleA, HeapAlloc, HeapFree, InitializeCriticalSection, DeleteCriticalSection, EnterCriticalSection, LeaveCriticalSection, TlsSetValue, TlsAlloc, TlsFree, SetLastError, TlsGetValue, CreateFileA, SetHandleCount, GetStdHandle, GetFileType, GetStartupInfoA, GetACP, FlushFileBuffers, GetEnvironmentStrings, ... (+17)
- **USER32.dll** (4): PostQuitMessage, wsprintfA, MessageBoxA, PeekMessageA
- **VERSION.dll** (3): GetFileVersionInfoSizeA, GetFileVersionInfoA, VerQueryValueA
- **ADVAPI32.dll** (3): RegQueryValueExA, RegOpenKeyExA, RegCloseKey

## Exports (6)

- 6 0x60019fc0 ijlErrorStr
- 3 0x60018ba0 ijlFree
- 1 0x60019fb0 ijlGetLibVersion
- 2 0x600187d0 ijlInit
- 4 0x60019260 ijlRead
- 5 0x60019870 ijlWrite
