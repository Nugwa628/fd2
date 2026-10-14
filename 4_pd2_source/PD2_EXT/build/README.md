# PD2_EXT build attempt

This folder holds an attempt to rebuild `PD2_EXT.dll` from the reconstructed source. It was made in the Linux
container on 2026-10-14. Every file here is written by hand: the generator in `tools/src` doesn't produce or touch
them, and the generated files around this folder are not edited.

| File | What it is |
|---|---|
| `pd2_ext.cpp` | The 4 app functions (`0x10001000`–`0x10001241`), cleaned up by hand from `../dllmain.cpp` and checked against the disassembly of the shipped DLL |
| `version.def` | The 12 `version.dll` forwarders, with the same names and ordinals as `../exports.tsv`. Ordinals 12 and 13 are unused, and `VerQueryValueW` is `@14`. |
| `win32_min.h` | The 4 Win32 declarations needed when no Windows SDK is available (`-DPD2EXT_NO_SDK`) |
| `PD2_EXT.sln`, `PD2_EXT.vcxproj` | Visual Studio 2022 project (v143, Win32, static CRT `/MT`, `version.def`). **Untested**, because there is no MSVC here. |
| `Makefile` | Linux builds: `make` (clang-cl + lld-link), `make mingw`, `make compare`, `make clean` |
| `compare_pe.py` | Compares the export table (ordinal, name, forwarder, DLL name) and imports with the shipped DLL using pefile |

The rest of the shipped DLL (472 functions in `../lib/`) is the statically linked MSVC CRT. A build doesn't use
that code; it gets the CRT from its own toolchain, or skips it entirely with `-DPD2EXT_NO_CRT`.

## Result

| Toolchain | Compiles | Links | Exports vs shipped (pefile) |
|---|---|---|---|
| clang-cl 18 `--target=i686-pc-windows-msvc` + lld-link 18 (no SDK, no CRT: `/nodefaultlib /entry:DllMain`, import libs from `llvm-dlltool`) | yes, 0 warnings at `/W4` | yes, 4 KB DLL | 11 of 12 identical. `VerQueryValueW` gets ordinal 12 instead of 14 (see below). The DLL name is `PD2_EXT.dll` and the ordinal base is 1. |
| mingw-w64 13 `i686-w64-mingw32-g++ -shared -static` + GNU ld (`version.def`) | yes | yes, 15 KB DLL | **all 12 identical** (ordinal, name, forwarder `version.X`, ordinal base 1, DLL name `PD2_EXT.dll`) |
| MSVC v143 (`PD2_EXT.sln`) | not tried | not tried | not tried |

Both builds are 32-bit (machine `0x14c`) and import only `VirtualProtect`/`GetModuleHandleA`/`LoadLibraryA`
(KERNEL32) and `MessageBoxA` (USER32). The mingw build also imports CRT start-up functions and `strrchr` from
`msvcrt.dll`. The shipped DLL imports 73 KERNEL32 functions, almost all of them for its CRT.

The clang build was spot-checked with `llvm-objdump`. It writes the same patches: `E8` with
`rel32 = handler - (site + 5)` at Game.exe `0x4082dd` and `0x40763f`, 33 `NOP`s at `0x4083ef`, and the Fog.dll
`+0x17ea7` redirect behind the `+0xff5f`/`+0xff63` version check. The calling conventions are also the same:
`DllMain` ends in `ret 0xc` and `FogInstallPath` in `ret 8`. Nothing has been run on Windows or in the game. Byte
equality with the shipped DLL is not a goal, since MSVC 14.39 code generation and its CRT can't be reproduced here.

### Toolchain problems found

* **lld-link 18 and forwarders:** in a `.def` file it decorates x86 forwarder targets with `_`
  (`_version.GetFileVersionInfoA`). The `Makefile` therefore passes the forwarders as `/export:Name=version.Name,@N`.
  lld also ignores the explicit ordinal on a forwarder and numbers forwarders itself, so `VerQueryValueW` ends up as
  `@12`. This is harmless in practice: every importer in the PD2 install (Storm.dll imports `GetFileVersionInfoA`,
  `GetFileVersionInfoSizeA` and `VerQueryValueA` from `PD2_EXT.dll`) imports by name. MSVC `link` and GNU ld
  honour `@14`.
* **clang-cl with the mingw-w64 headers** fails in `winnt.h` (`__buildmemorybarrier`). That's why there is
  `win32_min.h` (`-DPD2EXT_NO_SDK`). With a real Windows SDK (or `xwin`), plain `<windows.h>` should work.

## How to build

```
make            # bin/PD2_EXT.dll        (needs clang-cl-18, lld-link-18, llvm-dlltool-18: apt-get install clang lld llvm)
make mingw      # bin/mingw/PD2_EXT.dll  (needs g++-mingw-w64-i686)
make compare    # SHIPPED=/path/to/PD2_EXT.dll; needs python3 + pefile
```

On Windows, open `PD2_EXT.sln` and build `Release|x86`. The output is `bin\Release\PD2_EXT.dll`. All build
output (`bin/`, `obj/`, `*.dll`, `*.obj`, `*.lib`) is git-ignored.
