# Linux build of PD2_EXT.dll (hand-written; see README.md). Outputs go to bin/ (git-ignored).
#   make            clang-cl + lld-link, MSVC ABI, no Windows SDK and no CRT  -> bin/PD2_EXT.dll
#   make mingw      i686-w64-mingw32-g++ (GNU ld), mingw headers + CRT        -> bin/mingw/PD2_EXT.dll
#   make compare    exports/forwarders of both against the shipped DLL (SHIPPED=..., needs python3 + pefile)
#   make clean
CLANG_CL ?= clang-cl-18
LLD_LINK ?= lld-link-18
DLLTOOL  ?= llvm-dlltool-18
MINGW_CXX ?= i686-w64-mingw32-g++
SHIPPED  ?= /home/user/fd2_work/bin/PD2_EXT.dll

# lld-link 18 prefixes forwarder targets from a .def with '_' on x86, so the forwarders are passed as /export:
# options generated from version.def (it still numbers forwarders itself: VerQueryValueW gets 12, not 14)
FORWARDERS = $(shell sed -n 's/^ *\([A-Za-z]*\) *= *\(version\.[A-Za-z]*\) *@\([0-9]*\).*/\/export:\1=\2,@\3/p' version.def)

all: bin/PD2_EXT.dll

bin/kernel32.lib: | bin
	printf 'LIBRARY KERNEL32.dll\nEXPORTS\nVirtualProtect@16\nGetModuleHandleA@4\nLoadLibraryA@4\n' > bin/kernel32.def
	$(DLLTOOL) -m i386 -d bin/kernel32.def -l $@

bin/user32.lib: | bin
	printf 'LIBRARY USER32.dll\nEXPORTS\nMessageBoxA@16\n' > bin/user32.def
	$(DLLTOOL) -m i386 -d bin/user32.def -l $@

bin/pd2_ext.obj: pd2_ext.cpp win32_min.h | bin
	$(CLANG_CL) --target=i686-pc-windows-msvc /nologo /c /O2 /GS- /W4 /DPD2EXT_NO_SDK /DPD2EXT_NO_CRT /Fo$@ pd2_ext.cpp

bin/PD2_EXT.dll: bin/pd2_ext.obj bin/kernel32.lib bin/user32.lib version.def
	$(LLD_LINK) /nologo /dll /machine:x86 /nodefaultlib /entry:DllMain /noimplib $(FORWARDERS) /out:$@ \
	    bin/pd2_ext.obj bin/kernel32.lib bin/user32.lib

mingw: bin/mingw/PD2_EXT.dll

bin/mingw/PD2_EXT.dll: pd2_ext.cpp version.def
	mkdir -p bin/mingw
	$(MINGW_CXX) -O2 -Wall -Wextra -shared -static -s -o $@ pd2_ext.cpp version.def

compare: bin/PD2_EXT.dll
	python3 -I compare_pe.py $(SHIPPED) bin/PD2_EXT.dll $(wildcard bin/mingw/PD2_EXT.dll) || true

bin:
	mkdir -p bin

clean:
	rm -rf bin obj

.PHONY: all mingw compare clean
