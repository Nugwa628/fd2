# glide3x.dll

- Size: 2,934,272 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x6a049c2b (2026-05-13 15:43:39 UTC)
- ImageBase 0x10000000, entry 0x101f0d28 (in .text)
- Linker 14.39; .NET: no; overlay 0 bytes
- PDB: `C:\projects\Project-Diablo-2\scripts\build-d2gl-release\glide3x.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 79
- TLS callbacks: none
- Packer/protector heuristics: none

## Version resource

- FileDescription: Diablo 2 LoD Glide to OpenGL Wrapper by Bayaraa.
- FileVersion: 1.3.3.0
- InternalName: glide3x.dll
- LegalCopyright: Copyright (C) 2023
- OriginalFilename: glide3x.dll
- ProductName: D2GL
- ProductVersion: 1.3.3.0
- _FileVersion: 1.3.3.0

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 2,101,890 | 2,102,272 | 6.64 | 0x60000020 |
| .rdata | 0x203000 | 643,824 | 644,096 | 5.89 | 0x40000040 |
| .data | 0x2a1000 | 89,712 | 17,408 | 5.85 | 0xc0000040 |
| .detourc | 0x2b7000 | 4,496 | 4,608 | 4.22 | 0x40000040 |
| .detourd | 0x2b9000 | 12 | 512 | 0.07 | 0xc0000040 |
| _RDATA | 0x2ba000 | 45,872 | 46,080 | 7.23 | 0x40000040 |
| .rsrc | 0x2c6000 | 1,016 | 1,024 | 3.74 | 0x40000040 |
| .reloc | 0x2c7000 | 117,132 | 117,248 | 6.76 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 147 | 30729 | 20 | VS2008 SP1 |
| 260 | 33218 | 12 | VS2022 |
| 259 | 33218 | 25 | VS2022 |
| 261 | 33218 | 26 | VS2022 |
| 257 | 33218 | 4 | VS2022 |
| 261 | 30038 | 3 | VS2022 |
| 257 | 33145 | 10 | VS2022 |
| 224 | 40629 | 1 | ? |
| 261 | 32535 | 54 | VS2022 |
| 1 | 0 | 448 | ? |
| 257 | 30795 | 7 | VS2022 |
| 261 | 33133 | 1 | VS2022 |
| 265 | 33523 | 36 | VS2022 |
| 256 | 33523 | 1 | VS2022 |
| 255 | 33523 | 1 | VS2022 |
| 151 | 0 | 1 | ? |
| 258 | 33523 | 1 | VS2022 |

## Imports

- **USER32.dll** (41): ScreenToClient, GetKeyState, GetCapture, TrackMouseEvent, GetForegroundWindow, LoadCursorW, SetCapture, SetCursor, GetClientRect, IsWindowUnicode, ReleaseCapture, GetCursorPos, GetClipboardData, SetWindowLongA, SetProcessDPIAware, ClipCursor, MapWindowPoints, AdjustWindowRect, SetWindowLongW, GetMonitorInfoW, MonitorFromWindow, GetWindowLongW, GetAsyncKeyState, PostMessageW, CallWindowProcA, DefWindowProcW, ClientToScreen, DrawTextA, SendMessageA, SetWindowPos, SetCursorPos, ShowCursor, ReleaseDC, CloseClipboard, SetClipboardData, EmptyClipboard, OpenClipboard, GetDC, MessageBoxA, SendMessageW, ... (+1)
- **KERNEL32.dll** (68): FindFirstFileW, CreateFileW, GetStdHandle, SetConsoleTextAttribute, ReadProcessMemory, GetCurrentProcess, VirtualAlloc, VirtualProtect, FindFirstFileExW, FindNextFileW, GetFileAttributesExW, GetCurrentThread, GetCurrentDirectoryW, CloseHandle, LoadLibraryA, QueryPerformanceFrequency, CreateWaitableTimerW, CreateSemaphoreW, ReleaseSemaphore, CreateThread, WaitForSingleObject, GetProcAddress, SetWaitableTimer, QueryPerformanceCounter, GetSystemTimeAsFileTime, GetTickCount, GetFileInformationByHandleEx, MultiByteToWideChar, GlobalAlloc, GlobalFree, GlobalLock, WideCharToMultiByte, GlobalUnlock, FreeLibrary, ReleaseSRWLockExclusive, AcquireSRWLockExclusive, WakeAllConditionVariable, SleepConditionVariableSRW, FindClose, GetModuleHandleA, ... (+28)
- **GDI32.dll** (10): SetPixelFormat, DeleteObject, GetPixel, BitBlt, SwapBuffers, ChoosePixelFormat, DeleteDC, CreateCompatibleDC, CreateCompatibleBitmap, SelectObject
- **OPENGL32.dll** (24): wglGetProcAddress, wglGetCurrentDC, glCopyTexSubImage2D, glReadBuffer, glTexSubImage2D, glBindTexture, glDeleteTextures, glTexImage2D, glTexParameteri, glGenTextures, glReadPixels, glPixelStorei, wglCreateContext, glClear, glClearColor, glFlush, glDrawElements, glDisable, glEnable, glGetString, glGetIntegerv, wglDeleteContext, wglMakeCurrent, glViewport
- **VERSION.dll** (3): VerQueryValueA, GetFileVersionInfoSizeA, GetFileVersionInfoA
- **WINMM.dll** (2): timeEndPeriod, timeBeginPeriod
- **MSVCP140.dll** (66): ??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@K@Z, ?_Xinvalid_argument@std@@YAXPBD@Z, ?read@?$basic_istream@DU?$char_traits@D@std@@@std@@QAEAAV12@PAD_J@Z, ?seekg@?$basic_istream@DU?$char_traits@D@std@@@std@@QAEAAV12@_JH@Z, ?tellg@?$basic_istream@DU?$char_traits@D@std@@@std@@QAE?AV?$fpos@U_Mbstatet@@@2@XZ, ??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@H@Z, ??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@_N@Z, ?classic@locale@std@@SAABV12@XZ, ?imbue@?$basic_ios@DU?$char_traits@D@std@@@std@@QAE?AVlocale@2@ABV32@@Z, ??5?$basic_istream@DU?$char_traits@D@std@@@std@@QAEAAV01@AAN@Z, ??0?$basic_iostream@DU?$char_traits@D@std@@@std@@QAE@PAV?$basic_streambuf@DU?$char_traits@D@std@@@1@@Z, ?_Xlength_error@std@@YAXPBD@Z, ?setw@std@@YA?AU?$_Smanip@_J@1@_J@Z, ??1?$basic_ios@DU?$char_traits@D@std@@@std@@UAE@XZ, ??7ios_base@std@@QBE_NXZ, ??1?$basic_istream@DU?$char_traits@D@std@@@std@@UAE@XZ, ?xsputn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MAE_JPBD_J@Z, ?xsgetn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MAE_JPAD_J@Z, ??1?$basic_streambuf@DU?$char_traits@D@std@@@std@@UAE@XZ, ??1?$basic_ostream@DU?$char_traits@D@std@@@std@@UAE@XZ, ?always_noconv@codecvt_base@std@@QBE_NXZ, ?clear@?$basic_ios@DU?$char_traits@D@std@@@std@@QAEXH_N@Z, ?_Xout_of_range@std@@YAXPBD@Z, ?_Fiopen@std@@YAPAU_iobuf@@PBDHH@Z, ?sputc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAEHD@Z, ??1_Lockit@std@@QAE@XZ, ??0_Lockit@std@@QAE@H@Z, ?_Getgloballocale@locale@std@@CAPAV_Locimp@12@XZ, ??Bid@locale@std@@QAEIXZ, ?uncaught_exception@std@@YA_NXZ, ?id@?$codecvt@DDU_Mbstatet@@@std@@2V0locale@2@A, ?sbumpc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAEHXZ, ?_Xbad_function_call@std@@YAXXZ, ?showmanyc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MAE_JXZ, ?_Getcat@?$codecvt@DDU_Mbstatet@@@std@@SAIPAPBVfacet@locale@2@PBV42@@Z, ?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEXXZ, ?flush@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV12@XZ, ?sputn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAE_JPBD_J@Z, ?getloc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QBE?AVlocale@2@XZ, ?widen@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEDD@Z, ... (+26)
- **IMM32.dll** (4): ImmReleaseContext, ImmSetCompositionWindow, ImmSetCandidateWindow, ImmGetContext
- **VCRUNTIME140.dll** (18): memcpy, memset, strstr, __std_type_info_name, _purecall, __std_exception_destroy, _except_handler4_common, __std_type_info_destroy_list, __std_exception_copy, __std_terminate, __CxxFrameHandler3, __current_exception_context, __current_exception, strchr, memchr, memmove, memcmp, _CxxThrowException
- **api-ms-win-crt-runtime-l1-1-0.dll** (16): _configure_narrow_argv, _initialize_narrow_environment, _initialize_onexit_table, _register_onexit_function, _execute_onexit_table, _crt_atexit, _cexit, _initterm, _initterm_e, _errno, exit, _invalid_parameter_noinfo, terminate, _seh_filter_dll, abort, _invalid_parameter_noinfo_noreturn
- **api-ms-win-crt-stdio-l1-1-0.dll** (22): _get_stream_buffer_pointers, fclose, ungetc, fgetc, fread, fwrite, fgetpos, _fseeki64, fsetpos, setvbuf, fflush, __stdio_common_vsprintf_s, __stdio_common_vfprintf, fopen_s, fseek, __stdio_common_vsprintf, ftell, __stdio_common_vsscanf, _wfopen, __acrt_iob_func, fputc, __stdio_common_vswprintf_s
- **api-ms-win-crt-filesystem-l1-1-0.dll** (2): _lock_file, _unlock_file
- **api-ms-win-crt-locale-l1-1-0.dll** (2): localeconv, ___lc_codepage_func
- **api-ms-win-crt-math-l1-1-0.dll** (27): __libm_sse2_acosf, ceil, _dsign, __libm_sse2_powf, _dtest, _fdtest, _CIfmod, _dclass, fabs, ldexp, round, acos, asin, atan, atan2, cos, exp, log, pow, sin, sqrt, tan, exp2, roundf, log2, _fpclass, floor
- **api-ms-win-crt-convert-l1-1-0.dll** (10): mbstowcs_s, atoi, _itoa_s, strtof, strtod, strtoll, strtoull, strtoul, atof, strtol
- **api-ms-win-crt-heap-l1-1-0.dll** (4): _callnewh, realloc, malloc, free
- **api-ms-win-crt-string-l1-1-0.dll** (15): _strnicmp, toupper, isdigit, _stricmp, wcsncmp, wcscpy_s, strncpy, strcmp, strlen, strcat, isalpha, strncmp, strncpy_s, isspace, tolower
- **api-ms-win-crt-time-l1-1-0.dll** (3): _localtime64_s, clock, _time64
- **api-ms-win-crt-utility-l1-1-0.dll** (2): abs, qsort

## Exports (60)

- 1 0x100345b0 _d2glConfigQueryImpl@4
- 2 0x10034660 _d2glConfigSetImpl@8
- 8 0x100b4a50 _grAADrawTriangle@24
- 9 0x100b40c0 _grAlphaBlendFunction@16
- 10 0x100b41b0 _grAlphaCombine@20
- 11 0x100b3ee0 _grBufferClear@12
- 12 0x100b3ef0 _grBufferSwap@4
- 13 0x100b41d0 _grChromakeyMode@4
- 14 0x100b4a10 _grChromakeyValue@4
- 15 0x100b4a30 _grClipWindow@16
- 16 0x100b41f0 _grColorCombine@20
- 17 0x100b4a20 _grColorMask@8
- 18 0x100b4210 _grConstantColorValue@4
- 19 0x100b4a10 _grCoordinateSpace@4
- 20 0x100b4a10 _grDepthBufferFunction@4
- 21 0x100b4a10 _grDepthBufferMode@4
- 22 0x100b4a10 _grDepthMask@4
- 23 0x100b4a10 _grDisable@4
- 24 0x100b4a10 _grDitherMode@4
- 25 0x100b4010 _grDrawLine@8
- 26 0x100b3f10 _grDrawPoint@4
- 27 0x100b4a00 _grDrawTriangle@12
- 28 0x100b4020 _grDrawVertexArray@12
- 29 0x100b4030 _grDrawVertexArrayContiguous@16
- 30 0x100b4a10 _grEnable@4
- 31 0x100b4a10 _grErrorSetCallback@4
- 32 0x10076e00 _grFinish@0
- 33 0x10076e00 _grFlush@0
- 34 0x100b48b0 _grGet@12
- 35 0x10026550 _grGetProcAddress@4
- 36 0x100b4980 _grGetString@4
- 37 0x10076e00 _grGlideInit@0
- 38 0x10076e00 _grGlideShutdown@0
- 39 0x100b4790 _grLfbLock@24
- 40 0x100b4810 _grLfbUnlock@8
- 41 0x100b4230 _grLoadGammaTable@16
- 42 0x100b4a10 _grRenderBuffer@4
- 43 0x100b49f0 _grSelectContext@4
- 44 0x100b4a10 _grSstSelect@4
- 45 0x100b49f0 _grSstWinClose@4
- 46 0x100b4890 _grSstWinOpen@28
- 47 0x100b4a00 _grTexClampMode@12
- 48 0x100b4a40 _grTexCombine@28
- 49 0x100b44e0 _grTexDownloadMipMap@16
- 50 0x100b45c0 _grTexDownloadTable@8
- 51 0x100b4a00 _grTexFilterMode@12
- 52 0x100b4970 _grTexMaxAddress@4
- 53 0x10026550 _grTexMinAddress@4
- 54 0x100b4a00 _grTexMipMapMode@12
- 55 0x100b4450 _grTexSource@16
- 56 0x100b4a60 _grTexTextureMemRequired@8
- 57 0x100b4a00 _grVertexLayout@12
- 58 0x100b4a30 _grViewport@16
- 59 0x100b4420 _guGammaCorrectionRGB@12
- 60 0x10034760 _setCustomScreenSize@8
- 3 0x100347e0 d2glCopyTooltipScreenShot
- 4 0x100348c0 d2glGetGlobalXOffset
- 5 0x100348e0 d2glGetGlobalYOffset
- 6 0x10034780 d2glIsReady
- 7 0x10034790 d2glToggleInterface
