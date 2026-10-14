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
void __fastcall sub_102ae080(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  
  uVar2 = D2Common_10973(param_2,0x1a6,0);
  if (uVar2 != 0) {
    iVar3 = sub_102ef620();
    if (iVar3 == 0) {
      uVar5 = __alldiv(0x9c4,0,uVar2,(int)uVar2 >> 0x1f);
      uVar2 = (uint)uVar5;
      if ((*(int *)(param_2 + 0x5c) != 0) &&
         (piVar1 = *(int **)(*(int *)(param_2 + 0x5c) + 4), piVar1 != (int *)0x0)) {
        uVar4 = D2Common_10331(piVar1);
        uVar4 = D2Common_10826(uVar4);
        iVar3 = functions_HelperFunctions_102cea70(uVar4);
        if (iVar3 != 0) {
          uVar2 = uVar2 >> 1;
        }
      }
      sub_6fcaea80(param_1,(int *)param_2,3,*(int *)(param_1 + 0xa8) + 1 + uVar2,0,0,0);
    }
  }
  return;
}


// 0x102ae100  (ghidra: FUN_102ae100)  [gap]
void sub_102ae100(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = D2Common_10973(param_1,0xfc,0);
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
void __fastcall sub_102ae170(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  ushort *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  uint64_t uVar10;
  
  if (((param_1 != 0) && (param_2 != 0)) && (*(int *)(param_2 + 0x5c) != 0)) {
    iVar1 = functions_HelperFunctions_102ce6d0(0xcc);
    uVar6 = *(uint *)(iVar1 + 0x10);
    puVar2 = (uint *)D2Common_10195(param_2,0x40);
    if (puVar2 != (uint *)0x0) {
      iVar1 = 0;
      puVar9 = (ushort *)0x0;
      if ((ushort)puVar2[10] != 0) {
        puVar3 = (ushort *)puVar2[9];
        do {
          puVar9 = puVar3;
          if (puVar3[1] == 0xcc) break;
          iVar1 = iVar1 + 1;
          puVar3 = puVar3 + 4;
          puVar9 = (ushort *)0x0;
        } while (iVar1 < (int)(uint)(ushort)puVar2[10]);
      }
      iVar7 = 0;
      uVar8 = (uint)*(ushort *)(*(int *)(param_2 + 0x5c) + 0x4c);
      iVar1 = 0;
      if (uVar8 != 0) {
        iVar4 = *(int *)(*(int *)(param_2 + 0x5c) + 0x48);
        do {
          iVar1 = iVar4;
          if (*(short *)(iVar4 + 2) == 0xcc) break;
          iVar7 = iVar7 + 1;
          iVar4 = iVar4 + 8;
          iVar1 = 0;
        } while (iVar7 < (int)uVar8);
      }
      if ((puVar9 != (ushort *)0x0) && (iVar1 != 0)) {
        uVar8 = *(uint *)(puVar9 + 2);
        if ((int)(uVar8 % uVar6) < (int)(uVar8 / uVar6)) {
          D2Common_11037(puVar2,0xcc,uVar8 + 1,(uint)*puVar9,param_2);
          piVar5 = (int *)D2Common_11160(param_2,(uint *)0x0);
          if (((piVar5 != (int *)0x0) && (*piVar5 == 0)) &&
             ((piVar5[5] != 0 && (iVar1 = *(int *)(piVar5[5] + 0x9c), iVar1 != 0)))) {
            sub_102ede30(param_2,(uint)*puVar9,iVar1,1,0xcc,uVar8 + 1);
          }
        }
        uVar6 = D2Common_10973(param_2,0x1a6,0);
        if (uVar6 != 0) {
          uVar10 = __alldiv(0x9c4,0,uVar6,(int)uVar6 >> 0x1f);
          uVar6 = (uint)uVar10;
          piVar5 = (int *)D2Common_11160(param_2,(uint *)0x0);
          if ((piVar5 != (int *)0x0) && (*piVar5 == 0)) {
            uVar8 = D2Common_10331(piVar5);
            uVar8 = D2Common_10826(uVar8);
            iVar1 = functions_HelperFunctions_102cea70(uVar8);
            if (iVar1 != 0) {
              uVar6 = uVar6 >> 1;
            }
          }
          sub_6fcaea80(param_1,(int *)param_2,3,*(int *)(param_1 + 0xa8) + 1 + uVar6,0,0,0);
        }
      }
    }
  }
  return;
}


// 0x102ae2f0  (ghidra: FUN_102ae2f0)  [gap]
void __fastcall sub_Wraps_D2Game_ITEMS_ItemMode_102ae2f0(int param_1,int *param_2)

{
  uint *puVar1;
  ushort *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  uint64_t uVar10;
  
  iVar5 = D2Common_10973((int)param_2,0xfc,0);
  if (((iVar5 != 0) &&
      (uVar6 = D2Common_10202(param_2,0x100,0x15a7,"..\\Source\\D2Game\\ITEMS\\ItemMode.cpp"),
      uVar6 == 0)) && (uVar6 = D2Common_10865(param_2), uVar6 != 0)) {
    iVar5 = D2Common_11116((int)param_2);
    iVar5 = func_0x102ecc50(0x48,0xfc,param_1,param_2,iVar5);
    if (iVar5 != 0) {
      return;
    }
  }
  iVar5 = D2Common_10973((int)param_2,0xfd,0);
  if ((iVar5 != 0) && (uVar6 = D2Common_10048(param_2), uVar6 != 0)) {
    iVar5 = D2Common_10463(param_2);
    iVar5 = func_0x102ecc50(0x46,0xfd,param_1,param_2,iVar5);
    if (iVar5 != 0) {
      return;
    }
  }
  iVar5 = D2Common_10973((int)param_2,0x1a6,0);
  if (iVar5 == 0) {
    return;
  }
  if (((param_1 != 0) && (param_2 != (int *)0x0)) && (param_2[0x17] != 0)) {
    iVar5 = functions_HelperFunctions_102ce6d0(0xcc);
    uVar6 = *(uint *)(iVar5 + 0x10);
    puVar1 = (uint *)D2Common_10195((int)param_2,0x40);
    if (puVar1 != (uint *)0x0) {
      iVar5 = 0;
      puVar9 = (ushort *)0x0;
      if ((ushort)puVar1[10] != 0) {
        puVar2 = (ushort *)puVar1[9];
        do {
          puVar9 = puVar2;
          if (puVar2[1] == 0xcc) break;
          iVar5 = iVar5 + 1;
          puVar2 = puVar2 + 4;
          puVar9 = (ushort *)0x0;
        } while (iVar5 < (int)(uint)(ushort)puVar1[10]);
      }
      iVar7 = 0;
      uVar8 = (uint)*(ushort *)(param_2[0x17] + 0x4c);
      iVar5 = 0;
      if (uVar8 != 0) {
        iVar3 = *(int *)(param_2[0x17] + 0x48);
        do {
          iVar5 = iVar3;
          if (*(short *)(iVar3 + 2) == 0xcc) break;
          iVar7 = iVar7 + 1;
          iVar3 = iVar3 + 8;
          iVar5 = 0;
        } while (iVar7 < (int)uVar8);
      }
      if ((puVar9 != (ushort *)0x0) && (iVar5 != 0)) {
        uVar8 = *(uint *)(puVar9 + 2);
        if ((int)(uVar8 % uVar6) < (int)(uVar8 / uVar6)) {
          D2Common_11037(puVar1,0xcc,uVar8 + 1,(uint)*puVar9,(uint)param_2);
          piVar4 = (int *)D2Common_11160((int)param_2,(uint *)0x0);
          if ((((piVar4 != (int *)0x0) && (*piVar4 == 0)) && (piVar4[5] != 0)) &&
             (iVar5 = *(int *)(piVar4[5] + 0x9c), iVar5 != 0)) {
            sub_102ede30(param_2,(uint)*puVar9,iVar5,1,0xcc,uVar8 + 1);
          }
        }
        uVar6 = D2Common_10973((int)param_2,0x1a6,0);
        if (uVar6 != 0) {
          uVar10 = __alldiv(0x9c4,0,uVar6,(int)uVar6 >> 0x1f);
          uVar6 = (uint)uVar10;
          piVar4 = (int *)D2Common_11160((int)param_2,(uint *)0x0);
          if ((piVar4 != (int *)0x0) && (*piVar4 == 0)) {
            uVar8 = D2Common_10331(piVar4);
            uVar8 = D2Common_10826(uVar8);
            iVar5 = functions_HelperFunctions_102cea70(uVar8);
            if (iVar5 != 0) {
              uVar6 = uVar6 >> 1;
            }
          }
          sub_6fcaea80(param_1,param_2,3,*(int *)(param_1 + 0xa8) + 1 + uVar6,0,0,0);
        }
      }
    }
  }
  return;
}

