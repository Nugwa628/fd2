# SGD2FreeDisplayFix.dll

- Size: 220,672 bytes
- Machine: 0x14c, DLL, subsystem 3
- TimeDateStamp: 0x5e086f14 (2019-12-29 09:17:08 UTC)
- ImageBase 0x10000000, entry 0x10026686 (in .text)
- Linker 14.24; .NET: no; overlay 0 bytes
- PDB: `E:\Shared\Documents\Visual Studio 2019\Projects\SlashGaming-Diablo-II-Free-Display-Fix\Release\SGD2FreeDisplayFix.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 29
- TLS callbacks: none
- Packer/protector heuristics: none

## Version resource

- Build: 2019
- Comments: Patch to fix symbol cycling on resolution change. Licensed under Affero GPL v3+.
- CompanyName: SlashGaming
- Developer: Mir Drualga
- FileDescription: SlashGaming Diablo II Free Display Fix
- InternalName: SlashGaming Diablo II Free Display Fix
- LegalCopyright: Copyright (C) 2019  Mir Drualga
- LegalTrademarks: All rights reserved.
- PrivateBuild: 
- ProductName: SlashGaming Diablo II Free Display Fix
- ProductVersion: 1.0.0.0
- SpecialBuild: 
- Support: reddit.com/r/SlashDiablo
- _FileVersion: 1.0.0.0

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 161,343 | 161,792 | 6.49 | 0x60000020 |
| .rdata | 0x29000 | 24,388 | 24,576 | 5.25 | 0x40000040 |
| .data | 0x2f000 | 2,436 | 1,536 | 4.03 | 0xc0000040 |
| .rsrc | 0x30000 | 24,720 | 25,088 | 2.83 | 0x40000040 |
| .reloc | 0x37000 | 6,616 | 6,656 | 6.70 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 147 | 30729 | 12 | VS2008 SP1 |
| 257 | 28117 | 4 | VS2019 |
| 261 | 28117 | 24 | VS2019 |
| 260 | 28117 | 10 | VS2019 |
| 259 | 28117 | 6 | VS2019 |
| 261 | 28314 | 1 | VS2019 |
| 257 | 26715 | 9 | VS2017 |
| 1 | 0 | 158 | ? |
| 265 | 28314 | 78 | VS2019 |
| 256 | 28314 | 1 | VS2019 |
| 255 | 28314 | 1 | VS2019 |
| 151 | 0 | 1 | ? |
| 258 | 28314 | 1 | VS2019 |

## Imports

- **VERSION.dll** (3): GetFileVersionInfoSizeW, GetFileVersionInfoW, VerQueryValueW
- **KERNEL32.dll** (30): GetSystemTimeAsFileTime, Sleep, GetSystemTime, GetLastError, GetProcAddress, WriteProcessMemory, GetCurrentProcess, InitializeSListHead, FreeLibrary, MultiByteToWideChar, CloseHandle, LeaveCriticalSection, LoadLibraryW, InitializeCriticalSectionAndSpinCount, DeleteCriticalSection, SetEvent, ResetEvent, WaitForSingleObjectEx, CreateEventW, GetModuleHandleW, UnhandledExceptionFilter, SetUnhandledExceptionFilter, AreFileApisANSI, TerminateProcess, IsProcessorFeaturePresent, IsDebuggerPresent, QueryPerformanceCounter, GetCurrentProcessId, GetCurrentThreadId, EnterCriticalSection
- **USER32.dll** (1): MessageBoxW
- **GDI32.dll** (2): CreateCompatibleDC, CreateCompatibleBitmap
- **MSVCP140.dll** (36): ?id@?$numpunct@_W@std@@2V0locale@2@A, _Mbrtowc, ?_Xbad_alloc@std@@YAXXZ, ?_Xlength_error@std@@YAXPBD@Z, ?_Getcvt@_Locinfo@std@@QBE?AU_Cvtvec@@XZ, ?__ExceptionPtrCreate@@YAXPAX@Z, ?__ExceptionPtrCopy@@YAXPAXPBX@Z, ?_Execute_once@std@@YAHAAUonce_flag@1@P6GHPAX1PAPAX@Z1@Z, ?_XGetLastError@std@@YAXXZ, ?__ExceptionPtrToBool@@YA_NPBX@Z, ?_Incref@facet@locale@std@@UAEXXZ, ?_Decref@facet@locale@std@@UAEPAV_Facet_base@3@XZ, ?_Getgloballocale@locale@std@@CAPAV_Locimp@12@XZ, ?_Init@locale@std@@CAPAV_Locimp@12@_N@Z, ??1facet@locale@std@@MAE@XZ, ??0facet@locale@std@@IAE@I@Z, ??Bid@locale@std@@QAEIXZ, ?c_str@?$_Yarn@D@std@@QBEPBDXZ, ?_Gettrue@_Locinfo@std@@QBEPBDXZ, ?_Getfalse@_Locinfo@std@@QBEPBDXZ, ??1_Locinfo@std@@QAE@XZ, ??0_Locinfo@std@@QAE@PBD@Z, ??1_Lockit@std@@QAE@XZ, ??0_Lockit@std@@QAE@H@Z, ?_Syserror_map@std@@YAPBDH@Z, ?_Winerror_map@std@@YAHH@Z, ?_Xout_of_range@std@@YAXPBD@Z, ?_Winerror_message@std@@YAKKPADK@Z, _Mtx_unlock, _Mtx_init_in_situ, _Mtx_lock, _Mtx_destroy_in_situ, ?_Throw_C_error@std@@YAXH@Z, ?__ExceptionPtrRethrow@@YAXPBX@Z, ?__ExceptionPtrDestroy@@YAXPAX@Z, ?id@?$numpunct@D@std@@2V0locale@2@A
- **VCRUNTIME140.dll** (13): memset, memmove, memcpy, memchr, __current_exception, __std_exception_copy, __std_exception_destroy, __std_terminate, __CxxFrameHandler3, _except_handler4_common, __current_exception_context, _CxxThrowException, __std_type_info_destroy_list
- **api-ms-win-crt-heap-l1-1-0.dll** (4): free, malloc, _callnewh, calloc
- **api-ms-win-crt-runtime-l1-1-0.dll** (16): _configure_narrow_argv, _invalid_parameter_noinfo_noreturn, exit, _initterm_e, _initterm, _cexit, _crt_atexit, _execute_onexit_table, _register_onexit_function, _initialize_onexit_table, _initialize_narrow_environment, terminate, _seh_filter_dll, abort, strerror_s, _errno
- **api-ms-win-crt-utility-l1-1-0.dll** (2): srand, rand
- **api-ms-win-crt-math-l1-1-0.dll** (7): ceil, _fdsign, _dclass, _fdclass, _ldclass, _ldsign, _dsign
- **api-ms-win-crt-stdio-l1-1-0.dll** (3): fwrite, __acrt_iob_func, __stdio_common_vsnprintf_s
- **api-ms-win-crt-locale-l1-1-0.dll** (2): localeconv, ___lc_codepage_func

## Exports (40)

- 1 0x1001edf0 ??0GameAddress@mapi@@AAE@H@Z
- 2 0x1001e900 ??0GamePatch@mapi@@AAE@$$QAVGameAddress@1@$$QAV?$vector@EV?$allocator@E@std@@@std@@@Z
- 3 0x1001e7f0 ??0GamePatch@mapi@@AAE@$$QAVGameAddress@1@ABV?$vector@EV?$allocator@E@std@@@std@@@Z
- 4 0x1001e900 ??0GamePatch@mapi@@AAE@ABVGameAddress@1@$$QAV?$vector@EV?$allocator@E@std@@@std@@@Z
- 5 0x1001e7f0 ??0GamePatch@mapi@@AAE@ABVGameAddress@1@ABV?$vector@EV?$allocator@E@std@@@std@@@Z
- 6 0x10001aa0 ??0GamePatch@mapi@@QAE@$$QAV01@@Z
- 7 0x1001e600 ??0GamePatch@mapi@@QAE@ABV01@@Z
- 8 0x10001760 ??1GamePatch@mapi@@QAE@XZ
- 9 0x10009720 ??4GameAddress@mapi@@QAEAAV01@$$QAV01@@Z
- 10 0x10009720 ??4GameAddress@mapi@@QAEAAV01@ABV01@@Z
- 11 0x10001940 ??4GamePatch@mapi@@QAEAAV01@$$QAV01@@Z
- 12 0x1001e710 ??4GamePatch@mapi@@QAEAAV01@ABV01@@Z
- 13 0x1001e9a0 ?Apply@GamePatch@mapi@@QAEXXZ
- 14 0x1001ee30 ?FromDecoratedName@GameAddress@mapi@@SA?AV12@ABVpath@filesystem@std@@V?$basic_string_view@DU?$char_traits@D@std@@@5@@Z
- 15 0x1001ee00 ?FromDecoratedName@GameAddress@mapi@@SA?AV12@W4DefaultLibrary@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
- 16 0x1001ef30 ?FromOffset@GameAddress@mapi@@SA?AV12@ABVpath@filesystem@std@@H@Z
- 17 0x1001ef00 ?FromOffset@GameAddress@mapi@@SA?AV12@W4DefaultLibrary@2@H@Z
- 18 0x1001ef80 ?FromOrdinal@GameAddress@mapi@@SA?AV12@ABVpath@filesystem@std@@F@Z
- 19 0x1001ef50 ?FromOrdinal@GameAddress@mapi@@SA?AV12@W4DefaultLibrary@2@F@Z
- 20 0x1001f6b0 ?GetDefaultLibraryPathWithRedirect@mapi@@YAABVpath@filesystem@std@@W4DefaultLibrary@1@@Z
- 21 0x1001f610 ?GetGameExecutablePath@mapi@@YAABVpath@filesystem@std@@XZ
- 22 0x1000a7a0 ?GetGameVersionName@d2@@YA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@W4GameVersion@1@@Z
- 23 0x1000a8c0 ?GetRunningGameVersionId@d2@@YA?AW4GameVersion@1@XZ
- 24 0x1000a9d0 ?GetRunningGameVersionName@d2@@YA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
- 25 0x1000aa80 ?IsGameVersionAtLeast1_14@d2@@YA_NW4GameVersion@1@@Z
- 26 0x1000aa90 ?IsRunningGameVersionAtLeast1_14@d2@@YA_NXZ
- 27 0x1001ea20 ?MakeGameBackBranchPatch@GamePatch@mapi@@SA?AV12@$$QAVGameAddress@2@W4BranchType@2@P6AXXZI@Z
- 28 0x1001ea20 ?MakeGameBackBranchPatch@GamePatch@mapi@@SA?AV12@ABVGameAddress@2@W4BranchType@2@P6AXXZI@Z
- 29 0x1001eb80 ?MakeGameBranchPatch@GamePatch@mapi@@SA?AV12@$$QAVGameAddress@2@W4BranchType@2@P6AXXZI@Z
- 30 0x1001ead0 ?MakeGameBranchPatch@GamePatch@mapi@@SA?AV12@ABVGameAddress@2@W4BranchType@2@P6AXXZI@Z
- 31 0x1001ec30 ?MakeGameBufferPatch@GamePatch@mapi@@SA?AV12@$$QAVGameAddress@2@PBEI@Z
- 32 0x1001ec30 ?MakeGameBufferPatch@GamePatch@mapi@@SA?AV12@ABVGameAddress@2@PBEI@Z
- 33 0x1001ed10 ?MakeGameNopPatch@GamePatch@mapi@@SA?AV12@$$QAVGameAddress@2@I@Z
- 34 0x1001ed10 ?MakeGameNopPatch@GamePatch@mapi@@SA?AV12@ABVGameAddress@2@I@Z
- 35 0x1001e9e0 ?Remove@GamePatch@mapi@@QAEXXZ
- 36 0x1001e7d0 ?__autoclassinit2@GamePatch@mapi@@QAEXI@Z
- 37 0x10001190 ?raw_address@GameAddress@mapi@@QBEHXZ
- 38 0x100202a0 MAPI_GamePatch_Apply
- 39 0x10020250 MAPI_GamePatch_Deinit
- 40 0x100202e0 MAPI_GamePatch_Remove
