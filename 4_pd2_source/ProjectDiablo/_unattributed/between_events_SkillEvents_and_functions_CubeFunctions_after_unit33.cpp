/*
 * _unattributed/between_events_SkillEvents_and_functions_CubeFunctions_after_unit33.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x102b02d0 - 0x102b04d0
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


// 0x102b02d0  (ghidra: FUN_102b02d0)  [gap]
void __fastcall sub_102b02d0(int param_1,uint32_t *param_2,uint32_t *param_3)

{
  if (param_1 != 0) {
    if (*(byte *)(param_1 + 0x262a) < 3) {
      *param_2 = 0x476c;
      *param_3 = 0x35bf;
      return;
    }
    if (*(byte *)(param_1 + 0x262a) < 5) {
      *param_2 = 0x47d3;
      *param_3 = 0x394b;
      return;
    }
    *param_2 = 0x4e9a;
    *param_3 = 0x1403;
  }
  return;
}


// 0x102b0320  (ghidra: FUN_102b0320)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * __fastcall sub_102b0320(uint32_t param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint local_10;
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  local_c = 0;
  puVar3 = (uint *)D2Common_10331(param_2);
  if (puVar3 != (uint *)0x0) {
    D2Common_10383(puVar3,&local_10,&local_c);
    iVar4 = 0;
    if (0 < (int)local_c) {
      do {
        iVar1 = *(int *)(local_10 + iVar4 * 4);
        if (iVar1 != 0) {
          for (piVar2 = *(int **)(iVar1 + 0x74); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x3a])
          {
            if (((piVar2 != param_2) && (piVar2[1] == 0x3a6)) && (*piVar2 == 1)) {
              return piVar2;
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_c);
    }
  }
  return (int *)0x0;
}


// 0x102b03b0  (ghidra: FUN_102b03b0)  [gap]
uint32_t __fastcall sub_102b03b0(int param_1,int *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  if ((((param_1 != 0) && (param_2 != (int *)0x0)) && (param_3 != 0)) &&
     ((iVar8 = param_2[0xb], iVar8 != 0 && (iVar6 = *(int *)(param_3 + 0x2c), iVar6 != 0)))) {
    uVar1 = *(ushort *)(iVar8 + 2);
    uVar10 = 0;
    uVar2 = *(ushort *)(iVar8 + 6);
    iVar8 = 0;
    uVar3 = *(ushort *)(iVar6 + 2);
    uVar4 = *(ushort *)(iVar6 + 6);
    iVar6 = 0x7fffffff;
    for (iVar9 = 0; ((iVar6 < 6 || (289.0 <= (double)iVar6)) && (iVar9 < 10)); iVar9 = iVar9 + 1) {
      while (((-3 < (int)uVar10 && ((int)uVar10 < 3)) && (iVar8 + 2U < 5))) {
        uVar10 = functions_D2NewFunctions_102c5d10(param_2);
        uVar10 = uVar10 % 10 - 5;
        uVar5 = functions_D2NewFunctions_102c5d10(param_2);
        iVar8 = uVar5 % 10 - 5;
      }
      uVar10 = uVar10 + uVar1;
      iVar8 = iVar8 + (uint)uVar2;
      iVar6 = (uint)uVar4 - iVar8;
      iVar7 = uVar3 - uVar10;
      iVar6 = iVar7 * iVar7 + iVar6 * iVar6;
    }
    if (iVar9 != 10) {
      sub_6fd12540(param_1,param_2,0,2,uVar10,(byte)iVar8,1,0);
      return 1;
    }
  }
  return 0;
}


// 0x102b04d0  (ghidra: FUN_102b04d0)  [gap]
uint32_t __fastcall
sub_102b04d0(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint64_t uVar11;
  
  if ((((param_1 == 0) || (param_2 == (int *)0x0)) || (param_3 == 0)) ||
     ((iVar9 = param_2[0xb], iVar9 == 0 || (iVar4 = *(int *)(param_3 + 0x2c), iVar4 == 0)))) {
    return 0;
  }
  uVar7 = (uint)*(ushort *)(iVar9 + 2);
  uVar1 = *(ushort *)(iVar9 + 6);
  uVar2 = (uint)uVar1;
  iVar9 = 0;
  uVar8 = (uint)*(ushort *)(iVar4 + 2);
  uVar3 = (uint)*(ushort *)(iVar4 + 6);
  uVar10 = 0;
  if (((uVar7 != 0) || (uVar2 != 0)) && ((uVar8 != 0 || (uVar3 != 0)))) {
    if (param_6 == 0) {
      uVar11 = functions_HelperFunctions_102cfaf0(uVar7,uVar2,uVar8,uVar3);
      if ((int)uVar11 < param_4) goto LAB_102b063a;
    }
    else {
      do {
        if ((1 < (int)uVar10) || (2 < iVar9 + 1U)) break;
        uVar10 = functions_D2NewFunctions_102c5d10(param_2);
        uVar10 = uVar10 % (uint)(param_4 * 2) - param_4;
        uVar5 = functions_D2NewFunctions_102c5d10(param_2);
        iVar9 = uVar5 % (uint)(param_4 * 2) - param_4;
      } while (-2 < (int)uVar10);
      uVar10 = uVar10 + *(ushort *)(*(int *)(param_3 + 0x2c) + 0x10);
      iVar9 = iVar9 + (uint)*(ushort *)(*(int *)(param_3 + 0x2c) + 0x12);
    }
    iVar4 = 0xf;
    if (param_5 == 0) {
      iVar4 = 2;
    }
    uVar5 = D2Common_10973(param_3,0x60,0);
    iVar6 = 0x14;
    if (param_5 == 0) {
      iVar6 = 0x28;
    }
    *(uint *)(*(int *)(param_2[5] + 0x2c) + 0x1c) = (uVar5 >> 1) + iVar6;
    *(uint32_t *)(*(int *)(param_2[5] + 0x2c) + 0x18) = 0xf;
    *(uint32_t *)(*(int *)(param_2[5] + 0x2c) + 0x20) = 0x28;
    iVar9 = sub_6fd12540(param_1,param_2,param_3,iVar4,uVar10,(byte)iVar9,1,4);
    if (((iVar9 != 0) || (uVar11 = functions_HelperFunctions_102cfaf0(uVar7,uVar2,uVar8,uVar3), (int)uVar11 < param_4)) ||
       (iVar9 = sub_6fd12540(param_1,param_2,param_3,iVar4,(int)(uVar8 - uVar7) / 2 + uVar7,
                             (char)((int)(uVar3 - uVar2) / 2) + (char)uVar1,1,4), iVar9 != 0)) {
      return 1;
    }
  }
LAB_102b063a:
  functions_HelperFunctions_102d0020(param_1,(int)param_2,1);
  return 0;
}

