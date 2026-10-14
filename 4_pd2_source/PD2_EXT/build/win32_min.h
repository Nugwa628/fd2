/*
 * win32_min.h - hand-written: the few Win32 declarations pd2_ext.cpp needs, for builds without a Windows SDK
 * (clang-cl --target=i686-pc-windows-msvc on Linux, -DPD2EXT_NO_SDK). Visual Studio builds use <windows.h>.
 */
#pragma once
typedef int BOOL;
typedef unsigned char BYTE;
typedef unsigned long DWORD;
typedef unsigned int UINT_PTR;
typedef void *LPVOID, *HINSTANCE, *HMODULE, *HWND;
typedef const char *LPCSTR;
#define WINAPI __stdcall
#define TRUE 1
#define NULL 0
#define DLL_PROCESS_ATTACH 1
#define PAGE_READWRITE 0x04
#define PAGE_EXECUTE_READWRITE 0x40
extern "C" {
__declspec(dllimport) BOOL __stdcall VirtualProtect(LPVOID lpAddress, unsigned long dwSize, DWORD flNewProtect, DWORD *lpflOldProtect);
__declspec(dllimport) HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName);
__declspec(dllimport) HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName);
__declspec(dllimport) int __stdcall MessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, unsigned int uType);
}
