# ProjectDiablo.dll

- Size: 4,312,576 bytes
- Machine: 0x14c, DLL, subsystem 3
- TimeDateStamp: 0x6a049b81 (2026-05-13 15:40:49 UTC)
- ImageBase 0x10000000, entry 0x103027ff (in .text)
- Linker 14.29; .NET: no; overlay 0 bytes
- PDB: `C:\projects\Project-Diablo-2\scripts\build-pd2-release\ProjectDiablo.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 55
- TLS callbacks: none
- Packer/protector heuristics: none

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 3,284,964 | 3,284,992 | 5.73 | 0x60000020 |
| .rdata | 0x323000 | 475,756 | 476,160 | 5.47 | 0x40000040 |
| .data | 0x398000 | 1,388,804 | 252,928 | 1.33 | 0xc0000040 |
| .rsrc | 0x4ec000 | 480 | 512 | 4.72 | 0x40000040 |
| .reloc | 0x4ed000 | 296,472 | 296,960 | 6.60 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 147 | 30729 | 20 | VS2008 SP1 |
| 260 | 30034 | 10 | VS2022 |
| 259 | 30034 | 10 | VS2022 |
| 261 | 30034 | 24 | VS2022 |
| 257 | 30034 | 4 | VS2022 |
| 257 | 33145 | 18 | VS2022 |
| 257 | 27045 | 3 | VS2019 |
| 1 | 0 | 416 | ? |
| 265 | 30152 | 66 | VS2022 |
| 256 | 30152 | 1 | VS2022 |
| 255 | 30152 | 1 | VS2022 |
| 258 | 30152 | 1 | VS2022 |

## Imports

- **libcrypto-1_1.dll** (3): SHA256_Init, SHA256_Final, SHA256_Update
- **KERNEL32.dll** (49): GlobalLock, GlobalUnlock, GetModuleHandleA, GetProcAddress, Sleep, WideCharToMultiByte, EnterCriticalSection, LeaveCriticalSection, InitializeCriticalSection, VirtualProtect, GetCommandLineW, GetCurrentProcess, TerminateProcess, GetModuleFileNameW, LoadLibraryW, LocalFree, GetModuleHandleW, GetVersionExA, GetCurrentProcessId, GetOverlappedResult, GetLastError, K32EnumProcessModules, GetCurrentThreadId, CreateDirectoryW, GetFileAttributesExW, AreFileApisANSI, CloseHandle, CreateFileW, WriteFile, GetTickCount64, QueryPerformanceCounter, IsDebuggerPresent, CreateEventW, IsBadCodePtr, MultiByteToWideChar, GetTickCount, FormatMessageA, K32GetModuleFileNameExW, InitializeSListHead, WaitForSingleObjectEx, ... (+9)
- **USER32.dll** (18): SetWindowLongW, CallWindowProcA, MessageBoxW, MessageBoxA, OpenClipboard, CloseClipboard, GetWindowLongW, SendInput, SetCursorPos, GetAsyncKeyState, RegisterRawInputDevices, GetPropA, GetRawInputData, GetClipboardData, DefWindowProcW, GetRawInputDeviceInfoW, SetPropA, GetKeyState
- **ADVAPI32.dll** (3): OpenProcessToken, LookupPrivilegeValueW, AdjustTokenPrivileges
- **SHELL32.dll** (1): CommandLineToArgvW
- **MSVCP140.dll** (148): ??0?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@IAE@XZ, ?eback@?$basic_streambuf@DU?$char_traits@D@std@@@std@@IBEPADXZ, ?gptr@?$basic_streambuf@DU?$char_traits@D@std@@@std@@IBEPADXZ, ?pptr@?$basic_streambuf@DU?$char_traits@D@std@@@std@@IBEPADXZ, ?egptr@?$basic_streambuf@DU?$char_traits@D@std@@@std@@IBEPADXZ, ?gbump@?$basic_streambuf@DU?$char_traits@D@std@@@std@@IAEXH@Z, ?setg@?$basic_streambuf@DU?$char_traits@D@std@@@std@@IAEXPAD00@Z, ?epptr@?$basic_streambuf@DU?$char_traits@D@std@@@std@@IBEPADXZ, ?_Pninc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@IAEPADXZ, ?eback@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@IBEPA_WXZ, ?gptr@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@IBEPA_WXZ, ?pptr@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@IBEPA_WXZ, ?egptr@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@IBEPA_WXZ, ?setg@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@IAEXPA_W00@Z, ?epptr@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@IBEPA_WXZ, ?_Pninc@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@IAEPA_WXZ, ??0?$basic_ios@_WU?$char_traits@_W@std@@@std@@IAE@XZ, ??0?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QAE@PAV?$basic_streambuf@_WU?$char_traits@_W@std@@@1@_N@Z, ??1?$basic_streambuf@DU?$char_traits@D@std@@@std@@UAE@XZ, ?showmanyc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MAE_JXZ, ?xsgetn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MAE_JPAD_J@Z, ?xsputn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MAE_JPBD_J@Z, ??1?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@UAE@XZ, ?showmanyc@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@MAE_JXZ, ?xsgetn@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@MAE_JPA_W_J@Z, ?xsputn@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@MAE_JPB_W_J@Z, ??1?$basic_ios@DU?$char_traits@D@std@@@std@@UAE@XZ, ??1?$basic_ios@_WU?$char_traits@_W@std@@@std@@UAE@XZ, ??1?$basic_ostream@_WU?$char_traits@_W@std@@@std@@UAE@XZ, ??1?$basic_istream@DU?$char_traits@D@std@@@std@@UAE@XZ, ?width@ios_base@std@@QAE_J_J@Z, ?width@ios_base@std@@QBE_JXZ, ?setstate@?$basic_ios@_WU?$char_traits@_W@std@@@std@@QAEXH_N@Z, ?good@ios_base@std@@QBE_NXZ, ??1_Lockit@std@@QAE@XZ, ??0_Lockit@std@@QAE@H@Z, ?_Getgloballocale@locale@std@@CAPAV_Locimp@12@XZ, ?_Xbad_function_call@std@@YAXXZ, ?id@?$codecvt@DDU_Mbstatet@@@std@@2V0locale@2@A, ?_Fiopen@std@@YAPAU_iobuf@@PBDHH@Z, ... (+108)
- **XINPUT1_4.dll** (2): #2, #3
- **VERSION.dll** (3): VerQueryValueW, GetFileVersionInfoSizeW, GetFileVersionInfoW
- **HID.DLL** (2): HidD_GetManufacturerString, HidD_GetProductString
- **VCRUNTIME140.dll** (16): memchr, memmove, wcsstr, __std_type_info_destroy_list, __std_exception_copy, __std_exception_destroy, memset, __CxxFrameHandler3, _except_handler4_common, _CxxThrowException, __current_exception_context, __current_exception, strchr, _purecall, memcpy, strstr
- **api-ms-win-crt-heap-l1-1-0.dll** (5): calloc, _callnewh, realloc, free, malloc
- **api-ms-win-crt-runtime-l1-1-0.dll** (18): _initterm_e, _invalid_parameter_noinfo_noreturn, _initterm, _cexit, _exit, _errno, _crt_atexit, _wassert, _execute_onexit_table, _register_onexit_function, exit, _initialize_onexit_table, _initialize_narrow_environment, _configure_narrow_argv, _seh_filter_dll, _beginthreadex, terminate, _invalid_parameter_noinfo
- **api-ms-win-crt-math-l1-1-0.dll** (12): round, _libm_sse2_cos_precise, _fdclass, _CIatan2, _dsign, _libm_sse2_pow_precise, _libm_sse2_sqrt_precise, ceil, floor, _libm_sse2_sin_precise, roundf, _dclass
- **api-ms-win-crt-stdio-l1-1-0.dll** (23): fputc, fflush, fclose, ftell, fopen, fgetpos, __stdio_common_vswprintf_s, fgetwc, fseek, ungetwc, rewind, fputwc, fgetc, fwrite, __stdio_common_vsprintf, _get_stream_buffer_pointers, __stdio_common_vsprintf_s, _fseeki64, fread, setvbuf, fsetpos, ungetc, __stdio_common_vsnprintf_s
- **api-ms-win-crt-string-l1-1-0.dll** (8): wcsncpy, isalnum, towlower, tolower, toupper, _stricmp, isdigit, wcscpy_s
- **api-ms-win-crt-convert-l1-1-0.dll** (6): strtoll, mbstowcs_s, strtoull, wcstol, strtod, strtol
- **api-ms-win-crt-utility-l1-1-0.dll** (3): qsort, rand, srand
- **api-ms-win-crt-locale-l1-1-0.dll** (2): ___lc_codepage_func, localeconv
- **api-ms-win-crt-filesystem-l1-1-0.dll** (2): _unlock_file, _lock_file
- **api-ms-win-crt-time-l1-1-0.dll** (1): _time64

## Exports (1)

- 1 0x10233b50 _D2Client_PlaySoundWithCustomVolumeOrPriority@20
