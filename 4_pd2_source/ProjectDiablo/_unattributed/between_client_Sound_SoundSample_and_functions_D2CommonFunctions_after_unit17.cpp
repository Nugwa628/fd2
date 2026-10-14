/*
 * _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_after_unit17.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x10237660 - 0x10239530
 * Functions     : 111
 * Attribution   : gap=111
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x10237660  (ghidra: FUN_10237660)  [gap]
int __cdecl
sub_10237660(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  uint32_t *puVar1;
  int iVar2;
  
  puVar1 = (uint32_t *)sub_10219540();
  iVar2 = __stdio_common_vsnprintf_s(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}


// 0x102376a0  (ghidra: FUN_102376a0)  [gap]
void __thiscall sub_102376a0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  sub_10237660(this,param_2,this,param_3);
  return;
}


// 0x102376c0  (ghidra: FUN_102376c0)  [gap]
LPWSTR __fastcall sub_102376c0(LPCSTR param_1)

{
  uint cchWideChar;
  LPWSTR lpWideCharStr;
  
  cchWideChar = MultiByteToWideChar(0x4e4,0,param_1,-1,(LPWSTR)0x0,0);
  lpWideCharStr =
       (LPWSTR)FUN_103022ad(-(uint)((int)((ulonglong)cchWideChar * 2 >> 0x20) != 0) |
                            (uint)((ulonglong)cchWideChar * 2));
  MultiByteToWideChar(0x4e4,0,param_1,-1,lpWideCharStr,cchWideChar);
  return lpWideCharStr;
}


// 0x10237720  (ghidra: FUN_10237720)  [gap]
LPSTR __fastcall sub_10237720(LPCWSTR param_1)

{
  uint cbMultiByte;
  LPSTR lpMultiByteStr;
  
  cbMultiByte = WideCharToMultiByte(0x4e4,0,param_1,-1,(LPSTR)0x0,0,"?",(LPBOOL)0x0);
  lpMultiByteStr = (LPSTR)FUN_103022ad(cbMultiByte);
  WideCharToMultiByte(0x4e4,0,param_1,-1,lpMultiByteStr,cbMultiByte,"?",(LPBOOL)0x0);
  return lpMultiByteStr;
}


// 0x10237780  (ghidra: FUN_10237780)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl sub_10237780(uint32_t param_1,uint32_t param_2)

{
  uint32_t extraout_ECX;
  WCHAR local_304 [304];
  CHAR local_a4 [156];
  uint local_8;
  uint8_t  stack0x0000000c;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  memset(local_a4,0,0x98);
  sub_102376a0(local_a4,extraout_ECX,param_2,&stack0x0000000c);
  MultiByteToWideChar(0x4e4,1,local_a4,0x98,local_304,0x130);
  sub_6fb2d850(local_304,param_1);
  return;
}


// 0x10237810  (ghidra: FUN_10237810)  [gap]
uint64_t __fastcall sub_10237810(uint32_t *param_1)

{
  uint64_t uVar1;
  
  thunk_FUN_1020fc60(param_1 + 7);
  uVar1 = thunk_FUN_1020fc60(param_1);
  return uVar1;
}


// 0x10237830  (ghidra: FUN_10237830)  [gap]
void __thiscall sub_10237830(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_1);
  sub_1020fe80(*(uint32_t *)((int)this + 4));
  sub_10237bb0(uVar1);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
  return;
}


// 0x10237860  (ghidra: FUN_10237860)  [gap]
uint32_t * __thiscall sub_10237860(void *this,uint16_t *param_1)

{
  sub_10210440(this);
  sub_10237990(param_1);
  return this;
}


// 0x10237880  (ghidra: FUN_10237880)  [gap]
void * __thiscall sub_10237880(void *this,void *param_1,uint param_2)

{
  sub_10237a40(param_1,this,param_2);
  return param_1;
}


// 0x102378a0  (ghidra: FUN_102378a0)  [gap]
void __fastcall sub_102378a0(int param_1)

{
  size_t sVar1;
  uint64_t uVar2;
  uint32_t in_stack_ffffffe0;
  uint32_t in_stack_ffffffe4;
  
  sVar1 = sub_1020fe50("0123456789");
  uVar2 = sub_1020fe30(param_1);
  sub_10237cd0((byte *)uVar2,*(int *)(param_1 + 0x10),in_stack_ffffffe0,in_stack_ffffffe4,sVar1);
  return;
}


// 0x102378e0  (ghidra: FUN_102378e0)  [gap]
void __fastcall sub_102378e0(void *param_1)

{
  sub_10231d20(param_1,0);
  sub_102379e0(param_1);
  return;
}


// 0x10237900  (ghidra: FUN_10237900)  [gap]
void * __thiscall sub_10237900(void *this,uint32_t param_1)

{
  void *pvVar1;
  int extraout_ECX;
  
  pvVar1 = (void *)sub_1020fe80(param_1);
  if (this != pvVar1) {
    sub_10237a20(this,extraout_ECX);
  }
  return this;
}


// 0x10237930  (ghidra: FUN_10237930)  [gap]
uint32_t __fastcall sub_10237930(uint32_t *param_1)

{
  uint8_t *extraout_ECX;
  uint32_t extraout_ECX_00;
  
  sub_10210450(param_1);
  sub_1020fca0(extraout_ECX);
  return extraout_ECX_00;
}


// 0x10237950  (ghidra: FUN_10237950)  [gap]
uint64_t __fastcall sub_10237950(uint *param_1)

{
  return CONCAT44(param_1[3] + param_1[1] + (uint)CARRY4(param_1[2],*param_1),param_1[2] + *param_1)
  ;
}


// 0x10237960  (ghidra: FUN_10237960)  [gap]
uint32_t * __thiscall sub_10237960(void *this,uint32_t param_1,uint32_t param_2)

{
  *(uint32_t *)this = param_1;
  *(uint32_t *)((int)this + 4) = param_2;
  *(uint32_t *)((int)this + 8) = 0;
  *(uint32_t *)((int)this + 0xc) = 0;
  *(uint64_t *)((int)this + 0x10) = 0;
  return this;
}


// 0x10237990  (ghidra: FUN_10237990)  [gap]
void sub_10237990(uint16_t *param_1)

{
  sub_10231cf0(param_1);
  client_DrawHoverItem_10225130(param_1);
  return;
}


// 0x102379b0  (ghidra: FUN_102379b0)  [gap]
void __thiscall sub_102379b0(void *this,int param_1)

{
  uint64_t uVar1;
  uint32_t uStack_8;
  
  uStack_8 = (uint)this & 0xffffff;
  uVar1 = sub_1020fe30((int)this);
  *(int *)((int)this + 0x10) = param_1;
  sub_10210050((uint8_t *)((int)uVar1 + param_1),(uint8_t *)((int)&uStack_8 + 3));
  return;
}


// 0x102379e0  (ghidra: FUN_102379e0)  [gap]
void * __fastcall sub_102379e0(void *param_1)

{
  int iVar1;
  uint64_t uVar2;
  
  sub_10237b90(param_1,0);
  uVar2 = sub_1020fe30((int)param_1);
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  *(int *)((int)param_1 + 0x10) = *(int *)((int)param_1 + 0x10) - iVar1;
  sub_10210060((void *)uVar2,(void *)(iVar1 + (int)(void *)uVar2),*(int *)((int)param_1 + 0x10) + 1)
  ;
  return param_1;
}


// 0x10237a20  (ghidra: FUN_10237a20)  [gap]
void __thiscall sub_10237a20(void *this,int param_1)

{
  uint64_t uVar1;
  
  uVar1 = sub_1020fe30(param_1);
  sub_1020fd00(this,(void *)uVar1,*(uint *)((int)((ulonglong)uVar1 >> 0x20) + 0x10));
  return;
}


// 0x10237a40  (ghidra: FUN_10237a40)  [gap]
uint32_t * __thiscall sub_10237a40(void *this,void *param_1,uint param_2)

{
  uint8_t *extraout_ECX;
  void *this_00;
  
  sub_10210440(this);
  sub_1020fca0(extraout_ECX);
  sub_10237b50(this_00,param_1,param_2);
  return this;
}


// 0x10237a70  (ghidra: FUN_10237a70)  [gap]
uint __fastcall sub_10237a70(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = sub_102100c0();
  uVar2 = *param_1;
  if (uVar2 == uVar1) {
    uVar2 = (uint)(uVar1 == 0);
  }
  return uVar2;
}


// 0x10237a90  (ghidra: FUN_10237a90)  [gap]
bool __cdecl sub_10237a90(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}


// 0x10237ab0  (ghidra: FUN_10237ab0)  [gap]
uint8_t __cdecl sub_10237ab0(uint8_t *param_1)

{
  return *param_1;
}


// 0x10237ac0  (ghidra: FUN_10237ac0)  [gap]
uint8_t __cdecl sub_10237ac0(uint8_t *param_1)

{
  return *param_1;
}


// 0x10237ad0  (ghidra: FUN_10237ad0)  [gap]
bool __fastcall sub_10237ad0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}


// 0x10237ae0  (ghidra: FUN_10237ae0)  [gap]
uint32_t sub_10237ae0(void)

{
  return 0xffff;
}


// 0x10237af0  (ghidra: FUN_10237af0)  [gap]
ushort __fastcall sub_10237af0(ushort *param_1)

{
  uint32_t uVar1;
  
  uVar1 = sub_10237ae0();
  if (*param_1 != (ushort)uVar1) {
    return *param_1;
  }
  return (ushort)((ushort)uVar1 == 0);
}


// 0x10237b20  (ghidra: FUN_10237b20)  [gap]
bool __cdecl sub_10237b20(short *param_1,short *param_2)

{
  return *param_1 == *param_2;
}


// 0x10237b40  (ghidra: FUN_10237b40)  [gap]
uint16_t __cdecl sub_10237b40(uint16_t *param_1)

{
  return *param_1;
}


// 0x10237b50  (ghidra: FUN_10237b50)  [gap]
void __thiscall sub_10237b50(void *this,void *param_1,uint param_2)

{
  uint uVar1;
  uint64_t uVar2;
  
  sub_10231d20(param_1,param_2);
  uVar1 = sub_10237b90(param_1,param_2);
  uVar2 = sub_1020fe30((int)param_1);
  sub_1020fd00(this,(void *)((int)uVar2 + param_2),uVar1);
  return;
}


// 0x10237b90  (ghidra: FUN_10237b90)  [gap]
uint __thiscall sub_10237b90(void *this,uint param_1)

{
  uint *puVar1;
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */
  
  param_1 = *(int *)((int)this + 0x10) - param_1;
  puVar1 = sub_10210430((uint *)&stack0x00000008,&param_1);
  return *puVar1;
}


// 0x10237bb0  (ghidra: FUN_10237bb0)  [gap]
void __cdecl sub_10237bb0(uint32_t param_1)

{
  uint8_t *puVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  puVar1 = (uint8_t *)sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_10231cb0(this,puVar1);
  return;
}


// 0x10237be0  (ghidra: FUN_10237be0)  [gap]
int __thiscall sub_10237be0(void *this,int param_1,uint32_t param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint32_t uVar4;
  uint32_t extraout_EDX;
  int iVar5;
  
  iVar1 = *(int *)this;
  iVar5 = (*(int *)((int)this + 4) - iVar1 >> 3) * -0x55555555;
  uVar2 = sub_10210c40();
  if (iVar5 - uVar2 != 0) {
    uVar2 = iVar5 + 1;
    uVar3 = sub_10237fd0(this,uVar2);
    iVar5 = sub_10210e10(uVar3);
    iVar1 = iVar5 + ((param_1 - iVar1) / 0x18) * 0x18;
    uVar4 = sub_1020fe80(param_2);
    sub_1020fe80(extraout_EDX);
    sub_10237bb0(uVar4);
    if (param_1 == *(int *)((int)this + 4)) {
      sub_10238000(this,*(uint32_t *)this,*(int *)((int)this + 4),iVar5);
    }
    else {
      sub_10238020(this,*(uint32_t *)this,param_1,iVar5);
      sub_10238020(this,param_1,*(uint32_t *)((int)this + 4),iVar1 + 0x18);
    }
    sub_10237f80(this,iVar5,uVar2,uVar3);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_10210bb0();
}


// 0x10237cb0  (ghidra: FUN_10237cb0)  [gap]
void * __fastcall sub_10237cb0(void *param_1)

{
  memset(param_1,0,0x100);
  return param_1;
}


// 0x10237cd0  (ghidra: FUN_10237cd0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __fastcall
sub_10237cd0(byte *param_1,int param_2,uint32_t param_3,uint32_t param_4,size_t param_5)

{
  char cVar1;
  uint32_t uVar2;
  int iVar3;
  uint32_t extraout_ECX;
  int extraout_EDX;
  byte *pbVar4;
  uint32_t in_stack_fffffed0;
  uint32_t uVar5;
  uint local_114;
  uint8_t local_110 [260];
  uint local_c;
  
  local_c = DAT_1039800c ^ (uint)&local_114;
  if (param_2 != 0) {
    sub_10237cb0(local_110);
    uVar5 = 0x10237d12;
    uVar2 = sub_10237e40(local_110,extraout_ECX,&DAT_1037ced0 + param_5);
    if ((char)uVar2 == '\0') {
      local_114 = local_114 & 0xffffff00;
      iVar3 = sub_10238170((char *)param_1,param_2,in_stack_fffffed0,uVar5,param_5);
      return iVar3;
    }
    pbVar4 = param_1;
    while (pbVar4 < param_1 + param_2) {
      cVar1 = sub_10237e30(local_110,*pbVar4);
      if (cVar1 == '\0') {
        return extraout_EDX - (int)param_1;
      }
      pbVar4 = (byte *)(extraout_EDX + 1);
    }
  }
  return -1;
}


// 0x10237da0  (ghidra: FUN_10237da0)  [gap]
uint __fastcall sub_10237da0(int param_1,uint param_2,uint param_3,byte *param_4,uint param_5)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  if ((param_5 <= param_2) && (param_3 <= param_2 - param_5)) {
    if (param_5 == 0) {
      return param_3;
    }
    iVar1 = (param_1 - param_5) + param_2 + 1;
    for (pbVar2 = (byte *)sub_10238040((void *)(param_3 + param_1),iVar1 - (int)(param_3 + param_1),
                                       (char *)param_4); pbVar2 != (byte *)0x0;
        pbVar2 = (byte *)sub_10238040(pbVar2 + 1,iVar1 - (int)(pbVar2 + 1),(char *)param_4)) {
      uVar3 = sub_10238060(pbVar2,param_4,param_5);
      if (uVar3 == 0) {
        return (int)pbVar2 - param_1;
      }
    }
  }
  return 0xffffffff;
}


// 0x10237e30  (ghidra: FUN_10237e30)  [gap]
uint8_t __thiscall sub_10237e30(void *this,byte param_1)

{
  return *(uint8_t *)((uint)param_1 + (int)this);
}


// 0x10237e40  (ghidra: FUN_10237e40)  [gap]
uint32_t __thiscall sub_10237e40(void *this,uint32_t param_1,byte *param_2)

{
  byte *pbVar1;
  
  for (pbVar1 = &DAT_1037ced0; param_2 != pbVar1; pbVar1 = pbVar1 + 1) {
    *(uint8_t *)((uint)*pbVar1 + (int)this) = 1;
  }
  return CONCAT31((int3)((uint)pbVar1 >> 8),1);
}


// 0x10237e70  (ghidra: FUN_10237e70)  [gap]
uint8_t __fastcall sub_10237e70(int param_1)

{
  return *(uint8_t *)(param_1 + 4);
}


// 0x10237e80  (ghidra: FUN_10237e80)  [gap]
void __fastcall sub_10237e80(int *param_1)

{
  bool bVar1;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_103047e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar1 = std::uncaught_exception();
  if (!bVar1) {
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::_Osfx
              ((basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)*param_1);
  }
  sub_102380c0(param_1);
  ExceptionList = local_10;
  return;
}


// 0x10237ee0  (ghidra: FUN_10237ee0)  [gap]
void * __thiscall
sub_10237ee0(void *this,basic_ostream<wchar_t,std::char_traits<wchar_t>_> *param_1)

{
  bool bVar1;
  bool bVar2;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *this_00;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030480d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10238110(this,(int *)param_1);
  local_8 = 0;
  bVar1 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(int *)param_1 + 4)));
  bVar2 = false;
  if (bVar1) {
    this_00 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::tie
                        ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                         (param_1 + *(int *)(*(int *)param_1 + 4)));
    if ((this_00 == (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)0x0) ||
       (this_00 == param_1)) {
      bVar2 = true;
    }
    else {
      std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::flush(this_00);
      bVar2 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(int *)param_1 + 4)));
    }
  }
  *(bool *)((int)this + 4) = bVar2;
  ExceptionList = local_10;
  return this;
}


// 0x10237f80  (ghidra: FUN_10237f80)  [gap]
void __thiscall sub_10237f80(void *this,int param_1,int param_2,int param_3)

{
  if (*(int *)this != 0) {
    sub_1020fed0(*(int *)this,*(int *)((int)this + 4));
    sub_1020fef0(*(void **)this,(*(int *)((int)this + 8) - (int)*(void **)this >> 3) * -0x55555555);
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_1 + param_2 * 0x18;
  *(int *)((int)this + 8) = param_1 + param_3 * 0x18;
  return;
}


// 0x10237fd0  (ghidra: FUN_10237fd0)  [gap]
uint __thiscall sub_10237fd0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = sub_10238160(this);
  uVar2 = sub_10210c40();
  if (uVar1 <= uVar2 - (uVar1 >> 1)) {
    uVar2 = (uVar1 >> 1) + uVar1;
    if (uVar2 < param_1) {
      uVar2 = param_1;
    }
  }
  return uVar2;
}


// 0x10238000  (ghidra: FUN_10238000)  [gap]
void __thiscall sub_10238000(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  sub_10238140(this,param_1,param_2,param_3);
  return;
}


// 0x10238020  (ghidra: FUN_10238020)  [gap]
void __thiscall sub_10238020(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = thunk_FUN_1020fe80(this);
  sub_102381b0(param_1,param_2,param_3,uVar1);
  return;
}


// 0x10238040  (ghidra: FUN_10238040)  [gap]
void __fastcall sub_10238040(void *param_1,size_t param_2,char *param_3)

{
  memchr(param_1,(int)*param_3,param_2);
  return;
}


// 0x10238060  (ghidra: FUN_10238060)  [gap]
uint __fastcall sub_10238060(byte *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  while (uVar1 = param_3 - 4, 3 < param_3) {
    if (*(int *)param_1 != *(int *)param_2) goto LAB_10238086;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
    param_3 = uVar1;
  }
  if (uVar1 != 0xfffffffc) {
LAB_10238086:
    bVar2 = *param_1 < *param_2;
    if ((*param_1 != *param_2) ||
       ((uVar1 != 0xfffffffd &&
        ((bVar2 = param_1[1] < param_2[1], param_1[1] != param_2[1] ||
         ((uVar1 != 0xfffffffe &&
          ((bVar2 = param_1[2] < param_2[2], param_1[2] != param_2[2] ||
           ((uVar1 != 0xffffffff && (bVar2 = param_1[3] < param_2[3], param_1[3] != param_2[3]))))))
         )))))) {
      return -(uint)bVar2 | 1;
    }
  }
  return 0;
}


// 0x102380c0  (ghidra: FUN_102380c0)  [gap]
void __fastcall sub_102380c0(int *param_1)

{
  uint uVar1;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *pbVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t uStack_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_10304830;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pbVar2 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                     ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                      (*(int *)(*(int *)*param_1 + 4) + *param_1));
  if (pbVar2 != (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0) {
    (**(code **)(*(int *)pbVar2 + 8))(uVar1);
  }
  ExceptionList = local_10;
  return;
}


// 0x10238110  (ghidra: FUN_10238110)  [gap]
uint32_t * __thiscall sub_10238110(void *this,int *param_1)

{
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *pbVar1;
  
  *(int **)this = param_1;
  pbVar1 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                     ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                      (*(int *)(*param_1 + 4) + (int)param_1));
  if (pbVar1 != (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0) {
    (**(code **)(*(int *)pbVar1 + 4))();
  }
  return this;
}


// 0x10238140  (ghidra: FUN_10238140)  [gap]
void __thiscall sub_10238140(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = thunk_FUN_1020fe80(this);
  sub_102381b0(param_1,param_2,param_3,uVar1);
  return;
}


// 0x10238160  (ghidra: FUN_10238160)  [gap]
int __fastcall sub_10238160(int *param_1)

{
  return (param_1[2] - *param_1 >> 3) * -0x55555555;
}


// 0x10238170  (ghidra: FUN_10238170)  [gap]
int __fastcall
sub_10238170(char *param_1,int param_2,uint32_t param_3,uint32_t param_4,size_t param_5)

{
  int iVar1;
  char *pcVar2;
  
  if (param_2 != 0) {
    for (pcVar2 = param_1; pcVar2 < param_1 + param_2; pcVar2 = pcVar2 + 1) {
      iVar1 = sub_10238040(&DAT_1037ced0,param_5,pcVar2);
      if (iVar1 == 0) {
        return (int)pcVar2 - (int)param_1;
      }
    }
  }
  return -1;
}


// 0x102381b0  (ghidra: FUN_102381b0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall
sub_102381b0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

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
  for (iVar2 = sub_1020faf0(&local_1c); iVar2 != iVar1; iVar2 = iVar2 + 0x18) {
    uVar3 = sub_1020fe80(iVar2);
    sub_10238230(&local_14,uVar3);
  }
  uVar3 = sub_10212340((uint32_t *)&local_14);
  sub_10212390(extraout_ECX);
  return uVar3;
}


// 0x10238230  (ghidra: FUN_10238230)  [gap]
void __thiscall sub_10238230(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_1);
  sub_1020fe80(*(uint32_t *)((int)this + 4));
  sub_10237bb0(uVar1);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
  return;
}


// 0x10238260  (ghidra: FUN_10238260)  [gap]
int sub_10238260(void)

{
  short sVar1;
  
  sVar1 = dclass();
  return (int)sVar1;
}


// 0x10238290  (ghidra: FUN_10238290)  [gap]
bool sub_10238290(void)

{
  int iVar1;
  
  iVar1 = dsign();
  return iVar1 != 0;
}


// 0x102382b0  (ghidra: FUN_102382b0)  [gap]
uint32_t sub_102382b0(void)

{
  return 0x80000000;
}


// 0x102382c0  (ghidra: FUN_102382c0)  [gap]
uint64_t sub_102382c0(void)

{
  return 0x7fffffffffffffff;
}


// 0x102382d0  (ghidra: FUN_102382d0)  [gap]
uint64_t sub_102382d0(void)

{
  return 0xffffffffffffffff;
}


// 0x102382e0  (ghidra: FUN_102382e0)  [gap]
uint32_t * __fastcall sub_102382e0(uint32_t *param_1)

{
  *param_1 = std::exception::vftable;
  *(uint64_t *)(param_1 + 1) = 0;
  return param_1;
}


// 0x10238300  (ghidra: FUN_10238300)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t * __thiscall sub_10238300(void *this,uint32_t param_1)

{
  uint32_t local_10;
  uint8_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_10 = param_1;
  local_c = 1;
  *(uint8_t ***)this = std::exception::vftable;
  *(uint64_t *)((int)this + 4) = 0;
  __std_exception_copy(&local_10,(uint64_t *)((int)this + 4));
  return this;
}


// 0x10238350  (ghidra: FUN_10238350)  [gap]
uint32_t __fastcall sub_10238350(uint32_t param_1)

{
  return param_1;
}


// 0x10238360  (ghidra: FUN_10238360)  [gap]
uint32_t * __thiscall sub_10238360(void *this,uint32_t param_1)

{
  sub_10238300(this,param_1);
  *(uint8_t ***)this = std::runtime_error::vftable;
  return this;
}


// 0x10238380  (ghidra: FUN_10238380)  [gap]
uint32_t * __thiscall sub_10238380(void *this,int param_1)

{
  sub_1020f200(this,param_1);
  *(uint8_t ***)this = std::runtime_error::vftable;
  return this;
}


// 0x102383a0  (ghidra: FUN_102383a0)  [gap]
uint32_t * __fastcall sub_102383a0(uint32_t *param_1)

{
  sub_1020f1e0(param_1,"bad cast");
  *param_1 = std::bad_cast::vftable;
  return param_1;
}


// 0x102383c0  (ghidra: FUN_102383c0)  [gap]
void sub_102383c0(void)

{
  uint32_t local_10 [3];
  
  sub_102383a0(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_10393c44);
}


// 0x102383e0  (ghidra: FUN_102383e0)  [gap]
uint32_t * __thiscall sub_102383e0(void *this,int param_1)

{
  sub_1020f200(this,param_1);
  *(uint8_t ***)this = std::bad_cast::vftable;
  return this;
}


// 0x10238440  (ghidra: FUN_10238440)  [gap]
uint32_t sub_Hook_sub_6fb6dca0_10238440(void)

{
  return 0;
}


// 0x10238450  (ghidra: FUN_10238450)  [gap]
int __fastcall sub_10238450(int param_1)

{
  *(uint32_t *)(param_1 + 4) = 1;
  *(uint32_t *)(param_1 + 8) = 1;
  return param_1;
}


// 0x10238470  (ghidra: FUN_10238470)  [gap]
void __fastcall sub_10238470(int param_1)

{
  uint32_t *puVar1;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    puVar1 = (uint32_t *)(**(code **)(**(int **)(param_1 + 4) + 8))();
    if (puVar1 != (uint32_t *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}


// 0x10238490  (ghidra: FUN_10238490)  [gap]
int __thiscall sub_10238490(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  _Locimp *p_Var3;
  
  iVar1 = *(int *)((int)this + 4);
  if ((param_1 < *(uint *)(iVar1 + 0xc)) &&
     (iVar2 = *(int *)(*(int *)(iVar1 + 8) + param_1 * 4), iVar2 != 0)) {
    return iVar2;
  }
  if ((*(char *)(iVar1 + 0x14) != '\0') &&
     (p_Var3 = std::locale::_Getgloballocale(), param_1 < *(uint *)(p_Var3 + 0xc))) {
    return *(int *)(*(int *)(p_Var3 + 8) + param_1 * 4);
  }
  return 0;
}


// 0x102384d0  (ghidra: FUN_102384d0)  [gap]
void * __fastcall sub_102384d0(void *param_1)

{
  sub_10241490(param_1);
  return param_1;
}


// 0x102384f0  (ghidra: FUN_102384f0)  [gap]
uint32_t sub_102384f0(void)

{
  return 0;
}


// 0x10238500  (ghidra: FUN_10238500)  [gap]
void __fastcall sub_10238500(int param_1)

{
  void *local_10;
  uint8_t *puStack_c;
  uint32_t uStack_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_10304830;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*(int *)(param_1 + 0x10) + 4))(DAT_1039800c ^ (uint)&stack0xfffffffc);
  ExceptionList = local_10;
  return;
}


// 0x10238540  (ghidra: FUN_10238540)  [gap]
uint32_t * __thiscall sub_10238540(void *this,uint32_t param_1,uint32_t param_2)

{
  sub_102382e0(this);
  *(uint8_t ***)this = nlohmann::json_abi_v3_11_2::detail::exception::vftable;
  *(uint32_t *)((int)this + 0xc) = param_1;
  sub_10238360((void *)((int)this + 0x10),param_2);
  return this;
}


// 0x10238570  (ghidra: FUN_10238570)  [gap]
void * __fastcall sub_10238570(void *param_1,uint32_t param_2)

{
  void *pvVar1;
  uint32_t local_34 [6];
  void *local_1c;
  uint8_t local_15 [5];
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030485d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = param_1;
  pvVar1 = sub_1022fa80(local_34);
  local_8 = 0;
  local_15[0] = 0x2e;
  sub_json_102414e0(param_1,param_2,local_15,pvVar1);
  thunk_FUN_1020fc60(local_34);
  ExceptionList = local_10;
  return param_1;
}


// 0x102385e0  (ghidra: FUN_102385e0)  [gap]
void * __fastcall sub_102385e0(void *param_1)

{
  sub_1020f990(param_1,"");
  return param_1;
}


// 0x10238600  (ghidra: FUN_10238600)  [gap]
uint32_t * __thiscall sub_10238600(void *this,byte param_1)

{
  sub_10238630(this);
  if ((param_1 & 1) != 0) {
    FUN_1030207a(this);
  }
  return this;
}


// 0x10238630  (ghidra: FUN_10238630)  [gap]
void __fastcall sub_10238630(uint32_t *param_1)

{
  sub_1020f2e0(param_1 + 4);
  sub_1020f230(param_1);
  return;
}


// 0x10238650  (ghidra: FUN_10238650)  [gap]
uint32_t * __thiscall
sub_10238650(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  sub_10238540(this,param_1,param_3);
  *(uint32_t *)((int)this + 0x1c) = param_2;
  *(uint8_t ***)this = nlohmann::json_abi_v3_11_2::detail::parse_error::vftable;
  return this;
}


// 0x10238680  (ghidra: FUN_10238680)  [gap]
void * __fastcall sub_10238680(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  uint32_t extraout_ECX;
  uint32_t local_44 [6];
  uint32_t local_2c [6];
  void *local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10304895;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = param_1;
  pvVar1 = sub_102384d0(local_44);
  local_8 = 0;
  pvVar2 = sub_102384d0(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  sub_102415a0(param_1,pvVar2,extraout_ECX,pvVar1);
  thunk_FUN_1020fc60(local_2c);
  thunk_FUN_1020fc60(local_44);
  ExceptionList = local_10;
  return param_1;
}


// 0x10238710  [gap]
/* Library Function - Single Match
    public: virtual void * __thiscall MemMapReadOnly::`scalar deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall MemMapReadOnly::_scalar_deleting_destructor_(MemMapReadOnly *this,uint param_1)

{
  thunk_FUN_10238630((uint32_t *)this);
  if ((param_1 & 1) != 0) {
    FUN_1030207a(this);
  }
  return this;
}


// 0x10238740  [gap]
void __fastcall thunk_FUN_10238630(uint32_t *param_1)

{
  sub_1020f2e0(param_1 + 4);
  sub_1020f230(param_1);
  return;
}


// 0x10238750  (ghidra: FUN_10238750)  [gap]
uint32_t * __thiscall sub_10238750(void *this,uint32_t param_1,uint32_t param_2)

{
  sub_10238540(this,param_1,param_2);
  *(uint8_t ***)this = nlohmann::json_abi_v3_11_2::detail::invalid_iterator::vftable;
  return this;
}


// 0x10238770  (ghidra: FUN_10238770)  [gap]
uint32_t * __thiscall sub_10238770(void *this,byte param_1)

{
  thunk_FUN_10238630(this);
  if ((param_1 & 1) != 0) {
    FUN_1030207a(this);
  }
  return this;
}


// 0x102387a0  (ghidra: FUN_102387a0)  [gap]
uint32_t * __thiscall sub_102387a0(void *this,uint32_t param_1,uint32_t param_2)

{
  sub_10238540(this,param_1,param_2);
  *(uint8_t ***)this = nlohmann::json_abi_v3_11_2::detail::type_error::vftable;
  return this;
}


// 0x102387c0  (ghidra: FUN_102387c0)  [gap]
uint32_t * __thiscall sub_102387c0(void *this,uint32_t param_1,uint32_t param_2)

{
  sub_10238540(this,param_1,param_2);
  *(uint8_t ***)this = nlohmann::json_abi_v3_11_2::detail::out_of_range::vftable;
  return this;
}


// 0x102387e0  (ghidra: FUN_102387e0)  [gap]
uint32_t * __thiscall sub_102387e0(void *this,uint32_t param_1,uint32_t param_2)

{
  sub_10238540(this,500,param_2);
  *(uint8_t ***)this = nlohmann::json_abi_v3_11_2::detail::other_error::vftable;
  return this;
}


// 0x10238800  (ghidra: FUN_10238800)  [gap]
void __fastcall sub_10238800(int *param_1)

{
  int *piVar1;
  uint uVar2;
  ios_base *this;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_103047e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    this = (ios_base *)(*(int *)(*piVar1 + 4) + (int)piVar1);
    uVar2 = std::ios_base::rdstate(this);
    std::basic_ios<char,std::char_traits<char>_>::clear
              ((basic_ios<char,std::char_traits<char>_> *)this,uVar2 & 1,false);
  }
  ExceptionList = local_10;
  return;
}


// 0x10238860  (ghidra: FUN_10238860)  [gap]
uint32_t * __thiscall sub_10238860(void *this,int *param_1)

{
  basic_streambuf<char,std::char_traits<char>_> *pbVar1;
  
  *(int **)this = param_1;
  pbVar1 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,std::char_traits<char>_> *)
                      (*(int *)(*param_1 + 4) + (int)param_1));
  *(basic_streambuf<char,std::char_traits<char>_> **)((int)this + 4) = pbVar1;
  return this;
}


// 0x10238890  [gap]
/* Library Function - Single Match
    public: struct TPI1::PRECEX & __thiscall TPI1::PRECEX::operator=(struct TPI1::PRECEX &&)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

PRECEX * __thiscall TPI1::PRECEX::operator=(PRECEX *this,PRECEX *param_1)

{
  *(uint32_t *)this = *(uint32_t *)param_1;
  *(uint32_t *)(this + 4) = *(uint32_t *)(param_1 + 4);
  *(uint32_t *)param_1 = 0;
  *(uint32_t *)(param_1 + 4) = 0;
  return this;
}


// 0x102388c0  (ghidra: FUN_102388c0)  [gap]
int __fastcall sub_102388c0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ios_base *this;
  
  iVar1 = std::basic_streambuf<char,std::char_traits<char>_>::sbumpc
                    ((basic_streambuf<char,std::char_traits<char>_> *)param_1[1]);
  iVar2 = sub_102100c0();
  if (iVar1 == iVar2) {
    this = (ios_base *)(*(int *)(*(int *)*param_1 + 4) + *param_1);
    uVar3 = std::ios_base::rdstate(this);
    std::basic_ios<char,std::char_traits<char>_>::clear
              ((basic_ios<char,std::char_traits<char>_> *)this,uVar3 | 1,false);
  }
  return iVar1;
}


// 0x10238900  (ghidra: FUN_10238900)  [gap]
void * __fastcall sub_10238900(void *param_1,int *param_2)

{
  sub_10238860(param_1,param_2);
  return param_1;
}


// 0x10238920  (ghidra: FUN_10238920)  [gap]
void __fastcall sub_10238920(uint32_t *param_1)

{
  *param_1 = 0;
  return;
}


// 0x10238930  (ghidra: FUN_10238930)  [gap]
void __fastcall sub_10238930(uint32_t *param_1)

{
  *param_1 = 1;
  return;
}


// 0x10238940  (ghidra: FUN_10238940)  [gap]
bool __fastcall sub_10238940(int *param_1)

{
  return *param_1 == 0;
}


// 0x10238950  (ghidra: FUN_10238950)  [gap]
bool __cdecl sub_10238950(int param_1,int param_2)

{
  return param_1 == param_2;
}


// 0x10238960  (ghidra: FUN_10238960)  [gap]
int * __fastcall sub_10238960(int *param_1)

{
  *param_1 = *param_1 + 1;
  return param_1;
}


// 0x10238970  (ghidra: FUN_10238970)  [gap]
uint64_t sub_10238970(void)

{
  uint32_t uVar1;
  uint32_t *extraout_ECX;
  uint32_t extraout_EDX;
  
  uVar1 = sub_102382b0();
  *extraout_ECX = uVar1;
  return CONCAT44(extraout_EDX,extraout_ECX);
}


// 0x10238980  (ghidra: FUN_10238980)  [gap]
uint32_t * __thiscall
sub_10238980(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  *(uint32_t *)this = param_1;
  *(uint32_t *)((int)this + 8) = param_3;
  *(uint32_t *)((int)this + 4) = param_2;
  return this;
}


// 0x102389a0  (ghidra: FUN_102389a0)  [gap]
uint32_t __fastcall sub_102389a0(void *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint32_t extraout_ECX;
  uint uVar3;
  
  if (param_2[2] != param_3[2]) {
    _wassert(L"x.e == y.e",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x41d7);
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *param_3;
  if ((uVar2 <= param_3[1]) && ((uVar2 < param_3[1] || (uVar1 < uVar3)))) {
    _wassert(L"x.f >= y.f",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x41d8);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = *param_3;
  }
  sub_10238980(param_1,uVar1 - uVar3,(uVar2 - param_3[1]) - (uint)(uVar1 < uVar3),param_2[2]);
  return extraout_ECX;
}


// 0x10238a20  (ghidra: FUN_10238a20)  [gap]
uint32_t __fastcall sub_10238a20(void *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint32_t extraout_ECX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar6 = param_3[1];
  uVar7 = *param_2;
  uVar1 = param_2[1];
  lVar8 = __allmul(uVar6,0,uVar7,0);
  uVar3 = (uint)((ulonglong)lVar8 >> 0x20);
  lVar9 = __allmul(*param_3,0,uVar1,0);
  uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
  iVar2 = param_3[2] + 0x40 + param_2[2];
  lVar10 = __allmul(*param_3,0,uVar7,0);
  uVar7 = (uint)((ulonglong)lVar10 >> 0x20);
  uVar5 = uVar7 + (uint)lVar9;
  lVar10 = __allmul(uVar6,0,uVar1,0);
  lVar10 = lVar10 + (ulonglong)
                    ((uint)CARRY4(uVar7,(uint)lVar9) + (uint)CARRY4(uVar5,(uint)lVar8) +
                    (uint)(0x7fffffff < uVar5 + (uint)lVar8));
  uVar6 = (uint)lVar10;
  uVar7 = uVar6 + uVar4;
  sub_10238980(param_1,uVar7 + uVar3,
               (int)((ulonglong)lVar10 >> 0x20) + (uint)CARRY4(uVar6,uVar4) +
               (uint)CARRY4(uVar7,uVar3),iVar2);
  return extraout_ECX;
}


// 0x10238ad0  (ghidra: FUN_10238ad0)  [gap]
uint * __thiscall sub_10238ad0(void *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  if (param_1 == 0 && param_2 == 0) {
    _wassert(L"x.f != 0",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x4224);
  }
  if ((param_2 & 0x80000000) == 0) {
    do {
      do {
        param_2 = param_2 << 1 | param_1 >> 0x1f;
        param_3 = param_3 - 1;
        param_1 = param_1 * 2;
      } while (0 < (int)param_2);
    } while (-1 < (int)param_2);
  }
  *(uint *)this = param_1;
  *(uint *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  *(uint *)((int)this + 0xc) = param_4;
  return this;
}


// 0x10238b40  (ghidra: FUN_10238b40)  [gap]
uint32_t __fastcall sub_10238b40(void *param_1,uint32_t *param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  uint32_t reg_EAX;
  uint32_t extraout_ECX;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  iVar1 = param_2[2];
  if (iVar1 - param_3 < 0) {
    _wassert(L"delta >= 0",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x4237);
  }
  iVar3 = param_2[1];
  bVar2 = (byte)(iVar1 - param_3);
  lVar4 = __allshl(bVar2,iVar3,*param_2);
  uVar5 = __aullshr(bVar2,(uint)((ulonglong)lVar4 >> 0x20),(int)lVar4);
  reg_EAX = *param_2;
  if (uVar5 != CONCAT44(iVar3,reg_EAX)) {
    _wassert(L"((x.f << delta) >> delta) == x.f",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x4238);
    reg_EAX = *param_2;
    iVar3 = param_2[1];
  }
  lVar4 = __allshl(bVar2,iVar3,reg_EAX);
  sub_10238980(param_1,(int)lVar4,(int)((ulonglong)lVar4 >> 0x20),param_3);
  return extraout_ECX;
}


// 0x10238bd0  (ghidra: FUN_10238bd0)  [gap]
uint32_t * __thiscall sub_10238bd0(void *this,uint32_t *param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int iVar4;
  uint uVar5;
  uint32_t *puVar6;
  wchar_t *_Message;
  uint uVar7;
  
  if ((int)this < -0x5dc) {
    uVar7 = 0x4367;
    _Message = L"e >= -1500";
  }
  else {
    if ((int)this < 0x5dd) goto LAB_10238c13;
    uVar7 = 0x4368;
    _Message = L"e <= 1500";
  }
  _wassert(_Message,
           L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
           ,uVar7);
LAB_10238c13:
  iVar4 = (-0x3d - (int)this) * 0x13441;
  iVar4 = ((int)(iVar4 + (iVar4 >> 0x1f & 0x3ffffU)) >> 0x12) + (0 < -0x3d - (int)this) + 0x133;
  uVar7 = (int)((iVar4 >> 0x1f & 7U) + iVar4) >> 3;
  if ((int)uVar7 < 0) {
    _wassert(L"index >= 0",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x436d);
  }
  uVar5 = sub_1023df50();
  if (uVar5 <= uVar7) {
    _wassert(L"static_cast<std::size_t>(index) < kCachedPowers.size()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x436e);
  }
  puVar6 = (uint32_t *)sub_1023df30(uVar7);
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  uVar3 = puVar6[3];
  *param_1 = *puVar6;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  iVar4 = param_1[2];
  if ((int)this + iVar4 + 0x40 < -0x3c) {
    _wassert(L"kAlpha <= cached.e + e + 64",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x4371);
    iVar4 = param_1[2];
  }
  if (-0x20 < iVar4 + 0x40 + (int)this) {
    _wassert(L"kGamma >= cached.e + e + 64",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x4372);
  }
  return param_1;
}


// 0x10238ce0  (ghidra: FUN_10238ce0)  [gap]
uint32_t __fastcall sub_10238ce0(uint param_1,uint32_t *param_2)

{
  if (999999999 < param_1) {
    *param_2 = 1000000000;
    return 10;
  }
  if (99999999 < param_1) {
    *param_2 = 100000000;
    return 9;
  }
  if (9999999 < param_1) {
    *param_2 = 10000000;
    return 8;
  }
  if (999999 < param_1) {
    *param_2 = 1000000;
    return 7;
  }
  if (99999 < param_1) {
    *param_2 = 100000;
    return 6;
  }
  if (9999 < param_1) {
    *param_2 = 10000;
    return 5;
  }
  if (999 < param_1) {
    *param_2 = 1000;
    return 4;
  }
  if (99 < param_1) {
    *param_2 = 100;
    return 3;
  }
  if (9 < param_1) {
    *param_2 = 10;
    return 2;
  }
  *param_2 = 1;
  return 1;
}


// 0x10238da0  (ghidra: FUN_10238da0)  [gap]
void __fastcall
sub_10238da0(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7,uint param_8,uint param_9,uint param_10)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 < 1) {
    _wassert(L"len >= 1",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x43b4);
  }
  if ((param_6 <= param_4) && ((param_4 != param_6 || (param_5 < param_3)))) {
    _wassert(L"dist <= delta",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x43b5);
  }
  if ((param_6 <= param_8) && ((param_8 != param_6 || (param_5 < param_7)))) {
    _wassert(L"rest <= delta",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x43b6);
  }
  if ((param_10 == 0) && (param_9 == 0)) {
    _wassert(L"ten_k > 0",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x43b7);
  }
  if ((param_8 <= param_4) && ((param_8 < param_4 || (param_7 < param_3)))) {
    while( true ) {
      uVar2 = (param_6 - param_8) - (uint)(param_5 < param_7);
      if ((uVar2 < param_10) || ((uVar2 <= param_10 && (param_5 - param_7 < param_9)))) break;
      uVar5 = param_7 + param_9;
      uVar2 = param_8 + param_10 + (uint)CARRY4(param_7,param_9);
      if ((param_4 <= uVar2) && ((param_4 < uVar2 || (param_3 <= uVar5)))) {
        uVar4 = ((param_8 - param_4) - (uint)(param_7 < param_3)) + param_10 +
                (uint)CARRY4(param_7 - param_3,param_9);
        uVar3 = (param_4 - param_8) - (uint)(param_3 < param_7);
        if (uVar3 < uVar4) {
          return;
        }
        if ((uVar3 <= uVar4) && (param_3 - param_7 <= (param_7 - param_3) + param_9)) {
          return;
        }
      }
      cVar1 = *(char *)(param_1 + -1 + param_2);
      if (cVar1 == '0') {
        _wassert(L"buf[len - 1] != \'0\'",
                 L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                 ,0x43d0);
        cVar1 = *(char *)(param_1 + -1 + param_2);
      }
      *(char *)(param_1 + -1 + param_2) = cVar1 + -1;
      param_7 = uVar5;
      param_8 = uVar2;
      if (param_4 <= uVar2) {
        if (uVar2 != param_4) {
          return;
        }
        if (param_3 <= uVar5) {
          return;
        }
      }
    }
  }
  return;
}


// 0x10238f20  (ghidra: FUN_10238f20)  [gap]
void __fastcall
sub_10238f20(int param_1,int *param_2,int *param_3,uint32_t param_4,uint32_t param_5,
            uint32_t param_6,uint32_t param_7,uint32_t param_8,uint32_t param_9,
            uint32_t param_10,uint32_t param_11,uint param_12,uint param_13,int param_14)

{
  longlong lVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int local_68;
  int local_64;
  int local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  int *local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint64_t local_38;
  int local_2c;
  int *local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint32_t _local_10;   /* not traced by Ghidra: value with no visible source */
  
  local_48 = param_3;
  local_2c = param_1;
  local_28 = param_2;
  if (param_14 < -0x3c) {
    _wassert(L"M_plus.e >= kAlpha",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x43ec);
  }
  if (-0x20 < param_14) {
    _wassert(L"M_plus.e <= kGamma",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x43ed);
  }
  puVar3 = (uint *)sub_102389a0(&local_68,&param_12,&param_4);
  uVar5 = *puVar3;
  local_24 = puVar3[1];
  local_40 = uVar5;
  puVar3 = (uint *)sub_102389a0(&local_68,&param_12,&param_8);
  local_1c = *puVar3;
  local_18 = puVar3[1];
  uVar6 = -param_14;
  uVar4 = 1 << (uVar6 & 0x1f);
  uVar7 = 0;
  if (0x1f < uVar6) {
    uVar7 = uVar4;
  }
  uVar4 = uVar4 ^ uVar7;
  if (0x3f < uVar6) {
    uVar7 = uVar4;
  }
  sub_10238980(&local_68,uVar4,uVar7,param_14);
  local_3c = -local_60;
  local_54 = local_68 - 1;
  local_58 = local_64 + -1 + (uint)(local_68 != 0);
  uVar7 = local_54 & param_12;
  uVar6 = local_58 & param_13;
  uVar4 = (uint)(CONCAT44(param_13,param_12) >> (ulonglong)local_3c);
  _local_10 = CONCAT44(local_c,uVar4);
  local_50 = uVar7;
  uStack_4c = uVar6;
  local_20 = uVar6;
  if (uVar4 == 0) {
    _wassert(L"p1 > 0",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x4402);
    uVar4 = local_10;
  }
  local_14 = 0;
  uVar4 = sub_10238ce0(uVar4,&local_14);
  local_c = uVar4;
  do {
    if ((int)local_c < 1) {
      if ((uVar6 <= local_24) && ((uVar6 < local_24 || (uVar7 <= uVar5)))) {
        _wassert(L"p2 > delta",
                 L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                 ,0x447d);
      }
      local_14 = 0;
      uVar9 = sub_102382d0();
      lVar8 = (uVar9 & 0xffffffff) * 0xcccccccc;
      local_44 = (uint)((ulonglong)lVar8 >> 0x20);
      local_c = (uint)(uVar9 >> 0x20);
      lVar1 = (uVar9 >> 0x20) * 0xcccccccd;
      local_38 = CONCAT44((int)((ulonglong)lVar1 >> 0x20),(uint)local_38);
      local_10 = local_c * -0x33333334;
      uVar9 = lVar1 + ((uVar9 & 0xffffffff) * 0xcccccccd >> 0x20);
      uVar4 = (uint)(uVar9 >> 0x20);
      lVar8 = lVar8 + (uVar9 & 0xffffffff);
      local_50 = (uint)lVar8;
      uVar5 = (uint)((ulonglong)lVar8 >> 0x20);
      uVar6 = uVar4 + uVar5;
      local_c = local_c + CARRY4(uVar4,uVar5) + (uint)CARRY4(local_10,uVar6);
      local_10 = local_10 + uVar6 >> 3 | local_c * 0x20000000;
      local_c = local_c >> 3;
      uVar4 = local_20;
      do {
        if ((local_c <= uVar4) && ((local_c < uVar4 || (local_10 < uVar7)))) {
          _wassert(L"p2 <= (std::numeric_limits<std::uint64_t>::max)() / 10",
                   L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                   ,0x4488);
        }
        uVar4 = (uVar4 + (uVar4 << 2 | uVar7 >> 0x1e) + (uint)CARRY4(uVar7,uVar7 * 4)) * 2 |
                uVar7 * 5 >> 0x1f;
        local_20 = uVar4;
        uVar9 = __aullshr((byte)local_3c,uVar4,uVar7 * 10);
        local_20 = (uint)uVar9;
        uVar7 = local_54 & uVar7 * 10;
        uVar4 = local_58 & uVar4;
        if (((int)(uVar9 >> 0x20) != 0) || (9 < local_20)) {
          _wassert(L"d <= 9",
                   L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                   ,0x4491);
        }
        cVar2 = (char)local_20 + '0';
        local_20 = CONCAT31((int3)(local_20 >> 8),cVar2);
        local_14 = local_14 + 1;
        *(char *)(local_2c + *local_28) = cVar2;
        *local_28 = *local_28 + 1;
        local_24 = (local_24 + (local_24 << 2 | local_40 >> 0x1e) +
                   (uint)CARRY4(local_40,local_40 * 4)) * 2 | local_40 * 5 >> 0x1f;
        uVar5 = local_40 * 10;
        local_18 = (local_18 + (local_18 << 2 | local_1c >> 0x1e) +
                   (uint)CARRY4(local_1c,local_1c * 4)) * 2 | local_1c * 5 >> 0x1f;
        local_1c = local_1c * 10;
        local_40 = uVar5;
      } while ((local_24 < uVar4) || ((local_24 <= uVar4 && (uVar5 < uVar7))));
      lVar8 = CONCAT44(local_64,local_68);
      *local_48 = *local_48 - local_14;
LAB_102392d2:
      sub_10238da0(local_2c,*local_28,local_1c,local_18,uVar5,local_24,uVar7,uVar4,(uint)lVar8,
                   (uint)((ulonglong)lVar8 >> 0x20));
      return;
    }
    local_44 = local_10 / local_14;
    local_10 = local_10 % local_14;
    local_38._4_4_ = local_10;
    if (9 < local_44) {
      _wassert(L"d <= 9",
               L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
               ,0x4426);
    }
    uVar5 = local_40;
    lVar8 = ((ulonglong)local_38._4_4_ << (ulonglong)local_3c) + CONCAT44(uStack_4c,local_50);
    *(char *)(local_2c + *local_28) = (char)local_44 + '0';
    local_38._4_4_ = (uint)((ulonglong)lVar8 >> 0x20);
    *local_28 = *local_28 + 1;
    local_c = local_c - 1;
    local_38 = lVar8;
    if ((local_38._4_4_ < local_24) ||
       ((local_38._4_4_ == local_24 && (local_38._0_4_ = (uint)lVar8, (uint)local_38 <= local_40))))
    {
      *local_48 = *local_48 + local_c;
      lVar8 = __allshl((byte)local_3c,0,local_14);
      uVar7 = (uint)local_38;
      uVar4 = local_38._4_4_;
      goto LAB_102392d2;
    }
    local_14 = local_14 / 10;
  } while( true );
}


// 0x102392f0  (ghidra: FUN_102392f0)  [gap]
void __fastcall
sub_102392f0(uint32_t param_1,int *param_2,int *param_3,uint32_t param_4,uint32_t param_5,
            void *param_6,uint32_t param_7,uint32_t param_8,uint32_t param_9,void *param_10,
            uint32_t param_11,uint32_t param_12,uint32_t param_13,void *param_14)

{
  int iVar1;
  uint32_t *puVar2;
  uint *extraout_ECX;
  uint32_t local_50;
  uint32_t uStack_4c;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint local_40 [4];
  int local_30;
  int iStack_2c;
  uint32_t uStack_28;
  uint local_20;
  int iStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  int *local_c;
  
  local_c = param_2;
  if (param_14 != param_6) {
    _wassert(L"m_plus.e == m_minus.e",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x44ce);
  }
  if (param_14 != param_10) {
    _wassert(L"m_plus.e == v.e",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x44cf);
  }
  puVar2 = sub_10238bd0(param_14,&local_50);
  iVar1 = puVar2[3];
  sub_10238980(local_40,*puVar2,puVar2[1],puVar2[2]);
  sub_10238a20(&local_50,&param_8,extraout_ECX);
  sub_10238a20(&local_20,&param_4,local_40);
  sub_10238a20(&local_30,&param_12,local_40);
  sub_10238980(&local_20,local_20 + 1,iStack_1c + (uint)(0xfffffffe < local_20),uStack_18);
  sub_10238980(&local_30,local_30 + -1,iStack_2c + -1 + (uint)(local_30 != 0),uStack_28);
  *param_3 = -iVar1;
  sub_10238f20(param_1,local_c,param_3,local_20,iStack_1c,uStack_18,uStack_14,local_50,uStack_4c,
               uStack_48,uStack_44,local_30,iStack_2c,uStack_28);
  return;
}


// 0x10239430  (ghidra: FUN_10239430)  [gap]
char * __fastcall sub_10239430(char *param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  wchar_t *_Message;
  uint uVar3;
  
  if ((int)param_2 < -999) {
    uVar3 = 0x4531;
    _Message = L"e > -1000";
  }
  else {
    if ((int)param_2 < 1000) goto LAB_10239474;
    uVar3 = 0x4532;
    _Message = L"e < 1000";
  }
  _wassert(_Message,
           L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
           ,uVar3);
LAB_10239474:
  uVar3 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  *param_1 = ((int)param_2 < 0) * '\x02' + '+';
  pcVar1 = param_1 + 2;
  if (uVar3 < 10) {
    param_1[1] = '0';
    *pcVar1 = (char)uVar3 + '0';
    return param_1 + 3;
  }
  if (uVar3 < 100) {
    cVar2 = (char)(uVar3 / 10);
    param_1[1] = cVar2 + '0';
    *pcVar1 = (char)uVar3 + cVar2 * -10 + '0';
    return param_1 + 3;
  }
  param_1[1] = (char)(uVar3 / 100) + '0';
  cVar2 = (char)((uVar3 % 100) / 10);
  param_1[3] = (char)(uVar3 % 100) + cVar2 * -10 + '0';
  *pcVar1 = cVar2 + '0';
  return param_1 + 4;
}


// 0x10239530  (ghidra: FUN_10239530)  [gap]
char * __fastcall sub_10239530(uint16_t *param_1,size_t param_2,size_t param_3)

{
  int iVar1;
  char *pcVar2;
  uint8_t *puVar3;
  
  iVar1 = param_2 + param_3;
  if (((int)param_2 <= iVar1) && (iVar1 < 0x10)) {
    memset((void *)((int)param_1 + param_2),0x30,param_3);
    *(uint16_t *)(iVar1 + (int)param_1) = 0x302e;
    return (char *)((int)param_1 + iVar1 + 2);
  }
  if (iVar1 < 1) {
    if (-4 < iVar1) {
      memmove((void *)((int)param_1 + (2 - iVar1)),param_1,param_2);
      *param_1 = 0x2e30;
      memset(param_1 + 1,0x30,-iVar1);
      return (char *)((int)param_1 + ((param_2 + 2) - iVar1));
    }
  }
  else if (iVar1 < 0x10) {
    if ((int)param_2 <= iVar1) {
      _wassert(L"k > n",
               L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
               ,0x4581);
    }
    puVar3 = (uint8_t *)(iVar1 + (int)param_1);
    memmove(puVar3 + 1,puVar3,param_2 - iVar1);
    *puVar3 = 0x2e;
    return (char *)(param_2 + 1 + (int)param_1);
  }
  puVar3 = (uint8_t *)((int)param_1 + 1);
  if (param_2 != 1) {
    memmove(param_1 + 1,puVar3,param_2 - 1);
    *(uint8_t *)((int)param_1 + 1) = 0x2e;
    puVar3 = (uint8_t *)(param_2 + 1 + (int)param_1);
  }
  *puVar3 = 0x65;
  pcVar2 = sub_10239430(puVar3 + 1,iVar1 - 1);
  return pcVar2;
}

