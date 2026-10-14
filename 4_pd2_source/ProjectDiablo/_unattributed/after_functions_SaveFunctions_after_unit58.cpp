/*
 * _unattributed/after_functions_SaveFunctions_after_unit58.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x102f7500 - 0x102f7810
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


// 0x102f7500  (ghidra: FUN_102f7500)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_102f7500(int param_1,uint param_2,int param_3,uint32_t reg_ESI)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  uint64_t uVar5;
  uint8_t auStack_94 [4];
  uint local_90;
  uint local_8c;
  int iStack_88;
  uint local_84;
  double dStack_80;
  double dStack_78;
  uint uStack_70;
  int iStack_6c;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  uint uStack_44;
  int iStack_40;
  uint local_c;
  
  local_c = DAT_1039800c ^ (uint)auStack_94;
  if (param_1 != 0) {
    local_90 = param_2;
    iVar2 = functions_HelperFunctions_102ce5a0(param_2);
    if (iVar2 != 0) {
      iVar3 = *(int *)(param_1 + 0x2c);
      local_8c = (uint)*(ushort *)(iVar3 + 2);
      local_84 = (uint)*(ushort *)(iVar3 + 6);
      uVar5 = D2Common_10392(iVar3);
      if ((int)uVar5 != 0) {
        iVar3 = *(int *)((int)uVar5 + 0x2c);
        local_8c = (uint)*(ushort *)(iVar3 + 2);
        local_84 = (uint)*(ushort *)(iVar3 + 6);
      }
      dStack_80 = (double)CONCAT44(dStack_80._4_4_,(uint)*(ushort *)(iVar2 + 0xea));
      if (-1 < (short)*(ushort *)(iVar2 + 0xea)) {
        uVar5 = D2Common_10786(param_1,*(uint *)(iVar2 + 0x138),local_90,param_3);
        dStack_78 = (double)CONCAT44(dStack_78._4_4_,(int)uVar5);
        uVar5 = D2Common_10786(param_1,*(uint *)(iVar2 + 0x13c),local_90,param_3);
        iStack_88 = (int)uVar5;
        memset(&uStack_70,0,0x5c);
        uVar1 = local_8c;
        iVar2 = dStack_78._0_4_;
        iStack_40 = param_3;
        iVar3 = 0;
        iStack_60 = (int)SUB82(dStack_80,0);
        uStack_44 = local_90;
        uStack_70 = 3;
        if (0 < dStack_78._0_4_) {
          dStack_80 = (double)dStack_78._0_4_;
          iStack_6c = param_1;
          do {
            dVar4 = (((double)iVar3 + (double)iVar3) * 3.141592653589793) / dStack_80;
            dStack_78 = dVar4;
            libm_sse2_cos_precise();
            iStack_5c = (int)(dVar4 * (double)iStack_88) + uVar1;
            dVar4 = dStack_78;
            libm_sse2_sin_precise();
            iStack_58 = (int)(dVar4 * (double)iStack_88) + local_84;
            UNIT_Missile_6fb630f0(&uStack_70);
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar2);
        }
        return 1;
      }
    }
  }
  return 0;
}


// 0x102f76b0  (ghidra: FUN_102f76b0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_102f76b0(int param_1,uint param_2,uint32_t param_3)

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
  if ((param_1 != 0) && (iVar2 = *(int *)(param_1 + 0x2c), iVar2 != 0)) {
    iVar3 = functions_HelperFunctions_102ce5a0(param_2);
    if (iVar3 != 0) {
      uVar4 = D2Common_10392(iVar2);
      local_58 = (int)uVar4;
      if ((local_58 != 0) && (*(int *)(local_58 + 0x2c) != 0)) {
        memset(&local_64,0,0x5c);
        local_34 = param_3;
        local_50 = (uint)*(ushort *)(*(int *)(param_1 + 0x2c) + 2);
        local_4c = (uint)*(ushort *)(*(int *)(param_1 + 0x2c) + 6);
        local_64 = 0x10000;
        local_48 = (uint)*(ushort *)(*(int *)(local_58 + 0x2c) + 2);
        local_44 = (uint)*(ushort *)(*(int *)(local_58 + 0x2c) + 6);
        uVar1 = *(ushort *)(iVar3 + 0xe8);
        if ((0 < (short)uVar1) || (uVar1 = *(ushort *)(iVar3 + 0xea), 0 < (short)uVar1)) {
          local_54 = (uint)uVar1;
          local_60 = param_1;
          local_5c = param_1;
          local_38 = param_2;
          UNIT_Missile_6fb630f0(&local_64);
          return 1;
        }
      }
    }
  }
  return 0;
}


// 0x102f77b0  (ghidra: FUN_102f77b0)  [gap]
uint32_t __fastcall sub_102f77b0(int param_1,uint param_2,uint32_t param_3)

{
  int iVar1;
  ushort uVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    iVar1 = functions_HelperFunctions_102ce5a0(param_2);
    if ((iVar1 != 0) &&
       ((uVar2 = *(ushort *)(iVar1 + 0xe8), 0 < (short)uVar2 ||
        (uVar2 = *(ushort *)(iVar1 + 0xea), 0 < (short)uVar2)))) {
      sub_102eca30((uint)uVar2,param_2,param_3);
      *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) | 0x40;
      return 1;
    }
  }
  return 0;
}


// 0x102f7810  (ghidra: FUN_102f7810)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

uint32_t __fastcall sub_102f7810(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint64_t uVar4;
  int local_8c;
  uint local_88;
  int local_84;
  uint local_80;
  uint local_7c [3];
  uint local_70;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_4c;
  uint local_48;
  uint32_t local_34;
  int *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    return 0;
  }
  local_88 = param_1;
  local_80 = param_2;
  iVar1 = functions_HelperFunctions_102ce5a0(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(short *)(iVar1 + 0xea) == 0) {
    return 0;
  }
  local_1c = (int *)0x0;
  local_18 = 0;
  local_c = 0;
  local_84 = iVar1;
  uVar2 = D2Common_10101(*(int **)(param_1 + 0x60),(int *)&local_1c,&local_18,&local_c);
  if (local_1c == (int *)0x0) {
    return 0;
  }
  if (uVar2 == 0) {
    return 0;
  }
  if (local_c == 0) {
    return 0;
  }
  if (0x8ff < (*(uint *)(param_1 + 0x38) & 0xffffff00)) {
    *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) | 0x40;
  }
  uVar2 = D2Common_10711(local_1c);
  if (uVar2 == 0) {
    return 0;
  }
  uVar2 = D2Common_10321(local_1c);
  if ((int)uVar2 < 0x25) {
    if (uVar2 == 0x24) {
      local_7c[0] = (uint)*(ushort *)(iVar1 + 0xec);
      goto LAB_102f7933;
    }
    if (uVar2 == 1) {
      local_7c[0] = (uint)*(ushort *)(iVar1 + 0xee);
      goto LAB_102f7933;
    }
    if (uVar2 == 0x23) {
      local_7c[0] = (uint)*(ushort *)(iVar1 + 0xea);
      goto LAB_102f7933;
    }
  }
  else {
    if (uVar2 == 0x25) {
      local_7c[0] = *(ushort *)(iVar1 + 0xee) + 1;
      goto LAB_102f7933;
    }
    if (uVar2 == 0x173) {
      local_7c[0] = *(ushort *)(iVar1 + 0xee) + 2;
      goto LAB_102f7933;
    }
  }
  local_7c[0] = (uint)*(ushort *)(iVar1 + 0xea);
LAB_102f7933:
  local_14 = 0;
  local_10 = 0;
  iVar1 = sub_102ecae0(param_1,&local_14,&local_10);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x2c) + 2);
  uVar3 = (uint)*(ushort *)(*(int *)(param_1 + 0x2c) + 6);
  uVar4 = D2Common_10786(local_88,*(uint *)(local_84 + 0x138),local_80,param_3);
  iVar1 = (int)uVar4;
  memset(local_7c + 1,0,0x5c);
  local_7c[2] = local_88;
  local_70 = local_88;
  local_68 = local_7c[0];
  local_4c = local_80;
  local_48 = param_3;
  local_7c[1] = 0x10820;
  local_34 = 1;
  local_8c = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c[0] = 0;
  local_64 = uVar2;
  local_60 = uVar3;
  functions_HelperFunctions_102cfa30(uVar2,uVar3,local_14,local_10,(int *)&local_80,(int *)local_7c,&local_8c,&local_84,
               iVar1);
  uVar2 = local_7c[0];
  uVar3 = local_80;
  do {
    local_5c = uVar3;
    local_58 = uVar2;
    UNIT_Missile_6fb630f0(local_7c + 1);
    uVar3 = uVar3 + local_8c;
    iVar1 = iVar1 + -1;
    uVar2 = uVar2 + local_84;
  } while (0 < iVar1);
  *(uint *)(local_88 + 0xc4) = *(uint *)(local_88 + 0xc4) | 0x40;
  return 1;
}

