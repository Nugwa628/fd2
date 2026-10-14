/*
 * _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit19_10250840.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x10250840 - 0x10250bb0
 * Functions     : 24
 * Attribution   : gap=24
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x10250840  (ghidra: FUN_10250840)  [gap]
void __fastcall sub_10250840(char *param_1)

{
  sub_102509b0(param_1);
  return;
}


// 0x10250850  (ghidra: FUN_10250850)  [gap]
void __fastcall sub_10250850(char *param_1)

{
  sub_10250970(param_1);
  return;
}


// 0x10250860  (ghidra: FUN_10250860)  [gap]
void __fastcall sub_10250860(char *param_1)

{
  sub_10250990(param_1);
  return;
}


// 0x10250870  (ghidra: FUN_10250870)  [gap]
void __fastcall sub_10250870(char *param_1)

{
  sub_10250950(param_1);
  return;
}


// 0x10250880  (ghidra: FUN_10250880)  [gap]
char * __fastcall sub_10250880(char *param_1,uint32_t param_2,uint32_t param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint32_t extraout_EDX;
  
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  sub_1020fe80(param_3);
  iVar3 = sub_1020fe80(param_2);
  iVar3 = sub_1024f1b0(iVar3,extraout_EDX);
  return param_1 + (iVar3 - (int)pcVar1);
}


// 0x102508c0  (ghidra: FUN_102508c0)  [gap]
void __fastcall sub_102508c0(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  char *pcVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  pcVar1 = (char *)sub_1020fe80(param_2);
  client_DrawHoverItem_102250a0(param_1,pcVar1);
  uVar2 = sub_1020fe80(param_4);
  uVar3 = sub_1020fe80(param_3);
  sub_1024f1d0(param_1,uVar3,uVar2);
  return;
}


// 0x10250900  (ghidra: FUN_10250900)  [gap]
void __cdecl sub_10250900(uint32_t param_1)

{
  char *pcVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  pcVar1 = (char *)sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_1023ddd0(this,pcVar1);
  return;
}


// 0x10250930  (ghidra: FUN_10250930)  [gap]
void __fastcall sub_10250930(int param_1)

{
  uint32_t uVar1;
  uint32_t extraout_ECX;
  
  uVar1 = sub_1020fe80(*(uint32_t *)(param_1 + 4));
  sub_10250a70(extraout_ECX,uVar1);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x28;
  return;
}


// 0x10250950  (ghidra: FUN_10250950)  [gap]
int __fastcall sub_10250950(char *param_1)

{
  bool bVar1;
  int extraout_ECX;
  int iVar2;
  
  bVar1 = sub_102509f0(param_1);
  iVar2 = extraout_ECX + 8;
  if (!bVar1) {
    iVar2 = 0;
  }
  return iVar2;
}


// 0x10250970  (ghidra: FUN_10250970)  [gap]
int __fastcall sub_10250970(char *param_1)

{
  bool bVar1;
  int extraout_ECX;
  int iVar2;
  
  bVar1 = sub_10250a00(param_1);
  iVar2 = extraout_ECX + 8;
  if (!bVar1) {
    iVar2 = 0;
  }
  return iVar2;
}


// 0x10250990  (ghidra: FUN_10250990)  [gap]
int __fastcall sub_10250990(char *param_1)

{
  char cVar1;
  int extraout_ECX;
  int iVar2;
  
  cVar1 = sub_10250a10(param_1);
  iVar2 = extraout_ECX + 8;
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  return iVar2;
}


// 0x102509b0  (ghidra: FUN_102509b0)  [gap]
int __fastcall sub_102509b0(char *param_1)

{
  bool bVar1;
  int extraout_ECX;
  int iVar2;
  
  bVar1 = sub_10250710(param_1);
  iVar2 = extraout_ECX + 8;
  if (!bVar1) {
    iVar2 = 0;
  }
  return iVar2;
}


// 0x102509d0  (ghidra: FUN_102509d0)  [gap]
uint32_t __fastcall sub_102509d0(char *param_1)

{
  bool bVar1;
  int extraout_ECX;
  
  bVar1 = sub_1024ed30(param_1);
  if (bVar1) {
    return *(uint32_t *)(extraout_ECX + 8);
  }
  return 0;
}


// 0x102509f0  (ghidra: FUN_102509f0)  [gap]
bool __fastcall sub_102509f0(char *param_1)

{
  return *param_1 == '\a';
}


// 0x10250a00  (ghidra: FUN_10250a00)  [gap]
bool __fastcall sub_10250a00(char *param_1)

{
  return *param_1 == '\x06';
}


// 0x10250a10  (ghidra: FUN_10250a10)  [gap]
uint8_t __fastcall sub_10250a10(char *param_1)

{
  if ((*param_1 != '\x05') && (*param_1 != '\x06')) {
    return 0;
  }
  return 1;
}


// 0x10250a20  (ghidra: FUN_10250a20)  [gap]
void __fastcall sub_10250a20(char *param_1)

{
  sub_10250ac0(param_1);
  return;
}


// 0x10250a30  (ghidra: FUN_10250a30)  [gap]
void __thiscall sub_10250a30(void *this,uint32_t param_1,uint32_t param_2)

{
  sub_10250b40(this,param_1,param_2);
  return;
}


// 0x10250a50  (ghidra: FUN_10250a50)  [gap]
void __thiscall sub_10250a50(void *this,uint32_t param_1,uint32_t param_2)

{
  sub_102503c0(this,param_1,param_2);
  return;
}


// 0x10250a70  (ghidra: FUN_10250a70)  [gap]
void __fastcall sub_10250a70(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  uint32_t extraout_ECX;
  
  uVar1 = sub_1020fe80(param_2);
  puVar2 = (uint32_t *)sub_1020f1d0(extraout_ECX,uVar1);
  sub_10250bb0(puVar2);
  return;
}


// 0x10250a90  (ghidra: FUN_10250a90)  [gap]
void * sub_10250a90(void *param_1,void *param_2,uint32_t param_3)

{
  uint32_t uVar1;
  void *this;
  
  uVar1 = sub_1020fe80(param_3);
  sub_10250bd0(this,param_1,param_2,uVar1);
  return param_1;
}


// 0x10250ac0  (ghidra: FUN_10250ac0)  [gap]
void __fastcall sub_10250ac0(char *param_1)

{
  uint64_t in_XMM1_Qa;
  uint64_t local_1c;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_103066f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = in_XMM1_Qa;
  sub_1023f650(param_1 + 8,*param_1);
  *param_1 = '\a';
  sub_1023f9a0(&local_1c);
  *(uint32_t *)(param_1 + 0xc) = local_1c._4_4_;
  *(uint32_t *)(param_1 + 8) = (uint32_t)local_1c;
  sub_1023fcc0(param_1);
  ExceptionList = local_10;
  return;
}


// 0x10250b40  (ghidra: FUN_10250b40)  [gap]
void __thiscall sub_10250b40(void *this,uint32_t param_1,uint32_t param_2)

{
  uint32_t local_1c;
  uint32_t local_18;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_103066f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_1023f650((void *)((int)this + 8),*(char *)this);
  *(uint8_t *)this = 6;
  sub_1023f9b0(&local_1c,param_1,param_2);
  *(uint32_t *)((int)this + 0xc) = local_18;
  *(uint32_t *)((int)this + 8) = local_1c;
  sub_1023fcc0(this);
  ExceptionList = local_10;
  return;
}


// 0x10250bb0  (ghidra: FUN_10250bb0)  [gap]
uint32_t * __fastcall sub_10250bb0(uint32_t *param_1)

{
  sub_10237930(param_1);
  sub_1023dec0((char *)(param_1 + 6));
  return param_1;
}

