/*
 * _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_after_unit21.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x102534d0 - 0x10253cc0
 * Functions     : 36
 * Attribution   : gap=36
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x102534d0  (ghidra: FUN_102534d0)  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_102534d0(void)

{
  DAT_104e0e8c = 0;
  return;
}


// 0x102534e0  [gap]
void __fastcall thunk_FUN_10253550(uint32_t param_1)

{
  sub_10253550(param_1);
  return;
}


// 0x102534f0  (ghidra: FUN_102534f0)  [gap]
uint8_t * __fastcall sub_102534f0(uint32_t param_1)

{
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030673d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10253590(param_1);
  local_8 = 0;
  sub_10253570();
  ExceptionList = local_10;
  return &DAT_104e0e8c;
}


// 0x10253550  (ghidra: FUN_10253550)  [gap]
void __fastcall sub_10253550(uint32_t param_1)

{
  uint32_t uVar1;
  void *this;
  uint32_t extraout_ECX;
  
  uVar1 = thunk_FUN_1020fe80(param_1);
  this = (void *)thunk_FUN_1020fe80(extraout_ECX);
  sub_10253630(this,uVar1);
  return;
}


// 0x10253570  (ghidra: FUN_10253570)  [gap]
void sub_10253570(void)

{
  uint32_t uVar1;
  uint32_t *extraout_ECX;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  
  sub_1020fae0((int)&stack0x00000004);
  uVar1 = sub_1020faf0(extraout_ECX);
  sub_10253650(uVar1);
  return;
}


// 0x10253590  (ghidra: FUN_10253590)  [gap]
uint8_t * __fastcall sub_10253590(uint32_t param_1)

{
  uint32_t local_9;
  uint8_t local_5;
  
  sub_102536c0(local_9,param_1,&local_5);
  sub_102535c0();
  return &DAT_104e0e8c;
}


// 0x102535c0  (ghidra: FUN_102535c0)  [gap]
void sub_102535c0(void)

{
  uint32_t *puVar1;
  uint32_t extraout_EDX;
  
  sub_102536e0();
  puVar1 = (uint32_t *)thunk_FUN_1020fe80(&DAT_104e0e8c);
  *puVar1 = extraout_EDX;
  return;
}


// 0x102535e0  (ghidra: FUN_102535e0)  [gap]
uint32_t * __thiscall sub_102535e0(void *this,uint32_t *param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  *(uint32_t *)this = *param_1;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(uint32_t *)((int)this + 4) = *param_2;
  *(uint32_t *)((int)this + 8) = uVar1;
  *(uint32_t *)((int)this + 0xc) = uVar2;
  *(uint32_t *)((int)this + 0x10) = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  *(uint32_t *)((int)this + 0x14) = param_2[4];
  *(uint32_t *)((int)this + 0x18) = uVar1;
  *(uint32_t *)((int)this + 0x1c) = uVar2;
  *(uint32_t *)((int)this + 0x20) = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  *(uint32_t *)((int)this + 0x24) = param_2[8];
  *(uint32_t *)((int)this + 0x28) = uVar1;
  *(uint32_t *)((int)this + 0x2c) = uVar2;
  *(uint32_t *)((int)this + 0x30) = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  *(uint32_t *)((int)this + 0x34) = param_2[0xc];
  *(uint32_t *)((int)this + 0x38) = uVar1;
  *(uint32_t *)((int)this + 0x3c) = uVar2;
  *(uint32_t *)((int)this + 0x40) = uVar3;
  uVar1 = param_2[0x11];
  uVar2 = param_2[0x12];
  uVar3 = param_2[0x13];
  *(uint32_t *)((int)this + 0x44) = param_2[0x10];
  *(uint32_t *)((int)this + 0x48) = uVar1;
  *(uint32_t *)((int)this + 0x4c) = uVar2;
  *(uint32_t *)((int)this + 0x50) = uVar3;
  *(uint64_t *)((int)this + 0x54) = *(uint64_t *)(param_2 + 0x14);
  return this;
}


// 0x10253630  (ghidra: FUN_10253630)  [gap]
void __thiscall sub_10253630(void *this,uint32_t param_1)

{
  uint32_t extraout_ECX;
  
  sub_10253750(param_1,*(uint32_t **)(*(int *)this + 4));
  sub_102537b0(extraout_ECX,*(void **)this);
  return;
}


// 0x10253650  (ghidra: FUN_10253650)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void sub_10253650(uint32_t param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_c = param_1;
  iVar2 = sub_1020faf0((uint32_t *)&stack0x00000008);
  piVar3 = (int *)thunk_FUN_1020fe80(&DAT_104e0e8c);
  iVar1 = *piVar3;
  for (iVar4 = sub_1020faf0(&local_c); iVar4 != iVar2; iVar4 = iVar4 + 0x5c) {
    sub_102537c0(iVar1,iVar4);
  }
  return;
}


// 0x102536c0  (ghidra: FUN_102536c0)  [gap]
uint8_t * sub_102536c0(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  sub_1020fe80(param_3);
  sub_10253740();
  return &DAT_104e0e8c;
}


// 0x102536e0  (ghidra: FUN_102536e0)  [gap]
int sub_102536e0(void)

{
  int local_8;
  
  local_8 = sub_10253730();
  sub_10210750(local_8,&local_8);
  sub_10210750(local_8 + 4,&local_8);
  sub_10210750(local_8 + 8,&local_8);
  *(uint8_t *)(local_8 + 0xc) = 1;
  *(uint8_t *)(local_8 + 0xd) = 1;
  return local_8;
}


// 0x10253730  (ghidra: FUN_10253730)  [gap]
void sub_10253730(void)

{
  uint uVar1;
  
  uVar1 = sub_10253860();
  sub_10210950(uVar1);
  return;
}


// 0x10253740  (ghidra: FUN_10253740)  [gap]
uint8_t * sub_10253740(void)

{
  sub_10253880();
  return &DAT_104e0e8c;
}


// 0x10253750  (ghidra: FUN_10253750)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void sub_10253750(uint32_t param_1,uint32_t *param_2)

{
  char cVar1;
  void *pvVar2;
  uint32_t extraout_ECX;
  uint32_t *local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  cVar1 = *(char *)((int)param_2 + 0xd);
  while (cVar1 == '\0') {
    local_c = param_2;
    sub_10253750(param_1,(uint32_t *)param_2[2]);
    pvVar2 = (void *)sub_10211940(&local_c,param_2);
    thunk_FUN_102537b0(extraout_ECX,pvVar2);
    param_2 = local_c;
    cVar1 = *(char *)((int)local_c + 0xd);
  }
  return;
}


// 0x102537b0  (ghidra: FUN_102537b0)  [gap]
void __fastcall sub_102537b0(uint32_t param_1,void *param_2)

{
  sub_102538c0(param_1,param_2);
  return;
}


// 0x102537c0  (ghidra: FUN_102537c0)  [gap]
int * sub_102537c0(int param_1,uint32_t param_2)

{
  uint64_t uVar1;
  uint32_t *this;
  uint *puVar2;
  int *piVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  void *pvVar6;
  uint32_t uVar7;
  int *local_1c;
  int iStack_18;
  int local_10;
  uint8_t local_c [8];
  
  this = (uint32_t *)thunk_FUN_1020fe80(&DAT_104e0e8c);
  puVar2 = (uint *)sub_1020fe80(param_2);
  piVar3 = sub_10253960(&local_10,param_1,puVar2);
  uVar1 = *(uint64_t *)piVar3;
  local_1c = (int *)uVar1;
  if ((char)piVar3[2] != '\0') {
    return local_1c;
  }
  sub_stl_102538a0();
  uVar4 = sub_1020fe80(param_2);
  uVar7 = *this;
  uVar5 = thunk_FUN_1020fe80(&DAT_104e0e8c);
  pvVar6 = sub_10253b20(local_c,uVar5,uVar7,uVar4);
  piVar3 = (int *)sub_10211530((int)pvVar6);
  thunk_FUN_102538e0((int)local_c);
  iStack_18 = (int)((ulonglong)uVar1 >> 0x20);
  piVar3 = sub_10211590(this,local_1c,iStack_18,piVar3);
  return piVar3;
}


// 0x10253860  (ghidra: FUN_10253860)  [gap]
uint32_t sub_10253860(void)

{
  return 0x6c;
}


// 0x10253870  [gap]
void __fastcall thunk_FUN_102538e0(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    sub_10253930(*(void **)(param_1 + 4));
  }
  return;
}


// 0x10253880  (ghidra: FUN_10253880)  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t * sub_10253880(void)

{
  DAT_104e0e8c = 0;
  DAT_104e0e90 = 0;
  return &DAT_104e0e8c;
}


// 0x102538a0  (ghidra: FUN_102538a0)  [gap]
void sub_stl_102538a0(void)

{
  int iVar1;
  int extraout_EDX;
  
  sub_102538f0();
  iVar1 = thunk_FUN_1020fe80(&DAT_104e0e8c);
  if (extraout_EDX != *(int *)(iVar1 + 4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("map/set too long");
}


// 0x102538c0  (ghidra: FUN_102538c0)  [gap]
void __fastcall sub_102538c0(uint32_t param_1,void *param_2)

{
  sub_10210850(param_2,0x6c);
  return;
}


// 0x102538d0  [gap]
void __fastcall thunk_FUN_102538e0(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    sub_10253930(*(void **)(param_1 + 4));
  }
  return;
}


// 0x102538e0  (ghidra: FUN_102538e0)  [gap]
void __fastcall sub_102538e0(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    sub_10253930(*(void **)(param_1 + 4));
  }
  return;
}


// 0x102538f0  (ghidra: FUN_102538f0)  [gap]
uint sub_102538f0(void)

{
  uint *puVar1;
  uint local_c;
  uint local_8;
  
  local_8 = sub_10253920();
  local_c = sub_1020f1c0();
  puVar1 = sub_10210430(&local_c,&local_8);
  return *puVar1;
}


// 0x10253920  (ghidra: FUN_10253920)  [gap]
uint32_t sub_10253920(void)

{
  return 0x25ed097;
}


// 0x10253930  (ghidra: FUN_10253930)  [gap]
void sub_10253930(void *param_1)

{
  sub_10210850(param_1,0x6c);
  return;
}


// 0x10253950  [gap]
void __fastcall thunk_FUN_102537b0(uint32_t param_1,void *param_2)

{
  sub_102538c0(param_1,param_2);
  return;
}


// 0x10253960  (ghidra: FUN_10253960)  [gap]
int * sub_10253960(int *param_1,int param_2,uint *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  uint32_t uVar6;
  int extraout_EDX;
  int *extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int *extraout_EDX_03;
  int iVar7;
  uint *puVar8;
  int local_10;
  int local_c;
  int local_8;
  
  piVar3 = (int *)thunk_FUN_10253cc0();
  puVar8 = param_3;
  iVar7 = *piVar3;
  if (*(char *)(param_2 + 0xd) != '\0') {
    if (*(char *)(*(int *)(iVar7 + 4) + 0xd) == '\0') {
      puVar5 = param_3;
      puVar4 = (uint *)sub_1020fe80(*(int *)(iVar7 + 8) + 0x10);
      bVar2 = sub_102125a0(puVar4,puVar5);
      iVar7 = extraout_EDX;
      if (!bVar2) goto LAB_10253a8e;
    }
    *param_1 = *(int *)(iVar7 + 8);
    *(uint8_t *)(param_1 + 2) = 0;
    param_1[1] = 0;
    return param_1;
  }
  puVar5 = (uint *)sub_1020fe80(param_2 + 0x10);
  puVar8 = param_3;
  bVar2 = sub_102125a0(param_3,puVar5);
  if (param_2 == *extraout_EDX_00) {
    if (bVar2) {
      *param_1 = param_2;
      param_1[1] = 1;
      *(uint8_t *)(param_1 + 2) = 0;
      return param_1;
    }
  }
  else {
    if (!bVar2) {
      bVar2 = sub_102125a0(puVar5,puVar8);
      if (bVar2) {
        piVar3 = sub_10212570(&param_3,param_2);
        piVar3 = sub_10212530(piVar3);
        iVar7 = *piVar3;
        if (*(char *)(iVar7 + 0xd) == '\0') {
          puVar5 = (uint *)sub_1020fe80(iVar7 + 0x10);
          bVar2 = sub_102125a0(puVar8,puVar5);
          iVar7 = extraout_EDX_02;
          if (!bVar2) goto LAB_10253a8e;
        }
        cVar1 = *(char *)(*(int *)(param_2 + 8) + 0xd);
        *(uint8_t *)(param_1 + 2) = 0;
        if (cVar1 == '\0') {
          *param_1 = iVar7;
          param_1[1] = 1;
          return param_1;
        }
      }
      else {
        *(uint8_t *)(param_1 + 2) = 1;
      }
      *param_1 = param_2;
      param_1[1] = 0;
      return param_1;
    }
    piVar3 = sub_10212570(&param_3,param_2);
    piVar3 = sub_102124c0(piVar3);
    puVar5 = puVar8;
    puVar4 = (uint *)sub_1020fe80(*piVar3 + 0x10);
    bVar2 = sub_102125a0(puVar4,puVar5);
    if (bVar2) {
      cVar1 = *(char *)(*(int *)(extraout_EDX_01 + 8) + 0xd);
      *(uint8_t *)(param_1 + 2) = 0;
      if (cVar1 != '\0') {
        *param_1 = extraout_EDX_01;
        param_1[1] = 0;
        return param_1;
      }
      *param_1 = param_2;
      param_1[1] = 1;
      return param_1;
    }
  }
LAB_10253a8e:
  piVar3 = sub_10253c30(&local_10,puVar8);
  uVar6 = sub_102128b0(local_8,puVar8,piVar3);
  if ((char)uVar6 != '\0') {
    *extraout_EDX_03 = local_8;
    extraout_EDX_03[1] = 2;
    *(uint8_t *)(extraout_EDX_03 + 2) = 1;
    return extraout_EDX_03;
  }
  *extraout_EDX_03 = local_10;
  extraout_EDX_03[1] = local_c;
  *(uint8_t *)(extraout_EDX_03 + 2) = 0;
  return extraout_EDX_03;
}


// 0x10253b20  (ghidra: FUN_10253b20)  [gap]
void * __thiscall sub_10253b20(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  sub_10253ba0(this,param_1);
  uVar1 = sub_1020fe80(param_3);
  sub_1020fe80(*(int *)((int)this + 4) + 0x10);
  sub_10253c90(uVar1);
  sub_10210750(*(uint32_t *)((int)this + 4),&param_2);
  sub_10210750(*(int *)((int)this + 4) + 4,&param_2);
  sub_10210750(*(int *)((int)this + 4) + 8,&param_2);
  *(uint8_t *)(*(int *)((int)this + 4) + 0xc) = 0;
  *(uint8_t *)(*(int *)((int)this + 4) + 0xd) = 0;
  return this;
}


// 0x10253ba0  (ghidra: FUN_10253ba0)  [gap]
void * __thiscall sub_10253ba0(void *this,uint32_t param_1)

{
  int extraout_ECX;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030676d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10212600(this,param_1);
  local_8 = 0;
  sub_10253c10(extraout_ECX);
  ExceptionList = local_10;
  return this;
}


// 0x10253c00  [gap]
uint8_t * thunk_FUN_10253cc0(void)

{
  return &DAT_104e0e8c;
}


// 0x10253c10  (ghidra: FUN_10253c10)  [gap]
void __fastcall sub_10253c10(int param_1)

{
  uint32_t uVar1;
  
  *(uint32_t *)(param_1 + 4) = 0;
  uVar1 = sub_10253730();
  *(uint32_t *)(param_1 + 4) = uVar1;
  return;
}


// 0x10253c30  (ghidra: FUN_10253c30)  [gap]
int * sub_10253c30(int *param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint *puVar4;
  int *extraout_EDX;
  int iVar5;
  uint *puVar6;
  
  piVar3 = (int *)thunk_FUN_10253cc0();
  iVar5 = *piVar3;
  param_1[1] = 0;
  param_1[2] = iVar5;
  iVar5 = *(int *)(iVar5 + 4);
  *param_1 = iVar5;
  cVar1 = *(char *)(iVar5 + 0xd);
  while (cVar1 == '\0') {
    *param_1 = iVar5;
    puVar6 = param_2;
    puVar4 = (uint *)sub_1020fe80(iVar5 + 0x10);
    bVar2 = sub_102125a0(puVar4,puVar6);
    if (!bVar2) {
      param_1[2] = (int)extraout_EDX;
      iVar5 = *extraout_EDX;
    }
    else {
      iVar5 = extraout_EDX[2];
    }
    param_1[1] = (uint)!bVar2;
    cVar1 = *(char *)(iVar5 + 0xd);
  }
  return param_1;
}


// 0x10253c90  (ghidra: FUN_10253c90)  [gap]
void __cdecl sub_10253c90(uint32_t param_1)

{
  uint32_t *puVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  uint32_t extraout_ECX;
  int iVar4;
  uint32_t extraout_EDX;
  
  puVar1 = (uint32_t *)sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  puVar3 = (uint32_t *)sub_1020f1d0(extraout_ECX,uVar2);
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


// 0x10253cc0  (ghidra: FUN_10253cc0)  [gap]
uint8_t * sub_10253cc0(void)

{
  return &DAT_104e0e8c;
}

