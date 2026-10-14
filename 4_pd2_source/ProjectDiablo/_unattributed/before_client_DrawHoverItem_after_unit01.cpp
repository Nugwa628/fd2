/*
 * _unattributed/before_client_DrawHoverItem_after_unit01.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x10219510 - 0x10219580
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


// 0x10219510  (ghidra: FUN_10219510)  [gap]
uint64_t __fastcall sub_10219510(uint32_t *param_1)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  uint32_t extraout_EDX;
  uint32_t *extraout_EDX_00;
  uint32_t *local_8;
  
  local_8 = param_1;
  local_8 = (uint32_t *)sub_1020fe80(param_1);
  local_8 = (uint32_t *)*local_8;
  puVar2 = (uint32_t *)sub_1020fe80(extraout_EDX);
  *param_1 = *puVar2;
  puVar2 = (uint32_t *)sub_1020fe80(&local_8);
  uVar1 = *puVar2;
  *extraout_EDX_00 = uVar1;
  return CONCAT44(extraout_EDX_00,uVar1);
}


// 0x10219540  (ghidra: FUN_10219540)  [gap]
uint8_t * sub_10219540(void)

{
  return &DAT_104e6f38;
}


// 0x10219550  (ghidra: FUN_10219550)  [gap]
int __fastcall
sub_10219550(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5)

{
  uint32_t *puVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  puVar1 = (uint32_t *)sub_10219540();
  iVar2 = __stdio_common_vswprintf_s(*puVar1,puVar1[1],param_1,param_2,param_3,uVar3,param_5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}


// 0x10219580  (ghidra: FUN_10219580)  [gap]
void __cdecl sub_10219580(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint8_t  stack0x00000010;   /* not traced by Ghidra: address of a stack slot */

  sub_10219550(param_1,param_2,param_3,param_1,&stack0x00000010);
  return;
}

