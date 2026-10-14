/*
 * lib/msvc_crt_stl_part01.cpp
 * Reconstructed from Ghidra output of PD2_EXT.dll (Project Diablo 2).
 * Address range : 0x1001a000 - 0x1001a02c
 * Functions     : 12
 * Attribution   : lib=12
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "pd2_ext_decomp.h"


// 0x1001a000  [lib]
/* WARNING: Control flow encountered bad instruction data */
/* 0x13d28  1  GetFileVersionInfoA  (forwarder -> version.GetFileVersionInfoA) */

BOOL GetFileVersionInfoA(LPCSTR lptstrFilename,DWORD dwHandle,DWORD dwLen,LPVOID lpData)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// 0x1001a004  [lib]
/* WARNING: Control flow encountered bad instruction data */
/* 0x13d5c  2  GetFileVersionInfoSizeA  (forwarder -> version.GetFileVersionInfoSizeA) */

DWORD GetFileVersionInfoSizeA(LPCSTR lptstrFilename,LPDWORD lpdwHandle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// 0x1001a008  [lib]
/* WARNING: Control flow encountered bad instruction data */
/* 0x13d94  3  GetFileVersionInfoSizeW  (forwarder -> version.GetFileVersionInfoSizeW) */

DWORD GetFileVersionInfoSizeW(LPCWSTR lptstrFilename,LPDWORD lpdwHandle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// 0x1001a00c  [lib]
/* WARNING: Control flow encountered bad instruction data */
/* 0x13dc8  4  GetFileVersionInfoW  (forwarder -> version.GetFileVersionInfoW) */

BOOL GetFileVersionInfoW(LPCWSTR lptstrFilename,DWORD dwHandle,DWORD dwLen,LPVOID lpData)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// 0x1001a010  [lib]
/* WARNING: Control flow encountered bad instruction data */
/* 0x13df1  5  VerFindFileA  (forwarder -> version.VerFindFileA) */

DWORD VerFindFileA(DWORD uFlags,LPCSTR szFileName,LPCSTR szWinDir,LPCSTR szAppDir,LPSTR szCurDir,
                  PUINT lpuCurDirLen,LPSTR szDestDir,PUINT lpuDestDirLen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// 0x1001a014  [lib]
/* WARNING: Control flow encountered bad instruction data */
/* 0x13e13  6  VerFindFileW  (forwarder -> version.VerFindFileW) */

DWORD VerFindFileW(DWORD uFlags,LPCWSTR szFileName,LPCWSTR szWinDir,LPCWSTR szAppDir,LPWSTR szCurDir
                  ,PUINT lpuCurDirLen,LPWSTR szDestDir,PUINT lpuDestDirLen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// 0x1001a018  [lib]
/* WARNING: Control flow encountered bad instruction data */
/* 0x13e38  7  VerInstallFileA  (forwarder -> version.VerInstallFileA) */

DWORD VerInstallFileA(DWORD uFlags,LPCSTR szSrcFileName,LPCSTR szDestFileName,LPCSTR szSrcDir,
                     LPCSTR szDestDir,LPCSTR szCurDir,LPSTR szTmpFile,PUINT lpuTmpFileLen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// 0x1001a01c  [lib]
/* WARNING: Control flow encountered bad instruction data */
/* 0x13e60  8  VerInstallFileW  (forwarder -> version.VerInstallFileW) */

DWORD VerInstallFileW(DWORD uFlags,LPCWSTR szSrcFileName,LPCWSTR szDestFileName,LPCWSTR szSrcDir,
                     LPCWSTR szDestDir,LPCWSTR szCurDir,LPWSTR szTmpFile,PUINT lpuTmpFileLen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// 0x1001a020  [lib]
/* WARNING: Control flow encountered bad instruction data */
/* 0x13e89  9  VerLanguageNameA  (forwarder -> version.VerLanguageNameA) */

DWORD VerLanguageNameA(DWORD wLang,LPSTR szLang,DWORD cchLang)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// 0x1001a024  [lib]
/* WARNING: Control flow encountered bad instruction data */
/* 0x13eb3  10  VerLanguageNameW  (forwarder -> version.VerLanguageNameW) */

DWORD VerLanguageNameW(DWORD wLang,LPWSTR szLang,DWORD cchLang)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// 0x1001a028  [lib]
/* WARNING: Control flow encountered bad instruction data */
/* 0x13edb  11  VerQueryValueA  (forwarder -> version.VerQueryValueA) */

BOOL VerQueryValueA(LPCVOID pBlock,LPCSTR lpSubBlock,LPVOID *lplpBuffer,PUINT puLen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// 0x1001a02c  [lib]
/* WARNING: Control flow encountered bad instruction data */
/* 0x13f01  14  VerQueryValueW  (forwarder -> version.VerQueryValueW) */

BOOL VerQueryValueW(LPCVOID pBlock,LPCWSTR lpSubBlock,LPVOID *lplpBuffer,PUINT puLen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Functions missing from the main export (no direct callers; reached through data tables).
// Created and decompiled by AddFunctions.java from PD2_EXT.dll

