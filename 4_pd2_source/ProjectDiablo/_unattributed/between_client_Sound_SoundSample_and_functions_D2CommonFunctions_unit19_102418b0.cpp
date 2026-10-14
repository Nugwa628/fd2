/*
 * _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit19_102418b0.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x102418b0 - 0x102497f0
 * Functions     : 300
 * Attribution   : gap=300
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x102418b0  (ghidra: FUN_102418b0)  [gap]
void __fastcall sub_102418b0(uint32_t param_1)

{
  sub_10247370(param_1);
  return;
}


// 0x102418c0  (ghidra: FUN_102418c0)  [gap]
void __fastcall sub_102418c0(uint param_1)

{
  sub_10247390(param_1);
  return;
}


// 0x102418d0  (ghidra: FUN_102418d0)  [gap]
uint32_t * __thiscall sub_102418d0(void *this,uint32_t *param_1)

{
  sub_102473b0(this,param_1);
  return param_1;
}


// 0x102418f0  (ghidra: FUN_102418f0)  [gap]
void __thiscall sub_102418f0(void *this,char *param_1)

{
  uint8_t auStack_28 [24];
  
  sub_1020f990(auStack_28,param_1);
  sub_1023dc50(this);
  return;
}


// 0x10241920  (ghidra: FUN_10241920)  [gap]
char * __thiscall sub_10241920(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  
  *(uint8_t *)this = 0;
  *(uint64_t *)((int)this + 8) = 0;
  uVar1 = sub_1020fe80(param_1);
  sub_10247420(this,uVar1);
  sub_1023fcc0(this);
  return this;
}


// 0x10241960  (ghidra: FUN_10241960)  [gap]
char * __thiscall sub_10241960(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  
  *(uint8_t *)this = 0;
  *(uint64_t *)((int)this + 8) = 0;
  uVar1 = sub_1020fe80(param_1);
  sub_10247440(this,uVar1);
  sub_1023fcc0(this);
  return this;
}


// 0x102419a0  (ghidra: FUN_102419a0)  [gap]
char * __thiscall sub_102419a0(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  
  *(uint8_t *)this = 0;
  *(uint64_t *)((int)this + 8) = 0;
  uVar1 = sub_1020fe80(param_1);
  sub_10247460(this,uVar1);
  sub_1023fcc0(this);
  return this;
}


// 0x102419e0  (ghidra: FUN_102419e0)  [gap]
int * __fastcall sub_102419e0(int *param_1,uint32_t *param_2)

{
  (*(code *)*param_2)(*(int *)(*param_1 + 4) + (int)param_1,param_2[2],param_2[3]);
  return param_1;
}


// 0x10241a10  (ghidra: FUN_10241a10)  [gap]
basic_ostream<char,std::char_traits<char>_> * __cdecl
sub_10241a10(basic_ostream<char,std::char_traits<char>_> *param_1)

{
  char cVar1;
  
  cVar1 = std::basic_ios<char,std::char_traits<char>_>::widen
                    ((basic_ios<char,std::char_traits<char>_> *)
                     (param_1 + *(int *)(*(int *)param_1 + 4)),'\n');
  std::basic_ostream<char,std::char_traits<char>_>::put(param_1,cVar1);
  std::basic_ostream<char,std::char_traits<char>_>::flush(param_1);
  return param_1;
}


// 0x10241a40  (ghidra: FUN_10241a40)  [gap]
basic_ostream<char,std::char_traits<char>_> * __fastcall
sub_10241a40(basic_ostream<char,std::char_traits<char>_> *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint32_t uVar5;
  basic_streambuf<char,std::char_traits<char>_> *pbVar6;
  int iVar7;
  basic_ostream<char,std::char_traits<char>_> *pbVar8;
  int iVar9;
  int iVar10;
  __int64 _Var11;
  int local_34 [2];
  uint64_t local_2c;
  basic_streambuf<char,std::char_traits<char>_> *local_24;
  basic_ostream<char,std::char_traits<char>_> *local_20;
  uint local_1c;
  uint32_t local_18;
  uint8_t *local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xffffffbc;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030592d;
  local_10 = ExceptionList;
  uVar3 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_14 = &stack0xffffffbc;
  ExceptionList = &local_10;
  local_18 = 0;
  local_20 = param_1;
  uVar4 = sub_1020fe50("{}");
  local_1c = uVar4;
  _Var11 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(int *)param_1 + 4)));
  if ((-1 < _Var11) && (_Var11 != 0)) {
    _Var11 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(int *)param_1 + 4)));
    if ((-1 < _Var11) && (((int)((ulonglong)_Var11 >> 0x20) != 0 || (uVar4 < (uint)_Var11)))) {
      _Var11 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(int *)param_1 + 4)));
      iVar9 = (int)((ulonglong)_Var11 >> 0x20) - (uint)((uint)_Var11 < local_1c);
      iVar10 = (uint)_Var11 - local_1c;
      goto LAB_10241adb;
    }
  }
  local_2c = 0;
  local_2c._4_4_ = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
  local_2c._0_4_ = 0;
  iVar9 = (int)local_2c._4_4_;
  iVar10 = (int)local_2c;
LAB_10241adb:
  sub_10241230(local_34,param_1);
  local_8 = 0;
  cVar1 = sub_10237e70((int)local_34);
  if (cVar1 == '\0') {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)(param_1 + *(int *)(*(int *)param_1 + 4)),
               4,false);
    sub_102411d0(local_34);
    ExceptionList = local_10;
    return param_1;
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar4 = std::ios_base::flags((ios_base *)(param_1 + *(int *)(*(int *)param_1 + 4)));
  if ((uVar4 & 0x1c0) != 0x40) {
    for (; (-1 < iVar9 && ((0 < iVar9 || (iVar10 != 0)))); iVar10 = iVar10 + -1) {
      local_24 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                           ((basic_ios<char,std::char_traits<char>_> *)
                            (param_1 + *(int *)(*(int *)param_1 + 4)));
      cVar1 = std::basic_ios<char,std::char_traits<char>_>::fill
                        ((basic_ios<char,std::char_traits<char>_> *)
                         (param_1 + *(int *)(*(int *)param_1 + 4)));
      local_24 = (basic_streambuf<char,std::char_traits<char>_> *)
                 std::basic_streambuf<char,std::char_traits<char>_>::sputc(local_24,cVar1);
      uVar5 = sub_102100c0();
      local_2c = CONCAT44(uVar5,(int)local_2c);
      bVar2 = sub_10237a90((int *)((int)&local_2c + 4),(int *)&local_24);
      if (bVar2) goto LAB_10241bf4;
      iVar9 = iVar9 + -1 + (uint)(iVar10 != 0);
    }
  }
  pbVar6 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,std::char_traits<char>_> *)
                      (param_1 + *(int *)(*(int *)param_1 + 4)));
  _Var11 = std::basic_streambuf<char,std::char_traits<char>_>::sputn
                     (pbVar6,"{}",(ulonglong)uVar3 << 0x20);
  if (((uint)_Var11 == local_1c) && ((int)((ulonglong)_Var11 >> 0x20) == 0)) {
    for (; (-1 < iVar9 && ((0 < iVar9 || (iVar10 != 0)))); iVar10 = iVar10 + -1) {
      pbVar6 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                         ((basic_ios<char,std::char_traits<char>_> *)
                          (param_1 + *(int *)(*(int *)param_1 + 4)));
      local_2c._4_4_ = pbVar6;
      cVar1 = std::basic_ios<char,std::char_traits<char>_>::fill
                        ((basic_ios<char,std::char_traits<char>_> *)
                         (param_1 + *(int *)(*(int *)param_1 + 4)));
      iVar7 = std::basic_streambuf<char,std::char_traits<char>_>::sputc(local_2c._4_4_,cVar1);
      local_2c = CONCAT44(iVar7,(int)local_2c);
      local_24 = (basic_streambuf<char,std::char_traits<char>_> *)sub_102100c0();
      bVar2 = sub_10237a90((int *)&local_24,(int *)((int)&local_2c + 4));
      if (bVar2) goto LAB_10241bf4;
      iVar9 = iVar9 + -1 + (uint)(iVar10 != 0);
    }
    uVar5 = 0;
  }
  else {
LAB_10241bf4:
    uVar5 = 4;
    local_18 = 4;
  }
  std::ios_base::width((ios_base *)(param_1 + *(int *)(*(int *)param_1 + 4)),0);
  pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)sub_10241c3b(uVar5,param_1);
  return pbVar8;
}


// 0x10241c1b  [gap]
uint8_t * Catch_All_10241c1b(void)

{
  int unaff_EBP;
  
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (*(int *)(**(int **)(unaff_EBP + -0x1c) + 4) + (int)*(int **)(unaff_EBP + -0x1c)),4,
             true);
  return &DAT_10241c35;
}


// 0x10241c3b  (ghidra: FUN_10241c3b)  [gap]
int * sub_10241c3b(int reg_EBX,int *reg_ESI)

{
  int unaff_EBP;
  
  *(uint32_t *)(unaff_EBP + -4) = 0;
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*reg_ESI + 4) + (int)reg_ESI),
             reg_EBX,false);
  sub_102411d0((int *)(unaff_EBP + -0x30));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return reg_ESI;
}


// 0x10241c70  (ghidra: FUN_10241c70)  [gap]
char * __fastcall sub_10241c70(char *param_1,uint32_t param_2)

{
  int *piVar1;
  void *this;
  uint32_t extraout_ECX;
  uint8_t in_stack_00000030;
  uint32_t uStackY_104;
  uint8_t auStack_fc [32];
  uint32_t uStack_dc;
  uint8_t local_c0 [160];
  char *local_20;
  char *local_1c;
  uint32_t local_18;
  uint8_t local_14;
  uint32_t uStack_13;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint32_t _local_14;   /* not traced by Ghidra: value with no visible source */
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  
  puStack_c = &LAB_10305989;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _local_14 = CONCAT31(uStack_13,in_stack_00000030);
  local_18 = 0;
  local_8 = 1;
  local_20 = param_1;
  local_1c = param_1;
  sub_1023dec0(param_1);
  local_18 = 1;
  local_1c = auStack_fc;
  uStackY_104 = 0x10241cdd;
  sub_10244bd0(auStack_fc,(int)&stack0x00000004);
  local_8._0_1_ = 2;
  piVar1 = (int *)sub_1020fe80(param_2);
  sub_10238900(&uStackY_104,piVar1);
  local_8._0_1_ = 1;
  this = sub_10247620(local_c0);
  local_8 = CONCAT31(local_8._1_3_,3);
  uStack_dc = 0x10241d15;
  sub_10244700(this,extraout_ECX,param_1);
  sub_10244580(local_c0);
  thunk_FUN_1023f130(&stack0x00000004);
  ExceptionList = local_10;
  return param_1;
}


// 0x10241d40  (ghidra: FUN_10241d40)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

_Facet_base * __fastcall sub_10241d40(locale *param_1)

{
  uint uVar1;
  _Facet_base *p_Var2;
  uint32_t extraout_ECX;
  uint32_t *extraout_ECX_00;
  _Facet_base *local_20;
  _Lockit local_1c [4];
  uint32_t local_18;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103059c6;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  std::_Lockit::_Lockit(local_1c,0);
  local_8 = 0;
  local_20 = DAT_104e6f40;
  uVar1 = std::locale::id::operator_unsigned_int((id *)id_exref);
  p_Var2 = (_Facet_base *)sub_10238490(param_1,uVar1);
  if ((p_Var2 == (_Facet_base *)0x0) && (p_Var2 = local_20, local_20 == (_Facet_base *)0x0)) {
    uVar1 = std::codecvt<char,char,_Mbstatet>::_Getcat((facet **)&local_20,param_1);
    p_Var2 = local_20;
    if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      sub_102383c0();
    }
    sub_102401f0(&local_18);
    sub_102474a0(extraout_ECX);
    local_8 = CONCAT31(local_8._1_3_,1);
    std::_Facet_Register(p_Var2);
    (**(code **)(*(int *)p_Var2 + 4))();
    p_Var2 = local_20;
    DAT_104e6f40 = local_20;
    sub_102449e0(&local_18);
    sub_10244a00(extraout_ECX_00);
  }
  std::_Lockit::~_Lockit(local_1c);
  ExceptionList = local_10;
  return p_Var2;
}


// 0x10241e30  (ghidra: FUN_10241e30)  [gap]
uint32_t sub_10241e30(uint32_t param_1,void *param_2)

{
  int *piVar1;
  uint32_t uVar2;
  uint32_t *this;
  void *pvVar3;
  uint32_t uVar4;
  uint32_t extraout_ECX;
  uint32_t uVar5;
  int *local_20;
  int local_1c;
  int local_18;
  uint8_t local_14 [8];
  uint8_t local_c [4];
  int *local_8;
  
  pvVar3 = param_2;
  piVar1 = sub_102476b0((int *)&local_20,(int)param_2);
  uVar2 = sub_10247710(local_18,pvVar3,piVar1);
  if ((char)uVar2 != '\0') {
    param_2 = (void *)((uint)param_2 & 0xffffff);
    sub_10228210(&local_18,(int)&param_2 + 3);
    return param_1;
  }
  sub_stl_10244c40();
  this = (uint32_t *)thunk_FUN_1020fe80(&DAT_104e0a74);
  uVar2 = sub_1020fe80(pvVar3);
  pvVar3 = sub_10247740(local_c,uVar2);
  uVar2 = *this;
  uVar5 = extraout_ECX;
  uVar4 = thunk_FUN_1020fe80(&DAT_104e0a74);
  pvVar3 = sub_10247760(local_14,uVar4,uVar2,uVar5,pvVar3);
  piVar1 = (int *)sub_10211530((int)pvVar3);
  sub_102446d0((int)local_14);
  local_8 = sub_10211590(this,local_20,local_1c,piVar1);
  param_2 = (void *)CONCAT13(1,param_2._0_3_);
  sub_10228210(&local_8,(int)&param_2 + 3);
  return param_1;
}


// 0x10241ef0  (ghidra: FUN_10241ef0)  [gap]
int sub_10241ef0(void *param_1)

{
  int *piVar1;
  uint32_t uVar2;
  int local_10 [2];
  int local_8;
  
  piVar1 = sub_102476b0(local_10,(int)param_1);
  uVar2 = sub_10247710(local_8,param_1,piVar1);
  if ((char)uVar2 != '\0') {
    return local_8;
  }
  piVar1 = (int *)thunk_FUN_102495b0();
  return *piVar1;
}


// 0x10241f30  (ghidra: FUN_10241f30)  [gap]
void __thiscall sub_10241f30(void *this,uint32_t param_1)

{
  uint32_t extraout_ECX;
  
  sub_10247810(param_1,*(uint32_t **)(*(int *)this + 4));
  sub_10247870(extraout_ECX,*(void **)this);
  return;
}


// 0x10241f50  (ghidra: FUN_10241f50)  [gap]
uint32_t sub_10241f50(uint32_t param_1,void *param_2)

{
  int *piVar1;
  uint32_t uVar2;
  uint32_t *this;
  void *pvVar3;
  uint32_t uVar4;
  uint32_t extraout_ECX;
  uint32_t uVar5;
  int *local_20;
  int local_1c;
  int local_18;
  uint8_t local_14 [8];
  uint8_t local_c [4];
  int *local_8;
  
  pvVar3 = param_2;
  piVar1 = sub_10247880((int *)&local_20,(int)param_2);
  uVar2 = sub_10247710(local_18,pvVar3,piVar1);
  if ((char)uVar2 != '\0') {
    param_2 = (void *)((uint)param_2 & 0xffffff);
    sub_10228210(&local_18,(int)&param_2 + 3);
    return param_1;
  }
  sub_stl_10244c80();
  this = (uint32_t *)thunk_FUN_1020fe80(&DAT_104e0abc);
  uVar2 = sub_1020fe80(pvVar3);
  pvVar3 = sub_10247740(local_c,uVar2);
  uVar2 = *this;
  uVar5 = extraout_ECX;
  uVar4 = thunk_FUN_1020fe80(&DAT_104e0abc);
  pvVar3 = sub_10247760(local_14,uVar4,uVar2,uVar5,pvVar3);
  piVar1 = (int *)sub_10211530((int)pvVar3);
  sub_102446d0((int)local_14);
  local_8 = sub_10211590(this,local_20,local_1c,piVar1);
  param_2 = (void *)CONCAT13(1,param_2._0_3_);
  sub_10228210(&local_8,(int)&param_2 + 3);
  return param_1;
}


// 0x10242010  (ghidra: FUN_10242010)  [gap]
int sub_10242010(void *param_1)

{
  int *piVar1;
  uint32_t uVar2;
  int local_10 [2];
  int local_8;
  
  piVar1 = sub_10247880(local_10,(int)param_1);
  uVar2 = sub_10247710(local_8,param_1,piVar1);
  if ((char)uVar2 != '\0') {
    return local_8;
  }
  piVar1 = (int *)thunk_FUN_102495d0();
  return *piVar1;
}


// 0x10242050  (ghidra: FUN_10242050)  [gap]
char * __thiscall sub_10242050(void *this,char *param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  uint8_t uVar4;
  void *this_00;
  void *pvVar5;
  uint32_t uVar6;
  char *pcVar7;
  uint32_t *puVar8;
  int extraout_ECX;
  uint64_t uVar9;
  uint32_t uStack_78;
  uint32_t uStack_70;
  uint8_t **ppuStack_6c;
  uint8_t local_50 [28];
  uint8_t local_34 [28];
  uint8_t local_18 [4];
  uint8_t local_14 [4];
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103059fd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = (void *)sub_1020faf0(this);
  pvVar5 = (void *)sub_1020fae0(extraout_ECX);
  do {
    if (this_00 == pvVar5) {
      ExceptionList = local_10;
      return param_1;
    }
    bVar1 = sub_1023fc70(param_1);
    if (bVar1) {
      sub_10245190(this_00,local_14);
      uVar9 = sub_102451c0(this_00,local_18);
      ppuStack_6c = (uint8_t **)*(uint32_t *)uVar9;
      uStack_70 = 0x102420c3;
      uVar6 = sub_102478e0();
      if ((char)uVar6 == '\0') {
        cVar2 = sub_10247350(this_00,&DAT_10378ec8);
        cVar3 = '\x01';
        if (cVar2 != '\0') goto LAB_102420dc;
      }
      else {
LAB_102420dc:
        cVar3 = '\x02';
      }
      uStack_78 = 0x102420e9;
      sub_1023fc80(&uStack_70,cVar3);
      sub_1023dd90(param_1);
    }
    uVar4 = sub_102450d0(param_1);
    switch(uVar4) {
    default:
      ppuStack_6c = (uint8_t **)0x10242177;
      puVar8 = sub_10247b00(local_34,this_00);
      local_8 = 0;
      ppuStack_6c = (uint8_t **)0x1024218f;
      sub_10247bb0(local_50,0x194,puVar8);
                    /* WARNING: Subroutine does not return */
      ppuStack_6c = &switchD_10242106::switchdataD_102421a0;
      _CxxThrowException(local_50,(ThrowInfo *)&DAT_10393cac);
    case 1:
      sub_1020f9c0(&uStack_78,(uint)this_00);
      param_1 = (char *)sub_1023dc50(param_1);
      break;
    case 2:
      cVar2 = sub_10247350(this_00,&DAT_10378ec8);
      if (cVar2 == '\0') {
        pcVar7 = (char *)sub_10247920(this_00);
      }
      else {
        pcVar7 = (char *)sub_10240ba0(*(int **)(param_1 + 8));
      }
      param_1 = (char *)sub_10245000(param_1,pcVar7);
    }
    this_00 = (void *)((int)this_00 + 0x18);
  } while( true );
}


// 0x102421c0  (ghidra: FUN_102421c0)  [gap]
void sub_102421c0(byte param_1)

{
  isdigit((uint)param_1);
  return;
}


// 0x102421e0  (ghidra: FUN_102421e0)  [gap]
uint __thiscall sub_102421e0(void *this,uint8_t *param_1)

{
  uint8_t *puVar1;
  uint8_t uVar2;
  bool bVar3;
  uint8_t *this_00;
  uint8_t *puVar4;
  char *pcVar5;
  int iVar6;
  uint32_t extraout_var;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int extraout_ECX;
  uint32_t extraout_ECX_00;
  void *this_01;
  uint extraout_EDX;
  uint64_t uVar10;
  
  this_00 = (uint8_t *)sub_1020faf0(this);
  puVar4 = (uint8_t *)sub_1020fae0(extraout_ECX);
  puVar1 = puVar4;
  do {
    if (this_00 == puVar4) {
      return CONCAT31((int3)((uint)puVar1 >> 8),1);
    }
    uVar2 = sub_102450d0(param_1);
    pcVar5 = (char *)0x0;
    switch(uVar2) {
    default:
switchD_1024221f_caseD_0:
      return (uint)pcVar5 & 0xffffff00;
    case 1:
      pcVar5 = (char *)sub_1023dc00(param_1,(int)this_00);
      if ((char)pcVar5 == '\0') goto switchD_1024221f_caseD_0;
      param_1 = (uint8_t *)sub_10244e90(param_1,(int)this_00);
      break;
    case 2:
      pcVar5 = (char *)sub_10247350(this_00,&DAT_10378ec8);
      if ((char)pcVar5 != '\0') goto switchD_1024221f_caseD_0;
      iVar6 = client_DrawHoverItem_10224f20((int)this_00);
      if (iVar6 == 1) {
        pcVar5 = (char *)sub_10247c80(extraout_ECX_00,this_00);
        if ((char)pcVar5 == '\0') goto switchD_1024221f_caseD_0;
        bVar3 = sub_10247c90(this_00);
        pcVar5 = (char *)CONCAT31(extraout_var,bVar3);
        if (!bVar3) goto switchD_1024221f_caseD_0;
      }
      uVar7 = client_DrawHoverItem_10224f20((int)this_00);
      if (1 < uVar7) {
        uVar10 = sub_1023e120(this_01,0);
        pcVar5 = (char *)uVar10;
        if (*pcVar5 < '1') goto switchD_1024221f_caseD_0;
        uVar10 = sub_1023e120(this_00,0);
        pcVar5 = (char *)uVar10;
        if ('9' < *pcVar5) goto switchD_1024221f_caseD_0;
        uVar8 = client_DrawHoverItem_10224f20((int)this_00);
        uVar7 = extraout_EDX;
        while (uVar7 < uVar8) {
          uVar10 = sub_1023e120(this_00,uVar7);
          pcVar5 = (char *)uVar10;
          if (*pcVar5 < '0') goto switchD_1024221f_caseD_0;
          uVar10 = sub_1023e120(this_00,(int)((ulonglong)uVar10 >> 0x20));
          pcVar5 = (char *)uVar10;
          if ('9' < *pcVar5) goto switchD_1024221f_caseD_0;
          uVar7 = (int)((ulonglong)uVar10 >> 0x20) + 1;
        }
      }
      pcVar9 = (char *)sub_10247920(this_00);
      pcVar5 = (char *)sub_10244e40(param_1);
      if (pcVar5 <= pcVar9) goto switchD_1024221f_caseD_0;
      param_1 = (uint8_t *)sub_10244f70(param_1,pcVar9);
    }
    this_00 = this_00 + 0x18;
    puVar1 = param_1;
  } while( true );
}


// 0x10242340  (ghidra: FUN_10242340)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t sub_10242340(void)

{
  bool bVar1;
  uint32_t uVar2;
  uint32_t extraout_ECX;
  uint8_t *puVar3;
  uint8_t local_18 [4];
  uint64_t local_14;
  uint8_t local_9;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  sub_102423f0(local_18,&local_9);
  sub_1020f410(&local_14);
  puVar3 = local_18;
  uVar2 = sub_10244a60();
  sub_10247ca0(&local_14,uVar2,puVar3);
  uVar2 = sub_1020fae0((int)&local_14);
  sub_10247cc0(extraout_ECX,uVar2);
  bVar1 = sub_10247ce0((int)&local_14);
  if (!bVar1) {
    _wassert(L"obj != nullptr",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x4c6f);
  }
  uVar2 = sub_10211530((int)&local_14);
  sub_10244690(&local_14);
  return uVar2;
}


// 0x102423d0  (ghidra: FUN_102423d0)  [gap]
void __thiscall sub_102423d0(void *this,void *param_1)

{
  sub_10240240(this,param_1);
  return;
}


// 0x102423f0  (ghidra: FUN_102423f0)  [gap]
uint32_t * __thiscall sub_102423f0(void *this,uint32_t param_1)

{
  *(uint32_t *)this = param_1;
  return this;
}


// 0x10242400  (ghidra: FUN_10242400)  [gap]
uint32_t * __thiscall sub_json_10242400(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305a3e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10237930(this);
  local_8 = 0;
  uVar1 = sub_1020fe80(param_1);
  pcVar2 = (char *)sub_1020fe80("cannot use operator[] with a string argument with ");
  pcVar3 = sub_10247cf0(pcVar2,uVar1);
  sub_1023e080(this,(uint)pcVar3);
  sub_10247d20(this,pcVar2,uVar1);
  ExceptionList = local_10;
  return this;
}


// 0x10242490  (ghidra: FUN_10242490)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __fastcall sub_10242490(void *param_1,uint32_t param_2,uint32_t param_3)

{
  void *pvVar1;
  void *pvVar2;
  uint64_t uVar3;
  uint32_t local_7c [6];
  uint32_t local_64 [6];
  uint32_t local_4c [6];
  void *local_34;
  void *local_30;
  uint32_t local_2c [6];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305a7d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = param_1;
  local_30 = param_1;
  pvVar1 = sub_102385e0(local_7c);
  local_8 = 0;
  sub_1020f990(local_4c,"type_error");
  local_8._0_1_ = 1;
  pvVar2 = sub_10238570(local_64,local_4c);
  local_8 = CONCAT31(local_8._1_3_,2);
  sub_10247d50(local_2c,pvVar2,pvVar1,param_3);
  thunk_FUN_1020fc60(local_64);
  thunk_FUN_1020fc60(local_4c);
  thunk_FUN_1020fc60(local_7c);
  uVar3 = thunk_FUN_1020fe30((int)local_2c);
  sub_102387a0(local_30,param_2,(int)uVar3);
  thunk_FUN_1020fc60(local_2c);
  ExceptionList = local_10;
  return local_30;
}


// 0x10242560  (ghidra: FUN_10242560)  [gap]
void __fastcall sub_10242560(uint8_t *param_1)

{
  uint8_t *puVar1;
  uint32_t extraout_EDX;
  uint8_t *extraout_EDX_00;
  uint32_t uStack_8;
  
  uStack_8 = param_1;
  puVar1 = (uint8_t *)sub_1020fe80(param_1);
  uStack_8 = (uint8_t *)CONCAT13(*puVar1,(uint32_t)uStack_8);
  puVar1 = (uint8_t *)sub_1020fe80(extraout_EDX);
  *param_1 = *puVar1;
  puVar1 = (uint8_t *)sub_1020fe80((int)&uStack_8 + 3);
  *extraout_EDX_00 = *puVar1;
  return;
}


// 0x10242590  (ghidra: FUN_10242590)  [gap]
void __fastcall sub_10242590(uint32_t *param_1)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  uint32_t extraout_EDX;
  uint32_t *extraout_EDX_00;
  uint32_t local_c;
  uint32_t local_8;
  
  puVar2 = (uint32_t *)sub_1020fe80(param_1);
  local_c = *puVar2;
  local_8 = puVar2[1];
  puVar2 = (uint32_t *)sub_1020fe80(extraout_EDX);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  puVar2 = (uint32_t *)sub_1020fe80(&local_c);
  uVar1 = puVar2[1];
  *extraout_EDX_00 = *puVar2;
  extraout_EDX_00[1] = uVar1;
  return;
}


// 0x102425e0  (ghidra: FUN_102425e0)  [gap]
uint32_t
sub_102425e0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5)

{
  uint32_t *puVar1;
  void *this;
  uint32_t extraout_EDX;
  uint32_t uVar2;
  uint32_t uVar3;
  
  puVar1 = (uint32_t *)sub_1020fe80(param_5);
  uVar3 = *puVar1;
  puVar1 = (uint32_t *)sub_1020fe80(param_4);
  uVar2 = *puVar1;
  puVar1 = (uint32_t *)sub_1020fe80(param_3);
  sub_10245150(this,*puVar1,uVar2,uVar3);
  return extraout_EDX;
}


// 0x10242620  (ghidra: FUN_10242620)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __fastcall sub_10242620(byte *param_1,uint param_2,byte *param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_c = param_2;
  puVar1 = sub_10210430(&local_c,&param_4);
  uVar2 = sub_10238060(param_1,param_3,*puVar1);
  if (uVar2 == 0) {
    if (param_2 < param_4) {
      return 0xffffffff;
    }
    uVar2 = (uint)(param_4 < param_2);
  }
  return uVar2;
}


// 0x10242690  (ghidra: FUN_10242690)  [gap]
int __fastcall sub_10242690(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */
  
  if (param_3 < param_2) {
    iVar1 = sub_10238040((void *)(param_1 + param_3),param_2 - param_3,&stack0x00000008);
    if (iVar1 != 0) {
      return iVar1 - param_1;
    }
  }
  return -1;
}


// 0x102426c0  (ghidra: FUN_102426c0)  [gap]
uint32_t * __thiscall sub_102426c0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  void *extraout_EDX;
  int iVar5;
  uint32_t local_c;
  int local_8;
  
  iVar5 = *(int *)((int)this + 0x10);
  local_8 = iVar5;
  uVar1 = sub_1020ffe0();
  if (uVar1 - iVar5 < param_1) {
                    /* WARNING: Subroutine does not return */
    sub_stl_1020f3f0();
  }
  uVar1 = *(uint *)((int)this + 0x14);
  uVar2 = sub_10210b70(this,iVar5 + param_1);
  local_c = sub_10210080(-(uint)(0xfffffffe < uVar2) | uVar2 + 1);
  *(uint *)((int)this + 0x10) = iVar5 + param_1;
  *(uint *)((int)this + 0x14) = uVar2;
  pvVar3 = (void *)sub_1020fe80(local_c);
  if (0xf < uVar1) {
    pvVar3 = *(void **)this;
    iVar5 = local_8;
    pvVar4 = (void *)sub_1020fe80(pvVar3);
    sub_1023e0d0(extraout_EDX,pvVar4,iVar5);
    sub_102100a0(pvVar3,uVar1 + 1);
    *(uint32_t *)this = local_c;
    return this;
  }
  sub_1023e0d0(pvVar3,this,local_8);
  sub_10210750(this,&local_c);
  return this;
}


// 0x10242780  (ghidra: FUN_10242780)  [gap]
uint64_t * __fastcall sub_10242780(uint64_t *param_1,uint32_t param_2)

{
  void *this;
  uint32_t uVar1;
  uint32_t *extraout_ECX;
  int iVar2;
  uint64_t uVar3;
  
  this = operator_new(0x14);
  uVar1 = sub_1020fe80(param_2);
  sub_10247df0(this,uVar1);
  sub_1020f410(param_1);
  uVar3 = sub_102445c0(extraout_ECX);
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  uVar1 = sub_1020fe80(iVar2 + 0xc);
  sub_10247e30(param_1,uVar1,iVar2);
  return param_1;
}


// 0x102427e0  (ghidra: FUN_102427e0)  [gap]
uint32_t * __cdecl sub_102427e0(uint32_t param_1)

{
  uint32_t *puVar1;
  uint64_t uVar2;
  
  uVar2 = sub_10247e50(&param_1);
  puVar1 = (uint32_t *)((ulonglong)uVar2 >> 0x20);
  *puVar1 = param_1;
  return puVar1;
}


// 0x10242800  (ghidra: FUN_10242800)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall sub_10242800(void *this,char param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  uint32_t *puVar4;
  int iVar5;
  uint8_t *puVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  char *pcVar10;
  int *piVar11;
  uint32_t uVar12;
  void *extraout_ECX;
  uint uVar13;
  uint uVar14;
  uint8_t extraout_DL;
  uint8_t extraout_DL_00;
  uint8_t extraout_DL_01;
  uint8_t extraout_DL_02;
  uint uVar15;
  uint uVar16;
  uint64_t uVar17;
  ulonglong uVar18;
  int local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if (param_1 != '\0') {
    iVar5 = sub_102401f0(&local_c);
    uVar17 = sub_10245120((void *)(iVar5 + 8),extraout_ECX);
    uVar8 = (uint)((ulonglong)uVar17 >> 0x20);
    uVar18 = (ulonglong)uVar8 & 0xffffffff000000ff;
    cVar3 = sub_10247e60();
    if (cVar3 == '\0') {
      uVar8 = sub_10244ad0(uVar8 & 0xff,0);
    }
    else {
      puVar6 = (uint8_t *)thunk_FUN_1020faf0(&local_c);
      *puVar6 = 0x2d;
      uVar18 = sub_10244a80(uVar8 & 0xff,0);
      iVar7 = sub_10244ad0((uint)uVar18,(uint)(uVar18 >> 0x20));
      uVar8 = iVar7 + 1;
    }
    iVar7 = sub_102413e0();
    if (iVar7 - 1U <= uVar8) {
      _wassert(L"n_chars < number_buffer.size() - 1",
               L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
               ,0x48d5);
    }
    sub_102450e0(&local_c,uVar8);
    while( true ) {
      uVar14 = (uint)(uVar18 >> 0x20);
      uVar8 = (uint)uVar18;
      if ((uVar14 == 0) && (uVar8 < 100)) break;
      uVar2 = (ulonglong)uVar14 * 0xe147ae15 + ((uVar18 & 0xffffffff) * 0xe147ae15 >> 0x20);
      uVar15 = (uint)(uVar2 >> 0x20);
      uVar13 = (uint)((uVar18 & 0xffffffff) * 0x47ae147a + (uVar2 & 0xffffffff) >> 0x20);
      lVar1 = uVar18 - ((ulonglong)uVar14 * 0x47ae147a +
                       (ulonglong)CONCAT14(CARRY4(uVar15,uVar13),uVar15 + uVar13));
      uVar16 = (uint)((ulonglong)lVar1 >> 0x20);
      lVar1 = (ulonglong)uVar14 * 0x47ae147a +
              (ulonglong)CONCAT14(CARRY4(uVar15,uVar13),uVar15 + uVar13) +
              CONCAT44(uVar16 >> 1,(uint)lVar1 >> 1 | uVar16 * -0x80000000);
      uVar13 = (uint)((ulonglong)lVar1 >> 0x20);
      uVar14 = (uint)lVar1 >> 6 | uVar13 * 0x4000000;
      uVar18 = CONCAT44(uVar13 >> 6,uVar14);
      pvVar9 = (void *)sub_10245110(&DAT_10378f40,uVar8 + uVar14 * -100);
      sub_102411a0(pvVar9,1);
      puVar4 = (uint32_t *)sub_10245100(&local_c);
      puVar6 = (uint8_t *)thunk_FUN_1020faf0(puVar4);
      *puVar6 = extraout_DL;
      sub_102411a0(pvVar9,0);
      puVar4 = (uint32_t *)sub_10245100(&local_c);
      puVar6 = (uint8_t *)thunk_FUN_1020faf0(puVar4);
      *puVar6 = extraout_DL_00;
    }
    if (uVar8 < 10) {
      puVar4 = (uint32_t *)sub_10245100(&local_c);
      pcVar10 = (char *)thunk_FUN_1020faf0(puVar4);
      *pcVar10 = (char)uVar18 + '0';
    }
    else {
      pvVar9 = (void *)sub_10245110(&DAT_10378f40,uVar8);
      sub_102411a0(pvVar9,1);
      puVar4 = (uint32_t *)sub_10245100(&local_c);
      puVar6 = (uint8_t *)thunk_FUN_1020faf0(puVar4);
      *puVar6 = extraout_DL_01;
      sub_102411a0(pvVar9,0);
      puVar4 = (uint32_t *)sub_10245100(&local_c);
      puVar6 = (uint8_t *)thunk_FUN_1020faf0(puVar4);
      *puVar6 = extraout_DL_02;
    }
    piVar11 = (int *)thunk_FUN_1020faf0(this);
    iVar7 = *piVar11;
    uVar12 = sub_1020fe80((void *)(iVar5 + 8));
    (**(code **)(iVar7 + 4))(uVar12);
    return;
  }
  puVar4 = (uint32_t *)thunk_FUN_1020faf0(this);
  (**(code **)*puVar4)();
  return;
}


// 0x10242a40  (ghidra: FUN_10242a40)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall sub_10242a40(void *this,uint param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  uint32_t *puVar4;
  uint8_t *puVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  char *pcVar9;
  int *piVar10;
  uint32_t uVar11;
  void *extraout_ECX;
  uint uVar12;
  uint uVar13;
  uint8_t extraout_DL;
  uint8_t extraout_DL_00;
  uint8_t extraout_DL_01;
  uint8_t extraout_DL_02;
  int extraout_EDX;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  int local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  uVar16 = CONCAT44(param_2,param_1);
  if (param_1 != 0 || param_2 != 0) {
    sub_102401f0(&local_c);
    sub_10245120((void *)(extraout_EDX + 8),extraout_ECX);
    cVar3 = sub_10247e70();
    if (cVar3 == '\0') {
      uVar7 = sub_10244ad0(param_1,param_2);
    }
    else {
      puVar5 = (uint8_t *)thunk_FUN_1020faf0(&local_c);
      *puVar5 = 0x2d;
      uVar16 = sub_10244a80(param_1,param_2);
      iVar6 = sub_10244ad0((uint)uVar16,(uint)(uVar16 >> 0x20));
      uVar7 = iVar6 + 1;
    }
    iVar6 = sub_102413e0();
    if (iVar6 - 1U <= uVar7) {
      _wassert(L"n_chars < number_buffer.size() - 1",
               L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
               ,0x48d5);
    }
    sub_102450e0(&local_c,uVar7);
    while( true ) {
      uVar13 = (uint)(uVar16 >> 0x20);
      uVar7 = (uint)uVar16;
      if ((uVar13 == 0) && (uVar7 < 100)) break;
      uVar2 = (ulonglong)uVar13 * 0xe147ae15 + ((uVar16 & 0xffffffff) * 0xe147ae15 >> 0x20);
      uVar14 = (uint)(uVar2 >> 0x20);
      uVar12 = (uint)((uVar16 & 0xffffffff) * 0x47ae147a + (uVar2 & 0xffffffff) >> 0x20);
      lVar1 = uVar16 - ((ulonglong)uVar13 * 0x47ae147a +
                       (ulonglong)CONCAT14(CARRY4(uVar14,uVar12),uVar14 + uVar12));
      uVar15 = (uint)((ulonglong)lVar1 >> 0x20);
      lVar1 = (ulonglong)uVar13 * 0x47ae147a +
              (ulonglong)CONCAT14(CARRY4(uVar14,uVar12),uVar14 + uVar12) +
              CONCAT44(uVar15 >> 1,(uint)lVar1 >> 1 | uVar15 * -0x80000000);
      uVar12 = (uint)((ulonglong)lVar1 >> 0x20);
      uVar13 = (uint)lVar1 >> 6 | uVar12 * 0x4000000;
      uVar16 = CONCAT44(uVar12 >> 6,uVar13);
      pvVar8 = (void *)sub_10245110(&DAT_10378f40,uVar7 + uVar13 * -100);
      sub_102411a0(pvVar8,1);
      puVar4 = (uint32_t *)sub_10245100(&local_c);
      puVar5 = (uint8_t *)thunk_FUN_1020faf0(puVar4);
      *puVar5 = extraout_DL;
      sub_102411a0(pvVar8,0);
      puVar4 = (uint32_t *)sub_10245100(&local_c);
      puVar5 = (uint8_t *)thunk_FUN_1020faf0(puVar4);
      *puVar5 = extraout_DL_00;
    }
    if (uVar7 < 10) {
      puVar4 = (uint32_t *)sub_10245100(&local_c);
      pcVar9 = (char *)thunk_FUN_1020faf0(puVar4);
      *pcVar9 = (char)uVar16 + '0';
    }
    else {
      pvVar8 = (void *)sub_10245110(&DAT_10378f40,uVar7);
      sub_102411a0(pvVar8,1);
      puVar4 = (uint32_t *)sub_10245100(&local_c);
      puVar5 = (uint8_t *)thunk_FUN_1020faf0(puVar4);
      *puVar5 = extraout_DL_01;
      sub_102411a0(pvVar8,0);
      puVar4 = (uint32_t *)sub_10245100(&local_c);
      puVar5 = (uint8_t *)thunk_FUN_1020faf0(puVar4);
      *puVar5 = extraout_DL_02;
    }
    piVar10 = (int *)thunk_FUN_1020faf0(this);
    iVar6 = *piVar10;
    uVar11 = sub_1020fe80((void *)(extraout_EDX + 8));
    (**(code **)(iVar6 + 4))(uVar11);
    return;
  }
  puVar4 = (uint32_t *)thunk_FUN_1020faf0(this);
  (**(code **)*puVar4)();
  return;
}


// 0x10242c80  (ghidra: FUN_10242c80)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall sub_10242c80(void *this,uint param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  uint32_t *puVar4;
  uint8_t *puVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  char *pcVar9;
  int *piVar10;
  uint32_t uVar11;
  void *extraout_ECX;
  uint uVar12;
  uint uVar13;
  uint8_t extraout_DL;
  uint8_t extraout_DL_00;
  uint8_t extraout_DL_01;
  uint8_t extraout_DL_02;
  int extraout_EDX;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  int local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  uVar16 = CONCAT44(param_2,param_1);
  if (param_1 != 0 || param_2 != 0) {
    sub_102401f0(&local_c);
    sub_10245120((void *)(extraout_EDX + 8),extraout_ECX);
    cVar3 = sub_10247e80(param_1,param_2);
    if (cVar3 == '\0') {
      uVar7 = sub_10244ad0(param_1,param_2);
    }
    else {
      puVar5 = (uint8_t *)thunk_FUN_1020faf0(&local_c);
      *puVar5 = 0x2d;
      uVar16 = sub_10244a80(param_1,param_2);
      iVar6 = sub_10244ad0((uint)uVar16,(uint)(uVar16 >> 0x20));
      uVar7 = iVar6 + 1;
    }
    iVar6 = sub_102413e0();
    if (iVar6 - 1U <= uVar7) {
      _wassert(L"n_chars < number_buffer.size() - 1",
               L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
               ,0x48d5);
    }
    sub_102450e0(&local_c,uVar7);
    while( true ) {
      uVar13 = (uint)(uVar16 >> 0x20);
      uVar7 = (uint)uVar16;
      if ((uVar13 == 0) && (uVar7 < 100)) break;
      uVar2 = (ulonglong)uVar13 * 0xe147ae15 + ((uVar16 & 0xffffffff) * 0xe147ae15 >> 0x20);
      uVar14 = (uint)(uVar2 >> 0x20);
      uVar12 = (uint)((uVar16 & 0xffffffff) * 0x47ae147a + (uVar2 & 0xffffffff) >> 0x20);
      lVar1 = uVar16 - ((ulonglong)uVar13 * 0x47ae147a +
                       (ulonglong)CONCAT14(CARRY4(uVar14,uVar12),uVar14 + uVar12));
      uVar15 = (uint)((ulonglong)lVar1 >> 0x20);
      lVar1 = (ulonglong)uVar13 * 0x47ae147a +
              (ulonglong)CONCAT14(CARRY4(uVar14,uVar12),uVar14 + uVar12) +
              CONCAT44(uVar15 >> 1,(uint)lVar1 >> 1 | uVar15 * -0x80000000);
      uVar12 = (uint)((ulonglong)lVar1 >> 0x20);
      uVar13 = (uint)lVar1 >> 6 | uVar12 * 0x4000000;
      uVar16 = CONCAT44(uVar12 >> 6,uVar13);
      pvVar8 = (void *)sub_10245110(&DAT_10378f40,uVar7 + uVar13 * -100);
      sub_102411a0(pvVar8,1);
      puVar4 = (uint32_t *)sub_10245100(&local_c);
      puVar5 = (uint8_t *)thunk_FUN_1020faf0(puVar4);
      *puVar5 = extraout_DL;
      sub_102411a0(pvVar8,0);
      puVar4 = (uint32_t *)sub_10245100(&local_c);
      puVar5 = (uint8_t *)thunk_FUN_1020faf0(puVar4);
      *puVar5 = extraout_DL_00;
    }
    if (uVar7 < 10) {
      puVar4 = (uint32_t *)sub_10245100(&local_c);
      pcVar9 = (char *)thunk_FUN_1020faf0(puVar4);
      *pcVar9 = (char)uVar16 + '0';
    }
    else {
      pvVar8 = (void *)sub_10245110(&DAT_10378f40,uVar7);
      sub_102411a0(pvVar8,1);
      puVar4 = (uint32_t *)sub_10245100(&local_c);
      puVar5 = (uint8_t *)thunk_FUN_1020faf0(puVar4);
      *puVar5 = extraout_DL_01;
      sub_102411a0(pvVar8,0);
      puVar4 = (uint32_t *)sub_10245100(&local_c);
      puVar5 = (uint8_t *)thunk_FUN_1020faf0(puVar4);
      *puVar5 = extraout_DL_02;
    }
    piVar10 = (int *)thunk_FUN_1020faf0(this);
    iVar6 = *piVar10;
    uVar11 = sub_1020fe80((void *)(extraout_EDX + 8));
    (**(code **)(iVar6 + 4))(uVar11);
    return;
  }
  puVar4 = (uint32_t *)thunk_FUN_1020faf0(this);
  (**(code **)*puVar4)();
  return;
}


// 0x10242ec0  (ghidra: FUN_10242ec0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void sub_10242ec0(uint32_t param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint8_t auStack_14 [4];
  uint32_t local_10;
  uint local_c;
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */
  
  local_c = DAT_1039800c ^ (uint)auStack_14;
  local_10 = param_1;
  iVar2 = sub_1020faf0((uint32_t *)&stack0x00000008);
  piVar3 = (int *)thunk_FUN_1020fe80(&DAT_104e0a74);
  iVar1 = *piVar3;
  for (iVar4 = sub_1020faf0(&local_10); iVar4 != iVar2; iVar4 = iVar4 + 0x1c) {
    sub_10247ea0(iVar1,iVar4);
  }
  return;
}


// 0x10242f30  (ghidra: FUN_10242f30)  [gap]
uint8_t * sub_10242f30(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  sub_1020fe80(param_3);
  sub_10247480();
  return &DAT_104e0a74;
}


// 0x10242f50  (ghidra: FUN_10242f50)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void sub_10242f50(uint32_t param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint8_t auStack_14 [4];
  uint32_t local_10;
  uint local_c;
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */
  
  local_c = DAT_1039800c ^ (uint)auStack_14;
  local_10 = param_1;
  iVar2 = sub_1020faf0((uint32_t *)&stack0x00000008);
  piVar3 = (int *)thunk_FUN_1020fe80(&DAT_104e0abc);
  iVar1 = *piVar3;
  for (iVar4 = sub_1020faf0(&local_10); iVar4 != iVar2; iVar4 = iVar4 + 0x1c) {
    sub_10247f40(iVar1,iVar4);
  }
  return;
}


// 0x10242fc0  (ghidra: FUN_10242fc0)  [gap]
uint8_t * sub_10242fc0(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  sub_1020fe80(param_3);
  sub_10247490();
  return &DAT_104e0abc;
}


// 0x10242fe0  (ghidra: FUN_10242fe0)  [gap]
uint32_t __fastcall sub_10242fe0(uint32_t param_1,uint32_t param_2)

{
  sub_10244a10(param_2);
  return param_1;
}


// 0x10242ff0  (ghidra: FUN_10242ff0)  [gap]
uint32_t * __thiscall
sub_10242ff0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t *puVar2;
  int extraout_EDX;
  void *local_8;
  
  local_8 = this;
  iVar1 = thunk_FUN_10218bf0(&param_1);
  thunk_FUN_10218bf0(&param_2);
  puVar2 = (uint32_t *)sub_1020fe80(&param_3);
  puVar2 = sub_10247fe0(&local_8,iVar1,extraout_EDX,*puVar2);
  sub_10248040(&param_3,puVar2);
  *(uint32_t *)this = param_3;
  return this;
}


// 0x10243040  (ghidra: FUN_10243040)  [gap]
void __fastcall sub_10243040(uint32_t param_1,int *param_2)

{
  sub_102445d0(param_2);
  return;
}


// 0x10243050  (ghidra: FUN_10243050)  [gap]
void __fastcall sub_10243050(uint32_t param_1,int *param_2)

{
  sub_102445e0(param_2);
  return;
}


// 0x10243060  (ghidra: FUN_10243060)  [gap]
void __fastcall sub_10243060(uint32_t param_1,uint32_t *param_2)

{
  sub_102445f0(param_2);
  return;
}


// 0x10243070  (ghidra: FUN_10243070)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_10243070(uint32_t param_1)

{
  bool bVar1;
  uint32_t uVar2;
  uint8_t *puVar3;
  uint8_t local_24 [4];
  uint64_t local_20;
  uint8_t local_15;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305abd;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  sub_102423f0(local_24,&local_15);
  sub_1020f410(&local_20);
  puVar3 = local_24;
  uVar2 = sub_10244a30();
  sub_10247ca0(&local_20,uVar2,puVar3);
  local_8 = 0;
  uVar2 = sub_1020fe80(param_1);
  sub_1020fae0((int)&local_20);
  sub_10248050(uVar2);
  bVar1 = sub_10247ce0((int)&local_20);
  if (!bVar1) {
    _wassert(L"obj != nullptr",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x4c6f);
  }
  uVar2 = sub_10211530((int)&local_20);
  sub_10244660(&local_20);
  ExceptionList = local_10;
  return uVar2;
}


// 0x10243140  (ghidra: FUN_10243140)  [gap]
void __thiscall sub_10243140(void *this,void *param_1)

{
  sub_10211700(this,param_1);
  return;
}


// 0x10243160  (ghidra: FUN_10243160)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_10243160(uint32_t param_1)

{
  bool bVar1;
  uint32_t uVar2;
  uint8_t *puVar3;
  uint8_t local_24 [4];
  uint64_t local_20;
  uint8_t local_15;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305afd;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  sub_102423f0(local_24,&local_15);
  sub_1020f410(&local_20);
  puVar3 = local_24;
  uVar2 = sub_10244a40();
  sub_10247ca0(&local_20,uVar2,puVar3);
  local_8 = 0;
  uVar2 = sub_1020fe80(param_1);
  sub_1020fae0((int)&local_20);
  sub_10248080(uVar2);
  bVar1 = sub_10247ce0((int)&local_20);
  if (!bVar1) {
    _wassert(L"obj != nullptr",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x4c6f);
  }
  uVar2 = sub_10211530((int)&local_20);
  sub_10244680(&local_20);
  ExceptionList = local_10;
  return uVar2;
}


// 0x10243230  (ghidra: FUN_10243230)  [gap]
void __thiscall sub_10243230(void *this,void *param_1)

{
  sub_10240230(this,param_1);
  return;
}


// 0x10243250  (ghidra: FUN_10243250)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_10243250(uint32_t param_1)

{
  bool bVar1;
  uint32_t uVar2;
  uint8_t *puVar3;
  uint8_t local_24 [4];
  uint64_t local_20;
  uint8_t local_15;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305b3d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  sub_102423f0(local_24,&local_15);
  sub_1020f410(&local_20);
  puVar3 = local_24;
  uVar2 = sub_10244a60();
  sub_10247ca0(&local_20,uVar2,puVar3);
  local_8 = 0;
  uVar2 = sub_1020fe80(param_1);
  sub_1020fae0((int)&local_20);
  sub_102480b0(uVar2);
  bVar1 = sub_10247ce0((int)&local_20);
  if (!bVar1) {
    _wassert(L"obj != nullptr",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x4c6f);
  }
  uVar2 = sub_10211530((int)&local_20);
  sub_10244690(&local_20);
  ExceptionList = local_10;
  return uVar2;
}


// 0x10243320  (ghidra: FUN_10243320)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_10243320(uint32_t param_1)

{
  bool bVar1;
  uint32_t uVar2;
  uint8_t *puVar3;
  uint8_t local_24 [4];
  uint64_t local_20;
  uint8_t local_15;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305b7d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  sub_102423f0(local_24,&local_15);
  sub_1020f410(&local_20);
  puVar3 = local_24;
  uVar2 = sub_10245170();
  sub_10247ca0(&local_20,uVar2,puVar3);
  local_8 = 0;
  uVar2 = sub_1020fe80(param_1);
  sub_1020fae0((int)&local_20);
  sub_10212a00(uVar2);
  bVar1 = sub_10247ce0((int)&local_20);
  if (!bVar1) {
    _wassert(L"obj != nullptr",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x4c6f);
  }
  uVar2 = sub_10211530((int)&local_20);
  sub_10244670(&local_20);
  ExceptionList = local_10;
  return uVar2;
}


// 0x102433f0  (ghidra: FUN_102433f0)  [gap]
void __thiscall sub_102433f0(void *this,void *param_1)

{
  sub_102116d0(this,param_1);
  return;
}


// 0x10243410  (ghidra: FUN_10243410)  [gap]
void sub_10243410(void *param_1,int param_2)

{
  sub_10247360(param_1,param_2);
  return;
}


// 0x10243430  (ghidra: FUN_10243430)  [gap]
void __cdecl sub_10243430(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  void *this;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  uVar1 = sub_1020fe80(param_2);
  uVar2 = sub_1020fe80(param_1);
  uVar3 = sub_1020fe80(extraout_EDX);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar3);
  sub_102480e0(this,uVar2,uVar1);
  return;
}


// 0x10243460  (ghidra: FUN_10243460)  [gap]
int __thiscall sub_10243460(void *this,int param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t extraout_EDX;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305bb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)this;
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x28;
  uVar3 = sub_10244dc0();
  if (uVar2 != uVar3) {
    uVar3 = sub_10244d50(this,uVar2 + 1);
    iVar4 = sub_10244e00(uVar3);
    local_8 = 0;
    iVar1 = iVar4 + ((param_1 - iVar1) / 0x28) * 0x28;
    uVar5 = sub_1020fe80(param_3);
    sub_1020fe80(param_2);
    sub_1020fe80(iVar1);
    sub_10243430(extraout_EDX,uVar5);
    if (param_1 == *(int *)((int)this + 4)) {
      sub_10244d80(this,*(uint32_t *)this,*(int *)((int)this + 4),iVar4);
    }
    else {
      sub_10244da0(this,*(uint32_t *)this,param_1,iVar4);
      sub_10244da0(this,param_1,*(uint32_t *)((int)this + 4),iVar1 + 0x28);
    }
    sub_10244cf0(this,iVar4,uVar2 + 1,uVar3);
    ExceptionList = local_10;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_10210bb0();
}


// 0x1024358a  [gap]
void Catch_All_1024358a(void)

{
  int unaff_EBP;
  
  sub_10241180(*(int *)(unaff_EBP + -0x14),*(int *)(unaff_EBP + -0x24));
  sub_10244e20(*(void **)(unaff_EBP + -0x28),*(int *)(unaff_EBP + -0x1c));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


// 0x102435c0  (ghidra: FUN_102435c0)  [gap]
uint32_t * __thiscall sub_102435c0(void *this,uint32_t param_1)

{
  sub_10248120(&param_1,-1);
  *(uint32_t *)this = param_1;
  return this;
}


// 0x102435e0  (ghidra: FUN_102435e0)  [gap]
uint32_t * __thiscall sub_102435e0(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305bee;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10237930(this);
  local_8 = 0;
  uVar1 = sub_1020fe80(&DAT_10377638);
  uVar2 = sub_1020fe80(param_1);
  pcVar3 = (char *)sub_1020fe80("JSON pointer must be empty or begin with \'/\' - was: \'");
  pcVar4 = sub_10248130(pcVar3,uVar2,uVar1);
  sub_1023e080(this,(uint)pcVar4);
  sub_10248170(this,pcVar3,uVar2,uVar1);
  ExceptionList = local_10;
  return this;
}


// 0x10243690  (ghidra: FUN_10243690)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __fastcall sub_10243690(void *param_1,uint32_t param_2,int param_3,uint32_t param_4)

{
  void *pvVar1;
  uint32_t extraout_ECX;
  uint uVar2;
  uint64_t uVar3;
  uint32_t local_d4 [6];
  uint32_t local_bc [6];
  uint32_t local_a4 [6];
  uint32_t local_8c [6];
  uint32_t local_74 [6];
  uint32_t local_5c [6];
  uint32_t local_44;
  uint32_t local_40;
  uint32_t *local_3c;
  void *local_38;
  uint local_34;
  uint32_t local_30 [6];
  uint local_18;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305c84;
  local_10 = ExceptionList;
  local_18 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = param_4;
  local_34 = 0;
  local_40 = param_2;
  local_38 = param_1;
  local_38 = sub_102385e0(local_d4);
  local_8 = 0;
  if (param_3 == 0) {
    local_3c = sub_1020f990(local_8c,"");
    local_8 = 3;
    uVar2 = 4;
  }
  else {
    pvVar1 = sub_102384d0(local_bc);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_34 = 1;
    local_3c = sub_10247220(local_a4,pvVar1);
    local_8 = 2;
    uVar2 = 3;
  }
  local_34 = uVar2;
  sub_1020f990(local_5c,"parse_error");
  local_8 = 4;
  pvVar1 = sub_10238570(local_74,local_5c);
  local_8 = CONCAT31(local_8._1_3_,5);
  sub_102481b0(local_30,pvVar1,extraout_ECX,local_3c,extraout_ECX,local_38,local_44);
  thunk_FUN_1020fc60(local_74);
  thunk_FUN_1020fc60(local_5c);
  if ((uVar2 & 4) != 0) {
    uVar2 = uVar2 & 0xfffffffb;
    thunk_FUN_1020fc60(local_8c);
  }
  if ((uVar2 & 2) != 0) {
    uVar2 = uVar2 & 0xfffffffd;
    thunk_FUN_1020fc60(local_a4);
  }
  if ((uVar2 & 1) != 0) {
    thunk_FUN_1020fc60(local_bc);
  }
  thunk_FUN_1020fc60(local_d4);
  uVar3 = thunk_FUN_1020fe30((int)local_30);
  sub_10238650(param_1,local_40,param_3,(int)uVar3);
  thunk_FUN_1020fc60(local_30);
  ExceptionList = local_10;
  return param_1;
}


// 0x10243820  (ghidra: FUN_10243820)  [gap]
uint64_t __fastcall sub_10243820(void *param_1)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  uint64_t uVar3;
  uint32_t local_70 [6];
  uint32_t local_58 [6];
  uint32_t local_40 [6];
  uint32_t local_28 [6];
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305cd5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = sub_1020f990(local_40,"/");
  local_8 = 0;
  puVar2 = sub_1020f990(local_28,"~1");
  local_8 = CONCAT31(local_8._1_3_,1);
  sub_10248290(param_1,(int)puVar2,(int)puVar1);
  thunk_FUN_1020fc60(local_28);
  local_8 = 0xffffffff;
  thunk_FUN_1020fc60(local_40);
  puVar1 = sub_1020f990(local_70,"~");
  local_8 = 2;
  puVar2 = sub_1020f990(local_58,"~0");
  local_8 = CONCAT31(local_8._1_3_,3);
  sub_10248290(param_1,(int)puVar2,(int)puVar1);
  thunk_FUN_1020fc60(local_58);
  uVar3 = thunk_FUN_1020fc60(local_70);
  ExceptionList = local_10;
  return uVar3;
}


// 0x102438f0  (ghidra: FUN_102438f0)  [gap]
uint32_t * __fastcall sub_102438f0(uint32_t *param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  void *extraout_EDX;
  uint uVar5;
  uint32_t local_c;
  uint local_8;
  
  uVar5 = param_1[4];
  local_8 = uVar5;
  uVar1 = sub_1020ffe0();
  if (uVar1 == uVar5) {
                    /* WARNING: Subroutine does not return */
    sub_stl_1020f3f0();
  }
  uVar1 = param_1[5];
  uVar2 = sub_10210b70(param_1,uVar5 + 1);
  local_c = sub_10210080(-(uint)(0xfffffffe < uVar2) | uVar2 + 1);
  param_1[4] = uVar5 + 1;
  param_1[5] = uVar2;
  pvVar3 = (void *)sub_1020fe80(local_c);
  if (0xf < uVar1) {
    pvVar3 = (void *)*param_1;
    uVar5 = local_8;
    pvVar4 = (void *)sub_1020fe80(pvVar3);
    sub_10240040(extraout_EDX,pvVar4,uVar5);
    sub_102100a0(pvVar3,uVar1 + 1);
    *param_1 = local_c;
    return param_1;
  }
  sub_10240040(pvVar3,param_1,local_8);
  sub_10210750(param_1,&local_c);
  return param_1;
}


// 0x102439b0  (ghidra: FUN_102439b0)  [gap]
uint32_t * __thiscall sub_102439b0(void *this,uint32_t param_1,uint32_t param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint32_t extraout_ECX;
  uint32_t uVar4;
  void *local_8;
  
  local_8 = this;
  uVar1 = sub_1020ffe0();
  if (uVar1 < 0x200) {
                    /* WARNING: Subroutine does not return */
    sub_stl_1020f3f0();
  }
  uVar1 = *(uint *)((int)this + 0x14);
  uVar2 = sub_10210b70(this,0x200);
  local_8 = (void *)sub_10210080(-(uint)(0xfffffffe < uVar2) | uVar2 + 1);
  *(uint32_t *)((int)this + 0x10) = 0x200;
  *(uint *)((int)this + 0x14) = uVar2;
  uVar4 = extraout_ECX;
  pvVar3 = (void *)sub_1020fe80(local_8);
  sub_102400f0(pvVar3,uVar4,param_3);
  if (0xf < uVar1) {
    sub_102100a0(*(void **)this,uVar1 + 1);
    *(void **)this = local_8;
    return this;
  }
  sub_10210750(this,&local_8);
  return this;
}


// 0x10243a50  (ghidra: FUN_10243a50)  [gap]
uint32_t * __thiscall
sub_10243a50(void *this,uint param_1,uint32_t param_2,size_t param_3,uint32_t param_4)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  void *extraout_EDX;
  size_t sVar5;
  uint32_t local_c;
  size_t local_8;
  
  sVar5 = *(size_t *)((int)this + 0x10);
  local_8 = sVar5;
  uVar1 = sub_1020ffe0();
  if (uVar1 - sVar5 < param_1) {
                    /* WARNING: Subroutine does not return */
    sub_stl_1020f3f0();
  }
  uVar1 = *(uint *)((int)this + 0x14);
  uVar2 = sub_10210b70(this,sVar5 + param_1);
  local_c = sub_10210080(-(uint)(0xfffffffe < uVar2) | uVar2 + 1);
  *(size_t *)((int)this + 0x10) = sVar5 + param_1;
  *(uint *)((int)this + 0x14) = uVar2;
  pvVar3 = (void *)sub_1020fe80(local_c);
  if (0xf < uVar1) {
    pvVar3 = *(void **)this;
    sVar5 = local_8;
    pvVar4 = (void *)sub_1020fe80(pvVar3);
    sub_10240190(extraout_EDX,pvVar4,sVar5,param_3,param_4);
    sub_102100a0(pvVar3,uVar1 + 1);
    *(uint32_t *)this = local_c;
    return this;
  }
  sub_10240190(pvVar3,this,local_8,param_3,param_4);
  sub_10210750(this,&local_c);
  return this;
}


// 0x10243b10  (ghidra: FUN_10243b10)  [gap]
bool sub_10243b10(void)

{
  int iVar1;
  
  iVar1 = sub_10238260();
  return iVar1 < 1;
}


// 0x10243b30  (ghidra: FUN_10243b30)  [gap]
uint32_t * __thiscall
sub_10243b30(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  char *pcVar4;
  char *pcVar5;
  uint32_t extraout_EDX;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103058fe;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10237930(this);
  local_8 = 0;
  uVar1 = sub_1020fe80(param_3);
  uVar2 = sub_1020fe80(&DAT_1037a5f4);
  uVar3 = sub_1020fe80(param_1);
  pcVar4 = (char *)sub_1020fe80("invalid UTF-8 byte at index ");
  pcVar5 = sub_10247560(pcVar4,uVar3,uVar2,extraout_EDX);
  sub_1023e080(this,(uint)pcVar5);
  sub_102475b0(this,pcVar4,uVar3,uVar2,uVar1);
  ExceptionList = local_10;
  return this;
}


// 0x10243bf0  (ghidra: FUN_10243bf0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __thiscall sub_10243bf0(void *this,uint32_t param_1)

{
  void *pvVar1;
  void *pvVar2;
  uint64_t uVar3;
  uint32_t local_78 [6];
  uint32_t local_60 [6];
  uint32_t local_48 [6];
  void *local_30;
  uint32_t local_2c [6];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305d1d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = this;
  pvVar1 = sub_102385e0(local_78);
  local_8 = 0;
  sub_1020f990(local_48,"type_error");
  local_8._0_1_ = 1;
  pvVar2 = sub_10238570(local_60,local_48);
  local_8 = CONCAT31(local_8._1_3_,2);
  sub_10247d50(local_2c,pvVar2,pvVar1,param_1);
  thunk_FUN_1020fc60(local_60);
  thunk_FUN_1020fc60(local_48);
  thunk_FUN_1020fc60(local_78);
  uVar3 = thunk_FUN_1020fe30((int)local_2c);
  sub_102387a0(this,0x13c,(int)uVar3);
  thunk_FUN_1020fc60(local_2c);
  ExceptionList = local_10;
  return this;
}


// 0x10243cd0  (ghidra: FUN_10243cd0)  [gap]
uint8_t __fastcall sub_10243cd0(uint8_t param_1)

{
  return param_1;
}


// 0x10243ce0  (ghidra: FUN_10243ce0)  [gap]
uint32_t * __thiscall sub_10243ce0(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305a3e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10237930(this);
  local_8 = 0;
  uVar1 = sub_1020fe80(param_1);
  pcVar2 = (char *)sub_1020fe80("incomplete UTF-8 string; last byte: 0x");
  pcVar3 = sub_10248310(pcVar2,uVar1);
  sub_1023e080(this,(uint)pcVar3);
  sub_10248340(this,pcVar2,uVar1);
  ExceptionList = local_10;
  return this;
}


// 0x10243d70  (ghidra: FUN_10243d70)  [gap]
int sub_10243d70(void)

{
  int local_8;
  
  local_8 = sub_10244c60();
  sub_10210750(local_8,&local_8);
  sub_10210750(local_8 + 4,&local_8);
  sub_10210750(local_8 + 8,&local_8);
  *(uint8_t *)(local_8 + 0xc) = 1;
  *(uint8_t *)(local_8 + 0xd) = 1;
  return local_8;
}


// 0x10243dc0  (ghidra: FUN_10243dc0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t sub_10243dc0(void)

{
  bool bVar1;
  uint32_t uVar2;
  uint32_t extraout_ECX;
  uint8_t *puVar3;
  uint8_t local_18 [4];
  uint64_t local_14;
  uint8_t local_9;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  sub_102423f0(local_18,&local_9);
  sub_1020f410(&local_14);
  puVar3 = local_18;
  uVar2 = sub_10244a40();
  sub_10247ca0(&local_14,uVar2,puVar3);
  uVar2 = sub_1020fae0((int)&local_14);
  sub_10248370(extraout_ECX,uVar2);
  bVar1 = sub_10247ce0((int)&local_14);
  if (!bVar1) {
    _wassert(L"obj != nullptr",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x4c6f);
  }
  uVar2 = sub_10211530((int)&local_14);
  sub_10244680(&local_14);
  return uVar2;
}


// 0x10243e50  (ghidra: FUN_10243e50)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t sub_10243e50(void)

{
  bool bVar1;
  uint32_t uVar2;
  uint8_t *puVar3;
  uint8_t local_24 [4];
  uint64_t local_20;
  uint8_t local_15;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305b7d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  sub_102423f0(local_24,&local_15);
  sub_1020f410(&local_20);
  puVar3 = local_24;
  uVar2 = sub_10245170();
  sub_10247ca0(&local_20,uVar2,puVar3);
  local_8 = 0;
  uVar2 = sub_1020fe80(&DAT_10367500);
  sub_1020fae0((int)&local_20);
  sub_10248390(uVar2);
  bVar1 = sub_10247ce0((int)&local_20);
  if (!bVar1) {
    _wassert(L"obj != nullptr",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x4c6f);
  }
  uVar2 = sub_10211530((int)&local_20);
  sub_10244670(&local_20);
  ExceptionList = local_10;
  return uVar2;
}


// 0x10243f20  (ghidra: FUN_10243f20)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t sub_10243f20(void)

{
  bool bVar1;
  uint32_t uVar2;
  uint32_t extraout_ECX;
  uint8_t *puVar3;
  uint8_t local_18 [4];
  uint64_t local_14;
  uint8_t local_9;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  sub_102423f0(local_18,&local_9);
  sub_1020f410(&local_14);
  puVar3 = local_18;
  uVar2 = sub_10244a30();
  sub_10247ca0(&local_14,uVar2,puVar3);
  uVar2 = sub_1020fae0((int)&local_14);
  sub_102483c0(extraout_ECX,uVar2);
  bVar1 = sub_10247ce0((int)&local_14);
  if (!bVar1) {
    _wassert(L"obj != nullptr",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x4c6f);
  }
  uVar2 = sub_10211530((int)&local_14);
  sub_10244660(&local_14);
  return uVar2;
}


// 0x10243fb0  (ghidra: FUN_10243fb0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __thiscall sub_10243fb0(void *this,uint32_t param_1)

{
  void *pvVar1;
  void *pvVar2;
  uint32_t extraout_ECX;
  uint64_t uVar3;
  uint32_t local_78 [6];
  uint32_t local_60 [6];
  uint32_t local_48 [6];
  void *local_30;
  uint32_t local_2c [6];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305d1d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = this;
  pvVar1 = sub_102385e0(local_78);
  local_8 = 0;
  sub_1020f990(local_48,"other_error");
  local_8._0_1_ = 1;
  pvVar2 = sub_10238570(local_60,local_48);
  local_8 = CONCAT31(local_8._1_3_,2);
  sub_10247d50(local_2c,pvVar2,pvVar1,param_1);
  thunk_FUN_1020fc60(local_60);
  thunk_FUN_1020fc60(local_48);
  thunk_FUN_1020fc60(local_78);
  uVar3 = thunk_FUN_1020fe30((int)local_2c);
  sub_102387e0(this,extraout_ECX,(int)uVar3);
  thunk_FUN_1020fc60(local_2c);
  ExceptionList = local_10;
  return this;
}


// 0x10244080  (ghidra: FUN_10244080)  [gap]
void __fastcall sub_10244080(uint32_t param_1,char *param_2)

{
  sub_10244600(param_2);
  return;
}


// 0x10244090  (ghidra: FUN_10244090)  [gap]
void __cdecl sub_10244090(uint32_t param_1)

{
  char *pcVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  pcVar1 = (char *)sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_10240d50(this,pcVar1);
  return;
}


// 0x102440c0  (ghidra: FUN_102440c0)  [gap]
int __thiscall sub_102440c0(void *this,int param_1,uint32_t param_2)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  uint32_t extraout_EDX;
  uint uVar5;
  
  iVar4 = *(int *)this;
  uVar5 = *(int *)((int)this + 4) - iVar4 >> 4;
  uVar1 = sub_102410c0();
  if (uVar5 != uVar1) {
    uVar5 = uVar5 + 1;
    uVar1 = sub_10244ca0(this,uVar5);
    iVar2 = sub_10241380(uVar1);
    iVar4 = (param_1 - iVar4 & 0xfffffff0U) + iVar2;
    uVar3 = sub_1020fe80(param_2);
    sub_1020fe80(extraout_EDX);
    sub_10244090(uVar3);
    if (param_1 == *(int *)((int)this + 4)) {
      sub_10241350(this,*(uint32_t *)this,*(int *)((int)this + 4),iVar2);
    }
    else {
      sub_10244cd0(this,*(uint32_t *)this,param_1,iVar2);
      sub_10244cd0(this,param_1,*(uint32_t *)((int)this + 4),iVar4 + 0x10);
    }
    sub_10241300(this,iVar2,uVar5,uVar1);
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_10210bb0();
}


// 0x10244180  (ghidra: FUN_10244180)  [gap]
void __thiscall sub_10244180(void *this,uint32_t *param_1)

{
  *(uint32_t *)this = *param_1;
  *(uint32_t *)((int)this + 4) = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// 0x102441b0  (ghidra: FUN_102441b0)  [gap]
void __thiscall sub_102441b0(void *this,int param_1)

{
  uint32_t *extraout_EDX;
  
  sub_10245140(param_1);
  *(uint32_t *)this = *extraout_EDX;
  *(uint32_t *)((int)this + 4) = extraout_EDX[1];
  return;
}


// 0x102441d0  (ghidra: FUN_102441d0)  [gap]
int __fastcall sub_102441d0(uint param_1)

{
  uint32_t auStack_10 [3];
  
  if (param_1 < 0x10000000) {
    return param_1 << 4;
  }
  sub_1020f2f0(auStack_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(auStack_10,(ThrowInfo *)&DAT_10393b48);
}


// 0x102441f0  (ghidra: FUN_102441f0)  [gap]
int __thiscall sub_102441f0(void *this,int param_1,uint32_t param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint32_t extraout_EDX;
  int iVar4;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305d50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)this;
  iVar4 = (*(int *)((int)this + 4) - *(int *)this >> 3) * -0x55555555;
  uVar2 = sub_10210c40();
  if (iVar4 - uVar2 != 0) {
    uVar2 = sub_10237fd0(this,iVar4 + 1);
    iVar3 = sub_10210e10(uVar2);
    local_8 = 0;
    iVar1 = iVar3 + ((param_1 - iVar1) / 0x18) * 0x18;
    sub_1020fe80(param_2);
    sub_1020fe80(iVar1);
    sub_10212a00(extraout_EDX);
    if (param_1 == *(int *)((int)this + 4)) {
      sub_10238000(this,*(uint32_t *)this,*(int *)((int)this + 4),iVar3);
    }
    else {
      sub_10238020(this,*(uint32_t *)this,param_1,iVar3);
      sub_10238020(this,param_1,*(uint32_t *)((int)this + 4),iVar1 + 0x18);
    }
    sub_10237f80(this,iVar3,iVar4 + 1,uVar2);
    ExceptionList = local_10;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_10210bb0();
}


// 0x102442f8  [gap]
void Catch_All_102442f8(void)

{
  int unaff_EBP;
  
  sub_1020fed0(*(int *)(unaff_EBP + -0x14),*(int *)(unaff_EBP + -0x14));
  sub_1020fef0(*(void **)(unaff_EBP + -0x20),*(int *)(unaff_EBP + -0x18));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


// 0x10244330  (ghidra: FUN_10244330)  [gap]
char * __fastcall sub_10244330(uint16_t *param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  uint32_t in_XMM2_Da;
  uint32_t in_XMM2_Db;
  uint64_t local_20;
  size_t local_18;
  int local_14;
  
  local_20 = (double)CONCAT44(in_XMM2_Db,in_XMM2_Da);
  local_14 = param_2;
  bVar1 = sub_10243b10();
  if (!bVar1) {
    _wassert(L"std::isfinite(value)",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x45bb);
  }
  bVar1 = sub_10238290();
  if (bVar1) {
    local_20 = -local_20;
    *(uint8_t *)param_1 = 0x2d;
    param_1 = (uint16_t *)((int)param_1 + 1);
  }
  if (local_20 == 0.0) {
    *param_1 = 0x2e30;
    *(uint8_t *)(param_1 + 1) = 0x30;
    return (char *)((int)param_1 + 3);
  }
  local_14 = local_14 - (int)param_1;
  if (local_14 < 0x11) {
    _wassert(L"last - first >= std::numeric_limits<FloatType>::max_digits10",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x45d4);
  }
  local_18 = 0;
  local_20 = (double)((ulonglong)local_20 & 0xffffffff);
  sub_102483e0(param_1,(int *)&local_18,(int *)((int)&local_20 + 4));
  if (0x11 < (int)local_18) {
    _wassert(L"len <= std::numeric_limits<FloatType>::max_digits10",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x45de);
  }
  if (local_14 < 0x11) {
    _wassert(L"last - first >= kMaxExp + 2",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x45e5);
LAB_10244446:
    _wassert(L"last - first >= 2 + (-kMinExp - 1) + std::numeric_limits<FloatType>::max_digits10",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x45e6);
  }
  else {
    if (local_14 < 0x16) goto LAB_10244446;
    if (0x16 < local_14) goto LAB_10244475;
  }
  _wassert(L"last - first >= std::numeric_limits<FloatType>::max_digits10 + 6",
           L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
           ,0x45e7);
LAB_10244475:
  pcVar2 = sub_10239530(param_1,local_18,local_20._4_4_);
  return pcVar2;
}


// 0x102444a0  (ghidra: FUN_102444a0)  [gap]
void __fastcall sub_102444a0(int param_1,int param_2)

{
  char *pcVar1;
  uint32_t extraout_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    pcVar1 = (char *)sub_1020fe80(param_1);
    sub_10244080(extraout_ECX,pcVar1);
  }
  return;
}


// 0x102444d0  (ghidra: FUN_102444d0)  [gap]
void __fastcall sub_102444d0(int param_1,int param_2)

{
  uint32_t *puVar1;
  uint32_t extraout_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x28) {
    puVar1 = (uint32_t *)sub_1020fe80(param_1);
    sub_10248490(extraout_ECX,puVar1);
  }
  return;
}


// 0x10244500  (ghidra: FUN_10244500)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall
sub_10244500(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  void *this;
  int *extraout_ECX;
  uint32_t local_1c;
  uint32_t local_18;
  uint64_t local_14;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_1c = param_1;
  local_18 = param_2;
  iVar1 = sub_1020faf0(&local_18);
  sub_1020f420(&local_14);
  sub_10212360(this,param_3,param_4);
  for (iVar2 = sub_1020faf0(&local_1c); iVar2 != iVar1; iVar2 = iVar2 + 0x10) {
    uVar3 = sub_1020fe80(iVar2);
    sub_102484a0(&local_14,uVar3);
  }
  uVar3 = sub_10212340((uint32_t *)&local_14);
  sub_10244650(extraout_ECX);
  return uVar3;
}


// 0x10244580  (ghidra: FUN_10244580)  [gap]
void __fastcall sub_10244580(void *param_1)

{
  sub_10244610((int *)((int)param_1 + 0x30));
  thunk_FUN_1023f130(param_1);
  return;
}


// 0x102445a0  (ghidra: FUN_102445a0)  [gap]
uint32_t * __thiscall sub_102445a0(void *this,int param_1)

{
  sub_1023e370(this,param_1);
  *(uint8_t ***)this = nlohmann::json_abi_v3_11_2::detail::out_of_range::vftable;
  return this;
}


// 0x102445c0  (ghidra: FUN_102445c0)  [gap]
uint64_t __fastcall sub_102445c0(uint32_t *param_1)

{
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  sub_102116a0(param_1);
  return CONCAT44(extraout_EDX,extraout_ECX);
}


// 0x102445d0  (ghidra: FUN_102445d0)  [gap]
int * __fastcall sub_102445d0(int *param_1)

{
  thunk_FUN_102456e0(param_1);
  return param_1;
}


// 0x102445e0  (ghidra: FUN_102445e0)  [gap]
int * __fastcall sub_102445e0(int *param_1)

{
  thunk_FUN_10241050(param_1);
  return param_1;
}


// 0x102445f0  (ghidra: FUN_102445f0)  [gap]
uint32_t * __fastcall sub_102445f0(uint32_t *param_1)

{
  thunk_FUN_1020fa40(param_1);
  return param_1;
}


// 0x10244600  (ghidra: FUN_10244600)  [gap]
char * __fastcall sub_10244600(char *param_1)

{
  sub_1023dd40(param_1);
  return param_1;
}


// 0x10244610  (ghidra: FUN_10244610)  [gap]
void __fastcall sub_10244610(int *param_1)

{
  thunk_FUN_1020fc60(param_1 + 0xb);
  thunk_FUN_1020fa40(param_1 + 8);
  sub_10238800(param_1);
  return;
}


// 0x10244630  [gap]
void __fastcall thunk_FUN_102456e0(int *param_1)

{
  if (*param_1 != 0) {
    sub_10241180(*param_1,param_1[1]);
    sub_10244e20((void *)*param_1,(param_1[2] - *param_1) / 0x28);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// 0x10244640  [gap]
void __fastcall thunk_FUN_1020fa40(uint32_t *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    sub_102100a0(pvVar1,param_1[2] - (int)pvVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// 0x10244650  (ghidra: FUN_10244650)  [gap]
void __fastcall sub_10244650(int *param_1)

{
  sub_102444a0(*param_1,param_1[1]);
  return;
}


// 0x10244660  (ghidra: FUN_10244660)  [gap]
void __fastcall sub_10244660(void *param_1)

{
  if (*(void **)((int)param_1 + 4) != (void *)0x0) {
    sub_10243140(param_1,*(void **)((int)param_1 + 4));
  }
  return;
}


// 0x10244670  (ghidra: FUN_10244670)  [gap]
void __fastcall sub_10244670(void *param_1)

{
  if (*(void **)((int)param_1 + 4) != (void *)0x0) {
    sub_102433f0(param_1,*(void **)((int)param_1 + 4));
  }
  return;
}


// 0x10244680  (ghidra: FUN_10244680)  [gap]
void __fastcall sub_10244680(void *param_1)

{
  if (*(void **)((int)param_1 + 4) != (void *)0x0) {
    sub_10243230(param_1,*(void **)((int)param_1 + 4));
  }
  return;
}


// 0x10244690  (ghidra: FUN_10244690)  [gap]
void __fastcall sub_10244690(void *param_1)

{
  if (*(void **)((int)param_1 + 4) != (void *)0x0) {
    sub_102423d0(param_1,*(void **)((int)param_1 + 4));
  }
  return;
}


// 0x102446a0  (ghidra: FUN_102446a0)  [gap]
void __fastcall sub_102446a0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(1);
  }
  return;
}


// 0x102446b0  (ghidra: FUN_102446b0)  [gap]
void __fastcall sub_102446b0(int param_1)

{
  sub_102484d0((int *)(param_1 + 0xc));
  return;
}


// 0x102446c0  (ghidra: FUN_102446c0)  [gap]
void __fastcall sub_102446c0(uint32_t *param_1)

{
  *param_1 = std::_Ref_count_obj2<nlohmann::json_abi_v3_11_2::detail::output_stream_adapter<char>_>
             ::vftable;
  return;
}


// 0x102446d0  (ghidra: FUN_102446d0)  [gap]
void __fastcall sub_102446d0(int param_1)

{
  uint32_t *puVar1;
  uint32_t extraout_ECX;
  
  if (*(int *)(param_1 + 4) != 0) {
    puVar1 = (uint32_t *)sub_1020fe80(*(int *)(param_1 + 4) + 0x10);
    sub_102484e0(extraout_ECX,puVar1);
  }
  thunk_FUN_10245380(param_1);
  return;
}


// 0x10244700  (ghidra: FUN_10244700)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall sub_10244700(void *this,uint32_t param_1,char *param_2)

{
  uint8_t uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  uint32_t uVar6;
  void *this_00;
  void *pvVar7;
  uint64_t uVar8;
  uint8_t auStack_16c [20];
  uint32_t uStack_158;
  char acStack_150 [4];
  uint32_t *puVar9;
  uint32_t uVar10;
  uint32_t local_130 [8];
  uint32_t local_110 [2];
  uint32_t local_108 [6];
  uint32_t local_f0 [6];
  uint64_t local_d8;
  uint64_t local_cc;
  char local_c0 [28];
  uint8_t local_a4 [120];
  int local_2c [6];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  int local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305ddd;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar1 = *(uint8_t *)((int)this + 0x98);
  bVar2 = sub_10245640((int)this);
  if (bVar2) {
    sub_10245250(local_a4);
    sub_10244bd0(auStack_16c,(int)this);
    sub_102452c0(local_a4,param_2);
    local_8 = 0;
    sub_102484f0(this,local_a4);
    iVar4 = sub_10245510((int)this);
    if (iVar4 != 0xf) {
      sub_1020f990(local_2c,"value");
      local_8._0_1_ = 1;
      acStack_150[0] = -0x4a;
      acStack_150[1] = 'G';
      acStack_150[2] = '$';
      acStack_150[3] = '\x10';
      sub_json_10245390(this,local_f0,0xf,(char *)local_2c);
      local_8._0_1_ = 2;
      pvVar7 = (void *)((int)this + 0x30);
      uVar8 = sub_10245600(pvVar7,&local_cc);
      puVar9 = (uint32_t *)uVar8;
      acStack_150[0] = -0x25;
      acStack_150[1] = 'G';
      acStack_150[2] = '$';
      acStack_150[3] = '\x10';
      pvVar5 = sub_10248c90(puVar9,(int)((ulonglong)uVar8 >> 0x20));
      local_8._0_1_ = 3;
      sub_10245520(pvVar7,(uint32_t *)local_c0);
      local_8._0_1_ = 4;
      uVar10 = 0x10244804;
      uVar6 = sub_10245600(pvVar7,&local_d8);
      builtin_strncpy(acStack_150,"\x13H$\x10",4);
      sub_10248d90(local_a4,puVar9,uVar10,(int)pvVar5,uVar6);
      thunk_FUN_1020fc60((uint32_t *)local_c0);
      thunk_FUN_10238630(local_110);
      thunk_FUN_1020fc60(local_f0);
      local_8 = (uint)local_8._1_3_ << 8;
      thunk_FUN_1020fc60(local_2c);
    }
    cVar3 = sub_102452b0((int)local_a4);
    if (cVar3 != '\0') {
      uStack_158 = 0x1024485b;
      sub_1023fc80(acStack_150,'\t');
      sub_1023dd90(param_2);
      sub_10245220((int)local_a4);
      ExceptionList = local_10;
      return;
    }
    bVar2 = sub_10245780(param_2);
    if (bVar2) {
      uStack_158 = 0x10244888;
      sub_1023dec0(acStack_150);
      sub_1023dd90(param_2);
    }
    sub_10245220((int)local_a4);
  }
  else {
    sub_10245260(local_2c);
    sub_10245280(this_00,param_2,uVar1);
    local_8 = 5;
    sub_10248dd0(this,local_2c);
    iVar4 = sub_10245510((int)this);
    if (iVar4 != 0xf) {
      sub_1020f990(local_c0,"value");
      local_8._0_1_ = 6;
      acStack_150[0] = -2;
      acStack_150[1] = 'H';
      acStack_150[2] = '$';
      acStack_150[3] = '\x10';
      sub_json_10245390(this,local_108,0xf,local_c0);
      local_8._0_1_ = 7;
      pvVar7 = (void *)((int)this + 0x30);
      uVar8 = sub_10245600(pvVar7,&local_d8);
      puVar9 = (uint32_t *)uVar8;
      builtin_strncpy(acStack_150,"#I$\x10",4);
      pvVar5 = sub_10248c90(puVar9,(int)((ulonglong)uVar8 >> 0x20));
      local_8._0_1_ = 8;
      sub_10245520(pvVar7,local_f0);
      local_8._0_1_ = 9;
      uVar10 = 0x1024494c;
      uVar6 = sub_10245600(pvVar7,&local_cc);
      builtin_strncpy(acStack_150,"XI$\x10",4);
      sub_10249570(local_2c,puVar9,uVar10,(int)pvVar5,uVar6);
      thunk_FUN_1020fc60(local_f0);
      thunk_FUN_10238630(local_130);
      thunk_FUN_1020fc60(local_108);
      local_8 = CONCAT31(local_8._1_3_,5);
      thunk_FUN_1020fc60((uint32_t *)local_c0);
    }
    cVar3 = sub_10245270((int)local_2c);
    if (cVar3 != '\0') {
      uStack_158 = 0x102449a0;
      sub_1023fc80(acStack_150,'\t');
      sub_1023dd90(param_2);
      sub_1020f440((int)local_2c);
      ExceptionList = local_10;
      return;
    }
    sub_1020f440((int)local_2c);
  }
  sub_1023fcc0(param_2);
  ExceptionList = local_10;
  return;
}


// 0x102449e0  (ghidra: FUN_102449e0)  [gap]
void __fastcall sub_102449e0(uint32_t *param_1)

{
  uint32_t local_8;
  
  local_8 = 0;
  sub_10211940(param_1,&local_8);
  return;
}


// 0x10244a00  (ghidra: FUN_10244a00)  [gap]
void __fastcall sub_10244a00(uint32_t *param_1)

{
  if ((uint32_t *)*param_1 != (uint32_t *)0x0) {
    sub_10245620((uint32_t *)*param_1);
  }
  return;
}


// 0x10244a10  (ghidra: FUN_10244a10)  [gap]
uint32_t * sub_10244a10(uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t *extraout_EDX;
  
  uVar1 = sub_1020fe80(param_1);
  *extraout_EDX = uVar1;
  return extraout_EDX;
}


// 0x10244a30  (ghidra: FUN_10244a30)  [gap]
void sub_10244a30(void)

{
  uint uVar1;
  
  uVar1 = sub_10211460();
  sub_10210950(uVar1);
  return;
}


// 0x10244a40  (ghidra: FUN_10244a40)  [gap]
void sub_10244a40(void)

{
  uint uVar1;
  
  uVar1 = sub_102114b0(1);
  sub_10210950(uVar1);
  return;
}


// 0x10244a60  (ghidra: FUN_10244a60)  [gap]
void sub_10244a60(void)

{
  uint uVar1;
  
  uVar1 = sub_102441d0(1);
  sub_10210950(uVar1);
  return;
}


// 0x10244a80  (ghidra: FUN_10244a80)  [gap]
/* WARNING: Removing unreachable block (ram,0x10244aa0) */

uint64_t sub_10244a80(uint param_1,int param_2)

{
  longlong lVar1;
  
  if (((0 < param_2) || (-1 < param_2)) ||
     (lVar1 = sub_102382c0(), lVar1 <= CONCAT44(param_2,param_1))) {
    _wassert(L"x < 0 && x < (std::numeric_limits<number_integer_t>::max)()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x4999);
  }
  return CONCAT44(-(param_2 + (uint)(param_1 != 0)),-param_1);
}


// 0x10244ad0  (ghidra: FUN_10244ad0)  [gap]
int sub_10244ad0(uint param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int local_c;
  uint local_8;
  
  local_c = 1;
  local_8 = param_2;
  if (param_2 != 0) goto LAB_10244b24;
  if (param_1 < 10) {
    return 1;
  }
  do {
    local_8 = param_2;
    if (param_2 == 0) {
      if (param_1 < 100) {
        return local_c + 1;
      }
      if (param_1 < 1000) {
        return local_c + 2;
      }
      if (param_1 < 10000) {
        return local_c + 3;
      }
    }
LAB_10244b24:
    do {
      lVar1 = (ulonglong)local_8 * 0x3886594b + ((ulonglong)param_1 * 0x3886594b >> 0x20);
      uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
      uVar3 = (int)((ulonglong)param_1 * 0x346dc5d6 >> 0x20) +
              (uint)CARRY4((uint)((ulonglong)param_1 * 0x346dc5d6),(uint)lVar1);
      lVar1 = (ulonglong)local_8 * 0x346dc5d6 +
              (ulonglong)CONCAT14(CARRY4(uVar2,uVar3),uVar2 + uVar3);
      uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
      param_1 = (uint)lVar1 >> 0xb | uVar2 * 0x200000;
      local_c = local_c + 4;
      param_2 = uVar2 >> 0xb;
      local_8 = param_2;
    } while (param_2 != 0);
    if (param_1 < 10) {
      return local_c;
    }
  } while( true );
}


// 0x10244bd0  (ghidra: FUN_10244bd0)  [gap]
void * __thiscall sub_10244bd0(void *this,int param_1)

{
  void *this_00;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305e1d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_1023f170(this);
  local_8 = 0;
  sub_10245650(this_00,param_1);
  ExceptionList = local_10;
  return this;
}


// 0x10244c30  [gap]
uint8_t * thunk_FUN_102495b0(void)

{
  return &DAT_104e0a74;
}


// 0x10244c40  (ghidra: FUN_10244c40)  [gap]
void sub_stl_10244c40(void)

{
  int iVar1;
  int extraout_EDX;
  
  sub_10245680();
  iVar1 = thunk_FUN_1020fe80(&DAT_104e0a74);
  if (extraout_EDX != *(int *)(iVar1 + 4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("map/set too long");
}


// 0x10244c60  (ghidra: FUN_10244c60)  [gap]
void sub_10244c60(void)

{
  uint uVar1;
  
  uVar1 = sub_102495c0();
  sub_10210950(uVar1);
  return;
}


// 0x10244c70  [gap]
uint8_t * thunk_FUN_102495d0(void)

{
  return &DAT_104e0abc;
}


// 0x10244c80  (ghidra: FUN_10244c80)  [gap]
void sub_stl_10244c80(void)

{
  int iVar1;
  int extraout_EDX;
  
  sub_10245680();
  iVar1 = thunk_FUN_1020fe80(&DAT_104e0abc);
  if (extraout_EDX != *(int *)(iVar1 + 4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("map/set too long");
}


// 0x10244ca0  (ghidra: FUN_10244ca0)  [gap]
uint __thiscall sub_10244ca0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = sub_102410b0(this);
  uVar2 = sub_102410c0();
  if (uVar1 <= uVar2 - (uVar1 >> 1)) {
    uVar2 = (uVar1 >> 1) + uVar1;
    if (uVar2 < param_1) {
      uVar2 = param_1;
    }
  }
  return uVar2;
}


// 0x10244cd0  (ghidra: FUN_10244cd0)  [gap]
void __thiscall sub_10244cd0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = thunk_FUN_1020fe80(this);
  sub_10244500(param_1,param_2,param_3,uVar1);
  return;
}


// 0x10244cf0  (ghidra: FUN_10244cf0)  [gap]
void __thiscall sub_10244cf0(void *this,int param_1,int param_2,int param_3)

{
  if (*(int *)this != 0) {
    sub_10241180(*(int *)this,*(int *)((int)this + 4));
    sub_10244e20(*(void **)this,(*(int *)((int)this + 8) - *(int *)this) / 0x28);
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_1 + param_2 * 0x28;
  *(int *)((int)this + 8) = param_1 + param_3 * 0x28;
  return;
}


// 0x10244d50  (ghidra: FUN_10244d50)  [gap]
uint __thiscall sub_10244d50(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = sub_10245750(this);
  uVar2 = sub_10244dc0();
  if (uVar1 <= uVar2 - (uVar1 >> 1)) {
    uVar2 = (uVar1 >> 1) + uVar1;
    if (uVar2 < param_1) {
      uVar2 = param_1;
    }
  }
  return uVar2;
}


// 0x10244d80  (ghidra: FUN_10244d80)  [gap]
void __thiscall sub_10244d80(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  sub_10245730(this,param_1,param_2,param_3);
  return;
}


// 0x10244da0  (ghidra: FUN_10244da0)  [gap]
void __thiscall sub_10244da0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = thunk_FUN_1020fe80(this);
  sub_102495e0(param_1,param_2,param_3,uVar1);
  return;
}


// 0x10244dc0  (ghidra: FUN_10244dc0)  [gap]
uint sub_10244dc0(void)

{
  uint *puVar1;
  uint local_c;
  uint local_8;
  
  local_8 = sub_10245770();
  local_c = sub_1020f1c0();
  puVar1 = sub_10210430(&local_c,&local_8);
  return *puVar1;
}


// 0x10244df0  [gap]
void __fastcall thunk_FUN_102456e0(int *param_1)

{
  if (*param_1 != 0) {
    sub_10241180(*param_1,param_1[1]);
    sub_10244e20((void *)*param_1,(param_1[2] - *param_1) / 0x28);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// 0x10244e00  (ghidra: FUN_10244e00)  [gap]
void sub_10244e00(uint param_1)

{
  uint uVar1;
  
  uVar1 = sub_10249690(param_1);
  sub_10210950(uVar1);
  return;
}


// 0x10244e20  (ghidra: FUN_10244e20)  [gap]
void sub_10244e20(void *param_1,int param_2)

{
  sub_10210850(param_1,param_2 * 0x28);
  return;
}


// 0x10244e40  (ghidra: FUN_10244e40)  [gap]
int __fastcall sub_10244e40(uint8_t *param_1)

{
  int iVar1;
  
  switch(*param_1) {
  case 0:
    return 0;
  case 1:
    iVar1 = sub_10240d00(*(int **)(param_1 + 8));
    return iVar1;
  case 2:
    iVar1 = sub_10240ba0(*(int **)(param_1 + 8));
    return iVar1;
  default:
    return 1;
  }
}


// 0x10244e90  (ghidra: FUN_10244e90)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall sub_10244e90(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  uint32_t *puVar3;
  uint8_t *extraout_ECX;
  int *extraout_ECX_00;
  uint64_t uVar4;
  uint8_t local_54 [24];
  uint8_t local_3c [28];
  uint8_t local_20 [4];
  char *local_1c;
  uint local_18;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305e4d;
  local_10 = ExceptionList;
  local_18 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar1 = sub_1023fc60(this);
  if (bVar1) {
    sub_102401f0(&local_1c);
    sub_1023f9e0(*(void **)((int)this + 8),extraout_ECX_00,param_1);
    uVar4 = sub_10218c90(*(void **)((int)this + 8),local_20);
    bVar1 = sub_1023d8f0(&local_1c,(int *)uVar4);
    if (!bVar1) {
      _wassert(L"it != m_value.object->end()",
               L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
               ,0x5341);
    }
    iVar2 = sub_1020faf0(&local_1c);
    ExceptionList = local_10;
    return iVar2 + 0x18;
  }
  local_1c = sub_1023fbf0(extraout_ECX);
  puVar3 = sub_json_10242400(local_54,&local_1c);
  local_8 = 0;
  sub_10242490(local_3c,0x131,puVar3);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_3c,(ThrowInfo *)&DAT_10393ba4);
}


// 0x10244f70  (ghidra: FUN_10244f70)  [gap]
void __thiscall sub_10244f70(void *this,char *param_1)

{
  bool bVar1;
  uint32_t *puVar2;
  uint8_t *extraout_ECX;
  uint8_t local_48 [28];
  uint8_t local_2c [28];
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030588d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar1 = sub_10240d40(this);
  if (bVar1) {
    sub_102456b0(*(void **)(extraout_ECX + 8),(int)param_1);
    ExceptionList = local_10;
    return;
  }
  param_1 = sub_1023fbf0(extraout_ECX);
  puVar2 = sub_json_102496b0(local_2c,&param_1);
  local_8 = 0;
  sub_10242490(local_48,0x131,puVar2);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_10393ba4);
}


// 0x10245000  (ghidra: FUN_10245000)  [gap]
void __thiscall sub_10245000(void *this,char *param_1)

{
  char *pcVar1;
  bool bVar2;
  uint32_t uVar3;
  char *pcVar4;
  uint32_t *puVar5;
  uint8_t *extraout_ECX;
  void *this_00;
  void *this_01;
  uint8_t local_44 [28];
  uint8_t local_28 [24];
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305e8d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar2 = sub_1023fc70(this);
  if (bVar2) {
    *(uint8_t *)this = 2;
    uVar3 = sub_10243dc0();
    *(uint32_t *)((int)this + 8) = uVar3;
    sub_1023fcc0(this);
  }
  bVar2 = sub_10240d40(this);
  if (bVar2) {
    pcVar4 = (char *)sub_10240ba0(*(int **)((int)this + 8));
    pcVar1 = param_1;
    this_01 = this_00;
    if (pcVar4 <= param_1) {
      sub_102456c0(this_00,(uint)(param_1 + 1));
      sub_1023fcc0(this);
      this_01 = *(void **)((int)this + 8);
    }
    sub_102456b0(this_01,(int)pcVar1);
    ExceptionList = local_10;
    return;
  }
  param_1 = sub_1023fbf0(extraout_ECX);
  puVar5 = sub_json_102496b0(local_28,&param_1);
  local_8 = 0;
  sub_10242490(local_44,0x131,puVar5);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_44,(ThrowInfo *)&DAT_10393ba4);
}


// 0x102450d0  (ghidra: FUN_102450d0)  [gap]
uint8_t __fastcall sub_102450d0(uint8_t *param_1)

{
  return *param_1;
}


// 0x102450e0  (ghidra: FUN_102450e0)  [gap]
uint32_t __thiscall sub_102450e0(void *this,int param_1)

{
  uint32_t extraout_ECX;
  
  sub_10245790(this,param_1);
  return extraout_ECX;
}


// 0x10245100  (ghidra: FUN_10245100)  [gap]
uint32_t __fastcall sub_10245100(int *param_1)

{
  uint32_t extraout_ECX;
  
  sub_102457a0(param_1);
  return extraout_ECX;
}


// 0x10245110  (ghidra: FUN_10245110)  [gap]
int __thiscall sub_10245110(void *this,int param_1)

{
  return (int)(void *)((int)this + param_1 * 2);
}


// 0x10245120  (ghidra: FUN_10245120)  [gap]
uint64_t __thiscall sub_10245120(void *this,void *param_1)

{
  uint32_t extraout_ECX;
  uint64_t uVar1;
  
  uVar1 = sub_10218cd0(param_1,this);
  return CONCAT44((int)((ulonglong)uVar1 >> 0x20),extraout_ECX);
}


// 0x10245140  (ghidra: FUN_10245140)  [gap]
void __fastcall sub_10245140(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  LOCK();
  piVar1 = (int *)(*(int *)(param_1 + 4) + 4);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return;
}


// 0x10245150  (ghidra: FUN_10245150)  [gap]
uint32_t * __thiscall
sub_10245150(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  *(uint32_t *)this = param_1;
  *(uint32_t *)((int)this + 4) = param_2;
  *(uint32_t *)((int)this + 8) = param_3;
  return this;
}


// 0x10245170  (ghidra: FUN_10245170)  [gap]
void sub_10245170(void)

{
  uint uVar1;
  
  uVar1 = sub_10211440(1);
  sub_10210950(uVar1);
  return;
}


// 0x10245190  (ghidra: FUN_10245190)  [gap]
uint32_t __thiscall sub_10245190(void *this,void *param_1)

{
  int iVar1;
  uint32_t extraout_ECX;
  int extraout_EDX;
  uint64_t uVar2;
  
  uVar2 = sub_1020fe30((int)this);
  iVar1 = sub_1020fe80((int)uVar2);
  sub_10212570(param_1,iVar1 + *(int *)(extraout_EDX + 0x10));
  return extraout_ECX;
}


// 0x102451c0  (ghidra: FUN_102451c0)  [gap]
uint64_t __thiscall sub_102451c0(void *this,void *param_1)

{
  uint32_t uVar1;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  uint64_t uVar2;
  
  uVar2 = sub_1020fe30((int)this);
  uVar1 = sub_1020fe80((int)uVar2);
  sub_10212570(param_1,uVar1);
  return CONCAT44(extraout_EDX,extraout_ECX);
}


// 0x102451e0  (ghidra: FUN_102451e0)  [gap]
uint32_t * __thiscall sub_102451e0(void *this,byte param_1)

{
  sub_102446c0(this);
  if ((param_1 & 1) != 0) {
    FUN_1030207a(this);
  }
  return this;
}


// 0x10245210  [gap]
void __fastcall thunk_FUN_10245380(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    sub_10245b10(*(void **)(param_1 + 4));
  }
  return;
}


// 0x10245220  (ghidra: FUN_10245220)  [gap]
void __fastcall sub_10245220(int param_1)

{
  sub_1023dd40((char *)(param_1 + 0x68));
  thunk_FUN_1023f130((void *)(param_1 + 0x38));
  thunk_FUN_1020fb40((uint32_t *)(param_1 + 0x20));
  thunk_FUN_1020fb40((uint32_t *)(param_1 + 0x10));
  thunk_FUN_1020fb40((uint32_t *)(param_1 + 4));
  return;
}


// 0x10245250  (ghidra: FUN_10245250)  [gap]
void __fastcall sub_10245250(void *param_1)

{
  memset(param_1,0,0x78);
  return;
}


// 0x10245260  (ghidra: FUN_10245260)  [gap]
void __fastcall sub_10245260(uint32_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(uint64_t *)(param_1 + 4) = 0;
  return;
}


// 0x10245270  (ghidra: FUN_10245270)  [gap]
uint8_t __fastcall sub_10245270(int param_1)

{
  return *(uint8_t *)(param_1 + 0x14);
}


// 0x10245280  (ghidra: FUN_10245280)  [gap]
int __thiscall sub_10245280(void *this,uint32_t param_1,uint8_t param_2)

{
  int iVar1;
  uint64_t uVar2;
  
  *(uint32_t *)this = param_1;
  uVar2 = sub_1020f7c0((uint32_t *)((int)this + 4));
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  *(uint8_t *)(iVar1 + 0x15) = param_2;
  *(uint32_t *)(iVar1 + 0x10) = 0;
  *(uint8_t *)(iVar1 + 0x14) = 0;
  return iVar1;
}


// 0x102452b0  (ghidra: FUN_102452b0)  [gap]
uint8_t __fastcall sub_102452b0(int param_1)

{
  return *(uint8_t *)(param_1 + 0x34);
}


// 0x102452c0  (ghidra: FUN_102452c0)  [gap]
uint32_t * __thiscall sub_102452c0(void *this,uint32_t param_1)

{
  uint8_t in_stack_00000030;
  uint8_t local_11;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */
  
  puStack_c = &LAB_10305ef4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(uint32_t *)this = param_1;
  sub_1020f7c0((uint32_t *)((int)this + 4));
  sub_10245b80((uint32_t *)((int)this + 0x10));
  sub_10245b80((uint32_t *)((int)this + 0x20));
  local_8._0_1_ = 3;
  *(uint32_t *)((int)this + 0x30) = 0;
  *(uint8_t *)((int)this + 0x34) = 0;
  sub_10244bd0((void *)((int)this + 0x38),(int)&stack0x00000008);
  local_8._0_1_ = 4;
  *(uint8_t *)((int)this + 0x60) = in_stack_00000030;
  sub_1023fc80((void *)((int)this + 0x68),'\t');
  local_8 = CONCAT31(local_8._1_3_,5);
  local_11 = 1;
  sub_10245b40((void *)((int)this + 0x10),&local_11);
  thunk_FUN_1023f130(&stack0x00000008);
  ExceptionList = local_10;
  return this;
}


// 0x10245380  (ghidra: FUN_10245380)  [gap]
void __fastcall sub_10245380(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    sub_10245b10(*(void **)(param_1 + 4));
  }
  return;
}


// 0x10245390  (ghidra: FUN_10245390)  [gap]
void * __thiscall sub_json_10245390(void *this,void *param_1,int param_2,char *param_3)

{
  bool bVar1;
  uint32_t *puVar2;
  uint32_t extraout_ECX;
  uint32_t extraout_ECX_00;
  uint32_t extraout_EDX;
  uint32_t local_48 [6];
  uint32_t local_30 [6];
  uint32_t local_18;
  uint32_t local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10305f66;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = 0;
  sub_1020f990(param_1,"syntax error ");
  local_8 = 0;
  local_14 = 1;
  bVar1 = sub_1023e070((int)param_3);
  if (!bVar1) {
    param_3 = (char *)CONCAT13(0x20,param_3._0_3_);
    puVar2 = sub_102472b0(local_30,extraout_ECX,(int)&param_3 + 3);
    local_8 = 1;
    sub_1023e1b0(param_1,(int)puVar2);
    local_8 = local_8 & 0xffffff00;
    thunk_FUN_1020fc60(local_30);
  }
  client_DrawHoverItem_102250d0(param_1,"- ");
  if (*(int *)((int)this + 0x28) == 0xe) {
    param_3 = (char *)CONCAT13(0x27,param_3._0_3_);
    sub_10245520((void *)((int)this + 0x30),local_48);
    local_8 = 2;
    local_18 = sub_10245a40((int)this + 0x30);
    puVar2 = sub_10249740(local_30,&local_18,extraout_ECX_00,extraout_EDX,(int)&param_3 + 3);
    local_8 = CONCAT31(local_8._1_3_,3);
    sub_1023e1b0(param_1,(int)puVar2);
    thunk_FUN_1020fc60(local_30);
  }
  else {
    param_3 = sub_10245a50(*(int *)((int)this + 0x28));
    puVar2 = sub_102497f0(local_48,"unexpected ",&param_3);
    local_8 = 4;
    sub_1023e1b0(param_1,(int)puVar2);
  }
  local_8 = local_8 & 0xffffff00;
  thunk_FUN_1020fc60(local_48);
  if (param_2 != 0) {
    param_3 = sub_10245a50(param_2);
    puVar2 = sub_102497f0(local_48,"; expected ",&param_3);
    local_8 = 5;
    sub_1023e1b0(param_1,(int)puVar2);
    thunk_FUN_1020fc60(local_48);
  }
  ExceptionList = local_10;
  return param_1;
}


// 0x10245510  (ghidra: FUN_10245510)  [gap]
void __fastcall sub_10245510(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = sub_102457c0((int *)(param_1 + 0x30));
  *(uint32_t *)(param_1 + 0x28) = uVar1;
  return;
}


// 0x10245520  (ghidra: FUN_10245520)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t * __thiscall sub_10245520(void *this,uint32_t *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  uint32_t uVar4;
  uint32_t *extraout_ECX;
  byte *extraout_EDX;
  char *pcVar5;
  uint32_t local_28;
  uint64_t local_20;
  uint8_t local_18;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305fae;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  sub_10237930(param_1);
  local_8 = 0;
  pbVar1 = (byte *)sub_1020fae0((int)this + 0x20);
  pbVar2 = (byte *)sub_1020faf0(extraout_ECX);
  if (pbVar2 != extraout_EDX) {
    do {
      local_28 = CONCAT31(local_28._1_3_,*pbVar2);
      if (*pbVar2 < 0x20) {
        local_18 = 0;
        local_20 = 0;
        pcVar3 = (char *)sub_1020fe80(&local_20);
        pcVar5 = "<U+%.4X>";
        uVar4 = sub_10245b30();
        sub_10229570(pcVar3,uVar4,pcVar5);
        client_DrawHoverItem_102250d0(param_1,pcVar3);
      }
      else {
        sub_1023fff0(param_1,local_28);
      }
      pbVar2 = pbVar2 + 1;
    } while (pbVar2 != pbVar1);
  }
  ExceptionList = local_10;
  return param_1;
}


// 0x10245600  (ghidra: FUN_10245600)  [gap]
void __thiscall sub_10245600(void *this,uint64_t *param_1)

{
  uint32_t uVar1;
  
  uVar1 = *(uint32_t *)((int)this + 0x1c);
  *param_1 = *(uint64_t *)((int)this + 0x14);
  *(uint32_t *)(param_1 + 1) = uVar1;
  return;
}


// 0x10245620  (ghidra: FUN_10245620)  [gap]
void sub_10245620(uint32_t *param_1)

{
  if (param_1 != (uint32_t *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10245634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)();
    return;
  }
  return;
}


// 0x10245640  (ghidra: FUN_10245640)  [gap]
bool __fastcall sub_10245640(int param_1)

{
  bool bVar1;
  
  bVar1 = sub_10240880(param_1);
  return !bVar1;
}


// 0x10245650  (ghidra: FUN_10245650)  [gap]
void __thiscall sub_10245650(void *this,int param_1)

{
  bool bVar1;
  uint32_t *puVar2;
  uint32_t uVar3;
  int extraout_ECX;
  
  bVar1 = sub_10240880(param_1);
  if (!bVar1) {
    puVar2 = (uint32_t *)sub_10240860(extraout_ECX);
    uVar3 = (**(code **)*puVar2)(this);
    sub_10240850(this,uVar3);
  }
  return;
}


// 0x10245680  (ghidra: FUN_10245680)  [gap]
uint sub_10245680(void)

{
  uint *puVar1;
  uint local_c;
  uint local_8;
  
  local_8 = sub_10245b00();
  local_c = sub_1020f1c0();
  puVar1 = sub_10210430(&local_c,&local_8);
  return *puVar1;
}


// 0x102456b0  (ghidra: FUN_102456b0)  [gap]
int __thiscall sub_102456b0(void *this,int param_1)

{
  return param_1 * 0x10 + *(int *)this;
}


// 0x102456c0  (ghidra: FUN_102456c0)  [gap]
void __thiscall sub_102456c0(void *this,uint param_1)

{
  sub_10249880(this,param_1);
  return;
}


// 0x102456e0  (ghidra: FUN_102456e0)  [gap]
void __fastcall sub_102456e0(int *param_1)

{
  if (*param_1 != 0) {
    sub_10241180(*param_1,param_1[1]);
    sub_10244e20((void *)*param_1,(param_1[2] - *param_1) / 0x28);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// 0x10245730  (ghidra: FUN_10245730)  [gap]
void __thiscall sub_10245730(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = thunk_FUN_1020fe80(this);
  sub_102498f0(param_1,param_2,param_3,uVar1);
  return;
}


// 0x10245750  (ghidra: FUN_10245750)  [gap]
int __fastcall sub_10245750(int *param_1)

{
  return (param_1[2] - *param_1) / 0x28;
}


// 0x10245770  (ghidra: FUN_10245770)  [gap]
uint32_t sub_10245770(void)

{
  return 0x6666666;
}


// 0x10245780  (ghidra: FUN_10245780)  [gap]
bool __fastcall sub_10245780(char *param_1)

{
  return *param_1 == '\t';
}


// 0x10245790  (ghidra: FUN_10245790)  [gap]
int * __thiscall sub_10245790(void *this,int param_1)

{
  *(int *)this = *(int *)this + param_1;
  return this;
}


// 0x102457a0  (ghidra: FUN_102457a0)  [gap]
int * __fastcall sub_102457a0(int *param_1)

{
  *param_1 = *param_1 + -1;
  return param_1;
}


// 0x102457b0  [gap]
void __fastcall thunk_FUN_1020fb40(uint32_t *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    sub_1020ff20(pvVar1,param_1[2] - (int)pvVar1 >> 2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// 0x102457c0  (ghidra: FUN_102457c0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_102457c0(int *param_1)

{
  char cVar1;
  uint32_t uVar2;
  uint uVar3;
  char *pcVar4;
  uint32_t local_10;
  uint8_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if ((param_1[5] == 0) && (uVar2 = sub_10245bf0(param_1), (char)uVar2 == '\0')) {
    param_1[0x11] = (int)"invalid BOM; must be 0xEF 0xBB 0xBF if given";
    return 0xe;
  }
  sub_10245bc0(param_1);
  cVar1 = (char)param_1[2];
  while ((cVar1 != '\0' && (param_1[3] == 0x2f))) {
    uVar2 = sub_102461c0(param_1);
    if ((char)uVar2 == '\0') {
      return 0xe;
    }
    sub_10245bc0(param_1);
    cVar1 = (char)param_1[2];
  }
  switch(param_1[3]) {
  default:
    param_1[0x11] = (int)"invalid literal";
    return 0xe;
  case 0x22:
    uVar2 = sub_json_10246260(param_1);
    return uVar2;
  case 0x2c:
    return 0xd;
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    uVar2 = sub_10245cb0(param_1);
    return uVar2;
  case 0x3a:
    return 0xc;
  case 0x5b:
    return 8;
  case 0x5d:
    return 10;
  case 0x66:
    uVar2 = 2;
    local_10 = 0x736c6166;
    local_c = 0x65;
    uVar3 = sub_10245ba0();
    pcVar4 = (char *)sub_1020fe80(&local_10);
    uVar2 = sub_10245c30(param_1,pcVar4,uVar3,uVar2);
    return uVar2;
  case 0x6e:
    local_10 = 0x6c6c756e;
    uVar2 = 3;
    break;
  case 0x74:
    local_10 = 0x65757274;
    uVar2 = 1;
    break;
  case 0x7b:
    return 9;
  case 0x7d:
    return 0xb;
  case -1:
  case 0:
    return 0xf;
  }
  uVar3 = sub_10245bb0();
  pcVar4 = (char *)sub_1020fe80(&local_10);
  uVar2 = sub_10245c30(param_1,pcVar4,uVar3,uVar2);
  return uVar2;
}


// 0x10245a40  (ghidra: FUN_10245a40)  [gap]
uint32_t __fastcall sub_10245a40(int param_1)

{
  return *(uint32_t *)(param_1 + 0x44);
}


// 0x10245a50  (ghidra: FUN_10245a50)  [gap]
char * __fastcall sub_10245a50(uint32_t param_1)

{
  switch(param_1) {
  case 0:
    return "<uninitialized>";
  case 1:
    return "true literal";
  case 2:
    return "false literal";
  case 3:
    return "null literal";
  case 4:
    return "string literal";
  case 5:
  case 6:
  case 7:
    return "number literal";
  case 8:
    return "\'[\'";
  case 9:
    return "\'{\'";
  case 10:
    return "\']\'";
  case 0xb:
    return "\'}\'";
  case 0xc:
    return "\':\'";
  case 0xd:
    return "\',\'";
  case 0xe:
    return "<parse error>";
  case 0xf:
    return "end of input";
  case 0x10:
    return "\'[\', \'{\', or a literal";
  default:
    return "unknown token";
  }
}


// 0x10245b00  (ghidra: FUN_10245b00)  [gap]
uint32_t sub_10245b00(void)

{
  return 0x5d1745d;
}


// 0x10245b10  (ghidra: FUN_10245b10)  [gap]
void sub_10245b10(void *param_1)

{
  sub_10210850(param_1,0x2c);
  return;
}


// 0x10245b30  (ghidra: FUN_10245b30)  [gap]
uint32_t sub_10245b30(void)

{
  return 9;
}


// 0x10245b40  (ghidra: FUN_10245b40)  [gap]
void __thiscall sub_10245b40(void *this,void *param_1)

{
  uint64_t local_18;
  uint64_t local_10;
  
  sub_10246ad0(this,&local_18);
  sub_10246ab0(this,&local_10,param_1);
  return;
}


// 0x10245b80  (ghidra: FUN_10245b80)  [gap]
uint64_t __fastcall sub_10245b80(uint32_t *param_1)

{
  uint32_t extraout_ECX;
  uint64_t uVar1;
  
  uVar1 = sub_10246b00(param_1);
  return CONCAT44((int)((ulonglong)uVar1 >> 0x20),extraout_ECX);
}


// 0x10245b90  [gap]
void __fastcall thunk_FUN_1020fb40(uint32_t *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    sub_1020ff20(pvVar1,param_1[2] - (int)pvVar1 >> 2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// 0x10245ba0  (ghidra: FUN_10245ba0)  [gap]
uint32_t sub_10245ba0(void)

{
  return 5;
}


// 0x10245bb0  (ghidra: FUN_10245bb0)  [gap]
uint32_t sub_10245bb0(void)

{
  return 4;
}


// 0x10245bc0  (ghidra: FUN_10245bc0)  [gap]
void __fastcall sub_10245bc0(int *param_1)

{
  int iVar1;
  
  do {
    do {
      sub_10246bb0(param_1);
      iVar1 = param_1[3];
    } while (iVar1 == 0x20);
  } while (((iVar1 == 9) || (iVar1 == 10)) || (iVar1 == 0xd));
  return;
}


// 0x10245bf0  (ghidra: FUN_10245bf0)  [gap]
uint __fastcall sub_10245bf0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = sub_10246bb0(param_1);
  if (iVar1 == 0xef) {
    uVar2 = sub_10246bb0(param_1);
    if (uVar2 == 0xbb) {
      uVar2 = sub_10246bb0(param_1);
      if (uVar2 == 0xbf) goto LAB_10245c24;
    }
    return uVar2 & 0xffffff00;
  }
  uVar2 = sub_10246b50((int)param_1);
LAB_10245c24:
  return CONCAT31((int3)(uVar2 >> 8),1);
}


// 0x10245c30  (ghidra: FUN_10245c30)  [gap]
uint32_t __thiscall sub_10245c30(void *this,char *param_1,uint param_2,uint32_t param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  cVar2 = sub_10237ac0((uint8_t *)((int)this + 0xc));
  if (cVar2 != *param_1) {
    _wassert(L"std::char_traits<char_type>::to_char_type(current) == literal_text[0]",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x219c);
  }
  uVar1 = param_2;
  uVar3 = 1;
  if (1 < param_2) {
    do {
      param_2 = sub_10246bb0(this);
      cVar2 = sub_10237ac0((uint8_t *)&param_2);
      if (cVar2 != param_1[uVar3]) {
        *(char **)((int)this + 0x44) = "invalid literal";
        return 0xe;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return param_3;
}


// 0x10245cb0  (ghidra: FUN_10245cb0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Switch with 1 destination removed at 0x10245fc7 : 10 cases all go to same destination */

uint32_t __fastcall sub_10245cb0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int extraout_EDX;
  int iVar4;
  code *pcVar5;
  uint64_t uVar6;
  char **ppcVar7;
  uint32_t uVar8;
  uint8_t auStack_1c [4];
  uint64_t uStack_18;
  char *local_10;
  uint local_c;
  
  local_c = DAT_1039800c ^ (uint)auStack_1c;
  sub_10246c20((int)param_1);
  pcVar5 = _wassert_exref;
  iVar1 = param_1[3];
  iVar4 = 5;
  switch(iVar1) {
  case 0x2d:
    sub_10246b40(param_1,iVar1);
    break;
  default:
    _wassert(L"false",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x2076);
    break;
  case 0x30:
    goto switchD_10245ceb_caseD_30;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    goto switchD_10245ceb_caseD_31;
  }
  iVar4 = 6;
  iVar1 = sub_10246bb0(param_1);
  switch(iVar1) {
  case 0x30:
    iVar1 = param_1[3];
switchD_10245ceb_caseD_30:
    sub_10246b40(param_1,iVar1);
    iVar1 = sub_10246bb0(param_1);
    if (iVar1 == 0x2e) {
switchD_10245da8_caseD_2e:
      sub_10246b40(param_1,param_1[0x18]);
      iVar1 = sub_10246bb0(param_1);
      switch(iVar1) {
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        goto switchD_10245e9b_caseD_30;
      default:
        param_1[0x11] = (int)"invalid number; expected digit after \'.\'";
        return 0xe;
      }
    }
    if ((iVar1 == 0x45) || (iVar1 == 0x65)) {
switchD_10245da8_caseD_45:
      sub_10246b40(param_1,param_1[3]);
      iVar1 = sub_10246bb0(param_1);
      switch(iVar1) {
      case 0x2b:
      case 0x2d:
        sub_10246b40(param_1,param_1[3]);
        iVar1 = sub_10246bb0(param_1);
        switch(iVar1) {
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
          goto switchD_10245d80_caseD_30;
        default:
          param_1[0x11] = (int)"invalid number; expected digit after exponent sign";
          return 0xe;
        }
      default:
        param_1[0x11] = (int)"invalid number; expected \'+\', \'-\', or digit after exponent";
        return 0xe;
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
switchD_10245d80_caseD_30:
        sub_10246b40(param_1,param_1[3]);
        iVar1 = sub_10246bb0(param_1);
        while (iVar1 - 0x30U < 10) {
                    /* WARNING: This code block may not be properly labeled as switch case */
          sub_10246b40(param_1,param_1[3]);
          iVar1 = sub_10246bb0(param_1);
        }
      }
      goto switchD_10245ec7_caseD_3a;
    }
    break;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    iVar1 = param_1[3];
switchD_10245ceb_caseD_31:
    sub_10246b40(param_1,iVar1);
    iVar1 = sub_10246bb0(param_1);
    uVar2 = iVar1 - 0x2e;
    if (uVar2 < 0x38) {
LAB_10245da1:
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((&switchD_10245da8::switchdataD_1024610c)[uVar2]) {
      case 0x2e:
        goto switchD_10245da8_caseD_2e;
      default:
        break;
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        goto switchD_10245da8_caseD_30;
      case 0x45:
      case 0x65:
        goto switchD_10245da8_caseD_45;
      }
    }
    break;
  default:
    param_1[0x11] = (int)"invalid number; expected digit after \'-\'";
    return 0xe;
  }
switchD_10245da8_caseD_2f:
  sub_10246b50((int)param_1);
  local_10 = (char *)0x0;
  piVar3 = _errno();
  *piVar3 = 0;
  if (iVar4 == 5) {
    uVar8 = 10;
    ppcVar7 = &local_10;
    uVar6 = thunk_FUN_1020fe30((int)(param_1 + 0xb));
    uStack_18 = strtoull((int)uVar6,ppcVar7,uVar8);
    uVar6 = thunk_FUN_1020fe30((int)(param_1 + 0xb));
    iVar1 = client_DrawHoverItem_10224f20((int)(param_1 + 0xb));
    pcVar5 = _wassert_exref;
    if (local_10 != (char *)((int)uVar6 + iVar1)) {
      _wassert(L"endptr == token_buffer.data() + token_buffer.size()",
               L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
               ,0x216d);
    }
    piVar3 = _errno();
    if (*piVar3 == 0) {
      *(uint64_t *)(param_1 + 0x14) = uStack_18;
      return 5;
    }
  }
  else if (iVar4 == 6) {
    uVar8 = 10;
    ppcVar7 = &local_10;
    uVar6 = thunk_FUN_1020fe30((int)(param_1 + 0xb));
    uVar6 = strtoll((int)uVar6,ppcVar7,uVar8);
    uStack_18._0_4_ = (int)((ulonglong)uVar6 >> 0x20);
    uStack_18._4_4_ = (int)uVar6;
    uVar6 = thunk_FUN_1020fe30((int)(param_1 + 0xb));
    iVar1 = client_DrawHoverItem_10224f20((int)(param_1 + 0xb));
    pcVar5 = _wassert_exref;
    if (local_10 != (char *)((int)uVar6 + iVar1)) {
      _wassert(L"endptr == token_buffer.data() + token_buffer.size()",
               L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
               ,0x217d);
    }
    piVar3 = _errno();
    if (*piVar3 == 0) {
      param_1[0x12] = uStack_18._4_4_;
      param_1[0x13] = (int)uStack_18;
      return 6;
    }
  }
  goto LAB_10245f02;
switchD_10245da8_caseD_30:
  sub_10246b40(param_1,param_1[3]);
  iVar1 = sub_10246bb0(param_1);
  uVar2 = iVar1 - 0x2e;
  if (0x37 < uVar2) goto switchD_10245da8_caseD_2f;
  goto LAB_10245da1;
switchD_10245ec7_caseD_30:
  sub_10246b40(param_1,param_1[3]);
  iVar1 = sub_10246bb0(param_1);
  uVar2 = iVar1 - 0x30;
  if (0x35 < uVar2) goto switchD_10245ec7_caseD_3a;
  goto LAB_10245ec0;
switchD_10245e9b_caseD_30:
  sub_10246b40(param_1,param_1[3]);
  iVar1 = sub_10246bb0(param_1);
  uVar2 = iVar1 - 0x30;
  if (uVar2 < 0x36) {
LAB_10245ec0:
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((&switchD_10245ec7::switchdataD_10246160)[uVar2]) {
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      goto switchD_10245ec7_caseD_30;
    default:
      break;
    case 0x45:
    case 0x65:
      goto switchD_10245da8_caseD_45;
    }
  }
switchD_10245ec7_caseD_3a:
  sub_10246b50((int)param_1);
  local_10 = (char *)0x0;
  piVar3 = _errno();
  *piVar3 = 0;
LAB_10245f02:
  ppcVar7 = &local_10;
  uVar6 = thunk_FUN_1020fe30((int)(param_1 + 0xb));
  sub_10246c90((double *)(param_1 + 0x16),(char *)uVar6,ppcVar7);
  thunk_FUN_1020fe30((int)(param_1 + 0xb));
  iVar1 = client_DrawHoverItem_10224f20((int)(param_1 + 0xb));
  if (local_10 != (char *)(extraout_EDX + iVar1)) {
    (*pcVar5)(L"endptr == token_buffer.data() + token_buffer.size()",
              L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
              ,0x218e);
  }
  return 7;
}


// 0x102461c0  (ghidra: FUN_102461c0)  [gap]
uint __fastcall sub_102461c0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = sub_10246bb0(param_1);
  if (uVar1 != 0x2a) {
    if (uVar1 != 0x2f) {
      param_1[0x11] = (int)"invalid comment; expecting \'/\' or \'*\' after \'/\'";
      return uVar1 & 0xffffff00;
    }
switchD_102461f4_caseD_1:
    iVar2 = sub_10246bb0(param_1);
    iVar3 = 0;
    switch(iVar2) {
    default:
      goto switchD_102461f4_caseD_1;
    case -1:
    case 0:
    case 10:
    case 0xd:
      goto switchD_102461f4_caseD_ffffffff;
    }
  }
  uVar1 = sub_10246bb0(param_1);
  do {
    uVar4 = uVar1;
    if ((uVar1 == 0xffffffff) || (uVar4 = 0, uVar1 == 0)) {
      param_1[0x11] = (int)"invalid comment; missing closing \'*/\'";
      return uVar4 & 0xffffff00;
    }
    if (uVar1 == 0x2a) {
      iVar3 = sub_10246bb0(param_1);
      if (iVar3 == 0x2f) {
switchD_102461f4_caseD_ffffffff:
        return CONCAT31((int3)((uint)iVar3 >> 8),1);
      }
      sub_10246b50((int)param_1);
    }
    uVar1 = sub_10246bb0(param_1);
  } while( true );
}


// 0x10246260  (ghidra: FUN_10246260)  [gap]
uint32_t __fastcall sub_json_10246260(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint32_t *puVar3;
  uint32_t uVar4;
  uint32_t *this;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  uint32_t *puVar8;
  uint32_t local_60;
  uint32_t local_5c;
  uint32_t local_58 [2];
  uint32_t local_50 [2];
  uint32_t local_48 [2];
  uint32_t local_40 [2];
  uint32_t local_38 [2];
  uint32_t local_30 [2];
  uint32_t local_28 [2];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint32_t local_8;
  
  sub_10246c20((int)param_1);
  pcVar6 = _wassert_exref;
  if (param_1[3] != 0x22) {
    _wassert(L"current == \'\\\"\'",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1d89);
  }
  iVar1 = sub_10246bb0(param_1);
  while (iVar1 + 1U < 0xf6) {
    switch(iVar1 + 1U) {
    case 0:
      param_1[0x11] =
           (int)"invalid string: control character U+0000 (NUL) must be escaped to \\u0000";
      return 0xe;
    case 1:
      param_1[0x11] =
           (int)"invalid string: control character U+0001 (SOH) must be escaped to \\u0001";
      return 0xe;
    case 2:
      param_1[0x11] =
           (int)"invalid string: control character U+0002 (STX) must be escaped to \\u0002";
      return 0xe;
    case 3:
      param_1[0x11] =
           (int)"invalid string: control character U+0003 (ETX) must be escaped to \\u0003";
      return 0xe;
    case 4:
      param_1[0x11] =
           (int)"invalid string: control character U+0004 (EOT) must be escaped to \\u0004";
      return 0xe;
    case 5:
      param_1[0x11] =
           (int)"invalid string: control character U+0005 (ENQ) must be escaped to \\u0005";
      return 0xe;
    case 6:
      param_1[0x11] =
           (int)"invalid string: control character U+0006 (ACK) must be escaped to \\u0006";
      return 0xe;
    case 7:
      param_1[0x11] =
           (int)"invalid string: control character U+0007 (BEL) must be escaped to \\u0007";
      return 0xe;
    case 8:
      param_1[0x11] =
           (int)"invalid string: control character U+0008 (BS) must be escaped to \\u0008 or \\b";
      return 0xe;
    case 9:
      param_1[0x11] =
           (int)"invalid string: control character U+0009 (HT) must be escaped to \\u0009 or \\t";
      return 0xe;
    case 10:
      param_1[0x11] =
           (int)"invalid string: control character U+000A (LF) must be escaped to \\u000A or \\n";
      return 0xe;
    case 0xb:
      param_1[0x11] =
           (int)"invalid string: control character U+000B (VT) must be escaped to \\u000B";
      return 0xe;
    case 0xc:
      param_1[0x11] =
           (int)"invalid string: control character U+000C (FF) must be escaped to \\u000C or \\f";
      return 0xe;
    case 0xd:
      param_1[0x11] =
           (int)"invalid string: control character U+000D (CR) must be escaped to \\u000D or \\r";
      return 0xe;
    case 0xe:
      param_1[0x11] =
           (int)"invalid string: control character U+000E (SO) must be escaped to \\u000E";
      return 0xe;
    case 0xf:
      param_1[0x11] =
           (int)"invalid string: control character U+000F (SI) must be escaped to \\u000F";
      return 0xe;
    case 0x10:
      param_1[0x11] =
           (int)"invalid string: control character U+0010 (DLE) must be escaped to \\u0010";
      return 0xe;
    case 0x11:
      param_1[0x11] =
           (int)"invalid string: control character U+0011 (DC1) must be escaped to \\u0011";
      return 0xe;
    case 0x12:
      param_1[0x11] =
           (int)"invalid string: control character U+0012 (DC2) must be escaped to \\u0012";
      return 0xe;
    case 0x13:
      param_1[0x11] =
           (int)"invalid string: control character U+0013 (DC3) must be escaped to \\u0013";
      return 0xe;
    case 0x14:
      param_1[0x11] =
           (int)"invalid string: control character U+0014 (DC4) must be escaped to \\u0014";
      return 0xe;
    case 0x15:
      param_1[0x11] =
           (int)"invalid string: control character U+0015 (NAK) must be escaped to \\u0015";
      return 0xe;
    case 0x16:
      param_1[0x11] =
           (int)"invalid string: control character U+0016 (SYN) must be escaped to \\u0016";
      return 0xe;
    case 0x17:
      param_1[0x11] =
           (int)"invalid string: control character U+0017 (ETB) must be escaped to \\u0017";
      return 0xe;
    case 0x18:
      param_1[0x11] =
           (int)"invalid string: control character U+0018 (CAN) must be escaped to \\u0018";
      return 0xe;
    case 0x19:
      param_1[0x11] =
           (int)"invalid string: control character U+0019 (EM) must be escaped to \\u0019";
      return 0xe;
    case 0x1a:
      param_1[0x11] =
           (int)"invalid string: control character U+001A (SUB) must be escaped to \\u001A";
      return 0xe;
    case 0x1b:
      param_1[0x11] =
           (int)"invalid string: control character U+001B (ESC) must be escaped to \\u001B";
      return 0xe;
    case 0x1c:
      param_1[0x11] =
           (int)"invalid string: control character U+001C (FS) must be escaped to \\u001C";
      return 0xe;
    case 0x1d:
      param_1[0x11] =
           (int)"invalid string: control character U+001D (GS) must be escaped to \\u001D";
      return 0xe;
    case 0x1e:
      param_1[0x11] =
           (int)"invalid string: control character U+001E (RS) must be escaped to \\u001E";
      return 0xe;
    case 0x1f:
      param_1[0x11] =
           (int)"invalid string: control character U+001F (US) must be escaped to \\u001F";
      return 0xe;
    default:
      sub_10246b40(param_1,param_1[3]);
      goto LAB_1024658e;
    case 0x22:
      return 4;
    case 0x5c:
      iVar1 = sub_10246bb0(param_1);
      switch(iVar1) {
      case 0x22:
        sub_10246b40(param_1,0x22);
        break;
      default:
        param_1[0x11] = (int)"invalid string: forbidden character after backslash";
        return 0xe;
      case 0x2f:
        sub_10246b40(param_1,0x2f);
        break;
      case 0x5c:
        sub_10246b40(param_1,0x5c);
        break;
      case 0x62:
        sub_10246b40(param_1,8);
        break;
      case 0x66:
        sub_10246b40(param_1,0xc);
        break;
      case 0x6e:
        sub_10246b40(param_1,10);
        break;
      case 0x72:
        sub_10246b40(param_1,0xd);
        break;
      case 0x74:
        sub_10246b40(param_1,9);
        break;
      case 0x75:
        uVar2 = sub_10246d50(param_1);
        if (uVar2 == 0xffffffff) {
LAB_102465da:
          param_1[0x11] = (int)"invalid string: \'\\u\' must be followed by 4 hex digits";
          return 0xe;
        }
        if (uVar2 - 0xd800 < 0x400) {
          iVar1 = sub_10246bb0(param_1);
          if ((iVar1 != 0x5c) || (iVar1 = sub_10246bb0(param_1), iVar1 != 0x75)) {
LAB_102465b4:
            param_1[0x11] =
                 (int)"invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF";
            return 0xe;
          }
          iVar1 = sub_10246d50(param_1);
          if (iVar1 == -1) goto LAB_102465da;
          if (0x3ff < iVar1 - 0xdc00U) goto LAB_102465b4;
          uVar2 = (uVar2 - 0xd7f7) * 0x400 + iVar1;
        }
        else if ((0xdbff < (int)uVar2) && ((int)uVar2 < 0xe000)) {
          param_1[0x11] = (int)"invalid string: surrogate U+DC00..U+DFFF must follow U+D800..U+DBFF"
          ;
          return 0xe;
        }
        if (((int)uVar2 < 0) || (0x10ffff < (int)uVar2)) {
          (*pcVar6)(L"0x00 <= codepoint && codepoint <= 0x10FFFF",
                    L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                    ,0x1e01);
        }
        uVar5 = uVar2;
        if (0x7f < (int)uVar2) {
          uVar5 = uVar2 & 0x3f | 0x80;
          if ((int)uVar2 < 0x800) {
            sub_10246b40(param_1,(uVar2 | 0x3000) >> 6);
            pcVar6 = _wassert_exref;
            sub_10246b40(param_1,uVar5);
            break;
          }
          if ((int)uVar2 < 0x10000) {
            uVar7 = uVar2 | 0xe0000;
          }
          else {
            sub_10246b40(param_1,(uVar2 | 0x3c00000) >> 0x12);
            uVar7 = uVar2 & 0x3f000 | 0x80000;
          }
          sub_10246b40(param_1,uVar7 >> 0xc);
          sub_10246b40(param_1,(uVar2 & 0xfc0 | 0x2000) >> 6);
          pcVar6 = _wassert_exref;
        }
        sub_10246b40(param_1,uVar5);
      }
      goto LAB_1024658e;
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
    case 0x8c:
    case 0x8d:
    case 0x8e:
    case 0x8f:
    case 0x90:
    case 0x91:
    case 0x92:
    case 0x93:
    case 0x94:
    case 0x95:
    case 0x96:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0x9a:
    case 0x9b:
    case 0x9c:
    case 0x9d:
    case 0x9e:
    case 0x9f:
    case 0xa0:
    case 0xa1:
    case 0xa2:
    case 0xa3:
    case 0xa4:
    case 0xa5:
    case 0xa6:
    case 0xa7:
    case 0xa8:
    case 0xa9:
    case 0xaa:
    case 0xab:
    case 0xac:
    case 0xad:
    case 0xae:
    case 0xaf:
    case 0xb0:
    case 0xb1:
    case 0xb2:
    case 0xb3:
    case 0xb4:
    case 0xb5:
    case 0xb6:
    case 0xb7:
    case 0xb8:
    case 0xb9:
    case 0xba:
    case 0xbb:
    case 0xbc:
    case 0xbd:
    case 0xbe:
    case 0xbf:
    case 0xc0:
    case 0xc1:
      goto switchD_102462b7_caseD_80;
    case 0xc2:
    case 0xc3:
    case 0xc4:
    case 0xc5:
    case 0xc6:
    case 199:
    case 200:
    case 0xc9:
    case 0xca:
    case 0xcb:
    case 0xcc:
    case 0xcd:
    case 0xce:
    case 0xcf:
    case 0xd0:
    case 0xd1:
    case 0xd2:
    case 0xd3:
    case 0xd4:
    case 0xd5:
    case 0xd6:
    case 0xd7:
    case 0xd8:
    case 0xd9:
    case 0xda:
    case 0xdb:
    case 0xdc:
    case 0xdd:
    case 0xde:
    case 0xdf:
      puVar8 = local_58;
      local_60 = 0x80;
      local_5c = 0xbf;
      puVar3 = &local_60;
      this = local_58;
      goto LAB_10246578;
    case 0xe0:
      local_20 = 0xa0;
      uStack_1c = 0xbf;
      puVar8 = &local_10;
      this = local_50;
      break;
    case 0xe1:
    case 0xe2:
    case 0xe3:
    case 0xe4:
    case 0xe5:
    case 0xe6:
    case 0xe7:
    case 0xe8:
    case 0xe9:
    case 0xea:
    case 0xeb:
    case 0xec:
    case 0xee:
    case 0xef:
      local_20 = 0x80;
      uStack_1c = 0xbf;
      puVar8 = &local_10;
      this = local_48;
      break;
    case 0xed:
      local_20 = 0x80;
      uStack_1c = 0x9f;
      puVar8 = &local_10;
      this = local_40;
      break;
    case 0xf0:
      local_20 = 0x90;
      uStack_1c = 0xbf;
      this = local_38;
      goto LAB_1024655a;
    case 0xf1:
    case 0xf2:
    case 0xf3:
      local_20 = 0x80;
      uStack_1c = 0xbf;
      this = local_30;
      goto LAB_1024655a;
    case 0xf4:
      local_20 = 0x80;
      uStack_1c = 0x8f;
      this = local_28;
LAB_1024655a:
      puVar8 = &local_8;
      local_10 = 0x80;
      local_c = 0xbf;
      break;
    case 0xffffffff:
                    /* WARNING: This code block may not be properly labeled as switch case */
      param_1[0x11] = (int)"invalid string: missing closing quote";
      return 0xe;
    }
    puVar3 = &local_20;
    uStack_18 = 0x80;
    uStack_14 = 0xbf;
LAB_10246578:
    sub_1020f550(this,puVar3,puVar8);
    uVar4 = sub_json_10246cb0(param_1);
    if ((char)uVar4 == '\0') {
      return 0xe;
    }
LAB_1024658e:
    iVar1 = sub_10246bb0(param_1);
  }
switchD_102462b7_caseD_80:
  param_1[0x11] = (int)"invalid string: ill-formed UTF-8 byte";
  return 0xe;
}


// 0x10246ab0  (ghidra: FUN_10246ab0)  [gap]
uint64_t * __thiscall sub_10246ab0(void *this,uint64_t *param_1,void *param_2)

{
  sub_10246e60(this,param_1,1,param_2);
  return param_1;
}


// 0x10246ad0  (ghidra: FUN_10246ad0)  [gap]
uint64_t * __thiscall sub_10246ad0(void *this,uint64_t *param_1)

{
  uint64_t uVar1;
  uint8_t local_10 [12];
  
  uVar1 = sub_10246ee0(this,local_10);
  sub_10246b10((void *)uVar1,param_1,*(int *)((int)((ulonglong)uVar1 >> 0x20) + 0xc));
  return param_1;
}


// 0x10246b00  (ghidra: FUN_10246b00)  [gap]
uint64_t __fastcall sub_10246b00(uint32_t *param_1)

{
  int extraout_ECX;
  uint64_t uVar1;
  
  uVar1 = sub_1020f7c0(param_1);
  *(uint32_t *)(extraout_ECX + 0xc) = 0;
  return CONCAT44((int)((ulonglong)uVar1 >> 0x20),extraout_ECX);
}


// 0x10246b10  (ghidra: FUN_10246b10)  [gap]
uint64_t * __thiscall sub_10246b10(void *this,uint64_t *param_1,int param_2)

{
  uint32_t uVar1;
  
  sub_1020f410(param_1);
  uVar1 = *(uint32_t *)this;
  *(uint32_t *)((int)param_1 + 4) = *(uint32_t *)((int)this + 4);
  *(uint32_t *)param_1 = uVar1;
  sub_10246f20(param_1,param_2);
  return param_1;
}


// 0x10246b40  (ghidra: FUN_10246b40)  [gap]
void __thiscall sub_10246b40(void *this,uint32_t param_1)

{
  sub_1023fff0((void *)((int)this + 0x2c),param_1);
  return;
}


// 0x10246b50  (ghidra: FUN_10246b50)  [gap]
void __fastcall sub_10246b50(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  *(uint8_t *)(param_1 + 0x10) = 1;
  if (*(int *)(param_1 + 0x18) == 0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    }
  }
  else {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  }
  iVar1 = sub_102100c0();
  if (*(int *)(param_1 + 0xc) != iVar1) {
    uVar2 = sub_10240bb0((int *)(param_1 + 0x20));
    if ((char)uVar2 != '\0') {
      _wassert(L"!token_string.empty()",
               L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
               ,0x21f8);
    }
    sub_10246f70(param_1 + 0x20);
    return;
  }
  return;
}


// 0x10246bb0  (ghidra: FUN_10246bb0)  [gap]
int __fastcall sub_10246bb0(int *param_1)

{
  uint8_t uVar1;
  int iVar2;
  int iVar3;
  uint32_t uStack_8;
  
  param_1[5] = param_1[5] + 1;
  param_1[6] = param_1[6] + 1;
  uStack_8 = param_1;
  if ((char)param_1[4] == '\0') {
    iVar2 = sub_102388c0(param_1);
    param_1[3] = iVar2;
  }
  else {
    *(uint8_t *)(param_1 + 4) = 0;
  }
  iVar2 = param_1[3];
  iVar3 = sub_102100c0();
  if (iVar2 != iVar3) {
    uVar1 = sub_10237ac0((uint8_t *)(param_1 + 3));
    uStack_8 = (int *)CONCAT13(uVar1,(uint32_t)uStack_8);
    sub_10246f80((int)&uStack_8 + 3);
    iVar2 = param_1[3];
  }
  if (iVar2 == 10) {
    param_1[7] = param_1[7] + 1;
    param_1[6] = 0;
  }
  return iVar2;
}


// 0x10246c20  (ghidra: FUN_10246c20)  [gap]
void __fastcall sub_10246c20(int param_1)

{
  uint8_t uVar1;
  uint32_t uStack_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_10305fe0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_14 = param_1;
  sub_1023e180((void *)(param_1 + 0x2c));
  sub_10246f60((uint32_t *)(param_1 + 0x20));
  uVar1 = sub_10237ac0((uint8_t *)(param_1 + 0xc));
  uStack_14 = CONCAT13(uVar1,(uint32_t)uStack_14);
  sub_10246f80((int)&uStack_14 + 3);
  ExceptionList = local_10;
  return;
}


// 0x10246c90  (ghidra: FUN_10246c90)  [gap]
void __fastcall sub_10246c90(double *param_1,char *param_2,char **param_3)

{
  double dVar1;
  
  dVar1 = strtod(param_2,param_3);
  *param_1 = dVar1;
  return;
}


// 0x10246cb0  (ghidra: FUN_10246cb0)  [gap]
uint32_t __fastcall sub_json_10246cb0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int extraout_ECX;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  
  iVar2 = sub_10218980((int *)&stack0x00000004);
  if (((iVar2 != 2) && (iVar2 != 4)) && (iVar2 != 6)) {
    _wassert(L"ranges.size() == 2 || ranges.size() == 4 || ranges.size() == 6",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1d60);
  }
  sub_10246b40(param_1,param_1[3]);
  piVar3 = (int *)sub_1020faf0((uint32_t *)&stack0x00000004);
  piVar4 = (int *)sub_1020fae0(extraout_ECX);
  if (piVar3 != piVar4) {
    do {
      sub_10246bb0(param_1);
      uVar1 = param_1[3];
      if (((int)uVar1 < *piVar3) || (piVar3[1] < (int)uVar1)) {
        param_1[0x11] = (int)"invalid string: ill-formed UTF-8 byte";
        return uVar1 & 0xffffff00;
      }
      sub_10246b40(param_1,uVar1);
      piVar3 = piVar3 + 2;
      piVar4 = (int *)sub_1020fae0((int)&stack0x00000004);
    } while (piVar3 != piVar4);
  }
  return CONCAT31((int3)((uint)piVar4 >> 8),1);
}


// 0x10246d50  (ghidra: FUN_10246d50)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __fastcall sub_10246d50(int *param_1)

{
  uint32_t uVar1;
  int iVar2;
  uint32_t *puVar3;
  uint uVar4;
  void *this;
  uint32_t *extraout_ECX;
  int extraout_ECX_00;
  int *extraout_EDX;
  int *piVar5;
  int iVar6;
  uint64_t local_20;
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if (param_1[3] != 0x75) {
    _wassert(L"current == \'u\'",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1d31);
  }
  iVar6 = 0;
  sub_1020f410(&local_20);
  local_18 = 0xc;
  local_14 = 8;
  local_10 = 4;
  local_c = 0;
  sub_1020f550(this,&local_18,&local_8);
  puVar3 = (uint32_t *)sub_1020faf0(extraout_ECX);
  local_20._4_4_ = (uint32_t *)sub_1020fae0(extraout_ECX_00);
  piVar5 = extraout_EDX;
  if (puVar3 != local_20._4_4_) {
    do {
      uVar1 = *puVar3;
      sub_10246bb0(piVar5);
      iVar2 = param_1[3];
      uVar4 = iVar2 - 0x30;
      if (9 < uVar4) {
        if (iVar2 - 0x41U < 6) {
          uVar4 = iVar2 - 0x37;
        }
        else {
          if (5 < iVar2 - 0x61U) {
            return -1;
          }
          uVar4 = iVar2 - 0x57;
        }
      }
      puVar3 = puVar3 + 1;
      iVar6 = iVar6 + (uVar4 << ((byte)uVar1 & 0x1f));
      piVar5 = param_1;
    } while (puVar3 != local_20._4_4_);
    if ((iVar6 < 0) || (0xffff < iVar6)) {
      _wassert(L"0x0000 <= codepoint && codepoint <= 0xFFFF",
               L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
               ,0x1d4b);
    }
  }
  return iVar6;
}


// 0x10246e60  (ghidra: FUN_10246e60)  [gap]
uint64_t * __thiscall sub_10246e60(void *this,uint64_t *param_1,uint param_2,void *param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t local_18;
  
  sub_10247000(this,param_2);
  sub_1020f410(param_1);
  uVar2 = sub_10246ee0(this,&local_18);
  sub_10246b10((void *)uVar2,param_1,(int)((ulonglong)uVar2 >> 0x20));
  puVar1 = sub_10246b10(param_1,&local_18,param_2);
  sub_10249990(param_3,*(uint **)param_1,*(uint32_t *)((int)param_1 + 4),*(uint **)puVar1,
               *(int *)((int)puVar1 + 4));
  return param_1;
}


// 0x10246ee0  (ghidra: FUN_10246ee0)  [gap]
uint64_t __thiscall sub_10246ee0(void *this,void *param_1)

{
  uint32_t uVar1;
  uint32_t extraout_ECX;
  uint64_t uVar2;
  
  uVar1 = sub_10218bf0(this);
  uVar2 = sub_10246f00(param_1,uVar1);
  return CONCAT44((int)((ulonglong)uVar2 >> 0x20),extraout_ECX);
}


// 0x10246f00  (ghidra: FUN_10246f00)  [gap]
uint64_t __thiscall sub_10246f00(void *this,uint32_t param_1)

{
  uint32_t extraout_ECX;
  uint64_t uVar1;
  
  uVar1 = sub_10246f40(this,param_1);
  return CONCAT44((int)((ulonglong)uVar1 >> 0x20),extraout_ECX);
}


// 0x10246f20  (ghidra: FUN_10246f20)  [gap]
void * __thiscall sub_10246f20(void *this,int param_1)

{
  sub_10247130(this,param_1);
  return this;
}


// 0x10246f40  (ghidra: FUN_10246f40)  [gap]
uint64_t __thiscall sub_10246f40(void *this,uint32_t param_1)

{
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  sub_10247190(this,param_1,0);
  return CONCAT44(extraout_EDX,extraout_ECX);
}


// 0x10246f60  (ghidra: FUN_10246f60)  [gap]
void __fastcall sub_10246f60(uint32_t *param_1)

{
  param_1[1] = *param_1;
  return;
}


// 0x10246f70  (ghidra: FUN_10246f70)  [gap]
void __fastcall sub_10246f70(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  return;
}


// 0x10246f80  (ghidra: FUN_10246f80)  [gap]
void sub_10246f80(uint32_t param_1)

{
  int iVar1;
  uint32_t uVar2;
  int extraout_EDX;
  void *this;
  
  uVar2 = sub_1020fe80(param_1);
  iVar1 = *(int *)(extraout_EDX + 4);
  uVar2 = sub_1020fe80(uVar2);
  if (iVar1 != *(int *)((int)this + 8)) {
    uVar2 = sub_1020fe80(uVar2);
    sub_1020fe80(*(uint32_t *)((int)this + 4));
    sub_102499b0(uVar2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    return;
  }
  sub_102499e0(this,iVar1,uVar2);
  return;
}


// 0x10247000  (ghidra: FUN_10247000)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

int __thiscall sub_10247000(void *this,uint param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint64_t *puVar7;
  int iVar8;
  uint64_t *extraout_ECX;
  uint64_t uVar9;
  int *piVar10;
  uint64_t local_40;
  uint8_t local_38 [8];
  uint64_t local_30;
  void *local_24;
  int local_20;
  uint64_t local_1c;
  uint local_14;
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0xfffffff0;   /* not traced by Ghidra: address of a stack slot */
  
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffff0;
  local_24 = this;
  uVar9 = sub_10246ee0(this,&local_1c);
  local_20 = sub_10247110(&stack0x00000008,(int *)uVar9);
  if (param_1 != 0) {
    local_1c._4_4_ = sub_102471f0((int)this);
    iVar5 = sub_102471d0();
    iVar8 = local_1c._4_4_;
    if ((uint)(iVar5 - local_1c._4_4_) < param_1) {
      sub_102471b0();
      pcVar3 = (code *)swi(3);
      iVar8 = (*pcVar3)();
      return iVar8;
    }
    piVar10 = (int *)((int)&local_1c + 4);
    local_1c._4_4_ = 0;
    uVar6 = sub_10247210(iVar8 + param_1);
    sub_10247200(this,uVar6,piVar10);
    bVar4 = sub_102471c0((int)this);
    if (bVar4) {
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + param_1;
    }
    else {
      sub_1020f410(&local_1c);
      sub_10246ad0(this,extraout_ECX);
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + param_1;
      puVar7 = sub_10246ad0(this,&local_30);
      uVar1 = *(uint32_t *)puVar7;
      uVar2 = *(uint32_t *)((int)puVar7 + 4);
      uVar9 = sub_10246ee0(local_24,local_38);
      puVar7 = sub_10246b10((void *)uVar9,&local_40,local_20);
      sub_10249a90(*(uint32_t *)puVar7,*(uint32_t *)((int)puVar7 + 4),(uint32_t)local_1c,
                   local_1c._4_4_,uVar1,uVar2);
    }
  }
  return local_20;
}


// 0x10247110  (ghidra: FUN_10247110)  [gap]
int __thiscall sub_10247110(void *this,int *param_1)

{
  return ((*(int *)this - *param_1 >> 2) * 0x20 - param_1[1]) + *(int *)((int)this + 4);
}


// 0x10247130  (ghidra: FUN_10247130)  [gap]
int * __thiscall sub_10247130(void *this,int param_1)

{
  uint uVar1;
  
  if ((param_1 < 0) && (*(uint *)((int)this + 4) < (uint)-param_1)) {
    uVar1 = *(uint *)((int)this + 4) + param_1;
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)this = *(int *)this + (~uVar1 >> 5) * -4 + -4;
    *(uint *)((int)this + 4) = uVar1 & 0x1f;
    return this;
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)this = *(int *)this + (uVar1 >> 5) * 4;
  *(uint *)((int)this + 4) = uVar1 & 0x1f;
  return this;
}


// 0x10247190  (ghidra: FUN_10247190)  [gap]
uint32_t * __thiscall sub_10247190(void *this,uint32_t param_1,uint32_t param_2)

{
  *(uint32_t *)this = param_1;
  *(uint32_t *)((int)this + 4) = param_2;
  return this;
}


// 0x102471b0  (ghidra: FUN_102471b0)  [gap]
void sub_102471b0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector<bool> too long");
}


// 0x102471c0  (ghidra: FUN_102471c0)  [gap]
bool __fastcall sub_102471c0(int param_1)

{
  int iVar1;
  
  iVar1 = sub_102471f0(param_1);
  return iVar1 == 0;
}


// 0x102471d0  (ghidra: FUN_102471d0)  [gap]
int sub_102471d0(void)

{
  uint uVar1;
  
  uVar1 = sub_10210ca0();
  if (0x3ffffff < uVar1) {
    return 0x7fffffff;
  }
  return uVar1 << 5;
}


// 0x102471f0  (ghidra: FUN_102471f0)  [gap]
uint32_t __fastcall sub_102471f0(int param_1)

{
  return *(uint32_t *)(param_1 + 0xc);
}


// 0x10247200  (ghidra: FUN_10247200)  [gap]
void __thiscall sub_10247200(void *this,uint param_1,int *param_2)

{
  sub_10249b00(this,param_1,param_2);
  return;
}


// 0x10247210  (ghidra: FUN_10247210)  [gap]
uint __fastcall sub_10247210(int param_1)

{
  return param_1 + 0x1fU >> 5;
}


// 0x10247220  (ghidra: FUN_10247220)  [gap]
uint32_t * __thiscall sub_10247220(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305a3e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10237930(this);
  local_8 = 0;
  uVar1 = sub_1020fe80(param_1);
  pcVar2 = (char *)sub_1020fe80(" at byte ");
  pcVar3 = sub_10248310(pcVar2,uVar1);
  sub_1023e080(this,(uint)pcVar3);
  sub_10248340(this,pcVar2,uVar1);
  ExceptionList = local_10;
  return this;
}


// 0x102472b0  (ghidra: FUN_102472b0)  [gap]
uint32_t * __thiscall sub_102472b0(void *this,uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  char *pcVar2;
  char *pcVar3;
  uint32_t uVar4;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305a3e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10237930(this);
  local_8 = 0;
  uVar1 = sub_1020fe80(param_1);
  pcVar2 = (char *)sub_1020fe80("while parsing ");
  pcVar3 = sub_1024b780(pcVar2,uVar1);
  sub_1023e080(this,(uint)pcVar3);
  uVar4 = sub_1020fe80(param_2);
  sub_1024b7b0(this,pcVar2,uVar1,uVar4);
  ExceptionList = local_10;
  return this;
}


// 0x10247350  (ghidra: FUN_10247350)  [gap]
void __fastcall sub_10247350(void *param_1,byte *param_2)

{
  sub_1024a940(param_1,param_2);
  return;
}


// 0x10247360  (ghidra: FUN_10247360)  [gap]
void __fastcall sub_10247360(void *param_1,int param_2)

{
  sub_1024a970(param_1,param_2);
  return;
}


// 0x10247370  (ghidra: FUN_10247370)  [gap]
uint32_t __fastcall sub_10247370(uint32_t param_1)

{
  uint32_t local_8;
  
  local_8 = 0;
  sub_1024b6f0(param_1,&local_8);
  return local_8;
}


// 0x10247390  (ghidra: FUN_10247390)  [gap]
uint8_t __fastcall sub_10247390(uint param_1)

{
  uint32_t uStack_8;
  
  uStack_8 = param_1 & 0xffffff;
  sub_1024b700(param_1,(int)&uStack_8 + 3);
  return uStack_8._3_1_;
}


// 0x102473b0  (ghidra: FUN_102473b0)  [gap]
uint32_t * __thiscall sub_102473b0(void *this,uint32_t *param_1)

{
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030601e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10237930(param_1);
  local_8 = 0;
  sub_1024b710(this,param_1);
  ExceptionList = local_10;
  return param_1;
}


// 0x10247420  (ghidra: FUN_10247420)  [gap]
void __fastcall sub_10247420(void *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_2);
  sub_1024b720(param_1,uVar1);
  return;
}


// 0x10247440  (ghidra: FUN_10247440)  [gap]
void __fastcall sub_10247440(char *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_2);
  sub_1024b740(param_1,uVar1);
  return;
}


// 0x10247460  (ghidra: FUN_10247460)  [gap]
void __fastcall sub_10247460(char *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_2);
  sub_1024b760(param_1,uVar1);
  return;
}


// 0x10247480  (ghidra: FUN_10247480)  [gap]
uint8_t * sub_10247480(void)

{
  sub_1024a560();
  return &DAT_104e0a74;
}


// 0x10247490  (ghidra: FUN_10247490)  [gap]
uint8_t * sub_10247490(void)

{
  sub_1024a590();
  return &DAT_104e0abc;
}


// 0x102474a0  (ghidra: FUN_102474a0)  [gap]
uint32_t __fastcall sub_102474a0(uint32_t param_1)

{
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */

  sub_1024b7f0(param_1,&stack0x00000004);
  return param_1;
}


// 0x102474c0  (ghidra: FUN_102474c0)  [gap]
char * __thiscall sub_102474c0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  char cVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  void *this_00;
  int iVar5;
  uint32_t extraout_EDX;
  
  iVar1 = (int)this + 1;
  do {
    cVar2 = *(char *)this;
    this = (void *)((int)this + 1);
  } while (cVar2 != '\0');
  uVar3 = sub_1020fe80(param_3);
  uVar4 = sub_1020fe80(param_2);
  this_00 = (void *)sub_1020fe80(extraout_EDX);
  iVar5 = sub_1024b810(this_00,uVar4,uVar3);
  return (char *)((int)this + (iVar5 - iVar1));
}


// 0x10247510  (ghidra: FUN_10247510)  [gap]
void __fastcall
sub_10247510(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5,uint32_t param_6)

{
  char *pcVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  
  pcVar1 = (char *)sub_1020fe80(param_2);
  client_DrawHoverItem_102250a0(param_1,pcVar1);
  uVar2 = sub_1020fe80(param_6);
  uVar3 = sub_1020fe80(param_5);
  uVar4 = sub_1020fe80(param_4);
  uVar5 = sub_1020fe80(param_3);
  sub_1024b840(param_1,uVar5,uVar4,uVar3,uVar2);
  return;
}


// 0x10247560  (ghidra: FUN_10247560)  [gap]
char * __fastcall
sub_10247560(char *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  char *pcVar1;
  char cVar2;
  uint32_t uVar3;
  int iVar4;
  uint32_t extraout_EDX;
  
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  uVar3 = sub_1020fe80(param_4);
  sub_1020fe80(param_3);
  iVar4 = sub_1020fe80(param_2);
  iVar4 = sub_1024b880(iVar4,extraout_EDX,uVar3);
  return param_1 + (iVar4 - (int)pcVar1);
}


// 0x102475b0  (ghidra: FUN_102475b0)  [gap]
void __fastcall
sub_102475b0(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5)

{
  char *pcVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  
  pcVar1 = (char *)sub_1020fe80(param_2);
  client_DrawHoverItem_102250a0(param_1,pcVar1);
  uVar2 = sub_1020fe80(param_5);
  uVar3 = sub_1020fe80(param_4);
  uVar4 = sub_1020fe80(param_3);
  sub_1024b8b0(param_1,uVar4,uVar3,uVar2);
  return;
}


// 0x102475f0  (ghidra: FUN_102475f0)  [gap]
char * sub_Config_automap_party_names_102475f0(void)

{
  return "automap_party_names";
}


// 0x10247600  (ghidra: FUN_10247600)  [gap]
void __fastcall sub_10247600(uint32_t param_1,uint32_t param_2)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)sub_1020fe80(param_2);
  sub_1024a890(*puVar1);
  return;
}


// 0x10247620  (ghidra: FUN_10247620)  [gap]
void * __thiscall sub_10247620(void *this)

{
  uint32_t uVar1;
  uint32_t uVar2;
  void *this_00;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0x0000000c;   /* not traced by Ghidra: address of a stack slot */
  
  puStack_c = &LAB_10306055;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  uVar1 = sub_1020fe80(&stack0x00000004);
  uVar2 = sub_1020fe80(&stack0x0000000c);
  sub_1024a530(this_00,uVar2);
  sub_1024a440(this,uVar1);
  sub_10238800((int *)&stack0x00000004);
  thunk_FUN_1023f130(&stack0x0000000c);
  ExceptionList = local_10;
  return this;
}


// 0x102476b0  (ghidra: FUN_102476b0)  [gap]
int * sub_102476b0(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  uint32_t *puVar4;
  int iVar5;
  
  piVar2 = (int *)thunk_FUN_102495b0();
  iVar5 = *piVar2;
  param_1[1] = 0;
  param_1[2] = iVar5;
  puVar4 = *(uint32_t **)(iVar5 + 4);
  *param_1 = (int)puVar4;
  cVar1 = *(char *)((int)puVar4 + 0xd);
  while (cVar1 == '\0') {
    *param_1 = (int)puVar4;
    iVar5 = param_2;
    pvVar3 = (void *)sub_1020fe80(puVar4 + 4);
    cVar1 = sub_1024a750(pvVar3,iVar5);
    if (cVar1 == '\0') {
      param_1[2] = (int)puVar4;
      puVar4 = (uint32_t *)*puVar4;
    }
    else {
      puVar4 = (uint32_t *)puVar4[2];
    }
    param_1[1] = (uint)(cVar1 == '\0');
    cVar1 = *(char *)((int)puVar4 + 0xd);
  }
  return param_1;
}


// 0x10247710  (ghidra: FUN_10247710)  [gap]
uint32_t sub_10247710(int param_1,void *param_2,uint reg_EAX)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    iVar1 = sub_1020fe80(param_1 + 0x10);
    reg_EAX = sub_1024a750(param_2,iVar1);
    if ((char)reg_EAX == '\0') {
      return CONCAT31((int3)(reg_EAX >> 8),1);
    }
  }
  return reg_EAX & 0xffffff00;
}


// 0x10247740  (ghidra: FUN_10247740)  [gap]
void * __fastcall sub_10247740(void *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_2);
  sub_1024b8f0(param_1,uVar1);
  return param_1;
}


// 0x10247760  (ghidra: FUN_10247760)  [gap]
void * __thiscall
sub_10247760(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t extraout_ECX;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030608d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_1024a3e0(this,param_1);
  local_8 = 0;
  uVar1 = sub_1020fe80(param_4);
  uVar2 = sub_1020fe80(&DAT_1037c060);
  uVar3 = sub_1020fe80(*(int *)((int)this + 4) + 0x10);
  sub_1024b910(extraout_ECX,uVar3,uVar2,uVar1);
  sub_10210750(*(uint32_t *)((int)this + 4),&param_2);
  sub_10210750(*(int *)((int)this + 4) + 4,&param_2);
  sub_10210750(*(int *)((int)this + 4) + 8,&param_2);
  *(uint8_t *)(*(int *)((int)this + 4) + 0xc) = 0;
  *(uint8_t *)(*(int *)((int)this + 4) + 0xd) = 0;
  ExceptionList = local_10;
  return this;
}


// 0x10247810  (ghidra: FUN_10247810)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void sub_10247810(uint32_t param_1,uint32_t *param_2)

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
    sub_10247810(param_1,(uint32_t *)param_2[2]);
    pvVar2 = (void *)sub_10211940(&local_c,param_2);
    sub_1024b960(extraout_ECX,pvVar2);
    param_2 = local_c;
    cVar1 = *(char *)((int)local_c + 0xd);
  }
  return;
}


// 0x10247870  (ghidra: FUN_10247870)  [gap]
void __fastcall sub_10247870(uint32_t param_1,void *param_2)

{
  sub_1024a580(param_1,param_2);
  return;
}


// 0x10247880  (ghidra: FUN_10247880)  [gap]
int * sub_10247880(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  uint32_t *puVar4;
  int iVar5;
  
  piVar2 = (int *)thunk_FUN_102495d0();
  iVar5 = *piVar2;
  param_1[1] = 0;
  param_1[2] = iVar5;
  puVar4 = *(uint32_t **)(iVar5 + 4);
  *param_1 = (int)puVar4;
  cVar1 = *(char *)((int)puVar4 + 0xd);
  while (cVar1 == '\0') {
    *param_1 = (int)puVar4;
    iVar5 = param_2;
    pvVar3 = (void *)sub_1020fe80(puVar4 + 4);
    cVar1 = sub_1024a750(pvVar3,iVar5);
    if (cVar1 == '\0') {
      param_1[2] = (int)puVar4;
      puVar4 = (uint32_t *)*puVar4;
    }
    else {
      puVar4 = (uint32_t *)puVar4[2];
    }
    param_1[1] = (uint)(cVar1 == '\0');
    cVar1 = *(char *)((int)puVar4 + 0xd);
  }
  return param_1;
}


// 0x102478e0  (ghidra: FUN_102478e0)  [gap]
uint32_t sub_102478e0(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */
  
  pbVar1 = (byte *)thunk_FUN_10218bf0((uint32_t *)&stack0x00000004);
  pbVar2 = (byte *)thunk_FUN_10218bf0((uint32_t *)&stack0x00000008);
  pbVar3 = pbVar2;
  while( true ) {
    if (pbVar1 == pbVar2) {
      return CONCAT31((int3)((uint)pbVar3 >> 8),1);
    }
    pbVar3 = (byte *)sub_102421c0(*pbVar1);
    if (pbVar3 == (byte *)0x0) break;
    pbVar1 = pbVar1 + 1;
  }
  return 0;
}


// 0x10247920  (ghidra: FUN_10247920)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __fastcall sub_10247920(void *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint32_t *puVar5;
  void *this;
  void *this_00;
  uint64_t uVar6;
  uint8_t local_88 [24];
  uint8_t local_70 [28];
  uint8_t local_54 [24];
  uint8_t local_3c [4];
  uint8_t local_38 [28];
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103060d8;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar1 = client_DrawHoverItem_10224f20((int)param_1);
  if ((1 < uVar1) && (uVar6 = sub_1023e120(this,0), *(char *)uVar6 == '0')) {
    puVar5 = sub_1024b980(local_54,param_1);
    local_8 = 0;
    sub_10243690(local_3c,0x6a,0,puVar5);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_3c,(ThrowInfo *)&DAT_10393b84);
  }
  uVar1 = client_DrawHoverItem_10224f20((int)param_1);
  if ((1 < uVar1) &&
     ((uVar6 = sub_1023e120(this_00,0), *(char *)uVar6 < '1' ||
      (uVar6 = sub_1023e120(param_1,0), '9' < *(char *)uVar6)))) {
    puVar5 = sub_1024ba30(local_54,param_1);
    local_8 = 1;
    sub_10243690(local_3c,0x6d,0,puVar5);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_3c,(ThrowInfo *)&DAT_10393b84);
  }
  uVar6 = thunk_FUN_1020fe30((int)param_1);
  iVar2 = (int)uVar6;
  local_18 = 0;
  piVar3 = _errno();
  *piVar3 = 0;
  uVar6 = strtoull(iVar2,&local_18,10);
  local_1c = (int)((ulonglong)uVar6 >> 0x20);
  if (((iVar2 != local_18) && (piVar3 = _errno(), *piVar3 != 0x22)) &&
     (iVar4 = client_DrawHoverItem_10224f20((int)param_1), local_18 - iVar2 == iVar4)) {
    uVar1 = sub_102100c0();
    if ((local_1c == 0) && ((uint)uVar6 < uVar1)) {
      ExceptionList = local_10;
      return (uint)uVar6;
    }
    puVar5 = sub_1024bbb0(local_88,param_1);
    local_8 = 3;
    sub_1024bae0(local_70,0x19a,puVar5);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_70,(ThrowInfo *)&DAT_10393cac);
  }
  puVar5 = sub_10247b00(local_54,param_1);
  local_8 = 2;
  sub_1024bae0(local_38,0x194,puVar5);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_38,(ThrowInfo *)&DAT_10393cac);
}


// 0x10247b00  (ghidra: FUN_10247b00)  [gap]
uint32_t * __thiscall sub_10247b00(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305bee;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10237930(this);
  local_8 = 0;
  uVar1 = sub_1020fe80(&DAT_10377638);
  uVar2 = sub_1020fe80(param_1);
  pcVar3 = (char *)sub_1020fe80("unresolved reference token \'");
  pcVar4 = sub_10248130(pcVar3,uVar2,uVar1);
  sub_1023e080(this,(uint)pcVar4);
  sub_10248170(this,pcVar3,uVar2,uVar1);
  ExceptionList = local_10;
  return this;
}


// 0x10247bb0  (ghidra: FUN_10247bb0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __fastcall sub_10247bb0(void *param_1,uint32_t param_2,uint32_t param_3)

{
  void *pvVar1;
  void *pvVar2;
  uint64_t uVar3;
  uint32_t local_7c [6];
  uint32_t local_64 [6];
  uint32_t local_4c [6];
  void *local_34;
  void *local_30;
  uint32_t local_2c [6];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305a7d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = param_1;
  local_30 = param_1;
  pvVar1 = sub_102385e0(local_7c);
  local_8 = 0;
  sub_1020f990(local_4c,"out_of_range");
  local_8._0_1_ = 1;
  pvVar2 = sub_10238570(local_64,local_4c);
  local_8 = CONCAT31(local_8._1_3_,2);
  sub_10247d50(local_2c,pvVar2,pvVar1,param_3);
  thunk_FUN_1020fc60(local_64);
  thunk_FUN_1020fc60(local_4c);
  thunk_FUN_1020fc60(local_7c);
  uVar3 = thunk_FUN_1020fe30((int)local_2c);
  sub_102387c0(local_30,param_2,(int)uVar3);
  thunk_FUN_1020fc60(local_2c);
  ExceptionList = local_10;
  return local_30;
}


// 0x10247c80  (ghidra: FUN_10247c80)  [gap]
uint __fastcall sub_10247c80(uint32_t param_1,void *param_2)

{
  uint uVar1;
  
  uVar1 = sub_1024bc60(param_2);
  return uVar1 ^ 1;
}


// 0x10247c90  (ghidra: FUN_10247c90)  [gap]
bool __fastcall sub_10247c90(uint32_t param_1)

{
  bool bVar1;
  
  bVar1 = sub_1024bc70(param_1,(void *)param_1);
  return !bVar1;
}


// 0x10247ca0  (ghidra: FUN_10247ca0)  [gap]
void * __thiscall sub_10247ca0(void *this,uint32_t param_1,uint32_t param_2)

{
  sub_1024bc90(this,param_2,&param_1);
  return this;
}


// 0x10247cc0  (ghidra: FUN_10247cc0)  [gap]
void __fastcall sub_10247cc0(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  uint32_t extraout_ECX;
  
  uVar1 = sub_1020fe80(param_2);
  puVar2 = (uint32_t *)sub_1020f1d0(extraout_ECX,uVar1);
  sub_1024a6a0(puVar2);
  return;
}


// 0x10247ce0  (ghidra: FUN_10247ce0)  [gap]
bool __fastcall sub_10247ce0(int param_1)

{
  bool bVar1;
  
  bVar1 = sub_1024bcc0(param_1);
  return !bVar1;
}


// 0x10247cf0  (ghidra: FUN_10247cf0)  [gap]
char * __fastcall sub_10247cf0(char *param_1,uint32_t param_2)

{
  char *pcVar1;
  char cVar2;
  uint32_t *puVar3;
  int iVar4;
  
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  puVar3 = (uint32_t *)sub_1020fe80(param_2);
  iVar4 = sub_1024bcd0((char *)*puVar3);
  return param_1 + (iVar4 - (int)pcVar1);
}


// 0x10247d20  (ghidra: FUN_10247d20)  [gap]
void __fastcall sub_10247d20(void *param_1,uint32_t param_2,uint32_t param_3)

{
  char *pcVar1;
  uint32_t uVar2;
  
  pcVar1 = (char *)sub_1020fe80(param_2);
  client_DrawHoverItem_102250a0(param_1,pcVar1);
  uVar2 = sub_1020fe80(param_3);
  sub_1024bcf0(param_1,uVar2);
  return;
}


// 0x10247d50  (ghidra: FUN_10247d50)  [gap]
uint32_t * __fastcall
sub_10247d50(uint32_t *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305bee;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10237930(param_1);
  local_8 = 0;
  uVar1 = sub_1020fe80(param_4);
  uVar2 = sub_1020fe80(param_3);
  iVar3 = sub_1020fe80(param_2);
  uVar4 = sub_1024bd10(iVar3,uVar2,uVar1);
  sub_1023e080(param_1,uVar4);
  sub_1024bd40(param_1,iVar3,uVar2,uVar1);
  ExceptionList = local_10;
  return param_1;
}


// 0x10247df0  (ghidra: FUN_10247df0)  [gap]
uint32_t * __thiscall sub_10247df0(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  
  *(uint32_t *)((int)this + 4) = 0;
  *(uint32_t *)((int)this + 8) = 0;
  sub_10238450((int)this);
  *(uint8_t ***)this =
       std::_Ref_count_obj2<nlohmann::json_abi_v3_11_2::detail::output_stream_adapter<char>_>::
       vftable;
  uVar1 = sub_1020fe80(param_1);
  sub_1024bd80((int)this + 0xc,uVar1);
  return this;
}


// 0x10247e30  (ghidra: FUN_10247e30)  [gap]
void __thiscall sub_10247e30(void *this,uint32_t param_1,uint32_t param_2)

{
  *(uint32_t *)this = param_1;
  *(uint32_t *)((int)this + 4) = param_2;
  return;
}


// 0x10247e50  (ghidra: FUN_10247e50)  [gap]
uint64_t __fastcall sub_10247e50(void *param_1)

{
  int *piVar1;
  uint32_t extraout_EDX;
  
  piVar1 = sub_1024a5d0(param_1,1);
  return CONCAT44(extraout_EDX,piVar1);
}


// 0x10247e60  (ghidra: FUN_10247e60)  [gap]
uint8_t sub_10247e60(void)

{
  return 0;
}


// 0x10247e70  (ghidra: FUN_10247e70)  [gap]
uint8_t sub_10247e70(void)

{
  return 0;
}


// 0x10247e80  (ghidra: FUN_10247e80)  [gap]
uint8_t sub_10247e80(uint32_t param_1,int param_2)

{
  if ((param_2 < 1) && (param_2 < 0)) {
    return 1;
  }
  return 0;
}


// 0x10247ea0  (ghidra: FUN_10247ea0)  [gap]
int * sub_10247ea0(int param_1,uint32_t param_2)

{
  uint64_t uVar1;
  uint32_t *this;
  void *pvVar2;
  int *piVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  int *local_1c;
  int iStack_18;
  int local_10;
  uint8_t local_c [8];
  
  this = (uint32_t *)thunk_FUN_1020fe80(&DAT_104e0a74);
  pvVar2 = (void *)sub_1020fe80(param_2);
  piVar3 = sub_1024bdb0(&local_10,param_1,pvVar2);
  uVar1 = *(uint64_t *)piVar3;
  local_1c = (int *)uVar1;
  if ((char)piVar3[2] != '\0') {
    return local_1c;
  }
  sub_stl_10244c40();
  uVar4 = sub_1020fe80(param_2);
  uVar6 = *this;
  uVar5 = thunk_FUN_1020fe80(&DAT_104e0a74);
  pvVar2 = sub_1024bf70(local_c,uVar5,uVar6,uVar4);
  piVar3 = (int *)sub_10211530((int)pvVar2);
  sub_102446d0((int)local_c);
  iStack_18 = (int)((ulonglong)uVar1 >> 0x20);
  piVar3 = sub_10211590(this,local_1c,iStack_18,piVar3);
  return piVar3;
}


// 0x10247f40  (ghidra: FUN_10247f40)  [gap]
int * sub_10247f40(int param_1,uint32_t param_2)

{
  uint64_t uVar1;
  uint32_t *this;
  void *pvVar2;
  int *piVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  int *local_1c;
  int iStack_18;
  int local_10;
  uint8_t local_c [8];
  
  this = (uint32_t *)thunk_FUN_1020fe80(&DAT_104e0abc);
  pvVar2 = (void *)sub_1020fe80(param_2);
  piVar3 = sub_1024c020(&local_10,param_1,pvVar2);
  uVar1 = *(uint64_t *)piVar3;
  local_1c = (int *)uVar1;
  if ((char)piVar3[2] != '\0') {
    return local_1c;
  }
  sub_stl_10244c80();
  uVar4 = sub_1020fe80(param_2);
  uVar6 = *this;
  uVar5 = thunk_FUN_1020fe80(&DAT_104e0abc);
  pvVar2 = sub_1024bf70(local_c,uVar5,uVar6,uVar4);
  piVar3 = (int *)sub_10211530((int)pvVar2);
  sub_102446d0((int)local_c);
  iStack_18 = (int)((ulonglong)uVar1 >> 0x20);
  piVar3 = sub_10211590(this,local_1c,iStack_18,piVar3);
  return piVar3;
}


// 0x10247fe0  (ghidra: FUN_10247fe0)  [gap]
uint32_t * __fastcall sub_10247fe0(uint32_t *param_1,int param_2,int param_3,uint32_t param_4)

{
  void *this;
  uint32_t uVar1;
  
  if (param_2 != param_3) {
    this = (void *)sub_1020fe80(&param_4);
    do {
      uVar1 = sub_1020fe80(param_2);
      sub_1024a510(this,uVar1);
      param_2 = param_2 + 0x10;
    } while (param_2 != param_3);
    *param_1 = param_4;
    return param_1;
  }
  *param_1 = param_4;
  return param_1;
}


// 0x10248040  (ghidra: FUN_10248040)  [gap]
void __fastcall sub_10248040(uint32_t *param_1,uint32_t param_2)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)sub_1020fe80(param_2);
  *param_1 = *puVar1;
  return;
}


// 0x10248050  (ghidra: FUN_10248050)  [gap]
void __cdecl sub_10248050(uint32_t param_1)

{
  int *piVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  piVar1 = (int *)sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_10249b60(this,piVar1);
  return;
}


// 0x10248080  (ghidra: FUN_10248080)  [gap]
void __cdecl sub_10248080(uint32_t param_1)

{
  int *piVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  piVar1 = (int *)sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_1024a610(this,piVar1);
  return;
}


// 0x102480b0  (ghidra: FUN_102480b0)  [gap]
void __cdecl sub_102480b0(uint32_t param_1)

{
  int *piVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  piVar1 = (int *)sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_10249b90(this,piVar1);
  return;
}


// 0x102480e0  (ghidra: FUN_102480e0)  [gap]
void * __thiscall sub_102480e0(void *this,uint32_t param_1,uint32_t param_2)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = sub_1020fe80(param_1);
  sub_1020f9c0(this,uVar1);
  pcVar2 = (char *)sub_1020fe80(param_2);
  sub_10240d50((void *)((int)this + 0x18),pcVar2);
  return this;
}


// 0x10248120  (ghidra: FUN_10248120)  [gap]
void __fastcall sub_10248120(void *param_1,int param_2)

{
  sub_1024a5b0(param_1,param_2);
  return;
}


// 0x10248130  (ghidra: FUN_10248130)  [gap]
char * __fastcall sub_10248130(char *param_1,uint32_t param_2,uint32_t param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint32_t extraout_EDX;
  
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  sub_1020fe80(param_3);
  iVar3 = sub_1020fe80(param_2);
  iVar3 = sub_1024c1e0(iVar3,extraout_EDX);
  return param_1 + (iVar3 - (int)pcVar1);
}


// 0x10248170  (ghidra: FUN_10248170)  [gap]
void __fastcall sub_10248170(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  char *pcVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  pcVar1 = (char *)sub_1020fe80(param_2);
  client_DrawHoverItem_102250a0(param_1,pcVar1);
  uVar2 = sub_1020fe80(param_4);
  uVar3 = sub_1020fe80(param_3);
  sub_1024c200(param_1,uVar3,uVar2);
  return;
}


// 0x102481b0  (ghidra: FUN_102481b0)  [gap]
uint32_t * __fastcall
sub_102481b0(uint32_t *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5,uint32_t param_6,uint32_t param_7)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  int iVar6;
  uint uVar7;
  uint32_t extraout_EDX;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030612e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10237930(param_1);
  local_8 = 0;
  uVar1 = sub_1020fe80(param_7);
  uVar2 = sub_1020fe80(param_6);
  uVar3 = sub_1020fe80(&DAT_103796f4);
  uVar4 = sub_1020fe80(param_4);
  uVar5 = sub_1020fe80("parse error");
  iVar6 = sub_1020fe80(param_2);
  uVar7 = sub_1024c230(iVar6,uVar5,uVar4,extraout_EDX,uVar2,uVar1);
  sub_1023e080(param_1,uVar7);
  sub_1024c280(param_1,iVar6,uVar5,uVar4,uVar3,uVar2,uVar1);
  ExceptionList = local_10;
  return param_1;
}


// 0x10248290  (ghidra: FUN_10248290)  [gap]
void __fastcall sub_10248290(void *param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  uint32_t uVar3;
  int iVar4;
  
  bVar1 = sub_1023e070(param_2);
  if (bVar1) {
    _wassert(L"!f.empty()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0xb8e);
  }
  for (uVar2 = sub_1024a9b0(param_1,param_2,0); uVar2 != 0xffffffff;
      uVar2 = sub_1024a9b0(param_1,param_2,iVar4 + uVar2)) {
    iVar4 = param_3;
    uVar3 = client_DrawHoverItem_10224f20(param_2);
    sub_1024a9f0(param_1,uVar2,uVar3,iVar4);
    iVar4 = client_DrawHoverItem_10224f20(param_3);
  }
  return;
}


// 0x10248310  (ghidra: FUN_10248310)  [gap]
char * __fastcall sub_10248310(char *param_1,uint32_t param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  iVar3 = sub_1020fe80(param_2);
  iVar3 = sub_1024c2d0(iVar3);
  return param_1 + (iVar3 - (int)pcVar1);
}


// 0x10248340  (ghidra: FUN_10248340)  [gap]
void __fastcall sub_10248340(void *param_1,uint32_t param_2,uint32_t param_3)

{
  char *pcVar1;
  uint32_t uVar2;
  
  pcVar1 = (char *)sub_1020fe80(param_2);
  client_DrawHoverItem_102250a0(param_1,pcVar1);
  uVar2 = sub_1020fe80(param_3);
  sub_1024c2e0(param_1,uVar2);
  return;
}


// 0x10248370  (ghidra: FUN_10248370)  [gap]
uint64_t __fastcall sub_10248370(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  uint32_t extraout_ECX;
  uint64_t uVar3;
  
  uVar1 = sub_1020fe80(param_2);
  puVar2 = (uint32_t *)sub_1020f1d0(extraout_ECX,uVar1);
  uVar3 = sub_1020f7c0(puVar2);
  return uVar3;
}


// 0x10248390  (ghidra: FUN_10248390)  [gap]
void __cdecl sub_10248390(uint32_t param_1)

{
  char *pcVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  pcVar1 = (char *)sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_1020f990(this,pcVar1);
  return;
}


// 0x102483c0  (ghidra: FUN_102483c0)  [gap]
void __fastcall sub_102483c0(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  uint32_t extraout_ECX;
  
  uVar1 = sub_1020fe80(param_2);
  puVar2 = (uint32_t *)sub_1020f1d0(extraout_ECX,uVar1);
  sub_1024a770(puVar2);
  return;
}


// 0x102483e0  (ghidra: FUN_102483e0)  [gap]
void __fastcall sub_102483e0(uint32_t param_1,int *param_2,int *param_3)

{
  bool bVar1;
  uint32_t *puVar2;
  uint32_t in_XMM3_Da;
  uint32_t in_XMM3_Db;
  uint8_t local_40 [48];
  double local_10;
  
  local_10 = (double)CONCAT44(in_XMM3_Db,in_XMM3_Da);
  bVar1 = sub_10243b10();
  if (!bVar1) {
    _wassert(L"std::isfinite(value)",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x450c);
  }
  if (local_10 <= 0.0) {
    _wassert(L"value > 0",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x450d);
  }
  puVar2 = sub_1024c300(local_40);
  sub_102392f0(param_1,param_2,param_3,puVar2[4],puVar2[5],(void *)puVar2[6],puVar2[7],*puVar2,
               puVar2[1],puVar2[2],puVar2[3],puVar2[8],puVar2[9],puVar2[10]);
  return;
}


// 0x10248490  (ghidra: FUN_10248490)  [gap]
void __fastcall sub_10248490(uint32_t param_1,uint32_t *param_2)

{
  sub_10249bb0(param_2);
  return;
}


// 0x102484a0  (ghidra: FUN_102484a0)  [gap]
void __thiscall sub_102484a0(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_1);
  sub_1020fe80(*(uint32_t *)((int)this + 4));
  sub_10244090(uVar1);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x10;
  return;
}


// 0x102484d0  (ghidra: FUN_102484d0)  [gap]
void __fastcall sub_102484d0(int *param_1)

{
  (**(code **)(*param_1 + 8))(0);
  return;
}


// 0x102484e0  (ghidra: FUN_102484e0)  [gap]
void __fastcall sub_102484e0(uint32_t param_1,uint32_t *param_2)

{
  sub_10249bc0(param_2);
  return;
}


// 0x102484f0  (ghidra: FUN_102484f0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint8_t __thiscall sub_102484f0(void *this,void *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint32_t *puVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  uint32_t uVar8;
  uint uVar9;
  uint32_t *extraout_ECX;
  void *this_00;
  uint8_t uVar10;
  uint64_t uVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint32_t local_ac;
  uint32_t local_a8 [7];
  uint32_t local_8c [6];
  uint32_t local_74 [6];
  uint64_t local_5c;
  uint64_t local_50;
  char local_44 [24];
  void *local_2c;
  uint8_t local_26;
  char local_25;
  uint32_t local_24 [4];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103062b3;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  sub_10249bd0(local_24);
  sub_10245b80(extraout_ECX);
  local_8 = 0;
  local_25 = '\0';
LAB_10248543:
  if (local_25 != '\0') {
    local_25 = '\0';
    goto LAB_102486e2;
  }
  switch(*(uint32_t *)((int)this + 0x28)) {
  default:
    sub_1020f990(local_44,"value");
    local_8._0_1_ = 0x11;
    sub_json_10245390(this,local_74,0x10,local_44);
    local_8._0_1_ = 0x12;
    uVar11 = sub_10245600((void *)((int)this + 0x30),&local_5c);
    puVar4 = (uint32_t *)uVar11;
    pvVar7 = sub_10248c90(puVar4,(int)((ulonglong)uVar11 >> 0x20));
    local_8._0_1_ = 0x13;
    sub_10245520((void *)((int)this + 0x30),local_8c);
    local_8 = CONCAT31(local_8._1_3_,0x14);
    goto LAB_10248a44;
  case 1:
    uVar8 = sub_1024a3a0(param_1);
    cVar1 = (char)uVar8;
    goto joined_r0x1024857f;
  case 2:
    uVar8 = sub_1024a3a0(param_1);
    cVar1 = (char)uVar8;
    break;
  case 3:
    uVar8 = sub_1024a3c0(param_1);
    cVar1 = (char)uVar8;
    break;
  case 4:
    piVar3 = (int *)sub_1024a4d0((int)this + 0x30);
    uVar8 = sub_1024a300(param_1,piVar3);
    cVar1 = (char)uVar8;
    break;
  case 5:
    sub_1024a4f0((int)this + 0x30);
    uVar8 = sub_1024a360(param_1);
    cVar1 = (char)uVar8;
    break;
  case 6:
    sub_1024a500((int)this + 0x30);
    uVar8 = sub_1024a380(param_1);
    cVar1 = (char)uVar8;
joined_r0x1024857f:
    if (cVar1 != '\0') goto LAB_102486e2;
    goto LAB_10248585;
  case 7:
    local_2c = (void *)((int)this + 0x30);
    sub_1024a4e0();
    bVar2 = sub_10243b10();
    pvVar7 = local_2c;
    if (bVar2) {
      uVar8 = sub_1024a320(param_1);
      cVar1 = (char)uVar8;
      goto joined_r0x1024857f;
    }
    local_26 = 0x27;
    puVar4 = sub_10245520(local_2c,(uint32_t *)local_44);
    local_8._0_1_ = 9;
    puVar4 = sub_1024c4a0(local_74,puVar4,&local_26);
    local_8._0_1_ = 10;
    uVar12 = 0x10248936;
    pvVar6 = sub_1024bae0(local_a8,0x196,puVar4);
    local_8._0_1_ = 0xb;
    sub_10245520(pvVar7,local_8c);
    local_8 = CONCAT31(local_8._1_3_,0xc);
    uVar13 = 0x1024895c;
    uVar8 = sub_10245600(pvVar7,&local_5c);
    uVar9 = sub_1024c540(param_1,uVar12,uVar13,(int)pvVar6,uVar8);
    uVar10 = (uint8_t)uVar9;
    thunk_FUN_1020fc60(local_8c);
    thunk_FUN_10238630(local_a8);
    goto LAB_10248a72;
  case 8:
    uVar8 = sub_10249f70(param_1);
    if ((char)uVar8 == '\0') goto LAB_10248585;
    iVar5 = sub_10245510((int)this);
    if (iVar5 == 10) {
      uVar8 = sub_10249e70((int)param_1);
      cVar1 = (char)uVar8;
      goto joined_r0x1024857f;
    }
    local_26 = 1;
    sub_10245b40(local_24,&local_26);
    goto LAB_10248543;
  case 9:
    uVar8 = sub_1024a290(param_1);
    if ((char)uVar8 == '\0') goto LAB_10248585;
    iVar5 = sub_10245510((int)this);
    if (iVar5 == 0xb) {
      uVar8 = sub_10249fe0((int)param_1);
      cVar1 = (char)uVar8;
      goto joined_r0x1024857f;
    }
    if (*(int *)((int)this + 0x28) != 4) {
      sub_1020f990(local_44,"object key");
      local_8._0_1_ = 1;
      sub_json_10245390(this,local_74,4,local_44);
      local_8._0_1_ = 2;
      uVar11 = sub_10245600((void *)((int)this + 0x30),&local_5c);
      puVar4 = (uint32_t *)uVar11;
      pvVar7 = sub_10248c90(puVar4,(int)((ulonglong)uVar11 >> 0x20));
      local_8._0_1_ = 3;
      sub_10245520((void *)((int)this + 0x30),local_8c);
      local_8 = CONCAT31(local_8._1_3_,4);
      goto LAB_10248a44;
    }
    local_2c = (void *)((int)this + 0x30);
    iVar5 = sub_1024a4d0((int)local_2c);
    uVar8 = sub_1024a1b0(param_1,iVar5);
    if ((char)uVar8 == '\0') goto LAB_10248585;
    iVar5 = sub_10245510((int)this);
    if (iVar5 == 0xc) goto code_r0x102485bf;
    sub_1020f990(local_44,"object separator");
    local_8._0_1_ = 5;
    sub_json_10245390(this,local_8c,0xc,local_44);
    pvVar7 = local_2c;
    local_8._0_1_ = 6;
    uVar11 = sub_10245600(local_2c,&local_5c);
    puVar4 = (uint32_t *)uVar11;
    pvVar6 = sub_10248c90(puVar4,(int)((ulonglong)uVar11 >> 0x20));
    local_8._0_1_ = 7;
    sub_10245520(pvVar7,local_74);
    local_8 = CONCAT31(local_8._1_3_,8);
    uVar12 = 0x1024885f;
    uVar8 = sub_10245600(pvVar7,&local_50);
    uVar9 = sub_10248d90(param_1,puVar4,uVar12,(int)pvVar6,uVar8);
    uVar10 = (uint8_t)uVar9;
    thunk_FUN_1020fc60(local_74);
    thunk_FUN_10238630(&local_ac);
    thunk_FUN_1020fc60(local_8c);
    thunk_FUN_1020fc60((uint32_t *)local_44);
LAB_10248c1b:
    thunk_FUN_1020fb40(local_24);
    ExceptionList = local_10;
    return uVar10;
  case 0xe:
    sub_1020f990(local_44,"value");
    local_8._0_1_ = 0xd;
    sub_json_10245390(this,local_74,0,local_44);
    local_8._0_1_ = 0xe;
    uVar11 = sub_10245600((void *)((int)this + 0x30),&local_5c);
    puVar4 = (uint32_t *)uVar11;
    pvVar7 = sub_10248c90(puVar4,(int)((ulonglong)uVar11 >> 0x20));
    local_8._0_1_ = 0xf;
    sub_10245520((void *)((int)this + 0x30),local_8c);
    local_8 = CONCAT31(local_8._1_3_,0x10);
    goto LAB_10248a44;
  }
  if (cVar1 == '\0') {
LAB_10248585:
    uVar10 = 0;
    goto LAB_10248c1b;
  }
LAB_102486e2:
  bVar2 = sub_102471c0((int)local_24);
  if (bVar2) {
    uVar10 = 1;
    goto LAB_10248c1b;
  }
  puVar4 = (uint32_t *)sub_1024a8f0(this_00,(void *)((int)&local_5c + 4));
  bVar2 = sub_1024a870(puVar4);
  if (bVar2) {
    iVar5 = sub_10245510((int)this);
    if (iVar5 == 0xd) {
      sub_10245510((int)this);
      goto LAB_10248543;
    }
    if (*(int *)((int)this + 0x28) == 10) {
      uVar8 = sub_10249e70((int)param_1);
      if ((char)uVar8 == '\0') goto LAB_10248585;
      bVar2 = sub_102471c0((int)local_24);
      if (bVar2) {
        uVar9 = 0x30cc;
LAB_102487d4:
        _wassert(L"!states.empty()",
                 L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                 ,uVar9);
      }
LAB_102487e3:
      sub_1024a8b0(local_24);
      local_25 = '\x01';
      goto LAB_10248543;
    }
    sub_1020f990(local_44,"array");
    local_8._0_1_ = 0x15;
    sub_json_10245390(this,local_74,10,local_44);
    local_8._0_1_ = 0x16;
    uVar11 = sub_10245600((void *)((int)this + 0x30),&local_5c);
    puVar4 = (uint32_t *)uVar11;
    pvVar7 = sub_10248c90(puVar4,(int)((ulonglong)uVar11 >> 0x20));
    local_8._0_1_ = 0x17;
    sub_10245520((void *)((int)this + 0x30),local_8c);
    local_8 = CONCAT31(local_8._1_3_,0x18);
LAB_10248a44:
    pvVar6 = (void *)((int)this + 0x30);
  }
  else {
    iVar5 = sub_10245510((int)this);
    if (iVar5 != 0xd) {
      if (*(int *)((int)this + 0x28) == 0xb) {
        uVar8 = sub_10249fe0((int)param_1);
        if ((char)uVar8 != '\0') {
          bVar2 = sub_102471c0((int)local_24);
          if (bVar2) {
            uVar9 = 0x3102;
            goto LAB_102487d4;
          }
          goto LAB_102487e3;
        }
        goto LAB_10248585;
      }
      sub_1020f990(local_44,"object");
      local_8._0_1_ = 0x21;
      sub_json_10245390(this,local_74,0xb,local_44);
      local_8._0_1_ = 0x22;
      uVar11 = sub_10245600((void *)((int)this + 0x30),&local_5c);
      puVar4 = (uint32_t *)uVar11;
      pvVar7 = sub_10248c90(puVar4,(int)((ulonglong)uVar11 >> 0x20));
      local_8._0_1_ = 0x23;
      sub_10245520((void *)((int)this + 0x30),local_8c);
      local_8 = CONCAT31(local_8._1_3_,0x24);
      goto LAB_10248a44;
    }
    pvVar7 = (void *)((int)this + 0x30);
    local_2c = pvVar7;
    iVar5 = sub_10245510((int)this);
    if (iVar5 == 4) {
      iVar5 = sub_1024a4d0((int)pvVar7);
      uVar8 = sub_1024a1b0(param_1,iVar5);
      if ((char)uVar8 == '\0') goto LAB_10248585;
      iVar5 = sub_10245510((int)this);
      if (iVar5 == 0xc) {
        sub_10245510((int)this);
        goto LAB_10248543;
      }
      sub_1020f990(local_44,"object separator");
      local_8._0_1_ = 0x1d;
      sub_json_10245390(this,local_74,0xc,local_44);
      local_8._0_1_ = 0x1e;
      uVar11 = sub_10245600(pvVar7,&local_5c);
      puVar4 = (uint32_t *)uVar11;
      pvVar7 = sub_10248c90(puVar4,(int)((ulonglong)uVar11 >> 0x20));
      local_8._0_1_ = 0x1f;
      sub_10245520(local_2c,local_8c);
      local_8 = CONCAT31(local_8._1_3_,0x20);
      pvVar6 = local_2c;
    }
    else {
      sub_1020f990(local_44,"object key");
      local_8._0_1_ = 0x19;
      sub_json_10245390(this,local_74,4,local_44);
      local_8._0_1_ = 0x1a;
      uVar11 = sub_10245600(pvVar7,&local_5c);
      puVar4 = (uint32_t *)uVar11;
      pvVar7 = sub_10248c90(puVar4,(int)((ulonglong)uVar11 >> 0x20));
      local_8._0_1_ = 0x1b;
      sub_10245520(local_2c,local_8c);
      local_8 = CONCAT31(local_8._1_3_,0x1c);
      pvVar6 = local_2c;
    }
  }
  uVar12 = 0x10248a4f;
  uVar8 = sub_10245600(pvVar6,&local_50);
  uVar9 = sub_10248d90(param_1,puVar4,uVar12,(int)pvVar7,uVar8);
  uVar10 = (uint8_t)uVar9;
  thunk_FUN_1020fc60(local_8c);
  thunk_FUN_10238630(&local_ac);
LAB_10248a72:
  thunk_FUN_1020fc60(local_74);
  thunk_FUN_1020fc60((uint32_t *)local_44);
  goto LAB_10248c1b;
code_r0x102485bf:
  local_26 = 0;
  sub_10245b40(local_24,&local_26);
  sub_10245510((int)this);
  goto LAB_10248543;
}


// 0x10248c90  (ghidra: FUN_10248c90)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl sub_10248c90(uint32_t *param_1,uint32_t param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  uint32_t extraout_ECX;
  uint64_t uVar4;
  uint32_t local_98 [6];
  uint32_t local_80 [6];
  uint32_t local_68 [6];
  uint32_t local_50 [7];
  void *local_34;
  uint32_t *local_30;
  uint32_t local_2c [6];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10306308;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = param_1;
  pvVar1 = sub_102385e0(local_98);
  local_8 = 0;
  pvVar2 = sub_10238680(local_80);
  local_8._0_1_ = 1;
  sub_1020f990(local_50,"parse_error");
  local_8._0_1_ = 2;
  pvVar3 = sub_10238570(local_68,local_50);
  local_8 = CONCAT31(local_8._1_3_,3);
  sub_102481b0(local_2c,pvVar3,extraout_ECX,pvVar2,extraout_ECX,pvVar1,param_2);
  thunk_FUN_1020fc60(local_68);
  thunk_FUN_1020fc60(local_50);
  thunk_FUN_1020fc60(local_80);
  thunk_FUN_1020fc60(local_98);
  uVar4 = thunk_FUN_1020fe30((int)local_2c);
  sub_10238650(local_34,0x65,*local_30,(int)uVar4);
  thunk_FUN_1020fc60(local_2c);
  ExceptionList = local_10;
  return local_34;
}


// 0x10248d90  (ghidra: FUN_10248d90)  [gap]
uint __thiscall
sub_10248d90(void *this,uint32_t param_2,uint32_t param_3,int param_4,uint reg_EAX)

{
  uint8_t local_28 [36];
  
  *(uint8_t *)((int)this + 0x34) = 1;
  if (*(char *)((int)this + 0x60) == '\0') {
    return reg_EAX & 0xffffff00;
  }
  sub_10240200(local_28,param_4);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_10393b84);
}


// 0x10248dd0  (ghidra: FUN_10248dd0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint8_t __thiscall sub_10248dd0(void *this,int *param_1)

{
  char cVar1;
  bool bVar2;
  uint32_t *puVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  uint32_t uVar7;
  uint uVar8;
  uint32_t *extraout_ECX;
  void *this_00;
  uint8_t uVar9;
  uint64_t uVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  uint32_t local_ac;
  uint32_t local_a8 [7];
  uint32_t local_8c [6];
  uint32_t local_74 [6];
  uint64_t local_5c;
  uint64_t local_50;
  char local_44 [24];
  void *local_2c;
  uint8_t local_26;
  char local_25;
  uint32_t local_24 [4];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103062b3;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  sub_10249bd0(local_24);
  sub_10245b80(extraout_ECX);
  local_8 = 0;
  local_25 = '\0';
LAB_10248e23:
  if (local_25 != '\0') {
    local_25 = '\0';
    goto LAB_10248fc2;
  }
  switch(*(uint32_t *)((int)this + 0x28)) {
  default:
    sub_1020f990(local_44,"value");
    local_8._0_1_ = 0x11;
    sub_json_10245390(this,local_74,0x10,local_44);
    local_8._0_1_ = 0x12;
    uVar10 = sub_10245600((void *)((int)this + 0x30),&local_5c);
    puVar3 = (uint32_t *)uVar10;
    pvVar6 = sub_10248c90(puVar3,(int)((ulonglong)uVar10 >> 0x20));
    local_8._0_1_ = 0x13;
    sub_10245520((void *)((int)this + 0x30),local_8c);
    local_8 = CONCAT31(local_8._1_3_,0x14);
    goto LAB_10249324;
  case 1:
    uVar7 = sub_10249e40(param_1);
    cVar1 = (char)uVar7;
    goto joined_r0x10248e5f;
  case 2:
    uVar7 = sub_10249e40(param_1);
    cVar1 = (char)uVar7;
    break;
  case 3:
    uVar7 = sub_10249e60(param_1);
    cVar1 = (char)uVar7;
    break;
  case 4:
    iVar4 = sub_1024a4d0((int)this + 0x30);
    uVar7 = sub_10249db0(param_1,iVar4);
    cVar1 = (char)uVar7;
    break;
  case 5:
    sub_1024a4f0((int)this + 0x30);
    uVar7 = sub_10249e00(param_1);
    cVar1 = (char)uVar7;
    break;
  case 6:
    sub_1024a500((int)this + 0x30);
    uVar7 = sub_10249e20(param_1);
    cVar1 = (char)uVar7;
joined_r0x10248e5f:
    if (cVar1 != '\0') goto LAB_10248fc2;
    goto LAB_10248e65;
  case 7:
    local_2c = (void *)((int)this + 0x30);
    sub_1024a4e0();
    bVar2 = sub_10243b10();
    pvVar6 = local_2c;
    if (bVar2) {
      uVar7 = sub_10249dd0(param_1);
      cVar1 = (char)uVar7;
      goto joined_r0x10248e5f;
    }
    local_26 = 0x27;
    puVar3 = sub_10245520(local_2c,(uint32_t *)local_44);
    local_8._0_1_ = 9;
    puVar3 = sub_1024c4a0(local_74,puVar3,&local_26);
    local_8._0_1_ = 10;
    uVar11 = 0x10249216;
    pvVar5 = sub_1024bae0(local_a8,0x196,puVar3);
    local_8._0_1_ = 0xb;
    sub_10245520(pvVar6,local_8c);
    local_8 = CONCAT31(local_8._1_3_,0xc);
    uVar12 = 0x1024923c;
    uVar7 = sub_10245600(pvVar6,&local_5c);
    uVar8 = sub_1024c580(param_1,uVar11,uVar12,(int)pvVar5,uVar7);
    uVar9 = (uint8_t)uVar8;
    thunk_FUN_1020fc60(local_8c);
    thunk_FUN_10238630(local_a8);
    goto LAB_10249352;
  case 8:
    uVar7 = sub_10249c70(param_1);
    if ((char)uVar7 == '\0') goto LAB_10248e65;
    iVar4 = sub_10245510((int)this);
    if (iVar4 == 10) {
      uVar7 = sub_10249c10((int)param_1);
      cVar1 = (char)uVar7;
      goto joined_r0x10248e5f;
    }
    local_26 = 1;
    sub_10245b40(local_24,&local_26);
    goto LAB_10248e23;
  case 9:
    uVar7 = sub_10249d80(param_1);
    if ((char)uVar7 == '\0') goto LAB_10248e65;
    iVar4 = sub_10245510((int)this);
    if (iVar4 == 0xb) {
      uVar7 = sub_10249ca0((int)param_1);
      cVar1 = (char)uVar7;
      goto joined_r0x10248e5f;
    }
    if (*(int *)((int)this + 0x28) != 4) {
      sub_1020f990(local_44,"object key");
      local_8._0_1_ = 1;
      sub_json_10245390(this,local_74,4,local_44);
      local_8._0_1_ = 2;
      uVar10 = sub_10245600((void *)((int)this + 0x30),&local_5c);
      puVar3 = (uint32_t *)uVar10;
      pvVar6 = sub_10248c90(puVar3,(int)((ulonglong)uVar10 >> 0x20));
      local_8._0_1_ = 3;
      sub_10245520((void *)((int)this + 0x30),local_8c);
      local_8 = CONCAT31(local_8._1_3_,4);
      goto LAB_10249324;
    }
    local_2c = (void *)((int)this + 0x30);
    iVar4 = sub_1024a4d0((int)local_2c);
    uVar7 = sub_10249d00(param_1,iVar4);
    if ((char)uVar7 == '\0') goto LAB_10248e65;
    iVar4 = sub_10245510((int)this);
    if (iVar4 == 0xc) goto code_r0x10248e9f;
    sub_1020f990(local_44,"object separator");
    local_8._0_1_ = 5;
    sub_json_10245390(this,local_8c,0xc,local_44);
    pvVar6 = local_2c;
    local_8._0_1_ = 6;
    uVar10 = sub_10245600(local_2c,&local_5c);
    puVar3 = (uint32_t *)uVar10;
    pvVar5 = sub_10248c90(puVar3,(int)((ulonglong)uVar10 >> 0x20));
    local_8._0_1_ = 7;
    sub_10245520(pvVar6,local_74);
    local_8 = CONCAT31(local_8._1_3_,8);
    uVar11 = 0x1024913f;
    uVar7 = sub_10245600(pvVar6,&local_50);
    uVar8 = sub_10249570(param_1,puVar3,uVar11,(int)pvVar5,uVar7);
    uVar9 = (uint8_t)uVar8;
    thunk_FUN_1020fc60(local_74);
    thunk_FUN_10238630(&local_ac);
    thunk_FUN_1020fc60(local_8c);
    thunk_FUN_1020fc60((uint32_t *)local_44);
LAB_102494fb:
    thunk_FUN_1020fb40(local_24);
    ExceptionList = local_10;
    return uVar9;
  case 0xe:
    sub_1020f990(local_44,"value");
    local_8._0_1_ = 0xd;
    sub_json_10245390(this,local_74,0,local_44);
    local_8._0_1_ = 0xe;
    uVar10 = sub_10245600((void *)((int)this + 0x30),&local_5c);
    puVar3 = (uint32_t *)uVar10;
    pvVar6 = sub_10248c90(puVar3,(int)((ulonglong)uVar10 >> 0x20));
    local_8._0_1_ = 0xf;
    sub_10245520((void *)((int)this + 0x30),local_8c);
    local_8 = CONCAT31(local_8._1_3_,0x10);
    goto LAB_10249324;
  }
  if (cVar1 == '\0') {
LAB_10248e65:
    uVar9 = 0;
    goto LAB_102494fb;
  }
LAB_10248fc2:
  bVar2 = sub_102471c0((int)local_24);
  if (bVar2) {
    uVar9 = 1;
    goto LAB_102494fb;
  }
  puVar3 = (uint32_t *)sub_1024a8f0(this_00,(void *)((int)&local_5c + 4));
  bVar2 = sub_1024a870(puVar3);
  if (bVar2) {
    iVar4 = sub_10245510((int)this);
    if (iVar4 == 0xd) {
      sub_10245510((int)this);
      goto LAB_10248e23;
    }
    if (*(int *)((int)this + 0x28) == 10) {
      uVar7 = sub_10249c10((int)param_1);
      if ((char)uVar7 == '\0') goto LAB_10248e65;
      bVar2 = sub_102471c0((int)local_24);
      if (bVar2) {
        uVar8 = 0x30cc;
LAB_102490b4:
        _wassert(L"!states.empty()",
                 L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                 ,uVar8);
      }
LAB_102490c3:
      sub_1024a8b0(local_24);
      local_25 = '\x01';
      goto LAB_10248e23;
    }
    sub_1020f990(local_44,"array");
    local_8._0_1_ = 0x15;
    sub_json_10245390(this,local_74,10,local_44);
    local_8._0_1_ = 0x16;
    uVar10 = sub_10245600((void *)((int)this + 0x30),&local_5c);
    puVar3 = (uint32_t *)uVar10;
    pvVar6 = sub_10248c90(puVar3,(int)((ulonglong)uVar10 >> 0x20));
    local_8._0_1_ = 0x17;
    sub_10245520((void *)((int)this + 0x30),local_8c);
    local_8 = CONCAT31(local_8._1_3_,0x18);
LAB_10249324:
    pvVar5 = (void *)((int)this + 0x30);
  }
  else {
    iVar4 = sub_10245510((int)this);
    if (iVar4 != 0xd) {
      if (*(int *)((int)this + 0x28) == 0xb) {
        uVar7 = sub_10249ca0((int)param_1);
        if ((char)uVar7 != '\0') {
          bVar2 = sub_102471c0((int)local_24);
          if (bVar2) {
            uVar8 = 0x3102;
            goto LAB_102490b4;
          }
          goto LAB_102490c3;
        }
        goto LAB_10248e65;
      }
      sub_1020f990(local_44,"object");
      local_8._0_1_ = 0x21;
      sub_json_10245390(this,local_74,0xb,local_44);
      local_8._0_1_ = 0x22;
      uVar10 = sub_10245600((void *)((int)this + 0x30),&local_5c);
      puVar3 = (uint32_t *)uVar10;
      pvVar6 = sub_10248c90(puVar3,(int)((ulonglong)uVar10 >> 0x20));
      local_8._0_1_ = 0x23;
      sub_10245520((void *)((int)this + 0x30),local_8c);
      local_8 = CONCAT31(local_8._1_3_,0x24);
      goto LAB_10249324;
    }
    pvVar6 = (void *)((int)this + 0x30);
    local_2c = pvVar6;
    iVar4 = sub_10245510((int)this);
    if (iVar4 == 4) {
      iVar4 = sub_1024a4d0((int)pvVar6);
      uVar7 = sub_10249d00(param_1,iVar4);
      if ((char)uVar7 == '\0') goto LAB_10248e65;
      iVar4 = sub_10245510((int)this);
      if (iVar4 == 0xc) {
        sub_10245510((int)this);
        goto LAB_10248e23;
      }
      sub_1020f990(local_44,"object separator");
      local_8._0_1_ = 0x1d;
      sub_json_10245390(this,local_74,0xc,local_44);
      local_8._0_1_ = 0x1e;
      uVar10 = sub_10245600(pvVar6,&local_5c);
      puVar3 = (uint32_t *)uVar10;
      pvVar6 = sub_10248c90(puVar3,(int)((ulonglong)uVar10 >> 0x20));
      local_8._0_1_ = 0x1f;
      sub_10245520(local_2c,local_8c);
      local_8 = CONCAT31(local_8._1_3_,0x20);
      pvVar5 = local_2c;
    }
    else {
      sub_1020f990(local_44,"object key");
      local_8._0_1_ = 0x19;
      sub_json_10245390(this,local_74,4,local_44);
      local_8._0_1_ = 0x1a;
      uVar10 = sub_10245600(pvVar6,&local_5c);
      puVar3 = (uint32_t *)uVar10;
      pvVar6 = sub_10248c90(puVar3,(int)((ulonglong)uVar10 >> 0x20));
      local_8._0_1_ = 0x1b;
      sub_10245520(local_2c,local_8c);
      local_8 = CONCAT31(local_8._1_3_,0x1c);
      pvVar5 = local_2c;
    }
  }
  uVar11 = 0x1024932f;
  uVar7 = sub_10245600(pvVar5,&local_50);
  uVar8 = sub_10249570(param_1,puVar3,uVar11,(int)pvVar6,uVar7);
  uVar9 = (uint8_t)uVar8;
  thunk_FUN_1020fc60(local_8c);
  thunk_FUN_10238630(&local_ac);
LAB_10249352:
  thunk_FUN_1020fc60(local_74);
  thunk_FUN_1020fc60((uint32_t *)local_44);
  goto LAB_102494fb;
code_r0x10248e9f:
  local_26 = 0;
  sub_10245b40(local_24,&local_26);
  sub_10245510((int)this);
  goto LAB_10248e23;
}


// 0x10249570  (ghidra: FUN_10249570)  [gap]
uint __thiscall
sub_10249570(void *this,uint32_t param_2,uint32_t param_3,int param_4,uint reg_EAX)

{
  uint8_t local_28 [36];
  
  *(uint8_t *)((int)this + 0x14) = 1;
  if (*(char *)((int)this + 0x15) == '\0') {
    return reg_EAX & 0xffffff00;
  }
  sub_10240200(local_28,param_4);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_10393b84);
}


// 0x102495b0  (ghidra: FUN_102495b0)  [gap]
uint8_t * sub_102495b0(void)

{
  return &DAT_104e0a74;
}


// 0x102495c0  (ghidra: FUN_102495c0)  [gap]
uint32_t sub_102495c0(void)

{
  return 0x2c;
}


// 0x102495d0  (ghidra: FUN_102495d0)  [gap]
uint8_t * sub_102495d0(void)

{
  return &DAT_104e0abc;
}


// 0x102495e0  (ghidra: FUN_102495e0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall
sub_102495e0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  void *this;
  int *extraout_ECX;
  uint32_t local_28;
  uint32_t local_24;
  uint64_t local_20;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030634d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = param_1;
  local_24 = param_2;
  iVar1 = sub_1020faf0(&local_24);
  sub_1020f420(&local_20);
  sub_10212360(this,param_3,param_4);
  local_8 = 0;
  for (iVar2 = sub_1020faf0(&local_28); iVar2 != iVar1; iVar2 = iVar2 + 0x28) {
    uVar3 = sub_1020fe80(iVar2);
    sub_1024c5c0(&local_20,uVar3);
  }
  uVar3 = sub_10212340((uint32_t *)&local_20);
  sub_10249c00(extraout_ECX);
  ExceptionList = local_10;
  return uVar3;
}


// 0x10249690  (ghidra: FUN_10249690)  [gap]
int __fastcall sub_10249690(uint param_1)

{
  uint32_t auStack_10 [3];
  
  if (param_1 < 0x6666667) {
    return param_1 * 0x28;
  }
  sub_1020f2f0(auStack_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(auStack_10,(ThrowInfo *)&DAT_10393b48);
}


// 0x102496b0  (ghidra: FUN_102496b0)  [gap]
uint32_t * __thiscall sub_json_102496b0(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305a3e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10237930(this);
  local_8 = 0;
  uVar1 = sub_1020fe80(param_1);
  pcVar2 = (char *)sub_1020fe80("cannot use operator[] with a numeric argument with ");
  pcVar3 = sub_10247cf0(pcVar2,uVar1);
  sub_1023e080(this,(uint)pcVar3);
  sub_10247d20(this,pcVar2,uVar1);
  ExceptionList = local_10;
  return this;
}


// 0x10249740  (ghidra: FUN_10249740)  [gap]
uint32_t * __fastcall
sub_10249740(uint32_t *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  char *pcVar4;
  uint32_t uVar5;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305bee;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10237930(param_1);
  local_8 = 0;
  uVar1 = sub_1020fe80(param_4);
  uVar2 = sub_1020fe80("; last read: \'");
  puVar3 = (uint32_t *)sub_1020fe80(param_2);
  pcVar4 = sub_1024c5f0((char *)*puVar3,uVar2,uVar1);
  sub_1023e080(param_1,(uint)pcVar4);
  uVar5 = sub_1020fe80(param_5);
  sub_1024c630(param_1,puVar3,uVar2,uVar1,uVar5);
  ExceptionList = local_10;
  return param_1;
}


// 0x102497f0  (ghidra: FUN_102497f0)  [gap]
uint32_t * __fastcall sub_102497f0(uint32_t *param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305a3e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10237930(param_1);
  local_8 = 0;
  uVar1 = sub_1020fe80(param_3);
  pcVar2 = (char *)sub_1020fe80(param_2);
  pcVar3 = sub_10247cf0(pcVar2,uVar1);
  sub_1023e080(param_1,(uint)pcVar3);
  sub_10247d20(param_1,pcVar2,uVar1);
  ExceptionList = local_10;
  return param_1;
}

