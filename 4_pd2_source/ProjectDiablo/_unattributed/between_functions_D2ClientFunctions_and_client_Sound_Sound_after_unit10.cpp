/*
 * _unattributed/between_functions_D2ClientFunctions_and_client_Sound_Sound_after_unit10.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x1022f810 - 0x1022fc30
 * Functions     : 16
 * Attribution   : gap=16
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x1022f810  (ghidra: FUN_1022f810)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __fastcall sub_1022f810(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int local_58;
  uint local_54;
  int *local_50;
  int local_4c [2];
  int local_44 [10];
  int local_1c [6];
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_1c[5] = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if (((((char)DAT_104e2528 != '\0') && (param_1 != (int *)0x0)) && (*param_1 == 0)) &&
     (((param_1[4] != 0 && (param_1[4] != 0x11)) &&
      (((*(byte *)(param_1[5] + 0x1b0) & 1) != 0 &&
       (local_50 = param_1, uVar2 = D2Common_10494(param_1,0x36), uVar2 == 0)))))) {
    sub_1022f480((int)param_1);
    memset(local_4c,0,0x30);
    local_54 = 0;
    uVar2 = sub_1022f640((int)param_1,local_4c,&local_54,&local_54);
    piVar9 = local_50;
    if ((char)uVar2 != '\0') {
      local_1c[4] = 0;
      local_1c[0] = 0;
      local_1c[1] = 0;
      local_1c[2] = 0;
      local_1c[3] = 0;
      piVar3 = &DAT_104e6d38;
      piVar4 = local_44;
      do {
        iVar1 = piVar4[-2];
        if (iVar1 == 4) {
          *piVar3 = 4;
        }
        else if (((iVar1 != 0) && (iVar5 = piVar4[-1], *piVar3 = iVar1, 0 < iVar5)) &&
                ((iVar5 = *piVar4, 0 < iVar5 &&
                 ((local_1c[iVar1] == 0 || (iVar5 < local_1c[iVar1])))))) {
          local_1c[iVar1] = iVar5;
        }
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 3;
      } while ((int)piVar3 < 0x104e6d48);
      if (0 < local_1c[1]) {
        DAT_104e6d4c = local_1c[1];
      }
      if (0 < local_1c[2]) {
        DAT_104e6d50 = local_1c[2];
      }
      if (0 < local_1c[3]) {
        DAT_104e6d54 = local_1c[3];
      }
      piVar4 = (int *)D2Common_10331(local_50);
      uVar2 = local_54;
      if (piVar4 != (int *)0x0) {
        iVar1 = piVar4[9];
        local_58 = 0;
        if (0 < iVar1 + 1) {
          do {
            piVar3 = piVar4;
            if (((local_58 == 0) ||
                (piVar3 = *(int **)(*piVar4 + -4 + local_58 * 4), piVar3 != (int *)0x0)) &&
               (iVar5 = D2Common_10057((int)piVar3), iVar5 == 0)) {
              for (piVar3 = (int *)piVar3[0x1d]; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[0x3a])
              {
                if ((((*piVar3 == 4) && ((piVar3[0x25] != 0 || (piVar3[0x26] == 0)))) &&
                    (iVar5 = D2Common_10522(piVar3,piVar9), iVar5 < 4)) &&
                   (((iVar5 = sub_1022f4d0(piVar3), piVar9 = local_50, iVar5 != 0 &&
                     (iVar6 = sub_1022f500(piVar3), piVar9 = local_50, 0 < iVar6)) &&
                    ((0 < *(int *)(&DAT_104e6d48 + iVar5 * 4) &&
                     (*(int *)(&DAT_104e6d48 + iVar5 * 4) <= iVar6)))))) {
                  piVar8 = &DAT_104e6d38;
                  piVar7 = local_4c;
                  do {
                    iVar6 = *piVar7;
                    if ((iVar6 != 4) &&
                       ((((iVar6 != 0 || (iVar6 = *piVar8, iVar6 != 4)) && (iVar6 == iVar5)) &&
                        (piVar7[1] < (int)uVar2)))) {
                      local_1c[4] = local_1c[4] & 0xffffff00;
                      local_1c[3] = (uint)piVar3[3] >> 0x18;
                      local_1c[1] = 0x416;
                      local_1c[2] = piVar3[3] << 8;
                      sub_102ed200(local_1c + 1);
                      return;
                    }
                    piVar8 = piVar8 + 1;
                    piVar7 = piVar7 + 3;
                  } while ((int)piVar8 < 0x104e6d48);
                }
              }
            }
            local_58 = local_58 + 1;
          } while (local_58 < iVar1 + 1);
        }
      }
    }
  }
  return;
}


// 0x1022fa80  (ghidra: FUN_1022fa80)  [gap]
void * __fastcall sub_1022fa80(void *param_1)

{
  sub_10231d50(param_1);
  return param_1;
}


// 0x1022faa0  (ghidra: FUN_1022faa0)  [gap]
void sub_1022faa0(void)

{
  sub_1022ff90(0,0);
  return;
}


// 0x1022fab0  (ghidra: FUN_1022fab0)  [gap]
void sub_1022fab0(void)

{
  sub_1022ff90(0,1);
  return;
}


// 0x1022fac0  (ghidra: FUN_1022fac0)  [gap]
void sub_1022fac0(void)

{
  sub_1022ff90(0,2);
  return;
}


// 0x1022fad0  (ghidra: FUN_1022fad0)  [gap]
void sub_1022fad0(void)

{
  sub_1022ff90(0,3);
  return;
}


// 0x1022fae0  (ghidra: FUN_1022fae0)  [gap]
void sub_1022fae0(void)

{
  sub_1022ff90(0,4);
  return;
}


// 0x1022faf0  (ghidra: FUN_1022faf0)  [gap]
void sub_1022faf0(void)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  uint32_t *puVar6;
  uint32_t *puVar7;
  bool bVar8;
  uint32_t local_aa8 [3];
  byte local_a9c [1348];
  uint32_t local_558 [341];
  
  uVar2 = sub_10231450();
  if (uVar2 == 0) {
    DAT_103aca80 = 7;
  }
  else {
    DAT_103aca80 = 8;
    puVar6 = &DAT_103b94a8;
    puVar7 = local_558;
    for (iVar4 = 0x154; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    pcVar3 = "DeveloperOpt";
    puVar6 = &DAT_103b99f8;
    puVar7 = local_aa8;
    for (iVar4 = 0x154; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    pbVar5 = local_a9c;
    do {
      bVar1 = *pbVar5;
      bVar8 = bVar1 < (byte)*pcVar3;
      if (bVar1 != *pcVar3) {
LAB_1022fb61:
        uVar2 = -(uint)bVar8 | 1;
        goto LAB_1022fb66;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar8 = bVar1 < (byte)pcVar3[1];
      if (bVar1 != pcVar3[1]) goto LAB_1022fb61;
      pbVar5 = pbVar5 + 2;
      pcVar3 = pcVar3 + 2;
    } while (bVar1 != 0);
    uVar2 = 0;
LAB_1022fb66:
    if (uVar2 == 0) {
      puVar6 = local_558;
      puVar7 = &DAT_103b99f8;
      for (iVar4 = 0x154; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar6 = local_aa8;
      puVar7 = &DAT_103b94a8;
      for (iVar4 = 0x154; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      sub_1022ff90(0,5);
      return;
    }
  }
  sub_1022ff90(0,5);
  return;
}


// 0x1022fbc0  (ghidra: FUN_1022fbc0)  [gap]
void sub_1022fbc0(void)

{
  sub_1022ff90(0,6);
  return;
}


// 0x1022fbd0  (ghidra: FUN_1022fbd0)  [gap]
void sub_1022fbd0(void)

{
  sub_1022ff90(0,7);
  return;
}


// 0x1022fbe0  (ghidra: FUN_1022fbe0)  [gap]
void sub_1022fbe0(void)

{
  sub_1022ff90(0,8);
  return;
}


// 0x1022fbf0  (ghidra: FUN_1022fbf0)  [gap]
void sub_1022fbf0(void)

{
  sub_1022ff90(0,9);
  return;
}


// 0x1022fc00  (ghidra: FUN_1022fc00)  [gap]
void sub_1022fc00(void)

{
  sub_1022ff90(0,10);
  return;
}


// 0x1022fc10  (ghidra: FUN_1022fc10)  [gap]
void sub_1022fc10(void)

{
  sub_1022ff90(0,0xb);
  return;
}


// 0x1022fc20  (ghidra: FUN_1022fc20)  [gap]
void sub_1022fc20(void)

{
  sub_1022ff90(0,0xc);
  return;
}


// 0x1022fc30  (ghidra: FUN_1022fc30)  [gap]
void sub_1022fc30(void)

{
  sub_1022ff90(0,0xd);
  return;
}

