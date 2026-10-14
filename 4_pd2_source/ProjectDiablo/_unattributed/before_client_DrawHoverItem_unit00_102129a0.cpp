/*
 * _unattributed/before_client_DrawHoverItem_unit00_102129a0.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x102129a0 - 0x10212e20
 * Functions     : 19
 * Attribution   : gap=19
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x102129a0  (ghidra: FUN_102129a0)  [gap]
uint32_t sub_102129a0(int param_1,int *param_2,uint reg_EAX)

{
  bool bVar1;
  int *piVar2;
  uint32_t extraout_var;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    piVar2 = (int *)sub_1020fe80(param_1 + 0x10);
    bVar1 = sub_102125c0(param_2,piVar2);
    reg_EAX = CONCAT31(extraout_var,bVar1);
    if (!bVar1) {
      return CONCAT31(extraout_var,1);
    }
  }
  return reg_EAX & 0xffffff00;
}


// 0x102129d0  (ghidra: FUN_102129d0)  [gap]
uint32_t * __thiscall sub_102129d0(void *this,uint32_t *param_1)

{
  *(uint32_t *)this = *param_1;
  sub_10210b20((void *)((int)this + 4),param_1 + 1);
  return this;
}


// 0x10212a00  (ghidra: FUN_10212a00)  [gap]
void __cdecl sub_10212a00(uint32_t param_1)

{
  uint uVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  uVar1 = sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_1020f9c0(this,uVar1);
  return;
}


// 0x10212a30  (ghidra: FUN_10212a30)  [gap]
void __cdecl sub_10212a30(uint32_t param_1)

{
  int *piVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  piVar1 = (int *)sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_10210b20(this,piVar1);
  return;
}


// 0x10212a60  (ghidra: FUN_10212a60)  [gap]
void __cdecl sub_10212a60(uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  uVar1 = sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_10212a90(this,uVar1);
  return;
}


// 0x10212a90  (ghidra: FUN_10212a90)  [gap]
void * __thiscall sub_10212a90(void *this,uint32_t param_1)

{
  sub_10212ab0(this,param_1);
  return this;
}


// 0x10212ab0  (ghidra: FUN_10212ab0)  [gap]
void * __thiscall sub_10212ab0(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t extraout_ECX;
  uint32_t *extraout_ECX_00;
  uint8_t local_1c [11];
  uint8_t local_11;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10303c5d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10212ba0(param_1,this,&local_11);
  uVar1 = thunk_FUN_1020fe80(this);
  uVar2 = thunk_FUN_1020fe80(extraout_ECX);
  sub_10212b70(local_1c,uVar2,uVar1);
  local_8 = 0;
  sub_10212bd0(this,param_1,param_1);
  sub_10212b60((int)local_1c);
  sub_10212b40(extraout_ECX_00);
  ExceptionList = local_10;
  return this;
}


// 0x10212b40  (ghidra: FUN_10212b40)  [gap]
void __fastcall sub_10212b40(uint32_t *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    sub_10210410((void *)param_1[1],*param_1);
  }
  return;
}


// 0x10212b60  (ghidra: FUN_10212b60)  [gap]
void __fastcall sub_10212b60(int param_1)

{
  *(uint32_t *)(param_1 + 4) = 0;
  return;
}


// 0x10212b70  (ghidra: FUN_10212b70)  [gap]
uint32_t * __thiscall sub_10212b70(void *this,uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  *(uint32_t *)this = param_1;
  uVar1 = sub_1020fe80(param_2);
  *(uint32_t *)((int)this + 4) = uVar1;
  iVar2 = sub_10210900();
  **(int **)((int)this + 4) = iVar2;
  return this;
}


// 0x10212ba0  (ghidra: FUN_10212ba0)  [gap]
uint32_t sub_10212ba0(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t *extraout_EDX;
  uint64_t uVar1;
  
  sub_1020fe80(param_3);
  uVar1 = sub_10212c40(extraout_EDX);
  return (int)((ulonglong)uVar1 >> 0x20);
}


// 0x10212bd0  (ghidra: FUN_10212bd0)  [gap]
void __thiscall sub_10212bd0(void *this,uint32_t param_1,uint32_t param_2)

{
  int *piVar1;
  int *piVar2;
  uint32_t *puVar3;
  int iVar4;
  void *this_00;
  int extraout_EDX;
  
  piVar1 = (int *)thunk_FUN_1020fe80(this);
  piVar2 = (int *)thunk_FUN_1020fe80(param_1);
  puVar3 = sub_10212c50(this_00,*(uint32_t **)(*piVar2 + 4),*piVar1,param_2);
  *(uint32_t **)(*piVar1 + 4) = puVar3;
  puVar3 = (uint32_t *)*piVar1;
  piVar1[1] = piVar2[1];
  if (*(char *)((int)puVar3[1] + 0xd) == '\0') {
    piVar2 = sub_10212660((int *)puVar3[1]);
    *puVar3 = piVar2;
    iVar4 = sub_10212680(*(int *)(*piVar1 + 4));
    *(int *)(extraout_EDX + 8) = iVar4;
    return;
  }
  *puVar3 = puVar3;
  *(int *)(*piVar1 + 8) = *piVar1;
  return;
}


// 0x10212c40  (ghidra: FUN_10212c40)  [gap]
uint64_t __fastcall sub_10212c40(uint32_t *param_1)

{
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  sub_102116a0(param_1);
  return CONCAT44(extraout_EDX,extraout_ECX);
}


// 0x10212c50  (ghidra: FUN_10212c50)  [gap]
uint32_t * __thiscall
sub_10212c50(void *this,uint32_t *param_1,uint32_t param_2,uint32_t param_3)

{
  int *piVar1;
  uint32_t *puVar2;
  uint32_t *puVar3;
  void *this_00;
  uint32_t *puVar4;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10303c80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)thunk_FUN_1020fe80(this);
  puVar4 = (uint32_t *)*piVar1;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar2 = (uint32_t *)sub_10212d20(this_00,param_1 + 4);
    puVar2[1] = param_2;
    *(uint8_t *)(puVar2 + 3) = *(uint8_t *)(param_1 + 3);
    local_8 = 0;
    if (*(char *)((int)puVar4 + 0xd) != '\0') {
      puVar4 = puVar2;
    }
    puVar3 = sub_10212c50(this,(uint32_t *)*param_1,puVar2,param_3);
    *puVar2 = puVar3;
    puVar3 = sub_10212c50(this,(uint32_t *)param_1[2],puVar2,param_3);
    puVar2[2] = puVar3;
  }
  ExceptionList = local_10;
  return puVar4;
}


// 0x10212cfd  [gap]
void Catch_All_10212cfd(void)

{
  uint32_t uVar1;
  int unaff_EBP;
  uint32_t *puVar2;
  
  puVar2 = *(uint32_t **)(unaff_EBP + 0xc);
  uVar1 = thunk_FUN_1020fe80(*(uint32_t *)(unaff_EBP + -0x14));
  sub_102110a0(uVar1,puVar2);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


// 0x10212d20  (ghidra: FUN_10212d20)  [gap]
void __thiscall sub_10212d20(void *this,uint32_t param_1)

{
  sub_10212d30(this,param_1);
  return;
}


// 0x10212d30  (ghidra: FUN_10212d30)  [gap]
void __thiscall sub_10212d30(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t extraout_EDX;
  
  thunk_FUN_1020fe80(this);
  uVar1 = sub_1020fe80(param_1);
  uVar2 = thunk_FUN_1020fe80(this);
  sub_10212d60(uVar2,extraout_EDX,uVar1);
  return;
}


// 0x10212d60  (ghidra: FUN_10212d60)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_10212d60(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  int extraout_ECX;
  uint8_t local_20 [4];
  int local_1c;
  uint32_t local_18;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10303cad;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = param_2;
  sub_10212600(local_20,param_1);
  local_8 = 0;
  sub_102125e0(extraout_ECX);
  uVar1 = sub_1020fe80(param_3);
  sub_1020fe80(local_1c + 0x10);
  sub_10212910(uVar1);
  sub_10210750(local_1c,&local_18);
  sub_10210750(local_1c + 4,&local_18);
  sub_10210750(local_1c + 8,&local_18);
  *(uint16_t *)(local_1c + 0xc) = 0;
  uVar1 = sub_10211530((int)local_20);
  sub_10211770((int)local_20);
  ExceptionList = local_10;
  return uVar1;
}


// 0x10212e20  (ghidra: FUN_10212e20)  [gap]
void sub_10212e20(void)

{
  return;
}

