/*
 * _unattributed/between_events_SkillEvents_and_functions_CubeFunctions_after_unit34.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x102bb3c0 - 0x102bc790
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


// 0x102bb3c0  (ghidra: FUN_102bb3c0)  [gap]
void sub_102bb3c0(void)

{
  roundf();
  return;
}


// 0x102bb3f0  (ghidra: FUN_102bb3f0)  [gap]
uint32_t __thiscall sub_102bb3f0(void *this,uint param_1,uint32_t param_2)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  
  if (((param_1 & 2) != 0) && (uVar3 = D2Common_10744((int)this,param_1 >> 0x10), (int)uVar3 == 0))
  {
    return 0;
  }
  if (((((param_1 & 1) != 0) && (param_1._2_2_ != 0xffff)) &&
      (*(uint *)((int)this + 4) != (uint)param_1._2_2_)) ||
     ((param_2._2_1_ != 0 && (**(uint **)((int)this + 0x14) != (uint)param_2._2_1_)))) {
    return 0;
  }
  if (((param_1 & 0x20) != 0) && (uVar1 = D2Common_10225(this), uVar1 != 0)) {
    return 0;
  }
  if (((param_1 & 0x10) != 0) && (uVar1 = D2Common_10225(this), uVar1 == 0)) {
    return 0;
  }
  if (((param_1 & 4) != 0) && (iVar2 = D2Common_10366(this), iVar2 != 0)) {
    return 0;
  }
  if (((param_1 & 8) != 0) && (iVar2 = D2Common_10366(this), iVar2 == 0)) {
    return 0;
  }
  return 1;
}


// 0x102bb490  (ghidra: FUN_102bb490)  [gap]
uint8_t __fastcall sub_102bb490(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1 - (int)param_2;
  do {
    if (param_2[iVar1] != *param_2) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 1;
  } while (iVar2 < 4);
  return 1;
}


// 0x102bb4b0  (ghidra: FUN_102bb4b0)  [gap]
bool __thiscall sub_102bb4b0(void *this,int param_1)

{
  int iVar1;
  
  if (this != (void *)0x0) {
    iVar1 = D2Common_11088_10275940(this);
    return iVar1 == param_1;
  }
  return false;
}


// 0x102bb4d0  (ghidra: FUN_102bb4d0)  [gap]
uint32_t __fastcall sub_102bb4d0(int param_1,uint reg_EAX,int reg_EDX)

{
  uint64_t uVar1;
  
  if (param_1 != 0) {
    uVar1 = D2Common_10973(param_1,reg_EDX,0);
    reg_EAX = 0;
    if ((int)uVar1 != 0) {
      return CONCAT31((int3)((ulonglong)uVar1 >> 8),1);
    }
  }
  return reg_EAX & 0xffffff00;
}


// 0x102bb4f0  (ghidra: FUN_102bb4f0)  [gap]
uint64_t __fastcall sub_102bb4f0(int param_1,int param_2,uint32_t reg_EAX)

{
  uint32_t uVar1;
  
  uVar1 = (uint32_t)((uint)reg_EAX >> 8);
  if (((param_1 != 0) && (param_2 != 0)) &&
     ((*(int *)(param_2 + 0x80) == 0x20737377 || (*(int *)(param_2 + 0x80) == 0x73737763)))) {
    return CONCAT44(param_2,CONCAT31(uVar1,1));
  }
  return (ulonglong)CONCAT43(param_2,uVar1) << 8;
}


// 0x102bb520  (ghidra: FUN_102bb520)  [gap]
char __fastcall sub_102bb520(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint64_t uVar6;
  
  cVar4 = '\0';
  uVar5 = 0;
  iVar1 = sub_10218980(param_1);
  if (iVar1 != 0) {
    do {
      piVar2 = (int *)functions_D2ServerFunctions_1026cce0(param_1,uVar5);
      uVar6 = D2Common_10695(*(uint *)(*piVar2 + 4));
      if (cVar4 == '\0') {
        piVar2 = (int *)functions_D2ServerFunctions_1026cce0(param_1,uVar5);
        uVar6 = sub_102bb4f0(*piVar2,(int)uVar6,piVar2);
        if ((char)uVar6 != '\0') goto LAB_102bb565;
      }
      else {
LAB_102bb565:
        cVar4 = '\x01';
      }
      uVar5 = uVar5 + 1;
      uVar3 = sub_10218980(param_1);
    } while (uVar5 < uVar3);
  }
  return cVar4;
}


// 0x102bb580  (ghidra: FUN_102bb580)  [gap]
uint32_t __fastcall sub_102bb580(int *param_1)

{
  int iVar1;
  char cVar2;
  uint32_t extraout_var;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int extraout_ECX;
  uint64_t uVar7;
  
  cVar2 = sub_102bb520(param_1);
  uVar6 = CONCAT31(extraout_var,cVar2);
  if (cVar2 == '\0') {
LAB_102bb5e6:
    return uVar6 & 0xffffff00;
  }
  piVar3 = (int *)sub_1020faf0(param_1);
  piVar4 = (int *)sub_1020fae0(extraout_ECX);
  piVar5 = piVar4;
  do {
    if (piVar3 == piVar4) {
      return CONCAT31((int3)((uint)piVar5 >> 8),1);
    }
    iVar1 = *piVar3;
    uVar7 = D2Common_10695(*(uint *)(iVar1 + 4));
    piVar5 = (int *)uVar7;
    if ((piVar5 != (int *)0x0) && ((piVar5[0x20] == 0x20737377 || (piVar5[0x20] == 0x73737763)))) {
      uVar7 = D2Common_10973(iVar1,0x168,0);
      uVar6 = (uint)uVar7;
      piVar5 = (int *)0x0;
      if (uVar6 != 0) goto LAB_102bb5e6;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


// 0x102bb5f0  (ghidra: FUN_102bb5f0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_102bb5f0(int param_1,int param_2,uint32_t reg_ESI)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  uint64_t uVar7;
  uint8_t auStack_a8 [4];
  int iStack_a4;
  int iStack_a0;
  int local_9c;
  int *local_98;
  uint uStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  char cStack_80;
  char cStack_7f;
  char cStack_7e;
  char cStack_7d;
  uint32_t uStack_7c;
  char cStack_78;
  char cStack_77;
  char cStack_76;
  char cStack_75;
  char cStack_74;
  char cStack_73;
  char cStack_72;
  char cStack_71;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  int iStack_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint32_t uStack_58;
  uint32_t uStack_54;
  int iStack_50;
  uint32_t uStack_4c;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint local_14;
  
  local_14 = DAT_1039800c ^ (uint)auStack_a8;
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  local_9c = param_2;
  local_98 = (int *)param_1;
  uStack_94 = D2Common_10675();
  uVar6 = 0;
  iStack_a0 = 0;
  uVar7 = D2Common_10973(param_1,0x168,0);
  if ((int)uVar7 == 0) {
    if (local_9c == 0) goto LAB_102bb676;
  }
  else if (local_9c == 0) {
    return 0;
  }
  uVar7 = D2Common_10973(param_1,0xce,0);
  if ((int)uVar7 != 0) {
    return 0;
  }
LAB_102bb676:
  iStack_a4 = 0;
  if ((int)uStack_94 < 1) {
    return 0;
  }
  do {
    pcVar2 = (char *)D2Common_10783(iStack_a4);
    if ((((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) &&
        ((pcVar2[4] == '\x10' || (pcVar2[4] == '\x12')))) &&
       ((*(int *)(pcVar2 + 8) == 0x169 && (*(int *)(pcVar2 + 0xc) != 0)))) {
      if (*(ushort *)(pcVar2 + 0x1e) != 0) {
        uVar7 = D2Common_10695((uint)*(ushort *)(pcVar2 + 0x1e));
        iVar3 = (int)uVar7;
        if ((iVar3 != 0) &&
           ((((*(char *)(iVar3 + 0x80) != 'w' || (*(char *)(iVar3 + 0x81) != 's')) ||
             (*(char *)(iVar3 + 0x82) != 's')) || (*(char *)(iVar3 + 0x83) != ' '))))
        goto LAB_102bb81d;
      }
      iVar3 = sub_102bb3f0(local_98,*(uint *)(pcVar2 + 0x14),*(uint32_t *)(pcVar2 + 0x18));
      if (iVar3 != 0) {
        uStack_70 = *(uint32_t *)(pcVar2 + 0x5c);
        uStack_6c = *(uint32_t *)(pcVar2 + 0x60);
        cStack_80 = pcVar2[0x4c];
        cStack_7f = pcVar2[0x4d];
        cStack_7e = pcVar2[0x4e];
        cStack_7d = pcVar2[0x4f];
        uStack_7c = *(uint32_t *)(pcVar2 + 0x50);
        cStack_78 = pcVar2[0x54];
        cStack_77 = pcVar2[0x55];
        cStack_76 = pcVar2[0x56];
        cStack_75 = pcVar2[0x57];
        cStack_74 = pcVar2[0x58];
        cStack_73 = pcVar2[0x59];
        cStack_72 = pcVar2[0x5a];
        cStack_71 = pcVar2[0x5b];
        uStack_30 = *(uint32_t *)(pcVar2 + 0x9c);
        iStack_68 = *(int *)(pcVar2 + 100);
        uStack_64 = *(uint32_t *)(pcVar2 + 0x68);
        uStack_60 = *(uint32_t *)(pcVar2 + 0x6c);
        uStack_5c = *(uint32_t *)(pcVar2 + 0x70);
        uStack_58 = *(uint32_t *)(pcVar2 + 0x74);
        uStack_54 = *(uint32_t *)(pcVar2 + 0x78);
        iStack_50 = *(int *)(pcVar2 + 0x7c);
        uStack_4c = *(uint32_t *)(pcVar2 + 0x80);
        uStack_48 = *(uint32_t *)(pcVar2 + 0x84);
        uStack_44 = *(uint32_t *)(pcVar2 + 0x88);
        uStack_40 = *(uint32_t *)(pcVar2 + 0x8c);
        uStack_3c = *(uint32_t *)(pcVar2 + 0x90);
        uStack_38 = *(uint32_t *)(pcVar2 + 0x94);
        uStack_34 = *(uint32_t *)(pcVar2 + 0x98);
        iVar3 = iStack_a0;
        if (((cStack_78 == -1) && ((char)((uint3)*(uint32_t *)(pcVar2 + 0x50) >> 0x10) == '\x06'))
           && (*(int *)(pcVar2 + 0x7c) == -1)) {
          iVar3 = *(int *)(pcVar2 + 0xc);
          iStack_a0 = iVar3;
          iVar4 = rand();
          uVar6 = iVar3 + iVar4 % (1000 - iVar3);
          if (local_9c == 0) goto LAB_102bb7c0;
          iStack_a0 = 0x353;
          iVar3 = rand();
          uVar6 = iVar3 % 0x95 + 0x353;
        }
        else {
LAB_102bb7c0:
          if (iVar3 == 0) goto LAB_102bb81d;
        }
        piVar1 = local_98;
        if ((uVar6 != 0) && (uVar6 < *(uint *)(pcVar2 + 0xc))) {
          if (local_9c == 0) {
LAB_102bb846:
            iVar3 = 0;
            psVar5 = (short *)&uStack_64;
            do {
              iStack_90 = *(int *)(psVar5 + -2);
              if (iStack_90 == -1) {
                return 1;
              }
              if (local_9c != 0) {
                if (iStack_90 == 0x10e) {
                  iStack_90 = 0x1a9;
                }
                else if (iStack_90 == 0x10f) {
                  iStack_90 = 0x1aa;
                }
              }
              iStack_8c = (int)*psVar5;
              iStack_88 = (int)psVar5[1];
              iStack_84 = (int)psVar5[2];
              D2Common_10914(local_98,(uint)&iStack_90,0);
              iVar3 = iVar3 + 1;
              psVar5 = psVar5 + 6;
            } while (iVar3 < 5);
            return 1;
          }
          uVar7 = D2Common_10973((int)local_98,0x168,0);
          D2Common_10973((int)piVar1,0x169,0);
          if (iStack_68 != (int)uVar7) goto LAB_102bb846;
          iVar3 = rand();
          iStack_a4 = 0x15e;
          uVar6 = iStack_a0 + iVar3 % (1000 - iStack_a0);
        }
      }
    }
LAB_102bb81d:
    iStack_a4 = iStack_a4 + 1;
    if ((int)uStack_94 <= iStack_a4) {
      return 0;
    }
  } while( true );
}


// 0x102bb8d0  (ghidra: FUN_102bb8d0)  [gap]
uint __fastcall sub_102bb8d0(int param_1,uint reg_EAX)

{
  if (param_1 != 0) {
    reg_EAX = D2Common_11088_10275940((int *)param_1);
    if ((((reg_EAX != 0x2a) && (reg_EAX != 0x2b)) && (reg_EAX != 0x2c)) &&
       ((reg_EAX != 0x57 && (((reg_EAX == 0x30 || (reg_EAX == 0x26)) || (reg_EAX == 0x38)))))) {
      return reg_EAX & 0xffffff00;
    }
  }
  return CONCAT31((int3)(reg_EAX >> 8),1);
}


// 0x102bb910  (ghidra: FUN_102bb910)  [gap]
uint __fastcall sub_102bb910(int param_1,uint reg_EAX,uint reg_EDX)

{
  ulonglong uVar1;
  
  if (param_1 != 0) {
    uVar1 = D2Common_10106(param_1,reg_EDX,(int *)param_1);
    reg_EAX = (uint)uVar1;
    if ((reg_EAX != 5) && (reg_EAX != 7)) {
      reg_EAX = sub_102bb8d0(param_1,reg_EAX);
      if ((char)reg_EAX != '\0') goto LAB_102bb936;
    }
    return reg_EAX & 0xffffff00;
  }
LAB_102bb936:
  return CONCAT31((int3)(reg_EAX >> 8),1);
}


// 0x102bb940  (ghidra: FUN_102bb940)  [gap]
uint32_t __fastcall sub_102bb940(int param_1,int param_2,uint reg_EAX)

{
  bool bVar1;
  uint64_t uVar2;
  
  if (param_1 != 0) {
    if ((((*(char *)(param_2 + 0x80) == '7') && (*(char *)(param_2 + 0x81) == 'c')) &&
        (*(char *)(param_2 + 0x82) == 'r')) && (*(char *)(param_2 + 0x83) == ' ')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    uVar2 = D2Common_10973(param_1,0x98,0);
    reg_EAX = (uint)uVar2;
    if ((reg_EAX == 0) && (!bVar1)) {
      reg_EAX = D2Common_11088_10275940((int *)param_1);
      if ((((reg_EAX != 0x2f) && ((reg_EAX != 0x1b && (reg_EAX != 0x23)))) && (reg_EAX != 0x55)) &&
         (reg_EAX != 0x26)) goto LAB_102bb9ae;
    }
    return CONCAT31((int3)(reg_EAX >> 8),1);
  }
LAB_102bb9ae:
  return reg_EAX & 0xffffff00;
}


// 0x102bb9c0  (ghidra: FUN_102bb9c0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint8_t __fastcall sub_102bb9c0(int param_1)

{
  char cVar1;
  char local_18 [16];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  builtin_strncpy(local_18 + 0xc,"ci0 ",4);
  builtin_strncpy(local_18 + 8,"ci1 ",4);
  builtin_strncpy(local_18 + 4,"ci2 ",4);
  builtin_strncpy(local_18,"ci3 ",4);
  cVar1 = sub_102bb490(param_1,local_18 + 0xc);
  if (cVar1 == '\0') {
    cVar1 = sub_102bb490(param_1,local_18 + 8);
    if (cVar1 == '\0') {
      cVar1 = sub_102bb490(param_1,local_18 + 4);
      if (cVar1 == '\0') {
        cVar1 = sub_102bb490(param_1,local_18);
        if (cVar1 == '\0') {
          return 0;
        }
      }
    }
  }
  return 1;
}


// 0x102bba50  (ghidra: FUN_102bba50)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t
sub_102bba50(uint32_t *param_1,uint param_2,uint32_t param_3,uint32_t param_4,int *param_5)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  uint32_t *puVar6;
  uint uVar7;
  uint32_t *extraout_ECX;
  uint32_t extraout_ECX_00;
  int iVar8;
  uint uVar9;
  uint32_t uVar10;
  int *piVar11;
  uint uVar12;
  bool bVar13;
  uint64_t uVar14;
  uint8_t local_320 [16];
  uint32_t *local_310;
  uint32_t local_30c;
  int *local_308;
  int *local_304;
  uint8_t local_2fd;
  uint local_2fc;
  uint32_t local_2f8 [5];
  uint uStack_2e4;
  byte abStack_2dd [301];
  int local_1b0 [3];
  uint64_t local_1a4;
  int local_19c [49];
  int local_d8 [49];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffd20;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314b2b;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_310 = param_1;
  local_304 = (int *)param_2;
  local_308 = param_5;
  if ((param_2 == 0) || (param_1 == (uint32_t *)0x0)) {
    return 0;
  }
  ExceptionList = &local_10;
  memset(local_d8,0,0xc4);
  uVar9 = 0;
  local_2fc = 0;
  sub_1020f420((uint64_t *)local_1b0);
  sub_1020f7c0(extraout_ECX);
  local_8 = 0;
  sub_1020f410(&local_1a4);
  sub_102bdfe0(extraout_ECX_00);
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar6 = local_2f8;
  for (iVar8 = 0x52; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
  }
  do {
    iVar8 = uVar9 * 8;
    bVar1 = abStack_2dd[iVar8];
    uVar12 = (uint)bVar1;
    if (bVar1 != 0) {
      abStack_2dd[iVar8] = 1;
    }
    sub_102be030(local_d8,&local_14,local_19c);
    iVar4 = sub_102ecc90(local_2f8,param_3,local_304,local_2fc,param_4,local_d8);
    uVar2 = local_2fc;
    piVar5 = local_304;
    if (iVar4 == 0) {
      if (uVar12 == abStack_2dd[iVar8]) goto LAB_102bbb9c;
      abStack_2dd[iVar8] = bVar1;
      iVar8 = sub_102ecc90(local_2f8,param_3,local_304,local_2fc,param_4,local_19c);
      if (iVar8 == 0) goto LAB_102bbb9c;
    }
    else if (((&uStack_2e4)[uVar9 * 2] & 2) != 0) {
      bVar13 = false;
      iVar8 = 0;
      do {
        if (bVar13) {
          *(uint32_t *)((int)local_d8 + iVar8) = 0;
        }
        else {
          bVar13 = *(int *)((int)local_19c + iVar8) != *(int *)((int)local_d8 + iVar8);
        }
        iVar8 = iVar8 + 4;
      } while (iVar8 < 0xc4);
    }
    uVar10 = sub_10240bb0(local_1b0);
    if ((char)uVar10 != '\0') {
      piVar5 = (int *)D2Common_10460(piVar5);
      while (piVar5 != (int *)0x0) {
        D2Common_10695(piVar5[1]);
        if (*(char *)(piVar5[5] + 0x45) == '\x03') {
          uVar14 = D2Common_10695(piVar5[1]);
          local_30c = (uint32_t)uVar14;
          sub_1024aab0(&local_30c);
        }
        uVar14 = D2Common_10464(piVar5);
        piVar5 = (int *)uVar14;
      }
    }
    uVar9 = 0;
    local_2fc = 0;
    iVar8 = sub_10218980(local_1b0);
    if (iVar8 != 0) {
      do {
        if (*(short *)((int)local_310 + 0x12) == 200) {
          piVar5 = (int *)sub_10218970(local_1b0,uVar9);
          cVar3 = sub_102bb9c0(*piVar5 + 0x80);
          if (cVar3 != '\0') goto LAB_102bbb9c;
        }
        puVar6 = (uint32_t *)functions_D2ServerFunctions_1026cce0(local_308,uVar9);
        piVar5 = (int *)*puVar6;
        iVar8 = sub_102bb3f0(piVar5,(&uStack_2e4)[uVar2 * 2],
                             *(uint32_t *)(&stack0xfffffd20 + uVar2 * 8));
        if (iVar8 != 0) {
          uVar9 = D2Common_10048(piVar5);
          if (((uVar9 == 0) || ((int *)piVar5[5] == (int *)0x0)) || (*(int *)piVar5[5] != 2)) {
            iVar8 = -1;
          }
          else {
            uVar14 = D2Common_10973((int)piVar5,0x46,0);
            iVar8 = -(int)uVar14;
          }
          uVar12 = uVar12 + iVar8;
          uVar9 = sub_102be000(&local_1a4,(int *)&local_2fc);
          if (uVar9 == 0) {
            local_2fd = 0;
            iVar8 = sub_10228210(&local_2fc,&local_2fd);
            sub_102be0a0(local_320,iVar8);
          }
        }
        uVar9 = local_2fc + 1;
        local_2fc = uVar9;
        uVar7 = sub_10218980(local_1b0);
      } while (uVar9 < uVar7);
    }
    if (0 < (int)uVar12) goto LAB_102bbb9c;
    uVar9 = uVar2 + 1;
    local_2fc = uVar9;
  } while ((int)uVar9 < 7);
  piVar11 = (int *)0x0;
  local_304 = (int *)0x0;
  piVar5 = (int *)sub_10218980(local_308);
  if (piVar5 != (int *)0x0) {
    do {
      uVar9 = sub_102be000(&local_1a4,(int *)&local_304);
      if (uVar9 == 0) goto LAB_102bbb9c;
      piVar11 = (int *)((int)piVar11 + 1);
      local_304 = piVar11;
    } while (piVar11 < piVar5);
  }
  uVar10 = 1;
LAB_102bbb9e:
  thunk_FUN_1020f5d0(&local_1a4);
  thunk_FUN_1020fb40(local_1b0);
  ExceptionList = local_10;
  return uVar10;
LAB_102bbb9c:
  uVar10 = 0;
  goto LAB_102bbb9e;
}


// 0x102bbdf0  (ghidra: FUN_102bbdf0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall sub_102bbdf0(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  uint32_t *extraout_ECX;
  uint32_t *extraout_EDX;
  uint32_t *puVar2;
  int iVar3;
  uint *puVar4;
  uint8_t auStack_74 [4];
  int *local_70;
  uint32_t *local_6c;
  int local_68;
  uint32_t *local_64;
  void *local_60;
  int *local_5c;
  uint32_t local_58;
  uint32_t local_54;
  uint local_50 [17];
  uint local_c;
  
  local_c = DAT_1039800c ^ (uint)auStack_74;
  local_5c = param_4;
  local_70 = param_3;
  local_68 = param_2;
  memset(local_50,0,0x40);
  local_6c = (uint32_t *)sub_1020fae0(param_1);
  local_64 = (uint32_t *)sub_1020faf0(extraout_ECX);
  puVar2 = extraout_EDX;
  if (local_64 == extraout_EDX) {
    return;
  }
LAB_102bbe50:
  local_60 = (void *)*local_64;
  iVar3 = 0;
  if (*(short *)(param_2 + 0x10) != 0) {
    puVar4 = (uint *)(param_2 + 0x14);
    do {
      local_58 = *puVar4;
      local_54 = puVar4[1];
      if (((((short)(local_58 >> 0x10) == 0) && ((short)local_54 == 0)) &&
          ((char)(local_58 >> 8) == '\0')) &&
         (((char)(local_54 >> 0x10) == '\0' && ((char)(local_54 >> 0x18) == '\0'))))
      goto LAB_102bbf0e;
      iVar1 = sub_102bb3f0(local_60,local_58,local_54);
      puVar2 = local_6c;
      param_3 = local_70;
      if (iVar1 != 0) {
        if (local_54._3_1_ == '\0') goto LAB_102bbf01;
        iVar1 = 0;
        goto LAB_102bbee0;
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar3 < (int)(uint)*(ushort *)(local_68 + 0x10));
  }
  *param_3 = *param_3 + 1;
  goto LAB_102bbf1e;
  while (iVar1 = iVar1 + 1, iVar1 < 0x10) {
LAB_102bbee0:
    if ((local_50[iVar1] != 0) && (local_50[iVar1] == (uint)local_58._2_2_)) {
      if (*(char *)(local_68 + 1) != '\x04') goto LAB_102bbf1e;
      break;
    }
  }
LAB_102bbf01:
  local_50[iVar3] = (uint)local_58._2_2_;
  *local_5c = *local_5c + 1;
LAB_102bbf0e:
  *local_70 = *local_70 + 1;
  puVar2 = local_6c;
  param_3 = local_70;
LAB_102bbf1e:
  local_64 = local_64 + 1;
  param_2 = local_68;
  if (local_64 == puVar2) {
    return;
  }
  goto LAB_102bbe50;
}


// 0x102bbf50  (ghidra: FUN_102bbf50)  [gap]
int __fastcall sub_102bbf50(int param_1)

{
  int *piVar1;
  uint32_t *puVar2;
  uint32_t *puVar3;
  int *piVar4;
  int iVar5;
  uint32_t *extraout_ECX;
  uint32_t *extraout_EDX;
  int iVar6;
  uint64_t uVar7;
  
  iVar6 = 0;
  puVar2 = (uint32_t *)sub_1020fae0(param_1);
  puVar3 = (uint32_t *)sub_1020faf0(extraout_ECX);
  if (puVar3 != extraout_EDX) {
    do {
      piVar1 = (int *)*puVar3;
      uVar7 = D2Common_10695(piVar1[1]);
      if ((int)uVar7 == 0) {
LAB_102bbfce:
        uVar7 = D2Common_10973((int)piVar1,0x46,0);
        if (0 < (int)uVar7) {
          iVar6 = iVar6 + 1;
        }
      }
      else {
        piVar4 = (int *)((int)uVar7 + 0x80);
        uVar7 = functions_D2NewFunctions_102ce500(piVar4,(int *)&DAT_1037e170);
        if (((((((int)uVar7 == 0) &&
               (uVar7 = functions_D2NewFunctions_102ce500(piVar4,(int *)&DAT_1037e168), (int)uVar7 == 0)) &&
              (iVar5 = D2Common_11088_10275940(piVar1), iVar5 != 0x2a)) &&
             ((iVar5 != 0x2b && (iVar5 != 0x2c)))) &&
            ((iVar5 != 0x57 && ((iVar5 != 0x30 && (iVar5 != 0x26)))))) && (iVar5 != 0x38))
        goto LAB_102bbfce;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar2);
  }
  return iVar6;
}


// 0x102bbff0  (ghidra: FUN_102bbff0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int sub_Hook_sub_6fc92fc0_102bbff0(void *param_1,int *param_2,uint32_t *param_3,uint param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  uint32_t *puVar4;
  uint uVar5;
  uint uVar6;
  uint32_t *extraout_ECX;
  int iVar7;
  uint32_t extraout_ECX_00;
  int iVar8;
  uint unused_ECX;
  uint unused_ECX_00;
  float extraout_EDX;
  float extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint reg_EDX;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  uint reg_EDX_00;
  uint extraout_EDX_06;
  ushort *puVar9;
  uint uVar10;
  int *piVar11;
  float fVar12;
  uint64_t uVar13;
  uint32_t local_20c;
  uint32_t uStack_208;
  uint32_t uStack_204;
  uint32_t uStack_200;
  uint32_t local_1fc;
  uint32_t uStack_1f8;
  uint32_t uStack_1f4;
  uint32_t uStack_1f0;
  uint32_t local_1ec;
  uint32_t uStack_1e8;
  uint32_t uStack_1e4;
  uint32_t uStack_1e0;
  uint32_t local_1dc;
  uint32_t uStack_1d8;
  uint32_t uStack_1d4;
  uint32_t uStack_1d0;
  uint32_t local_1cc;
  uint32_t uStack_1c8;
  uint32_t uStack_1c4;
  uint32_t uStack_1c0;
  uint32_t local_1bc;
  uint8_t local_1a4 [4];
  float local_1a0;
  uint local_19c;
  int *local_198;
  int local_194;
  float local_190;
  uint local_18c;
  int *local_188;
  int *local_184;
  int *local_180;
  float local_17c;
  uint8_t local_175;
  float local_174;
  uint32_t local_170 [5];
  uint uStack_15c;
  byte abStack_155 [51];
  ushort auStack_122 [125];
  uint64_t local_28;
  uint64_t local_1c;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffea8;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314b75;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_198 = param_1;
  local_188 = param_2;
  local_19c = param_4;
  local_180 = param_5;
  sub_1020f420(&local_28);
  sub_1020f7c0(extraout_ECX);
  local_8 = 0;
  puVar4 = local_170;
  for (iVar7 = 0x52; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_17c = 0.0;
  sub_1020f410(&local_1c);
  sub_102bdfe0(extraout_ECX_00);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_184 = (int *)0x0;
  do {
    piVar11 = local_180;
    if (abStack_155[(int)local_184 * 8] != 0) {
      puVar9 = auStack_122;
      local_18c = 3;
      do {
        local_174 = 0.0;
        iVar7 = sub_10218980(piVar11);
        fVar12 = extraout_EDX;
        if (iVar7 != 0) {
          do {
            if ((*(char *)((int)puVar9 + 5) != '\0') &&
               (piVar2 = (int *)functions_D2ServerFunctions_1026cce0(piVar11,(uint)fVar12), fVar12 = local_174,
               *(uint *)(*piVar2 + 4) == (uint)*puVar9)) {
              local_17c = (float)(uint)*(byte *)((int)puVar9 + 5);
              memset(&local_20c,0,0x54);
              *(uint32_t *)(puVar9 + -1) = local_20c;
              *(uint32_t *)(puVar9 + 1) = uStack_208;
              *(uint32_t *)(puVar9 + 3) = uStack_204;
              *(uint32_t *)(puVar9 + 5) = uStack_200;
              *(uint32_t *)(puVar9 + 7) = local_1fc;
              *(uint32_t *)(puVar9 + 9) = uStack_1f8;
              *(uint32_t *)(puVar9 + 0xb) = uStack_1f4;
              *(uint32_t *)(puVar9 + 0xd) = uStack_1f0;
              *(uint32_t *)(puVar9 + 0xf) = local_1ec;
              *(uint32_t *)(puVar9 + 0x11) = uStack_1e8;
              *(uint32_t *)(puVar9 + 0x13) = uStack_1e4;
              *(uint32_t *)(puVar9 + 0x15) = uStack_1e0;
              *(uint32_t *)(puVar9 + 0x17) = local_1dc;
              *(uint32_t *)(puVar9 + 0x19) = uStack_1d8;
              *(uint32_t *)(puVar9 + 0x1b) = uStack_1d4;
              *(uint32_t *)(puVar9 + 0x1d) = uStack_1d0;
              *(uint32_t *)(puVar9 + 0x1f) = local_1cc;
              *(uint32_t *)(puVar9 + 0x21) = uStack_1c8;
              *(uint32_t *)(puVar9 + 0x23) = uStack_1c4;
              *(uint32_t *)(puVar9 + 0x25) = uStack_1c0;
              *(uint32_t *)(puVar9 + 0x27) = local_1bc;
              fVar12 = local_174;
            }
            local_174 = (float)((int)fVar12 + 1);
            fVar3 = (float)sub_10218980(piVar11);
            fVar12 = extraout_EDX_00;
          } while ((uint)extraout_EDX_00 < (uint)fVar3);
        }
        puVar9 = puVar9 + 0x2a;
        local_18c = local_18c + -1;
      } while (local_18c != 0);
      uVar10 = (uint)abStack_155[(int)local_184 * 8];
      iVar7 = 0x37;
      local_18c = uVar10;
      if (uVar10 != 0) {
        do {
          if (iVar7 < 1) {
            if (0 < (int)uVar10) goto LAB_102bc40a;
            break;
          }
          local_194 = iVar7 + -1;
          local_174 = 0.0;
          local_190 = 0.0;
          iVar7 = sub_10218980(piVar11);
          uVar5 = extraout_EDX_01;
          if (iVar7 == 0) goto LAB_102bc40a;
          do {
            local_1a0 = local_17c;
            puVar4 = (uint32_t *)functions_D2ServerFunctions_1026cce0(piVar11,uVar5);
            piVar11 = (int *)*puVar4;
            iVar7 = sub_102bb3f0(piVar11,(&uStack_15c)[(int)local_184 * 2],
                                 *(uint32_t *)(&stack0xfffffea8 + (int)local_184 * 8));
            if ((iVar7 != 0) && (uVar5 = sub_102be000(&local_1c,(int *)&local_174), uVar5 == 0)) {
              local_190 = 1.4013e-45;
              uVar5 = D2Common_10048(piVar11);
              if ((uVar5 == 0) || (((int *)piVar11[5] == (int *)0x0 || (*(int *)piVar11[5] != 2))))
              {
                local_175 = 1;
                iVar7 = sub_10228210(&local_174,&local_175);
                sub_102be0a0(local_1a4,iVar7);
                local_18c = uVar10;
              }
              else {
                uVar13 = D2Common_10973((int)piVar11,0x46,0);
                fVar12 = (float)((int)local_17c - 1);
                if ((int)local_17c < 1) {
                  fVar12 = local_17c;
                }
                iVar7 = (int)uVar13;
                if ((int)local_1a0 < 1) {
                  iVar7 = (int)uVar13 + -1;
                }
                local_17c = fVar12;
                D2Common_10887(piVar11,0x46,iVar7,0);
                if (iVar7 < 1) {
                  local_175 = 1;
                  iVar7 = sub_10228210(&local_174,&local_175);
                  sub_102be0a0(local_1a4,iVar7);
                }
              }
              uVar10 = local_18c - 1;
              local_18c = uVar10;
            }
            piVar11 = local_180;
            if (uVar10 == 0) break;
            sub_10218980(local_180);
            uVar13 = sub_102bacf0(&local_1c);
            if ((int)uVar13 == (int)((ulonglong)uVar13 >> 0x20)) break;
            local_174 = (float)((int)local_174 + 1);
            uVar6 = sub_10218980(piVar11);
            uVar5 = extraout_EDX_02;
          } while (extraout_EDX_02 < uVar6);
          if (local_190 == 0.0) goto LAB_102bc40a;
          iVar7 = local_194;
        } while (0 < (int)uVar10);
      }
      if (iVar7 < 1) {
LAB_102bc40a:
        piVar11 = (int *)0x0;
        goto LAB_102bc741;
      }
    }
    piVar11 = local_180;
    local_184 = (int *)((int)local_184 + 1);
    if (6 < (int)local_184) {
      local_194 = 0;
      local_174 = 0.0;
      local_190 = 0.0;
      local_17c = 0.0;
      iVar7 = sub_10218980(local_180);
      uVar10 = extraout_EDX_03;
      if (iVar7 != 0) {
        do {
          puVar4 = (uint32_t *)functions_D2ServerFunctions_1026cce0(piVar11,uVar10);
          piVar2 = (int *)*puVar4;
          uVar13 = D2Common_10744((int)piVar2,0x32);
          if ((int)uVar13 != 0) {
            iVar7 = D2Common_10587((int)piVar2,0x1f,0);
            local_174 = (float)iVar7;
            uVar10 = D2Common_10225(piVar2);
            uVar13 = D2Common_10695(piVar2[1]);
            iVar7 = (int)uVar13;
            local_194 = *(int *)(iVar7 + 0x80);
            if (uVar10 != 0) {
              local_174 = local_174 / 1.25;
            }
            iVar1 = *(int *)(iVar7 + 0xd0);
            iVar8 = iVar1 + 1;
            if (iVar1 != *(int *)(iVar7 + 0xcc)) {
              iVar8 = iVar1;
            }
            fVar12 = 1.0 - ((float)iVar8 - (local_174 - 0.5)) /
                           (float)(iVar8 - *(int *)(iVar7 + 0xcc));
            local_1a0 = 0.0;
            if (0.0 <= fVar12) {
              local_1a0 = fVar12;
            }
            FUN_10303060();
            iVar7 = sub_102ecb60();
            local_190 = (float)iVar7 / 100.0 + local_1a0;
            piVar11 = local_180;
          }
          uVar10 = D2Common_10048(piVar2);
          if ((((uVar10 != 0) && ((int *)piVar2[5] != (int *)0x0)) && (*(int *)piVar2[5] == 2)) &&
             ((uVar10 = sub_102be000(&local_1c,(int *)&local_17c), uVar10 == 0 &&
              (0x21e < (uint)piVar2[1])))) {
            D2Common_10012(unused_ECX,reg_EDX,piVar2,0xff);
          }
          local_17c = (float)((int)local_17c + 1);
          uVar5 = sub_10218980(piVar11);
          uVar10 = extraout_EDX_04;
        } while (extraout_EDX_04 < uVar5);
      }
      piVar2 = (int *)sub_6fc92220(local_198,local_188,(int)local_170,local_19c);
      local_184 = piVar2;
      uVar13 = D2Common_10744((int)piVar2,0x32);
      if (((int)uVar13 != 0) || (0.0 < local_174)) {
        uVar13 = D2Common_10695(piVar2[1]);
        iVar7 = *(int *)((int)uVar13 + 0x80);
        local_19c = D2Common_10225(local_184);
        piVar11 = local_180;
        if (((iVar7 != local_194) || (local_194 == 0)) && (0.0 < local_174)) {
          sub_102bb3c0();
          FUN_10303060();
          uVar5 = 0;
          uVar10 = FUN_103030b0();
          D2Common_10261((uint *)local_184[0x17],0x1f,uVar10,uVar5);
          piVar11 = local_180;
        }
      }
      local_17c = 0.0;
      iVar7 = sub_10218980(piVar11);
      uVar10 = extraout_EDX_05;
      if (iVar7 != 0) {
        do {
          puVar4 = (uint32_t *)functions_D2ServerFunctions_1026cce0(piVar11,uVar10);
          piVar2 = (int *)*puVar4;
          uVar10 = D2Common_10048(piVar2);
          if (((uVar10 != 0) && ((int *)piVar2[5] != (int *)0x0)) && (*(int *)piVar2[5] == 2)) {
            uVar10 = sub_102be000(&local_1c,(int *)&local_17c);
            if (uVar10 == 0) {
              D2Common_10012(unused_ECX_00,reg_EDX_00,piVar2,'\x03');
              iVar7 = functions_D2CommonFunctions_10267e40(local_188,3,local_198[0x1c]);
              uVar10 = D2Common_10133((int *)local_188[0x18],piVar2,iVar7,0,3,0,0);
              if (uVar10 != 0) {
                D2Common_10977(piVar2,1,1);
                D2Common_10977(piVar2,0x20,1);
                D2Common_10050((int *)local_188[0x18],piVar2);
              }
            }
            else {
              functions_D2NewFunctions_102c05c0(local_198,local_188,piVar2);
            }
          }
          local_17c = (float)((int)local_17c + 1);
          uVar5 = sub_10218980(piVar11);
          uVar10 = extraout_EDX_06;
        } while (extraout_EDX_06 < uVar5);
      }
      piVar11 = local_184;
      if ((local_184 != (int *)0x0) && (uVar10 = D2Common_10048(local_184), uVar10 != 0)) {
        iVar7 = D2Common_11088(piVar11);
        uVar10 = D2Common_10108(iVar7);
        if (uVar10 == 1) {
          D2Common_10887(piVar11,0x46,0x32,0);
        }
      }
      D2Common_10201(local_188,1);
LAB_102bc741:
      thunk_FUN_1020f5d0(&local_1c);
      thunk_FUN_1020fb40((uint32_t *)&local_28);
      ExceptionList = local_10;
      return (int)piVar11;
    }
  } while( true );
}


// 0x102bc770  (ghidra: FUN_102bc770)  [gap]
int __fastcall sub_102bc770(int param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  uVar1 = *(int *)(param_1 + 0x25fc) + 10;
  uVar2 = (uint3)(uVar1 >> 8);
  if (*(uint *)(param_1 + 0xa8) < uVar1) {
    return CONCAT31(uVar2,1);
  }
  *(uint *)(param_1 + 0x25fc) = *(uint *)(param_1 + 0xa8);
  return (uint)uVar2 << 8;
}


// 0x102bc790  (ghidra: FUN_102bc790)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall sub_102bc790(int param_1,void *param_2)

{
  uint64_t uVar1;
  int *local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_c = (int *)D2Common_10460(*(int **)(param_1 + 0x60));
  while (local_c != (int *)0x0) {
    if ((*local_c == 4) && (*(char *)(local_c[5] + 0x45) == '\x03')) {
      sub_10218990(param_2,&local_c);
    }
    uVar1 = D2Common_10464(local_c);
    local_c = (int *)uVar1;
  }
  return;
}

