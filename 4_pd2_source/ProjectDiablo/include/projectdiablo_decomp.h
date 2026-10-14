/* projectdiablo_decomp.h - base types and prototypes for every function, grouped by source file. */
#pragma once

#include <stdint.h>
/* Ghidra's undefinedN types have been replaced by uint8_t/uint16_t/uint32_t/uint64_t. */
typedef unsigned char      byte;
typedef unsigned char      uchar;
typedef unsigned short     ushort;
typedef unsigned int       uint;
typedef unsigned int       uint3;
typedef unsigned long      ulong;
typedef long long          longlong;
typedef unsigned long long ulonglong;
typedef unsigned short     wchar16;
typedef void (*code)(void);
#include "ghidra_compat.h"
#include "globals.h"
#include "missing_globals.h"
#include "imports.h"

/* ---- _unattributed/before_client_DrawHoverItem_unit00_10001000.cpp ---- */
void sub_init_10001000(void);
void sub_init_10001020(void);
void sub_init_10001110(void);
void sub_init_10001170(void);
void sub_init_100011d0(void);
void sub_init_10001240(void);
void sub_init_100012a0(void);
void sub_init_10001300(void);
void sub_init_10001370(void);
void sub_init_100013e0(void);
void sub_init_10001450(void);
void sub_init_100014b0(void);
void sub_init_10001510(void);
void sub_init_10001580(void);
void sub_init_100015f0(void);
void sub_init_10001660(void);
void sub_init_100016c0(void);
void sub_init_10001720(void);
void sub_init_10001780(void);
void sub_init_100017e0(void);
void sub_init_10001860(void);
void sub_init_100018d0(void);
void sub_init_10001930(void);
void sub_init_10001990(void);
void sub_init_10001a30(void);
void sub_init_10001aa0(void);
void sub_init_10001b00(void);
void sub_init_10001b60(void);
void sub_init_10001bc0(void);
void sub_init_10001c50(void);
void sub_init_10001d10(void);
void sub_init_10001d80(void);
void sub_init_10001df0(void);
void sub_init_10001e40(void);
void sub_init_10001ea0(void);
void sub_init_10001f30(void);
void sub_init_10002030(void);
void sub_init_100020b0(void);
void sub_init_10002140(void);
void sub_init_10002700(void);
void sub_init_100030d0(void);
void sub_init_10003ad0(void);
void sub_init_10003e50(void);
void sub_init_10004380(void);
void sub_init_10004530(void);
void sub_init_10004590(void);
void sub_init_100045f0(void);
void sub_init_10004650(void);
void sub_init_100046b0(void);
void sub_InitPtr_D2Client_DAT_6fbcbbfc_100077f0(void);
void sub_InitPtr_sub_6fac61b0_10008390(void);
void sub_InitPtr_D2Client_loc_6fb714f7_100083a0(void);
void sub_Hook_sub_6fb12580_1020f470(int param_1,uint32_t param_2);
void sub_1020f530(void);
uint32_t * __thiscall sub_1020f550(void *this,uint32_t param_1,uint32_t param_2);
uint32_t __fastcall sub_1020f570(uint32_t param_1);
void __fastcall sub_1020f5d0(uint32_t param_1);
void __fastcall thunk_FUN_1020fa40(uint32_t *param_1);
uint32_t * __fastcall sub_1020f600(uint32_t *param_1);
uint32_t __fastcall sub_1020f640(uint32_t param_1);
uint32_t __fastcall sub_1020f6a0(uint32_t param_1);
void __fastcall sub_1020f700(uint32_t param_1);
void __fastcall thunk_FUN_1020fb00(int *param_1);
uint32_t * __fastcall sub_1020f730(uint32_t *param_1);
void __fastcall thunk_FUN_1020fb40(uint32_t *param_1);
uint32_t * __fastcall sub_1020f780(uint32_t *param_1);
uint64_t __fastcall sub_1020f7c0(uint32_t *param_1);
void __fastcall thunk_FUN_1020fb70(int *param_1);
uint32_t * __fastcall sub_1020f7f0(uint32_t *param_1);
uint32_t * __fastcall sub_1020f840(uint32_t *param_1);
uint32_t __fastcall sub_1020f880(uint32_t param_1);
void __fastcall sub_1020f8e0(uint32_t param_1);
uint32_t __fastcall sub_1020f900(uint32_t param_1);
uint32_t __fastcall sub_1020f960(uint32_t param_1);
uint64_t __fastcall thunk_FUN_1020fc60(uint32_t *param_1);
uint32_t * __thiscall sub_1020f990(void *this,char *param_1);
uint32_t * __thiscall sub_1020f9c0(void *this,uint param_1);
uint32_t __fastcall thunk_FUN_1020fe80(uint32_t param_1);
void sub_1020f9f0(void);
uint32_t __fastcall sub_1020fa10(uint32_t param_1);
void __fastcall sub_1020fa40(uint32_t *param_1);
void sub_1020fa70(void);
void sub_1020fa90(void);
uint32_t __fastcall sub_1020fab0(uint32_t param_1);
uint32_t __fastcall sub_1020fae0(int param_1);
uint32_t __fastcall sub_1020faf0(uint32_t *param_1);
void __fastcall sub_1020fb00(int *param_1);
void __fastcall sub_1020fb40(uint32_t *param_1);
void __fastcall sub_1020fb70(int *param_1);
void sub_1020fbf0(void);
uint32_t __fastcall sub_1020fc10(uint32_t param_1);
void sub_1020fc40(void);
uint64_t __fastcall sub_1020fc60(uint32_t *param_1);
void __fastcall sub_1020fca0(uint8_t *param_1);
void __thiscall sub_1020fcd0(void *this,char *param_1);
uint32_t * __thiscall sub_1020fd00(void *this,void *param_1,uint param_2);
void sub_1020fd60(void *param_1,size_t param_2,void *param_3);
void __thiscall sub_1020fd90(void *this,uint param_1);
uint64_t __fastcall sub_1020fe30(int param_1);
int __fastcall sub_1020fe50(char *param_1);
void * __cdecl sub_1020fe60(void *param_1,void *param_2,size_t param_3);
uint32_t __fastcall sub_1020fe80(uint32_t param_1);
void __fastcall sub_1020fe90(uint32_t param_1);
void __fastcall sub_1020feb0(uint32_t param_1);
void sub_1020fed0(int param_1,int param_2);
void sub_1020fef0(void *param_1,int param_2);
uint * __fastcall sub_1020ff10(uint *param_1,uint *param_2);
void sub_1020ff20(void *param_1,int param_2);
void sub_1020ff40(int param_1,int param_2);
void sub_1020ff60(void *param_1,int param_2);
void sub_1020ff80(int param_1,int param_2);
void sub_1020ffa0(void *param_1,int param_2);
void __fastcall sub_1020ffc0(uint32_t param_1);
uint sub_1020ffe0(void);
bool __fastcall sub_10210040(int param_1);
void __fastcall sub_10210050(uint8_t *param_1,uint8_t *param_2);
void * __fastcall sub_10210060(void *param_1,void *param_2,size_t param_3);
void sub_10210080(uint32_t param_1);
void sub_102100a0(void *param_1,uint param_2);
uint32_t sub_102100c0(void);
uint32_t * __thiscall sub_102100d0(void *this,uint32_t *param_1,int *param_2);
int sub_10210100(uint32_t param_1,uint32_t param_2);
int sub_10210130(uint32_t param_1,uint32_t param_2);
void __thiscall sub_10210160(void *this,uint32_t param_1);
uint32_t __fastcall sub_10210180(uint32_t *param_1);
void __thiscall sub_10210190(void *this,int param_1,int param_2);
void __thiscall sub_102101e0(void *this,uint32_t param_1);
void __thiscall sub_10210200(void *this,int param_1,int param_2);
void __thiscall sub_10210290(void *this,int param_1,int param_2);
uint64_t __fastcall sub_102102e0(uint32_t *param_1);
void __thiscall sub_102102f0(void *this,int param_1,int param_2);
void __thiscall sub_10210380(void *this,int param_1,int param_2);
void __thiscall sub_10210410(void *this,uint32_t param_1);
uint * __fastcall sub_10210430(uint *param_1,uint *param_2);
uint32_t __fastcall sub_10210440(uint32_t *param_1);
uint32_t __fastcall sub_10210450(uint32_t *param_1);
void __thiscall sub_10210460(void *this,uint32_t param_1);
uint32_t sub_102104d0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __thiscall sub_102104f0(void *this,uint32_t param_1);
void __thiscall sub_10210560(void *this,uint32_t param_1);
void __thiscall sub_102105d0(void *this,uint32_t param_1);
void __thiscall sub_10210640(void *this,uint32_t param_1);
uint32_t * __thiscall sub_102106b0(void *this,uint param_1,uint32_t param_2,void *param_3);
void __fastcall sub_10210750(uint32_t param_1,uint32_t param_2);
int sub_10210780(void);
int sub_102107d0(void);
void __fastcall sub_10210820(int param_1,int param_2);
void __fastcall sub_10210850(void *param_1,uint param_2);
void __fastcall sub_102108a0(int param_1,int param_2);
void __fastcall sub_102108d0(int param_1,int param_2);
int sub_10210900(void);
void * __fastcall sub_10210950(uint param_1);
void __fastcall sub_10210970(uint32_t *param_1);
void __fastcall sub_10210980(uint32_t *param_1);
void __fastcall sub_10210990(uint32_t *param_1);
void __fastcall sub_102109a0(uint32_t *param_1);
void __fastcall sub_102109b0(uint32_t *param_1);
void sub_102109c0(void);
uint32_t * __fastcall sub_102109e0(uint32_t *param_1);
void __thiscall sub_10210a00(void *this,uint param_1);
void sub_10210a30(void);
void __thiscall sub_10210a40(void *this,uint param_1);
void __thiscall sub_10210a70(void *this,uint param_1);
void __thiscall sub_10210aa0(void *this,uint param_1);
void __thiscall sub_10210ad0(void *this,uint param_1);
void sub_10210b00(void);
int * __thiscall sub_10210b20(void *this,int *param_1);
void __thiscall sub_10210b70(void *this,uint param_1);
int __fastcall sub_10210b90(uint32_t *param_1);
void sub_stl_10210bb0(void);
void __thiscall sub_10210bc0(void *this,int param_1);
uint sub_10210be0(void);
void __thiscall sub_10210c10(void *this,uint param_1);
uint sub_10210c40(void);
void __thiscall std::vector<CHN*,std::allocator<CHN*>_>::_Buy_raw (vector<CHN*,std::allocator<CHN*>_> *this,uint param_1);
uint sub_10210ca0(void);
void __thiscall sub_10210cd0(void *this,uint param_1);
uint sub_10210d00(void);
void __thiscall std::vector<CHN*,std::allocator<CHN*>_>::_Buy_raw (vector<CHN*,std::allocator<CHN*>_> *this,uint param_1);
uint sub_10210d60(void);
uint __fastcall sub_10210d90(uint param_1,uint param_2,uint param_3);
uint32_t * __fastcall sub_10210df0(uint32_t *param_1);
uint32_t sub_10210e00(void);
void sub_10210e10(uint param_1);
uint32_t sub_10210e30(void);
void sub_10210e40(uint param_1);
uint32_t sub_10210e60(void);
void sub_10210e70(uint param_1);
uint32_t sub_10210e90(void);
void sub_10210ea0(uint param_1);
uint64_t __fastcall sub_10210ec0(uint32_t *param_1);
void sub_10210ed0(uint32_t param_1,uint32_t *param_2);
void __fastcall sub_10210f30(uint32_t param_1,void *param_2);
int __fastcall sub_10210f40(int param_1,int param_2);
void sub_10210f50(uint32_t param_1,uint32_t param_2,int param_3);
void sub_10210f70(uint32_t param_1,uint32_t *param_2);
void __fastcall sub_10210fd0(uint32_t param_1,void *param_2);
int __fastcall sub_10210fe0(int param_1,int param_2);
void __thiscall sub_10210ff0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
int __fastcall sub_10211010(int param_1,int param_2);
void sub_10211020(uint32_t param_1,uint32_t param_2,int param_3);
int __fastcall sub_10211040(int param_1,int param_2);
void __thiscall sub_10211050(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
int __fastcall sub_10211070(int param_1,int param_2);
void __thiscall sub_10211080(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102110a0(uint32_t param_1,uint32_t *param_2);
void __fastcall sub_10211100(uint32_t param_1,void *param_2);
int * __thiscall sub_10211110(void *this,int param_1,uint32_t param_2);
int * __thiscall sub_102111a0(void *this,int param_1,uint32_t param_2);
int * __thiscall sub_10211230(void *this,int param_1,uint32_t param_2);
int * __thiscall sub_102112c0(void *this,int param_1,uint32_t param_2);
int * __thiscall sub_10211350(void *this,int param_1,uint32_t param_2);
void __fastcall sub_102113e0(uint32_t param_1,uint32_t *param_2);
void __fastcall sub_102113f0(uint32_t param_1,uint32_t *param_2);
void __fastcall sub_10211400(uint32_t param_1,uint32_t param_2);
int __fastcall sub_10211440(uint param_1);
uint32_t sub_10211460(void);
int __fastcall sub_10211470(uint param_1);
int __fastcall sub_10211490(uint param_1);
int __fastcall sub_102114b0(uint param_1);
int __fastcall sub_102114d0(uint param_1);
uint32_t * __fastcall sub_102114f0(uint32_t *param_1);
uint32_t * __fastcall sub_10211500(uint32_t *param_1);
uint32_t __fastcall sub_10211510(uint32_t param_1);
void __fastcall thunk_FUN_10211770(int param_1);
void __fastcall sub_10211530(int param_1);
void __fastcall sub_10211550(int param_1);
void __fastcall thunk_FUN_10211790(int param_1);
int * __thiscall sub_10211590(void *this,int *param_1,int param_2,int *param_3);
uint32_t * __fastcall sub_102116a0(uint32_t *param_1);
void __fastcall sub_102116b0(uint32_t param_1);
void __fastcall sub_102116d0(uint32_t param_1,void *param_2);
void __fastcall sub_102116e0(uint32_t param_1);
void __fastcall sub_10211700(uint32_t param_1,void *param_2);
void __fastcall sub_10211710(uint32_t param_1);
void __fastcall sub_10211730(uint32_t param_1,void *param_2);
void __fastcall thunk_FUN_10211770(int param_1);
void __fastcall thunk_FUN_10211780(int param_1);
void __fastcall thunk_FUN_10211790(int param_1);
void __fastcall sub_10211770(int param_1);
void __fastcall sub_10211780(int param_1);
void __fastcall sub_10211790(int param_1);
void __thiscall sub_102117a0(void *this,int *param_1);
void __thiscall sub_10211800(void *this,int param_1);
uint sub_10211860(void);
uint sub_10211890(void);
void sub_102118c0(void *param_1);
uint32_t sub_102118e0(void);
void sub_102118f0(void *param_1);
uint32_t sub_10211910(void);
void sub_10211920(void *param_1);
uint32_t __fastcall sub_10211940(uint32_t *param_1,uint32_t *param_2);
void __fastcall thunk_FUN_10210f30(uint32_t param_1,void *param_2);
int __fastcall sub_10211960(uint32_t param_1,uint32_t param_2,int param_3);
void __fastcall sub_102119c0(uint32_t param_1,void *param_2);
uint32_t __fastcall sub_102119e0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
int __fastcall sub_10211a80(uint32_t param_1,uint32_t param_2,int param_3);
uint32_t __fastcall sub_10211ae0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
uint32_t __fastcall sub_10211b80(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __fastcall thunk_FUN_10211100(uint32_t param_1,void *param_2);
int * __thiscall sub_10211c30(void *this,int *param_1,int param_2,char *param_3);
void * __thiscall sub_10211df0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
int * __thiscall sub_10211e70(void *this,int *param_1,int param_2,uint *param_3);
void * __thiscall sub_10212030(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void * __thiscall sub_102120e0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
int * __thiscall sub_10212160(void *this,int *param_1,int param_2,int *param_3);
void __fastcall sub_10212320(uint32_t param_1,int param_2);
int __fastcall sub_10212330(int param_1);
void __fastcall sub_10212340(uint32_t *param_1);
void __fastcall sub_10212350(int *param_1);
uint32_t * __thiscall sub_10212360(void *this,uint32_t param_1,uint32_t param_2);
void __fastcall sub_10212380(int *param_1);
void __fastcall sub_10212390(int *param_1);
void * __thiscall sub_102123a0(void *this,uint32_t param_1);
void * __thiscall sub_10212400(void *this,uint32_t param_1);
void * __thiscall sub_10212460(void *this,uint32_t param_1);
int * __fastcall sub_102124c0(int *param_1);
int * __fastcall sub_10212530(int *param_1);
uint32_t * __thiscall sub_10212570(void *this,uint32_t param_1);
bool sub_10212580(char *param_1,char *param_2);
bool sub_102125a0(uint *param_1,uint *param_2);
bool sub_102125c0(int *param_1,int *param_2);
void __fastcall sub_102125e0(int param_1);
uint32_t * __thiscall sub_10212600(void *this,uint32_t param_1);
void __fastcall sub_10212620(int param_1);
void __fastcall sub_10212640(int param_1);
int * __fastcall sub_10212660(int *param_1);
int __fastcall sub_10212680(int param_1);
int __fastcall sub_102126a0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __thiscall sub_10212700(void *this,uint32_t param_1);
void __thiscall sub_10212730(void *this,uint32_t param_1);
void __thiscall sub_10212760(void *this,uint32_t param_1);
int * __thiscall sub_10212790(void *this,int *param_1,char *param_2);
uint32_t sub_102127f0(int param_1,char *param_2,uint reg_EAX);
void __cdecl sub_10212820(uint32_t param_1);
int * __thiscall sub_10212850(void *this,int *param_1,uint *param_2);
uint32_t sub_102128b0(int param_1,uint *param_2,uint reg_EAX);
void __cdecl sub_102128e0(uint32_t param_1);
void __cdecl sub_10212910(uint32_t param_1);
int * __thiscall sub_10212940(void *this,int *param_1,int *param_2);

/* ---- _unattributed/before_client_DrawHoverItem_unit01.cpp ---- */
void sub_init_10009000(void);
void sub_init_10009020(void);
void sub_init_10009110(void);
void sub_init_10009170(void);
void sub_init_100091d0(void);
void sub_init_10009240(void);
void sub_init_100092a0(void);
void sub_init_10009300(void);
void sub_init_10009370(void);
void sub_init_100093e0(void);
void sub_init_10009450(void);
void sub_init_100094b0(void);
void sub_init_10009510(void);
void sub_init_10009580(void);
void sub_init_100095f0(void);
void sub_init_10009660(void);
void sub_init_100096c0(void);
void sub_init_10009720(void);
void sub_init_10009780(void);
void sub_init_100097e0(void);
void sub_init_10009860(void);
void sub_init_100098d0(void);
void sub_init_10009930(void);
void sub_init_10009990(void);
void sub_init_10009a30(void);
void sub_init_10009aa0(void);
void sub_init_10009b00(void);
void sub_init_10009b60(void);
void sub_init_10009bc0(void);
void sub_init_10009c50(void);
void sub_init_10009d10(void);
void sub_init_10009d80(void);
void sub_init_10009df0(void);
void sub_init_10009e40(void);
void sub_init_10009ea0(void);
void sub_init_10009f30(void);
void sub_init_1000a030(void);
void sub_init_1000a0b0(void);
void sub_init_1000a140(void);
void sub_init_1000a700(void);
void sub_init_1000b0d0(void);
void sub_init_1000bad0(void);
void sub_init_1000be50(void);
void sub_init_1000c380(void);
void sub_init_1000c530(void);
void sub_init_1000c590(void);
void sub_init_1000c5f0(void);
void sub_init_1000c650(void);
void sub_init_1000c6b0(void);
void sub_InitPtr_D2Client_DAT_6fbba608_1000e460(void);
void sub_InitPtr_D2Client_DAT_6fb8bc48_1000f0a0(void);
void sub_InitPtr_D2Client_DAT_6fb8bc4c_1000f0b0(void);
void sub_InitPtr_D2Client_DAT_6fbcb828_1000f150(void);
void sub_InitPtr_D2Client_DAT_6fbcb824_1000f160(void);
void sub_InitPtr_D2Client_DAT_6fbcb834_1000f170(void);
void sub_InitPtr_D2Client_DAT_6fbaad60_1000f2c0(void);
void sub_InitPtr_D2Client_DAT_6fbc9763_1000f320(void);
void sub_InitPtr_D2Client_DAT_6fbc3a80_1000f330(void);
void sub_InitPtr_D2Client_DAT_6fbc3aca_1000f350(void);
void sub_InitPtr_D2Client_DAT_6fbc971d_1000f360(void);
void sub_InitPtr_D2Client_DAT_6fbcbc48_1000f5b0(void);
void sub_InitPtr_D2Client_DAT_6fbc97a8_1000f5c0(void);
void sub_InitPtr_D2Client_DAT_6fbc971d_10296c60_1000f640(void);
void sub_InitPtr_D2Client_DAT_6fbcc2fc_1000f690(void);
void sub_InitPtr_D2Client_DAT_6fbd3448_1000f6c0(void);
void sub_InitPtr_D2Client_DAT_6fbcbc04_1000f6d0(void);
void sub_InitPtr_D2Client_DAT_6fbc973b_1000f710(void);
void sub_InitPtr_D2Client_DAT_6fbcbbfc_1000f7f0(void);
void sub_InitPtr_D2Client_DAT_6fbcbc38_1000f800(void);
void sub_InitPtr_D2Win_DAT_6f901488_10010150(void);
void sub_InitPtr_D2Win_DAT_6f90148c_10010160(void);
void sub_InitPtr_D2Client_DAT_6fbbf2f3_10010250(void);
void sub_InitPtr_D2Client_DAT_6fbcc390_100102e0(void);
void sub_InitPtr_D2Client_DAT_6fbcc394_10010330(void);
void sub_InitPtr_D2Client_DAT_6fbaada4_102a4e90_100105f0(void);
void sub_InitPtr_D2Client_DAT_6fbaade4_10010610(void);
void sub_InitPtr_D2Client_DAT_6fbcc2f4_10010640(void);
void sub_InitPtr_D2Client_DAT_6fbcc3a4_100106e0(void);
void sub_InitPtr_D2Client_DAT_6fbcc3f0_100106f0(void);
void sub_InitPtr_D2Client_DAT_6fbcc4d4_10010790(void);
void sub_InitPtr_D2Client_DAT_6fbcc414_10010890(void);
void sub_InitPtr_D2Client_DAT_6fbcc2f8_102aa3d0_10010d50(void);
void sub_InitPtr_D2Client_DAT_6fbaadb4_10010d90(void);
void sub_InitPtr_D2Client_DAT_6fbcb82c_10010dc0(void);
void sub_InitPtr_D2Client_DAT_6fba856c_10010dd0(void);
void sub_InitPtr_D2Client_DAT_6fbcb854_10010de0(void);
void sub_InitPtr_D2Client_DAT_6fbc9968_10010e20(void);
void sub_InitPtr_D2Client_DAT_6fbc9a58_10010e30(void);
void sub_InitPtr_D2Client_DAT_6fbc9b48_10010e40(void);
void sub_InitPtr_D2Client_DAT_6fbc9c38_10010e50(void);
void sub_InitPtr_D2Client_DAT_6fbcbc98_10010e80(void);
void sub_InitPtr_D2Client_DAT_6fb8bc54_10010e90(void);
void sub_InitPtr_D2Client_DAT_6fb8bc58_10010ea0(void);
void sub_InitPtr_D2Client_DAT_6fbacdd6_10010ed0(void);
void sub_InitPtr_D2Client_DAT_6fbacdd5_10010ee0(void);
void sub_InitPtr_D2Client_DAT_6fbacd8c_10010f00(void);
void sub_InitPtr_D2Client_DAT_6fbacdcd_10010f10(void);
void sub_InitPtr_D2Client_DAT_6fbacdbc_10010f30(void);
void sub_InitPtr_D2Client_DAT_6fbacdbd_10010f40(void);
void sub_InitPtr_D2Client_DAT_6fb91180_10010f50(void);
void sub_InitPtr_D2Client_DAT_6fbbb238_10010f60(void);
void sub_InitPtr_D2Client_DAT_6fbcbc90_10010f80(void);
void sub_InitPtr_D2Client_DAT_6fbcc484_10010fb0(void);
uint64_t __fastcall sub_10212e30(uint param_1,uint8_t *param_2);
void __fastcall sub_10212f80(char param_1,char param_2,char param_3,uint32_t reg_EBX);
void __fastcall sub_102131a0(char param_1,char param_2,char param_3,uint32_t reg_EBX);
void __fastcall sub_10213390(char param_1,char param_2,char param_3);
uint64_t __fastcall sub_10213480(char param_1,uint32_t param_2,uint32_t reg_EAX);
void __thiscall sub_10213570(void *this,uint param_2,int param_3,uint reg_EDX);
void __fastcall sub_10213620(uint32_t param_1,uint32_t param_2);
uint __fastcall sub_10213f20(int param_1,int param_2,int param_3);
uint __fastcall sub_10213f90(int param_1,uint32_t param_2,int param_3,uint reg_EAX);
uint __fastcall sub_102140a0(int param_1,uint32_t param_2,int param_3,uint reg_EAX);
uint64_t __cdecl sub_102141b0(int param_1);
uint __fastcall sub_10214210(uint32_t param_1,uint32_t param_2);
void __fastcall sub_10214350(int param_1);
uint32_t __fastcall sub_102143b0(int param_1);
bool __fastcall sub_10214430(double *param_1,double *param_2,double param_3,double param_4);
void __thiscall sub_10214600(void *this,uint8_t *param_1);
ulonglong __thiscall sub_102147d0(void *this,int param_1);
ulonglong __thiscall sub_10214980(void *this,int param_1);
uint __fastcall sub_10214ae0(int param_1,uint reg_EAX);
int * __fastcall sub_10214da0(int *param_1,uint *reg_EDX);
void __fastcall sub_102150b0(int param_1,int param_2);
bool sub_10215190(int *param_1,int *param_2);
void __fastcall sub_10215240(int param_1);
void sub_10215760(void);
ulonglong __fastcall sub_102158c0(uint32_t param_1,int param_2);
void sub_10215ba0(void);
uint32_t sub_10215c00(void);
uint32_t __fastcall sub_10215c90(int param_1,uint param_2,int *reg_EAX,uint32_t reg_EBX);
uint32_t __fastcall sub_10215d20(uint param_1,char param_2);
uint32_t __fastcall sub_10215dd0(uint32_t param_1,uint8_t *param_2);
uint32_t sub_10215e50(void);
uint32_t sub_10215f00(void);
uint32_t __fastcall sub_10215fb0(int param_1,uint reg_EAX,uint32_t reg_EBX);
uint __fastcall sub_10216190(char param_1,char param_2,char param_3,char param_4,int param_5,int param_6,int param_7 ,int param_8,int *param_9,int *param_10);
uint32_t __fastcall sub_102166c0(int param_1,uint32_t reg_EBX);
uint32_t sub_10217840(void);
uint32_t __fastcall sub_102179e0(int param_1);
uint32_t __fastcall sub_10217f60(int param_1,int *param_2);
void __fastcall sub_10218120(void *param_1);
uint32_t __fastcall sub_10218180(int *param_1);
uint32_t __fastcall sub_10218690(int param_1);
void __fastcall sub_102187b0(int *param_1,uint param_2,uint32_t reg_EAX,uint32_t reg_EBX);
void __fastcall sub_10218800(int *param_1,uint param_2,uint32_t reg_EAX,uint32_t reg_EBX);
void __fastcall sub_10218860(int *param_1);
uint64_t sub_10218890(void);
void sub_10218940(void);
uint Storm_511(uint param_1);   /* game binding -> Storm.dll +0x343d0, sigmaRE/5_game_source/Storm/_unattributed/code_6f621bc0.cpp */
int sub_6f8f80f0(uint32_t param_1);   /* game binding -> D2Win.dll +0x180f0, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
int __thiscall sub_10218970(void *this,int param_1);
int __fastcall sub_10218980(int *param_1);
void __thiscall sub_10218990(void *this,uint32_t param_1);
void __thiscall sub_102189a0(void *this,uint32_t param_1);
uint64_t __fastcall thunk_FUN_10218a30(uint32_t param_1);
uint64_t __thiscall sub_10218a10(void *this,uint32_t param_1);
uint64_t __fastcall sub_10218a30(uint32_t param_1);
uint64_t __fastcall sub_10218a40(uint32_t param_1);
int sub_10218a60(void);
void __fastcall sub_10218a80(int param_1);
void * __fastcall sub_10218ab0(void *param_1,void *param_2);
uint64_t __fastcall sub_10218ac0(void *param_1,void *param_2);
void __cdecl sub_10218ad0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall thunk_FUN_10218bf0(uint32_t *param_1);
int __thiscall sub_10218b30(void *this,int param_1,uint32_t param_2);
void __fastcall sub_10218bf0(uint32_t *param_1);
void __thiscall sub_10218c00(void *this,int param_1,int param_2,int param_3);
uint __thiscall sub_10218c40(void *this,uint param_1);
void sub_10218c70(uint32_t param_1,uint32_t param_2,int param_3);
uint64_t __thiscall sub_10218c90(void *this,void *param_1);
uint64_t __thiscall sub_10218cb0(void *this,void *param_1);
uint64_t __thiscall sub_10218cd0(void *this,uint32_t param_1);
void sub_10218cf0(uint32_t param_1,uint32_t param_2,int param_3);
int __fastcall sub_10218d10(int *param_1);
uint8_t __cdecl sub_10218d20(uint8_t param_1);
void __fastcall sub_10218d30(int *param_1,int *param_2,int param_3,uint32_t param_4);
void __fastcall sub_10218df0(int *param_1,int *param_2);
void __fastcall sub_10218ec0(int param_1,int param_2);
void __fastcall sub_10218f30(void *param_1,int param_2);
uint32_t __fastcall sub_10218f70(uint32_t param_1,int *param_2,int *param_3,uint8_t param_4);
void __fastcall sub_10219190(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_102191a0(int param_1,int param_2,uint param_3,uint32_t param_4);
void __fastcall sub_10219250(void *param_1,int param_2);
int __fastcall sub_102192b0(int param_1);
void __fastcall sub_102192c0(int *param_1,int *param_2,int *param_3);
int __fastcall sub_10219370(int param_1);
uint64_t __fastcall thunk_FUN_10219510(uint32_t *param_1);
void __fastcall sub_10219390(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_102193f0(int param_1,int param_2,int param_3,int *param_4);
void __thiscall sub_10219480(void *this,uint32_t *param_1,uint32_t param_2);
uint __fastcall sub_102194c0(int *param_1,int *param_2,int *param_3);

/* ---- _unattributed/before_client_DrawHoverItem_unit02.cpp ---- */
void sub_init_10011000(void);
void sub_init_10011020(void);
void sub_init_10011110(void);
void sub_init_10011170(void);
void sub_init_100111d0(void);
void sub_init_10011240(void);
void sub_init_100112a0(void);
void sub_init_10011300(void);
void sub_init_10011370(void);
void sub_init_100113e0(void);
void sub_init_10011450(void);
void sub_init_100114b0(void);
void sub_init_10011510(void);
void sub_init_10011580(void);
void sub_init_100115f0(void);
void sub_init_10011660(void);
void sub_init_100116c0(void);
void sub_init_10011720(void);
void sub_init_10011780(void);
void sub_init_100117e0(void);
void sub_init_10011860(void);
void sub_init_100118d0(void);
void sub_init_10011930(void);
void sub_init_10011990(void);
void sub_init_10011a30(void);
void sub_init_10011aa0(void);
void sub_init_10011b00(void);
void sub_init_10011b60(void);
void sub_init_10011bc0(void);
void sub_init_10011c50(void);
void sub_init_10011d10(void);
void sub_init_10011d80(void);
void sub_init_10011df0(void);
void sub_init_10011e40(void);
void sub_init_10011ea0(void);
void sub_init_10011f30(void);
void sub_init_10012030(void);
void sub_init_100120b0(void);
void sub_init_10012140(void);
void sub_init_10012700(void);
void sub_init_100130d0(void);
void sub_init_10013ad0(void);
void sub_init_10013e50(void);
void sub_init_10014380(void);
void sub_init_10014530(void);
void sub_init_10014590(void);
void sub_init_100145f0(void);
void sub_init_10014650(void);
void sub_init_100146b0(void);
void sub_InitPtr_D2Client_DAT_6fbba608_10016460(void);
void sub_InitPtr_D2Client_DAT_6fbcbe64_10016e10(void);
void sub_InitPtr_D2Client_DAT_6fbcbe6c_10016e30(void);
void sub_InitPtr_D2Client_DAT_6fbcbe78_10016e50(void);
void sub_InitPtr_D2Client_DAT_6fbcbe7c_10016e60(void);
void sub_InitPtr_D2Client_DAT_6fbcbe80_10016e70(void);
void sub_InitPtr_D2Client_DAT_6fbcbe88_10016e80(void);
void sub_InitPtr_D2Client_DAT_6fbcbedc_10016e90(void);
void sub_InitPtr_D2Client_DAT_6fbcbe84_10016ea0(void);
void sub_InitPtr_D2Client_DAT_6fbcbee0_10016ed0(void);
void sub_InitPtr_D2Client_DAT_6fbcbeec_10016ee0(void);
void sub_InitPtr_D2Client_DAT_6fb8bc4c_100170b0(void);
void sub_InitPtr_D2Client_DAT_6fb90ea8_100170f0(void);
void sub_InitPtr_D2Client_DAT_6fb90eac_10017100(void);
void sub_InitPtr_D2Client_DAT_6fb90eb0_10017110(void);
void sub_InitPtr_D2Client_DAT_6fb90eb4_10017120(void);
void sub_InitPtr_D2Client_DAT_6fb90eb8_10293390_10017130(void);
void sub_InitPtr_D2Client_DAT_6fb90ebc_10293440_10017140(void);
void sub_InitPtr_D2Client_DAT_6fbbb2a4_100171a0(void);
void sub_InitPtr_D2Client_DAT_6fbbb430_100171b0(void);
void sub_InitPtr_D2Client_DAT_6fbaad5c_100172b0(void);
void sub_InitPtr_D2Client_DAT_6fbaad60_100172c0(void);
void sub_InitPtr_D2Client_DAT_6fbaad64_100172d0(void);
void sub_InitPtr_D2Client_DAT_6fbaad68_100172e0(void);
void sub_InitPtr_D2Client_DAT_6fbcbbb0_100172f0(void);
void sub_InitPtr_D2Client_DAT_6fbc971d_10017360(void);
void sub_InitPtr_D2Client_DAT_6fbc9721_10017370(void);
void sub_InitPtr_D2Client_DAT_6fbbb2f8_100174e0(void);
void sub_InitPtr_D2Client_DAT_6fbbb3b0_100174f0(void);
void sub_InitPtr_D2Client_DAT_6fbbb3e0_10017510(void);
void sub_InitPtr_D2Client_DAT_6fbcb9a0_10017540(void);
void sub_InitPtr_D2Client_DAT_6fbcb9a4_10017550(void);
void sub_InitPtr_D2Client_DAT_6fbcb864_10017560(void);
void sub_InitPtr_D2Client_DAT_6fbcbc28_10017570(void);
void sub_InitPtr_D2Client_DAT_6fbcbc2c_10017580(void);
void sub_InitPtr_D2Client_DAT_6fbcbc34_10017590(void);
void sub_InitPtr_D2Client_DAT_6fbcbc3c_100175a0(void);
void sub_InitPtr_D2Client_DAT_6fbcbbfc_100177f0(void);
void sub_InitPtr_D2Client_DAT_6fbcbc38_10017800(void);
void sub_InitPtr_D2Client_DAT_6fbcc3c4_10017fc0(void);
void sub_InitPtr_D2Client_DAT_6fb8d5d0_10017fd0(void);
void sub_InitPtr_D2Client_DAT_6fbca7d1_10018090(void);
void sub_InitPtr_D2Client_DAT_6fbca7d2_100180a0(void);
void sub_InitPtr_D2Client_DAT_6fb8bdb8_10018100(void);
void sub_InitPtr_D2Client_DAT_6fba51bc_10018120(void);
void sub_InitPtr_D2Client_DAT_6fbcc434_100182a0(void);
void sub_InitPtr_D2Client_DAT_6fba9e14_100185a0(void);
void sub_InitPtr_D2Client_DAT_6fba9e18_100185b0(void);
void sub_InitPtr_D2Client_DAT_6fbaad94_102a4de0_100185e0(void);
void sub_InitPtr_D2Client_DAT_6fbaade4_10018610(void);
void sub_InitPtr_D2Client_DAT_6fbcc3a4_100186e0(void);
void sub_InitPtr_D2Client_DAT_6fbcc418_10018700(void);
void sub_InitPtr_D2Client_DAT_6fbd3498_10018760(void);
void sub_InitPtr_D2Client_DAT_6fbd349c_10018770(void);
void sub_InitPtr_D2Client_DAT_6fbcc414_10018890(void);
void sub_InitPtr_D2Client_DAT_6fbcc474_10018900(void);
uint32_t * sub_102195a0(void);
uint8_t * __fastcall sub_10219630(int param_1,int param_2);
char __fastcall sub_10219970(int param_1);
int __fastcall sub_10219980(uint param_1,int param_2,int param_3);
uint32_t __fastcall sub_10219a00(int param_1,int param_2);
bool __fastcall sub_10219a40(int param_1);
void sub_10219a50(int param_1,int reg_ECX,int reg_EDX);
void sub_10219aa0(void);
void sub_Ptr_D2Client_6fb8bdcc_1021a8e0(int param_1,uint32_t reg_EBX);
void sub_Ptr_D2Client_6fb8bdc0_1021ad10(int param_1);
int * sub_Ptr_D2Client_6fb8bdd8_1021b090(int param_1);
void sub_Ptr_D2Client_6fb8bde4_1021b4b0(int param_1);
void sub_Ptr_D2Client_6fb8bdf0_1021b560(int param_1);
uint32_t sub_Hook_sub_6fb730e0_1021b610(void);
uint32_t sub_Hook_sub_6fb730e0_1021b6c0(void);
void sub_Hook_sub_6fb730e0_1021b7e0(int param_1,int param_2,uint param_3);

/* ---- _unattributed/before_client_DrawHoverItem_unit03.cpp ---- */
void sub_init_10019000(void);
void sub_init_10019020(void);
void sub_init_10019110(void);
void sub_init_10019170(void);
void sub_init_100191d0(void);
void sub_init_10019240(void);
void sub_init_100192a0(void);
void sub_init_10019300(void);
void sub_init_10019370(void);
void sub_init_100193e0(void);
void sub_init_10019450(void);
void sub_init_100194b0(void);
void sub_init_10019510(void);
void sub_init_10019580(void);
void sub_init_100195f0(void);
void sub_init_10019660(void);
void sub_init_100196c0(void);
void sub_init_10019720(void);
void sub_init_10019780(void);
void sub_init_100197e0(void);
void sub_init_10019860(void);
void sub_init_100198d0(void);
void sub_init_10019930(void);
void sub_init_10019990(void);
void sub_init_10019a30(void);
void sub_init_10019aa0(void);
void sub_init_10019b00(void);
void sub_init_10019b60(void);
void sub_init_10019bc0(void);
void sub_init_10019c50(void);
void sub_init_10019d10(void);
void sub_init_10019d80(void);
void sub_init_10019df0(void);
void sub_init_10019e40(void);
void sub_init_10019ea0(void);
void sub_init_10019f30(void);
void sub_init_1001a030(void);
void sub_init_1001a0b0(void);
void sub_init_1001a140(void);
void sub_init_1001a700(void);
void sub_init_1001b0d0(void);
void sub_init_1001bad0(void);
void sub_init_1001be50(void);
void sub_init_1001c380(void);
void sub_init_1001c530(void);
void sub_init_1001c590(void);
void sub_init_1001c5f0(void);
void sub_init_1001c650(void);
void sub_init_1001c6b0(void);
void sub_InitPtr_D2Common_DAT_6fde9e1c_1001d090(void);
void sub_InitPtr_D2Client_DAT_6fb8d810_1001e4e0(void);
void sub_InitPtr_D2Client_DAT_6fbcb9c4_1001e9e0(void);
void sub_InitPtr_D2Client_DAT_6fbca7c8_1001ece0(void);
void sub_InitPtr_D2Client_DAT_6fbca784_1001edc0(void);
void sub_InitPtr_D2Client_DAT_6fbcc300_1001edd0(void);
void sub_InitPtr_D2Client_DAT_6fbcc304_10290ef0_1001ede0(void);
void sub_InitPtr_D2Client_DAT_6fb8bc4c_1001f0b0(void);
void sub_InitPtr_D2Client_DAT_6fbcb828_1001f150(void);
void sub_InitPtr_D2Client_DAT_6fbcb824_1001f160(void);
void sub_InitPtr_D2Client_DAT_6fbcbff8_1001f240(void);
void sub_InitPtr_D2Client_DAT_6fbcb9a0_1001f540(void);
void sub_InitPtr_D2Client_DAT_6fbcb9a4_1001f550(void);
void sub_InitPtr_D2Client_DAT_6fbcbbc4_1001f7e0(void);
void sub_InitPtr_D2Client_DAT_6fbcbbfc_1001f7f0(void);
void sub_InitPtr_D2Client_DAT_6fbc9854_1001f860(void);
void sub_InitPtr_D2Client_DAT_6fbcc390_100202e0(void);
void sub_InitPtr_D2Client_DAT_6fba2188_100202f0(void);
void sub_InitPtr_D2Client_DAT_6fba218c_10020300(void);
void sub_InitPtr_D2Client_DAT_6fbc9858_10020320(void);
void sub_InitPtr_D2Client_DAT_6fbcc394_10020330(void);
void __fastcall sub_1021b820(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
int __fastcall sub_1021b880(int param_1);
void __fastcall sub_1021bad0(int param_1,uint param_2,int param_3,int param_4);
void __fastcall sub_1021bc80(int param_1,int param_2,int param_3,uint param_4);
void sub_1021bea0(int param_1,int param_2,int param_3,void *reg_ECX,uint reg_EDX);
void sub_1021bee0(void);
void sub_1021c0a0(void);
void __cdecl sub_1021cb90(uint32_t param_1,uint32_t param_2);
void __cdecl sub_1021cbb0(uint32_t param_1,uint32_t param_2);

/* ---- client/DrawHoverItem.cpp ---- */
void client_DrawHoverItem_init_10021000(void);
void client_DrawHoverItem_init_10021020(void);
void client_DrawHoverItem_init_10021110(void);
void client_DrawHoverItem_init_10021170(void);
void client_DrawHoverItem_init_100211d0(void);
void client_DrawHoverItem_init_10021240(void);
void client_DrawHoverItem_init_100212a0(void);
void client_DrawHoverItem_init_10021300(void);
void client_DrawHoverItem_init_10021370(void);
void client_DrawHoverItem_init_100213e0(void);
void client_DrawHoverItem_init_10021450(void);
void client_DrawHoverItem_init_100214b0(void);
void client_DrawHoverItem_init_10021510(void);
void client_DrawHoverItem_init_10021580(void);
void client_DrawHoverItem_init_100215f0(void);
void client_DrawHoverItem_init_10021660(void);
void client_DrawHoverItem_init_100216c0(void);
void client_DrawHoverItem_init_10021720(void);
void client_DrawHoverItem_init_10021780(void);
void client_DrawHoverItem_init_100217e0(void);
void client_DrawHoverItem_init_10021860(void);
void client_DrawHoverItem_init_100218d0(void);
void client_DrawHoverItem_init_10021930(void);
void client_DrawHoverItem_init_10021990(void);
void client_DrawHoverItem_init_10021a30(void);
void client_DrawHoverItem_init_10021aa0(void);
void client_DrawHoverItem_init_10021b00(void);
void client_DrawHoverItem_init_10021b60(void);
void client_DrawHoverItem_init_10021bc0(void);
void client_DrawHoverItem_init_10021c50(void);
void client_DrawHoverItem_init_10021d10(void);
void client_DrawHoverItem_init_10021d80(void);
void client_DrawHoverItem_init_10021df0(void);
void client_DrawHoverItem_init_10021e40(void);
void client_DrawHoverItem_init_10021ea0(void);
void client_DrawHoverItem_init_10021f30(void);
void client_DrawHoverItem_init_10022030(void);
void client_DrawHoverItem_init_100220b0(void);
void client_DrawHoverItem_init_10022140(void);
void client_DrawHoverItem_init_10022700(void);
void client_DrawHoverItem_init_100230d0(void);
void client_DrawHoverItem_init_10023ad0(void);
void client_DrawHoverItem_init_10023e50(void);
void client_DrawHoverItem_init_10024380(void);
void client_DrawHoverItem_init_10024530(void);
void client_DrawHoverItem_init_10024590(void);
void client_DrawHoverItem_init_100245f0(void);
void client_DrawHoverItem_init_10024650(void);
void client_DrawHoverItem_init_100246b0(void);
void client_DrawHoverItem_InitPtr_D2Common_DAT_6fde9e1c_10279cd0_100250a0(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fba20c8_100265d0(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fb8bc48_100270a0(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fb8bc4c_100270b0(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fb90ea4_100270e0(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fb90ea8_100270f0(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fb90eac_10027100(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fb90eb0_10027110(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fb90eb4_10027120(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcb828_10027150(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcb824_10027160(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbc995c_10027180(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbc9960_10027190(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcb9a0_10027540(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcb9a4_10027550(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcb864_10027560(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcbc28_10027570(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcbc2c_10027580(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcbc34_10027590(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbc97a8_100275c0(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcbbfc_100277f0(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcbc38_10027800(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbc9854_10027860(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcc2f4_10028640(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcc2f8_10028650(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcc418_10028700(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcc414_10028890(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcc468_100288d0(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcc46c_100288e0(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcc470_100288f0(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcc474_10028900(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcc47c_10028910(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fba538c_10028930(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fba5390_10028940(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fba5394_10028950(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fb8bc54_10028e90(void);
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fb8bc58_10028ea0(void);
void __fastcall client_DrawHoverItem_1021cbd0(int *param_1,int param_2);
void __fastcall client_DrawHoverItem_1021ce80(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6, uint32_t *param_7);
void __fastcall client_DrawHoverItem_1021cf80(uint32_t param_1,int param_2,int param_3);
void __fastcall client_DrawHoverItem_1021dec0(int param_1,int *reg_EDX);
void __fastcall client_DrawHoverItem_1021e110(int param_1,int param_2,int param_3);
void __fastcall client_DrawHoverItem_1021e290(int param_1,int *reg_EDX);
void __fastcall client_DrawHoverItem_1021e3d0(int param_1);
void __fastcall client_DrawHoverItem_1021e4f0(uint param_1,int param_2,int *param_3,short *param_4,int param_5);
void __fastcall client_DrawHoverItem_1021e610(uint param_1,int param_2,int *param_3,short *param_4,int param_5);
void __fastcall client_DrawHoverItem_1021e690(int param_1,short *param_2);
void __fastcall client_DrawHoverItem_1021ef70(short *param_1);
void __fastcall client_DrawHoverItem_1021f050(int param_1,int param_2);
void __fastcall client_DrawHoverItem_1021f220(uint16_t *param_1,int param_2,int param_3);
void __fastcall client_DrawHoverItem_1021f370(uint16_t *param_1,int param_2,int param_3);
void __fastcall client_DrawHoverItem_1021f4c0(int param_1,int reg_EDX);
void __fastcall client_DrawHoverItem_1021f770(int param_1,int param_2,int param_3);
void __thiscall client_DrawHoverItem_1021f930(void *this,int param_2,int *reg_EDX);
void __fastcall client_DrawHoverItem_1021fb00(int param_1,int param_2,int param_3);
void client_DrawHoverItem_Wraps_D2Client_UI_inv_1021ffc0(void *reg_ECX,int *reg_EDX);
void client_DrawHoverItem_Wraps_D2Client_UI_ui_102200f0(int param_1,int param_2,int param_3);
void client_DrawHoverItem_102204c0(uint32_t reg_EDI);
uint __fastcall client_DrawHoverItem_10220780(char *param_1,int param_2);
void __fastcall client_DrawHoverItem_10220830(short *param_1,int *param_2);
void client_DrawHoverItem_10221040(void);
void __fastcall client_DrawHoverItem_Wraps_D2Client_UI_inv_10221380(int *param_1);
void client_DrawHoverItem_Wraps_D2Client_UI_inv_10222470(int *param_1,int param_2,uint32_t reg_ESI,uint32_t reg_EDI);
uint32_t __fastcall client_DrawHoverItem_10223db0(int param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6,int param_7 );
void client_DrawHoverItem_Wraps_D2Client_UI_showitems_10223f90(void);
void __fastcall client_DrawHoverItem_102246b0(void *param_1,int param_2,int param_3,int param_4,uint32_t reg_EDI);
void __fastcall client_DrawHoverItem_10224890(int param_1,int *param_2,int param_3);
void client_DrawHoverItem_10224a40(int param_1,int param_2,void *param_3,uint32_t param_4,int param_5,int param_6, uint param_7,int param_8,uint32_t reg_EDI);
uint client_DrawHoverItem_10224ec0(void);
uint32_t __fastcall client_DrawHoverItem_10224f20(int param_1);
uint64_t __fastcall thunk_FUN_10225280(int param_1);
uint32_t * __thiscall client_DrawHoverItem_10224f40(void *this,void *param_1,uint param_2);
void client_DrawHoverItem_10224fc0(void *param_1,void *param_2,int param_3,void *param_4,int param_5);
void __thiscall client_DrawHoverItem_10225010(void *this,short *param_1);
void __thiscall client_DrawHoverItem_10225020(void *this,int param_1);
void __fastcall thunk_FUN_102250f0(uint32_t *param_1);
uint32_t * __thiscall client_DrawHoverItem_10225040(void *this,short *param_1);
uint32_t __fastcall client_DrawHoverItem_10225070(uint32_t *param_1);
uint64_t __fastcall thunk_FUN_1020fe30(int param_1);
void __thiscall client_DrawHoverItem_102250a0(void *this,char *param_1);
void __thiscall client_DrawHoverItem_102250d0(void *this,char *param_1);
void __thiscall client_DrawHoverItem_102250e0(void *this,char *param_1);
void __fastcall client_DrawHoverItem_102250f0(uint32_t *param_1);
void __fastcall client_DrawHoverItem_10225130(uint16_t *param_1);
void __thiscall client_DrawHoverItem_10225160(void *this,short *param_1);
uint32_t * __thiscall client_DrawHoverItem_10225190(void *this,void *param_1,uint param_2);
void client_DrawHoverItem_102251f0(void *param_1,int param_2,void *param_3);
void __thiscall client_DrawHoverItem_10225220(void *this,short *param_1);
void __thiscall client_DrawHoverItem_10225250(void *this,int param_1);
bool __fastcall client_DrawHoverItem_10225270(int param_1);
uint64_t __fastcall client_DrawHoverItem_10225280(int param_1);
uint32_t * __thiscall client_DrawHoverItem_102252a0(void *this,void *param_1,uint param_2);
void client_DrawHoverItem_10225310(void *param_1,void *param_2,size_t param_3,void *param_4,size_t param_5);
void __fastcall client_DrawHoverItem_10225350(uint16_t *param_1,uint16_t *param_2);
int __fastcall client_DrawHoverItem_10225360(short *param_1);
void * __fastcall client_DrawHoverItem_10225380(void *param_1,void *param_2,int param_3);
void * __cdecl client_DrawHoverItem_102253a0(void *param_1,void *param_2,int param_3);
void client_DrawHoverItem_102253c0(uint param_1);
void client_DrawHoverItem_102253e0(void *param_1,int param_2);
void __cdecl client_DrawHoverItem_10225400(uint32_t param_1,uint32_t param_2);
void __cdecl client_DrawHoverItem_10225420(uint32_t param_1,uint32_t param_2);
void __cdecl client_DrawHoverItem_10225440(uint32_t param_1,uint32_t param_2);
void __cdecl client_DrawHoverItem_10225460(uint32_t param_1,uint32_t param_2);
void * __fastcall client_DrawHoverItem_10225480(void *param_1,int param_2,short *param_3);
uint32_t * __thiscall client_DrawHoverItem_102254e0(void *this,uint param_1,uint32_t param_2,void *param_3,int param_4);
uint32_t * __thiscall client_DrawHoverItem_102255a0(void *this,uint param_1,uint32_t param_2,void *param_3);
uint32_t * __thiscall client_DrawHoverItem_10225640(void *this,uint param_1,uint32_t param_2,void *param_3,size_t param_4);
int __fastcall client_DrawHoverItem_10225700(uint param_1);
void __thiscall client_DrawHoverItem_10225710(void *this,uint param_1);
uint32_t * __thiscall client_DrawHoverItem_10225730(void *this,uint32_t param_1,uint32_t param_2,void *param_3,int param_4, void *param_5,int param_6);
uint __fastcall client_DrawHoverItem_10225810(uint param_1,uint param_2,uint param_3);

/* ---- _unattributed/between_client_DrawHoverItem_and_functions_D2ClientFunctions_unit05.cpp ---- */
void sub_init_10029000(void);
void sub_init_10029020(void);
void sub_init_10029110(void);
void sub_init_10029170(void);
void sub_init_100291d0(void);
void sub_init_10029240(void);
void sub_init_100292a0(void);
void sub_init_10029300(void);
void sub_init_10029370(void);
void sub_init_100293e0(void);
void sub_init_10029450(void);
void sub_init_100294b0(void);
void sub_init_10029510(void);
void sub_init_10029580(void);
void sub_init_100295f0(void);
void sub_init_10029660(void);
void sub_init_100296c0(void);
void sub_init_10029720(void);
void sub_init_10029780(void);
void sub_init_100297e0(void);
void sub_init_10029860(void);
void sub_init_100298d0(void);
void sub_init_10029930(void);
void sub_init_10029990(void);
void sub_init_10029a30(void);
void sub_init_10029aa0(void);
void sub_init_10029b00(void);
void sub_init_10029b60(void);
void sub_init_10029bc0(void);
void sub_init_10029c50(void);
void sub_init_10029d10(void);
void sub_init_10029d80(void);
void sub_init_10029df0(void);
void sub_init_10029e40(void);
void sub_init_10029ea0(void);
void sub_init_10029f30(void);
void sub_init_1002a030(void);
void sub_init_1002a0b0(void);
void sub_init_1002a140(void);
void sub_init_1002a700(void);
void sub_init_1002b0d0(void);
void sub_init_1002bad0(void);
void sub_init_1002be50(void);
void sub_init_1002c380(void);
void sub_init_1002c530(void);
void sub_init_1002c590(void);
void sub_init_1002c5f0(void);
void sub_init_1002c650(void);
void sub_init_1002c6b0(void);
void sub_InitPtr_D2Client_DAT_6fbaada4_1002ec80(void);
void sub_InitPtr_D2Client_DAT_6fbaadac_1002ec90(void);
void sub_InitPtr_D2Client_DAT_6fbaad94_1002eca0(void);
void sub_InitPtr_D2Client_DAT_6fbaadd0_1002ecb0(void);
void sub_InitPtr_D2Client_DAT_6fbcfed8_1002ecc0(void);
void sub_InitPtr_D2Client_DAT_6fbbb35c_1002ecd0(void);
void sub_InitPtr_D2Client_DAT_6fbca7c8_1002ece0(void);
void sub_InitPtr_D2Client_DAT_6fbcbc64_1002ecf0(void);
void sub_InitPtr_D2Client_DAT_6fbcbc70_1002ed00(void);
void sub_InitPtr_D2Client_DAT_6fbcbc74_1002ed10(void);
void sub_InitPtr_D2Client_DAT_6fbcbc78_1002ed20(void);
void sub_InitPtr_D2Client_DAT_6fbcbc84_1002ed30(void);
void sub_InitPtr_D2Client_DAT_6fbcbeb4_1002ed40(void);
void sub_InitPtr_D2Client_DAT_6fbcbeb8_1002ed50(void);
void sub_InitPtr_D2Client_DAT_6fbcbebc_1002ed60(void);
void sub_InitPtr_D2Client_DAT_6fbcbec0_1002ed70(void);
void sub_InitPtr_D2Client_DAT_6fbcbec4_1002ed80(void);
void sub_InitPtr_D2Client_DAT_6fbcbec8_1002ed90(void);
void sub_InitPtr_D2Client_DAT_6fbcbed0_1002edb0(void);
void sub_InitPtr_D2Client_DAT_6fbcbe5c_1002edf0(void);
void sub_InitPtr_D2Client_DAT_6fbcbe60_1002ee00(void);
void sub_InitPtr_D2Client_DAT_6fbcbe64_1002ee10(void);
void sub_InitPtr_D2Client_DAT_6fbcbe68_1002ee20(void);
void sub_InitPtr_D2Client_DAT_6fbcbe74_1002ee40(void);
void sub_InitPtr_D2Client_DAT_6fbcbedc_1002ee90(void);
void sub_InitPtr_D2Client_DAT_6fbcbe84_1002eea0(void);
void sub_InitPtr_D2Client_DAT_6fbcbe8c_1002eeb0(void);
void sub_InitPtr_D2Client_DAT_6fbcbe94_1002eec0(void);
void sub_InitPtr_D2Client_DAT_6fbcbc4c_1002eef0(void);
void sub_InitPtr_D2Client_DAT_6fbcbc54_1002ef00(void);
void sub_InitPtr_D2Client_DAT_6fbcbc58_1002ef10(void);
void sub_InitPtr_D2Client_DAT_6fbcbc5c_1002ef20(void);
void sub_InitPtr_D2Client_DAT_6fbcbc60_1002ef30(void);
void sub_InitPtr_D2Client_DAT_6fbcbcb4_1002ef40(void);
void sub_InitPtr_D2Client_DAT_6fbcbcc8_1002ef50(void);
void sub_InitPtr_D2Client_DAT_6fbcbcdc_1002ef60(void);
void sub_InitPtr_D2Client_DAT_6fbcbcf0_1002ef70(void);
void sub_InitPtr_D2Client_DAT_6fbcbd04_1002ef80(void);
void sub_InitPtr_D2Client_DAT_6fbcbd18_1002ef90(void);
void sub_InitPtr_D2Client_DAT_6fbcbd2c_1002efa0(void);
void sub_InitPtr_D2Client_DAT_6fbcbd40_1002efb0(void);
void sub_InitPtr_D2Client_DAT_6fbcbd54_1002efc0(void);
void sub_InitPtr_D2Client_DAT_6fbcbd68_1002efd0(void);
void sub_InitPtr_D2Client_DAT_6fbc77ec_1002efe0(void);
void sub_InitPtr_D2Client_DAT_6fbc77fc_1002eff0(void);
void sub_InitPtr_D2Client_DAT_6fb8bc48_1002f0a0(void);
void sub_InitPtr_D2Client_DAT_6fb8bc4c_1002f0b0(void);
void sub_InitPtr_D2Client_DAT_6fbcb828_1002f150(void);
void sub_InitPtr_D2Client_DAT_6fbcb824_1002f160(void);
void sub_InitPtr_D2Client_DAT_6fbba808_1002f340(void);
void sub_InitPtr_D2Client_DAT_6fbc971d_1002f360(void);
void sub_InitPtr_D2Client_DAT_6fbc9721_1002f370(void);
void sub_InitPtr_D2Client_DAT_6fbcb9a0_1002f540(void);
void sub_InitPtr_D2Client_DAT_6fbcb9a4_1002f550(void);
void sub_InitPtr_D2Client_DAT_6fbcbc34_1002f590(void);
void sub_InitPtr_D2Client_DAT_6fbcbc48_1002f5b0(void);
void sub_InitPtr_D2Client_DAT_6fbcbbfc_1002f7f0(void);
void sub_InitPtr_D2Client_DAT_6fbcbc94_1002f820(void);
void sub_InitPtr_D2Client_DAT_6fbc9854_1002f860(void);
void sub_InitPtr_D2Client_DAT_6fbcc3c4_1002ffc0(void);
void sub_InitPtr_D2Client_DAT_6fb8d5d0_1002ffd0(void);
void sub_InitPtr_D2Client_DAT_6fbca7d0_10030080(void);
void sub_InitPtr_D2Client_DAT_6fbca7d1_10030090(void);
void sub_InitPtr_D2Client_DAT_6fb8be18_10030110(void);
void sub_InitPtr_D2Client_DAT_6fba51bc_10030120(void);
void sub_InitPtr_D2Client_DAT_6fbcc4fc_10030280(void);
void sub_InitPtr_D2Client_DAT_6fbcc500_10030290(void);
void sub_InitPtr_D2Client_DAT_6fbcc434_100302a0(void);
void sub_InitPtr_D2Client_DAT_6fba9e14_100305a0(void);
void sub_InitPtr_D2Client_DAT_6fba9e18_100305b0(void);
void sub_InitPtr_D2Client_DAT_6fbaade8_10030620(void);
void sub_InitPtr_D2Client_DAT_6fbcc3a4_100306e0(void);
void sub_InitPtr_D2Client_DAT_6fbcc418_10030700(void);
void sub_InitPtr_D2Client_DAT_6fbcc534_10030710(void);
void sub_InitPtr_D2Client_DAT_6fbcc538_10030720(void);
void sub_InitPtr_D2Client_DAT_6fbcc540_10030730(void);
void sub_InitPtr_D2Client_DAT_6fbcc544_10030740(void);
void sub_InitPtr_D2Client_DAT_6fbd33f4_10030750(void);
void sub_InitPtr_D2Client_DAT_6fbd3498_10030760(void);
void sub_InitPtr_D2Client_DAT_6fbd349c_10030770(void);
void sub_InitPtr_D2Client_DAT_6fbcc414_10030890(void);
void sub_InitPtr_D2Client_DAT_6fbca774_100308c0(void);
void sub_InitPtr_D2Client_DAT_6fbcc468_100308d0(void);
void sub_InitPtr_D2Client_DAT_6fbcc46c_100308e0(void);
void sub_InitPtr_D2Client_DAT_6fbcc470_100308f0(void);
void sub_InitPtr_D2Client_DAT_6fbcc474_10030900(void);
void sub_InitPtr_D2Client_DAT_6fbcc47c_10030910(void);
void sub_InitPtr_D2Client_DAT_6fba5384_10030920(void);
void sub_InitPtr_D2Client_DAT_6fbcb99c_10030960(void);
void sub_init_10031000(void);
void sub_10225870(void);
void sub_10225970(void);
void sub_10225a60(int *param_1,int param_2,int param_3,int reg_EDX);
void __thiscall sub_10225b30(void *this,uint32_t param_1,uint32_t param_2,int *param_3,int param_4);
void __thiscall sub_10225b60(void *this,uint32_t param_1,uint32_t param_2,int *param_3,int param_4);
void sub_10225b90(int param_1,uint param_2,int param_3,int param_4);
void sub_10225c40(void);
void sub_Wraps_D2Client_UI_panel_10226280(void);
void __fastcall sub_10226710(int param_1,uint32_t reg_EDI);
void sub_10226880(void);
void sub_10226d80(uint32_t reg_ESI);
void sub_102272e0(void);
void sub_10227850(void);
void sub_Hook_sub_6fb739e0_10227d70(uint32_t reg_ESI);
void sub_Hook_sub_6faf4230_10227fc0(uint32_t param_1);
bool __thiscall sub_10228020(void *this,int *param_1);
uint32_t __thiscall sub_10228040(void *this,void *param_1,int *param_2);
void sub_10228060(void);
uint32_t __thiscall sub_102280a0(void *this,void *param_1);
uint32_t sub_102280c0(uint32_t param_1,uint param_2);
uint32_t __thiscall sub_10228100(void *this,int *param_1);
uint32_t sub_10228140(uint32_t param_1,uint param_2);
int sub_10228210(uint32_t param_1,uint32_t param_2);
uint64_t __fastcall sub_10228240(int param_1,int param_2);
uint16_t sub_10228270(int param_1,int param_2);
bool sub_102282a0(int param_1,int param_2);
void __fastcall sub_102282e0(int param_1);
uint8_t * sub_10228310(int param_1,int param_2);
void sub_10228b70(int param_1,int param_2);
uint32_t __fastcall sub_10228ef0(short param_1,int param_2,uint32_t *param_3);

/* ---- _unattributed/between_client_DrawHoverItem_and_functions_D2ClientFunctions_unit06.cpp ---- */
void sub_init_10031020(void);
void sub_init_10031040(void);
void sub_init_10031130(void);
void sub_init_10031190(void);
void sub_init_100311f0(void);
void sub_init_10031260(void);
void sub_init_100312c0(void);
void sub_init_10031320(void);
void sub_init_10031390(void);
void sub_init_10031400(void);
void sub_init_10031470(void);
void sub_init_100314d0(void);
void sub_init_10031530(void);
void sub_init_100315a0(void);
void sub_init_10031610(void);
void sub_init_10031680(void);
void sub_init_100316e0(void);
void sub_init_10031740(void);
void sub_init_100317a0(void);
void sub_init_10031800(void);
void sub_init_10031880(void);
void sub_init_100318f0(void);
void sub_init_10031950(void);
void sub_init_100319b0(void);
void sub_init_10031a50(void);
void sub_init_10031ac0(void);
void sub_init_10031b20(void);
void sub_init_10031b80(void);
void sub_init_10031be0(void);
void sub_init_10031c70(void);
void sub_init_10031d30(void);
void sub_init_10031da0(void);
void sub_init_10031e10(void);
void sub_init_10031e60(void);
void sub_init_10031ec0(void);
void sub_init_10031f50(void);
void sub_init_10032050(void);
void sub_init_100320d0(void);
void sub_init_10032160(void);
void sub_init_10032720(void);
void sub_init_100330f0(void);
void sub_init_10033af0(void);
void sub_init_10033e70(void);
void sub_init_100343a0(void);
void sub_init_10034550(void);
void sub_init_100345b0(void);
void sub_init_10034610(void);
void sub_init_10034670(void);
void sub_init_100346d0(void);
void sub_InitPtr_D2Client_DAT_6fbcbcf0_10036f90(void);
void sub_InitPtr_D2Client_DAT_6fbcbd04_10036fa0(void);
void sub_InitPtr_D2Client_DAT_6fb8bc48_100370c0(void);
void sub_InitPtr_D2Client_DAT_6fb8bc4c_100370d0(void);
void sub_InitPtr_D2Client_DAT_6fbcb828_10037170(void);
void sub_InitPtr_D2Client_DAT_6fbcb824_10037180(void);
void sub_InitPtr_D2Client_DAT_6fbcb9a0_10037560(void);
void sub_InitPtr_D2Client_DAT_6fbcb9a4_10037570(void);
void sub_InitPtr_D2Client_DAT_6fbcc4fc_100382a0(void);
void sub_InitPtr_D2Client_DAT_6fbcc500_100382b0(void);
void sub_InitPtr_D2Client_DAT_6fba9e18_100385d0(void);
void sub_InitPtr_D2Client_DAT_6fbcc534_10038730(void);
void sub_InitPtr_D2Client_DAT_6fbcc538_10038740(void);
void sub_InitPtr_D2Client_DAT_6fbd33f4_10038770(void);
void __fastcall sub_10228f50(short param_1);
uint32_t __fastcall sub_10228fd0(int param_1,uint param_2);
uint32_t __fastcall sub_10229050(int param_1,uint param_2);
uint32_t __fastcall sub_102290a0(int param_1,uint param_2);
uint32_t __fastcall sub_10229100(int param_1,uint param_2);
uint64_t __fastcall sub_10229150(int param_1,uint param_2);
uint32_t __fastcall sub_102291a0(int param_1,uint param_2);
int __fastcall sub_10229210(uint param_1,uint param_2);
int __fastcall sub_10229240(int param_1);
uint32_t __fastcall sub_102292a0(int param_1,uint param_2);
bool __fastcall sub_10229310(uint param_1);
uint64_t __fastcall sub_10229340(int param_1,uint param_2);
uint32_t __fastcall sub_10229390(int param_1,uint param_2);
uint32_t sub_102293e0(void);

/* ---- _unattributed/between_client_DrawHoverItem_and_functions_D2ClientFunctions_unit07.cpp ---- */
void sub_init_10039020(void);
void sub_init_10039040(void);
void sub_init_10039130(void);
void sub_init_10039190(void);
void sub_init_100391f0(void);
void sub_init_10039260(void);
void sub_init_100392c0(void);
void sub_init_10039320(void);
void sub_init_10039390(void);
void sub_init_10039400(void);
void sub_init_10039470(void);
void sub_init_100394d0(void);
void sub_init_10039530(void);
void sub_init_100395a0(void);
void sub_init_10039610(void);
void sub_init_10039680(void);
void sub_init_100396e0(void);
void sub_init_10039740(void);
void sub_init_100397a0(void);
void sub_init_10039800(void);
void sub_init_10039880(void);
void sub_init_100398f0(void);
void sub_init_10039950(void);
void sub_init_100399b0(void);
void sub_init_10039a50(void);
void sub_init_10039ac0(void);
void sub_init_10039b20(void);
void sub_init_10039b80(void);
void sub_init_10039be0(void);
void sub_init_10039c70(void);
void sub_init_10039d30(void);
void sub_init_10039da0(void);
void sub_init_10039e10(void);
void sub_init_10039e60(void);
void sub_init_10039ec0(void);
void sub_init_10039f50(void);
void sub_init_1003a050(void);
void sub_init_1003a0d0(void);
void sub_init_1003a160(void);
void sub_init_1003a720(void);
void sub_init_1003b0f0(void);
void sub_init_1003baf0(void);
void sub_init_1003be70(void);
void sub_init_1003c3a0(void);
void sub_init_1003c550(void);
void sub_init_1003c5b0(void);
void sub_init_1003c610(void);
void sub_init_1003c670(void);
void sub_init_1003c6d0(void);
void sub_InitPtr_D2Client_DAT_6fbba608_1003e480(void);
void sub_InitPtr_D2Client_DAT_6fb8bc48_1003f0c0(void);
void sub_InitPtr_D2Client_DAT_6fbcbc34_1003f5b0(void);
void sub_InitPtr_D2Client_DAT_6fbc97a8_1003f5e0(void);
void sub_InitPtr_D2Client_DAT_6fbc971d_10296c60_1003f660(void);
void sub_InitPtr_D2Client_DAT_6fbcbbfc_1003f810(void);
void sub_InitPtr_D2Client_DAT_6fbc9854_1003f880(void);
void sub_InitPtr_D2Client_DAT_6fbca75c_10040020(void);
void sub_InitPtr_D2Client_DAT_6fbca760_10040030(void);
void sub_InitPtr_D2Client_DAT_6fbc9e60_10040040(void);
void sub_InitPtr_D2Client_DAT_6fbca764_10040050(void);
void sub_InitPtr_D2Client_DAT_6fbca76c_10040060(void);
void sub_InitPtr_D2Client_DAT_6fbca754_10040070(void);
void sub_InitPtr_D2Client_DAT_6fbca758_10040080(void);
void sub_InitPtr_D2Client_DAT_6fbca768_10040090(void);
void sub_InitPtr_D2Client_DAT_6fb8e85c_100400f0(void);
void sub_InitPtr_D2Client_DAT_6fb8e868_10040100(void);
void sub_InitPtr_D2Client_DAT_6fba51bc_10040140(void);
void sub_InitPtr_D2Client_DAT_6fbc9860_10040250(void);
void sub_InitPtr_D2Client_DAT_6fbc9928_10040260(void);
void sub_InitPtr_D2Client_DAT_6fba8b94_10040280(void);
void sub_InitPtr_D2Client_DAT_6fba8728_10040290(void);
void sub_InitPtr_D2Client_DAT_6fbcc4fc_100402a0(void);
void sub_InitPtr_D2Client_DAT_6fbcc500_100402b0(void);
void sub_InitPtr_D2Client_DAT_6fbcc434_100402c0(void);
void sub_InitPtr_D2Client_DAT_6fba9e18_100405d0(void);
void sub_InitPtr_D2Client_DAT_6fbaada4_102a4e90_10040610(void);
void sub_InitPtr_D2Client_DAT_6fbaadac_102a4f40_10040620(void);
void sub_InitPtr_D2Client_DAT_6fbc3a68_10040650(void);
void sub_InitPtr_D2Client_DAT_6fbcc2f4_10040660(void);
void sub_InitPtr_D2Client_DAT_6fbcc2f8_10040670(void);
void sub_InitPtr_D2Client_DAT_6fbcc3f0_10040710(void);
void sub_InitPtr_D2Client_DAT_6fbcc534_10040730(void);
void sub_InitPtr_D2Client_DAT_6fbcc538_10040740(void);
void sub_InitPtr_D2Client_DAT_6fbcc540_10040750(void);
void sub_InitPtr_D2Client_DAT_6fbd33f4_10040770(void);
void sub_InitPtr_D2Client_DAT_6fbd349c_10040790(void);
void sub_init_10041020(void);
void sub_init_10041040(void);
void sub_init_10041060(void);
void sub_10229440(void);
int __fastcall sub_102294e0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
int __fastcall sub_10229520(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void __cdecl sub_10229550(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __cdecl sub_10229570(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_10229590(void);
void sub_10229640(void);
void sub_10229720(void);
void sub_102297d0(void);
void sub_10229900(int param_1);
void sub_10229a30(void);
void sub_10229aa0(void);
void sub_10229ff0(void);
void sub_1022a180(uint32_t reg_ECX,uint32_t reg_ESI);
void sub_1022a2d0(DWORD reg_ECX,DWORD reg_EDX,uint32_t reg_ESI,uint32_t reg_EDI);
uint32_t __fastcall sub_1022a3d0(uint32_t *param_1,int param_2,int param_3,short param_4);
void __fastcall sub_1022a570(uint param_1,uint param_2);
void __fastcall sub_1022a9e0(uint param_1,uint param_2);
void sub_1022aab0(void);
void sub_1022ab20(void);
void sub_1022ab50(void);
void sub_1022ab70(void);
void sub_Settings_1022abb0(uint32_t reg_EBX);
void sub_Settings_1022abe0(uint32_t reg_EBX);
void sub_1022ac10(uint32_t reg_EBX);
void sub_Settings_1022ac40(uint32_t reg_EBX);
void sub_1022ac70(void);
void sub_1022ac80(void);
void sub_1022acd0(void);
void sub_1022acf0(void);
void sub_1022ad10(void);
void sub_1022ad30(void);
void sub_1022ad90(void);
void sub_1022adc0(void);
void sub_1022adf0(void);
void sub_1022ae20(void);
void sub_1022ae40(void);
void sub_1022ae60(void);
void sub_1022ae80(void);
void sub_1022aea0(void);
void sub_1022aec0(void);
void sub_1022aee0(void);
void sub_1022af00(void);
void sub_1022af20(void);
void sub_1022af40(void);
void sub_1022af60(void);
void sub_1022af80(void);
void sub_1022afa0(void);
void sub_1022afc0(void);
void sub_1022afe0(void);
void sub_1022b000(void);
void sub_1022b020(void);
void __fastcall sub_1022b050(uint32_t param_1,uint32_t param_2);
void sub_1022b100(void);
void __fastcall UI_inv_6fb40f60(uint param_1);   /* game binding -> D2Client.dll +0x90f60, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
void sub_1022b140(void);
void sub_1022b190(void);
uint32_t __fastcall sub_1022b200(uint32_t param_1);
void sub_1022b240(void);
void sub_1022b350(void);
void sub_1022b370(void);
void sub_1022b390(void);
void sub_1022b3b0(void);
void sub_1022b3d0(void);
void sub_1022b3f0(void);
void sub_1022b410(void);
void sub_1022b430(void);

/* ---- _unattributed/between_client_DrawHoverItem_and_functions_D2ClientFunctions_unit08.cpp ---- */
void sub_init_10041080(void);
void sub_init_100410a0(void);
void sub_init_10041190(void);
void sub_init_100411f0(void);
void sub_init_10041250(void);
void sub_init_100412c0(void);
void sub_init_10041320(void);
void sub_init_10041380(void);
void sub_init_100413f0(void);
void sub_init_10041460(void);
void sub_init_100414d0(void);
void sub_init_10041530(void);
void sub_init_10041590(void);
void sub_init_10041600(void);
void sub_init_10041670(void);
void sub_init_100416e0(void);
void sub_init_10041740(void);
void sub_init_100417a0(void);
void sub_init_10041800(void);
void sub_init_10041860(void);
void sub_init_100418e0(void);
void sub_init_10041950(void);
void sub_init_100419b0(void);
void sub_init_10041a10(void);
void sub_init_10041ab0(void);
void sub_init_10041b20(void);
void sub_init_10041b80(void);
void sub_init_10041be0(void);
void sub_init_10041c40(void);
void sub_init_10041cd0(void);
void sub_init_10041d90(void);
void sub_init_10041e00(void);
void sub_init_10041e70(void);
void sub_init_10041ec0(void);
void sub_init_10041f20(void);
void sub_init_10041fb0(void);
void sub_init_100420b0(void);
void sub_init_10042130(void);
void sub_init_100421c0(void);
void sub_init_10042780(void);
void sub_init_10043150(void);
void sub_init_10043b50(void);
void sub_init_10043ed0(void);
void sub_init_10044400(void);
void sub_init_100445b0(void);
void sub_init_10044610(void);
void sub_init_10044670(void);
void sub_init_100446d0(void);
void sub_init_10044730(void);
void sub_InitPtr_D2Client_DAT_6fbcb828_100471d0(void);
void sub_InitPtr_D2Client_DAT_6fbcb824_100471e0(void);

/* ---- functions/D2ClientFunctions.cpp ---- */
void functions_D2ClientFunctions_init_10049080(void);
void functions_D2ClientFunctions_init_100490a0(void);
void functions_D2ClientFunctions_init_10049190(void);
void functions_D2ClientFunctions_init_100491f0(void);
void functions_D2ClientFunctions_init_10049250(void);
void functions_D2ClientFunctions_init_100492c0(void);
void functions_D2ClientFunctions_init_10049320(void);
void functions_D2ClientFunctions_init_10049380(void);
void functions_D2ClientFunctions_init_100493f0(void);
void functions_D2ClientFunctions_init_10049460(void);
void functions_D2ClientFunctions_init_100494d0(void);
void functions_D2ClientFunctions_init_10049530(void);
void functions_D2ClientFunctions_init_10049590(void);
void functions_D2ClientFunctions_init_10049600(void);
void functions_D2ClientFunctions_init_10049670(void);
void functions_D2ClientFunctions_init_100496e0(void);
void functions_D2ClientFunctions_init_10049740(void);
void functions_D2ClientFunctions_init_100497a0(void);
void functions_D2ClientFunctions_init_10049800(void);
void functions_D2ClientFunctions_init_10049860(void);
void functions_D2ClientFunctions_init_100498e0(void);
void functions_D2ClientFunctions_init_10049950(void);
void functions_D2ClientFunctions_init_100499b0(void);
void functions_D2ClientFunctions_init_10049a10(void);
void functions_D2ClientFunctions_init_10049ab0(void);
void functions_D2ClientFunctions_init_10049b20(void);
void functions_D2ClientFunctions_init_10049b80(void);
void functions_D2ClientFunctions_init_10049be0(void);
void functions_D2ClientFunctions_init_10049c40(void);
void functions_D2ClientFunctions_init_10049cd0(void);
void functions_D2ClientFunctions_init_10049d90(void);
void functions_D2ClientFunctions_init_10049e00(void);
void functions_D2ClientFunctions_init_10049e70(void);
void functions_D2ClientFunctions_init_10049ec0(void);
void functions_D2ClientFunctions_init_10049f20(void);
void functions_D2ClientFunctions_init_10049fb0(void);
void functions_D2ClientFunctions_init_1004a0b0(void);
void functions_D2ClientFunctions_init_1004a130(void);
void functions_D2ClientFunctions_init_1004a1c0(void);
void functions_D2ClientFunctions_init_1004a780(void);
void functions_D2ClientFunctions_init_1004b150(void);
void functions_D2ClientFunctions_init_1004bb50(void);
void functions_D2ClientFunctions_init_1004bed0(void);
void functions_D2ClientFunctions_init_1004c400(void);
void functions_D2ClientFunctions_init_1004c5b0(void);
void functions_D2ClientFunctions_init_1004c610(void);
void functions_D2ClientFunctions_init_1004c670(void);
void functions_D2ClientFunctions_init_1004c6d0(void);
void functions_D2ClientFunctions_init_1004c730(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbba608_1004e4e0(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbbb228_1004ebc0(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbbb210_1004ebd0(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbbb214_1004ebe0(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbbb21c_1004ebf0(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fb8bc48_1004f120(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcb828_1004f1d0(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcb824_1004f1e0(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbc971d_10296c60_1004f6c0(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcbbfc_1004f870(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcbc38_1004f880(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc434_10050320(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc058_10050330(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc05c_10050340(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc060_10050350(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fba46c4_100505f0(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fba46c8_10050600(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc2f4_100506c0(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc2f8_100506d0(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc068_100506e0(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc06c_100506f0(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc3dc_10050700(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc3de_10050710(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc3f8_10050720(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc3fc_10050730(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc3a4_10050760(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc538_100507a0(void);
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc414_10050910(void);
void functions_D2ClientFunctions_1022da20(int param_1);
void functions_D2ClientFunctions_1022da70(int param_1);
void functions_D2ClientFunctions_1022dad0(int param_1);
void functions_D2ClientFunctions_1022db50(int param_1);
void functions_D2ClientFunctions_1022dbc0(int param_1);
void functions_D2ClientFunctions_1022dc20(int param_1);
void functions_D2ClientFunctions_1022dc80(int param_1);
void functions_D2ClientFunctions_1022dd10(int param_1);
void functions_D2ClientFunctions_1022dd90(int param_1);
void functions_D2ClientFunctions_1022de00(int param_1);
void functions_D2ClientFunctions_1022de60(int param_1);
void functions_D2ClientFunctions_1022df70(int param_1);
void functions_D2ClientFunctions_1022e040(int param_1);
void functions_D2ClientFunctions_1022e080(int param_1);
void functions_D2ClientFunctions_1022e0e0(int param_1);
void functions_D2ClientFunctions_1022e1b0(int param_1);
void functions_D2ClientFunctions_1022e290(int param_1);
void functions_D2ClientFunctions_1022e340(int param_1);
void functions_D2ClientFunctions_1022e3b0(int param_1);
void functions_D2ClientFunctions_1022e410(int param_1);
void functions_D2ClientFunctions_1022e4d0(int param_1);
void functions_D2ClientFunctions_1022e550(int param_1);
void __thiscall functions_D2ClientFunctions_1022e5c0(void *this,int param_1);
void functions_D2ClientFunctions_1022e6b0(int param_1);
void functions_D2ClientFunctions_1022e790(int param_1);
void functions_D2ClientFunctions_1022e7c0(int param_1);
uint8_t __fastcall functions_D2ClientFunctions_1022e820(int param_1);
uint8_t __fastcall functions_D2ClientFunctions_1022ec90(int param_1);
uint8_t functions_D2ClientFunctions_1022ee40(void);
uint8_t functions_D2ClientFunctions_1022ee50(uint reg_EBX);
uint32_t __fastcall functions_D2ClientFunctions_1022efb0(int param_1,uint reg_EAX);
uint8_t functions_D2ClientFunctions_1022f020(void);
uint8_t __fastcall functions_D2ClientFunctions_1022f030(int param_1);
uint8_t __fastcall functions_D2ClientFunctions_1022f090(int param_1,uint reg_EBX);
void __fastcall functions_D2ClientFunctions_Ptr_D2Client_6fb8eccc_1022f2d0(uint32_t param_1,uint32_t param_2,int param_3);
void __fastcall functions_D2ClientFunctions_1022f430(uint32_t param_1);

/* ---- _unattributed/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit10.cpp ---- */
void sub_init_10051080(void);
void sub_init_100510a0(void);
void sub_init_10051190(void);
void sub_init_100511f0(void);
void sub_init_10051250(void);
void sub_init_100512c0(void);
void sub_init_10051320(void);
void sub_init_10051380(void);
void sub_init_100513f0(void);
void sub_init_10051460(void);
void sub_init_100514d0(void);
void sub_init_10051530(void);
void sub_init_10051590(void);
void sub_init_10051600(void);
void sub_init_10051670(void);
void sub_init_100516e0(void);
void sub_init_10051740(void);
void sub_init_100517a0(void);
void sub_init_10051800(void);
void sub_init_10051860(void);
void sub_init_100518e0(void);
void sub_init_10051950(void);
void sub_init_100519b0(void);
void sub_init_10051a10(void);
void sub_init_10051ab0(void);
void sub_init_10051b20(void);
void sub_init_10051b80(void);
void sub_init_10051be0(void);
void sub_init_10051c40(void);
void sub_init_10051cd0(void);
void sub_init_10051d90(void);
void sub_init_10051e00(void);
void sub_init_10051e70(void);
void sub_init_10051ec0(void);
void sub_init_10051f20(void);
void sub_init_10051fb0(void);
void sub_init_100520b0(void);
void sub_init_10052130(void);
void sub_init_100521c0(void);
void sub_init_10052780(void);
void sub_init_10053150(void);
void sub_init_10053b50(void);
void sub_init_10053ed0(void);
void sub_init_10054400(void);
void sub_init_100545b0(void);
void sub_init_10054610(void);
void sub_init_10054670(void);
void sub_init_100546d0(void);
void sub_init_10054730(void);
void sub_InitPtr_D2Common_DAT_6fded390_10058930(void);
void __fastcall sub_1022f480(int param_1);
uint32_t __fastcall sub_1022f4a0(short param_1);
uint32_t __fastcall sub_1022f4d0(int *param_1);
uint32_t __fastcall sub_1022f500(int *param_1);
uint sub_1022f5b0(int reg_ECX);
uint __fastcall sub_1022f640(int param_1,int *param_2,uint *param_3,uint reg_EAX);

/* ---- _unattributed/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp ---- */
void sub_init_10059080(void);
void sub_init_100590a0(void);
void sub_init_10059190(void);
void sub_init_100591f0(void);
void sub_init_10059250(void);
void sub_init_100592c0(void);
void sub_init_10059320(void);
void sub_init_10059380(void);
void sub_init_100593f0(void);
void sub_init_10059460(void);
void sub_init_100594d0(void);
void sub_init_10059530(void);
void sub_init_10059590(void);
void sub_init_10059600(void);
void sub_init_10059670(void);
void sub_init_100596e0(void);
void sub_init_10059740(void);
void sub_init_100597a0(void);
void sub_init_10059800(void);
void sub_init_10059860(void);
void sub_init_100598e0(void);
void sub_init_10059950(void);
void sub_init_100599b0(void);
void sub_init_10059a10(void);
void sub_init_10059ab0(void);
void sub_init_10059b20(void);
void sub_init_10059b80(void);
void sub_init_10059be0(void);
void sub_init_10059c40(void);
void sub_init_10059cd0(void);
void sub_init_10059d90(void);
void sub_init_10059e00(void);
void sub_init_10059e70(void);
void sub_init_10059ec0(void);
void sub_init_10059f20(void);
void sub_init_10059fb0(void);
void sub_init_1005a0b0(void);
void sub_init_1005a130(void);
void sub_init_1005a1c0(void);
void sub_init_1005a780(void);
void sub_init_1005b150(void);
void sub_init_1005bb50(void);
void sub_init_1005bed0(void);
void sub_init_1005c400(void);
void sub_init_1005c5b0(void);
void sub_init_1005c610(void);
void sub_init_1005c670(void);
void sub_init_1005c6d0(void);
void sub_init_1005c730(void);
void sub_InitPtr_D2Client_DAT_6fb8bc48_1005f120(void);
void sub_InitPtr_D2Client_DAT_6fbcc1b0_1005f250(void);
void sub_InitPtr_D2Client_DAT_6fba16b0_1005f260(void);
void sub_InitPtr_D2Client_DAT_6fbc971d_1005f3e0(void);
void sub_InitPtr_D2Client_DAT_6fbc971d_10296c60_1005f6c0(void);
void sub_InitPtr_D2Client_DAT_6fbcbbfc_1005f870(void);
void sub_InitPtr_D2Client_DAT_6fbcb980_1005f930(void);
void sub_InitPtr_D2Client_DAT_6fbcc280_1005ff00(void);
void sub_InitPtr_D2Client_DAT_6fbcb9c0_1005fff0(void);
void sub_InitPtr_D2Client_DAT_6fbcc070_10060000(void);
void sub_InitPtr_D2Client_DAT_6fbcc074_10060010(void);
void sub_InitPtr_D2Client_DAT_6fbcc078_10060020(void);
void sub_InitPtr_D2Client_DAT_6fbcc07c_10060030(void);
void sub_InitPtr_D2Client_DAT_6fbcc3c4_10060040(void);
void sub_InitPtr_D2Client_DAT_6fb8d5d0_10060050(void);
void sub_InitPtr_D2Client_DAT_6fb8d854_10060060(void);
void sub_InitPtr_D2Client_DAT_6fb8d538_10060070(void);
void sub_InitPtr_D2Client_DAT_6fb928f8_100601b0(void);
void sub_InitPtr_D2Client_DAT_6fbcc058_10060330(void);
void sub_InitPtr_D2Client_DAT_6fbcc05c_10060340(void);
void sub_InitPtr_D2Client_DAT_6fbcc060_10060350(void);
void sub_InitPtr_D2Client_DAT_6fbc9854_102a2b00_10060390(void);
void sub_InitPtr_D2Client_DAT_6fba8c9c_10060610(void);
void sub_InitPtr_D2Client_DAT_6fba9e14_10060620(void);
void sub_InitPtr_D2Client_DAT_6fba9e18_10060630(void);
void sub_InitPtr_D2Client_DAT_6fbaad50_10060640(void);
void sub_InitPtr_D2Client_DAT_6fbaad80_10060650(void);
void sub_InitPtr_D2Client_DAT_6fbaada4_102a4e90_10060670(void);
void sub_InitPtr_D2Client_DAT_6fbc3a68_100606b0(void);
void sub_InitPtr_D2Client_DAT_6fbcc2f4_100606c0(void);
void sub_InitPtr_D2Client_DAT_6fbcc2f8_100606d0(void);
void sub_InitPtr_D2Client_DAT_6fbcc39c_10060740(void);
void sub_InitPtr_D2Client_DAT_6fbcc3a0_10060750(void);
void sub_InitPtr_D2Client_DAT_6fbcc3a4_10060760(void);
void sub_InitPtr_D2Client_DAT_6fbcc418_10060780(void);
void sub_InitPtr_D2Client_DAT_6fbcc414_10060910(void);
void sub_InitPtr_D2Client_DAT_6fbcc098_10060e20(void);
void sub_1022ff90(int param_1,int param_2);
void sub_Settings_102305f0(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10230620(int param_1);
void sub_Settings_10230640(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10230670(int param_1);
void sub_Settings_10230690(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_102306c0(int param_1);
void sub_Settings_102306e0(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10230710(int param_1);
void sub_Settings_10230730(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10230760(int param_1);
void sub_Settings_10230780(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_102307b0(int param_1);
void sub_Settings_102307d0(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10230800(int param_1);
void sub_Settings_10230820(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10230850(int param_1);
void sub_Settings_10230870(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_102308a0(int param_1);
void sub_Settings_102308c0(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_102308f0(int param_1);
void sub_Settings_10230910(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10230940(int param_1);
void sub_10230960(void);
void sub_102309c0(void);
uint32_t sub_10230a50(void);
void __fastcall sub_10230a70(int param_1,uint32_t reg_EBX);
void __fastcall sub_10230ae0(int param_1,uint32_t reg_EBX);
bool sub_10230b90(void);
void __fastcall sub_10230ba0(int param_1,uint32_t param_2);
void __fastcall sub_10230bd0(int param_1);
bool sub_10230c10(void);
void __fastcall sub_10230c20(int param_1);
void __fastcall sub_10230c70(int param_1);
int sub_6faeba70(void);   /* game binding -> D2Client.dll +0x3ba70, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
void sub_Settings_10230ce0(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10230d00(int param_1);
void sub_Settings_10230d10(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10230d30(int param_1);
void sub_Settings_10230d40(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10230d60(int param_1);
void sub_Settings_10230d70(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10230d90(int param_1);
void sub_10230da0(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10230dd0(int param_1);
void sub_Settings_10230de0(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10230e00(int param_1);
void sub_Settings_10230e10(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10230e30(int param_1);
void sub_10230e40(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10230e60(int param_1);
void sub_10230e70(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10230e90(int param_1);
void sub_10230ea0(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10230ee0(int param_1);
void sub_Settings_10230ef0(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10230f10(int param_1);
bool sub_10230f20(void);
void sub_Settings_10230f30(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10230f60(int param_1);
void sub_Settings_10230f80(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10230fb0(int param_1);
void sub_Settings_10230fd0(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10231000(int param_1);
uint8_t sub_10231020(void);
void sub_Settings_10231030(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10231050(int param_1);
void __fastcall sub_10231060(int param_1,uint32_t reg_EBX);
void __fastcall sub_10231120(int param_1);
void sub_10231130(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_102311c0(int param_1);
void sub_Settings_10231210(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10231230(int param_1);
void sub_Settings_10231240(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10231260(int param_1);
void sub_Settings_10231270(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10231290(int param_1);
void sub_Settings_102312a0(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_102312c0(int param_1);
bool sub_102312d0(void);
void sub_102312f0(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10231320(int param_1);
bool sub_10231330(void);
void sub_10231350(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10231380(int param_1);
bool sub_10231390(void);
void sub_102313b0(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_102313e0(int param_1);
uint sub_102313f0(void);
void sub_10231410(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10231440(int param_1);
uint sub_10231450(void);
void sub_10231470(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_102314a0(int param_1);
bool sub_102314b0(void);
void sub_102314d0(uint32_t reg_EBX,int reg_ECX);
void __fastcall sub_10231500(int param_1);
void sub_LoadBH_10231510(void);
uint sub_102315f0(void);
void sub_10231610(void);
uint32_t __fastcall sub_10231650(uint32_t param_1);
void __fastcall sub_10231680(uint32_t param_1,uint32_t param_2);
void __fastcall sub_102316b0(uint32_t param_1);
void __fastcall sub_102316e0(uint32_t param_1);
uint32_t __fastcall sub_10231710(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __fastcall sub_10231750(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __fastcall sub_10231790(int param_1);
void __fastcall sub_102317a0(int param_1);
void __fastcall sub_102317c0(int param_1);
void __fastcall sub_102317d0(int param_1);
void sub_102317f0(void);
void __fastcall sub_10231800(int param_1);
void __fastcall sub_10231810(int param_1);
void __fastcall sub_10231830(int param_1);
void __fastcall sub_10231840(int param_1);
void __fastcall sub_10231870(int param_1);
void __fastcall sub_10231880(int param_1);
void __fastcall sub_102318b0(int param_1);
void __fastcall sub_102318c0(int param_1);
void __fastcall sub_102318e0(int param_1);
void __fastcall sub_102318f0(int param_1);
void __fastcall sub_10231910(int param_1);
void __fastcall sub_10231920(int param_1);
void __fastcall sub_10231940(int param_1);
void __fastcall sub_10231950(int param_1);
void __fastcall sub_10231970(int param_1);
void __fastcall sub_10231980(int param_1);
longlong sub_LoadD2GL_102319a0(void);
uint sub_10231a80(void);
void sub_10231aa0(void);
void __fastcall sub_10231ab0(uint32_t param_1);
ulonglong __fastcall sub_10231ae0(uint32_t param_1,uint32_t param_2);
void sub_10231b50(void);
void sub_10231b70(void);
void sub_10231b90(void);
void __fastcall sub_10231ba0(int param_1);
void __fastcall sub_10231bc0(int param_1);
void __fastcall sub_10231be0(int param_1,uint32_t param_2);
void __fastcall sub_10231c10(int param_1);
void __fastcall sub_10231c30(int param_1);
void __fastcall sub_10231c50(int param_1);
void __fastcall sub_10231c70(int param_1);
void __fastcall sub_10231c90(int param_1);
uint32_t * __thiscall sub_10231cb0(void *this,uint8_t *param_1);
void sub_10231cd0(uint8_t *param_1);
void sub_10231cf0(uint32_t param_1);
void __thiscall sub_10231d20(void *this,uint param_1);
void sub_stl_10231d40(void);
void * __fastcall sub_10231d50(void *param_1);
int __fastcall sub_10231db0(int param_1);
void * __fastcall sub_10231dc0(void *param_1,char *param_2,void *param_3);
void __thiscall sub_10231df0(void *this,uint32_t param_1,char *param_2);
uint32_t * __thiscall sub_10231e20(void *this,uint32_t param_1,uint32_t *param_2,uint param_3);
void sub_10231ed0(void *param_1,void *param_2,int param_3,uint32_t param_4,void *param_5, size_t param_6);
char * __fastcall sub_10231f10(char *param_1,uint param_2);
uint32_t * __thiscall sub_10231f40(void *this,uint32_t param_1,uint32_t param_2);
uint32_t * __thiscall sub_10231fa0(void *this,uint param_1,uint32_t param_2,uint32_t param_3,void *param_4, size_t param_5);
void __thiscall sub_10232060(void *this,int param_1,int param_2);

/* ---- client/Sound/Sound.cpp ---- */
void client_Sound_Sound_init_10061080(void);
void client_Sound_Sound_init_100610a0(void);
void client_Sound_Sound_init_10061190(void);
void client_Sound_Sound_init_100611f0(void);
void client_Sound_Sound_init_10061250(void);
void client_Sound_Sound_init_100612c0(void);
void client_Sound_Sound_init_10061320(void);
void client_Sound_Sound_init_10061380(void);
void client_Sound_Sound_init_100613f0(void);
void client_Sound_Sound_init_10061460(void);
void client_Sound_Sound_init_100614d0(void);
void client_Sound_Sound_init_10061530(void);
void client_Sound_Sound_init_10061590(void);
void client_Sound_Sound_init_10061600(void);
void client_Sound_Sound_init_10061670(void);
void client_Sound_Sound_init_100616e0(void);
void client_Sound_Sound_init_10061740(void);
void client_Sound_Sound_init_100617a0(void);
void client_Sound_Sound_init_10061800(void);
void client_Sound_Sound_init_10061860(void);
void client_Sound_Sound_init_100618e0(void);
void client_Sound_Sound_init_10061950(void);
void client_Sound_Sound_init_100619b0(void);
void client_Sound_Sound_init_10061a10(void);
void client_Sound_Sound_init_10061ab0(void);
void client_Sound_Sound_init_10061b20(void);
void client_Sound_Sound_init_10061b80(void);
void client_Sound_Sound_init_10061be0(void);
void client_Sound_Sound_init_10061c40(void);
void client_Sound_Sound_init_10061cd0(void);
void client_Sound_Sound_init_10061d90(void);
void client_Sound_Sound_init_10061e00(void);
void client_Sound_Sound_init_10061e70(void);
void client_Sound_Sound_init_10061ec0(void);
void client_Sound_Sound_init_10061f20(void);
void client_Sound_Sound_init_10061fb0(void);
void client_Sound_Sound_init_100620b0(void);
void client_Sound_Sound_init_10062130(void);
void client_Sound_Sound_init_100621c0(void);
void client_Sound_Sound_init_10062780(void);
void client_Sound_Sound_init_10063150(void);
void client_Sound_Sound_init_10063b50(void);
void client_Sound_Sound_init_10063ed0(void);
void client_Sound_Sound_init_10064400(void);
void client_Sound_Sound_init_100645b0(void);
void client_Sound_Sound_init_10064610(void);
void client_Sound_Sound_init_10064670(void);
void client_Sound_Sound_init_100646d0(void);
void client_Sound_Sound_init_10064730(void);
void client_Sound_Sound_InitPtr_D2Common_DAT_6fde9e1c_10065110(void);
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcbbfc_10067870(void);
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc24c_10067e90(void);
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc250_10067ea0(void);
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc254_10067eb0(void);
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc258_10067ec0(void);
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc25c_10067ed0(void);
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc260_10067ee0(void);
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbc75b8_10067ef0(void);
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc280_10067f00(void);
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbc97f8_10068820(void);
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc268_10068c80(void);
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcbf34_10068c90(void);
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcbf38_10068cd0(void);
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc354_10068cf0(void);
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc4c0_10068d30(void);
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc4c4_10068d40(void);
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc4c8_10068d50(void);
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc4cc_10068d60(void);
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc4d0_10068d70(void);
void __fastcall client_Sound_Sound_10232090(char *param_1,char *param_2);
int client_Sound_Sound_102320a0(void);
void client_Sound_Sound_102320c0(void);
int __cdecl client_Sound_Sound_102320f0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall client_Sound_Sound_10232130(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __cdecl client_Sound_Sound_10232150(uint32_t param_1,uint32_t param_2);
void client_Sound_Sound_10232170(void);
void client_Sound_Sound_Hook_sub_6faf4b50_10232180(uint32_t param_1);
void client_Sound_Sound_Hook_sub_6faf4b50_10232240(uint32_t reg_EBX,uint32_t reg_ESI);
void client_Sound_Sound_102322a0(void);
void client_Sound_Sound_Hook_WARDEN_WardenClient_6fb39830_102323b0(void);
void __fastcall client_Sound_Sound_10232420(int *param_1);
int client_Sound_Sound_Hook_sub_6fb4cd07_10232a90(int param_1);
void client_Sound_Sound_Wraps_D2Client_Sound_SoundHdr_10232b40(void);
void client_Sound_Sound_Hook_sub_6faf4b50_10233790(void);
int * client_Sound_Sound_Hook_WARDEN_WardenClient_6fb38dd0_10233840(uint param_1);
int client_Sound_Sound_10233980(int param_1,int param_2,int param_3,int param_4,int param_5);
int _D2Client_PlaySoundWithCustomVolumeOrPriority_20 (int param_1,int param_2,int param_3,int param_4,uint32_t param_5);
void __thiscall client_Sound_Sound_10233cb0(void *this,int param_1);
void * __fastcall client_Sound_Sound_10233cd0(void *param_1,void *param_2,char *param_3);
void * __fastcall client_Sound_Sound_10233d00(void *param_1,void *param_2,int param_3);
bool client_Sound_Sound_10233d30(void);
int * __fastcall client_Sound_Sound_10233d40(uint param_1,int param_2);
uint32_t __fastcall client_Sound_Sound_10233f20(int param_1);
void __fastcall client_Sound_Sound_10233f80(uint32_t param_1);

/* ---- client/Sound/SoundChannel.cpp ---- */
void client_Sound_SoundChannel_init_10069080(void);
void client_Sound_SoundChannel_init_100690a0(void);
void client_Sound_SoundChannel_init_10069190(void);
void client_Sound_SoundChannel_init_100691f0(void);
void client_Sound_SoundChannel_init_10069250(void);
void client_Sound_SoundChannel_init_100692c0(void);
void client_Sound_SoundChannel_init_10069320(void);
void client_Sound_SoundChannel_init_10069380(void);
void client_Sound_SoundChannel_init_100693f0(void);
void client_Sound_SoundChannel_init_10069460(void);
void client_Sound_SoundChannel_init_100694d0(void);
void client_Sound_SoundChannel_init_10069530(void);
void client_Sound_SoundChannel_init_10069590(void);
void client_Sound_SoundChannel_init_10069600(void);
void client_Sound_SoundChannel_init_10069670(void);
void client_Sound_SoundChannel_init_100696e0(void);
void client_Sound_SoundChannel_init_10069740(void);
void client_Sound_SoundChannel_init_100697a0(void);
void client_Sound_SoundChannel_init_10069800(void);
void client_Sound_SoundChannel_init_10069860(void);
void client_Sound_SoundChannel_init_100698e0(void);
void client_Sound_SoundChannel_init_10069950(void);
void client_Sound_SoundChannel_init_100699b0(void);
void client_Sound_SoundChannel_init_10069a10(void);
void client_Sound_SoundChannel_init_10069ab0(void);
void client_Sound_SoundChannel_init_10069b20(void);
void client_Sound_SoundChannel_init_10069b80(void);
void client_Sound_SoundChannel_init_10069be0(void);
void client_Sound_SoundChannel_init_10069c40(void);
void client_Sound_SoundChannel_init_10069cd0(void);
void client_Sound_SoundChannel_init_10069d90(void);
void client_Sound_SoundChannel_init_10069e00(void);
void client_Sound_SoundChannel_init_10069e70(void);
void client_Sound_SoundChannel_init_10069ec0(void);
void client_Sound_SoundChannel_init_10069f20(void);
void client_Sound_SoundChannel_init_10069fb0(void);
void client_Sound_SoundChannel_init_1006a0b0(void);
void client_Sound_SoundChannel_init_1006a130(void);
void client_Sound_SoundChannel_init_1006a1c0(void);
void client_Sound_SoundChannel_init_1006a780(void);
void client_Sound_SoundChannel_init_1006b150(void);
void client_Sound_SoundChannel_init_1006bb50(void);
void client_Sound_SoundChannel_init_1006bed0(void);
void client_Sound_SoundChannel_init_1006c400(void);
void client_Sound_SoundChannel_init_1006c5b0(void);
void client_Sound_SoundChannel_init_1006c610(void);
void client_Sound_SoundChannel_init_1006c670(void);
void client_Sound_SoundChannel_init_1006c6d0(void);
void client_Sound_SoundChannel_init_1006c730(void);
void client_Sound_SoundChannel_InitPtr_D2Client_DAT_6fbcc24c_1006fe90(void);
void client_Sound_SoundChannel_InitPtr_D2Client_DAT_6fbcc250_1006fea0(void);
void client_Sound_SoundChannel_InitPtr_D2Client_DAT_6fbcc280_1006ff00(void);
void __fastcall client_Sound_SoundChannel_10233fe0(int param_1);
void client_Sound_SoundChannel_Hook_sub_6faf4b50_10234080(void);
void client_Sound_SoundChannel_Hook_sub_6faf4b50_102340c0(void);
uint32_t * __fastcall client_Sound_SoundChannel_10234140(int param_1);
int * __fastcall client_Sound_SoundChannel_102341a0(uint param_1);
void __fastcall client_Sound_SoundChannel_102343a0(int *param_1);

/* ---- client/Sound/SoundInstance.cpp ---- */
void client_Sound_SoundInstance_init_10071080(void);
void client_Sound_SoundInstance_init_100710a0(void);
void client_Sound_SoundInstance_init_10071190(void);
void client_Sound_SoundInstance_init_100711f0(void);
void client_Sound_SoundInstance_init_10071250(void);
void client_Sound_SoundInstance_init_100712c0(void);
void client_Sound_SoundInstance_init_10071320(void);
void client_Sound_SoundInstance_init_10071380(void);
void client_Sound_SoundInstance_init_100713f0(void);
void client_Sound_SoundInstance_init_10071460(void);
void client_Sound_SoundInstance_init_100714d0(void);
void client_Sound_SoundInstance_init_10071530(void);
void client_Sound_SoundInstance_init_10071590(void);
void client_Sound_SoundInstance_init_10071600(void);
void client_Sound_SoundInstance_init_10071670(void);
void client_Sound_SoundInstance_init_100716e0(void);
void client_Sound_SoundInstance_init_10071740(void);
void client_Sound_SoundInstance_init_100717a0(void);
void client_Sound_SoundInstance_init_10071800(void);
void client_Sound_SoundInstance_init_10071860(void);
void client_Sound_SoundInstance_init_100718e0(void);
void client_Sound_SoundInstance_init_10071950(void);
void client_Sound_SoundInstance_init_100719b0(void);
void client_Sound_SoundInstance_init_10071a10(void);
void client_Sound_SoundInstance_init_10071ab0(void);
void client_Sound_SoundInstance_init_10071b20(void);
void client_Sound_SoundInstance_init_10071b80(void);
void client_Sound_SoundInstance_init_10071be0(void);
void client_Sound_SoundInstance_init_10071c40(void);
void client_Sound_SoundInstance_init_10071cd0(void);
void client_Sound_SoundInstance_init_10071d90(void);
void client_Sound_SoundInstance_init_10071e00(void);
void client_Sound_SoundInstance_init_10071e70(void);
void client_Sound_SoundInstance_init_10071ec0(void);
void client_Sound_SoundInstance_init_10071f20(void);
void client_Sound_SoundInstance_init_10071fb0(void);
void client_Sound_SoundInstance_init_100720b0(void);
void client_Sound_SoundInstance_init_10072130(void);
void client_Sound_SoundInstance_init_100721c0(void);
void client_Sound_SoundInstance_init_10072780(void);
void client_Sound_SoundInstance_init_10073150(void);
void client_Sound_SoundInstance_init_10073b50(void);
void client_Sound_SoundInstance_init_10073ed0(void);
void client_Sound_SoundInstance_init_10074400(void);
void client_Sound_SoundInstance_init_100745b0(void);
void client_Sound_SoundInstance_init_10074610(void);
void client_Sound_SoundInstance_init_10074670(void);
void client_Sound_SoundInstance_init_100746d0(void);
void client_Sound_SoundInstance_init_10074730(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcbf78_100772a0(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbc38f4_100772b0(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcbbfc_10077870(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc24c_10077e90(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc250_10077ea0(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc254_10077eb0(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc258_10077ec0(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc25c_10077ed0(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc260_10077ee0(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbc75b8_10077ef0(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc280_10077f00(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc394_100783b0(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc3b8_10078450(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbaada4_102a4e90_10078670(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbaadac_102a4f40_10078680(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc3a0_10078750(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbc97f8_10078820(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc268_10078c80(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcbf34_10078c90(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcbf40_10078ca0(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcbf30_10078cb0(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc264_10078cc0(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcbf38_10078cd0(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc34c_10078ce0(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc354_10078cf0(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc368_10078d00(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc36c_10078d10(void);
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc370_10078d20(void);
int * client_Sound_SoundInstance_Hook_sub_6fb2d850_102343f0(void);
void __fastcall client_Sound_SoundInstance_10234440(int param_1);
void __fastcall client_Sound_SoundInstance_102344a0(int param_1);
void __fastcall client_Sound_SoundInstance_10234520(float *param_1,int param_2);
uint32_t __fastcall client_Sound_SoundInstance_102345b0(int param_1);
void __fastcall client_Sound_SoundInstance_102345f0(int param_1,int param_2,int param_3);
void __fastcall client_Sound_SoundInstance_10234650(uint32_t param_1,int param_2);
void client_Sound_SoundInstance_Hook_sub_6faf4b50_102346c0(void);
void __fastcall client_Sound_SoundInstance_10234710(int param_1,int param_2,int param_3);
void client_Sound_SoundInstance_102347a0(void);
void client_Sound_SoundInstance_10234810(uint32_t reg_EBX,uint32_t reg_ESI,int reg_ECX);
void __fastcall client_Sound_SoundInstance_10234bf0(int param_1);
void client_Sound_SoundInstance_10234c20(void);
void __fastcall client_Sound_SoundInstance_10234cb0(int param_1);
void __fastcall client_Sound_SoundInstance_10234ce0(int param_1);
void __fastcall client_Sound_SoundInstance_10234d40(uint param_1,int param_2,int param_3);
int __fastcall client_Sound_SoundInstance_10234e50(int param_1);
uint32_t __fastcall client_Sound_SoundInstance_10234ef0(int param_1);
bool __fastcall client_Sound_SoundInstance_10234f20(int param_1);
uint32_t client_Sound_SoundInstance_10234f50(void);
uint32_t client_Sound_SoundInstance_10234f90(void);
void client_Sound_SoundInstance_10234fd0(int param_1,uint32_t param_2,int param_3,int param_4,uint32_t param_5, int param_6,uint32_t param_7);
void client_Sound_SoundInstance_Hook_sub_6faf4b50_102350d0(void);
void client_Sound_SoundInstance_10235230(void);
void client_Sound_SoundInstance_10235390(void);
void __fastcall client_Sound_SoundInstance_10235410(int param_1,uint32_t param_2);
uint32_t client_Sound_SoundInstance_10235440(void);
void __fastcall client_Sound_SoundInstance_10235480(uint param_1);
void client_Sound_SoundInstance_10235760(void);

/* ---- client/Sound/SoundSample.cpp ---- */
void client_Sound_SoundSample_init_10079080(void);
void client_Sound_SoundSample_init_100790a0(void);
void client_Sound_SoundSample_init_10079190(void);
void client_Sound_SoundSample_init_100791f0(void);
void client_Sound_SoundSample_init_10079250(void);
void client_Sound_SoundSample_init_100792c0(void);
void client_Sound_SoundSample_init_10079320(void);
void client_Sound_SoundSample_init_10079380(void);
void client_Sound_SoundSample_init_100793f0(void);
void client_Sound_SoundSample_init_10079460(void);
void client_Sound_SoundSample_init_100794d0(void);
void client_Sound_SoundSample_init_10079530(void);
void client_Sound_SoundSample_init_10079590(void);
void client_Sound_SoundSample_init_10079600(void);
void client_Sound_SoundSample_init_10079670(void);
void client_Sound_SoundSample_init_100796e0(void);
void client_Sound_SoundSample_init_10079740(void);
void client_Sound_SoundSample_init_100797a0(void);
void client_Sound_SoundSample_init_10079800(void);
void client_Sound_SoundSample_init_10079860(void);
void client_Sound_SoundSample_init_100798e0(void);
void client_Sound_SoundSample_init_10079950(void);
void client_Sound_SoundSample_init_100799b0(void);
void client_Sound_SoundSample_init_10079a10(void);
void client_Sound_SoundSample_init_10079ab0(void);
void client_Sound_SoundSample_init_10079b20(void);
void client_Sound_SoundSample_init_10079b80(void);
void client_Sound_SoundSample_init_10079be0(void);
void client_Sound_SoundSample_init_10079c40(void);
void client_Sound_SoundSample_init_10079cd0(void);
void client_Sound_SoundSample_init_10079d90(void);
void client_Sound_SoundSample_init_10079e00(void);
void client_Sound_SoundSample_init_10079e70(void);
void client_Sound_SoundSample_init_10079ec0(void);
void client_Sound_SoundSample_init_10079f20(void);
void client_Sound_SoundSample_init_10079fb0(void);
void client_Sound_SoundSample_init_1007a0b0(void);
void client_Sound_SoundSample_init_1007a130(void);
void client_Sound_SoundSample_init_1007a1c0(void);
void client_Sound_SoundSample_init_1007a780(void);
void client_Sound_SoundSample_init_1007b150(void);
void client_Sound_SoundSample_init_1007bb50(void);
void client_Sound_SoundSample_init_1007bed0(void);
void client_Sound_SoundSample_init_1007c400(void);
void client_Sound_SoundSample_init_1007c5b0(void);
void client_Sound_SoundSample_init_1007c610(void);
void client_Sound_SoundSample_init_1007c670(void);
void client_Sound_SoundSample_init_1007c6d0(void);
void client_Sound_SoundSample_init_1007c730(void);
void client_Sound_SoundSample_InitPtr_D2Client_DAT_6fbcc278_1007f690(void);
void client_Sound_SoundSample_InitPtr_D2Client_DAT_6fbcc27c_1007f6a0(void);
void client_Sound_SoundSample_InitPtr_D2Client_DAT_6fbcc24c_1007fe90(void);
void client_Sound_SoundSample_InitPtr_D2Client_DAT_6fbcc250_1007fea0(void);
void client_Sound_SoundSample_InitPtr_D2Client_DAT_6fbcc268_10080c80(void);
void client_Sound_SoundSample_InitPtr_D2Client_DAT_6fbcbf30_10080cb0(void);
void client_Sound_SoundSample_InitPtr_D2Client_DAT_6fbcc264_10080cc0(void);
uint32_t __fastcall client_Sound_SoundSample_10235fd0(int param_1);
void __fastcall client_Sound_SoundSample_10236020(int param_1,char *param_2);
uint32_t __fastcall client_Sound_SoundSample_10236150(int param_1);
void __fastcall client_Sound_SoundSample_Wraps_D2Client_Sound_SoundHdr_10236200(int param_1,int param_2,int param_3);
void __fastcall client_Sound_SoundSample_10236410(int param_1);
uint32_t __fastcall client_Sound_SoundSample_10236460(int param_1,int param_2,int param_3);
void __fastcall client_Sound_SoundSample_10236560(int param_1);
void __fastcall client_Sound_SoundSample_10236630(int param_1);
void __fastcall client_Sound_SoundSample_10236710(int param_1);

/* ---- _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit16.cpp ---- */
void sub_init_10081080(void);
void sub_init_100810a0(void);
void sub_init_10081190(void);
void sub_init_100811f0(void);
void sub_init_10081250(void);
void sub_init_100812c0(void);
void sub_init_10081320(void);
void sub_init_10081380(void);
void sub_init_100813f0(void);
void sub_init_10081460(void);
void sub_init_100814d0(void);
void sub_init_10081530(void);
void sub_init_10081590(void);
void sub_init_10081600(void);
void sub_init_10081670(void);
void sub_init_100816e0(void);
void sub_init_10081740(void);
void sub_init_100817a0(void);
void sub_init_10081800(void);
void sub_init_10081860(void);
void sub_init_100818e0(void);
void sub_init_10081950(void);
void sub_init_100819b0(void);
void sub_init_10081a10(void);
void sub_init_10081ab0(void);
void sub_init_10081b20(void);
void sub_init_10081b80(void);
void sub_init_10081be0(void);
void sub_init_10081c40(void);
void sub_init_10081cd0(void);
void sub_init_10081d90(void);
void sub_init_10081e00(void);
void sub_init_10081e70(void);
void sub_init_10081ec0(void);
void sub_init_10081f20(void);
void sub_init_10081fb0(void);
void sub_init_100820b0(void);
void sub_init_10082130(void);
void sub_init_100821c0(void);
void sub_init_10082780(void);
void sub_init_10083150(void);
void sub_init_10083b50(void);
void sub_init_10083ed0(void);
void sub_init_10084400(void);
void sub_init_100845b0(void);
void sub_init_10084610(void);
void sub_init_10084670(void);
void sub_init_100846d0(void);
void sub_init_10084730(void);
void sub_InitPtr_D2Client_DAT_6fbcbbfc_10087870(void);
void sub_InitPtr_D2Client_DAT_6fbcc24c_10087e90(void);
void sub_InitPtr_D2Client_DAT_6fbcc250_10087ea0(void);
void sub_InitPtr_D2Client_DAT_6fbcc254_10087eb0(void);
void sub_InitPtr_D2Client_DAT_6fbcc258_10087ec0(void);
void sub_InitPtr_D2Client_DAT_6fbcc268_10088c80(void);
void sub_InitPtr_D2Client_DAT_6fbcbf30_10088cb0(void);
int __fastcall sub_10236770(int param_1,int param_2);
int __fastcall sub_102367e0(int param_1,int param_2,int param_3);
void __fastcall sub_10236880(int param_1,int *reg_EDX);
void __thiscall sub_10236940(void *this,int param_2,uint32_t reg_ESI,uint32_t reg_EDI,int *reg_EDX);

/* ---- _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit17.cpp ---- */
void sub_init_10089080(void);
void sub_init_100890a0(void);
void sub_init_10089190(void);
void sub_init_100891f0(void);
void sub_init_10089250(void);
void sub_init_100892c0(void);
void sub_init_10089320(void);
void sub_init_10089380(void);
void sub_init_100893f0(void);
void sub_init_10089460(void);
void sub_init_100894d0(void);
void sub_init_10089530(void);
void sub_init_10089590(void);
void sub_init_10089600(void);
void sub_init_10089670(void);
void sub_init_100896e0(void);
void sub_init_10089740(void);
void sub_init_100897a0(void);
void sub_init_10089800(void);
void sub_init_10089860(void);
void sub_init_100898e0(void);
void sub_init_10089950(void);
void sub_init_100899b0(void);
void sub_init_10089a10(void);
void sub_init_10089ab0(void);
void sub_init_10089b20(void);
void sub_init_10089b80(void);
void sub_init_10089be0(void);
void sub_init_10089c40(void);
void sub_init_10089cd0(void);
void sub_init_10089d90(void);
void sub_init_10089e00(void);
void sub_init_10089e70(void);
void sub_init_10089ec0(void);
void sub_init_10089f20(void);
void sub_init_10089fb0(void);
void sub_init_1008a0b0(void);
void sub_init_1008a130(void);
void sub_init_1008a1c0(void);
void sub_init_1008a780(void);
void sub_init_1008b150(void);
void sub_init_1008bb50(void);
void sub_init_1008bed0(void);
void sub_init_1008c400(void);
void sub_init_1008c5b0(void);
void sub_init_1008c610(void);
void sub_init_1008c670(void);
void sub_init_1008c6d0(void);
void sub_init_1008c730(void);
void sub_InitPtr_D2Client_DAT_6fb8bc48_1008f120(void);
void sub_InitPtr_D2Client_DAT_6fb8bc4c_1008f130(void);
void sub_InitPtr_D2Client_DAT_6fbcb828_1008f1d0(void);
void sub_InitPtr_D2Client_DAT_6fbcb824_1008f1e0(void);
void sub_InitPtr_D2Client_DAT_6fbcb834_1008f1f0(void);
void sub_InitPtr_D2Client_DAT_6fbc9763_1008f3a0(void);
void sub_InitPtr_D2Client_DAT_6fbcbbfc_1008f870(void);
void sub_InitPtr_D2Client_DAT_6fbaada4_102a4e90_10090670(void);
void sub_InitPtr_D2Client_DAT_6fbcc2f4_100906c0(void);
void sub_InitPtr_D2Client_DAT_6fbcc3f0_10090770(void);
void sub_InitPtr_D2Client_DAT_6fbcc414_10090910(void);
void sub_InitPtr_D2Client_DAT_6fbcc2f8_102aa3d0_10090dd0(void);
uint __fastcall sub_10236a30(int param_1,uint32_t *param_2,uint reg_EAX);
void __fastcall sub_10236ac0(int param_1,uint param_2,uint8_t *param_3,uint param_4,int param_5);
uint sub_10236e30(void);
void __fastcall sub_10236e90(int param_1);
uint __fastcall sub_10237380(int param_1,int param_2,int param_3,uint32_t param_4);
uint64_t sub_102375d0(void);
void __fastcall sub_10237630(int param_1);

/* ---- _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit18.cpp ---- */
void sub_init_10091080(void);
void sub_init_100910a0(void);
void sub_init_10091190(void);
void sub_init_100911f0(void);
void sub_init_10091250(void);
void sub_init_100912c0(void);
void sub_init_10091320(void);
void sub_init_10091380(void);
void sub_init_100913f0(void);
void sub_init_10091460(void);
void sub_init_100914d0(void);
void sub_init_10091530(void);
void sub_init_10091590(void);
void sub_init_10091600(void);
void sub_init_10091670(void);
void sub_init_100916e0(void);
void sub_init_10091740(void);
void sub_init_100917a0(void);
void sub_init_10091800(void);
void sub_init_10091860(void);
void sub_init_100918e0(void);
void sub_init_10091950(void);
void sub_init_100919b0(void);
void sub_init_10091a10(void);
void sub_init_10091ab0(void);
void sub_init_10091b20(void);
void sub_init_10091b80(void);
void sub_init_10091be0(void);
void sub_init_10091c40(void);
void sub_init_10091cd0(void);
void sub_init_10091d90(void);
void sub_init_10091e00(void);
void sub_init_10091e70(void);
void sub_init_10091ec0(void);
void sub_init_10091f20(void);
void sub_init_10091fb0(void);
void sub_init_100920b0(void);
void sub_init_10092130(void);
void sub_init_100921c0(void);
void sub_init_10092780(void);
void sub_init_10093150(void);
void sub_init_10093b50(void);
void sub_init_10093ed0(void);
void sub_init_10094400(void);
void sub_init_100945b0(void);
void sub_init_10094610(void);
void sub_init_10094670(void);
void sub_init_100946d0(void);
void sub_init_10094730(void);
void sub_init_10099080(void);

/* ---- _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit19_1009a5f0.cpp ---- */
void sub_init_1009a5f0(void);
void sub_init_1009a610(void);
void sub_init_1009a700(void);
void sub_init_1009a760(void);
void sub_init_1009a7c0(void);
void sub_init_1009a830(void);
void sub_init_1009a890(void);
void sub_init_1009a8f0(void);
void sub_init_1009a960(void);
void sub_init_1009a9d0(void);
void sub_init_1009aa40(void);
void sub_init_1009aaa0(void);
void sub_init_1009ab00(void);
void sub_init_1009ab70(void);
void sub_init_1009abe0(void);
void sub_init_1009ac50(void);
void sub_init_1009acb0(void);
void sub_init_1009ad10(void);
void sub_init_1009ad70(void);
void sub_init_1009add0(void);
void sub_init_1009ae50(void);
void sub_init_1009aec0(void);
void sub_init_1009af20(void);
void sub_init_1009af80(void);
void sub_init_1009b020(void);
void sub_init_1009b090(void);
void sub_init_1009b0f0(void);
void sub_init_1009b150(void);
void sub_init_1009b1b0(void);
void sub_init_1009b240(void);
void sub_init_1009b300(void);
void sub_init_1009b370(void);
void sub_init_1009b3e0(void);
void sub_init_1009b430(void);
void sub_init_1009b490(void);
void sub_init_1009b520(void);
void sub_init_1009b620(void);
void sub_init_1009b6a0(void);
void sub_init_1009b730(void);
void sub_init_1009bcf0(void);
void sub_init_1009c6c0(void);
void sub_init_1009d0c0(void);
void sub_init_1009d440(void);
void sub_init_1009d970(void);
void sub_init_1009db20(void);
void sub_init_1009db80(void);
void sub_init_1009dbe0(void);
void sub_init_1009dc40(void);
void sub_init_1009dca0(void);
void sub_InitPtr_D2Client_DAT_6fbcbbfc_100a0de0(void);
void sub_InitPtr_D2Client_DAT_6fbcc098_100a2390(void);
void sub_init_100a25f0(void);
void sub_init_100a29c0(void);
void * __fastcall sub_10239630(void *param_1,void *param_2,uint param_3);
void __fastcall thunk_FUN_1020fb00(int *param_1);
uint32_t __fastcall sub_102396a0(uint8_t *param_1,FILE *param_2);
bool __fastcall sub_102396c0(char param_1,FILE *param_2);
bool __fastcall sub_102396e0(byte *param_1,FILE *param_2);
uint64_t __fastcall thunk_FUN_1020fc60(uint32_t *param_1);
void sub_10239710(void);
void __fastcall thunk_FUN_1023d9d0(uint32_t param_1);
void sub_10239730(void);
void * __fastcall sub_10239740(void *param_1,char *param_2);
uint32_t sub_10239850(uint32_t param_1,char *param_2,uint32_t param_3,int param_4,uint32_t param_5);
uint32_t sub_10239910(uint32_t param_1,char *param_2,uint32_t param_3,uint32_t *param_4);
uint32_t sub_102399c0(uint32_t param_1,char *param_2,uint32_t param_3,char *param_4,uint32_t reg_EBX);
uint32_t sub_10239a70(uint32_t param_1,char *param_2,uint32_t param_3,uint32_t param_4, uint32_t reg_EBX);
int sub_10239b20(void);
int sub_10239bc4(int reg_ESI);
uint8_t sub_10239c10(void);
uint8_t sub_10239cb7(void);
void * sub_10239ce0(void *param_1);
void sub_10239daf(void);
uint64_t __fastcall sub_10239de0(uint32_t *param_1);
void sub_Settings_10239e00(uint32_t reg_EBX);
void __fastcall sub_1023b020(int param_1);
void __fastcall sub_1023b040(void *param_1);
void sub_1023b060(uint32_t reg_EBX);
void sub_Settings_1023b445(uint32_t reg_EBX);
void __fastcall sub_1023cae0(int param_1);
void __fastcall sub_1023cb00(void *param_1);
void __fastcall thunk_FUN_1023f130(void *param_1);
void * __thiscall sub_1023cb30(void *this,uint param_1);
void __fastcall sub_1023cb90(int *param_1);
void __fastcall sub_1023cc30(int *param_1);
void __fastcall sub_1023cc90(int *param_1);
void sub_1023ccf0(void);
int * sub_1023cd10(void);
uint64_t __fastcall sub_1023cde0(void *param_1);
void __fastcall thunk_FUN_1023f130(void *param_1);
void __fastcall sub_1023ce00(int param_1);
int * __thiscall sub_1023ce30(void *this,int param_1);
void __thiscall sub_1023ce70(void *this,locale *param_1);
uint32_t __fastcall sub_1023ce90(int *param_1);
void * __thiscall sub_1023cef0(void *this,char *param_1,size_t param_2,int param_3);
void * __thiscall sub_1023cf50(void *this,void *param_1);
uint32_t __thiscall sub_1023d010(void *this,void *param_2,int param_3,int param_4,int param_5,int reg_EDI);
__int64 __thiscall sub_1023d0f0(void *this,char *param_2,uint param_3,int param_4,uint32_t reg_EDI);
__int64 __thiscall sub_1023d1d0(void *this,char *param_2,uint param_3,int param_4,uint32_t reg_EDI);
uint __fastcall sub_1023d310(basic_streambuf<char,std::char_traits<char>_> *param_1);
uint __fastcall sub_1023d4d0(basic_streambuf<char,std::char_traits<char>_> *param_1);
uint __thiscall sub_1023d550(void *this,uint param_1);
uint __thiscall sub_1023d670(void *this,char *param_1);
void __fastcall sub_1023d7d0(int param_1);
void __fastcall sub_1023d7e0(int param_1);
void __fastcall sub_1023d7f0(basic_streambuf<char,std::char_traits<char>_> *param_1);
void __fastcall sub_1023d850(int *param_1);
void __fastcall sub_1023d880(int param_1);
int * __thiscall sub_1023d8b0(void *this,int param_1);
bool __thiscall sub_1023d8f0(void *this,int *param_1);
int sub_1023d910(void *param_1);
uint8_t * __fastcall sub_1023d930(uint32_t param_1);
uint32_t sub_1023d990(void *param_1,void *param_2);
uint32_t sub_1023d9b0(void *param_1);
void __fastcall sub_1023d9d0(uint32_t param_1);
int sub_1023d9f0(void *param_1);
uint8_t * __fastcall sub_1023da10(uint32_t param_1);
uint32_t sub_1023da70(void *param_1,void *param_2);
uint32_t sub_1023da90(void *param_1);
void __thiscall sub_1023dab0(void *this,void *param_1);
int * __fastcall sub_1023dac0(int *param_1,uint8_t *param_2,uint32_t reg_EBX);
void __thiscall sub_1023dbf0(void *this,void *param_1);
uint32_t __thiscall sub_1023dc00(void *this,int param_1);
void __fastcall sub_1023dc50(char *param_1);
void __fastcall sub_1023dd40(char *param_1);
char * __fastcall sub_1023dd90(char *param_1);
char * __thiscall sub_1023ddd0(void *this,char *param_1);
char * __fastcall sub_1023dec0(char *param_1);
void * __thiscall sub_1023df10(void *this,void *param_1);
uint8_t * sub_1023df30(int param_1);
uint32_t sub_1023df50(void);
void * __thiscall sub_1023df60(void *this,uint32_t *param_1);
void __thiscall sub_1023dfd0(void *this,byte *param_1);
void __thiscall sub_1023e000(void *this,int param_1);
void __thiscall sub_1023e040(void *this,uint32_t param_1,uint param_2);
bool __fastcall sub_1023e070(int param_1);
void __thiscall sub_1023e080(void *this,uint param_1);
void sub_1023e0d0(void *param_1,void *param_2,int param_3);
void __thiscall sub_1023e0f0(void *this,uint param_1,uint param_2);
uint64_t __thiscall sub_1023e120(void *this,int param_1);
uint32_t __thiscall sub_1023e130(void *this,void *param_1);
uint64_t __thiscall sub_1023e160(void *this,void *param_1);
void __fastcall sub_1023e180(void *param_1);
void * __thiscall sub_1023e190(void *this,uint32_t param_1);
void __thiscall sub_1023e1b0(void *this,int param_1);
void * __thiscall sub_1023e1c0(void *this,uint32_t param_1);
uint32_t * __thiscall sub_1023e1f0(void *this,uint32_t param_1,uint param_2);
uint32_t * __thiscall sub_1023e220(void *this,void *param_1,uint param_2);
void * __thiscall sub_1023e250(void *this,byte param_1);
basic_streambuf<char,std::char_traits<char>_> * __thiscall sub_1023e280(void *this,byte param_1);
void * __thiscall std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>:: _scalar_deleting_destructor_ (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1);
uint32_t __thiscall sub_1023e2e0(void *this,uint32_t param_1);
int __fastcall thunk_FUN_10240e40(int param_1,int reg_EAX);
void __fastcall sub_1023e310(int param_1);
void __fastcall sub_1023e330(void *param_1);
uint32_t * __thiscall sub_1023e350(void *this,int param_1);
uint32_t * __thiscall sub_1023e370(void *this,int param_1);
void * __thiscall sub_1023e3a0(void *this,void *param_1);
void * __thiscall sub_1023e3c0(void *this,uint32_t param_1);
void __thiscall sub_1023e3f0(void *this,uint8_t *param_2,char param_3,uint32_t param_4,int param_5,int param_6, int reg_EBX);
void * __thiscall sub_1023f030(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __fastcall sub_1023f130(void *param_1);
uint64_t __fastcall sub_1023f170(void *param_1);
basic_istream<char,std::char_traits<char>_> * __thiscall sub_1023f180(void *this,char *param_1);
void __fastcall sub_1023f250(basic_streambuf<char,std::char_traits<char>_> *param_1);
void __fastcall sub_1023f290(basic_streambuf<char,std::char_traits<char>_> *param_1);
void __thiscall sub_1023f2c0(void *this,codecvt_base *param_1);
bool __fastcall sub_1023f300(int *param_1);
void __thiscall sub_1023f3f0(void *this,int param_1,int param_2);
basic_streambuf<char,std::char_traits<char>_> * __fastcall sub_1023f490(basic_streambuf<char,std::char_traits<char>_> *param_1);
basic_ostream<char,std::char_traits<char>_> * __thiscall sub_1023f4e0(void *this,char *param_1);
void sub_1023f5b0(void);
uint8_t * __fastcall sub_1023f5d0(uint32_t param_1);
void sub_1023f600(void);
uint8_t * __fastcall sub_1023f620(uint32_t param_1);
void __thiscall sub_1023f650(void *this,char param_1);
uint32_t * __thiscall sub_1023f920(void *this,uint32_t param_1);
uint32_t * __thiscall sub_1023f940(void *this,uint32_t param_1);
uint32_t * __thiscall sub_1023f960(void *this,uint32_t param_1);
uint32_t * __thiscall sub_1023f980(void *this,uint32_t param_1);
uint64_t * __fastcall sub_1023f9a0(uint64_t *param_1);
uint32_t * __thiscall sub_1023f9b0(void *this,uint32_t param_1,uint32_t param_2);
uint8_t * __thiscall sub_1023f9d0(void *this,uint8_t param_1);
int * __thiscall sub_1023f9e0(void *this,int *param_1,int param_2);
uint32_t __thiscall sub_1023fa80(void *this,uint32_t param_1,int param_2,uint32_t param_3);
void __thiscall sub_1023fb70(void *this,uint32_t param_1,uint32_t param_2);
void __thiscall sub_1023fbb0(void *this,uint32_t param_1,uint32_t param_2);
char * __fastcall sub_1023fbf0(uint8_t *param_1);
bool __fastcall sub_1023fc60(char *param_1);
bool __fastcall sub_1023fc70(char *param_1);
char * __thiscall sub_1023fc80(void *this,char param_1);
uint32_t sub_1023fcb0(uint32_t param_1);
void __fastcall sub_1023fcc0(char *param_1);
void * __fastcall sub_1023fd60(void *param_1,void *param_2);
int __fastcall thunk_FUN_10240e40(int param_1,int reg_EAX);
void __thiscall sub_1023ff60(void *this,uint32_t *param_1);
uint32_t * __thiscall sub_1023ff80(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __fastcall sub_1023ffb0(uint32_t *param_1);
void __thiscall sub_1023fff0(void *this,uint32_t param_1);
void sub_10240040(void *param_1,void *param_2,size_t param_3);
uint32_t * __thiscall sub_10240080(void *this,uint32_t param_1,uint param_2);
void sub_102400f0(void *param_1,uint32_t param_2,uint param_3);
uint32_t * __thiscall sub_10240120(void *this,uint param_1,uint param_2);
void sub_10240190(void *param_1,void *param_2,size_t param_3,size_t param_4,uint32_t param_5);
void __thiscall sub_102401d0(void *this,uint8_t *param_1);
void __fastcall sub_102401f0(uint32_t *param_1);
uint32_t * __thiscall sub_10240200(void *this,int param_1);
void __fastcall sub_10240230(uint32_t param_1,void *param_2);
void __fastcall sub_10240240(uint32_t param_1,void *param_2);
int * sub_10240250(int *param_1);
void __thiscall sub_10240280(void *this,char *param_1);
void __thiscall sub_102402a0(void *this,char param_1);
void __fastcall sub_102402b0(uint32_t *param_1);
void __thiscall sub_10240300(void *this,void *param_1);
void __thiscall sub_10240850(void *this,uint32_t param_1);
uint32_t __fastcall sub_10240860(int param_1);
bool __fastcall sub_10240870(int param_1);
bool __fastcall sub_10240880(int param_1);
basic_streambuf<char,std::char_traits<char>_> * __thiscall sub_10240890(void *this,char *param_1,int param_2);
basic_streambuf<char,std::char_traits<char>_> * __fastcall sub_10240930(basic_streambuf<char,std::char_traits<char>_> *param_1);
void sub_10240990(void);
void sub_102409b0(void);
uint64_t * __thiscall sub_102409d0(void *this,char param_1);
uint32_t __fastcall sub_10240b20(int *param_1);
uint32_t __fastcall thunk_FUN_1020faf0(uint32_t *param_1);
int * __fastcall sub_10240b40(int *param_1);
uint32_t * sub_10240b50(uint32_t *param_1);
int * __fastcall sub_10240b80(int *param_1);
int __fastcall sub_10240b90(int param_1);
int __fastcall sub_10240ba0(int *param_1);
uint32_t __fastcall sub_10240bb0(int *param_1);
uint32_t __thiscall sub_10240bc0(void *this,void *param_1);
uint32_t __thiscall sub_10240be0(void *this,void *param_1);
void __fastcall sub_10240c00(int *param_1);
void __fastcall sub_10240c20(int param_1);
void __thiscall sub_10240c40(void *this,uint param_1);
void sub_10240c70(uint32_t param_1);
void __thiscall sub_10240c90(void *this,uint32_t param_1);
void __fastcall thunk_FUN_10241050(int *param_1);
int __fastcall sub_10240d00(int *param_1);
void __fastcall sub_10240d20(int *param_1);
bool __fastcall sub_10240d40(char *param_1);
char * __thiscall sub_10240d50(void *this,char *param_1);
uint8_t __fastcall sub_10240db0(int param_1);
uint64_t __fastcall sub_10240dc0(int param_1);
int __fastcall sub_10240de0(int param_1);
uint32_t * __thiscall sub_10240df0(void *this,uint32_t param_1);
uint32_t * __thiscall sub_10240e20(void *this,int param_1);
int __fastcall sub_10240e40(int param_1,int reg_EAX);
void __thiscall sub_10240e50(void *this,uint32_t param_1);
void __fastcall sub_10240ec0(void *param_1,size_t param_2,char param_3);
uint32_t * __thiscall sub_10240ee0(void *this,int param_1);
int * __fastcall thunk_FUN_102412d0(int *param_1);
void __thiscall sub_10240f10(void *this,byte param_1);
void __fastcall sub_10240fb0(uint32_t *param_1);
void * __fastcall sub_10240ff0(void *param_1);
void __fastcall sub_10241040(void *param_1);
void __fastcall sub_10241050(int *param_1);
void sub_10241090(int param_1,int param_2);
int __fastcall sub_102410b0(int *param_1);
uint sub_102410c0(void);
uint64_t __thiscall sub_102410f0(void *this,void *param_1);
uint64_t __thiscall sub_10241110(void *this,void *param_1);
void __thiscall sub_10241130(void *this,uint param_1);
void sub_10241180(int param_1,int param_2);
int __thiscall sub_102411a0(void *this,int param_1);
uint32_t sub_102411b0(void);
int __fastcall sub_102411c0(int param_1);
void __fastcall sub_102411d0(int *param_1);
void * __thiscall sub_10241230(void *this,basic_ostream<char,std::char_traits<char>_> *param_1);
int * __fastcall sub_102412d0(int *param_1);
int * __thiscall sub_102412e0(void *this,int param_1);
void __thiscall sub_10241300(void *this,int param_1,int param_2,int param_3);
void __thiscall sub_10241350(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
uint32_t sub_10241370(void);
void sub_10241380(uint param_1);
void sub_102413a0(void *param_1,int param_2);
int sub_102413c0(int param_1);
uint32_t sub_102413d0(void);
uint32_t sub_102413e0(void);
void __fastcall sub_102413f0(int *param_1);
uint32_t * __thiscall sub_10241440(void *this,int *param_1);
void __thiscall sub_10241470(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void * __fastcall sub_10241490(void *param_1);
uint32_t * __thiscall sub_json_102414e0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
uint32_t * __thiscall sub_102415a0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_10241660(char *param_1);
void * __thiscall sub_102416a0(void *this,uint32_t param_1,uint32_t param_2);
void * __thiscall sub_Config_gamma_102416d0(void *this,uint32_t param_1,uint32_t param_2);
int __thiscall sub_10241710(void *this,uint32_t param_1,uint32_t param_2);
void * __thiscall sub_Config_help_menu_10241740(void *this,uint32_t param_1,uint32_t param_2);
void * __thiscall sub_Config_lng_file_10241780(void *this,uint32_t param_1,uint32_t param_2);
void * __thiscall sub_Config_aux_battle_net_102417c0(void *this,uint32_t param_1,uint32_t param_2);
void * __thiscall sub_Config_installpath_10241800(void *this,uint32_t param_1,uint32_t param_2);
void __fastcall sub_10241840(uint32_t *param_1,uint8_t *param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);

/* ---- _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit20.cpp ---- */
void sub_init_100a2b30(void);
void sub_init_100a2b50(void);
void sub_init_100a2c40(void);
void sub_init_100a2ca0(void);
void sub_init_100a2d00(void);
void sub_init_100a2d70(void);
void sub_init_100a2dd0(void);
void sub_init_100a2e30(void);
void sub_init_100a2ea0(void);
void sub_init_100a2f10(void);
void sub_init_100a2f80(void);
void sub_init_100a2fe0(void);
void sub_init_100a3040(void);
void sub_init_100a30b0(void);
void sub_init_100a3120(void);
void sub_init_100a3190(void);
void sub_init_100a31f0(void);
void sub_init_100a3250(void);
void sub_init_100a32b0(void);
void sub_init_100a3310(void);
void sub_init_100a3390(void);
void sub_init_100a3400(void);
void sub_init_100a3460(void);
void sub_init_100a34c0(void);
void sub_init_100a3560(void);
void sub_init_100a35d0(void);
void sub_init_100a3630(void);
void sub_init_100a3690(void);
void sub_init_100a36f0(void);
void sub_init_100a3780(void);
void sub_init_100a3840(void);
void sub_init_100a38b0(void);
void sub_init_100a3920(void);
void sub_init_100a3970(void);
void sub_init_100a39d0(void);
void sub_init_100a3a60(void);
void sub_init_100a3b60(void);
void sub_init_100a3be0(void);
void sub_init_100a3c70(void);
void sub_init_100a4230(void);
void sub_init_100a4c00(void);
void sub_init_100a5600(void);
void sub_init_100a5980(void);
void sub_init_100a5eb0(void);
void sub_init_100a6060(void);
void sub_init_100a60c0(void);
void sub_init_100a6120(void);
void sub_init_100a6180(void);
void sub_init_100a61e0(void);
void sub_InitPtr_D2Common_DAT_6fde9e1c_10279cd0_100a6bd0(void);
short sub_10250d70(byte *reg_ECX);
int __cdecl sub_10250db0(int param_1,int param_2);
void sub_Wraps_D2Common_DATATBLS_ItemTbls_10250de0(uint param_1);
longlong __fastcall sub_10251b90(int *param_1,int param_2);

/* ---- _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit21.cpp ---- */
void sub_init_100aab30(void);
void sub_init_100aab50(void);
void sub_init_100aac40(void);
void sub_init_100aaca0(void);
void sub_init_100aad00(void);
void sub_init_100aad70(void);
void sub_init_100aadd0(void);
void sub_init_100aae30(void);
void sub_init_100aaea0(void);
void sub_init_100aaf10(void);
void sub_init_100aaf80(void);
void sub_init_100aafe0(void);
void sub_init_100ab040(void);
void sub_init_100ab0b0(void);
void sub_init_100ab120(void);
void sub_init_100ab190(void);
void sub_init_100ab1f0(void);
void sub_init_100ab250(void);
void sub_init_100ab2b0(void);
void sub_init_100ab310(void);
void sub_init_100ab390(void);
void sub_init_100ab400(void);
void sub_init_100ab460(void);
void sub_init_100ab4c0(void);
void sub_init_100ab560(void);
void sub_init_100ab5d0(void);
void sub_init_100ab630(void);
void sub_init_100ab690(void);
void sub_init_100ab6f0(void);
void sub_init_100ab780(void);
void sub_init_100ab840(void);
void sub_init_100ab8b0(void);
void sub_init_100ab920(void);
void sub_init_100ab970(void);
void sub_init_100ab9d0(void);
void sub_init_100aba60(void);
void sub_init_100abb60(void);
void sub_init_100abbe0(void);
void sub_init_100abc70(void);
void sub_init_100ac230(void);
void sub_init_100acc00(void);
void sub_init_100ad600(void);
void sub_init_100ad980(void);
void sub_init_100adeb0(void);
void sub_init_100ae060(void);
void sub_init_100ae0c0(void);
void sub_init_100ae120(void);
void sub_init_100ae180(void);
void sub_init_100ae1e0(void);
void sub_InitPtr_D2Common_DAT_6fde9e1c_100aebc0(void);
void sub_InitPtr_D2Common_DAT_6fded378_100b23d0(void);
void __fastcall sub_10251d60(int param_1,int *param_2,int *param_3,int *param_4,uint param_5);
int __fastcall sub_10252380(int param_1);
void __fastcall sub_10252510(int *param_1,int *param_2,int *param_3,int *param_4,uint param_5);
uint32_t __fastcall sub_102527b0(int *param_1);
void __fastcall sub_10252820(int param_1,int *param_2,int *param_3,int *param_4);
uint64_t __fastcall sub_102528a0(uint param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,int *param_7, int *param_8);
int __fastcall sub_10252960(uint param_1,int param_2);
int __fastcall sub_10252990(uint param_1);
int __fastcall sub_102529c0(uint param_1);
int * __fastcall sub_Wraps_D2Common_ITEMS_Items_102529f0(int param_1,int *param_2,int param_3,uint *param_4,int param_5,int param_6, uint32_t reg_EDI);
int sub_Hook_sub_6fcddd80_10253300(uint32_t param_1,int param_2,int param_3,int param_4,uint32_t param_5, uint8_t *param_6);

/* ---- _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit22.cpp ---- */
void sub_init_100b2b30(void);
void sub_init_100b2b50(void);
void sub_init_100b2c40(void);
void sub_init_100b2ca0(void);
void sub_init_100b2d00(void);
void sub_init_100b2d70(void);
void sub_init_100b2dd0(void);
void sub_init_100b2e30(void);
void sub_init_100b2ea0(void);
void sub_init_100b2f10(void);
void sub_init_100b2f80(void);
void sub_init_100b2fe0(void);
void sub_init_100b3040(void);
void sub_init_100b30b0(void);
void sub_init_100b3120(void);
void sub_init_100b3190(void);
void sub_init_100b31f0(void);
void sub_init_100b3250(void);
void sub_init_100b32b0(void);
void sub_init_100b3310(void);
void sub_init_100b3390(void);
void sub_init_100b3400(void);
void sub_init_100b3460(void);
void sub_init_100b34c0(void);
void sub_init_100b3560(void);
void sub_init_100b35d0(void);
void sub_init_100b3630(void);
void sub_init_100b3690(void);
void sub_init_100b36f0(void);
void sub_init_100b3780(void);
void sub_init_100b3840(void);
void sub_init_100b38b0(void);
void sub_init_100b3920(void);
void sub_init_100b3970(void);
void sub_init_100b39d0(void);
void sub_init_100b3a60(void);
void sub_init_100b3b60(void);
void sub_init_100b3be0(void);
void sub_init_100b3c70(void);
void sub_init_100b4230(void);
void sub_init_100b4c00(void);
void sub_init_100b5600(void);
void sub_init_100b5980(void);
void sub_init_100b5eb0(void);
void sub_init_100b6060(void);
void sub_init_100b60c0(void);
void sub_init_100b6120(void);
void sub_init_100b6180(void);
void sub_init_100b61e0(void);
void sub_init_100b6880(void);

/* ---- _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit23.cpp ---- */
void sub_init_100b6bc0(void);
void sub_init_100b6be0(void);
void sub_init_100b6cd0(void);
void sub_init_100b6d30(void);
void sub_init_100b6d90(void);
void sub_init_100b6e00(void);
void sub_init_100b6e60(void);
void sub_init_100b6ec0(void);
void sub_init_100b6f30(void);
void sub_init_100b6fa0(void);
void sub_init_100b7010(void);
void sub_init_100b7070(void);
void sub_init_100b70d0(void);
void sub_init_100b7140(void);
void sub_init_100b71b0(void);
void sub_init_100b7220(void);
void sub_init_100b7280(void);
void sub_init_100b72e0(void);
void sub_init_100b7340(void);
void sub_init_100b73a0(void);
void sub_init_100b7420(void);
void sub_init_100b7490(void);
void sub_init_100b74f0(void);
void sub_init_100b7550(void);
void sub_init_100b75f0(void);
void sub_init_100b7660(void);
void sub_init_100b76c0(void);
void sub_init_100b7720(void);
void sub_init_100b7780(void);
void sub_init_100b7810(void);
void sub_init_100b78d0(void);
void sub_init_100b7940(void);
void sub_init_100b79b0(void);
void sub_init_100b7a00(void);
void sub_init_100b7a60(void);
void sub_init_100b7af0(void);
void sub_init_100b7bf0(void);
void sub_init_100b7c70(void);
void sub_init_100b7d00(void);
void sub_init_100b82c0(void);
void sub_init_100b8c90(void);
void sub_init_100b9690(void);
void sub_init_100b9a10(void);
void sub_init_100b9f40(void);
void sub_init_100ba0f0(void);
void sub_init_100ba150(void);
void sub_init_100ba1b0(void);
void sub_init_100ba210(void);
void sub_init_100ba270(void);
void sub_InitPtr_D2Common_DAT_6fde9e1c_100bac50(void);
void sub_InitPtr_D2Game_DAT_6fd27338_100bbfb0(void);
void sub_InitPtr_D2Game_DAT_6fd2f448_100bc150(void);
void __fastcall sub_Ptr_D2Game_6fd1bc38_10253cd0(void *param_1,int *param_2,void *param_3,uint param_4);
void __fastcall sub_Hook_sub_6fc417d0_10253de0(int param_1,int *param_2,uint32_t param_3,int param_4);

/* ---- _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit24.cpp ---- */
void sub_init_100bebc0(void);
void sub_init_100bebe0(void);
void sub_init_100becd0(void);
void sub_init_100bed30(void);
void sub_init_100bed90(void);
void sub_init_100bee00(void);
void sub_init_100bee60(void);
void sub_init_100beec0(void);
void sub_init_100bef30(void);
void sub_init_100befa0(void);
void sub_init_100bf010(void);
void sub_init_100bf070(void);
void sub_init_100bf0d0(void);
void sub_init_100bf140(void);
void sub_init_100bf1b0(void);
void sub_init_100bf220(void);
void sub_init_100bf280(void);
void sub_init_100bf2e0(void);
void sub_init_100bf340(void);
void sub_init_100bf3a0(void);
void sub_init_100bf420(void);
void sub_init_100bf490(void);
void sub_init_100bf4f0(void);
void sub_init_100bf550(void);
void sub_init_100bf5f0(void);
void sub_init_100bf660(void);
void sub_init_100bf6c0(void);
void sub_init_100bf720(void);
void sub_init_100bf780(void);
void sub_init_100bf810(void);
void sub_init_100bf8d0(void);
void sub_init_100bf940(void);
void sub_init_100bf9b0(void);
void sub_init_100bfa00(void);
void sub_init_100bfa60(void);
void sub_init_100bfaf0(void);
void sub_init_100bfbf0(void);
void sub_init_100bfc70(void);
void sub_init_100bfd00(void);
void sub_init_100c02c0(void);
void sub_init_100c0c90(void);
void sub_init_100c1690(void);
void sub_init_100c1a10(void);
void sub_init_100c1f40(void);
void sub_init_100c20f0(void);
void sub_init_100c2150(void);
void sub_init_100c21b0(void);
void sub_init_100c2210(void);
void sub_init_100c2270(void);

/* ---- _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit25.cpp ---- */
void sub_init_100c6bc0(void);
void sub_init_100c6be0(void);
void sub_init_100c6cd0(void);
void sub_init_100c6d30(void);
void sub_init_100c6d90(void);
void sub_init_100c6e00(void);
void sub_init_100c6e60(void);
void sub_init_100c6ec0(void);
void sub_init_100c6f30(void);
void sub_init_100c6fa0(void);
void sub_init_100c7010(void);
void sub_init_100c7070(void);
void sub_init_100c70d0(void);
void sub_init_100c7140(void);
void sub_init_100c71b0(void);
void sub_init_100c7220(void);
void sub_init_100c7280(void);
void sub_init_100c72e0(void);
void sub_init_100c7340(void);
void sub_init_100c73a0(void);
void sub_init_100c7420(void);
void sub_init_100c7490(void);
void sub_init_100c74f0(void);
void sub_init_100c7550(void);
void sub_init_100c75f0(void);
void sub_init_100c7660(void);
void sub_init_100c76c0(void);
void sub_init_100c7720(void);
void sub_init_100c7780(void);
void sub_init_100c7810(void);
void sub_init_100c78d0(void);
void sub_init_100c7940(void);
void sub_init_100c79b0(void);
void sub_init_100c7a00(void);
void sub_init_100c7a60(void);
void sub_init_100c7af0(void);
void sub_init_100c7bf0(void);
void sub_init_100c7c70(void);
void sub_init_100c7d00(void);
void sub_init_100c82c0(void);
void sub_init_100c8c90(void);
void sub_init_100c9690(void);
void sub_init_100c9a10(void);
void sub_init_100c9f40(void);
void sub_init_100ca0f0(void);
void sub_init_100ca150(void);
void sub_init_100ca1b0(void);
void sub_init_100ca210(void);
void sub_init_100ca270(void);

/* ---- _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit26_100cebc0.cpp ---- */
void sub_init_100cebc0(void);
void sub_init_100cebe0(void);
void sub_init_100cecd0(void);
void sub_init_100ced30(void);
void sub_init_100ced90(void);
void sub_init_100cee00(void);
void sub_init_100cee60(void);
void sub_init_100ceec0(void);
void sub_init_100cef30(void);
void sub_init_100cefa0(void);
void sub_init_100cf010(void);
void sub_init_100cf070(void);
void sub_init_100cf0d0(void);
void sub_init_100cf140(void);
void sub_init_100cf1b0(void);
void sub_init_100cf220(void);
void sub_init_100cf280(void);
void sub_init_100cf2e0(void);
void sub_init_100cf340(void);
void sub_init_100cf3a0(void);
void sub_init_100cf420(void);
void sub_init_100cf490(void);
void sub_init_100cf4f0(void);
void sub_init_100cf550(void);
void sub_init_100cf5f0(void);
void sub_init_100cf660(void);
void sub_init_100cf6c0(void);
void sub_init_100cf720(void);
void sub_init_100cf780(void);
void sub_init_100cf810(void);
void sub_init_100cf8d0(void);
void sub_init_100cf940(void);
void sub_init_100cf9b0(void);
void sub_init_100cfa00(void);
void sub_init_100cfa60(void);
void sub_init_100cfaf0(void);
void sub_init_100cfbf0(void);
void sub_init_100cfc70(void);
void sub_init_100cfd00(void);
void sub_init_100d02c0(void);
void sub_init_100d0c90(void);
void sub_init_100d1690(void);
void sub_init_100d1a10(void);
void sub_init_100d1f40(void);
void sub_init_100d20f0(void);
void sub_init_100d2150(void);
void sub_init_100d21b0(void);
void sub_init_100d2210(void);
void sub_init_100d2270(void);
void sub_InitPtr_D2Client_DAT_6fbba608_100d4020(void);
void sub_InitPtr_D2Launch_DAT_6fa65abc_100d4680(void);
void sub_InitPtr_D2Client_DAT_6fbbb210_100d4710(void);
void sub_InitPtr_D2Client_DAT_6fbbb214_100d4720(void);
void sub_InitPtr_D2Client_DAT_6fbbb21c_100d4730(void);
void sub_InitPtr_D2Client_DAT_6fb8bc48_100d4c60(void);
void sub_InitPtr_D2Client_DAT_6fb8bc4c_100d4c70(void);
void sub_InitPtr_D2Client_DAT_6fbcb828_100d4d10(void);
void sub_InitPtr_D2Client_DAT_6fbcb824_100d4d20(void);
void sub_InitPtr_D2Client_DAT_6fbcb834_100d4d30(void);
void sub_InitPtr_D2Client_loc_6faf8380_100d4f50(void);
void sub_InitPtr_D2Client_loc_6fafabe0_100d4f90(void);
void sub_InitPtr_sub_6faf9440_100d4fb0(void);
void sub_InitPtr_D2Client_loc_6fafa2f0_100d4ff0(void);
void sub_InitPtr_D2Client_loc_6faf8810_100d5030(void);
void sub_InitPtr_D2Client_DAT_6fba3ee5_100d5050(void);
void sub_InitPtr_D2Client_DAT_6fbcb9a0_100d5100(void);
void sub_InitPtr_D2Client_DAT_6fbcb9a4_100d5110(void);
void sub_InitPtr_D2Client_DAT_6fbcb864_100d5120(void);
void sub_InitPtr_D2Client_DAT_6fbc97a8_100d5180(void);
void sub_InitPtr_D2Client_DAT_6fbcc278_100d51d0(void);
void sub_InitPtr_D2Client_DAT_6fbc971d_10296c60_100d5200(void);
void sub_InitPtr_D2Client_DAT_6fbc3ac6_100d5210(void);
void sub_InitPtr_D2Client_DAT_6fbc3af4_100d5220(void);
void sub_InitPtr_D2Client_DAT_6fbc3afa_100d5230(void);
void sub_InitPtr_D2Client_DAT_6fbc3afb_100d5240(void);
void sub_InitPtr_D2Client_DAT_6fbcbbfc_100d53b0(void);
void sub_InitPtr_D2Client_DAT_6fbcbc14_100d53d0(void);
void sub_InitPtr_D2Client_DAT_6fbcb980_100d5470(void);
void sub_InitPtr_D2Client_DAT_6fbcc24c_100d59d0(void);
void sub_InitPtr_D2Client_DAT_6fbcc250_100d59e0(void);
void sub_InitPtr_D2Client_DAT_6fbcc3c4_100d5b80(void);
void sub_InitPtr_D2Client_DAT_6fba5204_100d5de0(void);
void sub_InitPtr_D2Client_DAT_6fbbf2f3_100d5e10(void);
void sub_InitPtr_D2Client_DAT_6fbcc390_100d5ea0(void);
void sub_InitPtr_D2Client_DAT_6fba2188_100d5eb0(void);
void sub_InitPtr_D2Client_DAT_6fba218c_100d5ec0(void);
void sub_InitPtr_D2Client_DAT_6fbcc394_100d5ef0(void);
void sub_InitPtr_D2Client_DAT_6fba46c4_100d6130(void);
void sub_InitPtr_D2Client_DAT_6fba46c8_100d6140(void);
void sub_InitPtr_D2Client_DAT_6fbc3a68_100d61f0(void);
void sub_InitPtr_D2Client_DAT_6fbcc2f4_100d6200(void);
void sub_InitPtr_D2Client_DAT_6fbcc2f8_100d6210(void);
void sub_InitPtr_D2Client_DAT_6fbcc3dc_100d6240(void);
void sub_InitPtr_D2Client_DAT_6fbcc3de_100d6250(void);
void sub_InitPtr_D2Client_DAT_6fbcc3f8_100d6260(void);
void sub_InitPtr_D2Client_DAT_6fbcc3fc_100d6270(void);
void sub_InitPtr_D2Client_DAT_6fbcc4d4_100d6350(void);
void sub_InitPtr_D2Client_DAT_6fbc97f8_100d6360(void);
void sub_InitPtr_D2Client_DAT_6fbc985c_100d6370(void);
void sub_InitPtr_D2Client_DAT_6fbc9dd0_100d63a0(void);
void sub_InitPtr_D2Client_DAT_6fbc9d30_100d63b0(void);
void sub_InitPtr_D2Client_DAT_6fbc9e20_100d63c0(void);
void sub_InitPtr_D2Client_DAT_6fbc9d70_100d63d0(void);
void sub_InitPtr_D2Client_DAT_6fbcc1e8_100d6430(void);
void sub_InitPtr_D2Client_DAT_6fbcc1ec_100d6440(void);
void sub_InitPtr_D2Client_DAT_6fbcc414_100d6450(void);
void sub_InitPtr_D2Common_DAT_6fded390_100d6470(void);
void sub_InitPtr_D2Client_DAT_6fbcc46c_100d64a0(void);
void sub_InitPtr_D2Client_DAT_6fbcc4b0_100d6530(void);
void sub_InitPtr_D2Client_DAT_6fbcc4b4_100d6540(void);
void sub_InitPtr_D2Client_DAT_6fbcbc10_100d65f0(void);
void sub_InitPtr_D2Client_DAT_6fbc9638_100d68d0(void);
void sub_InitPtr_D2Client_DAT_6fbc964c_100d68e0(void);
void sub_InitPtr_D2Client_DAT_6fbcc098_100d6960(void);
void sub_InitPtr_D2Client_DAT_6fbcbc98_100d6a40(void);
void sub_InitPtr_D2Client_DAT_6fbacd8c_100d6ac0(void);
void sub_InitPtr_D2Client_DAT_6fbbb238_100d6b20(void);
void sub_init_100d6bc0(void);
void sub_init_100d6be0(void);
void sub_init_100d6c00(void);
void sub_init_100d6c20(void);
void sub_init_100d6c40(void);
void __fastcall sub_102541d0(int param_1);
void __fastcall sub_10254240(int param_1);
void * __fastcall sub_102542b0(void *param_1);
uint32_t * __thiscall sub_102542d0(void *this,int param_1);
uint32_t __fastcall sub_10254300(int param_1);
bool __thiscall sub_10254310(void *this,int param_1);
int __fastcall sub_10254330(uint32_t *param_1);
uint64_t __fastcall sub_10254350(uint32_t *param_1);
uint32_t __thiscall sub_10254360(void *this,uint32_t param_1);
uint64_t __fastcall sub_10254390(uint32_t *param_1);
uint32_t __fastcall sub_102543a0(int param_1,uint32_t *param_2);
uint32_t __thiscall sub_102543e0(void *this,void *param_1,uint32_t param_2);
void __thiscall sub_10254400(void *this,uint32_t param_1,uint32_t *param_2);
uint32_t sub_10254430(uint32_t *param_1,int param_2);
uint32_t sub_10254470(void);
void * __fastcall sub_10254480(void *param_1);
uint32_t * __thiscall sub_10254520(void *this,uint param_1,uint32_t param_2,uint32_t param_3);
uint32_t * __thiscall sub_10254580(void *this,byte param_1);
uint32_t * __thiscall sub_102545b0(void *this,uint32_t param_1,uint32_t param_2);
uint32_t * __thiscall sub_10254630(void *this,uint param_1,uint32_t param_2,uint32_t param_3);
uint32_t * __thiscall sub_10254660(void *this,byte param_1);
void __fastcall thunk_FUN_1020f2e0(uint32_t *param_1);
void sub_102546a0(void);
uint32_t * __thiscall sub_102546d0(void *this,int param_1);
uint32_t * __thiscall sub_102546f0(void *this,int param_1);
int * __thiscall sub_10254720(void *this,DWORD param_1);
void __fastcall sub_10254740(uint32_t *param_1);
char * sub_10254750(void);
void * sub_10254760(void *param_1,int param_2);
char * sub_10254780(void);
void * sub_10254790(void *param_1,DWORD param_2);
uint32_t sub_10254820(void *param_1,int param_2);
uint8_t ** thunk_FUN_1025fb70(void);
uint8_t ** thunk_FUN_1025fb80(void);
void __fastcall sub_102548b0(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,_Collvec *param_5);
void __fastcall sub_102548d0(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,_Collvec *param_5);
int __fastcall sub_102548f0(int param_1);
void * __thiscall sub_10254940(void *this,void *param_1);
uint64_t __fastcall sub_102549b0(uint param_1,uint param_2);
uint __fastcall sub_102549c0(uint param_1,uint param_2);
uint * __fastcall sub_102549d0(uint *param_1,uint param_2);
uint * __fastcall sub_102549e0(uint *param_1);
uint32_t sub_10254a00(void);
int sub_10254a10(ushort param_1,int param_2);
uint8_t __fastcall sub_10254a80(byte param_1);
uint __fastcall sub_10254a90(uint param_1);
uint * __fastcall sub_10254aa0(uint *param_1,uint param_2);
uint * __fastcall sub_10254ab0(uint *param_1);
uint32_t * __fastcall sub_10254ac0(uint32_t *param_1);
uint32_t * __thiscall sub_10254ad0(void *this,uint32_t param_1,uint32_t param_2);
void __fastcall sub_10254b00(uint32_t *param_1);
uint32_t * __thiscall sub_10254b10(void *this,byte param_1);
void __fastcall sub_10254b40(uint32_t *param_1,uint32_t *param_2);
uint32_t * __fastcall sub_10254b70(void *param_1);
uint32_t * __thiscall sub_10254ba0(void *this,byte param_1);
void __fastcall thunk_FUN_10254b00(uint32_t *param_1);
uint32_t * __thiscall sub_10254be0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
uint32_t * __thiscall sub_10254c00(void *this,byte param_1);
uint32_t * __thiscall sub_10254c30(void *this,uint32_t param_1);
void __fastcall sub_10254c50(uint32_t *param_1);
uint32_t * __thiscall sub_10254c70(void *this,byte param_1);
uint32_t * __thiscall sub_10254ca0(void *this,uint32_t param_1);
uint32_t * __thiscall sub_10254cc0(void *this,uint32_t param_1);
uint32_t * __fastcall sub_10254ce0(void *param_1);
uint32_t * __thiscall sub_10254d00(void *this,byte param_1);
uint32_t * __thiscall sub_10254d30(void *this,uint32_t param_1);
void __fastcall sub_10254d60(uint32_t *param_1);
uint32_t * __thiscall sub_10254da0(void *this,byte param_1);
uint32_t * __fastcall sub_10254dd0(void *param_1);
uint32_t * __thiscall sub_10254df0(void *this,byte param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
uint32_t * __thiscall sub_10254e30(void *this,byte param_1);
void __fastcall sub_10254e60(int param_1,int param_2,int param_3);
void * __fastcall sub_10254f40(void *param_1);
void * __fastcall sub_10254f70(void *param_1);
uint32_t * __thiscall sub_10255040(void *this,uint32_t *param_1);
uint64_t __fastcall sub_10255060(uint64_t *param_1);
void sub_10255070(void);
uint __cdecl sub_10255080(int param_1);
uint __cdecl sub_10255130(uint param_1,uint param_2);
bool __cdecl sub_10255140(uint param_1,uint param_2);
short sub_10255160(short param_1);
uint32_t sub_10255180(void);
void sub_10255190(void);
uint32_t __cdecl sub_102551c0(uint32_t param_1,int param_2);
uint32_t * __fastcall sub_102551e0(uint32_t *param_1,UINT param_2);
uint64_t __fastcall sub_102552d0(uint32_t *param_1);
uint32_t __fastcall sub_102552f0(uint32_t *param_1,int param_2,uint reg_EAX);
short * __fastcall sub_10255310(short *param_1,int param_2,uint32_t reg_EAX);
void __fastcall sub_102553e0(short *param_1,int param_2,uint reg_EAX);
uint64_t __fastcall thunk_FUN_10225280(int param_1);
bool __fastcall thunk_FUN_1023e070(int param_1);
void __fastcall thunk_FUN_102250f0(uint32_t *param_1);
uint32_t __fastcall sub_10255440(uint32_t *param_1);
void * __thiscall sub_10255450(void *this,uint param_1);
uint32_t * __thiscall sub_10255470(void *this,uint param_1,uint param_2,uint32_t param_3,uint32_t param_4);
uint64_t __fastcall sub_10255550(int param_1);
uint32_t * __fastcall sub_10255560(uint32_t *param_1,uint32_t param_2,uint32_t param_3);
uint32_t * __thiscall sub_10255700(void *this,byte param_1);
void __fastcall sub_10255730(uint32_t *param_1);
uint32_t * __thiscall sub_10255760(void *this,int param_1);
void __fastcall sub_102557f0(char *param_1,uint32_t *param_2,uint param_3);
void __thiscall sub_10255870(void *this,uint32_t param_1);
void __thiscall sub_10255880(void *this,uint32_t param_1);
void __thiscall sub_10255890(void *this,int param_1,int param_2);
uint64_t __fastcall sub_10255960(uint32_t *param_1);
uint32_t * __fastcall sub_10255970(uint32_t *param_1);
bool __fastcall sub_10255980(uint32_t param_1,uint32_t *param_2);
uint8_t __fastcall sub_102559c0(uint param_1);
uint32_t * __cdecl sub_10255a20(uint32_t *param_1);
uint32_t * __thiscall sub_10255a80(void *this,uint32_t *param_1);
uint8_t __fastcall sub_10255ad0(int param_1,uint32_t *param_2);
uint8_t __fastcall sub_10255c80(uint param_1);
uint32_t __fastcall sub_10255ce0(wint_t *param_1,FILE *param_2);
bool __fastcall sub_10255d10(wchar_t param_1,FILE *param_2);
uint32_t __fastcall sub_10255d30(wint_t *param_1,FILE *param_2);
void __fastcall sub_10255d50(int param_1);
void __fastcall sub_10255d60(uint32_t *param_1);
uint32_t __fastcall sub_10255db0(uint32_t param_1);
void __fastcall sub_10255dd0(uint32_t param_1);
void __fastcall sub_10255de0(uint32_t param_1);
void __fastcall sub_10255e00(uint32_t param_1);
uint32_t __fastcall sub_10255e10(uint32_t param_1);
void __fastcall thunk_FUN_10255dd0(uint32_t param_1);
void sub_10255e30(void);
void __fastcall sub_10255e50(uint32_t *param_1);
void sub_10255e60(void);
void __fastcall sub_10256130(int param_1);
uint64_t sub_10256150(void);
uint64_t __fastcall sub_10256180(char param_1);
uint64_t __fastcall sub_102563e0(uint32_t param_1,uint param_2,uint32_t reg_EBX);
char * __fastcall sub_10256420(int param_1);
LRESULT sub_10256620(HWND param_1,uint param_2,WPARAM param_3,HRAWINPUT param_4);
void sub_10256810(void);
void __fastcall sub_10256df0(int *param_1);
void sub_Hook_sub_6fb6f0d0_10256f90(int *param_1);
ulonglong UNIT_Monster_6fb00e70(void);   /* game binding -> D2Client.dll +0x50e70, sigmaRE/5_game_source/D2Client/UNIT/Monster.cpp */
void __fastcall sub_10256fb0(int param_1);
void sub_10257220(void);
void __fastcall sub_102574e0(int param_1);
void __fastcall sub_10257720(int param_1);
void sub_10257900(void);
void sub_10257cb0(void);
void sub_10257d50(void);
void __fastcall sub_10257dd0(int param_1);
void sub_10258240(void);
void sub_10258280(void);
void sub_Hook_sub_6fb49440_102582c0(int param_1);
void sub_Hook_sub_6fb739e0_10258980(void);
int sub_Hook_sub_6fb739e0_102589a0(uint32_t reg_EBX);
uint32_t __thiscall sub_10258b20(void *this,int param_1);
uint32_t sub_Hook_sub_6fb15760_10258b60(void);
int sub_10258bb0(int param_1);
int sub_10258c20(int param_1);
uint32_t * __thiscall sub_10258c80(void *this,uint32_t param_1,uint param_2,uint32_t param_3,int param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7);
void __fastcall sub_10258cd0(int param_1,uint param_2,uint32_t param_3,int param_4,uint32_t param_5, uint32_t param_6,int param_7);
void __fastcall sub_10258d80(int param_1);
void sub_10258df0(void);
uint32_t __fastcall sub_10258e20(uint32_t param_1);
int sub_102590a0(uint32_t param_1,uint32_t param_2,int param_3,int param_4);
void sub_10259120(void);
int sub_102591b0(uint32_t *param_1,int param_2);
void sub_10259220(uint32_t param_1,uint32_t param_2,int param_3,char *param_4);
uint sub_Hook_sub_6fac38c0_102592f0(int param_1);
void __fastcall sub_10259360(uint param_1,byte param_2,ushort param_3);
void __fastcall sub_102593b0(int param_1,int param_2,uint32_t param_3);
ulonglong sub_102593e0(void);
void sub_102594d0(void);
void __fastcall sub_10259590(int *param_1,int param_2);
uint32_t __fastcall sub_10259760(uint32_t param_1);
short __fastcall sub_10259810(int param_1);
ushort * __fastcall sub_10259840(uint32_t param_1);
void sub_102598e0(uint param_1);
void __fastcall sub_10259bb0(uint32_t *param_1);
uint32_t * __thiscall sub_10259bc0(void *this,uint32_t *param_1,uint32_t *param_2);
int __fastcall sub_10259be0(int param_1);
uint32_t sub_10259c50(uint32_t param_1,uint32_t param_2,int param_3);
int * sub_10259c90(int *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void sub_10259ce0(uint param_1);

/* ---- functions/D2CommonFunctions.cpp ---- */
void functions_D2CommonFunctions_init_100d6c60(void);
void functions_D2CommonFunctions_init_100d6c80(void);
void functions_D2CommonFunctions_init_100d6d70(void);
void functions_D2CommonFunctions_init_100d6dd0(void);
void functions_D2CommonFunctions_init_100d6e30(void);
void functions_D2CommonFunctions_init_100d6ea0(void);
void functions_D2CommonFunctions_init_100d6f00(void);
void functions_D2CommonFunctions_init_100d6f60(void);
void functions_D2CommonFunctions_init_100d6fd0(void);
void functions_D2CommonFunctions_init_100d7040(void);
void functions_D2CommonFunctions_init_100d70b0(void);
void functions_D2CommonFunctions_init_100d7110(void);
void functions_D2CommonFunctions_init_100d7170(void);
void functions_D2CommonFunctions_init_100d71e0(void);
void functions_D2CommonFunctions_init_100d7250(void);
void functions_D2CommonFunctions_init_100d72c0(void);
void functions_D2CommonFunctions_init_100d7320(void);
void functions_D2CommonFunctions_init_100d7380(void);
void functions_D2CommonFunctions_init_100d73e0(void);
void functions_D2CommonFunctions_init_100d7440(void);
void functions_D2CommonFunctions_init_100d74c0(void);
void functions_D2CommonFunctions_init_100d7530(void);
void functions_D2CommonFunctions_init_100d7590(void);
void functions_D2CommonFunctions_init_100d75f0(void);
void functions_D2CommonFunctions_init_100d7690(void);
void functions_D2CommonFunctions_init_100d7700(void);
void functions_D2CommonFunctions_init_100d7760(void);
void functions_D2CommonFunctions_init_100d77c0(void);
void functions_D2CommonFunctions_init_100d7820(void);
void functions_D2CommonFunctions_init_100d78b0(void);
void functions_D2CommonFunctions_init_100d7970(void);
void functions_D2CommonFunctions_init_100d79e0(void);
void functions_D2CommonFunctions_init_100d7a50(void);
void functions_D2CommonFunctions_init_100d7aa0(void);
void functions_D2CommonFunctions_init_100d7b00(void);
void functions_D2CommonFunctions_init_100d7b90(void);
void functions_D2CommonFunctions_init_100d7c90(void);
void functions_D2CommonFunctions_init_100d7d10(void);
void functions_D2CommonFunctions_init_100d7da0(void);
void functions_D2CommonFunctions_init_100d8360(void);
void functions_D2CommonFunctions_init_100d8d30(void);
void functions_D2CommonFunctions_init_100d9730(void);
void functions_D2CommonFunctions_init_100d9ab0(void);
void functions_D2CommonFunctions_init_100d9fe0(void);
void functions_D2CommonFunctions_init_100da190(void);
void functions_D2CommonFunctions_init_100da1f0(void);
void functions_D2CommonFunctions_init_100da250(void);
void functions_D2CommonFunctions_init_100da2b0(void);
void functions_D2CommonFunctions_init_100da310(void);
void functions_D2CommonFunctions_InitPtr_D2Common_DAT_6fde9e1c_100dacf0(void);
void functions_D2CommonFunctions_InitPtr_D2Client_DAT_6fbcbbfc_100dd450(void);
void functions_D2CommonFunctions_InitPtr_D2Common_DAT_6fdf1420_100dd940(void);
void functions_D2CommonFunctions_InitPtr_D2Common_DAT_6fdf1424_100dd950(void);
void functions_D2CommonFunctions_InitPtr_D2Common_DAT_6fde4608_100de0f0(void);
void functions_D2CommonFunctions_InitPtr_D2Common_DAT_6fdefa58_102a45a0_100de180(void);
void functions_D2CommonFunctions_InitPtr_D2Common_DAT_6fdeefe4_100de1b0(void);
void functions_D2CommonFunctions_InitPtr_D2Common_DAT_6fdeefe8_100de1c0(void);
void functions_D2CommonFunctions_init_100dec60(void);
void functions_D2CommonFunctions_init_100df170(void);
void functions_D2CommonFunctions_init_100df190(void);
void functions_D2CommonFunctions_init_100df280(void);
void functions_D2CommonFunctions_init_100df2e0(void);
void functions_D2CommonFunctions_init_100df340(void);
void functions_D2CommonFunctions_init_100df3b0(void);
void functions_D2CommonFunctions_init_100df410(void);
void functions_D2CommonFunctions_init_100df470(void);
void functions_D2CommonFunctions_init_100df4e0(void);
void functions_D2CommonFunctions_init_100df550(void);
void functions_D2CommonFunctions_init_100df5c0(void);
void functions_D2CommonFunctions_init_100df620(void);
void functions_D2CommonFunctions_init_100df680(void);
void functions_D2CommonFunctions_init_100df6f0(void);
void functions_D2CommonFunctions_init_100df760(void);
void functions_D2CommonFunctions_init_100df7d0(void);
void functions_D2CommonFunctions_init_100df830(void);
void functions_D2CommonFunctions_init_100df890(void);
void functions_D2CommonFunctions_init_100df8f0(void);
void functions_D2CommonFunctions_init_100df950(void);
void functions_D2CommonFunctions_init_100df9d0(void);
void functions_D2CommonFunctions_init_100dfa40(void);
void functions_D2CommonFunctions_init_100dfaa0(void);
void functions_D2CommonFunctions_init_100dfb00(void);
void functions_D2CommonFunctions_init_100dfba0(void);
void functions_D2CommonFunctions_init_100dfc10(void);
void functions_D2CommonFunctions_init_100dfc70(void);
void functions_D2CommonFunctions_init_100dfcd0(void);
void functions_D2CommonFunctions_init_100dfd30(void);
void functions_D2CommonFunctions_init_100dfdc0(void);
void functions_D2CommonFunctions_init_100dfe80(void);
void functions_D2CommonFunctions_init_100dfef0(void);
void functions_D2CommonFunctions_init_100dff60(void);
void functions_D2CommonFunctions_init_100dffb0(void);
void functions_D2CommonFunctions_init_100e0010(void);
void functions_D2CommonFunctions_init_100e00a0(void);
void functions_D2CommonFunctions_init_100e01a0(void);
void functions_D2CommonFunctions_init_100e0220(void);
void functions_D2CommonFunctions_init_100e02b0(void);
void functions_D2CommonFunctions_init_100e0870(void);
void functions_D2CommonFunctions_init_100e1240(void);
void functions_D2CommonFunctions_Hook_sub_6fc58620_10266e90(int param_1);
void functions_D2CommonFunctions_Hook_sub_6fd01d90_10267010(void *param_1,int *param_2);
void functions_D2CommonFunctions_10267090(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8);
int functions_D2CommonFunctions_102670a0(int param_1,int param_2,uint32_t param_3);
int functions_D2CommonFunctions_10267270(int param_1,int param_2,uint32_t param_3);
void functions_D2CommonFunctions_Hook_sub_6fb05b20_10267340(int param_1,int param_2);
uint32_t __fastcall functions_D2CommonFunctions_Hook_Stats_StatsEx_6fd89ce0_10267390(int param_1,uint param_2,ushort *param_3,int *param_4);
uint __fastcall functions_D2CommonFunctions_102674f0(int param_1,int param_2,uint32_t reg_ESI);
void functions_D2CommonFunctions_Hook_SKILLS_SkillNec_6fc70250_102677b0(int param_1,int param_2,int param_3,uint param_4);
void __cdecl functions_D2CommonFunctions_Hook_D2Common_10454_10267860(char *param_1,char *param_2,size_t param_3);
void functions_D2CommonFunctions_Hook_D2Common_10887_102678a0(int param_1,int param_2,int param_3,uint param_4);
void functions_D2CommonFunctions_Hook_sub_6fcdd330_102678d0(int param_1,int param_2);
uint32_t functions_D2CommonFunctions_Hook_sub_6fb26b20_102678f0(int param_1);
uint32_t functions_D2CommonFunctions_10267970(int param_1,int *param_2);
int functions_D2CommonFunctions_Hook_Ai_AiThink4_6fcc4a10_10267a10(int *param_1);
uint8_t functions_D2CommonFunctions_10267a80(uint param_1);
uint __fastcall functions_D2CommonFunctions_10267aa0(int param_1);
uint32_t functions_D2CommonFunctions_Hook_ENGINE_Gfx_6fb1b5a0_10267ab0(int *param_1,int *param_2,uint8_t *param_3,int param_4);
uint functions_D2CommonFunctions_10267c50(byte param_1);
uint32_t functions_D2CommonFunctions_Hook_sub_6fcb8680_10267c80(int param_1);
void functions_D2CommonFunctions_Hook_sub_6fc71340_10267cb0(int param_1);
uint32_t functions_D2CommonFunctions_10267ce0(int param_1,int param_2);
uint32_t functions_D2CommonFunctions_10267d40(int param_1);
int functions_D2CommonFunctions_10267da0(int param_1,int param_2);
int functions_D2CommonFunctions_10267e40(int *param_1,uint8_t param_2,int param_3);
uint32_t functions_D2CommonFunctions_10267f30(int param_1,int param_2,int param_3,int param_4,int param_5,uint32_t param_6, byte param_7);
void functions_D2CommonFunctions_10267fd0(void);
uint32_t functions_D2CommonFunctions_10267fe0(char *param_1);
void functions_D2CommonFunctions_Hook_D2Common_10803_102680c0(int *param_1);
uint8_t * __fastcall functions_D2CommonFunctions_10268220(int param_1,uint8_t *param_2);
int functions_D2CommonFunctions_Hook_sub_6fc9a5e0_10268270(int *param_1,uint param_2);
uint32_t functions_D2CommonFunctions_Hook_UI_panel_6fad8bc0_102685c0(uint32_t *param_1);
void functions_D2CommonFunctions_Hook_UNIT_SUnitDmg_6fcfb570_10268600(int *param_1,int param_2,int param_3,uint param_4);
uint32_t functions_D2CommonFunctions_Hook_sub_6fc96bf0_102686f0(int *param_1);
void functions_D2CommonFunctions_Hook_sub_6fc96f43_10268750(int *param_1);
void functions_D2CommonFunctions_102687b0(int param_1,uint32_t param_2,int param_3);
void functions_D2CommonFunctions_10268850(uint param_1);
uint32_t * __fastcall functions_D2CommonFunctions_10268980(int param_1,uint param_2);
int functions_D2CommonFunctions_Hook_PLAYER_PlrModes_6fc97bb0_102689b0(int param_1,int param_2,uint param_3);
void functions_D2CommonFunctions_10268a10(int param_1,int param_2);
void functions_D2CommonFunctions_10268a50(int param_1,int param_2);
int functions_D2CommonFunctions_10268a90(int *param_1,int *param_2,int *param_3,int param_4);
int __fastcall functions_D2CommonFunctions_10268b60(int param_1);
bool functions_D2CommonFunctions_10268b80(int *param_1,uint32_t *param_2);
void functions_D2CommonFunctions_10268c60(int param_1,int param_2,int param_3,uint param_4);
uint32_t functions_D2CommonFunctions_10268ca0(int *param_1,int param_2);
int functions_D2CommonFunctions_10268d00(int param_1,uint32_t param_2,int param_3,int param_4);
int __fastcall functions_D2CommonFunctions_10268de0(int *param_1);
uint32_t functions_D2CommonFunctions_10268e40(uint param_1);
uint __fastcall functions_D2CommonFunctions_10268ea0(int *param_1,int param_2);
uint functions_D2CommonFunctions_Hook_D2Common_10244_10268ed0(int param_1);
uint8_t ** functions_D2CommonFunctions_10268f90(int *param_1);
uint32_t functions_D2CommonFunctions_10269070(int param_1,int param_2);
uint32_t functions_D2CommonFunctions_10269130(void);
uint32_t __fastcall functions_D2CommonFunctions_10269140(int param_1);
void functions_D2CommonFunctions_10269170(int param_1,int param_2);
void functions_D2CommonFunctions_102691d0(uint param_1,uint32_t param_2);
void functions_D2CommonFunctions_Hook_SKILLS_SkilPal_6fcba1a0_10269200(int param_1,uint32_t param_2,uint32_t param_3);
int __fastcall functions_D2CommonFunctions_10269230(int param_1,int param_2,int *param_3);
int functions_D2CommonFunctions_102692f0(int param_1,uint param_2);
void functions_D2CommonFunctions_10269340(int param_1);
uint32_t functions_D2CommonFunctions_10269400(uint param_1);
void functions_D2CommonFunctions_Hook_sub_6fd00f40_10269480(int param_1,int param_2,int param_3,uint32_t param_4,int *param_5, uint32_t param_6);
void functions_D2CommonFunctions_102694f0(int param_1,int param_2,int param_3);
uint64_t __fastcall functions_D2CommonFunctions_10269710(uint8_t *param_1,int *param_2);
int functions_D2CommonFunctions_1026b010(uint8_t *param_1,int *param_2);
void functions_D2CommonFunctions_Hook_sub_6fc950f0_1026b040(int param_1,uint32_t param_2);
void functions_D2CommonFunctions_Hook_MISSILES_Missiles_6fc8f620_1026b090(uint *param_1,int *param_2,int *param_3,int *param_4,int *param_5);
void __fastcall functions_D2CommonFunctions_1026b760(int *param_1);
uint8_t * __fastcall functions_D2CommonFunctions_1026b770(uint32_t param_1);
uint32_t functions_D2CommonFunctions_1026b7d0(void *param_1,void *param_2);
uint32_t functions_D2CommonFunctions_1026b7f0(void *param_1);
int __thiscall functions_D2CommonFunctions_1026b810(void *this,uint param_1);
int __fastcall thunk_FUN_1025f2f0(int *param_1);
void functions_D2CommonFunctions_1026b850(void);
uint8_t * __fastcall functions_D2CommonFunctions_1026b870(uint32_t param_1);
void functions_D2CommonFunctions_1026b8a0(void);
void functions_D2CommonFunctions_1026b8b0(void);
void * __thiscall functions_D2CommonFunctions_1026b8d0(void *this,uint32_t param_1,uint32_t param_2);
void * __thiscall functions_D2CommonFunctions_1026b910(void *this,uint32_t param_1,uint32_t param_2);
void * __thiscall functions_D2CommonFunctions_1026b950(void *this,uint32_t param_1,uint32_t param_2);
void * __thiscall functions_D2CommonFunctions_1026b990(void *this,uint32_t param_1,uint32_t param_2);
void * __fastcall functions_D2CommonFunctions_1026b9d0(void *param_1,uint8_t *param_2,uint8_t *param_3);
int functions_D2CommonFunctions_1026b9f0(void *param_1);
void functions_D2CommonFunctions_1026ba30(uint32_t param_1);
uint8_t * functions_D2CommonFunctions_1026baa0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
uint8_t * thunk_FUN_1026bd40(void);
uint32_t * __thiscall functions_D2CommonFunctions_1026bad0(void *this,uint32_t param_1,uint8_t *param_2,uint8_t *param_3);
uint8_t * functions_D2CommonFunctions_1026bc30(void);
int * functions_D2CommonFunctions_1026bc40(int *param_1,int param_2);
int * functions_D2CommonFunctions_1026bca0(int param_1,uint32_t param_2);
uint8_t * functions_D2CommonFunctions_1026bd40(void);
uint8_t functions_D2CommonFunctions_1026bd50(void);
uint8_t * functions_D2CommonFunctions_1026bd60(void);
void functions_D2CommonFunctions_stl_1026bd80(void);
int * functions_D2CommonFunctions_1026bda0(int *param_1,int param_2,void *param_3);
__time64_t functions_D2CommonFunctions_1026bf60(void);
uint8_t * functions_D2CommonFunctions_1026bf70(void);
uint8_t * functions_D2CommonFunctions_1026bf80(void);
void __fastcall functions_D2CommonFunctions_1026bf90(int param_1,int *param_2);
void __fastcall functions_D2CommonFunctions_1026c0e0(uint32_t param_1,int param_2);
uint __fastcall functions_D2CommonFunctions_1026c100(int param_1,uint32_t reg_ESI);
void __fastcall thunk_FUN_1026c210(int param_1);
void __fastcall functions_D2CommonFunctions_1026c210(int param_1);
void __fastcall functions_D2CommonFunctions_1026c230(uint32_t param_1,int param_2);
void __fastcall functions_D2CommonFunctions_1026c280(int param_1,uint32_t param_2);
void functions_D2CommonFunctions_Hook_GAME_Game_6fc4d9b0_1026c310(int param_1,int param_2);
longlong __fastcall functions_D2CommonFunctions_1026c6c0(byte *param_1,uint param_2);

/* ---- functions/D2ServerFunctions.cpp ---- */
void functions_D2ServerFunctions_init_100e1c40(void);
void functions_D2ServerFunctions_init_100e1fc0(void);
void functions_D2ServerFunctions_init_100e24f0(void);
void functions_D2ServerFunctions_init_100e26a0(void);
void functions_D2ServerFunctions_init_100e2700(void);
void functions_D2ServerFunctions_init_100e2760(void);
void functions_D2ServerFunctions_init_100e27c0(void);
void functions_D2ServerFunctions_init_100e2820(void);
void functions_D2ServerFunctions_InitPtr_D2Game_DAT_6fd31c30_100e4670(void);
void functions_D2ServerFunctions_InitPtr_D2Game_DAT_6fd31c3c_100e4680(void);
void functions_D2ServerFunctions_InitPtr_D2Game_DAT_6fd30bb8_100e4a70(void);
void functions_D2ServerFunctions_InitPtr_D2Game_DAT_6fd31c24_100e5e40(void);
void functions_D2ServerFunctions_init_100e7170(void);
void functions_D2ServerFunctions_init_100e7180(void);
void functions_D2ServerFunctions_init_100e7190(void);
void functions_D2ServerFunctions_init_100e71b0(void);
void functions_D2ServerFunctions_init_100e71d0(void);
void functions_D2ServerFunctions_init_100e71f0(void);
void functions_D2ServerFunctions_init_100e7210(void);
void functions_D2ServerFunctions_init_100e7230(void);
void functions_D2ServerFunctions_init_100e7250(void);
void functions_D2ServerFunctions_init_100e7270(void);
void functions_D2ServerFunctions_init_100e7290(void);
void functions_D2ServerFunctions_init_100e72b0(void);
void functions_D2ServerFunctions_init_100e72d0(void);
void functions_D2ServerFunctions_init_100e72f0(void);
void functions_D2ServerFunctions_init_100e7310(void);
void functions_D2ServerFunctions_init_100e7330(void);
void functions_D2ServerFunctions_init_100e7350(void);
void functions_D2ServerFunctions_init_100e7370(void);
void functions_D2ServerFunctions_init_100e7390(void);
void functions_D2ServerFunctions_init_100e73b0(void);
void functions_D2ServerFunctions_init_100e73d0(void);
void __fastcall functions_D2ServerFunctions_Wraps_D2Game_GAME_Game_1026c700(uint param_1,uint param_2,uint32_t param_3,int param_4,uint32_t param_5, uint32_t param_6,uint32_t param_7,uint8_t param_8,uint8_t param_9, byte param_10,uint32_t reg_EBX);
void functions_D2ServerFunctions_Hook_D2Game_10040_1026c940(uint *param_1);
void functions_D2ServerFunctions_1026cc40(int param_1,uint32_t reg_ESI);
void * __fastcall functions_D2ServerFunctions_1026cc60(void *param_1);
void __fastcall thunk_FUN_1026cd70(int *param_1);
void __fastcall thunk_FUN_1026ce40(uint32_t *param_1);
int functions_D2ServerFunctions_1026ccb0(uint param_1);
int __thiscall functions_D2ServerFunctions_1026cce0(void *this,uint param_1);
int functions_D2ServerFunctions_1026cd10(uint param_1);
int functions_D2ServerFunctions_1026cd40(void);
uint64_t __thiscall functions_D2ServerFunctions_1026cd50(void *this,void *param_1);
void __fastcall functions_D2ServerFunctions_1026cd70(int *param_1);
void * __thiscall functions_D2ServerFunctions_1026cda0(void *this,uint32_t *param_1);
void __fastcall functions_D2ServerFunctions_1026ce40(uint32_t *param_1);
void * __fastcall functions_D2ServerFunctions_1026ce60(void *param_1);
void __fastcall functions_D2ServerFunctions_1026ce90(int *param_1);
uint32_t * __fastcall functions_D2ServerFunctions_1026cef0(uint32_t *param_1);
void functions_D2ServerFunctions_1026cf10(void);
void __fastcall functions_D2ServerFunctions_1026cf30(int *param_1);
void * __fastcall functions_D2ServerFunctions_1026cf70(void *param_1,int param_2,int param_3);
uint32_t __fastcall functions_D2ServerFunctions_1026cfe0(uint32_t *param_1);
void __fastcall functions_D2ServerFunctions_1026d000(uint32_t param_1,uint32_t *param_2);
void * __thiscall functions_D2ServerFunctions_1026d020(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall functions_D2ServerFunctions_1026d050(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall functions_D2ServerFunctions_1026d0c0(uint32_t param_1,uint32_t param_2,uint32_t *param_3);
uint32_t * __thiscall functions_D2ServerFunctions_1026d160(void *this,uint32_t param_1);
void __fastcall functions_D2ServerFunctions_1026d180(uint32_t param_1,void *param_2);
void __thiscall functions_D2ServerFunctions_1026d1a0(void *this,uint32_t param_1);

/* ---- _unattributed/between_functions_D2ServerFunctions_and_events_SkillEvents_unit29_100e73f0.cpp ---- */
void sub_init_100e73f0(void);
void sub_init_100e7410(void);
void sub_init_100e7500(void);
void sub_init_100e7560(void);
void sub_init_100e75c0(void);
void sub_init_100e7630(void);
void sub_init_100e7690(void);
void sub_init_100e76f0(void);
void sub_init_100e7760(void);
void sub_init_100e77d0(void);
void sub_init_100e7840(void);
void sub_init_100e78a0(void);
void sub_init_100e7900(void);
void sub_init_100e7970(void);
void sub_init_100e79e0(void);
void sub_init_100e7a50(void);
void sub_init_100e7ab0(void);
void sub_init_100e7b10(void);
void sub_init_100e7b70(void);
void sub_init_100e7bd0(void);
void sub_init_100e7c50(void);
void sub_init_100e7cc0(void);
void sub_init_100e7d20(void);
void sub_init_100e7d80(void);
void sub_init_100e7e20(void);
void sub_init_100e7e90(void);
void sub_init_100e7ef0(void);
void sub_init_100e7f50(void);
void sub_init_100e7fb0(void);
void sub_init_100e8040(void);
void sub_init_100e8100(void);
void sub_init_100e8170(void);
void sub_init_100e81e0(void);
void sub_init_100e8230(void);
void sub_init_100e8290(void);
void sub_init_100e8320(void);
void sub_init_100e8420(void);
void sub_init_100e84a0(void);
void sub_init_100e8530(void);
void sub_init_100e8af0(void);
void sub_init_100e94c0(void);
void sub_init_100e9ec0(void);
void sub_init_100ea240(void);
void sub_init_100ea770(void);
void sub_init_100ea920(void);
void sub_init_100ea980(void);
void sub_init_100ea9e0(void);
void sub_init_100eaa40(void);
void sub_init_100eaaa0(void);
void sub_InitPtr_D2Common_DAT_6fde9e1c_100eb480(void);
void sub_InitPtr_D2Game_DAT_6fd274a8_100ec7a0(void);
void sub_InitPtr_D2Game_DAT_6fd277a8_100ec7b0(void);
void sub_InitPtr_D2Game_DAT_6fd2da48_100ec880(void);
void sub_InitPtr_D2Game_DAT_6fd2db68_100ec890(void);
void sub_InitPtr_D2Game_DAT_6fd22ab0_100eca10(void);
void sub_InitPtr_D2Client_DAT_6fbcbbfc_100edbe0(void);
void sub_InitPtr_D2Client_DAT_6fbcc390_100ee6d0(void);
void sub_InitPtr_D2Client_DAT_6fba2188_100ee6e0(void);
void sub_InitPtr_D2Client_DAT_6fbc9854_102a2b00_100ee700(void);
void sub_InitPtr_D2Client_DAT_6fbc9858_100ee710(void);
void sub_InitPtr_D2Client_DAT_6fbcc394_100ee720(void);
void sub_init_100ef3f0(void);
void sub_init_100ef470(void);
void sub_init_100ef4c0(void);
void sub_init_100ef520(void);
void sub_init_100ef590(void);
uint32_t sub_1026d1d0(int *param_1,uint32_t reg_EDI);
void sub_1026e7d0(uint *param_1,int param_2,int *param_3,uint *param_4);
void thunk_FUN_102ed360(void);
void sub_1026e9a0(int *param_1,int param_2,int *param_3);
void sub_1026e9f0(int *param_1,int *param_2,int param_3);
void sub_1026ea40(int *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
int __fastcall sub_1026ea70(int param_1,int param_2,int param_3);
void sub_1026eab0(uint param_1,uint param_2,int reg_ECX,uint reg_EDX);
void sub_1026ead0(uint param_1,uint *param_2,int *param_3,uint32_t param_4,uint32_t param_5, int *param_6);
uint32_t sub_1026ed30(int param_1,int *param_2,int param_3,int param_4,uint32_t param_5,int param_6, uint32_t param_7);
void sub_1026edd0(int *param_1,int param_2,int *param_3,byte *param_4);
uint32_t sub_1026efe0(int param_1,uint32_t param_2,int param_3);
uint32_t sub_1026f070(uint32_t param_1,uint32_t param_2,int param_3,int *param_4,uint8_t *param_5);
void sub_1026f190(int *param_1,int *param_2,int param_3);
void sub_1026f370(int *param_1,int param_2,int *param_3);
int sub_1026f410(int *param_1,int *param_2,int param_3,uint32_t reg_EDI);
int __fastcall sub_1026f680(int param_1,int *param_2);
int __fastcall sub_1026f820(int param_1,int param_2,int param_3);
void sub_1026f8c0(int param_1,uint8_t *param_2);
uint32_t __fastcall sub_1026f8f0(int param_1,int param_2,uint32_t reg_ESI,uint32_t reg_EDI);
uint32_t sub_1026fb60(int param_1,int *param_2,uint *param_3,int param_4,int param_5);
int __fastcall sub_1026fc00(int param_1);
uint32_t sub_1026fcf0(uint *param_1,int *param_2,int param_3);
uint32_t __fastcall sub_Hook_sub_6fcb34a0_1026ffe0(uint32_t *param_1,uint *param_2);
void __thiscall sub_102700f0(void *this,int param_1,uint32_t param_2,uint32_t param_3,int param_4,int param_5);
void sub_Hook_sub_6fc6d710_10270150(uint param_1,int *param_2,int *param_3);
void __fastcall sub_10270190(int param_1,int *param_2,uint32_t param_3,uint *param_4,int param_5);
void __fastcall sub_102703c0(int param_1,uint *param_2,uint32_t param_3,uint *param_4,int param_5);
uint __fastcall sub_102708b0(int *param_1,int param_2,uint32_t reg_ESI);
uint32_t __fastcall sub_10270a60(int *param_1,uint *param_2,uint32_t reg_EBX);
void __fastcall sub_10270b60(int param_1,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5);
uint32_t sub_10270c50(int param_1,int *param_2);
void sub_10270cf0(uint8_t *param_1,int param_2,uint32_t reg_EDI);
uint32_t __fastcall sub_10270d20(int param_1,uint8_t *param_2,uint32_t *param_3,uint32_t reg_EDI);
void __fastcall sub_10270e00(uint8_t *param_1,int param_2,uint32_t *param_3);
uint sub_10270eb0(uint *param_1,int *param_2,int param_3,int param_4,int param_5);
bool sub_10270ff0(int *param_1,int *param_2,int param_3);
void __fastcall sub_10271050(int *param_1,int *reg_EDX);
uint32_t __fastcall sub_102710a0(int *param_1,uint *param_2);
int sub_10271130(uint param_1,int *param_2,int param_3,uint32_t param_4);
void sub_10271180(int *param_1,int param_2);
void __fastcall sub_10271200(uint32_t param_1,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5 ,int param_6,uint32_t reg_EBX,uint32_t reg_EDI);
void sub_102713c0(int param_1);
int __fastcall sub_10271470(int param_1,int param_2,int param_3,int param_4);
void __fastcall sub_10271540(int param_1,int param_2,int *param_3,int *param_4);
void __fastcall sub_10271620(int param_1,int *param_2,int *param_3,int *param_4);
uint32_t sub_10271740(int *param_1,int param_2,int param_3,int param_4);
int __fastcall sub_10271940(int param_1);
void sub_Hook_UNIT_SUnitDmg_6fcfe0c0_10271a70(int *param_1,int *param_2,int param_3,int param_4);
void sub_10271bd0(int *param_1,uint32_t *param_2,int param_3,uint *param_4,uint32_t reg_EBX);
void __fastcall sub_10271cf0(int *param_1,uint *param_2,int param_3,uint *param_4,int param_5);
void __fastcall sub_10271e00(int *param_1,int param_2,int *param_3,uint32_t param_4,uint *param_5,int param_6);
uint32_t __fastcall sub_102720c0(int param_1,int param_2,int param_3,uint param_4);
void __fastcall sub_102722d0(int param_1,int param_2,uint *param_3);
uint32_t sub_102723e0(int *param_1,int param_2,int *param_3,int param_4,uint32_t reg_EBX,uint32_t reg_EDI );
uint8_t * sub_Hook_sub_6fc89b00_102727d0(uint8_t *param_1,int param_2,uint32_t *param_3,int param_4,uint32_t reg_EDI);
uint8_t * sub_Hook_sub_6fadc2d0_102728b0(uint8_t *param_1,int param_2,int *param_3,int param_4);
uint32_t sub_10272980(int param_1,int param_2,uint param_3,int param_4);
void sub_10272bd0(int param_1,int param_2,byte param_3);
void sub_10272d30(void);
uint32_t __fastcall sub_10272d50(void *param_1,uint param_2,void *param_3,uint param_4);
uint D2Common_10867(int param_1);   /* game binding -> D2Common.dll ordinal 10867, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint D2Common_10750(int param_1);   /* game binding -> D2Common.dll ordinal 10750, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int D2Common_10688(int param_1);   /* game binding -> D2Common.dll +0x3e980, sigmaRE/5_game_source/D2Common/_unattributed/between_Text_Text_and_DATATBLS_AnimTbls.cpp */
uint * D2Common_10951(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6, uint32_t param_s7,uint32_t param_s8,uint32_t param_s9);   /* game binding -> D2Common.dll ordinal 10951, sigmaRE/5_game_source/D2Common/_unattributed/between_ENVIRONMENT_Env_and_Text_Text.cpp */
uint D2Common_10585(byte param_1);   /* game binding -> D2Common.dll ordinal 10585, sigmaRE/5_game_source/D2Common/_unattributed/between_Stats_StatsEx_and_DUNGEON_Dungeon.cpp */
uint D2Common_10396(int param_1);   /* game binding -> D2Common.dll ordinal 10396, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint32_t * GetPtr_DATATBLS_LvlTbls_6fdbc300(void);   /* game binding -> DATATBLS_LvlTbls_6fdbc300, D2Common.dll +0x6c300, sigmaRE/5_game_source/D2Common/DATATBLS/LvlTbls.cpp */
void sub_6fcbdf40(int param_1,int param_2,uint param_3,uint param_4);   /* game binding -> D2Game.dll +0x9df40, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_Party_and_SKILLS_Skills.cpp */
uint __fastcall D2Win_10065(uint param_1);   /* game binding -> D2Win.dll +0xf2d0, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
void sub_6fb6e860(void);   /* game binding -> D2Client.dll +0xbe860, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
void Sound_SoundHdr_6fb0f090(void);   /* game binding -> D2Client.dll +0x5f090, sigmaRE/5_game_source/D2Client/Sound/SoundHdr.cpp */
uint D2Common_10838(int *param_1);   /* game binding -> D2Common.dll ordinal 10838, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
int D2Common_10014(int param_1);   /* game binding -> D2Common.dll ordinal 10014, sigmaRE/5_game_source/D2Common/DATATBLS/LvlTbls.cpp */
uint D2Common_10215(uint param_1);   /* game binding -> D2Common.dll ordinal 10215, sigmaRE/5_game_source/D2Common/DATATBLS/LvlTbls.cpp */
int D2Common_10688_10273110(int param_1);   /* game binding -> D2Common_10688, D2Common.dll ordinal 10688, sigmaRE/5_game_source/D2Common/_unattributed/between_Text_Text_and_DATATBLS_AnimTbls.cpp */
int D2Common_10695(uint param_1);   /* game binding -> D2Common.dll ordinal 10695, sigmaRE/5_game_source/D2Common/DATATBLS/ItemTbls.cpp */
uint D2Common_10582(int param_1,int param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10582, sigmaRE/5_game_source/D2Common/DATATBLS/MonsterTbls.cpp */
uint D2Common_10296(int *param_1);   /* game binding -> D2Common.dll ordinal 10296, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
int D2Common_10419(int param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10419, sigmaRE/5_game_source/D2Common/DRLG/Drlg.cpp */
void D2Common_11016(int *param_1);   /* game binding -> D2Common.dll ordinal 11016, sigmaRE/5_game_source/D2Common/_unattributed/between_DATATBLS_DataTbls_and_WayPoint_Waypoint.cpp */
void D2Common_10885(int param_1,uint32_t param_s2,uint32_t param_s3);   /* game binding -> D2Common.dll ordinal 10885, sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
int * D2Common_10816(int param_1,int param_2,int param_3,int *param_4,int *param_5,uint param_6);   /* game binding -> D2Common.dll ordinal 10816, sigmaRE/5_game_source/D2Common/_unattributed/between_ENVIRONMENT_Env_and_Text_Text.cpp */
uint32_t * GetPtr_GAME_Game_6fc4cb80(void);   /* game binding -> GAME_Game_6fc4cb80, D2Game.dll +0x2cb80, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_D2Common_10662(void);   /* game binding -> D2Common_10662, D2Common.dll +0x3c7e0, sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
uint32_t * GetPtr_DRLG_Outdoors_6fd92ce0(void);   /* game binding -> DRLG_Outdoors_6fd92ce0, D2Common.dll +0x42ce0, sigmaRE/5_game_source/D2Common/DRLG/Outdoors.cpp */
uint32_t * GetPtr_sub_6fd61bf0(void);   /* game binding -> sub_6fd61bf0, D2Common.dll +0x11bf0, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Maze_and_UNITS_UnitFinds.cpp */
uint32_t * GetPtr_DRLG_Maze_6fd5f110(void);   /* game binding -> DRLG_Maze_6fd5f110, D2Common.dll +0xf110, sigmaRE/5_game_source/D2Common/DRLG/Maze.cpp */
uint32_t * GetPtr_sub_6fd7d3c0(void);   /* game binding -> sub_6fd7d3c0, D2Common.dll +0x2d3c0, sigmaRE/5_game_source/D2Common/_unattributed/between_ITEMS_Items_and_DRLG_Drlg.cpp */
uint32_t * GetPtr_DRLG_DrlgRoom_6fd94bd0(void);   /* game binding -> DRLG_DrlgRoom_6fd94bd0, D2Common.dll +0x44bd0, sigmaRE/5_game_source/D2Common/DRLG/DrlgRoom.cpp */
uint32_t * GetPtr_DRLG_DrlgRoom_6fd94950(void);   /* game binding -> DRLG_DrlgRoom_6fd94950, D2Common.dll +0x44950, sigmaRE/5_game_source/D2Common/DRLG/DrlgRoom.cpp */
uint32_t * GetPtr_sub_6fd5e490(void);   /* game binding -> sub_6fd5e490, D2Common.dll +0xe490, sigmaRE/5_game_source/D2Common/DRLG/_unattributed/between_DRLG_Preset_and_DRLG_Maze.cpp */
uint32_t * GetPtr_DRLG_Maze_6fd5eec0(void);   /* game binding -> DRLG_Maze_6fd5eec0, D2Common.dll +0xeec0, sigmaRE/5_game_source/D2Common/DRLG/Maze.cpp */
uint32_t * GetPtr_DRLG_Maze_6fd60010(void);   /* game binding -> DRLG_Maze_6fd60010, D2Common.dll +0x10010, sigmaRE/5_game_source/D2Common/DRLG/Maze.cpp */
void D2Common_10141(int *param_1,uint *param_2);   /* game binding -> D2Common.dll ordinal 10141, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
void D2Common_10628(int *param_1,uint *param_2);   /* game binding -> D2Common.dll ordinal 10628, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
int D2Common_10658(int param_1,uint *param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10658, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
int D2Common_10823(int param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10823, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
int D2Common_10925(int param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10925, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
int D2Common_10935(int param_1);   /* game binding -> D2Common.dll ordinal 10935, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint D2Common_10261(uint *param_1,int param_2,int param_3,uint param_4);   /* game binding -> D2Common.dll ordinal 10261, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
void D2Common_10245(uint *param_1,int param_2,int param_3,uint param_4);   /* game binding -> D2Common.dll ordinal 10245, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint32_t * GetPtr_Stats_StatsEx_6fd881a0(void);   /* game binding -> Stats_StatsEx_6fd881a0, D2Common.dll +0x381a0, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
int D2Common_10587(int param_1,int param_2,uint param_3);   /* game binding -> D2Common.dll ordinal 10587, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
int D2Common_10973(int param_1,int param_2,uint param_3);   /* game binding -> D2Common.dll ordinal 10973, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
int D2Common_10973_10273ce0(int param_1,int param_2,uint param_3);   /* game binding -> D2Common_10973, D2Common.dll ordinal 10973, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
void D2Common_10887(int *param_1,int param_2,int param_3,uint param_4);   /* game binding -> D2Common.dll ordinal 10887, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
void D2Common_10887_10273d40(int *param_1,int param_2,int param_3,uint param_4);   /* game binding -> D2Common_10887, D2Common.dll ordinal 10887, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
void D2Common_10308(uint *param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10308, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint D2Common_10494(int *param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 10494, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int D2Common_10910(int param_1,int param_2,uint param_3);   /* game binding -> D2Common.dll ordinal 10910, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
void D2Common_10164(int param_1,int *param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10164, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint D2Common_11160(int param_1,uint *param_2);   /* game binding -> D2Common.dll ordinal 11160, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
int D2Common_10379(int param_1,uint param_2,uint param_3);   /* game binding -> D2Common.dll ordinal 10379, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint D2Common_10589(uint *param_1);   /* game binding -> D2Common.dll ordinal 10589, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void D2Common_10232(void *param_1,int param_2,int param_3,uint param_4,uint param_5);   /* game binding -> D2Common.dll ordinal 10232, sigmaRE/5_game_source/D2Common/COLLISN/Collisn.cpp */
void D2Common_11003(int param_1,int *param_2,int param_3,uint32_t param_s4,uint32_t param_s5, uint32_t param_s6);   /* game binding -> D2Common.dll ordinal 11003, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int D2Common_11088(int *param_1);   /* game binding -> D2Common.dll ordinal 11088, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10108(int param_1);   /* game binding -> D2Common.dll ordinal 10108, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_11034(int param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 11034, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_11006(int *param_1);   /* game binding -> D2Common.dll ordinal 11006, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
uint D2Common_10705(int *param_1);   /* game binding -> D2Common.dll ordinal 10705, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
uint D2Common_10620(int *param_1);   /* game binding -> D2Common.dll ordinal 10620, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint32_t * GetPtr_ITEMS_ItemMode_6fcf1bc0(void);   /* game binding -> ITEMS_ItemMode_6fcf1bc0, D2Game.dll +0xd1bc0, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint D2Common_10757(int *param_1);   /* game binding -> D2Common.dll ordinal 10757, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
uint D2Common_10360(int *param_1);   /* game binding -> D2Common.dll ordinal 10360, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
uint D2Common_11151(int *param_1);   /* game binding -> D2Common.dll ordinal 11151, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
uint D2Common_10405(int *param_1,int *param_2,uint32_t param_s3);   /* game binding -> D2Common.dll ordinal 10405, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
int D2Common_10213(int *param_1);   /* game binding -> D2Common.dll ordinal 10213, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
int D2Common_10120(int *param_1);   /* game binding -> D2Common.dll ordinal 10120, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint32_t * GetPtr_sub_6fdb9c60(void);   /* game binding -> sub_6fdb9c60, D2Common.dll +0x69c60, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
uint D2Common_11020(int *param_1);   /* game binding -> D2Common.dll ordinal 11020, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
uint D2Common_11138(int *param_1,int *param_2,int param_3);   /* game binding -> D2Common.dll ordinal 11138, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint D2Common_11133(int *param_1);   /* game binding -> D2Common.dll ordinal 11133, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfde90(void);   /* game binding -> UNIT_SUnitDmg_6fcfde90, D2Game.dll +0xdde90, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint UI_SkillDesc_6fade350(int param_1,int param_2);   /* game binding -> D2Client.dll +0x2e350, sigmaRE/5_game_source/D2Client/UI/SkillDesc.cpp */
void UI_SkillDesc_6fadfd30(int param_1,int param_2,uint32_t param_s3);   /* game binding -> D2Client.dll +0x2fd30, sigmaRE/5_game_source/D2Client/UI/SkillDesc.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfb790(void);   /* game binding -> UNIT_SUnitDmg_6fcfb790, D2Game.dll +0xdb790, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
int D2Common_10212(int *param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10212, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint32_t * GetPtr_sub_6fc5ae10(void);   /* game binding -> sub_6fc5ae10, D2Game.dll +0x3ae10, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
uint D2Common_10677(int *param_1);   /* game binding -> D2Common.dll ordinal 10677, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
uint32_t * GetPtr_sub_6fc970e0(void);   /* game binding -> sub_6fc970e0, D2Game.dll +0x770e0, sigmaRE/5_game_source/D2Game/PLAYER/_unattributed/between_PLAYER_PlrTrade_and_PLAYER_PlrModes.cpp */
uint D2Common_10623(int *param_1);   /* game binding -> D2Common.dll ordinal 10623, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
uint D2Common_10842(int *param_1,int *param_2,int *param_3);   /* game binding -> D2Common.dll ordinal 10842, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10227(int *param_1,int *param_2);   /* game binding -> D2Common.dll ordinal 10227, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
uint32_t * GetPtr_ITEMS_ItemMode_6fcf4e80(void);   /* game binding -> ITEMS_ItemMode_6fcf4e80, D2Game.dll +0xd4e80, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint32_t * GetPtr_sub_6fc58fb0(void);   /* game binding -> sub_6fc58fb0, D2Game.dll +0x38fb0, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfffd0(void);   /* game binding -> UNIT_SUnitDmg_6fcfffd0, D2Game.dll +0xdffd0, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_sub_6fc2e660(void);   /* game binding -> sub_6fc2e660, D2Game.dll +0xe660, sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
uint32_t * GetPtr_sub_6fc565e0(void);   /* game binding -> sub_6fc565e0, D2Game.dll +0x365e0, sigmaRE/5_game_source/D2Game/UNIT/_unattributed/between_UNIT_SUnit_and_UNIT_SUnitEvent.cpp */
uint32_t * GetPtr_sub_6fd121e0(void);   /* game binding -> sub_6fd121e0, D2Game.dll +0xf21e0, sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
uint32_t * GetPtr_sub_6fd0ab60(void);   /* game binding -> sub_6fd0ab60, D2Game.dll +0xeab60, sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
uint32_t * GetPtr_sub_6fc55e90(void);   /* game binding -> sub_6fc55e90, D2Game.dll +0x35e90, sigmaRE/5_game_source/D2Game/UNIT/_unattributed/between_UNIT_SUnit_and_UNIT_SUnitEvent.cpp */
uint32_t * GetPtr_UNIT_Party_6fcbc160(void);   /* game binding -> UNIT_Party_6fcbc160, D2Game.dll +0x9c160, sigmaRE/5_game_source/D2Game/UNIT/Party.cpp */
int D2Common_10913(int param_1);   /* game binding -> D2Common.dll ordinal 10913, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
int D2Common_10913_10274df0(int param_1);   /* game binding -> D2Common_10913, D2Common.dll ordinal 10913, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
int D2Common_10186(int param_1);   /* game binding -> D2Common.dll ordinal 10186, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
int D2Common_10578(int param_1);   /* game binding -> D2Common.dll ordinal 10578, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
void D2Common_11129(int *param_1,uint *param_2);   /* game binding -> D2Common.dll ordinal 11129, sigmaRE/5_game_source/D2Common/_unattributed/between_QuestRecord_QuestRecord_and_PATH_Path.cpp */
void D2Common_10009(int param_1,uint *param_2);   /* game binding -> D2Common.dll ordinal 10009, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
void D2Common_10243(int param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 10243, sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
void D2Common_10554(int param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 10554, sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
void D2Common_10748(int param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 10748, sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
void D2Common_11031(int param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 11031, sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
uint D2Common_10980(int param_1);   /* game binding -> D2Common.dll ordinal 10980, sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
uint D2Common_10649(int param_1);   /* game binding -> D2Common.dll ordinal 10649, sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
uint D2Common_10179(int param_1);   /* game binding -> D2Common.dll ordinal 10179, sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
uint D2Common_10631(int param_1);   /* game binding -> D2Common.dll ordinal 10631, sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
uint D2Common_10980_10275060(int param_1);   /* game binding -> D2Common_10980, D2Common.dll ordinal 10980, sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
uint D2Common_10983(int param_1);   /* game binding -> D2Common.dll ordinal 10983, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint D2Common_10764(int param_1);   /* game binding -> D2Common.dll ordinal 10764, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void D2Common_10647(int param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10647, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void D2Common_10168(int param_1,byte param_2);   /* game binding -> D2Common.dll ordinal 10168, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void D2Common_10527(int param_1,uchar param_2);   /* game binding -> D2Common.dll ordinal 10527, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int D2Common_10334(int param_1,int *param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10334, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void D2Common_10333(int param_1,int param_2,uint *param_3,int param_4);   /* game binding -> D2Common.dll ordinal 10333, sigmaRE/5_game_source/D2Common/DRLG/DrlgAnim.cpp */
void D2Common_10336(int param_1,uint *param_2);   /* game binding -> D2Common.dll ordinal 10336, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void __fastcall D2Common_10614(uint *param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 10614, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void __fastcall D2Common_10936(uint *param_1);   /* game binding -> D2Common.dll ordinal 10936, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int D2Common_10534(int *param_1);   /* game binding -> D2Common.dll ordinal 10534, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
void D2Common_10558(int *param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10558, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Missile_and_DATATBLS_LvlTbls.cpp */
void D2Common_10970(int *param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10970, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Missile_and_DATATBLS_LvlTbls.cpp */
int D2Common_10737(int *param_1);   /* game binding -> D2Common.dll ordinal 10737, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
int D2Common_10985(int *param_1);   /* game binding -> D2Common.dll ordinal 10985, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
int D2Common_10130(int *param_1);   /* game binding -> D2Common.dll ordinal 10130, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
uint D2Common_10839(int *param_1,int *param_2,ushort param_3);   /* game binding -> D2Common.dll ordinal 10839, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint D2Common_10331(int *param_1);   /* game binding -> D2Common.dll ordinal 10331, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
uint D2Common_10331_102753f0(int *param_1);   /* game binding -> D2Common_10331, D2Common.dll ordinal 10331, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
uint D2Common_10392(int param_1);   /* game binding -> D2Common.dll ordinal 10392, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void D2Common_10704(int *param_1);   /* game binding -> D2Common.dll ordinal 10704, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void D2Common_10408(int *param_1);   /* game binding -> D2Common.dll ordinal 10408, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint D2Common_10123(int param_1);   /* game binding -> D2Common.dll ordinal 10123, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void D2Common_11056(int param_1,int param_2);   /* game binding -> D2Common.dll ordinal 11056, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int D2Common_10303(uint param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6);   /* game binding -> D2Common.dll ordinal 10303, sigmaRE/5_game_source/D2Common/COLLISN/Collisn.cpp */
uint D2Common_10573(void *param_1,int param_2,int param_3,uint param_4,uint param_5);   /* game binding -> D2Common.dll ordinal 10573, sigmaRE/5_game_source/D2Common/COLLISN/Collisn.cpp */
void D2Common_10509(uint param_1,int *param_2,uint param_3,uint param_4,int param_5);   /* game binding -> D2Common.dll ordinal 10509, sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
uint32_t * GetPtr_D2Common_10032(void);   /* game binding -> D2Common_10032, D2Common.dll +0x31850, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void D2Common_10565(void *param_1,int param_2,int param_3,uint param_4,int param_5);   /* game binding -> D2Common.dll ordinal 10565, sigmaRE/5_game_source/D2Common/COLLISN/Collisn.cpp */
uint D2Common_10566(int *param_1,int *param_2,uint *param_3,uint *param_4);   /* game binding -> D2Common.dll ordinal 10566, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
void sub_6fc54130(int param_1,int *param_2,int *param_3,int param_4,uint32_t param_s5, uint32_t param_s6);   /* game binding -> D2Game.dll +0x34130, sigmaRE/5_game_source/D2Game/UNIT/_unattributed/between_UNIT_SUnit_and_UNIT_SUnitEvent.cpp */
uint32_t * GetPtr_sub_6fc54aa0(void);   /* game binding -> sub_6fc54aa0, D2Game.dll +0x34aa0, sigmaRE/5_game_source/D2Game/UNIT/_unattributed/between_UNIT_SUnit_and_UNIT_SUnitEvent.cpp */
uint D2Common_10391(int param_1,int *param_2);   /* game binding -> D2Common.dll ordinal 10391, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10822(int *param_1);   /* game binding -> D2Common.dll ordinal 10822, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
int D2Common_11015(int *param_1,int *param_2);   /* game binding -> D2Common.dll ordinal 11015, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
ulonglong __fastcall D2Common_10248(uint unused_ECX,uint reg_EDX,int param_3);   /* game binding -> D2Common.dll ordinal 10248, sigmaRE/5_game_source/D2Common/DATATBLS/ItemTbls.cpp */
int * D2Common_10079(int param_1);   /* game binding -> D2Common.dll ordinal 10079, sigmaRE/5_game_source/D2Common/DATATBLS/MonsterTbls.cpp */
int D2Common_10460(int *param_1);   /* game binding -> D2Common.dll ordinal 10460, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10464(int *param_1);   /* game binding -> D2Common.dll ordinal 10464, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10020(int *param_1);   /* game binding -> D2Common.dll ordinal 10020, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_11147(int *param_1);   /* game binding -> D2Common.dll ordinal 11147, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
int D2Common_11088_10275940(int *param_1);   /* game binding -> D2Common_11088, D2Common.dll ordinal 11088, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
void D2Common_10599(int *param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 10599, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
void D2Common_10599_102759a0(int *param_1,uint param_2);   /* game binding -> D2Common_10599, D2Common.dll ordinal 10599, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
uint D2Common_10744(int param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 10744, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
uint D2Common_10607(int param_1,uint *param_2);   /* game binding -> D2Common.dll ordinal 10607, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
uint D2Common_10607_10275a30(int param_1,uint *param_2);   /* game binding -> D2Common_10607, D2Common.dll ordinal 10607, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
int D2Common_11107(int param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6, byte param_7);   /* game binding -> D2Common.dll ordinal 11107, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10133(int *param_1,int *param_2,int param_3,uint param_4,uint param_5, uint32_t param_s6,uint32_t param_s7);   /* game binding -> D2Common.dll ordinal 10133, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
void D2Common_10114(int *param_1,uchar *param_2,uchar *param_3,uint32_t param_s4, uint32_t param_s5);   /* game binding -> D2Common.dll ordinal 10114, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
ulonglong __fastcall D2Common_10012(uint unused_ECX,uint reg_EDX,int *param_3,uchar param_4);   /* game binding -> D2Common.dll ordinal 10012, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
int * D2Common_10646(int param_1,int *param_2);   /* game binding -> D2Common.dll ordinal 10646, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10244(int *param_1,int *param_2,int param_3,int *param_4,uint *param_5,int *param_6);   /* game binding -> D2Common.dll ordinal 10244, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
uint D2Common_11139(int *param_1,int param_2);   /* game binding -> D2Common.dll ordinal 11139, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10051(int *param_1,int *param_2);   /* game binding -> D2Common.dll ordinal 10051, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
void D2Common_10029(int *param_1,int param_2,uint param_3,int param_4,int param_5,int param_6);   /* game binding -> D2Common.dll ordinal 10029, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
uint D2Common_10828(int param_1);   /* game binding -> D2Common.dll ordinal 10828, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
uint D2Common_10507(int param_1);   /* game binding -> D2Common.dll ordinal 10507, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
uint D2Common_10304(int param_1);   /* game binding -> D2Common.dll ordinal 10304, sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
int D2Common_10601(uint *param_1,uint32_t param_s2,uint32_t param_s3);   /* game binding -> D2Common.dll ordinal 10601, sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
int D2Common_11017(int *param_1);   /* game binding -> D2Common.dll ordinal 11017, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
void D2Common_10466(int *param_1,int *param_2);   /* game binding -> D2Common.dll ordinal 10466, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint32_t * GetPtr_INVENTORY_Inventory_6fd71640(void);   /* game binding -> INVENTORY_Inventory_6fd71640, D2Common.dll +0x21640, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
int D2Common_10698(int *param_1);   /* game binding -> D2Common.dll ordinal 10698, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
int D2Common_11075(int *param_1);   /* game binding -> D2Common.dll ordinal 11075, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */

/* ---- _unattributed/between_functions_D2ServerFunctions_and_events_SkillEvents_unit30.cpp ---- */
void sub_init_100ef5e0(void);
void sub_init_100ef600(void);
void sub_init_100ef6f0(void);
void sub_init_100ef750(void);
void sub_init_100ef7b0(void);
void sub_init_100ef820(void);
void sub_init_100ef880(void);
void sub_init_100ef8e0(void);
void sub_init_100ef950(void);
void sub_init_100ef9c0(void);
void sub_init_100efa30(void);
void sub_init_100efa90(void);
void sub_init_100efaf0(void);
void sub_init_100efb60(void);
void sub_init_100efbd0(void);
void sub_init_100efc40(void);
void sub_init_100efca0(void);
void sub_init_100efd00(void);
void sub_init_100efd60(void);
void sub_init_100efdc0(void);
void sub_init_100efe40(void);
void sub_init_100efeb0(void);
void sub_init_100eff10(void);
void sub_init_100eff70(void);
void sub_init_100f0010(void);
void sub_init_100f0080(void);
void sub_init_100f00e0(void);
void sub_init_100f0140(void);
void sub_init_100f01a0(void);
void sub_init_100f0230(void);
void sub_init_100f02f0(void);
void sub_init_100f0360(void);
void sub_init_100f03d0(void);
void sub_init_100f0420(void);
void sub_init_100f0480(void);
void sub_init_100f0510(void);
void sub_init_100f0610(void);
void sub_init_100f0690(void);
void sub_init_100f0720(void);
void sub_init_100f0ce0(void);
void sub_init_100f16b0(void);
void sub_init_100f20b0(void);
void sub_init_100f2430(void);
void sub_init_100f2960(void);
void sub_init_100f2b10(void);
void sub_init_100f2b70(void);
void sub_init_100f2bd0(void);
void sub_init_100f2c30(void);
void sub_init_100f2c90(void);
void sub_init_100f3330(void);
void sub_init_100fe880(void);
void sub_init_100fe8a0(void);
void sub_init_100fe8c0(void);
void sub_init_100fe8e0(void);
void * __fastcall sub_102ac580(void *param_1);
uint32_t * sub_102ac5e0(void);
uint32_t * __fastcall sub_102ac7f0(uint32_t *param_1);
uint32_t * __fastcall sub_102aca40(uint32_t *param_1);
uint32_t * __fastcall sub_102acad0(uint32_t *param_1);
uint32_t * __fastcall sub_102acb80(uint32_t *param_1);
uint32_t * __fastcall sub_102acc30(uint32_t *param_1);
uint16_t * __fastcall sub_102acce0(uint16_t *param_1);
uint32_t * __fastcall sub_102acd20(uint32_t *param_1);
void __fastcall sub_102acf00(int param_1);
void __fastcall sub_102acf50(int param_1);
void __fastcall sub_102acf90(char *param_1);
uint32_t __fastcall sub_PatchInstaller_102ad020(int *param_1);
uint32_t sub_BlockPatchInstaller_102ad1f0(void);
uint32_t sub_LoadModuleTable_102ad400(void);
uint32_t sub_102ad440(void);
void sub_102ad530(void);
uint32_t sub_Init_102ad560(uint32_t reg_EBX);
void sub_102ad9b0(void);
void sub_102ada30(void);
void __fastcall sub_102ada80(uint32_t param_1,uint param_2,uint32_t reg_EBX);
uint32_t DllMain(uint32_t param_1,int param_2,uint32_t reg_EBX);
void sub_102adb00(void);
uintptr_t * __fastcall sub_102adb20(uintptr_t *param_1);
uint32_t * __fastcall sub_102adb30(uint32_t *param_1);
uintptr_t * __fastcall sub_102adb70(uintptr_t *param_1);
uintptr_t * __fastcall sub_102adb80(uintptr_t *param_1);
int __fastcall sub_102adb90(int param_1,int param_2);
void __fastcall sub_102adc00(uintptr_t *param_1);
void __thiscall sub_102adcb0(void *this,byte *param_1,byte *param_2);
void __fastcall sub_102adcf0(uintptr_t *param_1);
void __fastcall sub_102adda0(uintptr_t *param_1);
void __fastcall sub_102ade50(uint32_t *param_1);
void sub_102ade60(void *param_1);
void __thiscall sub_102ade80(void *this,byte *param_1,byte *param_2);
uint32_t __fastcall sub_102adf00(uint32_t param_1);
uint32_t sub_102adf30(void);
void sub_102adfa0(void);
void sub_102adff0(uint32_t reg_EBX);
void __fastcall sub_102ae040(uint32_t *param_1);

/* ---- _unattributed/between_functions_D2ServerFunctions_and_events_SkillEvents_unit31.cpp ---- */
void sub_init_100fe900(void);
void sub_init_100fe920(void);
void sub_init_100fea10(void);
void sub_init_100fea70(void);
void sub_init_100fead0(void);
void sub_init_100feb40(void);
void sub_init_100feba0(void);
void sub_init_100fec00(void);
void sub_init_100fec70(void);
void sub_init_100fece0(void);
void sub_init_100fed50(void);
void sub_init_100fedb0(void);
void sub_init_100fee10(void);
void sub_init_100fee80(void);
void sub_init_100feef0(void);
void sub_init_100fef60(void);
void sub_init_100fefc0(void);
void sub_init_100ff020(void);
void sub_init_100ff080(void);
void sub_init_100ff0e0(void);
void sub_init_100ff160(void);
void sub_init_100ff1d0(void);
void sub_init_100ff230(void);
void sub_init_100ff290(void);
void sub_init_100ff330(void);
void sub_init_100ff3a0(void);
void sub_init_100ff400(void);
void sub_init_100ff460(void);
void sub_init_100ff4c0(void);
void sub_init_100ff550(void);
void sub_init_100ff610(void);
void sub_init_100ff680(void);
void sub_init_100ff6f0(void);
void sub_init_100ff740(void);
void sub_init_100ff7a0(void);
void sub_init_100ff830(void);
void sub_init_100ff930(void);
void sub_init_100ff9b0(void);
void sub_init_100ffa40(void);
void sub_init_10100000(void);
void sub_init_101009d0(void);
void sub_init_101013d0(void);
void sub_init_10101750(void);
void sub_init_10101c80(void);
void sub_init_10101e30(void);
void sub_init_10101e90(void);
void sub_init_10101ef0(void);
void sub_init_10101f50(void);
void sub_init_10101fb0(void);

/* ---- _unattributed/between_functions_D2ServerFunctions_and_events_SkillEvents_unit32.cpp ---- */
void sub_init_10106900(void);
void sub_init_10106920(void);
void sub_init_10106a10(void);
void sub_init_10106a70(void);
void sub_init_10106ad0(void);
void sub_init_10106b40(void);
void sub_init_10106ba0(void);
void sub_init_10106c00(void);
void sub_init_10106c70(void);
void sub_init_10106ce0(void);
void sub_init_10106d50(void);
void sub_init_10106db0(void);
void sub_init_10106e10(void);
void sub_init_10106e80(void);
void sub_init_10106ef0(void);
void sub_init_10106f60(void);
void sub_init_10106fc0(void);
void sub_init_10107020(void);
void sub_init_10107080(void);
void sub_init_101070e0(void);
void sub_init_10107160(void);
void sub_init_101071d0(void);
void sub_init_10107230(void);
void sub_init_10107290(void);
void sub_init_10107330(void);
void sub_init_101073a0(void);
void sub_init_10107400(void);
void sub_init_10107460(void);
void sub_init_101074c0(void);
void sub_init_10107550(void);
void sub_init_10107610(void);
void sub_init_10107680(void);
void sub_init_101076f0(void);
void sub_init_10107740(void);
void sub_init_101077a0(void);
void sub_init_10107830(void);
void sub_init_10107930(void);
void sub_init_101079b0(void);
void sub_init_10107a40(void);
void sub_init_10108000(void);
void sub_init_101089d0(void);
void sub_init_101093d0(void);
void sub_init_10109750(void);
void sub_init_10109c80(void);
void sub_init_10109e30(void);
void sub_init_10109e90(void);
void sub_init_10109ef0(void);
void sub_init_10109f50(void);
void sub_init_10109fb0(void);
void sub_InitPtr_D2Common_DAT_6fde9e1c_1010a990(void);
void sub_InitPtr_D2Game_DAT_6fd27338_1010bcf0(void);
void __fastcall sub_Ptr_D2Game_6fd1bb80_102ae3a0(int param_1,int *param_2,int param_3,int param_4,uint32_t reg_ESI,uint32_t reg_EDI);
void __fastcall sub_Ptr_D2Game_6fd1bb94_102ae8a0(uint32_t param_1,int *param_2,uint param_3);
void __fastcall sub_Ptr_D2Game_6fd1bb98_102aeb10(void *param_1,int *param_2,void *param_3,uint param_4);
uint64_t __fastcall sub_Ptr_D2Game_6fd1bba0_102aeca0(int param_1,int *param_2,uint32_t param_3,uint32_t param_4);
int sub_102aed20(uint *param_1);
int sub_102aed60(uint *param_1);
uint32_t sub_102aeda0(void *param_1,uint *param_2);
uint32_t sub_102aedc0(void *param_1);
uint32_t sub_102aede0(uint *param_1);

/* ---- events/SkillEvents.cpp ---- */
void events_SkillEvents_init_1010e900(void);
void events_SkillEvents_init_1010e920(void);
void events_SkillEvents_init_1010ea10(void);
void events_SkillEvents_init_1010ea70(void);
void events_SkillEvents_init_1010ead0(void);
void events_SkillEvents_init_1010eb40(void);
void events_SkillEvents_init_1010eba0(void);
void events_SkillEvents_init_1010ec00(void);
void events_SkillEvents_init_1010ec70(void);
void events_SkillEvents_init_1010ece0(void);
void events_SkillEvents_init_1010ed50(void);
void events_SkillEvents_init_1010edb0(void);
void events_SkillEvents_init_1010ee10(void);
void events_SkillEvents_init_1010ee80(void);
void events_SkillEvents_init_1010eef0(void);
void events_SkillEvents_init_1010ef60(void);
void events_SkillEvents_init_1010efc0(void);
void events_SkillEvents_init_1010f020(void);
void events_SkillEvents_init_1010f080(void);
void events_SkillEvents_init_1010f0e0(void);
void events_SkillEvents_init_1010f160(void);
void events_SkillEvents_init_1010f1d0(void);
void events_SkillEvents_init_1010f230(void);
void events_SkillEvents_init_1010f290(void);
void events_SkillEvents_init_1010f330(void);
void events_SkillEvents_init_1010f3a0(void);
void events_SkillEvents_init_1010f400(void);
void events_SkillEvents_init_1010f460(void);
void events_SkillEvents_init_1010f4c0(void);
void events_SkillEvents_init_1010f550(void);
void events_SkillEvents_init_1010f610(void);
void events_SkillEvents_init_1010f680(void);
void events_SkillEvents_init_1010f6f0(void);
void events_SkillEvents_init_1010f740(void);
void events_SkillEvents_init_1010f7a0(void);
void events_SkillEvents_init_1010f830(void);
void events_SkillEvents_init_1010f930(void);
void events_SkillEvents_init_1010f9b0(void);
void events_SkillEvents_init_1010fa40(void);
void events_SkillEvents_init_10110000(void);
void events_SkillEvents_init_101109d0(void);
void events_SkillEvents_init_101113d0(void);
void events_SkillEvents_init_10111750(void);
void events_SkillEvents_init_10111c80(void);
void events_SkillEvents_init_10111e30(void);
void events_SkillEvents_init_10111e90(void);
void events_SkillEvents_init_10111ef0(void);
void events_SkillEvents_init_10111f50(void);
void events_SkillEvents_init_10111fb0(void);
void events_SkillEvents_InitPtr_D2Common_DAT_6fde9e1c_10112990(void);
void events_SkillEvents_InitPtr_D2Game_DAT_6fd277a8_10113cc0(void);
void events_SkillEvents_InitPtr_D2Game_DAT_6fd1c3e8_10113f30(void);
uint32_t __thiscall events_SkillEvents_102aee30(void *this,int *param_2,int *param_3,int param_4,int param_5,uint32_t reg_EBX, uint32_t reg_ESI,uint32_t reg_EDI);
uint __thiscall events_SkillEvents_102aefe0(void *this,int *param_1,int *param_2,int param_3,uint param_4,uint32_t param_5);
uint32_t __thiscall events_SkillEvents_102af060(void *this,int *param_2,int *param_3,uint32_t param_4,int param_5,uint32_t reg_EBX);
uint32_t __thiscall events_SkillEvents_102af610(void *this,int *param_2,int *param_3,byte *param_4,int param_5,int reg_EDX);
uint32_t __thiscall events_SkillEvents_102afa40(void *this,int *param_1,int *param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
uint32_t events_SkillEvents_102afab0(int *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
uint32_t __thiscall events_SkillEvents_102afb70(void *this,int *param_1,int *param_2,uint32_t param_3,uint param_4,uint param_5);
uint32_t events_SkillEvents_102afc70(int param_1,int *param_2,int param_3,uint param_4,int param_5);
uint32_t events_SkillEvents_102afe90(int *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
uint32_t __thiscall events_SkillEvents_102aff50(void *this,int *param_1,int *param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
uint32_t __thiscall events_SkillEvents_102affc0(void *this,int *param_1,int param_2);
uint32_t __thiscall events_SkillEvents_102afff0(void *this,int *param_1,void *param_2,uint32_t param_3,uint param_4);
uint32_t __fastcall events_SkillEvents_102b0160(int param_1,int param_2,uint param_3,uint32_t param_4,uint32_t param_5, void *param_6,void *param_7);

/* ---- _unattributed/between_events_SkillEvents_and_functions_CubeFunctions_unit34.cpp ---- */
void sub_init_10116900(void);
void sub_init_10116920(void);
void sub_init_10116a10(void);
void sub_init_10116a70(void);
void sub_init_10116ad0(void);
void sub_init_10116b40(void);
void sub_init_10116ba0(void);
void sub_init_10116c00(void);
void sub_init_10116c70(void);
void sub_init_10116ce0(void);
void sub_init_10116d50(void);
void sub_init_10116db0(void);
void sub_init_10116e10(void);
void sub_init_10116e80(void);
void sub_init_10116ef0(void);
void sub_init_10116f60(void);
void sub_init_10116fc0(void);
void sub_init_10117020(void);
void sub_init_10117080(void);
void sub_init_101170e0(void);
void sub_init_10117160(void);
void sub_init_101171d0(void);
void sub_init_10117230(void);
void sub_init_10117290(void);
void sub_init_10117330(void);
void sub_init_101173a0(void);
void sub_init_10117400(void);
void sub_init_10117460(void);
void sub_init_101174c0(void);
void sub_init_10117550(void);
void sub_init_10117610(void);
void sub_init_10117680(void);
void sub_init_101176f0(void);
void sub_init_10117740(void);
void sub_init_101177a0(void);
void sub_init_10117830(void);
void sub_init_10117930(void);
void sub_init_101179b0(void);
void sub_init_10117a40(void);
void sub_init_10118000(void);
void sub_init_101189d0(void);
void sub_init_101193d0(void);
void sub_init_10119750(void);
void sub_init_10119c80(void);
void sub_init_10119e30(void);
void sub_init_10119e90(void);
void sub_init_10119ef0(void);
void sub_init_10119f50(void);
void sub_init_10119fb0(void);
void sub_InitPtr_D2Common_DAT_6fde9e1c_1011a990(void);
void sub_InitPtr_D2Game_DAT_6fd2e788_1011bd80(void);
void sub_InitPtr_D2Game_DAT_6fd2f850_1011be60(void);
void sub_init_1011e900(void);
void sub_init_1011e960(void);
void sub_init_1011e9c0(void);
uint32_t __fastcall sub_102b06c0(int param_1,int param_2,int param_3,uint param_4);
uint32_t __fastcall sub_102b0900(uint param_1,int param_2);
uint32_t __fastcall sub_102b09a0(uint param_1,int param_2,uint32_t param_3);
void __fastcall sub_102b0a30(int param_1,int *param_2,uint param_3);
void __fastcall sub_102b0c80(uint param_1,int param_2,int param_3);
void __fastcall sub_102b0e40(int param_1,uint *param_2,int param_3);
void sub_102b0fe0(int *param_1,int reg_ECX,int *reg_EDX);
void __fastcall sub_102b0ff0(void *param_1,int param_2,int param_3);
void __fastcall sub_102b1210(int param_1,int param_2,int param_3);
void __fastcall sub_102b1300(uint param_1,int param_2,int param_3);
void __fastcall sub_102b13f0(int param_1,int param_2,int param_3);
void __fastcall sub_102b1520(int param_1,int *param_2,int *param_3,int *param_4,int *param_5);
void __fastcall sub_102b16a0(uint param_1,int *param_2,int param_3);
void __fastcall sub_102b1850(int param_1,int *param_2,int param_3);
void __fastcall sub_102b1a00(uint *param_1,int *param_2,int param_3);
void __fastcall sub_102b1ba0(int param_1,int param_2,int *param_3);
void __fastcall sub_102b2010(ushort *param_1,ushort *param_2,uint *param_3,uint32_t reg_EBX,uint32_t reg_EDI);
void __fastcall sub_102b3d70(int param_1,int *param_2,uint32_t param_3);
void __fastcall sub_102b3eb0(int param_1,int *param_2,int param_3);
void __fastcall sub_102b41c0(int param_1,int param_2,int *param_3);
void __fastcall sub_102b4440(int param_1,int *param_2,uint32_t *param_3,uint32_t reg_EBX);
uint __fastcall sub_102b4bb0(int param_1,int *param_2,int *param_3);
void __fastcall sub_102b4f00(int param_1,int *param_2,int *param_3);
void __fastcall sub_102b5770(int *param_1,int *param_2,int *param_3,uint32_t reg_ESI,uint32_t reg_EDI);
void __fastcall sub_102b6640(int param_1,int *param_2,int *param_3);
void __fastcall sub_102b66d0(int *param_1,int param_2,int *param_3);
void __fastcall sub_102b7570(uint param_1,int *param_2,uint param_3);
void __fastcall sub_102b77b0(uint param_1,uint *param_2,uint *param_3);
void __fastcall sub_102b91f0(void *param_1,int *param_2,int param_3);
void __fastcall sub_102b9330(uint param_1,int *param_2,int param_3);
uint32_t __fastcall sub_Ptr_D2Game_6fd1b5a4_102b9560(int param_1,int *param_2,int *param_3,uint32_t param_4);
uint32_t __fastcall sub_Ptr_D2Game_6fd1b5ac_102b95a0(int param_1,int *param_2,int *param_3,uint32_t param_4);
uint32_t __fastcall sub_Ptr_D2Game_6fd1b5b4_102b95e0(int param_1,int *param_2,int *param_3,uint *param_4);
uint32_t __fastcall sub_Ptr_D2Game_6fd1b5bc_102b9620(int param_1,int *param_2,int *param_3,uint32_t param_4);
uint32_t __fastcall sub_Ptr_D2Game_6fd1b5c4_102b9660(int param_1,int *param_2,int *param_3,uint32_t param_4);
uint32_t __fastcall sub_Ptr_D2Game_6fd1b5cc_102b96a0(int param_1,int *param_2,int *param_3,uint32_t param_4);
uint32_t __fastcall sub_Ptr_D2Game_6fd1b5e4_102b96e0(int param_1,int *param_2,int *param_3,uint32_t param_4);
uint32_t __fastcall sub_Ptr_D2Game_6fd1b5ec_102b9720(int param_1,int *param_2,int *param_3,uint32_t param_4);
uint32_t sub_102b9760(int param_1,uint32_t param_2,int param_3);
void __fastcall sub_102b9820(int param_1,int *param_2,int *param_3,uint32_t reg_ESI,uint32_t reg_EDI, uint reg_EBX);
bool __thiscall sub_102b9ba0(void *this,uint param_2,uint32_t param_3,int *param_4,int *reg_EDX);
uint32_t __fastcall sub_102b9cd0(uint param_1,int *param_2,int *param_3,int param_4,int param_5,int *param_6);
void __fastcall sub_Wraps_D2Game_Ai_AiThink4_102b9d50(int param_1,int *param_2,int *param_3);
uint32_t __thiscall sub_102ba0c0(void *this,int *param_2,int *param_3,int param_4,uint32_t reg_EBX,uint32_t reg_ESI);
void __fastcall sub_102ba3a0(uint32_t param_1,int *param_2,int *param_3);
void __fastcall sub_102ba480(uint32_t param_1,int *param_2,int *param_3);
uint32_t sub_102ba660(int param_1,int *param_2,uint *param_3,uint32_t param_4,uint32_t param_5, uint32_t param_6,uint *param_7,int param_8);
void sub_102ba8f0(int *param_1,int param_2,int param_3,uint32_t param_4,int param_5, uint32_t param_6,int param_7);
uint32_t sub_Hook_sub_6fc3bbc0_102baa40(int param_1,int *param_2,int *param_3);
uint32_t sub_102baae0(void);
void * __thiscall sub_102bac20(void *this,uint param_1);
int sub_102bac40(uint *param_1);
int sub_102bac80(uint *param_1);
uint8_t * sub_102baca0(void);
uint sub_102bacc0(uint *param_1);
uint64_t __fastcall sub_102bacf0(uint32_t param_1);
void * __thiscall sub_102bad00(void *this,uint param_1);
void __thiscall sub_102bad20(void *this,uint param_1);
uint32_t * __fastcall sub_102bad60(uint32_t *param_1,int param_2,uint32_t param_3);
void __fastcall sub_102bad80(int param_1);
void __fastcall sub_102badc0(uint32_t param_1);
uint32_t sub_102bae00(uint32_t param_1,uint *param_2);
uint32_t * __thiscall sub_102baed0(void *this,uint32_t param_1);
void __fastcall sub_102baf20(void *param_1,int param_2);
void * __fastcall sub_102bafa0(void *param_1,void *param_2);
uint32_t * __fastcall sub_102bafb0(void *param_1);
void * __thiscall sub_102bb020(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
uint __thiscall sub_102bb0a0(void *this,uint param_1);
void __fastcall sub_102bb120(uint32_t *param_1);
uint __fastcall sub_102bb150(uint *param_1);
void __fastcall sub_102bb1b0(int param_1);
void __fastcall sub_102bb200(uint32_t *param_1);
void __fastcall sub_102bb2f0(void *param_1,uint32_t param_2);
void __fastcall sub_102bb310(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
uint32_t __fastcall sub_102bb360(uint32_t param_1);
uint32_t * sub_102bb390(uint32_t param_1);

/* ---- functions/CubeFunctions.cpp ---- */
void functions_CubeFunctions_init_1011e9e0(void);
void functions_CubeFunctions_init_1011ea00(void);
void functions_CubeFunctions_init_1011eaf0(void);
void functions_CubeFunctions_init_1011eb50(void);
void functions_CubeFunctions_init_1011ebb0(void);
void functions_CubeFunctions_init_1011ec20(void);
void functions_CubeFunctions_init_1011ec80(void);
void functions_CubeFunctions_init_1011ece0(void);
void functions_CubeFunctions_init_1011ed50(void);
void functions_CubeFunctions_init_1011edc0(void);
void functions_CubeFunctions_init_1011ee30(void);
void functions_CubeFunctions_init_1011ee90(void);
void functions_CubeFunctions_init_1011eef0(void);
void functions_CubeFunctions_init_1011ef60(void);
void functions_CubeFunctions_init_1011efd0(void);
void functions_CubeFunctions_init_1011f040(void);
void functions_CubeFunctions_init_1011f0a0(void);
void functions_CubeFunctions_init_1011f100(void);
void functions_CubeFunctions_init_1011f160(void);
void functions_CubeFunctions_init_1011f1c0(void);
void functions_CubeFunctions_init_1011f240(void);
void functions_CubeFunctions_init_1011f2b0(void);
void functions_CubeFunctions_init_1011f310(void);
void functions_CubeFunctions_init_1011f370(void);
void functions_CubeFunctions_init_1011f410(void);
void functions_CubeFunctions_init_1011f480(void);
void functions_CubeFunctions_init_1011f4e0(void);
void functions_CubeFunctions_init_1011f540(void);
void functions_CubeFunctions_init_1011f5a0(void);
void functions_CubeFunctions_init_1011f630(void);
void functions_CubeFunctions_init_1011f6f0(void);
void functions_CubeFunctions_init_1011f760(void);
void functions_CubeFunctions_init_1011f7d0(void);
void functions_CubeFunctions_init_1011f820(void);
void functions_CubeFunctions_init_1011f880(void);
void functions_CubeFunctions_init_1011f910(void);
void functions_CubeFunctions_init_1011fa10(void);
void functions_CubeFunctions_init_1011fa90(void);
void functions_CubeFunctions_init_1011fb20(void);
void functions_CubeFunctions_init_101200e0(void);
void functions_CubeFunctions_init_10120ab0(void);
void functions_CubeFunctions_init_101214b0(void);
void functions_CubeFunctions_init_10121830(void);
void functions_CubeFunctions_init_10121d60(void);
void functions_CubeFunctions_init_10121f10(void);
void functions_CubeFunctions_init_10121f70(void);
void functions_CubeFunctions_init_10121fd0(void);
void functions_CubeFunctions_init_10122030(void);
void functions_CubeFunctions_init_10122090(void);
void functions_CubeFunctions_InitPtr_D2Common_DAT_6fde9e1c_10122a70(void);
bool __fastcall functions_CubeFunctions_102bc7f0(int param_1,int param_2);
void * __fastcall functions_CubeFunctions_102bcc00(void *param_1,int param_2,int param_3,int *param_4);
uint __fastcall functions_CubeFunctions_102bd370(int param_1,int param_2);
int __fastcall functions_CubeFunctions_102bd4d0(int param_1,int param_2,int *param_3,int param_4,uint32_t reg_EDI);
void __fastcall functions_CubeFunctions_Wraps_D2Game_ITEMS_ItemMode_102bd5e0(void *param_1,int param_2,int *param_3,uint32_t *param_4);

/* ---- functions/D2NewFunctions.cpp ---- */
void functions_D2NewFunctions_init_101269e0(void);
void functions_D2NewFunctions_init_10126a00(void);
void functions_D2NewFunctions_init_10126af0(void);
void functions_D2NewFunctions_init_10126b50(void);
void functions_D2NewFunctions_init_10126bb0(void);
void functions_D2NewFunctions_init_10126c20(void);
void functions_D2NewFunctions_init_10126c80(void);
void functions_D2NewFunctions_init_10126ce0(void);
void functions_D2NewFunctions_init_10126d50(void);
void functions_D2NewFunctions_init_10126dc0(void);
void functions_D2NewFunctions_init_10126e30(void);
void functions_D2NewFunctions_init_10126e90(void);
void functions_D2NewFunctions_init_10126ef0(void);
void functions_D2NewFunctions_init_10126f60(void);
void functions_D2NewFunctions_init_10126fd0(void);
void functions_D2NewFunctions_init_10127040(void);
void functions_D2NewFunctions_init_101270a0(void);
void functions_D2NewFunctions_init_10127100(void);
void functions_D2NewFunctions_init_10127160(void);
void functions_D2NewFunctions_init_101271c0(void);
void functions_D2NewFunctions_init_10127240(void);
void functions_D2NewFunctions_init_101272b0(void);
void functions_D2NewFunctions_init_10127310(void);
void functions_D2NewFunctions_init_10127370(void);
void functions_D2NewFunctions_init_10127410(void);
void functions_D2NewFunctions_init_10127480(void);
void functions_D2NewFunctions_init_101274e0(void);
void functions_D2NewFunctions_init_10127540(void);
void functions_D2NewFunctions_init_101275a0(void);
void functions_D2NewFunctions_init_10127630(void);
void functions_D2NewFunctions_init_101276f0(void);
void functions_D2NewFunctions_init_10127760(void);
void functions_D2NewFunctions_init_101277d0(void);
void functions_D2NewFunctions_init_10127820(void);
void functions_D2NewFunctions_init_10127880(void);
void functions_D2NewFunctions_init_10127910(void);
void functions_D2NewFunctions_init_10127a10(void);
void functions_D2NewFunctions_init_10127a90(void);
void functions_D2NewFunctions_init_10127b20(void);
void functions_D2NewFunctions_init_101280e0(void);
void functions_D2NewFunctions_init_10128ab0(void);
void functions_D2NewFunctions_init_101294b0(void);
void functions_D2NewFunctions_init_10129830(void);
void functions_D2NewFunctions_init_10129d60(void);
void functions_D2NewFunctions_init_10129f10(void);
void functions_D2NewFunctions_init_10129f70(void);
void functions_D2NewFunctions_init_10129fd0(void);
void functions_D2NewFunctions_init_1012a030(void);
void functions_D2NewFunctions_init_1012a090(void);
void functions_D2NewFunctions_InitPtr_D2Common_DAT_6fde9e1c_1012aa70(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd1b870_1012af40(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd1b770_1012af50(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd18be0_1012afa0(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd27238_1012bd80(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd274a8_1012bd90(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd277a8_1012bda0(void);
void functions_D2NewFunctions_InitPtr_D2Client_DAT_6fb8ea48_1012bdc0(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd27338_1012bdd0(void);
void functions_D2NewFunctions_InitPtr_D2Client_DAT_6fb8de60_1012be00(void);
void functions_D2NewFunctions_InitPtr_D2Net_DAT_6fbfa900_1012be10(void);
void functions_D2NewFunctions_InitPtr_D2Net_DAT_6fbfabd8_1012be20(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd31c3c_1012bef0(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd1a3f8_1012bf00(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd2e050_1012bf10(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd27bb8_1012bf20(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd26f0c_1012bf50(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd2f448_1012bf70(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd22ab0_1012c000(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd1a3dc_1012c030(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd1a01c_1012c040(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd1a048_1012c050(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd303b8_1012c2c0(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd307b8_1012c2d0(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd30bb8_1012c2e0(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd30bd0_1012c2f0(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd31c18_1012c330(void);
void functions_D2NewFunctions_InitPtr_D2Client_DAT_6fb84390_1012ca60(void);
void functions_D2NewFunctions_InitPtr_D2Client_DAT_6fb84290_1012ca70(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd2da44_1012e570(void);
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd2d970_102a91f0_1012e590(void);
void functions_D2NewFunctions_init_1012e9e0(void);
void functions_D2NewFunctions_init_1012ea00(void);
void functions_D2NewFunctions_init_1012ea20(void);
void functions_D2NewFunctions_102be2e0(void);
uint32_t functions_D2NewFunctions_102be2f0(void);
uint32_t functions_D2NewFunctions_102be320(void);
uint32_t functions_D2NewFunctions_102be750(void);
uint32_t functions_D2NewFunctions_102be9c0(void);
uint32_t functions_D2NewFunctions_102bea10(void);
uint32_t functions_D2NewFunctions_102bea80(void);
uint32_t functions_D2NewFunctions_102beb00(void);
uint * functions_D2NewFunctions_102beb20(uint param_1,uint param_2,byte param_3,uint *param_4,uint *param_5,uint param_6, uint param_7);
void __fastcall functions_D2NewFunctions_102becf0(int param_1,uint *param_2,uint32_t param_3,uint param_4,int *param_5);
void __thiscall functions_D2NewFunctions_102bed50(void *this,uint32_t param_1,int param_2);
int functions_D2NewFunctions_102bed80(int param_1,int param_2,uint32_t *param_3);
uint32_t functions_D2NewFunctions_102bee20(int param_1,int *param_2,int param_3,int *param_4);
uint32_t functions_D2NewFunctions_102beed0(int param_1,int *param_2,int *param_3);
uint32_t __fastcall functions_D2NewFunctions_102bef70(int param_1,int *param_2);
uint32_t __fastcall functions_D2NewFunctions_102bf1e0(uint32_t param_1,uint param_2,int *param_3,uint param_4,uint param_5, uint32_t param_6,int param_7);
uint32_t __fastcall functions_D2NewFunctions_102bf370(void *param_1,int *param_2,uint32_t param_3,uint32_t param_4,int param_5);
uint32_t functions_D2NewFunctions_102bf6cc(int reg_EBX);
uint32_t __fastcall functions_D2NewFunctions_102bf710(uint8_t *param_1,int param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,int param_6,int param_7);
void __fastcall functions_D2NewFunctions_102bf800(int param_1,uint16_t param_2,uint32_t param_3);
int __fastcall functions_D2NewFunctions_102bf830(int param_1,uint8_t *param_2);
void __fastcall functions_D2NewFunctions_102bf8a0(int param_1,int param_2,ushort param_3,uint32_t param_4,uint32_t param_5, int param_6,uint32_t param_7,int param_8,uint param_9,uint param_10,int param_11, int param_12,int param_13);
void __fastcall functions_D2NewFunctions_102bf9c0(int param_1,ushort param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5, uint32_t param_6,int param_7,uint param_8,uint param_9);
uint __fastcall functions_D2NewFunctions_102bfa90(uint32_t param_1,uint param_2);
uint32_t functions_D2NewFunctions_Hook_BNGatewayAccess_GetGatewayList_102bfab0(uint32_t param_1,uint32_t param_2,uint32_t param_3,char *param_4,int param_5, int *param_6);
void functions_D2NewFunctions_Hook_sub_6faf4b50_102bfbc0(LPOSVERSIONINFOA param_1);
uint32_t functions_D2NewFunctions_102bfbf0(int reg_ECX,int *reg_EDX);
void __fastcall functions_D2NewFunctions_102bfc50(int param_1,int param_2,int param_3);
void __fastcall functions_D2NewFunctions_102bfcf0(int param_1,int param_2);
void __fastcall functions_D2NewFunctions_102bfdf0(int param_1);
int * functions_D2NewFunctions_102bfe20(uint32_t *param_1,uint32_t reg_EBX,uint32_t reg_ESI,uint32_t reg_EDI);
int functions_D2NewFunctions_102c0540(int param_1,int param_2,int *param_3);
void __fastcall functions_D2NewFunctions_102c05c0(void *param_1,uint32_t param_2,uint32_t param_3);
uint16_t * functions_D2NewFunctions_102c05e0(int param_1);
void __fastcall functions_D2NewFunctions_102c0790(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void functions_D2NewFunctions_Hook_UNIT_SUnitDmg_6fcfc780_102c0ad0(int param_1,int param_2,int param_3,uint param_4);
void functions_D2NewFunctions_102c0b30(int *reg_ECX,int reg_EDX);
uint functions_D2NewFunctions_Hook_sub_6fcf01d0_102c0be0(int param_1,int param_2,int param_3,int *param_4,uint *param_5,int *param_6);
uint32_t functions_D2NewFunctions_Hook_D2Common_10244_102c0e50(int *param_1,int param_2,int param_3);
void __fastcall functions_D2NewFunctions_Hook_sub_6fc441b0_102c0eb0(uint32_t param_1,uint param_2,uint32_t param_3,uint param_4);
uint32_t functions_D2NewFunctions_102c0f60(int *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7);
uint32_t functions_D2NewFunctions_102c0f80(int param_1,int param_2,uint32_t param_3,uint32_t param_4);
void functions_D2NewFunctions_102c1060(int *param_1);
int __fastcall functions_D2NewFunctions_102c10e0(uint param_1,int param_2,int *param_3);
uint32_t functions_D2NewFunctions_102c1120(int *param_1,uint32_t param_2,uint32_t param_3,uint param_4);
void __fastcall functions_D2NewFunctions_102c1160(int param_1,int param_2);
uint32_t __fastcall functions_D2NewFunctions_Ptr_D2Game_6fd1a498_102c11f0(int *param_1,int param_2);
uint __fastcall functions_D2NewFunctions_102c5450(uint param_1,int param_2);
uint32_t __fastcall functions_D2NewFunctions_102c5480(uint32_t param_1,int *param_2,uint32_t param_3,int param_4,int param_5);
int * __fastcall functions_D2NewFunctions_102c5510(int param_1,int *param_2,int *param_3,uint32_t param_4,int param_5, uint32_t *param_6,uint32_t *param_7,uint32_t param_8,uint32_t param_9, uint32_t reg_EBX);
void functions_D2NewFunctions_Hook_sub_6fcb1b70_102c5700(uint param_1,int param_2);
void functions_D2NewFunctions_Hook_sub_6fcb1b70_102c5770(uint param_1,uint32_t reg_ESI);
int functions_D2NewFunctions_102c57d0(int *reg_ECX);
int __fastcall functions_D2NewFunctions_102c5880(uint32_t param_1,uint32_t param_2,int param_3,int param_4,int param_5,uint *param_6 );
uint32_t __fastcall functions_D2NewFunctions_102c5930(int param_1,uint param_2,uint param_3,int param_4,uint param_5,int *param_6);
uint32_t functions_D2NewFunctions_102c5ac0(int param_1);
uint32_t functions_D2NewFunctions_102c5b30(int param_1,int param_2,short param_3,short param_4);
void __fastcall functions_D2NewFunctions_102c5b70(int param_1,int reg_EDX);
void __fastcall functions_D2NewFunctions_102c5d10(int *param_1);
uint __fastcall functions_D2NewFunctions_102c5d70(uint *param_1);
void functions_D2NewFunctions_102c5dd0(int param_1,int *param_2,uint32_t param_3,uint32_t reg_ECX,uint32_t reg_EDX);
uint32_t functions_D2NewFunctions_102c5df0(int *param_1,int param_2,uint32_t param_3,int param_4,uint reg_ECX,uint reg_EDX);
void __fastcall functions_D2NewFunctions_Hook_sub_6fccfdb0_102c6030(int param_1,int *param_2,int param_3,uint param_4,int param_5,int param_6);
uint32_t __fastcall functions_D2NewFunctions_102c6150(void *param_1,int param_2,int param_3);
void functions_D2NewFunctions_102c6220(int *param_1,uint32_t param_2);
void functions_D2NewFunctions_Hook_ITEMS_ItemMode_6fcf9470_102c62a0(int *param_1,int param_2,uint param_3,int param_4,int param_5);
void functions_D2NewFunctions_Wraps_D2Game_SKILLS_Skills_102c62b0(uint param_1,int *param_2,uint32_t param_3,uint32_t param_4);
uint32_t functions_D2NewFunctions_102c63c0(int *param_1,int param_2,uint param_3,uint param_4,uint32_t param_5, uint32_t param_6,int param_7);
void functions_D2NewFunctions_102c66a0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void __fastcall functions_D2NewFunctions_Hook_PLAYER_PlrModes_6fc99850_102c66b0(int param_1,uint *param_2);
void functions_D2NewFunctions_Hook_GAME_Game_6fc4cbe0_102c68d0(int param_1,int param_2);
void __fastcall functions_D2NewFunctions_102c7710(int param_1,uint *param_2);
void __fastcall functions_D2NewFunctions_102c7950(int param_1,int param_2,int *param_3,int param_4,uint param_5,uint8_t param_6);
void functions_D2NewFunctions_Hook_sub_6fc8a9d0_102c7b60(uint *param_1,int param_2,int param_3,uint param_4);
void __fastcall functions_D2NewFunctions_102c7b80(int param_1,int param_2,uint param_3,int param_4);
uint32_t __fastcall functions_D2NewFunctions_102c7c00(int param_1);
uint32_t functions_D2NewFunctions_102c7c10(void);
bool functions_D2NewFunctions_102c7d70(int param_1);
uint32_t functions_D2NewFunctions_102c7d90(int param_1);
uint32_t functions_D2NewFunctions_102c7e00(uint *param_1,int param_2,int param_3,int param_4);
void functions_D2NewFunctions_102c7e40(int *param_1,int param_2);
void functions_D2NewFunctions_102c7ea0(int param_1,uint32_t param_2,int param_3);
void functions_D2NewFunctions_102c7f10(int *param_1,int param_2,int param_3);
void __fastcall functions_D2NewFunctions_Wraps_D2Game_SKILLS_Skills_102c8190(int *param_1,int param_2,uint param_3,uint param_4);
void functions_D2NewFunctions_102c83a0(int *param_1,uint param_2,int param_3);
void __fastcall functions_D2NewFunctions_102c83e0(int param_1,int *param_2,int param_3);
uint * functions_D2NewFunctions_102c8430(int param_1,uint32_t param_2,int param_3,int param_4,void *param_5, uint32_t param_6,uint *param_7);
int * functions_D2NewFunctions_102c85a0(uint32_t param_1,uint param_2,int param_3,uint32_t param_4,uint32_t param_5 ,uint32_t param_6,uint32_t param_7,int reg_ECX,uint reg_EDX);
short __fastcall functions_D2NewFunctions_102c85f0(int param_1,uint param_2);
void functions_D2NewFunctions_102c86a0(uint32_t param_1,int param_2,uint32_t param_3,int *param_4,int param_5, void *param_6);
uint64_t functions_D2NewFunctions_102c8830(uint32_t param_1,int param_2,int *param_3,int param_4,int param_5,int param_6);
int __fastcall functions_D2NewFunctions_102c89a0(uint32_t param_1,uint32_t param_2);
int * functions_D2NewFunctions_102c89d0(int param_1,int param_2,uint param_3,uint32_t param_4,uint32_t param_5, uint param_6);
void __fastcall functions_D2NewFunctions_102c8db0(uint32_t param_1,int *param_2);
uint32_t __fastcall functions_D2NewFunctions_102c8ea0(int param_1,int *param_2,int param_3);
void __fastcall functions_D2NewFunctions_102c9030(int param_1,uint *param_2,uint32_t param_3,int param_4,uint param_5);
void __fastcall functions_D2NewFunctions_102c90f0(int param_1,int *param_2,uint32_t param_3,uint param_4,uint param_5, uint32_t reg_EBX);
uint32_t __fastcall functions_D2NewFunctions_102c92c0(uint param_1,int *param_2,uint param_3);
uint64_t __fastcall functions_D2NewFunctions_102c94e0(int param_1,uint *param_2,uint32_t param_3,int param_4,uint param_5);
void functions_D2NewFunctions_Hook_sub_6fcdb3b0_102c96f0(uint param_1,int param_2,uint32_t param_3);
int functions_D2NewFunctions_102c9720(int param_1);
void __fastcall functions_D2NewFunctions_102c9750(int param_1);
int functions_D2NewFunctions_102c9860(int param_1,int *param_2,uint32_t param_3);
void functions_D2NewFunctions_102c98a0(int *param_1,uint32_t param_2);
void __fastcall functions_D2NewFunctions_102c9960(int param_1,int *param_2,uint32_t param_3,uint32_t param_4,uint param_5);
void functions_D2NewFunctions_102c99e0(int param_1,int *param_2,int param_3,int *param_4);
void functions_D2NewFunctions_102c9af0(int param_1,uint32_t param_2,int param_3,uint32_t param_4);
void functions_D2NewFunctions_102c9b50(int param_1,uint32_t param_2,uint32_t param_3);
uint32_t functions_D2NewFunctions_102c9b70(uint32_t param_1,int param_2,uint32_t param_3,void *param_4,uint32_t param_5);
uint32_t functions_D2NewFunctions_Wraps_D2Game_PLAYER_PlrModes_102c9ba0(int param_1,int param_2,int param_3,int param_4,int param_5);
void functions_D2NewFunctions_Hook_sub_6fcefbc0_102c9d80(int param_1,int *param_2,uint32_t param_3);
void __fastcall functions_D2NewFunctions_102c9db0(int param_1,int *param_2,int param_3,uint param_4,int param_5,int param_6, uint32_t param_7);
uint32_t functions_D2NewFunctions_102c9f00(int *param_1,int param_2,int param_3,uint param_4,uint param_5);
void __fastcall functions_D2NewFunctions_102ca050(void *param_1,int *param_2,int param_3,int param_4,uint param_5,uint16_t param_6, int param_7);
void functions_D2NewFunctions_102ca200(int *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,int *reg_EDX );
uint32_t __fastcall functions_D2NewFunctions_102ca2c0(void *param_1,int *param_2,uint param_3,uint param_4);
uint8_t functions_D2NewFunctions_102ca430(int param_1,int *param_2,int param_3,int param_4,uint8_t param_5,uint32_t param_6);
void functions_D2NewFunctions_102ca490(void);
void functions_D2NewFunctions_102ca4b0(int param_1,int *param_2,int param_3);
uint functions_D2NewFunctions_102ca730(uint *param_1,int param_2,int param_3,int param_4);
uint functions_D2NewFunctions_102ca7e0(int *param_1,int *param_2,uint param_3);
uint32_t functions_D2NewFunctions_102ca830(int *param_1,uint32_t reg_EBX);
uint32_t functions_D2NewFunctions_102ca8a0(uint32_t reg_EBX,uint32_t *param_2);
void functions_D2NewFunctions_102ca910(uint *param_1);
void functions_D2NewFunctions_102caab0(uint *param_1,uint32_t reg_EDX);
int * functions_D2NewFunctions_102cab30(int param_1,int *param_2,int param_3,uint32_t param_4);
int functions_D2NewFunctions_102cacf0(int param_1,uint param_2,int param_3);
void functions_D2NewFunctions_102cadb0(uint32_t *param_1,int param_2);
uint32_t __fastcall functions_D2NewFunctions_102cae50(int param_1,int param_2,int param_3);
uint32_t __fastcall functions_D2NewFunctions_102caf40(int param_1,int param_2,int param_3,uint32_t param_4,int param_5);
uint32_t __fastcall functions_D2NewFunctions_102cafe0(int param_1,int param_2,int param_3,int param_4);
int * __fastcall functions_D2NewFunctions_102cb180(int *param_1,int param_2);
int functions_D2NewFunctions_102cb2c0(uint param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,int *param_6,uint32_t param_7,uint32_t param_8);
void functions_D2NewFunctions_102cb370(uint32_t param_1,int *param_2,uint32_t param_3);
int functions_D2NewFunctions_Hook_sub_6fcdffa0_102cb3c0(int param_1,int param_2,uint32_t param_3);
void __fastcall functions_D2NewFunctions_Hook_Quests_a2q6_6fce9f60_102cb690(int param_1,int param_2);
void functions_D2NewFunctions_102cb6e0(int param_1,int param_2,uint param_3,uint param_4);
void functions_D2NewFunctions_102cb7f0(int param_1,uint *param_2);
void functions_D2NewFunctions_102cb8d0(int *param_1,int *param_2);
void functions_D2NewFunctions_102cba10(int *param_1,int *param_2);
void functions_D2NewFunctions_102cbb20(uint32_t param_1,int param_2,int param_3);
void functions_D2NewFunctions_Hook_sub_6fcdc050_102cbc40(int param_1,uint *param_2,int *param_3,int param_4,int *param_5,uint32_t param_6 );
void __fastcall sub_6fd020a0(void *param_1,int *param_2);   /* game binding -> D2Game.dll +0xe20a0, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
int __thiscall functions_D2NewFunctions_102cbcf0(void *this,int param_1);
int __fastcall functions_D2NewFunctions_102cbd10(int *param_1);
void __thiscall functions_D2NewFunctions_102cbd20(void *this,uint32_t param_1);
void __thiscall functions_D2NewFunctions_102cbd30(void *this,uint32_t param_1);
void __thiscall functions_D2NewFunctions_102cbd60(void *this,uint32_t param_1);
void __fastcall thunk_FUN_102cbe70(uint32_t *param_1);
uint8_t * __fastcall functions_D2NewFunctions_102cbda0(uint32_t param_1);
int __thiscall functions_D2NewFunctions_102cbdc0(void *this,int param_1);
uint32_t functions_D2NewFunctions_102cbde0(void *param_1);
void __fastcall functions_D2NewFunctions_102cbe00(int param_1);
void __thiscall functions_D2NewFunctions_102cbe30(void *this,int param_1);
void __fastcall functions_D2NewFunctions_102cbe70(uint32_t *param_1);
uint8_t * __fastcall functions_D2NewFunctions_102cbeb0(uint32_t param_1);
void functions_D2NewFunctions_102cbee0(void *param_1,int param_2);
void functions_D2NewFunctions_102cbf00(void);
uint __fastcall functions_D2NewFunctions_102cbf20(ushort *param_1,uint param_2,uint32_t param_3,uint param_4);
void __thiscall functions_D2NewFunctions_102cbf90(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall functions_D2NewFunctions_102cbfe0(void *param_1);
void __fastcall functions_D2NewFunctions_102cc080(int param_1);
void __cdecl functions_D2NewFunctions_102cc0c0(uint32_t param_1);
int __thiscall functions_D2NewFunctions_102cc0f0(void *this,int param_1,uint32_t param_2);
int __fastcall functions_D2NewFunctions_102cc1c0(short *param_1,uint param_2,uint32_t param_3,ushort *param_4,uint param_5);
uint8_t * functions_D2NewFunctions_102cc250(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __thiscall functions_D2NewFunctions_102cc270(void *this,int param_1,int param_2,int param_3);
uint __thiscall functions_D2NewFunctions_102cc2c0(void *this,uint param_1);
void functions_D2NewFunctions_102cc2f0(uint32_t param_1,uint32_t param_2,int param_3);
void functions_D2NewFunctions_102cc310(uint32_t param_1,uint32_t param_2,int param_3);
void functions_D2NewFunctions_102cc330(uint param_1);
void functions_D2NewFunctions_102cc350(uint32_t param_1,uint32_t param_2,int param_3);
int __fastcall functions_D2NewFunctions_102cc370(int *param_1);
uint8_t * functions_D2NewFunctions_102cc380(void);
void __fastcall functions_D2NewFunctions_102cc390(uint32_t *param_1,uint32_t *param_2,int param_3,uint32_t param_4);
int __fastcall functions_D2NewFunctions_102cc460(uint32_t param_1,uint32_t param_2,int param_3);
uint8_t * functions_D2NewFunctions_102cc4d0(void);
void __fastcall functions_D2NewFunctions_102cc4f0(uint32_t *param_1,uint32_t *param_2);
void __fastcall functions_D2NewFunctions_102cc5d0(int param_1,int param_2);
void __fastcall functions_D2NewFunctions_102cc660(void *param_1,int param_2);
uint32_t __fastcall functions_D2NewFunctions_102cc6a0(uint32_t param_1,uint32_t *param_2,uint32_t *param_3,uint8_t param_4);
void __fastcall functions_D2NewFunctions_102cc8c0(int param_1,int param_2,uint param_3,uint32_t param_4);
void __fastcall functions_D2NewFunctions_102cc980(void *param_1,int param_2);
int __fastcall functions_D2NewFunctions_102cc9f0(int param_1);
void __fastcall functions_D2NewFunctions_102cca00(int param_1,uint32_t *param_2,uint32_t *param_3);
int __fastcall functions_D2NewFunctions_102ccaa0(int param_1);
uint64_t __fastcall thunk_FUN_102ccbe0(uint32_t *param_1);
void __fastcall functions_D2NewFunctions_102ccac0(int param_1,int param_2,int param_3,int param_4);
void __thiscall functions_D2NewFunctions_102ccb30(void *this,uint32_t *param_1,uint32_t param_2);
uint64_t __fastcall functions_D2NewFunctions_102ccb80(int param_1,uint32_t *param_2,uint32_t *param_3);
uint64_t __fastcall functions_D2NewFunctions_102ccbe0(uint32_t *param_1);
uint64_t functions_D2NewFunctions_102ccc30(int *param_1,int param_2);
void __fastcall functions_D2NewFunctions_102ccdd0(int param_1,int *param_2,int param_3);
void __fastcall functions_D2NewFunctions_102ccf40(int param_1,int *param_2);
void functions_D2NewFunctions_102cd0b0(int *param_1,int param_2,int param_3);
void functions_D2NewFunctions_Hook_sub_6fc95900_102cd250(int *param_1);
uint64_t __fastcall functions_D2NewFunctions_102cd360(int *param_1,int param_2,uint32_t reg_EAX);
int __fastcall functions_D2NewFunctions_102cd380(int *param_1);
void __fastcall functions_D2NewFunctions_102cd3a0(int param_1,int param_2);
uint32_t __fastcall functions_D2NewFunctions_102cd3d0(uint param_1);
void functions_D2NewFunctions_102cdf60(int param_1,int param_2);
void __fastcall functions_D2NewFunctions_102cdf80(int param_1,int param_2);
uint32_t functions_D2NewFunctions_102cdfe0(int *param_1,int param_2,int param_3);
uint32_t functions_D2NewFunctions_102ce170(uint32_t *param_1,int param_2);
void __fastcall functions_D2NewFunctions_102ce230(int *param_1);
void __thiscall functions_D2NewFunctions_102ce250(void *this,int param_1);
void * __fastcall functions_D2NewFunctions_102ce360(void *param_1);
uint32_t functions_D2NewFunctions_102ce3e0(_Locinfo *param_1);
void __cdecl functions_D2NewFunctions_102ce430(double *param_1,double param_2,double param_3,double param_4,double param_5);
void __cdecl functions_D2NewFunctions_102ce460(double *param_1,double param_2,double param_3,double param_4,double param_5);
void __cdecl functions_D2NewFunctions_102ce490(uint8_t (*param_1) [16],double param_2,double param_3);
void functions_D2NewFunctions_102ce4b0(void);
void __fastcall functions_D2NewFunctions_102ce4e0(uint32_t param_1,uint8_t *param_2);
uint64_t __fastcall functions_D2NewFunctions_102ce500(int *param_1,int *param_2);

/* ---- _unattributed/between_functions_D2NewFunctions_and_functions_HelperFunctions_unit37.cpp ---- */
void sub_init_1012ea40(void);
void sub_init_1012ea60(void);
void sub_init_1012eb50(void);
void sub_init_1012ebb0(void);
void sub_init_1012ec10(void);
void sub_init_1012ec80(void);
void sub_init_1012ece0(void);
void sub_init_1012ed40(void);
void sub_init_1012edb0(void);
void sub_init_1012ee20(void);
void sub_init_1012ee90(void);
void sub_init_1012eef0(void);
void sub_init_1012ef50(void);
void sub_init_1012efc0(void);
void sub_init_1012f030(void);
void sub_init_1012f0a0(void);
void sub_init_1012f100(void);
void sub_init_1012f160(void);
void sub_init_1012f1c0(void);
void sub_init_1012f220(void);
void sub_init_1012f2a0(void);
void sub_init_1012f310(void);
void sub_init_1012f370(void);
void sub_init_1012f3d0(void);
void sub_init_1012f470(void);
void sub_init_1012f4e0(void);
void sub_init_1012f540(void);
void sub_init_1012f5a0(void);
void sub_init_1012f600(void);
void sub_init_1012f690(void);
void sub_init_1012f750(void);
void sub_init_1012f7c0(void);
void sub_init_1012f830(void);
void sub_init_1012f880(void);
void sub_init_1012f8e0(void);
void sub_init_1012f970(void);
void sub_init_1012fa70(void);
void sub_init_1012faf0(void);
void sub_init_1012fb80(void);
void sub_init_10130140(void);
void sub_init_10130b10(void);
void sub_init_10131510(void);
void sub_init_10131890(void);
void sub_init_10131dc0(void);
void sub_init_10131f70(void);
void sub_init_10131fd0(void);
void sub_init_10132030(void);
void sub_init_10132090(void);
void sub_init_101320f0(void);

/* ---- functions/HelperFunctions.cpp ---- */
void functions_HelperFunctions_init_10136a40(void);
void functions_HelperFunctions_init_10136a60(void);
void functions_HelperFunctions_init_10136b50(void);
void functions_HelperFunctions_init_10136bb0(void);
void functions_HelperFunctions_init_10136c10(void);
void functions_HelperFunctions_init_10136c80(void);
void functions_HelperFunctions_init_10136ce0(void);
void functions_HelperFunctions_init_10136d40(void);
void functions_HelperFunctions_init_10136db0(void);
void functions_HelperFunctions_init_10136e20(void);
void functions_HelperFunctions_init_10136e90(void);
void functions_HelperFunctions_init_10136ef0(void);
void functions_HelperFunctions_init_10136f50(void);
void functions_HelperFunctions_init_10136fc0(void);
void functions_HelperFunctions_init_10137030(void);
void functions_HelperFunctions_init_101370a0(void);
void functions_HelperFunctions_init_10137100(void);
void functions_HelperFunctions_init_10137160(void);
void functions_HelperFunctions_init_101371c0(void);
void functions_HelperFunctions_init_10137220(void);
void functions_HelperFunctions_init_101372a0(void);
void functions_HelperFunctions_init_10137310(void);
void functions_HelperFunctions_init_10137370(void);
void functions_HelperFunctions_init_101373d0(void);
void functions_HelperFunctions_init_10137470(void);
void functions_HelperFunctions_init_101374e0(void);
void functions_HelperFunctions_init_10137540(void);
void functions_HelperFunctions_init_101375a0(void);
void functions_HelperFunctions_init_10137600(void);
void functions_HelperFunctions_init_10137690(void);
void functions_HelperFunctions_init_10137750(void);
void functions_HelperFunctions_init_101377c0(void);
void functions_HelperFunctions_init_10137830(void);
void functions_HelperFunctions_init_10137880(void);
void functions_HelperFunctions_init_101378e0(void);
void functions_HelperFunctions_init_10137970(void);
void functions_HelperFunctions_init_10137a70(void);
void functions_HelperFunctions_init_10137af0(void);
void functions_HelperFunctions_init_10137b80(void);
void functions_HelperFunctions_init_10138140(void);
void functions_HelperFunctions_init_10138b10(void);
void functions_HelperFunctions_init_10139510(void);
void functions_HelperFunctions_init_10139890(void);
void functions_HelperFunctions_init_10139dc0(void);
void functions_HelperFunctions_init_10139f70(void);
void functions_HelperFunctions_init_10139fd0(void);
void functions_HelperFunctions_init_1013a030(void);
void functions_HelperFunctions_init_1013a090(void);
void functions_HelperFunctions_init_1013a0f0(void);
void functions_HelperFunctions_InitPtr_D2Common_DAT_6fde9e1c_1013aad0(void);
void functions_HelperFunctions_InitPtr_D2Common_DAT_6fde9e1c_10279cd0_1013aae0(void);
void functions_HelperFunctions_InitPtr_D2Common_DAT_6fdefa58_1013aaf0(void);
void functions_HelperFunctions_InitPtr_D2Game_DAT_6fd18be0_1013b000(void);
void functions_HelperFunctions_InitPtr_D2Game_DAT_6fd31c08_1028cba0_1013c3a0(void);
void functions_HelperFunctions_InitPtr_D2Client_DAT_6fbc995c_1013cbc0(void);
void functions_HelperFunctions_InitPtr_D2Client_DAT_6fbc9960_1013cbd0(void);
void functions_HelperFunctions_InitPtr_D2Client_DAT_6fbcbbfc_1013d230(void);
void functions_HelperFunctions_InitPtr_D2Client_DAT_6fbcc3ec_1013d2d0(void);
void functions_HelperFunctions_InitPtr_D2Client_DAT_6fbaade4_1013e050(void);
void functions_HelperFunctions_InitPtr_D2Client_DAT_6fbcc418_1013e140(void);
void functions_HelperFunctions_InitPtr_D2Client_DAT_6fbcc3e8_1013e600(void);
void functions_HelperFunctions_init_1013ea40(void);
void functions_HelperFunctions_init_1013ea60(void);
void functions_HelperFunctions_init_1013ea80(void);
uint32_t __fastcall functions_HelperFunctions_102ce520(uint param_1);
int __fastcall functions_HelperFunctions_102ce580(int param_1);
int __fastcall functions_HelperFunctions_102ce5a0(uint param_1);
int __fastcall functions_HelperFunctions_102ce5d0(uint param_1);
int __fastcall functions_HelperFunctions_102ce600(uint param_1);
int __fastcall functions_HelperFunctions_102ce630(uint param_1);
int __fastcall functions_HelperFunctions_102ce660(uint param_1);
uint64_t __fastcall functions_HelperFunctions_102ce690(uint param_1);
int __fastcall functions_HelperFunctions_102ce6d0(uint param_1);
int __fastcall functions_HelperFunctions_102ce700(int *param_1);
int __fastcall functions_HelperFunctions_102ce780(int *param_1);
bool __fastcall functions_HelperFunctions_102ce7c0(int *param_1);
uint64_t __fastcall functions_HelperFunctions_102ce840(int param_1,uint param_2);
bool __fastcall functions_HelperFunctions_102ce890(int param_1);
bool functions_HelperFunctions_102ce8b0(void);
bool functions_HelperFunctions_102ce900(void);
bool functions_HelperFunctions_102ce950(void);
bool functions_HelperFunctions_102ce9a0(void);
bool functions_HelperFunctions_102ce9f0(void);
uint32_t __fastcall functions_HelperFunctions_102cea40(int param_1);
uint32_t __fastcall functions_HelperFunctions_102cea70(int param_1);
bool __fastcall functions_HelperFunctions_102ceaa0(int param_1);
void __fastcall functions_HelperFunctions_102ceab0(int param_1,int *param_2,int *param_3);
uint32_t __fastcall functions_HelperFunctions_102ceae0(int param_1);
bool __fastcall functions_HelperFunctions_102ceb10(int param_1);
longlong __fastcall functions_HelperFunctions_102ceb40(int param_1);
int __fastcall functions_HelperFunctions_102ced80(int param_1,int param_2,int param_3,int param_4);
int __fastcall functions_HelperFunctions_102cee80(int param_1,int param_2,int param_3,int param_4);
int * __fastcall functions_HelperFunctions_102cef90(int param_1,int param_2,int param_3,int param_4);
void __fastcall functions_HelperFunctions_102cf020(uint32_t param_1,uint32_t param_2,uint param_3,int param_4,int param_5);
uint64_t functions_HelperFunctions_102cf530(void);
void __fastcall functions_HelperFunctions_102cf660(uint32_t *param_1);
uint64_t __fastcall functions_HelperFunctions_102cf710(int param_1,int param_2,int param_3);
uint32_t __fastcall functions_HelperFunctions_102cf760(int *param_1,int *param_2,int param_3);
void functions_HelperFunctions_102cf850(void);
void __fastcall functions_HelperFunctions_102cf930(int param_1);
void functions_HelperFunctions_102cf950(void);
void __cdecl guard_check_icall(void);
void __fastcall functions_HelperFunctions_102cfa30(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6,int *param_7, int *param_8,int param_9);
uint64_t __fastcall functions_HelperFunctions_102cfaf0(int param_1,int param_2,int param_3,int param_4);
void __fastcall functions_HelperFunctions_102cfb10(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6,int param_7);
uint32_t __fastcall functions_HelperFunctions_102cfbb0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7, int param_8);
uint64_t __fastcall functions_HelperFunctions_102cfc20(int *param_1,uint *param_2,uint *param_3,uint *reg_EAX);
int functions_HelperFunctions_102cfc60(uint32_t param_1,uint32_t param_2,uint32_t param_3,int param_4,int reg_ECX);
uint32_t __fastcall functions_HelperFunctions_102cfd10(int param_1,uint8_t param_2);
int __fastcall functions_HelperFunctions_102cfe70(int param_1,uint8_t param_2);
int __fastcall functions_HelperFunctions_102cff20(int param_1,int param_2,int param_3);
void __fastcall thunk_FUN_102d3320(uint32_t param_1);
void functions_HelperFunctions_102d0010(void);
uint32_t __fastcall functions_HelperFunctions_102d0020(uint32_t param_1,int param_2,int param_3);
int __fastcall functions_HelperFunctions_102d0070(int param_1,uint param_2);
uint32_t __fastcall functions_HelperFunctions_102d00b0(int *param_1);
uint32_t __fastcall functions_HelperFunctions_102d0100(int *param_1);
uint32_t __fastcall functions_HelperFunctions_102d0140(int *param_1);
uint32_t __fastcall functions_HelperFunctions_102d0180(int param_1);
uint32_t __fastcall functions_HelperFunctions_102d02d0(int param_1,int param_2,int *param_3,ushort *param_4,int param_5);
void __fastcall functions_HelperFunctions_102d0400(ushort *param_1,int param_2);
int __fastcall functions_HelperFunctions_102d0430(int param_1);
void __fastcall functions_HelperFunctions_102d0450(int param_1,int param_2);
void __fastcall functions_HelperFunctions_102d0490(int param_1,int param_2);
int __fastcall functions_HelperFunctions_102d04b0(int param_1,int param_2);
int __fastcall functions_HelperFunctions_102d0b00(int param_1);
int functions_HelperFunctions_102d0b40(void);
int __fastcall functions_HelperFunctions_102d0b80(int param_1);
uint32_t __fastcall functions_HelperFunctions_102d0ba0(int *param_1);
uint32_t __fastcall functions_HelperFunctions_102d0c20(int *param_1);
uint32_t __fastcall functions_HelperFunctions_102d0ca0(int param_1,int *param_2,uint32_t param_3);
int __fastcall functions_HelperFunctions_102d0d30(int param_1,int param_2);
void __fastcall functions_HelperFunctions_102d0dd0(int param_1,uint16_t param_2,uint *param_3,int param_4);
uint32_t __fastcall functions_HelperFunctions_102d0e50(int param_1,uint16_t param_2,uint *param_3);
void __fastcall functions_HelperFunctions_102d0ed0(uint *param_1);
void functions_HelperFunctions_102d0fa0(int reg_ECX,int reg_EDX);
uint __fastcall D2Lang_10011_102d0fb0(byte *param_1);   /* game binding -> D2Lang_10011, D2Lang.dll ordinal 10011, sigmaRE/5_game_source/D2Lang/_unattributed/code.cpp */
int __fastcall functions_HelperFunctions_102d0fc0(int param_1);
uint32_t __fastcall functions_HelperFunctions_102d0fe0(int param_1);
void functions_HelperFunctions_102d1010(int *reg_ECX,int reg_EDX);
void __fastcall functions_HelperFunctions_102d1030(uint32_t param_1,int param_2);
uint32_t __fastcall functions_HelperFunctions_102d1200(int param_1);
uint32_t functions_HelperFunctions_102d1240(int *param_1);
void functions_HelperFunctions_102d1550(int param_1,uint32_t param_2,uint32_t param_3);
int functions_HelperFunctions_102d15b0(int param_1);
uint32_t __fastcall functions_HelperFunctions_102d15e0(int param_1,int param_2);
uint32_t __fastcall functions_HelperFunctions_102d1600(int param_1,int *param_2);
int __fastcall functions_HelperFunctions_102d1660(int param_1,int *param_2,int param_3);
uint32_t __fastcall functions_HelperFunctions_102d1700(int param_1,int *param_2);
void __fastcall functions_HelperFunctions_102d1770(int param_1,int *param_2);
uint32_t __fastcall functions_HelperFunctions_102d1800(int param_1,int *param_2);
int __fastcall functions_HelperFunctions_102d18c0(int *param_1,int param_2);
uint32_t functions_HelperFunctions_102d1920(int param_1);
LPWSTR __fastcall functions_HelperFunctions_102d1960(int *param_1,int param_2);
int __fastcall functions_HelperFunctions_102d19e0(int param_1,int param_2);
uint __fastcall functions_HelperFunctions_102d1a50(int param_1,uint param_2);
uint64_t __fastcall functions_HelperFunctions_102d1a80(int param_1,uint param_2,int param_3);
int * __fastcall functions_HelperFunctions_102d1ad0(uint32_t param_1,int *param_2);
uint64_t __fastcall functions_HelperFunctions_102d1ba0(int param_1,int *param_2,int *param_3,uint32_t *param_4,int *param_5, uint32_t *param_6,int *param_7,uint32_t *param_8,int *param_9);
uint32_t __fastcall functions_HelperFunctions_102d1d90(uint32_t param_1);
uint32_t __fastcall functions_HelperFunctions_102d1f60(uint32_t param_1);
uint32_t __fastcall functions_HelperFunctions_102d2030(int param_1,int param_2,uint32_t *param_3);
uint32_t __fastcall functions_HelperFunctions_102d20e0(int param_1,int *param_2);
void __fastcall functions_HelperFunctions_102d2140(int *param_1);
uint __fastcall functions_HelperFunctions_102d21a0(int param_1,uint param_2);
int __fastcall functions_HelperFunctions_102d21b0(int param_1);
int __fastcall functions_HelperFunctions_102d21c0(uint param_1);
uint32_t * __fastcall functions_HelperFunctions_102d21f0(int param_1,uint param_2);
uint32_t __fastcall functions_HelperFunctions_102d2220(int param_1,uint param_2);
uint8_t __fastcall functions_HelperFunctions_102d2270(int param_1);
uint32_t __fastcall functions_HelperFunctions_102d22c0(int param_1,int param_2,int param_3);
uint32_t __fastcall functions_HelperFunctions_102d2430(int param_1,int param_2);
uint32_t __fastcall functions_HelperFunctions_102d2480(int param_1,int param_2,int param_3,uint32_t reg_ESI,uint32_t reg_EDI);
void __fastcall functions_HelperFunctions_102d2540(int *param_1);
uint32_t __fastcall functions_HelperFunctions_102d2720(int param_1,int param_2);
void __fastcall functions_HelperFunctions_102d2750(int *param_1,int *param_2,int *param_3);
bool __fastcall functions_HelperFunctions_102d27c0(uint32_t *param_1,int *reg_EDX);
uint32_t functions_HelperFunctions_102d2910(int reg_ECX);
uint __fastcall functions_HelperFunctions_102d2940(int param_1,int *reg_EAX);
void functions_HelperFunctions_102d29a0(void);
int __fastcall functions_HelperFunctions_102d29d0(int param_1);
bool __fastcall functions_HelperFunctions_102d2a50(void *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6);
void __fastcall functions_HelperFunctions_102d2af0(int param_1,int param_2,int param_3);
void __cdecl functions_HelperFunctions_102d2d30(uint32_t *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8, uint32_t param_9,uint32_t param_10,uint32_t param_11,uint32_t param_12, uint32_t param_13,double param_14,double param_15);
void __fastcall functions_HelperFunctions_102d2ea0(int param_1,int *param_2);
uint32_t __fastcall functions_HelperFunctions_102d3050(int *param_1);
uint8_t * __fastcall functions_HelperFunctions_102d30b0(uint8_t *param_1,uint param_2,uint32_t reg_EDI);
void __fastcall functions_HelperFunctions_102d3240(uint32_t param_1,uint32_t *param_2,int param_3);
void __fastcall functions_HelperFunctions_102d3280(int param_1,int *param_2);
uint8_t * __fastcall functions_HelperFunctions_102d3300(uint32_t param_1);
void __fastcall functions_HelperFunctions_102d3320(uint32_t param_1);
void __fastcall functions_HelperFunctions_102d3340(int *param_1);
void __fastcall functions_HelperFunctions_102d3370(int param_1);
basic_ostream<wchar_t,std::char_traits<wchar_t>_> * __thiscall functions_HelperFunctions_102d33a0(void *this,uint32_t param_1,uint param_2);
uint32_t functions_HelperFunctions_102d3470(void *param_1,uint *param_2);
uint32_t functions_HelperFunctions_102d3490(void *param_1);
void * __thiscall std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>:: _scalar_deleting_destructor_ (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1);
uint8_t * __fastcall functions_HelperFunctions_102d34e0(uint32_t param_1);
void functions_HelperFunctions_102d3510(void);
void * __fastcall functions_HelperFunctions_102d3530(void *param_1,int param_2,char *param_3);
void __fastcall functions_HelperFunctions_102d3590(basic_ostream<wchar_t,std::char_traits<wchar_t>_> *param_1,int param_2);
basic_ostream<wchar_t,std::char_traits<wchar_t>_> * __fastcall functions_HelperFunctions_102d35c0(basic_ostream<wchar_t,std::char_traits<wchar_t>_> *param_1);
int * functions_HelperFunctions_102d3864(int *reg_ESI,int reg_EDI);
void __thiscall functions_HelperFunctions_102d38a0(void *this,uint32_t param_1);
uint32_t functions_HelperFunctions_102d38c0(uint *param_1);
uint8_t * functions_HelperFunctions_102d3910(uint32_t param_1,uint32_t param_2,uint32_t param_3);
uint8_t * functions_HelperFunctions_102d3930(void);
basic_ostream<wchar_t,std::char_traits<wchar_t>_> * __fastcall functions_HelperFunctions_102d3940(basic_ostream<wchar_t,std::char_traits<wchar_t>_> *param_1, basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *param_2,uint param_3);
int * functions_HelperFunctions_102d3b16(int *reg_ESI,int reg_EDI);
void functions_HelperFunctions_102d3b50(uint32_t param_1,uint32_t *param_2);
uint8_t * functions_HelperFunctions_102d3bb0(void);
void __fastcall functions_HelperFunctions_102d3bd0(uint32_t param_1,void *param_2);
void __fastcall functions_HelperFunctions_102d3bf0(uint32_t param_1,int param_2);
int __fastcall functions_HelperFunctions_102d3c00(int param_1);
void __fastcall functions_HelperFunctions_102d3c10(int param_1);

/* ---- _unattributed/between_functions_HelperFunctions_and_functions_ItemFunctions_unit39.cpp ---- */
void sub_init_1013eaa0(void);
void sub_init_1013eac0(void);
void sub_init_1013ebb0(void);
void sub_init_1013ec10(void);
void sub_init_1013ec70(void);
void sub_init_1013ece0(void);
void sub_init_1013ed40(void);
void sub_init_1013eda0(void);
void sub_init_1013ee10(void);
void sub_init_1013ee80(void);
void sub_init_1013eef0(void);
void sub_init_1013ef50(void);
void sub_init_1013efb0(void);
void sub_init_1013f020(void);
void sub_init_1013f090(void);
void sub_init_1013f100(void);
void sub_init_1013f160(void);
void sub_init_1013f1c0(void);
void sub_init_1013f220(void);
void sub_init_1013f280(void);
void sub_init_1013f300(void);
void sub_init_1013f370(void);
void sub_init_1013f3d0(void);
void sub_init_1013f430(void);
void sub_init_1013f4d0(void);
void sub_init_1013f540(void);
void sub_init_1013f5a0(void);
void sub_init_1013f600(void);
void sub_init_1013f660(void);
void sub_init_1013f6f0(void);
void sub_init_1013f7b0(void);
void sub_init_1013f820(void);
void sub_init_1013f890(void);
void sub_init_1013f8e0(void);
void sub_init_1013f940(void);
void sub_init_1013f9d0(void);
void sub_init_1013fad0(void);
void sub_init_1013fb50(void);
void sub_init_1013fbe0(void);
void sub_init_101401a0(void);
void sub_init_10140b70(void);
void sub_init_10141570(void);
void sub_init_101418f0(void);
void sub_init_10141e20(void);
void sub_init_10141fd0(void);
void sub_init_10142030(void);
void sub_init_10142090(void);
void sub_init_101420f0(void);
void sub_init_10142150(void);
void sub_InitPtr_D2Common_DAT_6fdefa5c_10145fd0(void);
int * __fastcall sub_102d3f60(int param_1);
int __fastcall sub_102d4010(uint param_1,uint param_2);

/* ---- functions/ItemFunctions.cpp ---- */
void functions_ItemFunctions_init_10146aa0(void);
void functions_ItemFunctions_init_10146ac0(void);
void functions_ItemFunctions_init_10146bb0(void);
void functions_ItemFunctions_init_10146c10(void);
void functions_ItemFunctions_init_10146c70(void);
void functions_ItemFunctions_init_10146ce0(void);
void functions_ItemFunctions_init_10146d40(void);
void functions_ItemFunctions_init_10146da0(void);
void functions_ItemFunctions_init_10146e10(void);
void functions_ItemFunctions_init_10146e80(void);
void functions_ItemFunctions_init_10146ef0(void);
void functions_ItemFunctions_init_10146f50(void);
void functions_ItemFunctions_init_10146fb0(void);
void functions_ItemFunctions_init_10147020(void);
void functions_ItemFunctions_init_10147090(void);
void functions_ItemFunctions_init_10147100(void);
void functions_ItemFunctions_init_10147160(void);
void functions_ItemFunctions_init_101471c0(void);
void functions_ItemFunctions_init_10147220(void);
void functions_ItemFunctions_init_10147280(void);
void functions_ItemFunctions_init_10147300(void);
void functions_ItemFunctions_init_10147370(void);
void functions_ItemFunctions_init_101473d0(void);
void functions_ItemFunctions_init_10147430(void);
void functions_ItemFunctions_init_101474d0(void);
void functions_ItemFunctions_init_10147540(void);
void functions_ItemFunctions_init_101475a0(void);
void functions_ItemFunctions_init_10147600(void);
void functions_ItemFunctions_init_10147660(void);
void functions_ItemFunctions_init_101476f0(void);
void functions_ItemFunctions_init_101477b0(void);
void functions_ItemFunctions_init_10147820(void);
void functions_ItemFunctions_init_10147890(void);
void functions_ItemFunctions_init_101478e0(void);
void functions_ItemFunctions_init_10147940(void);
void functions_ItemFunctions_init_101479d0(void);
void functions_ItemFunctions_init_10147ad0(void);
void functions_ItemFunctions_init_10147b50(void);
void functions_ItemFunctions_init_10147be0(void);
void functions_ItemFunctions_init_101481a0(void);
void functions_ItemFunctions_init_10148b70(void);
void functions_ItemFunctions_init_10149570(void);
void functions_ItemFunctions_init_101498f0(void);
void functions_ItemFunctions_init_10149e20(void);
void functions_ItemFunctions_init_10149fd0(void);
void functions_ItemFunctions_init_1014a030(void);
void functions_ItemFunctions_init_1014a090(void);
void functions_ItemFunctions_init_1014a0f0(void);
void functions_ItemFunctions_init_1014a150(void);
void functions_ItemFunctions_InitPtr_D2Common_DAT_6fde9e1c_1014ab30(void);
void functions_ItemFunctions_InitPtr_D2Common_DAT_6fde9e1c_10279cd0_1014ab40(void);
void functions_ItemFunctions_InitPtr_D2Common_DAT_6fdefa58_1014ab50(void);
void functions_ItemFunctions_init_1014eaa0(void);
uint32_t __fastcall functions_ItemFunctions_102d4820(int *param_1,int *param_2,int param_3,uint32_t param_4,int *param_5,uint param_6);
uint32_t __fastcall functions_ItemFunctions_102d5650(int param_1,int param_2,int param_3,uint32_t param_4,uint32_t param_5, uint32_t param_6,uint param_7);
int functions_ItemFunctions_Hook_sub_6fc35240_102d57c0(int *param_1);
void functions_ItemFunctions_102d5840(int param_1,uint param_2,int param_3,uint param_4);
void __fastcall functions_ItemFunctions_102d5870(int param_1,int param_2,int param_3,int param_4,uint32_t param_5,uint32_t param_6, uint32_t param_7);
int __fastcall functions_ItemFunctions_102d5980(int param_1,int *param_2,uint param_3,int param_4,int param_5,uint32_t param_6, uint32_t param_7);
void functions_ItemFunctions_102d5b80(int param_1,int param_2);
void functions_ItemFunctions_102d5bd0(void);
void functions_ItemFunctions_Hook_sub_6fcdf2e0_102d5bf0(int param_1,int param_2,int param_3,int param_4);
char * functions_ItemFunctions_102d5e80(int param_1,int param_2,void *param_3,char *param_4,uint32_t reg_EBX);
uint32_t functions_ItemFunctions_102d67f0(int param_1,int param_2,int param_3);
uint32_t functions_ItemFunctions_102d68a0(int param_1,int param_2,int param_3,int param_4,int param_5);
void functions_ItemFunctions_Hook_sub_6fcde640_102d69d0(int *param_1,uint param_2);
int functions_ItemFunctions_102d6ba0(int *param_1,int param_2,int *param_3);
int * functions_ItemFunctions_102d6c60(int param_1,int *param_2,int param_3,uint32_t param_4,int param_5,int param_6, uint32_t reg_EDI);
uint functions_ItemFunctions_102d6d00(int param_1,int param_2,int param_3);
uint32_t functions_ItemFunctions_102d6df0(int param_1,int param_2,int param_3,int param_4,int param_5);
void functions_ItemFunctions_102d6f30(int param_1,int param_2,uint32_t param_3,uint param_4,uint32_t param_5);
uint32_t __fastcall functions_ItemFunctions_102d6f90(int *param_1);
uint32_t functions_ItemFunctions_102d70a0(int param_1,uint32_t param_2,void *param_3,uint32_t param_4,uint32_t param_5, uint32_t param_6,uint32_t param_7);
uint32_t functions_ItemFunctions_102d70d0(uint32_t param_1,uint32_t param_2,int param_3,uint32_t param_4);
void functions_ItemFunctions_102d7120(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void functions_ItemFunctions_Hook_sub_6fc303c0_102d7170(int param_1,int param_2,uint param_3,uint param_4,int param_5,uint param_6, int param_7);
uint32_t functions_ItemFunctions_Hook_sub_6fc341e0_102d7210(int param_1,int param_2);
uint32_t functions_ItemFunctions_Hook_sub_6fc30a20_102d7270(int param_1,int param_2,int param_3);
void __fastcall functions_ItemFunctions_102d7360(int *param_1,uint32_t param_2);
uint __fastcall functions_ItemFunctions_102d75b0(int param_1,int param_2,int param_3,uint reg_EAX);
void __fastcall functions_ItemFunctions_102d7650(int param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6, uint32_t reg_EAX);
void functions_ItemFunctions_102d7830(int *param_1,uint reg_ECX,int reg_EDX);
int __fastcall functions_ItemFunctions_102d7870(int *param_1);
int __fastcall functions_ItemFunctions_102d78c0(int param_1,int param_2);
void __thiscall functions_ItemFunctions_102d7910(void *this,int *param_2,int param_3,uint32_t reg_EAX,int reg_EDX);
longlong __fastcall functions_ItemFunctions_102d7970(int param_1,int param_2);
void functions_ItemFunctions_102d7990(int *param_1,uint *param_2,int param_3,int param_4,uint32_t reg_EDI);
int functions_ItemFunctions_102d8b50(int param_1,uint32_t param_2,int param_3,int *reg_ECX,uint reg_EDX);
uint32_t * __fastcall functions_ItemFunctions_Wraps_D2Common_Stats_StatsEx_102d8bc0(int param_1,int param_2,uint param_3);
int functions_ItemFunctions_102d8c40(int *param_1,uint param_2,int param_3,int param_4,uint32_t *param_5,uint param_6);
int functions_ItemFunctions_102da4d0(uint param_1);
int functions_ItemFunctions_102da500(int param_1);
uint32_t * functions_ItemFunctions_102da530(void);
int __fastcall functions_ItemFunctions_102da580(int *param_1);
void functions_ItemFunctions_102da590(uint32_t param_1);
void __thiscall functions_ItemFunctions_102da5b0(void *this,uint32_t param_1);
void __thiscall functions_ItemFunctions_102da5e0(void *this,uint32_t param_1);
int __fastcall functions_ItemFunctions_102da610(int *param_1);
void functions_ItemFunctions_102da660(int param_1,int param_2);
uint32_t * functions_ItemFunctions_102da680(void);
void functions_ItemFunctions_102da690(int param_1,int param_2);
int __thiscall functions_ItemFunctions_102da720(void *this,int param_1,uint32_t param_2);
void __fastcall functions_ItemFunctions_102da7e0(int param_1,int param_2);
void __fastcall functions_ItemFunctions_102da810(uint32_t *param_1);
uint32_t * functions_ItemFunctions_102da820(void);
void functions_ItemFunctions_102da850(uint param_1);
void functions_ItemFunctions_102da870(uint param_1);
void functions_ItemFunctions_102da8a0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall functions_ItemFunctions_102da8d0(uint32_t param_1,int *param_2);
int * __fastcall functions_ItemFunctions_102da8e0(int *param_1);
uint32_t __fastcall functions_ItemFunctions_102da8f0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __fastcall functions_ItemFunctions_102da990(int *param_1);
void __thiscall functions_ItemFunctions_102da9a0(void *this,uint32_t param_1);
void __cdecl functions_ItemFunctions_102da9d0(uint32_t param_1);
uint32_t * __thiscall functions_ItemFunctions_102daa00(void *this,int *param_1);
void __fastcall functions_ItemFunctions_102daa90(int param_1,int param_2,uint32_t reg_EAX);
uint32_t __fastcall functions_ItemFunctions_102daae0(int *param_1,uint *param_2,uint *param_3,uint32_t param_4);
int __fastcall functions_ItemFunctions_102dab80(uint32_t *param_1,int *param_2,int *param_3,uint param_4,uint param_5,int param_6);
uint32_t __fastcall functions_ItemFunctions_102dabe0(int param_1,int param_2,int param_3,int param_4);
uint32_t __fastcall functions_ItemFunctions_102dac30(uint32_t *param_1,int *param_2,int *param_3,uint32_t param_4,uint32_t param_5, int param_6,int param_7);
uint32_t * __fastcall functions_ItemFunctions_102dae80(uint32_t *param_1);
void __fastcall thunk_FUN_102de4f0(uint32_t param_1);

/* ---- _unattributed/between_functions_ItemFunctions_and_functions_SaveFunctions_unit41.cpp ---- */
void sub_init_1014f530(void);
void sub_init_1014f550(void);
void sub_init_1014f640(void);
void sub_init_1014f6a0(void);
void sub_init_1014f700(void);
void sub_init_1014f770(void);
void sub_init_1014f7d0(void);
void sub_init_1014f830(void);
void sub_init_1014f8a0(void);
void sub_init_1014f910(void);
void sub_init_1014f980(void);
void sub_init_1014f9e0(void);
void sub_init_1014fa40(void);
void sub_init_1014fab0(void);
void sub_init_1014fb20(void);
void sub_init_1014fb90(void);
void sub_init_1014fbf0(void);
void sub_init_1014fc50(void);
void sub_init_1014fcb0(void);
void sub_init_1014fd10(void);
void sub_init_1014fd90(void);
void sub_init_1014fe00(void);
void sub_init_1014fe60(void);
void sub_init_1014fec0(void);
void sub_init_1014ff60(void);
void sub_init_1014ffd0(void);
void sub_init_10150030(void);
void sub_init_10150090(void);
void sub_init_101500f0(void);
void sub_init_10150180(void);
void sub_init_10150240(void);
void sub_init_101502b0(void);
void sub_init_10150320(void);
void sub_init_10150370(void);
void sub_init_101503d0(void);
void sub_init_10150460(void);
void sub_init_10150560(void);
void sub_init_101505e0(void);
void sub_init_10150670(void);
void sub_init_10150c30(void);
void sub_init_10151600(void);
void sub_init_10152000(void);
void sub_init_10152380(void);
void sub_init_101528b0(void);
void sub_init_10152a60(void);
void sub_init_10152ac0(void);
void sub_init_10152b20(void);
void sub_init_10152b80(void);
void sub_init_10152be0(void);
void sub_InitPtr_D2Common_DAT_6fde9e1c_101535c0(void);
uint32_t __fastcall sub_102daeb0(int param_1,int *param_2,int *param_3);
longlong __fastcall sub_102daf10(int param_1,int param_2,int param_3,uint param_4);
int __fastcall sub_102db010(int param_1,uint param_2,int param_3,int *param_4,int *param_5);
int * __fastcall sub_102db070(int param_1,uint param_2,int param_3,int param_4,uint32_t param_5,int param_6);
int * __fastcall sub_102db0c0(int param_1,uint param_2,uint param_3,uint param_4,uint32_t param_5, uint32_t param_6,int param_7);
int * __fastcall sub_102db160(int param_1,uint32_t param_2,uint param_3,int *param_4,int *param_5, uint32_t param_6,uint32_t param_7,uint32_t param_8);
int * __fastcall sub_102db1e0(int param_1,uint param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5, uint32_t param_6,int param_7,int param_8);
int * __fastcall sub_102db2f0(int param_1,int *param_2,int *param_3,uint param_4,uint param_5,int param_6);
int __fastcall sub_102db500(int param_1,int param_2,uint param_3,int param_4);
int __fastcall sub_102db680(int *param_1,int *param_2,int param_3,int param_4,int param_5,uint32_t reg_EDI);
int __fastcall sub_102dba00(int param_1,uint param_2);
uint32_t __fastcall sub_102dba30(int param_1,uint param_2);
uint32_t __fastcall sub_102dba50(int param_1,int *param_2,int param_3,int param_4);
void __fastcall sub_102dbfe0(int param_1,int *param_2,int param_3);
void sub_102dc050(uint32_t param_1,int *param_2,int param_3);
uint32_t __fastcall sub_102dc220(int param_1);
void __fastcall sub_102dc520(int param_1,uint param_2,int param_3);
uint32_t __fastcall sub_102dc9e0(int param_1,int param_2,int param_3);
int * sub_102dcfb0(int param_1,int param_2,int param_3,uint32_t reg_EBX);
int * __thiscall sub_102de3f0(void *this,int param_1);
void __thiscall sub_102de480(void *this,uint32_t param_1);
void __fastcall thunk_FUN_102de5f0(uint32_t param_1);
void sub_102de4a0(uint32_t param_1);
void __thiscall sub_102de4c0(void *this,uint32_t param_1);
void __fastcall thunk_FUN_102de610(void *param_1);
bool __fastcall thunk_FUN_102de630(uint32_t param_1);
void __fastcall sub_102de4f0(uint32_t param_1);
uint32_t * __fastcall sub_102de520(uint32_t *param_1);
void __fastcall sub_102de550(uint32_t param_1);
void __thiscall sub_102de5e0(void *this,uint32_t param_1);
void __fastcall sub_102de5f0(uint32_t param_1);
void __fastcall sub_102de610(void *param_1);
bool __fastcall sub_102de630(uint32_t param_1);
void sub_102de640(uint32_t param_1);
int __fastcall thunk_FUN_102de760(uint32_t *param_1);
int __fastcall sub_102de670(uint32_t param_1);
uint64_t __fastcall sub_102de680(uint32_t param_1);
uint64_t __fastcall sub_102de690(uint32_t param_1);
uint64_t __fastcall sub_102de6a0(uint32_t param_1);
void __thiscall sub_102de6b0(void *this,uint param_1);
void __fastcall sub_102de6d0(uint32_t param_1);
uint32_t __thiscall sub_102de6f0(void *this,void *param_1);
void sub_102de720(void *param_1);
uint32_t __thiscall sub_102de740(void *this,uint32_t param_1,uint32_t param_2);
int __fastcall sub_102de760(uint32_t *param_1);
uint32_t * __thiscall sub_102de780(void *this,uint32_t param_1,uint32_t param_2);
uint __thiscall sub_102de7a0(void *this,uint param_1);
void __fastcall sub_102de7c0(byte *param_1,void *param_2);

/* ---- _unattributed/between_functions_ItemFunctions_and_functions_SaveFunctions_unit42.cpp ---- */
void sub_init_10157530(void);
void sub_init_10157550(void);
void sub_init_10157640(void);
void sub_init_101576a0(void);
void sub_init_10157700(void);
void sub_init_10157770(void);
void sub_init_101577d0(void);
void sub_init_10157830(void);
void sub_init_101578a0(void);
void sub_init_10157910(void);
void sub_init_10157980(void);
void sub_init_101579e0(void);
void sub_init_10157a40(void);
void sub_init_10157ab0(void);
void sub_init_10157b20(void);
void sub_init_10157b90(void);
void sub_init_10157bf0(void);
void sub_init_10157c50(void);
void sub_init_10157cb0(void);
void sub_init_10157d10(void);
void sub_init_10157d90(void);
void sub_init_10157e00(void);
void sub_init_10157e60(void);
void sub_init_10157ec0(void);
void sub_init_10157f60(void);
void sub_init_10157fd0(void);
void sub_init_10158030(void);
void sub_init_10158090(void);
void sub_init_101580f0(void);
void sub_init_10158180(void);
void sub_init_10158240(void);
void sub_init_101582b0(void);
void sub_init_10158320(void);
void sub_init_10158370(void);
void sub_init_101583d0(void);
void sub_init_10158460(void);
void sub_init_10158560(void);
void sub_init_101585e0(void);
void sub_init_10158670(void);
void sub_init_10158c30(void);
void sub_init_10159600(void);
void sub_init_1015a000(void);
void sub_init_1015a380(void);
void sub_init_1015a8b0(void);
void sub_init_1015aa60(void);
void sub_init_1015aac0(void);
void sub_init_1015ab20(void);
void sub_init_1015ab80(void);
void sub_init_1015abe0(void);

/* ---- _unattributed/between_functions_ItemFunctions_and_functions_SaveFunctions_unit43.cpp ---- */
void sub_init_1015f530(void);
void sub_init_1015f550(void);
void sub_init_1015f640(void);
void sub_init_1015f6a0(void);
void sub_init_1015f700(void);
void sub_init_1015f770(void);
void sub_init_1015f7d0(void);
void sub_init_1015f830(void);
void sub_init_1015f8a0(void);
void sub_init_1015f910(void);
void sub_init_1015f980(void);
void sub_init_1015f9e0(void);
void sub_init_1015fa40(void);
void sub_init_1015fab0(void);
void sub_init_1015fb20(void);
void sub_init_1015fb90(void);
void sub_init_1015fbf0(void);
void sub_init_1015fc50(void);
void sub_init_1015fcb0(void);
void sub_init_1015fd10(void);
void sub_init_1015fd90(void);
void sub_init_1015fe00(void);
void sub_init_1015fe60(void);
void sub_init_1015fec0(void);
void sub_init_1015ff60(void);
void sub_init_1015ffd0(void);
void sub_init_10160030(void);
void sub_init_10160090(void);
void sub_init_101600f0(void);
void sub_init_10160180(void);
void sub_init_10160240(void);
void sub_init_101602b0(void);
void sub_init_10160320(void);
void sub_init_10160370(void);
void sub_init_101603d0(void);
void sub_init_10160460(void);
void sub_init_10160560(void);
void sub_init_101605e0(void);
void sub_init_10160670(void);
void sub_init_10160c30(void);
void sub_init_10161600(void);
void sub_init_10162000(void);
void sub_init_10162380(void);
void sub_init_101628b0(void);
void sub_init_10162a60(void);
void sub_init_10162ac0(void);
void sub_init_10162b20(void);
void sub_init_10162b80(void);
void sub_init_10162be0(void);

/* ---- _unattributed/between_functions_ItemFunctions_and_functions_SaveFunctions_unit44.cpp ---- */
void sub_init_10167530(void);
void sub_init_10167550(void);
void sub_init_10167640(void);
void sub_init_101676a0(void);
void sub_init_10167700(void);
void sub_init_10167770(void);
void sub_init_101677d0(void);
void sub_init_10167830(void);
void sub_init_101678a0(void);
void sub_init_10167910(void);
void sub_init_10167980(void);
void sub_init_101679e0(void);
void sub_init_10167a40(void);
void sub_init_10167ab0(void);
void sub_init_10167b20(void);
void sub_init_10167b90(void);
void sub_init_10167bf0(void);
void sub_init_10167c50(void);
void sub_init_10167cb0(void);
void sub_init_10167d10(void);
void sub_init_10167d90(void);
void sub_init_10167e00(void);
void sub_init_10167e60(void);
void sub_init_10167ec0(void);
void sub_init_10167f60(void);
void sub_init_10167fd0(void);
void sub_init_10168030(void);
void sub_init_10168090(void);
void sub_init_101680f0(void);
void sub_init_10168180(void);
void sub_init_10168240(void);
void sub_init_101682b0(void);
void sub_init_10168320(void);
void sub_init_10168370(void);
void sub_init_101683d0(void);
void sub_init_10168460(void);
void sub_init_10168560(void);
void sub_init_101685e0(void);
void sub_init_10168670(void);
void sub_init_10168c30(void);
void sub_init_10169600(void);
void sub_init_1016a000(void);
void sub_init_1016a380(void);
void sub_init_1016a8b0(void);
void sub_init_1016aa60(void);
void sub_init_1016aac0(void);
void sub_init_1016ab20(void);
void sub_init_1016ab80(void);
void sub_init_1016abe0(void);
void sub_InitPtr_D2Common_DAT_6fde9e1c_10279cd0_1016b5d0(void);
void sub_InitPtr_D2Client_DAT_6fbba608_1016c990(void);
void sub_InitPtr_D2Multi_DAT_6fa08f18_1016cf20(void);
void sub_InitPtr_D2Multi_DAT_6fa0a0c8_1016cf60(void);
void sub_InitPtr_D2Multi_DAT_6fa0a0d0_1016cf70(void);
void sub_InitPtr_D2Client_DAT_6fbcbbfc_1016dd20(void);
void sub_InitPtr_D2MCPClient_DAT_6fa2aeb4_1016e130(void);
void sub_InitPtr_D2MCPClient_DAT_6fa2b028_1016e140(void);
void sub_InitPtr_D2MCPClient_DAT_6fa2aed8_1016e150(void);
void sub_InitPtr_D2MCPClient_DAT_6fa2b1c8_1016e160(void);
void sub_InitPtr_Bnclient_DAT_6ff3e8d8_1016e180(void);
void sub_InitPtr_Bnclient_DAT_6ff3e8e0_1016e190(void);
void sub_InitPtr_Bnclient_DAT_6ff3e8e4_1016e1a0(void);
void sub_InitPtr_Bnclient_DAT_6ff3f1dc_1016e1b0(void);
void sub_InitPtr_Bnclient_DAT_6ff3f1f4_1016e1c0(void);
void sub_InitPtr_Bnclient_DAT_6ff3f930_1016e1d0(void);
void sub_InitPtr_Bnclient_DAT_6ff3f654_1016e1e0(void);
void sub_InitPtr_D2Client_DAT_6fbcc4d4_1016ecc0(void);
void sub_init_1016f530(void);
void sub_init_1016f550(void);
void sub_init_1016f570(void);
void __fastcall sub_102dedb0(uint param_1,uint32_t reg_ESI,uint32_t reg_EDI);
void __fastcall sub_102defd0(int param_1);
void __fastcall sub_102df010(int param_1);
void __fastcall sub_102df050(int param_1);
void __fastcall sub_102df090(int param_1);
void __fastcall sub_102df0c0(int param_1);
void sub_102df110(void);
void __fastcall sub_102df240(int param_1);
uint32_t __fastcall sub_Ptr_D2Game_6fd1a120_102df280(uint param_1,int *param_2,uint param_3,int param_4);
int __fastcall sub_Ptr_D2Game_6fd1a128_102e1970(int param_1,int param_2,int param_3,uint32_t param_4);
void sub_102e1ac0(uint32_t param_1);
uint32_t __fastcall sub_Ptr_D2Game_6fd1a138_102e1ad0(void *param_1,int param_2,int param_3,int param_4);
uint32_t __fastcall sub_Ptr_D2Game_6fd1a140_102e1c70(uint32_t param_1,uint *param_2,uint32_t param_3,int param_4);
int __fastcall sub_Ptr_D2Game_6fd1a148_102e1d00(int param_1,uint *param_2,void *param_3,uint32_t param_4,int reg_EDI);
uint32_t __fastcall sub_Ptr_D2Game_6fd1a150_102e2170(int param_1,uint *param_2,int param_3,uint32_t param_4);
uint32_t __fastcall sub_Ptr_D2Game_6fd1a158_102e2200(int param_1,uint *param_2,int param_3,uint32_t param_4);
uint32_t __fastcall sub_Ptr_D2Game_6fd1a160_102e2280(int param_1,uint *param_2,int param_3,uint32_t param_4);
uint32_t __fastcall sub_Ptr_D2Game_6fd1a168_102e2310(int param_1,uint *param_2,int param_3,uint32_t param_4);
uint32_t __fastcall sub_Ptr_D2Game_6fd1a170_102e23a0(uint32_t param_1,uint *param_2,uint32_t param_3,uint32_t param_4);
uint32_t __fastcall sub_Ptr_D2Game_6fd1a188_102e2440(void *param_1,int param_2,int param_3);
uint32_t __fastcall sub_Ptr_D2Game_6fd1a1b8_102e29e0(uint32_t param_1,uint *param_2,uint32_t param_3,uint32_t param_4);
void sub_Ptr_D2Game_6fd1a1e8_102e2a50(uint param_1,int param_2,uint reg_ECX,uint reg_EDX);
uint32_t __fastcall sub_Ptr_D2Game_6fd1a210_102e2a60(uint32_t param_1,uint *param_2,uint32_t param_3,uint32_t param_4);
int __fastcall sub_Ptr_D2Game_6fd1a250_102e2ae0(int param_1,int *param_2,int param_3,int param_4);
uint32_t __fastcall sub_Ptr_D2Game_6fd1a280_102e2c70(void *param_1,int *param_2,uint32_t param_3,int param_4);
uint32_t __fastcall sub_Ptr_D2Game_6fd1a288_102e2f80(int param_1,int param_2,int param_3,int param_4);
uint32_t __fastcall sub_Ptr_D2Game_6fd1a298_102e35d0(uint param_1,int *param_2,uint32_t param_3,uint32_t param_4);
uint32_t __fastcall sub_Ptr_D2Game_6fd1a2d8_102e37f0(int param_1,int param_2,int param_3,int param_4,uint32_t reg_ESI,uint32_t reg_EDI);
uint32_t __fastcall sub_Ptr_D2Game_6fd1a320_102e40b0(uint32_t param_1,int param_2,int param_3);
uint32_t __fastcall sub_Ptr_D2Game_6fd1a330_102e40f0(int param_1,int param_2,int param_3);
uint32_t __fastcall sub_Ptr_D2Game_6fd1a348_102e41d0(uint32_t param_1,int param_2);
uint32_t __fastcall sub_Ptr_D2Game_6fd1a358_102e41f0(uint32_t param_1,int *param_2,int param_3);
uint32_t __fastcall sub_Ptr_D2Game_6fd1a378_102e4250(int param_1,int *param_2,uint32_t param_3,uint32_t param_4);
uint32_t __fastcall sub_Ptr_D2Game_6fd1a380_102e4290(int param_1,uint *param_2,uint32_t param_3,uint32_t param_4);
uint32_t __fastcall sub_Ptr_D2Game_6fd1a290_102e4330(uint32_t param_1,int param_2,int param_3);
void sub_102e43a0(int param_1);
void sub_102e4480(uint16_t param_1,uint8_t param_2);
void sub_102e4540(char *param_1,uint16_t param_2);
uint64_t sub_102e46c0(void);
void sub_102e4b20(void);
void __fastcall sub_102e4e90(int param_1);
void sub_102e4ec0(void);
uint32_t sub_102e4f20(void);
uint64_t sub_102e5480(uint32_t reg_EBX);
uint32_t sub_Hook_sub_6fcf01d0_102e5720(int *param_1,int *param_2,short param_3,uint param_4);
uint32_t __fastcall sub_102e6350(int param_1,int reg_EAX);
void sub_102e6390(int *param_1,uint32_t param_2);
void __fastcall sub_102e6880(int param_1);
int sub_102e6cb0(char *param_1);
uint32_t sub_102e6cf0(void *param_1,char *param_2);
uint32_t sub_102e6d10(void *param_1);
void * __thiscall sub_102e6d30(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
byte __fastcall sub_102e6d70(void *param_1,int param_2);
uint32_t * __fastcall sub_102e6d80(uint32_t *param_1,byte *param_2,uint32_t param_3);
void * __fastcall sub_102e6dd0(void *param_1,void *param_2);
void * __fastcall sub_102e6de0(void *param_1,void *param_2);
uint32_t * __fastcall sub_102e6df0(uint32_t *param_1);
uint32_t sub_102e6e30(char *param_1);
void __thiscall sub_102e6e80(void *this,uint32_t param_1);
void __fastcall sub_102e6f50(uint32_t param_1,void *param_2,byte *param_3);
void __thiscall sub_102e6f70(void *this,char *param_1,char *param_2);
void __fastcall sub_102e6fb0(uint32_t *param_1);
uint32_t * sub_102e6fc0(uint32_t *param_1,uint32_t *reg_EAX);
uint64_t __fastcall thunk_FUN_102e7010(uint32_t *param_1);
uint64_t __fastcall sub_102e7010(uint32_t *param_1);
void __thiscall sub_102e7040(void *this,char *param_1,char *param_2);
uint32_t __fastcall sub_102e70c0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
uint32_t sub_102e7140(void);
void * __fastcall sub_102e71f0(uint32_t param_1,void *param_2,byte *param_3);
void __fastcall sub_102e7250(uint32_t *param_1);
void * __thiscall sub_102e7260(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
int __fastcall sub_102e72a0(int param_1);
int __fastcall sub_102e72b0(int param_1);
void __fastcall sub_102e72c0(uint32_t *param_1,uint8_t *param_2,uint8_t *param_3);
uint64_t sub_102e72f0(void);
void * __thiscall sub_102e7320(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void * __thiscall sub_102e7360(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void * __thiscall sub_102e73a0(void *this,uint32_t param_1,uint32_t param_2);
void * __thiscall sub_102e73d0(void *this,uint32_t param_1);
void * __thiscall sub_102e73f0(void *this,uint32_t param_1);

/* ---- _unattributed/between_functions_ItemFunctions_and_functions_SaveFunctions_unit45.cpp ---- */
void sub_init_1016f590(void);
void sub_init_1016f5b0(void);
void sub_init_1016f6a0(void);
void sub_init_1016f700(void);
void sub_init_1016f760(void);
void sub_init_1016f7d0(void);
void sub_init_1016f830(void);
void sub_init_1016f890(void);
void sub_init_1016f900(void);
void sub_init_1016f970(void);
void sub_init_1016f9e0(void);
void sub_init_1016fa40(void);
void sub_init_1016faa0(void);
void sub_init_1016fb10(void);
void sub_init_1016fb80(void);
void sub_init_1016fbf0(void);
void sub_init_1016fc50(void);
void sub_init_1016fcb0(void);
void sub_init_1016fd10(void);
void sub_init_1016fd70(void);
void sub_init_1016fdf0(void);
void sub_init_1016fe60(void);
void sub_init_1016fec0(void);
void sub_init_1016ff20(void);
void sub_init_1016ffc0(void);
void sub_init_10170030(void);
void sub_init_10170090(void);
void sub_init_101700f0(void);
void sub_init_10170150(void);
void sub_init_101701e0(void);
void sub_init_101702a0(void);
void sub_init_10170310(void);
void sub_init_10170380(void);
void sub_init_101703d0(void);
void sub_init_10170430(void);
void sub_init_101704c0(void);
void sub_init_101705c0(void);
void sub_init_10170640(void);
void sub_init_101706d0(void);
void sub_init_10170c90(void);
void sub_init_10171660(void);
void sub_init_10172060(void);
void sub_init_101723e0(void);
void sub_init_10172910(void);
void sub_init_10172ac0(void);
void sub_init_10172b20(void);
void sub_init_10172b80(void);
void sub_init_10172be0(void);
void sub_init_10172c40(void);
void sub_init_10177590(void);
void sub_init_101775b0(void);
uint32_t __fastcall sub_102e7420(byte param_1);
uint32_t * __fastcall sub_102e7450(uint32_t *param_1,void *param_2);
void __fastcall sub_102e7620(uint32_t param_1,int param_2);
void __fastcall sub_102e7660(char *param_1,int param_2);
uint32_t __fastcall sub_102e7710(char *param_1,int param_2);
void __fastcall sub_102e7830(void *param_1,void *param_2);
bool sub_102e78c0(char param_1,char param_2);
uint32_t * __fastcall sub_102e78f0(uint32_t *param_1);
void * __fastcall sub_IntegrityCheck_ModuleScan_102e79d0(void *param_1);
void sub_102e7db0(byte param_1);
void * __fastcall sub_IntegrityCheck_ModuleScan_102e7dd0(void *param_1);
void sub_102e81f0(void);
void __thiscall sub_102e8210(void *this,uint32_t param_1);
void __fastcall sub_102e8230(uint32_t *param_1);
int __fastcall sub_102e8240(uint32_t *param_1);
void sub_102e8250(uint32_t param_1);
uint32_t * __fastcall sub_102e8270(uint32_t *param_1);
int __thiscall sub_102e8290(void *this,int *param_1);
uint32_t * __thiscall sub_102e82c0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
uint32_t * __thiscall sub_102e83b0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void * __fastcall sub_102e8410(void *param_1,int param_2,void *param_3);
void sub_102e8440(uint8_t param_1);
uint32_t __thiscall sub_stl_102e8470(void *this,int param_1,uint32_t param_2);
uint32_t __thiscall sub_stl_102e84d0(void *this,int param_1,uint32_t param_2);
void __thiscall sub_102e8530(void *this,int param_1);
void __fastcall sub_102e8590(int param_1);
void __thiscall sub_102e85c0(void *this,uint32_t param_1,int param_2);
uint32_t __fastcall sub_102e85e0(int param_1,char *param_2,char *param_3,uint32_t reg_EAX);
int * __fastcall sub_102e8620(uint32_t *param_1,int param_2,uint8_t param_3);
void * __thiscall sub_102e86c0(void *this,uint32_t param_1,uint32_t param_2);
void * __thiscall sub_102e8730(void *this,uint32_t param_1,uint32_t param_2);
int * __fastcall sub_102e87a0(int *param_1,int *param_2,int *param_3);
void __fastcall sub_102e8850(int param_1,int param_2,int param_3);

/* ---- functions/SaveFunctions.cpp ---- */
void functions_SaveFunctions_init_101776b0(void);
void functions_SaveFunctions_init_101776d0(void);
void functions_SaveFunctions_init_101777c0(void);
void functions_SaveFunctions_init_10177820(void);
void functions_SaveFunctions_init_10177880(void);
void functions_SaveFunctions_init_101778f0(void);
void functions_SaveFunctions_init_10177950(void);
void functions_SaveFunctions_init_101779b0(void);
void functions_SaveFunctions_init_10177a20(void);
void functions_SaveFunctions_init_10177a90(void);
void functions_SaveFunctions_init_10177b00(void);
void functions_SaveFunctions_init_10177b60(void);
void functions_SaveFunctions_init_10177bc0(void);
void functions_SaveFunctions_init_10177c30(void);
void functions_SaveFunctions_init_10177ca0(void);
void functions_SaveFunctions_init_10177d10(void);
void functions_SaveFunctions_init_10177d70(void);
void functions_SaveFunctions_init_10177dd0(void);
void functions_SaveFunctions_init_10177e30(void);
void functions_SaveFunctions_init_10177e90(void);
void functions_SaveFunctions_init_10177f10(void);
void functions_SaveFunctions_init_10177f80(void);
void functions_SaveFunctions_init_10177fe0(void);
void functions_SaveFunctions_init_10178040(void);
void functions_SaveFunctions_init_101780e0(void);
void functions_SaveFunctions_init_10178150(void);
void functions_SaveFunctions_init_101781b0(void);
void functions_SaveFunctions_init_10178210(void);
void functions_SaveFunctions_init_10178270(void);
void functions_SaveFunctions_init_10178300(void);
void functions_SaveFunctions_init_101783c0(void);
void functions_SaveFunctions_init_10178430(void);
void functions_SaveFunctions_init_101784a0(void);
void functions_SaveFunctions_init_101784f0(void);
void functions_SaveFunctions_init_10178550(void);
void functions_SaveFunctions_init_101785e0(void);
void functions_SaveFunctions_init_101786e0(void);
void functions_SaveFunctions_init_10178760(void);
void functions_SaveFunctions_init_101787f0(void);
void functions_SaveFunctions_init_10178db0(void);
void functions_SaveFunctions_init_10179780(void);
void functions_SaveFunctions_init_1017a180(void);
void functions_SaveFunctions_init_1017a500(void);
void functions_SaveFunctions_init_1017aa30(void);
void functions_SaveFunctions_init_1017abe0(void);
void functions_SaveFunctions_init_1017ac40(void);
void functions_SaveFunctions_init_1017aca0(void);
void functions_SaveFunctions_init_1017ad00(void);
void functions_SaveFunctions_init_1017ad60(void);
void functions_SaveFunctions_InitPtr_D2Common_DAT_6fde9e1c_1017b740(void);
void functions_SaveFunctions_InitPtr_D2Game_DAT_6fd2d8bc_1017cba0(void);
void functions_SaveFunctions_InitPtr_D2Game_DAT_6fd31c3c_1017cbc0(void);
void functions_SaveFunctions_InitPtr_D2Game_DAT_6fd19f68_1017cc60(void);
void functions_SaveFunctions_InitPtr_D2Game_DAT_6fd307b8_1017cfa0(void);
void functions_SaveFunctions_InitPtr_D2Game_DAT_6fd30bb8_1017cfb0(void);
void functions_SaveFunctions_InitPtr_D2Game_DAT_6fd31c18_1017d000(void);
void functions_SaveFunctions_InitPtr_D2Client_DAT_6fbcb980_1017df60(void);
void functions_SaveFunctions_InitPtr_D2Client_DAT_6fbcc4e0_1017e0c0(void);
void functions_SaveFunctions_InitPtr_D2Client_DAT_6fbcc4e8_1017e0d0(void);
void functions_SaveFunctions_InitPtr_D2Client_DAT_6fbcc4f8_1017e0e0(void);
void functions_SaveFunctions_InitPtr_D2Client_DAT_6fbc9928_1017e8f0(void);
int __fastcall functions_SaveFunctions_Hook_sub_6fc73f10_102e8880(int *param_1,int param_2,byte *param_3,uint *param_4,int param_5,uint32_t param_6, uint32_t param_7);
int __fastcall functions_SaveFunctions_Hook_sub_6fc73b40_102e8c10(uint16_t *param_1,int param_2,uint32_t param_3,uint32_t param_4,int param_5);
int __fastcall functions_SaveFunctions_102e8ec0(int *param_1,int param_2);
int functions_SaveFunctions_102e8f00(int param_1,uint param_2,int param_3,void *param_4,uint *param_5,uint32_t reg_EDI );
void __fastcall functions_SaveFunctions_102e9380(int *param_1,int param_2,uint32_t param_3,uint8_t param_4);
uint32_t __fastcall functions_SaveFunctions_102e9440(int param_1,int param_2,uint *param_3,uint16_t *param_4);
uint32_t __fastcall functions_SaveFunctions_102e9580(uint32_t param_1,int param_2,uint32_t *param_3,uint param_4);
void __fastcall functions_SaveFunctions_102e9650(void *param_1,int *param_2);
uint32_t __fastcall functions_SaveFunctions_102e96f0(int param_1,int param_2,uint32_t *param_3,uint16_t *param_4);
uint64_t __fastcall functions_SaveFunctions_102e9750(int param_1,int param_2,uint *param_3,short *param_4);
uint32_t __fastcall functions_SaveFunctions_102e9800(int param_1,int param_2,uint32_t *param_3,uint16_t *param_4);
uint32_t __fastcall functions_SaveFunctions_102e98d0(int param_1,int param_2,uint32_t *param_3,short *param_4);
uint32_t __fastcall functions_SaveFunctions_102e9b20(int param_1,int param_2,uint *param_3,uint param_4);
uint32_t __fastcall functions_SaveFunctions_102e9b80(int param_1,int param_2,uint *param_3,uint param_4);
uint32_t __fastcall functions_SaveFunctions_102e9bf0(int param_1,int param_2,uint *param_3,uint param_4);
uint32_t __fastcall functions_SaveFunctions_102e9c50(int param_1,int param_2,uint *param_3,uint param_4);
uint32_t __fastcall functions_SaveFunctions_102e9cc0(int param_1,int param_2,uint32_t *param_3,uint16_t *param_4);
uint32_t __fastcall functions_SaveFunctions_102e9d90(int param_1,int param_2,uint32_t *param_3,short *param_4);
uint32_t __fastcall functions_SaveFunctions_102e9e80(int param_1,int param_2,int param_3,byte *param_4,uint32_t *param_5, uint32_t reg_ESI);
uint64_t __fastcall functions_SaveFunctions_102ea120(int param_1,int param_2,int param_3);
longlong __fastcall functions_SaveFunctions_102ea4e0(int param_1,int param_2);
uint32_t __fastcall functions_SaveFunctions_Hook_sub_6fc74320_102ea530(uint32_t param_1,int *param_2,int param_3,uint32_t param_4,uint32_t param_5, uint32_t param_6,uint32_t param_7,uint32_t param_8);
void __fastcall functions_SaveFunctions_Wraps_D2Game_GAME_Clients_102ea770(int param_1,void *param_2,size_t param_3);
void __fastcall functions_SaveFunctions_Wraps_D2Game_GAME_Clients_102ea800(int param_1,void *param_2,size_t param_3);
uint64_t __fastcall functions_SaveFunctions_102ea890(byte *param_1,uint param_2);
void __fastcall functions_SaveFunctions_Hook_GAME_Clients_6fc6b7f0_102ea900(void *param_1,int param_2,char *param_3,int param_4,int param_5);
void functions_SaveFunctions_102ea970(int param_1,int param_2);
void __fastcall functions_SaveFunctions_102eac30(int param_1);
void __fastcall functions_SaveFunctions_102eacb0(int param_1);
void functions_SaveFunctions_102ead30(int param_1,int param_2);
void functions_SaveFunctions_102eada0(int param_1);
bool __fastcall functions_SaveFunctions_Wraps_D2Game_GAME_Clients_102eadc0(uint param_1,void *param_2,size_t param_3,uint param_4);
bool __fastcall functions_SaveFunctions_Wraps_D2Game_GAME_Clients_102eaf00(uint param_1,void *param_2,size_t param_3,uint param_4);
void functions_SaveFunctions_102eb040(uint *param_1,int param_2,int *param_3,uint32_t param_4);
void functions_SaveFunctions_Wraps_D2Client_GAME_SCmd_102eb1c0(int param_1);
void functions_SaveFunctions_102eb3b0(uint32_t reg_ESI);
int * functions_SaveFunctions_102eb4c0(void);
uint64_t functions_SaveFunctions_Hook_sub_6faf4230_102eb580(int param_1,uint32_t reg_EBX);
void * __fastcall functions_SaveFunctions_Wraps_D2Client_GAME_Msg_102eb930(size_t *param_1,uint32_t reg_EBX,uint32_t reg_EDI);
uint * __fastcall functions_SaveFunctions_102eba40(int param_1,uint *param_2,uint32_t param_3,uint param_4,uint param_5, uint32_t param_6,uint *param_7,uint32_t param_8);
uint32_t __fastcall functions_SaveFunctions_102ebb30(int param_1,short *param_2,int *param_3,int *param_4,uint32_t param_5);
void functions_SaveFunctions_102ebd60(uint16_t *param_1,int param_2);
void __fastcall functions_SaveFunctions_102ebf70(ushort *param_1,uint *param_2,uint *param_3,uint *param_4);
void __fastcall functions_SaveFunctions_102ebfd0(int param_1,int param_2,uint16_t param_3,byte param_4,uint32_t param_5);
int __fastcall functions_SaveFunctions_102ec010(byte *param_1,int param_2,uint param_3,int *param_4,uint32_t *param_5);

/* ---- _unattributed/after_functions_SaveFunctions_unit47.cpp ---- */
void sub_init_1017f6b0(void);
void sub_init_1017f6d0(void);
void sub_init_1017f7c0(void);
void sub_init_1017f820(void);
void sub_init_1017f880(void);
void sub_init_1017f8f0(void);
void sub_init_1017f950(void);
void sub_init_1017f9b0(void);
void sub_init_1017fa20(void);
void sub_init_1017fa90(void);
void sub_init_1017fb00(void);
void sub_init_1017fb60(void);
void sub_init_1017fbc0(void);
void sub_init_1017fc30(void);
void sub_init_1017fca0(void);
void sub_init_1017fd10(void);
void sub_init_1017fd70(void);
void sub_init_1017fdd0(void);
void sub_init_1017fe30(void);
void sub_init_1017fe90(void);
void sub_init_1017ff10(void);
void sub_init_1017ff80(void);
void sub_init_1017ffe0(void);
void sub_init_10180040(void);
void sub_init_101800e0(void);
void sub_init_10180150(void);
void sub_init_101801b0(void);
void sub_init_10180210(void);
void sub_init_10180270(void);
void sub_init_10180300(void);
void sub_init_101803c0(void);
void sub_init_10180430(void);
void sub_init_101804a0(void);
void sub_init_101804f0(void);
void sub_init_10180550(void);
void sub_init_101805e0(void);
void sub_init_101806e0(void);
void sub_init_10180760(void);
void sub_init_101807f0(void);
void sub_init_10180db0(void);
void sub_init_10181780(void);
void sub_init_10182180(void);
void sub_init_10182500(void);
void sub_init_10182a30(void);
void sub_init_10182be0(void);
void sub_init_10182c40(void);
void sub_init_10182ca0(void);
void sub_init_10182d00(void);
void sub_init_10182d60(void);
void sub_InitPtr_D2Game_DAT_6fd1a5f8_10184c00(void);
void __fastcall sub_102ec2e0(int *param_1);
void __fastcall sub_102ec380(int *param_1);
void __fastcall sub_102ec420(int *param_1);
int __fastcall sub_102ec4c0(int *param_1);
uint32_t sub_102ec760(void);

/* ---- _unattributed/after_functions_SaveFunctions_unit48.cpp ---- */
void sub_init_101876b0(void);
void sub_init_101876d0(void);
void sub_init_101877c0(void);
void sub_init_10187820(void);
void sub_init_10187880(void);
void sub_init_101878f0(void);
void sub_init_10187950(void);
void sub_init_101879b0(void);
void sub_init_10187a20(void);
void sub_init_10187a90(void);
void sub_init_10187b00(void);
void sub_init_10187b60(void);
void sub_init_10187bc0(void);
void sub_init_10187c30(void);
void sub_init_10187ca0(void);
void sub_init_10187d10(void);
void sub_init_10187d70(void);
void sub_init_10187dd0(void);
void sub_init_10187e30(void);
void sub_init_10187e90(void);
void sub_init_10187f10(void);
void sub_init_10187f80(void);
void sub_init_10187fe0(void);
void sub_init_10188040(void);
void sub_init_101880e0(void);
void sub_init_10188150(void);
void sub_init_101881b0(void);
void sub_init_10188210(void);
void sub_init_10188270(void);
void sub_init_10188300(void);
void sub_init_101883c0(void);
void sub_init_10188430(void);
void sub_init_101884a0(void);
void sub_init_101884f0(void);
void sub_init_10188550(void);
void sub_init_101885e0(void);
void sub_init_101886e0(void);
void sub_init_10188760(void);
void sub_init_101887f0(void);
void sub_init_10188db0(void);
void sub_init_10189780(void);
void sub_init_1018a180(void);
void sub_init_1018a500(void);
void sub_init_1018aa30(void);
void sub_init_1018abe0(void);
void sub_init_1018ac40(void);
void sub_init_1018aca0(void);
void sub_init_1018ad00(void);
void sub_init_1018ad60(void);
void sub_InitPtr_D2Common_DAT_6fdeb0c8_1018cc30(void);
uint32_t __fastcall sub_102ec7d0(uint32_t param_1,uint32_t param_2,int *param_3,int param_4,uint32_t param_5, uint32_t param_6,uint32_t param_7,uint32_t param_8,uint32_t param_9, uint32_t param_10,uint32_t reg_EBX);
uint32_t sub_102ec8f0(void);

/* ---- _unattributed/after_functions_SaveFunctions_unit49_1018f6b0.cpp ---- */
void sub_init_1018f6b0(void);
void sub_init_1018f6d0(void);
void sub_init_1018f7c0(void);
void sub_init_1018f820(void);
void sub_init_1018f880(void);
void sub_init_1018f8f0(void);
void sub_init_1018f950(void);
void sub_init_1018f9b0(void);
void sub_init_1018fa20(void);
void sub_init_1018fa90(void);
void sub_init_1018fb00(void);
void sub_init_1018fb60(void);
void sub_init_1018fbc0(void);
void sub_init_1018fc30(void);
void sub_init_1018fca0(void);
void sub_init_1018fd10(void);
void sub_init_1018fd70(void);
void sub_init_1018fdd0(void);
void sub_init_1018fe30(void);
void sub_init_1018fe90(void);
void sub_init_1018ff10(void);
void sub_init_1018ff80(void);
void sub_init_1018ffe0(void);
void sub_init_10190040(void);
void sub_init_101900e0(void);
void sub_init_10190150(void);
void sub_init_101901b0(void);
void sub_init_10190210(void);
void sub_init_10190270(void);
void sub_init_10190300(void);
void sub_init_101903c0(void);
void sub_init_10190430(void);
void sub_init_101904a0(void);
void sub_init_101904f0(void);
void sub_init_10190550(void);
void sub_init_101905e0(void);
void sub_init_101906e0(void);
void sub_init_10190760(void);
void sub_init_101907f0(void);
void sub_init_10190db0(void);
void sub_init_10191780(void);
void sub_init_10192180(void);
void sub_init_10192500(void);
void sub_init_10192a30(void);
void sub_init_10192be0(void);
void sub_init_10192c40(void);
void sub_init_10192ca0(void);
void sub_init_10192d00(void);
void sub_init_10192d60(void);
void sub_InitPtr_DRLG_Outdoors_6fd92ce0_10193430(void);
void sub_InitPtr_sub_6fd61bf0_10193440(void);
void sub_InitPtr_DRLG_Maze_6fd5f110_10193450(void);
void sub_InitPtr_sub_6fd7d3c0_10193460(void);
void sub_InitPtr_DRLG_DrlgRoom_6fd94bd0_10193470(void);
void sub_InitPtr_DRLG_DrlgRoom_6fd94950_10193480(void);
void sub_InitPtr_sub_6fd5e490_10193490(void);
void sub_InitPtr_DRLG_Maze_6fd5eec0_101934a0(void);
void sub_InitPtr_DRLG_Maze_6fd60010_101934b0(void);
void sub_InitPtr_Stats_StatsEx_6fd881a0_101934c0(void);
void sub_InitPtr_ITEMS_ItemMode_6fcf1bc0_101934d0(void);
void sub_InitPtr_sub_6fdb9c60_101934e0(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfde90_101934f0(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfb790_10193500(void);
void sub_InitPtr_sub_6fc5ae10_10193510(void);
void sub_InitPtr_sub_6fc970e0_10193520(void);
void sub_InitPtr_ITEMS_ItemMode_6fcf4e80_10193530(void);
void sub_InitPtr_sub_6fc58fb0_10193540(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfffd0_10193550(void);
void sub_InitPtr_sub_6fc2e660_10193560(void);
void sub_InitPtr_sub_6fc565e0_10193570(void);
void sub_InitPtr_sub_6fd121e0_10193580(void);
void sub_InitPtr_sub_6fd0ab60_10193590(void);
void sub_InitPtr_sub_6fc55e90_101935a0(void);
void sub_InitPtr_UNIT_Party_6fcbc160_101935b0(void);
void sub_InitPtr_sub_6fc54aa0_101935d0(void);
void sub_InitPtr_INVENTORY_Inventory_6fd71640_101935e0(void);
void sub_InitPtr_ITEMS_ItemMode_6fcf5590_101935f0(void);
void sub_InitPtr_DUNGEON_Dungeon_6fd8bdd0_10193600(void);
void sub_InitPtr_sub_6fd12220_10193610(void);
void sub_InitPtr_SKILLS_SkillBar_6fc48170_10193620(void);
void sub_InitPtr_SKILLS_Skills_6fd9f870_10193630(void);
void sub_InitPtr_sub_6fdbab20_10193640(void);
void sub_InitPtr_sub_6fd511e0_10193650(void);
void sub_InitPtr_sub_6fc2ebb0_10193670(void);
void sub_InitPtr_ITEMS_ItemMode_6fcf6bc0_10193680(void);
void sub_InitPtr_ITEMS_ItemMode_6fcf4140_10193690(void);
void sub_InitPtr_ITEMS_ItemMode_6fcf46b0_101936a0(void);
void sub_InitPtr_INVENTORY_InvMode_6fcbb3b0_101936b0(void);
void sub_InitPtr_ITEMS_ItemMode_6fcf62e0_101936c0(void);
void sub_InitPtr_ITEMS_ItemMode_6fcf4670_101936d0(void);
void sub_InitPtr_sub_6fd00570_101936e0(void);
void sub_InitPtr_Stats_StatsEx_6fd88940_101936f0(void);
void sub_InitPtr_Stats_StatsEx_6fd89f70_10193700(void);
void sub_InitPtr_Stats_StatsEx_6fd88550_10193710(void);
void sub_InitPtr_Stats_StatsEx_6fd88cd0_10193720(void);
void sub_InitPtr_Stats_StatsEx_6fd882b0_10193730(void);
void sub_InitPtr_sub_6fd975e0_10193800(void);
void sub_InitPtr_sub_6fc2e930_10193820(void);
void sub_InitPtr_sub_6fc2eae0_10193850(void);
void sub_InitPtr_sub_6fc2fc40_10193860(void);
void sub_InitPtr_sub_6fc2e5d0_10193870(void);
void sub_InitPtr_SKILLS_Skills_6fcc0c70_101938a0(void);
void sub_InitPtr_SKILLS_SkillDruid_6fc648e0_101938b0(void);
void sub_InitPtr_sub_6fcae6f0_101938e0(void);
void sub_InitPtr_SKILLS_SkillBar_6fc48740_101938f0(void);
void sub_InitPtr_sub_6fc3e140_10193900(void);
void sub_InitPtr_SKILLS_Skills_6fcc10b0_10193910(void);
void sub_InitPtr_SKILLS_Skills_6fcc0f40_10193920(void);
void sub_InitPtr_sub_6fc5a280_10193930(void);
void sub_InitPtr_sub_6fc5a4e0_10193940(void);
void sub_InitPtr_sub_6fc5ede0_10193950(void);
void sub_InitPtr_UNIT_Missile_6fb61420_10193960(void);
void sub_InitPtr_SKILLS_Skills_6fcc1880_10193980(void);
void sub_InitPtr_SKILLS_Skills_6fcc0000_101939a0(void);
void sub_InitPtr_ITEMS_Items_6fd7c630_101939b0(void);
void sub_InitPtr_sub_6fd11730_101939c0(void);
void sub_InitPtr_sub_6fd117e0_101939d0(void);
void sub_InitPtr_sub_6fd114f0_101939e0(void);
void sub_InitPtr_UNIT_SUnitMsg_6fc9a440_101939f0(void);
void sub_InitPtr_UNIT_SUnitMsg_6fc9a4c0_10193a00(void);
void sub_InitPtr_PLAYER_PlrModes_6fc97fa0_10193a10(void);
void sub_InitPtr_UNIT_SUnitMsg_6fc9a0f0_10193a20(void);
void sub_InitPtr_SKILLS_Skills_6fcbfa30_10193a30(void);
void sub_InitPtr_SKILLS_Skills_6fb51340_10193a40(void);
void sub_InitPtr_sub_6fd019c0_10193a50(void);
void sub_InitPtr_sub_6fcb8a70_10193a60(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfe0c0_10193a70(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfcf20_10193a80(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfdde0_10193aa0(void);
void sub_InitPtr_SKILLS_Skills_6fcbf210_10193ab0(void);
void sub_InitPtr_SKILLS_Skills_6fcbf1a0_10193ac0(void);
void sub_InitPtr_sub_6fc5aff0_10193ad0(void);
void sub_InitPtr_sub_6fc5a280_1027c820_10193ae0(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfeba0_10193af0(void);
void sub_InitPtr_ITEMS_ItemMode_6fcfa540_10193b00(void);
void sub_InitPtr_sub_6fc46a30_10193b20(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfba40_10193b30(void);
void sub_InitPtr_sub_6fcc2de0_10193b40(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfce70_10193b50(void);
void sub_InitPtr_sub_6fc21620_10193b60(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfb570_10193b70(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfa970_10193b80(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfa930_10193b90(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfc780_10193ba0(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfdac0_10193bb0(void);
void sub_InitPtr_sub_6fcb0f30_10193bc0(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfa6d0_10193bd0(void);
void sub_InitPtr_UNIT_SUnitEvent_6fc57030_10193bf0(void);
void sub_InitPtr_sub_6fc211d0_10193c30(void);
void sub_InitPtr_sub_6fc21280_10193c40(void);
void sub_InitPtr_Ai_AiGeneral_6fc40cf0_10193c50(void);
void sub_InitPtr_Ai_AiGeneral_6fc416a0_10193c60(void);
void sub_InitPtr_sub_6fc214d0_10193c90(void);
void sub_InitPtr_sub_6fc2e7e0_10193cb0(void);
void sub_InitPtr_sub_6fcc3610_10193cc0(void);
void sub_InitPtr_sub_6fc6e2a0_10193cd0(void);
void sub_InitPtr_sub_6fccfdb0_10193ce0(void);
void sub_InitPtr_sub_6fd00460_10193cf0(void);
void sub_InitPtr_UNIT_SUnitDmg_6fd00210_10193d00(void);
void sub_InitPtr_sub_6fd00660_10193d10(void);
void sub_InitPtr_sub_6fc59b40_10193d20(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcffa60_10193d30(void);
void sub_InitPtr_sub_6fd012d0_10193d40(void);
void sub_InitPtr_sub_6fc67cf0_10193d50(void);
void sub_InitPtr_sub_6fcb5d50_10193d60(void);
void sub_InitPtr_PLAYER_PlrMsg_6fcebf50_10193d70(void);
void sub_InitPtr_Ai_AiGeneral_6fc409b0_10193d80(void);
void sub_InitPtr_sub_6fc4e830_10193da0(void);
void sub_InitPtr_UNIT_SUnitDmg_6fd00310_10193db0(void);
void sub_InitPtr_Quests_a2q8_6fd0e7b0_10193dc0(void);
void sub_InitPtr_sub_6fc432b0_10193dd0(void);
void sub_InitPtr_sub_6fd013b0_10193de0(void);
void sub_InitPtr_sub_6fc66b20_10193df0(void);
void sub_InitPtr_sub_6fc67880_10193e40(void);
void sub_InitPtr_sub_6fc43ae0_10193e60(void);
void sub_InitPtr_sub_6fc42920_10193e70(void);
void sub_InitPtr_sub_6fc448a0_10193e80(void);
void sub_InitPtr_sub_6fc21320_10193eb0(void);
void sub_InitPtr_sub_6fc56470_10193ec0(void);
void sub_InitPtr_UNIT_SUnitInactive_6fc3f600_10193ed0(void);
void sub_InitPtr_UNIT_SUnitInactive_6fc3ef50_10193ee0(void);
void sub_InitPtr_UNIT_SUnitInactive_6fc3f2d0_10193ef0(void);
void sub_InitPtr_sub_6fd01610_10193f00(void);
void sub_InitPtr_sub_6fcdee30_10193f10(void);
void sub_InitPtr_sub_6fcde2a0_10193f20(void);
void sub_InitPtr_sub_6fc31980_10193f30(void);
void sub_InitPtr_sub_6fcdce60_10193f40(void);
void sub_InitPtr_ITEMS_ItemMode_6fcf4a70_10193f50(void);
void sub_InitPtr_INVENTORY_InvMode_6fcbb630_10193f60(void);
void sub_InitPtr_UNIT_sunitproxy_6fcaf6c0_10193f70(void);
void sub_InitPtr_D2Game_loc_6fcdd490_10193f80(void);
void sub_InitPtr_sub_6fcdd920_10193f90(void);
void sub_InitPtr_sub_6fcdd880_10193fa0(void);
void sub_InitPtr_UNIT_SUnitDmg_6fd000c0_10193fb0(void);
void sub_InitPtr_sub_6fc73470_10193fc0(void);
void sub_InitPtr_ITEMS_ItemMode_6fcf60d0_10193fd0(void);
void sub_InitPtr_sub_6fcd17b0_10193fe0(void);
void sub_InitPtr_UNIT_Item_6fb34080_10194000(void);
void sub_InitPtr_UNIT_Item_6fb32660_10194010(void);
void sub_InitPtr_PLAYER_PlrSave2_6fd0c470_10194020(void);
void sub_InitPtr_sub_6fd0b7b0_10194030(void);
void sub_InitPtr_sub_6fd0b700_10194040(void);
void sub_InitPtr_sub_6fd0b610_10194050(void);
void sub_InitPtr_sub_6fd0bc40_10194060(void);
void sub_InitPtr_PLAYER_PlrSave2_6fd0c0e0_10194070(void);
void sub_InitPtr_PLAYER_PlrSave2_6fd0c1e0_10194080(void);
void sub_InitPtr_PLAYER_PlrSave2_6fd0c020_10194090(void);
void sub_InitPtr_sub_6fc307e0_101940a0(void);
void sub_InitPtr_sub_6fd0ba40_101940b0(void);
void sub_InitPtr_sub_6fd0baf0_101940c0(void);
void sub_InitPtr_sub_6fd0b560_101940d0(void);
void sub_InitPtr_sub_6fd0b4e0_101940e0(void);
void sub_InitPtr_sub_6fd0b440_101940f0(void);
void sub_InitPtr_PLAYER_PlrSave2_6fd0bda0_10194100(void);
void sub_InitPtr_sub_6fd0ca60_10194110(void);
void sub_InitPtr_sub_6fd0cb50_10194120(void);
void sub_InitPtr_sub_6fd0d960_10194130(void);
void sub_InitPtr_sub_6fd0cbd0_10194140(void);
void sub_InitPtr_sub_6fc68950_10194150(void);
void sub_InitPtr_sub_6fd0d880_10194160(void);
void sub_InitPtr_sub_6fd0cc90_10194170(void);
void sub_InitPtr_sub_6fd0d540_10194180(void);
void sub_InitPtr_sub_6fce1510_10194190(void);
void sub_InitPtr_sub_6fcdcc60_101941a0(void);
void sub_InitPtr_SKILLS_Skills_6fcc1000_101941b0(void);
void sub_InitPtr_sub_6fc2ea10_101941c0(void);
void sub_InitPtr_sub_6fcc3120_101941d0(void);
void sub_InitPtr_sub_6fcae810_101941e0(void);
void sub_InitPtr_sub_6fcae680_101941f0(void);
void sub_InitPtr_D2Game_loc_6fcfa350_10194200(void);
void sub_InitPtr_GAME_SCmd_6fcab010_10194220(void);
void sub_InitPtr_sub_6fccf5f0_10194240(void);
void sub_InitPtr_sub_6fccf840_10194250(void);
void sub_InitPtr_sub_6fc977f0_10194260(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfe6d0_10194270(void);
void sub_InitPtr_sub_6fc58180_10194280(void);
void sub_InitPtr_sub_6fc54b80_10194290(void);
void sub_InitPtr_sub_6fcb2360_101942a0(void);
void sub_InitPtr_sub_6fcb2a60_101942b0(void);
void sub_InitPtr_PLAYER_PlrTrade_6fc90240_101942c0(void);
void sub_InitPtr_ITEMS_ItemMode_6fcf39b0_101942d0(void);
void sub_InitPtr_ITEMS_ItemMode_6fcf2c70_101942e0(void);
void sub_InitPtr_ITEMS_ItemMode_6fcf8310_101942f0(void);
void sub_InitPtr_PLAYER_PlrMsg_6fcece20_10194300(void);
void sub_InitPtr_D2Game_loc_6fcecf70_10194310(void);
void sub_InitPtr_PLAYER_PlrTrade_6fc90d60_10194320(void);
void sub_InitPtr_GAME_SCmd_6fcad3d0_10194350(void);
void sub_InitPtr_GAME_SCmd_6fcaade0_10194360(void);
void sub_InitPtr_sub_6fc2ec90_10194370(void);
void sub_InitPtr_sub_6fc74320_10194380(void);
void sub_InitPtr_GAME_Clients_6fc6a190_10194390(void);
void sub_InitPtr_GAME_Game_6fc4ab70_101943a0(void);
void sub_InitPtr_GAME_Clients_6fc69fe0_101943b0(void);
void sub_InitPtr_GAME_Game_6fc49ba0_101943c0(void);
void sub_InitPtr_PLAYER_PlrTrade_6fc90fb0_101943e0(void);
void sub_InitPtr_PLAYER_PlrTrade_6fc900c0_101943f0(void);
void sub_InitPtr_ITEMS_ItemMode_6fcf2f00_10194400(void);
void sub_InitPtr_PLAYER_PlrTrade_6fc91e10_10194410(void);
void sub_InitPtr_GAME_SCmd_6fcaa3e0_10194420(void);
void sub_InitPtr_sub_6fc9ac50_10194440(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcffa90_10194450(void);
void sub_InitPtr_sub_6fc6df20_10194460(void);
void sub_InitPtr_PLAYER_PlrModes_6fc97e00_10194470(void);
void sub_InitPtr_PLAYER_PlrModes_6fc98100_10194480(void);
void sub_InitPtr_GAME_Event_6fcae490_10194490(void);
void sub_InitPtr_PLAYER_PlrModes_6fc98340_101944a0(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfbed0_101944c0(void);
void sub_InitPtr_sub_6fcbd160_101944d0(void);
void sub_InitPtr_sub_6fd12380_101944e0(void);
void sub_InitPtr_sub_6fc21180_101944f0(void);
void sub_InitPtr_sub_6fc21480_10194500(void);
void sub_InitPtr_sub_6fd120c0_10194510(void);
void sub_InitPtr_sub_6fd122c0_10194520(void);
void sub_InitPtr_sub_6fd129b0_10194530(void);
void sub_InitPtr_sub_6fd11b10_10194540(void);
void sub_InitPtr_PLAYER_PlayerPets_6fcb6570_10194550(void);
void sub_InitPtr_sub_6fc3cae0_10194560(void);
void sub_InitPtr_sub_6fcbcb30_10194570(void);
void sub_InitPtr_Ai_AiGeneral_6fc41290_10194590(void);
void sub_InitPtr_sub_6fd12120_101945a0(void);
void sub_InitPtr_sub_6fc3c8a0_101945b0(void);
void sub_InitPtr_sub_6fca9730_101945c0(void);
void sub_InitPtr_sub_6fc9be10_101945d0(void);
void sub_InitPtr_sub_6fc21900_101945e0(void);
void sub_InitPtr_sub_6fcd1bc0_101945f0(void);
void sub_InitPtr_PLAYER_PlayerPets_6fcb7420_10194600(void);
void sub_InitPtr_PLAYER_PlayerPets_6fcb6600_10194610(void);
void sub_InitPtr_sub_6fc215d0_10194620(void);
void sub_InitPtr_sub_6fcb3d60_10194630(void);
void sub_InitPtr_sub_6faf0f00_10194640(void);
void sub_InitPtr_sub_6fd00a60_10194650(void);
void sub_InitPtr_UNIT_SUnitDmg_6fd003a0_10194660(void);
void sub_InitPtr_SKILLS_Skills_6fcc19a0_10194670(void);
void sub_InitPtr_SKILLS_Skills_6fcbfd00_10194680(void);
void sub_InitPtr_sub_6fd0af80_10194690(void);
void sub_InitPtr_SKILLS_Skills_6fcc1280_101946a0(void);
void sub_InitPtr_SKILLS_Skills_6fcbf9a0_101946b0(void);
void sub_InitPtr_sub_6fcb1340_101946c0(void);
void sub_InitPtr_sub_6faf0550_101946d0(void);
void sub_InitPtr_sub_6fcb1240_101946e0(void);

/* ---- _unattributed/after_functions_SaveFunctions_unit49_101946f0.cpp ---- */
void sub_InitPtr_sub_6fd02480_101946f0(void);
void sub_InitPtr_sub_6fb23bc0_10194700(void);
void sub_InitPtr_SKILLS_SkillDruid_6fc654e0_10194710(void);
void sub_InitPtr_sub_6fc31070_10194720(void);
void sub_InitPtr_D2Game_loc_6fcf4230_10194730(void);
void sub_InitPtr_sub_6fc57680_10194740(void);
void sub_InitPtr_ITEMS_ItemMode_6fcf24b0_10194750(void);
void sub_InitPtr_sub_6fccdb30_10194760(void);
void sub_InitPtr_SKILLS_SkillItem_6fccd050_10194770(void);
void sub_InitPtr_UNIT_SUnitEvent_6fc570e0_10194780(void);
void sub_InitPtr_sub_6fd0b090_10194790(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfc030_101947a0(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfdcb0_101947b0(void);
void sub_InitPtr_UNIT_Party_6fcbc070_101947c0(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcffcc0_101947d0(void);
void sub_InitPtr_sub_6fc641c0_101947e0(void);
void sub_InitPtr_sub_6fc639a0_101947f0(void);
void sub_InitPtr_sub_6fb24480_10194800(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfc530_10194810(void);
void sub_InitPtr_sub_6fcb1b70_10194820(void);
void sub_InitPtr_sub_6fcb22a0_10194840(void);
void sub_InitPtr_sub_6fcb1e30_10194850(void);
void sub_InitPtr_sub_6fd007a0_10194860(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfaa90_10194870(void);
void sub_InitPtr_UNIT_SUnitMsg_6fc9a190_10194880(void);
void sub_InitPtr_GAME_Game_6fc4d090_10194890(void);
void sub_InitPtr_GAME_Clients_6fc6b7f0_101948a0(void);
void sub_InitPtr_GAME_Clients_6fc6b500_101948b0(void);
void sub_InitPtr_GAME_Game_6fc4bf90_101948c0(void);
void sub_InitPtr_SKILLS_Skills_6fcbe370_101948d0(void);
void sub_InitPtr_D2Game_loc_6fcdf810_101948e0(void);
void sub_InitPtr_UNIT_sunitproxy_6fcaf4e0_10194910(void);
void sub_InitPtr_D2Game_loc_6fce00c0_10194920(void);
void sub_InitPtr_UNIT_sunitproxy_6fcaf5c0_10194950(void);
void sub_InitPtr_D2Game_loc_6fcaf620_10194970(void);
void sub_InitPtr_sub_6fcdca20_10194980(void);
void sub_InitPtr_D2Game_loc_6fceb610_10194990(void);
void sub_InitPtr_GAME_SCmd_6fcad5f0_101949a0(void);
void sub_InitPtr_D2Game_loc_6fc21740_101949b0(void);
void sub_InitPtr_SKILLS_Skills_6fcbfae0_101949c0(void);
void sub_InitPtr_D2Game_loc_6fcc3d00_101949d0(void);
void sub_InitPtr_Ai_AiThink4_6fcc3d60_101949e0(void);
void sub_InitPtr_sub_6fc2f2f0_101949f0(void);
void sub_InitPtr_sub_6fcb83b0_10194a00(void);
void sub_InitPtr_sub_6fcb8e30_10194a20(void);
void sub_InitPtr_ITEMS_ItemMode_6fcf6e30_10194a30(void);
void sub_InitPtr_ITEMS_ItemMode_6fcf7160_10194a40(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfa7b0_10194c50(void);
void sub_InitPtr_sub_6fc5f320_10194c70(void);
void sub_InitPtr_UNIT_PlrSkills_6fb22610_10194c90(void);
void sub_InitPtr_UNIT_PlrSkills_6fb22530_10194ca0(void);
void sub_InitPtr_ENGINE_Gfx_6fb1cb30_10194cb0(void);
void sub_InitPtr_sub_6fb04280_10194cc0(void);
void sub_InitPtr_GAME_Game_6fc4a850_10194d30(void);
void sub_InitPtr_GAME_CCmd_6fcead60_10194d50(void);
void sub_InitPtr_GAME_SCmd_6fcac4b0_10194d60(void);
void sub_InitPtr_GAME_Game_6fc4a740_10194d70(void);
void sub_InitPtr_GAME_Game_6fc4bb10_10194d80(void);
void sub_InitPtr_GAME_Clients_6fc69930_10194d90(void);
void sub_InitPtr_GAME_Game_6fc4ba10_10194da0(void);
void sub_InitPtr_GAME_Game_6fc4e360_10194db0(void);
void sub_InitPtr_GAME_Game_6fc4aac0_10194dc0(void);
void sub_InitPtr_GAME_Clients_6fc6a780_10194dd0(void);
void sub_InitPtr_GAME_Game_6fc4a6e0_10194de0(void);
void sub_InitPtr_GAME_Game_6fc4d7e0_10194df0(void);
void sub_InitPtr_GAME_Clients_6fc6a0a0_10194e00(void);
void sub_InitPtr_UNIT_SUnitDmg_6fd00110_10194e10(void);
void sub_InitPtr_sub_6fc22060_10194e20(void);
void sub_InitPtr_sub_6fc22090_10194e30(void);
void sub_InitPtr_GAME_Game_6fc4bc90_10194e40(void);
void sub_InitPtr_GAME_Game_6fc4a900_10194e50(void);
void sub_InitPtr_GAME_Event_6fcae630_10194e60(void);
void sub_InitPtr_GAME_Arena_6fcd2560_10194e70(void);
void sub_InitPtr_UNIT_Party_6fcbbe40_10194e80(void);
void sub_InitPtr_MONSTER_MonsterRegion_6fceacc0_10194e90(void);
void sub_InitPtr_GAME_Game_6fc4ac60_10194ea0(void);
void sub_InitPtr_sub_6fccf610_10194eb0(void);
void sub_InitPtr_sub_6fab1260_10194ec0(void);
void sub_InitPtr_ITEMS_ItemMode_6fcf4570_10194ed0(void);
void sub_InitPtr_sub_6fc32df0_10194ee0(void);
void sub_InitPtr_sub_6fc21670_10194ef0(void);
void sub_InitPtr_INVENTORY_InvMode_6fcbb570_10194f00(void);
void sub_InitPtr_sub_6fcd88c0_10194f10(void);
void sub_InitPtr_PLAYER_PlrTrade_6fc919a0_10194f20(void);
void sub_InitPtr_sub_6fc93ba0_10194f30(void);
void sub_InitPtr_GAME_Game_6fc4d980_10194f40(void);
void sub_InitPtr_GAME_Game_6fc4ce20_10194f50(void);
void sub_InitPtr_GAME_CCmd_6fceae80_10194f60(void);
void sub_InitPtr_sub_6fc22130_10194f70(void);
void sub_InitPtr_GAME_Game_6fc4e050_10194f80(void);
void sub_InitPtr_sub_6f8e7e60_10195180(void);
void sub_InitPtr_sub_6fb04e10_101951c0(void);
void sub_InitPtr_sub_6fb046e0_101951d0(void);
void sub_InitPtr_sub_6fb4f950_101951e0(void);
void sub_InitPtr_sub_6fb4be70_10195230(void);
void sub_InitPtr_D2Client_loc_6fb6e400_10195240(void);
void sub_InitPtr_sub_6fb70450_10195250(void);
void sub_InitPtr_sub_6fb6e4c0_10195260(void);
void sub_InitPtr_sub_6fac43e0_10195270(void);
void sub_InitPtr_sub_6fac49a0_10195290(void);
void sub_InitPtr_sub_6fb4d850_101952a0(void);
void sub_InitPtr_UNIT_Player_6facb7f0_101952b0(void);
void sub_InitPtr_sub_6fb01ae0_101952c0(void);
void sub_InitPtr_sub_6fb6f5f0_101952d0(void);
void sub_InitPtr_UI_npcmenu_6faf6230_101952e0(void);
void sub_InitPtr_sub_6fb05f10_101952f0(void);
void sub_InitPtr_sub_6fb05fb0_10195300(void);
void sub_InitPtr_UI_inv_6fb3d430_10195310(void);
void sub_InitPtr_UI_inv_6fb41360_10195320(void);
void sub_InitPtr_sub_6fac47a0_101956b0(void);
void sub_InitPtr_sub_6fb5ce20_101956c0(void);
void sub_InitPtr_SKILLS_SkillsBar_6fb76aa0_101956d0(void);
void sub_InitPtr_SKILLS_SkillsBar_6fb765b0_101956e0(void);
void sub_InitPtr_SKILLS_SkillsBar_6fb76060_101956f0(void);
void sub_InitPtr_SKILLS_Skills_6fb515c0_10195700(void);
void sub_InitPtr_sub_6fb69a80_10195710(void);
void sub_InitPtr_sub_6fb6c720_10195910(void);
void sub_InitPtr_UI_automap_6fb101a0_10195920(void);
void sub_InitPtr_UI_automap_6fb11490_10195930(void);
void sub_InitPtr_SKILLS_Skills_6fb536f0_10195b30(void);
void sub_InitPtr_sub_6fb2de50_10195b50(void);
void sub_InitPtr_UNIT_Item_6fb31ce0_10195df0(void);
void sub_InitPtr_UNIT_UnitSnd_6fad23d0_10195e10(void);
void sub_InitPtr_UNIT_UnitSnd_6fad2430_10195e20(void);
void sub_InitPtr_UNIT_UnitSnd_6fad2490_10195e30(void);
void sub_InitPtr_sub_6fad2a70_10195e40(void);
void sub_InitPtr_sub_6fb48b60_10195fb0(void);
void sub_InitPtr_sub_6facbde0_10195fd0(void);
void sub_InitPtr_UNIT_Monster_6fb01650_10196070(void);
void sub_InitPtr_UNIT_Monster_6fb01390_10196080(void);
void sub_InitPtr_sub_6fadb360_10196090(void);
void sub_InitPtr_sub_6fadb420_101960a0(void);
void sub_InitPtr_D2Client_loc_6fac4d30_101960b0(void);
void sub_InitPtr_UI_SkillDesc_6fadf0a0_10196120(void);
void sub_InitPtr_UI_SkillDesc_6fae0b40_10196130(void);
void sub_InitPtr_sub_6fb23760_10196180(void);
void sub_InitPtr_UI_npcmenu_6faf60a0_10196190(void);
void sub_InitPtr_sub_6fb77e30_101961c0(void);
void sub_InitPtr_SKILLS_Skills_6fb50880_101961d0(void);
void sub_InitPtr_SKILLS_Skills_6fb50750_101961e0(void);
void sub_InitPtr_sub_6facd740_101961f0(void);
void sub_InitPtr_sub_6fadb4c0_10196220(void);
void sub_InitPtr_SKILLS_SkillsBar_6fb76450_10196230(void);
void sub_InitPtr_SKILLS_SkillsBar_6fb77290_10196240(void);
void sub_InitPtr_sub_6fb6e240_10196260(void);
void sub_InitPtr_SKILLS_Skills_6fb54e20_10196270(void);
void sub_InitPtr_sub_6fabd810_10196280(void);
void sub_InitPtr_sub_6ff36070_10196370(void);
void sub_InitPtr_sub_6fd7e840_101963b0(void);
void sub_InitPtr_sub_6fd7e790_101963c0(void);
void sub_InitPtr_sub_6fd7f100_101963d0(void);
void sub_InitPtr_SKILLS_Skills_6fcbeb80_101963e0(void);
void sub_InitPtr_PLAYER_PlrModes_6fc99100_101963f0(void);
void sub_InitPtr_PLAYER_PlrModes_6fc98a90_10196400(void);
void sub_InitPtr_PLAYER_PlrModes_6fc98610_10196410(void);
void sub_InitPtr_sub_6fc58620_10196420(void);
void sub_InitPtr_GAME_Targets_6fd0fed0_10196430(void);
void sub_InitPtr_sub_6fc73720_10196440(void);
void sub_InitPtr_sub_6fd0b2c0_10196450(void);
void sub_InitPtr_sub_6fc21560_10196460(void);
void sub_InitPtr_sub_6fd12d80_10196490(void);
void sub_InitPtr_UNIT_CUnit_6fb560d0_101964a0(void);
void sub_InitPtr_sub_6fcbe170_101964b0(void);
void sub_InitPtr_D2sound_10020_10196540(void);
void sub_InitPtr_sub_6fb14080_10196550(void);
void sub_InitPtr_sub_6fb14fd0_10196560(void);
void sub_InitPtr_D2Client_loc_6fb15180_10196570(void);
void sub_InitPtr_sub_6fb13270_10196580(void);
void sub_InitPtr_sub_6fac4a30_10196590(void);
void sub_InitPtr_sub_6faecc60_101965a0(void);
void sub_InitPtr_sub_6faeccc0_1029e920_101965b0(void);
void sub_InitPtr_sub_6faf7b20_101965c0(void);
void sub_InitPtr_WARDEN_WardenClient_6fb3a4d0_101965d0(void);
void sub_InitPtr_UNIT_CUnit_6fb55440_101965e0(void);
void sub_InitPtr_UNIT_CUnit_6fb56210_101965f0(void);
void sub_InitPtr_sub_6fb71a80_10196600(void);
void sub_InitPtr_sub_6fb721f0_10196610(void);
void sub_InitPtr_sub_6fae8cd0_101967f0(void);
void sub_InitPtr_UI_inv_6fb3c4c0_10196820(void);
void sub_InitPtr_sub_6fad6320_10196830(void);
void sub_InitPtr_D2Client_loc_6fb3b6b0_10196840(void);
void sub_InitPtr_D2Client_loc_6fb3cd00_10196850(void);
void sub_InitPtr_UI_inv_6fb3c580_10196860(void);
void sub_InitPtr_sub_6fb45f80_10196870(void);
void sub_InitPtr_UI_inv_6fb3d3d0_10196880(void);
void sub_InitPtr_D2Client_loc_6fb3c470_10196890(void);
void sub_InitPtr_UI_inv_6fb3c440_101968a0(void);
void sub_InitPtr_UI_inv_6fb3f880_101968b0(void);
void sub_InitPtr_sub_6fb096a0_101968c0(void);
void sub_InitPtr_ITEMS_ItemMode_6fcf6c80_10196a00(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcffdc0_10196a10(void);
void sub_InitPtr_sub_6fdcc270_10196a20(void);
void sub_InitPtr_sub_6fac61b0_10196a40(void);
void sub_InitPtr_UNIT_CUnit_6fb59a20_10196a90(void);
void sub_InitPtr_PATH_Path_6fd876f0_10196aa0(void);
void sub_InitPtr_sub_6fc21420_10196ab0(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcff780_10196ac0(void);
void sub_InitPtr_SKILLS_Skills_6fcc1d10_10196ad0(void);
void sub_InitPtr_SKILLS_Skills_6fcbf3b0_10196ae0(void);
void sub_InitPtr_sub_6fcae900_10196af0(void);
void sub_InitPtr_GAME_Clients_6fc6ad10_10196b00(void);
void sub_InitPtr_SKILLS_Skills_6fcbea30_10196b10(void);
void sub_InitPtr_sub_6fd0fb80_10196b20(void);
void sub_InitPtr_Stats_StatsEx_6fd88a80_10196b30(void);
void sub_InitPtr_PATH_Path_6fd823e0_10196b50(void);
void sub_InitPtr_SKILLS_Skills_6fcbe490_10196b60(void);
void sub_InitPtr_SKILLS_Skills_6fcbe450_10196b70(void);
void sub_InitPtr_sub_6fcf16b0_10196b80(void);
void sub_InitPtr_INVENTORY_Inventory_6fd718a0_10196b90(void);
void sub_InitPtr_sub_6fc2e990_10196ba0(void);
void sub_InitPtr_sub_6fcf1650_10196bb0(void);
void sub_InitPtr_D2Game_loc_6fceece0_10196bc0(void);
void sub_InitPtr_INVENTORY_Inventory_6fd6e1b0_10196bf0(void);
void sub_InitPtr_GAME_Targets_6fd0fe40_10196e70(void);
void sub_InitPtr_D2Client_loc_6faed110_10196e80(void);
void sub_InitPtr_sub_6fad77e0_10197040(void);
void sub_InitPtr_ENGINE_Gfx_6fb1b5a0_10197050(void);
void sub_InitPtr_ENGINE_GfxUtil_6fb1e2c0_10197060(void);
void sub_InitPtr_ENGINE_Gfx_6fb1d280_10197070(void);
void sub_InitPtr_ENGINE_GfxUtil_6fb1db40_10197080(void);
void sub_InitPtr_ENGINE_Gfx_6fb19b40_10197090(void);
void sub_InitPtr_D2Client_loc_6fb18f40_101970a0(void);
void sub_InitPtr_INVENTORY_Inventory_6fd6fb50_101970b0(void);
void sub_InitPtr_INVENTORY_Inventory_6fd70e80_101970c0(void);
void sub_InitPtr_sub_6fac3ce0_101970d0(void);
void sub_InitPtr_sub_6fc6eb50_101970f0(void);
void sub_InitPtr_sub_6fc6e180_10197100(void);
void sub_InitPtr_UNIT_Party_6fcbc840_10197110(void);
void sub_InitPtr_sub_6fcae2a0_10197120(void);
void sub_InitPtr_PLAYER_PlayerPets_6fcb6ea0_10197130(void);
void sub_InitPtr_PLAYER_PlayerPets_6fcb67b0_10197140(void);
void sub_InitPtr_PLAYER_PlayerPets_6fcb6a40_10197150(void);
void sub_InitPtr_Ai_AiThink4_6fcc3ae0_10197160(void);
void sub_InitPtr_Ai_AiThink4_6fcc4890_10197170(void);
void sub_InitPtr_Ai_AiThink4_6fcc44c0_10197180(void);
void sub_InitPtr_sub_6fcbe290_10197190(void);
void sub_InitPtr_UNIT_SUnitEvent_6fc57190_101971a0(void);
void sub_InitPtr_UNIT_SUnitEvent_6fc57110_101971b0(void);
void sub_InitPtr_sub_6fcb2ed0_101971c0(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfa750_101971d0(void);
void sub_InitPtr_UNIT_SUnitDmg_6fcfff10_101971e0(void);
void sub_InitPtr_PLAYER_PlrModes_6fc98230_101971f0(void);
void sub_InitPtr_UNIT_CUnit_6fb55f70_10197200(void);
void sub_InitPtr_SKILLS_Skills_6fb53040_10197210(void);
void sub_InitPtr_SKILLS_SkillsBar_6fb779c0_10197220(void);
void sub_InitPtr_sub_6fad42b0_10197230(void);
void sub_InitPtr_sub_6fd00a20_10197250(void);
void sub_InitPtr_UNIT_UnitMode_6fada6c0_10197280(void);
void sub_InitPtr_ENGINE_Gfx_6fb1c490_10197290(void);
void sub_InitPtr_SKILLS_Skills_6fb51a50_101972a0(void);
void sub_InitPtr_sub_6fad2390_101973b0(void);
void sub_InitPtr_sub_6fb01e30_101973e0(void);
void sub_InitPtr_UNIT_Monster_6fb01860_101973f0(void);
void sub_InitPtr_sub_6fb6fec0_10197430(void);
void sub_InitPtr_sub_6fb71c40_101974a0(void);
void sub_InitPtr_UNIT_CUnit_6fb556c0_101974b0(void);
void sub_InitPtr_UNIT_CUnit_6fb55b90_101974c0(void);
void sub_InitPtr_sub_6faedcf0_10197510(void);
void sub_InitPtr_sub_6faee0c0_10197520(void);
void sub_InitPtr_UNIT_CUnit_6fb5a090_101975a0(void);
void sub_InitPtr_sub_6faf7d60_10197620(void);
void sub_InitPtr_UNIT_CUnit_6fb554a0_10197640(void);
void sub_InitPtr_sub_6fad9990_10197650(void);
void sub_InitPtr_sub_6fab1400_10197670(void);
void sub_InitPtr_ENGINE_Gfx_6fb1ba90_10197680(void);
void sub_102ec910(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __thiscall sub_102ec930(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void sub_102ec960(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8, uint32_t param_9);
void sub_102ec990(void);
void sub_102ec9b0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102ec9d0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102ec9f0(uint32_t param_1,uint32_t param_2);
void sub_102eca10(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_102eca30(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102eca50(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8, uint32_t param_9);
void sub_102eca80(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8, uint32_t param_9,uint32_t param_10);
void __thiscall sub_102ecac0(void *this);
void sub_102ecae0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_102ecb00(uint32_t param_1,uint32_t param_2);
void sub_102ecb30(void);
void sub_102ecb60(void);
void sub_102ecb80(uint32_t param_1,uint32_t param_2);
void __thiscall sub_102ecba0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void sub_102ecbc0(void);
void sub_102ecbe0(void);
void sub_Hook_SKILLS_SkillNec_6fc70250_102ecbf0(uint32_t *reg_EAX,uint32_t reg_EBX,uint32_t reg_ESI,uint32_t reg_EDI);
void sub_Hook_SKILLS_SkillNec_6fc70250_102ecc00(int reg_EBX,int *reg_ESI,uint32_t reg_EDI);
void sub_Hook_sub_6fd019c0_102ecc10(uint32_t reg_EAX,int *reg_EBX,int param_3);
void sub_102ecc20(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_Hook_sub_6fc2eae0_102ecc40(int reg_EBX,uint32_t param_2);
void sub_Hook_sub_6fc92fc0_102ecc70(uint32_t *reg_EAX,uint reg_EBX,uint32_t param_3,uint32_t param_4);
void sub_102ecc90(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void __thiscall sub_102eccc0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_Hook_sub_6fb70d30_102ecce0(void);
void sub_102eccf0(void);
void sub_102ecd00(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_102ecd20(uint32_t param_1,uint32_t param_2);
void sub_102ecd40(void);
void sub_102ecd50(void);
void sub_102ecd60(void);

/* ---- _unattributed/after_functions_SaveFunctions_unit50.cpp ---- */
void sub_init_101976b0(void);
void sub_init_101976d0(void);
void sub_init_101977c0(void);
void sub_init_10197820(void);
void sub_init_10197880(void);
void sub_init_101978f0(void);
void sub_init_10197950(void);
void sub_init_101979b0(void);
void sub_init_10197a20(void);
void sub_init_10197a90(void);
void sub_init_10197b00(void);
void sub_init_10197b60(void);
void sub_init_10197bc0(void);
void sub_init_10197c30(void);
void sub_init_10197ca0(void);
void sub_init_10197d10(void);
void sub_init_10197d70(void);
void sub_init_10197dd0(void);
void sub_init_10197e30(void);
void sub_init_10197e90(void);
void sub_init_10197f10(void);
void sub_init_10197f80(void);
void sub_init_10197fe0(void);
void sub_init_10198040(void);
void sub_init_101980e0(void);
void sub_init_10198150(void);
void sub_init_101981b0(void);
void sub_init_10198210(void);
void sub_init_10198270(void);
void sub_init_10198300(void);
void sub_init_101983c0(void);
void sub_init_10198430(void);
void sub_init_101984a0(void);
void sub_init_101984f0(void);
void sub_init_10198550(void);
void sub_init_101985e0(void);
void sub_init_101986e0(void);
void sub_init_10198760(void);
void sub_init_101987f0(void);
void sub_init_10198db0(void);
void sub_init_10199780(void);
void sub_init_1019a180(void);
void sub_init_1019a500(void);
void sub_init_1019aa30(void);
void sub_init_1019abe0(void);
void sub_init_1019ac40(void);
void sub_init_1019aca0(void);
void sub_init_1019ad00(void);
void sub_init_1019ad60(void);
void sub_init_1019f6b0(void);

/* ---- _unattributed/after_functions_SaveFunctions_unit51.cpp ---- */
void sub_init_1019f6d0(void);
void sub_init_1019f6f0(void);
void sub_init_1019f7e0(void);
void sub_init_1019f840(void);
void sub_init_1019f8a0(void);
void sub_init_1019f910(void);
void sub_init_1019f970(void);
void sub_init_1019f9d0(void);
void sub_init_1019fa40(void);
void sub_init_1019fab0(void);
void sub_init_1019fb20(void);
void sub_init_1019fb80(void);
void sub_init_1019fbe0(void);
void sub_init_1019fc50(void);
void sub_init_1019fcc0(void);
void sub_init_1019fd30(void);
void sub_init_1019fd90(void);
void sub_init_1019fdf0(void);
void sub_init_1019fe50(void);
void sub_init_1019feb0(void);
void sub_init_1019ff30(void);
void sub_init_1019ffa0(void);
void sub_init_101a0000(void);
void sub_init_101a0060(void);
void sub_init_101a0100(void);
void sub_init_101a0170(void);
void sub_init_101a01d0(void);
void sub_init_101a0230(void);
void sub_init_101a0290(void);
void sub_init_101a0320(void);
void sub_init_101a03e0(void);
void sub_init_101a0450(void);
void sub_init_101a04c0(void);
void sub_init_101a0510(void);
void sub_init_101a0570(void);
void sub_init_101a0600(void);
void sub_init_101a0700(void);
void sub_init_101a0780(void);
void sub_init_101a0810(void);
void sub_init_101a0dd0(void);
void sub_init_101a17a0(void);
void sub_init_101a21a0(void);
void sub_init_101a2520(void);
void sub_init_101a2a50(void);
void sub_init_101a2c00(void);
void sub_init_101a2c60(void);
void sub_init_101a2cc0(void);
void sub_init_101a2d20(void);
void sub_init_101a2d80(void);
void sub_InitPtr_D2Common_DAT_6fde9e1c_101a3760(void);
void sub_InitPtr_D2Client_DAT_6fb8d8a0_101a4ba0(void);
void __fastcall sub_6fb691c0(int *param_1);   /* game binding -> D2Client.dll +0xb91c0, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
void __fastcall sub_102f12a0(int param_1);
void __fastcall sub_102f1390(int param_1);
void __fastcall sub_102f13f0(int param_1);
uint32_t sub_102f14d0(void);
void sub_102f1500(void);

/* ---- _unattributed/after_functions_SaveFunctions_unit52.cpp ---- */
void sub_init_101a76d0(void);
void sub_init_101a76f0(void);
void sub_init_101a77e0(void);
void sub_init_101a7840(void);
void sub_init_101a78a0(void);
void sub_init_101a7910(void);
void sub_init_101a7970(void);
void sub_init_101a79d0(void);
void sub_init_101a7a40(void);
void sub_init_101a7ab0(void);
void sub_init_101a7b20(void);
void sub_init_101a7b80(void);
void sub_init_101a7be0(void);
void sub_init_101a7c50(void);
void sub_init_101a7cc0(void);
void sub_init_101a7d30(void);
void sub_init_101a7d90(void);
void sub_init_101a7df0(void);
void sub_init_101a7e50(void);
void sub_init_101a7eb0(void);
void sub_init_101a7f30(void);
void sub_init_101a7fa0(void);
void sub_init_101a8000(void);
void sub_init_101a8060(void);
void sub_init_101a8100(void);
void sub_init_101a8170(void);
void sub_init_101a81d0(void);
void sub_init_101a8230(void);
void sub_init_101a8290(void);
void sub_init_101a8320(void);
void sub_init_101a83e0(void);
void sub_init_101a8450(void);
void sub_init_101a84c0(void);
void sub_init_101a8510(void);
void sub_init_101a8570(void);
void sub_init_101a8600(void);
void sub_init_101a8700(void);
void sub_init_101a8780(void);
void sub_init_101a8810(void);
void sub_init_101a8dd0(void);
void sub_init_101a97a0(void);
void sub_init_101aa1a0(void);
void sub_init_101aa520(void);
void sub_init_101aaa50(void);
void sub_init_101aac00(void);
void sub_init_101aac60(void);
void sub_init_101aacc0(void);
void sub_init_101aad20(void);
void sub_init_101aad80(void);
void sub_InitPtr_D2Common_DAT_6fde9e1c_101ab760(void);
void sub_InitPtr_D2Client_DAT_6fb8da10_101acb90(void);
void sub_InitPtr_D2Client_DAT_6fb84390_101ad750(void);
void sub_InitPtr_D2Client_DAT_6fb84290_101ad760(void);
void thunk_FUN_102f1500(void);
uint32_t __fastcall sub_102f1550(int param_1,int param_2);
uint32_t __fastcall sub_102f16c0(int param_1,int param_2);
uint32_t __fastcall sub_102f1a20(int param_1);
uint32_t __fastcall sub_102f1b50(int param_1);
uint32_t __fastcall sub_102f1c30(int param_1,int param_2);
uint32_t __fastcall sub_102f1d60(int param_1,int param_2);
uint32_t sub_102f1de0(void);

/* ---- _unattributed/after_functions_SaveFunctions_unit53.cpp ---- */
void sub_init_101af6d0(void);
void sub_init_101af6f0(void);
void sub_init_101af7e0(void);
void sub_init_101af840(void);
void sub_init_101af8a0(void);
void sub_init_101af910(void);
void sub_init_101af970(void);
void sub_init_101af9d0(void);
void sub_init_101afa40(void);
void sub_init_101afab0(void);
void sub_init_101afb20(void);
void sub_init_101afb80(void);
void sub_init_101afbe0(void);
void sub_init_101afc50(void);
void sub_init_101afcc0(void);
void sub_init_101afd30(void);
void sub_init_101afd90(void);
void sub_init_101afdf0(void);
void sub_init_101afe50(void);
void sub_init_101afeb0(void);
void sub_init_101aff30(void);
void sub_init_101affa0(void);
void sub_init_101b0000(void);
void sub_init_101b0060(void);
void sub_init_101b0100(void);
void sub_init_101b0170(void);
void sub_init_101b01d0(void);
void sub_init_101b0230(void);
void sub_init_101b0290(void);
void sub_init_101b0320(void);
void sub_init_101b03e0(void);
void sub_init_101b0450(void);
void sub_init_101b04c0(void);
void sub_init_101b0510(void);
void sub_init_101b0570(void);
void sub_init_101b0600(void);
void sub_init_101b0700(void);
void sub_init_101b0780(void);
void sub_init_101b0810(void);
void sub_init_101b0dd0(void);
void sub_init_101b17a0(void);
void sub_init_101b21a0(void);
void sub_init_101b2520(void);
void sub_init_101b2a50(void);
void sub_init_101b2c00(void);
void sub_init_101b2c60(void);
void sub_init_101b2cc0(void);
void sub_init_101b2d20(void);
void sub_init_101b2d80(void);
void sub_InitPtr_D2Common_DAT_6fde9e1c_101b3760(void);
void sub_InitPtr_D2Game_DAT_6fd2db68_101b4b70(void);
void sub_InitPtr_D2Game_DAT_6fd22ab0_101b4cf0(void);
void __fastcall sub_102f1e20(int param_1,int *param_2,int param_3,int param_4);
int __fastcall sub_102f1f10(uint *param_1,int param_2);
void __fastcall sub_102f1f30(int param_1,int *param_2,int param_3,int param_4);
void __fastcall sub_102f2030(int param_1,int param_2,int param_3,int param_4);
void __fastcall sub_102f2100(int param_1,int *param_2,int *param_3,uint32_t reg_EBX);
void __fastcall sub_102f2230(int param_1,int *param_2,int param_3,int param_4);
uint32_t sub_102f2320(void);

/* ---- _unattributed/after_functions_SaveFunctions_unit54.cpp ---- */
void sub_init_101b76d0(void);
void sub_init_101b76f0(void);
void sub_init_101b77e0(void);
void sub_init_101b7840(void);
void sub_init_101b78a0(void);
void sub_init_101b7910(void);
void sub_init_101b7970(void);
void sub_init_101b79d0(void);
void sub_init_101b7a40(void);
void sub_init_101b7ab0(void);
void sub_init_101b7b20(void);
void sub_init_101b7b80(void);
void sub_init_101b7be0(void);
void sub_init_101b7c50(void);
void sub_init_101b7cc0(void);
void sub_init_101b7d30(void);
void sub_init_101b7d90(void);
void sub_init_101b7df0(void);
void sub_init_101b7e50(void);
void sub_init_101b7eb0(void);
void sub_init_101b7f30(void);
void sub_init_101b7fa0(void);
void sub_init_101b8000(void);
void sub_init_101b8060(void);
void sub_init_101b8100(void);
void sub_init_101b8170(void);
void sub_init_101b81d0(void);
void sub_init_101b8230(void);
void sub_init_101b8290(void);
void sub_init_101b8320(void);
void sub_init_101b83e0(void);
void sub_init_101b8450(void);
void sub_init_101b84c0(void);
void sub_init_101b8510(void);
void sub_init_101b8570(void);
void sub_init_101b8600(void);
void sub_init_101b8700(void);
void sub_init_101b8780(void);
void sub_init_101b8810(void);
void sub_init_101b8dd0(void);
void sub_init_101b97a0(void);
void sub_init_101ba1a0(void);
void sub_init_101ba520(void);
void sub_init_101baa50(void);
void sub_init_101bac00(void);
void sub_init_101bac60(void);
void sub_init_101bacc0(void);
void sub_init_101bad20(void);
void sub_init_101bad80(void);
void sub_InitPtr_D2Game_DAT_6fd2d970_101bcb80(void);
uint32_t __fastcall sub_102f2350(int param_1,int *param_2);
uint32_t __fastcall sub_102f23d0(int param_1,int *param_2);
uint32_t sub_102f2510(void);

/* ---- _unattributed/after_functions_SaveFunctions_unit55.cpp ---- */
void sub_init_101bf6d0(void);
void sub_init_101bf6f0(void);
void sub_init_101bf7e0(void);
void sub_init_101bf840(void);
void sub_init_101bf8a0(void);
void sub_init_101bf910(void);
void sub_init_101bf970(void);
void sub_init_101bf9d0(void);
void sub_init_101bfa40(void);
void sub_init_101bfab0(void);
void sub_init_101bfb20(void);
void sub_init_101bfb80(void);
void sub_init_101bfbe0(void);
void sub_init_101bfc50(void);
void sub_init_101bfcc0(void);
void sub_init_101bfd30(void);
void sub_init_101bfd90(void);
void sub_init_101bfdf0(void);
void sub_init_101bfe50(void);
void sub_init_101bfeb0(void);
void sub_init_101bff30(void);
void sub_init_101bffa0(void);
void sub_init_101c0000(void);
void sub_init_101c0060(void);
void sub_init_101c0100(void);
void sub_init_101c0170(void);
void sub_init_101c01d0(void);
void sub_init_101c0230(void);
void sub_init_101c0290(void);
void sub_init_101c0320(void);
void sub_init_101c03e0(void);
void sub_init_101c0450(void);
void sub_init_101c04c0(void);
void sub_init_101c0510(void);
void sub_init_101c0570(void);
void sub_init_101c0600(void);
void sub_init_101c0700(void);
void sub_init_101c0780(void);
void sub_init_101c0810(void);
void sub_init_101c0dd0(void);
void sub_init_101c17a0(void);
void sub_init_101c21a0(void);
void sub_init_101c2520(void);
void sub_init_101c2a50(void);
void sub_init_101c2c00(void);
void sub_init_101c2c60(void);
void sub_init_101c2cc0(void);
void sub_init_101c2d20(void);
void sub_init_101c2d80(void);
void sub_InitPtr_D2Common_DAT_6fde9e1c_101c3760(void);
void sub_InitPtr_D2Game_DAT_6fd1b870_101c3c30(void);
void sub_InitPtr_D2Game_DAT_6fd1b770_101c3c40(void);
void sub_InitPtr_D2Game_DAT_6fd2da48_101c4b60(void);
void sub_InitPtr_D2Client_DAT_6fb84390_101c5750(void);
void sub_InitPtr_D2Client_DAT_6fb84290_101c5760(void);
void __cdecl sub_102f2530(double param_1,double param_2);
double * __cdecl sub_102f2570(double *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
uint8_t (*) [16] __cdecl sub_102f2600(uint8_t (*param_1) [16],uint8_t param_2 [16]);
uint32_t __fastcall sub_102f2660(int param_1,int *param_2,int param_3,uint32_t reg_EBX,uint32_t reg_ESI);
uint32_t __fastcall sub_102f27f0(int param_1,int param_2);
uint32_t __fastcall sub_102f28e0(int param_1,int *param_2,int *param_3);
uint32_t __fastcall sub_102f2af0(int param_1,int *param_2,int param_3);
uint32_t __fastcall sub_102f2d10(int param_1,int param_2,int param_3);
uint32_t __fastcall sub_102f31a0(int param_1,int *param_2,int param_3);
uint32_t __fastcall sub_102f3260(int param_1,int *param_2,int param_3);
uint32_t __fastcall sub_102f3400(int param_1,int param_2,int param_3);
char __fastcall sub_102f3590(int param_1,int *param_2,int *param_3);
uint32_t __fastcall sub_102f3770(int param_1,int param_2);
uint32_t __fastcall sub_102f38a0(int param_1,int *param_2,int *param_3,uint32_t reg_EBX);
uint32_t __fastcall sub_102f3d40(int *param_1,int *param_2,uint32_t param_3,uint32_t reg_ESI);
uint32_t __fastcall sub_102f40c0(int param_1,int *param_2,int param_3);
uint32_t sub_102f4210(void);
uint32_t __fastcall sub_102f42a0(int param_1,int *param_2);

/* ---- _unattributed/after_functions_SaveFunctions_unit56.cpp ---- */
void sub_init_101c76d0(void);
void sub_init_101c76f0(void);
void sub_init_101c77e0(void);
void sub_init_101c7840(void);
void sub_init_101c78a0(void);
void sub_init_101c7910(void);
void sub_init_101c7970(void);
void sub_init_101c79d0(void);
void sub_init_101c7a40(void);
void sub_init_101c7ab0(void);
void sub_init_101c7b20(void);
void sub_init_101c7b80(void);
void sub_init_101c7be0(void);
void sub_init_101c7c50(void);
void sub_init_101c7cc0(void);
void sub_init_101c7d30(void);
void sub_init_101c7d90(void);
void sub_init_101c7df0(void);
void sub_init_101c7e50(void);
void sub_init_101c7eb0(void);
void sub_init_101c7f30(void);
void sub_init_101c7fa0(void);
void sub_init_101c8000(void);
void sub_init_101c8060(void);
void sub_init_101c8100(void);
void sub_init_101c8170(void);
void sub_init_101c81d0(void);
void sub_init_101c8230(void);
void sub_init_101c8290(void);
void sub_init_101c8320(void);
void sub_init_101c83e0(void);
void sub_init_101c8450(void);
void sub_init_101c84c0(void);
void sub_init_101c8510(void);
void sub_init_101c8570(void);
void sub_init_101c8600(void);
void sub_init_101c8700(void);
void sub_init_101c8780(void);
void sub_init_101c8810(void);
void sub_init_101c8dd0(void);
void sub_init_101c97a0(void);
void sub_init_101ca1a0(void);
void sub_init_101ca520(void);
void sub_init_101caa50(void);
void sub_init_101cac00(void);
void sub_init_101cac60(void);
void sub_init_101cacc0(void);
void sub_init_101cad20(void);
void sub_init_101cad80(void);
void sub_InitPtr_D2Common_DAT_6fde9e1c_101cb760(void);
void __fastcall sub_102f4320(int *param_1,int *param_2);
uint32_t __fastcall sub_102f43d0(int *param_1);
uint __fastcall sub_102f4560(int *param_1);
uint32_t __fastcall sub_102f4670(int *param_1);
uint32_t __fastcall sub_102f5190(int *param_1);
int __fastcall sub_102f5380(int *param_1);
uint32_t __fastcall sub_102f5570(int *param_1);
uint32_t __fastcall sub_Wraps_D2Game_Quests_a3q5_102f56f0(int *param_1);
uint32_t __fastcall sub_102f58d0(int *param_1);
uint32_t __fastcall sub_102f5960(int *param_1);
uint32_t __fastcall sub_102f5a80(int *param_1);
uint32_t sub_102f5b50(int *param_1);
uint32_t sub_102f5ca0(int *param_1);
uint32_t __fastcall sub_102f5e00(int param_1,uint param_2,uint param_3);

/* ---- _unattributed/after_functions_SaveFunctions_unit57.cpp ---- */
void sub_init_101cf6d0(void);
void sub_init_101cf6f0(void);
void sub_init_101cf7e0(void);
void sub_init_101cf840(void);
void sub_init_101cf8a0(void);
void sub_init_101cf910(void);
void sub_init_101cf970(void);
void sub_init_101cf9d0(void);
void sub_init_101cfa40(void);
void sub_init_101cfab0(void);
void sub_init_101cfb20(void);
void sub_init_101cfb80(void);
void sub_init_101cfbe0(void);
void sub_init_101cfc50(void);
void sub_init_101cfcc0(void);
void sub_init_101cfd30(void);
void sub_init_101cfd90(void);
void sub_init_101cfdf0(void);
void sub_init_101cfe50(void);
void sub_init_101cfeb0(void);
void sub_init_101cff30(void);
void sub_init_101cffa0(void);
void sub_init_101d0000(void);
void sub_init_101d0060(void);
void sub_init_101d0100(void);
void sub_init_101d0170(void);
void sub_init_101d01d0(void);
void sub_init_101d0230(void);
void sub_init_101d0290(void);
void sub_init_101d0320(void);
void sub_init_101d03e0(void);
void sub_init_101d0450(void);
void sub_init_101d04c0(void);
void sub_init_101d0510(void);
void sub_init_101d0570(void);
void sub_init_101d0600(void);
void sub_init_101d0700(void);
void sub_init_101d0780(void);
void sub_init_101d0810(void);
void sub_init_101d0dd0(void);
void sub_init_101d17a0(void);
void sub_init_101d21a0(void);
void sub_init_101d2520(void);
void sub_init_101d2a50(void);
void sub_init_101d2c00(void);
void sub_init_101d2c60(void);
void sub_init_101d2cc0(void);
void sub_init_101d2d20(void);
void sub_init_101d2d80(void);

/* ---- _unattributed/after_functions_SaveFunctions_unit58.cpp ---- */
void sub_init_101d3420(void);
void sub_init_101d3440(void);
void sub_init_101d3530(void);
void sub_init_101d3590(void);
void sub_init_101d35f0(void);
void sub_init_101d3660(void);
void sub_init_101d36c0(void);
void sub_init_101d3720(void);
void sub_init_101d3790(void);
void sub_init_101d3800(void);
void sub_init_101d3870(void);
void sub_init_101d38d0(void);
void sub_init_101d3930(void);
void sub_init_101d39a0(void);
void sub_init_101d3a10(void);
void sub_init_101d3a80(void);
void sub_init_101d3ae0(void);
void sub_init_101d3b40(void);
void sub_init_101d3ba0(void);
void sub_init_101d3c00(void);
void sub_init_101d3c80(void);
void sub_init_101d3cf0(void);
void sub_init_101d3d50(void);
void sub_init_101d3db0(void);
void sub_init_101d3e50(void);
void sub_init_101d3ec0(void);
void sub_init_101d3f20(void);
void sub_init_101d3f80(void);
void sub_init_101d3fe0(void);
void sub_init_101d4070(void);
void sub_init_101d4130(void);
void sub_init_101d41a0(void);
void sub_init_101d4210(void);
void sub_init_101d4260(void);
void sub_init_101d42c0(void);
void sub_init_101d4350(void);
void sub_init_101d4450(void);
void sub_init_101d44d0(void);
void sub_init_101d4560(void);
void sub_init_101d4b20(void);
void sub_init_101d54f0(void);
void sub_init_101d5ef0(void);
void sub_init_101d6270(void);
void sub_init_101d67a0(void);
void sub_init_101d6950(void);
void sub_init_101d69b0(void);
void sub_init_101d6a10(void);
void sub_init_101d6a70(void);
void sub_init_101d6ad0(void);
void sub_InitPtr_D2Common_DAT_6fde9e1c_101d74b0(void);
void sub_InitPtr_D2Client_DAT_6fb8ea48_101d8800(void);
void sub_InitPtr_D2Client_DAT_6fbba608_101d8880(void);
uint32_t __fastcall sub_102f5f60(int *param_1,uint param_2,uint param_3);
uint32_t __fastcall sub_102f6070(int *param_1,uint param_2,uint32_t param_3);
uint32_t __fastcall sub_102f6170(int *param_1,uint param_2,uint param_3);
uint32_t __fastcall sub_102f6360(int param_1,uint param_2,uint param_3);
uint32_t __fastcall sub_102f6470(int param_1,uint param_2,uint param_3);
uint32_t __fastcall sub_102f6520(int param_1,uint param_2,uint32_t param_3);
uint32_t __fastcall sub_102f6650(int param_1,uint param_2,uint32_t param_3);
uint32_t __fastcall sub_102f66f0(int param_1,int param_2,uint32_t param_3);
uint32_t __fastcall sub_102f6770(int param_1,uint param_2,uint32_t param_3);
uint32_t __fastcall sub_102f6810(int param_1,uint param_2,uint param_3);
uint32_t __fastcall sub_102f6970(int param_1,uint param_2,uint param_3);
uint32_t __fastcall sub_102f6a20(int *param_1,uint param_2,uint32_t param_3);
void sub_102f6a90(uint32_t param_1);
uint32_t __fastcall sub_102f6ac0(int param_1,uint param_2,uint param_3);
uint32_t __fastcall sub_102f6be0(int *param_1,uint param_2,uint param_3);
uint32_t __fastcall sub_102f6eb0(int *param_1,uint param_2);
uint32_t __fastcall sub_102f70e0(int param_1,uint param_2,uint param_3);
uint32_t __fastcall sub_102f7170(int *param_1,uint param_2,uint param_3);

/* ---- _unattributed/after_functions_SaveFunctions_unit59.cpp ---- */
void sub_init_101db420(void);
void sub_init_101db440(void);
void sub_init_101db530(void);
void sub_init_101db590(void);
void sub_init_101db5f0(void);
void sub_init_101db660(void);
void sub_init_101db6c0(void);
void sub_init_101db720(void);
void sub_init_101db790(void);
void sub_init_101db800(void);
void sub_init_101db870(void);
void sub_init_101db8d0(void);
void sub_init_101db930(void);
void sub_init_101db9a0(void);
void sub_init_101dba10(void);
void sub_init_101dba80(void);
void sub_init_101dbae0(void);
void sub_init_101dbb40(void);
void sub_init_101dbba0(void);
void sub_init_101dbc00(void);
void sub_init_101dbc80(void);
void sub_init_101dbcf0(void);
void sub_init_101dbd50(void);
void sub_init_101dbdb0(void);
void sub_init_101dbe50(void);
void sub_init_101dbec0(void);
void sub_init_101dbf20(void);
void sub_init_101dbf80(void);
void sub_init_101dbfe0(void);
void sub_init_101dc070(void);
void sub_init_101dc130(void);
void sub_init_101dc1a0(void);
void sub_init_101dc210(void);
void sub_init_101dc260(void);
void sub_init_101dc2c0(void);
void sub_init_101dc350(void);
void sub_init_101dc450(void);
void sub_init_101dc4d0(void);
void sub_init_101dc560(void);
void sub_init_101dcb20(void);
void sub_init_101dd4f0(void);
void sub_init_101ddef0(void);
void sub_init_101de270(void);
void sub_init_101de7a0(void);
void sub_init_101de950(void);
void sub_init_101de9b0(void);
void sub_init_101dea10(void);
void sub_init_101dea70(void);
void sub_init_101dead0(void);
void sub_InitPtr_D2Common_DAT_6fde9e1c_101df4b0(void);
void sub_InitPtr_D2Client_DAT_6fb8e928_101e0820(void);
void sub_InitPtr_D2Client_DAT_6fbcbbfc_101e1c10(void);
uint32_t __fastcall sub_102f7aa0(int param_1,int param_2,uint32_t param_3);
uint32_t __fastcall sub_102f7b10(int param_1,uint param_2,uint param_3);
uint32_t __fastcall sub_Wraps_D2Game_SKILLS_SkilPal_102f7bc0(int *param_1,uint param_2,uint32_t reg_ESI);
uint32_t __fastcall sub_102f7db0(int *param_1,uint param_2);
uint32_t sub_102f8000(void);

/* ---- _unattributed/after_functions_SaveFunctions_unit60.cpp ---- */
void sub_init_101e3420(void);
void sub_init_101e3440(void);
void sub_init_101e3530(void);
void sub_init_101e3590(void);
void sub_init_101e35f0(void);
void sub_init_101e3660(void);
void sub_init_101e36c0(void);
void sub_init_101e3720(void);
void sub_init_101e3790(void);
void sub_init_101e3800(void);
void sub_init_101e3870(void);
void sub_init_101e38d0(void);
void sub_init_101e3930(void);
void sub_init_101e39a0(void);
void sub_init_101e3a10(void);
void sub_init_101e3a80(void);
void sub_init_101e3ae0(void);
void sub_init_101e3b40(void);
void sub_init_101e3ba0(void);
void sub_init_101e3c00(void);
void sub_init_101e3c80(void);
void sub_init_101e3cf0(void);
void sub_init_101e3d50(void);
void sub_init_101e3db0(void);
void sub_init_101e3e50(void);
void sub_init_101e3ec0(void);
void sub_init_101e3f20(void);
void sub_init_101e3f80(void);
void sub_init_101e3fe0(void);
void sub_init_101e4070(void);
void sub_init_101e4130(void);
void sub_init_101e41a0(void);
void sub_init_101e4210(void);
void sub_init_101e4260(void);
void sub_init_101e42c0(void);
void sub_init_101e4350(void);
void sub_init_101e4450(void);
void sub_init_101e44d0(void);
void sub_init_101e4560(void);
void sub_init_101e4b20(void);
void sub_init_101e54f0(void);
void sub_init_101e5ef0(void);
void sub_init_101e6270(void);
void sub_init_101e67a0(void);
void sub_init_101e6950(void);
void sub_init_101e69b0(void);
void sub_init_101e6a10(void);
void sub_init_101e6a70(void);
void sub_init_101e6ad0(void);

/* ---- _unattributed/after_functions_SaveFunctions_unit61.cpp ---- */
void sub_init_101eb420(void);
void sub_init_101eb440(void);
void sub_init_101eb530(void);
void sub_init_101eb590(void);
void sub_init_101eb5f0(void);
void sub_init_101eb660(void);
void sub_init_101eb6c0(void);
void sub_init_101eb720(void);
void sub_init_101eb790(void);
void sub_init_101eb800(void);
void sub_init_101eb870(void);
void sub_init_101eb8d0(void);
void sub_init_101eb930(void);
void sub_init_101eb9a0(void);
void sub_init_101eba10(void);
void sub_init_101eba80(void);
void sub_init_101ebae0(void);
void sub_init_101ebb40(void);
void sub_init_101ebba0(void);
void sub_init_101ebc00(void);
void sub_init_101ebc80(void);
void sub_init_101ebcf0(void);
void sub_init_101ebd50(void);
void sub_init_101ebdb0(void);
void sub_init_101ebe50(void);
void sub_init_101ebec0(void);
void sub_init_101ebf20(void);
void sub_init_101ebf80(void);
void sub_init_101ebfe0(void);
void sub_init_101ec070(void);
void sub_init_101ec130(void);
void sub_init_101ec1a0(void);
void sub_init_101ec210(void);
void sub_init_101ec260(void);
void sub_init_101ec2c0(void);
void sub_init_101ec350(void);
void sub_init_101ec450(void);
void sub_init_101ec4d0(void);
void sub_init_101ec560(void);
void sub_init_101ecb20(void);
void sub_init_101ed4f0(void);
void sub_init_101edef0(void);
void sub_init_101ee270(void);
void sub_init_101ee7a0(void);
void sub_init_101ee950(void);
void sub_init_101ee9b0(void);
void sub_init_101eea10(void);
void sub_init_101eea70(void);
void sub_init_101eead0(void);
void sub_InitPtr_D2Common_DAT_6fde9e1c_101ef4b0(void);
void sub_InitPtr_D2Client_DAT_6fba5210_101f0830(void);
void __thiscall sub_102f8040(void *this,uint32_t *param_2,int param_3,uint32_t param_4,uint32_t param_5, uint32_t param_6,uint reg_EDX);
void __fastcall sub_102f8410(uint param_1,uint32_t param_2,uint *param_3,uint param_4,uint32_t param_5, uint32_t param_6,uint32_t param_7);
void __fastcall sub_102f8490(int param_1,uint32_t param_2,uint *param_3,uint param_4,uint32_t param_5, uint32_t param_6,uint32_t param_7);
void __fastcall sub_102f86b0(uint param_1,uint32_t param_2,uint *param_3,uint param_4,int param_5,int param_6, int param_7);
void sub_102f8b60(int param_1,uint param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5, int *reg_ECX,uint reg_EDX);
void sub_102f8ce0(int param_1,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5, void *reg_ECX,uint reg_EDX);
void sub_102f8e20(int *param_1,int param_2,int param_3,int param_4,int param_5,void *reg_ECX, uint reg_EDX);
void sub_102f9100(int *param_1,uint param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5 ,int *reg_ECX,uint reg_EDX);
void sub_102f91b0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int *param_6, int param_7,uint8_t *param_8);
int __fastcall sub_102f9260(uint param_1,uint param_2,uint param_3,int param_4);
uint32_t sub_102f92b0(void);
void * __fastcall sub_102f9300(void *param_1,void *param_2);
uint32_t __fastcall sub_102f9330(int param_1,uint reg_EDX);

/* ---- _unattributed/after_functions_SaveFunctions_unit62.cpp ---- */
void sub_init_101f3420(void);
void sub_init_101f3440(void);
void sub_init_101f3530(void);
void sub_init_101f3590(void);
void sub_init_101f35f0(void);
void sub_init_101f3660(void);
void sub_init_101f36c0(void);
void sub_init_101f3720(void);
void sub_init_101f3790(void);
void sub_init_101f3800(void);
void sub_init_101f3870(void);
void sub_init_101f38d0(void);
void sub_init_101f3930(void);
void sub_init_101f39a0(void);
void sub_init_101f3a10(void);
void sub_init_101f3a80(void);
void sub_init_101f3ae0(void);
void sub_init_101f3b40(void);
void sub_init_101f3ba0(void);
void sub_init_101f3c00(void);
void sub_init_101f3c80(void);
void sub_init_101f3cf0(void);
void sub_init_101f3d50(void);
void sub_init_101f3db0(void);
void sub_init_101f3e50(void);
void sub_init_101f3ec0(void);
void sub_init_101f3f20(void);
void sub_init_101f3f80(void);
void sub_init_101f3fe0(void);
void sub_init_101f4070(void);
void sub_init_101f4130(void);
void sub_init_101f41a0(void);
void sub_init_101f4210(void);
void sub_init_101f4260(void);
void sub_init_101f42c0(void);
void sub_init_101f4350(void);
void sub_init_101f4450(void);
void sub_init_101f44d0(void);
void sub_init_101f4560(void);
void sub_init_101f4b20(void);
void sub_init_101f54f0(void);
void sub_init_101f5ef0(void);
void sub_init_101f6270(void);
void sub_init_101f67a0(void);
void sub_init_101f6950(void);
void sub_init_101f69b0(void);
void sub_init_101f6a10(void);
void sub_init_101f6a70(void);
void sub_init_101f6ad0(void);
void sub_InitPtr_D2Common_DAT_6fde9e1c_101f74b0(void);
void sub_InitPtr_D2Game_loc_6fcd31d0_101f7970(void);
void sub_InitPtr_D2Game_DAT_6fd1b870_101f7980(void);
void sub_InitPtr_D2Game_DAT_6fd1b770_101f7990(void);
void sub_InitPtr_D2Game_DAT_6fd274a8_101f87d0(void);
uint32_t __fastcall sub_102f94a0(uint32_t param_1,uint param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102f9610(int param_1,int param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102f98d0(int param_1,int *param_2,uint param_3,uint param_4,uint32_t reg_ESI, uint32_t reg_EDI);
void sub_102f9a90(int param_1,uint param_2,void *reg_ECX,int reg_EDX);
uint32_t __fastcall sub_102f9ac0(int param_1,int *param_2,uint param_3,uint32_t param_4);
bool __fastcall sub_102f9d10(int param_1,int *param_2,uint param_3,uint32_t param_4);
uint32_t __fastcall sub_102f9e30(int param_1,int param_2,uint32_t param_3,uint32_t param_4);
uint __fastcall sub_102f9f00(int param_1,int param_2,int param_3,uint32_t param_4);
uint32_t __fastcall sub_102f9f80(int param_1,int param_2,uint param_3,int param_4);
uint32_t __fastcall sub_102fa0e0(int param_1,int param_2,uint param_3,int param_4);
uint32_t __fastcall sub_102fa2f0(int param_1,int param_2,uint param_3,int param_4,uint32_t reg_ESI);
uint32_t __fastcall sub_102fa4b0(int param_1,int *param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102fa770(int param_1,int param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102fa7f0(int param_1,int *param_2,uint param_3,uint param_4);
uint sub_102fab50(int param_1,uint param_2,uint reg_ECX,int *reg_EDX);
uint32_t __fastcall sub_102fab90(uint32_t param_1,int param_2,uint32_t param_3,uint32_t param_4);
uint32_t __fastcall sub_102fabe0(int param_1,int *param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102fad00(int param_1,int param_2,ushort param_3,int param_4,uint32_t reg_EBX, uint32_t reg_EDI);
uint32_t __fastcall sub_102fae90(int param_1,int param_2,uint param_3);
uint32_t __fastcall sub_102faf50(int param_1,int *param_2,uint32_t param_3,int param_4);
uint32_t __fastcall sub_102fb200(int param_1,int param_2,uint param_3,uint32_t param_4);
uint32_t __fastcall sub_102fb340(int param_1,int *param_2,uint param_3,void *param_4);
uint32_t __fastcall sub_102fb5b0(int param_1,int *param_2,uint param_3,uint8_t param_4);
uint32_t __fastcall sub_102fb6d0(int param_1,int *param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102fb7f0(int param_1,int *param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102fb950(int param_1,int param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102fba50(void *param_1,int *param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102fbb60(int param_1,int *param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102fbc90(int param_1,int *param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102fbf30(void *param_1,int *param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102fc070(void *param_1,int *param_2,uint param_3,uint param_4,uint32_t reg_EBX, uint32_t reg_ESI,uint32_t reg_EDI);
uint32_t __fastcall sub_102fc320(void *param_1,int *param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102fc440(void *param_1,int *param_2,uint param_3,int param_4);
uint32_t __fastcall sub_102fc5b0(int param_1,int param_2,uint param_3);
uint32_t __fastcall sub_102fc6a0(int param_1,int param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102fc760(int param_1,uint param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102fc940(int param_1,int param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102fcb80(void *param_1,int *param_2,uint param_3,uint param_4,uint32_t reg_EDI);
uint32_t __fastcall sub_102fcce0(int param_1,int *param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102fcec0(uint param_1,int *param_2,uint param_3,uint param_4,uint32_t reg_EDI);
uint32_t __fastcall sub_102fd110(uint32_t param_1,uint param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102fd320(int param_1,int param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102fd480(uint32_t param_1,int param_2,int param_3,uint32_t param_4);
uint32_t __fastcall sub_102fd510(uint param_1,int param_2,uint param_3,uint32_t param_4);
uint32_t __fastcall sub_102fd5b0(int *param_1,int *param_2,int *param_3,uint *param_4,uint32_t reg_EBX, uint32_t reg_ESI,uint32_t reg_EDI);
uint32_t __fastcall sub_102fd9e0(int param_1,int param_2,uint param_3,int param_4,uint32_t reg_EBX,uint32_t reg_ESI);
uint32_t __fastcall sub_102fdca0(int param_1,int param_2,uint param_3,uint param_4,uint32_t reg_EBX);
uint32_t __fastcall sub_102fde60(int param_1,int param_2,uint32_t param_3,uint32_t param_4);
uint32_t __fastcall sub_102fdeb0(int param_1,int *param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102fe410(int param_1,uint *param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102fe610(int param_1,int param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102fe760(int param_1,int param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_102fead0(void *param_1,int *param_2,uint *param_3,uint param_4);
uint32_t __fastcall sub_102febf0(int param_1,int param_2,uint param_3);
uint32_t __fastcall sub_102ff1c0(int param_1,int ****param_2,uint param_3,uint param_4,uint32_t reg_ESI, uint32_t reg_EDI);
uint32_t __fastcall sub_102ff680(int param_1,int *param_2,uint param_3);
uint32_t __fastcall sub_102ff7f0(int param_1,int *param_2,uint param_3,uint param_4);
uint32_t sub_102ff9d0(int *param_1,int param_2,uint param_3,uint32_t param_4,uint32_t param_5);
uint32_t __fastcall sub_102ffa30(int param_1,int param_2,uint param_3,uint32_t param_4);
uint32_t __fastcall sub_102ffac0(int param_1,int *param_2,uint param_3,uint32_t param_4);
uint32_t __fastcall sub_102ffc60(int param_1,int *param_2,uint param_3,uint param_4);

/* ---- _unattributed/after_functions_SaveFunctions_unit63.cpp ---- */
void sub_init_101fb420(void);
void sub_init_101fb440(void);
void sub_init_101fb530(void);
void sub_init_101fb590(void);
void sub_init_101fb5f0(void);
void sub_init_101fb660(void);
void sub_init_101fb6c0(void);
void sub_init_101fb720(void);
void sub_init_101fb790(void);
void sub_init_101fb800(void);
void sub_init_101fb870(void);
void sub_init_101fb8d0(void);
void sub_init_101fb930(void);
void sub_init_101fb9a0(void);
void sub_init_101fba10(void);
void sub_init_101fba80(void);
void sub_init_101fbae0(void);
void sub_init_101fbb40(void);
void sub_init_101fbba0(void);
void sub_init_101fbc00(void);
void sub_init_101fbc80(void);
void sub_init_101fbcf0(void);
void sub_init_101fbd50(void);
void sub_init_101fbdb0(void);
void sub_init_101fbe50(void);
void sub_init_101fbec0(void);
void sub_init_101fbf20(void);
void sub_init_101fbf80(void);
void sub_init_101fbfe0(void);
void sub_init_101fc070(void);
void sub_init_101fc130(void);
void sub_init_101fc1a0(void);
void sub_init_101fc210(void);
void sub_init_101fc260(void);
void sub_init_101fc2c0(void);
void sub_init_101fc350(void);
void sub_init_101fc450(void);
void sub_init_101fc4d0(void);
void sub_init_101fc560(void);
void sub_init_101fcb20(void);
void sub_init_101fd4f0(void);
void sub_init_101fdef0(void);
void sub_init_101fe270(void);
void sub_init_101fe7a0(void);
void sub_init_101fe950(void);
void sub_init_101fe9b0(void);
void sub_init_101fea10(void);
void sub_init_101fea70(void);
void sub_init_101fead0(void);
void sub_InitPtr_D2Common_DAT_6fde9e1c_101ff4b0(void);
void sub_InitPtr_D2Game_DAT_6fd27338_10200810(void);
uint32_t __fastcall sub_103007a0(uint32_t param_1,int param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_10300920(int param_1,uint *param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_10300a90(int param_1,int param_2,uint param_3,uint param_4);
uint32_t sub_10300be0(uint param_1,uint param_2,uint reg_EDX);
uint32_t __fastcall sub_10300ca0(uint32_t param_1,int *param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_10300e10(uint32_t param_1,uint param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_10300e90(int param_1,int param_2,int param_3,uint32_t param_4);
uint32_t __fastcall sub_Wraps_D2Game_SKILLS_SkilPal_10300fa0(int param_1,int *param_2,uint param_3,uint32_t reg_EBX);
uint32_t __fastcall sub_10301190(int param_1,int param_2);
uint32_t __fastcall sub_103011e0(int param_1,int param_2,uint param_3);
uint32_t __fastcall sub_10301260(int param_1,uint32_t *param_2,uint param_3);
uint32_t __fastcall sub_10301440(int param_1,int param_2,uint param_3);
uint32_t __fastcall sub_103014b0(int param_1,int param_2,uint param_3,uint param_4);
uint64_t sub_10301680(void);
uint64_t sub_103016a0(void);
void * __fastcall sub_103017a0(void *param_1);

/* ---- _unattributed/after_functions_SaveFunctions_unit64.cpp ---- */
void sub_init_10203420(void);
void sub_init_10203440(void);
void sub_init_10203530(void);
void sub_init_10203590(void);
void sub_init_102035f0(void);
void sub_init_10203660(void);
void sub_init_102036c0(void);
void sub_init_10203720(void);
void sub_init_10203790(void);
void sub_init_10203800(void);
void sub_init_10203870(void);
void sub_init_102038d0(void);
void sub_init_10203930(void);
void sub_init_102039a0(void);
void sub_init_10203a10(void);
void sub_init_10203a80(void);
void sub_init_10203ae0(void);
void sub_init_10203b40(void);
void sub_init_10203ba0(void);
void sub_init_10203c00(void);
void sub_init_10203c80(void);
void sub_init_10203cf0(void);
void sub_init_10203d50(void);
void sub_init_10203db0(void);
void sub_init_10203e50(void);
void sub_init_10203ec0(void);
void sub_init_10203f20(void);
void sub_init_10203f80(void);
void sub_init_10203fe0(void);
void sub_init_10204070(void);
void sub_init_10204130(void);
void sub_init_102041a0(void);
void sub_init_10204210(void);
void sub_init_10204260(void);
void sub_init_102042c0(void);
void sub_init_10204350(void);
void sub_init_10204450(void);
void sub_init_102044d0(void);
void sub_init_10204560(void);
void sub_init_10204b20(void);
void sub_init_102054f0(void);
void sub_init_10205ef0(void);
void sub_init_10206270(void);
void sub_init_102067a0(void);
void sub_init_10206950(void);
void sub_init_102069b0(void);
void sub_init_10206a10(void);
void sub_init_10206a70(void);
void sub_init_10206ad0(void);

/* ---- _unattributed/after_functions_SaveFunctions_unit65.cpp ---- */
void sub_init_1020b420(void);
void sub_init_1020b440(void);
void sub_init_1020b530(void);
void sub_init_1020b590(void);
void sub_init_1020b5f0(void);
void sub_init_1020b660(void);
void sub_init_1020b6c0(void);
void sub_init_1020b720(void);
void sub_init_1020b790(void);
void sub_init_1020b800(void);
void sub_init_1020b870(void);
void sub_init_1020b8d0(void);
void sub_init_1020b930(void);
void sub_init_1020b9a0(void);
void sub_init_1020ba10(void);
void sub_init_1020ba80(void);
void sub_init_1020bae0(void);
void sub_init_1020bb40(void);
void sub_init_1020bba0(void);
void sub_init_1020bc00(void);
void sub_init_1020bc80(void);
void sub_init_1020bcf0(void);
void sub_init_1020bd50(void);
void sub_init_1020bdb0(void);
void sub_init_1020be50(void);
void sub_init_1020bec0(void);
void sub_init_1020bf20(void);
void sub_init_1020bf80(void);
void sub_init_1020bfe0(void);
void sub_init_1020c070(void);
void sub_init_1020c130(void);
void sub_init_1020c1a0(void);
void sub_init_1020c210(void);
void sub_init_1020c260(void);
void sub_init_1020c2c0(void);
void sub_init_1020c350(void);
void sub_init_1020c450(void);
void sub_init_1020c4d0(void);
void sub_init_1020c560(void);
void sub_init_1020cb20(void);
void sub_init_1020d4f0(void);
void sub_init_1020def0(void);
void sub_init_1020e270(void);
void sub_init_1020e7a0(void);
void sub_init_1020e950(void);
void sub_init_1020e9b0(void);
void sub_init_1020ea10(void);
void sub_init_1020ea70(void);
void sub_init_1020ead0(void);
void sub_init_1020f170(void);

/* ---- _unattributed/before_client_DrawHoverItem.cpp ---- */
void sub_1020f190(void);
void sub_1020f1a6(void);
uint32_t sub_1020f1c0(void);
uint32_t __fastcall sub_1020f1d0(uint32_t param_1,uint32_t param_2);
uint32_t * __thiscall sub_1020f1e0(void *this,uint32_t param_1);
uint32_t * __thiscall sub_1020f200(void *this,int param_1);
void __fastcall sub_1020f230(uint32_t *param_1);
char * __fastcall sub_1020f250(int param_1);
uint32_t * __thiscall sub_1020f260(void *this,byte param_1);
uint32_t * __thiscall sub_1020f290(void *this,uint32_t param_1);
uint32_t * __thiscall sub_1020f2b0(void *this,byte param_1);
void __fastcall sub_1020f2e0(uint32_t *param_1);
uint32_t * __fastcall sub_1020f2f0(uint32_t *param_1);
uint32_t * __thiscall sub_1020f310(void *this,byte param_1);
void __fastcall thunk_FUN_1020f2e0(uint32_t *param_1);
uint32_t * __thiscall sub_1020f370(void *this,int param_1);
uint32_t * __thiscall sub_1020f390(void *this,int param_1);
void __fastcall sub_1020f3b0(uint param_1);
void __fastcall sub_1020f3c0(int *param_1,int *param_2);
void sub_stl_1020f3e0(void);
void sub_stl_1020f3f0(void);
void __fastcall thunk_FUN_1020f8e0(uint32_t param_1);
void __fastcall sub_1020f410(uint64_t *param_1);
void __fastcall sub_1020f420(uint64_t *param_1);
void __fastcall sub_1020f440(int param_1);
void __fastcall thunk_FUN_1020f700(uint32_t param_1);
void __fastcall thunk_FUN_1020f5d0(uint32_t param_1);

/* ---- _unattributed/before_client_DrawHoverItem_unit00_102129a0.cpp ---- */
uint32_t sub_102129a0(int param_1,int *param_2,uint reg_EAX);
uint32_t * __thiscall sub_102129d0(void *this,uint32_t *param_1);
void __cdecl sub_10212a00(uint32_t param_1);
void __cdecl sub_10212a30(uint32_t param_1);
void __cdecl sub_10212a60(uint32_t param_1);
void * __thiscall sub_10212a90(void *this,uint32_t param_1);
void * __thiscall sub_10212ab0(void *this,uint32_t param_1);
void __fastcall sub_10212b40(uint32_t *param_1);
void __fastcall sub_10212b60(int param_1);
uint32_t * __thiscall sub_10212b70(void *this,uint32_t param_1,uint32_t param_2);
uint32_t sub_10212ba0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __thiscall sub_10212bd0(void *this,uint32_t param_1,uint32_t param_2);
uint64_t __fastcall sub_10212c40(uint32_t *param_1);
uint32_t * __thiscall sub_10212c50(void *this,uint32_t *param_1,uint32_t param_2,uint32_t param_3);
void __thiscall sub_10212d20(void *this,uint32_t param_1);
void __thiscall sub_10212d30(void *this,uint32_t param_1);
uint32_t __fastcall sub_10212d60(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_10212e20(void);

/* ---- _unattributed/before_client_DrawHoverItem_after_unit01.cpp ---- */
uint64_t __fastcall sub_10219510(uint32_t *param_1);
uint8_t * sub_10219540(void);
int __fastcall sub_10219550(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void __cdecl sub_10219580(uint32_t param_1,uint32_t param_2,uint32_t param_3);

/* ---- _unattributed/between_client_DrawHoverItem_and_functions_D2ClientFunctions_after_unit07.cpp ---- */
void __fastcall sub_1022b450(uint32_t param_1);
void __fastcall sub_1022b4a0(uint32_t param_1);
void __fastcall sub_1022b4e0(uint32_t param_1);
void __fastcall sub_1022b520(uint32_t param_1);
void __fastcall sub_1022b560(uint32_t param_1);
void __fastcall sub_1022b5a0(uint32_t param_1);
void __fastcall sub_1022b5e0(uint32_t param_1);
void __fastcall sub_1022b620(uint32_t param_1);
void __fastcall sub_1022b660(uint32_t param_1);
void __fastcall sub_1022b6a0(uint32_t param_1);
void __fastcall sub_1022b6e0(uint32_t param_1);
void __fastcall sub_1022b720(wchar_t *param_1,wchar_t *param_2);
void sub_1022b730(void);
bool __fastcall sub_1022b800(wchar_t *param_1);
uint32_t __cdecl sub_1022b810(int param_1,int param_2,uint reg_EAX);
uint32_t __cdecl sub_1022b840(int param_1,int param_2,uint reg_EAX);
uint32_t __fastcall sub_1022b870(int param_1);
uint32_t __fastcall sub_1022b890(int param_1);
uint32_t __fastcall sub_1022b8b0(int param_1);
uint __fastcall sub_1022b8d0(byte *param_1,int param_2);
void __fastcall sub_1022b900(int param_1,DWORD param_2,int param_3);
void __thiscall sub_1022bd90(void *this,int param_1,float param_2,float param_3,float param_4,uint32_t param_5, uint32_t param_6,uint32_t param_7,uint32_t param_8,uint32_t param_9, uint32_t param_10,uint32_t param_11,float param_12);
void __fastcall sub_1022bf90(int param_1,char *param_2,int param_3);
uint __fastcall sub_1022c510(uint *param_1,HRAWINPUT param_2);
void __fastcall sub_1022c770(uint *param_1,HANDLE param_2);
void __fastcall sub_1022c940(uint *param_1,int param_2);
void __fastcall sub_1022c9b0(uint *param_1,HANDLE param_2,int param_3);
void __fastcall sub_1022ca30(HWND param_1,UINT param_2,WPARAM param_3,HRAWINPUT param_4);
void __fastcall sub_1022cb70(HWND param_1);
uint sub_1022cc60(void);
uint8_t sub_1022d020(void);
void sub_1022d200(void);
void sub_1022d250(void);
void sub_1022d280(void);
void __fastcall sub_1022da00(wchar_t *param_1,wchar_t *param_2);

/* ---- _unattributed/between_functions_D2ClientFunctions_and_client_Sound_Sound_after_unit10.cpp ---- */
void __fastcall sub_1022f810(int *param_1);
void * __fastcall sub_1022fa80(void *param_1);
void sub_1022faa0(void);
void sub_1022fab0(void);
void sub_1022fac0(void);
void sub_1022fad0(void);
void sub_1022fae0(void);
void sub_1022faf0(void);
void sub_1022fbc0(void);
void sub_1022fbd0(void);
void sub_1022fbe0(void);
void sub_1022fbf0(void);
void sub_1022fc00(void);
void sub_1022fc10(void);
void sub_1022fc20(void);
void sub_1022fc30(void);

/* ---- _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_after_unit17.cpp ---- */
int __cdecl sub_10237660(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __thiscall sub_102376a0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
LPWSTR __fastcall sub_102376c0(LPCSTR param_1);
LPSTR __fastcall sub_10237720(LPCWSTR param_1);
void __cdecl sub_10237780(uint32_t param_1,uint32_t param_2);
uint64_t __fastcall sub_10237810(uint32_t *param_1);
void __thiscall sub_10237830(void *this,uint32_t param_1);
uint32_t * __thiscall sub_10237860(void *this,uint16_t *param_1);
void * __thiscall sub_10237880(void *this,void *param_1,uint param_2);
void __fastcall sub_102378a0(int param_1);
void __fastcall sub_102378e0(void *param_1);
void * __thiscall sub_10237900(void *this,uint32_t param_1);
uint32_t __fastcall sub_10237930(uint32_t *param_1);
uint64_t __fastcall sub_10237950(uint *param_1);
uint32_t * __thiscall sub_10237960(void *this,uint32_t param_1,uint32_t param_2);
void sub_10237990(uint16_t *param_1);
void __thiscall sub_102379b0(void *this,int param_1);
void * __fastcall sub_102379e0(void *param_1);
void __thiscall sub_10237a20(void *this,int param_1);
uint32_t * __thiscall sub_10237a40(void *this,void *param_1,uint param_2);
uint __fastcall sub_10237a70(uint *param_1);
bool __cdecl sub_10237a90(int *param_1,int *param_2);
uint8_t __cdecl sub_10237ab0(uint8_t *param_1);
uint8_t __cdecl sub_10237ac0(uint8_t *param_1);
bool __fastcall sub_10237ad0(char *param_1,char *param_2);
uint32_t sub_10237ae0(void);
ushort __fastcall sub_10237af0(ushort *param_1);
bool __cdecl sub_10237b20(short *param_1,short *param_2);
uint16_t __cdecl sub_10237b40(uint16_t *param_1);
void __thiscall sub_10237b50(void *this,void *param_1,uint param_2);
uint __thiscall sub_10237b90(void *this,uint param_1);
void __cdecl sub_10237bb0(uint32_t param_1);
int __thiscall sub_10237be0(void *this,int param_1,uint32_t param_2);
void * __fastcall sub_10237cb0(void *param_1);
int __fastcall sub_10237cd0(byte *param_1,int param_2,uint32_t param_3,uint32_t param_4,size_t param_5);
uint __fastcall sub_10237da0(int param_1,uint param_2,uint param_3,byte *param_4,uint param_5);
uint8_t __thiscall sub_10237e30(void *this,byte param_1);
uint32_t __thiscall sub_10237e40(void *this,uint32_t param_1,byte *param_2);
uint8_t __fastcall sub_10237e70(int param_1);
void __fastcall sub_10237e80(int *param_1);
void * __thiscall sub_10237ee0(void *this,basic_ostream<wchar_t,std::char_traits<wchar_t>_> *param_1);
void __thiscall sub_10237f80(void *this,int param_1,int param_2,int param_3);
uint __thiscall sub_10237fd0(void *this,uint param_1);
void __thiscall sub_10238000(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __thiscall sub_10238020(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_10238040(void *param_1,size_t param_2,char *param_3);
uint __fastcall sub_10238060(byte *param_1,byte *param_2,uint param_3);
void __fastcall sub_102380c0(int *param_1);
uint32_t * __thiscall sub_10238110(void *this,int *param_1);
void __thiscall sub_10238140(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
int __fastcall sub_10238160(int *param_1);
int __fastcall sub_10238170(char *param_1,int param_2,uint32_t param_3,uint32_t param_4,size_t param_5);
uint32_t __fastcall sub_102381b0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __thiscall sub_10238230(void *this,uint32_t param_1);
int sub_10238260(void);
bool sub_10238290(void);
uint32_t sub_102382b0(void);
uint64_t sub_102382c0(void);
uint64_t sub_102382d0(void);
uint32_t * __fastcall sub_102382e0(uint32_t *param_1);
uint32_t * __thiscall sub_10238300(void *this,uint32_t param_1);
uint32_t __fastcall sub_10238350(uint32_t param_1);
uint32_t * __thiscall sub_10238360(void *this,uint32_t param_1);
uint32_t * __thiscall sub_10238380(void *this,int param_1);
uint32_t * __fastcall sub_102383a0(uint32_t *param_1);
void sub_102383c0(void);
uint32_t * __thiscall sub_102383e0(void *this,int param_1);
uint32_t sub_Hook_sub_6fb6dca0_10238440(void);
int __fastcall sub_10238450(int param_1);
void __fastcall sub_10238470(int param_1);
int __thiscall sub_10238490(void *this,uint param_1);
void * __fastcall sub_102384d0(void *param_1);
uint32_t sub_102384f0(void);
void __fastcall sub_10238500(int param_1);
uint32_t * __thiscall sub_10238540(void *this,uint32_t param_1,uint32_t param_2);
void * __fastcall sub_10238570(void *param_1,uint32_t param_2);
void * __fastcall sub_102385e0(void *param_1);
uint32_t * __thiscall sub_10238600(void *this,byte param_1);
void __fastcall sub_10238630(uint32_t *param_1);
uint32_t * __thiscall sub_10238650(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void * __fastcall sub_10238680(void *param_1);
void * __thiscall MemMapReadOnly::_scalar_deleting_destructor_(MemMapReadOnly *this,uint param_1);
void __fastcall thunk_FUN_10238630(uint32_t *param_1);
uint32_t * __thiscall sub_10238750(void *this,uint32_t param_1,uint32_t param_2);
uint32_t * __thiscall sub_10238770(void *this,byte param_1);
uint32_t * __thiscall sub_102387a0(void *this,uint32_t param_1,uint32_t param_2);
uint32_t * __thiscall sub_102387c0(void *this,uint32_t param_1,uint32_t param_2);
uint32_t * __thiscall sub_102387e0(void *this,uint32_t param_1,uint32_t param_2);
void __fastcall sub_10238800(int *param_1);
uint32_t * __thiscall sub_10238860(void *this,int *param_1);
PRECEX * __thiscall TPI1::PRECEX::operator=(PRECEX *this,PRECEX *param_1);
int __fastcall sub_102388c0(int *param_1);
void * __fastcall sub_10238900(void *param_1,int *param_2);
void __fastcall sub_10238920(uint32_t *param_1);
void __fastcall sub_10238930(uint32_t *param_1);
bool __fastcall sub_10238940(int *param_1);
bool __cdecl sub_10238950(int param_1,int param_2);
int * __fastcall sub_10238960(int *param_1);
uint64_t sub_10238970(void);
uint32_t * __thiscall sub_10238980(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
uint32_t __fastcall sub_102389a0(void *param_1,uint *param_2,uint *param_3);
uint32_t __fastcall sub_10238a20(void *param_1,uint *param_2,uint *param_3);
uint * __thiscall sub_10238ad0(void *this,uint param_1,uint param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_10238b40(void *param_1,uint32_t *param_2,int param_3);
uint32_t * __thiscall sub_10238bd0(void *this,uint32_t *param_1);
uint32_t __fastcall sub_10238ce0(uint param_1,uint32_t *param_2);
void __fastcall sub_10238da0(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6, uint param_7,uint param_8,uint param_9,uint param_10);
void __fastcall sub_10238f20(int param_1,int *param_2,int *param_3,uint32_t param_4,uint32_t param_5, uint32_t param_6,uint32_t param_7,uint32_t param_8,uint32_t param_9, uint32_t param_10,uint32_t param_11,uint param_12,uint param_13,int param_14);
void __fastcall sub_102392f0(uint32_t param_1,int *param_2,int *param_3,uint32_t param_4,uint32_t param_5, void *param_6,uint32_t param_7,uint32_t param_8,uint32_t param_9,void *param_10, uint32_t param_11,uint32_t param_12,uint32_t param_13,void *param_14);
char * __fastcall sub_10239430(char *param_1,uint param_2);
char * __fastcall sub_10239530(uint16_t *param_1,size_t param_2,size_t param_3);

/* ---- _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit19_102418b0.cpp ---- */
void __fastcall sub_102418b0(uint32_t param_1);
void __fastcall sub_102418c0(uint param_1);
uint32_t * __thiscall sub_102418d0(void *this,uint32_t *param_1);
void __thiscall sub_102418f0(void *this,char *param_1);
char * __thiscall sub_10241920(void *this,uint32_t param_1);
char * __thiscall sub_10241960(void *this,uint32_t param_1);
char * __thiscall sub_102419a0(void *this,uint32_t param_1);
int * __fastcall sub_102419e0(int *param_1,uint32_t *param_2);
basic_ostream<char,std::char_traits<char>_> * __cdecl sub_10241a10(basic_ostream<char,std::char_traits<char>_> *param_1);
basic_ostream<char,std::char_traits<char>_> * __fastcall sub_10241a40(basic_ostream<char,std::char_traits<char>_> *param_1);
int * sub_10241c3b(int reg_EBX,int *reg_ESI);
char * __fastcall sub_10241c70(char *param_1,uint32_t param_2);
_Facet_base * __fastcall sub_10241d40(locale *param_1);
uint32_t sub_10241e30(uint32_t param_1,void *param_2);
int sub_10241ef0(void *param_1);
void __thiscall sub_10241f30(void *this,uint32_t param_1);
uint32_t sub_10241f50(uint32_t param_1,void *param_2);
int sub_10242010(void *param_1);
char * __thiscall sub_10242050(void *this,char *param_1);
void sub_102421c0(byte param_1);
uint __thiscall sub_102421e0(void *this,uint8_t *param_1);
uint32_t sub_10242340(void);
void __thiscall sub_102423d0(void *this,void *param_1);
uint32_t * __thiscall sub_102423f0(void *this,uint32_t param_1);
uint32_t * __thiscall sub_json_10242400(void *this,uint32_t param_1);
void * __fastcall sub_10242490(void *param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_10242560(uint8_t *param_1);
void __fastcall sub_10242590(uint32_t *param_1);
uint32_t sub_102425e0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
uint __fastcall sub_10242620(byte *param_1,uint param_2,byte *param_3,uint param_4);
int __fastcall sub_10242690(int param_1,uint param_2,uint param_3);
uint32_t * __thiscall sub_102426c0(void *this,uint param_1);
uint64_t * __fastcall sub_10242780(uint64_t *param_1,uint32_t param_2);
uint32_t * __cdecl sub_102427e0(uint32_t param_1);
void __thiscall sub_10242800(void *this,char param_1);
void __thiscall sub_10242a40(void *this,uint param_1,uint param_2);
void __thiscall sub_10242c80(void *this,uint param_1,uint param_2);
void sub_10242ec0(uint32_t param_1);
uint8_t * sub_10242f30(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_10242f50(uint32_t param_1);
uint8_t * sub_10242fc0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
uint32_t __fastcall sub_10242fe0(uint32_t param_1,uint32_t param_2);
uint32_t * __thiscall sub_10242ff0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_10243040(uint32_t param_1,int *param_2);
void __fastcall sub_10243050(uint32_t param_1,int *param_2);
void __fastcall sub_10243060(uint32_t param_1,uint32_t *param_2);
uint32_t __fastcall sub_10243070(uint32_t param_1);
void __thiscall sub_10243140(void *this,void *param_1);
uint32_t __fastcall sub_10243160(uint32_t param_1);
void __thiscall sub_10243230(void *this,void *param_1);
uint32_t __fastcall sub_10243250(uint32_t param_1);
uint32_t __fastcall sub_10243320(uint32_t param_1);
void __thiscall sub_102433f0(void *this,void *param_1);
void sub_10243410(void *param_1,int param_2);
void __cdecl sub_10243430(uint32_t param_1,uint32_t param_2);
int __thiscall sub_10243460(void *this,int param_1,uint32_t param_2,uint32_t param_3);
uint32_t * __thiscall sub_102435c0(void *this,uint32_t param_1);
uint32_t * __thiscall sub_102435e0(void *this,uint32_t param_1);
void * __fastcall sub_10243690(void *param_1,uint32_t param_2,int param_3,uint32_t param_4);
uint64_t __fastcall sub_10243820(void *param_1);
uint32_t * __fastcall sub_102438f0(uint32_t *param_1);
uint32_t * __thiscall sub_102439b0(void *this,uint32_t param_1,uint32_t param_2,uint param_3);
uint32_t * __thiscall sub_10243a50(void *this,uint param_1,uint32_t param_2,size_t param_3,uint32_t param_4);
bool sub_10243b10(void);
uint32_t * __thiscall sub_10243b30(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void * __thiscall sub_10243bf0(void *this,uint32_t param_1);
uint8_t __fastcall sub_10243cd0(uint8_t param_1);
uint32_t * __thiscall sub_10243ce0(void *this,uint32_t param_1);
int sub_10243d70(void);
uint32_t sub_10243dc0(void);
uint32_t sub_10243e50(void);
uint32_t sub_10243f20(void);
void * __thiscall sub_10243fb0(void *this,uint32_t param_1);
void __fastcall sub_10244080(uint32_t param_1,char *param_2);
void __cdecl sub_10244090(uint32_t param_1);
int __thiscall sub_102440c0(void *this,int param_1,uint32_t param_2);
void __thiscall sub_10244180(void *this,uint32_t *param_1);
void __thiscall sub_102441b0(void *this,int param_1);
int __fastcall sub_102441d0(uint param_1);
int __thiscall sub_102441f0(void *this,int param_1,uint32_t param_2);
char * __fastcall sub_10244330(uint16_t *param_1,int param_2);
void __fastcall sub_102444a0(int param_1,int param_2);
void __fastcall sub_102444d0(int param_1,int param_2);
uint32_t __fastcall sub_10244500(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __fastcall sub_10244580(void *param_1);
uint32_t * __thiscall sub_102445a0(void *this,int param_1);
uint64_t __fastcall sub_102445c0(uint32_t *param_1);
int * __fastcall sub_102445d0(int *param_1);
int * __fastcall sub_102445e0(int *param_1);
uint32_t * __fastcall sub_102445f0(uint32_t *param_1);
char * __fastcall sub_10244600(char *param_1);
void __fastcall sub_10244610(int *param_1);
void __fastcall thunk_FUN_102456e0(int *param_1);
void __fastcall thunk_FUN_1020fa40(uint32_t *param_1);
void __fastcall sub_10244650(int *param_1);
void __fastcall sub_10244660(void *param_1);
void __fastcall sub_10244670(void *param_1);
void __fastcall sub_10244680(void *param_1);
void __fastcall sub_10244690(void *param_1);
void __fastcall sub_102446a0(int *param_1);
void __fastcall sub_102446b0(int param_1);
void __fastcall sub_102446c0(uint32_t *param_1);
void __fastcall sub_102446d0(int param_1);
void __thiscall sub_10244700(void *this,uint32_t param_1,char *param_2);
void __fastcall sub_102449e0(uint32_t *param_1);
void __fastcall sub_10244a00(uint32_t *param_1);
uint32_t * sub_10244a10(uint32_t param_1);
void sub_10244a30(void);
void sub_10244a40(void);
void sub_10244a60(void);
uint64_t sub_10244a80(uint param_1,int param_2);
int sub_10244ad0(uint param_1,uint param_2);
void * __thiscall sub_10244bd0(void *this,int param_1);
uint8_t * thunk_FUN_102495b0(void);
void sub_stl_10244c40(void);
void sub_10244c60(void);
uint8_t * thunk_FUN_102495d0(void);
void sub_stl_10244c80(void);
uint __thiscall sub_10244ca0(void *this,uint param_1);
void __thiscall sub_10244cd0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __thiscall sub_10244cf0(void *this,int param_1,int param_2,int param_3);
uint __thiscall sub_10244d50(void *this,uint param_1);
void __thiscall sub_10244d80(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __thiscall sub_10244da0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
uint sub_10244dc0(void);
void __fastcall thunk_FUN_102456e0(int *param_1);
void sub_10244e00(uint param_1);
void sub_10244e20(void *param_1,int param_2);
int __fastcall sub_10244e40(uint8_t *param_1);
int __thiscall sub_10244e90(void *this,int param_1);
void __thiscall sub_10244f70(void *this,char *param_1);
void __thiscall sub_10245000(void *this,char *param_1);
uint8_t __fastcall sub_102450d0(uint8_t *param_1);
uint32_t __thiscall sub_102450e0(void *this,int param_1);
uint32_t __fastcall sub_10245100(int *param_1);
int __thiscall sub_10245110(void *this,int param_1);
uint64_t __thiscall sub_10245120(void *this,void *param_1);
void __fastcall sub_10245140(int param_1);
uint32_t * __thiscall sub_10245150(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_10245170(void);
uint32_t __thiscall sub_10245190(void *this,void *param_1);
uint64_t __thiscall sub_102451c0(void *this,void *param_1);
uint32_t * __thiscall sub_102451e0(void *this,byte param_1);
void __fastcall thunk_FUN_10245380(int param_1);
void __fastcall sub_10245220(int param_1);
void __fastcall sub_10245250(void *param_1);
void __fastcall sub_10245260(uint32_t *param_1);
uint8_t __fastcall sub_10245270(int param_1);
int __thiscall sub_10245280(void *this,uint32_t param_1,uint8_t param_2);
uint8_t __fastcall sub_102452b0(int param_1);
uint32_t * __thiscall sub_102452c0(void *this,uint32_t param_1);
void __fastcall sub_10245380(int param_1);
void * __thiscall sub_json_10245390(void *this,void *param_1,int param_2,char *param_3);
void __fastcall sub_10245510(int param_1);
uint32_t * __thiscall sub_10245520(void *this,uint32_t *param_1);
void __thiscall sub_10245600(void *this,uint64_t *param_1);
void sub_10245620(uint32_t *param_1);
bool __fastcall sub_10245640(int param_1);
void __thiscall sub_10245650(void *this,int param_1);
uint sub_10245680(void);
int __thiscall sub_102456b0(void *this,int param_1);
void __thiscall sub_102456c0(void *this,uint param_1);
void __fastcall sub_102456e0(int *param_1);
void __thiscall sub_10245730(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
int __fastcall sub_10245750(int *param_1);
uint32_t sub_10245770(void);
bool __fastcall sub_10245780(char *param_1);
int * __thiscall sub_10245790(void *this,int param_1);
int * __fastcall sub_102457a0(int *param_1);
void __fastcall thunk_FUN_1020fb40(uint32_t *param_1);
uint32_t __fastcall sub_102457c0(int *param_1);
uint32_t __fastcall sub_10245a40(int param_1);
char * __fastcall sub_10245a50(uint32_t param_1);
uint32_t sub_10245b00(void);
void sub_10245b10(void *param_1);
uint32_t sub_10245b30(void);
void __thiscall sub_10245b40(void *this,void *param_1);
uint64_t __fastcall sub_10245b80(uint32_t *param_1);
void __fastcall thunk_FUN_1020fb40(uint32_t *param_1);
uint32_t sub_10245ba0(void);
uint32_t sub_10245bb0(void);
void __fastcall sub_10245bc0(int *param_1);
uint __fastcall sub_10245bf0(int *param_1);
uint32_t __thiscall sub_10245c30(void *this,char *param_1,uint param_2,uint32_t param_3);
uint32_t __fastcall sub_10245cb0(int *param_1);
uint __fastcall sub_102461c0(int *param_1);
uint32_t __fastcall sub_json_10246260(int *param_1);
uint64_t * __thiscall sub_10246ab0(void *this,uint64_t *param_1,void *param_2);
uint64_t * __thiscall sub_10246ad0(void *this,uint64_t *param_1);
uint64_t __fastcall sub_10246b00(uint32_t *param_1);
uint64_t * __thiscall sub_10246b10(void *this,uint64_t *param_1,int param_2);
void __thiscall sub_10246b40(void *this,uint32_t param_1);
void __fastcall sub_10246b50(int param_1);
int __fastcall sub_10246bb0(int *param_1);
void __fastcall sub_10246c20(int param_1);
void __fastcall sub_10246c90(double *param_1,char *param_2,char **param_3);
uint32_t __fastcall sub_json_10246cb0(int *param_1);
int __fastcall sub_10246d50(int *param_1);
uint64_t * __thiscall sub_10246e60(void *this,uint64_t *param_1,uint param_2,void *param_3);
uint64_t __thiscall sub_10246ee0(void *this,void *param_1);
uint64_t __thiscall sub_10246f00(void *this,uint32_t param_1);
void * __thiscall sub_10246f20(void *this,int param_1);
uint64_t __thiscall sub_10246f40(void *this,uint32_t param_1);
void __fastcall sub_10246f60(uint32_t *param_1);
void __fastcall sub_10246f70(int param_1);
void sub_10246f80(uint32_t param_1);
int __thiscall sub_10247000(void *this,uint param_1);
int __thiscall sub_10247110(void *this,int *param_1);
int * __thiscall sub_10247130(void *this,int param_1);
uint32_t * __thiscall sub_10247190(void *this,uint32_t param_1,uint32_t param_2);
void sub_102471b0(void);
bool __fastcall sub_102471c0(int param_1);
int sub_102471d0(void);
uint32_t __fastcall sub_102471f0(int param_1);
void __thiscall sub_10247200(void *this,uint param_1,int *param_2);
uint __fastcall sub_10247210(int param_1);
uint32_t * __thiscall sub_10247220(void *this,uint32_t param_1);
uint32_t * __thiscall sub_102472b0(void *this,uint32_t param_1,uint32_t param_2);
void __fastcall sub_10247350(void *param_1,byte *param_2);
void __fastcall sub_10247360(void *param_1,int param_2);
uint32_t __fastcall sub_10247370(uint32_t param_1);
uint8_t __fastcall sub_10247390(uint param_1);
uint32_t * __thiscall sub_102473b0(void *this,uint32_t *param_1);
void __fastcall sub_10247420(void *param_1,uint32_t param_2);
void __fastcall sub_10247440(char *param_1,uint32_t param_2);
void __fastcall sub_10247460(char *param_1,uint32_t param_2);
uint8_t * sub_10247480(void);
uint8_t * sub_10247490(void);
uint32_t __fastcall sub_102474a0(uint32_t param_1);
char * __thiscall sub_102474c0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_10247510(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
char * __fastcall sub_10247560(char *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __fastcall sub_102475b0(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
char * sub_Config_automap_party_names_102475f0(void);
void __fastcall sub_10247600(uint32_t param_1,uint32_t param_2);
void * __thiscall sub_10247620(void *this);
int * sub_102476b0(int *param_1,int param_2);
uint32_t sub_10247710(int param_1,void *param_2,uint reg_EAX);
void * __fastcall sub_10247740(void *param_1,uint32_t param_2);
void * __thiscall sub_10247760(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_10247810(uint32_t param_1,uint32_t *param_2);
void __fastcall sub_10247870(uint32_t param_1,void *param_2);
int * sub_10247880(int *param_1,int param_2);
uint32_t sub_102478e0(void);
uint __fastcall sub_10247920(void *param_1);
uint32_t * __thiscall sub_10247b00(void *this,uint32_t param_1);
void * __fastcall sub_10247bb0(void *param_1,uint32_t param_2,uint32_t param_3);
uint __fastcall sub_10247c80(uint32_t param_1,void *param_2);
bool __fastcall sub_10247c90(uint32_t param_1);
void * __thiscall sub_10247ca0(void *this,uint32_t param_1,uint32_t param_2);
void __fastcall sub_10247cc0(uint32_t param_1,uint32_t param_2);
bool __fastcall sub_10247ce0(int param_1);
char * __fastcall sub_10247cf0(char *param_1,uint32_t param_2);
void __fastcall sub_10247d20(void *param_1,uint32_t param_2,uint32_t param_3);
uint32_t * __fastcall sub_10247d50(uint32_t *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
uint32_t * __thiscall sub_10247df0(void *this,uint32_t param_1);
void __thiscall sub_10247e30(void *this,uint32_t param_1,uint32_t param_2);
uint64_t __fastcall sub_10247e50(void *param_1);
uint8_t sub_10247e60(void);
uint8_t sub_10247e70(void);
uint8_t sub_10247e80(uint32_t param_1,int param_2);
int * sub_10247ea0(int param_1,uint32_t param_2);
int * sub_10247f40(int param_1,uint32_t param_2);
uint32_t * __fastcall sub_10247fe0(uint32_t *param_1,int param_2,int param_3,uint32_t param_4);
void __fastcall sub_10248040(uint32_t *param_1,uint32_t param_2);
void __cdecl sub_10248050(uint32_t param_1);
void __cdecl sub_10248080(uint32_t param_1);
void __cdecl sub_102480b0(uint32_t param_1);
void * __thiscall sub_102480e0(void *this,uint32_t param_1,uint32_t param_2);
void __fastcall sub_10248120(void *param_1,int param_2);
char * __fastcall sub_10248130(char *param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_10248170(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
uint32_t * __fastcall sub_102481b0(uint32_t *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7);
void __fastcall sub_10248290(void *param_1,int param_2,int param_3);
char * __fastcall sub_10248310(char *param_1,uint32_t param_2);
void __fastcall sub_10248340(void *param_1,uint32_t param_2,uint32_t param_3);
uint64_t __fastcall sub_10248370(uint32_t param_1,uint32_t param_2);
void __cdecl sub_10248390(uint32_t param_1);
void __fastcall sub_102483c0(uint32_t param_1,uint32_t param_2);
void __fastcall sub_102483e0(uint32_t param_1,int *param_2,int *param_3);
void __fastcall sub_10248490(uint32_t param_1,uint32_t *param_2);
void __thiscall sub_102484a0(void *this,uint32_t param_1);
void __fastcall sub_102484d0(int *param_1);
void __fastcall sub_102484e0(uint32_t param_1,uint32_t *param_2);
uint8_t __thiscall sub_102484f0(void *this,void *param_1);
void * __cdecl sub_10248c90(uint32_t *param_1,uint32_t param_2);
uint __thiscall sub_10248d90(void *this,uint32_t param_2,uint32_t param_3,int param_4,uint reg_EAX);
uint8_t __thiscall sub_10248dd0(void *this,int *param_1);
uint __thiscall sub_10249570(void *this,uint32_t param_2,uint32_t param_3,int param_4,uint reg_EAX);
uint8_t * sub_102495b0(void);
uint32_t sub_102495c0(void);
uint8_t * sub_102495d0(void);
uint32_t __fastcall sub_102495e0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
int __fastcall sub_10249690(uint param_1);
uint32_t * __thiscall sub_json_102496b0(void *this,uint32_t param_1);
uint32_t * __fastcall sub_10249740(uint32_t *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
uint32_t * __fastcall sub_102497f0(uint32_t *param_1,uint32_t param_2,uint32_t param_3);

/* ---- _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit19_10249880.cpp ---- */
void __thiscall sub_10249880(void *this,uint param_1);
uint32_t __fastcall sub_102498f0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __thiscall sub_10249990(void *this,uint *param_1,uint32_t param_2,uint *param_3,int param_4);
void __cdecl sub_102499b0(uint32_t param_1);
int __thiscall sub_102499e0(void *this,int param_1,uint32_t param_2);
void sub_10249a90(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void __thiscall sub_10249b00(void *this,uint param_1,int *param_2);
void * __thiscall sub_10249b60(void *this,int *param_1);
void * __thiscall sub_10249b90(void *this,int *param_1);
uint32_t * __fastcall sub_10249bb0(uint32_t *param_1);
uint32_t * __fastcall sub_10249bc0(uint32_t *param_1);
void __fastcall sub_10249bd0(uint32_t *param_1);
uint64_t __fastcall sub_10249be0(uint32_t *param_1);
void __fastcall sub_10249c00(int *param_1);
uint32_t __fastcall sub_10249c10(int param_1);
uint32_t __fastcall sub_10249c70(void *param_1);
uint32_t __fastcall sub_10249ca0(int param_1);
uint32_t __thiscall sub_10249d00(void *this,int param_1);
uint32_t __fastcall sub_10249d80(void *param_1);
uint32_t __thiscall sub_10249db0(void *this,uint32_t param_1);
uint32_t __fastcall sub_10249dd0(void *param_1);
uint32_t __fastcall sub_10249e00(void *param_1);
uint32_t __fastcall sub_10249e20(void *param_1);
uint32_t __fastcall sub_10249e40(void *param_1);
uint32_t __fastcall sub_10249e60(int *param_1);
uint32_t __fastcall sub_10249e70(int param_1);
uint32_t __fastcall sub_10249f70(void *param_1);
uint32_t __fastcall sub_10249fe0(int param_1);
uint32_t __thiscall sub_1024a1b0(void *this,int param_1);
uint32_t __fastcall sub_1024a290(void *param_1);
uint32_t __thiscall sub_1024a300(void *this,int *param_1);
uint32_t __fastcall sub_1024a320(void *param_1);
uint32_t __fastcall sub_1024a360(void *param_1);
uint32_t __fastcall sub_1024a380(void *param_1);
uint32_t __fastcall sub_1024a3a0(void *param_1);
uint32_t __fastcall sub_1024a3c0(void *param_1);
void * __thiscall sub_1024a3e0(void *this,uint32_t param_1);
void * __thiscall sub_1024a440(void *this,uint32_t param_1);
int __fastcall sub_1024a4d0(int param_1);
void sub_1024a4e0(void);
uint64_t __fastcall sub_1024a4f0(int param_1);
uint64_t __fastcall sub_1024a500(int param_1);
void * __thiscall sub_1024a510(void *this,uint32_t param_1);
void * __thiscall sub_1024a530(void *this,uint32_t param_1);
uint8_t * sub_1024a560(void);
void __fastcall sub_1024a580(uint32_t param_1,void *param_2);
uint8_t * sub_1024a590(void);
uint32_t __thiscall sub_1024a5b0(void *this,int param_1);
int * __thiscall sub_1024a5d0(void *this,int param_1);
void __thiscall sub_1024a5f0(void *this,uint32_t param_1,int param_2);
uint32_t * __thiscall sub_1024a610(void *this,int *param_1);
uint32_t __fastcall sub_1024a6a0(uint32_t *param_1);
uint32_t * __thiscall sub_1024a6b0(void *this,int *param_1);
void sub_1024a750(void *param_1,int param_2);
int __fastcall sub_1024a770(uint32_t *param_1);
int * __thiscall sub_1024a790(void *this,int *param_1);
void __thiscall sub_1024a7e0(void *this,int param_1,int param_2,int param_3);
uint __thiscall sub_1024a820(void *this,uint param_1);
void sub_1024a850(uint32_t param_1,uint32_t param_2,int param_3);
bool __fastcall sub_1024a870(uint32_t *param_1);
void sub_1024a890(uint32_t param_1);
void __fastcall sub_1024a8b0(void *param_1);
uint32_t __thiscall sub_1024a8f0(void *this,void *param_1);
void __thiscall sub_1024a920(void *this,int param_1,int param_2,int *param_3);
void __thiscall sub_1024a940(void *this,byte *param_1);
void __thiscall sub_1024a970(void *this,int param_1);
void __thiscall sub_1024a9b0(void *this,int param_1,uint param_2);
void __thiscall sub_1024a9f0(void *this,uint param_1,uint32_t param_2,int param_3);
void __fastcall sub_1024aa20(uint32_t *param_1);
void __fastcall sub_1024aa30(uint32_t *param_1);
uint64_t * __thiscall sub_1024aa40(void *this,uint64_t *param_1);
uint64_t __thiscall sub_1024aa70(void *this,void *param_1);
int __fastcall sub_1024aa90(int param_1);
void __fastcall sub_1024aaa0(int param_1);
void sub_1024aab0(uint32_t param_1);
void __fastcall sub_1024aad0(int param_1);
PRECEX * __thiscall sub_1024aaf0(PRECEX *param_1,uint32_t param_2,PRECEX param_3);
void __thiscall sub_1024ab80(void *this,void *param_1);
void __thiscall sub_1024abe0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
uint32_t * __fastcall sub_1024ac30(uint32_t *param_1);
int __fastcall sub_json_1024acb0(uint32_t *param_1);
uint32_t * __thiscall sub_1024ae20(void *this,uint32_t *param_1);
void __thiscall sub_1024ae40(void *this,uint param_1);
int __thiscall sub_1024ae70(void *this,int param_1);
void __thiscall sub_1024aee0(void *this,uint param_1);
uint32_t * sub_1024af10(uint32_t *param_1);
uint32_t * sub_1024af40(uint32_t *param_1);
uint8_t __fastcall sub_1024af70(char *param_1);
void sub_1024af90(uint32_t param_1,uint32_t param_2,int param_3);
int __fastcall sub_1024afb0(int *param_1);
int __fastcall sub_1024afc0(int param_1);
uint64_t * __thiscall sub_1024afd0(void *this,uint64_t *param_1);
uint32_t * __thiscall sub_1024b0e0(void *this,uint param_1,uint32_t param_2,void *param_3,uint param_4);
void sub_1024b240(void *param_1,void *param_2,int param_3,size_t param_4,int param_5,void *param_6, size_t param_7);
uint32_t * __thiscall sub_1024b290(void *this,int param_1);
void * __fastcall sub_1024b2b0(void *param_1);
uint32_t sub_1024b2c0(void);
void __fastcall sub_1024b300(uint32_t *param_1);
void __fastcall sub_1024b390(uint32_t *param_1);
uint32_t * __thiscall sub_1024b430(void *this,uint32_t param_1);
uint64_t __thiscall sub_1024b520(void *this,uint32_t *param_1);
void __thiscall sub_1024b540(void *this,uint param_1);
uint64_t * sub_1024b5d0(uint64_t *param_1);
uint32_t __fastcall sub_1024b620(uint32_t *param_1);
uint32_t * sub_1024b630(uint32_t *param_1,int param_2);
void __fastcall sub_1024b660(void *param_1);
uint32_t __thiscall sub_1024b670(void *this,void *param_1,int param_2,int param_3);
uint32_t __thiscall sub_1024b6b0(void *this,int param_1);
int * __thiscall sub_1024b6d0(void *this,int param_1);
void __fastcall sub_1024b6f0(uint32_t param_1,uint32_t param_2);
void __fastcall sub_1024b700(uint32_t param_1,uint32_t param_2);
void __fastcall sub_1024b710(uint32_t param_1,uint32_t param_2);
void sub_1024b720(void *param_1,uint32_t param_2);
void sub_1024b740(char *param_1,uint32_t param_2);
void sub_1024b760(char *param_1,uint32_t param_2);
char * __fastcall sub_1024b780(char *param_1,uint32_t param_2);
void __fastcall sub_1024b7b0(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
uint32_t * sub_1024b7f0(uint32_t param_1,uint32_t param_2);
int __thiscall sub_1024b810(void *this,uint32_t param_1,uint32_t param_2);
void __fastcall sub_1024b840(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
int __fastcall sub_1024b880(int param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_1024b8b0(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void * __thiscall sub_1024b8f0(void *this,uint32_t param_1);
void __fastcall sub_1024b910(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __fastcall sub_1024b960(uint32_t param_1,void *param_2);
uint32_t * __thiscall sub_1024b980(void *this,uint32_t param_1);
uint32_t * __thiscall sub_1024ba30(void *this,uint32_t param_1);
void * __fastcall sub_1024bae0(void *param_1,uint32_t param_2,uint32_t param_3);
uint32_t * __thiscall sub_1024bbb0(void *this,uint32_t param_1);
uint __fastcall sub_1024bc60(void *param_1);
bool __fastcall sub_1024bc70(uint32_t param_1,void *param_2);
int sub_1024bc90(uint32_t param_1,uint32_t param_2,uint32_t param_3);
bool __fastcall sub_1024bcc0(int param_1);
int __fastcall sub_1024bcd0(char *param_1);
void __fastcall sub_1024bcf0(void *param_1,uint32_t param_2);
int __fastcall sub_1024bd10(int param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_1024bd40(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __fastcall sub_1024bd80(uint32_t param_1,uint32_t param_2);
int * sub_1024bdb0(int *param_1,int param_2,void *param_3);
void * __thiscall sub_1024bf70(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
int * sub_1024c020(int *param_1,int param_2,void *param_3);
int __fastcall sub_1024c1e0(int param_1,uint32_t param_2);
void __fastcall sub_1024c200(void *param_1,uint32_t param_2,uint32_t param_3);
int __fastcall sub_1024c230(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5 ,uint32_t param_6);
void __fastcall sub_1024c280(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7);
int __fastcall sub_1024c2d0(int param_1);
void __fastcall sub_1024c2e0(void *param_1,uint32_t param_2);
void * __cdecl sub_1024c300(void *param_1);
uint32_t * __thiscall sub_1024c4a0(void *this,uint32_t param_1,uint32_t param_2);
uint __thiscall sub_1024c540(void *this,uint32_t param_2,uint32_t param_3,int param_4,uint reg_EAX);
uint __thiscall sub_1024c580(void *this,uint32_t param_2,uint32_t param_3,int param_4,uint reg_EAX);
void __thiscall sub_1024c5c0(void *this,uint32_t param_1);
char * __fastcall sub_1024c5f0(char *param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_1024c630(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void __thiscall sub_1024c670(void *this,uint param_1);
void __thiscall sub_1024c6f0(void *this,uint32_t param_1);
void __thiscall sub_1024c720(void *this,uint *param_1,uint32_t param_2,uint *param_3,int param_4);
int * __thiscall sub_1024c7f0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void __fastcall sub_1024c870(uint32_t *param_1,uint32_t param_2);
void __thiscall sub_1024c890(void *this,uint param_1,int *param_2);
int __thiscall sub_1024c900(void *this,uint32_t param_1);
void __thiscall sub_1024ca40(void *this,uint32_t param_1);
int __thiscall sub_1024caa0(void *this,uint32_t param_1);
void __thiscall sub_1024cbd0(void *this,uint32_t param_1);
int __thiscall sub_1024cc30(void *this,uint32_t param_1);
void __thiscall sub_1024cd60(void *this,uint32_t param_1);
int __thiscall sub_1024cdc0(void *this,uint32_t param_1);
void __thiscall sub_1024cef0(void *this,uint32_t param_1);
int __thiscall sub_1024cf50(void *this,uint32_t param_1);
void __thiscall sub_1024d080(void *this,uint32_t param_1);
int __thiscall sub_1024d0e0(void *this,uint32_t param_1);
void __thiscall sub_1024d210(void *this,uint32_t param_1);
int __fastcall sub_1024d270(int *param_1);
void __fastcall sub_1024d380(void *param_1);
uint32_t __thiscall sub_1024d3d0(void *this,uint32_t param_1,uint32_t param_2);
bool __thiscall sub_1024d680(void *this,int *param_1);
uint32_t * __thiscall sub_1024d6a0(void *this,uint32_t *param_1,char *param_2,int param_3,char *param_4);
uint32_t __thiscall sub_1024d870(void *this,uint32_t param_1,int *param_2);
uint32_t __thiscall sub_1024db10(void *this,uint32_t param_1,uint32_t param_2);
uint32_t __thiscall sub_1024ddb0(void *this,uint32_t param_1,uint32_t param_2);
uint32_t __thiscall sub_1024e050(void *this,uint32_t param_1,uint32_t param_2);
uint32_t __thiscall sub_1024e2f0(void *this,uint32_t param_1,uint32_t param_2);
uint32_t __thiscall sub_1024e590(void *this,uint32_t param_1);
uint32_t __fastcall sub_1024e830(uint32_t param_1,int param_2,uint32_t param_3);
void __thiscall sub_1024e890(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __thiscall sub_1024e8b0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
uint __fastcall sub_1024e8d0(void *param_1,int param_2);
int __fastcall sub_1024e8e0(int param_1,int param_2,int *param_3,uint32_t param_4);
uint32_t __fastcall sub_1024e970(byte *param_1,uint param_2,byte *param_3,uint param_4,uint reg_EAX);
void __fastcall sub_1024e990(void *param_1);
void * __fastcall sub_1024e9a0(void *param_1,uint32_t param_2,uint32_t param_3);
uint32_t * __fastcall sub_1024ea70(uint32_t *param_1);
void sub_1024ea90(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
uint32_t * __thiscall sub_1024eb00(void *this,uint param_1,uint32_t param_2,size_t param_3,int param_4,void *param_5, size_t param_6);
void __fastcall sub_1024ebd0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
uint32_t * __thiscall sub_1024ebe0(void *this,uint32_t *param_1);
uint64_t __fastcall sub_1024ebf0(int *param_1);
uint32_t __fastcall sub_1024ec00(int *param_1);
uint __thiscall sub_1024ec10(void *this,uint *param_1);
uint __thiscall sub_1024ec30(void *this,uint *param_1);
bool __fastcall sub_1024ec50(int param_1);
uint32_t * __thiscall sub_1024ec60(void *this,uint32_t param_1);
uint32_t __fastcall sub_1024ec80(void *param_1);
uint32_t __thiscall sub_1024ec90(void *this,void *param_1,char *param_2);
int * __thiscall sub_1024ece0(void *this,int *param_1,int param_2);
bool __fastcall sub_1024ed20(char *param_1);
bool __fastcall sub_1024ed30(char *param_1);
void __thiscall sub_1024ed40(void *this,uint32_t *param_1);
void * __thiscall sub_1024ed60(void *this,byte param_1);
uint32_t * __fastcall sub_1024ed80(uint32_t *param_1);
void * __thiscall sub_1024ed90(void *this,byte param_1);
uint64_t __fastcall sub_1024edb0(int *param_1);
uint32_t __fastcall sub_1024edc0(int *param_1);
int * __thiscall sub_1024edd0(void *this,int *param_1,int param_2,int param_3);
uint32_t * __thiscall sub_1024ef20(void *this,char param_1);
void * __thiscall sub_1024ef50(void *this,uint param_1);
void __fastcall sub_1024ef80(int *param_1);
void __fastcall sub_1024efa0(int *param_1);
uint32_t * sub_1024efc0(uint32_t *param_1,int param_2);
void __thiscall sub_1024eff0(void *this,uint param_1);
void sub_1024f010(uint8_t *param_1,uint32_t param_2);
void sub_1024f030(char *param_1,uint32_t param_2);
void sub_1024f050(char *param_1,uint32_t param_2);
void __fastcall thunk_FUN_10250370(char *param_1,uint32_t param_2);
void __fastcall sub_1024f080(void *param_1,int param_2);
void __fastcall sub_1024f0a0(char *param_1,uint8_t param_2);
int __fastcall sub_1024f0b0(int param_1);
void __fastcall sub_1024f0c0(void *param_1,uint32_t param_2,uint32_t param_3);
int __fastcall sub_1024f0f0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_1024f120(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void * __thiscall sub_1024f160(void *this,uint32_t param_1,uint32_t param_2);
void * __fastcall sub_1024f180(void *param_1);
int __fastcall sub_1024f1b0(int param_1,uint32_t param_2);
void __fastcall sub_1024f1d0(void *param_1,uint32_t param_2,uint32_t param_3);
void __cdecl sub_1024f200(uint32_t param_1);
void __fastcall sub_1024f230(void *param_1,uint32_t param_2);
char * __fastcall sub_1024f250(char *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void __fastcall sub_1024f2a0(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
uint64_t sub_1024f2f0(void);
void __cdecl sub_1024f310(uint32_t param_1);
void __cdecl sub_1024f340(uint32_t param_1);
uint32_t * __thiscall sub_1024f370(void *this,uint32_t param_1);
void __cdecl sub_1024f400(uint32_t param_1);
int __thiscall sub_1024f430(void *this,int param_1,uint32_t param_2);
void __cdecl sub_1024f550(uint32_t param_1);
int __thiscall sub_1024f580(void *this,int param_1,uint32_t param_2);
char * __thiscall sub_1024f6a0(void *this,uint32_t param_1);
void __cdecl sub_1024f6e0(uint32_t param_1);
int __thiscall sub_1024f710(void *this,int param_1,uint32_t param_2);
char * __thiscall sub_1024f7d0(void *this,uint32_t param_1);
void __cdecl sub_1024f810(uint32_t param_1);
int __thiscall sub_1024f840(void *this,int param_1,uint32_t param_2);
char * __thiscall sub_1024f900(void *this,uint32_t param_1);
void __cdecl sub_1024f940(uint32_t param_1);
int __thiscall sub_1024f970(void *this,int param_1,uint32_t param_2);
void __cdecl sub_1024fa30(uint32_t param_1);
int __thiscall sub_1024fa60(void *this,int param_1,uint32_t param_2);
void __fastcall sub_1024fb20(uint32_t param_1,uint32_t param_2);
int __thiscall sub_1024fb40(void *this,int param_1);
void __thiscall sub_1024fc00(void *this,int *param_1);
void __fastcall sub_1024fd20(int param_1);
uint32_t __fastcall sub_1024fd40(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
uint32_t __fastcall sub_1024fde0(int *param_1);
void __fastcall sub_1024fe10(uint32_t param_1,int param_2);
void __thiscall sub_1024fe50(void *this,uint32_t param_1);
int * __thiscall sub_1024fe80(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
char * __fastcall sub_1024fef0(int param_1,int param_2,char *param_3);
uint32_t * __fastcall sub_1024ff40(uint32_t *param_1,int param_2,uint32_t param_3);
void sub_1024ff60(void);
int __thiscall sub_1024ff80(void *this,uint param_1);
void * __thiscall sub_10250010(void *this,uint param_1);
void * __thiscall sub_10250040(void *this,uint param_1);
int __thiscall sub_102500a0(void *this,int *param_1);
void __thiscall sub_102500c0(void *this,uint32_t param_1,int param_2);
void __fastcall sub_json_102500e0(char *param_1);
void __fastcall sub_10250170(char *param_1,uint8_t *param_2);
void __fastcall sub_json_10250200(uint8_t *param_1,uint *param_2);
void __fastcall sub_10250310(char *param_1,uint32_t param_2);
void __fastcall sub_10250330(void *param_1,uint32_t param_2);
void __fastcall sub_10250350(void *param_1,uint32_t param_2);
void __fastcall sub_10250370(char *param_1,uint32_t param_2);
void __thiscall sub_102503c0(void *this,uint32_t param_1,uint32_t param_2);
void __fastcall sub_10250430(char *param_1,uint8_t param_2);
int sub_102504a0(void);
void __fastcall sub_102504b0(void *param_1,uint32_t param_2);
void * __thiscall sub_102504d0(void *this,uint32_t param_1);
int __fastcall sub_10250510(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __fastcall sub_10250550(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void __thiscall sub_10250590(void *this,uint32_t param_1);
void __thiscall sub_102505c0(void *this,uint param_1);
uint32_t __fastcall sub_102506b0(uint32_t param_1,int param_2,uint32_t param_3);
bool __fastcall sub_10250710(char *param_1);
void sub_10250720(char *param_1,uint32_t param_2);
void sub_10250740(void *param_1,uint32_t param_2);
void sub_10250770(void *param_1,uint32_t param_2);
void __fastcall sub_102507a0(char *param_1);
uint32_t * __thiscall sub_json_102507b0(void *this,uint32_t param_1);

/* ---- _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit19_10250840.cpp ---- */
void __fastcall sub_10250840(char *param_1);
void __fastcall sub_10250850(char *param_1);
void __fastcall sub_10250860(char *param_1);
void __fastcall sub_10250870(char *param_1);
char * __fastcall sub_10250880(char *param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_102508c0(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __cdecl sub_10250900(uint32_t param_1);
void __fastcall sub_10250930(int param_1);
int __fastcall sub_10250950(char *param_1);
int __fastcall sub_10250970(char *param_1);
int __fastcall sub_10250990(char *param_1);
int __fastcall sub_102509b0(char *param_1);
uint32_t __fastcall sub_102509d0(char *param_1);
bool __fastcall sub_102509f0(char *param_1);
bool __fastcall sub_10250a00(char *param_1);
uint8_t __fastcall sub_10250a10(char *param_1);
void __fastcall sub_10250a20(char *param_1);
void __thiscall sub_10250a30(void *this,uint32_t param_1,uint32_t param_2);
void __thiscall sub_10250a50(void *this,uint32_t param_1,uint32_t param_2);
void __fastcall sub_10250a70(uint32_t param_1,uint32_t param_2);
void * sub_10250a90(void *param_1,void *param_2,uint32_t param_3);
void __fastcall sub_10250ac0(char *param_1);
void __thiscall sub_10250b40(void *this,uint32_t param_1,uint32_t param_2);
uint32_t * __fastcall sub_10250bb0(uint32_t *param_1);

/* ---- _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_after_unit19.cpp ---- */
void * __thiscall sub_10250bd0(void *this,void *param_1,void *param_2,uint32_t param_3);
void __fastcall sub_10250ca0(int param_1);
uint32_t sub_10250cc0(void *param_1,uint32_t param_2);
uint32_t * __thiscall sub_10250ce0(void *this,uint32_t param_1,uint32_t param_2);
void * __fastcall sub_10250d20(int param_1,int param_2,void *param_3);
void __thiscall sub_10250d58(void *this,byte param_1);
void __thiscall sub_10250d60(void *this,uint param_1);

/* ---- _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_after_unit21.cpp ---- */
void sub_102534d0(void);
void __fastcall thunk_FUN_10253550(uint32_t param_1);
uint8_t * __fastcall sub_102534f0(uint32_t param_1);
void __fastcall sub_10253550(uint32_t param_1);
void sub_10253570(void);
uint8_t * __fastcall sub_10253590(uint32_t param_1);
void sub_102535c0(void);
uint32_t * __thiscall sub_102535e0(void *this,uint32_t *param_1,uint32_t *param_2);
void __thiscall sub_10253630(void *this,uint32_t param_1);
void sub_10253650(uint32_t param_1);
uint8_t * sub_102536c0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
int sub_102536e0(void);
void sub_10253730(void);
uint8_t * sub_10253740(void);
void sub_10253750(uint32_t param_1,uint32_t *param_2);
void __fastcall sub_102537b0(uint32_t param_1,void *param_2);
int * sub_102537c0(int param_1,uint32_t param_2);
uint32_t sub_10253860(void);
void __fastcall thunk_FUN_102538e0(int param_1);
uint8_t * sub_10253880(void);
void sub_stl_102538a0(void);
void __fastcall sub_102538c0(uint32_t param_1,void *param_2);
void __fastcall thunk_FUN_102538e0(int param_1);
void __fastcall sub_102538e0(int param_1);
uint sub_102538f0(void);
uint32_t sub_10253920(void);
void sub_10253930(void *param_1);
void __fastcall thunk_FUN_102537b0(uint32_t param_1,void *param_2);
int * sub_10253960(int *param_1,int param_2,uint *param_3);
void * __thiscall sub_10253b20(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void * __thiscall sub_10253ba0(void *this,uint32_t param_1);
uint8_t * thunk_FUN_10253cc0(void);
void __fastcall sub_10253c10(int param_1);
int * sub_10253c30(int *param_1,uint *param_2);
void __cdecl sub_10253c90(uint32_t param_1);
uint8_t * sub_10253cc0(void);

/* ---- _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_after_unit23.cpp ---- */
void sub_10253f00(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void __thiscall sub_10253f10(void *this,uint32_t param_1,uint32_t param_2);
uint64_t sub_DetectGameVersion_10253f30(void);
int sub_GameVersionIndex_10253fc0(void);
uint32_t * __fastcall sub_10253fe0(uint32_t *param_1);
void __cdecl sub_10254150(void *param_1,uint32_t param_2);
uint32_t * __thiscall sub_10254170(void *this,uint param_1);
uint __fastcall sub_10254190(uint32_t param_1,int param_2,uint param_3);
uint32_t __fastcall sub_102541c0(void *param_1,uint32_t param_2,uint32_t param_3);

/* ---- _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit26_10259d70.cpp ---- */
void sub_10259d70(int *param_1,int *param_2);
void sub_10259d90(uint32_t param_1,int param_2);
uint sub_10259df0(int *param_1,uint param_2,uint param_3,int param_4);
void sub_6faf8b20(void);   /* game binding -> D2Client.dll +0x48b20, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
void sub_10259e80(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,void *param_7,uint32_t param_8);
void sub_10259fc0(uint32_t param_1,int *param_2,uint32_t param_3);
uint32_t sub_10259ff0(uint32_t param_1,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5 ,uint32_t param_6,uint32_t param_7);
void sub_1025a0e0(short *param_1,uint32_t param_2);
void sub_1025a1e0(void);
void sub_1025a320(void);
void sub_1025aa30(void);
void sub_1025b2f0(void);
uint D2Net_10024(ushort param_1,uint param_2,char *param_3);   /* game binding -> D2Net.dll ordinal 10024, sigmaRE/5_game_source/D2Net/_unattributed/after_SRC_Server.cpp */
void sub_1025b360(char *param_1,uint32_t param_2);
uint32_t sub_1025b3d0(int param_1);
void __fastcall sub_1025bae0(uint32_t param_1,uint32_t param_2,int param_3);
void sub_1025bb70(char *param_1,uint param_2);
void __fastcall sub_Wraps_D2Client_SKILLS_Skills_1025bb80(int *param_1);
void __fastcall sub_Hook_sub_6fb4fb00_1025bcb0(uint32_t param_1,uint32_t param_2);
int __fastcall sub_1025bde0(int param_1,int param_2,char *param_3);
uint32_t sub_Wraps_D2Client_ENGINE_Gfx_1025be90(int *param_1,uint param_2,int param_3);
void sub_1025c2d0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_1025c2f0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
uint32_t __fastcall sub_1025c310(int *param_1,int *reg_EAX);
void sub_1025c380(uint32_t reg_EAX,uint param_2,uint param_3,uint param_4,uint param_5, uint param_6,uint param_7);
void sub_1025c3c0(int *param_1,uint32_t reg_EAX);
void sub_1025c3f0(int param_1,int param_2,int param_3);
void sub_1025c4a0(int *param_1);
void __fastcall sub_1025c4c0(uint32_t param_1,uint param_2);
longlong __fastcall sub_1025c610(uint32_t *param_1,int param_2,uint param_3,uint32_t param_4);
int * __thiscall sub_1025c7c0(void *this,uint32_t param_1,uint32_t param_2,uint param_3,uint32_t param_4);
int * __fastcall sub_1025c930(int *param_1,int param_2,int param_3,int param_4,uint param_5,uint32_t param_6);
void sub_Hook_sub_6fb739e0_1025cbd0(void);
void sub_1025d170(void);
bool __fastcall sub_1025d190(int param_1);
uint __fastcall sub_1025d1e0(int param_1);
void sub_1025d2e0(void);
void sub_1025d361(void);
uint8_t sub_1025d380(uint32_t reg_EDI);
void sub_1025daa0(void);
void sub_1025daf0(void);
void sub_1025db10(void);
int __fastcall sub_1025db30(int param_1);
void sub_1025db70(int *param_1);
void sub_1025de10(uint param_1,int param_2);
uint __fastcall sub_1025de90(uint param_1);
void sub_Hook_sub_6faf4b50_1025dee0(void);
uint32_t sub_1025df20(int param_1);
uint sub_1025df70(int *param_1,int param_2);
int * __fastcall sub_1025dfb0(int *param_1);
void __fastcall sub_1025dfc0(int *param_1);
int sub_1025dfd0(uint *param_1);
uint32_t sub_1025e010(void *param_1,uint *param_2);
uint32_t sub_1025e030(void *param_1);
uint32_t sub_1025e050(void *param_1);
int * sub_1025e070(int *param_1);
int __fastcall sub_1025e0a0(int *param_1);
void __thiscall sub_1025e0b0(void *this,uint32_t param_1);
void __thiscall sub_1025e0c0(void *this,uint32_t param_1);
void __thiscall sub_1025e0f0(void *this,uint32_t param_1);
void __fastcall thunk_FUN_1025f310(int *param_1);
void * __thiscall sub_1025e130(void *this,uint32_t param_1);
void __thiscall sub_1025e160(void *this,locale *param_1);
uint32_t __fastcall sub_1025e180(int *param_1);
void * __thiscall sub_1025e1f0(void *this,char *param_1,int param_2,int param_3);
void * __thiscall sub_1025e250(void *this,void *param_1);
uint32_t __thiscall sub_1025e310(void *this,void *param_2,uint param_3,int param_4,int param_5,int reg_EDI);
__int64 __thiscall sub_1025e3f0(void *this,wchar_t *param_1,uint32_t param_2,uint32_t param_3);
__int64 __thiscall sub_1025e410(void *this,wchar_t *param_1,uint32_t param_2,uint32_t param_3);
uint __fastcall sub_1025e430(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *param_1);
ushort __fastcall sub_1025e610(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *param_1);
uint __thiscall sub_1025e690(void *this,ushort param_1);
uint __thiscall sub_1025e7c0(void *this,ushort param_1);
void __fastcall sub_1025e960(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *param_1);
void __fastcall sub_1025e9c0(int param_1);
basic_istream<wchar_t,std::char_traits<wchar_t>_> * __fastcall sub_1025e9f0(basic_istream<wchar_t,std::char_traits<wchar_t>_> *param_1);
void sub_1025eac0(void);
void __fastcall sub_1025eae0(int *param_1);
uint32_t * __fastcall sub_1025eb00(uint32_t *param_1);
uint32_t * sub_1025eb70(void);
uint32_t __thiscall sub_1025eba0(void *this,void *param_1,uint *param_2);
void __fastcall sub_1025ebc0(uint32_t param_1);
int sub_1025ebf0(void);
int __fastcall sub_1025ec10(uint32_t param_1);
int sub_1025ec30(int param_1);
int sub_1025ec50(void);
uint32_t sub_1025ec60(void);
uint32_t sub_1025ec70(void);
uint32_t sub_1025ec80(void *param_1);
void sub_1025eca0(void);
uint32_t sub_1025ecb0(void *param_1,int param_2);
void sub_1025ece0(uint32_t param_1);
void sub_1025ed00(uint32_t param_1);
void sub_1025ed30(uint32_t param_1);
uint32_t * sub_1025ed70(void);
void __thiscall sub_1025ed90(void *this,uint32_t *param_1);
void sub_1025edb0(int param_1,int param_2);
uint32_t * __thiscall sub_1025edd0(void *this,uint32_t *param_1,wchar_t *param_2,wchar_t *param_3);
uint __thiscall sub_1025eea0(void *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4);
void __fastcall sub_1025eee0(facet *param_1);
void * __thiscall sub_1025ef00(void *this,void *param_1,uint param_2);
void __fastcall sub_1025ef20(int param_1);
void __thiscall sub_1025ef40(void *this,uint param_1);
void sub_1025ef90(void *param_1,void *param_2,int param_3);
void __thiscall sub_1025efb0(void *this,uint param_1);
void __thiscall sub_1025efe0(void *this,uint32_t param_1);
void sub_1025f030(void *param_1,void *param_2,int param_3);
uint32_t __thiscall sub_1025f070(void *this,void *param_1);
uint64_t __fastcall sub_1025f090(int param_1);
int __fastcall sub_1025f0a0(int param_1);
uint32_t __thiscall sub_1025f0b0(void *this,void *param_1);
uint64_t __thiscall sub_1025f0e0(void *this,void *param_1);
void * __fastcall sub_1025f100(void *param_1);
void * __thiscall sub_1025f120(void *this,uint32_t param_1);
void * __thiscall sub_1025f140(void *this,uint32_t param_1);
uint32_t * __thiscall sub_1025f170(void *this,uint param_1);
void __fastcall sub_1025f190(int param_1);
bool __fastcall sub_1025f1b0(int param_1);
uint32_t __thiscall sub_1025f1c0(void *this,void *param_1);
uint32_t __thiscall sub_1025f1e0(void *this,void *param_1);
uint32_t * __thiscall sub_1025f200(void *this,char *param_1);
basic_streambuf<wchar_t,std::char_traits<wchar_t>_> * __thiscall sub_1025f220(void *this,byte param_1);
void * __thiscall sub_1025f250(void *this,byte param_1);
void __fastcall thunk_FUN_1025f2e0(int param_1);
uint32_t * __fastcall sub_1025f290(uint32_t *param_1);
facet * __thiscall sub_1025f2b0(void *this,byte param_1);
void __fastcall sub_1025f2e0(int param_1);
int __fastcall sub_1025f2f0(int *param_1);
uint32_t __fastcall sub_1025f300(int *param_1);
void __fastcall sub_1025f310(int *param_1);
void __thiscall sub_1025f350(void *this,uint32_t *param_1);
void __fastcall sub_1025f370(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *param_1);
void __fastcall sub_1025f3b0(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *param_1);
void __thiscall sub_1025f3e0(void *this,codecvt_base *param_1);
bool __fastcall sub_1025f420(int *param_1);
void __thiscall sub_1025f520(void *this,uint32_t param_1,int param_2);
basic_streambuf<wchar_t,std::char_traits<wchar_t>_> * __fastcall sub_1025f560(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *param_1);
basic_streambuf<wchar_t,std::char_traits<wchar_t>_> * __thiscall sub_1025f5b0(void *this,uint32_t param_1,int param_2);
basic_streambuf<wchar_t,std::char_traits<wchar_t>_> * __fastcall sub_1025f660(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *param_1);
void __fastcall sub_1025f6c0(int *param_1);
uint32_t * __thiscall sub_1025f6f0(void *this,uint32_t param_1,int param_2);
uint32_t * __fastcall sub_1025f720(uint32_t *param_1);
void sub_1025f780(void);
void __thiscall sub_1025f790(void *this,int param_1);
void __fastcall sub_1025f7c0(uint32_t *param_1);
uint32_t * __thiscall sub_1025f800(void *this,uint param_1);
void sub_1025f870(void *param_1,void *param_2,int param_3,uint param_4);
void __thiscall sub_1025f8c0(void *this,uint param_1);
void __thiscall sub_1025f960(void *this,uint16_t *param_1);
uint32_t * __thiscall sub_1025f980(void *this,void *param_1,uint param_2);
uint32_t __fastcall sub_1025f9b0(ushort *param_1,ushort *param_2,int param_3);
int * __fastcall thunk_FUN_1025faf0(int *param_1);
void __thiscall Take_contents(void *this,uint32_t *param_1);
void sub_1025fa50(int param_1,int param_2);
void __fastcall sub_1025fa70(uint32_t *param_1);
void __thiscall sub_1025faa0(void *this,void *param_1,uint param_2);
void __fastcall sub_1025fae0(void *param_1,uint param_2);
int * __fastcall sub_1025faf0(int *param_1);
void * __fastcall sub_1025fb00(void *param_1);
int __fastcall sub_1025fb60(int param_1);
uint8_t ** sub_1025fb70(void);
uint8_t ** sub_1025fb80(void);
void * __fastcall sub_1025fb90(void *param_1,char *param_2,int param_3);
void __fastcall sub_1025fbf0(uint32_t param_1,int param_2);
_Facet_base * __fastcall sub_1025fc00(locale *param_1);
uint32_t __fastcall sub_1025fcf0(uint32_t param_1,uint32_t param_2);
uint32_t __fastcall sub_1025fd60(uint32_t param_1,uint32_t param_2);
uint32_t * __fastcall sub_1025fdd0(uint32_t *param_1,UINT param_2);
void __thiscall sub_1025fec0(void *this,uint32_t *param_1);
void __thiscall sub_1025fee0(void *this,uint32_t param_1,uint32_t param_2);
uint32_t * __fastcall sub_1025ff40(uint32_t *param_1);
void __fastcall sub_1025ff70(int *param_1,void *param_2);
uint32_t * __fastcall sub_1025ffb0(uint32_t *param_1);
void __cdecl sub_1025fff0(uint32_t param_1,uint32_t param_2);
int * __thiscall sub_10260010(void *this,int *param_1);
uint64_t __fastcall sub_10260030(uint64_t *param_1);
uint32_t * __fastcall sub_10260050(uint32_t *param_1,uint64_t *param_2);
void * __thiscall sub_102600f0(void *this,uint32_t param_1);
void __fastcall sub_10260110(void *param_1);
byte __fastcall sub_10260150(void *param_1);
void __cdecl sub_10260160(uint32_t param_1,uint32_t param_2);
int __fastcall sub_10260180(int param_1);
void * __fastcall sub_10260190(void *param_1,int param_2,void *param_3);
void * __fastcall sub_102601c0(void *param_1,void *param_2,int param_3);
void sub_102601f0(void);
uint32_t __thiscall sub_10260230(void *this,uint32_t param_1,uint param_2);
uint32_t sub_10260270(uint *param_1);
void __cdecl sub_102602b0(uint32_t param_1);
int __thiscall sub_102602e0(void *this,int param_1,uint32_t param_2);
void __thiscall sub_10260420(void *this,uint32_t param_1,int param_2);
uint32_t __thiscall sub_102604a0(void *this,uint *param_1);
int sub_102604e0(int param_1,uint32_t param_2);
uint32_t * sub_102605a0(void);
_Facet_base * __cdecl sub_102605b0(locale *param_1);
int __fastcall sub_102606a0(short *param_1,int param_2);
uint32_t * __thiscall sub_102606d0(void *this,uint param_1);
uint32_t * __fastcall sub_10260790(uint32_t *param_1);
uint32_t * __thiscall sub_10260850(void *this,uint param_1,uint32_t param_2,uint param_3);
void __fastcall sub_10260910(int param_1,int param_2);
_Facet_base * __fastcall sub_10260940(void *param_1);
void __fastcall sub_10260a20(int param_1);
void __fastcall sub_10260a30(void *param_1);
void __thiscall sub_10260a40(void *this,int param_1,int param_2,int param_3);
void __thiscall sub_10260a90(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __thiscall sub_10260ab0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __thiscall sub_10260ad0(void *this,int param_1);
uint32_t * sub_10260af0(void);
void sub_10260b20(int param_1,int param_2,int param_3);
uint sub_10260b70(uint param_1);
uint32_t __thiscall sub_10260ba0(void *this,uint *param_1);
uint32_t __fastcall sub_10260bc0(int *param_1,void *param_2);
uint32_t * __thiscall sub_10260c80(void *this,uint32_t param_1,uint32_t *param_2,uint param_3);
void sub_10260d40(void *param_1,void *param_2,int param_3,uint32_t param_4,void *param_5, int param_6);
void __thiscall sub_10260d80(void *this,uint32_t param_1,int param_2);
uint32_t * __thiscall sub_10260da0(void *this,uint32_t param_1,uint32_t param_2,void *param_3,size_t param_4, void *param_5,size_t param_6);
uint32_t __fastcall sub_10260e80(uint32_t *param_1);
short * __fastcall sub_10260ea0(short *param_1,int param_2,short *param_3);
void __thiscall sub_10260ed0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
int sub_10260ef0(void);
uint * __thiscall sub_10260f00(void *this,uint *param_1);
facet * __thiscall sub_10260f20(void *this,_Locinfo *param_1);
void __thiscall sub_10260f80(void *this,_Locinfo *param_1);
short * __fastcall sub_10260fb0(short *param_1,uint param_2);
uint32_t * __thiscall sub_10260fe0(void *this,uint32_t param_1,uint32_t param_2);
void __thiscall sub_10261040(void *this,uint32_t *param_1);
uint32_t * __fastcall sub_102610a0(uint32_t *param_1);
uint32_t __fastcall sub_102610d0(uint32_t param_1);
char * sub_102610f0(void);
int * __fastcall sub_10261100(int *param_1,void *param_2);
int * sub_10261261(int *reg_ESI,uint reg_EDI);
void __thiscall sub_102612a0(void *this,int param_1,int param_2);
void __fastcall sub_10261330(uint32_t *param_1,uint32_t *param_2);
void * __fastcall sub_10261340(void *param_1,void *param_2,uint64_t *param_3);
void __fastcall sub_10261380(void *param_1,void *param_2);
uint64_t * __thiscall sub_102613c0(void *this,uint64_t *param_1);
void __fastcall sub_102613f0(void *param_1);
void __thiscall sub_10261470(void *this,uint32_t param_1);
uint8_t __fastcall sub_10261520(wchar_t *param_1,wchar_t *param_2,uint32_t param_3,uint32_t param_4,uint param_5);
uint32_t __thiscall sub_102616b0(void *this,uint32_t param_1,uint param_2);
int * __thiscall sub_10261780(void *this,int param_1,uint32_t param_2,int param_3);
int __fastcall sub_102618b0(int *param_1);
void __fastcall sub_10261960(uint32_t param_1,uint32_t *param_2);
uint32_t __fastcall sub_10261970(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
uint32_t * __thiscall sub_102619f0(void *this,uint param_1,uint32_t param_2,uint32_t param_3,void *param_4,int param_5 );
uint32_t __fastcall sub_10261ab0(ushort *param_1,int param_2,ushort *param_3,int param_4,uint reg_EAX);
void __fastcall thunk_FUN_102380c0(int *param_1);
void __fastcall sub_10261ae0(int param_1);
void __fastcall sub_10261b00(void *param_1);
uint32_t * __fastcall sub_10261b20(uint32_t *param_1);
void __fastcall sub_10261b30(int param_1);
void __fastcall sub_10261b50(int param_1);
void __fastcall sub_10261b60(int *param_1);
void __fastcall sub_10261b70(uint32_t *param_1);
void __fastcall thunk_FUN_10261e60(uint32_t *param_1);
void sub_10261b90(void);
void __fastcall sub_10261bb0(int param_1);
int __thiscall sub_10261bc0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,int param_4, uint32_t param_5,uint32_t param_6,uint param_7);
int __fastcall sub_10261c90(int param_1);
uint32_t __fastcall sub_10261cb0(int param_1);
void __fastcall sub_10261cc0(uint32_t *param_1);
void __fastcall sub_10261ce0(uint32_t *param_1);
void __fastcall sub_10261cf0(uint32_t *param_1);
uint32_t * __thiscall sub_10261d00(void *this,int *param_1);
int __fastcall sub_10261d60(int param_1);
uint8_t * sub_10261d70(void);
bool sub_10261d80(void);
uint32_t sub_10261d90(void);
uint32_t sub_10261da0(void);
int sub_10261db0(void);
void * __fastcall sub_10261dd0(void *param_1);
void __thiscall sub_10261e30(void *this,int param_1,int param_2);
void __fastcall sub_10261e60(uint32_t *param_1);
void sub_10261e90(void *param_1);
void __thiscall sub_10261eb0(void *this,uint param_1);
void * __thiscall sub_10261ed0(void *this,uint32_t param_1,char *param_2);
uint32_t * __thiscall sub_10261f10(void *this,uint param_1,int *param_2);
void sub_regex_10261f40(error_type param_1);
void __fastcall sub_10261f50(int *param_1);
void __fastcall sub_10262100(int *param_1);
uint32_t * __thiscall sub_10262190(void *this,uint32_t param_1);
void __fastcall sub_10262200(int *param_1);
void __thiscall sub_10262230(void *this,int param_1);
void __thiscall sub_10262290(void *this,uint32_t param_1);
uint32_t __fastcall sub_102622c0(uint32_t *param_1);
uint32_t * __fastcall sub_102622d0(uint32_t *param_1);
void __thiscall sub_10262300(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
uint32_t __fastcall sub_10262320(uint32_t *param_1,uint32_t *param_2);
void * __fastcall sub_10262370(void *param_1,uint32_t *param_2,uint64_t *param_3);
void * __fastcall sub_102623d0(void *param_1,uint64_t *param_2);
uint __fastcall sub_10262410(void *param_1,void *param_2);
void * __fastcall sub_10262420(void *param_1,void *param_2,void *param_3);
bool __fastcall sub_10262460(uint64_t *param_1,uint64_t *param_2);
uint32_t __fastcall sub_10262510(uint32_t param_1,uint32_t param_2);
uint32_t sub_10262550(void);
wchar_t * __thiscall sub_102625e0(void *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3);
bool __fastcall sub_102628b0(uint32_t *param_1);
void __thiscall sub_10262910(void *this,uint32_t param_1);

/* ---- _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit26_10262930.cpp ---- */
void __thiscall sub_10262930(void *this,uint32_t param_1);
void __thiscall sub_10262960(void *this,uint param_1);
void __thiscall sub_102629c0(void *this,uint param_1,int *param_2);
void __fastcall sub_10262a00(uint32_t *param_1);
void __fastcall sub_10262a20(uint32_t *param_1);
uint32_t __fastcall sub_10262a70(int param_1);
int __thiscall sub_10262a80(void *this,int param_1);
uint * __thiscall sub_10262a90(void *this,uint *param_1);
void __thiscall sub_10262ab0(void *this,uint32_t param_1,int param_2);
void * sub_10262ad0(void *param_1,int param_2);
void __thiscall sub_10262b20(void *this,uint param_1);
bool __thiscall sub_10262be0(void *this,wchar_t param_1,short param_2);
void __thiscall sub_10262c30(void *this,wchar_t param_1);
uint16_t __thiscall sub_10262c50(void *this,uint16_t param_1);
uint32_t * __thiscall sub_10262cd0(void *this,byte param_1);
void * __fastcall sub_10262d00(void *param_1);
void sub_10262d20(void *param_1);
void __fastcall sub_10262d50(int param_1);
void __thiscall sub_10262d60(void *this,int param_1);
uint64_t * __thiscall sub_10262d80(void *this,uint64_t *param_1);
uint32_t __thiscall sub_10262eb0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void * __fastcall sub_10262ed0(void *param_1);
void __fastcall sub_10262ef0(int param_1);
void * __fastcall sub_10262f00(void *param_1,uint64_t *param_2);
uint64_t * __thiscall sub_10262f40(void *this,uint64_t *param_1);
uint __fastcall sub_10262f70(int *param_1);
void __fastcall sub_10262fb0(int *param_1);
uint32_t __fastcall sub_10262fe0(int *param_1);
uint __fastcall sub_10263180(int param_1);
void __fastcall sub_102631b0(void *param_1);
uint32_t * __thiscall sub_102631c0(void *this,int param_1);
void __thiscall sub_10263220(void *this,int param_1,int param_2);
int __thiscall sub_10263290(void *this,int param_1);
void __thiscall sub_102632d0(void *this,uint32_t param_1);
uint8_t __thiscall sub_regex_10263310(void *this,wchar_t *param_1);
uint32_t __fastcall sub_102637d0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void * __fastcall sub_10263870(void *param_1,uint32_t *param_2,uint32_t *param_3);
uint64_t * __thiscall sub_102638d0(void *this,uint64_t *param_1);
bool __fastcall sub_10263900(uint32_t param_1,uint64_t *param_2);
void * __fastcall sub_10263940(void *param_1,uint64_t *param_2);
void * __thiscall sub_10263970(void *this,uint32_t param_1);
uint64_t __fastcall sub_10263990(uint32_t param_1);
void __fastcall thunk_FUN_10259bb0(uint32_t *param_1);
int __fastcall sub_102639c0(int param_1);
uint32_t __fastcall sub_102639d0(uint32_t param_1,uint32_t param_2,uint *param_3);
void __fastcall sub_10263a30(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,uint32_t param_5, uint param_6);
short * __fastcall sub_10263ad0(short *param_1,short *param_2,uint *param_3);
uint __fastcall sub_10263b70(uint param_1,int param_2);
uint32_t __thiscall sub_10263bc0(void *this,ushort param_1);
uint32_t __fastcall sub_10263bf0(uint32_t param_1,uint32_t param_2,short *param_3);
uint8_t __fastcall sub_10263c50(uint32_t param_1,int *param_2,void *param_3);
void __cdecl sub_10263db0(uint32_t param_1);
void __thiscall sub_10263de0(void *this,uint param_1);
void __fastcall sub_10263e60(uint32_t param_1,int param_2,uint32_t param_3);
void __fastcall sub_10263ec0(uint32_t *param_1);
uint32_t * __thiscall sub_10263ee0(void *this,uint32_t *param_1);
void * __thiscall sub_10263f10(void *this,uint32_t *param_1);
uint32_t * __thiscall sub_10263f40(void *this,uint32_t *param_1);
uint16_t __thiscall sub_10263f60(void *this,int param_1);
void __thiscall sub_10263f80(void *this,uint32_t *param_1);
int __thiscall sub_10263f90(void *this,uint32_t param_1);
void __thiscall sub_10263fc0(void *this,int param_1,int param_2,int param_3);
uint __thiscall sub_10264000(void *this,uint param_1);
void sub_10264030(uint32_t param_1,uint32_t param_2,int param_3);
void * __thiscall sub_10264050(void *this,int param_1);
void * __thiscall sub_10264080(void *this,int *param_1);
void sub_102640a0(uint32_t *param_1);
void sub_102640c0(uint32_t param_1,uint32_t param_2,int param_3);
int __fastcall sub_102640e0(int *param_1);
int __thiscall sub_102640f0(void *this,uint32_t param_1);
void * __thiscall sub_10264120(void *this,int *param_1);
void sub_10264150(uint32_t *param_1);
void __thiscall sub_10264170(void *this,int param_1,error_type param_2);
void __fastcall sub_10264190(int *param_1);
void __fastcall sub_102641e0(int *param_1);
uint __fastcall sub_102642b0(int *param_1);
void __fastcall sub_10264360(int *param_1);
int sub_10264460(int param_1);
void __fastcall sub_10264490(void *param_1);
void __fastcall sub_102644a0(void *param_1);
void __fastcall sub_102644b0(void *param_1);
void __fastcall sub_102644c0(void *param_1);
void __thiscall sub_102644d0(void *this,wchar_t param_1);
void __fastcall sub_10264570(int param_1);
void __fastcall sub_10264580(int param_1,int param_2);
uint8_t __thiscall sub_102645a0(void *this,int param_1);
char __thiscall sub_102646d0(void *this,int param_1,char param_2,int param_3);
uint8_t __thiscall sub_10264860(void *this,int param_1);
bool __fastcall sub_102649f0(int param_1);
bool __fastcall sub_10264ae0(uint32_t *param_1);
void * __fastcall sub_10264ba0(void *param_1,uint64_t *param_2);
int __fastcall sub_10264be0(int param_1,int param_2);
void __thiscall sub_10264bf0(void *this,uint32_t param_1);
void * __fastcall sub_10264c20(void *param_1,uint64_t *param_2);
uint64_t * __fastcall sub_10264c60(uint64_t *param_1);
uint64_t * __thiscall sub_10264c90(void *this,uint64_t *param_1);
void * __thiscall sub_10264cc0(void *this,uint32_t param_1,uint32_t param_2);
uint64_t sub_10264ce0(uint32_t param_1,uint32_t param_2);
void __fastcall sub_10264d00(ushort *param_1,ushort *param_2,uint *param_3);
wchar_t * __fastcall sub_10264d20(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4);
uint16_t * __fastcall sub_10264d80(uint16_t *param_1,uint16_t *param_2,uint16_t *param_3,uint16_t *param_4);
short * __fastcall sub_10264df0(short *param_1,short *param_2,short *param_3,short *param_4);
void __fastcall sub_10264e40(short *param_1,short *param_2,short *param_3);
uint32_t * __thiscall sub_10264e60(void *this,uint32_t *param_1,uint32_t param_2,int param_3);
void __fastcall sub_10264f70(void *param_1,int param_2);
void __fastcall sub_10264f80(int param_1);
void sub_10264fa0(uint32_t param_1,uint32_t param_2);
int __fastcall sub_10264ff0(uint32_t param_1,uint32_t param_2,int param_3);
void sub_10265050(uint32_t param_1,uint32_t param_2);
void * __thiscall sub_102650a0(void *this,uint32_t *param_1);
void __fastcall sub_10265100(uint32_t *param_1);
int __fastcall sub_10265110(int *param_1);
void __fastcall thunk_FUN_10265280(uint32_t *param_1);
bool sub_10265130(short param_1,short param_2);
bool __thiscall sub_10265150(void *this,uint16_t param_1,uint16_t param_2);
bool __thiscall sub_10265180(void *this,wchar_t param_1,wchar_t param_2);
void __thiscall sub_102651b0(void *this,uint16_t param_1);
int * __thiscall sub_102651e0(void *this,int *param_1);
void __thiscall sub_10265230(void *this,int param_1);
void __fastcall sub_10265270(uint32_t *param_1);
void __fastcall sub_10265280(uint32_t *param_1);
void __thiscall sub_102652b0(void *this,uint param_1);
bool __fastcall sub_102652f0(void *param_1);
uint32_t __thiscall sub_10265310(void *this,char param_2,uint reg_EAX);
void __fastcall sub_10265390(int *param_1);
uint32_t __fastcall sub_10265480(int *param_1);
void __fastcall sub_102655a0(int param_1);
void __fastcall sub_10265610(int param_1);
void __thiscall sub_10265640(void *this,byte param_1);
void __fastcall sub_10265670(void *param_1);
void __thiscall sub_102656b0(void *this,wchar_t param_1);
void __thiscall sub_102656e0(void *this,uint32_t param_1);
uint64_t __thiscall sub_10265710(void *this,int param_1,int param_2,byte param_3);
void __fastcall sub_102658c0(int param_1);
void __fastcall sub_102658d0(void *param_1);
char __thiscall sub_10265900(void *this,int param_1,char param_2);
uint8_t __fastcall sub_10265a80(ushort param_1);
void * __fastcall sub_10265aa0(void *param_1);
void * __fastcall sub_10265ad0(void *param_1,uint64_t *param_2);
uint64_t * sub_10265b00(uint32_t param_1);
ushort * __fastcall sub_10265b30(ushort *param_1,ushort *param_2,uint *param_3);
short * __fastcall sub_10265b60(short *param_1,short *param_2,short *param_3);
uint32_t * __fastcall sub_10265b80(uint32_t *param_1);
void __fastcall sub_10265bc0(uint32_t param_1,uint32_t param_2);
void __thiscall sub_10265be0(void *this,int param_1,int param_2);
void __thiscall sub_10265c40(void *this,int param_1,int param_2);
void sub_10265ca0(uint32_t param_1,uint32_t param_2,int param_3);
void __fastcall sub_10265cc0(void *param_1);
void __fastcall sub_10265cd0(uint32_t *param_1);
uint32_t * __fastcall sub_10265cf0(void *param_1);
uint32_t __fastcall sub_10265d30(int param_1);
uint32_t __fastcall sub_10265d40(void *param_1);
void __thiscall sub_10265d60(void *this,uint param_1);
void __thiscall sub_10265dc0(void *this,uint param_1);
void * __thiscall MemMapReadOnly::_scalar_deleting_destructor_(MemMapReadOnly *this,uint param_1);
void __fastcall sub_10265e50(uint32_t *param_1);
int __thiscall sub_10265e70(void *this,int param_1,int param_2);
void __thiscall sub_10265ed0(void *this,int param_1);
bool __fastcall sub_10265ef0(void *param_1);
bool __fastcall sub_10265f00(int *param_1);
uint32_t __fastcall sub_10265ff0(int param_1);
ushort __thiscall sub_10266010(void *this,ushort param_1);
uint __thiscall sub_10266080(void *this,short param_2,uint32_t reg_EAX);
void __thiscall sub_102660c0(void *this,wchar_t param_1,wchar_t param_2);
void __thiscall sub_102661c0(void *this,ushort param_1,char param_2);
int __thiscall sub_102661f0(void *this,byte param_1);
void __thiscall sub_102662a0(void *this,int param_1);
void __thiscall sub_102662c0(void *this,wchar_t param_1);
void __thiscall sub_10266320(void *this,wchar_t param_1);
ushort __thiscall sub_10266380(void *this,uint32_t param_1,uint32_t param_2,char param_3);
uint64_t * __thiscall sub_10266460(void *this,uint64_t *param_1);
void __thiscall sub_10266480(void *this,int param_1,int param_2);
void __fastcall sub_102664d0(uint32_t *param_1);
void __thiscall sub_102664e0(void *this,uint param_1);
void __thiscall std::vector<CHN*,std::allocator<CHN*>_>::_Buy_raw (vector<CHN*,std::allocator<CHN*>_> *this,uint param_1);
uint sub_10266540(void);
uint32_t __fastcall sub_10266570(uint32_t param_1,uint32_t param_2);
void __thiscall sub_102665c0(void *this,error_type param_1);
bool __fastcall sub_102666e0(int *param_1);
uint __fastcall sub_10266760(int param_1);
void __thiscall sub_10266860(void *this,int param_1,short param_2,char param_3);
uint32_t __fastcall sub_102668c0(int param_1);
void __thiscall sub_102668d0(void *this,uint param_1);
void __thiscall sub_102668f0(void *this,ushort param_1);
uint __fastcall sub_10266910(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void sub_102669a0(uint32_t param_1,uint32_t param_2,int param_3);
void __thiscall sub_102669c0(void *this,uint16_t *param_1,uint16_t *param_2,uint param_3);
void __thiscall sub_10266ae0(void *this,uint16_t *param_1,uint16_t *param_2,uint param_3);
uint32_t * __thiscall sub_10266b10(void *this,uint32_t param_1);
uint32_t __fastcall sub_10266b20(uint32_t param_1,uint32_t param_2);
int __fastcall sub_10266bb0(uint32_t param_1,uint32_t param_2,int param_3);
void sub_10266c10(uint16_t *param_1,uint16_t *param_2,uint param_3,uint *param_4);
uint32_t * sub_10266c70(uint32_t *param_1,int param_2,int param_3);
uint32_t __thiscall sub_10266d80(void *this,uint32_t param_1);
void __thiscall sub_10266da0(void *this,uint16_t *param_1,uint16_t *param_2);
uint32_t * __thiscall sub_10266dd0(void *this,uint32_t param_1,uint32_t param_2);

/* ---- _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_after_unit26.cpp ---- */
void __thiscall sub_10266e27(void *this,byte param_1);
void * __fastcall sub_10266e30(void *param_1);
void * __fastcall sub_10266e50(void *param_1);
void * __fastcall sub_10266e70(void *param_1);

/* ---- _unattributed/between_functions_D2ServerFunctions_and_events_SkillEvents_unit29_10275e40.cpp ---- */
uint D2Common_10802(int *param_1);   /* game binding -> D2Common.dll ordinal 10802, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_11148(int *param_1,int *param_2,int param_3,int param_4,int param_5,int *param_6, int *param_7,uint param_8);   /* game binding -> D2Common.dll ordinal 11148, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10405_10275ea0(int *param_1,int *param_2,uint32_t param_s3);   /* game binding -> D2Common_10405, D2Common.dll ordinal 10405, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
int D2Common_10661(int *param_1);   /* game binding -> D2Common.dll ordinal 10661, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
int D2Common_11144(int *param_1);   /* game binding -> D2Common.dll ordinal 11144, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
uint D2Common_10089(int *param_1);   /* game binding -> D2Common.dll ordinal 10089, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
uint D2Common_10428(uint param_1,uint param_2,uint param_3);   /* game binding -> D2Common.dll ordinal 10428, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
int D2Common_10540(int *param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10540, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
int D2Common_10393(int *param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10393, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint32_t * GetPtr_ITEMS_ItemMode_6fcf5590(void);   /* game binding -> ITEMS_ItemMode_6fcf5590, D2Game.dll +0xd5590, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
void D2Common_10914(int *param_1,uint param_2,uint32_t param_s3);   /* game binding -> D2Common.dll ordinal 10914, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_DrlgRoom_and_Logging_ProfCore.cpp */
void D2Common_10996(uint param_1,uint param_2,int *param_3,int *param_4,uint param_5, uint32_t param_s6);   /* game binding -> D2Common.dll ordinal 10996, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_DrlgRoom_and_Logging_ProfCore.cpp */
int D2Common_10449(uint param_1,uint param_2,int param_3,uint *param_4,int *param_5,int *param_6);   /* game binding -> D2Common.dll ordinal 10449, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_DrlgRoom_and_Logging_ProfCore.cpp */
int D2Common_10366(int *param_1);   /* game binding -> D2Common.dll ordinal 10366, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
int D2Common_10918(int *param_1);   /* game binding -> D2Common.dll ordinal 10918, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
int __fastcall D2Common_10749(int param_1);   /* game binding -> D2Common.dll +0x6cb20, sigmaRE/5_game_source/D2Common/DATATBLS/LvlTbls.cpp */
uint D2Common_10455(int *param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10455, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint32_t * GetPtr_DUNGEON_Dungeon_6fd8bdd0(void);   /* game binding -> DUNGEON_Dungeon_6fd8bdd0, D2Common.dll +0x3bdd0, sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
void D2Common_10003(uint *param_1,int param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10003, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
uint D2Common_10174(uint *param_1,int param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10174, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
int D2Common_10057(int param_1);   /* game binding -> D2Common.dll ordinal 10057, sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
int D2Common_10057_102763f0(int param_1);   /* game binding -> D2Common_10057, D2Common.dll ordinal 10057, sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
uint D2Common_11090(uint *param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 11090, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint D2Common_11090_10276450(uint *param_1,uint param_2);   /* game binding -> D2Common_11090, D2Common.dll ordinal 11090, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int D2Common_10175(int *param_1);   /* game binding -> D2Common.dll ordinal 10175, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
void D2Common_10350(int *param_1,uint *param_2,int *param_3,int *param_4,uint32_t param_s5, uint32_t param_s6);   /* game binding -> D2Common.dll ordinal 10350, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
uint32_t * GetPtr_sub_6fd12220(void);   /* game binding -> sub_6fd12220, D2Game.dll +0xf2220, sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
uint D2Common_10426(int param_1);   /* game binding -> D2Common.dll ordinal 10426, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
void D2Common_10346(int param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10346, sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
uint D2Common_10459(int param_1);   /* game binding -> D2Common.dll ordinal 10459, sigmaRE/5_game_source/D2Common/_unattributed/between_ITEMS_Items_and_DRLG_Drlg.cpp */
uint D2Common_10459_10276620(int param_1);   /* game binding -> D2Common_10459, D2Common.dll ordinal 10459, sigmaRE/5_game_source/D2Common/_unattributed/between_ITEMS_Items_and_DRLG_Drlg.cpp */
uint D2Common_10826(int param_1);   /* game binding -> D2Common.dll ordinal 10826, sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
uint D2Common_10826_10276680(int param_1);   /* game binding -> D2Common_10826, D2Common.dll ordinal 10826, sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
int D2Common_11010(int param_1,int param_2,int param_3);   /* game binding -> D2Common.dll ordinal 11010, sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
uint D2Common_10585_102766e0(byte param_1);   /* game binding -> D2Common_10585, D2Common.dll ordinal 10585, sigmaRE/5_game_source/D2Common/_unattributed/between_Stats_StatsEx_and_DUNGEON_Dungeon.cpp */
uint D2Common_10631_10276710(int param_1);   /* game binding -> D2Common_10631, D2Common.dll ordinal 10631, sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
void D2Common_11031_10276740(int param_1,uint param_2);   /* game binding -> D2Common_11031, D2Common.dll ordinal 11031, sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
void D2Common_10542(int param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10542, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
uint32_t * GetPtr_SKILLS_SkillBar_6fc48170(void);   /* game binding -> SKILLS_SkillBar_6fc48170, D2Game.dll +0x28170, sigmaRE/5_game_source/D2Game/SKILLS/SkillBar.cpp */
void D2Common_10819(uint *param_1,uint32_t param_s2,uint32_t param_s3);   /* game binding -> D2Common.dll ordinal 10819, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int D2Common_10592(uint *param_1,int *param_2);   /* game binding -> D2Common.dll ordinal 10592, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
uint D2Common_10364(int *param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10364, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10326(int *param_1);   /* game binding -> D2Common.dll ordinal 10326, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
uint __thiscall D2Common_10946(void *this,uint3 param_1,int *param_2,uint param_3,int *param_4,int param_5);   /* game binding -> D2Common.dll ordinal 10946, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10435(uint param_1,uint param_2,uint param_3,uint param_4);   /* game binding -> D2Common.dll ordinal 10435, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
uint D2Common_10786(uint param_1,uint param_2,uint param_3,uint param_4);   /* game binding -> D2Common.dll ordinal 10786, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
uint D2Common_10786_102769a0(uint param_1,uint param_2,uint param_3,uint param_4);   /* game binding -> D2Common_10786, D2Common.dll ordinal 10786, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
uint D2Common_10428_102769d0(uint param_1,uint param_2,uint param_3);   /* game binding -> D2Common_10428, D2Common.dll ordinal 10428, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
int __fastcall D2Common_10630(uint reg_ECX,uint reg_EDX);   /* game binding -> D2Common.dll ordinal 10630, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
uint D2Common_10231(int *param_1,uint param_2,uint param_3,int param_4,int param_5);   /* game binding -> D2Common.dll ordinal 10231, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Missile_and_DATATBLS_LvlTbls.cpp */
int D2Common_11029(int *param_1);   /* game binding -> D2Common.dll ordinal 11029, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
uint D2Common_10397(int param_1);   /* game binding -> D2Common.dll ordinal 10397, sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
void D2Common_10137(int param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 10137, sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
int D2Common_10121(int param_1,int param_2,int param_3,int param_4);   /* game binding -> D2Common.dll ordinal 10121, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
int D2Common_11091(int param_1,int param_2,int param_3,int param_4);   /* game binding -> D2Common.dll ordinal 11091, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
int D2Common_10121_10276b50(int param_1,int param_2,int param_3,int param_4);   /* game binding -> D2Common_10121, D2Common.dll ordinal 10121, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
int D2Common_11091_10276b80(int param_1,int param_2,int param_3,int param_4);   /* game binding -> D2Common_11091, D2Common.dll ordinal 11091, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
int D2Common_10510(uint param_1,int param_2,int param_3,uint32_t param_s4);   /* game binding -> D2Common.dll ordinal 10510, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
int D2Common_10567(int *param_1,int param_2,uint param_3,int param_4);   /* game binding -> D2Common.dll ordinal 10567, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
int D2Common_10297(int *param_1,int param_2,uint param_3,int param_4);   /* game binding -> D2Common.dll ordinal 10297, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
int D2Common_10002(int *param_1,int *param_2);   /* game binding -> D2Common.dll ordinal 10002, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
int D2Common_10847(int param_1);   /* game binding -> D2Common.dll ordinal 10847, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fd9f870(void);   /* game binding -> SKILLS_Skills_6fd9f870, D2Common.dll +0x4f870, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
uint32_t * GetPtr_sub_6fdbab20(void);   /* game binding -> sub_6fdbab20, D2Common.dll +0x6ab20, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Missile_and_DATATBLS_LvlTbls.cpp */
uint32_t * GetPtr_sub_6fd511e0(void);   /* game binding -> sub_6fd511e0, D2Common.dll +0x11e0, sigmaRE/5_game_source/D2Common/_unattributed/before_DRLG_Preset.cpp */
int D2Common_10832(int param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10832, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
void D2Common_10323(int param_1,int *param_2,int *param_3,int *param_4);   /* game binding -> D2Common.dll ordinal 10323, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
uint * __fastcall D2Common_10708(int param_1,int param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10708, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
uint D2Common_10947(int param_1);   /* game binding -> D2Common.dll ordinal 10947, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
uint D2Common_10306(int param_1,int param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10306, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
uint D2Common_10273(int param_1);   /* game binding -> D2Common.dll ordinal 10273, sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
void D2Common_10302(int *param_1,int param_2,int param_3,int param_4,uint32_t param_s5, uint32_t param_s6);   /* game binding -> D2Common.dll ordinal 10302, sigmaRE/5_game_source/D2Common/_unattributed/between_SKILLS_Skills_and_DATATBLS_MonsterTbls.cpp */
int * D2Common_10008(int *param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10008, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
void D2Common_10056(int *param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10056, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
void D2Common_10546(int param_1,int param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10546, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
void D2Common_10978(int param_1,int param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10978, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
void D2Common_10418(int *param_1);   /* game binding -> D2Common.dll ordinal 10418, sigmaRE/5_game_source/D2Common/_unattributed/between_SKILLS_Skills_and_DATATBLS_MonsterTbls.cpp */
uint D2Common_11120(int param_1);   /* game binding -> D2Common.dll ordinal 11120, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
int D2Common_10044(int param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10044, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
uint32_t * GetPtr_ITEMS_Items_6fd78850(void);   /* game binding -> ITEMS_Items_6fd78850, D2Common.dll +0x28850, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
uint D2Common_10678(int *param_1);   /* game binding -> D2Common.dll ordinal 10678, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
uint D2Common_10501(int *param_1);   /* game binding -> D2Common.dll ordinal 10501, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
int D2Common_10334_10277260(int param_1,int *param_2,int param_3);   /* game binding -> D2Common_10334, D2Common.dll ordinal 10334, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void D2Common_10488(int param_1,int param_2,uint32_t param_s3,uint32_t param_s4);   /* game binding -> D2Common.dll ordinal 10488, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void D2Common_10024(int *param_1,uint *param_2);   /* game binding -> D2Common.dll ordinal 10024, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
void D2Common_10637(int *param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 10637, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
int D2Common_11169(int param_1,int param_2);   /* game binding -> D2Common.dll ordinal 11169, sigmaRE/5_game_source/D2Common/DATATBLS/_unattributed/between_DATATBLS_ItemTbls_and_DATATBLS_MissileTbls.cpp */
void D2Common_10019(int *param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 10019, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
uint D2Common_10321(int *param_1);   /* game binding -> D2Common.dll ordinal 10321, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10711(int *param_1);   /* game binding -> D2Common.dll ordinal 10711, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
uint D2Common_11018(int *param_1);   /* game binding -> D2Common.dll ordinal 11018, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
void D2Common_10440(int *param_1,ushort param_2);   /* game binding -> D2Common.dll ordinal 10440, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
void D2Common_10074(int *param_1,ushort param_2);   /* game binding -> D2Common.dll ordinal 10074, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
int D2Common_10040(int *param_1,uint param_2,int param_3,int param_4);   /* game binding -> D2Common.dll ordinal 10040, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Missile_and_DATATBLS_LvlTbls.cpp */
int D2Common_10256(int *param_1,uint param_2,int param_3,int param_4);   /* game binding -> D2Common.dll ordinal 10256, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Missile_and_DATATBLS_LvlTbls.cpp */
int D2Common_10205(int *param_1,uint param_2,int param_3,int param_4);   /* game binding -> D2Common.dll ordinal 10205, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Missile_and_DATATBLS_LvlTbls.cpp */
int D2Common_10532(int *param_1,uint param_2,int param_3,int param_4);   /* game binding -> D2Common.dll ordinal 10532, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Missile_and_DATATBLS_LvlTbls.cpp */
int D2Common_10242(uint param_1,uint param_2,int param_3,int param_4);   /* game binding -> D2Common.dll ordinal 10242, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
uint D2Common_10557(uint param_1);   /* game binding -> D2Common.dll ordinal 10557, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
int D2Common_10653(uint param_1,int param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10653, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
int D2Common_10653_102775c0(uint param_1,int param_2,int param_3);   /* game binding -> D2Common_10653, D2Common.dll ordinal 10653, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
void D2Common_10551(int param_1,uint param_2,int param_3,uint param_4);   /* game binding -> D2Common.dll ordinal 10551, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
int * D2Common_10641(int *param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10641, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int * D2Common_10641_10277650(int *param_1,int param_2);   /* game binding -> D2Common_10641, D2Common.dll ordinal 10641, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint D2Common_11100(int *param_1);   /* game binding -> D2Common.dll ordinal 11100, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int D2Common_10061(int *param_1);   /* game binding -> D2Common.dll ordinal 10061, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
int D2Common_10061_102776e0(int *param_1);   /* game binding -> D2Common_10061, D2Common.dll ordinal 10061, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10417(int *param_1);   /* game binding -> D2Common.dll ordinal 10417, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint ITEMSReadInfoFromStreamVersioned (uint param_1,uint param_2,uint32_t param_s3,uint32_t param_s4, uint32_t param_s5);   /* game binding -> D2Common.dll ordinal 11171, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10086(int *param_1);   /* game binding -> D2Common.dll ordinal 10086, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_11145(int param_1,uint param_2,uint param_3,uint *param_4,uint32_t param_s5, uint32_t param_s6,uint32_t param_s7);   /* game binding -> D2Common.dll ordinal 11145, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
void D2Common_10682(uint param_1,uint *param_2,uint *param_3,uint *param_4);   /* game binding -> D2Common.dll ordinal 10682, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_DrlgRoom_and_Logging_ProfCore.cpp */
uint D2Common_10101(int *param_1,int *param_2,uint *param_3,uint *param_4);   /* game binding -> D2Common.dll ordinal 10101, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint * D2Common_10535(void);   /* game binding -> D2Common.dll ordinal 10535, sigmaRE/5_game_source/D2Common/DATATBLS/ItemTbls.cpp */
int D2Common_10806(int param_1);   /* game binding -> D2Common.dll ordinal 10806, sigmaRE/5_game_source/D2Common/DATATBLS/ItemTbls.cpp */
uint D2Common_10421(uint param_1);   /* game binding -> D2Common.dll ordinal 10421, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
uint D2Common_10143(int *param_1);   /* game binding -> D2Common.dll ordinal 10143, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void D2Common_10158(int *param_1);   /* game binding -> D2Common.dll ordinal 10158, sigmaRE/5_game_source/D2Common/_unattributed/between_DATATBLS_DataTbls_and_WayPoint_Waypoint.cpp */
void D2Common_10945(int *param_1,int param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10945, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void D2Common_11039(int *param_1,uint param_2,int param_3);   /* game binding -> D2Common.dll ordinal 11039, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void D2Common_11039_10277980(int *param_1,uint param_2,int param_3);   /* game binding -> D2Common_11039, D2Common.dll ordinal 11039, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint D2Common_11089(int param_1,int param_2,int param_3,int param_4,uint param_5,int *param_6);   /* game binding -> D2Common.dll ordinal 11089, sigmaRE/5_game_source/D2Common/DATATBLS/MonsterTbls.cpp */
uint __fastcall D2Common_10181(int param_1);   /* game binding -> D2Common.dll ordinal 10181, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
void D2Common_11164(int param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 11164, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void D2Common_11073(void *param_1,int param_2,int param_3,uint param_4,int param_5);   /* game binding -> D2Common.dll ordinal 11073, sigmaRE/5_game_source/D2Common/COLLISN/Collisn.cpp */
uint D2Common_11076(int *param_1,int *param_2,int *param_3,ushort param_4);   /* game binding -> D2Common.dll ordinal 11076, sigmaRE/5_game_source/D2Common/_unattributed/between_Logging_ProfCore_and_COLLISN_Collisn.cpp */
uint D2Common_10686(int *param_1,uint param_2,int param_3,ushort param_4);   /* game binding -> D2Common.dll ordinal 10686, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint D2Common_11157(int *param_1);   /* game binding -> D2Common.dll ordinal 11157, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
uint D2Common_10717(int param_1);   /* game binding -> D2Common.dll ordinal 10717, sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
uint D2Common_10239(int *param_1);   /* game binding -> D2Common.dll ordinal 10239, sigmaRE/5_game_source/D2Common/_unattributed/between_Chat_Chat_and_DRLG_DrlgVer.cpp */
uint D2Common_10255(int *param_1);   /* game binding -> D2Common.dll ordinal 10255, sigmaRE/5_game_source/D2Common/_unattributed/between_Chat_Chat_and_DRLG_DrlgVer.cpp */
int D2Common_10510_10277b90(uint param_1,int param_2,int param_3,uint32_t param_s4);   /* game binding -> D2Common_10510, D2Common.dll ordinal 10510, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
int D2Common_10237(uint param_1);   /* game binding -> D2Common.dll ordinal 10237, sigmaRE/5_game_source/D2Common/DATATBLS/DataTbls.cpp */
int D2Common_10894(int param_1,byte param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10894, sigmaRE/5_game_source/D2Common/DATATBLS/LvlTbls.cpp */
uint D2Common_10672(int *param_1);   /* game binding -> D2Common.dll ordinal 10672, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int D2Common_10404(uint param_1);   /* game binding -> D2Common.dll ordinal 10404, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int D2Common_10100(uint param_1);   /* game binding -> D2Common.dll ordinal 10100, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int D2Common_10824(uint param_1);   /* game binding -> D2Common.dll ordinal 10824, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int D2Common_10254(uint param_1);   /* game binding -> D2Common.dll ordinal 10254, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int D2Common_10843(uint param_1);   /* game binding -> D2Common.dll ordinal 10843, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int D2Common_10068(uint param_1);   /* game binding -> D2Common.dll ordinal 10068, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int D2Common_11082(uint param_1);   /* game binding -> D2Common.dll ordinal 11082, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int D2Common_10355(uint param_1);   /* game binding -> D2Common.dll ordinal 10355, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int D2Common_10722(uint param_1);   /* game binding -> D2Common.dll ordinal 10722, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int D2Common_10370(uint param_1);   /* game binding -> D2Common.dll ordinal 10370, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint D2Common_10494_10277e30(int *param_1,uint param_2);   /* game binding -> D2Common_10494, D2Common.dll ordinal 10494, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint D2Common_10033(uint param_1);   /* game binding -> D2Common.dll ordinal 10033, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int D2Common_10871(int param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10871, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
int D2Common_10871_10277ec0(int param_1,int param_2);   /* game binding -> D2Common_10871, D2Common.dll ordinal 10871, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint D2Common_10195(int param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 10195, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
int D2Common_10930(int param_1,int param_2,uint param_3);   /* game binding -> D2Common.dll ordinal 10930, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
int D2Common_10930_10277f50(int param_1,int param_2,uint param_3);   /* game binding -> D2Common_10930, D2Common.dll ordinal 10930, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint D2Common_11132(int param_1);   /* game binding -> D2Common.dll ordinal 11132, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint D2Common_10555(int param_1);   /* game binding -> D2Common.dll ordinal 10555, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint D2Common_10515(int param_1);   /* game binding -> D2Common.dll ordinal 10515, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void D2Common_10161(int param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10161, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint D2Common_10959(int param_1);   /* game binding -> D2Common.dll ordinal 10959, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
void D2Common_11111(uint param_1,void *param_2);   /* game binding -> D2Common.dll ordinal 11111, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
void D2Common_11108(void *param_1);   /* game binding -> D2Common.dll ordinal 11108, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint D2Common_10226(uint param_1);   /* game binding -> D2Common.dll ordinal 10226, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int D2Common_10927(uint param_1);   /* game binding -> D2Common.dll ordinal 10927, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint D2Common_11131(int param_1);   /* game binding -> D2Common.dll ordinal 11131, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint D2Common_10473(int param_1);   /* game binding -> D2Common.dll ordinal 10473, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint D2Common_10478(int *param_1);   /* game binding -> D2Common.dll ordinal 10478, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint * D2Common_11013(uint param_1,uint param_2,uint32_t param_s3,uint32_t param_s4, uint32_t param_s5);   /* game binding -> D2Common.dll ordinal 11013, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint * D2Common_11013_102781f0 (uint param_1,uint param_2,uint32_t param_s3,uint32_t param_s4, uint32_t param_s5);   /* game binding -> D2Common_11013, D2Common.dll ordinal 11013, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
void D2Common_10785(int param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 10785, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
void D2Common_10785_10278250(int param_1,uint param_2);   /* game binding -> D2Common_10785, D2Common.dll ordinal 10785, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
void D2Common_10725(int param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 10725, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void D2Common_11081(int param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 11081, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void D2Common_10188(uint *param_1,uint param_2,int param_3,uint param_4);   /* game binding -> D2Common.dll ordinal 10188, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
void D2Common_10188_10278310(uint *param_1,uint param_2,int param_3,uint param_4);   /* game binding -> D2Common_10188, D2Common.dll ordinal 10188, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
void D2Common_10807(int param_1,void *param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10807, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
void D2Common_10807_10278370(int param_1,void *param_2,int param_3);   /* game binding -> D2Common_10807, D2Common.dll ordinal 10807, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
void D2Common_10911(int param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 10911, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void D2Common_10911_102783d0(int param_1,uint param_2);   /* game binding -> D2Common_10911, D2Common.dll ordinal 10911, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
int D2Common_10680(int param_1,int param_2,uint param_3);   /* game binding -> D2Common.dll ordinal 10680, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
int D2Common_10680_10278430(int param_1,int param_2,uint param_3);   /* game binding -> D2Common_10680, D2Common.dll ordinal 10680, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
void D2Common_11043(int param_1,int param_2);   /* game binding -> D2Common.dll ordinal 11043, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
void D2Common_11043_10278490(int param_1,int param_2);   /* game binding -> D2Common_11043, D2Common.dll ordinal 11043, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
void D2Common_10069(uint param_1,int param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10069, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint D2Common_11104(int *param_1);   /* game binding -> D2Common.dll ordinal 11104, sigmaRE/5_game_source/D2Common/_unattributed/between_Chat_Chat_and_DRLG_DrlgVer.cpp */
uint D2Common_10305(int *param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 10305, sigmaRE/5_game_source/D2Common/_unattributed/between_DATATBLS_OverlayTbls_and_DRLG_OutJung.cpp */
uint D2Common_10310(int param_1);   /* game binding -> D2Common.dll ordinal 10310, sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
uint D2Common_10064(int param_1,int *param_2);   /* game binding -> D2Common.dll ordinal 10064, sigmaRE/5_game_source/D2Common/_unattributed/between_Chat_Chat_and_DRLG_DrlgVer.cpp */
uint D2Common_10278(int *param_1);   /* game binding -> D2Common.dll ordinal 10278, sigmaRE/5_game_source/D2Common/_unattributed/between_Chat_Chat_and_DRLG_DrlgVer.cpp */
void D2Common_10383(uint *param_1,uint *param_2,uint *param_3);   /* game binding -> D2Common.dll ordinal 10383, sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
void D2Common_10383_10278610(uint *param_1,uint *param_2,uint *param_3);   /* game binding -> D2Common_10383, D2Common.dll ordinal 10383, sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
int D2Common_10038(int param_1);   /* game binding -> D2Common.dll ordinal 10038, sigmaRE/5_game_source/D2Common/DATATBLS/MonsterTbls.cpp */
int D2Common_10285(int param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10285, sigmaRE/5_game_source/D2Common/DATATBLS/MonsterTbls.cpp */
void D2Common_10993(int *param_1,uint32_t param_s2,uint32_t param_s3);   /* game binding -> D2Common.dll ordinal 10993, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint32_t * GetPtr_sub_6fc2ebb0(void);   /* game binding -> sub_6fc2ebb0, D2Game.dll +0xebb0, sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
uint D2Common_10202(int *param_1,uint param_2,uint32_t param_s3,uint32_t param_s4);   /* game binding -> D2Common.dll ordinal 10202, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10225(int *param_1);   /* game binding -> D2Common.dll ordinal 10225, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
uint D2Common_10225_102787e0(int *param_1);   /* game binding -> D2Common_10225, D2Common.dll ordinal 10225, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
void D2Common_10890(int *param_1);   /* game binding -> D2Common.dll ordinal 10890, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_DrlgRoom_and_Logging_ProfCore.cpp */
uint D2Common_10865(int *param_1);   /* game binding -> D2Common.dll ordinal 10865, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
int D2Common_11116(int param_1);   /* game binding -> D2Common.dll ordinal 11116, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint D2Common_10087(int *param_1);   /* game binding -> D2Common.dll ordinal 10087, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
int D2Common_11110(uint param_1,uint param_2,void *param_3,int param_4);   /* game binding -> D2Common.dll ordinal 11110, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
int D2Common_10790(int param_1,uint *param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10790, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
int D2Common_10872(int param_1,int param_2,uint param_3);   /* game binding -> D2Common.dll ordinal 10872, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint D2Common_10048(int *param_1);   /* game binding -> D2Common.dll ordinal 10048, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10048_10278990(int *param_1);   /* game binding -> D2Common_10048, D2Common.dll ordinal 10048, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
int D2Common_10463(int *param_1);   /* game binding -> D2Common.dll ordinal 10463, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
int D2Common_10411(int *param_1);   /* game binding -> D2Common.dll ordinal 10411, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10718(int *param_1);   /* game binding -> D2Common.dll ordinal 10718, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10718_10278a50(int *param_1);   /* game binding -> D2Common_10718, D2Common.dll ordinal 10718, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
int D2Common_10059(int *param_1);   /* game binding -> D2Common.dll ordinal 10059, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10257(int *param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10257, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
ulonglong __fastcall D2Common_11028(uint unused_ECX,uint reg_EDX,int *param_3,int param_4);   /* game binding -> D2Common.dll ordinal 11028, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_11098(int *param_1);   /* game binding -> D2Common.dll ordinal 11098, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
void D2Common_10312(int *param_1,ushort param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10312, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
void D2Common_10525(int *param_1,ushort param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10525, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
void D2Common_10611(int *param_1,ushort param_2);   /* game binding -> D2Common.dll ordinal 10611, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
void D2Common_10883(int *param_1,ushort param_2);   /* game binding -> D2Common.dll ordinal 10883, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10588(int *param_1);   /* game binding -> D2Common.dll ordinal 10588, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
ulonglong __fastcall D2Common_10516(uint unused_ECX,uint reg_EDX,int *param_3);   /* game binding -> D2Common.dll ordinal 10516, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
int D2Common_10082(uint param_1);   /* game binding -> D2Common.dll ordinal 10082, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
ulonglong __fastcall D2Common_10106(uint unused_ECX,uint reg_EDX,int *param_3);   /* game binding -> D2Common.dll ordinal 10106, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
void D2Common_10572(int *param_1,uint *param_2,uint *param_3);   /* game binding -> D2Common.dll ordinal 10572, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
void D2Common_10536(int *param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 10536, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10957(int *param_1);   /* game binding -> D2Common.dll ordinal 10957, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
int D2Common_10814(uint param_1);   /* game binding -> D2Common.dll ordinal 10814, sigmaRE/5_game_source/D2Common/DATATBLS/ItemTbls.cpp */
int D2Common_10814_10278d80(uint param_1);   /* game binding -> D2Common_10814, D2Common.dll ordinal 10814, sigmaRE/5_game_source/D2Common/DATATBLS/ItemTbls.cpp */
int * D2Common_10010(int *param_1,uint param_2,int *param_3);   /* game binding -> D2Common.dll ordinal 10010, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
void D2Common_10977(int *param_1,uint param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10977, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10202_10278e10(int *param_1,uint param_2,uint32_t param_s3,uint32_t param_s4);   /* game binding -> D2Common_10202, D2Common.dll ordinal 10202, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
void D2Common_10892(int *param_1,uint param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10892, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
void D2Common_10201(int *param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10201, sigmaRE/5_game_source/D2Common/_unattributed/between_QuestRecord_QuestRecord_and_PATH_Path.cpp */
int D2Common_10640(int param_1);   /* game binding -> D2Common.dll ordinal 10640, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
void D2Common_10050(int *param_1,int *param_2);   /* game binding -> D2Common.dll ordinal 10050, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
void D2Common_11037(uint *param_1,uint param_2,int param_3,uint param_4,uint param_5);   /* game binding -> D2Common.dll ordinal 11037, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint D2Common_10863(int param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 10863, sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
uint32_t * GetPtr_ITEMS_ItemMode_6fcf6bc0(void);   /* game binding -> ITEMS_ItemMode_6fcf6bc0, D2Game.dll +0xd6bc0, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint32_t * GetPtr_ITEMS_ItemMode_6fcf4140(void);   /* game binding -> ITEMS_ItemMode_6fcf4140, D2Game.dll +0xd4140, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
void ITEMS_ItemMode_6fcf29f0(int *param_1);   /* game binding -> D2Game.dll +0xd29f0, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint32_t * GetPtr_ITEMS_ItemMode_6fcf46b0(void);   /* game binding -> ITEMS_ItemMode_6fcf46b0, D2Game.dll +0xd46b0, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint32_t * GetPtr_INVENTORY_InvMode_6fcbb3b0(void);   /* game binding -> INVENTORY_InvMode_6fcbb3b0, D2Game.dll +0x9b3b0, sigmaRE/5_game_source/D2Game/INVENTORY/InvMode.cpp */
uint32_t * GetPtr_ITEMS_ItemMode_6fcf62e0(void);   /* game binding -> ITEMS_ItemMode_6fcf62e0, D2Game.dll +0xd62e0, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint D2Common_10192(int *param_1,int param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10192, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
uint D2Common_10266(byte param_1);   /* game binding -> D2Common.dll ordinal 10266, sigmaRE/5_game_source/D2Common/_unattributed/between_Chat_Chat_and_DRLG_DrlgVer.cpp */
int D2Common_10163(int param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10163, sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
int D2Common_11065(int param_1);   /* game binding -> D2Common.dll ordinal 11065, sigmaRE/5_game_source/D2Common/DATATBLS/ItemTbls.cpp */
int D2Common_11065_102793c0(int param_1);   /* game binding -> D2Common_11065, D2Common.dll ordinal 11065, sigmaRE/5_game_source/D2Common/DATATBLS/ItemTbls.cpp */
uint32_t * GetPtr_ITEMS_ItemMode_6fcf4670(void);   /* game binding -> ITEMS_ItemMode_6fcf4670, D2Game.dll +0xd4670, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
int D2Common_10450(uint param_1,uint32_t param_s2);   /* game binding -> D2Common.dll ordinal 10450, sigmaRE/5_game_source/D2Common/DATATBLS/ItemTbls.cpp */
int D2Common_10450_102794d0(uint param_1,uint32_t param_s2);   /* game binding -> D2Common_10450, D2Common.dll ordinal 10450, sigmaRE/5_game_source/D2Common/DATATBLS/ItemTbls.cpp */
uint D2Common_10747(int *param_1);   /* game binding -> D2Common.dll ordinal 10747, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
uint D2Common_10675(void);   /* game binding -> D2Common.dll ordinal 10675, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_DrlgVer_and_UNITS_MisStream.cpp */
int D2Common_10783(int param_1);   /* game binding -> D2Common.dll ordinal 10783, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_DrlgVer_and_UNITS_MisStream.cpp */
int D2Common_10830(int *param_1);   /* game binding -> D2Common.dll ordinal 10830, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint32_t * GetPtr_sub_6fd00570(void);   /* game binding -> sub_6fd00570, D2Game.dll +0xe0570, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
void D2Common_10689(int *param_1,uint param_2,uint32_t param_s3);   /* game binding -> D2Common.dll ordinal 10689, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint D2Common_10511(int param_1);   /* game binding -> D2Common.dll ordinal 10511, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
void D2Common_11103(int param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 11103, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
int D2Common_11027(int param_1);   /* game binding -> D2Common.dll ordinal 11027, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
ushort * D2Common_11156(int param_1,int param_2,int param_3);   /* game binding -> D2Common.dll ordinal 11156, sigmaRE/5_game_source/D2Common/DATATBLS/MonsterTbls.cpp */
uint __fastcall D2Common_10091(uint param_1);   /* game binding -> D2Common.dll +0x2c9c0, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
uint D2Common_10702(int param_1,uint param_2,void *param_3,int param_4);   /* game binding -> D2Common.dll ordinal 10702, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint D2Common_10431(int *param_1,int *param_2,uint *param_3,int param_4,int param_5);   /* game binding -> D2Common.dll ordinal 10431, sigmaRE/5_game_source/D2Common/DRLG/Outdoors.cpp */
char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count);   /* game binding -> D2Common.dll +0x26f0, sigmaRE/5_game_source/Game/_unattributed/code.cpp */
int __fastcall Stats_StatsEx_6fd89ce0(void *param_1,int param_2,ushort *param_3,uint param_4);   /* game binding -> D2Common.dll +0x39ce0, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint32_t * GetPtr_Stats_StatsEx_6fd88940(void);   /* game binding -> Stats_StatsEx_6fd88940, D2Common.dll +0x38940, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint32_t * GetPtr_Stats_StatsEx_6fd89f70(void);   /* game binding -> Stats_StatsEx_6fd89f70, D2Common.dll +0x39f70, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint32_t * GetPtr_Stats_StatsEx_6fd88550(void);   /* game binding -> Stats_StatsEx_6fd88550, D2Common.dll +0x38550, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
int __fastcall Stats_StatsEx_6fd89530(void *param_1,int param_2);   /* game binding -> D2Common.dll +0x39530, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint32_t * GetPtr_Stats_StatsEx_6fd88cd0(void);   /* game binding -> Stats_StatsEx_6fd88cd0, D2Common.dll +0x38cd0, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint32_t * GetPtr_Stats_StatsEx_6fd882b0(void);   /* game binding -> Stats_StatsEx_6fd882b0, D2Common.dll +0x382b0, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
int sub_6fd752db(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);   /* game binding -> D2Common.dll +0x252db, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
uint32_t * GetPtr_D2Common_DAT_6fde9e1c(void);   /* game binding -> DAT_6fde9e1c, D2Common.dll +0x99e1c, sigmaRE/5_game_source/D2Common/include/globals.h */
uint32_t * GetPtr_D2Common_DAT_6fde9e1c_10279cd0(void);   /* game binding -> DAT_6fde9e1c, D2Common.dll +0x99e1c, sigmaRE/5_game_source/D2Common/include/globals.h */
uint32_t * GetPtr_D2Common_DAT_6fdefa58(void);   /* game binding -> DAT_6fdefa58, D2Common.dll +0x9fa58, sigmaRE/5_game_source/D2Common/include/globals.h */
uint32_t * GetPtr_D2Common_DAT_6fdefbc8(void);   /* game binding -> DAT_6fdefbc8, D2Common.dll +0x9fbc8, sigmaRE/5_game_source/D2Common/include/globals.h */
uint32_t * GetPtr_D2Common_DAT_6fdefb94(void);   /* game binding -> DAT_6fdefb94, D2Common.dll +0x9fb94, sigmaRE/5_game_source/D2Common/include/globals.h */
uint32_t * GetPtr_D2Common_DAT_6fdefb98(void);   /* game binding -> DAT_6fdefb98, D2Common.dll +0x9fb98, sigmaRE/5_game_source/D2Common/include/globals.h */
uint32_t * GetPtr_D2Common_DAT_6fdefba4(void);   /* game binding -> DAT_6fdefba4, D2Common.dll +0x9fba4, sigmaRE/5_game_source/D2Common/include/globals.h */
uint32_t * GetPtr_D2Common_DAT_6fdefba8(void);   /* game binding -> DAT_6fdefba8, D2Common.dll +0x9fba8, sigmaRE/5_game_source/D2Common/include/globals.h */
uint32_t * GetPtr_D2Common_DAT_6fde4734(void);   /* game binding -> DAT_6fde4734, D2Common.dll +0x94734, sigmaRE/5_game_source/D2Common/include/globals.h */
uint32_t * GetPtr_D2Common_DAT_6fdeff6c(void);   /* game binding -> DAT_6fdeff6c, D2Common.dll +0x9ff6c, sigmaRE/5_game_source/D2Common/include/globals.h */
uint32_t * GetPtr_D2Common_10422(void);   /* game binding -> D2Common_10422, D2Common.dll ordinal 10422, sigmaRE/5_game_source/D2Common/Chat/Chat.cpp */
uint32_t * GetPtr_D2Common_10826(void);   /* game binding -> D2Common_10826, D2Common.dll +0x3c000, sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
uint32_t * GetPtr_sub_6fd975e0(void);   /* game binding -> sub_6fd975e0, D2Common.dll +0x475e0, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_DrlgRoom_and_Logging_ProfCore.cpp */
int * SKILLS_Skills_6fcc22e0(uint param_1,int *param_2,uint *param_3,uint32_t param_s4);   /* game binding -> D2Game.dll +0xa22e0, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_D2Game_DAT_6fd27330(void);   /* game binding -> DAT_6fd27330, D2Game.dll +0x107330, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_sub_6fc2e930(void);   /* game binding -> sub_6fc2e930, D2Game.dll +0xe930, sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
uint32_t * GetPtr_sub_6fc54860(void);   /* game binding -> sub_6fc54860, D2Game.dll +0x34860, sigmaRE/5_game_source/D2Game/UNIT/_unattributed/between_UNIT_SUnit_and_UNIT_SUnitEvent.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfffd0_1027a750(void);   /* game binding -> UNIT_SUnitDmg_6fcfffd0, D2Game.dll +0xdffd0, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
int __fastcall sub_6fccf450(uint param_1,int *param_2,uint32_t param_s1,uint32_t param_s2,uint32_t param_s3, uint32_t param_s4,uint32_t param_s5);   /* game binding -> D2Game.dll +0xaf450, sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillItem_and_MONSTER_Monster.cpp */
uint __fastcall sub_6fccedc0(uint param_1,int *param_2,int param_3,uint32_t param_s2,uint32_t param_s3, uint32_t param_s4,uint32_t param_s5);   /* game binding -> D2Game.dll +0xaedc0, sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillItem_and_MONSTER_Monster.cpp */
uint __fastcall sub_6fcce6d0(int param_1,int *param_2,int param_3,uint32_t param_s2,uint32_t param_s3, uint32_t param_s4,uint32_t param_s5);   /* game binding -> D2Game.dll +0xae6d0, sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillItem_and_MONSTER_Monster.cpp */
uint __fastcall sub_6fc8f040(int *param_1);   /* game binding -> D2Game.dll +0x6f040, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrIntro_and_MISSILES_Missiles.cpp */
uint __fastcall sub_6fc8d0f0(int *param_1);   /* game binding -> D2Game.dll +0x6d0f0, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrIntro_and_MISSILES_Missiles.cpp */
int sub_6fc31490(int param_1,int *param_2,uint32_t param_s3);   /* game binding -> D2Game.dll +0x11490, sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
int sub_6fc31490_1027a920(int param_1,int *param_2,uint32_t param_s3);   /* game binding -> sub_6fc31490, D2Game.dll +0x11490, sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
uint sub_6fc2f370(uint param_1,int param_2,uint32_t param_s3);   /* game binding -> D2Game.dll +0xf370, sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
uint sub_6fc33c20(int param_1,uint32_t param_s2);   /* game binding -> D2Game.dll +0x13c20, sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
uint32_t * GetPtr_sub_6fc2eae0(void);   /* game binding -> sub_6fc2eae0, D2Game.dll +0xeae0, sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
int sub_6fc96270(void);   /* game binding -> D2Game.dll +0x76270, sigmaRE/5_game_source/D2Game/PLAYER/_unattributed/between_PLAYER_PlrTrade_and_PLAYER_PlrModes.cpp */
void sub_6fc32380(int param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6, int param_7,int param_8,int *param_9,int param_10);   /* game binding -> D2Game.dll +0x12380, sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */

/* ---- _unattributed/between_functions_D2ServerFunctions_and_events_SkillEvents_unit29_1027aac0.cpp ---- */
uint32_t * GetPtr_sub_6fc2fc40(void);   /* game binding -> sub_6fc2fc40, D2Game.dll +0xfc40, sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
uint32_t * GetPtr_sub_6fc2e5d0(void);   /* game binding -> sub_6fc2e5d0, D2Game.dll +0xe5d0, sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
void sub_6fc95680(int *param_1,int param_2,uint32_t param_s3,uint32_t param_s4);   /* game binding -> D2Game.dll +0x75680, sigmaRE/5_game_source/D2Game/PLAYER/_unattributed/between_PLAYER_PlrTrade_and_PLAYER_PlrModes.cpp */
uint32_t * GetPtr_sub_6fc31880(void);   /* game binding -> sub_6fc31880, D2Game.dll +0x11880, sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
short * D2Common_10634(ushort param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10634, sigmaRE/5_game_source/D2Common/DATATBLS/MonsterTbls.cpp */
uint32_t * GetPtr_D2Game_DAT_6fd30208(void);   /* game binding -> DAT_6fd30208, D2Game.dll +0x110208, sigmaRE/5_game_source/D2Game/include/globals.h */
int sub_6fd142d0(uint param_1,uint param_2,uint param_3,uint32_t param_s4);   /* game binding -> D2Game.dll +0xf42d0, sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcc0c70(void);   /* game binding -> SKILLS_Skills_6fcc0c70, D2Game.dll +0xa0c70, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_SKILLS_SkillDruid_6fc648e0(void);   /* game binding -> SKILLS_SkillDruid_6fc648e0, D2Game.dll +0x448e0, sigmaRE/5_game_source/D2Game/SKILLS/SkillDruid.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcc00b0(void);   /* game binding -> SKILLS_Skills_6fcc00b0, D2Game.dll +0xa00b0, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_sub_6fc6c220(void);   /* game binding -> sub_6fc6c220, D2Game.dll +0x4c220, sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Clients_and_SKILLS_SkillNec.cpp */
int __fastcall sub_6fc21160(uint *param_1);   /* game binding -> D2Game.dll +0x1160, sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
uint32_t * GetPtr_sub_6fcae6f0(void);   /* game binding -> sub_6fcae6f0, D2Game.dll +0x8e6f0, sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Event_and_UNIT_sunitproxy.cpp */
uint32_t * GetPtr_SKILLS_SkillBar_6fc48740(void);   /* game binding -> SKILLS_SkillBar_6fc48740, D2Game.dll +0x28740, sigmaRE/5_game_source/D2Game/SKILLS/SkillBar.cpp */
uint32_t * GetPtr_sub_6fc3e140(void);   /* game binding -> sub_6fc3e140, D2Game.dll +0x1e140, sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
uint __fastcall SKILLS_Skills_6fcc1210(uint *param_1,int param_2);   /* game binding -> D2Game.dll +0xa1210, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcc10b0(void);   /* game binding -> SKILLS_Skills_6fcc10b0, D2Game.dll +0xa10b0, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcc0f40(void);   /* game binding -> SKILLS_Skills_6fcc0f40, D2Game.dll +0xa0f40, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_sub_6fc5a280(void);   /* game binding -> sub_6fc5a280, D2Game.dll +0x3a280, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
uint32_t * GetPtr_sub_6fc5a4e0(void);   /* game binding -> sub_6fc5a4e0, D2Game.dll +0x3a4e0, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
uint32_t * GetPtr_sub_6fc5ede0(void);   /* game binding -> sub_6fc5ede0, D2Game.dll +0x3ede0, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
uint32_t * GetPtr_UNIT_Missile_6fb61420(void);   /* game binding -> UNIT_Missile_6fb61420, D2Client.dll +0xb1420, sigmaRE/5_game_source/D2Client/UNIT/Missile.cpp */
uint32_t * GetPtr_Stats_StatsEx_6fd882f0(void);   /* game binding -> Stats_StatsEx_6fd882f0, D2Common.dll +0x382f0, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
int * __fastcall SKILLS_Skills_6fcc28f0 (void *param_1,uint param_2,int *param_3,uint param_4,uint param_5,int param_6,int param_7 ,int param_8,int param_9,int param_10);   /* game binding -> D2Game.dll +0xa28f0, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcc1880(void);   /* game binding -> SKILLS_Skills_6fcc1880, D2Game.dll +0xa1880, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_MISSILES_Missiles_6fc8f620(void);   /* game binding -> MISSILES_Missiles_6fc8f620, D2Game.dll +0x6f620, sigmaRE/5_game_source/D2Game/MISSILES/Missiles.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcc0000(void);   /* game binding -> SKILLS_Skills_6fcc0000, D2Game.dll +0xa0000, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
int __thiscall D2Common_10621(void *this);   /* game binding -> D2Common.dll ordinal 10621, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint * sub_6fc572c0(int param_1);   /* game binding -> D2Game.dll +0x372c0, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitEvent_and_PLAYER_Player.cpp */
uint32_t * GetPtr_ITEMS_Items_6fd7c630(void);   /* game binding -> ITEMS_Items_6fd7c630, D2Common.dll +0x2c630, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
uint32_t * GetPtr_sub_6fd11730(void);   /* game binding -> sub_6fd11730, D2Game.dll +0xf1730, sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
uint32_t * GetPtr_sub_6fd117e0(void);   /* game binding -> sub_6fd117e0, D2Game.dll +0xf17e0, sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
uint32_t * GetPtr_sub_6fd114f0(void);   /* game binding -> sub_6fd114f0, D2Game.dll +0xf14f0, sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
uint32_t * GetPtr_UNIT_SUnitMsg_6fc9a440(void);   /* game binding -> UNIT_SUnitMsg_6fc9a440, D2Game.dll +0x7a440, sigmaRE/5_game_source/D2Game/UNIT/SUnitMsg.cpp */
uint32_t * GetPtr_UNIT_SUnitMsg_6fc9a4c0(void);   /* game binding -> UNIT_SUnitMsg_6fc9a4c0, D2Game.dll +0x7a4c0, sigmaRE/5_game_source/D2Game/UNIT/SUnitMsg.cpp */
void __fastcall sub_6fd02240(int *param_1,int param_2);   /* game binding -> D2Game.dll +0xe2240, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
uint32_t * GetPtr_PLAYER_PlrModes_6fc97fa0(void);   /* game binding -> PLAYER_PlrModes_6fc97fa0, D2Game.dll +0x77fa0, sigmaRE/5_game_source/D2Game/PLAYER/PlrModes.cpp */
uint32_t * GetPtr_UNIT_SUnitMsg_6fc9a0f0(void);   /* game binding -> UNIT_SUnitMsg_6fc9a0f0, D2Game.dll +0x7a0f0, sigmaRE/5_game_source/D2Game/UNIT/SUnitMsg.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcbfa30(void);   /* game binding -> SKILLS_Skills_6fcbfa30, D2Game.dll +0x9fa30, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fb51340(void);   /* game binding -> SKILLS_Skills_6fb51340, D2Client.dll +0xa1340, sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
uint32_t * GetPtr_sub_6fd019c0(void);   /* game binding -> sub_6fd019c0, D2Game.dll +0xe19c0, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
uint32_t * GetPtr_sub_6fcb8a70(void);   /* game binding -> sub_6fcb8a70, D2Game.dll +0x98a70, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlayerPets_and_SKILLS_SkilPal.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfe0c0(void);   /* game binding -> UNIT_SUnitDmg_6fcfe0c0, D2Game.dll +0xde0c0, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfcf20(void);   /* game binding -> UNIT_SUnitDmg_6fcfcf20, D2Game.dll +0xdcf20, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfe5a0(void);   /* game binding -> UNIT_SUnitDmg_6fcfe5a0, D2Game.dll +0xde5a0, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfdde0(void);   /* game binding -> UNIT_SUnitDmg_6fcfdde0, D2Game.dll +0xddde0, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcbf210(void);   /* game binding -> SKILLS_Skills_6fcbf210, D2Game.dll +0x9f210, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcbf1a0(void);   /* game binding -> SKILLS_Skills_6fcbf1a0, D2Game.dll +0x9f1a0, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_sub_6fc5aff0(void);   /* game binding -> sub_6fc5aff0, D2Game.dll +0x3aff0, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
uint32_t * GetPtr_sub_6fc5a280_1027c820(void);   /* game binding -> sub_6fc5a280, D2Game.dll +0x3a280, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
void UNIT_SUnitDmg_6fcfed30(uint param_1,int *param_2,int *param_3);   /* game binding -> D2Game.dll +0xded30, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfeba0(void);   /* game binding -> UNIT_SUnitDmg_6fcfeba0, D2Game.dll +0xdeba0, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
void __fastcall PLAYER_PlrModes_6fc98550 (int param_1,uint param_2,int param_3,int param_4,uint param_5,uint param_6,int param_7);   /* game binding -> D2Game.dll +0x78550, sigmaRE/5_game_source/D2Game/PLAYER/PlrModes.cpp */
uint32_t * GetPtr_ITEMS_ItemMode_6fcfa540(void);   /* game binding -> ITEMS_ItemMode_6fcfa540, D2Game.dll +0xda540, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfb030(void);   /* game binding -> UNIT_SUnitDmg_6fcfb030, D2Game.dll +0xdb030, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_sub_6fc46a30(void);   /* game binding -> sub_6fc46a30, D2Game.dll +0x26a30, sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiGeneral_and_SKILLS_SkillBar.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfba40(void);   /* game binding -> UNIT_SUnitDmg_6fcfba40, D2Game.dll +0xdba40, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_sub_6fcc2de0(void);   /* game binding -> sub_6fcc2de0, D2Game.dll +0xa2de0, sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_Skills_and_Ai_AiThink4.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfce70(void);   /* game binding -> UNIT_SUnitDmg_6fcfce70, D2Game.dll +0xdce70, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_sub_6fc21620(void);   /* game binding -> sub_6fc21620, D2Game.dll +0x1620, sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfb570(void);   /* game binding -> UNIT_SUnitDmg_6fcfb570, D2Game.dll +0xdb570, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfa970(void);   /* game binding -> UNIT_SUnitDmg_6fcfa970, D2Game.dll +0xda970, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfa930(void);   /* game binding -> UNIT_SUnitDmg_6fcfa930, D2Game.dll +0xda930, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfc780(void);   /* game binding -> UNIT_SUnitDmg_6fcfc780, D2Game.dll +0xdc780, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfdac0(void);   /* game binding -> UNIT_SUnitDmg_6fcfdac0, D2Game.dll +0xddac0, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
void __thiscall UNIT_SUnitDmg_6fcfc940(void *this,int *param_1,int param_2,int param_3);   /* game binding -> D2Game.dll +0xdc940, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_sub_6fcb0f30(void);   /* game binding -> sub_6fcb0f30, D2Game.dll +0x90f30, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfa6d0(void);   /* game binding -> UNIT_SUnitDmg_6fcfa6d0, D2Game.dll +0xda6d0, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_ITEMS_ItemMode_6fcf3280(void);   /* game binding -> ITEMS_ItemMode_6fcf3280, D2Game.dll +0xd3280, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint32_t * GetPtr_UNIT_SUnitEvent_6fc57030(void);   /* game binding -> UNIT_SUnitEvent_6fc57030, D2Game.dll +0x37030, sigmaRE/5_game_source/D2Game/UNIT/SUnitEvent.cpp */
int * __fastcall MISSILES_Missiles_6fc8f930(uint param_1,uint *param_2);   /* game binding -> D2Game.dll +0x6f930, sigmaRE/5_game_source/D2Game/MISSILES/Missiles.cpp */
uint32_t * GetPtr_D2Game_loc_6fcd31d0(void);   /* game binding -> D2Game_loc_6fcd31d0, D2Game.dll +0xb31d0, sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Arena_and_SKILLS_SkillMonst.cpp */
uint32_t * GetPtr_D2Game_DAT_6fd1b870(void);   /* game binding -> DAT_6fd1b870, D2Game.dll +0xfb870, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd1b770(void);   /* game binding -> DAT_6fd1b770, D2Game.dll +0xfb770, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_sub_6fc211d0(void);   /* game binding -> sub_6fc211d0, D2Game.dll +0x11d0, sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
void __fastcall SKILLS_Skills_6fcbefe0 (int param_1,int param_2,int param_3,int param_4,int param_5,uint *param_6,int *param_7);   /* game binding -> D2Game.dll +0x9efe0, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint __fastcall sub_6fc21100(int *param_1);   /* game binding -> D2Game.dll +0x1100, sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
uint __fastcall sub_6fc21130(int *param_1);   /* game binding -> D2Game.dll +0x1130, sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
uint32_t * GetPtr_sub_6fc21280(void);   /* game binding -> sub_6fc21280, D2Game.dll +0x1280, sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
uint32_t * GetPtr_Ai_AiGeneral_6fc40cf0(void);   /* game binding -> Ai_AiGeneral_6fc40cf0, D2Game.dll +0x20cf0, sigmaRE/5_game_source/D2Game/Ai/AiGeneral.cpp */
uint32_t * GetPtr_Ai_AiGeneral_6fc416a0(void);   /* game binding -> Ai_AiGeneral_6fc416a0, D2Game.dll +0x216a0, sigmaRE/5_game_source/D2Game/Ai/AiGeneral.cpp */
uint32_t * GetPtr_D2Game_DAT_6fd18be0(void);   /* game binding -> DAT_6fd18be0, D2Game.dll +0xf8be0, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd1b454(void);   /* game binding -> DAT_6fd1b454, D2Game.dll +0xfb454, sigmaRE/5_game_source/D2Game/include/globals.h */
uint __thiscall SKILLS_Skills_6fcc0ad0(void *this,int param_1,uint param_2,int param_3,uint32_t param_s5);   /* game binding -> D2Game.dll +0xa0ad0, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_sub_6fc214d0(void);   /* game binding -> sub_6fc214d0, D2Game.dll +0x14d0, sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcbee50(void);   /* game binding -> SKILLS_Skills_6fcbee50, D2Game.dll +0x9ee50, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_sub_6fc2e7e0(void);   /* game binding -> sub_6fc2e7e0, D2Game.dll +0xe7e0, sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
uint32_t * GetPtr_sub_6fcc3610(void);   /* game binding -> sub_6fcc3610, D2Game.dll +0xa3610, sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_Skills_and_Ai_AiThink4.cpp */
uint32_t * GetPtr_sub_6fc6e2a0(void);   /* game binding -> sub_6fc6e2a0, D2Game.dll +0x4e2a0, sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Clients_and_SKILLS_SkillNec.cpp */
uint SKILLS_SkillNec_6fc6f970 (int param_1,int param_2,int *param_3,int param_4,uint param_5,uint32_t param_s6);   /* game binding -> D2Game.dll +0x4f970, sigmaRE/5_game_source/D2Game/SKILLS/SkillNec.cpp */
uint32_t * GetPtr_sub_6fccfdb0(void);   /* game binding -> sub_6fccfdb0, D2Game.dll +0xafdb0, sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
uint32_t * GetPtr_sub_6fd00460(void);   /* game binding -> sub_6fd00460, D2Game.dll +0xe0460, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fd00210(void);   /* game binding -> UNIT_SUnitDmg_6fd00210, D2Game.dll +0xe0210, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_sub_6fd00660(void);   /* game binding -> sub_6fd00660, D2Game.dll +0xe0660, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
uint32_t * GetPtr_sub_6fc59b40(void);   /* game binding -> sub_6fc59b40, D2Game.dll +0x39b40, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcffa60(void);   /* game binding -> UNIT_SUnitDmg_6fcffa60, D2Game.dll +0xdfa60, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_sub_6fd012d0(void);   /* game binding -> sub_6fd012d0, D2Game.dll +0xe12d0, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
int * __fastcall sub_6fd01d90(int param_1,uint param_2,byte param_3,uint param_4,int param_5,uint32_t param_s4, uint32_t param_s5,uint32_t param_s6,uint32_t param_s7);   /* game binding -> D2Game.dll +0xe1d90, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
uint32_t * GetPtr_sub_6fc67cf0(void);   /* game binding -> sub_6fc67cf0, D2Game.dll +0x47cf0, sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillDruid_and_MONSTER_MonsterAI.cpp */
uint32_t * GetPtr_sub_6fcb5d50(void);   /* game binding -> sub_6fcb5d50, D2Game.dll +0x95d50, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
uint32_t * GetPtr_PLAYER_PlrMsg_6fcebf50(void);   /* game binding -> PLAYER_PlrMsg_6fcebf50, D2Game.dll +0xcbf50, sigmaRE/5_game_source/D2Game/PLAYER/PlrMsg.cpp */
uint32_t * GetPtr_Ai_AiGeneral_6fc409b0(void);   /* game binding -> Ai_AiGeneral_6fc409b0, D2Game.dll +0x209b0, sigmaRE/5_game_source/D2Game/Ai/AiGeneral.cpp */
uint32_t * GetPtr_sub_6fd00f40(void);   /* game binding -> sub_6fd00f40, D2Game.dll +0xe0f40, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
void sub_6fc9b0a0(int param_1,int *param_2,uint32_t param_s3);   /* game binding -> D2Game.dll +0x7b0a0, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
uint32_t * GetPtr_sub_6fc4e830(void);   /* game binding -> sub_6fc4e830, D2Game.dll +0x2e830, sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_Objects_and_UNIT_SUnit.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fd00310(void);   /* game binding -> UNIT_SUnitDmg_6fd00310, D2Game.dll +0xe0310, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
int * __fastcall sub_6fd0ef10(int *param_1);   /* game binding -> D2Game.dll +0xeef10, sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a2q8_and_GAME_Targets.cpp */
int __fastcall sub_6fd0f650(uint param_1,uint param_2,int param_3,uint param_4,uint param_5,uint param_6, uint param_7,ushort param_8);   /* game binding -> D2Game.dll +0xef650, sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a2q8_and_GAME_Targets.cpp */
void sub_6fc67a20(void *param_1,void *param_2);   /* game binding -> D2Game.dll +0x47a20, sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillDruid_and_MONSTER_MonsterAI.cpp */
void sub_6fc43ca0(int param_1,int *param_2,int param_3);   /* game binding -> D2Game.dll +0x23ca0, sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiGeneral_and_SKILLS_SkillBar.cpp */
void __fastcall sub_6fc468e0(uint param_1,int *param_2,uint param_3,int param_4);   /* game binding -> D2Game.dll +0x268e0, sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiGeneral_and_SKILLS_SkillBar.cpp */
uint32_t * GetPtr_Quests_a2q8_6fd0e7b0(void);   /* game binding -> Quests_a2q8_6fd0e7b0, D2Game.dll +0xee7b0, sigmaRE/5_game_source/D2Game/Quests/a2q8.cpp */
uint32_t * GetPtr_sub_6fc432b0(void);   /* game binding -> sub_6fc432b0, D2Game.dll +0x232b0, sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiGeneral_and_SKILLS_SkillBar.cpp */
uint32_t * GetPtr_sub_6fd013b0(void);   /* game binding -> sub_6fd013b0, D2Game.dll +0xe13b0, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
uint32_t * GetPtr_sub_6fc66b20(void);   /* game binding -> sub_6fc66b20, D2Game.dll +0x46b20, sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillDruid_and_MONSTER_MonsterAI.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcff080(void);   /* game binding -> UNIT_SUnitDmg_6fcff080, D2Game.dll +0xdf080, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcff4a0(void);   /* game binding -> UNIT_SUnitDmg_6fcff4a0, D2Game.dll +0xdf4a0, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_sub_6fc67700(void);   /* game binding -> sub_6fc67700, D2Game.dll +0x47700, sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillDruid_and_MONSTER_MonsterAI.cpp */
uint32_t * GetPtr_sub_6fc679b0(void);   /* game binding -> sub_6fc679b0, D2Game.dll +0x479b0, sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillDruid_and_MONSTER_MonsterAI.cpp */
uint32_t * GetPtr_sub_6fc67880(void);   /* game binding -> sub_6fc67880, D2Game.dll +0x47880, sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillDruid_and_MONSTER_MonsterAI.cpp */
uint32_t * GetPtr_sub_6fc44950(void);   /* game binding -> sub_6fc44950, D2Game.dll +0x24950, sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiGeneral_and_SKILLS_SkillBar.cpp */
uint32_t * GetPtr_sub_6fc43ae0(void);   /* game binding -> sub_6fc43ae0, D2Game.dll +0x23ae0, sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiGeneral_and_SKILLS_SkillBar.cpp */
uint32_t * GetPtr_sub_6fc42920(void);   /* game binding -> sub_6fc42920, D2Game.dll +0x22920, sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiGeneral_and_SKILLS_SkillBar.cpp */
uint32_t * GetPtr_sub_6fc448a0(void);   /* game binding -> sub_6fc448a0, D2Game.dll +0x248a0, sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiGeneral_and_SKILLS_SkillBar.cpp */
uint32_t * GetPtr_sub_6fc43260(void);   /* game binding -> sub_6fc43260, D2Game.dll +0x23260, sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiGeneral_and_SKILLS_SkillBar.cpp */
uint32_t * GetPtr_sub_6fc56140(void);   /* game binding -> sub_6fc56140, D2Game.dll +0x36140, sigmaRE/5_game_source/D2Game/UNIT/_unattributed/between_UNIT_SUnit_and_UNIT_SUnitEvent.cpp */
uint32_t * GetPtr_sub_6fc21320(void);   /* game binding -> sub_6fc21320, D2Game.dll +0x1320, sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
uint32_t * GetPtr_sub_6fc56470(void);   /* game binding -> sub_6fc56470, D2Game.dll +0x36470, sigmaRE/5_game_source/D2Game/UNIT/_unattributed/between_UNIT_SUnit_and_UNIT_SUnitEvent.cpp */
uint32_t * GetPtr_UNIT_SUnitInactive_6fc3f600(void);   /* game binding -> UNIT_SUnitInactive_6fc3f600, D2Game.dll +0x1f600, sigmaRE/5_game_source/D2Game/UNIT/SUnitInactive.cpp */
uint32_t * GetPtr_UNIT_SUnitInactive_6fc3ef50(void);   /* game binding -> UNIT_SUnitInactive_6fc3ef50, D2Game.dll +0x1ef50, sigmaRE/5_game_source/D2Game/UNIT/SUnitInactive.cpp */
uint32_t * GetPtr_UNIT_SUnitInactive_6fc3f2d0(void);   /* game binding -> UNIT_SUnitInactive_6fc3f2d0, D2Game.dll +0x1f2d0, sigmaRE/5_game_source/D2Game/UNIT/SUnitInactive.cpp */
uint32_t * GetPtr_sub_6fd01610(void);   /* game binding -> sub_6fd01610, D2Game.dll +0xe1610, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
uint32_t * GetPtr_sub_6fcdee30(void);   /* game binding -> sub_6fcdee30, D2Game.dll +0xbee30, sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
void sub_6fcdf2e0(int param_1,uint param_2,int param_3,int param_4);   /* game binding -> D2Game.dll +0xbf2e0, sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
uint32_t * GetPtr_sub_6fcde2a0(void);   /* game binding -> sub_6fcde2a0, D2Game.dll +0xbe2a0, sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
uint32_t * GetPtr_sub_6fc31980(void);   /* game binding -> sub_6fc31980, D2Game.dll +0x11980, sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
uint32_t * GetPtr_sub_6fcdce60(void);   /* game binding -> sub_6fcdce60, D2Game.dll +0xbce60, sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
uint ITEMS_ItemMode_6fcf76a0 (int param_1,int *param_2,uint param_3,uint param_4,uint param_5,uint param_6, int param_7,uint32_t param_s8);   /* game binding -> D2Game.dll +0xd76a0, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint32_t * GetPtr_ITEMS_ItemMode_6fcf4a70(void);   /* game binding -> ITEMS_ItemMode_6fcf4a70, D2Game.dll +0xd4a70, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint32_t * GetPtr_INVENTORY_InvMode_6fcbb630(void);   /* game binding -> INVENTORY_InvMode_6fcbb630, D2Game.dll +0x9b630, sigmaRE/5_game_source/D2Game/INVENTORY/InvMode.cpp */
uint32_t * GetPtr_UNIT_sunitproxy_6fcaf6c0(void);   /* game binding -> UNIT_sunitproxy_6fcaf6c0, D2Game.dll +0x8f6c0, sigmaRE/5_game_source/D2Game/UNIT/sunitproxy.cpp */
uint32_t * GetPtr_D2Game_loc_6fcdd490(void);   /* game binding -> D2Game_loc_6fcdd490, D2Game.dll +0xbd490, sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
uint32_t * GetPtr_sub_6fcdd920(void);   /* game binding -> sub_6fcdd920, D2Game.dll +0xbd920, sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
uint32_t * GetPtr_sub_6fcdd880(void);   /* game binding -> sub_6fcdd880, D2Game.dll +0xbd880, sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fd000c0(void);   /* game binding -> UNIT_SUnitDmg_6fd000c0, D2Game.dll +0xe00c0, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_sub_6fc73470(void);   /* game binding -> sub_6fc73470, D2Game.dll +0x53470, sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Task_and_PLAYER_PlrSave.cpp */
uint32_t * GetPtr_ITEMS_ItemMode_6fcf60d0(void);   /* game binding -> ITEMS_ItemMode_6fcf60d0, D2Game.dll +0xd60d0, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint32_t * GetPtr_sub_6fcd17b0(void);   /* game binding -> sub_6fcd17b0, D2Game.dll +0xb17b0, sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfaa40(void);   /* game binding -> UNIT_SUnitDmg_6fcfaa40, D2Game.dll +0xdaa40, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_UNIT_Item_6fb34080(void);   /* game binding -> UNIT_Item_6fb34080, D2Client.dll +0x84080, sigmaRE/5_game_source/D2Client/UNIT/Item.cpp */
uint32_t * GetPtr_UNIT_Item_6fb32660(void);   /* game binding -> UNIT_Item_6fb32660, D2Client.dll +0x82660, sigmaRE/5_game_source/D2Client/UNIT/Item.cpp */
uint32_t * GetPtr_PLAYER_PlrSave2_6fd0c470(void);   /* game binding -> PLAYER_PlrSave2_6fd0c470, D2Game.dll +0xec470, sigmaRE/5_game_source/D2Game/PLAYER/PlrSave2.cpp */
uint32_t * GetPtr_sub_6fd0b7b0(void);   /* game binding -> sub_6fd0b7b0, D2Game.dll +0xeb7b0, sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
uint32_t * GetPtr_sub_6fd0b700(void);   /* game binding -> sub_6fd0b700, D2Game.dll +0xeb700, sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
uint32_t * GetPtr_sub_6fd0b610(void);   /* game binding -> sub_6fd0b610, D2Game.dll +0xeb610, sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
uint PLAYER_PlrSave2_6fd0be70(uint param_1,uint *param_2,ushort *param_3);   /* game binding -> D2Game.dll +0xebe70, sigmaRE/5_game_source/D2Game/PLAYER/PlrSave2.cpp */
uint32_t * GetPtr_sub_6fd0bc40(void);   /* game binding -> sub_6fd0bc40, D2Game.dll +0xebc40, sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
uint32_t * GetPtr_PLAYER_PlrSave2_6fd0c0e0(void);   /* game binding -> PLAYER_PlrSave2_6fd0c0e0, D2Game.dll +0xec0e0, sigmaRE/5_game_source/D2Game/PLAYER/PlrSave2.cpp */
uint PLAYER_PlrSave2_6fd0c260 (uint param_1,uint *param_2,uint *param_3,uint32_t param_s4,uint32_t param_s5, uint32_t param_s6);   /* game binding -> D2Game.dll +0xec260, sigmaRE/5_game_source/D2Game/PLAYER/PlrSave2.cpp */
uint32_t * GetPtr_PLAYER_PlrSave2_6fd0c1e0(void);   /* game binding -> PLAYER_PlrSave2_6fd0c1e0, D2Game.dll +0xec1e0, sigmaRE/5_game_source/D2Game/PLAYER/PlrSave2.cpp */
uint32_t * GetPtr_PLAYER_PlrSave2_6fd0c020(void);   /* game binding -> PLAYER_PlrSave2_6fd0c020, D2Game.dll +0xec020, sigmaRE/5_game_source/D2Game/PLAYER/PlrSave2.cpp */
uint32_t * GetPtr_sub_6fc307e0(void);   /* game binding -> sub_6fc307e0, D2Game.dll +0x107e0, sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
uint32_t * GetPtr_sub_6fd0ba40(void);   /* game binding -> sub_6fd0ba40, D2Game.dll +0xeba40, sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
uint32_t * GetPtr_sub_6fd0baf0(void);   /* game binding -> sub_6fd0baf0, D2Game.dll +0xebaf0, sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
uint32_t * GetPtr_sub_6fd0b560(void);   /* game binding -> sub_6fd0b560, D2Game.dll +0xeb560, sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
uint32_t * GetPtr_sub_6fd0b4e0(void);   /* game binding -> sub_6fd0b4e0, D2Game.dll +0xeb4e0, sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
uint32_t * GetPtr_sub_6fd0b440(void);   /* game binding -> sub_6fd0b440, D2Game.dll +0xeb440, sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
uint32_t * GetPtr_PLAYER_PlrSave2_6fd0bda0(void);   /* game binding -> PLAYER_PlrSave2_6fd0bda0, D2Game.dll +0xebda0, sigmaRE/5_game_source/D2Game/PLAYER/PlrSave2.cpp */
uint32_t * GetPtr_sub_6fd0ca60(void);   /* game binding -> sub_6fd0ca60, D2Game.dll +0xeca60, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrSave2_and_Quests_a2q8.cpp */
uint32_t * GetPtr_sub_6fd0cb50(void);   /* game binding -> sub_6fd0cb50, D2Game.dll +0xecb50, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrSave2_and_Quests_a2q8.cpp */
uint sub_6fd0cf30(void *param_1,int *param_2,uint *param_3,short *param_4,uint param_5,uint *param_6 );   /* game binding -> D2Game.dll +0xecf30, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrSave2_and_Quests_a2q8.cpp */
uint32_t * GetPtr_sub_6fd0d960(void);   /* game binding -> sub_6fd0d960, D2Game.dll +0xed960, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrSave2_and_Quests_a2q8.cpp */
uint32_t * GetPtr_sub_6fd0cbd0(void);   /* game binding -> sub_6fd0cbd0, D2Game.dll +0xecbd0, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrSave2_and_Quests_a2q8.cpp */
uint32_t * GetPtr_sub_6fc68950(void);   /* game binding -> sub_6fc68950, D2Game.dll +0x48950, sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterAI_and_GAME_Clients.cpp */
uint32_t * GetPtr_sub_6fd0d880(void);   /* game binding -> sub_6fd0d880, D2Game.dll +0xed880, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrSave2_and_Quests_a2q8.cpp */
uint32_t * GetPtr_sub_6fd0cc90(void);   /* game binding -> sub_6fd0cc90, D2Game.dll +0xecc90, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrSave2_and_Quests_a2q8.cpp */
uint32_t * GetPtr_sub_6fd0d540(void);   /* game binding -> sub_6fd0d540, D2Game.dll +0xed540, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrSave2_and_Quests_a2q8.cpp */
uint32_t * GetPtr_sub_6fce1510(void);   /* game binding -> sub_6fce1510, D2Game.dll +0xc1510, sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
uint32_t * GetPtr_sub_6fcdcc60(void);   /* game binding -> sub_6fcdcc60, D2Game.dll +0xbcc60, sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
uint __fastcall SKILLS_SkillNec_6fc70250(int *param_1,int *param_2);   /* game binding -> D2Game.dll +0x50250, sigmaRE/5_game_source/D2Game/SKILLS/SkillNec.cpp */
uint __fastcall SKILLS_SkillBar_6fc47130(uint param_1,int *param_2);   /* game binding -> D2Game.dll +0x27130, sigmaRE/5_game_source/D2Game/SKILLS/SkillBar.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcc1000(void);   /* game binding -> SKILLS_Skills_6fcc1000, D2Game.dll +0xa1000, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
int sub_6fc99b10(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0x79b10, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrModes_and_UNIT_SUnitMsg.cpp */
void __fastcall sub_6fcc37d0(void *param_1,int *param_2,void *param_3,int param_4);   /* game binding -> D2Game.dll +0xa37d0, sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_Skills_and_Ai_AiThink4.cpp */
void __fastcall sub_6fc99a60(int param_1,int *param_2,uint32_t param_s1,uint32_t param_s2);   /* game binding -> D2Game.dll +0x79a60, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrModes_and_UNIT_SUnitMsg.cpp */
uint32_t * GetPtr_sub_6fc2ea10(void);   /* game binding -> sub_6fc2ea10, D2Game.dll +0xea10, sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
uint32_t * GetPtr_sub_6fcc3120(void);   /* game binding -> sub_6fcc3120, D2Game.dll +0xa3120, sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_Skills_and_Ai_AiThink4.cpp */
uint32_t * GetPtr_sub_6fcae810(void);   /* game binding -> sub_6fcae810, D2Game.dll +0x8e810, sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Event_and_UNIT_sunitproxy.cpp */
int __fastcall sub_6fcaea80(int param_1,int *param_2,int param_3,uint param_4,uint param_5,uint param_6, uint param_7);   /* game binding -> D2Game.dll +0x8ea80, sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Event_and_UNIT_sunitproxy.cpp */
uint32_t * GetPtr_sub_6fcae680(void);   /* game binding -> sub_6fcae680, D2Game.dll +0x8e680, sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Event_and_UNIT_sunitproxy.cpp */
uint32_t * GetPtr_D2Game_loc_6fcfa350(void);   /* game binding -> D2Game_loc_6fcfa350, D2Game.dll +0xda350, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcc16a0(void);   /* game binding -> SKILLS_Skills_6fcc16a0, D2Game.dll +0xa16a0, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_GAME_SCmd_6fcab010(void);   /* game binding -> GAME_SCmd_6fcab010, D2Game.dll +0x8b010, sigmaRE/5_game_source/D2Game/GAME/SCmd.cpp */
int sub_6fcf1790(void);   /* game binding -> D2Game.dll +0xd1790, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
int sub_6fcf1780(void);   /* game binding -> D2Game.dll +0xd1780, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint SKILLS_SkillItem_6fccce60 (int param_1,int *param_2,int param_3,uint param_4,uint32_t param_s5);   /* game binding -> D2Game.dll +0xace60, sigmaRE/5_game_source/D2Game/SKILLS/SkillItem.cpp */
int sub_6fccd2a0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);   /* game binding -> D2Game.dll +0xad2a0, sigmaRE/5_game_source/D2Game/SKILLS/SkillItem.cpp */
int sub_6fc6dfe0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);   /* game binding -> D2Game.dll +0x4dfe0, sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Clients_and_SKILLS_SkillNec.cpp */
int sub_6fc64600(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);   /* game binding -> D2Game.dll +0x44600, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
uint SKILLS_SkillNec_6fc6ef70 (int param_1,int *param_2,uint32_t param_s3,uint32_t param_s4,uint32_t param_s5 );   /* game binding -> D2Game.dll +0x4ef70, sigmaRE/5_game_source/D2Game/SKILLS/SkillNec.cpp */
uint32_t * GetPtr_sub_6fc42a80(void);   /* game binding -> sub_6fc42a80, D2Game.dll +0x22a80, sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiGeneral_and_SKILLS_SkillBar.cpp */
uint32_t * GetPtr_sub_6fccf5f0(void);   /* game binding -> sub_6fccf5f0, D2Game.dll +0xaf5f0, sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillItem_and_MONSTER_Monster.cpp */
uint32_t * GetPtr_sub_6fccf840(void);   /* game binding -> sub_6fccf840, D2Game.dll +0xaf840, sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillItem_and_MONSTER_Monster.cpp */
uint32_t * GetPtr_sub_6fc977f0(void);   /* game binding -> sub_6fc977f0, D2Game.dll +0x777f0, sigmaRE/5_game_source/D2Game/PLAYER/_unattributed/between_PLAYER_PlrTrade_and_PLAYER_PlrModes.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfe6d0(void);   /* game binding -> UNIT_SUnitDmg_6fcfe6d0, D2Game.dll +0xde6d0, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_sub_6fc58180(void);   /* game binding -> sub_6fc58180, D2Game.dll +0x38180, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
uint32_t * GetPtr_sub_6fc54b80(void);   /* game binding -> sub_6fc54b80, D2Game.dll +0x34b80, sigmaRE/5_game_source/D2Game/UNIT/_unattributed/between_UNIT_SUnit_and_UNIT_SUnitEvent.cpp */
uint32_t * GetPtr_sub_6fcb2360(void);   /* game binding -> sub_6fcb2360, D2Game.dll +0x92360, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
uint32_t * GetPtr_sub_6fcb2a60(void);   /* game binding -> sub_6fcb2a60, D2Game.dll +0x92a60, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
uint32_t * GetPtr_PLAYER_PlrTrade_6fc90240(void);   /* game binding -> PLAYER_PlrTrade_6fc90240, D2Game.dll +0x70240, sigmaRE/5_game_source/D2Game/PLAYER/PlrTrade.cpp */
int sub_6fc92220(int *param_1,int *param_2,int param_3,int param_4);   /* game binding -> D2Game.dll +0x72220, sigmaRE/5_game_source/D2Game/PLAYER/_unattributed/between_PLAYER_PlrTrade_and_PLAYER_PlrModes.cpp */
uint32_t * GetPtr_ITEMS_ItemMode_6fcf39b0(void);   /* game binding -> ITEMS_ItemMode_6fcf39b0, D2Game.dll +0xd39b0, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint32_t * GetPtr_ITEMS_ItemMode_6fcf2c70(void);   /* game binding -> ITEMS_ItemMode_6fcf2c70, D2Game.dll +0xd2c70, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint32_t * GetPtr_ITEMS_ItemMode_6fcf8310(void);   /* game binding -> ITEMS_ItemMode_6fcf8310, D2Game.dll +0xd8310, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
void ITEMS_ItemMode_6fcf78c0(int *param_1,uint param_2,int *param_3);   /* game binding -> D2Game.dll +0xd78c0, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint32_t * GetPtr_PLAYER_PlrMsg_6fcece20(void);   /* game binding -> PLAYER_PlrMsg_6fcece20, D2Game.dll +0xcce20, sigmaRE/5_game_source/D2Game/PLAYER/PlrMsg.cpp */
uint32_t * GetPtr_D2Game_loc_6fcecf70(void);   /* game binding -> D2Game_loc_6fcecf70, D2Game.dll +0xccf70, sigmaRE/5_game_source/D2Game/PLAYER/PlrMsg.cpp */
uint32_t * GetPtr_PLAYER_PlrTrade_6fc90d60(void);   /* game binding -> PLAYER_PlrTrade_6fc90d60, D2Game.dll +0x70d60, sigmaRE/5_game_source/D2Game/PLAYER/PlrTrade.cpp */
uint32_t * GetPtr_GAME_SCmd_6fcac810(void);   /* game binding -> GAME_SCmd_6fcac810, D2Game.dll +0x8c810, sigmaRE/5_game_source/D2Game/GAME/SCmd.cpp */
uint32_t * GetPtr_ITEMS_ItemMode_6fcf4550(void);   /* game binding -> ITEMS_ItemMode_6fcf4550, D2Game.dll +0xd4550, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint32_t * GetPtr_GAME_SCmd_6fcad3d0(void);   /* game binding -> GAME_SCmd_6fcad3d0, D2Game.dll +0x8d3d0, sigmaRE/5_game_source/D2Game/GAME/SCmd.cpp */
uint32_t * GetPtr_GAME_SCmd_6fcaade0(void);   /* game binding -> GAME_SCmd_6fcaade0, D2Game.dll +0x8ade0, sigmaRE/5_game_source/D2Game/GAME/SCmd.cpp */
uint32_t * GetPtr_sub_6fc2ec90(void);   /* game binding -> sub_6fc2ec90, D2Game.dll +0xec90, sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
uint32_t * GetPtr_sub_6fc74320(void);   /* game binding -> sub_6fc74320, D2Game.dll +0x54320, sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Task_and_PLAYER_PlrSave.cpp */
uint32_t * GetPtr_GAME_Clients_6fc6a190(void);   /* game binding -> GAME_Clients_6fc6a190, D2Game.dll +0x4a190, sigmaRE/5_game_source/D2Game/GAME/Clients.cpp */
uint32_t * GetPtr_GAME_Game_6fc4ab70(void);   /* game binding -> GAME_Game_6fc4ab70, D2Game.dll +0x2ab70, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_GAME_Clients_6fc69fe0(void);   /* game binding -> GAME_Clients_6fc69fe0, D2Game.dll +0x49fe0, sigmaRE/5_game_source/D2Game/GAME/Clients.cpp */
uint32_t * GetPtr_GAME_Game_6fc49ba0(void);   /* game binding -> GAME_Game_6fc49ba0, D2Game.dll +0x29ba0, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_GAME_SCmd_6fcac490(void);   /* game binding -> GAME_SCmd_6fcac490, D2Game.dll +0x8c490, sigmaRE/5_game_source/D2Game/GAME/SCmd.cpp */
uint32_t * GetPtr_PLAYER_PlrTrade_6fc90fb0(void);   /* game binding -> PLAYER_PlrTrade_6fc90fb0, D2Game.dll +0x70fb0, sigmaRE/5_game_source/D2Game/PLAYER/PlrTrade.cpp */
uint32_t * GetPtr_PLAYER_PlrTrade_6fc900c0(void);   /* game binding -> PLAYER_PlrTrade_6fc900c0, D2Game.dll +0x700c0, sigmaRE/5_game_source/D2Game/PLAYER/PlrTrade.cpp */
uint32_t * GetPtr_ITEMS_ItemMode_6fcf2f00(void);   /* game binding -> ITEMS_ItemMode_6fcf2f00, D2Game.dll +0xd2f00, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint32_t * GetPtr_PLAYER_PlrTrade_6fc91e10(void);   /* game binding -> PLAYER_PlrTrade_6fc91e10, D2Game.dll +0x71e10, sigmaRE/5_game_source/D2Game/PLAYER/PlrTrade.cpp */
uint32_t * GetPtr_GAME_SCmd_6fcaa3e0(void);   /* game binding -> GAME_SCmd_6fcaa3e0, D2Game.dll +0x8a3e0, sigmaRE/5_game_source/D2Game/GAME/SCmd.cpp */
uint32_t * GetPtr_GAME_SCmd_6fcac280(void);   /* game binding -> GAME_SCmd_6fcac280, D2Game.dll +0x8c280, sigmaRE/5_game_source/D2Game/GAME/SCmd.cpp */
uint32_t * GetPtr_sub_6fc9ac50(void);   /* game binding -> sub_6fc9ac50, D2Game.dll +0x7ac50, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcffa90(void);   /* game binding -> UNIT_SUnitDmg_6fcffa90, D2Game.dll +0xdfa90, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_sub_6fc6df20(void);   /* game binding -> sub_6fc6df20, D2Game.dll +0x4df20, sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Clients_and_SKILLS_SkillNec.cpp */
uint32_t * GetPtr_PLAYER_PlrModes_6fc97e00(void);   /* game binding -> PLAYER_PlrModes_6fc97e00, D2Game.dll +0x77e00, sigmaRE/5_game_source/D2Game/PLAYER/PlrModes.cpp */
uint32_t * GetPtr_PLAYER_PlrModes_6fc98100(void);   /* game binding -> PLAYER_PlrModes_6fc98100, D2Game.dll +0x78100, sigmaRE/5_game_source/D2Game/PLAYER/PlrModes.cpp */
uint32_t * GetPtr_GAME_Event_6fcae490(void);   /* game binding -> GAME_Event_6fcae490, D2Game.dll +0x8e490, sigmaRE/5_game_source/D2Game/GAME/Event.cpp */
uint32_t * GetPtr_PLAYER_PlrModes_6fc98340(void);   /* game binding -> PLAYER_PlrModes_6fc98340, D2Game.dll +0x78340, sigmaRE/5_game_source/D2Game/PLAYER/PlrModes.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfcd80(void);   /* game binding -> UNIT_SUnitDmg_6fcfcd80, D2Game.dll +0xdcd80, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfbed0(void);   /* game binding -> UNIT_SUnitDmg_6fcfbed0, D2Game.dll +0xdbed0, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
int sub_6fc95e10(uint param_1,int *param_2,uint32_t param_s3);   /* game binding -> D2Game.dll +0x75e10, sigmaRE/5_game_source/D2Game/PLAYER/_unattributed/between_PLAYER_PlrTrade_and_PLAYER_PlrModes.cpp */
int __fastcall sub_6fd12540(uint param_1,int *param_2,uint param_3,int param_4,uint param_5,byte param_6, uint param_7,uint32_t param_s6);   /* game binding -> D2Game.dll +0xf2540, sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
void __fastcall sub_6fca8380(void *param_1,int *param_2,int param_3);   /* game binding -> D2Game.dll +0x88380, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
int sub_6fca0f20(uint32_t param_1);   /* game binding -> D2Game.dll +0x80f20, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
void __fastcall sub_6fc38ce0(int param_1,int *param_2,int param_3);   /* game binding -> D2Game.dll +0x18ce0, sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
void __fastcall sub_6fca7e60(int param_1,int *param_2,int param_3);   /* game binding -> D2Game.dll +0x87e60, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
void __fastcall sub_6fca3ce0(int param_1,int *param_2,int param_3);   /* game binding -> D2Game.dll +0x83ce0, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
void __fastcall sub_6fc9bf50(int param_1,int param_2,int param_3);   /* game binding -> D2Game.dll +0x7bf50, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
void __fastcall Ai_AiThink4_6fcc5580(int param_1,int param_2,int *param_3);   /* game binding -> D2Game.dll +0xa5580, sigmaRE/5_game_source/D2Game/Ai/AiThink4.cpp */
void __fastcall Ai_AiThink4_6fcc5d70(int param_1,int *param_2,int param_3);   /* game binding -> D2Game.dll +0xa5d70, sigmaRE/5_game_source/D2Game/Ai/AiThink4.cpp */
void __fastcall sub_6fc9f370(int param_1,int *param_2,int param_3);   /* game binding -> D2Game.dll +0x7f370, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
void __fastcall sub_6fca64a0(void *param_1,int *param_2,int param_3);   /* game binding -> D2Game.dll +0x864a0, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
void __fastcall sub_6fca5780(void *param_1,int *param_2,int *param_3);   /* game binding -> D2Game.dll +0x85780, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
int sub_6fc3dd40(uint32_t param_1);   /* game binding -> D2Game.dll +0x1dd40, sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
int sub_6fca3130(uint32_t param_1);   /* game binding -> D2Game.dll +0x83130, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
void __fastcall sub_6fc3db40(uint *param_1,int *param_2,int *param_3);   /* game binding -> D2Game.dll +0x1db40, sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
void __fastcall sub_6fc9cfd0(int param_1,int *param_2,int *param_3);   /* game binding -> D2Game.dll +0x7cfd0, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
void __fastcall sub_6fc36270(int param_1,int param_2,int *param_3);   /* game binding -> D2Game.dll +0x16270, sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
int sub_6fcc7530(uint32_t param_1);   /* game binding -> D2Game.dll +0xa7530, sigmaRE/5_game_source/D2Game/Ai/AiThink4.cpp */
int sub_6fc38a90(uint32_t param_1);   /* game binding -> D2Game.dll +0x18a90, sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
void __fastcall sub_6fc38730(int param_1,int *param_2,int param_3);   /* game binding -> D2Game.dll +0x18730, sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
void __fastcall sub_6fc37cb0(int param_1,int *param_2,int *param_3);   /* game binding -> D2Game.dll +0x17cb0, sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
void __fastcall sub_6fc9df00(int param_1,int *param_2,int param_3);   /* game binding -> D2Game.dll +0x7df00, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
void __fastcall sub_6fca3fe0(int param_1,int *param_2,int *param_3);   /* game binding -> D2Game.dll +0x83fe0, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
void __fastcall sub_6fca5b60(uint param_1,int *param_2,int param_3);   /* game binding -> D2Game.dll +0x85b60, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
void __fastcall Ai_AiThink4_6fcc9610(int param_1,int *param_2,int *param_3);   /* game binding -> D2Game.dll +0xa9610, sigmaRE/5_game_source/D2Game/Ai/AiThink4.cpp */
void __fastcall sub_6fcd8610(uint *param_1,int *param_2,int *param_3);   /* game binding -> D2Game.dll +0xb8610, sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiBaal_and_Quests_a4q3.cpp */
int sub_6fcd14b0(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xb14b0, sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
int sub_6fcd0e30(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xb0e30, sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
uint __fastcall sub_6fcd1660(uint param_1,int *param_2,int *param_3,uint *param_4);   /* game binding -> D2Game.dll +0xb1660, sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
int sub_6fcd15e0(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xb15e0, sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
int sub_6fcd1580(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xb1580, sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
int sub_6fcd0df0(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xb0df0, sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
int sub_6fcd1520(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xb1520, sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
int sub_6fcd0db0(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xb0db0, sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
uint32_t * GetPtr_sub_6fcbd160(void);   /* game binding -> sub_6fcbd160, D2Game.dll +0x9d160, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_Party_and_SKILLS_Skills.cpp */
uint32_t * GetPtr_sub_6fd12380(void);   /* game binding -> sub_6fd12380, D2Game.dll +0xf2380, sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
uint32_t * GetPtr_sub_6fc21180(void);   /* game binding -> sub_6fc21180, D2Game.dll +0x1180, sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
uint32_t * GetPtr_sub_6fc21480(void);   /* game binding -> sub_6fc21480, D2Game.dll +0x1480, sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
uint32_t * GetPtr_sub_6fd120c0(void);   /* game binding -> sub_6fd120c0, D2Game.dll +0xf20c0, sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
uint32_t * GetPtr_sub_6fd122c0(void);   /* game binding -> sub_6fd122c0, D2Game.dll +0xf22c0, sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
uint32_t * GetPtr_sub_6fd129b0(void);   /* game binding -> sub_6fd129b0, D2Game.dll +0xf29b0, sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
uint32_t * GetPtr_sub_6fd11b10(void);   /* game binding -> sub_6fd11b10, D2Game.dll +0xf1b10, sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
uint32_t * GetPtr_PLAYER_PlayerPets_6fcb6570(void);   /* game binding -> PLAYER_PlayerPets_6fcb6570, D2Game.dll +0x96570, sigmaRE/5_game_source/D2Game/PLAYER/PlayerPets.cpp */
uint32_t * GetPtr_sub_6fc3cae0(void);   /* game binding -> sub_6fc3cae0, D2Game.dll +0x1cae0, sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
uint32_t * GetPtr_sub_6fcbcb30(void);   /* game binding -> sub_6fcbcb30, D2Game.dll +0x9cb30, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_Party_and_SKILLS_Skills.cpp */
uint32_t * GetPtr_sub_6fcbd160_10284b40(void);   /* game binding -> sub_6fcbd160, D2Game.dll +0x9d160, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_Party_and_SKILLS_Skills.cpp */
uint32_t * GetPtr_Ai_AiGeneral_6fc41290(void);   /* game binding -> Ai_AiGeneral_6fc41290, D2Game.dll +0x21290, sigmaRE/5_game_source/D2Game/Ai/AiGeneral.cpp */
uint32_t * GetPtr_sub_6fd12120(void);   /* game binding -> sub_6fd12120, D2Game.dll +0xf2120, sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
uint32_t * GetPtr_sub_6fc3c8a0(void);   /* game binding -> sub_6fc3c8a0, D2Game.dll +0x1c8a0, sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
uint32_t * GetPtr_sub_6fca9730(void);   /* game binding -> sub_6fca9730, D2Game.dll +0x89730, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
uint32_t * GetPtr_sub_6fc9be10(void);   /* game binding -> sub_6fc9be10, D2Game.dll +0x7be10, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
uint32_t * GetPtr_sub_6fc21900(void);   /* game binding -> sub_6fc21900, D2Game.dll +0x1900, sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
uint32_t * GetPtr_sub_6fcd1bc0(void);   /* game binding -> sub_6fcd1bc0, D2Game.dll +0xb1bc0, sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
uint32_t * GetPtr_PLAYER_PlayerPets_6fcb7420(void);   /* game binding -> PLAYER_PlayerPets_6fcb7420, D2Game.dll +0x97420, sigmaRE/5_game_source/D2Game/PLAYER/PlayerPets.cpp */
void __fastcall PLAYER_PlayerPets_6fcb7b50(int param_1,uint param_2,int param_3,uint32_t param_s2);   /* game binding -> D2Game.dll +0x97b50, sigmaRE/5_game_source/D2Game/PLAYER/PlayerPets.cpp */

/* ---- _unattributed/between_functions_D2ServerFunctions_and_events_SkillEvents_unit29_102851a0.cpp ---- */
uint * PLAYER_PlrModes_6fc99210 (int *param_1,int param_2,uint param_3,int param_4,uint32_t param_s5);   /* game binding -> D2Game.dll +0x79210, sigmaRE/5_game_source/D2Game/PLAYER/PlrModes.cpp */
uint32_t * GetPtr_PLAYER_PlayerPets_6fcb6600(void);   /* game binding -> PLAYER_PlayerPets_6fcb6600, D2Game.dll +0x96600, sigmaRE/5_game_source/D2Game/PLAYER/PlayerPets.cpp */
uint32_t * GetPtr_sub_6fc215d0(void);   /* game binding -> sub_6fc215d0, D2Game.dll +0x15d0, sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
void __fastcall UNIT_Missile_6fb617c0(void *param_1);   /* game binding -> D2Client.dll +0xb17c0, sigmaRE/5_game_source/D2Client/UNIT/Missile.cpp */
uint __fastcall sub_6faf15a0(int param_1,int param_2,uint32_t param_s1);   /* game binding -> D2Client.dll +0x415a0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
uint32_t * GetPtr_sub_6fcb3d60(void);   /* game binding -> sub_6fcb3d60, D2Game.dll +0x93d60, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
uint32_t * GetPtr_sub_6faf0f00(void);   /* game binding -> sub_6faf0f00, D2Client.dll +0x40f00, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
uint32_t * GetPtr_sub_6fd00a60(void);   /* game binding -> sub_6fd00a60, D2Game.dll +0xe0a60, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fd003a0(void);   /* game binding -> UNIT_SUnitDmg_6fd003a0, D2Game.dll +0xe03a0, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcc19a0(void);   /* game binding -> SKILLS_Skills_6fcc19a0, D2Game.dll +0xa19a0, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcbfd00(void);   /* game binding -> SKILLS_Skills_6fcbfd00, D2Game.dll +0x9fd00, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_sub_6fd0af80(void);   /* game binding -> sub_6fd0af80, D2Game.dll +0xeaf80, sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcc1280(void);   /* game binding -> SKILLS_Skills_6fcc1280, D2Game.dll +0xa1280, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcbf9a0(void);   /* game binding -> SKILLS_Skills_6fcbf9a0, D2Game.dll +0x9f9a0, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_sub_6fcb1340(void);   /* game binding -> sub_6fcb1340, D2Game.dll +0x91340, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
uint32_t * GetPtr_sub_6faf0550(void);   /* game binding -> sub_6faf0550, D2Client.dll +0x40550, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
uint32_t * GetPtr_sub_6fcb1240(void);   /* game binding -> sub_6fcb1240, D2Game.dll +0x91240, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
uint32_t * GetPtr_sub_6fd02480(void);   /* game binding -> sub_6fd02480, D2Game.dll +0xe2480, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
uint32_t * GetPtr_sub_6fb23bc0(void);   /* game binding -> sub_6fb23bc0, D2Client.dll +0x73bc0, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
uint32_t * GetPtr_SKILLS_SkillDruid_6fc654e0(void);   /* game binding -> SKILLS_SkillDruid_6fc654e0, D2Game.dll +0x454e0, sigmaRE/5_game_source/D2Game/SKILLS/SkillDruid.cpp */
uint sub_6fc8b070(int param_1,int *param_2,uint param_3,int param_4);   /* game binding -> D2Game.dll +0x6b070, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrIntro_and_MISSILES_Missiles.cpp */
uint32_t * GetPtr_sub_6fc31070(void);   /* game binding -> sub_6fc31070, D2Game.dll +0x11070, sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
uint32_t * GetPtr_D2Game_loc_6fcf4230(void);   /* game binding -> D2Game_loc_6fcf4230, D2Game.dll +0xd4230, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint32_t * GetPtr_sub_6fc57680(void);   /* game binding -> sub_6fc57680, D2Game.dll +0x37680, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
uint32_t * GetPtr_ITEMS_ItemMode_6fcf24b0(void);   /* game binding -> ITEMS_ItemMode_6fcf24b0, D2Game.dll +0xd24b0, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
void __fastcall ITEMS_ItemMode_6fcf9470 (void *param_1,uint *param_2,int param_3,uint param_4,uint param_5,uint param_6);   /* game binding -> D2Game.dll +0xd9470, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint32_t * GetPtr_sub_6fccdb30(void);   /* game binding -> sub_6fccdb30, D2Game.dll +0xadb30, sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillItem_and_MONSTER_Monster.cpp */
uint32_t * GetPtr_SKILLS_SkillItem_6fccd050(void);   /* game binding -> SKILLS_SkillItem_6fccd050, D2Game.dll +0xad050, sigmaRE/5_game_source/D2Game/SKILLS/SkillItem.cpp */
uint32_t * GetPtr_UNIT_SUnitEvent_6fc570e0(void);   /* game binding -> UNIT_SUnitEvent_6fc570e0, D2Game.dll +0x370e0, sigmaRE/5_game_source/D2Game/UNIT/SUnitEvent.cpp */
uint32_t * GetPtr_sub_6fd0b090(void);   /* game binding -> sub_6fd0b090, D2Game.dll +0xeb090, sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfc030(void);   /* game binding -> UNIT_SUnitDmg_6fcfc030, D2Game.dll +0xdc030, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfdcb0(void);   /* game binding -> UNIT_SUnitDmg_6fcfdcb0, D2Game.dll +0xddcb0, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_UNIT_Party_6fcbc070(void);   /* game binding -> UNIT_Party_6fcbc070, D2Game.dll +0x9c070, sigmaRE/5_game_source/D2Game/UNIT/Party.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcffcc0(void);   /* game binding -> UNIT_SUnitDmg_6fcffcc0, D2Game.dll +0xdfcc0, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint sub_6fc344d0(int param_1,int param_2,uint param_3,uint param_4,int param_5,uint param_6, int param_7);   /* game binding -> D2Game.dll +0x144d0, sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
int sub_6fcb2030(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0x92030, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
int sub_6fcb3340(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0x93340, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
uint __fastcall sub_6fcb4970(void *param_1,int param_2,int param_3,uint param_4);   /* game binding -> D2Game.dll +0x94970, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
uint __fastcall sub_6fcb4b10(uint param_1,uchar *param_2,int param_3,uint32_t param_s2);   /* game binding -> D2Game.dll +0x94b10, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
uint __fastcall sub_6fc71750(uint param_1,int *param_2,int param_3,uint param_4);   /* game binding -> D2Game.dll +0x51750, sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillNec_and_GAME_Task.cpp */
int sub_6fc71540(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0x51540, sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillNec_and_GAME_Task.cpp */
int sub_6fccdfa0(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xadfa0, sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillItem_and_MONSTER_Monster.cpp */
uint __fastcall sub_6fcb34a0(uint param_1,int *param_2,int param_3,uint param_4);   /* game binding -> D2Game.dll +0x934a0, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
uint __fastcall sub_6fcb4e60(void *param_1,int param_2,int param_3,uint param_4);   /* game binding -> D2Game.dll +0x94e60, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
uint32_t * GetPtr_sub_6fc641c0(void);   /* game binding -> sub_6fc641c0, D2Game.dll +0x441c0, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
uint32_t * GetPtr_sub_6fc639a0(void);   /* game binding -> sub_6fc639a0, D2Game.dll +0x439a0, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
uint32_t * GetPtr_sub_6fb24480(void);   /* game binding -> sub_6fb24480, D2Client.dll +0x74480, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
void UNIT_SUnitDmg_6fcfd450 (uint param_1,int *param_2,int *param_3,uint *param_4,uint param_5,byte param_6);   /* game binding -> D2Game.dll +0xdd450, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
int __fastcall Ai_AiThink4_6fccc940(int *param_1,int param_2);   /* game binding -> D2Game.dll +0xac940, sigmaRE/5_game_source/D2Game/Ai/AiThink4.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfc530(void);   /* game binding -> UNIT_SUnitDmg_6fcfc530, D2Game.dll +0xdc530, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_sub_6fcb1b70(void);   /* game binding -> sub_6fcb1b70, D2Game.dll +0x91b70, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
uint32_t * GetPtr_sub_6fcb5370(void);   /* game binding -> sub_6fcb5370, D2Game.dll +0x95370, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
uint32_t * GetPtr_sub_6fcb22a0(void);   /* game binding -> sub_6fcb22a0, D2Game.dll +0x922a0, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
uint32_t * GetPtr_sub_6fcb1e30(void);   /* game binding -> sub_6fcb1e30, D2Game.dll +0x91e30, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
uint32_t * GetPtr_sub_6fd007a0(void);   /* game binding -> sub_6fd007a0, D2Game.dll +0xe07a0, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfaa90(void);   /* game binding -> UNIT_SUnitDmg_6fcfaa90, D2Game.dll +0xdaa90, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_UNIT_SUnitMsg_6fc9a190(void);   /* game binding -> UNIT_SUnitMsg_6fc9a190, D2Game.dll +0x7a190, sigmaRE/5_game_source/D2Game/UNIT/SUnitMsg.cpp */
uint32_t * GetPtr_GAME_Game_6fc4d090(void);   /* game binding -> GAME_Game_6fc4d090, D2Game.dll +0x2d090, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_GAME_Clients_6fc6b7f0(void);   /* game binding -> GAME_Clients_6fc6b7f0, D2Game.dll +0x4b7f0, sigmaRE/5_game_source/D2Game/GAME/Clients.cpp */
uint32_t * GetPtr_GAME_Clients_6fc6b500(void);   /* game binding -> GAME_Clients_6fc6b500, D2Game.dll +0x4b500, sigmaRE/5_game_source/D2Game/GAME/Clients.cpp */
uint32_t * GetPtr_GAME_Game_6fc4bf90(void);   /* game binding -> GAME_Game_6fc4bf90, D2Game.dll +0x2bf90, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcbe370(void);   /* game binding -> SKILLS_Skills_6fcbe370, D2Game.dll +0x9e370, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
void __fastcall PLAYER_PlrMsg_6fcec2f0(int *param_1,ushort param_2,uint param_3,int *param_4);   /* game binding -> D2Game.dll +0xcc2f0, sigmaRE/5_game_source/D2Game/PLAYER/PlrMsg.cpp */
uint32_t * GetPtr_D2Game_loc_6fcdf810(void);   /* game binding -> D2Game_loc_6fcdf810, D2Game.dll +0xbf810, sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
uint32_t * GetPtr_UNIT_sunitproxy_6fcb02e0(void);   /* game binding -> UNIT_sunitproxy_6fcb02e0, D2Game.dll +0x902e0, sigmaRE/5_game_source/D2Game/UNIT/sunitproxy.cpp */
uint32_t * GetPtr_D2Game_loc_6fc68710(void);   /* game binding -> D2Game_loc_6fc68710, D2Game.dll +0x48710, sigmaRE/5_game_source/D2Game/MONSTER/MonsterAI.cpp */
uint32_t * GetPtr_UNIT_sunitproxy_6fcaf4e0(void);   /* game binding -> UNIT_sunitproxy_6fcaf4e0, D2Game.dll +0x8f4e0, sigmaRE/5_game_source/D2Game/UNIT/sunitproxy.cpp */
uint32_t * GetPtr_D2Game_loc_6fce00c0(void);   /* game binding -> D2Game_loc_6fce00c0, D2Game.dll +0xc00c0, sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
uint32_t * GetPtr_UNIT_sunitproxy_6fcafaa0(void);   /* game binding -> UNIT_sunitproxy_6fcafaa0, D2Game.dll +0x8faa0, sigmaRE/5_game_source/D2Game/UNIT/sunitproxy.cpp */
uint32_t * GetPtr_D2Game_loc_6fcdcd90(void);   /* game binding -> D2Game_loc_6fcdcd90, D2Game.dll +0xbcd90, sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
uint32_t * GetPtr_UNIT_sunitproxy_6fcaf5c0(void);   /* game binding -> UNIT_sunitproxy_6fcaf5c0, D2Game.dll +0x8f5c0, sigmaRE/5_game_source/D2Game/UNIT/sunitproxy.cpp */
uint32_t * GetPtr_UNIT_sunitproxy_6fcaf820(void);   /* game binding -> UNIT_sunitproxy_6fcaf820, D2Game.dll +0x8f820, sigmaRE/5_game_source/D2Game/UNIT/sunitproxy.cpp */
uint32_t * GetPtr_D2Game_loc_6fcaf620(void);   /* game binding -> D2Game_loc_6fcaf620, D2Game.dll +0x8f620, sigmaRE/5_game_source/D2Game/UNIT/sunitproxy.cpp */
void ITEMS_ItemMode_6fcf51a0(int param_1,int *param_2,uint32_t param_s3);   /* game binding -> D2Game.dll +0xd51a0, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint32_t * GetPtr_sub_6fcdca20(void);   /* game binding -> sub_6fcdca20, D2Game.dll +0xbca20, sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
uint32_t * GetPtr_D2Game_loc_6fceb610(void);   /* game binding -> D2Game_loc_6fceb610, D2Game.dll +0xcb610, sigmaRE/5_game_source/D2Game/PLAYER/PlrMsg.cpp */
uint32_t * GetPtr_GAME_SCmd_6fcad5f0(void);   /* game binding -> GAME_SCmd_6fcad5f0, D2Game.dll +0x8d5f0, sigmaRE/5_game_source/D2Game/GAME/SCmd.cpp */
uint32_t * GetPtr_D2Game_loc_6fc21740(void);   /* game binding -> D2Game_loc_6fc21740, D2Game.dll +0x1740, sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcbfae0(void);   /* game binding -> SKILLS_Skills_6fcbfae0, D2Game.dll +0x9fae0, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_D2Game_loc_6fcc3d00(void);   /* game binding -> D2Game_loc_6fcc3d00, D2Game.dll +0xa3d00, sigmaRE/5_game_source/D2Game/Ai/AiThink4.cpp */
uint32_t * GetPtr_Ai_AiThink4_6fcc3d60(void);   /* game binding -> Ai_AiThink4_6fcc3d60, D2Game.dll +0xa3d60, sigmaRE/5_game_source/D2Game/Ai/AiThink4.cpp */
uint32_t * GetPtr_sub_6fc2f2f0(void);   /* game binding -> sub_6fc2f2f0, D2Game.dll +0xf2f0, sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
void PLAYER_PlayerPets_6fcb6fa0(uint param_1,int *param_2);   /* game binding -> D2Game.dll +0x96fa0, sigmaRE/5_game_source/D2Game/PLAYER/PlayerPets.cpp */
uint32_t * GetPtr_sub_6fcb83b0(void);   /* game binding -> sub_6fcb83b0, D2Game.dll +0x983b0, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlayerPets_and_SKILLS_SkilPal.cpp */
uint32_t * GetPtr_sub_6fd02310(void);   /* game binding -> sub_6fd02310, D2Game.dll +0xe2310, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
uint32_t * GetPtr_sub_6fcb8e30(void);   /* game binding -> sub_6fcb8e30, D2Game.dll +0x98e30, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlayerPets_and_SKILLS_SkilPal.cpp */
uint32_t * GetPtr_ITEMS_ItemMode_6fcf6e30(void);   /* game binding -> ITEMS_ItemMode_6fcf6e30, D2Game.dll +0xd6e30, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint32_t * GetPtr_ITEMS_ItemMode_6fcf7160(void);   /* game binding -> ITEMS_ItemMode_6fcf7160, D2Game.dll +0xd7160, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint32_t * GetPtr_D2Game_DAT_6fd27238(void);   /* game binding -> DAT_6fd27238, D2Game.dll +0x107238, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd274a8(void);   /* game binding -> DAT_6fd274a8, D2Game.dll +0x1074a8, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd277a8(void);   /* game binding -> DAT_6fd277a8, D2Game.dll +0x1077a8, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd2e550(void);   /* game binding -> DAT_6fd2e550, D2Game.dll +0x10e550, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb8ea48(void);   /* game binding -> DAT_6fb8ea48, D2Client.dll +0xdea48, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd27338(void);   /* game binding -> DAT_6fd27338, D2Game.dll +0x107338, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb8e928(void);   /* game binding -> DAT_6fb8e928, D2Client.dll +0xde928, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fba5210(void);   /* game binding -> DAT_6fba5210, D2Client.dll +0xf5210, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb8de60(void);   /* game binding -> DAT_6fb8de60, D2Client.dll +0xdde60, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Net_DAT_6fbfa900(void);   /* game binding -> DAT_6fbfa900, D2Net.dll +0xa900, sigmaRE/5_game_source/D2Net/include/globals.h */
uint32_t * GetPtr_D2Net_DAT_6fbfabd8(void);   /* game binding -> DAT_6fbfabd8, D2Net.dll +0xabd8, sigmaRE/5_game_source/D2Net/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd1a078(void);   /* game binding -> DAT_6fd1a078, D2Game.dll +0xfa078, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbba608(void);   /* game binding -> DAT_6fbba608, D2Client.dll +0x10a608, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbb9a08(void);   /* game binding -> DAT_6fbb9a08, D2Client.dll +0x109a08, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd2e788(void);   /* game binding -> DAT_6fd2e788, D2Game.dll +0x10e788, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd2da48(void);   /* game binding -> DAT_6fd2da48, D2Game.dll +0x10da48, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd2db68(void);   /* game binding -> DAT_6fd2db68, D2Game.dll +0x10db68, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd2d970(void);   /* game binding -> DAT_6fd2d970, D2Game.dll +0x10d970, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb8da10(void);   /* game binding -> DAT_6fb8da10, D2Client.dll +0xdda10, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb8d8a0(void);   /* game binding -> DAT_6fb8d8a0, D2Client.dll +0xdd8a0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb8d810(void);   /* game binding -> DAT_6fb8d810, D2Client.dll +0xdd810, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd2d8bc(void);   /* game binding -> DAT_6fd2d8bc, D2Game.dll +0x10d8bc, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd31c30(void);   /* game binding -> DAT_6fd31c30, D2Game.dll +0x111c30, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd31c3c(void);   /* game binding -> DAT_6fd31c3c, D2Game.dll +0x111c3c, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd1a3f8(void);   /* game binding -> DAT_6fd1a3f8, D2Game.dll +0xfa3f8, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd2e050(void);   /* game binding -> DAT_6fd2e050, D2Game.dll +0x10e050, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd27bb8(void);   /* game binding -> DAT_6fd27bb8, D2Game.dll +0x107bb8, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd1a5f8(void);   /* game binding -> DAT_6fd1a5f8, D2Game.dll +0xfa5f8, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd2f850(void);   /* game binding -> DAT_6fd2f850, D2Game.dll +0x10f850, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd26f0c(void);   /* game binding -> DAT_6fd26f0c, D2Game.dll +0x106f0c, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Common_DAT_6fdeb0c8(void);   /* game binding -> DAT_6fdeb0c8, D2Common.dll +0x9b0c8, sigmaRE/5_game_source/D2Common/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd2f448(void);   /* game binding -> DAT_6fd2f448, D2Game.dll +0x10f448, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfa7b0(void);   /* game binding -> UNIT_SUnitDmg_6fcfa7b0, D2Game.dll +0xda7b0, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_D2Game_DAT_6fd19f68(void);   /* game binding -> DAT_6fd19f68, D2Game.dll +0xf9f68, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_sub_6fc5f320(void);   /* game binding -> sub_6fc5f320, D2Game.dll +0x3f320, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
int sub_6fce32c0(void);   /* game binding -> D2Game.dll +0xc32c0, sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
int sub_6fc8abb0(void);   /* game binding -> D2Game.dll +0x6abb0, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrIntro_and_MISSILES_Missiles.cpp */
int sub_6fc8ace0(void);   /* game binding -> D2Game.dll +0x6ace0, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrIntro_and_MISSILES_Missiles.cpp */
int sub_6fc8ac30(void);   /* game binding -> D2Game.dll +0x6ac30, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrIntro_and_MISSILES_Missiles.cpp */
int __fastcall PLAYER_PlrMsg_6fcee520(uint param_1,uint param_2,uint param_3,int param_4);   /* game binding -> D2Game.dll +0xce520, sigmaRE/5_game_source/D2Game/PLAYER/PlrMsg.cpp */
int PLAYER_PlrMsg_6fcedbb0(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xcdbb0, sigmaRE/5_game_source/D2Game/PLAYER/PlrMsg.cpp */
int sub_6fcf08b0(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xd08b0, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
int sub_6fcef380(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xcf380, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
int sub_6fcf1370(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xd1370, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
int sub_6fceee60(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xcee60, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
int sub_6fcef2f0(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xcf2f0, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
int sub_6fcf12e0(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xd12e0, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
int sub_6fcf1200(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xd1200, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
int sub_6fcf1140(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xd1140, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
int sub_6fcf1010(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xd1010, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
int sub_6fceebd0(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xcebd0, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
int sub_6fcef510(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xcf510, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
int sub_6fcf0bc0(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xd0bc0, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
int sub_6fcef570(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xcf570, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
int sub_6fcf0e90(uint32_t param_1,uint32_t param_2);   /* game binding -> D2Game.dll +0xd0e90, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
void __fastcall sub_6fb5dd30(int param_1);   /* game binding -> D2Client.dll +0xadd30, sigmaRE/5_game_source/D2Client/_unattributed/between_GAME_SCmd_and_UNIT_Missile.cpp */
uint32_t * GetPtr_D2Client_DAT_6fba20c8(void);   /* game binding -> DAT_6fba20c8, D2Client.dll +0xf20c8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_UNIT_PlrSkills_6fb22610(void);   /* game binding -> UNIT_PlrSkills_6fb22610, D2Client.dll +0x72610, sigmaRE/5_game_source/D2Client/UNIT/PlrSkills.cpp */
uint32_t * GetPtr_UNIT_PlrSkills_6fb22530(void);   /* game binding -> UNIT_PlrSkills_6fb22530, D2Client.dll +0x72530, sigmaRE/5_game_source/D2Client/UNIT/PlrSkills.cpp */
uint32_t * GetPtr_ENGINE_Gfx_6fb1cb30(void);   /* game binding -> ENGINE_Gfx_6fb1cb30, D2Client.dll +0x6cb30, sigmaRE/5_game_source/D2Client/ENGINE/Gfx.cpp */
void __fastcall sub_6fb03c30(int param_1);   /* game binding -> D2Client.dll +0x53c30, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
int * UNIT_CUnit_6fb57780(uint *param_1,ushort param_2,ushort param_3,int param_4, uint32_t param_s5,uint32_t param_s6);   /* game binding -> D2Client.dll +0xa7780, sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
void sub_6fb04880(uint param_1,uint param_2,int *param_3);   /* game binding -> D2Client.dll +0x54880, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
void sub_6fb04780(void *param_1);   /* game binding -> D2Client.dll +0x54780, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
uint32_t * GetPtr_sub_6fb04280(void);   /* game binding -> sub_6fb04280, D2Client.dll +0x54280, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
uint32_t * GetPtr_D2Game_DAT_6fd22ab0(void);   /* game binding -> DAT_6fd22ab0, D2Game.dll +0x102ab0, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd1c3e8(void);   /* game binding -> DAT_6fd1c3e8, D2Game.dll +0xfc3e8, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb869c4(void);   /* game binding -> DAT_6fb869c4, D2Client.dll +0xd69c4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd1a3dc(void);   /* game binding -> DAT_6fd1a3dc, D2Game.dll +0xfa3dc, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd1a01c(void);   /* game binding -> DAT_6fd1a01c, D2Game.dll +0xfa01c, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd1a048(void);   /* game binding -> DAT_6fd1a048, D2Game.dll +0xfa048, sigmaRE/5_game_source/D2Game/include/globals.h */
uint D2Common_10066(int param_1);   /* game binding -> D2Common.dll ordinal 10066, sigmaRE/5_game_source/D2Common/DATATBLS/DataTbls.cpp */
uint D2Common_10399(int param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10399, sigmaRE/5_game_source/D2Common/DATATBLS/DataTbls.cpp */
void D2Common_10563(int param_1);   /* game binding -> D2Common.dll ordinal 10563, sigmaRE/5_game_source/D2Common/DATATBLS/DataTbls.cpp */
void D2Common_10943(void *param_1,int param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10943, sigmaRE/5_game_source/D2Common/DATATBLS/DataTbls.cpp */
uint __fastcall D2Common_10241(int param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10241, sigmaRE/5_game_source/D2Common/_unattributed/between_DATATBLS_FieldTbls_and_DRLG_DrlgLogic.cpp */
int * D2Common_10849(uint param_1,char *param_2,uint param_3,int *param_4,uint32_t param_s5);   /* game binding -> D2Common.dll ordinal 10849, sigmaRE/5_game_source/D2Common/DATATBLS/DataTbls.cpp */
uint32_t * GetPtr_GAME_Game_6fc4a850(void);   /* game binding -> GAME_Game_6fc4a850, D2Game.dll +0x2a850, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_GAME_Game_6fc4c2d0(void);   /* game binding -> GAME_Game_6fc4c2d0, D2Game.dll +0x2c2d0, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_GAME_CCmd_6fcead60(void);   /* game binding -> GAME_CCmd_6fcead60, D2Game.dll +0xcad60, sigmaRE/5_game_source/D2Game/GAME/CCmd.cpp */
uint32_t * GetPtr_GAME_SCmd_6fcac4b0(void);   /* game binding -> GAME_SCmd_6fcac4b0, D2Game.dll +0x8c4b0, sigmaRE/5_game_source/D2Game/GAME/SCmd.cpp */
uint32_t * GetPtr_GAME_Game_6fc4a740(void);   /* game binding -> GAME_Game_6fc4a740, D2Game.dll +0x2a740, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_GAME_Game_6fc4bb10(void);   /* game binding -> GAME_Game_6fc4bb10, D2Game.dll +0x2bb10, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_GAME_Clients_6fc69930(void);   /* game binding -> GAME_Clients_6fc69930, D2Game.dll +0x49930, sigmaRE/5_game_source/D2Game/GAME/Clients.cpp */
void GAME_Game_6fc4dc70(int param_1,uint32_t param_s2);   /* game binding -> D2Game.dll +0x2dc70, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_GAME_Game_6fc4ba10(void);   /* game binding -> GAME_Game_6fc4ba10, D2Game.dll +0x2ba10, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_GAME_Game_6fc4e360(void);   /* game binding -> GAME_Game_6fc4e360, D2Game.dll +0x2e360, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_GAME_Game_6fc4aac0(void);   /* game binding -> GAME_Game_6fc4aac0, D2Game.dll +0x2aac0, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_GAME_Clients_6fc6a780(void);   /* game binding -> GAME_Clients_6fc6a780, D2Game.dll +0x4a780, sigmaRE/5_game_source/D2Game/GAME/Clients.cpp */
uint32_t * GetPtr_GAME_Game_6fc4a6e0(void);   /* game binding -> GAME_Game_6fc4a6e0, D2Game.dll +0x2a6e0, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_GAME_Game_6fc4d7e0(void);   /* game binding -> GAME_Game_6fc4d7e0, D2Game.dll +0x2d7e0, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_GAME_Clients_6fc6a0a0(void);   /* game binding -> GAME_Clients_6fc6a0a0, D2Game.dll +0x4a0a0, sigmaRE/5_game_source/D2Game/GAME/Clients.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fd00110(void);   /* game binding -> UNIT_SUnitDmg_6fd00110, D2Game.dll +0xe0110, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
void __fastcall D2Game_10049(int param_1);   /* game binding -> D2Game.dll +0x37430, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitEvent_and_PLAYER_Player.cpp */
uint __fastcall D2Game_10015(uint *param_1,uint param_2,uint param_3);   /* game binding -> D2Game.dll ordinal 10015, sigmaRE/5_game_source/D2Game/GAME/Task.cpp */
uint GAME_Game_6fc4a220(void);   /* game binding -> D2Game.dll +0x2a220, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_sub_6fc22060(void);   /* game binding -> sub_6fc22060, D2Game.dll +0x2060, sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
uint32_t * GetPtr_sub_6fc22090(void);   /* game binding -> sub_6fc22090, D2Game.dll +0x2090, sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
uint32_t * GetPtr_GAME_Game_6fc4bc90(void);   /* game binding -> GAME_Game_6fc4bc90, D2Game.dll +0x2bc90, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_GAME_Game_6fc4a900(void);   /* game binding -> GAME_Game_6fc4a900, D2Game.dll +0x2a900, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_GAME_Event_6fcae630(void);   /* game binding -> GAME_Event_6fcae630, D2Game.dll +0x8e630, sigmaRE/5_game_source/D2Game/GAME/Event.cpp */
uint32_t * GetPtr_GAME_Arena_6fcd2560(void);   /* game binding -> GAME_Arena_6fcd2560, D2Game.dll +0xb2560, sigmaRE/5_game_source/D2Game/GAME/Arena.cpp */
uint32_t * GetPtr_UNIT_Party_6fcbbe40(void);   /* game binding -> UNIT_Party_6fcbbe40, D2Game.dll +0x9be40, sigmaRE/5_game_source/D2Game/UNIT/Party.cpp */
uint32_t * GetPtr_MONSTER_MonsterRegion_6fceacc0(void);   /* game binding -> MONSTER_MonsterRegion_6fceacc0, D2Game.dll +0xcacc0, sigmaRE/5_game_source/D2Game/MONSTER/MonsterRegion.cpp */
uint OBJECTS_objrgn_6fc2b9a0(int param_1);   /* game binding -> D2Game.dll +0xb9a0, sigmaRE/5_game_source/D2Game/OBJECTS/objrgn.cpp */
void UNIT_sunitproxy_6fcafbe0(int param_1);   /* game binding -> D2Game.dll +0x8fbe0, sigmaRE/5_game_source/D2Game/UNIT/sunitproxy.cpp */
void sub_6fc548a0(int param_1);   /* game binding -> D2Game.dll +0x348a0, sigmaRE/5_game_source/D2Game/UNIT/_unattributed/between_UNIT_SUnit_and_UNIT_SUnitEvent.cpp */
void GAME_Game_6fc4a2d0(uint param_1,ushort param_2);   /* game binding -> D2Game.dll +0x2a2d0, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_GAME_Game_6fc4ac60(void);   /* game binding -> GAME_Game_6fc4ac60, D2Game.dll +0x2ac60, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_sub_6fccf610(void);   /* game binding -> sub_6fccf610, D2Game.dll +0xaf610, sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillItem_and_MONSTER_Monster.cpp */
uint32_t * GetPtr_sub_6fab1260(void);   /* game binding -> sub_6fab1260, D2Client.dll +0x1260, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fab1000.cpp */
uint32_t * GetPtr_ITEMS_ItemMode_6fcf4570(void);   /* game binding -> ITEMS_ItemMode_6fcf4570, D2Game.dll +0xd4570, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
uint32_t * GetPtr_sub_6fc32df0(void);   /* game binding -> sub_6fc32df0, D2Game.dll +0x12df0, sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
uint32_t * GetPtr_sub_6fc21670(void);   /* game binding -> sub_6fc21670, D2Game.dll +0x1670, sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
uint32_t * GetPtr_INVENTORY_InvMode_6fcbb570(void);   /* game binding -> INVENTORY_InvMode_6fcbb570, D2Game.dll +0x9b570, sigmaRE/5_game_source/D2Game/INVENTORY/InvMode.cpp */
uint32_t * GetPtr_sub_6fcd88c0(void);   /* game binding -> sub_6fcd88c0, D2Game.dll +0xb88c0, sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiBaal_and_Quests_a4q3.cpp */
uint32_t * GetPtr_PLAYER_PlrTrade_6fc919a0(void);   /* game binding -> PLAYER_PlrTrade_6fc919a0, D2Game.dll +0x719a0, sigmaRE/5_game_source/D2Game/PLAYER/PlrTrade.cpp */
uint32_t * GetPtr_sub_6fc93ba0(void);   /* game binding -> sub_6fc93ba0, D2Game.dll +0x73ba0, sigmaRE/5_game_source/D2Game/PLAYER/_unattributed/between_PLAYER_PlrTrade_and_PLAYER_PlrModes.cpp */
char * D2Common_10762(int param_1,uint32_t param_s2,uint32_t param_s3,uint32_t param_s4);   /* game binding -> D2Common.dll ordinal 10762, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_11060(uint32_t param_s1);   /* game binding -> D2Common.dll ordinal 11060, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
uint32_t * GetPtr_GAME_Game_6fc4d980(void);   /* game binding -> GAME_Game_6fc4d980, D2Game.dll +0x2d980, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_GAME_Game_6fc4ce20(void);   /* game binding -> GAME_Game_6fc4ce20, D2Game.dll +0x2ce20, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_GAME_CCmd_6fceae80(void);   /* game binding -> GAME_CCmd_6fceae80, D2Game.dll +0xcae80, sigmaRE/5_game_source/D2Game/GAME/CCmd.cpp */
uint32_t * GetPtr_sub_6fc22130(void);   /* game binding -> sub_6fc22130, D2Game.dll +0x2130, sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
uint32_t * GetPtr_GAME_Game_6fc4e050(void);   /* game binding -> GAME_Game_6fc4e050, D2Game.dll +0x2e050, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_D2Game_DAT_6fd303b8(void);   /* game binding -> DAT_6fd303b8, D2Game.dll +0x1103b8, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd307b8(void);   /* game binding -> DAT_6fd307b8, D2Game.dll +0x1107b8, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd30bb8(void);   /* game binding -> DAT_6fd30bb8, D2Game.dll +0x110bb8, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd30bd0(void);   /* game binding -> DAT_6fd30bd0, D2Game.dll +0x110bd0, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd30be8(void);   /* game binding -> DAT_6fd30be8, D2Game.dll +0x110be8, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd30c08(void);   /* game binding -> DAT_6fd30c08, D2Game.dll +0x110c08, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd31c08(void);   /* game binding -> DAT_6fd31c08, D2Game.dll +0x111c08, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd31c18(void);   /* game binding -> DAT_6fd31c18, D2Game.dll +0x111c18, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd31c08_1028cba0(void);   /* game binding -> DAT_6fd31c08, D2Game.dll +0x111c08, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd31c44(void);   /* game binding -> DAT_6fd31c44, D2Game.dll +0x111c44, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd31f70(void);   /* game binding -> DAT_6fd31f70, D2Game.dll +0x111f70, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd31f84(void);   /* game binding -> DAT_6fd31f84, D2Game.dll +0x111f84, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd2e35c(void);   /* game binding -> DAT_6fd2e35c, D2Game.dll +0x10e35c, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Game_DAT_6fd31c48(void);   /* game binding -> DAT_6fd31c48, D2Game.dll +0x111c48, sigmaRE/5_game_source/D2Game/include/globals.h */
uint D2Net_10024_1028cfc0(ushort param_1,uint param_2,char *param_3);   /* game binding -> D2Net_10024, D2Net.dll ordinal 10024, sigmaRE/5_game_source/D2Net/_unattributed/after_SRC_Server.cpp */
void D2Net_10001(uint param_1,uint param_2,uint param_3);   /* game binding -> D2Net.dll ordinal 10001, sigmaRE/5_game_source/D2Net/_unattributed/after_SRC_Server.cpp */
uint D2Net_10002(char param_1,uint param_2,byte *param_3,uint param_4);   /* game binding -> D2Net.dll ordinal 10002, sigmaRE/5_game_source/D2Net/_unattributed/after_SRC_Server.cpp */
void D2Net_10021(int param_1,uint param_2);   /* game binding -> D2Net.dll ordinal 10021, sigmaRE/5_game_source/D2Net/_unattributed/before_SRC_Server.cpp */
uint32_t * GetPtr_D2Net_DAT_6fbfb400(void);   /* game binding -> DAT_6fbfb400, D2Net.dll +0xb400, sigmaRE/5_game_source/D2Net/include/globals.h */
void __fastcall D2gfx_10006(uint param_1);   /* game binding -> D2gfx.dll ordinal 10006, sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
void D2gfx_10010(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6);   /* game binding -> D2gfx.dll ordinal 10010, sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
uint D2gfx_10012(int param_1,int param_2);   /* game binding -> D2gfx.dll ordinal 10012, sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
uint D2gfx_10013(void);   /* game binding -> D2gfx.dll ordinal 10013, sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
void D2gfx_10014(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6);   /* game binding -> D2gfx.dll ordinal 10014, sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
void D2gfx_10023(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);   /* game binding -> D2gfx.dll ordinal 10023, sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
uint D2gfx_10036(void);   /* game binding -> D2gfx.dll ordinal 10036, sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
void D2gfx_10062(uint param_1);   /* game binding -> D2gfx.dll ordinal 10062, sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
void D2gfx_10082(uint32_t param_s1);   /* game binding -> D2gfx.dll ordinal 10082, sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
void D2gfx_10041(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6);   /* game binding -> D2gfx.dll ordinal 10041, sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
void D2gfx_10019(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6);   /* game binding -> D2gfx.dll ordinal 10019, sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
uint D2gfx_10048(void);   /* game binding -> D2gfx.dll ordinal 10048, sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbcc304(void);   /* game binding -> DAT_6fbcc304, D2Client.dll +0x11c304, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcb9c4(void);   /* game binding -> DAT_6fbcb9c4, D2Client.dll +0x11b9c4, sigmaRE/5_game_source/D2Client/include/globals.h */
int sub_6f9dcb30(void);   /* game binding -> D2Multi.dll +0xcb30, sigmaRE/5_game_source/D2Multi/_unattributed/code_6f9dc510.cpp */
void sub_6f9dc690(void);   /* game binding -> D2Multi.dll +0xc690, sigmaRE/5_game_source/D2Multi/_unattributed/code_6f9dc510.cpp */
uint32_t * GetPtr_D2Multi_DAT_6fa08f18(void);   /* game binding -> DAT_6fa08f18, D2Multi.dll +0x38f18, sigmaRE/5_game_source/D2Multi/include/globals.h */
uint32_t * GetPtr_D2Multi_DAT_6fa09cc0(void);   /* game binding -> DAT_6fa09cc0, D2Multi.dll +0x39cc0, sigmaRE/5_game_source/D2Multi/include/globals.h */
uint32_t * GetPtr_D2Multi_DAT_6f9e9c60(void);   /* game binding -> DAT_6f9e9c60, D2Multi.dll +0x19c60, sigmaRE/5_game_source/D2Multi/include/globals.h */
uint32_t * GetPtr_D2Multi_DAT_6fa09cd8(void);   /* game binding -> DAT_6fa09cd8, D2Multi.dll +0x39cd8, sigmaRE/5_game_source/D2Multi/include/globals.h */
uint32_t * GetPtr_D2Multi_DAT_6fa0a0c8(void);   /* game binding -> DAT_6fa0a0c8, D2Multi.dll +0x3a0c8, sigmaRE/5_game_source/D2Multi/include/globals.h */
uint32_t * GetPtr_D2Multi_DAT_6fa0a0d0(void);   /* game binding -> DAT_6fa0a0d0, D2Multi.dll +0x3a0d0, sigmaRE/5_game_source/D2Multi/include/globals.h */
uint32_t * GetPtr_D2Multi_loc_6f9e08a6(void);   /* game binding -> D2Multi_loc_6f9e08a6, D2Multi.dll +0x108a6, sigmaRE/5_game_source/D2Multi/_unattributed/code_6f9dc510.cpp */
uint32_t * GetPtr_D2Multi_loc_6f9e07a6(void);   /* game binding -> D2Multi_loc_6f9e07a6, D2Multi.dll +0x107a6, sigmaRE/5_game_source/D2Multi/_unattributed/code_6f9dc510.cpp */
uint32_t * GetPtr_sub_6f9e0000(void);   /* game binding -> sub_6f9e0000, D2Multi.dll +0x10000, sigmaRE/5_game_source/D2Multi/_unattributed/code_6f9dc510.cpp */
uint32_t * GetPtr_D2Multi_loc_6f9dd5b0(void);   /* game binding -> D2Multi_loc_6f9dd5b0, D2Multi.dll +0xd5b0, sigmaRE/5_game_source/D2Multi/_unattributed/code_6f9dc510.cpp */
uint D2CMP_10000(int param_1);   /* game binding -> D2CMP.dll ordinal 10000, sigmaRE/5_game_source/D2CMP/SRC/SpriteCache.cpp */
uint __thiscall D2CMP_10005(void *this,int param_1,int param_2);   /* game binding -> D2CMP.dll ordinal 10005, sigmaRE/5_game_source/D2CMP/SRC/SpriteCache.cpp */
void D2CMP_10054(uint param_1,uint param_2);   /* game binding -> D2CMP.dll ordinal 10054, sigmaRE/5_game_source/D2CMP/_unattributed/before_SRC_SpriteCache.cpp */
uint D2CMP_10060(int param_1);   /* game binding -> D2CMP.dll ordinal 10060, sigmaRE/5_game_source/D2CMP/SRC/SpriteCache.cpp */
void D2CMP_10068(uint param_1,uint param_2,uint param_3,uint param_4);   /* game binding -> D2CMP.dll ordinal 10068, sigmaRE/5_game_source/D2CMP/SRC/SpriteCache.cpp */
uchar * D2CMP_10091(int param_1,int param_2);   /* game binding -> D2CMP.dll ordinal 10091, sigmaRE/5_game_source/D2CMP/SRC/_unattributed/between_SRC_Codec_and_SRC_GfxHash.cpp */
int __fastcall D2Lang_10003(uint param_1);   /* game binding -> D2Lang.dll ordinal 10003, sigmaRE/5_game_source/D2Lang/_unattributed/code.cpp */
void D2Lang_10004(char *param_1,int param_2);   /* game binding -> D2Lang.dll ordinal 10004, sigmaRE/5_game_source/D2Lang/_unattributed/code.cpp */
uint __fastcall D2Lang_10011(byte *param_1);   /* game binding -> D2Lang.dll ordinal 10011, sigmaRE/5_game_source/D2Lang/_unattributed/code.cpp */
void * __fastcall Unicode_strcat(void *param_1,void *param_2);   /* game binding -> D2Lang.dll +0xafe0, sigmaRE/5_game_source/D2Lang/_unattributed/code.cpp */
void D2Lang_10006(int param_1,ulong param_2,int param_3);   /* game binding -> D2Lang.dll ordinal 10006, sigmaRE/5_game_source/D2Lang/_unattributed/code.cpp */
uint __fastcall D2Lang_10008(uint param_1,char *param_2,uint32_t param_s1);   /* game binding -> D2Lang.dll ordinal 10008, sigmaRE/5_game_source/D2Lang/_unattributed/code.cpp */
uint D2Lang_10009(void);   /* game binding -> D2Lang.dll ordinal 10009, sigmaRE/5_game_source/D2Lang/_unattributed/code.cpp */
uint D2Lang_10010(byte *param_1,uint *param_2);   /* game binding -> D2Lang.dll ordinal 10010, sigmaRE/5_game_source/D2Lang/_unattributed/code.cpp */
uint32_t * GetPtr_D2Lang_DAT_6fc10a80(void);   /* game binding -> DAT_6fc10a80, D2Lang.dll +0x10a80, sigmaRE/5_game_source/D2Lang/include/globals.h */
uint32_t * GetPtr_D2Lang_DAT_6fc10a6c(void);   /* game binding -> DAT_6fc10a6c, D2Lang.dll +0x10a6c, sigmaRE/5_game_source/D2Lang/include/globals.h */
uint32_t * GetPtr_Unicode_strlen(void);   /* game binding -> Unicode_strlen, D2Lang.dll +0xb0b0, sigmaRE/5_game_source/D2Lang/_unattributed/code.cpp */
uint32_t * GetPtr_D2Launch_DAT_6fa65abc(void);   /* game binding -> DAT_6fa65abc, D2Launch.dll +0x25abc, sigmaRE/5_game_source/D2Launch/include/globals.h */
void __fastcall D2Win_10150(void *this,uint reg_EDX,int param_3,int param_4,int param_5);   /* game binding -> D2Win.dll ordinal 10150, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
uint D2Win_10083(void);   /* game binding -> D2Win.dll ordinal 10083, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
void __fastcall D2Win_10085(void *param_1,uint param_2,uint param_3,uint param_4,uint param_5);   /* game binding -> D2Win.dll ordinal 10085, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
int __fastcall D2Win_10028(void *param_1);   /* game binding -> D2Win.dll ordinal 10028, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
void __fastcall D2Win_10177(uint param_1,int *param_2,int *param_3);   /* game binding -> D2Win.dll ordinal 10177, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
int __fastcall D2Win_10184(int param_1);   /* game binding -> D2Win.dll ordinal 10184, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
uint __fastcall D2Win_10042(int *param_1,void *param_2);   /* game binding -> D2Win.dll ordinal 10042, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
int D2Win_10190(uchar param_1,uchar param_2,uchar param_3);   /* game binding -> D2Win.dll ordinal 10190, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
int D2Win_10190_1028e380(uchar param_1,uchar param_2,uchar param_3);   /* game binding -> D2Win_10190, D2Win.dll ordinal 10190, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
int * D2Win_10098(uint *param_1);   /* game binding -> D2Win.dll ordinal 10098, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
int * __thiscall D2Win_10204(void *this,int param_1,int param_2,int param_3,uint param_4,int *param_5,int *param_6, uint32_t param_s8,uint32_t param_s9);   /* game binding -> D2Win.dll ordinal 10204, sigmaRE/5_game_source/D2Win/Src/_unattributed/between_Src_D2WinTextBox_and_Src_D2WinArchive.cpp */
void __fastcall D2Win_10041(int *param_1);   /* game binding -> D2Win.dll ordinal 10041, sigmaRE/5_game_source/D2Win/_unattributed/before_Src_D2WinTextBox.cpp */
void __fastcall D2Win_10020(int *param_1,void *param_2);   /* game binding -> D2Win.dll ordinal 10020, sigmaRE/5_game_source/D2Win/_unattributed/before_Src_D2WinTextBox.cpp */
uint __fastcall D2Win_10000(int *param_1,void *param_2,int param_3,uint param_4,int param_5);   /* game binding -> D2Win.dll ordinal 10000, sigmaRE/5_game_source/D2Win/_unattributed/before_Src_D2WinTextBox.cpp */
uint * __fastcall D2Win_10068(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6, uint param_7,int param_8,uint param_9,uint32_t param_s8,uint32_t param_s9);   /* game binding -> D2Win.dll ordinal 10068, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
void __fastcall D2Win_10155(int *param_1,uint32_t param_s1);   /* game binding -> D2Win.dll ordinal 10155, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
uint __fastcall D2Win_10003(int *param_1);   /* game binding -> D2Win.dll ordinal 10003, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
void __fastcall D2Win_10097(int *param_1,int param_2);   /* game binding -> D2Win.dll ordinal 10097, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
void __fastcall D2Win_10192(int *param_1,int param_2,void *param_3,int param_4);   /* game binding -> D2Win.dll ordinal 10192, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
void D2Win_10187(void);   /* game binding -> D2Win.dll ordinal 10187, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
void __fastcall D2Win_10013(void *param_1,uint param_2,int param_3,uint32_t param_s2,uint32_t param_s3, uint32_t param_s4);   /* game binding -> D2Win.dll ordinal 10013, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
uint D2Win_10050(uint *param_1);   /* game binding -> D2Win.dll +0x18490, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
uint32_t * GetPtr_sub_6f8e7e60(void);   /* game binding -> sub_6f8e7e60, D2Win.dll +0x7e60, sigmaRE/5_game_source/D2Win/_unattributed/before_Src_D2WinTextBox.cpp */
uint32_t * GetPtr_D2Win_DAT_6f9014a0(void);   /* game binding -> DAT_6f9014a0, D2Win.dll +0x214a0, sigmaRE/5_game_source/D2Win/include/globals.h */

/* ---- _unattributed/between_functions_D2ServerFunctions_and_events_SkillEvents_unit29_1028e780.cpp ---- */
uint32_t * GetPtr_D2Win_DAT_6f9014b0(void);   /* game binding -> DAT_6f9014b0, D2Win.dll +0x214b0, sigmaRE/5_game_source/D2Win/include/globals.h */
int * UI_npcmenu_6faf6150(void);   /* game binding -> D2Client.dll +0x46150, sigmaRE/5_game_source/D2Client/UI/npcmenu.cpp */
int * UNIT_Monster_6fb01a80(void);   /* game binding -> D2Client.dll +0x51a80, sigmaRE/5_game_source/D2Client/UNIT/Monster.cpp */
uint32_t * GetPtr_UNIT_CUnit_6fb56070(void);   /* game binding -> UNIT_CUnit_6fb56070, D2Client.dll +0xa6070, sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
uint UNIT_CUnit_6fb568e0(int *param_1,uint param_2,uint param_3,int param_4);   /* game binding -> D2Client.dll +0xa68e0, sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
int sub_6fac6020(void);   /* game binding -> D2Client.dll +0x16020, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
void UI_inv_6fb414f0(void *param_1,int param_2,uint32_t param_s3);   /* game binding -> D2Client.dll +0x914f0, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
uint32_t * GetPtr_sub_6fb04e10(void);   /* game binding -> sub_6fb04e10, D2Client.dll +0x54e10, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
uint32_t * GetPtr_sub_6fb046e0(void);   /* game binding -> sub_6fb046e0, D2Client.dll +0x546e0, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
uint __fastcall sub_6fad16a0(int param_1);   /* game binding -> D2Client.dll +0x216a0, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_CUnitEvent_and_UNIT_UnitSnd.cpp */
void UI_inv_6fb408c0(void);   /* game binding -> D2Client.dll +0x908c0, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
ulonglong __fastcall sub_6fb72790(uint param_1,uint param_2,int param_3);   /* game binding -> D2Client.dll +0xc2790, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
uint __fastcall sub_6fab1630(int *param_1);   /* game binding -> D2Client.dll +0x1630, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fab1000.cpp */
uint __fastcall sub_6fab1660(int *param_1);   /* game binding -> D2Client.dll +0x1660, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fab1000.cpp */
void UI_automap_6fb0fb50(void);   /* game binding -> D2Client.dll +0x5fb50, sigmaRE/5_game_source/D2Client/UI/automap.cpp */
int __fastcall UI_automap_6fb108d0(int param_1);   /* game binding -> D2Client.dll +0x608d0, sigmaRE/5_game_source/D2Client/UI/automap.cpp */
void sub_6fb11d00(int param_1,uint32_t param_s2);   /* game binding -> D2Client.dll +0x61d00, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
uint32_t * GetPtr_sub_6fb4f950(void);   /* game binding -> sub_6fb4f950, D2Client.dll +0x9f950, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
void sub_6fb4f7b0(int param_1,int param_2);   /* game binding -> D2Client.dll +0x9f7b0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbbb228(void);   /* game binding -> DAT_6fbbb228, D2Client.dll +0x10b228, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbbb210(void);   /* game binding -> DAT_6fbbb210, D2Client.dll +0x10b210, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbbb214(void);   /* game binding -> DAT_6fbbb214, D2Client.dll +0x10b214, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbbb21c(void);   /* game binding -> DAT_6fbbb21c, D2Client.dll +0x10b21c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_sub_6fb4be70(void);   /* game binding -> sub_6fb4be70, D2Client.dll +0x9be70, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
void sub_6fb2d850(uint32_t param_s1,uint32_t param_s2);   /* game binding -> D2Client.dll +0x7d850, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
uint32_t * GetPtr_D2Client_loc_6fb6e400(void);   /* game binding -> D2Client_loc_6fb6e400, D2Client.dll +0xbe400, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
uint __fastcall sub_6fad3f20(int param_1,uint param_2,uint param_3);   /* game binding -> D2Client.dll +0x23f20, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitSnd_and_UI_panel.cpp */
uint32_t * GetPtr_sub_6fb70450(void);   /* game binding -> sub_6fb70450, D2Client.dll +0xc0450, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
uint32_t * GetPtr_sub_6fb6e4c0(void);   /* game binding -> sub_6fb6e4c0, D2Client.dll +0xbe4c0, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
void sub_6fb47840(void);   /* game binding -> D2Client.dll +0x97840, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
void sub_6fb6e2e0(void);   /* game binding -> D2Client.dll +0xbe2e0, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
void sub_6fb6eaf0(void);   /* game binding -> D2Client.dll +0xbeaf0, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
uint SKILLS_Skills_6fb54d40(void);   /* game binding -> D2Client.dll +0xa4d40, sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
int sub_6fb54d60(void);   /* game binding -> D2Client.dll +0xa4d60, sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
uint32_t * GetPtr_sub_6fac43e0(void);   /* game binding -> sub_6fac43e0, D2Client.dll +0x143e0, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
uint32_t * GetPtr_sub_6fac4910(void);   /* game binding -> sub_6fac4910, D2Client.dll +0x14910, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
uint32_t * GetPtr_sub_6fac49a0(void);   /* game binding -> sub_6fac49a0, D2Client.dll +0x149a0, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
uint32_t * GetPtr_sub_6fb4d850(void);   /* game binding -> sub_6fb4d850, D2Client.dll +0x9d850, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
uint32_t * GetPtr_UNIT_Player_6facb7f0(void);   /* game binding -> UNIT_Player_6facb7f0, D2Client.dll +0x1b7f0, sigmaRE/5_game_source/D2Client/UNIT/Player.cpp */
uint32_t * GetPtr_sub_6fb01ae0(void);   /* game binding -> sub_6fb01ae0, D2Client.dll +0x51ae0, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
uint32_t * GetPtr_sub_6fb6f5f0(void);   /* game binding -> sub_6fb6f5f0, D2Client.dll +0xbf5f0, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
uint32_t * GetPtr_UI_npcmenu_6faf6230(void);   /* game binding -> UI_npcmenu_6faf6230, D2Client.dll +0x46230, sigmaRE/5_game_source/D2Client/UI/npcmenu.cpp */
uint32_t * GetPtr_sub_6fb05f10(void);   /* game binding -> sub_6fb05f10, D2Client.dll +0x55f10, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
uint32_t * GetPtr_sub_6fb05fb0(void);   /* game binding -> sub_6fb05fb0, D2Client.dll +0x55fb0, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
uint32_t * GetPtr_UI_inv_6fb3d430(void);   /* game binding -> UI_inv_6fb3d430, D2Client.dll +0x8d430, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
uint32_t * GetPtr_UI_inv_6fb41360(void);   /* game binding -> UI_inv_6fb41360, D2Client.dll +0x91360, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
void __cdecl UI_inv_6fb40cb0(void *param_1,void *param_2,void *param_3);   /* game binding -> D2Client.dll +0x90cb0, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
void sub_6fb739e0(uint32_t param_s1);   /* game binding -> D2Client.dll +0xc39e0, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
void UI_inv_6fb3cfb0(int param_1);   /* game binding -> D2Client.dll +0x8cfb0, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
void UI_inv_6fb3f260(void);   /* game binding -> D2Client.dll +0x8f260, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
void UI_inv_6fb42440(void);   /* game binding -> D2Client.dll +0x92440, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
void UI_inv_6fb453b0(void);   /* game binding -> D2Client.dll +0x953b0, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
void UI_inv_6fb458a0(int *param_1);   /* game binding -> D2Client.dll +0x958a0, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
void sub_6fb45c60(void);   /* game binding -> D2Client.dll +0x95c60, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
void sub_6fb20140(void);   /* game binding -> D2Client.dll +0x70140, sigmaRE/5_game_source/D2Client/_unattributed/between_ENGINE_GfxUtil_and_UNIT_PlrSkills.cpp */
void sub_6fb15230(void);   /* game binding -> D2Client.dll +0x65230, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
void sub_6fac25a0(void);   /* game binding -> D2Client.dll +0x125a0, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
void UNIT_CUnit_6fb5aec0(void);   /* game binding -> D2Client.dll +0xaaec0, sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbaada4(void);   /* game binding -> DAT_6fbaada4, D2Client.dll +0xfada4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbaadac(void);   /* game binding -> DAT_6fbaadac, D2Client.dll +0xfadac, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbaad94(void);   /* game binding -> DAT_6fbaad94, D2Client.dll +0xfad94, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbaadd0(void);   /* game binding -> DAT_6fbaadd0, D2Client.dll +0xfadd0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcfed8(void);   /* game binding -> DAT_6fbcfed8, D2Client.dll +0x11fed8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbbb35c(void);   /* game binding -> DAT_6fbbb35c, D2Client.dll +0x10b35c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbca7c8(void);   /* game binding -> DAT_6fbca7c8, D2Client.dll +0x11a7c8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbc64(void);   /* game binding -> DAT_6fbcbc64, D2Client.dll +0x11bc64, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbc70(void);   /* game binding -> DAT_6fbcbc70, D2Client.dll +0x11bc70, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbc74(void);   /* game binding -> DAT_6fbcbc74, D2Client.dll +0x11bc74, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbc78(void);   /* game binding -> DAT_6fbcbc78, D2Client.dll +0x11bc78, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbc84(void);   /* game binding -> DAT_6fbcbc84, D2Client.dll +0x11bc84, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbeb4(void);   /* game binding -> DAT_6fbcbeb4, D2Client.dll +0x11beb4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbeb8(void);   /* game binding -> DAT_6fbcbeb8, D2Client.dll +0x11beb8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbebc(void);   /* game binding -> DAT_6fbcbebc, D2Client.dll +0x11bebc, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbec0(void);   /* game binding -> DAT_6fbcbec0, D2Client.dll +0x11bec0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbec4(void);   /* game binding -> DAT_6fbcbec4, D2Client.dll +0x11bec4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbec8(void);   /* game binding -> DAT_6fbcbec8, D2Client.dll +0x11bec8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbecc(void);   /* game binding -> DAT_6fbcbecc, D2Client.dll +0x11becc, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbed0(void);   /* game binding -> DAT_6fbcbed0, D2Client.dll +0x11bed0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbca784(void);   /* game binding -> DAT_6fbca784, D2Client.dll +0x11a784, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc300(void);   /* game binding -> DAT_6fbcc300, D2Client.dll +0x11c300, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc304_10290ef0(void);   /* game binding -> DAT_6fbcc304, D2Client.dll +0x11c304, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbe5c(void);   /* game binding -> DAT_6fbcbe5c, D2Client.dll +0x11be5c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbe60(void);   /* game binding -> DAT_6fbcbe60, D2Client.dll +0x11be60, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbe64(void);   /* game binding -> DAT_6fbcbe64, D2Client.dll +0x11be64, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbe68(void);   /* game binding -> DAT_6fbcbe68, D2Client.dll +0x11be68, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbe6c(void);   /* game binding -> DAT_6fbcbe6c, D2Client.dll +0x11be6c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbe74(void);   /* game binding -> DAT_6fbcbe74, D2Client.dll +0x11be74, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbe78(void);   /* game binding -> DAT_6fbcbe78, D2Client.dll +0x11be78, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbe7c(void);   /* game binding -> DAT_6fbcbe7c, D2Client.dll +0x11be7c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbe80(void);   /* game binding -> DAT_6fbcbe80, D2Client.dll +0x11be80, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbe88(void);   /* game binding -> DAT_6fbcbe88, D2Client.dll +0x11be88, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbedc(void);   /* game binding -> DAT_6fbcbedc, D2Client.dll +0x11bedc, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbe84(void);   /* game binding -> DAT_6fbcbe84, D2Client.dll +0x11be84, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbe8c(void);   /* game binding -> DAT_6fbcbe8c, D2Client.dll +0x11be8c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbe94(void);   /* game binding -> DAT_6fbcbe94, D2Client.dll +0x11be94, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbee0(void);   /* game binding -> DAT_6fbcbee0, D2Client.dll +0x11bee0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbeec(void);   /* game binding -> DAT_6fbcbeec, D2Client.dll +0x11beec, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbc4c(void);   /* game binding -> DAT_6fbcbc4c, D2Client.dll +0x11bc4c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbc54(void);   /* game binding -> DAT_6fbcbc54, D2Client.dll +0x11bc54, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbc58(void);   /* game binding -> DAT_6fbcbc58, D2Client.dll +0x11bc58, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbc5c(void);   /* game binding -> DAT_6fbcbc5c, D2Client.dll +0x11bc5c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbc60(void);   /* game binding -> DAT_6fbcbc60, D2Client.dll +0x11bc60, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbcb4(void);   /* game binding -> DAT_6fbcbcb4, D2Client.dll +0x11bcb4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbcc8(void);   /* game binding -> DAT_6fbcbcc8, D2Client.dll +0x11bcc8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbcdc(void);   /* game binding -> DAT_6fbcbcdc, D2Client.dll +0x11bcdc, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbcf0(void);   /* game binding -> DAT_6fbcbcf0, D2Client.dll +0x11bcf0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbd04(void);   /* game binding -> DAT_6fbcbd04, D2Client.dll +0x11bd04, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbd18(void);   /* game binding -> DAT_6fbcbd18, D2Client.dll +0x11bd18, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbd2c(void);   /* game binding -> DAT_6fbcbd2c, D2Client.dll +0x11bd2c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbd40(void);   /* game binding -> DAT_6fbcbd40, D2Client.dll +0x11bd40, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbd54(void);   /* game binding -> DAT_6fbcbd54, D2Client.dll +0x11bd54, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbd68(void);   /* game binding -> DAT_6fbcbd68, D2Client.dll +0x11bd68, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc77ec(void);   /* game binding -> DAT_6fbc77ec, D2Client.dll +0x1177ec, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc77fc(void);   /* game binding -> DAT_6fbc77fc, D2Client.dll +0x1177fc, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_sub_6fac47a0(void);   /* game binding -> sub_6fac47a0, D2Client.dll +0x147a0, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
uint32_t * GetPtr_sub_6fb5ce20(void);   /* game binding -> sub_6fb5ce20, D2Client.dll +0xace20, sigmaRE/5_game_source/D2Client/_unattributed/between_GAME_SCmd_and_UNIT_Missile.cpp */
uint32_t * GetPtr_SKILLS_SkillsBar_6fb76aa0(void);   /* game binding -> SKILLS_SkillsBar_6fb76aa0, D2Client.dll +0xc6aa0, sigmaRE/5_game_source/D2Client/SKILLS/SkillsBar.cpp */
uint32_t * GetPtr_SKILLS_SkillsBar_6fb765b0(void);   /* game binding -> SKILLS_SkillsBar_6fb765b0, D2Client.dll +0xc65b0, sigmaRE/5_game_source/D2Client/SKILLS/SkillsBar.cpp */
uint32_t * GetPtr_SKILLS_SkillsBar_6fb76060(void);   /* game binding -> SKILLS_SkillsBar_6fb76060, D2Client.dll +0xc6060, sigmaRE/5_game_source/D2Client/SKILLS/SkillsBar.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fb515c0(void);   /* game binding -> SKILLS_Skills_6fb515c0, D2Client.dll +0xa15c0, sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
uint32_t * GetPtr_sub_6fb69a80(void);   /* game binding -> sub_6fb69a80, D2Client.dll +0xb9a80, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
int * __fastcall UNIT_Missile_6fb630f0(uint *param_1);   /* game binding -> D2Client.dll +0xb30f0, sigmaRE/5_game_source/D2Client/UNIT/Missile.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbc55b8(void);   /* game binding -> DAT_6fbc55b8, D2Client.dll +0x1155b8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb84390(void);   /* game binding -> DAT_6fb84390, D2Client.dll +0xd4390, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb84290(void);   /* game binding -> DAT_6fb84290, D2Client.dll +0xd4290, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb8bc48(void);   /* game binding -> DAT_6fb8bc48, D2Client.dll +0xdbc48, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb8bc4c(void);   /* game binding -> DAT_6fb8bc4c, D2Client.dll +0xdbc4c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb90eb8(void);   /* game binding -> DAT_6fb90eb8, D2Client.dll +0xe0eb8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb90ebc(void);   /* game binding -> DAT_6fb90ebc, D2Client.dll +0xe0ebc, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb90ea4(void);   /* game binding -> DAT_6fb90ea4, D2Client.dll +0xe0ea4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb90ea8(void);   /* game binding -> DAT_6fb90ea8, D2Client.dll +0xe0ea8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb90eac(void);   /* game binding -> DAT_6fb90eac, D2Client.dll +0xe0eac, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb90eb0(void);   /* game binding -> DAT_6fb90eb0, D2Client.dll +0xe0eb0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb90eb4(void);   /* game binding -> DAT_6fb90eb4, D2Client.dll +0xe0eb4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb90eb8_10293390(void);   /* game binding -> DAT_6fb90eb8, D2Client.dll +0xe0eb8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb90ebc_10293440(void);   /* game binding -> DAT_6fb90ebc, D2Client.dll +0xe0ebc, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcb828(void);   /* game binding -> DAT_6fbcb828, D2Client.dll +0x11b828, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcb824(void);   /* game binding -> DAT_6fbcb824, D2Client.dll +0x11b824, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcb834(void);   /* game binding -> DAT_6fbcb834, D2Client.dll +0x11b834, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc995c(void);   /* game binding -> DAT_6fbc995c, D2Client.dll +0x11995c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc9960(void);   /* game binding -> DAT_6fbc9960, D2Client.dll +0x119960, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbbb2a4(void);   /* game binding -> DAT_6fbbb2a4, D2Client.dll +0x10b2a4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbbb430(void);   /* game binding -> DAT_6fbbb430, D2Client.dll +0x10b430, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbaada8(void);   /* game binding -> DAT_6fbaada8, D2Client.dll +0xfada8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc1b0(void);   /* game binding -> DAT_6fbcc1b0, D2Client.dll +0x11c1b0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fba16b0(void);   /* game binding -> DAT_6fba16b0, D2Client.dll +0xf16b0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc1f8(void);   /* game binding -> DAT_6fbcc1f8, D2Client.dll +0x11c1f8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbf00(void);   /* game binding -> DAT_6fbcbf00, D2Client.dll +0x11bf00, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbbb9dc(void);   /* game binding -> DAT_6fbbb9dc, D2Client.dll +0x10b9dc, sigmaRE/5_game_source/D2Client/include/globals.h */
void WARDEN_WardenClient_6fb3afd0(int *param_1,int *param_2);   /* game binding -> D2Client.dll +0x8afd0, sigmaRE/5_game_source/D2Client/WARDEN/WardenClient.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbcbf78(void);   /* game binding -> DAT_6fbcbf78, D2Client.dll +0x11bf78, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc38f4(void);   /* game binding -> DAT_6fbc38f4, D2Client.dll +0x1138f4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbff8(void);   /* game binding -> DAT_6fbcbff8, D2Client.dll +0x11bff8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc1c4(void);   /* game binding -> DAT_6fbcc1c4, D2Client.dll +0x11c1c4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_sub_6fb6c720(void);   /* game binding -> sub_6fb6c720, D2Client.dll +0xbc720, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
uint32_t * GetPtr_UI_automap_6fb101a0(void);   /* game binding -> UI_automap_6fb101a0, D2Client.dll +0x601a0, sigmaRE/5_game_source/D2Client/UI/automap.cpp */
uint32_t * GetPtr_UI_automap_6fb11490(void);   /* game binding -> UI_automap_6fb11490, D2Client.dll +0x61490, sigmaRE/5_game_source/D2Client/UI/automap.cpp */
uint32_t * GetPtr_D2Client_DAT_6fba23e8(void);   /* game binding -> DAT_6fba23e8, D2Client.dll +0xf23e8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc334(void);   /* game binding -> DAT_6fbcc334, D2Client.dll +0x11c334, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbaad5c(void);   /* game binding -> DAT_6fbaad5c, D2Client.dll +0xfad5c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbaad60(void);   /* game binding -> DAT_6fbaad60, D2Client.dll +0xfad60, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbaad64(void);   /* game binding -> DAT_6fbaad64, D2Client.dll +0xfad64, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbaad68(void);   /* game binding -> DAT_6fbaad68, D2Client.dll +0xfad68, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbbb0(void);   /* game binding -> DAT_6fbcbbb0, D2Client.dll +0x11bbb0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fba3ba0(void);   /* game binding -> DAT_6fba3ba0, D2Client.dll +0xf3ba0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fba42f0(void);   /* game binding -> DAT_6fba42f0, D2Client.dll +0xf42f0, sigmaRE/5_game_source/D2Client/include/globals.h */
void sub_6faf8b20_10294910(void);   /* game binding -> sub_6faf8b20, D2Client.dll +0x48b20, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
uint sub_6faf5980(void);   /* game binding -> D2Client.dll +0x45980, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbc9763(void);   /* game binding -> DAT_6fbc9763, D2Client.dll +0x119763, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc3a80(void);   /* game binding -> DAT_6fbc3a80, D2Client.dll +0x113a80, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbba808(void);   /* game binding -> DAT_6fbba808, D2Client.dll +0x10a808, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc3aca(void);   /* game binding -> DAT_6fbc3aca, D2Client.dll +0x113aca, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc971d(void);   /* game binding -> DAT_6fbc971d, D2Client.dll +0x11971d, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc9721(void);   /* game binding -> DAT_6fbc9721, D2Client.dll +0x119721, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_sub_6faf6880(void);   /* game binding -> sub_6faf6880, D2Client.dll +0x46880, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
ulonglong sub_6faf8150(void);   /* game binding -> D2Client.dll +0x48150, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
uint sub_6fb2e6e0(void);   /* game binding -> D2Client.dll +0x7e6e0, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
void SKILLS_Skills_6fb53d20(void);   /* game binding -> D2Client.dll +0xa3d20, sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
uint32_t * GetPtr_D2Client_loc_6faf8380(void);   /* game binding -> D2Client_loc_6faf8380, D2Client.dll +0x48380, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
uint32_t * GetPtr_D2Client_loc_6faf8350(void);   /* game binding -> D2Client_loc_6faf8350, D2Client.dll +0x48350, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
uint32_t * GetPtr_D2Client_loc_6faf8650(void);   /* game binding -> D2Client_loc_6faf8650, D2Client.dll +0x48650, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
uint32_t * GetPtr_D2Client_loc_6faf9250(void);   /* game binding -> D2Client_loc_6faf9250, D2Client.dll +0x49250, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
uint32_t * GetPtr_D2Client_loc_6fafabe0(void);   /* game binding -> D2Client_loc_6fafabe0, D2Client.dll +0x4abe0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
uint32_t * GetPtr_D2Client_loc_6faf91e0(void);   /* game binding -> D2Client_loc_6faf91e0, D2Client.dll +0x491e0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
uint32_t * GetPtr_sub_6faf9440(void);   /* game binding -> sub_6faf9440, D2Client.dll +0x49440, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
uint32_t * GetPtr_D2Client_loc_6faf6af0(void);   /* game binding -> D2Client_loc_6faf6af0, D2Client.dll +0x46af0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
uint32_t * GetPtr_D2Client_loc_6faf9130(void);   /* game binding -> D2Client_loc_6faf9130, D2Client.dll +0x49130, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
uint32_t * GetPtr_D2Client_loc_6faf6d10(void);   /* game binding -> D2Client_loc_6faf6d10, D2Client.dll +0x46d10, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
uint32_t * GetPtr_D2Client_loc_6fafa2f0(void);   /* game binding -> D2Client_loc_6fafa2f0, D2Client.dll +0x4a2f0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
uint32_t * GetPtr_D2Client_loc_6fafaee0(void);   /* game binding -> D2Client_loc_6fafaee0, D2Client.dll +0x4aee0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
uint32_t * GetPtr_D2Client_loc_6faf8750(void);   /* game binding -> D2Client_loc_6faf8750, D2Client.dll +0x48750, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
uint32_t * GetPtr_D2Client_loc_6faf87b0(void);   /* game binding -> D2Client_loc_6faf87b0, D2Client.dll +0x487b0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
uint32_t * GetPtr_D2Client_loc_6faf8810(void);   /* game binding -> D2Client_loc_6faf8810, D2Client.dll +0x48810, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fb536f0(void);   /* game binding -> SKILLS_Skills_6fb536f0, D2Client.dll +0xa36f0, sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
uint32_t * GetPtr_D2Client_DAT_6fba3ee5(void);   /* game binding -> DAT_6fba3ee5, D2Client.dll +0xf3ee5, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_sub_6fb2de50(void);   /* game binding -> sub_6fb2de50, D2Client.dll +0x7de50, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
uint32_t * GetPtr_UI_inv_6fb3d600(void);   /* game binding -> UI_inv_6fb3d600, D2Client.dll +0x8d600, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbbb288(void);   /* game binding -> DAT_6fbbb288, D2Client.dll +0x10b288, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbbb2d0(void);   /* game binding -> DAT_6fbbb2d0, D2Client.dll +0x10b2d0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbbb2f8(void);   /* game binding -> DAT_6fbbb2f8, D2Client.dll +0x10b2f8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbbb3b0(void);   /* game binding -> DAT_6fbbb3b0, D2Client.dll +0x10b3b0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbbb3c8(void);   /* game binding -> DAT_6fbbb3c8, D2Client.dll +0x10b3c8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbbb3e0(void);   /* game binding -> DAT_6fbbb3e0, D2Client.dll +0x10b3e0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbd94(void);   /* game binding -> DAT_6fbcbd94, D2Client.dll +0x11bd94, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_loc_6fb4e180(void);   /* game binding -> D2Client_loc_6fb4e180, D2Client.dll +0x9e180, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbcb9a0(void);   /* game binding -> DAT_6fbcb9a0, D2Client.dll +0x11b9a0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcb9a4(void);   /* game binding -> DAT_6fbcb9a4, D2Client.dll +0x11b9a4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcb864(void);   /* game binding -> DAT_6fbcb864, D2Client.dll +0x11b864, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbc28(void);   /* game binding -> DAT_6fbcbc28, D2Client.dll +0x11bc28, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbc2c(void);   /* game binding -> DAT_6fbcbc2c, D2Client.dll +0x11bc2c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbc34(void);   /* game binding -> DAT_6fbcbc34, D2Client.dll +0x11bc34, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbc3c(void);   /* game binding -> DAT_6fbcbc3c, D2Client.dll +0x11bc3c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbc48(void);   /* game binding -> DAT_6fbcbc48, D2Client.dll +0x11bc48, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc97a8(void);   /* game binding -> DAT_6fbc97a8, D2Client.dll +0x1197a8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc9804(void);   /* game binding -> DAT_6fbc9804, D2Client.dll +0x119804, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc2ac(void);   /* game binding -> DAT_6fbcc2ac, D2Client.dll +0x11c2ac, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc9810(void);   /* game binding -> DAT_6fbc9810, D2Client.dll +0x119810, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fba16b0_102969a0(void);   /* game binding -> DAT_6fba16b0, D2Client.dll +0xf16b0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc278(void);   /* game binding -> DAT_6fbcc278, D2Client.dll +0x11c278, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc27c(void);   /* game binding -> DAT_6fbcc27c, D2Client.dll +0x11c27c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc3ace(void);   /* game binding -> DAT_6fbc3ace, D2Client.dll +0x113ace, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc971d_10296c60(void);   /* game binding -> DAT_6fbc971d, D2Client.dll +0x11971d, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc3ac6(void);   /* game binding -> DAT_6fbc3ac6, D2Client.dll +0x113ac6, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc3af4(void);   /* game binding -> DAT_6fbc3af4, D2Client.dll +0x113af4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc3afa(void);   /* game binding -> DAT_6fbc3afa, D2Client.dll +0x113afa, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc3afb(void);   /* game binding -> DAT_6fbc3afb, D2Client.dll +0x113afb, sigmaRE/5_game_source/D2Client/include/globals.h */
int * sub_6fb2c5c0(void);   /* game binding -> D2Client.dll +0x7c5c0, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbcc2fc(void);   /* game binding -> DAT_6fbcc2fc, D2Client.dll +0x11c2fc, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc3aba(void);   /* game binding -> DAT_6fbc3aba, D2Client.dll +0x113aba, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc3a7c(void);   /* game binding -> DAT_6fbc3a7c, D2Client.dll +0x113a7c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbd3448(void);   /* game binding -> DAT_6fbd3448, D2Client.dll +0x123448, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbc04(void);   /* game binding -> DAT_6fbcbc04, D2Client.dll +0x11bc04, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc3aec(void);   /* game binding -> DAT_6fbc3aec, D2Client.dll +0x113aec, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb91388(void);   /* game binding -> DAT_6fb91388, D2Client.dll +0xe1388, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_sub_6faeccc0(void);   /* game binding -> sub_6faeccc0, D2Client.dll +0x3ccc0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbc973b(void);   /* game binding -> DAT_6fbc973b, D2Client.dll +0x11973b, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc97ac(void);   /* game binding -> DAT_6fbc97ac, D2Client.dll +0x1197ac, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc97b0(void);   /* game binding -> DAT_6fbc97b0, D2Client.dll +0x1197b0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_UNIT_Item_6fb31ce0(void);   /* game binding -> UNIT_Item_6fb31ce0, D2Client.dll +0x81ce0, sigmaRE/5_game_source/D2Client/UNIT/Item.cpp */
uint32_t * GetPtr_UNIT_Item_6fb31e40(void);   /* game binding -> UNIT_Item_6fb31e40, D2Client.dll +0x81e40, sigmaRE/5_game_source/D2Client/UNIT/Item.cpp */
uint32_t * GetPtr_UNIT_UnitSnd_6fad23d0(void);   /* game binding -> UNIT_UnitSnd_6fad23d0, D2Client.dll +0x223d0, sigmaRE/5_game_source/D2Client/UNIT/UnitSnd.cpp */
uint32_t * GetPtr_UNIT_UnitSnd_6fad2430(void);   /* game binding -> UNIT_UnitSnd_6fad2430, D2Client.dll +0x22430, sigmaRE/5_game_source/D2Client/UNIT/UnitSnd.cpp */
uint32_t * GetPtr_UNIT_UnitSnd_6fad2490(void);   /* game binding -> UNIT_UnitSnd_6fad2490, D2Client.dll +0x22490, sigmaRE/5_game_source/D2Client/UNIT/UnitSnd.cpp */
uint32_t * GetPtr_sub_6fad2a70(void);   /* game binding -> sub_6fad2a70, D2Client.dll +0x22a70, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitSnd_and_UI_panel.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbc975b(void);   /* game binding -> DAT_6fbc975b, D2Client.dll +0x11975b, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbc08(void);   /* game binding -> DAT_6fbcbc08, D2Client.dll +0x11bc08, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbc04_10297d10(void);   /* game binding -> DAT_6fbcbc04, D2Client.dll +0x11bc04, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbacdd1(void);   /* game binding -> DAT_6fbacdd1, D2Client.dll +0xfcdd1, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbbc4(void);   /* game binding -> DAT_6fbcbbc4, D2Client.dll +0x11bbc4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbbfc(void);   /* game binding -> DAT_6fbcbbfc, D2Client.dll +0x11bbfc, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbc38(void);   /* game binding -> DAT_6fbcbc38, D2Client.dll +0x11bc38, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbc14(void);   /* game binding -> DAT_6fbcbc14, D2Client.dll +0x11bc14, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbc94(void);   /* game binding -> DAT_6fbcbc94, D2Client.dll +0x11bc94, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbe64_102981e0(void);   /* game binding -> DAT_6fbcbe64, D2Client.dll +0x11be64, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbe74_10298290(void);   /* game binding -> DAT_6fbcbe74, D2Client.dll +0x11be74, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc2cc(void);   /* game binding -> DAT_6fbcc2cc, D2Client.dll +0x11c2cc, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc9854(void);   /* game binding -> DAT_6fbc9854, D2Client.dll +0x119854, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc3bc(void);   /* game binding -> DAT_6fbcc3bc, D2Client.dll +0x11c3bc, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc5591(void);   /* game binding -> DAT_6fbc5591, D2Client.dll +0x115591, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc3ec(void);   /* game binding -> DAT_6fbcc3ec, D2Client.dll +0x11c3ec, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc2f0(void);   /* game binding -> DAT_6fbcc2f0, D2Client.dll +0x11c2f0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcb980(void);   /* game binding -> DAT_6fbcb980, D2Client.dll +0x11b980, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcec80(void);   /* game binding -> DAT_6fbcec80, D2Client.dll +0x11ec80, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_loc_6fb5a8b3(void);   /* game binding -> D2Client_loc_6fb5a8b3, D2Client.dll +0xaa8b3, sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
uint32_t * GetPtr_sub_6faf6ee0(void);   /* game binding -> sub_6faf6ee0, D2Client.dll +0x46ee0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
uint32_t * GetPtr_D2Client_loc_6fad8260(void);   /* game binding -> D2Client_loc_6fad8260, D2Client.dll +0x28260, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitSnd_and_UI_panel.cpp */
uint32_t * GetPtr_sub_6fb48b60(void);   /* game binding -> sub_6fb48b60, D2Client.dll +0x98b60, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
uint32_t * GetPtr_sub_6fac4a10(void);   /* game binding -> sub_6fac4a10, D2Client.dll +0x14a10, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
uint32_t * GetPtr_sub_6facbde0(void);   /* game binding -> sub_6facbde0, D2Client.dll +0x1bde0, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_Player_and_UNIT_CUnitEvent.cpp */
uint32_t * GetPtr_D2Client_loc_6fb4e180_10298ce0(void);   /* game binding -> D2Client_loc_6fb4e180, D2Client.dll +0x9e180, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
uint32_t * GetPtr_D2Client_loc_6fb273a0(void);   /* game binding -> D2Client_loc_6fb273a0, D2Client.dll +0x773a0, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
uint32_t * GetPtr_UNIT_CUnit_6fb55d90(void);   /* game binding -> UNIT_CUnit_6fb55d90, D2Client.dll +0xa5d90, sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
uint32_t * GetPtr_sub_6fb060b0(void);   /* game binding -> sub_6fb060b0, D2Client.dll +0x560b0, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
uint32_t * GetPtr_D2Client_loc_6fb57630(void);   /* game binding -> D2Client_loc_6fb57630, D2Client.dll +0xa7630, sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
uint32_t * GetPtr_UNIT_Monster_6faffd90(void);   /* game binding -> UNIT_Monster_6faffd90, D2Client.dll +0x4fd90, sigmaRE/5_game_source/D2Client/UNIT/Monster.cpp */
uint32_t * GetPtr_sub_6fac47a0_10299100(void);   /* game binding -> sub_6fac47a0, D2Client.dll +0x147a0, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
uint32_t * GetPtr_D2Client_loc_6fb20ec6(void);   /* game binding -> D2Client_loc_6fb20ec6, D2Client.dll +0x70ec6, sigmaRE/5_game_source/D2Client/_unattributed/between_ENGINE_GfxUtil_and_UNIT_PlrSkills.cpp */
uint32_t * GetPtr_D2Client_DAT_6fb90ec4(void);   /* game binding -> DAT_6fb90ec4, D2Client.dll +0xe0ec4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_UNIT_Monster_6fb01650(void);   /* game binding -> UNIT_Monster_6fb01650, D2Client.dll +0x51650, sigmaRE/5_game_source/D2Client/UNIT/Monster.cpp */
uint32_t * GetPtr_UNIT_Monster_6fb01390(void);   /* game binding -> UNIT_Monster_6fb01390, D2Client.dll +0x51390, sigmaRE/5_game_source/D2Client/UNIT/Monster.cpp */
uint32_t * GetPtr_sub_6fadb360(void);   /* game binding -> sub_6fadb360, D2Client.dll +0x2b360, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitMode_and_SKILLS_SkillsPal.cpp */
uint32_t * GetPtr_sub_6fadb420(void);   /* game binding -> sub_6fadb420, D2Client.dll +0x2b420, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitMode_and_SKILLS_SkillsPal.cpp */
uint32_t * GetPtr_D2Client_loc_6fac4d30(void);   /* game binding -> D2Client_loc_6fac4d30, D2Client.dll +0x14d30, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbcc4e0(void);   /* game binding -> DAT_6fbcc4e0, D2Client.dll +0x11c4e0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc4e8(void);   /* game binding -> DAT_6fbcc4e8, D2Client.dll +0x11c4e8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc4f8(void);   /* game binding -> DAT_6fbcc4f8, D2Client.dll +0x11c4f8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_sub_6fad17e0(void);   /* game binding -> sub_6fad17e0, D2Client.dll +0x217e0, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_CUnitEvent_and_UNIT_UnitSnd.cpp */
uint32_t * GetPtr_Sound_SoundHdr_6fb0d110(void);   /* game binding -> Sound_SoundHdr_6fb0d110, D2Client.dll +0x5d110, sigmaRE/5_game_source/D2Client/Sound/SoundHdr.cpp */
uint32_t * GetPtr_UNIT_CUnit_6fb56500(void);   /* game binding -> UNIT_CUnit_6fb56500, D2Client.dll +0xa6500, sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
uint32_t * GetPtr_UI_SkillDesc_6fadf0a0(void);   /* game binding -> UI_SkillDesc_6fadf0a0, D2Client.dll +0x2f0a0, sigmaRE/5_game_source/D2Client/UI/SkillDesc.cpp */
void UI_SkillDesc_6fadd3c0 (int param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6, uint32_t param_s7);   /* game binding -> D2Client.dll +0x2d3c0, sigmaRE/5_game_source/D2Client/UI/SkillDesc.cpp */
uint32_t * GetPtr_UI_SkillDesc_6fae0b40(void);   /* game binding -> UI_SkillDesc_6fae0b40, D2Client.dll +0x30b40, sigmaRE/5_game_source/D2Client/UI/SkillDesc.cpp */
uint D2Common_10435_10299c60(uint param_1,uint param_2,uint param_3,uint param_4);   /* game binding -> D2Common_10435, D2Common.dll ordinal 10435, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
void __fastcall UI_SkillDesc_6fae3240 (void *param_1,int *param_2,int *param_3,uint *param_4,uint param_5,uint param_6, uint param_7,uint param_8,uint param_9);   /* game binding -> D2Client.dll +0x33240, sigmaRE/5_game_source/D2Client/UI/SkillDesc.cpp */
void UI_SkillDesc_6fae0e30(uint param_1,int *param_2,int *param_3,uint *param_4,uint32_t param_s5);   /* game binding -> D2Client.dll +0x30e30, sigmaRE/5_game_source/D2Client/UI/SkillDesc.cpp */
uint32_t * GetPtr_UI_SkillDesc_6fade140(void);   /* game binding -> UI_SkillDesc_6fade140, D2Client.dll +0x2e140, sigmaRE/5_game_source/D2Client/UI/SkillDesc.cpp */
uint32_t * GetPtr_UI_SkillDesc_6fade190(void);   /* game binding -> UI_SkillDesc_6fade190, D2Client.dll +0x2e190, sigmaRE/5_game_source/D2Client/UI/SkillDesc.cpp */
uint32_t * GetPtr_sub_6fadc190(void);   /* game binding -> sub_6fadc190, D2Client.dll +0x2c190, sigmaRE/5_game_source/D2Client/_unattributed/between_SKILLS_SkillsPal_and_UI_SkillDesc.cpp */
uint32_t * GetPtr_sub_6fadc230(void);   /* game binding -> sub_6fadc230, D2Client.dll +0x2c230, sigmaRE/5_game_source/D2Client/_unattributed/between_SKILLS_SkillsPal_and_UI_SkillDesc.cpp */
uint UI_SkillDesc_6fadf980(uint param_1,uint param_2,int *param_3,uint *param_4);   /* game binding -> D2Client.dll +0x2f980, sigmaRE/5_game_source/D2Client/UI/SkillDesc.cpp */

/* ---- _unattributed/between_functions_D2ServerFunctions_and_events_SkillEvents_unit29_10299fe0.cpp ---- */
int UI_SkillDesc_6fadfb50(void);   /* game binding -> D2Client.dll +0x2fb50, sigmaRE/5_game_source/D2Client/UI/SkillDesc.cpp */
uint32_t * GetPtr_sub_6fb23760(void);   /* game binding -> sub_6fb23760, D2Client.dll +0x73760, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
int UI_inv_6fb3f710(byte param_1);   /* game binding -> D2Client.dll +0x8f710, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
uint32_t * GetPtr_UI_npcmenu_6faf60a0(void);   /* game binding -> UI_npcmenu_6faf60a0, D2Client.dll +0x460a0, sigmaRE/5_game_source/D2Client/UI/npcmenu.cpp */
uint32_t * GetPtr_sub_6fc57540(void);   /* game binding -> sub_6fc57540, D2Game.dll +0x37540, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
uint32_t * GetPtr_sub_6fc57260(void);   /* game binding -> sub_6fc57260, D2Game.dll +0x37260, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitEvent_and_PLAYER_Player.cpp */
uint * sub_6fc572c0_1029a300(int param_1);   /* game binding -> sub_6fc572c0, D2Game.dll +0x372c0, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitEvent_and_PLAYER_Player.cpp */
void SKILLS_Skills_6fb51860 (int *param_1,uchar *param_2,uint param_3,int param_4,uint param_5,int param_6, uint32_t param_s7,uint32_t param_s8);   /* game binding -> D2Client.dll +0xa1860, sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
uint32_t * GetPtr_sub_6fb77e30(void);   /* game binding -> sub_6fb77e30, D2Client.dll +0xc7e30, sigmaRE/5_game_source/D2Client/SKILLS/_unattributed/between_SKILLS_SkillsBar_and_SKILLS_SkillsNec.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fb50880(void);   /* game binding -> SKILLS_Skills_6fb50880, D2Client.dll +0xa0880, sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fb50750(void);   /* game binding -> SKILLS_Skills_6fb50750, D2Client.dll +0xa0750, sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
int sub_6fb5bf50(void);   /* game binding -> D2Client.dll +0xabf50, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_CUnit_and_GAME_SCmd.cpp */
void sub_6fad3200(int param_1,uint param_2);   /* game binding -> D2Client.dll +0x23200, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitSnd_and_UI_panel.cpp */
uint32_t * GetPtr_sub_6facd740(void);   /* game binding -> sub_6facd740, D2Client.dll +0x1d740, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_Player_and_UNIT_CUnitEvent.cpp */
uint32_t * GetPtr_sub_6f8f2940(void);   /* game binding -> sub_6f8f2940, D2Win.dll +0x12940, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
uint32_t * GetPtr_sub_6fb04e10_1029a7c0(void);   /* game binding -> sub_6fb04e10, D2Client.dll +0x54e10, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
uint32_t * GetPtr_sub_6fadb4c0(void);   /* game binding -> sub_6fadb4c0, D2Client.dll +0x2b4c0, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitMode_and_SKILLS_SkillsPal.cpp */
uint32_t * GetPtr_SKILLS_SkillsBar_6fb76450(void);   /* game binding -> SKILLS_SkillsBar_6fb76450, D2Client.dll +0xc6450, sigmaRE/5_game_source/D2Client/SKILLS/SkillsBar.cpp */
uint32_t * GetPtr_SKILLS_SkillsBar_6fb77290(void);   /* game binding -> SKILLS_SkillsBar_6fb77290, D2Client.dll +0xc7290, sigmaRE/5_game_source/D2Client/SKILLS/SkillsBar.cpp */
uint32_t * GetPtr_sub_6fb5c1b0(void);   /* game binding -> sub_6fb5c1b0, D2Client.dll +0xac1b0, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_CUnit_and_GAME_SCmd.cpp */
uint32_t * GetPtr_sub_6fb6e240(void);   /* game binding -> sub_6fb6e240, D2Client.dll +0xbe240, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fb54e20(void);   /* game binding -> SKILLS_Skills_6fb54e20, D2Client.dll +0xa4e20, sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
uint32_t * GetPtr_sub_6fabd810(void);   /* game binding -> sub_6fabd810, D2Client.dll +0xd810, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
uint32_t * GetPtr_PLAYER_PlrMsg_6fcec550(void);   /* game binding -> PLAYER_PlrMsg_6fcec550, D2Game.dll +0xcc550, sigmaRE/5_game_source/D2Game/PLAYER/PlrMsg.cpp */
uint32_t * GetPtr_sub_6fcaf070(void);   /* game binding -> sub_6fcaf070, D2Game.dll +0x8f070, sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Event_and_UNIT_sunitproxy.cpp */
uint Fog_10022(void);   /* game binding -> Fog.dll ordinal 10022, sigmaRE/5_game_source/Fog/Src/ErrorManager.cpp */
void __cdecl Fog_10024(char *szMsg,char *szFile,int nLine);   /* game binding -> Fog.dll ordinal 10024, sigmaRE/5_game_source/Fog/Src/ErrorManager.cpp */
uint * __fastcall Fog_10042(uint param_1,char *param_2,uint param_3,uint32_t param_s2);   /* game binding -> Fog.dll ordinal 10042, sigmaRE/5_game_source/Fog/Src/AsyncData.cpp */
uint Fog_10043(uint32_t param_s1,uint32_t param_s2);   /* game binding -> Fog.dll ordinal 10043, sigmaRE/5_game_source/Fog/Src/AsyncData.cpp */
void * __fastcall Fog_10045(void *pMemPool,int nSize,char *szFile,int nLine,int n0);   /* game binding -> Fog.dll ordinal 10045, sigmaRE/5_game_source/Fog/Src/AsyncData.cpp */
void __fastcall Fog_10046(void *pMemPool,void *pMemory,char *szFile,int nLine,int n0);   /* game binding -> Fog.dll ordinal 10046, sigmaRE/5_game_source/Fog/Src/AsyncData.cpp */
void __fastcall Fog_10050(LPCRITICAL_SECTION param_1);   /* game binding -> Fog.dll ordinal 10050, sigmaRE/5_game_source/Fog/_unattributed/between_Src_ErrorManager_and_Src_Excel_Excel.cpp */
int Fog_10055(void);   /* game binding -> Fog.dll ordinal 10055, sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_LogManager_and_Src_AsyncData.cpp */
int * __fastcall Fog_10091(int *param_1,uint param_2,int param_3,int param_4,int *param_5,int *param_6,uint param_7, uint param_8,uint32_t param_s7,uint32_t param_s8);   /* game binding -> Fog.dll ordinal 10091, sigmaRE/5_game_source/Fog/Src/AsyncData.cpp */
uint __fastcall Fog_10092(int param_1);   /* game binding -> Fog.dll ordinal 10092, sigmaRE/5_game_source/Fog/Src/AsyncData.cpp */
uint __fastcall Fog_10094(int param_1);   /* game binding -> Fog.dll ordinal 10094, sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_AsyncData_and_Src_D2QSSocket.cpp */
uint __fastcall Fog_10095(int param_1);   /* game binding -> Fog.dll ordinal 10095, sigmaRE/5_game_source/Fog/Src/AsyncData.cpp */
void __fastcall Fog_10097(uint param_1);   /* game binding -> Fog.dll ordinal 10097, sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_AsyncData_and_Src_D2QSSocket.cpp */
int __fastcall Fog_10102(uint param_1,uint param_2);   /* game binding -> Fog.dll ordinal 10102, sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSQueue_and_Src_LogManager.cpp */
void __fastcall Fog_10103(uint param_1);   /* game binding -> Fog.dll ordinal 10103, sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSQueue_and_Src_LogManager.cpp */
int __fastcall Fog_10105(uint param_1,uint param_2);   /* game binding -> Fog.dll ordinal 10105, sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSQueue_and_Src_LogManager.cpp */
int __fastcall Fog_10107(LPCSTR param_1,DWORD param_2,DWORD param_3,LPSECURITY_ATTRIBUTES param_4,DWORD param_5, DWORD param_6,HANDLE param_7);   /* game binding -> Fog.dll ordinal 10107, sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSQueue_and_Src_LogManager.cpp */
void __fastcall Fog_10109(HANDLE param_1);   /* game binding -> Fog.dll ordinal 10109, sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSQueue_and_Src_LogManager.cpp */
void __fastcall Fog_10110(HANDLE param_1,LPVOID param_2,DWORD param_3,LPDWORD param_4,LPOVERLAPPED param_5);   /* game binding -> Fog.dll ordinal 10110, sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSQueue_and_Src_LogManager.cpp */
void __fastcall Fog_10111(HANDLE param_1,LPCVOID param_2,DWORD param_3,LPDWORD param_4,LPOVERLAPPED param_5);   /* game binding -> Fog.dll ordinal 10111, sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSQueue_and_Src_LogManager.cpp */
uint __fastcall Fog_10114(char *param_1);   /* game binding -> Fog.dll ordinal 10114, sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSQueue_and_Src_LogManager.cpp */
void __fastcall Fog_10115(LPCSTR param_1,uint param_2,uint32_t param_s1,uint32_t param_s2);   /* game binding -> Fog.dll ordinal 10115, sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSQueue_and_Src_LogManager.cpp */
void __fastcall Fog_10116(LPCSTR param_1,uint param_2);   /* game binding -> Fog.dll ordinal 10116, sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSQueue_and_Src_LogManager.cpp */
void Fog_10126(uint *param_1,uint param_2,int param_3);   /* game binding -> Fog.dll ordinal 10126, sigmaRE/5_game_source/Fog/_unattributed/between_Src_Excel_Excel_and_Src_Exceptions.cpp */
int Fog_10127(int param_1);   /* game binding -> Fog.dll ordinal 10127, sigmaRE/5_game_source/Fog/_unattributed/between_Src_Excel_Excel_and_Src_Exceptions.cpp */
int Fog_10128(int *param_1,int param_2,int param_3);   /* game binding -> Fog.dll ordinal 10128, sigmaRE/5_game_source/Fog/_unattributed/between_Src_Excel_Excel_and_Src_Exceptions.cpp */
uint Fog_10129(uint param_1,int param_2);   /* game binding -> Fog.dll ordinal 10129, sigmaRE/5_game_source/Fog/_unattributed/between_Src_Excel_Excel_and_Src_Exceptions.cpp */
int Fog_10130(uint param_1,int param_2);   /* game binding -> Fog.dll ordinal 10130, sigmaRE/5_game_source/Fog/_unattributed/between_Src_Excel_Excel_and_Src_Exceptions.cpp */
uint Fog_10137(byte *param_1);   /* game binding -> Fog.dll ordinal 10137, sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSSocket_and_Src_DataArrays.cpp */
void Fog_10207(int param_1,uint *param_2,int param_3,int param_4,int param_5);   /* game binding -> Fog.dll ordinal 10207, sigmaRE/5_game_source/Fog/_unattributed/between_Src_Excel_Excel_and_Src_Exceptions.cpp */
uint * Fog_10211(char *param_1,uint param_2);   /* game binding -> Fog.dll ordinal 10211, sigmaRE/5_game_source/Fog/Src/Excel/Excel.cpp */
uint * Fog_10208(uint *param_1,int param_2);   /* game binding -> Fog.dll ordinal 10208, sigmaRE/5_game_source/Fog/Src/Excel/Excel.cpp */
void Fog_10209(uint *param_1);   /* game binding -> Fog.dll ordinal 10209, sigmaRE/5_game_source/Fog/Src/Excel/Excel.cpp */
uint Fog_10213(int *param_1,uint param_2,uint32_t param_s3);   /* game binding -> Fog.dll ordinal 10213, sigmaRE/5_game_source/Fog/_unattributed/between_Src_ErrorManager_and_Src_Excel_Excel.cpp */
void Fog_10086(byte *param_1,uint param_2);   /* game binding -> Fog.dll ordinal 10086, sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSQueue_and_Src_LogManager.cpp */
int Fog_10070(int param_1,int param_2,ushort param_3);   /* game binding -> Fog.dll ordinal 10070, sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSSocket_and_Src_DataArrays.cpp */
uint Fog_10227(void);   /* game binding -> Fog.dll ordinal 10227, sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSSocket_and_Src_DataArrays.cpp */
uint32_t * GetPtr_D2MCPClient_DAT_6fa2aeb4(void);   /* game binding -> DAT_6fa2aeb4, D2MCPClient.dll +0xaeb4, sigmaRE/5_game_source/D2MCPClient/include/globals.h */
uint32_t * GetPtr_D2MCPClient_DAT_6fa2b028(void);   /* game binding -> DAT_6fa2b028, D2MCPClient.dll +0xb028, sigmaRE/5_game_source/D2MCPClient/include/globals.h */
uint32_t * GetPtr_D2MCPClient_DAT_6fa2aed8(void);   /* game binding -> DAT_6fa2aed8, D2MCPClient.dll +0xaed8, sigmaRE/5_game_source/D2MCPClient/include/globals.h */
uint32_t * GetPtr_D2MCPClient_DAT_6fa2b1c8(void);   /* game binding -> DAT_6fa2b1c8, D2MCPClient.dll +0xb1c8, sigmaRE/5_game_source/D2MCPClient/include/globals.h */
uint32_t * GetPtr_D2MCPClient_10058(void);   /* game binding -> D2MCPClient_10058, D2MCPClient.dll +0x7330, sigmaRE/5_game_source/D2MCPClient/_unattributed/code.cpp */
int __fastcall Fog_10007(int param_1,char *param_2,int param_3);   /* game binding -> Fog.dll ordinal 10007, sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_Safesock_and_Src_IFF.cpp */
void sub_6ff362b0(void);   /* game binding -> Bnclient.dll +0x162b0, sigmaRE/5_game_source/Bnclient/_unattributed/after_BNetGW.cpp */
uint * BnDownload_6ff2d320(uint *param_1,uint *param_2,uchar *param_3);   /* game binding -> Bnclient.dll +0xd320, sigmaRE/5_game_source/Bnclient/BnDownload.cpp */
uint32_t * GetPtr_Bnclient_DAT_6ff3e8d8(void);   /* game binding -> DAT_6ff3e8d8, Bnclient.dll +0x1e8d8, sigmaRE/5_game_source/Bnclient/include/globals.h */
uint32_t * GetPtr_Bnclient_DAT_6ff3e8e0(void);   /* game binding -> DAT_6ff3e8e0, Bnclient.dll +0x1e8e0, sigmaRE/5_game_source/Bnclient/include/globals.h */
uint32_t * GetPtr_Bnclient_DAT_6ff3e8e4(void);   /* game binding -> DAT_6ff3e8e4, Bnclient.dll +0x1e8e4, sigmaRE/5_game_source/Bnclient/include/globals.h */
uint32_t * GetPtr_Bnclient_DAT_6ff3f1dc(void);   /* game binding -> DAT_6ff3f1dc, Bnclient.dll +0x1f1dc, sigmaRE/5_game_source/Bnclient/include/globals.h */
uint32_t * GetPtr_Bnclient_DAT_6ff3f1f4(void);   /* game binding -> DAT_6ff3f1f4, Bnclient.dll +0x1f1f4, sigmaRE/5_game_source/Bnclient/include/globals.h */
uint32_t * GetPtr_Bnclient_DAT_6ff3f930(void);   /* game binding -> DAT_6ff3f930, Bnclient.dll +0x1f930, sigmaRE/5_game_source/Bnclient/include/globals.h */
uint32_t * GetPtr_Bnclient_DAT_6ff3f654(void);   /* game binding -> DAT_6ff3f654, Bnclient.dll +0x1f654, sigmaRE/5_game_source/Bnclient/include/globals.h */
uint32_t * GetPtr_sub_6ff36070(void);   /* game binding -> sub_6ff36070, Bnclient.dll +0x16070, sigmaRE/5_game_source/Bnclient/_unattributed/after_BNetGW.cpp */
uint Storm_252(int *param_1);   /* game binding -> Storm.dll ordinal 252, sigmaRE/5_game_source/Storm/_unattributed/code_6f621bc0.cpp */
uint Storm_253(int *param_1);   /* game binding -> Storm.dll ordinal 253, sigmaRE/5_game_source/Storm/_unattributed/code_6f621bc0.cpp */
DWORD Storm_265(int param_1,LPDWORD param_2);   /* game binding -> Storm.dll ordinal 265, sigmaRE/5_game_source/Storm/_unattributed/code_6f621bc0.cpp */
uint Storm_266(uint *param_1,uint param_2,uint param_3,uint *param_4);   /* game binding -> Storm.dll ordinal 266, sigmaRE/5_game_source/Storm/_unattributed/code_6f621bc0.cpp */
uint Storm_268(void *param_1,uint *param_2,byte param_3,uint *param_4);   /* game binding -> Storm.dll ordinal 268, sigmaRE/5_game_source/Storm/_unattributed/code_6f621bc0.cpp */
void Storm_269(uint param_1,uint *param_2,uint param_3,int *param_4,int param_5);   /* game binding -> Storm.dll ordinal 269, sigmaRE/5_game_source/Storm/_unattributed/code_6f621bc0.cpp */
uint Storm_280(uint *param_1);   /* game binding -> Storm.dll +0x26c40, sigmaRE/5_game_source/Storm/_unattributed/code_6f621bc0.cpp */
uint * Storm_401(uint param_1,uint param_2,int param_3,uint param_4);   /* game binding -> Storm.dll ordinal 401, sigmaRE/5_game_source/Storm/_unattributed/code_6f60b3c7.cpp */
uint Storm_403(uint *param_1,uint *param_2,int param_3,uint32_t param_s4);   /* game binding -> Storm.dll ordinal 403, sigmaRE/5_game_source/Storm/_unattributed/code_6f60b3c7.cpp */
ulonglong __fastcall Storm_491(uint unused_ECX,uint reg_EDX,uint *param_3,uint *param_4,uint param_5);   /* game binding -> Storm.dll +0x22c80, sigmaRE/5_game_source/Storm/_unattributed/code_6f621bc0.cpp */
uchar * Storm_501(int param_1,uint *param_2,int param_3);   /* game binding -> Storm.dll +0x3b080, sigmaRE/5_game_source/Storm/_unattributed/code_6f634900.cpp */
char * Storm_506(uint *param_1);   /* game binding -> Storm.dll +0x3afd0, sigmaRE/5_game_source/Storm/_unattributed/code_6f634900.cpp */
int D2Common_10309(uint32_t param_s1);   /* game binding -> D2Common.dll ordinal 10309, sigmaRE/5_game_source/D2Common/WayPoint/Waypoint.cpp */
uint D2Common_10939(uint32_t param_s1);   /* game binding -> D2Common.dll ordinal 10939, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
uint * D2Common_10387(int param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10387, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint32_t * GetPtr_D2Game_DAT_6fd31c24(void);   /* game binding -> DAT_6fd31c24, D2Game.dll +0x111c24, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Common_DAT_6fdf1420(void);   /* game binding -> DAT_6fdf1420, D2Common.dll +0xa1420, sigmaRE/5_game_source/D2Common/include/globals.h */
uint32_t * GetPtr_D2Common_DAT_6fdf1424(void);   /* game binding -> DAT_6fdf1424, D2Common.dll +0xa1424, sigmaRE/5_game_source/D2Common/include/globals.h */
uint D2Common_10031(int *param_1);   /* game binding -> D2Common.dll ordinal 10031, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint32_t * GetPtr_sub_6fd7e840(void);   /* game binding -> sub_6fd7e840, D2Common.dll +0x2e840, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
void D2Common_10153(int param_1,int param_2,uint *param_3);   /* game binding -> D2Common.dll ordinal 10153, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
uint __fastcall D2Common_10030(int *param_1,int *param_2);   /* game binding -> D2Common.dll +0x4ec50, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
uint32_t * GetPtr_sub_6fd7e790(void);   /* game binding -> sub_6fd7e790, D2Common.dll +0x2e790, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
uint D2Common_10889(int *param_1);   /* game binding -> D2Common.dll ordinal 10889, sigmaRE/5_game_source/D2Common/DRLG/Outdoors.cpp */
void GAME_Game_6fc4c120(int param_1,int param_2);   /* game binding -> D2Game.dll +0x2c120, sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
uint32_t * GetPtr_sub_6fd7f100(void);   /* game binding -> sub_6fd7f100, D2Common.dll +0x2f100, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcbeb80(void);   /* game binding -> SKILLS_Skills_6fcbeb80, D2Game.dll +0x9eb80, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_PLAYER_PlrModes_6fc99100(void);   /* game binding -> PLAYER_PlrModes_6fc99100, D2Game.dll +0x79100, sigmaRE/5_game_source/D2Game/PLAYER/PlrModes.cpp */
uint32_t * GetPtr_PLAYER_PlrModes_6fc98a90(void);   /* game binding -> PLAYER_PlrModes_6fc98a90, D2Game.dll +0x78a90, sigmaRE/5_game_source/D2Game/PLAYER/PlrModes.cpp */
int D2Common_10920(int *param_1);   /* game binding -> D2Common.dll ordinal 10920, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
void D2Common_10286(int param_1,ushort param_2,ushort param_3);   /* game binding -> D2Common.dll ordinal 10286, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint32_t * GetPtr_PLAYER_PlrModes_6fc98610(void);   /* game binding -> PLAYER_PlrModes_6fc98610, D2Game.dll +0x78610, sigmaRE/5_game_source/D2Game/PLAYER/PlrModes.cpp */
uint32_t * GetPtr_sub_6fc58620(void);   /* game binding -> sub_6fc58620, D2Game.dll +0x38620, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
uint32_t * GetPtr_GAME_Targets_6fd0fed0(void);   /* game binding -> GAME_Targets_6fd0fed0, D2Game.dll +0xefed0, sigmaRE/5_game_source/D2Game/GAME/Targets.cpp */
uint32_t * GetPtr_sub_6fc73720(void);   /* game binding -> sub_6fc73720, D2Game.dll +0x53720, sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Task_and_PLAYER_PlrSave.cpp */
uint32_t * GetPtr_sub_6fd0b2c0(void);   /* game binding -> sub_6fd0b2c0, D2Game.dll +0xeb2c0, sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
int D2Common_10522(int *param_1,int *param_2);   /* game binding -> D2Common.dll ordinal 10522, sigmaRE/5_game_source/D2Common/_unattributed/between_DATATBLS_FieldTbls_and_DRLG_DrlgLogic.cpp */
int D2Common_10080(int *param_1,int param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10080, sigmaRE/5_game_source/D2Common/_unattributed/between_DATATBLS_FieldTbls_and_DRLG_DrlgLogic.cpp */
uint32_t * GetPtr_sub_6fc21560(void);   /* game binding -> sub_6fc21560, D2Game.dll +0x1560, sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
uint32_t * GetPtr_sub_6fcd0a20(void);   /* game binding -> sub_6fcd0a20, D2Game.dll +0xb0a20, sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
uint32_t * GetPtr_sub_6fd12870(void);   /* game binding -> sub_6fd12870, D2Game.dll +0xf2870, sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
uint32_t * GetPtr_sub_6fd12d80(void);   /* game binding -> sub_6fd12d80, D2Game.dll +0xf2d80, sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
uint32_t * GetPtr_UNIT_CUnit_6fb560d0(void);   /* game binding -> UNIT_CUnit_6fb560d0, D2Client.dll +0xa60d0, sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
uint32_t * GetPtr_sub_6fcbe170(void);   /* game binding -> sub_6fcbe170, D2Game.dll +0x9e170, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_Party_and_SKILLS_Skills.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbcc24c(void);   /* game binding -> DAT_6fbcc24c, D2Client.dll +0x11c24c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc250(void);   /* game binding -> DAT_6fbcc250, D2Client.dll +0x11c250, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc254(void);   /* game binding -> DAT_6fbcc254, D2Client.dll +0x11c254, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc258(void);   /* game binding -> DAT_6fbcc258, D2Client.dll +0x11c258, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc25c(void);   /* game binding -> DAT_6fbcc25c, D2Client.dll +0x11c25c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc260(void);   /* game binding -> DAT_6fbcc260, D2Client.dll +0x11c260, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc75b8(void);   /* game binding -> DAT_6fbc75b8, D2Client.dll +0x1175b8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc280(void);   /* game binding -> DAT_6fbcc280, D2Client.dll +0x11c280, sigmaRE/5_game_source/D2Client/include/globals.h */
uint D2sound_10001(void);   /* game binding -> D2sound.dll ordinal 10001, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
void __fastcall D2sound_10005(int *param_1);   /* game binding -> D2sound.dll ordinal 10005, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
void __fastcall D2sound_10006(int *param_1);   /* game binding -> D2sound.dll ordinal 10006, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
void __fastcall D2sound_10008(int *param_1,int param_2);   /* game binding -> D2sound.dll ordinal 10008, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
uint D2sound_10011(void);   /* game binding -> D2sound.dll ordinal 10011, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
void __fastcall D2sound_10018(int *param_1,uint param_2);   /* game binding -> D2sound.dll ordinal 10018, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
void __fastcall D2sound_10023(uint param_1);   /* game binding -> D2sound.dll ordinal 10023, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
int * __fastcall D2sound_10025(int *param_1,uint *param_2,ushort *param_3);   /* game binding -> D2sound.dll ordinal 10025, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
void __thiscall D2sound_10026(void *this);   /* game binding -> D2sound.dll ordinal 10026, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
void __fastcall D2sound_10028(uint *param_1,int param_2);   /* game binding -> D2sound.dll ordinal 10028, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
uint __fastcall D2sound_10032(int param_1);   /* game binding -> D2sound.dll ordinal 10032, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
void __fastcall D2sound_10034(uint *param_1,uint param_2);   /* game binding -> D2sound.dll ordinal 10034, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
uint __fastcall D2sound_10037(uint *param_1);   /* game binding -> D2sound.dll ordinal 10037, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
void __fastcall D2sound_10038(int param_1,uint param_2);   /* game binding -> D2sound.dll ordinal 10038, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
uint __thiscall D2sound_10039(void *this,int param_1);   /* game binding -> D2sound.dll ordinal 10039, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
uint D2sound_10041(void);   /* game binding -> D2sound.dll ordinal 10041, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
int __fastcall D2sound_10044(int *param_1);   /* game binding -> D2sound.dll ordinal 10044, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
uint D2sound_10046(void);   /* game binding -> D2sound.dll ordinal 10046, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
void __fastcall D2sound_10047(int *param_1,int *param_2,float param_3,float param_4,float param_5);   /* game binding -> D2sound.dll ordinal 10047, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
void __fastcall D2sound_10049(int *param_1);   /* game binding -> D2sound.dll ordinal 10049, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
void __fastcall D2sound_10050(int param_1,uint param_2);   /* game binding -> D2sound.dll ordinal 10050, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
void __thiscall D2sound_10051(void *this);   /* game binding -> D2sound.dll ordinal 10051, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
uint __fastcall D2sound_10053(int *param_1,int param_2);   /* game binding -> D2sound.dll ordinal 10053, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
uint D2sound_10056(void);   /* game binding -> D2sound.dll ordinal 10056, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
uint D2sound_10059(void);   /* game binding -> D2sound.dll ordinal 10059, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
void __fastcall D2sound_10061(int param_1);   /* game binding -> D2sound.dll ordinal 10061, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
void __fastcall D2sound_10062(int *param_1,int param_2);   /* game binding -> D2sound.dll ordinal 10062, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
void __fastcall D2sound_10063(int *param_1);   /* game binding -> D2sound.dll ordinal 10063, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
uint * __fastcall D2sound_10065(uint param_1,uint param_2);   /* game binding -> D2sound.dll ordinal 10065, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
uint __fastcall D2sound_10066(uint param_1);   /* game binding -> D2sound.dll ordinal 10066, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
uint D2sound_10067(void);   /* game binding -> D2sound.dll ordinal 10067, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
uint __fastcall D2sound_10069(int *param_1,int *param_2,uint param_3);   /* game binding -> D2sound.dll ordinal 10069, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
uint32_t * GetPtr_D2sound_10020(void);   /* game binding -> D2sound_10020, D2sound.dll +0x68d0, sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
int sub_6fb13610(void);   /* game binding -> D2Client.dll +0x63610, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb143e0(void);   /* game binding -> D2Client.dll +0x643e0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb14310(void);   /* game binding -> D2Client.dll +0x64310, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb14370(void);   /* game binding -> D2Client.dll +0x64370, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb13410(void);   /* game binding -> D2Client.dll +0x63410, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
uint32_t * GetPtr_sub_6fb14080(void);   /* game binding -> sub_6fb14080, D2Client.dll +0x64080, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
uint32_t * GetPtr_sub_6fb14fd0(void);   /* game binding -> sub_6fb14fd0, D2Client.dll +0x64fd0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
uint32_t * GetPtr_D2Client_loc_6fb15180(void);   /* game binding -> D2Client_loc_6fb15180, D2Client.dll +0x65180, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb15e00(void);   /* game binding -> D2Client.dll +0x65e00, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb15df0(void);   /* game binding -> D2Client.dll +0x65df0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb15c70(void);   /* game binding -> D2Client.dll +0x65c70, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb14460(void);   /* game binding -> D2Client.dll +0x64460, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
void __fastcall sub_6fb14440(int param_1);   /* game binding -> D2Client.dll +0x64440, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb14420(void);   /* game binding -> D2Client.dll +0x64420, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
void __fastcall sub_6fb14400(int param_1);   /* game binding -> D2Client.dll +0x64400, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb143a0(void);   /* game binding -> D2Client.dll +0x643a0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb142e0(void);   /* game binding -> D2Client.dll +0x642e0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb14350(void);   /* game binding -> D2Client.dll +0x64350, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
void __fastcall sub_6fb14330(int param_1);   /* game binding -> D2Client.dll +0x64330, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
void __fastcall sub_6fb14250(int param_1);   /* game binding -> D2Client.dll +0x64250, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb14960(void);   /* game binding -> D2Client.dll +0x64960, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
void __fastcall sub_6fb135b0(int param_1);   /* game binding -> D2Client.dll +0x635b0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb13580(void);   /* game binding -> D2Client.dll +0x63580, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
void __fastcall sub_6fb14910(int param_1);   /* game binding -> D2Client.dll +0x64910, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb14b30(void);   /* game binding -> D2Client.dll +0x64b30, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb14150(void);   /* game binding -> D2Client.dll +0x64150, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb14890(void);   /* game binding -> D2Client.dll +0x64890, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
void __fastcall sub_6fb14110(uint reg_ECX);   /* game binding -> D2Client.dll +0x64110, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb14810(void);   /* game binding -> D2Client.dll +0x64810, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
void __fastcall sub_6fb13520(int param_1);   /* game binding -> D2Client.dll +0x63520, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb134a0(void);   /* game binding -> D2Client.dll +0x634a0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb13470(void);   /* game binding -> D2Client.dll +0x63470, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb13460(void);   /* game binding -> D2Client.dll +0x63460, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb13430(void);   /* game binding -> D2Client.dll +0x63430, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb13420(void);   /* game binding -> D2Client.dll +0x63420, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb133e0(void);   /* game binding -> D2Client.dll +0x633e0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb133b0(void);   /* game binding -> D2Client.dll +0x633b0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb156b0(uint32_t param_1);   /* game binding -> D2Client.dll +0x656b0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
void WARDEN_WardenClient_6fb3bbf0(void);   /* game binding -> D2Client.dll +0x8bbf0, sigmaRE/5_game_source/D2Client/WARDEN/WardenClient.cpp */
uint32_t * GetPtr_sub_6fb13270(void);   /* game binding -> sub_6fb13270, D2Client.dll +0x63270, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
void __fastcall sub_6fac4660(uint param_1);   /* game binding -> D2Client.dll +0x14660, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
uint32_t * GetPtr_sub_6fac4a30(void);   /* game binding -> sub_6fac4a30, D2Client.dll +0x14a30, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
uint32_t * GetPtr_sub_6faecc60(void);   /* game binding -> sub_6faecc60, D2Client.dll +0x3cc60, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
uint32_t * GetPtr_sub_6faeccc0_1029e920(void);   /* game binding -> sub_6faeccc0, D2Client.dll +0x3ccc0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
uint32_t * GetPtr_sub_6faf7b20(void);   /* game binding -> sub_6faf7b20, D2Client.dll +0x47b20, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
uint32_t * GetPtr_WARDEN_WardenClient_6fb3a4d0(void);   /* game binding -> WARDEN_WardenClient_6fb3a4d0, D2Client.dll +0x8a4d0, sigmaRE/5_game_source/D2Client/WARDEN/WardenClient.cpp */
uint32_t * GetPtr_UNIT_CUnit_6fb55440(void);   /* game binding -> UNIT_CUnit_6fb55440, D2Client.dll +0xa5440, sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
uint32_t * GetPtr_UNIT_CUnit_6fb56210(void);   /* game binding -> UNIT_CUnit_6fb56210, D2Client.dll +0xa6210, sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
uint32_t * GetPtr_sub_6fb71a80(void);   /* game binding -> sub_6fb71a80, D2Client.dll +0xc1a80, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
uint32_t * GetPtr_sub_6fb721f0(void);   /* game binding -> sub_6fb721f0, D2Client.dll +0xc21f0, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbcb9c0(void);   /* game binding -> DAT_6fbcb9c0, D2Client.dll +0x11b9c0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc070(void);   /* game binding -> DAT_6fbcc070, D2Client.dll +0x11c070, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc074(void);   /* game binding -> DAT_6fbcc074, D2Client.dll +0x11c074, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc078(void);   /* game binding -> DAT_6fbcc078, D2Client.dll +0x11c078, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc07c(void);   /* game binding -> DAT_6fbcc07c, D2Client.dll +0x11c07c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc3c4(void);   /* game binding -> DAT_6fbcc3c4, D2Client.dll +0x11c3c4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb8d5d0(void);   /* game binding -> DAT_6fb8d5d0, D2Client.dll +0xdd5d0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb8d854(void);   /* game binding -> DAT_6fb8d854, D2Client.dll +0xdd854, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb8d538(void);   /* game binding -> DAT_6fb8d538, D2Client.dll +0xdd538, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbca75c(void);   /* game binding -> DAT_6fbca75c, D2Client.dll +0x11a75c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbca760(void);   /* game binding -> DAT_6fbca760, D2Client.dll +0x11a760, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc9e60(void);   /* game binding -> DAT_6fbc9e60, D2Client.dll +0x119e60, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbca764(void);   /* game binding -> DAT_6fbca764, D2Client.dll +0x11a764, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbca76c(void);   /* game binding -> DAT_6fbca76c, D2Client.dll +0x11a76c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbca754(void);   /* game binding -> DAT_6fbca754, D2Client.dll +0x11a754, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbca758(void);   /* game binding -> DAT_6fbca758, D2Client.dll +0x11a758, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbca768(void);   /* game binding -> DAT_6fbca768, D2Client.dll +0x11a768, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbca7d0(void);   /* game binding -> DAT_6fbca7d0, D2Client.dll +0x11a7d0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbca7d1(void);   /* game binding -> DAT_6fbca7d1, D2Client.dll +0x11a7d1, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbca7d2(void);   /* game binding -> DAT_6fbca7d2, D2Client.dll +0x11a7d2, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbca7d3(void);   /* game binding -> DAT_6fbca7d3, D2Client.dll +0x11a7d3, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc216(void);   /* game binding -> DAT_6fbcc216, D2Client.dll +0x11c216, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb8e85c(void);   /* game binding -> DAT_6fb8e85c, D2Client.dll +0xde85c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb8e868(void);   /* game binding -> DAT_6fb8e868, D2Client.dll +0xde868, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb80680(void);   /* game binding -> DAT_6fb80680, D2Client.dll +0xd0680, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb8bdb8(void);   /* game binding -> DAT_6fb8bdb8, D2Client.dll +0xdbdb8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb8be18(void);   /* game binding -> DAT_6fb8be18, D2Client.dll +0xdbe18, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fba51bc(void);   /* game binding -> DAT_6fba51bc, D2Client.dll +0xf51bc, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb928f8(void);   /* game binding -> DAT_6fb928f8, D2Client.dll +0xe28f8, sigmaRE/5_game_source/D2Client/include/globals.h */
int sub_6faec5b0(void);   /* game binding -> D2Client.dll +0x3c5b0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faec2a0(void);   /* game binding -> D2Client.dll +0x3c2a0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faebfc0(void);   /* game binding -> D2Client.dll +0x3bfc0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faebeb0(void);   /* game binding -> D2Client.dll +0x3beb0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faec8c0(void);   /* game binding -> D2Client.dll +0x3c8c0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faebc10(void);   /* game binding -> D2Client.dll +0x3bc10, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeba70_102a0300(void);   /* game binding -> sub_6faeba70, D2Client.dll +0x3ba70, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeb8b0(void);   /* game binding -> D2Client.dll +0x3b8b0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faea690(void);   /* game binding -> D2Client.dll +0x3a690, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6fae9e20(void);   /* game binding -> D2Client.dll +0x39e20, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6fae9df0(void);   /* game binding -> D2Client.dll +0x39df0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6fae9dc0(void);   /* game binding -> D2Client.dll +0x39dc0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeb5b0(void);   /* game binding -> D2Client.dll +0x3b5b0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeb470(void);   /* game binding -> D2Client.dll +0x3b470, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeadb0(void);   /* game binding -> D2Client.dll +0x3adb0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faead70(void);   /* game binding -> D2Client.dll +0x3ad70, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faead30(void);   /* game binding -> D2Client.dll +0x3ad30, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeacf0(void);   /* game binding -> D2Client.dll +0x3acf0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeacb0(void);   /* game binding -> D2Client.dll +0x3acb0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeac70(void);   /* game binding -> D2Client.dll +0x3ac70, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeac30(void);   /* game binding -> D2Client.dll +0x3ac30, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeabf0(void);   /* game binding -> D2Client.dll +0x3abf0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeb300(void);   /* game binding -> D2Client.dll +0x3b300, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faec9a0(void);   /* game binding -> D2Client.dll +0x3c9a0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faec960(void);   /* game binding -> D2Client.dll +0x3c960, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faec920(void);   /* game binding -> D2Client.dll +0x3c920, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faec8e0(void);   /* game binding -> D2Client.dll +0x3c8e0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6fae9d60(void);   /* game binding -> D2Client.dll +0x39d60, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6fae9d40(void);   /* game binding -> D2Client.dll +0x39d40, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6fae9d20(void);   /* game binding -> D2Client.dll +0x39d20, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6fae9d00(void);   /* game binding -> D2Client.dll +0x39d00, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6fae9ce0(void);   /* game binding -> D2Client.dll +0x39ce0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6fae9cc0(void);   /* game binding -> D2Client.dll +0x39cc0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6fae9ca0(void);   /* game binding -> D2Client.dll +0x39ca0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeae40(void);   /* game binding -> D2Client.dll +0x3ae40, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeadf0(void);   /* game binding -> D2Client.dll +0x3adf0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6fae9c60(void);   /* game binding -> D2Client.dll +0x39c60, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6fae9c50(void);   /* game binding -> D2Client.dll +0x39c50, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6fae9c20(void);   /* game binding -> D2Client.dll +0x39c20, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeb230(void);   /* game binding -> D2Client.dll +0x3b230, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeaea0(void);   /* game binding -> D2Client.dll +0x3aea0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
void sub_6faea900(void);   /* game binding -> D2Client.dll +0x3a900, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faea8e0(void);   /* game binding -> D2Client.dll +0x3a8e0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faea8c0(void);   /* game binding -> D2Client.dll +0x3a8c0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6fae9c30(void);   /* game binding -> D2Client.dll +0x39c30, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6fb0c3d0(void);   /* game binding -> D2Client.dll +0x5c3d0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_Hireables_and_Sound_SoundHdr.cpp */
int sub_6fae9d80(void);   /* game binding -> D2Client.dll +0x39d80, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeabb0(void);   /* game binding -> D2Client.dll +0x3abb0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeab70(void);   /* game binding -> D2Client.dll +0x3ab70, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeab30(void);   /* game binding -> D2Client.dll +0x3ab30, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeaaf0(void);   /* game binding -> D2Client.dll +0x3aaf0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeaab0(void);   /* game binding -> D2Client.dll +0x3aab0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeaa70(void);   /* game binding -> D2Client.dll +0x3aa70, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeaa30(void);   /* game binding -> D2Client.dll +0x3aa30, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faea9f0(void);   /* game binding -> D2Client.dll +0x3a9f0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6faeaee0(void);   /* game binding -> D2Client.dll +0x3aee0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6fae9c80(void);   /* game binding -> D2Client.dll +0x39c80, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
uint32_t * GetPtr_sub_6fae8cd0(void);   /* game binding -> sub_6fae8cd0, D2Client.dll +0x38cd0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_SkillDesc_and_UI_CmdTbl.cpp */

/* ---- _unattributed/between_functions_D2ServerFunctions_and_events_SkillEvents_unit29_102a0d70.cpp ---- */
longlong sub_6fac1240(void);   /* game binding -> D2Client.dll +0x11240, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
void __fastcall sub_6fac1360(int param_1);   /* game binding -> D2Client.dll +0x11360, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
void __fastcall sub_6fac17c0(int param_1);   /* game binding -> D2Client.dll +0x117c0, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
void sub_6fac14f0(int param_1);   /* game binding -> D2Client.dll +0x114f0, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
void sub_6fac2eb0(void);   /* game binding -> D2Client.dll +0x12eb0, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
void sub_6faf2880(void);   /* game binding -> D2Client.dll +0x42880, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
void sub_6faf29c0(void);   /* game binding -> D2Client.dll +0x429c0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
uint sub_6faf2090(void);   /* game binding -> D2Client.dll +0x42090, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
uint sub_6faf20e0(void);   /* game binding -> D2Client.dll +0x420e0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6fb2e840(uint32_t param_1);   /* game binding -> D2Client.dll +0x7e840, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
int sub_6fad8050(uint32_t param_1);   /* game binding -> D2Client.dll +0x28050, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitSnd_and_UI_panel.cpp */
int sub_6fb4b300(uint32_t param_1);   /* game binding -> D2Client.dll +0x9b300, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
void sub_6fb48dc0(int param_1);   /* game binding -> D2Client.dll +0x98dc0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
int sub_6fb4bed0(uint32_t param_1);   /* game binding -> D2Client.dll +0x9bed0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
int sub_6fb4adb0(uint32_t param_1);   /* game binding -> D2Client.dll +0x9adb0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
int sub_6facddf0(uint32_t param_1);   /* game binding -> D2Client.dll +0x1ddf0, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_Player_and_UNIT_CUnitEvent.cpp */
int sub_6fb25a20(uint32_t param_1);   /* game binding -> D2Client.dll +0x75a20, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
void sub_6fb296f0(int param_1);   /* game binding -> D2Client.dll +0x796f0, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
int sub_6fb6cd20(uint32_t param_1);   /* game binding -> D2Client.dll +0xbcd20, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
int sub_6faeecb0(uint32_t param_1);   /* game binding -> D2Client.dll +0x3ecb0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
int sub_6fb2ed30(uint32_t param_1);   /* game binding -> D2Client.dll +0x7ed30, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
int sub_6fb54860(uint32_t param_1);   /* game binding -> D2Client.dll +0xa4860, sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
int sub_6fb50320(uint32_t param_1);   /* game binding -> D2Client.dll +0xa0320, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
int sub_6fad9300(uint32_t param_1);   /* game binding -> D2Client.dll +0x29300, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_panel_and_UNIT_UnitMode.cpp */
int sub_6fb4b010(uint32_t param_1);   /* game binding -> D2Client.dll +0x9b010, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
void sub_6fb47450(int param_1);   /* game binding -> D2Client.dll +0x97450, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
int sub_6fb4c630(uint32_t param_1);   /* game binding -> D2Client.dll +0x9c630, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
void sub_6fb4a920(int param_1);   /* game binding -> D2Client.dll +0x9a920, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
int sub_6fb274d0(uint32_t param_1);   /* game binding -> D2Client.dll +0x774d0, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
int sub_6facedb0(uint32_t param_1);   /* game binding -> D2Client.dll +0x1edb0, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_Player_and_UNIT_CUnitEvent.cpp */
void sub_6fb28fc0(int param_1);   /* game binding -> D2Client.dll +0x78fc0, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
void sub_6fb6dca0(int param_1);   /* game binding -> D2Client.dll +0xbdca0, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
int sub_6fb4ff10(uint32_t param_1);   /* game binding -> D2Client.dll +0x9ff10, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
int sub_6fb53c10(uint32_t param_1);   /* game binding -> D2Client.dll +0xa3c10, sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
int sub_6fad9b50(uint32_t param_1);   /* game binding -> D2Client.dll +0x29b50, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_panel_and_UNIT_UnitMode.cpp */
int sub_6fb4c4f0(uint32_t param_1);   /* game binding -> D2Client.dll +0x9c4f0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
int sub_6fb4c830(uint32_t param_1);   /* game binding -> D2Client.dll +0x9c830, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
int sub_6fac63d0(uint32_t param_1);   /* game binding -> D2Client.dll +0x163d0, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
int sub_6fad6fa0(uint32_t param_1);   /* game binding -> D2Client.dll +0x26fa0, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitSnd_and_UI_panel.cpp */
int sub_6fb44df0(uint32_t param_1);   /* game binding -> D2Client.dll +0x94df0, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
int sub_6fb4a7d0(uint32_t param_1);   /* game binding -> D2Client.dll +0x9a7d0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
int sub_6fb4fc50(uint32_t param_1);   /* game binding -> D2Client.dll +0x9fc50, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
int sub_6fb44aa0(uint32_t param_1);   /* game binding -> D2Client.dll +0x94aa0, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
int sub_6fb54a20(uint32_t param_1);   /* game binding -> D2Client.dll +0xa4a20, sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
int sub_6fb44ff0(uint32_t param_1);   /* game binding -> D2Client.dll +0x94ff0, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
int sub_6f8f80f0_102a15e0(uint32_t param_1);   /* game binding -> sub_6f8f80f0, D2Win.dll +0x180f0, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
uint32_t * GetPtr_D2Win_DAT_6f901488(void);   /* game binding -> DAT_6f901488, D2Win.dll +0x21488, sigmaRE/5_game_source/D2Win/include/globals.h */
uint32_t * GetPtr_D2Win_DAT_6f90148c(void);   /* game binding -> DAT_6f90148c, D2Win.dll +0x2148c, sigmaRE/5_game_source/D2Win/include/globals.h */
uint Storm_511_102a1770(uint param_1);   /* game binding -> Storm_511, Storm.dll +0x343d0, sigmaRE/5_game_source/Storm/_unattributed/code_6f621bc0.cpp */
void UI_inv_6fb3ccb0(void);   /* game binding -> D2Client.dll +0x8ccb0, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
uint32_t * GetPtr_UI_inv_6fb3c4c0(void);   /* game binding -> UI_inv_6fb3c4c0, D2Client.dll +0x8c4c0, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
uint32_t * GetPtr_sub_6fad6320(void);   /* game binding -> sub_6fad6320, D2Client.dll +0x26320, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitSnd_and_UI_panel.cpp */
uint __fastcall sub_6fb3bd90(int param_1,int param_2);   /* game binding -> D2Client.dll +0x8bd90, sigmaRE/5_game_source/D2Client/_unattributed/between_WARDEN_WardenClient_and_UI_inv.cpp */
uint32_t * GetPtr_D2Client_loc_6fb3b6b0(void);   /* game binding -> D2Client_loc_6fb3b6b0, D2Client.dll +0x8b6b0, sigmaRE/5_game_source/D2Client/WARDEN/WardenClient.cpp */
uint32_t * GetPtr_D2Client_loc_6fb3cd00(void);   /* game binding -> D2Client_loc_6fb3cd00, D2Client.dll +0x8cd00, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
uint32_t * GetPtr_UI_inv_6fb3c580(void);   /* game binding -> UI_inv_6fb3c580, D2Client.dll +0x8c580, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
void UI_inv_6fb3d300(void);   /* game binding -> D2Client.dll +0x8d300, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
uint UI_inv_6fb3cf60(void);   /* game binding -> D2Client.dll +0x8cf60, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
uint32_t * GetPtr_sub_6fb45f80(void);   /* game binding -> sub_6fb45f80, D2Client.dll +0x95f80, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
void sub_6fb6eb90(void);   /* game binding -> D2Client.dll +0xbeb90, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
uint32_t * GetPtr_UI_inv_6fb3d3d0(void);   /* game binding -> UI_inv_6fb3d3d0, D2Client.dll +0x8d3d0, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
uint32_t * GetPtr_D2Client_loc_6fb3c470(void);   /* game binding -> D2Client_loc_6fb3c470, D2Client.dll +0x8c470, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
uint32_t * GetPtr_UI_inv_6fb3c440(void);   /* game binding -> UI_inv_6fb3c440, D2Client.dll +0x8c440, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
uint32_t * GetPtr_UI_inv_6fb3f880(void);   /* game binding -> UI_inv_6fb3f880, D2Client.dll +0x8f880, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
void sub_6fb730e0(int param_1);   /* game binding -> D2Client.dll +0xc30e0, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
void sub_6fb6f720(void);   /* game binding -> D2Client.dll +0xbf720, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
void UI_inv_6fb3f140(void);   /* game binding -> D2Client.dll +0x8f140, sigmaRE/5_game_source/D2Client/UI/inv.cpp */
uint32_t * GetPtr_sub_6fb096a0(void);   /* game binding -> sub_6fb096a0, D2Client.dll +0x596a0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_showitems_and_UI_Hireables.cpp */
uint32_t * GetPtr_D2Client_DAT_6fba5204(void);   /* game binding -> DAT_6fba5204, D2Client.dll +0xf5204, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc9860(void);   /* game binding -> DAT_6fbc9860, D2Client.dll +0x119860, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc9928(void);   /* game binding -> DAT_6fbc9928, D2Client.dll +0x119928, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbbf2f3(void);   /* game binding -> DAT_6fbbf2f3, D2Client.dll +0x10f2f3, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fba8b94(void);   /* game binding -> DAT_6fba8b94, D2Client.dll +0xf8b94, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fba8728(void);   /* game binding -> DAT_6fba8728, D2Client.dll +0xf8728, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc4fc(void);   /* game binding -> DAT_6fbcc4fc, D2Client.dll +0x11c4fc, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc500(void);   /* game binding -> DAT_6fbcc500, D2Client.dll +0x11c500, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc434(void);   /* game binding -> DAT_6fbcc434, D2Client.dll +0x11c434, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc058(void);   /* game binding -> DAT_6fbcc058, D2Client.dll +0x11c058, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc05c(void);   /* game binding -> DAT_6fbcc05c, D2Client.dll +0x11c05c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc060(void);   /* game binding -> DAT_6fbcc060, D2Client.dll +0x11c060, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc390(void);   /* game binding -> DAT_6fbcc390, D2Client.dll +0x11c390, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fba2188(void);   /* game binding -> DAT_6fba2188, D2Client.dll +0xf2188, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fba218c(void);   /* game binding -> DAT_6fba218c, D2Client.dll +0xf218c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc9854_102a2b00(void);   /* game binding -> DAT_6fbc9854, D2Client.dll +0x119854, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc9858(void);   /* game binding -> DAT_6fbc9858, D2Client.dll +0x119858, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc394(void);   /* game binding -> DAT_6fbcc394, D2Client.dll +0x11c394, sigmaRE/5_game_source/D2Client/include/globals.h */

/* ---- _unattributed/between_functions_D2ServerFunctions_and_events_SkillEvents_after_unit29.cpp ---- */
uint32_t * GetPtr_ENGINE_Gfx_6fb19f20(void);   /* game binding -> ENGINE_Gfx_6fb19f20, D2Client.dll +0x69f20, sigmaRE/5_game_source/D2Client/ENGINE/Gfx.cpp */
uint D2Common_10893(int *param_1,int *param_2,char *param_3,int param_4);   /* game binding -> D2Common.dll ordinal 10893, sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
int D2Common_10049(int param_1);   /* game binding -> D2Common.dll ordinal 10049, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint32_t * GetPtr_ITEMS_ItemMode_6fcf6c80(void);   /* game binding -> ITEMS_ItemMode_6fcf6c80, D2Game.dll +0xd6c80, sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
void D2Common_10111(int *param_1,uchar param_2);   /* game binding -> D2Common.dll ordinal 10111, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
uint D2Common_10258(int *param_1);   /* game binding -> D2Common.dll ordinal 10258, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcffdc0(void);   /* game binding -> UNIT_SUnitDmg_6fcffdc0, D2Game.dll +0xdfdc0, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
void D2Common_10210(int *param_1,int *param_2);   /* game binding -> D2Common.dll ordinal 10210, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint32_t * GetPtr_sub_6fdcc270(void);   /* game binding -> sub_6fdcc270, D2Common.dll +0x7c270, sigmaRE/5_game_source/D2Common/DATATBLS/_unattributed/between_DATATBLS_ItemTbls_and_DATATBLS_MissileTbls.cpp */
uint32_t * GetPtr_sub_6fd6a130(void);   /* game binding -> sub_6fd6a130, D2Common.dll +0x1a130, sigmaRE/5_game_source/D2Common/_unattributed/between_Chat_Chat_and_DRLG_DrlgVer.cpp */
uint D2Common_10666(int *param_1,int *param_2);   /* game binding -> D2Common.dll ordinal 10666, sigmaRE/5_game_source/D2Common/_unattributed/between_DATATBLS_OverlayTbls_and_DRLG_OutJung.cpp */
uint32_t * GetPtr_sub_6fac61b0(void);   /* game binding -> sub_6fac61b0, D2Client.dll +0x161b0, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
uint32_t * GetPtr_D2Client_loc_6fb714f7(void);   /* game binding -> D2Client_loc_6fb714f7, D2Client.dll +0xc14f7, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
uint32_t * GetPtr_D2Client_loc_6fb719a4(void);   /* game binding -> D2Client_loc_6fb719a4, D2Client.dll +0xc19a4, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
uint32_t * GetPtr_D2Client_loc_6fb1264e(void);   /* game binding -> D2Client_loc_6fb1264e, D2Client.dll +0x6264e, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbcc3b8(void);   /* game binding -> DAT_6fbcc3b8, D2Client.dll +0x11c3b8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_UNIT_CUnit_6fb59a20(void);   /* game binding -> UNIT_CUnit_6fb59a20, D2Client.dll +0xa9a20, sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
uint32_t * GetPtr_PATH_Path_6fd876f0(void);   /* game binding -> PATH_Path_6fd876f0, D2Common.dll +0x376f0, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void D2Common_10337(int param_1);   /* game binding -> D2Common.dll ordinal 10337, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void D2Common_10895(int param_1);   /* game binding -> D2Common.dll ordinal 10895, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint D2Common_10731(int param_1);   /* game binding -> D2Common.dll ordinal 10731, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint D2Common_10507_102a3700(int param_1);   /* game binding -> D2Common_10507, D2Common.dll ordinal 10507, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
uint D2Common_10828_102a3730(int param_1);   /* game binding -> D2Common_10828, D2Common.dll ordinal 10828, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
uint D2Common_10537(uint *param_1,int *param_2,int *param_3,uint *param_4,uint *param_5);   /* game binding -> D2Common.dll ordinal 10537, sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
uint D2Common_10353(int param_1);   /* game binding -> D2Common.dll ordinal 10353, sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
void D2Common_10245_102a37c0(uint *param_1,int param_2,int param_3,uint param_4);   /* game binding -> D2Common_10245, D2Common.dll ordinal 10245, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
void D2Common_11111_102a37f0(uint param_1,void *param_2);   /* game binding -> D2Common_11111, D2Common.dll ordinal 11111, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
void D2Common_11108_102a3820(void *param_1);   /* game binding -> D2Common_11108, D2Common.dll ordinal 11108, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
void D2Common_11127(uint param_1,int param_2);   /* game binding -> D2Common.dll ordinal 11127, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
void __fastcall GAME_SCmd_6fcab710(uint param_1,uint param_2,uint param_3,uchar param_4,ushort param_5,uint param_6);   /* game binding -> D2Game.dll +0x8b710, sigmaRE/5_game_source/D2Game/GAME/SCmd.cpp */
uint32_t * GetPtr_sub_6fc21420(void);   /* game binding -> sub_6fc21420, D2Game.dll +0x1420, sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcff780(void);   /* game binding -> UNIT_SUnitDmg_6fcff780, D2Game.dll +0xdf780, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcc1d10(void);   /* game binding -> SKILLS_Skills_6fcc1d10, D2Game.dll +0xa1d10, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcbf3b0(void);   /* game binding -> SKILLS_Skills_6fcbf3b0, D2Game.dll +0x9f3b0, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_sub_6fcae900(void);   /* game binding -> sub_6fcae900, D2Game.dll +0x8e900, sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Event_and_UNIT_sunitproxy.cpp */
uint32_t * GetPtr_GAME_Clients_6fc6ad10(void);   /* game binding -> GAME_Clients_6fc6ad10, D2Game.dll +0x4ad10, sigmaRE/5_game_source/D2Game/GAME/Clients.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcbea30(void);   /* game binding -> SKILLS_Skills_6fcbea30, D2Game.dll +0x9ea30, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_sub_6fd0fb80(void);   /* game binding -> sub_6fd0fb80, D2Game.dll +0xefb80, sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a2q8_and_GAME_Targets.cpp */
uint32_t * GetPtr_Stats_StatsEx_6fd88a80(void);   /* game binding -> Stats_StatsEx_6fd88a80, D2Common.dll +0x38a80, sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
uint32_t * GetPtr_D2Common_DAT_6fde4608(void);   /* game binding -> DAT_6fde4608, D2Common.dll +0x94608, sigmaRE/5_game_source/D2Common/include/globals.h */
uint32_t * GetPtr_PATH_Path_6fd823e0(void);   /* game binding -> PATH_Path_6fd823e0, D2Common.dll +0x323e0, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
void D2Common_10932(int *param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10932, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcbe490(void);   /* game binding -> SKILLS_Skills_6fcbe490, D2Game.dll +0x9e490, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fcbe450(void);   /* game binding -> SKILLS_Skills_6fcbe450, D2Game.dll +0x9e450, sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
uint __fastcall D2Common_10076(int *param_1);   /* game binding -> D2Common.dll +0x321c0, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint32_t * GetPtr_sub_6fcf16b0(void);   /* game binding -> sub_6fcf16b0, D2Game.dll +0xd16b0, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
uint32_t * GetPtr_INVENTORY_Inventory_6fd718a0(void);   /* game binding -> INVENTORY_Inventory_6fd718a0, D2Common.dll +0x218a0, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint32_t * GetPtr_sub_6fc2e990(void);   /* game binding -> sub_6fc2e990, D2Game.dll +0xe990, sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
uint32_t * GetPtr_sub_6fcf1650(void);   /* game binding -> sub_6fcf1650, D2Game.dll +0xd1650, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
uint32_t * GetPtr_D2Game_loc_6fceece0(void);   /* game binding -> D2Game_loc_6fceece0, D2Game.dll +0xcece0, sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
void D2Common_10760(int param_1,int param_2,uint *param_3);   /* game binding -> D2Common.dll ordinal 10760, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_DrlgLogic_and_DATATBLS_OverlayTbls.cpp */
uint32_t * GetPtr_D2Common_DAT_6fdefa58_102a45a0(void);   /* game binding -> DAT_6fdefa58, D2Common.dll +0x9fa58, sigmaRE/5_game_source/D2Common/include/globals.h */
uint32_t * GetPtr_D2Common_DAT_6fdefa5c(void);   /* game binding -> DAT_6fdefa5c, D2Common.dll +0x9fa5c, sigmaRE/5_game_source/D2Common/include/globals.h */
uint32_t * GetPtr_INVENTORY_Inventory_6fd6e1b0(void);   /* game binding -> INVENTORY_Inventory_6fd6e1b0, D2Common.dll +0x1e1b0, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint32_t * GetPtr_D2Common_DAT_6fdeefe4(void);   /* game binding -> DAT_6fdeefe4, D2Common.dll +0x9efe4, sigmaRE/5_game_source/D2Common/include/globals.h */
uint32_t * GetPtr_D2Common_DAT_6fdeefe8(void);   /* game binding -> DAT_6fdeefe8, D2Common.dll +0x9efe8, sigmaRE/5_game_source/D2Common/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fba46c4(void);   /* game binding -> DAT_6fba46c4, D2Client.dll +0xf46c4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fba46c8(void);   /* game binding -> DAT_6fba46c8, D2Client.dll +0xf46c8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fba8c9c(void);   /* game binding -> DAT_6fba8c9c, D2Client.dll +0xf8c9c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fba9e14(void);   /* game binding -> DAT_6fba9e14, D2Client.dll +0xf9e14, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fba9e18(void);   /* game binding -> DAT_6fba9e18, D2Client.dll +0xf9e18, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbaad50(void);   /* game binding -> DAT_6fbaad50, D2Client.dll +0xfad50, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbaad80(void);   /* game binding -> DAT_6fbaad80, D2Client.dll +0xfad80, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbaad94_102a4de0(void);   /* game binding -> DAT_6fbaad94, D2Client.dll +0xfad94, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbaada4_102a4e90(void);   /* game binding -> DAT_6fbaada4, D2Client.dll +0xfada4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbaadac_102a4f40(void);   /* game binding -> DAT_6fbaadac, D2Client.dll +0xfadac, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbaade4(void);   /* game binding -> DAT_6fbaade4, D2Client.dll +0xfade4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbaade8(void);   /* game binding -> DAT_6fbaade8, D2Client.dll +0xfade8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc3a68(void);   /* game binding -> DAT_6fbc3a68, D2Client.dll +0x113a68, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc2f4(void);   /* game binding -> DAT_6fbcc2f4, D2Client.dll +0x11c2f4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc2f8(void);   /* game binding -> DAT_6fbcc2f8, D2Client.dll +0x11c2f8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc068(void);   /* game binding -> DAT_6fbcc068, D2Client.dll +0x11c068, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc06c(void);   /* game binding -> DAT_6fbcc06c, D2Client.dll +0x11c06c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc3dc(void);   /* game binding -> DAT_6fbcc3dc, D2Client.dll +0x11c3dc, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc3de(void);   /* game binding -> DAT_6fbcc3de, D2Client.dll +0x11c3de, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc3f8(void);   /* game binding -> DAT_6fbcc3f8, D2Client.dll +0x11c3f8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc3fc(void);   /* game binding -> DAT_6fbcc3fc, D2Client.dll +0x11c3fc, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc39c(void);   /* game binding -> DAT_6fbcc39c, D2Client.dll +0x11c39c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc3a0(void);   /* game binding -> DAT_6fbcc3a0, D2Client.dll +0x11c3a0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc3a4(void);   /* game binding -> DAT_6fbcc3a4, D2Client.dll +0x11c3a4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc3f0(void);   /* game binding -> DAT_6fbcc3f0, D2Client.dll +0x11c3f0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc418(void);   /* game binding -> DAT_6fbcc418, D2Client.dll +0x11c418, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc534(void);   /* game binding -> DAT_6fbcc534, D2Client.dll +0x11c534, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc538(void);   /* game binding -> DAT_6fbcc538, D2Client.dll +0x11c538, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc540(void);   /* game binding -> DAT_6fbcc540, D2Client.dll +0x11c540, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc544(void);   /* game binding -> DAT_6fbcc544, D2Client.dll +0x11c544, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbd33f4(void);   /* game binding -> DAT_6fbd33f4, D2Client.dll +0x1233f4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbd3498(void);   /* game binding -> DAT_6fbd3498, D2Client.dll +0x123498, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbd349c(void);   /* game binding -> DAT_6fbd349c, D2Client.dll +0x12349c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbd34c0(void);   /* game binding -> DAT_6fbd34c0, D2Client.dll +0x1234c0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc4d4(void);   /* game binding -> DAT_6fbcc4d4, D2Client.dll +0x11c4d4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc97f8(void);   /* game binding -> DAT_6fbc97f8, D2Client.dll +0x1197f8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc985c(void);   /* game binding -> DAT_6fbc985c, D2Client.dll +0x11985c, sigmaRE/5_game_source/D2Client/include/globals.h */
int D2Common_10787(int *param_1,int *param_2);   /* game binding -> D2Common.dll ordinal 10787, sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
uint32_t * GetPtr_GAME_Targets_6fd0fe40(void);   /* game binding -> GAME_Targets_6fd0fe40, D2Game.dll +0xefe40, sigmaRE/5_game_source/D2Game/GAME/Targets.cpp */
uint32_t * GetPtr_D2Client_loc_6faed110(void);   /* game binding -> D2Client_loc_6faed110, D2Client.dll +0x3d110, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbc9dd0(void);   /* game binding -> DAT_6fbc9dd0, D2Client.dll +0x119dd0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc9d30(void);   /* game binding -> DAT_6fbc9d30, D2Client.dll +0x119d30, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc9e20(void);   /* game binding -> DAT_6fbc9e20, D2Client.dll +0x119e20, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc9d70(void);   /* game binding -> DAT_6fbc9d70, D2Client.dll +0x119d70, sigmaRE/5_game_source/D2Client/include/globals.h */
uint sub_6facbf20(uint param_1,int param_2,int param_3,byte param_4);   /* game binding -> D2Client.dll +0x1bf20, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_Player_and_UNIT_CUnitEvent.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbca2e4(void);   /* game binding -> DAT_6fbca2e4, D2Client.dll +0x11a2e4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_sub_6fae91e0(void);   /* game binding -> sub_6fae91e0, D2Client.dll +0x391e0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_SkillDesc_and_UI_CmdTbl.cpp */
uint32_t * GetPtr_sub_6fae9f30(void);   /* game binding -> sub_6fae9f30, D2Client.dll +0x39f30, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbca2e6(void);   /* game binding -> DAT_6fbca2e6, D2Client.dll +0x11a2e6, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbd23c8(void);   /* game binding -> DAT_6fbd23c8, D2Client.dll +0x1223c8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint __cdecl Storm_578(char *param_1,uint param_2,char *param_3);   /* game binding -> Storm.dll +0x3ba80, sigmaRE/5_game_source/Storm/_unattributed/code_6f634900.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbcc1e8(void);   /* game binding -> DAT_6fbcc1e8, D2Client.dll +0x11c1e8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc1ec(void);   /* game binding -> DAT_6fbcc1ec, D2Client.dll +0x11c1ec, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc414(void);   /* game binding -> DAT_6fbcc414, D2Client.dll +0x11c414, sigmaRE/5_game_source/D2Client/include/globals.h */
uint Storm_423(uint *param_1,LPCSTR param_2,byte param_3,ulong *param_4);   /* game binding -> Storm.dll +0x3c1d0, sigmaRE/5_game_source/Storm/_unattributed/code_6f634900.cpp */
uint Storm_426(uint *param_1,LPCSTR param_2,uint param_3,uint32_t param_s4);   /* game binding -> Storm.dll +0x3c080, sigmaRE/5_game_source/Storm/_unattributed/code_6f634900.cpp */
uint Storm_422(uint *param_1,LPCSTR param_2,uint param_3,uint32_t param_4,DWORD param_5);   /* game binding -> Storm.dll ordinal 422, sigmaRE/5_game_source/Storm/_unattributed/code_6f634900.cpp */
uint sub_6fb6e350(int param_1,int param_2);   /* game binding -> D2Client.dll +0xbe350, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
void D2Common_10991(int param_1,int param_2,uint *param_3);   /* game binding -> D2Common.dll ordinal 10991, sigmaRE/5_game_source/D2Common/DRLG/DrlgAnim.cpp */
uint D2Common_10835(int *param_1);   /* game binding -> D2Common.dll ordinal 10835, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
uint32_t * GetPtr_D2Common_DAT_6fded378(void);   /* game binding -> DAT_6fded378, D2Common.dll +0x9d378, sigmaRE/5_game_source/D2Common/include/globals.h */
uint32_t * GetPtr_D2Common_DAT_6fded390(void);   /* game binding -> DAT_6fded390, D2Common.dll +0x9d390, sigmaRE/5_game_source/D2Common/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbca774(void);   /* game binding -> DAT_6fbca774, D2Client.dll +0x11a774, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc468(void);   /* game binding -> DAT_6fbcc468, D2Client.dll +0x11c468, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc46c(void);   /* game binding -> DAT_6fbcc46c, D2Client.dll +0x11c46c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc470(void);   /* game binding -> DAT_6fbcc470, D2Client.dll +0x11c470, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc474(void);   /* game binding -> DAT_6fbcc474, D2Client.dll +0x11c474, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc47c(void);   /* game binding -> DAT_6fbcc47c, D2Client.dll +0x11c47c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fba5384(void);   /* game binding -> DAT_6fba5384, D2Client.dll +0xf5384, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fba538c(void);   /* game binding -> DAT_6fba538c, D2Client.dll +0xf538c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fba5390(void);   /* game binding -> DAT_6fba5390, D2Client.dll +0xf5390, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fba5394(void);   /* game binding -> DAT_6fba5394, D2Client.dll +0xf5394, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcb99c(void);   /* game binding -> DAT_6fbcb99c, D2Client.dll +0x11b99c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc4b0(void);   /* game binding -> DAT_6fbcc4b0, D2Client.dll +0x11c4b0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc4b4(void);   /* game binding -> DAT_6fbcc4b4, D2Client.dll +0x11c4b4, sigmaRE/5_game_source/D2Client/include/globals.h */
void sub_6fad65e0(void);   /* game binding -> D2Client.dll +0x265e0, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitSnd_and_UI_panel.cpp */
uint32_t * GetPtr_sub_6fad77e0(void);   /* game binding -> sub_6fad77e0, D2Client.dll +0x277e0, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitSnd_and_UI_panel.cpp */
uint32_t * GetPtr_ENGINE_Gfx_6fb1b5a0(void);   /* game binding -> ENGINE_Gfx_6fb1b5a0, D2Client.dll +0x6b5a0, sigmaRE/5_game_source/D2Client/ENGINE/Gfx.cpp */
uint32_t * GetPtr_ENGINE_GfxUtil_6fb1e2c0(void);   /* game binding -> ENGINE_GfxUtil_6fb1e2c0, D2Client.dll +0x6e2c0, sigmaRE/5_game_source/D2Client/ENGINE/GfxUtil.cpp */
uint32_t * GetPtr_ENGINE_Gfx_6fb1d280(void);   /* game binding -> ENGINE_Gfx_6fb1d280, D2Client.dll +0x6d280, sigmaRE/5_game_source/D2Client/ENGINE/Gfx.cpp */
void ENGINE_Gfx_6fb1aee0(int *param_1,uint param_2,int param_3,int param_4,int param_5,int param_6);   /* game binding -> D2Client.dll +0x6aee0, sigmaRE/5_game_source/D2Client/ENGINE/Gfx.cpp */
uint32_t * GetPtr_ENGINE_GfxUtil_6fb1db40(void);   /* game binding -> ENGINE_GfxUtil_6fb1db40, D2Client.dll +0x6db40, sigmaRE/5_game_source/D2Client/ENGINE/GfxUtil.cpp */
uint32_t * GetPtr_ENGINE_Gfx_6fb19b40(void);   /* game binding -> ENGINE_Gfx_6fb19b40, D2Client.dll +0x69b40, sigmaRE/5_game_source/D2Client/ENGINE/Gfx.cpp */
uint32_t * GetPtr_D2Client_loc_6fb18f40(void);   /* game binding -> D2Client_loc_6fb18f40, D2Client.dll +0x68f40, sigmaRE/5_game_source/D2Client/ENGINE/Gfx.cpp */
uint D2Common_10530(int *param_1);   /* game binding -> D2Common.dll ordinal 10530, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint32_t * GetPtr_INVENTORY_Inventory_6fd6fb50(void);   /* game binding -> INVENTORY_Inventory_6fd6fb50, D2Common.dll +0x1fb50, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
void D2Common_10457(int *param_1,int param_2,int param_3);   /* game binding -> D2Common.dll ordinal 10457, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint32_t * GetPtr_INVENTORY_Inventory_6fd70e80(void);   /* game binding -> INVENTORY_Inventory_6fd70e80, D2Common.dll +0x20e80, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
int * D2Common_10062(int *param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 10062, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint D2Common_10673(int param_1,uchar *param_2);   /* game binding -> D2Common.dll ordinal 10673, sigmaRE/5_game_source/D2Common/DRLG/Outdoors.cpp */
uint32_t * GetPtr_sub_6fac3ce0(void);   /* game binding -> sub_6fac3ce0, D2Client.dll +0x13ce0, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
int sub_6fae9c30_102a8050(void);   /* game binding -> sub_6fae9c30, D2Client.dll +0x39c30, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
void sub_6fb4f460(void);   /* game binding -> D2Client.dll +0x9f460, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbcbc10(void);   /* game binding -> DAT_6fbcbc10, D2Client.dll +0x11bc10, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_sub_6fc6eb50(void);   /* game binding -> sub_6fc6eb50, D2Game.dll +0x4eb50, sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Clients_and_SKILLS_SkillNec.cpp */
uint32_t * GetPtr_sub_6fc6e180(void);   /* game binding -> sub_6fc6e180, D2Game.dll +0x4e180, sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Clients_and_SKILLS_SkillNec.cpp */
uint32_t * GetPtr_UNIT_Party_6fcbc840(void);   /* game binding -> UNIT_Party_6fcbc840, D2Game.dll +0x9c840, sigmaRE/5_game_source/D2Game/UNIT/Party.cpp */
uint32_t * GetPtr_sub_6fcae2a0(void);   /* game binding -> sub_6fcae2a0, D2Game.dll +0x8e2a0, sigmaRE/5_game_source/D2Game/GAME/_unattributed/between_GAME_SCmd_and_GAME_Event.cpp */
uint32_t * GetPtr_PLAYER_PlayerPets_6fcb6ea0(void);   /* game binding -> PLAYER_PlayerPets_6fcb6ea0, D2Game.dll +0x96ea0, sigmaRE/5_game_source/D2Game/PLAYER/PlayerPets.cpp */
uint32_t * GetPtr_PLAYER_PlayerPets_6fcb67b0(void);   /* game binding -> PLAYER_PlayerPets_6fcb67b0, D2Game.dll +0x967b0, sigmaRE/5_game_source/D2Game/PLAYER/PlayerPets.cpp */
uint32_t * GetPtr_PLAYER_PlayerPets_6fcb6a40(void);   /* game binding -> PLAYER_PlayerPets_6fcb6a40, D2Game.dll +0x96a40, sigmaRE/5_game_source/D2Game/PLAYER/PlayerPets.cpp */
uint32_t * GetPtr_Ai_AiThink4_6fcc3ae0(void);   /* game binding -> Ai_AiThink4_6fcc3ae0, D2Game.dll +0xa3ae0, sigmaRE/5_game_source/D2Game/Ai/AiThink4.cpp */
uint32_t * GetPtr_Ai_AiThink4_6fcc4890(void);   /* game binding -> Ai_AiThink4_6fcc4890, D2Game.dll +0xa4890, sigmaRE/5_game_source/D2Game/Ai/AiThink4.cpp */
uint32_t * GetPtr_Ai_AiThink4_6fcc44c0(void);   /* game binding -> Ai_AiThink4_6fcc44c0, D2Game.dll +0xa44c0, sigmaRE/5_game_source/D2Game/Ai/AiThink4.cpp */
uint32_t * GetPtr_sub_6fcbe290(void);   /* game binding -> sub_6fcbe290, D2Game.dll +0x9e290, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_Party_and_SKILLS_Skills.cpp */
uint32_t * GetPtr_UNIT_SUnitEvent_6fc57190(void);   /* game binding -> UNIT_SUnitEvent_6fc57190, D2Game.dll +0x37190, sigmaRE/5_game_source/D2Game/UNIT/SUnitEvent.cpp */
uint32_t * GetPtr_UNIT_SUnitEvent_6fc57110(void);   /* game binding -> UNIT_SUnitEvent_6fc57110, D2Game.dll +0x37110, sigmaRE/5_game_source/D2Game/UNIT/SUnitEvent.cpp */
uint32_t * GetPtr_sub_6fcb2ed0(void);   /* game binding -> sub_6fcb2ed0, D2Game.dll +0x92ed0, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfa750(void);   /* game binding -> UNIT_SUnitDmg_6fcfa750, D2Game.dll +0xda750, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfff10(void);   /* game binding -> UNIT_SUnitDmg_6fcfff10, D2Game.dll +0xdff10, sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
uint32_t * GetPtr_PLAYER_PlrModes_6fc98230(void);   /* game binding -> PLAYER_PlrModes_6fc98230, D2Game.dll +0x78230, sigmaRE/5_game_source/D2Game/PLAYER/PlrModes.cpp */
uint32_t * GetPtr_UNIT_CUnit_6fb55f70(void);   /* game binding -> UNIT_CUnit_6fb55f70, D2Client.dll +0xa5f70, sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fb53040(void);   /* game binding -> SKILLS_Skills_6fb53040, D2Client.dll +0xa3040, sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
uint32_t * GetPtr_SKILLS_SkillsBar_6fb779c0(void);   /* game binding -> SKILLS_SkillsBar_6fb779c0, D2Client.dll +0xc79c0, sigmaRE/5_game_source/D2Client/SKILLS/SkillsBar.cpp */
uint D2Common_10577(uint param_1);   /* game binding -> D2Common.dll ordinal 10577, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
uint __fastcall sub_6fadb680(int *param_1);   /* game binding -> D2Client.dll +0x2b680, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitMode_and_SKILLS_SkillsPal.cpp */
uint32_t * GetPtr_sub_6fad42b0(void);   /* game binding -> sub_6fad42b0, D2Client.dll +0x242b0, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitSnd_and_UI_panel.cpp */
void D2Common_10739(uint *param_1,int param_2,int param_3,int param_4);   /* game binding -> D2Common.dll ordinal 10739, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint D2Common_10854(int *param_1,int *param_2);   /* game binding -> D2Common.dll ordinal 10854, sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
uint32_t * GetPtr_D2Game_DAT_6fd2da44(void);   /* game binding -> DAT_6fd2da44, D2Game.dll +0x10da44, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_sub_6fd00a20(void);   /* game binding -> sub_6fd00a20, D2Game.dll +0xe0a20, sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
uint32_t * GetPtr_D2Game_DAT_6fd2d970_102a91f0(void);   /* game binding -> DAT_6fd2d970, D2Game.dll +0x10d970, sigmaRE/5_game_source/D2Game/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc3e8(void);   /* game binding -> DAT_6fbcc3e8, D2Client.dll +0x11c3e8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_UNIT_UnitMode_6fada6c0(void);   /* game binding -> UNIT_UnitMode_6fada6c0, D2Client.dll +0x2a6c0, sigmaRE/5_game_source/D2Client/UNIT/UnitMode.cpp */
uint32_t * GetPtr_ENGINE_Gfx_6fb1c490(void);   /* game binding -> ENGINE_Gfx_6fb1c490, D2Client.dll +0x6c490, sigmaRE/5_game_source/D2Client/ENGINE/Gfx.cpp */
uint32_t * GetPtr_SKILLS_Skills_6fb51a50(void);   /* game binding -> SKILLS_Skills_6fb51a50, D2Client.dll +0xa1a50, sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbcc268(void);   /* game binding -> DAT_6fbcc268, D2Client.dll +0x11c268, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbf34(void);   /* game binding -> DAT_6fbcbf34, D2Client.dll +0x11bf34, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbf40(void);   /* game binding -> DAT_6fbcbf40, D2Client.dll +0x11bf40, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbf30(void);   /* game binding -> DAT_6fbcbf30, D2Client.dll +0x11bf30, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc264(void);   /* game binding -> DAT_6fbcc264, D2Client.dll +0x11c264, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcbf38(void);   /* game binding -> DAT_6fbcbf38, D2Client.dll +0x11bf38, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc34c(void);   /* game binding -> DAT_6fbcc34c, D2Client.dll +0x11c34c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc354(void);   /* game binding -> DAT_6fbcc354, D2Client.dll +0x11c354, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc368(void);   /* game binding -> DAT_6fbcc368, D2Client.dll +0x11c368, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc36c(void);   /* game binding -> DAT_6fbcc36c, D2Client.dll +0x11c36c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc370(void);   /* game binding -> DAT_6fbcc370, D2Client.dll +0x11c370, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc4c0(void);   /* game binding -> DAT_6fbcc4c0, D2Client.dll +0x11c4c0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc4c4(void);   /* game binding -> DAT_6fbcc4c4, D2Client.dll +0x11c4c4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc4c8(void);   /* game binding -> DAT_6fbcc4c8, D2Client.dll +0x11c4c8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc4cc(void);   /* game binding -> DAT_6fbcc4cc, D2Client.dll +0x11c4cc, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc4d0(void);   /* game binding -> DAT_6fbcc4d0, D2Client.dll +0x11c4d0, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_sub_6fad2390(void);   /* game binding -> sub_6fad2390, D2Client.dll +0x22390, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_CUnitEvent_and_UNIT_UnitSnd.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbc9638(void);   /* game binding -> DAT_6fbc9638, D2Client.dll +0x119638, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc964c(void);   /* game binding -> DAT_6fbc964c, D2Client.dll +0x11964c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_sub_6fb01e30(void);   /* game binding -> sub_6fb01e30, D2Client.dll +0x51e30, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
uint32_t * GetPtr_UNIT_Monster_6fb01860(void);   /* game binding -> UNIT_Monster_6fb01860, D2Client.dll +0x51860, sigmaRE/5_game_source/D2Client/UNIT/Monster.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbcc2f8_102aa3d0(void);   /* game binding -> DAT_6fbcc2f8, D2Client.dll +0x11c2f8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc1f8_102aa480(void);   /* game binding -> DAT_6fbcc1f8, D2Client.dll +0x11c1f8, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc1fc(void);   /* game binding -> DAT_6fbcc1fc, D2Client.dll +0x11c1fc, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_sub_6fb6fec0(void);   /* game binding -> sub_6fb6fec0, D2Client.dll +0xbfec0, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
void __fastcall D2Win_10177_102aa690(uint param_1,int *param_2,int *param_3);   /* game binding -> D2Win_10177, D2Win.dll +0x12700, sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
void D2Common_10882(int *param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 10882, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
void D2Common_11118(int *param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 11118, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
uint D2Common_10651(int *param_1);   /* game binding -> D2Common.dll ordinal 10651, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
uint D2Common_11142(int *param_1);   /* game binding -> D2Common.dll ordinal 11142, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
int D2Common_11080(int *param_1);   /* game binding -> D2Common.dll ordinal 11080, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
int D2Common_11168(int *param_1);   /* game binding -> D2Common.dll ordinal 11168, sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
void sub_6fb70d30(int *param_1);   /* game binding -> D2Client.dll +0xc0d30, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbaadb4(void);   /* game binding -> DAT_6fbaadb4, D2Client.dll +0xfadb4, sigmaRE/5_game_source/D2Client/include/globals.h */
uint __fastcall D2Common_10995(int param_1);   /* game binding -> D2Common.dll +0x36760, sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbcc098(void);   /* game binding -> DAT_6fbcc098, D2Client.dll +0x11c098, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcc4f0(void);   /* game binding -> DAT_6fbcc4f0, D2Client.dll +0x11c4f0, sigmaRE/5_game_source/D2Client/include/globals.h */
int sub_6fb14ee0(uint32_t param_1);   /* game binding -> D2Client.dll +0x64ee0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb14f50(uint32_t param_1);   /* game binding -> D2Client.dll +0x64f50, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb14e00(uint32_t param_1);   /* game binding -> D2Client.dll +0x64e00, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
int sub_6fb14d20(uint32_t param_1);   /* game binding -> D2Client.dll +0x64d20, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
void sub_6fac6a90(void);   /* game binding -> D2Client.dll +0x16a90, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbcb82c(void);   /* game binding -> DAT_6fbcb82c, D2Client.dll +0x11b82c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fba856c(void);   /* game binding -> DAT_6fba856c, D2Client.dll +0xf856c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbcb854(void);   /* game binding -> DAT_6fbcb854, D2Client.dll +0x11b854, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_sub_6fb71c40(void);   /* game binding -> sub_6fb71c40, D2Client.dll +0xc1c40, sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
uint32_t * GetPtr_UNIT_CUnit_6fb556c0(void);   /* game binding -> UNIT_CUnit_6fb556c0, D2Client.dll +0xa56c0, sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
uint32_t * GetPtr_UNIT_CUnit_6fb55b90(void);   /* game binding -> UNIT_CUnit_6fb55b90, D2Client.dll +0xa5b90, sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbc9968(void);   /* game binding -> DAT_6fbc9968, D2Client.dll +0x119968, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc9a58(void);   /* game binding -> DAT_6fbc9a58, D2Client.dll +0x119a58, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc9b48(void);   /* game binding -> DAT_6fbc9b48, D2Client.dll +0x119b48, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbc9c38(void);   /* game binding -> DAT_6fbc9c38, D2Client.dll +0x119c38, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_sub_6faedcf0(void);   /* game binding -> sub_6faedcf0, D2Client.dll +0x3dcf0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
uint32_t * GetPtr_sub_6faee0c0(void);   /* game binding -> sub_6faee0c0, D2Client.dll +0x3e0c0, sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbcbc98(void);   /* game binding -> DAT_6fbcbc98, D2Client.dll +0x11bc98, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb8bc54(void);   /* game binding -> DAT_6fb8bc54, D2Client.dll +0xdbc54, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb8bc58(void);   /* game binding -> DAT_6fb8bc58, D2Client.dll +0xdbc58, sigmaRE/5_game_source/D2Client/include/globals.h */
uint D2Common_11059(int *param_1);   /* game binding -> D2Common.dll ordinal 11059, sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
uint32_t * GetPtr_D2Win_DAT_6f9aa658(void);   /* game binding -> DAT_6f9aa658, D2Win.dll +0xca658, sigmaRE/5_game_source/D2Win/include/globals.h */
uint32_t * GetPtr_D2Win_DAT_6f9aa65c(void);   /* game binding -> DAT_6f9aa65c, D2Win.dll +0xca65c, sigmaRE/5_game_source/D2Win/include/globals.h */
uint D2Common_10633(int param_1,int param_2);   /* game binding -> D2Common.dll ordinal 10633, sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
void D2Common_10742(int param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 10742, sigmaRE/5_game_source/D2Common/_unattributed/between_Stats_StatsEx_and_DUNGEON_Dungeon.cpp */
void D2Common_10880(int param_1,uint param_2);   /* game binding -> D2Common.dll ordinal 10880, sigmaRE/5_game_source/D2Common/_unattributed/between_Stats_StatsEx_and_DUNGEON_Dungeon.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbacdd6(void);   /* game binding -> DAT_6fbacdd6, D2Client.dll +0xfcdd6, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbacdd5(void);   /* game binding -> DAT_6fbacdd5, D2Client.dll +0xfcdd5, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_UNIT_CUnit_6fb5a090(void);   /* game binding -> UNIT_CUnit_6fb5a090, D2Client.dll +0xaa090, sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
void UNIT_CUnit_6fb59f00(void);   /* game binding -> D2Client.dll +0xa9f00, sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbacd8c(void);   /* game binding -> DAT_6fbacd8c, D2Client.dll +0xfcd8c, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbacdcd(void);   /* game binding -> DAT_6fbacdcd, D2Client.dll +0xfcdcd, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbacdd5_102abb50(void);   /* game binding -> DAT_6fbacdd5, D2Client.dll +0xfcdd5, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbacdbc(void);   /* game binding -> DAT_6fbacdbc, D2Client.dll +0xfcdbc, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbacdbd(void);   /* game binding -> DAT_6fbacdbd, D2Client.dll +0xfcdbd, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fb91180(void);   /* game binding -> DAT_6fb91180, D2Client.dll +0xe1180, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_D2Client_DAT_6fbbb238(void);   /* game binding -> DAT_6fbbb238, D2Client.dll +0x10b238, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_sub_6faf7d60(void);   /* game binding -> sub_6faf7d60, D2Client.dll +0x47d60, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbcbc90(void);   /* game binding -> DAT_6fbcbc90, D2Client.dll +0x11bc90, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_UNIT_CUnit_6fb554a0(void);   /* game binding -> UNIT_CUnit_6fb554a0, D2Client.dll +0xa54a0, sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
uint32_t * GetPtr_sub_6fad9990(void);   /* game binding -> sub_6fad9990, D2Client.dll +0x29990, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_panel_and_UNIT_UnitMode.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbcc484(void);   /* game binding -> DAT_6fbcc484, D2Client.dll +0x11c484, sigmaRE/5_game_source/D2Client/include/globals.h */
uint32_t * GetPtr_sub_6fab1400(void);   /* game binding -> sub_6fab1400, D2Client.dll +0x1400, sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fab1000.cpp */
int __fastcall UNIT_CUnit_6fb55b40(int param_1,int param_2);   /* game binding -> D2Client.dll +0xa5b40, sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
uint __fastcall sub_6fad16a0_102ac310(int param_1);   /* game binding -> sub_6fad16a0, D2Client.dll +0x216a0, sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_CUnitEvent_and_UNIT_UnitSnd.cpp */
uint32_t * GetPtr_ENGINE_Gfx_6fb1ba90(void);   /* game binding -> ENGINE_Gfx_6fb1ba90, D2Client.dll +0x6ba90, sigmaRE/5_game_source/D2Client/ENGINE/Gfx.cpp */
uint32_t * GetPtr_sub_6fb166d0(void);   /* game binding -> sub_6fb166d0, D2Client.dll +0x666d0, sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
uint32_t * GetPtr_D2Client_DAT_6fbc9840(void);   /* game binding -> DAT_6fbc9840, D2Client.dll +0x119840, sigmaRE/5_game_source/D2Client/include/globals.h */
uint __fastcall D2Common_10858(uint *param_1);   /* game binding -> D2Common.dll +0x4e1c0, sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */

/* ---- _unattributed/between_functions_D2ServerFunctions_and_events_SkillEvents_after_unit30.cpp ---- */
void thunk_FUN_102ad9b0(void);
void thunk_FUN_102ada30(void);
void __fastcall thunk_FUN_102ada80(uint32_t param_1,uint param_2,uint32_t reg_EBX);
void __fastcall sub_102ae080(int param_1,int param_2);
void sub_102ae100(int param_1,int param_2);
void __fastcall sub_102ae170(int param_1,int param_2);
void __fastcall sub_Wraps_D2Game_ITEMS_ItemMode_102ae2f0(int param_1,int *param_2);

/* ---- _unattributed/between_events_SkillEvents_and_functions_CubeFunctions_after_unit33.cpp ---- */
void __fastcall sub_102b02d0(int param_1,uint32_t *param_2,uint32_t *param_3);
int * __fastcall sub_102b0320(uint32_t param_1,int *param_2);
uint32_t __fastcall sub_102b03b0(int param_1,int *param_2,int param_3);
uint32_t __fastcall sub_102b04d0(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6);

/* ---- _unattributed/between_events_SkillEvents_and_functions_CubeFunctions_after_unit34.cpp ---- */
void sub_102bb3c0(void);
uint32_t __thiscall sub_102bb3f0(void *this,uint param_1,uint32_t param_2);
uint8_t __fastcall sub_102bb490(int param_1,char *param_2);
bool __thiscall sub_102bb4b0(void *this,int param_1);
uint32_t __fastcall sub_102bb4d0(int param_1,uint reg_EAX,int reg_EDX);
uint64_t __fastcall sub_102bb4f0(int param_1,int param_2,uint32_t reg_EAX);
char __fastcall sub_102bb520(int *param_1);
uint32_t __fastcall sub_102bb580(int *param_1);
uint32_t __fastcall sub_102bb5f0(int param_1,int param_2,uint32_t reg_ESI);
uint __fastcall sub_102bb8d0(int param_1,uint reg_EAX);
uint __fastcall sub_102bb910(int param_1,uint reg_EAX,uint reg_EDX);
uint32_t __fastcall sub_102bb940(int param_1,int param_2,uint reg_EAX);
uint8_t __fastcall sub_102bb9c0(int param_1);
uint32_t sub_102bba50(uint32_t *param_1,uint param_2,uint32_t param_3,uint32_t param_4,int *param_5);
void __fastcall sub_102bbdf0(int param_1,int param_2,int *param_3,int *param_4);
int __fastcall sub_102bbf50(int param_1);
int sub_Hook_sub_6fc92fc0_102bbff0(void *param_1,int *param_2,uint32_t *param_3,uint param_4,int *param_5);
int __fastcall sub_102bc770(int param_1);
void __fastcall sub_102bc790(int param_1,void *param_2);

/* ---- _unattributed/between_functions_CubeFunctions_and_functions_D2NewFunctions_after_unit35.cpp ---- */
void sub_Hook_sub_6fc934e0_102bdb70(void *param_1,int *param_2);
uint32_t __fastcall sub_102bdfe0(uint32_t param_1);
uint __thiscall sub_102be000(void *this,int *param_1);
uint32_t __fastcall sub_102be030(uint32_t param_1,uint32_t param_2,uint32_t param_3);
uint32_t sub_102be0a0(uint32_t param_1,uint32_t param_2);
uint32_t sub_102be0c0(uint32_t param_1,uint32_t param_2);
uint32_t __thiscall sub_102be110(void *this,uint32_t param_1,uint param_2);
void * __thiscall sub_102be1e0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __cdecl sub_102be260(uint32_t param_1);
int sub_102be290(uint32_t param_1);
bool sub_102be2c0(int param_1,int param_2);

/* ---- _unattributed/between_functions_HelperFunctions_and_functions_ItemFunctions_after_unit38.cpp ---- */
void __thiscall sub_102d3c18(void *this,uint param_1);
uint32_t __fastcall sub_102d3c20(int param_1,int param_2);
uint32_t __fastcall sub_102d3d10(int param_1,int param_2,int param_3);
void __fastcall sub_102d3e40(int param_1,int param_2,int param_3);
void __fastcall sub_102d3f00(int param_1);

/* ---- _unattributed/between_functions_HelperFunctions_and_functions_ItemFunctions_after_unit39.cpp ---- */
uint32_t __fastcall sub_102d40a0(int param_1);
uint32_t __fastcall sub_102d4150(int param_1);
void __fastcall sub_102d41d0(int param_1);
uint sub_102d42d0(int *param_1);
char __fastcall sub_102d4390(int param_1);
uint32_t sub_102d43e0(int param_1,uint32_t param_2);
int sub_102d4470(int param_1);
void sub_102d44e0(int param_1,int param_2);
void sub_102d4560(int param_1,uint32_t param_2);
void sub_102d45a0(int param_1,int *reg_ECX,int reg_EDX);
int __fastcall sub_102d46c0(int param_1,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5, uint32_t param_6,uint32_t param_7);
uint32_t __fastcall sub_102d4750(int param_1,int param_2,int param_3,uint32_t param_4,uint32_t param_5, uint32_t param_6,uint32_t param_7);
uint __fastcall sub_102d47d0(int param_1,int param_2,int param_3,uint32_t param_4,uint32_t param_5, uint32_t param_6,uint32_t param_7);

/* ---- _unattributed/between_functions_ItemFunctions_and_functions_SaveFunctions_after_unit41.cpp ---- */
void __fastcall thunk_FUN_102deab0(uint32_t param_1,void *param_2);
uint32_t __fastcall sub_102de7e0(uint32_t *param_1);
void __fastcall sub_102de7f0(uint32_t *param_1);
void __thiscall sub_102de820(void *this,uint32_t param_1);
void sub_102de8f0(void);
void __fastcall sub_102de910(uint32_t param_1);
int __fastcall sub_102dea20(uint32_t *param_1);
void sub_102dea50(void);
void sub_stl_102dea70(void);
void __fastcall sub_102dea80(uint32_t param_1,uint32_t param_2);
void __fastcall sub_102deab0(uint32_t param_1,void *param_2);
void __fastcall sub_102deac0(int param_1,int param_2);
void __fastcall sub_102dead0(uint32_t param_1,void *param_2);
uint32_t __fastcall sub_102deae0(uint32_t param_1,uint32_t param_2);
void __fastcall sub_102deb30(int param_1,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5);
uint32_t __fastcall sub_102deb60(int *param_1);
uint64_t __fastcall sub_102dec00(int param_1);
void __fastcall sub_102decd0(int param_1);

/* ---- _unattributed/after_functions_SaveFunctions_unit49_102ecd80.cpp ---- */
void __fastcall sub_102ecd80(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void sub_102ecdb0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102ecdd0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_102ecdf0(uint32_t param_1);
void sub_102ece10(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102ece30(uint32_t param_1);
void sub_Hook_Ai_AiThink4_6fccc410_102ece40(int *reg_ESI,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7);
void sub_102ece70(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7);
void sub_Hook_GAME_Game_6fc4c830_102ecea0(int reg_EBX,int reg_ESI,uint32_t param_3,uint32_t param_4);
void sub_102ecec0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_Hook_GAME_Game_6fc4d500_102ecee0(int reg_EAX,int param_2);
void __thiscall sub_Hook_sub_6fc74320_102ecef0(uint *param_1,int param_2,int *param_3,uint32_t param_4);
void sub_Hook_D2Game_10006_102ecf10(int reg_ESI,int reg_EDI);
void sub_Hook_sub_6fc761a0_102ecf20(int reg_ESI);
void sub_Hook_sub_6faf3920_102ecf30(int reg_ESI);
void sub_102ecf40(uint32_t param_1,uint32_t param_2);
void __thiscall sub_102ecf60(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void __thiscall sub_Hook_sub_6fcef810_102ecf80(uint32_t param_1,int param_2,uint32_t param_3,void *param_4,uint32_t param_5);
void __thiscall sub_102ecfa0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_Hook_sub_6fd0b090_102ecfc0(int *reg_EBX);
void sub_102ecfd0(void);
void sub_Hook_ITEMS_ItemMode_6fcf9470_102ecfe0(uint reg_EAX,int reg_ESI);
void sub_102ed000(void);
void sub_Hook_SKILLS_SkillNec_6fc6f970_102ed020(int *reg_EAX,uint reg_ESI,uint32_t reg_EDI,uint32_t reg_EDX);
void sub_102ed030(void);
void sub_Hook_UNIT_SUnitDmg_6fcfc0b0_102ed040(int *reg_EAX,uint32_t reg_EDI);
void __thiscall sub_102ed050(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_102ed070(uint32_t param_1);
void sub_102ed090(void);
void sub_102ed0b0(uint32_t param_1,uint32_t param_2);
void sub_102ed0d0(uint32_t param_1,uint32_t param_2);
void sub_102ed0f0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void sub_102ed120(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_Hook_UI_SkillDesc_6fae2f30_102ed140(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,int param_6,uint32_t param_7,int *param_8,uint32_t param_9, int param_10,int param_11,int *param_12,uint32_t param_13,int param_14, uint8_t *reg_ESI,int reg_EDI);
void sub_102ed170(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7);
void sub_Hook_SKILLS_Skills_6fb52950_102ed1a0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8, uint32_t param_9,uint32_t param_10,uint32_t param_11,uint32_t param_12, uint32_t param_13,uint32_t param_14,int reg_EAX,uint32_t reg_ESI);
uint64_t sub_Hook_sub_6fcb2bb0_102ed1c0(uint32_t reg_EAX,uint32_t reg_EDX,uint32_t reg_EBX);
void sub_Hook_UI_SkillDesc_6fae0340_102ed1e0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8, uint32_t param_9,uint32_t param_10,uint32_t param_11,uint32_t param_12, int reg_EAX,uint32_t reg_ESI);
void __fastcall sub_102ed200(uint32_t param_1);
void sub_Hook_sub_6fc34bf0_102ed210(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,int reg_EAX,int reg_EBX);
void sub_102ed220(uint32_t param_1,uint32_t param_2);
void sub_Hook_sub_6fc95e10_102ed240(int *reg_ESI,int param_2);
void sub_Hook_sub_6fcc35d0_102ed250(int *reg_ESI,int param_2,int param_3);
void sub_Hook_sub_6fc33de0_102ed270(int *reg_EBX,int param_2,uint32_t param_3,int param_4,uint32_t reg_ECX, uint32_t reg_EDX);
void sub_Hook_sub_6fc33de0_102ed290(int reg_EAX,int *reg_EBX,uint32_t param_3,uint32_t reg_ECX,uint32_t reg_EDX);
void sub_Hook_UNIT_SUnitDmg_6fcfd450_102ed2a0(uint32_t reg_EAX,int *reg_EDI,uint32_t param_3,int param_4,uint32_t param_5, int param_6,uint32_t param_7);
void sub_102ed2c0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102ed2e0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void sub_Hook_sub_6fcba7c0_102ed300(int *reg_EAX,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void sub_102ed320(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_Hook_sub_6fc5ae10_102ed340(int *reg_EAX,uint32_t param_2,int *param_3,byte *param_4);
void sub_102ed360(void);
void sub_Hook_sub_6fc5da60_102ed380(void);
void sub_102ed390(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_Hook_UNIT_Missile_6fb61420_102ed3b0(uint32_t reg_EBX,int reg_ESI,int reg_EDI);
void sub_102ed3c0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_102ed3e0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void sub_102ed400(uint32_t param_1);
void sub_Hook_UNIT_SUnitDmg_6fcfe6d0_102ed420(int *reg_ESI,uint32_t param_2);
void sub_102ed430(uint32_t param_1,uint32_t param_2);
void sub_102ed450(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8);
void sub_102ed480(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_102ed4a0(void);
void __thiscall sub_102ed4c0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_Hook_GAME_Clients_6fc6b500_102ed4e0(int *reg_EAX,uint32_t param_2,uint param_3,uint32_t param_4,uint32_t param_5 ,uint32_t param_6,int param_7);
void sub_102ed510(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7);
void sub_102ed540(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void sub_Hook_SKILLS_Skills_6fcc0830_102ed560(uint32_t reg_EAX,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void sub_Hook_UNIT_SUnitDmg_6fcfcf20_102ed580(int *reg_EBX,uint32_t reg_ECX,int *reg_EDX);
void sub_Hook_UNIT_SUnitDmg_6fcfe0c0_102ed5a0(int *reg_EAX,int *reg_EDI,int param_3);
void sub_Hook_sub_6fc8d0f0_102ed5b0(int reg_EDI);
void sub_Hook_sub_6fd110f0_102ed5c0(int *reg_EDI,uint32_t param_2);
void sub_102ed5d0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void __fastcall sub_102ed5f0(uint32_t param_1);
void sub_Hook_UI_automap_6fb119e0_102ed610(int reg_EAX,void *reg_ECX);
void sub_Hook_UNIT_SUnitDmg_6fcfc0b0_102ed620(int *reg_EAX,uint32_t reg_EDI,int param_3,int *reg_ECX);
void sub_102ed630(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_102ed650(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_Hook_GAME_Game_6fc4d140_102ed670(void);
void sub_Hook_D2Game_10003_102ed6b0(void);
void sub_Hook_D2Game_10006_102ed6e0(void);
void sub_102ed6f0(void);
uint32_t sub_102ed700(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_102ed720(uint32_t param_1,uint32_t param_2);
void sub_Hook_sub_6fcbcd90_102ed740(int *reg_EAX,uint32_t reg_EBX,uint32_t reg_ESI,int param_4,void *reg_ECX);
void __thiscall sub_102ed750(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102ed770(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void sub_102ed790(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102ed7b0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102ed7d0(uint32_t param_1,uint32_t param_2);
uint64_t sub_102ed7f0(uint32_t param_1,uint32_t param_2);
void __fastcall sub_102ed810(uint32_t param_1,uint32_t param_2);
void __fastcall sub_Hook_D2Common_10459_102ed840(uint param_1);
void sub_Hook_sub_6fb6dca0_102ed850(int param_1);
void __fastcall sub_Hook_sub_6fb28fc0_102ed860(uint16_t param_1);
void sub_102ed870(void);
void sub_102ed890(void);
void sub_102ed8c0(void);
void __fastcall sub_102ed8d0(uint32_t param_1);
void sub_102ed8f0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102ed910(void);
void sub_Hook_UNIT_SUnitDmg_6fcfd450_102ed930(uint8_t *reg_EBX);
void sub_102ed940(void);
void sub_102ed960(void);
void sub_102ed970(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void sub_102ed9b0(void);
void __fastcall sub_102ed9d0(uint32_t param_1,uint32_t param_2);
void sub_102ed9f0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_Hook_Ai_AiThink4_6fccb360_102eda10(uint32_t reg_ESI,int param_2,int *param_3,uint *param_4,uint32_t param_5, uint32_t param_6,uint32_t param_7);
void sub_102eda40(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7);
void sub_Hook_sub_6fcb2bb0_102eda70(uint32_t reg_EAX,uint32_t param_2,uint *param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void sub_102eda90(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_102edab0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_102edad0(void);
void sub_Hook_SKILLS_Skills_6fcc10b0_102edae0(uint *reg_EAX,int *reg_EDI,int param_3);
void sub_102edb00(void);
void sub_Hook_sub_6fc48be0_102edb10(int reg_ESI,int param_2,uint32_t *param_3);
uint64_t sub_Hook_sub_6fc4e8b0_102edb30(int reg_EAX,uint32_t reg_EDX);
void sub_102edb70(uint32_t param_1,uint32_t param_2);
void sub_Hook_UNIT_SUnitInactive_6fc404e0_102edb90(int *reg_EAX,int param_2);
void sub_102edba0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_Hook_UNIT_SUnitInactive_6fc3f600_102edbc0(int reg_EDI,uint32_t param_2,int param_3);
void sub_102edbe0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_Hook_UNIT_SUnitInactive_6fc3fb90_102edc00(int *reg_EDI,int param_2,int param_3);
void sub_102edc20(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102edc40(void);
void sub_102edc50(void);
void sub_102edc60(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __thiscall sub_102edc80(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void __thiscall sub_102edca0(void *this);
void __thiscall sub_102edcc0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void __thiscall sub_102edcf0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7);
void sub_102edd20(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_Hook_D2Common_10973_102edd40(int reg_EBX,int reg_EDI,uint32_t param_3);
void sub_Hook_sub_6fdbabe0_102edd50(int reg_EBX,int reg_EDI,uint32_t param_3);
void sub_102edd60(uint32_t param_1,uint32_t param_2);
void sub_102eddb0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void sub_102edde0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void sub_102ede10(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102ede30(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void sub_102ede60(uint32_t param_1,uint32_t param_2);
void sub_Hook_sub_6fcdffa0_102ede80(uint32_t reg_EAX,uint32_t param_2);
void sub_102edea0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_Hook_ITEMS_ItemMode_6fcf43e0_102edec0(int *reg_ESI);
void __fastcall sub_Hook_sub_6faf2c70_102eded0(byte param_1);
void sub_102edee0(uint32_t param_1,uint32_t param_2);
uint64_t sub_102edf00(void);
void sub_102edf10(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void sub_102edf30(void);
void __fastcall sub_102edf50(uint32_t param_1);
void sub_102edf70(void);
void sub_102edf80(uint32_t param_1,uint32_t param_2);
void sub_102edfa0(uint32_t param_1,uint32_t param_2);
void sub_102edfc0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102edfe0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102ee000(void);
void sub_102ee010(void);
void __fastcall sub_102ee020(uint32_t param_1,uint32_t param_2);
int sub_Hook_UNIT_SUnitDmg_6fcfe0c0_102ee040(int reg_EAX,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5, uint32_t param_6,uint32_t param_7,uint32_t param_8,uint32_t param_9, uint32_t param_10,int param_11,void *reg_ECX,uint32_t reg_EDX);
void __thiscall sub_102ee060(void *this);
void sub_102ee090(void);
void __thiscall sub_102ee0b0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __thiscall sub_102ee0d0(void *this,uint32_t param_1,uint32_t param_2);
void sub_102ee0f0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void __fastcall sub_102ee110(uint32_t param_1,uint32_t param_2);
void __fastcall sub_102ee140(uint32_t param_1,uint32_t param_2);
void sub_102ee160(void);
void sub_102ee170(void);
void sub_102ee180(void);
void sub_102ee190(void);
void sub_102ee1b0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __thiscall sub_102ee1d0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __thiscall sub_102ee1f0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __thiscall sub_102ee210(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102ee230(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __fastcall sub_102ee250(uint32_t param_1,uint32_t param_2);
void sub_102ee280(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void sub_102ee2b0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void sub_102ee2e0(void);
void sub_102ee310(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_Hook_sub_6fb04ac0_102ee330(uint32_t reg_EAX,uint32_t reg_EDI,int param_3,int param_4);
void sub_102ee350(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7);
void __thiscall sub_102ee380(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __thiscall sub_102ee3a0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_102ee3c0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void sub_102ee3f0(void);
void sub_Hook_sub_6fb02f10_102ee420(uint32_t reg_EAX,uint32_t reg_ESI,uint32_t param_3,uint32_t reg_ECX);
void sub_102ee440(void);
void sub_Hook_D2Common_11074_102ee460(int reg_ESI,uint32_t reg_EDI,int reg_ECX);
void sub_Hook_SKILLS_SkillBar_6fc48290_102ee470(int reg_EAX,int *reg_EBX,int *param_3,int reg_ECX);
void sub_Hook_SKILLS_SkillsBar_6fb77370_102ee490(int reg_EBX,int *reg_EDI,int *param_3);
void sub_102ee4c0(void);
void sub_Hook_GAME_Game_6fc4e360_102ee4f0(uint32_t reg_EAX,int reg_EBX,int *reg_ESI,uint32_t reg_EDI,int param_5, void *param_6);
void sub_102ee510(void);
uint64_t __fastcall sub_102ee530(uint32_t param_1,uint32_t param_2);
void sub_Hook_Quests_a5q5_6fc7f3f0_102ee560(uint32_t reg_EAX,int param_2,int param_3,int param_4,int reg_ECX, uint32_t reg_EDX);
void __fastcall sub_Hook_Quests_a3q3_6fd09600_102ee580(uint32_t param_1,uint32_t param_2);
void sub_102ee5a0(void);
void sub_Hook_sub_6fcefbc0_102ee5e0(int param_1);
void sub_Hook_sub_6fc631c0_102ee600(int param_1);
void __fastcall sub_Hook_sub_6faf9440_102ee610(uint32_t param_1);
void sub_102ee620(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7);
void sub_Hook_sub_6fc3db40_102ee650(uint32_t reg_EAX,uint32_t param_2,int param_3,uint32_t param_4,int param_5, uint32_t param_6,int param_7);
void __fastcall sub_102ee680(uint32_t param_1);
void sub_102ee6b0(uint32_t param_1,uint32_t param_2);
void sub_Hook_sub_6fc76250_102ee6e0(int reg_EAX,uint32_t reg_EDI,uint param_3,int param_4,void *param_5, uint *param_6);
void __thiscall sub_102ee700(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102ee720(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __thiscall sub_102ee740(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __thiscall sub_102ee760(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102ee780(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __thiscall sub_102ee7a0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void __fastcall sub_102ee7d0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void __fastcall sub_102ee7f0(uint32_t param_1,uint32_t param_2);
void sub_102ee820(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102ee840(void);
void __fastcall sub_102ee870(uint32_t param_1);
void sub_102ee890(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_102ee8b0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102ee8d0(void);
void sub_102ee8f0(void);
void sub_Hook_PLAYER_PlrTrade_6fc919a0_102ee910(int reg_EAX,uint32_t reg_EBX);
void sub_102ee920(uint32_t param_1,uint32_t param_2);
void sub_Hook_PLAYER_PlrTrade_6fc916d0_102ee940(int reg_EAX,uint32_t param_2);
void __fastcall sub_102ee950(uint32_t param_1,uint32_t param_2);
void sub_102ee980(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void sub_Hook_sub_6fb01ae0_102ee9a0(uint32_t reg_EAX,uint32_t param_2,int param_3);
void sub_102ee9c0(void);
void sub_Hook_UNIT_Player_6facbbc0_102ee9d0(uint reg_EAX);
void sub_102ee9e0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void sub_Hook_UNIT_Player_6fac9350_102eea10(int *reg_EAX,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void sub_Hook_sub_6fc68950_102eea30(int reg_EAX,uint32_t param_2,uint32_t param_3);
void __thiscall sub_102eea50(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
int sub_Hook_UNIT_sunitproxy_6fcafbe0_102eea70(int reg_EAX);
void sub_102eea80(void);
void sub_102eeac0(void);
void __fastcall sub_102eeaf0(uint32_t param_1,uint32_t param_2);
void sub_102eeb10(uint32_t param_1,uint32_t param_2);
void sub_Hook_sub_6fce1510_102eeb30(int reg_EBX,int *reg_ESI,uint32_t param_3);
void __thiscall sub_102eeb40(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102eeb60(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_Hook_UNIT_SUnitDmg_6fcfe750_102eeb80(int reg_EAX,uint32_t param_2,int param_3,uint32_t param_4);
void sub_OpenMpqs_102eeba0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void sub_Hook_sub_6fc5a4e0_102eebd0(int *param_1);
void sub_Hook_D2Common_10413_102eebe0(uint8_t *reg_EAX,uint32_t reg_EDI,int param_3);
void sub_Hook_D2Common_10819_102eebf0(uint32_t reg_EBX,uint32_t reg_ESI,int *reg_EDI);
void sub_102eec20(void);
void sub_102eec40(void);
void sub_102eec70(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102eec90(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __thiscall sub_102eecb0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_102eecd0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void sub_102eecf0(uint32_t param_1,uint32_t param_2);
void __fastcall sub_102eed10(uint32_t param_1);
void sub_102eed30(void);
void sub_Hook_UNIT_SUnitInactive_6fc400e0_102eed50(int reg_EAX,int param_2,void *param_3,uint32_t param_4,uint *param_5, uint32_t reg_ECX,int reg_EDX);
void sub_102eed70(void);
void sub_Hook_sub_6fd01430_102eed90(int reg_EBX,int reg_ESI,int reg_EDI);
void sub_Hook_sub_6fc5ae10_102eede0(int reg_EAX,uint *reg_ESI,uint32_t param_3,int param_4,int *reg_ECX);
void sub_102eee70(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_Hook_sub_6fc583a0_102eee90(int reg_ESI,uint32_t param_2,uint32_t param_3);
void __thiscall sub_102eeeb0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7);
void sub_Hook_sub_6fcdf2e0_102eeee0(int reg_EAX,void *param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5 ,uint32_t param_6,uint32_t reg_ECX);
void __fastcall sub_102eef00(uint32_t param_1,uint32_t param_2);
void sub_Hook_sub_6fcdf990_102eef40(int reg_EAX,int reg_EBX,int param_3);
void sub_Hook_sub_6fcdd330_102eef50(int reg_EAX);
void sub_Hook_D2Common_11104_102eef60(uint reg_EAX);
void sub_102eef70(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __thiscall sub_102eef90(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8);
void sub_Hook_sub_6faf8b20_102eefc0(uint32_t reg_EAX,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,void *param_6,uint32_t param_7,uint32_t reg_ECX);
void __thiscall sub_102eeff0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_Hook_sub_6fcdf170_102ef010(uint32_t param_1,uint32_t param_2,uint32_t param_3,void *param_4, char *param_5,int reg_EAX,uint32_t reg_EBX,int reg_ECX);
void sub_Hook_sub_6fcdd920_102ef020(int reg_EAX,int reg_EDI,int reg_ECX);
void sub_Hook_INVENTORY_InvMode_6fcbb630_102ef030(int reg_EAX,int param_2,int param_3,int param_4,int param_5);
void sub_102ef050(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_Hook_D2Common_10107_102ef070(int reg_EAX,uint32_t reg_EDI,int *param_3,int param_4,uint32_t param_5, int param_6,int param_7);
void sub_102ef090(void);
void sub_102ef0c0(void);
void sub_Hook_sub_6fcde640_102ef0e0(int reg_EAX,int param_2,int param_3,int param_4,int reg_ECX);
void sub_102ef100(void);
void sub_102ef120(uint32_t param_1,uint32_t param_2);
void sub_102ef140(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_Hook_sub_6fb01ae0_102ef160(uint32_t reg_EBX,int *reg_EDI,uint32_t param_3);
void sub_102ef170(void);
void sub_102ef190(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __thiscall sub_102ef1b0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_102ef1d0(void);
void sub_102ef1e0(void);
void __thiscall sub_102ef1f0(void *this,uint32_t param_1,uint32_t param_2);
void sub_102ef220(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7);
void sub_102ef280(uint32_t param_1,uint32_t param_2);
void sub_102ef2a0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_102ef2c0(uint32_t param_1,uint32_t param_2);
void sub_102ef2d0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8, uint32_t param_9,uint32_t param_10,uint32_t param_11,uint32_t param_12);
void sub_102ef310(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8, uint32_t param_9);
void sub_102ef340(uint32_t param_1,uint32_t param_2);
void sub_102ef360(void);
void sub_102ef370(void);
void sub_102ef380(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102ef3a0(void);

/* ---- _unattributed/after_functions_SaveFunctions_unit49_102ef3b0.cpp ---- */
void sub_102ef3b0(uint32_t param_1,uint32_t param_2);
void sub_102ef3d0(void);
void sub_102ef3e0(void);
void sub_102ef400(void);
void sub_102ef430(void);
void __fastcall sub_102ef460(uint32_t param_1);
void sub_102ef480(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void sub_102ef4a0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_102ef4c0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void sub_102ef4e0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102ef500(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void sub_102ef520(void);
void sub_Hook_PLAYER_PlrModes_6fc98430_102ef540(uint32_t reg_EBX,int reg_ESI,int param_3,int param_4,int param_5);
void sub_102ef560(void);
void sub_102ef570(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_Hook_sub_6fc49600_102ef590(int *reg_EBX,int param_2,int param_3,uint param_4,uint32_t param_5);
void sub_Hook_sub_6fb207f0_102ef5b0(int reg_ESI);
void sub_102ef5c0(void);
void sub_Hook_sub_6faf3920_102ef5d0(char *reg_EAX,uint32_t param_2);
void sub_102ef5e0(uint32_t param_1,uint32_t param_2);
void sub_102ef600(uint32_t param_1,uint32_t param_2);
void sub_102ef620(void);
void sub_102ef640(void);
void __thiscall sub_102ef660(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_102ef680(void);
void sub_102ef6a0(void);
void sub_102ef760(void);
void sub_102ef790(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void sub_102ef7b0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_Hook_PLAYER_PlrModes_6fc98430_102ef7e0(int *reg_EAX,int reg_EBX,int reg_ESI);
void __fastcall sub_102ef7f0(uint32_t param_1,uint32_t param_2);
void sub_Hook_PLAYER_PlrModes_6fc97e70_102ef820(int *reg_ESI,int *reg_EDI,uint param_3);
void sub_Hook_D2Game_10008_102ef830(int reg_EAX,uint32_t reg_ESI);
void sub_102ef850(void);
void __thiscall sub_102ef880(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void sub_102ef8b0(void);
void sub_102ef8d0(void);
void sub_102ef8e0(void);
void sub_102ef900(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void sub_102ef940(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_102ef980(void);
void sub_102ef9b0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_Hook_sub_6fc44cd0_102ef9d0(uint reg_EAX,int *reg_ESI,uint32_t param_3,uint32_t param_4);
void sub_102ef9f0(void);
void sub_102efa10(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102efa30(void);
void sub_Hook_sub_6fc5aff0_102efa50(uint *reg_EDI,int param_2,int *param_3,uint *param_4);
void __thiscall sub_102efa70(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_Hook_UNIT_SUnitDmg_6fcfc0b0_102efa90(int reg_ESI);
void __fastcall sub_102efaa0(uint32_t param_1,uint32_t param_2);
void __fastcall sub_102efac0(uint32_t param_1,uint32_t param_2);
void sub_102efae0(void);
void sub_102efaf0(void);
void __fastcall sub_102efb10(uint32_t param_1);
void sub_102efb30(void);
void sub_102efb40(uint32_t param_1,uint32_t param_2);
void sub_102efb60(void);
void sub_102efb80(void);
void sub_102efba0(void);
void sub_102efbc0(void);
void __fastcall sub_102efbd0(uint32_t param_1);
void sub_102efc00(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_102efc20(void);
void sub_102efc30(void);
void sub_102efc70(void);
void __thiscall sub_102efcb0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void __thiscall sub_102efcd0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8, uint32_t param_9,uint32_t param_10,uint32_t param_11,uint32_t param_12);
void sub_102efd10(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void sub_102efd40(void);
void sub_102efd50(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102efd70(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_102efd90(uint32_t param_1);
void sub_102efdb0(void);
void sub_102efdc0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void sub_102efdf0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102efe10(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102efe30(uint32_t param_1,uint32_t param_2);
void sub_102efe50(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void sub_Hook_sub_6fc9b0a0_102efe80(int reg_EBX,int reg_ESI,uint32_t param_3,uint param_4,uint32_t param_5);
void sub_102efea0(uint32_t param_1,uint32_t param_2);
void __thiscall sub_102efec0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8);
void __fastcall sub_102efef0(uint32_t param_1,uint32_t param_2);
void __thiscall sub_102eff10(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102eff30(void);
void __thiscall sub_102eff50(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_102eff70(void);
void sub_102eff90(uint32_t param_1,uint32_t param_2);
void sub_102effb0(void);
void sub_102effc0(void);
void sub_102effd0(void);
void sub_102effe0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102f0000(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102f0020(void);
void sub_102f0040(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_102f0090(uint32_t param_1);
void sub_102f00b0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102f00d0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102f00f0(void);
void sub_102f0100(void);
uint64_t sub_102f0110(uint32_t reg_ESI);
void sub_102f0140(void);
void sub_102f0150(void);
void sub_102f0170(void);
void sub_102f0190(void);
void __thiscall sub_102f01a0(void *this,uint32_t param_1,uint32_t param_2);
void sub_102f01c0(void);
void sub_102f01f0(void);
void __fastcall sub_102f0200(uint32_t param_1);
void sub_102f0220(void);
void sub_102f0230(void);
void sub_102f0250(void);
void __fastcall sub_102f0270(uint32_t param_1);
void sub_102f0290(void);
void __fastcall sub_102f02b0(uint32_t param_1);
void sub_102f02d0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102f02f0(void);
void __fastcall sub_102f0320(uint32_t param_1);
void __fastcall sub_102f0340(uint32_t param_1,uint32_t param_2);
void sub_102f0370(void);
void sub_Hook_sub_6fac6910_102f0380(int *reg_EBX,uint32_t param_2,int param_3);
void sub_102f03a0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_102f03e0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_102f0400(void);
void sub_102f0470(void);
void __fastcall sub_102f04a0(uint32_t param_1,uint32_t param_2);
void sub_Hook_sub_6fc48be0_102f04d0(uint reg_EAX,uint32_t reg_EDI,uint32_t param_3,int *param_4,uint32_t param_5 ,uint32_t param_6,uint32_t reg_ECX,uint32_t reg_EDX);
void sub_102f04f0(void);
void sub_Hook_sub_6fcde640_102f0510(uint32_t reg_EAX,int param_2,int *param_3);
void sub_102f0530(void);
void sub_102f0550(uint32_t param_1,uint32_t param_2);
void sub_102f0570(void);
void __fastcall sub_102f0580(uint32_t param_1);
void sub_102f05a0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_102f05e0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __thiscall sub_102f0620(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void sub_102f0640(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_Hook_sub_6fc30600_102f0660(uint32_t reg_EBX,uint32_t reg_EDI,uint32_t param_3);
void __fastcall sub_102f0670(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void sub_Hook_GAME_Game_6fc4bb10_102f06b0(uint reg_EAX,uint param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5 ,uint param_6,uint param_7);
void __thiscall sub_102f06e0(void *this);
void sub_102f0700(uint32_t param_1,uint32_t param_2);
void sub_102f0720(void);
void sub_102f0730(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_102f0750(void);
void sub_102f0770(void);
void sub_102f0780(void);
void sub_102f0790(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102f07b0(void);
void sub_102f07c0(void);
void sub_102f07d0(void);
void sub_102f07f0(void);
void sub_102f0800(void);
void sub_102f0810(void);
void sub_102f0830(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void sub_102f0880(void);
void sub_Hook_sub_6fb01d10_102f0890(int *reg_EAX);
void sub_102f08a0(void);
void __fastcall sub_102f08d0(uint32_t param_1,uint32_t param_2);
void sub_102f08f0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102f0910(void);
void __thiscall sub_102f0930(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __thiscall sub_102f0970(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_102f09b0(void);
void sub_102f09c0(void);
void sub_102f09d0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __thiscall sub_102f09f0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8);
void sub_102f0a20(void);
void sub_Hook_sub_6fad3200_102f0a30(int reg_EBX,uint32_t param_2,int param_3,int param_4,uint32_t param_5, int param_6,uint32_t param_7);
void sub_102f0a60(void);
void sub_Hook_sub_6fac4f40_102f0a70(int reg_EBX,int param_2,int param_3,int param_4,int param_5);
void sub_102f0a90(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8, uint32_t param_9);
void __thiscall sub_102f0ac0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102f0ae0(void);
void sub_102f0af0(uint32_t param_1,uint32_t param_2);
void __fastcall sub_102f0b10(uint32_t param_1,uint32_t param_2);
void sub_102f0b30(uint32_t param_1,uint32_t param_2);
void sub_102f0b50(void);
void sub_102f0b70(void);
void sub_102f0b90(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102f0bb0(void);
void sub_102f0bd0(uint32_t param_1,uint32_t param_2);
void sub_102f0bf0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_102f0c10(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void sub_102f0c30(void);
void __thiscall sub_102f0c50(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);
void sub_102f0c70(uint32_t param_1,uint32_t param_2);
void sub_Hook_UI_showitems_6fb08fb0_102f0c90(int reg_EAX,int param_2,int param_3);
void __thiscall sub_102f0cb0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);
void sub_102f0ce0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_Hook_sub_6fc5a790_102f0d00(int reg_ESI,int *reg_EDI,int *param_3);
void sub_102f0d10(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_Hook_sub_6fc5b070_102f0d30(int *reg_EBX,int *param_2,int param_3);
void sub_102f0d50(uint32_t param_1,uint32_t param_2);
void sub_Hook_MISSILES_Missiles_6fc8f930_102f0d70(int *reg_EAX,int *param_2);
void sub_Hook_UNIT_Missile_6fb630f0_102f0d80(int *reg_EAX,int *param_2);
void sub_102f0d90(void);
void __thiscall sub_102f0db0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
void __fastcall sub_102f0dd0(uint32_t param_1,uint32_t param_2);
void sub_102f0e00(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_102f0e20(uint32_t param_1,uint32_t param_2);
void sub_102f0e40(uint32_t param_1,uint32_t param_2);
void sub_102f0e60(void);
void sub_102f0e80(void);
void sub_102f0ea0(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __thiscall sub_102f0ec0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102f0ee0(uint32_t param_1,uint32_t param_2);
void sub_102f0f00(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_102f0f20(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_Hook_sub_6fcbd3b0_102f0f40(int reg_EBX,uint32_t reg_ESI,int param_3);
void sub_102f0f50(uint32_t param_1,uint32_t param_2,uint32_t param_3);
void sub_Hook_UNIT_sunitproxy_6fcafbe0_102f0f70(uint32_t reg_EAX,int param_2,int param_3);
void sub_Hook_sub_6fcb2bb0_102f0f90(int *reg_EAX,uint32_t reg_EBX,uint32_t *reg_ESI,int param_4,uint *param_5);
void sub_102f0fb0(uint32_t param_1,uint32_t param_2);
void __thiscall sub_102f0fd0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);
void __fastcall sub_102f0ff0(uint32_t param_1);
void sub_Hook_GAME_Clients_6fc6b7f0_102f1030(uint16_t *reg_EAX,int reg_ECX);
void sub_Hook_sub_6fc49600_102f1040(int reg_EBX,int param_2,uint param_3,int param_4);
void __thiscall sub_102f1060(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8, uint32_t param_9,uint32_t param_10,uint32_t param_11);
void sub_102f10b0(void);

/* ---- _unattributed/after_functions_SaveFunctions_after_unit49.cpp ---- */
void sub_102f10d0(void);
FARPROC __fastcall sub_GetDllOffset_102f10f0(int param_1,int param_2);
uint8_t * sub_102f11a0(void);
uint8_t * sub_102f11c0(void);
uint8_t * sub_102f11d0(void);

/* ---- _unattributed/after_functions_SaveFunctions_after_unit58.cpp ---- */
uint32_t __fastcall sub_102f7500(int param_1,uint param_2,int param_3,uint32_t reg_ESI);
uint32_t __fastcall sub_102f76b0(int param_1,uint param_2,uint32_t param_3);
uint32_t __fastcall sub_102f77b0(int param_1,uint param_2,uint32_t param_3);
uint32_t __fastcall sub_102f7810(int param_1,uint param_2,uint param_3);

/* ---- _unattributed/after_functions_SaveFunctions_after_unit62.cpp ---- */
uint32_t __fastcall sub_103000a0(int param_1,int param_2,uint param_3,int param_4,uint32_t reg_EBX);
uint32_t __fastcall sub_10300280(int param_1,int param_2,uint param_3,uint32_t param_4);
uint32_t __fastcall sub_10300390(int param_1,int param_2,uint param_3,uint param_4);
uint32_t __fastcall sub_10300400(int param_1,int *param_2,uint param_3,uint param_4);

/* ---- lib/msvc_crt_stl_part01.cpp ---- */
__int64 __thiscall std::basic_streambuf<char,std::char_traits<char>_>::showmanyc (basic_streambuf<char,std::char_traits<char>_> *this);
__int64 __thiscall std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::showmanyc (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this);
void __fastcall FUN_103017c7(int param_1);
void FUN_103017f8(void);
void __cdecl std::_Facet_Register(_Facet_base *param_1);
void ___std_get_string_size_without_trailing_whitespace_8(int param_1,int param_2);
void ___std_system_error_allocate_message_8(DWORD param_1,int *param_2);
HLOCAL LocalFree(HLOCAL hMem);
void FUN_1030189e(HANDLE param_1);
uint FUN_103018be(void);
uint64_t ___std_fs_convert_narrow_to_wide_20 (UINT param_1,LPCSTR param_2,int param_3,LPWSTR param_4,int param_5);
uint64_t FUN_10301910(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5);
uint64_t ___std_fs_create_directory_4(LPCWSTR param_1);
DWORD FUN_103019de(LPCWSTR param_1,uint32_t *param_2,uint param_3,uint param_4);
DWORD ___std_fs_open_handle_16(uint32_t *param_1,LPCWSTR param_2,DWORD param_3,DWORD param_4);
_Facet_base * __thiscall std::locale::facet::_Decref(facet *this);
void __thiscall std::locale::facet::_Incref(facet *this);
void __fastcall __security_check_cookie (uintptr_t _StackCookie,uint32_t reg_EBX,uint32_t reg_ESI,uint32_t reg_EDI);
void * __cdecl operator_new(uint param_1);
void _eh_vector_destructor_iterator_ (void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4);
void FUN_10301cc0(uint reg_EBX,void *reg_ESI,uint reg_EDI);
void __ArrayUnwind(void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4);
_IMAGE_SECTION_HEADER * __cdecl find_pe_section(uchar *param_1,uint param_2);
uint32_t ___scrt_acquire_startup_lock(void);
uint32_t ___scrt_dllmain_after_initialize_c(void);
bool FUN_10301e01(uint32_t reg_EAX);
uint8_t ___scrt_dllmain_crt_thread_attach(void);
uint8_t ___scrt_dllmain_crt_thread_detach(void);
void __cdecl ___scrt_dllmain_exception_filter (uint32_t param_1,int param_2,uint32_t param_3,uint8_t *param_4,uint32_t param_5, uint32_t param_6);
void FUN_10301e6f(void);
void FUN_10301e92(void);
int __cdecl ___scrt_initialize_crt(int param_1);
uint32_t __cdecl FUN_10301ed8(int param_1,uint32_t reg_EAX);
uint __cdecl ___scrt_is_nonwritable_in_current_image(int param_1);
int __cdecl ___scrt_release_startup_lock(char param_1);
uint8_t __cdecl ___scrt_uninitialize_crt(uint32_t param_1,char param_2);
_onexit_t __cdecl __onexit(_onexit_t _Func);
int __cdecl _atexit(_func_4879 *param_1);
void __cdecl FUN_1030207a(void *param_1);
uint32_t * __thiscall FUN_10302088(void *this,byte param_1);
void __cdecl FUN_103020ab(_EXCEPTION_POINTERS *param_1);
void FUN_103020d3(uint32_t reg_EBX,uint32_t reg_ESI,uint32_t reg_EDI);
void FUN_103021cd(uint32_t reg_EBX,uint32_t reg_ESI,uint32_t reg_EDI);
void __cdecl FUN_103021d9(uint32_t param_1,uint32_t reg_EBX,uint32_t reg_ESI,uint32_t reg_EDI);
void __cdecl free(void *_Memory);
void __cdecl FUN_103022ad(uint param_1);
void __Init_thread_abort(uint32_t *param_1);
void FUN_1030239f(int *param_1);
void __cdecl FUN_103023e9(int *param_1);
void __Init_thread_notify(void);
void __cdecl __Init_thread_wait(DWORD param_1);
int dllmain_crt_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3);
uint32_t __cdecl FUN_10302512(uint32_t param_1,uint32_t param_2);
void FUN_103025f5(void);
byte __cdecl FUN_10302619(uint32_t param_1);
void FUN_103026ae(void);
void FUN_103026bb(void);
int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3);
int dllmain_raw(HINSTANCE__ *param_1,ulong param_2,void *param_3);
void entry(HINSTANCE__ *param_1,ulong param_2,void *param_3);
uint32_t * __fastcall FUN_10302822(uint32_t *param_1);
void FUN_1030283a(void);
void __cdecl __SEH_prolog4(uint32_t param_1,int param_2,uint32_t reg_EBX,uint32_t reg_ESI, uint32_t reg_EDI);
void __cdecl __except_handler4(int *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4);
uint32_t FUN_103028d4(void);
uint32_t FUN_10302aa5(void);
bool ___scrt_is_ucrt_dll_in_use(void);
void FUN_10302ab5(void);
void FUN_10302bd0(void);
void __cdecl free(void *_Memory);
uint ___get_entropy(void);
void __cdecl ___security_init_cookie(void);
void FUN_10302c75(void);
void FUN_10302c81(void);
uint8_t * FUN_10302c8d(void);
void FUN_10302c93(void);
uint8_t * FUN_10302cb0(void);
void FUN_10302cb6(void);
void FUN_10302ce2(void);
void __CxxFrameHandler3(void);
void __cdecl purecall(void);
void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo);
void __cdecl except_handler4_common(void);
void * __cdecl memset(void *_Dst,int _Val,size_t _Size);
void __std_type_info_destroy_list(void);
void round(void);
void * __cdecl malloc(size_t _Size);
void roundf(void);
void __cdecl free(void *_Memory);
int __cdecl _callnewh(size_t _Size);
void __cdecl seh_filter_dll(void);
void __cdecl configure_narrow_argv(void);
void __cdecl initialize_narrow_environment(void);
void __cdecl initialize_onexit_table(void);
void __cdecl register_onexit_function(void);
void __cdecl execute_onexit_table(void);
void __cdecl crt_atexit(void);
void __cdecl initterm(void);
void __cdecl initterm_e(void);
int __cdecl __filter_x86_sse2_floating_point_exception_default(int param_1);
uint64_t __alldiv(uint param_1,uint param_2,uint param_3,uint param_4);
uint64_t __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4);
longlong __allmul(uint param_1,int param_2,uint param_3,int param_4);
longlong __fastcall __allshl(byte param_1,int param_2,uint reg_EAX);
ulonglong __fastcall __aullshr(byte param_1,uint param_2,uint reg_EAX);
void __alloca_probe(uint8_t *reg_EAX);
uint FUN_10303060(void);
uint FUN_103030b0(void);
void __fastcall FUN_10303130(uint param_1);
longlong FUN_10303180(void);
uint64_t FUN_1030319e(void);
void * __cdecl memchr(void *_Buf,int _Val,size_t _MaxCount);
void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size);
void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size);
void _CIatan2(void);
void __cdecl dclass(void);
void __cdecl fdclass(void);
void __cdecl libm_sse2_cos_precise(void);
void __cdecl libm_sse2_pow_precise(void);
void __cdecl libm_sse2_sin_precise(void);
void __cdecl libm_sse2_sqrt_precise(void);
double __cdecl ceil(double _X);
double __cdecl floor(double _X);
void FUN_10316520(void);
void FUN_10316830(void);
void FUN_10316b40(void);
void FUN_10316e50(void);
void FUN_10317160(void);
void FUN_10317470(void);
void FUN_10317480(void);
void FUN_10317790(void);
void FUN_10317aa0(void);
void FUN_10317db0(void);
void FUN_103180c0(void);
void FUN_103183d0(void);
void FUN_103186e0(void);
void FUN_103189f0(void);
void FUN_10318d00(void);
void FUN_10319010(void);
void FUN_10319320(void);
void FUN_10319630(void);
void FUN_10319940(void);
void FUN_10319c70(void);
void FUN_10319fa0(void);
void FUN_1031a2b0(void);
void FUN_1031a5c0(void);
void FUN_1031a8e0(void);
void FUN_1031abf0(void);
void FUN_1031af00(void);
void FUN_1031b210(void);
void FUN_1031b520(void);
void FUN_1031b530(void);
void FUN_1031b540(void);
void FUN_1031b550(void);
void FUN_1031b560(void);
void FUN_1031b580(void);
void FUN_1031b8a0(void);
void FUN_1031bbb0(void);
void FUN_1031bbc0(void);
void FUN_1031bbd0(void);
void FUN_1031bbe0(void);
void FUN_1031bbf0(void);
void FUN_1031bc00(void);
void FUN_1031bc10(void);
void FUN_1031bc20(void);
void FUN_1031bc30(void);
void FUN_1031bc40(void);
void FUN_1031bc50(void);
void FUN_1031bc60(void);
void FUN_1031bc70(void);
void FUN_1031bc80(void);
void FUN_1031bc90(void);
void FUN_1031bca0(void);
void FUN_1031bcb0(void);
void FUN_1031bcc0(void);
void FUN_1031bcd0(void);
void FUN_1031bce0(void);
void FUN_1031c040(void);
uint64_t FUN_1031c350(void);
void FUN_1031c360(void);
void FUN_1031c370(void);
void FUN_1031c380(void);
void FUN_1031c390(void);
void FUN_1031c6a0(void);
void FUN_1031c9b0(void);
void FUN_1031ccc0(void);
void FUN_1031cff0(void);
void FUN_1031d000(void);
void FUN_1031d310(void);
void FUN_1031d620(void);
uint64_t FUN_1031d630(void);
uint64_t FUN_1031d640(void);
void FUN_1031d650(void);
void FUN_1031d960(void);
void FUN_1031dc70(void);
void FUN_1031dc80(void);
uint64_t FUN_1031dc90(void);
void FUN_1031dca0(void);
void FUN_1031dfb0(void);
void FUN_1031e2d0(void);
void FUN_1031e5e0(void);
void FUN_1031e8f0(void);
void FUN_1031ec00(void);
void FUN_1031ef10(void);
uint64_t FUN_1031ef20(void);
uint64_t FUN_1031ef30(void);
void FUN_1031ef40(void);
uint64_t FUN_1031f250(void);
void FUN_1031f270(void);
void FUN_1031f580(void);
void FUN_1031f890(void);
void FUN_1031fba0(void);
void FUN_1031feb0(void);
void FUN_103201c0(void);
void FUN_103201d0(void);
void FUN_103204e0(void);
void FUN_103207f0(void);
void FUN_10320b00(void);
void FUN_10320e10(void);
void FUN_10321120(void);
void FUN_10321430(void);
void FUN_10321740(void);
void FUN_10321a50(void);
void FUN_10321d60(void);
void FUN_10322070(void);
void FUN_10322380(void);
void FUN_10322690(void);
void FUN_103229a0(void);
void FUN_10322cb0(void);
void FUN_10322fc0(void);
void FUN_10322fd0(void);
void FUN_10322fda(void);

