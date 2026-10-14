/*
 * _unattributed/after_functions_SaveFunctions_after_unit49.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x102f10d0 - 0x102f11d0
 * Functions     : 5
 * Attribution   : gap=5
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x102f10d0  (ghidra: FUN_102f10d0)  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_102f10d0(void)

{
  DAT_104e52b8 = 0;
  DAT_104e52b0 = 0;
  return;
}


// 0x102f10f0  (ghidra: FUN_102f10f0)  [gap]
FARPROC __fastcall sub_GetDllOffset_102f10f0(int param_1,int param_2)

{
  LPCWSTR lpModuleName;
  HMODULE hModule;
  FARPROC pFVar1;
  wchar_t *local_40 [4];
  wchar_t *local_30;
  wchar_t *local_2c;
  wchar_t *local_28;
  wchar_t *local_24;
  wchar_t *local_20;
  wchar_t *local_1c;
  wchar_t *local_18;
  wchar_t *local_14;
  wchar_t *local_10;
  wchar_t *local_c;
  wchar_t *local_8;
  
  local_40[0] = L"D2CLIENT.dll";
  local_40[1] = L"D2COMMON.dll";
  local_40[2] = L"D2GFX.dll";
  local_40[3] = L"D2LANG.dll";
  local_30 = L"D2WIN.dll";
  local_2c = L"D2NET.dll";
  local_28 = L"D2GAME.dll";
  local_24 = L"D2LAUNCH.dll";
  local_20 = L"FOG.dll";
  local_1c = L"BNCLIENT.dll";
  local_18 = L"STORM.dll";
  local_14 = L"D2CMP.dll";
  local_10 = L"D2MULTI.dll";
  local_c = L"D2MCPCLIENT.dll";
  local_8 = L"D2SOUND.dll";
  lpModuleName = local_40[param_1];
  hModule = GetModuleHandleW(lpModuleName);
  if (hModule == (HMODULE)0x0) {
    hModule = LoadLibraryW(lpModuleName);
    if (hModule == (HMODULE)0x0) {
      return (FARPROC)0x0;
    }
  }
  if (param_2 < 0) {
    pFVar1 = GetProcAddress(hModule,(LPCSTR)-param_2);
    return pFVar1;
  }
  return (FARPROC)((int)&hModule->unused + param_2);
}


// 0x102f11a0  (ghidra: FUN_102f11a0)  [gap]
uint8_t * sub_102f11a0(void)

{
  sub_102f11c0();
  return &DAT_104e52b0;
}


// 0x102f11c0  (ghidra: FUN_102f11c0)  [gap]
uint8_t * sub_102f11c0(void)

{
  sub_102f11d0();
  return &DAT_104e52b0;
}


// 0x102f11d0  (ghidra: FUN_102f11d0)  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t * sub_102f11d0(void)

{
  DAT_104e52b0 = 0;
  DAT_104e52b4 = 0;
  DAT_104e52b8 = 0;
  return &DAT_104e52b0;
}

