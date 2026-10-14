# SGD2FreeRes.dll

- Size: 307,200 bytes
- Machine: 0x14c, DLL, subsystem 3
- TimeDateStamp: 0x6451733e (2023-05-02 20:31:58 UTC)
- ImageBase 0x10000000, entry 0x10029840 (in .text)
- Linker 14.34; .NET: no; overlay 0 bytes
- PDB: `(none)`
- RTTI type descriptors (`.?AV`/`.?AU`): 134
- TLS callbacks: none
- Packer/protector heuristics: none

## Version resource

- Build: 2022-10-27
- Comments: Licensed under Affero GPL v3+.
- CompanyName: SlashGaming
- Developer: Mir Drualga
- FileDescription: Enables customized video resolutions in Diablo II.
- InternalName: SlashGaming Diablo II Free Resolution
- LegalCopyright: Copyright (C) 2019 - 2022  Mir Drualga
- LegalTrademarks: All rights reserved.
- PrivateBuild: 
- ProductName: Diablo II Free Resolution
- ProductVersion: 3.0.3.1
- SpecialBuild: 
- Support: reddit.com/r/SlashDiablo
- _FileVersion: 3.0.3.1

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 180,297 | 180,736 | 6.44 | 0x60000020 |
| .rdata | 0x2e000 | 76,498 | 76,800 | 4.74 | 0x40000040 |
| .data | 0x41000 | 18,584 | 8,192 | 5.08 | 0xc0000040 |
| .rsrc | 0x46000 | 24,384 | 24,576 | 2.61 | 0x40000040 |
| .reloc | 0x4c000 | 15,676 | 15,872 | 6.57 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 147 | 30729 | 18 | VS2008 SP1 |
| 260 | 31823 | 10 | VS2022 |
| 259 | 31823 | 12 | VS2022 |
| 261 | 31823 | 26 | VS2022 |
| 257 | 31823 | 4 | VS2022 |
| 257 | 29395 | 9 | VS2019 |
| 1 | 0 | 209 | ? |
| 260 | 31933 | 6 | VS2022 |
| 261 | 31933 | 251 | VS2022 |
| 0 | 0 | 62 | ? |
| 256 | 31933 | 1 | VS2022 |
| 255 | 31933 | 1 | VS2022 |
| 151 | 0 | 1 | ? |
| 258 | 31933 | 1 | VS2022 |

## Imports

- **VERSION.dll** (3): VerQueryValueW, GetFileVersionInfoW, GetFileVersionInfoSizeW
- **KERNEL32.dll** (43): GetCurrentProcess, WriteProcessMemory, GetCommandLineW, GetModuleFileNameW, GetPrivateProfileIntW, LoadLibraryW, InitOnceComplete, LocalFree, FormatMessageA, GetLocaleInfoEx, GetProcAddress, GetModuleHandleW, FreeLibrary, GetLastError, GetCurrentProcessId, GetCurrentThreadId, GetSystemTimeAsFileTime, GetPrivateProfileStringW, InitializeSListHead, CreateFileW, FindClose, FindFirstFileW, GetFileAttributesExW, AreFileApisANSI, CloseHandle, GetFileInformationByHandleEx, MultiByteToWideChar, WideCharToMultiByte, EnterCriticalSection, LeaveCriticalSection, InitializeCriticalSectionAndSpinCount, DeleteCriticalSection, SetEvent, ResetEvent, WaitForSingleObjectEx, CreateEventW, IsProcessorFeaturePresent, UnhandledExceptionFilter, SetUnhandledExceptionFilter, TerminateProcess, ... (+3)
- **USER32.dll** (4): MessageBoxW, SetRect, GetClientRect, EnumDisplaySettingsW
- **ADVAPI32.dll** (3): RegOpenKeyExW, RegCloseKey, RegQueryValueExW
- **MSVCP140.dll** (65): ?_Getcvt@_Locinfo@std@@QBE?AU_Cvtvec@@XZ, _Tolower, _Toupper, ?showmanyc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MAE_JXZ, ??1_Locinfo@std@@QAE@XZ, ?_Getctype@_Locinfo@std@@QBE?AU_Ctypevec@@XZ, ?c_str@?$_Yarn@D@std@@QBEPBDXZ, ?_Init@locale@std@@CAPAV_Locimp@12@_N@Z, ??0codecvt_base@std@@QAE@I@Z, ??1codecvt_base@std@@UAE@XZ, ??0ctype_base@std@@QAE@I@Z, ??1ctype_base@std@@UAE@XZ, ?clear@ios_base@std@@QAEXH_N@Z, ?getloc@ios_base@std@@QBE?AVlocale@2@XZ, ??1ios_base@std@@UAE@XZ, ??0ios_base@std@@IAE@XZ, ?_Init@ios_base@std@@IAEXXZ, ?do_encoding@codecvt_base@std@@MBEHXZ, ?do_max_length@codecvt_base@std@@MBEHXZ, ?_Incref@facet@locale@std@@UAEXXZ, ?_Decref@facet@locale@std@@UAEPAV_Facet_base@3@XZ, ?id@?$codecvt@DDU_Mbstatet@@@std@@2V0locale@2@A, ?_Xlength_error@std@@YAXPBD@Z, ?_Xout_of_range@std@@YAXPBD@Z, _Mtx_init_in_situ, _Mtx_destroy_in_situ, _Mtx_lock, _Mtx_unlock, ?_Throw_C_error@std@@YAXH@Z, ?_Syserror_map@std@@YAPBDH@Z, ?_Winerror_map@std@@YAHH@Z, ??0_Lockit@std@@QAE@H@Z, ??1_Lockit@std@@QAE@XZ, ?uncaught_exceptions@std@@YAHXZ, ??Bid@locale@std@@QAEIXZ, ?_Fiopen@std@@YAPAU_iobuf@@PB_WHH@Z, ?read@?$basic_istream@DU?$char_traits@D@std@@@std@@QAEAAV12@PAD_J@Z, ??1?$basic_istream@DU?$char_traits@D@std@@@std@@UAE@XZ, ??0?$basic_istream@DU?$char_traits@D@std@@@std@@QAE@PAV?$basic_streambuf@DU?$char_traits@D@std@@@1@_N@Z, ?flush@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV12@XZ, ... (+25)
- **VCRUNTIME140.dll** (13): __CxxFrameHandler3, memset, __std_exception_destroy, __std_exception_copy, __std_terminate, memcpy, memmove, memchr, __current_exception, _except_handler4_common, __current_exception_context, _CxxThrowException, __std_type_info_destroy_list
- **api-ms-win-crt-runtime-l1-1-0.dll** (14): terminate, _execute_onexit_table, _crt_atexit, _seh_filter_dll, _cexit, _invalid_parameter_noinfo_noreturn, _configure_narrow_argv, exit, _initialize_narrow_environment, abort, _register_onexit_function, _initterm, _initterm_e, _initialize_onexit_table
- **api-ms-win-crt-math-l1-1-0.dll** (2): round, ceil
- **api-ms-win-crt-stdio-l1-1-0.dll** (16): fputc, fgetpos, fgetc, fflush, fclose, _get_stream_buffer_pointers, __stdio_common_vsprintf, fsetpos, fwrite, setvbuf, ungetc, __stdio_common_vswprintf, __stdio_common_vfprintf, __acrt_iob_func, fread, _fseeki64
- **api-ms-win-crt-heap-l1-1-0.dll** (4): free, malloc, _callnewh, realloc
- **api-ms-win-crt-convert-l1-1-0.dll** (1): atoi
- **api-ms-win-crt-filesystem-l1-1-0.dll** (2): _lock_file, _unlock_file
- **api-ms-win-crt-string-l1-1-0.dll** (1): towlower
- **api-ms-win-crt-locale-l1-1-0.dll** (1): ___lc_codepage_func

## Exports (1)

- 1 0x10010730 PrintLicenseNotice
