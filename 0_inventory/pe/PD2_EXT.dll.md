# PD2_EXT.dll

- Size: 86,528 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x6a049afb (2026-05-13 15:38:35 UTC)
- ImageBase 0x10000000, entry 0x10001590 (in .text)
- Linker 14.39; .NET: no; overlay 0 bytes
- PDB: `C:\projects\Project-Diablo-2\scripts\build-pd2ext-release\PD2_EXT.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 3
- TLS callbacks: none
- Packer/protector heuristics: none

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 51,437 | 51,712 | 6.58 | 0x60000020 |
| .rdata | 0xe000 | 26,088 | 26,112 | 4.95 | 0x40000040 |
| .data | 0x15000 | 4,828 | 2,560 | 2.07 | 0xc0000040 |
| .fptable | 0x17000 | 128 | 512 | -0.00 | 0xc0000040 |
| .rsrc | 0x18000 | 248 | 512 | 2.52 | 0x40000040 |
| .reloc | 0x19000 | 3,892 | 4,096 | 6.41 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 259 | 33145 | 11 | VS2022 |
| 261 | 33145 | 137 | VS2022 |
| 260 | 33145 | 19 | VS2022 |
| 261 | 33218 | 30 | VS2022 |
| 260 | 33218 | 15 | VS2022 |
| 259 | 33218 | 20 | VS2022 |
| 257 | 33145 | 5 | VS2022 |
| 1 | 0 | 91 | ? |
| 264 | 33523 | 1 | VS2022 |
| 256 | 33523 | 1 | VS2022 |
| 255 | 33523 | 1 | VS2022 |
| 258 | 33523 | 1 | VS2022 |

## Imports

- **KERNEL32.dll** (73): VirtualProtect, GetModuleHandleA, LoadLibraryA, WriteConsoleW, CloseHandle, CreateFileW, UnhandledExceptionFilter, SetUnhandledExceptionFilter, GetCurrentProcess, TerminateProcess, IsProcessorFeaturePresent, QueryPerformanceCounter, GetCurrentProcessId, GetCurrentThreadId, GetSystemTimeAsFileTime, InitializeSListHead, IsDebuggerPresent, GetStartupInfoW, GetModuleHandleW, InterlockedFlushSList, RtlUnwind, GetLastError, SetLastError, EnterCriticalSection, LeaveCriticalSection, DeleteCriticalSection, InitializeCriticalSectionAndSpinCount, TlsAlloc, TlsGetValue, TlsSetValue, TlsFree, FreeLibrary, GetProcAddress, LoadLibraryExW, EncodePointer, RaiseException, ExitProcess, GetModuleHandleExW, GetModuleFileNameW, HeapAlloc, ... (+33)
- **USER32.dll** (1): MessageBoxA

## Exports (12)

- 1 0x10013d28 GetFileVersionInfoA
- 2 0x10013d5c GetFileVersionInfoSizeA
- 3 0x10013d94 GetFileVersionInfoSizeW
- 4 0x10013dc8 GetFileVersionInfoW
- 5 0x10013df1 VerFindFileA
- 6 0x10013e13 VerFindFileW
- 7 0x10013e38 VerInstallFileA
- 8 0x10013e60 VerInstallFileW
- 9 0x10013e89 VerLanguageNameA
- 10 0x10013eb3 VerLanguageNameW
- 11 0x10013edb VerQueryValueA
- 14 0x10013f01 VerQueryValueW
