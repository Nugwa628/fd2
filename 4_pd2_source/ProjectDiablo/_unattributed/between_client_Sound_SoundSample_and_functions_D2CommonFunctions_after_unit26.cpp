/*
 * _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_after_unit26.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x10266e27 - 0x10266e70
 * Functions     : 4
 * Attribution   : gap=4
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x10266e27  (ghidra: FUN_10266e27)  [gap]
void __thiscall sub_10266e27(void *this,byte param_1)

{
  sub_1025f250((void *)((int)this - *(int *)((int)this + -4)),param_1);
  return;
}


// 0x10266e30  (ghidra: FUN_10266e30)  [gap]
void * __fastcall sub_10266e30(void *param_1)

{
  sub_1022fa80(param_1);
  return param_1;
}


// 0x10266e50  (ghidra: FUN_10266e50)  [gap]
void * __fastcall sub_10266e50(void *param_1)

{
  sub_102384d0(param_1);
  return param_1;
}


// 0x10266e70  (ghidra: FUN_10266e70)  [gap]
void * __fastcall sub_10266e70(void *param_1)

{
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */

  sub_10231cb0(param_1,&stack0x00000004);
  thunk_FUN_1020fc60((uint32_t *)&stack0x00000004);
  return param_1;
}

