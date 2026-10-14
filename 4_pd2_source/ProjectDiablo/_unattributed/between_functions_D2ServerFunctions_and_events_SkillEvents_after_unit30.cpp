/*
 * _unattributed/between_functions_D2ServerFunctions_and_events_SkillEvents_after_unit30.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x102ae050 - 0x102ae2f0
 * Functions     : 7
 * Attribution   : gap=7
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x102ae050  [gap]
void thunk_FUN_102ad9b0(void)

{
  uint uVar1;
  int *piVar2;
  HWND pHVar3;
  int iVar4;
  code *dwNewLong;
  int iStack_14;
  uint8_t auStack_10 [12];
  
  uVar1 = D2gfx_10048();
  if (uVar1 == 0) {
    iStack_14 = 0x32;
    do {
      piVar2 = sub_10260010(auStack_10,&iStack_14);
      sub_10260030((uint64_t *)piVar2);
      uVar1 = D2gfx_10048();
    } while (uVar1 == 0);
  }
  iVar4 = -4;
  pHVar3 = (HWND)D2gfx_10048();
  DAT_104dbf40 = GetWindowLongW(pHVar3,iVar4);
  dwNewLong = sub_10256620;
  iVar4 = -4;
  pHVar3 = (HWND)D2gfx_10048();
  SetWindowLongW(pHVar3,iVar4,(LONG)dwNewLong);
  pHVar3 = (HWND)D2gfx_10048();
  sub_1022cb70(pHVar3);
  return;
}


// 0x102ae060  [gap]
void thunk_FUN_102ada30(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iStack_14;
  uint8_t auStack_10 [12];
  
  iVar3 = 0;
  do {
    do {
      sub_10256420(iVar3);
      iStack_14 = 0x28;
      piVar2 = sub_10260010(auStack_10,&iStack_14);
      sub_10260030((uint64_t *)piVar2);
      iVar1 = iVar3 + 1;
      iVar3 = 0;
    } while (1999999999 < iVar1);
    iVar3 = iVar1;
  } while( true );
}


// 0x102ae070  [gap]
void __fastcall thunk_FUN_102ada80(uint32_t param_1,uint param_2,uint32_t reg_EBX)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint64_t uVar4;
  int iStack_14;
  uint8_t auStack_10 [12];
  
  iVar3 = 0;
  do {
    do {
      sub_102563e0(iVar3,param_2,reg_EBX);
      iStack_14 = 5;
      piVar2 = sub_10260010(auStack_10,&iStack_14);
      uVar4 = sub_10260030((uint64_t *)piVar2);
      param_2 = (uint)((ulonglong)uVar4 >> 0x20);
      iVar1 = iVar3 + 1;
      iVar3 = 0;
    } while (1999999999 < iVar1);
    iVar3 = iVar1;
  } while( true );
}


// 0x102ae080  (ghidra: FUN_102ae080)  [gap]
int __fastcall sub_102ae080(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint64_t uVar4;
  
  uVar4 = D2Common_10973(param_2,0x1a6,0);
  uVar3 = (uint)uVar4;
  iVar2 = 0;
  if (uVar3 != 0) {
    iVar2 = sub_102ef620();
    if (iVar2 == 0) {
      uVar4 = __alldiv(0x9c4,0,uVar3,(int)uVar3 >> 0x1f);
      uVar3 = (uint)uVar4;
      if ((*(int *)(param_2 + 0x5c) != 0) &&
         (piVar1 = *(int **)(*(int *)(param_2 + 0x5c) + 4), piVar1 != (int *)0x0)) {
        uVar4 = D2Common_10331(piVar1);
        uVar4 = D2Common_10826((int)uVar4);
        iVar2 = functions_HelperFunctions_102cea70((int)uVar4);
        if (iVar2 != 0) {
          uVar3 = uVar3 >> 1;
        }
      }
      uVar4 = sub_6fcaea80(param_1,(int *)param_2,3,*(int *)(param_1 + 0xa8) + 1 + uVar3,0,0,0);
      iVar2 = (int)uVar4;
    }
  }
  return iVar2;
}


// 0x102ae100  (ghidra: FUN_102ae100)  [gap]
void sub_102ae100(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = D2Common_10973(param_1,0xfc,0);
  uVar1 = (uint)uVar3;
  if (uVar1 != 0) {
    uVar2 = sub_102ef620();
    if (uVar2 == 0) {
      uVar4 = uVar2;
      uVar5 = uVar2;
      uVar3 = __alldiv(0x9c4,0,uVar1,(int)uVar1 >> 0x1f);
      sub_6fcaea80(param_2,(int *)param_1,3,(int)uVar3 + *(int *)(param_2 + 0xa8) + 1,uVar2,uVar4,
                   uVar5);
    }
  }
  sub_102ae080(param_2,param_1);
  return;
}


// 0x102ae170  (ghidra: FUN_102ae170)  [gap]
int __fastcall sub_102ae170(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  ushort *puVar4;
  int *piVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  uint64_t uVar10;
  
  iVar2 = param_1;
  if (((param_1 != 0) && (param_2 != 0)) && (*(int *)(param_2 + 0x5c) != 0)) {
    iVar2 = functions_HelperFunctions_102ce6d0(0xcc);
    uVar9 = *(uint *)(iVar2 + 0x10);
    puVar3 = (uint *)D2Common_10195(param_2,0x40);
    iVar2 = 0;
    if (puVar3 != (uint *)0x0) {
      iVar2 = 0;
      puVar7 = (ushort *)0x0;
      if ((ushort)puVar3[10] != 0) {
        puVar4 = (ushort *)puVar3[9];
        do {
          puVar7 = puVar4;
          if (puVar4[1] == 0xcc) break;
          iVar2 = iVar2 + 1;
          puVar4 = puVar4 + 4;
          puVar7 = (ushort *)0x0;
        } while (iVar2 < (int)(uint)(ushort)puVar3[10]);
      }
      iVar2 = *(int *)(param_2 + 0x5c);
      iVar6 = 0;
      puVar4 = (ushort *)(iVar2 + 0x4c);
      iVar8 = 0;
      if (*puVar4 != 0) {
        iVar2 = *(int *)(iVar2 + 0x48);
        do {
          iVar8 = iVar2;
          if (*(short *)(iVar2 + 2) == 0xcc) break;
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + 8;
          iVar8 = 0;
        } while (iVar6 < (int)(uint)*puVar4);
      }
      if ((puVar7 != (ushort *)0x0) && (iVar8 != 0)) {
        uVar1 = *(uint *)(puVar7 + 2);
        if ((int)(uVar1 % uVar9) < (int)(uVar1 / uVar9)) {
          D2Common_11037(puVar3,0xcc,uVar1 + 1,(uint)*puVar7,param_2);
          piVar5 = (int *)D2Common_11160(param_2,(uint *)0x0);
          if (((piVar5 != (int *)0x0) && (*piVar5 == 0)) &&
             ((piVar5[5] != 0 && (iVar2 = *(int *)(piVar5[5] + 0x9c), iVar2 != 0)))) {
            sub_102ede30(param_2,(uint)*puVar7,iVar2,1,0xcc,uVar1 + 1);
          }
        }
        uVar10 = D2Common_10973(param_2,0x1a6,0);
        uVar9 = (uint)uVar10;
        iVar2 = 0;
        if (uVar9 != 0) {
          uVar10 = __alldiv(0x9c4,0,uVar9,(int)uVar9 >> 0x1f);
          uVar9 = (uint)uVar10;
          piVar5 = (int *)D2Common_11160(param_2,(uint *)0x0);
          if ((piVar5 != (int *)0x0) && (*piVar5 == 0)) {
            uVar10 = D2Common_10331(piVar5);
            uVar10 = D2Common_10826((int)uVar10);
            iVar2 = functions_HelperFunctions_102cea70((int)uVar10);
            if (iVar2 != 0) {
              uVar9 = uVar9 >> 1;
            }
          }
          uVar10 = sub_6fcaea80(param_1,(int *)param_2,3,*(int *)(param_1 + 0xa8) + 1 + uVar9,0,0,0)
          ;
          iVar2 = (int)uVar10;
        }
      }
    }
  }
  return iVar2;
}


// 0x102ae2f0  (ghidra: FUN_102ae2f0)  [gap]
int __fastcall sub_Wraps_D2Game_ITEMS_ItemMode_102ae2f0(int param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  ushort *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  uint64_t uVar10;
  
  uVar10 = D2Common_10973((int)param_2,0xfc,0);
  if ((((int)uVar10 != 0) &&
      (uVar5 = D2Common_10202(param_2,0x100,0x15a7,"..\\Source\\D2Game\\ITEMS\\ItemMode.cpp"),
      uVar5 == 0)) && (uVar5 = D2Common_10865(param_2), uVar5 != 0)) {
    iVar6 = D2Common_11116((int)param_2);
    iVar6 = func_0x102ecc50(0x48,0xfc,param_1,param_2,iVar6);
    if (iVar6 != 0) {
      return iVar6;
    }
  }
  uVar10 = D2Common_10973((int)param_2,0xfd,0);
  if (((int)uVar10 != 0) && (uVar5 = D2Common_10048(param_2), uVar5 != 0)) {
    iVar6 = D2Common_10463(param_2);
    iVar6 = func_0x102ecc50(0x46,0xfd,param_1,param_2,iVar6);
    if (iVar6 != 0) {
      return iVar6;
    }
  }
  uVar10 = D2Common_10973((int)param_2,0x1a6,0);
  if ((int)uVar10 == 0) {
    return 0;
  }
  if (((param_1 != 0) && (param_2 != (int *)0x0)) && (param_2[0x17] != 0)) {
    iVar6 = functions_HelperFunctions_102ce6d0(0xcc);
    uVar5 = *(uint *)(iVar6 + 0x10);
    iVar6 = param_1;
    puVar2 = (uint *)D2Common_10195((int)param_2,0x40);
    param_1 = 0;
    if (puVar2 != (uint *)0x0) {
      iVar7 = 0;
      puVar9 = (ushort *)0x0;
      if ((ushort)puVar2[10] != 0) {
        puVar3 = (ushort *)puVar2[9];
        do {
          puVar9 = puVar3;
          if (puVar3[1] == 0xcc) break;
          iVar7 = iVar7 + 1;
          puVar3 = puVar3 + 4;
          puVar9 = (ushort *)0x0;
        } while (iVar7 < (int)(uint)(ushort)puVar2[10]);
      }
      param_1 = param_2[0x17];
      iVar8 = 0;
      puVar3 = (ushort *)(param_1 + 0x4c);
      iVar7 = 0;
      if (*puVar3 != 0) {
        param_1 = *(int *)(param_1 + 0x48);
        do {
          iVar7 = param_1;
          if (*(short *)(param_1 + 2) == 0xcc) break;
          iVar8 = iVar8 + 1;
          param_1 = param_1 + 8;
          iVar7 = 0;
        } while (iVar8 < (int)(uint)*puVar3);
      }
      if ((puVar9 != (ushort *)0x0) && (iVar7 != 0)) {
        uVar1 = *(uint *)(puVar9 + 2);
        if ((int)(uVar1 % uVar5) < (int)(uVar1 / uVar5)) {
          D2Common_11037(puVar2,0xcc,uVar1 + 1,(uint)*puVar9,(uint)param_2);
          piVar4 = (int *)D2Common_11160((int)param_2,(uint *)0x0);
          if ((((piVar4 != (int *)0x0) && (*piVar4 == 0)) && (piVar4[5] != 0)) &&
             (iVar7 = *(int *)(piVar4[5] + 0x9c), iVar7 != 0)) {
            sub_102ede30(param_2,(uint)*puVar9,iVar7,1,0xcc,uVar1 + 1);
          }
        }
        uVar10 = D2Common_10973((int)param_2,0x1a6,0);
        uVar5 = (uint)uVar10;
        param_1 = 0;
        if (uVar5 != 0) {
          uVar10 = __alldiv(0x9c4,0,uVar5,(int)uVar5 >> 0x1f);
          uVar5 = (uint)uVar10;
          piVar4 = (int *)D2Common_11160((int)param_2,(uint *)0x0);
          if ((piVar4 != (int *)0x0) && (*piVar4 == 0)) {
            uVar10 = D2Common_10331(piVar4);
            uVar10 = D2Common_10826((int)uVar10);
            iVar7 = functions_HelperFunctions_102cea70((int)uVar10);
            if (iVar7 != 0) {
              uVar5 = uVar5 >> 1;
            }
          }
          uVar10 = sub_6fcaea80(iVar6,param_2,3,*(int *)(iVar6 + 0xa8) + 1 + uVar5,0,0,0);
          param_1 = (int)uVar10;
        }
      }
    }
  }
  return param_1;
}

