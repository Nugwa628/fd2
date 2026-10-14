/*
 * _unattributed/between_functions_CubeFunctions_and_functions_D2NewFunctions_after_unit35.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x102bdb70 - 0x102be2c0
 * Functions     : 11
 * Attribution   : gap=11
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x102bdb70  (ghidra: FUN_102bdb70)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void sub_Hook_sub_6fc934e0_102bdb70(void *param_1,int *param_2)

{
  char cVar1;
  uint32_t *puVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint32_t *puVar7;
  uint32_t *puVar8;
  uint uVar9;
  uint32_t uVar10;
  int iVar11;
  int iVar12;
  uint32_t *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  int extraout_ECX_02;
  uint32_t *extraout_ECX_03;
  uint32_t *extraout_ECX_04;
  void *extraout_ECX_05;
  uint32_t *extraout_ECX_06;
  uint32_t *extraout_ECX_07;
  uint extraout_EDX;
  uint64_t local_5c;
  int local_50 [3];
  int local_44 [3];
  uint64_t local_38;
  uint32_t uStack_30;
  uint64_t uStack_2c;
  uint32_t uStack_24;
  uint64_t uStack_20;
  uint32_t local_18;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314c3d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 != (int *)0x0) && (iVar5 = sub_102bc770((int)param_1), (char)iVar5 == '\0')) {
    D2Common_10675();
    sub_1020f420((uint64_t *)local_44);
    sub_1020f7c0(extraout_ECX);
    local_8 = 0;
    sub_102bc790(param_2,extraout_ECX_00);
    sub_1020f420(&local_5c);
    functions_CubeFunctions_102bcc00(extraout_ECX_01,(int)param_1,(int)param_2,local_44);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar6 = sub_102bb580(local_44);
    uVar6 = uVar6 & 0xff;
    local_38 = 0;
    uStack_30 = 0;
    local_18 = 0;
    uStack_2c = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    puVar7 = (uint32_t *)sub_1020faf0((uint32_t *)&local_5c);
    puVar8 = (uint32_t *)sub_1020fae0(extraout_ECX_02);
    uVar9 = extraout_EDX;
    if (puVar7 != puVar8) {
LAB_102bdc35:
      puVar2 = (uint32_t *)*puVar7;
      if ((((*(char *)((int)puVar2 + 1) == '\x01') || (*(char *)((int)puVar2 + 1) == '\x03')) &&
          (uVar9 == 0)) || (bVar4 = functions_CubeFunctions_102bc7f0((int)puVar2,(int)param_2), uVar9 = uVar6, !bVar4))
      goto LAB_102bdca1;
      uStack_30 = 0;
      uStack_24 = 0;
      local_38 = 0;
      uStack_2c = 0;
      uStack_20 = 0;
      local_18 = 0;
      iVar5 = sub_102bba50(puVar2,param_2[0x18],param_1,&local_38,local_44);
      if (iVar5 == 0) goto LAB_102bdca1;
      cVar1 = *(char *)(puVar2 + 1);
      if (cVar1 == '\x1e') goto LAB_102bdfab;
      if (cVar1 == '\x1f') {
        functions_CubeFunctions_Wraps_D2Game_ITEMS_ItemMode_102bd5e0(param_1,(int)puVar2,param_2,local_44);
        goto LAB_102bdfab;
      }
      if (((cVar1 == '\x1c') && (*(char *)((int)puVar2 + 2) == '\x02')) && (puVar2[2] == 1)) {
        if (*(int *)((int)param_1 + 0x1df4) < 1) {
          *(uint32_t *)((int)param_1 + 0x1df4) = 0x28;
          *(uint32_t *)((int)param_1 + 0x2628) = 1;
        }
        else if ((*(int *)((int)param_1 + 0x1df4) != 0x28) ||
                ((*(byte *)((int)param_1 + 0x2628) & 0x10) != 0)) goto LAB_102bdfab;
        functions_CubeFunctions_102bd370((int)param_1,(int)param_2);
      }
      bVar4 = false;
      if (uVar6 != 0) {
        puVar8 = (uint32_t *)sub_1020fae0((int)local_44);
        for (puVar7 = (uint32_t *)sub_1020faf0(extraout_ECX_03); puVar7 != puVar8;
            puVar7 = puVar7 + 1) {
          piVar3 = (int *)*puVar7;
          if (((*piVar3 == 4) && (uVar9 = D2Common_10744((int)piVar3,0x68), uVar9 == 0)) &&
             (uVar9 = D2Common_10225(piVar3), uVar9 != 0)) {
            bVar4 = true;
          }
        }
      }
      sub_Hook_sub_6fc92fc0_102bbff0(param_1,param_2,puVar2,&local_38,local_44);
      sub_1020f420((uint64_t *)local_50);
      sub_1020f7c0(extraout_ECX_04);
      local_8 = CONCAT31(local_8._1_3_,2);
      sub_102bc790(param_2,extraout_ECX_05);
      if (*(char *)((int)puVar2 + 1) == '\x02') {
        uVar10 = sub_102bb580(local_50);
        if ((char)uVar10 != '\0') {
          *(uint32_t *)((int)param_1 + 0x25fc) = 0;
          sub_Hook_sub_6fc934e0_102bdb70(param_1,param_2);
        }
      }
      else if (*(char *)((int)puVar2 + 1) == '\x03') {
        puVar8 = (uint32_t *)sub_1020fae0((int)local_50);
        for (puVar7 = (uint32_t *)sub_1020faf0(extraout_ECX_06); puVar7 != puVar8;
            puVar7 = puVar7 + 1) {
          piVar3 = (int *)*puVar7;
          if ((*piVar3 == 4) && (uVar9 = D2Common_10744((int)piVar3,0x68), uVar9 == 0)) {
            if ((bVar4) &&
               ((iVar5 = D2Common_10973((int)piVar3,0x168,0), iVar5 == 0 &&
                (uVar9 = D2Common_10225(piVar3), uVar9 == 0)))) {
              D2Common_10890(piVar3);
            }
            sub_102bb5f0((int)piVar3,0,piVar3);
          }
        }
      }
      puVar8 = (uint32_t *)sub_1020fae0((int)local_50);
      for (puVar7 = (uint32_t *)sub_1020faf0(extraout_ECX_07); puVar7 != puVar8;
          puVar7 = puVar7 + 1) {
        piVar3 = (int *)*puVar7;
        if ((*piVar3 == 4) && (iVar5 = D2Common_10695(piVar3[1]), iVar5 != 0)) {
          iVar11 = D2Common_11088_10275940(piVar3);
          if ((((((iVar11 == 0x12) || (((iVar11 == 0x16 || (iVar11 == 0x26)) || (iVar11 == 0x29))))
                || (((iVar11 == 0x34 || (iVar11 == 0x68)) || (iVar11 == 0x76)))) ||
               ((iVar11 == 0x77 || (iVar11 == 0x78)))) ||
              (((iVar11 == 0x79 ||
                ((((iVar11 == 0x7a || (iVar11 == 0x7b)) || (iVar11 == 0x7c)) ||
                 ((iVar11 == 0x7d || (iVar11 == 0x7e)))))) || ((0x7e < iVar11 && (iVar11 < 0xc5)))))
              ) || (((iVar11 == 0xc5 || (iVar11 == 0xc6)) || (iVar11 == 0xcb)))) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if ((*(char *)(iVar5 + 0x132) != '\0') && (bVar4)) {
            if (*(char *)(iVar5 + 0x80) == 'a') {
              if ((*(char *)(iVar5 + 0x81) == 'q') && (*(char *)(iVar5 + 0x82) == 'v')) {
                cVar1 = *(char *)(iVar5 + 0x83);
joined_r0x102bdf5c:
                if (cVar1 == ' ') goto LAB_102bdf92;
              }
            }
            else if (((*(char *)(iVar5 + 0x80) == 'c') && (*(char *)(iVar5 + 0x81) == 'q')) &&
                    (*(char *)(iVar5 + 0x82) == 'v')) {
              cVar1 = *(char *)(iVar5 + 0x83);
              goto joined_r0x102bdf5c;
            }
            iVar11 = *(int *)(iVar5 + 0xe8);
            iVar5 = *(int *)(iVar5 + 0xe4);
            iVar12 = D2Common_10973((int)piVar3,0x46,0);
            if ((iVar12 < iVar5) || (iVar11 < iVar12)) {
              functions_D2NewFunctions_102c05c0(param_1,param_2,piVar3);
            }
          }
        }
LAB_102bdf92:
      }
      thunk_FUN_1020fb40(local_50);
    }
LAB_102bdfab:
    thunk_FUN_1020fb40((uint32_t *)&local_5c);
    thunk_FUN_1020fb40(local_44);
  }
  ExceptionList = local_10;
  return;
LAB_102bdca1:
  puVar7 = puVar7 + 1;
  if (puVar7 == puVar8) goto LAB_102bdfab;
  goto LAB_102bdc35;
}


// 0x102bdfe0  (ghidra: FUN_102bdfe0)  [gap]
uint32_t __fastcall sub_102bdfe0(uint32_t param_1)

{
  sub_1020fa10(param_1);
  return param_1;
}


// 0x102be000  (ghidra: FUN_102be000)  [gap]
uint __thiscall sub_102be000(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  int local_10 [3];
  
  piVar1 = sub_10212940(this,local_10,param_1);
  uVar2 = sub_102129a0(piVar1[2],param_1,piVar1[2]);
  return uVar2 & 0xff;
}


// 0x102be030  (ghidra: FUN_102be030)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_102be030(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t extraout_EDX;
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_c = param_3;
  local_14 = param_1;
  local_10 = param_2;
  uVar1 = sub_1020faf0(&local_14);
  sub_1020faf0(&local_10);
  uVar2 = sub_1020faf0(&local_c);
  local_10 = sub_1024ebd0(uVar1,extraout_EDX,uVar2);
  sub_10248040(&local_c,&local_10);
  return local_c;
}


// 0x102be0a0  (ghidra: FUN_102be0a0)  [gap]
uint32_t sub_102be0a0(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_2);
  sub_102be0c0(param_1,uVar1);
  return param_1;
}


// 0x102be0c0  (ghidra: FUN_102be0c0)  [gap]
uint32_t sub_102be0c0(uint32_t param_1,uint32_t param_2)

{
  uint uVar1;
  uint32_t uVar2;
  void *this;
  uint8_t *puVar3;
  uint8_t local_14 [4];
  uint32_t local_10;
  uint8_t local_c [8];
  
  uVar1 = sub_1020fe80(param_2);
  sub_102be110(this,&local_10,uVar1);
  puVar3 = local_c;
  uVar2 = sub_1023e2e0(local_14,local_10);
  sub_10228210(uVar2,puVar3);
  return param_1;
}


// 0x102be110  (ghidra: FUN_102be110)  [gap]
uint32_t __thiscall sub_102be110(void *this,uint32_t param_1,uint param_2)

{
  uint64_t uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  void *pvVar7;
  int iVar8;
  int *local_20;
  int iStack_1c;
  int local_18;
  int local_14;
  uint8_t local_10 [8];
  int *local_8;
  
  local_8 = (int *)thunk_FUN_1020fe80(this);
  uVar2 = param_2;
  piVar3 = (int *)sub_1020fe80(param_2);
  piVar4 = sub_10212940(this,&local_14,piVar3);
  uVar1 = *(uint64_t *)piVar4;
  local_18 = piVar4[2];
  uVar5 = sub_102129a0(local_18,piVar3,piVar4);
  if ((char)uVar5 != '\0') {
    param_2 = param_2 & 0xffffff;
    sub_10228210(&local_18,(int)&param_2 + 3);
    return param_1;
  }
  sub_102116b0(this);
  uVar5 = sub_1020fe80(uVar2);
  piVar3 = local_8;
  iVar8 = *local_8;
  uVar6 = thunk_FUN_1020fe80(this);
  pvVar7 = sub_102be1e0(local_10,uVar6,iVar8,uVar5);
  piVar4 = (int *)sub_10211530((int)pvVar7);
  thunk_FUN_10211790((int)local_10);
  iStack_1c = (int)((ulonglong)uVar1 >> 0x20);
  local_20 = (int *)uVar1;
  local_8 = sub_10211590(piVar3,local_20,iStack_1c,piVar4);
  param_2 = CONCAT13(1,(uint32_t)param_2);
  sub_10228210(&local_8,(int)&param_2 + 3);
  return param_1;
}


// 0x102be1e0  (ghidra: FUN_102be1e0)  [gap]
void * __thiscall sub_102be1e0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = param_3;
  sub_10212460(this,param_1);
  uVar1 = sub_1020fe80(uVar1);
  sub_1020fe80(*(int *)((int)this + 4) + 0x10);
  sub_102be260(uVar1);
  sub_10210750(*(uint32_t *)((int)this + 4),&param_2);
  sub_10210750(*(int *)((int)this + 4) + 4,&param_2);
  sub_10210750(*(int *)((int)this + 4) + 8,&param_2);
  *(uint8_t *)(*(int *)((int)this + 4) + 0xc) = 0;
  *(uint8_t *)(*(int *)((int)this + 4) + 0xd) = 0;
  return this;
}


// 0x102be260  (ghidra: FUN_102be260)  [gap]
void __cdecl sub_102be260(uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  uVar1 = sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  sub_1020f1d0(extraout_ECX,uVar2);
  sub_102be290(uVar1);
  return;
}


// 0x102be290  (ghidra: FUN_102be290)  [gap]
int sub_102be290(uint32_t param_1)

{
  uint32_t *puVar1;
  uint8_t *puVar2;
  int extraout_ECX;
  uint32_t *extraout_EDX;
  int extraout_EDX_00;
  
  puVar1 = (uint32_t *)sub_1020fe80(param_1);
  *extraout_EDX = *puVar1;
  puVar2 = (uint8_t *)sub_1020fe80(extraout_ECX + 4);
  *(uint8_t *)(extraout_EDX_00 + 4) = *puVar2;
  return extraout_EDX_00;
}


// 0x102be2c0  (ghidra: FUN_102be2c0)  [gap]
bool sub_102be2c0(int param_1,int param_2)

{
  return *(int *)(param_1 + 8) < *(int *)(param_2 + 8);
}

