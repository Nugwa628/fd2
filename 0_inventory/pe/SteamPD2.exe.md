# SteamPD2.exe

- Size: 2,406,570 bytes
- Machine: 0x14c, EXE, subsystem 3
- TimeDateStamp: 0x666c0000 (2024-06-14 08:32:00 UTC)
- ImageBase 0x00400000, entry 0x00410340 (in .text)
- Linker 14.29; .NET: no; overlay 2,150,058 bytes
- PDB: `D:\a\_work\1\s\artifacts\obj\win-x86.Release\corehost\apphost\standalone\apphost.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 21
- TLS callbacks: none
- Packer/protector heuristics: none

## Version resource

- Assembly Version: 1.0.0.0
- CompanyName: SteamPD2
- FileDescription: SteamPD2
- FileVersion: 1.0.0.0
- InternalName: SteamPD2.dll
- LegalCopyright:  
- OriginalFilename: SteamPD2.dll
- ProductName: SteamPD2
- ProductVersion: 1.0.0+300ed6fbbcb85bf6b02e8bb052e4e0c5f3a77de3
- _FileVersion: 1.0.0.0

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 78,586 | 78,848 | 6.43 | 0x60000020 |
| .rdata | 0x15000 | 28,172 | 28,672 | 4.48 | 0x40000040 |
| .data | 0x1c000 | 4,256 | 2,560 | 2.29 | 0xc0000040 |
| .reloc | 0x1e000 | 4,680 | 5,120 | 6.39 | 0x42000040 |
| .rsrc | 0x20000 | 140,092 | 140,288 | 6.31 | 0x40000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 260 | 30034 | 16 | VS2022 |
| 259 | 30034 | 14 | VS2022 |
| 261 | 30034 | 82 | VS2022 |
| 147 | 30729 | 16 | VS2008 SP1 |
| 257 | 29395 | 9 | VS2019 |
| 1 | 0 | 201 | ? |
| 265 | 30154 | 10 | VS2022 |
| 258 | 30154 | 1 | VS2022 |

## Imports

- **KERNEL32.dll** (46): FindNextFileW, GetCurrentProcess, GetModuleHandleExW, GetModuleFileNameW, LeaveCriticalSection, GetEnvironmentVariableW, FindClose, MultiByteToWideChar, GetLastError, GetFileAttributesExW, GetFullPathNameW, GetProcAddress, DeleteCriticalSection, WideCharToMultiByte, IsWow64Process, LoadLibraryExW, FreeLibrary, TlsFree, TlsSetValue, TlsGetValue, TlsAlloc, EnterCriticalSection, FindFirstFileExW, OutputDebugStringW, LoadLibraryA, GetModuleHandleW, InitializeCriticalSectionAndSpinCount, SetLastError, RaiseException, RtlUnwind, InitializeSListHead, GetCurrentProcessId, IsDebuggerPresent, IsProcessorFeaturePresent, TerminateProcess, SetUnhandledExceptionFilter, UnhandledExceptionFilter, GetSystemTimeAsFileTime, GetStringTypeW, SwitchToThread, ... (+6)
- **USER32.dll** (1): MessageBoxW
- **SHELL32.dll** (1): ShellExecuteW
- **ADVAPI32.dll** (6): RegOpenKeyExW, RegGetValueW, DeregisterEventSource, RegisterEventSourceW, ReportEventW, RegCloseKey
- **api-ms-win-crt-runtime-l1-1-0.dll** (22): _exit, __p___argc, __p___wargv, _initterm_e, _initterm, _get_initial_wide_environment, _initialize_wide_environment, _configure_wide_argv, _invalid_parameter_noinfo_noreturn, _set_app_type, _c_exit, _seh_filter_exe, _register_thread_local_exe_atexit_callback, _errno, _cexit, _controlfp_s, exit, abort, _crt_atexit, _initialize_onexit_table, _register_onexit_function, terminate
- **api-ms-win-crt-stdio-l1-1-0.dll** (11): __p__commode, __stdio_common_vsprintf_s, setvbuf, _wfopen, _set_fmode, __stdio_common_vswprintf, __acrt_iob_func, fputwc, fputws, __stdio_common_vfwprintf, fflush
- **api-ms-win-crt-heap-l1-1-0.dll** (5): _callnewh, _set_new_mode, free, malloc, calloc
- **api-ms-win-crt-string-l1-1-0.dll** (6): wcsnlen, strcpy_s, _wcsdup, strcspn, wcsncmp, toupper
- **api-ms-win-crt-convert-l1-1-0.dll** (2): _wtoi, wcstoul
- **api-ms-win-crt-locale-l1-1-0.dll** (9): __pctype_func, _unlock_locales, localeconv, _lock_locales, ___lc_codepage_func, ___mb_cur_max_func, _configthreadlocale, setlocale, ___lc_locale_name_func
- **api-ms-win-crt-math-l1-1-0.dll** (2): __setusermatherr, frexp
- **api-ms-win-crt-time-l1-1-0.dll** (3): _gmtime64_s, wcsftime, _time64

## Exports (0)

