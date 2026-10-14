/*
 * _unattributed/after_functions_SaveFunctions_after_unit62.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x103000a0 - 0x10300400
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


// 0x103000a0  (ghidra: FUN_103000a0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall
sub_103000a0(int param_1,int param_2,uint param_3,int param_4,uint32_t reg_EBX)

{
  int iVar1;
  int *piVar2;
  void *this;
  int iVar3;
  double dVar4;
  uint64_t uVar5;
  int local_8c;
  int local_88;
  int local_84;
  double local_80;
  double local_78;
  uint uStack_70;
  int iStack_6c;
  uint32_t uStack_60;
  int iStack_5c;
  int iStack_58;
  uint32_t uStack_44;
  int iStack_40;
  uint local_c;
  
  local_c = DAT_1039800c ^ (uint)&local_8c;
  local_80 = (double)CONCAT44(local_80._4_4_,param_3);
  if (((param_2 != 0) && (param_1 != 0)) && (local_8c = functions_HelperFunctions_102ce5a0(param_3), local_8c != 0)) {
    local_88 = 0;
    local_84 = 0;
    sub_102ecac0(this);
    local_78 = (double)CONCAT44(local_78._4_4_,(uint)*(ushort *)(local_8c + 0x48));
    uVar5 = D2Common_10786(param_2,*(uint *)(local_8c + 0x138),param_3,param_4);
    iVar1 = (int)uVar5;
    uVar5 = D2Common_10786(param_2,*(uint *)(local_8c + 0x13c),local_80._0_4_,param_4);
    local_8c = (int)uVar5;
    if (*(int *)(param_2 + 4) == 0x458) {
      if (*(char *)(param_1 + 0x262b) == '\x02') {
        iVar1 = iVar1 * 2;
        local_8c = local_8c + 3;
      }
      else if (*(char *)(param_1 + 0x262b) == '\x03') {
        iVar1 = iVar1 * 3;
        local_8c = local_8c + 6;
      }
    }
    memset(&uStack_70,0,0x5c);
    uStack_60 = local_78._0_4_;
    iVar3 = 0;
    iStack_40 = param_4;
    uStack_44 = local_80._0_4_;
    uStack_70 = 3;
    if (0 < iVar1) {
      local_80 = (double)iVar1;
      iStack_6c = param_2;
      do {
        dVar4 = (((double)iVar3 + (double)iVar3) * 3.141592653589793) / local_80;
        local_78 = dVar4;
        libm_sse2_cos_precise();
        iStack_5c = (int)(dVar4 * (double)local_8c) + local_88;
        dVar4 = local_78;
        libm_sse2_sin_precise();
        iStack_58 = (int)(dVar4 * (double)local_8c) + local_84;
        piVar2 = MISSILES_Missiles_6fc8f930(param_1,&uStack_70);
        if (piVar2 != (int *)0x0) {
          functions_HelperFunctions_102d19e0((int)piVar2,param_1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    return 1;
  }
  return 0;
}


// 0x10300280  (ghidra: FUN_10300280)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_10300280(int param_1,int param_2,uint param_3,uint32_t param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  uint local_64;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_38;
  uint32_t local_34;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if (((param_2 != 0) && (iVar2 = *(int *)(param_2 + 0x2c), iVar2 != 0)) && (param_1 != 0)) {
    iVar3 = functions_HelperFunctions_102ce5a0(param_3);
    if (iVar3 != 0) {
      uVar4 = D2Common_10392(iVar2);
      local_58 = (int)uVar4;
      if ((local_58 != 0) && (*(int *)(local_58 + 0x2c) != 0)) {
        memset(&local_64,0,0x5c);
        local_38 = param_3;
        local_34 = param_4;
        local_50 = (uint)*(ushort *)(*(int *)(param_2 + 0x2c) + 2);
        local_4c = (uint)*(ushort *)(*(int *)(param_2 + 0x2c) + 6);
        local_64 = 0x10000;
        local_48 = (uint)*(ushort *)(*(int *)(local_58 + 0x2c) + 2);
        local_44 = (uint)*(ushort *)(*(int *)(local_58 + 0x2c) + 6);
        uVar1 = *(ushort *)(iVar3 + 0x46);
        if ((0 < (short)uVar1) || (uVar1 = *(ushort *)(iVar3 + 0x48), 0 < (short)uVar1)) {
          local_54 = (uint)uVar1;
          local_60 = param_2;
          local_5c = param_2;
          MISSILES_Missiles_6fc8f930(param_1,&local_64);
          return 1;
        }
      }
    }
  }
  return 0;
}


// 0x10300390  (ghidra: FUN_10300390)  [gap]
uint32_t __fastcall sub_10300390(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  ushort uVar2;
  
  if (((param_2 != 0) && (*(int *)(param_2 + 0x2c) != 0)) && (param_1 != 0)) {
    iVar1 = functions_HelperFunctions_102ce5a0(param_3);
    if ((iVar1 != 0) &&
       ((uVar2 = *(ushort *)(iVar1 + 0x46), 0 < (short)uVar2 ||
        (uVar2 = *(ushort *)(iVar1 + 0x48), 0 < (short)uVar2)))) {
      SKILLS_Skills_6fcc28f0((void *)param_1,(uint)uVar2,(int *)param_2,param_3,param_4,0,0,0,0,0);
      *(uint *)(param_2 + 0xc4) = *(uint *)(param_2 + 0xc4) | 0x40;
      return 1;
    }
  }
  return 0;
}


// 0x10300400  (ghidra: FUN_10300400)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_10300400(int param_1,int *param_2,uint param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint16_t extraout_var;
  int iVar4;
  int *piVar5;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *pvVar6;
  int iVar7;
  int iVar8;
  uint64_t uVar9;
  uint local_94;
  int local_88;
  int local_84;
  uint local_7c;
  uint local_78;
  int *local_74;
  int *local_70;
  uint local_68;
  int local_5c;
  int local_58;
  uint local_4c;
  uint local_48;
  uint32_t local_34;
  int *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (param_2[0xb] == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = functions_HelperFunctions_102ce5a0(param_3);
  if (iVar2 == 0) {
    return 0;
  }
  local_7c = (uint)*(ushort *)(iVar2 + 0x48);
  if (local_7c == 0) {
    return 0;
  }
  if (*param_2 == 0) {
    if ((int *)param_2[0x18] == (int *)0x0) {
      return 0;
    }
    local_1c = (int *)0x0;
    local_10 = 0;
    local_c = 0;
    uVar3 = D2Common_10101((int *)param_2[0x18],(int *)&local_1c,&local_10,&local_c);
    if (local_1c == (int *)0x0) {
      return 0;
    }
    if (uVar3 == 0) {
      return 0;
    }
    if (local_c == 0) {
      return 0;
    }
    uVar3 = D2Common_10711(local_1c);
    if (uVar3 == 0) {
      return 0;
    }
    uVar3 = D2Common_10321(local_1c);
    pvVar6 = extraout_ECX_00;
    if ((int)uVar3 < 0x25) {
      if (uVar3 == 0x24) {
        local_7c = (uint)*(ushort *)(iVar2 + 0x4a);
      }
      else if (uVar3 == 1) {
        local_7c = (uint)*(ushort *)(iVar2 + 0x4c);
      }
      else {
        if (uVar3 != 0x23) goto LAB_103004fb;
        local_7c = (uint)*(ushort *)(iVar2 + 0x48);
      }
    }
    else if (uVar3 == 0x25) {
      local_7c = *(ushort *)(iVar2 + 0x4c) + 1;
    }
    else if (uVar3 == 0x173) {
      local_7c = *(ushort *)(iVar2 + 0x4c) + 2;
    }
    else {
LAB_103004fb:
      local_7c = (uint)*(ushort *)(iVar2 + 0x48);
    }
  }
  else {
    pvVar6 = extraout_ECX;
    if (*param_2 != 1) goto LAB_10300545;
    sVar1 = functions_D2NewFunctions_102c85f0((int)param_2,(uint)extraout_ECX);
    local_7c = CONCAT22(extraout_var,sVar1);
    pvVar6 = extraout_ECX_01;
  }
  if (local_7c == 0) {
    return 0;
  }
LAB_10300545:
  local_14 = 0;
  local_18 = 0;
  iVar4 = sub_102ecac0(pvVar6);
  if (iVar4 != 0) {
    uVar9 = D2Common_10786((uint)param_2,*(uint *)(iVar2 + 0x138),param_3,param_4);
    uVar3 = (uint)uVar9;
    iVar4 = local_14 - (uint)*(ushort *)(param_2[0xb] + 2);
    local_1c = (int *)(local_18 - (uint)*(ushort *)(param_2[0xb] + 6));
    sub_102eec20();
    sub_102eec40();
    iVar7 = local_14 - (int)(iVar4 * uVar3) / 2;
    iVar8 = local_18 - (int)((int)local_1c * uVar3) / 2;
    uVar9 = D2Common_10786((uint)param_2,*(uint *)(iVar2 + 0x140),param_3,param_4);
    local_10 = (uint)uVar9;
    if ((uint)uVar9 == 0) {
      local_10 = uVar3;
    }
    uVar9 = D2Common_10786((uint)param_2,*(uint *)(iVar2 + 0x144),param_3,param_4);
    local_c = (uint)uVar9;
    memset(&local_78,0,0x5c);
    local_68 = local_7c;
    local_4c = param_3;
    local_48 = param_4;
    local_74 = param_2;
    local_70 = param_2;
    uVar9 = D2Common_10786((uint)param_2,*(uint *)(iVar2 + 0x13c),param_3,param_4);
    local_34 = (uint32_t)uVar9;
    local_78 = 0x10820;
    iVar2 = (int)(uVar3 - local_10) / 2;
    local_88 = iVar2;
    if (0 < iVar2) {
      do {
        local_5c = iVar7;
        local_58 = iVar8;
        piVar5 = MISSILES_Missiles_6fc8f930(param_1,&local_78);
        if ((piVar5 != (int *)0x0) && (local_c != 0)) {
          D2Common_10551((int)piVar5,0x19,local_c,0);
        }
        iVar7 = iVar7 + iVar4;
        iVar8 = iVar8 + (int)local_1c;
        local_88 = local_88 + -1;
      } while (local_88 != 0);
    }
    local_78 = 0x820;
    if (0 < (int)local_10) {
      local_94 = local_10;
      do {
        local_5c = iVar7;
        local_58 = iVar8;
        piVar5 = MISSILES_Missiles_6fc8f930(param_1,&local_78);
        if ((piVar5 != (int *)0x0) && (local_c != 0)) {
          D2Common_10551((int)piVar5,0x19,local_c,0);
        }
        iVar7 = iVar7 + iVar4;
        iVar8 = iVar8 + (int)local_1c;
        local_94 = local_94 - 1;
      } while (local_94 != 0);
    }
    local_84 = (uVar3 - iVar2) - local_10;
    local_78 = 0x10820;
    if (0 < local_84) {
      do {
        local_5c = iVar7;
        local_58 = iVar8;
        piVar5 = MISSILES_Missiles_6fc8f930(param_1,&local_78);
        if ((piVar5 != (int *)0x0) && (local_c != 0)) {
          D2Common_10551((int)piVar5,0x19,local_c,0);
        }
        iVar7 = iVar7 + iVar4;
        iVar8 = iVar8 + (int)local_1c;
        local_84 = local_84 + -1;
      } while (local_84 != 0);
    }
  }
  param_2[0x31] = param_2[0x31] | 0x40;
  return 1;
}

