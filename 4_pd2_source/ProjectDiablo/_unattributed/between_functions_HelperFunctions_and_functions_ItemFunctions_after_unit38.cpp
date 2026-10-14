/*
 * _unattributed/between_functions_HelperFunctions_and_functions_ItemFunctions_after_unit38.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x102d3c18 - 0x102d3f00
 * Functions     : 5
 * Attribution   : gap=5
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x102d3c18  (ghidra: FUN_102d3c18)  [gap]
void __thiscall sub_102d3c18(void *this,uint param_1)

{
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
  _scalar_deleting_destructor_
            ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)this - *(int *)((int)this + -4)),param_1);
  return;
}


// 0x102d3c20  (ghidra: FUN_102d3c20)  [gap]
uint32_t __fastcall sub_102d3c20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = 10;
  if (param_2 < 0xb) {
    iVar7 = param_2;
  }
  if (((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x14) + 0x1c8) == 0)) {
    piVar4 = (int *)D2Common_10460(*(int **)(param_1 + 0x60));
    piVar5 = sub_102d3f60(iVar7);
    while (piVar6 = piVar4, piVar6 != (int *)0x0) {
      piVar4 = (int *)D2Common_10464(piVar6);
      if (*(char *)(piVar6[5] + 0x45) == '\x04') {
        iVar7 = *(int *)(piVar6[0xb] + 0xc);
        iVar1 = *(int *)(piVar6[0xb] + 0x10);
        iVar2 = *piVar5;
        iVar3 = piVar5[1];
        piVar6 = D2Common_10646(*(int *)(param_1 + 0x60),piVar6);
        iVar7 = D2Common_11107(*(int *)(param_1 + 0x60),(uint)piVar6,iVar7 + iVar2,iVar1 + iVar3,10,
                               0,5);
        if (iVar7 == 0) {
          D2Common_10133(*(int **)(param_1 + 0x60),piVar6,10,0,5,0,0);
        }
      }
    }
    *(uint32_t *)(*(int *)(param_1 + 0x14) + 0x1c8) = 1;
    FUN_1030207a(piVar5);
    return 1;
  }
  return 0;
}


// 0x102d3d10  (ghidra: FUN_102d3d10)  [gap]
uint32_t __fastcall sub_102d3d10(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = 10;
  if (param_2 < 0xb) {
    iVar8 = param_2;
  }
  if (((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) &&
     ((param_3 == 0 || (*(int *)(*(int *)(param_1 + 0x14) + 0x1c8) != 0)))) {
    piVar3 = (int *)D2Common_10460(*(int **)(param_1 + 0x60));
    piVar4 = sub_102d3f60(iVar8);
    while (piVar6 = piVar3, piVar6 != (int *)0x0) {
      piVar3 = (int *)D2Common_10464(piVar6);
      if (*(char *)(piVar6[5] + 0x45) == '\x05') {
        uVar7 = *(uint *)(piVar6[0xb] + 0x10);
        uVar1 = *(uint *)(piVar6[0xb] + 0xc);
        iVar5 = sub_102d4010(uVar1,uVar7);
        if (iVar5 == iVar8) {
          iVar5 = *piVar4;
          iVar2 = piVar4[1];
          piVar6 = D2Common_10646(*(int *)(param_1 + 0x60),piVar6);
          iVar5 = D2Common_11107(*(int *)(param_1 + 0x60),(uint)piVar6,uVar1 - iVar5,uVar7 - iVar2,
                                 0xc,0,4);
          if ((iVar5 == 0) &&
             (uVar7 = D2Common_10133(*(int **)(param_1 + 0x60),piVar6,0xc,0,4,0,0), uVar7 == 0)) {
            D2Common_10133(*(int **)(param_1 + 0x60),piVar6,10,0,5,0,0);
          }
        }
      }
    }
    if (param_3 != 0) {
      *(uint32_t *)(*(int *)(param_1 + 0x14) + 0x1c8) = 0;
    }
    FUN_1030207a(piVar4);
    return 1;
  }
  return 0;
}


// 0x102d3e40  (ghidra: FUN_102d3e40)  [gap]
void __fastcall sub_102d3e40(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint8_t local_c;
  int local_b;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    iVar2 = 0xb;
    if (param_2 < 0xc) {
      iVar2 = param_2;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x1b4);
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      iVar3 = iVar2 + -1;
    }
    if (iVar1 != iVar3) {
      iVar2 = sub_102d3c20(param_1,iVar1);
      if (iVar2 != 0) {
        *(int *)(*(int *)(param_1 + 0x14) + 0x1b4) = iVar3;
        sub_102d3d10(param_1,*(int *)(*(int *)(param_1 + 0x14) + 0x1b4),1);
      }
      if (param_3 == 0) {
        local_b = iVar3 + 1;
        local_c = 0x2d;
        *(uint32_t *)(*(int *)(param_1 + 0x14) + 0x1b8) = 1;
        sub_102ecd00(*(uint32_t *)(*(int *)(param_1 + 0x14) + 0x9c),&local_c,5);
        return;
      }
      param_3 = CONCAT13(0x5a,(uint32_t)param_3);
      sub_102ed200((int)&param_3 + 3);
      DAT_104dbf3c = iVar3;
    }
  }
  return;
}


// 0x102d3f00  (ghidra: FUN_102d3f00)  [gap]
void __fastcall sub_102d3f00(int param_1)

{
  int *piVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    piVar1 = (int *)D2Common_10460(*(int **)(param_1 + 0x60));
    while ((piVar1 != (int *)0x0 && (*(char *)(piVar1[5] + 0x45) != '\x04'))) {
      piVar1 = (int *)D2Common_10464(piVar1);
    }
    *(uint32_t *)(*(int *)(param_1 + 0x14) + 0x1b4) = 0;
    sub_102d3d10(param_1,*(int *)(*(int *)(param_1 + 0x14) + 0x1b4),0);
  }
  return;
}

