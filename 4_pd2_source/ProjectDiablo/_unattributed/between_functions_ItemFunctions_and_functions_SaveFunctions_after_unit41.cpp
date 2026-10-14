/*
 * _unattributed/between_functions_ItemFunctions_and_functions_SaveFunctions_after_unit41.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x102de7d0 - 0x102decd0
 * Functions     : 18
 * Attribution   : gap=18
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x102de7d0  [gap]
void __fastcall thunk_FUN_102deab0(uint32_t param_1,void *param_2)

{
  sub_102dead0(param_1,param_2);
  return;
}


// 0x102de7e0  (ghidra: FUN_102de7e0)  [gap]
uint32_t __fastcall sub_102de7e0(uint32_t *param_1)

{
  uint32_t extraout_ECX;
  
  sub_102dea20(param_1);
  return extraout_ECX;
}


// 0x102de7f0  (ghidra: FUN_102de7f0)  [gap]
void __fastcall sub_102de7f0(uint32_t *param_1)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  uint32_t *local_8;
  
  local_8 = param_1;
  uVar1 = sub_102de8f0();
  puVar2 = (uint32_t *)sub_1020fe80(uVar1);
  local_8 = param_1;
  sub_102dea80(puVar2,&local_8);
  *param_1 = puVar2;
  *puVar2 = param_1;
  return;
}


// 0x102de820  (ghidra: FUN_102de820)  [gap]
void __thiscall sub_102de820(void *this,uint32_t param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint32_t uVar5;
  uint32_t extraout_ECX;
  void *this_00;
  int extraout_EDX;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  
  uVar7 = sub_102de680(this);
  piVar2 = (int *)sub_102de670(extraout_ECX);
  if (((*piVar2 + *(uint *)uVar7 & 3) == 0) &&
     (uVar8 = sub_102de690(this), *(uint *)uVar8 <= *piVar2 + 4U >> 2)) {
    sub_102de910(this);
  }
  uVar8 = sub_102de690(this);
  uVar3 = *(int *)uVar8 * 4 - 1U & (uint)((ulonglong)uVar8 >> 0x20);
  *(uint *)uVar7 = uVar3;
  uVar3 = *piVar2 + uVar3;
  sub_102de6b0(this_00,uVar3);
  uVar7 = sub_102de6a0(this);
  piVar4 = (int *)uVar7;
  iVar1 = (int)((ulonglong)uVar7 >> 0x20) * 4;
  iVar6 = *piVar4;
  if (*(int *)(iVar6 + iVar1) == 0) {
    uVar5 = sub_102dea50();
    *(uint32_t *)(iVar1 + *piVar4) = uVar5;
    iVar6 = *piVar4;
  }
  uVar5 = sub_1020fe80(param_1);
  sub_1020fe80(*(int *)(extraout_EDX + iVar6) + (uVar3 & 3) * 4);
  sub_10212910(uVar5);
  *piVar2 = *piVar2 + 1;
  return;
}


// 0x102de8f0  (ghidra: FUN_102de8f0)  [gap]
void sub_102de8f0(void)

{
  uint uVar1;
  
  uVar1 = sub_102114d0(1);
  sub_10210950(uVar1);
  return;
}


// 0x102de910  (ghidra: FUN_102de910)  [gap]
void __fastcall sub_102de910(uint32_t param_1)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint32_t uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint64_t uVar11;
  
  uVar11 = sub_102de690(param_1);
  puVar2 = (uint *)uVar11;
  uVar3 = *puVar2;
  uVar9 = 1;
  if (uVar3 != 0) {
    uVar9 = uVar3;
  }
  for (; (uVar10 = uVar9 - uVar3, uVar10 == 0 || (uVar9 < 8)); uVar9 = uVar9 * 2) {
    uVar10 = sub_10210ca0();
    if ((uVar10 >> 2) - uVar9 < uVar9) {
      sub_stl_102dea70();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar11 = sub_102de680(param_1);
  uVar3 = *(uint *)uVar11 >> 2;
  iVar4 = sub_10210e40(uVar9);
  uVar11 = sub_102de6a0(param_1);
  piVar5 = (int *)uVar11;
  iVar8 = uVar3 * 4;
  uVar6 = sub_102be030(iVar8 + *piVar5,*piVar5 + *puVar2 * 4,iVar8 + iVar4);
  iVar7 = *piVar5;
  if (uVar10 < uVar3) {
    sub_102be030(iVar7,iVar7 + uVar10 * 4,uVar6);
    iVar7 = sub_102be030(*piVar5 + uVar10 * 4,iVar8 + *piVar5,iVar4);
    uVar3 = uVar10;
  }
  else {
    iVar7 = sub_102be030(iVar7,iVar8 + iVar7,uVar6);
    sub_102deac0(iVar7,uVar10 - uVar3);
    iVar7 = iVar4;
  }
  sub_102deac0(iVar7,uVar3);
  if ((void *)*piVar5 != (void *)0x0) {
    sub_1020ff20((void *)*piVar5,*puVar2);
  }
  *piVar5 = iVar4;
  *puVar2 = *puVar2 + uVar10;
  return;
}


// 0x102dea20  (ghidra: FUN_102dea20)  [gap]
int __fastcall sub_102dea20(uint32_t *param_1)

{
  int extraout_ECX;
  
  sub_10210df0(param_1);
  *(uint32_t *)(extraout_ECX + 4) = 0;
  *(uint32_t *)(extraout_ECX + 8) = 0;
  *(uint32_t *)(extraout_ECX + 0xc) = 0;
  *(uint32_t *)(extraout_ECX + 0x10) = 0;
  return extraout_ECX;
}


// 0x102dea50  (ghidra: FUN_102dea50)  [gap]
void sub_102dea50(void)

{
  uint uVar1;
  
  uVar1 = sub_10211490(4);
  sub_10210950(uVar1);
  return;
}


// 0x102dea70  (ghidra: FUN_102dea70)  [gap]
void sub_stl_102dea70(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("deque<T> too long");
}


// 0x102dea80  (ghidra: FUN_102dea80)  [gap]
void __fastcall sub_102dea80(uint32_t param_1,uint32_t param_2)

{
  uint32_t *puVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  uint32_t uVar3;
  
  puVar1 = (uint32_t *)sub_1020fe80(param_2);
  uVar3 = *puVar1;
  uVar2 = sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(uVar2);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_10212600(this,uVar3);
  return;
}


// 0x102deab0  (ghidra: FUN_102deab0)  [gap]
void __fastcall sub_102deab0(uint32_t param_1,void *param_2)

{
  sub_102dead0(param_1,param_2);
  return;
}


// 0x102deac0  (ghidra: FUN_102deac0)  [gap]
void __fastcall sub_102deac0(int param_1,int param_2)

{
  sub_102deae0(param_1,param_1 + param_2 * 4);
  return;
}


// 0x102dead0  (ghidra: FUN_102dead0)  [gap]
void __fastcall sub_102dead0(uint32_t param_1,void *param_2)

{
  sub_10210850(param_2,8);
  return;
}


// 0x102deae0  (ghidra: FUN_102deae0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_102deae0(uint32_t param_1,uint32_t param_2)

{
  void *_Dst;
  int iVar1;
  uint32_t local_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_10 = param_2;
  local_c = param_1;
  _Dst = (void *)sub_1020faf0(&local_c);
  iVar1 = sub_1020faf0(&local_10);
  memset(_Dst,0,iVar1 - (int)_Dst);
  return param_2;
}


// 0x102deb30  (ghidra: FUN_102deb30)  [gap]
void __fastcall
sub_102deb30(int param_1,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5)

{
  if (param_1 != 0) {
    D2Common_10286(*(int *)(param_2 + 0x2c),(ushort)param_4,(ushort)param_5);
    sub_102ed700(param_2,param_3,param_1);
  }
  return;
}


// 0x102deb60  (ghidra: FUN_102deb60)  [gap]
uint32_t __fastcall sub_102deb60(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint32_t uVar4;
  
  iVar1 = *param_1;
  if (((iVar1 != 0) && (piVar2 = (int *)param_1[1], piVar2 != (int *)0x0)) &&
     ((iVar3 = piVar2[1], iVar3 == 0x268 ||
      (((iVar3 == 0x269 || (iVar3 == 0x26a)) || (iVar3 == 0x26b)))))) {
    if ((*(int *)(iVar1 + 0x1df4) == 9) && (*(char *)(iVar1 + 0x2628) == '\x02')) {
      functions_HelperFunctions_102d20e0(iVar1,piVar2);
    }
    return 1;
  }
  uVar4 = sub_6fce32c0();
  return uVar4;
}


// 0x102dec00  (ghidra: FUN_102dec00)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint64_t __fastcall sub_102dec00(int param_1)

{
  uint32_t *puVar1;
  uint64_t uVar2;
  uint32_t local_4c [6];
  uint32_t local_34 [6];
  uint32_t local_1c [2];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1031549d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  sub_1020f990(local_34,"dDjwYmNcFLV");
  local_8 = 0;
  puVar1 = sub_1020f990(local_4c,(char *)(param_1 + 1));
  local_8._0_1_ = 1;
  sub_102e6d30(local_1c,local_34,puVar1,local_34);
  local_8 = CONCAT31(local_8._1_3_,3);
  thunk_FUN_1020fc60(local_4c);
  sub_10255d60(local_1c);
  sub_10255d50((int)local_1c);
  uVar2 = thunk_FUN_1020fc60(local_34);
  ExceptionList = local_10;
  return uVar2;
}


// 0x102decd0  (ghidra: FUN_102decd0)  [gap]
void __fastcall sub_102decd0(int param_1)

{
  uint16_t uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  uint local_10;
  uint16_t uStack_c;
  uint16_t uStack_a;
  
  uVar5 = sub_6fb54d60();
  iVar3 = (int)uVar5;
  if ((iVar3 != 0) && (iVar2 = *(int *)(iVar3 + 0x14), iVar2 != 0)) {
    switch(*(uint8_t *)(param_1 + 1)) {
    case 0:
      sub_102d3f00(iVar3);
      DAT_104dbf3c = 0;
      return;
    case 1:
      *(uint32_t *)(iVar2 + 0x26d) = *(uint32_t *)(param_1 + 2);
      return;
    case 2:
      *(uint32_t *)(iVar2 + 0x1b0) = *(uint32_t *)(param_1 + 2);
      return;
    case 3:
      *(uint32_t *)(iVar2 + 0x271) = *(uint32_t *)(param_1 + 2);
      return;
    case 4:
      uVar5 = *(uint64_t *)(param_1 + 2);
      uVar1 = *(uint16_t *)(param_1 + 10);
      local_10 = (uint)uVar5;
      uStack_c = (uint16_t)((ulonglong)uVar5 >> 0x20);
      uStack_a = (uint16_t)((ulonglong)uVar5 >> 0x30);
      if ((byte)((ulonglong)uVar5 >> 8) < 0x10) {
        uVar4 = local_10 >> 8 & 0xff;
        *(short *)(iVar2 + 0x512 + uVar4 * 8) = (short)((ulonglong)uVar5 >> 0x10);
        *(uint *)(*(int *)(iVar3 + 0x14) + 0x516 + uVar4 * 8) = CONCAT22(uVar1,uStack_a);
        *(uint16_t *)(*(int *)(iVar3 + 0x14) + 0x514 + uVar4 * 8) = uStack_c;
      }
    }
  }
  return;
}

