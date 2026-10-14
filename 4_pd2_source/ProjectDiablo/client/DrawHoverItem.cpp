/*
 * client/DrawHoverItem.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x10021000 - 0x10225810
 * Functions     : 160
 * Attribution   : range=116, anchor=1, linked=39, inferred=4
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x10021000  (ghidra: FUN_10021000)  [range]
void client_DrawHoverItem_init_10021000(void)

{
  uint32_t extraout_ECX;
  
  sub_1020f410((uint64_t *)&DAT_104dd490);
  sub_1020f960(extraout_ECX);
  _atexit(FUN_10316e50);
  return;
}


// 0x10021020  (ghidra: FUN_10021020)  [range]
void client_DrawHoverItem_init_10021020(void)

{
  uint8_t local_b0 [8];
  uint32_t local_a8;
  uint32_t uStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint32_t local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint32_t uStack_5c;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t local_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t local_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd5f4);
  local_a8 = 0xf7;
  uStack_a4 = 0xf8;
  uStack_a0 = 0xf9;
  uStack_9c = 0x338;
  local_68 = 0x395;
  local_98 = 0x21c;
  uStack_94 = 0x21d;
  uStack_90 = 0x21e;
  uStack_8c = 0x3bf;
  local_88 = 0x354;
  uStack_84 = 0x351;
  uStack_80 = 0x352;
  uStack_7c = 0x34e;
  local_78 = 0x34d;
  uStack_74 = 0x394;
  uStack_70 = 0x34f;
  uStack_6c = 0x353;
  local_64 = 0x350;
  local_60 = 0x3ac;
  uStack_5c = 0x3ad;
  uStack_58 = 0x3ae;
  uStack_54 = 0x3af;
  local_50 = 0x3b2;
  local_4c = 0x3ca;
  uStack_48 = 0x3cb;
  uStack_44 = 0x3cc;
  uStack_40 = 0x3cd;
  local_c = 0x3da;
  local_3c = 0x3ce;
  uStack_38 = 0x3cf;
  uStack_34 = 0x3d0;
  uStack_30 = 0x3d1;
  local_2c = 0x3d2;
  uStack_28 = 0x3d3;
  uStack_24 = 0x3d4;
  uStack_20 = 0x3d5;
  local_1c = 0x3d6;
  uStack_18 = 0x3d7;
  uStack_14 = 0x3d8;
  uStack_10 = 0x3d9;
  sub_1020f550(local_b0,&local_a8,local_8);
  sub_1020f900(&DAT_104dd5f4);
  _atexit((_func_4879 *)&LAB_10316e60);
  return;
}


// 0x10021110  (ghidra: FUN_10021110)  [range]
void client_DrawHoverItem_init_10021110(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd47c);
  local_c = 0x84;
  local_1c = 6;
  uStack_18 = 0x42;
  uStack_14 = 0x4c;
  uStack_10 = 0x6a;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104dd47c);
  _atexit((_func_4879 *)&LAB_10316e70);
  return;
}


// 0x10021170  (ghidra: FUN_10021170)  [range]
void client_DrawHoverItem_init_10021170(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd5b8);
  local_c = 0x113;
  local_1c = 0;
  uStack_18 = 0xff;
  uStack_14 = 0x104;
  uStack_10 = 0x10e;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104dd5b8);
  _atexit((_func_4879 *)&LAB_10316e80);
  return;
}


// 0x100211d0  (ghidra: FUN_100211d0)  [range]
void client_DrawHoverItem_init_100211d0(void)

{
  uint8_t local_34 [8];
  uint32_t local_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd4dc);
  local_2c = 0xf2;
  uStack_28 = 0xfb;
  uStack_24 = 0x100;
  uStack_20 = 0x105;
  local_c = 0x188;
  local_1c = 0x106;
  uStack_18 = 0x139;
  uStack_14 = 0x110;
  uStack_10 = 0x114;
  sub_1020f550(local_34,&local_2c,local_8);
  sub_1020f900(&DAT_104dd4dc);
  _atexit((_func_4879 *)&LAB_10316e90);
  return;
}


// 0x10021240  (ghidra: FUN_10021240)  [range]
void client_DrawHoverItem_init_10021240(void)

{
  uint8_t local_30 [8];
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd530);
  local_28 = 0x115;
  uStack_24 = 0x39;
  uStack_20 = 0xdb;
  uStack_1c = 0xdc;
  local_18 = 0x202;
  uStack_14 = 0xd9;
  uStack_10 = 0xda;
  uStack_c = 0x201;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104dd530);
  _atexit((_func_4879 *)&LAB_10316ea0);
  return;
}


// 0x100212a0  (ghidra: FUN_100212a0)  [range]
void client_DrawHoverItem_init_100212a0(void)

{
  uint8_t local_30 [8];
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f420((uint64_t *)&DAT_104dd550);
  local_28 = 0x1d8;
  uStack_24 = 0x1d9;
  uStack_20 = 0x1da;
  uStack_1c = 0x1a0;
  local_18 = 0x1dc;
  uStack_14 = 0x1dd;
  uStack_10 = 0x1de;
  uStack_c = 0x1df;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f780((uint32_t *)&DAT_104dd550);
  _atexit((_func_4879 *)&LAB_10316eb0);
  return;
}


// 0x10021300  (ghidra: FUN_10021300)  [range]
void client_DrawHoverItem_init_10021300(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd564);
  local_10 = 0x6b;
  local_c = 0x102;
  local_20 = 0x36;
  uStack_1c = 0x165;
  uStack_18 = 0x16f;
  uStack_14 = 0x172;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104dd564);
  _atexit((_func_4879 *)&LAB_10316ec0);
  return;
}


// 0x10021370  (ghidra: FUN_10021370)  [range]
void client_DrawHoverItem_init_10021370(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd458);
  local_10 = 0x8f;
  local_c = 0x6b;
  local_20 = 0x111;
  uStack_1c = 0x79;
  uStack_18 = 0x97;
  uStack_14 = 0x84;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104dd458);
  _atexit((_func_4879 *)&LAB_10316ed0);
  return;
}


// 0x100213e0  (ghidra: FUN_100213e0)  [range]
void client_DrawHoverItem_init_100213e0(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd57c);
  local_10 = 0x22b;
  local_c = 0x22a;
  local_20 = 0x254;
  uStack_1c = 0x251;
  uStack_18 = 0x22c;
  uStack_14 = 0x22d;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104dd57c);
  _atexit((_func_4879 *)&LAB_10316ee0);
  return;
}


// 0x10021450  (ghidra: FUN_10021450)  [range]
void client_DrawHoverItem_init_10021450(void)

{
  uint8_t local_30 [8];
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd4e8);
  local_28 = 0x92;
  uStack_24 = 0x94;
  uStack_20 = 0x97;
  uStack_1c = 0x9b;
  local_18 = 0x91;
  uStack_14 = 0xa9;
  uStack_10 = 0x8f;
  uStack_c = 0x9e;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104dd4e8);
  _atexit((_func_4879 *)&LAB_10316ef0);
  return;
}


// 0x100214b0  (ghidra: FUN_100214b0)  [range]
void client_DrawHoverItem_init_100214b0(void)

{
  uint8_t local_30 [8];
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd544);
  local_28 = 0x35d;
  uStack_24 = 0x36f;
  uStack_20 = 0x366;
  uStack_1c = 0x37d;
  local_18 = 0x2ea;
  uStack_14 = 0x3e4;
  uStack_10 = 0x2ee;
  uStack_c = 0x393;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104dd544);
  _atexit((_func_4879 *)&LAB_10316f00);
  return;
}


// 0x10021510  (ghidra: FUN_10021510)  [range]
void client_DrawHoverItem_init_10021510(void)

{
  uint8_t local_34 [8];
  uint32_t local_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd604);
  local_2c = 0xae;
  uStack_28 = 0x8e;
  uStack_24 = 0xaf;
  uStack_20 = 0x9c;
  local_c = 0xc1;
  local_1c = 0x8d;
  uStack_18 = 0xa7;
  uStack_14 = 0xa0;
  uStack_10 = 0x96;
  sub_1020f550(local_34,&local_2c,local_8);
  sub_1020f900(&DAT_104dd604);
  _atexit((_func_4879 *)&LAB_10316f10);
  return;
}


// 0x10021580  (ghidra: FUN_10021580)  [range]
void client_DrawHoverItem_init_10021580(void)

{
  uint8_t local_34 [8];
  uint32_t local_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd3f4);
  local_2c = 0x402;
  uStack_28 = 800;
  uStack_24 = 0x401;
  uStack_20 = 0x37e;
  local_c = 0x47d;
  local_1c = 0x374;
  uStack_18 = 0x3e5;
  uStack_14 = 0x3c3;
  uStack_10 = 0x372;
  sub_1020f550(local_34,&local_2c,local_8);
  sub_1020f900(&DAT_104dd3f4);
  _atexit((_func_4879 *)&LAB_10316f20);
  return;
}


// 0x100215f0  (ghidra: FUN_100215f0)  [range]
void client_DrawHoverItem_init_100215f0(void)

{
  uint8_t local_34 [8];
  uint32_t local_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd4d0);
  local_2c = 0x9a;
  uStack_28 = 0xaa;
  uStack_24 = 0x8b;
  uStack_20 = 0x95;
  local_c = 0xc9;
  local_1c = 0xbe;
  uStack_18 = 0xbf;
  uStack_14 = 0x90;
  uStack_10 = 0x93;
  sub_1020f550(local_34,&local_2c,local_8);
  sub_1020f900(&DAT_104dd4d0);
  _atexit((_func_4879 *)&LAB_10316f30);
  return;
}


// 0x10021660  (ghidra: FUN_10021660)  [range]
void client_DrawHoverItem_init_10021660(void)

{
  uint8_t local_30 [8];
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd5e0);
  local_28 = 0x33a;
  uStack_24 = 0x3e6;
  uStack_20 = 0x373;
  uStack_1c = 0x329;
  local_18 = 0x461;
  uStack_14 = 0x462;
  uStack_10 = 0x2f3;
  uStack_c = 0x3c4;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104dd5e0);
  _atexit((_func_4879 *)&LAB_10316f40);
  return;
}


// 0x100216c0  (ghidra: FUN_100216c0)  [range]
void client_DrawHoverItem_init_100216c0(void)

{
  uint8_t local_30 [8];
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd440);
  local_28 = 0x98;
  uStack_24 = 0x99;
  uStack_20 = 0xa4;
  uStack_1c = 0xa5;
  local_18 = 0xab;
  uStack_14 = 0xac;
  uStack_10 = 0xba;
  uStack_c = 0xbb;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104dd440);
  _atexit((_func_4879 *)&LAB_10316f50);
  return;
}


// 0x10021720  (ghidra: FUN_10021720)  [range]
void client_DrawHoverItem_init_10021720(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd5ec);
  local_14 = 0x2eb;
  local_10 = 1000;
  local_c = 0x44f;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104dd5ec);
  _atexit((_func_4879 *)&LAB_10316f60);
  return;
}


// 0x10021780  (ghidra: FUN_10021780)  [range]
void client_DrawHoverItem_init_10021780(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd5c4);
  local_14 = 0x2e7;
  local_10 = 0x450;
  local_c = 0x451;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104dd5c4);
  _atexit((_func_4879 *)&LAB_10316f70);
  return;
}


// 0x100217e0  (ghidra: FUN_100217e0)  [range]
void client_DrawHoverItem_init_100217e0(void)

{
  uint8_t local_58 [8];
  uint32_t local_50;
  uint32_t uStack_4c;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t local_40;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t local_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f410((uint64_t *)&DAT_104dd61c);
  local_50 = 0xb0;
  uStack_4c = 0xb1;
  uStack_48 = 0xb2;
  uStack_44 = 0xb3;
  local_10 = 200;
  local_40 = 0xb5;
  uStack_3c = 0xb6;
  uStack_38 = 0xb7;
  uStack_34 = 0xb8;
  local_30 = 0xb4;
  uStack_2c = 0xc0;
  uStack_28 = 0xc2;
  uStack_24 = 0xc3;
  local_20 = 0xc4;
  uStack_1c = 0xc5;
  uStack_18 = 0xc6;
  uStack_14 = 199;
  sub_1020f550(local_58,&local_50,local_c);
  sub_1020f900(&DAT_104dd61c);
  _atexit((_func_4879 *)&LAB_10316f80);
  return;
}


// 0x10021860  (ghidra: FUN_10021860)  [range]
void client_DrawHoverItem_init_10021860(void)

{
  uint8_t local_40 [8];
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd438);
  local_38 = 0x422;
  uStack_34 = 0x425;
  uStack_30 = 0x426;
  uStack_2c = 0x427;
  local_28 = 0x424;
  uStack_24 = 0x448;
  uStack_20 = 0x446;
  uStack_1c = 0x47c;
  local_18 = 0x48e;
  uStack_14 = 0x48c;
  uStack_10 = 0x497;
  uStack_c = 0x496;
  sub_1020f550(local_40,&local_38,local_8);
  sub_1020f900(&DAT_104dd438);
  _atexit((_func_4879 *)&LAB_10316f90);
  return;
}


// 0x100218d0  (ghidra: FUN_100218d0)  [range]
void client_DrawHoverItem_init_100218d0(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104dd500);
  local_18 = 0x9d;
  local_14 = 0x9f;
  sub_1020f550(local_10,&local_18,local_10);
  sub_1020f900(&DAT_104dd500);
  _atexit((_func_4879 *)&LAB_10316fa0);
  return;
}


// 0x10021930  (ghidra: FUN_10021930)  [range]
void client_DrawHoverItem_init_10021930(void)

{
  uint8_t local_20 [8];
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd56c);
  local_18 = 0x89;
  uStack_14 = 0xa1;
  uStack_10 = 0xa8;
  uStack_c = 0xbc;
  sub_1020f550(local_20,&local_18,local_8);
  sub_1020f900(&DAT_104dd56c);
  _atexit((_func_4879 *)&LAB_10316fb0);
  return;
}


// 0x10021990  (ghidra: FUN_10021990)  [range]
void client_DrawHoverItem_init_10021990(void)

{
  uint8_t local_78 [8];
  uint32_t local_70;
  uint32_t uStack_6c;
  uint32_t uStack_68;
  uint32_t uStack_64;
  uint32_t local_60;
  uint32_t uStack_5c;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t local_50;
  uint32_t uStack_4c;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t local_40;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t local_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f410((uint64_t *)&DAT_104dd538);
  local_70 = 0x85;
  uStack_6c = 0x86;
  uStack_68 = 0x87;
  uStack_64 = 0x88;
  local_10 = 0xc4;
  local_60 = 0xb9;
  uStack_5c = 0x89;
  uStack_58 = 0xa1;
  uStack_54 = 0xa2;
  local_50 = 0xa3;
  uStack_4c = 0xa8;
  uStack_48 = 0xbc;
  uStack_44 = 0xbd;
  local_40 = 0xb0;
  uStack_3c = 0xb1;
  uStack_38 = 0xb2;
  uStack_34 = 0xb3;
  local_30 = 0xb5;
  uStack_2c = 0xb6;
  uStack_28 = 0xb7;
  uStack_24 = 0xb8;
  local_20 = 0xb4;
  uStack_1c = 0xc0;
  uStack_18 = 0xc2;
  uStack_14 = 0xc3;
  sub_1020f550(local_78,&local_70,local_c);
  sub_1020f900(&DAT_104dd538);
  _atexit((_func_4879 *)&LAB_10316fc0);
  return;
}


// 0x10021a30  (ghidra: FUN_10021a30)  [range]
void client_DrawHoverItem_init_10021a30(void)

{
  uint8_t local_34 [8];
  uint32_t local_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd524);
  local_2c = 0x88;
  uStack_28 = 0xb9;
  uStack_24 = 0x89;
  uStack_20 = 0xa1;
  local_c = 0xbd;
  local_1c = 0xa2;
  uStack_18 = 0xa3;
  uStack_14 = 0xa8;
  uStack_10 = 0xbc;
  sub_1020f550(local_34,&local_2c,local_8);
  sub_1020f900(&DAT_104dd524);
  _atexit((_func_4879 *)&LAB_10316fd0);
  return;
}


// 0x10021aa0  (ghidra: FUN_10021aa0)  [range]
void client_DrawHoverItem_init_10021aa0(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd4b4);
  local_14 = 0x89;
  local_10 = 0xa1;
  local_c = 0xbc;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104dd4b4);
  _atexit((_func_4879 *)&LAB_10316fe0);
  return;
}


// 0x10021b00  (ghidra: FUN_10021b00)  [range]
void client_DrawHoverItem_init_10021b00(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd460);
  local_14 = 0x85;
  local_10 = 0x86;
  local_c = 0x87;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104dd460);
  _atexit((_func_4879 *)&LAB_10316ff0);
  return;
}


// 0x10021b60  (ghidra: FUN_10021b60)  [range]
void client_DrawHoverItem_init_10021b60(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd614);
  local_c = 0x220;
  local_1c = 0x9c;
  uStack_18 = 0xd3;
  uStack_14 = 0xf2;
  uStack_10 = 0xf3;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104dd614);
  _atexit((_func_4879 *)&LAB_10317000);
  return;
}


// 0x10021bc0  (ghidra: FUN_10021bc0)  [range]
void client_DrawHoverItem_init_10021bc0(void)

{
  uint8_t local_60 [8];
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint8_t local_c [8];
  
  sub_1020f410((uint64_t *)&DAT_104dd3fc);
  local_58 = 6;
  uStack_54 = 0xb;
  uStack_50 = 0x2a;
  uStack_4c = 0xc;
  local_38 = 0x31;
  local_48 = 0xf;
  uStack_44 = 0x12;
  uStack_40 = 0x14;
  uStack_3c = 0x15;
  local_2c = 0x24;
  uStack_28 = 0x25;
  uStack_24 = 0x26;
  uStack_20 = 0x27;
  local_34 = 0x17;
  local_30 = 0x18;
  local_1c = 0x34;
  uStack_18 = 0x41;
  uStack_14 = 0x10b;
  uStack_10 = 0x100;
  sub_1020f550(local_60,&local_58,local_c);
  sub_1020f900(&DAT_104dd3fc);
  _atexit((_func_4879 *)&LAB_10317010);
  return;
}


// 0x10021c50  (ghidra: FUN_10021c50)  [range]
void client_DrawHoverItem_init_10021c50(void)

{
  uint8_t local_88 [8];
  uint32_t local_80;
  uint32_t uStack_7c;
  uint32_t uStack_78;
  uint32_t uStack_74;
  uint32_t local_70;
  uint32_t uStack_6c;
  uint32_t uStack_68;
  uint32_t uStack_64;
  uint32_t local_60;
  uint32_t uStack_5c;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t local_50;
  uint32_t uStack_4c;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t local_40;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t local_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd4f8);
  local_80 = 0x315;
  uStack_7c = 0x377;
  uStack_78 = 0x37a;
  uStack_74 = 0x378;
  local_10 = 0x474;
  local_70 = 0x379;
  uStack_6c = 0x37b;
  uStack_68 = 0x376;
  uStack_64 = 0x316;
  local_60 = 0x317;
  uStack_5c = 0x318;
  uStack_58 = 0x319;
  uStack_54 = 0x31a;
  local_50 = 0x3a5;
  uStack_4c = 0x3a6;
  uStack_48 = 0x3a7;
  uStack_44 = 0x3a8;
  local_c = 0x475;
  local_40 = 0x3aa;
  uStack_3c = 0x3c6;
  uStack_38 = 0x3ab;
  uStack_34 = 0x3a9;
  local_30 = 0x3c8;
  uStack_2c = 0x3c9;
  uStack_28 = 0x452;
  uStack_24 = 0x453;
  local_20 = 0x458;
  uStack_1c = 0x459;
  uStack_18 = 0x45a;
  uStack_14 = 0x45b;
  sub_1020f550(local_88,&local_80,local_8);
  sub_1020f900(&DAT_104dd4f8);
  _atexit((_func_4879 *)&LAB_10317020);
  return;
}


// 0x10021d10  (ghidra: FUN_10021d10)  [range]
void client_DrawHoverItem_init_10021d10(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd49c);
  local_20 = 0x315;
  local_c = 0x458;
  local_1c = 0x3a5;
  uStack_18 = 0x3a6;
  uStack_14 = 0x3a7;
  uStack_10 = 0x3a8;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104dd49c);
  _atexit((_func_4879 *)&LAB_10317030);
  return;
}


// 0x10021d80  (ghidra: FUN_10021d80)  [range]
void client_DrawHoverItem_init_10021d80(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd474);
  local_10 = 0x2d9;
  local_c = 0x2da;
  local_20 = 0x2d5;
  uStack_1c = 0x2d6;
  uStack_18 = 0x2d7;
  uStack_14 = 0x2d8;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104dd474);
  _atexit((_func_4879 *)&LAB_10317040);
  return;
}


// 0x10021df0  (ghidra: FUN_10021df0)  [range]
void client_DrawHoverItem_init_10021df0(void)

{
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104dd428);
  local_14 = 0x2c8;
  sub_1020f550(local_10,&local_14,local_10);
  sub_1020f900(&DAT_104dd428);
  _atexit((_func_4879 *)&LAB_10317050);
  return;
}


// 0x10021e40  (ghidra: FUN_10021e40)  [range]
void client_DrawHoverItem_init_10021e40(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104dd5a8);
  local_18 = 0x2db;
  local_14 = 0x2dc;
  sub_1020f550(local_10,&local_18,local_10);
  sub_1020f900(&DAT_104dd5a8);
  _atexit((_func_4879 *)&LAB_10317060);
  return;
}


// 0x10021ea0  (ghidra: FUN_10021ea0)  [range]
void client_DrawHoverItem_init_10021ea0(void)

{
  uint8_t local_34 [8];
  uint32_t local_2c;
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd5d8);
  local_2c = 0x6f686364;
  local_28 = 0x6f736364;
  local_24 = 0x6c626364;
  local_20 = 0x766d7472;
  local_1c = 0x6f6d7472;
  local_18 = 0x66326d63;
  local_14 = 0x6263756c;
  local_10 = 0x6363756c;
  local_c = 0x6463756c;
  sub_1020f550(local_34,&local_2c,local_8);
  sub_1020f880(&DAT_104dd5d8);
  _atexit((_func_4879 *)&LAB_10317070);
  return;
}


// 0x10021f30  (ghidra: FUN_10021f30)  [range]
void client_DrawHoverItem_init_10021f30(void)

{
  uint8_t local_70 [8];
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint32_t local_5c;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_40;
  uint32_t local_3c;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f410((uint64_t *)&DAT_104dd5cc);
  local_68 = 0x20736b62;
  local_64 = 0x20646b62;
  local_60 = 0x206d6468;
  local_5c = 0x20317274;
  local_58 = 0x20737361;
  local_54 = 0x20786f62;
  local_50 = 0x2066736d;
  local_4c = 0x20706976;
  local_48 = 0x20747368;
  local_44 = 0x2034336a;
  local_40 = 0x20343371;
  local_3c = 0x207a7978;
  local_38 = 0x20796571;
  local_34 = 0x20726871;
  local_30 = 0x20726271;
  local_2c = 0x20316671;
  local_28 = 0x20326671;
  local_24 = 0x20626262;
  local_20 = 0x2073736d;
  local_1c = 0x20686668;
  local_18 = 0x20656369;
  local_14 = 0x20327274;
  local_10 = 0x20202020;
  sub_1020f550(local_70,&local_68,local_c);
  sub_1020f880(&DAT_104dd5cc);
  _atexit((_func_4879 *)&LAB_10317080);
  return;
}


// 0x10022030  (ghidra: FUN_10022030)  [range]
void client_DrawHoverItem_init_10022030(void)

{
  uint8_t local_50 [8];
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dd5b0);
  local_48 = 0x77;
  uStack_44 = 0x91;
  uStack_40 = 0x9c;
  uStack_3c = 0x9d;
  local_38 = 0xed;
  uStack_34 = 0xee;
  uStack_30 = 0x120;
  uStack_2c = 0x143;
  local_28 = 0x144;
  uStack_24 = 0x18e;
  uStack_20 = 0x192;
  uStack_1c = 0x1ad;
  local_18 = 0x1ee;
  uStack_14 = 0x1f0;
  uStack_10 = 0x1ff;
  uStack_c = 0x21b;
  sub_1020f550(local_50,&local_48,local_8);
  sub_1020f900(&DAT_104dd5b0);
  _atexit((_func_4879 *)&LAB_10317090);
  return;
}


// 0x100220b0  (ghidra: FUN_100220b0)  [range]
void client_DrawHoverItem_init_100220b0(void)

{
  uint8_t local_68 [8];
  uint32_t local_60;
  uint32_t uStack_5c;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t local_50;
  uint32_t uStack_4c;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t local_40;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t local_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f410((uint64_t *)&DAT_104dd588);
  local_60 = 0x1ae;
  uStack_5c = 0x1af;
  uStack_58 = 0x1b0;
  uStack_54 = 0x1ba;
  local_10 = 0x1f8;
  local_50 = 0x1bb;
  uStack_4c = 0x1bc;
  uStack_48 = 0x1c6;
  uStack_44 = 0x1c7;
  local_40 = 0x1c8;
  uStack_3c = 0x1d2;
  uStack_38 = 0x1d3;
  uStack_34 = 0x1d4;
  local_30 = 0x1de;
  uStack_2c = 0x1df;
  uStack_28 = 0x1e0;
  uStack_24 = 0x1ea;
  local_20 = 0x1eb;
  uStack_1c = 0x1ec;
  uStack_18 = 0x1f6;
  uStack_14 = 0x1f7;
  sub_1020f550(local_68,&local_60,local_c);
  sub_1020f900(&DAT_104dd588);
  _atexit((_func_4879 *)&LAB_103170a0);
  return;
}


// 0x10022140  (ghidra: FUN_10022140)  [range]
void client_DrawHoverItem_init_10022140(void)

{
  uint32_t local_4c0;
  uint32_t uStack_4bc;
  uint32_t uStack_4b8;
  uint32_t uStack_4b4;
  uint32_t local_4b0;
  uint32_t uStack_4ac;
  uint32_t uStack_4a8;
  uint32_t uStack_4a4;
  uint32_t local_4a0;
  uint32_t uStack_49c;
  uint32_t uStack_498;
  uint32_t uStack_494;
  uint32_t local_490;
  uint32_t uStack_48c;
  uint32_t uStack_488;
  uint32_t uStack_484;
  uint32_t local_480;
  uint32_t uStack_47c;
  uint32_t uStack_478;
  uint32_t uStack_474;
  uint32_t local_470;
  uint32_t uStack_46c;
  uint32_t uStack_468;
  uint32_t uStack_464;
  uint32_t local_460;
  uint32_t uStack_45c;
  uint32_t uStack_458;
  uint32_t uStack_454;
  uint32_t local_450;
  uint32_t uStack_44c;
  uint32_t uStack_448;
  uint32_t uStack_444;
  uint32_t local_440;
  uint32_t uStack_43c;
  uint32_t uStack_438;
  uint32_t uStack_434;
  uint32_t local_430;
  uint32_t uStack_42c;
  uint32_t uStack_428;
  uint32_t uStack_424;
  uint32_t local_420;
  uint32_t uStack_41c;
  uint32_t uStack_418;
  uint32_t uStack_414;
  uint32_t local_410;
  uint32_t uStack_40c;
  uint32_t uStack_408;
  uint32_t uStack_404;
  uint32_t local_400;
  uint32_t uStack_3fc;
  uint32_t uStack_3f8;
  uint32_t uStack_3f4;
  uint32_t local_3f0;
  uint32_t uStack_3ec;
  uint32_t uStack_3e8;
  uint32_t uStack_3e4;
  uint32_t local_3e0;
  uint32_t uStack_3dc;
  uint32_t uStack_3d8;
  uint32_t uStack_3d4;
  uint32_t local_3d0;
  uint32_t uStack_3cc;
  uint32_t uStack_3c8;
  uint32_t uStack_3c4;
  uint32_t local_3c0;
  uint32_t uStack_3bc;
  uint32_t uStack_3b8;
  uint32_t uStack_3b4;
  uint32_t local_3b0;
  uint32_t uStack_3ac;
  uint32_t uStack_3a8;
  uint32_t uStack_3a4;
  uint32_t local_3a0;
  uint32_t uStack_39c;
  uint32_t uStack_398;
  uint32_t uStack_394;
  uint32_t local_390;
  uint32_t uStack_38c;
  uint32_t uStack_388;
  uint32_t uStack_384;
  uint32_t local_380;
  uint32_t uStack_37c;
  uint32_t uStack_378;
  uint32_t uStack_374;
  uint32_t local_370;
  uint32_t uStack_36c;
  uint32_t uStack_368;
  uint32_t uStack_364;
  uint32_t local_360;
  uint32_t uStack_35c;
  uint32_t uStack_358;
  uint32_t uStack_354;
  uint32_t local_350;
  uint32_t uStack_34c;
  uint32_t uStack_348;
  uint32_t uStack_344;
  uint32_t local_340;
  uint32_t local_33c;
  uint32_t uStack_338;
  uint32_t uStack_334;
  uint32_t uStack_330;
  uint32_t local_32c;
  uint32_t uStack_328;
  uint32_t uStack_324;
  uint32_t uStack_320;
  uint32_t local_31c;
  uint32_t uStack_318;
  uint32_t uStack_314;
  uint32_t uStack_310;
  uint32_t local_30c;
  uint32_t uStack_308;
  uint32_t uStack_304;
  uint32_t uStack_300;
  uint32_t local_2fc;
  uint32_t uStack_2f8;
  uint32_t uStack_2f4;
  uint32_t uStack_2f0;
  uint32_t local_2ec;
  uint32_t uStack_2e8;
  uint32_t uStack_2e4;
  uint32_t uStack_2e0;
  uint32_t local_2dc;
  uint32_t uStack_2d8;
  uint32_t uStack_2d4;
  uint32_t uStack_2d0;
  uint32_t local_2cc;
  uint32_t uStack_2c8;
  uint32_t uStack_2c4;
  uint32_t uStack_2c0;
  uint32_t local_2bc;
  uint32_t local_2b8;
  uint32_t uStack_2b4;
  uint32_t uStack_2b0;
  uint32_t uStack_2ac;
  uint32_t local_2a8;
  uint32_t uStack_2a4;
  uint32_t uStack_2a0;
  uint32_t uStack_29c;
  uint32_t local_298;
  uint32_t uStack_294;
  uint32_t uStack_290;
  uint32_t uStack_28c;
  uint32_t local_288;
  uint32_t uStack_284;
  uint32_t uStack_280;
  uint32_t uStack_27c;
  uint32_t local_278;
  uint32_t uStack_274;
  uint32_t uStack_270;
  uint32_t uStack_26c;
  uint32_t local_268;
  uint32_t uStack_264;
  uint32_t uStack_260;
  uint32_t uStack_25c;
  uint32_t local_258;
  uint32_t uStack_254;
  uint32_t uStack_250;
  uint32_t uStack_24c;
  uint32_t local_248;
  uint32_t local_244;
  uint32_t uStack_240;
  uint32_t uStack_23c;
  uint32_t uStack_238;
  uint32_t local_234;
  uint32_t uStack_230;
  uint32_t uStack_22c;
  uint32_t uStack_228;
  uint32_t local_224;
  uint32_t uStack_220;
  uint32_t uStack_21c;
  uint32_t uStack_218;
  uint32_t local_214;
  uint32_t uStack_210;
  uint32_t uStack_20c;
  uint32_t uStack_208;
  uint32_t local_204;
  uint32_t uStack_200;
  uint32_t uStack_1fc;
  uint32_t uStack_1f8;
  uint32_t local_1f4;
  uint32_t uStack_1f0;
  uint32_t uStack_1ec;
  uint32_t uStack_1e8;
  uint32_t local_1e4;
  uint32_t uStack_1e0;
  uint32_t uStack_1dc;
  uint32_t uStack_1d8;
  uint32_t local_1d4;
  uint32_t uStack_1d0;
  uint32_t uStack_1cc;
  uint32_t uStack_1c8;
  uint32_t local_1c4;
  uint32_t uStack_1c0;
  uint32_t uStack_1bc;
  uint32_t uStack_1b8;
  uint32_t local_1b4;
  uint32_t uStack_1b0;
  uint32_t uStack_1ac;
  uint32_t uStack_1a8;
  uint32_t local_1a4;
  uint32_t uStack_1a0;
  uint32_t uStack_19c;
  uint32_t uStack_198;
  uint32_t local_194;
  uint32_t uStack_190;
  uint32_t uStack_18c;
  uint32_t uStack_188;
  uint32_t local_184;
  uint32_t local_180;
  uint32_t local_17c;
  uint32_t uStack_178;
  uint32_t uStack_174;
  uint32_t uStack_170;
  uint32_t local_16c;
  uint32_t uStack_168;
  uint32_t uStack_164;
  uint32_t uStack_160;
  uint32_t local_15c;
  uint32_t uStack_158;
  uint32_t uStack_154;
  uint32_t uStack_150;
  uint32_t local_14c;
  uint32_t uStack_148;
  uint32_t uStack_144;
  uint32_t uStack_140;
  uint32_t local_13c;
  uint32_t uStack_138;
  uint32_t uStack_134;
  uint32_t uStack_130;
  uint32_t local_12c;
  uint32_t uStack_128;
  uint32_t uStack_124;
  uint32_t uStack_120;
  uint32_t local_11c;
  uint32_t uStack_118;
  uint32_t uStack_114;
  uint32_t uStack_110;
  uint32_t local_10c;
  uint32_t local_108;
  uint32_t local_104;
  uint32_t local_100 [3];
  uint32_t local_f4 [3];
  uint32_t local_e8 [3];
  uint32_t local_dc [3];
  uint32_t local_d0 [3];
  uint32_t local_c4 [3];
  uint32_t local_b8 [3];
  uint32_t local_ac [3];
  uint32_t local_a0 [3];
  uint32_t local_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint32_t uStack_88;
  uint32_t local_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint32_t uStack_78;
  uint32_t local_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint32_t uStack_68;
  uint32_t local_64;
  uint8_t local_60 [8];
  uint8_t local_58 [8];
  uint8_t local_50 [8];
  uint8_t local_48 [8];
  uint8_t local_40 [8];
  uint8_t local_38 [8];
  uint8_t local_30 [8];
  uint8_t local_28 [8];
  uint8_t local_20 [8];
  uint8_t local_18 [8];
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103032f3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_1020f420((uint64_t *)&DAT_104dd594);
  local_1f4 = 6;
  uStack_1f0 = 7;
  uStack_1ec = 8;
  uStack_1e8 = 9;
  local_184 = 0x22;
  local_1e4 = 10;
  uStack_1e0 = 0xb;
  uStack_1dc = 0xc;
  uStack_1d8 = 0xd;
  local_1d4 = 0xe;
  uStack_1d0 = 0xf;
  uStack_1cc = 0x10;
  uStack_1c8 = 0x11;
  local_1c4 = 0x12;
  uStack_1c0 = 0x13;
  uStack_1bc = 0x14;
  uStack_1b8 = 0x15;
  local_180 = 0x23;
  local_1b4 = 0x16;
  uStack_1b0 = 0x17;
  uStack_1ac = 0x18;
  uStack_1a8 = 0x19;
  local_1a4 = 0x1a;
  uStack_1a0 = 0x1b;
  uStack_19c = 0x1c;
  uStack_198 = 0x1d;
  local_194 = 0x1e;
  uStack_190 = 0x1f;
  uStack_18c = 0x20;
  uStack_188 = 0x21;
  sub_1020f550(local_18,&local_1f4,&local_17c);
  sub_1020f780(local_100);
  local_8 = 0;
  local_33c = 0x24;
  uStack_338 = 0x25;
  uStack_334 = 0x26;
  uStack_330 = 0x27;
  local_32c = 0x28;
  uStack_328 = 0x29;
  uStack_324 = 0x2a;
  uStack_320 = 0x2b;
  local_31c = 0x2c;
  uStack_318 = 0x2d;
  uStack_314 = 0x2e;
  uStack_310 = 0x2f;
  local_2bc = 0x17f;
  local_30c = 0x30;
  uStack_308 = 0x31;
  uStack_304 = 0x32;
  uStack_300 = 0x33;
  local_2fc = 0x34;
  uStack_2f8 = 0x35;
  uStack_2f4 = 0x36;
  uStack_2f0 = 0x37;
  local_2ec = 0x38;
  uStack_2e8 = 0x39;
  uStack_2e4 = 0x3a;
  uStack_2e0 = 0x3b;
  local_2dc = 0x3c;
  uStack_2d8 = 0x3d;
  uStack_2d4 = 0x3e;
  uStack_2d0 = 0x3f;
  local_2cc = 0x40;
  uStack_2c8 = 0x41;
  uStack_2c4 = 0x171;
  uStack_2c0 = 0x178;
  sub_1020f550(local_20,&local_33c,&local_2b8);
  sub_1020f780(local_f4);
  local_8._0_1_ = 1;
  local_440 = 0x42;
  uStack_43c = 0x43;
  uStack_438 = 0x44;
  uStack_434 = 0x45;
  local_430 = 0x46;
  uStack_42c = 0x47;
  uStack_428 = 0x48;
  uStack_424 = 0x49;
  local_420 = 0x4a;
  uStack_41c = 0x4b;
  uStack_418 = 0x4c;
  uStack_414 = 0x4d;
  local_410 = 0x4e;
  uStack_40c = 0x4f;
  uStack_408 = 0x50;
  uStack_404 = 0x51;
  local_400 = 0x52;
  uStack_3fc = 0x53;
  uStack_3f8 = 0x54;
  uStack_3f4 = 0x55;
  local_3f0 = 0x56;
  uStack_3ec = 0x57;
  uStack_3e8 = 0x58;
  uStack_3e4 = 0x59;
  local_3e0 = 0x5a;
  uStack_3dc = 0x5b;
  uStack_3d8 = 0x5c;
  uStack_3d4 = 0x5d;
  local_3d0 = 0x5e;
  uStack_3cc = 0x5f;
  uStack_3c8 = 0x16f;
  uStack_3c4 = 0x17d;
  sub_1020f550(local_28,&local_440,&local_3c0);
  sub_1020f780(local_e8);
  local_8._0_1_ = 2;
  local_3c0 = 0x60;
  uStack_3bc = 0x61;
  uStack_3b8 = 0x62;
  uStack_3b4 = 99;
  local_3b0 = 100;
  uStack_3ac = 0x65;
  uStack_3a8 = 0x66;
  uStack_3a4 = 0x67;
  local_3a0 = 0x68;
  uStack_39c = 0x69;
  uStack_398 = 0x6a;
  uStack_394 = 0x6b;
  local_340 = 0x17a;
  local_390 = 0x6c;
  uStack_38c = 0x6d;
  uStack_388 = 0x6e;
  uStack_384 = 0x6f;
  local_380 = 0x70;
  uStack_37c = 0x71;
  uStack_378 = 0x72;
  uStack_374 = 0x73;
  local_370 = 0x74;
  uStack_36c = 0x75;
  uStack_368 = 0x76;
  uStack_364 = 0x77;
  local_360 = 0x78;
  uStack_35c = 0x79;
  uStack_358 = 0x7a;
  uStack_354 = 0x7b;
  local_350 = 0x7c;
  uStack_34c = 0x7d;
  uStack_348 = 0x16c;
  uStack_344 = 0x173;
  sub_1020f550(local_30,&local_3c0,&local_33c);
  sub_1020f780(local_dc);
  local_8._0_1_ = 3;
  local_2b8 = 0x7e;
  uStack_2b4 = 0x80;
  uStack_2b0 = 0x82;
  uStack_2ac = 0x83;
  local_2a8 = 0x84;
  uStack_2a4 = 0x85;
  uStack_2a0 = 0x86;
  uStack_29c = 0x87;
  local_298 = 0x89;
  uStack_294 = 0x8a;
  uStack_290 = 0x8b;
  uStack_28c = 0x8c;
  local_248 = 0x177;
  local_288 = 0x8d;
  uStack_284 = 0x8e;
  uStack_280 = 0x8f;
  uStack_27c = 0x90;
  local_278 = 0x91;
  uStack_274 = 0x92;
  uStack_270 = 0x93;
  uStack_26c = 0x94;
  local_268 = 0x95;
  uStack_264 = 0x96;
  uStack_260 = 0x97;
  uStack_25c = 0x98;
  local_258 = 0x99;
  uStack_254 = 0x9a;
  uStack_250 = 0x9b;
  uStack_24c = 0x170;
  sub_1020f550(local_38,&local_2b8,&local_244);
  sub_1020f780(local_d0);
  local_8._0_1_ = 4;
  local_17c = 0xdd;
  uStack_178 = 0xde;
  uStack_174 = 0xdf;
  uStack_170 = 0xe0;
  local_16c = 0xe1;
  uStack_168 = 0xe2;
  uStack_164 = 0xe3;
  uStack_160 = 0xe4;
  local_15c = 0xe5;
  uStack_158 = 0xe6;
  uStack_154 = 0xe7;
  uStack_150 = 0xe8;
  local_14c = 0xe9;
  uStack_148 = 0xea;
  uStack_144 = 0xeb;
  uStack_140 = 0xec;
  local_13c = 0xed;
  uStack_138 = 0xee;
  uStack_134 = 0xef;
  uStack_130 = 0xf0;
  local_12c = 0xf1;
  uStack_128 = 0xf2;
  uStack_124 = 0xf3;
  uStack_120 = 0xf4;
  local_10c = 0xf9;
  local_108 = 0xfa;
  local_104 = 0x172;
  local_11c = 0xf5;
  uStack_118 = 0xf6;
  uStack_114 = 0xf7;
  uStack_110 = 0xf8;
  sub_1020f550(local_40,&local_17c,local_100);
  sub_1020f780(local_c4);
  local_8._0_1_ = 5;
  local_4c0 = 0xfb;
  uStack_4bc = 0xfc;
  uStack_4b8 = 0xfd;
  uStack_4b4 = 0xfe;
  local_4b0 = 0xff;
  uStack_4ac = 0x100;
  uStack_4a8 = 0x101;
  uStack_4a4 = 0x102;
  local_4a0 = 0x103;
  uStack_49c = 0x104;
  uStack_498 = 0x105;
  uStack_494 = 0x106;
  local_490 = 0x107;
  uStack_48c = 0x108;
  uStack_488 = 0x109;
  uStack_484 = 0x10a;
  local_480 = 0x10b;
  uStack_47c = 0x10c;
  uStack_478 = 0x10d;
  uStack_474 = 0x10e;
  local_470 = 0x10f;
  uStack_46c = 0x110;
  uStack_468 = 0x111;
  uStack_464 = 0x112;
  local_460 = 0x113;
  uStack_45c = 0x114;
  uStack_458 = 0x115;
  uStack_454 = 0x116;
  local_450 = 0x117;
  uStack_44c = 0x118;
  uStack_448 = 0x16e;
  uStack_444 = 0x17c;
  sub_1020f550(local_48,&local_4c0,&local_440);
  sub_1020f780(local_b8);
  local_8._0_1_ = 6;
  local_94 = 0x49;
  uStack_90 = 0xfe;
  uStack_8c = 0x112;
  uStack_88 = 0x103;
  local_84 = 0x10d;
  uStack_80 = 0x109;
  uStack_7c = 0x118;
  uStack_78 = 0xff;
  local_74 = 0x10e;
  uStack_70 = 0x113;
  uStack_6c = 0x101;
  uStack_68 = 0x10a;
  local_64 = 0x115;
  sub_1020f550(local_50,&local_94,local_60);
  sub_1020f780(local_ac);
  local_8 = CONCAT31(local_8._1_3_,7);
  local_244 = 0x27;
  uStack_240 = 0x2d;
  uStack_23c = 0x2c;
  uStack_238 = 0x37;
  local_234 = 0x3b;
  uStack_230 = 0x171;
  uStack_22c = 0x40;
  uStack_228 = 0x26;
  local_224 = 0x31;
  uStack_220 = 0x30;
  uStack_21c = 0x35;
  uStack_218 = 0x2b;
  local_214 = 0x24;
  uStack_210 = 0x2f;
  uStack_20c = 0x2e;
  uStack_208 = 0x33;
  local_204 = 0x38;
  uStack_200 = 0x17f;
  uStack_1fc = 0x3e;
  uStack_1f8 = 0x178;
  sub_1020f550(local_58,&local_244,&local_1f4);
  sub_1020f780(local_a0);
  local_8 = 8;
  sub_1020f550(local_60,local_100,&local_94);
  sub_1020f7f0((uint32_t *)&DAT_104dd594);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_100,0xc,9,thunk_FUN_1020fb40);
  _atexit((_func_4879 *)&LAB_103170b0);
  ExceptionList = local_10;
  return;
}


// 0x10022700  (ghidra: FUN_10022700)  [range]
void client_DrawHoverItem_init_10022700(void)

{
  uint8_t local_454 [8];
  uint32_t local_44c;
  uint32_t uStack_448;
  uint32_t uStack_444;
  uint32_t uStack_440;
  uint32_t local_43c;
  uint32_t uStack_438;
  uint32_t uStack_434;
  uint32_t uStack_430;
  uint8_t local_42c [8];
  uint8_t local_424 [8];
  uint8_t local_41c [8];
  uint8_t local_414 [8];
  uint8_t local_40c [8];
  uint8_t local_404 [8];
  uint8_t local_3fc [8];
  uint8_t local_3f4 [8];
  uint8_t local_3ec [8];
  uint8_t local_3e4 [8];
  uint8_t local_3dc [8];
  uint8_t local_3d4 [8];
  uint8_t local_3cc [8];
  uint8_t local_3c4 [8];
  uint8_t local_3bc [8];
  uint8_t local_3b4 [8];
  uint8_t local_3ac [8];
  uint8_t local_3a4 [8];
  uint8_t local_39c [8];
  uint8_t local_394 [8];
  uint8_t local_38c [8];
  uint8_t local_384 [8];
  uint8_t local_37c [8];
  uint8_t local_374 [8];
  uint8_t local_36c [8];
  uint8_t local_364 [8];
  uint8_t local_35c [8];
  uint8_t local_354 [8];
  uint8_t local_34c [8];
  uint8_t local_344 [8];
  uint8_t local_33c [8];
  uint8_t local_334 [8];
  uint8_t local_32c [8];
  uint8_t local_324 [8];
  uint8_t local_31c [8];
  uint8_t local_314 [8];
  uint8_t local_30c [8];
  uint8_t local_304 [8];
  uint8_t local_2fc [8];
  uint8_t local_2f4 [8];
  uint8_t local_2ec [8];
  uint8_t local_2e4 [8];
  uint8_t local_2dc [8];
  uint8_t local_2d4 [8];
  uint8_t local_2cc [8];
  uint8_t local_2c4 [8];
  uint8_t local_2bc [8];
  uint8_t local_2b4 [8];
  uint8_t local_2ac [8];
  uint8_t local_2a4 [8];
  uint8_t local_29c [8];
  uint8_t local_294 [8];
  uint8_t local_28c [8];
  uint8_t local_284 [8];
  uint8_t local_27c [8];
  uint8_t local_274 [8];
  uint8_t local_26c [8];
  uint8_t local_264 [8];
  uint8_t local_25c [8];
  uint8_t local_254 [8];
  uint8_t local_24c [8];
  uint8_t local_244 [8];
  uint8_t local_23c [8];
  uint8_t local_234 [8];
  uint8_t local_22c [8];
  uint8_t local_224 [8];
  uint8_t local_21c [8];
  uint8_t local_214 [8];
  uint8_t local_20c [8];
  uint8_t local_204 [8];
  uint8_t local_1fc [8];
  uint8_t local_1f4 [8];
  uint8_t local_1ec [8];
  uint8_t local_1e4 [8];
  uint8_t local_1dc [8];
  uint32_t local_1d4;
  uint32_t uStack_1d0;
  uint32_t uStack_1cc;
  uint32_t uStack_1c8;
  uint32_t local_1c4;
  uint32_t uStack_1c0;
  uint32_t uStack_1bc;
  uint32_t uStack_1b8;
  uint32_t local_1b4;
  uint32_t uStack_1b0;
  uint32_t uStack_1ac;
  uint32_t uStack_1a8;
  uint32_t local_1a4;
  uint32_t uStack_1a0;
  uint32_t uStack_19c;
  uint32_t uStack_198;
  uint32_t local_194;
  uint32_t uStack_190;
  uint32_t uStack_18c;
  uint32_t uStack_188;
  uint32_t local_184;
  uint32_t uStack_180;
  uint32_t uStack_17c;
  uint32_t uStack_178;
  uint32_t local_174;
  uint32_t uStack_170;
  uint32_t uStack_16c;
  uint32_t uStack_168;
  uint32_t local_164;
  uint32_t uStack_160;
  uint32_t uStack_15c;
  uint32_t uStack_158;
  uint32_t local_154;
  uint32_t uStack_150;
  uint32_t uStack_14c;
  uint32_t uStack_148;
  uint32_t local_144;
  uint32_t uStack_140;
  uint32_t uStack_13c;
  uint32_t uStack_138;
  uint32_t local_134;
  uint32_t local_130;
  uint32_t uStack_12c;
  uint32_t uStack_128;
  uint32_t uStack_124;
  uint32_t local_120;
  uint32_t local_11c;
  uint32_t uStack_118;
  uint32_t uStack_114;
  uint32_t uStack_110;
  uint32_t local_10c;
  uint32_t local_108;
  uint32_t local_104;
  uint32_t local_100;
  uint32_t local_fc;
  uint32_t local_f8;
  uint32_t local_f4;
  uint32_t local_f0;
  uint32_t local_ec;
  uint32_t local_e8;
  uint32_t local_e4;
  uint32_t local_e0;
  uint32_t local_dc;
  uint32_t local_d8;
  uint32_t local_d4;
  uint32_t local_d0;
  uint32_t local_cc;
  uint32_t local_c8;
  uint32_t local_c4;
  uint32_t local_c0;
  uint32_t local_bc;
  uint32_t local_b8;
  uint32_t local_b4;
  uint32_t local_b0;
  uint32_t local_ac;
  uint32_t local_a8;
  uint32_t local_a4;
  uint32_t local_a0;
  uint32_t local_9c;
  uint32_t local_98;
  uint32_t local_94;
  uint32_t local_90;
  uint32_t local_8c;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_80;
  uint32_t local_7c;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_70;
  uint32_t local_6c;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint32_t local_5c;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_40;
  uint32_t local_3c;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  uint32_t local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103034d2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_1020f420((uint64_t *)&DAT_104dd484);
  sub_1020f960(local_304);
  local_8 = 0;
  local_24 = 2;
  local_20 = 8;
  sub_1020f550(local_314,&local_24,&local_1c);
  sub_1020f900(local_2fc);
  local_8._0_1_ = 1;
  local_64 = 3;
  local_60 = 9;
  local_5c = 0xd;
  sub_1020f550(local_364,&local_64,&local_58);
  sub_1020f900(local_2f4);
  local_8._0_1_ = 2;
  local_2c = 4;
  local_28 = 0x26;
  sub_1020f550(local_36c,&local_2c,&local_24);
  sub_1020f900(local_2ec);
  local_8._0_1_ = 3;
  local_70 = 5;
  local_6c = 10;
  local_68 = 0xe;
  sub_1020f550(local_374,&local_70,&local_64);
  sub_1020f900(local_2e4);
  local_8._0_1_ = 4;
  local_7c = 6;
  local_78 = 0xb;
  local_74 = 0xf;
  sub_1020f550(local_37c,&local_7c,&local_70);
  sub_1020f900(local_2dc);
  local_8._0_1_ = 5;
  local_88 = 7;
  local_84 = 0xc;
  local_80 = 0x10;
  sub_1020f550(local_384,&local_88,&local_7c);
  sub_1020f900(local_2d4);
  local_8._0_1_ = 6;
  local_94 = 0x11;
  local_90 = 0x12;
  local_8c = 0x13;
  sub_1020f550(local_38c,&local_94,&local_88);
  sub_1020f900(local_2cc);
  local_8._0_1_ = 7;
  local_120 = 0x19;
  local_130 = 0x15;
  uStack_12c = 0x16;
  uStack_128 = 0x17;
  uStack_124 = 0x18;
  sub_1020f550(local_394,&local_130,&local_11c);
  sub_1020f900(local_2c4);
  local_8._0_1_ = 8;
  local_a0 = 0x1a;
  local_9c = 0x1b;
  local_98 = 0x1c;
  sub_1020f550(local_39c,&local_a0,&local_94);
  sub_1020f900(local_2bc);
  local_8._0_1_ = 9;
  local_134 = 0x21;
  local_144 = 0x1d;
  uStack_140 = 0x1e;
  uStack_13c = 0x1f;
  uStack_138 = 0x20;
  sub_1020f550(local_3a4,&local_144,&local_130);
  sub_1020f900(local_2b4);
  local_8._0_1_ = 10;
  local_164 = 0x22;
  uStack_160 = 0x23;
  uStack_15c = 0x24;
  uStack_158 = 0x25;
  sub_1020f550(local_3ac,&local_164,&local_154);
  sub_1020f900(local_2ac);
  local_8._0_1_ = 0xb;
  local_14 = 0x27;
  sub_1020f550(local_3b4,&local_14,&local_10);
  sub_1020f900(local_2a4);
  local_8._0_1_ = 0xc;
  local_ac = 0x29;
  local_a8 = 0x37;
  local_a4 = 0x3b;
  sub_1020f550(local_3bc,&local_ac,&local_a0);
  sub_1020f900(local_29c);
  local_8._0_1_ = 0xd;
  local_174 = 0x2a;
  uStack_170 = 0x38;
  uStack_16c = 0x39;
  uStack_168 = 0x3c;
  sub_1020f550(local_3c4,&local_174,&local_164);
  sub_1020f900(local_294);
  local_8._0_1_ = 0xe;
  local_184 = 0x2b;
  uStack_180 = 0x3e;
  uStack_17c = 0x3f;
  uStack_178 = 0x40;
  sub_1020f550(local_3cc,&local_184,&local_174);
  sub_1020f900(local_28c);
  local_8._0_1_ = 0xf;
  local_194 = 0x2c;
  uStack_190 = 0x3a;
  uStack_18c = 0x3d;
  uStack_188 = 0x41;
  sub_1020f550(local_3d4,&local_194,&local_184);
  sub_1020f900(local_284);
  local_8._0_1_ = 0x10;
  local_44c = 0x2e;
  uStack_448 = 0x42;
  uStack_444 = 0x43;
  uStack_440 = 0x44;
  local_43c = 0x45;
  uStack_438 = 0x46;
  uStack_434 = 0x47;
  uStack_430 = 0x48;
  sub_1020f550(local_3dc,&local_44c,local_42c);
  sub_1020f900(local_27c);
  local_8._0_1_ = 0x11;
  local_10c = 0x34;
  local_11c = 0x2f;
  uStack_118 = 0x30;
  uStack_114 = 0x31;
  uStack_110 = 0x33;
  local_108 = 0x35;
  local_104 = 0x36;
  sub_1020f550(local_3e4,&local_11c,&local_100);
  sub_1020f900(local_274);
  local_8._0_1_ = 0x12;
  local_18 = 0x4a;
  sub_1020f550(local_3ec,&local_18,&local_14);
  sub_1020f900(local_26c);
  local_8._0_1_ = 0x13;
  local_b8 = 0x4c;
  local_b4 = 0x54;
  local_b0 = 0x55;
  sub_1020f550(local_3fc,&local_b8,&local_ac);
  sub_1020f900(local_264);
  local_8._0_1_ = 0x14;
  local_154 = 0x4d;
  uStack_150 = 0x56;
  uStack_14c = 0x57;
  uStack_148 = 0x5a;
  sub_1020f550(local_3f4,&local_154,&local_144);
  sub_1020f900(local_25c);
  local_8._0_1_ = 0x15;
  local_1a4 = 0x4e;
  uStack_1a0 = 0x58;
  uStack_19c = 0x59;
  uStack_198 = 0x5b;
  sub_1020f550(local_404,&local_1a4,&local_194);
  sub_1020f900(local_254);
  local_8._0_1_ = 0x16;
  local_c4 = 0x4f;
  local_c0 = 0x5c;
  local_bc = 0x5d;
  sub_1020f550(local_40c,&local_c4,&local_b8);
  sub_1020f900(local_24c);
  local_8._0_1_ = 0x17;
  local_d0 = 0x50;
  local_cc = 0x5e;
  local_c8 = 0x5f;
  sub_1020f550(local_414,&local_d0,&local_c4);
  sub_1020f900(local_244);
  local_8._0_1_ = 0x18;
  local_dc = 0x51;
  local_d8 = 0x60;
  local_d4 = 0x61;
  sub_1020f550(local_41c,&local_dc,&local_d0);
  sub_1020f900(local_23c);
  local_8._0_1_ = 0x19;
  local_1b4 = 0x52;
  uStack_1b0 = 0x53;
  uStack_1ac = 0x62;
  uStack_1a8 = 99;
  sub_1020f550(local_424,&local_1b4,&local_1a4);
  sub_1020f900(local_234);
  local_8._0_1_ = 0x1a;
  local_e8 = 100;
  local_e4 = 0x65;
  local_e0 = 0x66;
  sub_1020f550(local_42c,&local_e8,&local_dc);
  sub_1020f900(local_22c);
  local_8._0_1_ = 0x1b;
  local_34 = 0x68;
  local_30 = 0x69;
  sub_1020f550(local_454,&local_34,&local_2c);
  sub_1020f900(local_224);
  local_8._0_1_ = 0x1c;
  local_3c = 0x6a;
  local_38 = 0x6b;
  sub_1020f550(local_30c,&local_3c,&local_34);
  sub_1020f900(local_21c);
  local_8._0_1_ = 0x1d;
  local_1c = 0x6c;
  sub_1020f550(local_35c,&local_1c,&local_18);
  sub_1020f900(local_214);
  local_8._0_1_ = 0x1e;
  local_44 = 0x6e;
  local_40 = 0x6f;
  sub_1020f550(local_31c,&local_44,&local_3c);
  sub_1020f900(local_20c);
  local_8._0_1_ = 0x1f;
  local_f4 = 0x70;
  local_f0 = 0x71;
  local_ec = 0x72;
  sub_1020f550(local_324,&local_f4,&local_e8);
  sub_1020f900(local_204);
  local_8._0_1_ = 0x20;
  local_100 = 0x73;
  local_fc = 0x74;
  local_f8 = 0x75;
  sub_1020f550(local_32c,&local_100,&local_f4);
  sub_1020f900(local_1fc);
  local_8._0_1_ = 0x21;
  local_4c = 0x76;
  local_48 = 0x77;
  sub_1020f550(local_334,&local_4c,&local_44);
  sub_1020f900(local_1f4);
  local_8._0_1_ = 0x22;
  local_1c4 = 0x79;
  uStack_1c0 = 0x7a;
  uStack_1bc = 0x7b;
  uStack_1b8 = 0x7c;
  sub_1020f550(local_33c,&local_1c4,&local_1b4);
  sub_1020f900(local_1ec);
  local_8._0_1_ = 0x23;
  local_58 = 0x7d;
  local_54 = 0x7e;
  local_50 = 0x7f;
  sub_1020f550(local_344,&local_58,&local_4c);
  sub_1020f900(local_1e4);
  local_8 = CONCAT31(local_8._1_3_,0x24);
  local_1d4 = 0x80;
  uStack_1d0 = 0x81;
  uStack_1cc = 0x82;
  uStack_1c8 = 0x83;
  sub_1020f550(local_34c,&local_1d4,&local_1c4);
  sub_1020f900(local_1dc);
  local_8 = 0x25;
  sub_1020f550(local_354,local_304,&local_1d4);
  sub_1020f840((uint32_t *)&DAT_104dd484);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_304,8,0x26,thunk_FUN_1020f8e0);
  _atexit((_func_4879 *)&DAT_103170c0);
  ExceptionList = local_10;
  return;
}


// 0x100230d0  (ghidra: FUN_100230d0)  [range]
void client_DrawHoverItem_init_100230d0(void)

{
  uint32_t local_4ec [3];
  uint32_t local_4e0 [3];
  uint32_t local_4d4 [3];
  uint32_t local_4c8 [3];
  uint32_t local_4bc [3];
  uint32_t local_4b0 [3];
  uint32_t local_4a4 [3];
  uint32_t local_498 [3];
  uint32_t local_48c [3];
  uint32_t local_480 [3];
  uint32_t local_474 [3];
  uint32_t local_468 [3];
  uint32_t local_45c [3];
  uint32_t local_450 [3];
  uint32_t local_444 [3];
  uint32_t local_438 [3];
  uint32_t local_42c [3];
  uint32_t local_420 [3];
  uint32_t local_414 [3];
  uint32_t local_408 [3];
  uint32_t local_3fc [3];
  uint32_t local_3f0 [3];
  uint32_t local_3e4 [3];
  uint32_t local_3d8 [3];
  uint32_t local_3cc [3];
  uint32_t local_3c0 [3];
  uint32_t local_3b4 [3];
  uint32_t local_3a8 [3];
  uint32_t local_39c [3];
  uint32_t local_390 [3];
  uint32_t local_384 [3];
  uint32_t local_378 [3];
  uint32_t local_36c [3];
  uint32_t local_360 [3];
  uint32_t local_354 [3];
  uint32_t local_348 [3];
  uint32_t local_33c [3];
  uint32_t local_330 [3];
  uint32_t local_324;
  uint32_t uStack_320;
  uint32_t uStack_31c;
  uint32_t uStack_318;
  uint32_t local_314;
  uint32_t uStack_310;
  uint32_t uStack_30c;
  uint32_t uStack_308;
  uint8_t local_304 [8];
  uint8_t local_2fc [8];
  uint8_t local_2f4 [8];
  uint8_t local_2ec [8];
  uint8_t local_2e4 [8];
  uint8_t local_2dc [8];
  uint8_t local_2d4 [8];
  uint8_t local_2cc [8];
  uint8_t local_2c4 [8];
  uint8_t local_2bc [8];
  uint8_t local_2b4 [8];
  uint8_t local_2ac [8];
  uint8_t local_2a4 [8];
  uint8_t local_29c [8];
  uint8_t local_294 [8];
  uint8_t local_28c [8];
  uint8_t local_284 [8];
  uint8_t local_27c [8];
  uint8_t local_274 [8];
  uint8_t local_26c [8];
  uint8_t local_264 [8];
  uint8_t local_25c [8];
  uint8_t local_254 [8];
  uint8_t local_24c [8];
  uint8_t local_244 [8];
  uint8_t local_23c [8];
  uint8_t local_234 [8];
  uint8_t local_22c [8];
  uint8_t local_224 [8];
  uint8_t local_21c [8];
  uint8_t local_214 [8];
  uint8_t local_20c [8];
  uint8_t local_204 [8];
  uint8_t local_1fc [8];
  uint8_t local_1f4 [8];
  uint8_t local_1ec [8];
  uint8_t local_1e4 [8];
  uint8_t local_1dc [8];
  uint32_t local_1d4;
  uint32_t uStack_1d0;
  uint32_t uStack_1cc;
  uint32_t uStack_1c8;
  uint32_t local_1c4;
  uint32_t uStack_1c0;
  uint32_t uStack_1bc;
  uint32_t uStack_1b8;
  uint32_t local_1b4;
  uint32_t uStack_1b0;
  uint32_t uStack_1ac;
  uint32_t uStack_1a8;
  uint32_t local_1a4;
  uint32_t uStack_1a0;
  uint32_t uStack_19c;
  uint32_t uStack_198;
  uint32_t local_194;
  uint32_t uStack_190;
  uint32_t uStack_18c;
  uint32_t uStack_188;
  uint32_t local_184;
  uint32_t uStack_180;
  uint32_t uStack_17c;
  uint32_t uStack_178;
  uint32_t local_174;
  uint32_t uStack_170;
  uint32_t uStack_16c;
  uint32_t uStack_168;
  uint32_t local_164;
  uint32_t uStack_160;
  uint32_t uStack_15c;
  uint32_t uStack_158;
  uint32_t local_154;
  uint32_t uStack_150;
  uint32_t uStack_14c;
  uint32_t uStack_148;
  uint32_t local_144;
  uint32_t uStack_140;
  uint32_t uStack_13c;
  uint32_t uStack_138;
  uint32_t local_134;
  uint32_t local_130;
  uint32_t uStack_12c;
  uint32_t uStack_128;
  uint32_t uStack_124;
  uint32_t local_120;
  uint32_t local_11c;
  uint32_t uStack_118;
  uint32_t uStack_114;
  uint32_t uStack_110;
  uint32_t local_10c;
  uint32_t local_108;
  uint32_t local_104;
  uint32_t local_100;
  uint32_t local_fc;
  uint32_t local_f8;
  uint32_t local_f4;
  uint32_t local_f0;
  uint32_t local_ec;
  uint32_t local_e8;
  uint32_t local_e4;
  uint32_t local_e0;
  uint32_t local_dc;
  uint32_t local_d8;
  uint32_t local_d4;
  uint32_t local_d0;
  uint32_t local_cc;
  uint32_t local_c8;
  uint32_t local_c4;
  uint32_t local_c0;
  uint32_t local_bc;
  uint32_t local_b8;
  uint32_t local_b4;
  uint32_t local_b0;
  uint32_t local_ac;
  uint32_t local_a8;
  uint32_t local_a4;
  uint32_t local_a0;
  uint32_t local_9c;
  uint32_t local_98;
  uint32_t local_94;
  uint32_t local_90;
  uint32_t local_8c;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_80;
  uint32_t local_7c;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_70;
  uint32_t local_6c;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint32_t local_5c;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_40;
  uint32_t local_3c;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  uint32_t local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103036b2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_1020f420((uint64_t *)&DAT_104dd41c);
  sub_1020f7c0(local_4ec);
  local_8 = 0;
  local_24 = 0x40600000;
  local_20 = 0x40400000;
  sub_1020f550(local_1ec,&local_24,&local_1c);
  sub_1020f780(local_4e0);
  local_8._0_1_ = 1;
  local_64 = 0x40400000;
  local_60 = 0x40200000;
  local_5c = 0x40200000;
  sub_1020f550(local_23c,&local_64,&local_58);
  sub_1020f780(local_4d4);
  local_8._0_1_ = 2;
  local_2c = 0x40600000;
  local_28 = 0x40600000;
  sub_1020f550(local_244,&local_2c,&local_24);
  sub_1020f780(local_4c8);
  local_8._0_1_ = 3;
  local_70 = 0x40333333;
  local_6c = 0x40200000;
  local_68 = 0x40200000;
  sub_1020f550(local_24c,&local_70,&local_64);
  sub_1020f780(local_4bc);
  local_8._0_1_ = 4;
  local_7c = 0x4059999a;
  local_78 = 0x40200000;
  local_74 = 0x40200000;
  sub_1020f550(local_254,&local_7c,&local_70);
  sub_1020f780(local_4b0);
  local_8._0_1_ = 5;
  local_88 = 0x40400000;
  local_84 = 0x40000000;
  local_80 = 0x40000000;
  sub_1020f550(local_25c,&local_88,&local_7c);
  sub_1020f780(local_4a4);
  local_8._0_1_ = 6;
  local_94 = 0x40600000;
  local_90 = 0x402ccccd;
  local_8c = 0x402ccccd;
  sub_1020f550(local_264,&local_94,&local_88);
  sub_1020f780(local_498);
  local_8._0_1_ = 7;
  local_120 = 0x40400000;
  local_130 = 0x40400000;
  uStack_12c = 0x40400000;
  uStack_128 = 0x40400000;
  uStack_124 = 0x40400000;
  sub_1020f550(local_26c,&local_130,&local_11c);
  sub_1020f780(local_48c);
  local_8._0_1_ = 8;
  local_a0 = 0x40400000;
  local_9c = 0x40200000;
  local_98 = 0x40200000;
  sub_1020f550(local_274,&local_a0,&local_94);
  sub_1020f780(local_480);
  local_8._0_1_ = 9;
  local_134 = 0x40400000;
  local_144 = 0x40800000;
  uStack_140 = 0x40800000;
  uStack_13c = 0x40800000;
  uStack_138 = 0x40400000;
  sub_1020f550(local_27c,&local_144,&local_130);
  sub_1020f780(local_474);
  local_8._0_1_ = 10;
  local_164 = 0x40900000;
  uStack_160 = 0x40800000;
  uStack_15c = 0x40900000;
  uStack_158 = 0x40200000;
  sub_1020f550(local_284,&local_164,&local_154);
  sub_1020f780(local_468);
  local_8._0_1_ = 0xb;
  local_14 = 0x3f800000;
  sub_1020f550(local_28c,&local_14,&local_10);
  sub_1020f780(local_45c);
  local_8._0_1_ = 0xc;
  local_ac = 0x40200000;
  local_a8 = 0x40200000;
  local_a4 = 0x40200000;
  sub_1020f550(local_294,&local_ac,&local_a0);
  sub_1020f780(local_450);
  local_8._0_1_ = 0xd;
  local_174 = 0x40400000;
  uStack_170 = 0x40000000;
  uStack_16c = 0x40000000;
  uStack_168 = 0x40000000;
  sub_1020f550(local_29c,&local_174,&local_164);
  sub_1020f780(local_444);
  local_8._0_1_ = 0xe;
  local_184 = 0x40400000;
  uStack_180 = 0x40000000;
  uStack_17c = 0x40000000;
  uStack_178 = 0x40000000;
  sub_1020f550(local_2a4,&local_184,&local_174);
  sub_1020f780(local_438);
  local_8._0_1_ = 0xf;
  local_194 = 0x40400000;
  uStack_190 = 0x40000000;
  uStack_18c = 0x40200000;
  uStack_188 = 0x40200000;
  sub_1020f550(local_2ac,&local_194,&local_184);
  sub_1020f780(local_42c);
  local_8._0_1_ = 0x10;
  local_324 = 0x3fe66666;
  uStack_320 = 0x40000000;
  uStack_31c = 0x40000000;
  uStack_318 = 0x40000000;
  local_314 = 0x40000000;
  uStack_310 = 0x40000000;
  uStack_30c = 0x40000000;
  uStack_308 = 0x40000000;
  sub_1020f550(local_2b4,&local_324,local_304);
  sub_1020f780(local_420);
  local_8._0_1_ = 0x11;
  local_10c = 0x40400000;
  local_11c = 0x40200000;
  uStack_118 = 0x40200000;
  uStack_114 = 0x40200000;
  uStack_110 = 0x40200000;
  local_108 = 0x40400000;
  local_104 = 0x40400000;
  sub_1020f550(local_2bc,&local_11c,&local_100);
  sub_1020f780(local_414);
  local_8._0_1_ = 0x12;
  local_18 = 0x3fc00000;
  sub_1020f550(local_2c4,&local_18,&local_14);
  sub_1020f780(local_408);
  local_8._0_1_ = 0x13;
  local_b8 = 0x3fc00000;
  local_b4 = 0x400ccccd;
  local_b0 = 0x400ccccd;
  sub_1020f550(local_2d4,&local_b8,&local_ac);
  sub_1020f780(local_3fc);
  local_8._0_1_ = 0x14;
  local_154 = 0x3fc00000;
  uStack_150 = 0x3fc00000;
  uStack_14c = 0x3fc00000;
  uStack_148 = 0x40400000;
  sub_1020f550(local_2cc,&local_154,&local_144);
  sub_1020f780(local_3f0);
  local_8._0_1_ = 0x15;
  local_1a4 = 0x3f8ccccd;
  uStack_1a0 = 0x400ccccd;
  uStack_19c = 0x400ccccd;
  uStack_198 = 0x400ccccd;
  sub_1020f550(local_2dc,&local_1a4,&local_194);
  sub_1020f780(local_3e4);
  local_8._0_1_ = 0x16;
  local_c4 = 0x40533333;
  local_c0 = 0x406ccccd;
  local_bc = 0x406ccccd;
  sub_1020f550(local_2e4,&local_c4,&local_b8);
  sub_1020f780(local_3d8);
  local_8._0_1_ = 0x17;
  local_d0 = 0x40333333;
  local_cc = 0x40400000;
  local_c8 = 0x40400000;
  sub_1020f550(local_2ec,&local_d0,&local_c4);
  sub_1020f780(local_3cc);
  local_8._0_1_ = 0x18;
  local_dc = 0x40400000;
  local_d8 = 0x40400000;
  local_d4 = 0x40400000;
  sub_1020f550(local_2f4,&local_dc,&local_d0);
  sub_1020f780(local_3c0);
  local_8._0_1_ = 0x19;
  local_1b4 = 0x40400000;
  uStack_1b0 = 0x40000000;
  uStack_1ac = 0x40400000;
  uStack_1a8 = 0x40400000;
  sub_1020f550(local_2fc,&local_1b4,&local_1a4);
  sub_1020f780(local_3b4);
  local_8._0_1_ = 0x1a;
  local_e8 = 0x404ccccd;
  local_e4 = 0x40600000;
  local_e0 = 0x40600000;
  sub_1020f550(local_304,&local_e8,&local_dc);
  sub_1020f780(local_3a8);
  local_8._0_1_ = 0x1b;
  local_34 = 0x40000000;
  local_30 = 0x40000000;
  sub_1020f550(local_1dc,&local_34,&local_2c);
  sub_1020f780(local_39c);
  local_8._0_1_ = 0x1c;
  local_3c = 0x40133333;
  local_38 = 0x40000000;
  sub_1020f550(local_1e4,&local_3c,&local_34);
  sub_1020f780(local_390);
  local_8._0_1_ = 0x1d;
  local_1c = 0x40200000;
  sub_1020f550(local_234,&local_1c,&local_18);
  sub_1020f780(local_384);
  local_8._0_1_ = 0x1e;
  local_44 = 0x40000000;
  local_40 = 0x40000000;
  sub_1020f550(local_1f4,&local_44,&local_3c);
  sub_1020f780(local_378);
  local_8._0_1_ = 0x1f;
  local_f4 = 0x40200000;
  local_f0 = 0x40000000;
  local_ec = 0x40000000;
  sub_1020f550(local_1fc,&local_f4,&local_e8);
  sub_1020f780(local_36c);
  local_8._0_1_ = 0x20;
  local_100 = 0x400ccccd;
  local_fc = 0x402ccccd;
  local_f8 = 0x40200000;
  sub_1020f550(local_204,&local_100,&local_f4);
  sub_1020f780(local_360);
  local_8._0_1_ = 0x21;
  local_4c = 0x40133333;
  local_48 = 0x40200000;
  sub_1020f550(local_20c,&local_4c,&local_44);
  sub_1020f780(local_354);
  local_8._0_1_ = 0x22;
  local_1c4 = 0x40000000;
  uStack_1c0 = 0x40000000;
  uStack_1bc = 0x40000000;
  uStack_1b8 = 0x40000000;
  sub_1020f550(local_214,&local_1c4,&local_1b4);
  sub_1020f780(local_348);
  local_8._0_1_ = 0x23;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  sub_1020f550(local_21c,&local_58,&local_4c);
  sub_1020f780(local_33c);
  local_8 = CONCAT31(local_8._1_3_,0x24);
  local_1d4 = 0x40400000;
  uStack_1d0 = 0x40400000;
  uStack_1cc = 0x40400000;
  uStack_1c8 = 0x40200000;
  sub_1020f550(local_224,&local_1d4,&local_1c4);
  sub_1020f780(local_330);
  local_8 = 0x25;
  sub_1020f550(local_22c,local_4ec,&local_324);
  sub_1020f7f0((uint32_t *)&DAT_104dd41c);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_4ec,0xc,0x26,thunk_FUN_1020fb40);
  _atexit((_func_4879 *)&LAB_103170d0);
  ExceptionList = local_10;
  return;
}


// 0x10023ad0  (ghidra: FUN_10023ad0)  [range]
void client_DrawHoverItem_init_10023ad0(void)

{
  uint8_t local_3a8 [24];
  uint8_t local_390 [24];
  uint8_t local_378 [24];
  uint8_t local_360 [24];
  uint8_t local_348 [24];
  uint8_t local_330 [24];
  uint8_t local_318 [24];
  uint8_t local_300 [24];
  uint8_t local_2e8 [24];
  uint8_t local_2d0 [24];
  uint8_t local_2b8 [24];
  uint8_t local_2a0 [24];
  uint8_t local_288 [24];
  uint8_t local_270 [24];
  uint8_t local_258 [24];
  uint8_t local_240 [24];
  uint8_t local_228 [24];
  uint8_t local_210 [24];
  uint8_t local_1f8 [24];
  uint8_t local_1e0 [24];
  uint8_t local_1c8 [24];
  uint8_t local_1b0 [24];
  uint8_t local_198 [24];
  uint8_t local_180 [24];
  uint8_t local_168 [24];
  uint8_t local_150 [24];
  uint8_t local_138 [24];
  uint8_t local_120 [24];
  uint8_t local_108 [24];
  uint8_t local_f0 [24];
  uint8_t local_d8 [24];
  uint8_t local_c0 [24];
  uint8_t local_a8 [24];
  uint8_t local_90 [24];
  uint8_t local_78 [24];
  uint8_t local_60 [24];
  uint8_t local_48 [24];
  uint8_t local_30 [24];
  uint8_t local_18 [8];
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10303889;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_1020f420((uint64_t *)&DAT_104dd4c4);
  sub_1020f990(local_3a8,"");
  local_8 = 0;
  sub_1020f990(local_390,"the Blood Moor and Den of Evil");
  local_8._0_1_ = 1;
  sub_1020f990(local_378,"the Cold Plains and the Cave");
  local_8._0_1_ = 2;
  sub_1020f990(local_360,"the Stony Field and Tristram");
  local_8._0_1_ = 3;
  sub_1020f990(local_348,"the Dark Wood and the Underground Passage");
  local_8._0_1_ = 4;
  sub_1020f990(local_330,"the Black Marsh and the Hole");
  local_8._0_1_ = 5;
  sub_1020f990(local_318,"the Tamoe Highland and the Pit");
  local_8._0_1_ = 6;
  sub_1020f990(local_300,"the Burial Ground and Mausoleum");
  local_8._0_1_ = 7;
  sub_1020f990(local_2e8,"the Forgotten Tower");
  local_8._0_1_ = 8;
  sub_1020f990(local_2d0,"the Outer Cloister and Barracks");
  local_8._0_1_ = 9;
  sub_1020f990(local_2b8,"the Jail, Inner Cloister, and Cathedral");
  local_8._0_1_ = 10;
  sub_1020f990(local_2a0,"the Catacombs");
  local_8._0_1_ = 0xb;
  sub_1020f990(local_288,"the Cow Level");
  local_8._0_1_ = 0xc;
  sub_1020f990(local_270,"the Rocky Waste and the Stony Tomb");
  local_8._0_1_ = 0xd;
  sub_1020f990(local_258,"the Dry Hills and the Halls of the Dead");
  local_8._0_1_ = 0xe;
  sub_1020f990(local_240,"the Far Oasis and the Maggot Lair");
  local_8._0_1_ = 0xf;
  sub_1020f990(local_228,"the Lost City, Ancient Tunnels, and Claw Viper Temple");
  local_8._0_1_ = 0x10;
  sub_1020f990(local_210,"the Canyon of the Magi and Tal Rasha\'s Tomb");
  local_8._0_1_ = 0x11;
  sub_1020f990(local_1f8,"the Lut Gholein Sewers and the Palace Cellars");
  local_8._0_1_ = 0x12;
  sub_1020f990(local_1e0,"the Arcane Sanctuary");
  local_8._0_1_ = 0x13;
  sub_1020f990(local_1c8,"the Spider Forest, Arachnid Lair, and Spider Cavern");
  local_8._0_1_ = 0x14;
  sub_1020f990(local_1b0,"the Great Marsh and the Swampy Pit");
  local_8._0_1_ = 0x15;
  sub_1020f990(local_198,"the Flayer Jungle and the Flayer Dungeon");
  local_8._0_1_ = 0x16;
  sub_1020f990(local_180,"Lower Kurast and the Kurast Sewers");
  local_8._0_1_ = 0x17;
  sub_1020f990(local_168,"the Kurast Bazaar, Ruined Temple, and Disused Fane");
  local_8._0_1_ = 0x18;
  sub_1020f990(local_150,"Upper Kurast, the Forgotten Reliquary, and Forgotten Temple");
  local_8._0_1_ = 0x19;
  sub_1020f990(local_138,"Travincal, the Ruined Fane, and Disused Reliquary");
  local_8._0_1_ = 0x1a;
  sub_1020f990(local_120,"the Durance of Hate");
  local_8._0_1_ = 0x1b;
  sub_1020f990(local_108,"the Outer Steppes and the Plains of Despair");
  local_8._0_1_ = 0x1c;
  sub_1020f990(local_f0,"the City of the Damned and the River of Flame");
  local_8._0_1_ = 0x1d;
  sub_1020f990(local_d8,"Chaos Sanctuary");
  local_8._0_1_ = 0x1e;
  sub_1020f990(local_c0,"the Bloody Foothills and the Frigid Highlands");
  local_8._0_1_ = 0x1f;
  sub_1020f990(local_a8,"the Arreat Plateau, Crystalline Passage, and Frozen River");
  local_8._0_1_ = 0x20;
  sub_1020f990(local_90,"the Glacial Trail, Drifter Cavern, and Frozen Tundra");
  local_8._0_1_ = 0x21;
  sub_1020f990(local_78,"the Ancients\' Way and the Icy Cellar");
  local_8._0_1_ = 0x22;
  sub_1020f990(local_60,"Nihlathak\'s Temple");
  local_8._0_1_ = 0x23;
  sub_1020f990(local_48,"Abaddon, the Pit of Acheron, and the Infernal Pit");
  local_8 = CONCAT31(local_8._1_3_,0x24);
  sub_1020f990(local_30,"the Worldstone Keep and Throne of Destruction");
  local_8 = 0x25;
  sub_1020f550(local_18,local_3a8,local_18);
  sub_1020f730((uint32_t *)&DAT_104dd4c4);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_3a8,0x18,0x26,thunk_FUN_1020fc60);
  _atexit((_func_4879 *)&LAB_103170e0);
  ExceptionList = local_10;
  return;
}


// 0x10023e50  (ghidra: FUN_10023e50)  [range]
void client_DrawHoverItem_init_10023e50(void)

{
  uint8_t local_2bc [16];
  uint8_t local_2ac [16];
  uint8_t local_29c [16];
  uint8_t local_28c [16];
  uint8_t local_27c [16];
  uint8_t local_26c [16];
  uint8_t local_25c [16];
  uint8_t local_24c [16];
  uint8_t local_23c [16];
  uint8_t local_22c [16];
  uint32_t local_21c;
  uint32_t uStack_218;
  uint32_t uStack_214;
  uint32_t uStack_210;
  uint32_t local_20c;
  uint32_t uStack_208;
  uint32_t uStack_204;
  uint32_t uStack_200;
  uint32_t local_1fc;
  uint32_t uStack_1f8;
  uint32_t uStack_1f4;
  uint32_t uStack_1f0;
  uint32_t local_1ec;
  uint32_t uStack_1e8;
  uint32_t uStack_1e4;
  uint32_t uStack_1e0;
  uint32_t local_1dc;
  uint32_t uStack_1d8;
  uint32_t uStack_1d4;
  uint32_t uStack_1d0;
  uint32_t local_1cc;
  uint32_t uStack_1c8;
  uint32_t uStack_1c4;
  uint32_t uStack_1c0;
  uint8_t local_1bc [8];
  uint8_t local_1b4 [8];
  uint8_t local_1ac [8];
  uint8_t local_1a4 [8];
  uint8_t local_19c [8];
  uint8_t local_194 [8];
  uint8_t local_18c [8];
  uint8_t local_184 [8];
  uint8_t local_17c [8];
  uint8_t local_174 [8];
  uint8_t local_16c [8];
  uint32_t local_164;
  uint32_t uStack_160;
  uint32_t uStack_15c;
  uint32_t uStack_158;
  uint32_t local_154;
  uint32_t uStack_150;
  uint32_t uStack_14c;
  uint32_t uStack_148;
  uint32_t local_144;
  uint32_t local_140;
  uint32_t uStack_13c;
  uint32_t uStack_138;
  uint32_t uStack_134;
  uint32_t local_130;
  uint32_t local_12c;
  uint32_t uStack_128;
  uint32_t uStack_124;
  uint32_t uStack_120;
  uint32_t local_11c;
  uint32_t local_118;
  uint32_t local_114;
  uint32_t uStack_110;
  uint32_t uStack_10c;
  uint32_t uStack_108;
  uint32_t local_104;
  uint32_t local_100;
  uint32_t local_fc;
  uint32_t uStack_f8;
  uint32_t uStack_f4;
  uint32_t uStack_f0;
  uint32_t local_ec;
  uint32_t local_e8;
  uint32_t local_e4;
  uint32_t uStack_e0;
  uint32_t uStack_dc;
  uint32_t uStack_d8;
  uint32_t local_d4;
  uint32_t local_d0;
  uint32_t local_cc;
  uint32_t uStack_c8;
  uint32_t uStack_c4;
  uint32_t uStack_c0;
  uint32_t local_bc;
  uint32_t local_b8;
  uint32_t local_b4;
  int local_b0 [3];
  int local_a4 [3];
  int local_98 [3];
  int local_8c [3];
  int local_80 [3];
  int local_74 [3];
  int local_68 [3];
  int local_5c [3];
  int local_50 [3];
  int local_44 [3];
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  uint32_t local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030398a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_1020f410((uint64_t *)&DAT_104dd46c);
  local_1dc = 7;
  uStack_1d8 = 0xe;
  uStack_1d4 = 0x16;
  uStack_1d0 = 0x20;
  local_14 = 0;
  local_1cc = 0x30;
  uStack_1c8 = 0x44;
  uStack_1c4 = 99;
  uStack_1c0 = 0x98;
  sub_1020f550(local_16c,&local_1dc,local_1bc);
  sub_1020f780(local_44);
  local_8 = 0;
  sub_102100d0(local_2bc,&local_14,local_44);
  local_8._0_1_ = 1;
  local_18 = 1;
  local_e4 = 9;
  uStack_e0 = 0x14;
  uStack_dc = 0x25;
  uStack_d8 = 0x3f;
  local_d4 = 0x69;
  local_d0 = 200;
  sub_1020f550(local_174,&local_e4,&local_cc);
  sub_1020f780(local_b0);
  local_8._0_1_ = 2;
  sub_102100d0(local_2ac,&local_18,local_b0);
  local_8._0_1_ = 3;
  local_1c = 4;
  local_fc = 9;
  uStack_f8 = 0x14;
  uStack_f4 = 0x25;
  uStack_f0 = 0x3f;
  local_ec = 0x69;
  local_e8 = 200;
  sub_1020f550(local_17c,&local_fc,&local_e4);
  sub_1020f780(local_a4);
  local_8._0_1_ = 4;
  sub_102100d0(local_29c,&local_1c,local_a4);
  local_8._0_1_ = 5;
  local_20 = 2;
  local_104 = 0x4b;
  local_114 = 9;
  uStack_110 = 0x12;
  uStack_10c = 0x1e;
  uStack_108 = 0x30;
  local_100 = 0x7d;
  sub_1020f550(local_184,&local_114,&local_fc);
  sub_1020f780(local_98);
  local_8._0_1_ = 6;
  sub_102100d0(local_28c,&local_20,local_98);
  local_8._0_1_ = 7;
  local_24 = 3;
  local_12c = 9;
  uStack_128 = 0x12;
  uStack_124 = 0x1e;
  uStack_120 = 0x30;
  local_11c = 0x4b;
  local_118 = 0x7d;
  sub_1020f550(local_18c,&local_12c,&local_114);
  sub_1020f780(local_50);
  local_8._0_1_ = 8;
  sub_102100d0(local_27c,&local_24,local_50);
  local_8._0_1_ = 9;
  local_28 = 6;
  local_cc = 8;
  uStack_c8 = 0x10;
  uStack_c4 = 0x1b;
  uStack_c0 = 0x2a;
  local_bc = 0x41;
  local_b8 = 0x66;
  local_b4 = 0xae;
  sub_1020f550(local_194,&local_cc,local_b0);
  sub_1020f780(local_80);
  local_8._0_1_ = 10;
  sub_102100d0(local_26c,&local_28,local_80);
  local_8._0_1_ = 0xb;
  local_2c = 5;
  local_1fc = 4;
  uStack_1f8 = 10;
  uStack_1f4 = 0x13;
  uStack_1f0 = 0x1e;
  local_1ec = 0x2e;
  uStack_1e8 = 0x44;
  uStack_1e4 = 99;
  uStack_1e0 = 0xa3;
  sub_1020f550(local_1bc,&local_1fc,&local_1dc);
  sub_1020f780(local_74);
  local_8._0_1_ = 0xc;
  sub_102100d0(local_25c,&local_2c,local_74);
  local_8._0_1_ = 0xd;
  local_30 = 0x8b;
  local_140 = 9;
  uStack_13c = 0x14;
  uStack_138 = 0x2a;
  uStack_134 = 0x56;
  local_130 = 0x118;
  sub_1020f550(local_19c,&local_140,&local_12c);
  sub_1020f780(local_68);
  local_8._0_1_ = 0xe;
  sub_102100d0(local_24c,&local_30,local_68);
  local_8._0_1_ = 0xf;
  local_164 = 5;
  uStack_160 = 10;
  uStack_15c = 0x10;
  uStack_158 = 0x18;
  local_34 = 0x8c;
  local_154 = 0x25;
  uStack_150 = 0x36;
  uStack_14c = 0x56;
  uStack_148 = 0x98;
  local_144 = 0x168;
  sub_1020f550(local_1a4,&local_164,&local_140);
  sub_1020f780(local_5c);
  local_8._0_1_ = 0x10;
  sub_102100d0(local_23c,&local_34,local_5c);
  local_8._0_1_ = 0x11;
  local_21c = 7;
  uStack_218 = 0xf;
  uStack_214 = 0x17;
  uStack_210 = 0x23;
  local_38 = 0x8f;
  local_20c = 0x34;
  uStack_208 = 0x4e;
  uStack_204 = 0x75;
  uStack_200 = 0xc2;
  sub_1020f550(local_1ac,&local_21c,&local_1fc);
  sub_1020f780(local_8c);
  local_8._0_1_ = 0x12;
  sub_102100d0(local_22c,&local_38,local_8c);
  local_8._0_1_ = 0x1c;
  sub_1020f550(local_1b4,local_2bc,&local_21c);
  sub_1020f6a0(&DAT_104dd46c);
  local_8 = CONCAT31(local_8._1_3_,0x1b);
  _eh_vector_destructor_iterator_(local_2bc,0x10,10,sub_1020f440);
  thunk_FUN_1020fb40(local_8c);
  thunk_FUN_1020fb40(local_5c);
  thunk_FUN_1020fb40(local_68);
  thunk_FUN_1020fb40(local_74);
  thunk_FUN_1020fb40(local_80);
  thunk_FUN_1020fb40(local_50);
  thunk_FUN_1020fb40(local_98);
  thunk_FUN_1020fb40(local_a4);
  thunk_FUN_1020fb40(local_b0);
  thunk_FUN_1020fb40(local_44);
  _atexit((_func_4879 *)&LAB_103170f0);
  ExceptionList = local_10;
  return;
}


// 0x10024380  (ghidra: FUN_10024380)  [range]
void client_DrawHoverItem_init_10024380(void)

{
  uint32_t local_a4;
  uint32_t local_a0;
  uint32_t local_9c;
  uint32_t local_98;
  uint32_t local_94;
  uint32_t local_90;
  uint32_t local_8c;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_80;
  uint32_t local_7c;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_70;
  uint32_t local_6c;
  uint32_t local_68;
  uint32_t local_64;
  uint8_t local_60 [80];
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104dd5fc);
  local_a0 = 0;
  local_a4 = 0x13;
  sub_10210100(&local_a0,&local_a4);
  local_98 = 1;
  local_9c = 0xd;
  sub_10210100(&local_98,&local_9c);
  local_90 = 4;
  local_94 = 0xd;
  sub_10210100(&local_90,&local_94);
  local_88 = 2;
  local_8c = 0xf;
  sub_10210100(&local_88,&local_8c);
  local_80 = 3;
  local_84 = 0xf;
  sub_10210100(&local_80,&local_84);
  local_78 = 6;
  local_7c = 0x10;
  sub_10210100(&local_78,&local_7c);
  local_70 = 5;
  local_74 = 0x12;
  sub_10210100(&local_70,&local_74);
  local_6c = 0x10;
  sub_10210100(&DAT_10367cf0,&local_6c);
  local_68 = 0x10;
  sub_10210100(&DAT_10367b48,&local_68);
  local_64 = 0x13;
  sub_10210100(&DAT_10367b84,&local_64);
  sub_1020f550(local_10,local_60,local_10);
  sub_1020f640(&DAT_104dd5fc);
  _atexit((_func_4879 *)&LAB_10317100);
  return;
}


// 0x10024530  (ghidra: FUN_10024530)  [range]
void client_DrawHoverItem_init_10024530(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104dd408);
  local_18 = 0x41503033;
  local_14 = 0x32484754;
  local_10 = 0x57375258;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104dd408);
  _atexit((_func_4879 *)&LAB_10317110);
  return;
}


// 0x10024590  (ghidra: FUN_10024590)  [range]
void client_DrawHoverItem_init_10024590(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104dd4a4);
  local_18 = 0x554f4e36;
  local_14 = 0x56383149;
  local_10 = 0x4a4d5942;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104dd4a4);
  _atexit((_func_4879 *)&LAB_10317120);
  return;
}


// 0x100245f0  (ghidra: FUN_100245f0)  [range]
void client_DrawHoverItem_init_100245f0(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104dd44c);
  local_18 = 0x44513534;
  local_14 = 0x455a4b4c;
  local_10 = 0x46433953;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104dd44c);
  _atexit((_func_4879 *)&LAB_10317130);
  return;
}


// 0x10024650  (ghidra: FUN_10024650)  [range]
void client_DrawHoverItem_init_10024650(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104dd508);
  local_18 = 0x35333130;
  local_14 = 0x4b4c4941;
  local_10 = 0x5553514f;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104dd508);
  _atexit((_func_4879 *)&LAB_10317140);
  return;
}


// 0x100246b0  (ghidra: FUN_100246b0)  [range]
void client_DrawHoverItem_init_100246b0(void)

{
  uint32_t local_250;
  uint32_t local_24c;
  uint32_t local_248;
  uint32_t local_244;
  uint32_t local_240;
  uint32_t local_23c;
  uint32_t local_238;
  uint32_t local_234;
  uint32_t local_230;
  uint32_t local_22c;
  uint32_t local_228;
  uint32_t local_224;
  uint32_t local_220;
  uint32_t local_21c;
  uint32_t local_218;
  uint32_t local_214;
  uint32_t local_210;
  uint32_t local_20c;
  uint32_t local_208;
  uint32_t local_204;
  uint32_t local_200;
  uint32_t local_1fc;
  uint32_t local_1f8;
  uint32_t local_1f4;
  uint32_t local_1f0;
  uint32_t local_1ec;
  uint32_t local_1e8;
  uint32_t local_1e4;
  uint32_t local_1e0;
  uint32_t local_1dc;
  uint32_t local_1d8;
  uint32_t local_1d4;
  uint32_t local_1d0;
  uint32_t local_1cc;
  uint32_t local_1c8;
  uint32_t local_1c4;
  uint32_t local_1c0;
  uint32_t local_1bc;
  uint32_t local_1b8;
  uint32_t local_1b4;
  uint32_t local_1b0;
  uint32_t local_1ac;
  uint32_t local_1a8;
  uint32_t local_1a4;
  uint32_t local_1a0;
  uint32_t local_19c;
  uint32_t local_198;
  uint32_t local_194;
  uint32_t local_190;
  uint32_t local_18c;
  uint32_t local_188;
  uint32_t local_184;
  uint32_t local_180;
  uint32_t local_17c;
  uint32_t local_178;
  uint32_t local_174;
  uint32_t local_170;
  uint32_t local_16c;
  uint32_t local_168;
  uint32_t local_164;
  uint32_t local_160;
  uint32_t local_15c;
  uint32_t local_158;
  uint32_t local_154;
  uint32_t local_150;
  uint32_t local_14c;
  uint32_t local_148;
  uint32_t local_144;
  uint32_t local_140;
  uint32_t local_13c;
  uint32_t local_138;
  uint32_t local_134;
  uint8_t local_130 [288];
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104dd3e8);
  local_24c = 0x33;
  local_250 = 1;
  sub_10210130(&local_24c,&local_250);
  local_244 = 0x30;
  local_248 = 4;
  sub_10210130(&local_244,&local_248);
  local_23c = 0x50;
  local_240 = 0x10;
  sub_10210130(&local_23c,&local_240);
  local_234 = 0x41;
  local_238 = 0x20;
  sub_10210130(&local_234,&local_238);
  local_22c = 0x54;
  local_230 = 0x40;
  sub_10210130(&local_22c,&local_230);
  local_224 = 0x47;
  local_228 = 0x80;
  sub_10210130(&local_224,&local_228);
  local_21c = 0x48;
  local_220 = 0x100;
  sub_10210130(&local_21c,&local_220);
  local_214 = 0x32;
  local_218 = 0x200;
  sub_10210130(&local_214,&local_218);
  local_20c = 0x58;
  local_210 = 0x800;
  sub_10210130(&local_20c,&local_210);
  local_204 = 0x52;
  local_208 = 0x2000;
  sub_10210130(&local_204,&local_208);
  local_1fc = 0x37;
  local_200 = 0x4000;
  sub_10210130(&local_1fc,&local_200);
  local_1f4 = 0x57;
  local_1f8 = 0x8000;
  sub_10210130(&local_1f4,&local_1f8);
  local_1ec = 0x36;
  local_1f0 = 2;
  sub_10210130(&local_1ec,&local_1f0);
  local_1e4 = 0x4e;
  local_1e8 = 4;
  sub_10210130(&local_1e4,&local_1e8);
  local_1dc = 0x4f;
  local_1e0 = 0x10;
  sub_10210130(&local_1dc,&local_1e0);
  local_1d4 = 0x55;
  local_1d8 = 0x20;
  sub_10210130(&local_1d4,&local_1d8);
  local_1cc = 0x49;
  local_1d0 = 0x40;
  sub_10210130(&local_1cc,&local_1d0);
  local_1c4 = 0x31;
  local_1c8 = 0x100;
  sub_10210130(&local_1c4,&local_1c8);
  local_1bc = 0x38;
  local_1c0 = 0x200;
  sub_10210130(&local_1bc,&local_1c0);
  local_1b4 = 0x56;
  local_1b8 = 0x800;
  sub_10210130(&local_1b4,&local_1b8);
  local_1ac = 0x42;
  local_1b0 = 0x1000;
  sub_10210130(&local_1ac,&local_1b0);
  local_1a4 = 0x59;
  local_1a8 = 0x2000;
  sub_10210130(&local_1a4,&local_1a8);
  local_19c = 0x4d;
  local_1a0 = 0x4000;
  sub_10210130(&local_19c,&local_1a0);
  local_194 = 0x4a;
  local_198 = 0x8000;
  sub_10210130(&local_194,&local_198);
  local_18c = 0x34;
  local_190 = 1;
  sub_10210130(&local_18c,&local_190);
  local_184 = 0x35;
  local_188 = 2;
  sub_10210130(&local_184,&local_188);
  local_17c = 0x51;
  local_180 = 4;
  sub_10210130(&local_17c,&local_180);
  local_174 = 0x44;
  local_178 = 8;
  sub_10210130(&local_174,&local_178);
  local_16c = 0x4c;
  local_170 = 0x20;
  sub_10210130(&local_16c,&local_170);
  local_164 = 0x4b;
  local_168 = 0x40;
  sub_10210130(&local_164,&local_168);
  local_15c = 0x5a;
  local_160 = 0x80;
  sub_10210130(&local_15c,&local_160);
  local_154 = 0x45;
  local_158 = 0x200;
  sub_10210130(&local_154,&local_158);
  local_14c = 0x53;
  local_150 = 0x400;
  sub_10210130(&local_14c,&local_150);
  local_144 = 0x39;
  local_148 = 0x800;
  sub_10210130(&local_144,&local_148);
  local_13c = 0x43;
  local_140 = 0x2000;
  sub_10210130(&local_13c,&local_140);
  local_134 = 0x46;
  local_138 = 0x4000;
  sub_10210130(&local_134,&local_138);
  sub_1020f550(local_10,local_130,local_10);
  sub_1020f570(&DAT_104dd3e8);
  _atexit((_func_4879 *)&LAB_10317150);
  return;
}


// 0x100250a0  (ghidra: FUN_100250a0)  [range]
void client_DrawHoverItem_InitPtr_D2Common_DAT_6fde9e1c_10279cd0_100250a0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Common_DAT_6fde9e1c_10279cd0();
  p_D2Common_DAT_6fde9e1c_10279cd0 = *puVar1;
  return;
}


// 0x100265d0  (ghidra: FUN_100265d0)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fba20c8_100265d0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fba20c8();
  p_D2Client_DAT_6fba20c8 = *puVar1;
  return;
}


// 0x100270a0  (ghidra: FUN_100270a0)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fb8bc48_100270a0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fb8bc48();
  p_D2Client_DAT_6fb8bc48 = *puVar1;
  return;
}


// 0x100270b0  (ghidra: FUN_100270b0)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fb8bc4c_100270b0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fb8bc4c();
  p_D2Client_DAT_6fb8bc4c = *puVar1;
  return;
}


// 0x100270e0  (ghidra: FUN_100270e0)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fb90ea4_100270e0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fb90ea4();
  p_D2Client_DAT_6fb90ea4 = *puVar1;
  return;
}


// 0x100270f0  (ghidra: FUN_100270f0)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fb90ea8_100270f0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fb90ea8();
  p_D2Client_DAT_6fb90ea8 = *puVar1;
  return;
}


// 0x10027100  (ghidra: FUN_10027100)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fb90eac_10027100(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fb90eac();
  p_D2Client_DAT_6fb90eac = *puVar1;
  return;
}


// 0x10027110  (ghidra: FUN_10027110)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fb90eb0_10027110(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fb90eb0();
  p_D2Client_DAT_6fb90eb0 = *puVar1;
  return;
}


// 0x10027120  (ghidra: FUN_10027120)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fb90eb4_10027120(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fb90eb4();
  p_D2Client_DAT_6fb90eb4 = *puVar1;
  return;
}


// 0x10027150  (ghidra: FUN_10027150)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcb828_10027150(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcb828();
  p_D2Client_DAT_6fbcb828 = *puVar1;
  return;
}


// 0x10027160  (ghidra: FUN_10027160)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcb824_10027160(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcb824();
  p_D2Client_DAT_6fbcb824 = *puVar1;
  return;
}


// 0x10027180  (ghidra: FUN_10027180)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbc995c_10027180(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbc995c();
  p_D2Client_DAT_6fbc995c = *puVar1;
  return;
}


// 0x10027190  (ghidra: FUN_10027190)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbc9960_10027190(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbc9960();
  p_D2Client_DAT_6fbc9960 = *puVar1;
  return;
}


// 0x10027540  (ghidra: FUN_10027540)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcb9a0_10027540(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcb9a0();
  p_D2Client_DAT_6fbcb9a0 = *puVar1;
  return;
}


// 0x10027550  (ghidra: FUN_10027550)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcb9a4_10027550(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcb9a4();
  p_D2Client_DAT_6fbcb9a4 = *puVar1;
  return;
}


// 0x10027560  (ghidra: FUN_10027560)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcb864_10027560(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcb864();
  p_D2Client_DAT_6fbcb864 = *puVar1;
  return;
}


// 0x10027570  (ghidra: FUN_10027570)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcbc28_10027570(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcbc28();
  p_D2Client_DAT_6fbcbc28 = *puVar1;
  return;
}


// 0x10027580  (ghidra: FUN_10027580)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcbc2c_10027580(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcbc2c();
  p_D2Client_DAT_6fbcbc2c = *puVar1;
  return;
}


// 0x10027590  (ghidra: FUN_10027590)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcbc34_10027590(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcbc34();
  p_D2Client_DAT_6fbcbc34 = *puVar1;
  return;
}


// 0x100275c0  (ghidra: FUN_100275c0)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbc97a8_100275c0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbc97a8();
  p_D2Client_DAT_6fbc97a8 = *puVar1;
  return;
}


// 0x100277f0  (ghidra: FUN_100277f0)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcbbfc_100277f0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcbbfc();
  p_D2Client_DAT_6fbcbbfc = *puVar1;
  return;
}


// 0x10027800  (ghidra: FUN_10027800)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcbc38_10027800(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcbc38();
  p_D2Client_DAT_6fbcbc38 = *puVar1;
  return;
}


// 0x10027860  (ghidra: FUN_10027860)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbc9854_10027860(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbc9854();
  p_D2Client_DAT_6fbc9854 = *puVar1;
  return;
}


// 0x10028640  (ghidra: FUN_10028640)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcc2f4_10028640(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc2f4();
  p_D2Client_DAT_6fbcc2f4 = *puVar1;
  return;
}


// 0x10028650  (ghidra: FUN_10028650)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcc2f8_10028650(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc2f8();
  p_D2Client_DAT_6fbcc2f8 = *puVar1;
  return;
}


// 0x10028700  (ghidra: FUN_10028700)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcc418_10028700(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc418();
  p_D2Client_DAT_6fbcc418 = *puVar1;
  return;
}


// 0x10028890  (ghidra: FUN_10028890)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcc414_10028890(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc414();
  p_D2Client_DAT_6fbcc414 = *puVar1;
  return;
}


// 0x100288d0  (ghidra: FUN_100288d0)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcc468_100288d0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc468();
  p_D2Client_DAT_6fbcc468 = *puVar1;
  return;
}


// 0x100288e0  (ghidra: FUN_100288e0)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcc46c_100288e0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc46c();
  p_D2Client_DAT_6fbcc46c = *puVar1;
  return;
}


// 0x100288f0  (ghidra: FUN_100288f0)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcc470_100288f0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc470();
  p_D2Client_DAT_6fbcc470 = *puVar1;
  return;
}


// 0x10028900  (ghidra: FUN_10028900)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcc474_10028900(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc474();
  p_D2Client_DAT_6fbcc474 = *puVar1;
  return;
}


// 0x10028910  (ghidra: FUN_10028910)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fbcc47c_10028910(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc47c();
  p_D2Client_DAT_6fbcc47c = *puVar1;
  return;
}


// 0x10028930  (ghidra: FUN_10028930)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fba538c_10028930(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fba538c();
  p_D2Client_DAT_6fba538c = *puVar1;
  return;
}


// 0x10028940  (ghidra: FUN_10028940)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fba5390_10028940(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fba5390();
  p_D2Client_DAT_6fba5390 = *puVar1;
  return;
}


// 0x10028950  (ghidra: FUN_10028950)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fba5394_10028950(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fba5394();
  p_D2Client_DAT_6fba5394 = *puVar1;
  return;
}


// 0x10028e90  (ghidra: FUN_10028e90)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fb8bc54_10028e90(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fb8bc54();
  p_D2Client_DAT_6fb8bc54 = *puVar1;
  return;
}


// 0x10028ea0  (ghidra: FUN_10028ea0)  [range]
void client_DrawHoverItem_InitPtr_D2Client_DAT_6fb8bc58_10028ea0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fb8bc58();
  p_D2Client_DAT_6fb8bc58 = *puVar1;
  return;
}


// 0x1021cbd0  (ghidra: FUN_1021cbd0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall client_DrawHoverItem_1021cbd0(int *param_1,int param_2)

{
  short sVar1;
  uint *puVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
  uint16_t extraout_var;
  short *psVar10;
  uint uVar11;
  uint32_t *puVar12;
  int local_20c;
  short local_208 [256];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  psVar3 = (short *)D2Lang_10003(0xf9b);
  psVar4 = (short *)D2Lang_10003(0xf9e);
  psVar5 = (short *)D2Lang_10003(0xf9c);
  puVar2 = (uint *)*p_D2Client_DAT_6fbcbbfc;
  iVar6 = D2Common_10592(puVar2,param_1);
  iVar7 = D2Common_10379((int)param_1,0x5d,0);
  if (0x1b < iVar6) {
    local_20c = 5;
    goto LAB_1021ccc2;
  }
  if (iVar6 < 10) {
    local_20c = 1;
    goto LAB_1021ccc2;
  }
  uVar11 = D2Common_10744((int)param_1,0x23);
  if (uVar11 == 0) {
    uVar11 = D2Common_10744((int)param_1,0x1b);
    puVar12 = (uint32_t *)&DAT_10367b4c;
    if (uVar11 != 0) goto LAB_1021cc92;
  }
  else {
LAB_1021cc92:
    puVar12 = &DAT_10367b50;
  }
  uVar11 = 0;
  if (puVar2 != (uint *)0x0) {
    uVar11 = puVar2[1];
  }
  local_20c = *(int *)(&DAT_10367b88 + (iVar6 * 5 + -0x32 + puVar12[uVar11 * 2]) * 4);
LAB_1021ccc2:
  uVar11 = 0;
  while (uVar8 = D2Common_10744((int)param_1,(&DAT_10398bc0)[uVar11 * 2]), uVar8 == 0) {
    uVar11 = uVar11 + 1;
    if (0xe < uVar11) goto LAB_1021cdac;
  }
  psVar9 = (short *)D2Lang_10003(CONCAT22(extraout_var,(&DAT_10398bc4)[uVar11 * 4]));
  iVar6 = param_2 - (int)psVar9;
  do {
    sVar1 = *psVar9;
    psVar9 = psVar9 + 1;
    *(short *)(iVar6 + -2 + (int)psVar9) = sVar1;
    psVar10 = psVar3;
  } while (sVar1 != 0);
  do {
    sVar1 = *psVar10;
    psVar10 = psVar10 + 1;
  } while (sVar1 != 0);
  uVar11 = (int)psVar10 - (int)psVar3;
  puVar12 = (uint32_t *)(param_2 + -2);
  do {
    psVar9 = (short *)((int)puVar12 + 2);
    puVar12 = (uint32_t *)((int)puVar12 + 2);
  } while (*psVar9 != 0);
  psVar9 = psVar3;
  for (uVar8 = uVar11 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar12 = *(uint32_t *)psVar9;
    psVar9 = psVar9 + 2;
    puVar12 = puVar12 + 1;
  }
  for (uVar11 = uVar11 & 3; psVar10 = psVar5, uVar11 != 0; uVar11 = uVar11 - 1) {
    *(char *)puVar12 = (char)*psVar9;
    psVar9 = (short *)((int)psVar9 + 1);
    puVar12 = (uint32_t *)((int)puVar12 + 1);
  }
  do {
    sVar1 = *psVar10;
    psVar10 = psVar10 + 1;
  } while (sVar1 != 0);
  uVar11 = (int)psVar10 - (int)psVar5;
  puVar12 = (uint32_t *)(param_2 + -2);
  do {
    psVar9 = (short *)((int)puVar12 + 2);
    puVar12 = (uint32_t *)((int)puVar12 + 2);
  } while (*psVar9 != 0);
  for (uVar8 = uVar11 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar12 = *(uint32_t *)psVar5;
    psVar5 = psVar5 + 2;
    puVar12 = puVar12 + 1;
  }
  for (uVar11 = uVar11 & 3; psVar9 = psVar3, uVar11 != 0; uVar11 = uVar11 - 1) {
    *(char *)puVar12 = (char)*psVar5;
    psVar5 = (short *)((int)psVar5 + 1);
    puVar12 = (uint32_t *)((int)puVar12 + 1);
  }
  do {
    sVar1 = *psVar9;
    psVar9 = psVar9 + 1;
  } while (sVar1 != 0);
  uVar11 = (int)psVar9 - (int)psVar3;
  puVar12 = (uint32_t *)(param_2 + -2);
  do {
    psVar5 = (short *)((int)puVar12 + 2);
    puVar12 = (uint32_t *)((int)puVar12 + 2);
  } while (*psVar5 != 0);
  for (uVar8 = uVar11 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar12 = *(uint32_t *)psVar3;
    psVar3 = psVar3 + 2;
    puVar12 = puVar12 + 1;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(char *)puVar12 = (char)*psVar3;
    psVar3 = (short *)((int)psVar3 + 1);
    puVar12 = (uint32_t *)((int)puVar12 + 1);
  }
LAB_1021cdac:
  memset(local_208,0,0x200);
  psVar5 = (short *)D2Lang_10003(local_20c + 0xff8);
  psVar3 = psVar5;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
    *(short *)((int)local_208 + (-2 - (int)psVar5) + (int)psVar3) = sVar1;
  } while (sVar1 != 0);
  if (iVar7 != 0) {
    sub_102f0c70(local_208,3);
  }
  psVar3 = local_208;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  uVar11 = (int)psVar3 - (int)local_208;
  puVar12 = (uint32_t *)(param_2 + -2);
  do {
    psVar3 = (short *)((int)puVar12 + 2);
    puVar12 = (uint32_t *)((int)puVar12 + 2);
  } while (*psVar3 != 0);
  psVar3 = local_208;
  for (uVar8 = uVar11 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar12 = *(uint32_t *)psVar3;
    psVar3 = psVar3 + 2;
    puVar12 = puVar12 + 1;
  }
  for (uVar11 = uVar11 & 3; psVar5 = psVar4, uVar11 != 0; uVar11 = uVar11 - 1) {
    *(char *)puVar12 = (char)*psVar3;
    psVar3 = (short *)((int)psVar3 + 1);
    puVar12 = (uint32_t *)((int)puVar12 + 1);
  }
  do {
    sVar1 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar1 != 0);
  uVar11 = (int)psVar5 - (int)psVar4;
  puVar12 = (uint32_t *)(param_2 + -2);
  do {
    psVar3 = (short *)((int)puVar12 + 2);
    puVar12 = (uint32_t *)((int)puVar12 + 2);
  } while (*psVar3 != 0);
  for (uVar8 = uVar11 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar12 = *(uint32_t *)psVar4;
    psVar4 = psVar4 + 2;
    puVar12 = puVar12 + 1;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(char *)puVar12 = (char)*psVar4;
    psVar4 = (short *)((int)psVar4 + 1);
    puVar12 = (uint32_t *)((int)puVar12 + 1);
  }
  return;
}


// 0x1021ce80  (ghidra: FUN_1021ce80)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall
client_DrawHoverItem_1021ce80(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6,
            uint32_t *param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  *param_5 = 1;
  *param_6 = 2;
  if ((param_2 != 0) && (param_1 != 0)) {
    local_c = 0;
    uVar1 = D2Common_11160(*p_D2Client_DAT_6fbcbc38,&local_c);
    if ((uVar1 != 0) && (uVar1 != param_2)) {
      param_2 = uVar1;
    }
    D2Common_10164(param_2,(int *)param_1,1);
    iVar2 = D2Common_10973_10273ce0(param_1,param_3,0);
    iVar3 = D2Common_10973_10273ce0(param_1,param_4,0);
    if (uVar1 == 0) {
      D2Common_11127(param_2,param_1);
    }
    else {
      D2Common_10164(param_2,(int *)param_1,local_c);
    }
    iVar4 = D2Common_10587(param_1,param_3,0);
    iVar5 = D2Common_10587(param_1,param_4,0);
    if ((iVar4 < iVar2) || (iVar5 < iVar3)) {
      *param_7 = 1;
    }
    if (iVar3 <= iVar2) {
      iVar3 = iVar2;
    }
    *param_5 = iVar2;
    *param_6 = iVar3;
  }
  return;
}


// 0x1021cf80  (ghidra: FUN_1021cf80)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall client_DrawHoverItem_1021cf80(uint32_t param_1,int param_2,int param_3)

{
  short sVar1;
  int *piVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  uint32_t uVar11;
  short *psVar12;
  uint32_t uVar13;
  short *psVar14;
  int *piVar15;
  uint32_t *puVar16;
  uint32_t *puVar17;
  uint local_52c;
  int *local_528;
  int local_524;
  int local_520;
  int *local_51c;
  int local_518;
  uint8_t local_514 [4];
  short local_510 [128];
  short local_410 [255];
  uint8_t auStack_212 [2];
  uint32_t local_210 [63];
  uint8_t auStack_112 [2];
  uint32_t local_110 [65];
  uint local_c;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_c = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_524 = param_3;
  local_51c = (int *)param_2;
  memset(local_410,0,0x200);
  psVar3 = (short *)D2Lang_10003(0xf9b);
  psVar4 = (short *)D2Lang_10003(0xf9e);
  piVar15 = (int *)*p_D2Client_DAT_6fbcbbfc;
  local_528 = piVar15;
  uVar5 = D2Common_10744((int)local_51c,0x26);
  if (uVar5 != 0) {
    uVar5 = D2Common_10321(local_51c);
    memset(local_210,0,0x200);
    iVar6 = D2Common_10205((int *)0x0,(uint)local_528,uVar5,1);
    local_51c = (int *)iVar6;
    local_514 = (uint8_t  [4])D2Common_10532((int *)0x0,(uint)local_528,uVar5,1);
    psVar7 = (short *)D2Lang_10003(0xd8b);
    iVar9 = -(int)psVar7;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
      *(short *)(auStack_212 + iVar9 + (int)psVar7) = sVar1;
    } while (sVar1 != 0);
    sub_102f0c70(local_210,0);
    local_518 = 0;
    uVar8 = D2Common_10557(uVar5);
    switch(uVar8 & 0xff) {
    case 1:
      local_518 = 1;
      break;
    case 2:
      local_518 = 4;
      break;
    case 4:
      local_518 = 3;
      break;
    case 5:
      local_518 = 0xc;
      iVar9 = D2Common_10242(0,(uint)local_528,uVar5,1);
      iVar9 = iVar9 / 0x19;
      if (iVar9 < 1) {
        iVar9 = 1;
      }
      local_51c = (int *)(iVar6 / iVar9);
      local_514 = (uint8_t  [4])((int)local_514 / iVar9);
    }
    iVar9 = D2Common_10040((int *)0x0,(uint)local_528,uVar5,1);
    uVar8 = iVar9 + (int)local_51c >> 8;
    local_52c = uVar8;
    iVar9 = D2Common_10256((int *)0x0,(uint)local_528,uVar5,1);
    uVar5 = iVar9 + (int)local_514 >> 8;
    local_514 = (uint8_t  [4])uVar8;
    if ((int)uVar8 < (int)uVar5) {
      local_514 = (uint8_t  [4])uVar5;
    }
    client_DrawHoverItem_10225400(local_410,&DAT_103775a4);
    sub_102f0c70(local_410,local_518);
    psVar7 = psVar3;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    puVar16 = (uint32_t *)auStack_212;
    do {
      psVar12 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar12 != 0);
    psVar12 = psVar3;
    for (uVar5 = (uint)((int)psVar7 - (int)psVar3) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar16 = *(uint32_t *)psVar12;
      psVar12 = psVar12 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = (int)psVar7 - (int)psVar3 & 3; psVar7 = local_410, uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar12;
      psVar12 = (short *)((int)psVar12 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar7 - (int)local_410;
    puVar16 = (uint32_t *)auStack_212;
    do {
      psVar7 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar7 != 0);
    psVar7 = local_410;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    psVar7 = psVar4;
    psVar12 = psVar3;
    if ((uint8_t  [4])local_52c != local_514) {
      do {
        sVar1 = *psVar12;
        psVar12 = psVar12 + 1;
      } while (sVar1 != 0);
      uVar5 = (int)psVar12 - (int)psVar3;
      puVar16 = (uint32_t *)auStack_212;
      do {
        psVar12 = (short *)((int)puVar16 + 2);
        puVar16 = (uint32_t *)((int)puVar16 + 2);
      } while (*psVar12 != 0);
      psVar12 = psVar3;
      for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar16 = *(uint32_t *)psVar12;
        psVar12 = psVar12 + 2;
        puVar16 = puVar16 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)puVar16 = (char)*psVar12;
        psVar12 = (short *)((int)psVar12 + 1);
        puVar16 = (uint32_t *)((int)puVar16 + 1);
      }
      psVar10 = (short *)D2Lang_10003(0xd88);
      psVar12 = psVar10;
      do {
        sVar1 = *psVar12;
        psVar12 = psVar12 + 1;
      } while (sVar1 != 0);
      puVar16 = (uint32_t *)auStack_212;
      do {
        psVar14 = (short *)((int)puVar16 + 2);
        puVar16 = (uint32_t *)((int)puVar16 + 2);
      } while (*psVar14 != 0);
      psVar14 = psVar10;
      for (uVar5 = (uint)((int)psVar12 - (int)psVar10) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar16 = *(uint32_t *)psVar14;
        psVar14 = psVar14 + 2;
        puVar16 = puVar16 + 1;
      }
      for (uVar5 = (int)psVar12 - (int)psVar10 & 3; psVar12 = psVar3, uVar5 != 0; uVar5 = uVar5 - 1)
      {
        *(char *)puVar16 = (char)*psVar14;
        psVar14 = (short *)((int)psVar14 + 1);
        puVar16 = (uint32_t *)((int)puVar16 + 1);
      }
      do {
        sVar1 = *psVar12;
        psVar12 = psVar12 + 1;
      } while (sVar1 != 0);
      uVar5 = (int)psVar12 - (int)psVar3;
      puVar16 = (uint32_t *)auStack_212;
      do {
        psVar12 = (short *)((int)puVar16 + 2);
        puVar16 = (uint32_t *)((int)puVar16 + 2);
      } while (*psVar12 != 0);
      for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar16 = *(uint32_t *)psVar3;
        psVar3 = psVar3 + 2;
        puVar16 = puVar16 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)puVar16 = (char)*psVar3;
        psVar3 = (short *)((int)psVar3 + 1);
        puVar16 = (uint32_t *)((int)puVar16 + 1);
      }
      client_DrawHoverItem_10225400(local_410,&DAT_103775a4);
      sub_102f0c70(local_410,local_518);
      psVar3 = local_410;
      do {
        sVar1 = *psVar3;
        psVar3 = psVar3 + 1;
      } while (sVar1 != 0);
      uVar5 = (int)psVar3 - (int)local_410;
      puVar16 = (uint32_t *)auStack_212;
      do {
        psVar3 = (short *)((int)puVar16 + 2);
        puVar16 = (uint32_t *)((int)puVar16 + 2);
      } while (*psVar3 != 0);
      psVar3 = local_410;
      for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar16 = *(uint32_t *)psVar3;
        psVar3 = psVar3 + 2;
        puVar16 = puVar16 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)puVar16 = (char)*psVar3;
        psVar3 = (short *)((int)psVar3 + 1);
        puVar16 = (uint32_t *)((int)puVar16 + 1);
      }
    }
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar7 - (int)psVar4;
    puVar16 = (uint32_t *)auStack_212;
    do {
      psVar3 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar3 != 0);
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar4;
      psVar4 = psVar4 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar4;
      psVar4 = (short *)((int)psVar4 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    psVar4 = (short *)local_210;
    local_524 = local_524 - (int)psVar4;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
      *(short *)(local_524 + -2 + (int)psVar4) = sVar1;
    } while (sVar1 != 0);
    return;
  }
  local_514 = (uint8_t  [4])0x0;
  uVar5 = D2Common_10364(piVar15,(int)local_51c);
  if (uVar5 == 0) {
    uVar5 = D2Common_10326(local_51c);
    if (uVar5 == 0) {
      uVar11 = 0x15;
      uVar5 = 0xd89;
      uVar13 = 0x16;
    }
    else {
      uVar11 = 0x17;
      uVar5 = 0xd8a;
      uVar13 = 0x18;
    }
    client_DrawHoverItem_1021ce80((int)local_51c,(int)local_528,uVar11,uVar13,&local_518,&local_520,
                 (uint32_t *)local_514);
    if (local_520 <= local_518 + 1) {
      local_520 = local_518 + 1;
    }
    psVar7 = (short *)D2Lang_10003(uVar5);
    iVar9 = param_3 - (int)psVar7;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
      *(short *)(iVar9 + -2 + (int)psVar7) = sVar1;
      psVar12 = psVar3;
    } while (sVar1 != 0);
    do {
      sVar1 = *psVar12;
      psVar12 = psVar12 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar12 - (int)psVar3;
    puVar16 = (uint32_t *)(param_3 + -2);
    do {
      psVar7 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar7 != 0);
    psVar7 = psVar3;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    client_DrawHoverItem_10225400(local_410,&DAT_103775a4);
    if (local_514 != (uint8_t  [4])0x0) {
      sub_102f0c70(local_410,3);
    }
    psVar7 = local_410;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar7 - (int)local_410;
    puVar16 = (uint32_t *)(local_524 + -2);
    do {
      psVar7 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar7 != 0);
    psVar7 = local_410;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; psVar12 = psVar3, uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    do {
      sVar1 = *psVar12;
      psVar12 = psVar12 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar12 - (int)psVar3;
    puVar16 = (uint32_t *)(local_524 + -2);
    do {
      psVar7 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar7 != 0);
    psVar7 = psVar3;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    psVar12 = (short *)D2Lang_10003(0xd88);
    psVar7 = psVar12;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    puVar16 = (uint32_t *)(local_524 + -2);
    do {
      psVar10 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar10 != 0);
    psVar10 = psVar12;
    for (uVar5 = (uint)((int)psVar7 - (int)psVar12) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar16 = *(uint32_t *)psVar10;
      psVar10 = psVar10 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = (int)psVar7 - (int)psVar12 & 3; psVar7 = psVar3, uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar10;
      psVar10 = (short *)((int)psVar10 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar7 - (int)psVar3;
    puVar16 = (uint32_t *)(local_524 + -2);
    do {
      psVar7 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar7 != 0);
    psVar7 = psVar3;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    client_DrawHoverItem_10225400(local_410,&DAT_103775a4);
    psVar7 = local_410;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar7 - (int)local_410;
    puVar16 = (uint32_t *)(local_524 + -2);
    do {
      psVar7 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar7 != 0);
    psVar7 = local_410;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; psVar12 = psVar4, uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    do {
      sVar1 = *psVar12;
      psVar12 = psVar12 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar12 - (int)psVar4;
    puVar16 = (uint32_t *)(local_524 + -2);
    do {
      psVar7 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar7 != 0);
    psVar7 = psVar4;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; piVar15 = local_528, uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
  }
  else {
    memset(local_510,0,0x100);
    memset(local_110,0,0x100);
    local_514 = (uint8_t  [4])0x0;
    local_52c = 0;
    client_DrawHoverItem_1021ce80((int)local_51c,(int)piVar15,0x17,0x18,&local_518,&local_520,(uint32_t *)local_514
                );
    psVar12 = (short *)D2Lang_10003(0xd8a);
    psVar7 = psVar12;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
      *(short *)((int)local_510 + (-2 - (int)psVar12) + (int)psVar7) = sVar1;
      psVar10 = psVar3;
    } while (sVar1 != 0);
    do {
      sVar1 = *psVar10;
      psVar10 = psVar10 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar10 - (int)psVar3;
    puVar16 = (uint32_t *)(local_514 + 2);
    do {
      psVar7 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar7 != 0);
    psVar7 = psVar3;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    client_DrawHoverItem_10225400(local_410,&DAT_103775a4);
    if (local_514 != (uint8_t  [4])0x0) {
      sub_102f0c70(local_410,3);
    }
    psVar7 = local_410;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar7 - (int)local_410;
    puVar16 = (uint32_t *)(local_514 + 2);
    do {
      psVar7 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar7 != 0);
    psVar7 = local_410;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; psVar12 = psVar3, uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    do {
      sVar1 = *psVar12;
      psVar12 = psVar12 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar12 - (int)psVar3;
    puVar16 = (uint32_t *)(local_514 + 2);
    do {
      psVar7 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar7 != 0);
    psVar7 = psVar3;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    psVar12 = (short *)D2Lang_10003(0xd88);
    psVar7 = psVar12;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    puVar16 = (uint32_t *)(local_514 + 2);
    do {
      psVar10 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar10 != 0);
    psVar10 = psVar12;
    for (uVar5 = (uint)((int)psVar7 - (int)psVar12) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar16 = *(uint32_t *)psVar10;
      psVar10 = psVar10 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = (int)psVar7 - (int)psVar12 & 3; psVar7 = psVar3, uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar10;
      psVar10 = (short *)((int)psVar10 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar7 - (int)psVar3;
    puVar16 = (uint32_t *)(local_514 + 2);
    do {
      psVar7 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar7 != 0);
    psVar7 = psVar3;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    client_DrawHoverItem_10225400(local_410,&DAT_103775a4);
    psVar7 = local_410;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar7 - (int)local_410;
    puVar16 = (uint32_t *)(local_514 + 2);
    do {
      psVar7 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar7 != 0);
    psVar7 = local_410;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; psVar12 = psVar4, uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    do {
      sVar1 = *psVar12;
      psVar12 = psVar12 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar12 - (int)psVar4;
    puVar16 = (uint32_t *)(local_514 + 2);
    do {
      psVar7 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar7 != 0);
    psVar7 = psVar4;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    client_DrawHoverItem_1021ce80((int)local_51c,(int)local_528,0x15,0x16,&local_518,&local_520,&local_52c);
    psVar7 = (short *)D2Lang_10003(0xd89);
    iVar9 = -(int)psVar7;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
      *(short *)(auStack_112 + iVar9 + (int)psVar7) = sVar1;
      psVar12 = psVar3;
    } while (sVar1 != 0);
    do {
      sVar1 = *psVar12;
      psVar12 = psVar12 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar12 - (int)psVar3;
    puVar16 = (uint32_t *)auStack_112;
    do {
      psVar7 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar7 != 0);
    psVar7 = psVar3;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    client_DrawHoverItem_10225400(local_410,&DAT_103775a4);
    if (local_52c != 0) {
      sub_102f0c70(local_410,3);
    }
    psVar7 = local_410;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar7 - (int)local_410;
    puVar16 = (uint32_t *)auStack_112;
    do {
      psVar7 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar7 != 0);
    psVar7 = local_410;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; psVar12 = psVar3, uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    do {
      sVar1 = *psVar12;
      psVar12 = psVar12 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar12 - (int)psVar3;
    puVar16 = (uint32_t *)auStack_112;
    do {
      psVar7 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar7 != 0);
    psVar7 = psVar3;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    psVar12 = (short *)D2Lang_10003(0xd88);
    psVar7 = psVar12;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    puVar16 = (uint32_t *)auStack_112;
    do {
      psVar10 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar10 != 0);
    psVar10 = psVar12;
    for (uVar5 = (uint)((int)psVar7 - (int)psVar12) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar16 = *(uint32_t *)psVar10;
      psVar10 = psVar10 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = (int)psVar7 - (int)psVar12 & 3; psVar7 = psVar3, uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar10;
      psVar10 = (short *)((int)psVar10 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar7 - (int)psVar3;
    puVar16 = (uint32_t *)auStack_112;
    do {
      psVar7 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar7 != 0);
    psVar7 = psVar3;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    client_DrawHoverItem_10225400(local_410,&DAT_103775a4);
    psVar7 = local_410;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar7 - (int)local_410;
    puVar16 = (uint32_t *)auStack_112;
    do {
      psVar7 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar7 != 0);
    psVar7 = local_410;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; psVar12 = psVar4, uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    do {
      sVar1 = *psVar12;
      psVar12 = psVar12 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar12 - (int)psVar4;
    puVar16 = (uint32_t *)auStack_112;
    do {
      psVar7 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar7 != 0);
    psVar7 = psVar4;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    sub_102f0c70(local_510,0);
    sub_102f0c70(local_110,0);
    puVar16 = p_D2Client_DAT_6fbcbbfc;
    psVar7 = local_510;
    iVar9 = local_524 - (int)psVar7;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
      *(short *)(iVar9 + -2 + (int)psVar7) = sVar1;
    } while (sVar1 != 0);
    psVar7 = (short *)local_110;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar7 - (int)local_110;
    puVar17 = (uint32_t *)(local_524 + -2);
    do {
      psVar7 = (short *)((int)puVar17 + 2);
      puVar17 = (uint32_t *)((int)puVar17 + 2);
    } while (*psVar7 != 0);
    psVar7 = (short *)local_110;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar17 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar17 = puVar17 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar17 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar17 = (uint32_t *)((int)puVar17 + 1);
    }
    piVar15 = (int *)*puVar16;
  }
  piVar2 = local_51c;
  local_514 = (uint8_t  [4])0x0;
  iVar9 = D2Common_10379((int)local_51c,0x12,0);
  if ((((iVar9 != 0) || (iVar9 = D2Common_10379((int)piVar2,0x11,0), iVar9 != 0)) ||
      (iVar9 = D2Common_10379((int)piVar2,0x9f,0), iVar9 != 0)) ||
     (iVar9 = D2Common_10379((int)piVar2,0xa0,0), iVar9 != 0)) {
    local_514 = (uint8_t  [4])0x1;
  }
  uVar5 = D2Common_10711(piVar2);
  if (uVar5 != 0) {
    memset(local_210,0,0x200);
    psVar7 = (short *)D2Lang_10003(0xd8b);
    iVar9 = -(int)psVar7;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
      *(short *)(auStack_212 + iVar9 + (int)psVar7) = sVar1;
    } while (sVar1 != 0);
    sub_102f0c70(local_210,0);
    client_DrawHoverItem_1021ce80((int)piVar2,(int)piVar15,0x9f,0xa0,&local_518,&local_520,(uint32_t *)local_514);
    local_52c = -(uint)(local_514 != (uint8_t  [4])0x0) & 3;
    psVar7 = psVar3;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    puVar16 = (uint32_t *)auStack_212;
    do {
      psVar12 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar12 != 0);
    psVar12 = psVar3;
    for (uVar5 = (uint)((int)psVar7 - (int)psVar3) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar16 = *(uint32_t *)psVar12;
      psVar12 = psVar12 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = (int)psVar7 - (int)psVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar12;
      psVar12 = (short *)((int)psVar12 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    client_DrawHoverItem_10225400(local_410,&DAT_103775a4);
    sub_102f0c70(local_410,local_52c);
    psVar7 = local_410;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar7 - (int)local_410;
    puVar16 = (uint32_t *)auStack_212;
    do {
      psVar7 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar7 != 0);
    psVar7 = local_410;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; psVar12 = psVar3, uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    do {
      sVar1 = *psVar12;
      psVar12 = psVar12 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar12 - (int)psVar3;
    puVar16 = (uint32_t *)auStack_212;
    do {
      psVar7 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar7 != 0);
    psVar7 = psVar3;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    psVar12 = (short *)D2Lang_10003(0xd88);
    psVar7 = psVar12;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    puVar16 = (uint32_t *)auStack_212;
    do {
      psVar10 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar10 != 0);
    psVar10 = psVar12;
    for (uVar5 = (uint)((int)psVar7 - (int)psVar12) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar16 = *(uint32_t *)psVar10;
      psVar10 = psVar10 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = (int)psVar7 - (int)psVar12 & 3; psVar7 = psVar3, uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar10;
      psVar10 = (short *)((int)psVar10 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar7 - (int)psVar3;
    puVar16 = (uint32_t *)auStack_212;
    do {
      psVar7 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar7 != 0);
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar3;
      psVar3 = psVar3 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar3;
      psVar3 = (short *)((int)psVar3 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    client_DrawHoverItem_10225400(local_410,&DAT_103775a4);
    sub_102f0c70(local_410,local_52c);
    psVar3 = local_410;
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar3 - (int)local_410;
    puVar16 = (uint32_t *)auStack_212;
    do {
      psVar3 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar3 != 0);
    psVar3 = local_410;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar3;
      psVar3 = psVar3 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; psVar7 = psVar4, uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar3;
      psVar3 = (short *)((int)psVar3 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar7 - (int)psVar4;
    puVar16 = (uint32_t *)auStack_212;
    do {
      psVar3 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar3 != 0);
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar4;
      psVar4 = psVar4 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; psVar3 = (short *)local_210, uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar4;
      psVar4 = (short *)((int)psVar4 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar3 - (int)local_210;
    puVar16 = (uint32_t *)(local_524 + -2);
    do {
      psVar4 = (short *)((int)puVar16 + 2);
      puVar16 = (uint32_t *)((int)puVar16 + 2);
    } while (*psVar4 != 0);
    psVar4 = (short *)local_210;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *(uint32_t *)psVar4;
      psVar4 = psVar4 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar16 = (char)*psVar4;
      psVar4 = (short *)((int)psVar4 + 1);
      puVar16 = (uint32_t *)((int)puVar16 + 1);
    }
  }
  return;
}


// 0x1021dec0  (ghidra: FUN_1021dec0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall client_DrawHoverItem_1021dec0(int param_1,int *reg_EDX)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  uint32_t *puVar11;
  short local_1c [10];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_1c[8] = 0;
  local_1c[9] = 0;
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_1c[3] = 0;
  local_1c[4] = 0;
  local_1c[5] = 0;
  local_1c[6] = 0;
  local_1c[7] = 0;
  psVar2 = (short *)D2Lang_10003(0xf9b);
  psVar3 = (short *)D2Lang_10003(0xf9e);
  uVar4 = D2Common_10865(reg_EDX);
  if (((uVar4 != 0) && (iVar5 = D2Common_11116((int)reg_EDX), 0 < iVar5)) &&
     (uVar4 = D2Common_10711(reg_EDX), uVar4 == 0)) {
    iVar5 = D2Common_10379((int)reg_EDX,0x4b,0);
    psVar6 = (short *)D2Lang_10003(0xd81);
    iVar9 = param_1 - (int)psVar6;
    do {
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
      *(short *)(iVar9 + -2 + (int)psVar6) = sVar1;
      psVar7 = psVar2;
    } while (sVar1 != 0);
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar4 = (int)psVar7 - (int)psVar2;
    puVar11 = (uint32_t *)(param_1 + -2);
    do {
      psVar6 = (short *)((int)puVar11 + 2);
      puVar11 = (uint32_t *)((int)puVar11 + 2);
    } while (*psVar6 != 0);
    psVar6 = psVar2;
    for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar11 = *(uint32_t *)psVar6;
      psVar6 = psVar6 + 2;
      puVar11 = puVar11 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar11 = (char)*psVar6;
      psVar6 = (short *)((int)psVar6 + 1);
      puVar11 = (uint32_t *)((int)puVar11 + 1);
    }
    D2Common_10973_10273ce0((int)reg_EDX,0x48,0);
    sub_1021cbb0(local_1c,&DAT_103775a4);
    psVar6 = local_1c;
    do {
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar1 != 0);
    uVar4 = (int)psVar6 - (int)local_1c;
    puVar11 = (uint32_t *)(param_1 + -2);
    do {
      psVar6 = (short *)((int)puVar11 + 2);
      puVar11 = (uint32_t *)((int)puVar11 + 2);
    } while (*psVar6 != 0);
    psVar6 = local_1c;
    for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar11 = *(uint32_t *)psVar6;
      psVar6 = psVar6 + 2;
      puVar11 = puVar11 + 1;
    }
    for (uVar4 = uVar4 & 3; psVar7 = psVar2, uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar11 = (char)*psVar6;
      psVar6 = (short *)((int)psVar6 + 1);
      puVar11 = (uint32_t *)((int)puVar11 + 1);
    }
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar4 = (int)psVar7 - (int)psVar2;
    puVar11 = (uint32_t *)(param_1 + -2);
    do {
      psVar6 = (short *)((int)puVar11 + 2);
      puVar11 = (uint32_t *)((int)puVar11 + 2);
    } while (*psVar6 != 0);
    psVar6 = psVar2;
    for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar11 = *(uint32_t *)psVar6;
      psVar6 = psVar6 + 2;
      puVar11 = puVar11 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar11 = (char)*psVar6;
      psVar6 = (short *)((int)psVar6 + 1);
      puVar11 = (uint32_t *)((int)puVar11 + 1);
    }
    psVar7 = (short *)D2Lang_10003(0xd87);
    psVar6 = psVar7;
    do {
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar1 != 0);
    puVar11 = (uint32_t *)(param_1 + -2);
    do {
      psVar10 = (short *)((int)puVar11 + 2);
      puVar11 = (uint32_t *)((int)puVar11 + 2);
    } while (*psVar10 != 0);
    psVar10 = psVar7;
    for (uVar4 = (uint)((int)psVar6 - (int)psVar7) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar11 = *(uint32_t *)psVar10;
      psVar10 = psVar10 + 2;
      puVar11 = puVar11 + 1;
    }
    for (uVar4 = (int)psVar6 - (int)psVar7 & 3; psVar6 = psVar2, uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar11 = (char)*psVar10;
      psVar10 = (short *)((int)psVar10 + 1);
      puVar11 = (uint32_t *)((int)puVar11 + 1);
    }
    do {
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar1 != 0);
    uVar4 = (int)psVar6 - (int)psVar2;
    puVar11 = (uint32_t *)(param_1 + -2);
    do {
      psVar6 = (short *)((int)puVar11 + 2);
      puVar11 = (uint32_t *)((int)puVar11 + 2);
    } while (*psVar6 != 0);
    for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar11 = *(uint32_t *)psVar2;
      psVar2 = psVar2 + 2;
      puVar11 = puVar11 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar11 = (char)*psVar2;
      psVar2 = (short *)((int)psVar2 + 1);
      puVar11 = (uint32_t *)((int)puVar11 + 1);
    }
    sub_1021cbb0(local_1c,&DAT_103775a4);
    if (iVar5 != 0) {
      sub_102f0c70(local_1c,3);
    }
    psVar2 = local_1c;
    do {
      sVar1 = *psVar2;
      psVar2 = psVar2 + 1;
    } while (sVar1 != 0);
    uVar4 = (int)psVar2 - (int)local_1c;
    puVar11 = (uint32_t *)(param_1 + -2);
    do {
      psVar2 = (short *)((int)puVar11 + 2);
      puVar11 = (uint32_t *)((int)puVar11 + 2);
    } while (*psVar2 != 0);
    psVar2 = local_1c;
    for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar11 = *(uint32_t *)psVar2;
      psVar2 = psVar2 + 2;
      puVar11 = puVar11 + 1;
    }
    for (uVar4 = uVar4 & 3; psVar6 = psVar3, uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar11 = (char)*psVar2;
      psVar2 = (short *)((int)psVar2 + 1);
      puVar11 = (uint32_t *)((int)puVar11 + 1);
    }
    do {
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar1 != 0);
    uVar4 = (int)psVar6 - (int)psVar3;
    puVar11 = (uint32_t *)(param_1 + -2);
    do {
      psVar2 = (short *)((int)puVar11 + 2);
      puVar11 = (uint32_t *)((int)puVar11 + 2);
    } while (*psVar2 != 0);
    for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar11 = *(uint32_t *)psVar3;
      psVar3 = psVar3 + 2;
      puVar11 = puVar11 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar11 = (char)*psVar3;
      psVar3 = (short *)((int)psVar3 + 1);
      puVar11 = (uint32_t *)((int)puVar11 + 1);
    }
  }
  return;
}


// 0x1021e110  (ghidra: FUN_1021e110)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall client_DrawHoverItem_1021e110(int param_1,int param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  short *psVar7;
  uint uVar8;
  uint32_t *puVar9;
  short local_1c [10];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_1c[8] = 0;
  local_1c[9] = 0;
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_1c[3] = 0;
  local_1c[4] = 0;
  local_1c[5] = 0;
  local_1c[6] = 0;
  local_1c[7] = 0;
  psVar2 = (short *)D2Lang_10003(0xf9b);
  psVar3 = (short *)D2Lang_10003(0xf9e);
  iVar4 = D2Common_10973_10273ce0(param_2,0x46,0);
  if (0 < iVar4) {
    psVar5 = (short *)D2Lang_10003(0xd86);
    iVar4 = param_1 - (int)psVar5;
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
      *(short *)(iVar4 + -2 + (int)psVar5) = sVar1;
      psVar7 = psVar2;
    } while (sVar1 != 0);
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar8 = (int)psVar7 - (int)psVar2;
    puVar9 = (uint32_t *)(param_1 + -2);
    do {
      psVar5 = (short *)((int)puVar9 + 2);
      puVar9 = (uint32_t *)((int)puVar9 + 2);
    } while (*psVar5 != 0);
    for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *(uint32_t *)psVar2;
      psVar2 = psVar2 + 2;
      puVar9 = puVar9 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar9 = (char)*psVar2;
      psVar2 = (short *)((int)psVar2 + 1);
      puVar9 = (uint32_t *)((int)puVar9 + 1);
    }
    sub_1021cbb0(local_1c,&DAT_103775a4);
    psVar2 = local_1c;
    do {
      sVar1 = *psVar2;
      psVar2 = psVar2 + 1;
    } while (sVar1 != 0);
    uVar8 = (int)psVar2 - (int)local_1c;
    puVar9 = (uint32_t *)(param_1 + -2);
    do {
      psVar2 = (short *)((int)puVar9 + 2);
      puVar9 = (uint32_t *)((int)puVar9 + 2);
    } while (*psVar2 != 0);
    psVar2 = local_1c;
    for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *(uint32_t *)psVar2;
      psVar2 = psVar2 + 2;
      puVar9 = puVar9 + 1;
    }
    for (uVar8 = uVar8 & 3; psVar5 = psVar3, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar9 = (char)*psVar2;
      psVar2 = (short *)((int)psVar2 + 1);
      puVar9 = (uint32_t *)((int)puVar9 + 1);
    }
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar1 != 0);
    uVar8 = (int)psVar5 - (int)psVar3;
    puVar9 = (uint32_t *)(param_1 + -2);
    do {
      psVar2 = (short *)((int)puVar9 + 2);
      puVar9 = (uint32_t *)((int)puVar9 + 2);
    } while (*psVar2 != 0);
    for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *(uint32_t *)psVar3;
      psVar3 = psVar3 + 2;
      puVar9 = puVar9 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar9 = (char)*psVar3;
      psVar3 = (short *)((int)psVar3 + 1);
      puVar9 = (uint32_t *)((int)puVar9 + 1);
    }
    psVar2 = (short *)D2Lang_10003((uint)*(ushort *)(param_3 + 0xf4));
    psVar3 = psVar2;
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    puVar9 = (uint32_t *)(param_1 + -2);
    do {
      psVar5 = (short *)((int)puVar9 + 2);
      puVar9 = (uint32_t *)((int)puVar9 + 2);
    } while (*psVar5 != 0);
    psVar5 = psVar2;
    for (uVar8 = (uint)((int)psVar3 - (int)psVar2) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar9 = *(uint32_t *)psVar5;
      psVar5 = psVar5 + 2;
      puVar9 = puVar9 + 1;
    }
    for (uVar8 = (int)psVar3 - (int)psVar2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar9 = (char)*psVar5;
      psVar5 = (short *)((int)psVar5 + 1);
      puVar9 = (uint32_t *)((int)puVar9 + 1);
    }
  }
  return;
}


// 0x1021e290  (ghidra: FUN_1021e290)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall client_DrawHoverItem_1021e290(int param_1,int *reg_EDX)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  short *psVar7;
  uint uVar8;
  uint32_t *puVar9;
  short local_1c [10];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_1c[8] = 0;
  local_1c[9] = 0;
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_1c[3] = 0;
  local_1c[4] = 0;
  local_1c[5] = 0;
  local_1c[6] = 0;
  local_1c[7] = 0;
  psVar2 = (short *)D2Lang_10003(0xf9b);
  psVar3 = (short *)D2Lang_10003(0xf9e);
  iVar4 = D2Common_10973_10273ce0((int)reg_EDX,0x46,0);
  if ((0 < iVar4) || (iVar4 = D2Common_10463(reg_EDX), 0 < iVar4)) {
    psVar5 = (short *)D2Lang_10003(0xd86);
    iVar4 = param_1 - (int)psVar5;
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
      *(short *)(iVar4 + -2 + (int)psVar5) = sVar1;
      psVar7 = psVar2;
    } while (sVar1 != 0);
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar8 = (int)psVar7 - (int)psVar2;
    puVar9 = (uint32_t *)(param_1 + -2);
    do {
      psVar5 = (short *)((int)puVar9 + 2);
      puVar9 = (uint32_t *)((int)puVar9 + 2);
    } while (*psVar5 != 0);
    for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *(uint32_t *)psVar2;
      psVar2 = psVar2 + 2;
      puVar9 = puVar9 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar9 = (char)*psVar2;
      psVar2 = (short *)((int)psVar2 + 1);
      puVar9 = (uint32_t *)((int)puVar9 + 1);
    }
    sub_1021cbb0(local_1c,&DAT_103775a4);
    psVar2 = local_1c;
    do {
      sVar1 = *psVar2;
      psVar2 = psVar2 + 1;
    } while (sVar1 != 0);
    uVar8 = (int)psVar2 - (int)local_1c;
    puVar9 = (uint32_t *)(param_1 + -2);
    do {
      psVar2 = (short *)((int)puVar9 + 2);
      puVar9 = (uint32_t *)((int)puVar9 + 2);
    } while (*psVar2 != 0);
    psVar2 = local_1c;
    for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *(uint32_t *)psVar2;
      psVar2 = psVar2 + 2;
      puVar9 = puVar9 + 1;
    }
    for (uVar8 = uVar8 & 3; psVar5 = psVar3, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar9 = (char)*psVar2;
      psVar2 = (short *)((int)psVar2 + 1);
      puVar9 = (uint32_t *)((int)puVar9 + 1);
    }
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar1 != 0);
    uVar8 = (int)psVar5 - (int)psVar3;
    puVar9 = (uint32_t *)(param_1 + -2);
    do {
      psVar2 = (short *)((int)puVar9 + 2);
      puVar9 = (uint32_t *)((int)puVar9 + 2);
    } while (*psVar2 != 0);
    for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *(uint32_t *)psVar3;
      psVar3 = psVar3 + 2;
      puVar9 = puVar9 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar9 = (char)*psVar3;
      psVar3 = (short *)((int)psVar3 + 1);
      puVar9 = (uint32_t *)((int)puVar9 + 1);
    }
  }
  return;
}


// 0x1021e3d0  (ghidra: FUN_1021e3d0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall client_DrawHoverItem_1021e3d0(int param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  uint32_t *puVar9;
  short local_1c [10];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_1c[8] = 0;
  local_1c[9] = 0;
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_1c[3] = 0;
  local_1c[4] = 0;
  local_1c[5] = 0;
  local_1c[6] = 0;
  local_1c[7] = 0;
  psVar2 = (short *)D2Lang_10003(0xf9b);
  psVar3 = (short *)D2Lang_10003(0xf9e);
  psVar4 = (short *)D2Lang_10003(0xd8d);
  iVar6 = param_1 - (int)psVar4;
  do {
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
    *(short *)(iVar6 + -2 + (int)psVar4) = sVar1;
    psVar7 = psVar2;
  } while (sVar1 != 0);
  do {
    sVar1 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar1 != 0);
  uVar8 = (int)psVar7 - (int)psVar2;
  puVar9 = (uint32_t *)(param_1 + -2);
  do {
    psVar4 = (short *)((int)puVar9 + 2);
    puVar9 = (uint32_t *)((int)puVar9 + 2);
  } while (*psVar4 != 0);
  for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar9 = *(uint32_t *)psVar2;
    psVar2 = psVar2 + 2;
    puVar9 = puVar9 + 1;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(char *)puVar9 = (char)*psVar2;
    psVar2 = (short *)((int)psVar2 + 1);
    puVar9 = (uint32_t *)((int)puVar9 + 1);
  }
  sub_1021cbb0(local_1c,&DAT_103775a4);
  psVar4 = local_1c;
  do {
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar1 != 0);
  uVar8 = (int)psVar4 - (int)local_1c;
  puVar9 = (uint32_t *)(param_1 + -2);
  do {
    psVar4 = (short *)((int)puVar9 + 2);
    puVar9 = (uint32_t *)((int)puVar9 + 2);
  } while (*psVar4 != 0);
  psVar4 = local_1c;
  for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar9 = *(uint32_t *)psVar4;
    psVar4 = psVar4 + 2;
    puVar9 = puVar9 + 1;
  }
  for (uVar8 = uVar8 & 3; psVar2 = psVar3, uVar8 != 0; uVar8 = uVar8 - 1) {
    *(char *)puVar9 = (char)*psVar4;
    psVar4 = (short *)((int)psVar4 + 1);
    puVar9 = (uint32_t *)((int)puVar9 + 1);
  }
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  uVar8 = (int)psVar2 - (int)psVar3;
  puVar9 = (uint32_t *)(param_1 + -2);
  do {
    psVar4 = (short *)((int)puVar9 + 2);
    puVar9 = (uint32_t *)((int)puVar9 + 2);
  } while (*psVar4 != 0);
  for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar9 = *(uint32_t *)psVar3;
    psVar3 = psVar3 + 2;
    puVar9 = puVar9 + 1;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(char *)puVar9 = (char)*psVar3;
    psVar3 = (short *)((int)psVar3 + 1);
    puVar9 = (uint32_t *)((int)puVar9 + 1);
  }
  return;
}


// 0x1021e4f0  (ghidra: FUN_1021e4f0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __fastcall client_DrawHoverItem_1021e4f0(uint param_1,int param_2,int *param_3,short *param_4,int param_5)

{
  short sVar1;
  void *pvVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  short local_810;
  uint8_t local_80e [2050];
  uint local_c;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_c = DAT_1039800c ^ (uint)&stack0xfffffffc;
  memset(local_80e,0,0x7fe);
  D2Common_10996(5,0,(int *)param_2,param_3,param_1,0);
  local_810 = 0;
  client_DrawHoverItem_102246b0(&local_810,param_2,1,param_5,param_1);
  psVar3 = &local_810;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  uVar6 = (int)psVar3 - (int)&local_810;
  psVar3 = param_4 + -1;
  do {
    psVar7 = psVar3 + 1;
    psVar3 = psVar3 + 1;
  } while (*psVar7 != 0);
  psVar7 = &local_810;
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(uint32_t *)psVar3 = *(uint32_t *)psVar7;
    psVar7 = psVar7 + 2;
    psVar3 = psVar3 + 2;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(char *)psVar3 = (char)*psVar7;
    psVar7 = (short *)((int)psVar7 + 1);
    psVar3 = (short *)((int)psVar3 + 1);
  }
  pvVar2 = (void *)D2Common_10872(param_2,0,0x40);
  if (pvVar2 != (void *)0x0) {
    D2Common_11111_102a37f0(param_2,pvVar2);
    D2Common_11108_102a3820(pvVar2);
  }
  psVar3 = param_4;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  iVar4 = (int)psVar3 - (int)(param_4 + 1) >> 1;
  if ((iVar4 != 0) && (param_4[iVar4 + -1] == 10)) {
    param_4[iVar4 + -1] = 0;
  }
  return;
}


// 0x1021e610  (ghidra: FUN_1021e610)  [range]
void __fastcall client_DrawHoverItem_1021e610(uint param_1,int param_2,int *param_3,short *param_4,int param_5)

{
  short sVar1;
  void *pvVar2;
  short *psVar3;
  int iVar4;
  
  D2Common_10996(2,0,(int *)param_2,param_3,param_1,0);
  client_DrawHoverItem_102246b0(param_4,param_2,0,param_5,param_2);
  pvVar2 = (void *)D2Common_10872(param_2,0,0x40);
  if (pvVar2 != (void *)0x0) {
    D2Common_11111_102a37f0(param_2,pvVar2);
    D2Common_11108_102a3820(pvVar2);
  }
  psVar3 = param_4;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  iVar4 = (int)psVar3 - (int)(param_4 + 1) >> 1;
  if ((iVar4 != 0) && (param_4[iVar4 + -1] == 10)) {
    param_4[iVar4 + -1] = 0;
  }
  return;
}


// 0x1021e690  (ghidra: FUN_1021e690)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall client_DrawHoverItem_1021e690(int param_1,short *param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  uint uVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  uint32_t *puVar11;
  uint8_t local_214 [4];
  short local_210;
  uint8_t local_20e [514];
  uint local_c;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_c = DAT_1039800c ^ (uint)&stack0xfffffffc;
  memset(local_20e,0,0x1fe);
  uVar2 = D2Common_10744(param_1,0x35);
  if (uVar2 == 0) {
    Fog_10024("","D2CLIENT_GetSocketFillerString",0x280);
                    /* WARNING: Subroutine does not return */
    _exit(-1);
  }
  if (param_1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(uint *)(param_1 + 4);
  }
  iVar3 = D2Common_10695(uVar2);
  if (iVar3 != 0) {
    *param_2 = 0;
    psVar4 = (short *)D2Lang_10003(0xf9e);
    psVar5 = (short *)D2Lang_10003(0xf9b);
    iVar3 = D2Common_10806(*(int *)(iVar3 + 0xf0));
    if (iVar3 == 0) {
      Fog_10024("","D2CLIENT_GetSocketFillerString",0x294);
                    /* WARNING: Subroutine does not return */
      _exit(-1);
    }
    uVar2 = D2Common_10744(param_1,0x14);
    psVar8 = psVar4;
    psVar9 = psVar4;
    local_214 = (uint8_t  [4])psVar4;
    if (uVar2 == 0) {
      uVar2 = D2Common_10744(param_1,0x4a);
      if (uVar2 == 0) {
        return;
      }
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      uVar2 = (int)psVar8 - (int)psVar4;
      psVar8 = param_2 + -1;
      do {
        psVar6 = psVar8 + 1;
        psVar8 = psVar8 + 1;
      } while (*psVar6 != 0);
      psVar6 = psVar4;
      for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(uint32_t *)psVar8 = *(uint32_t *)psVar6;
        psVar6 = psVar6 + 2;
        psVar8 = psVar8 + 2;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)psVar8 = (char)*psVar6;
        psVar6 = (short *)((int)psVar6 + 1);
        psVar8 = (short *)((int)psVar8 + 1);
      }
      local_210 = 0;
      psVar6 = (short *)D2Lang_10003(0x2b42);
      psVar8 = psVar6;
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      puVar11 = (uint32_t *)(local_214 + 2);
      do {
        psVar10 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar10 != 0);
      psVar10 = psVar6;
      for (uVar2 = (uint)((int)psVar8 - (int)psVar6) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar11 = *(uint32_t *)psVar10;
        psVar10 = psVar10 + 2;
        puVar11 = puVar11 + 1;
      }
      for (uVar2 = (int)psVar8 - (int)psVar6 & 3; psVar8 = psVar5, uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)puVar11 = (char)*psVar10;
        psVar10 = (short *)((int)psVar10 + 1);
        puVar11 = (uint32_t *)((int)puVar11 + 1);
      }
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      uVar2 = (int)psVar8 - (int)psVar5;
      puVar11 = (uint32_t *)(local_214 + 2);
      do {
        psVar8 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar8 != 0);
      psVar8 = psVar5;
      for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *(uint32_t *)psVar8;
        psVar8 = psVar8 + 2;
        puVar11 = puVar11 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)puVar11 = (char)*psVar8;
        psVar8 = (short *)((int)psVar8 + 1);
        puVar11 = (uint32_t *)((int)puVar11 + 1);
      }
      client_DrawHoverItem_1021e4f0(2,param_1,iVar3,param_2,(int)&local_210);
      psVar8 = psVar4;
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      psVar6 = param_2 + -1;
      do {
        psVar10 = psVar6 + 1;
        psVar6 = psVar6 + 1;
      } while (*psVar10 != 0);
      psVar10 = psVar4;
      for (uVar2 = (uint)((int)psVar8 - (int)psVar4) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(uint32_t *)psVar6 = *(uint32_t *)psVar10;
        psVar10 = psVar10 + 2;
        psVar6 = psVar6 + 2;
      }
      for (uVar2 = (int)psVar8 - (int)psVar4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)psVar6 = (char)*psVar10;
        psVar10 = (short *)((int)psVar10 + 1);
        psVar6 = (short *)((int)psVar6 + 1);
      }
      local_210 = 0;
      local_214 = (uint8_t  [4])psVar4;
      psVar6 = (short *)D2Lang_10003(0x2b41);
      psVar8 = psVar6;
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      puVar11 = (uint32_t *)(local_214 + 2);
      do {
        psVar10 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar10 != 0);
      psVar10 = psVar6;
      for (uVar2 = (uint)((int)psVar8 - (int)psVar6) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar11 = *(uint32_t *)psVar10;
        psVar10 = psVar10 + 2;
        puVar11 = puVar11 + 1;
      }
      for (uVar2 = (int)psVar8 - (int)psVar6 & 3; psVar8 = psVar5, uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)puVar11 = (char)*psVar10;
        psVar10 = (short *)((int)psVar10 + 1);
        puVar11 = (uint32_t *)((int)puVar11 + 1);
      }
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      uVar2 = (int)psVar8 - (int)psVar5;
      puVar11 = (uint32_t *)(local_214 + 2);
      do {
        psVar8 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar8 != 0);
      psVar8 = psVar5;
      for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *(uint32_t *)psVar8;
        psVar8 = psVar8 + 2;
        puVar11 = puVar11 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)puVar11 = (char)*psVar8;
        psVar8 = (short *)((int)psVar8 + 1);
        puVar11 = (uint32_t *)((int)puVar11 + 1);
      }
      client_DrawHoverItem_1021e4f0(1,param_1,iVar3,param_2,(int)&local_210);
      psVar8 = psVar4;
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      psVar6 = param_2 + -1;
      do {
        psVar10 = psVar6 + 1;
        psVar6 = psVar6 + 1;
      } while (*psVar10 != 0);
      psVar10 = psVar4;
      for (uVar2 = (uint)((int)psVar8 - (int)psVar4) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(uint32_t *)psVar6 = *(uint32_t *)psVar10;
        psVar10 = psVar10 + 2;
        psVar6 = psVar6 + 2;
      }
      for (uVar2 = (int)psVar8 - (int)psVar4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)psVar6 = (char)*psVar10;
        psVar10 = (short *)((int)psVar10 + 1);
        psVar6 = (short *)((int)psVar6 + 1);
      }
      local_210 = 0;
      local_214 = (uint8_t  [4])psVar4;
      psVar6 = (short *)D2Lang_10003(0x2b44);
      psVar8 = psVar6;
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      puVar11 = (uint32_t *)(local_214 + 2);
      do {
        psVar10 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar10 != 0);
      psVar10 = psVar6;
      for (uVar2 = (uint)((int)psVar8 - (int)psVar6) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar11 = *(uint32_t *)psVar10;
        psVar10 = psVar10 + 2;
        puVar11 = puVar11 + 1;
      }
      for (uVar2 = (int)psVar8 - (int)psVar6 & 3; psVar8 = psVar5, uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)puVar11 = (char)*psVar10;
        psVar10 = (short *)((int)psVar10 + 1);
        puVar11 = (uint32_t *)((int)puVar11 + 1);
      }
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      uVar2 = (int)psVar8 - (int)psVar5;
      puVar11 = (uint32_t *)(local_214 + 2);
      do {
        psVar8 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar8 != 0);
      psVar8 = psVar5;
      for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *(uint32_t *)psVar8;
        psVar8 = psVar8 + 2;
        puVar11 = puVar11 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)puVar11 = (char)*psVar8;
        psVar8 = (short *)((int)psVar8 + 1);
        puVar11 = (uint32_t *)((int)puVar11 + 1);
      }
      client_DrawHoverItem_1021e4f0(1,param_1,iVar3,param_2,(int)&local_210);
      psVar8 = psVar4;
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      psVar6 = param_2 + -1;
      do {
        psVar10 = psVar6 + 1;
        psVar6 = psVar6 + 1;
      } while (*psVar10 != 0);
      psVar10 = psVar4;
      for (uVar2 = (uint)((int)psVar8 - (int)psVar4) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(uint32_t *)psVar6 = *(uint32_t *)psVar10;
        psVar10 = psVar10 + 2;
        psVar6 = psVar6 + 2;
      }
      for (uVar2 = (int)psVar8 - (int)psVar4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)psVar6 = (char)*psVar10;
        psVar10 = (short *)((int)psVar10 + 1);
        psVar6 = (short *)((int)psVar6 + 1);
      }
      local_210 = 0;
      local_214 = (uint8_t  [4])psVar4;
      psVar6 = (short *)D2Lang_10003(0x2b43);
      psVar8 = psVar6;
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      puVar11 = (uint32_t *)(local_214 + 2);
      do {
        psVar10 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar10 != 0);
      psVar10 = psVar6;
      for (uVar2 = (uint)((int)psVar8 - (int)psVar6) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar11 = *(uint32_t *)psVar10;
        psVar10 = psVar10 + 2;
        puVar11 = puVar11 + 1;
      }
      for (uVar2 = (int)psVar8 - (int)psVar6 & 3; psVar8 = psVar5, uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)puVar11 = (char)*psVar10;
        psVar10 = (short *)((int)psVar10 + 1);
        puVar11 = (uint32_t *)((int)puVar11 + 1);
      }
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      uVar2 = (int)psVar8 - (int)psVar5;
      puVar11 = (uint32_t *)(local_214 + 2);
      do {
        psVar8 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar8 != 0);
      for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *(uint32_t *)psVar5;
        psVar5 = psVar5 + 2;
        puVar11 = puVar11 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)puVar11 = (char)*psVar5;
        psVar5 = (short *)((int)psVar5 + 1);
        puVar11 = (uint32_t *)((int)puVar11 + 1);
      }
      client_DrawHoverItem_1021e4f0(0,param_1,iVar3,param_2,(int)&local_210);
    }
    else {
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      uVar2 = (int)psVar8 - (int)psVar4;
      psVar8 = param_2 + -1;
      do {
        psVar6 = psVar8 + 1;
        psVar8 = psVar8 + 1;
      } while (*psVar6 != 0);
      psVar6 = psVar4;
      for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(uint32_t *)psVar8 = *(uint32_t *)psVar6;
        psVar6 = psVar6 + 2;
        psVar8 = psVar8 + 2;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)psVar8 = (char)*psVar6;
        psVar6 = (short *)((int)psVar6 + 1);
        psVar8 = (short *)((int)psVar8 + 1);
      }
      local_210 = 0;
      psVar6 = (short *)D2Lang_10003(0x2b42);
      psVar8 = psVar6;
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      puVar11 = (uint32_t *)(local_214 + 2);
      do {
        psVar10 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar10 != 0);
      psVar10 = psVar6;
      for (uVar2 = (uint)((int)psVar8 - (int)psVar6) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar11 = *(uint32_t *)psVar10;
        psVar10 = psVar10 + 2;
        puVar11 = puVar11 + 1;
      }
      for (uVar2 = (int)psVar8 - (int)psVar6 & 3; psVar8 = psVar5, uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)puVar11 = (char)*psVar10;
        psVar10 = (short *)((int)psVar10 + 1);
        puVar11 = (uint32_t *)((int)puVar11 + 1);
      }
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      uVar2 = (int)psVar8 - (int)psVar5;
      puVar11 = (uint32_t *)(local_214 + 2);
      do {
        psVar8 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar8 != 0);
      psVar8 = psVar5;
      for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *(uint32_t *)psVar8;
        psVar8 = psVar8 + 2;
        puVar11 = puVar11 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)puVar11 = (char)*psVar8;
        psVar8 = (short *)((int)psVar8 + 1);
        puVar11 = (uint32_t *)((int)puVar11 + 1);
      }
      client_DrawHoverItem_1021e610(2,param_1,iVar3,param_2,(int)&local_210);
      psVar8 = psVar4;
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      psVar6 = param_2 + -1;
      do {
        psVar10 = psVar6 + 1;
        psVar6 = psVar6 + 1;
      } while (*psVar10 != 0);
      psVar10 = psVar4;
      for (uVar2 = (uint)((int)psVar8 - (int)psVar4) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(uint32_t *)psVar6 = *(uint32_t *)psVar10;
        psVar10 = psVar10 + 2;
        psVar6 = psVar6 + 2;
      }
      for (uVar2 = (int)psVar8 - (int)psVar4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)psVar6 = (char)*psVar10;
        psVar10 = (short *)((int)psVar10 + 1);
        psVar6 = (short *)((int)psVar6 + 1);
      }
      local_210 = 0;
      psVar6 = (short *)D2Lang_10003(0x2b41);
      psVar8 = psVar6;
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      puVar11 = (uint32_t *)(local_214 + 2);
      do {
        psVar10 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar10 != 0);
      psVar10 = psVar6;
      for (uVar2 = (uint)((int)psVar8 - (int)psVar6) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar11 = *(uint32_t *)psVar10;
        psVar10 = psVar10 + 2;
        puVar11 = puVar11 + 1;
      }
      for (uVar2 = (int)psVar8 - (int)psVar6 & 3; psVar8 = psVar5, uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)puVar11 = (char)*psVar10;
        psVar10 = (short *)((int)psVar10 + 1);
        puVar11 = (uint32_t *)((int)puVar11 + 1);
      }
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      uVar2 = (int)psVar8 - (int)psVar5;
      puVar11 = (uint32_t *)(local_214 + 2);
      do {
        psVar8 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar8 != 0);
      psVar8 = psVar5;
      for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *(uint32_t *)psVar8;
        psVar8 = psVar8 + 2;
        puVar11 = puVar11 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)puVar11 = (char)*psVar8;
        psVar8 = (short *)((int)psVar8 + 1);
        puVar11 = (uint32_t *)((int)puVar11 + 1);
      }
      client_DrawHoverItem_1021e610(1,param_1,iVar3,param_2,(int)&local_210);
      psVar8 = psVar4;
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      psVar6 = param_2 + -1;
      do {
        psVar10 = psVar6 + 1;
        psVar6 = psVar6 + 1;
      } while (*psVar10 != 0);
      psVar10 = psVar4;
      for (uVar2 = (uint)((int)psVar8 - (int)psVar4) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(uint32_t *)psVar6 = *(uint32_t *)psVar10;
        psVar10 = psVar10 + 2;
        psVar6 = psVar6 + 2;
      }
      for (uVar2 = (int)psVar8 - (int)psVar4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)psVar6 = (char)*psVar10;
        psVar10 = (short *)((int)psVar10 + 1);
        psVar6 = (short *)((int)psVar6 + 1);
      }
      local_210 = 0;
      local_214 = (uint8_t  [4])psVar4;
      psVar6 = (short *)D2Lang_10003(0x2b44);
      psVar8 = psVar6;
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      puVar11 = (uint32_t *)(local_214 + 2);
      do {
        psVar10 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar10 != 0);
      psVar10 = psVar6;
      for (uVar2 = (uint)((int)psVar8 - (int)psVar6) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar11 = *(uint32_t *)psVar10;
        psVar10 = psVar10 + 2;
        puVar11 = puVar11 + 1;
      }
      for (uVar2 = (int)psVar8 - (int)psVar6 & 3; psVar8 = psVar5, uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)puVar11 = (char)*psVar10;
        psVar10 = (short *)((int)psVar10 + 1);
        puVar11 = (uint32_t *)((int)puVar11 + 1);
      }
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      uVar2 = (int)psVar8 - (int)psVar5;
      puVar11 = (uint32_t *)(local_214 + 2);
      do {
        psVar8 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar8 != 0);
      psVar8 = psVar5;
      for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *(uint32_t *)psVar8;
        psVar8 = psVar8 + 2;
        puVar11 = puVar11 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)puVar11 = (char)*psVar8;
        psVar8 = (short *)((int)psVar8 + 1);
        puVar11 = (uint32_t *)((int)puVar11 + 1);
      }
      client_DrawHoverItem_1021e610(1,param_1,iVar3,param_2,(int)&local_210);
      psVar8 = psVar4;
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      psVar6 = param_2 + -1;
      do {
        psVar10 = psVar6 + 1;
        psVar6 = psVar6 + 1;
      } while (*psVar10 != 0);
      psVar10 = psVar4;
      for (uVar2 = (uint)((int)psVar8 - (int)psVar4) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(uint32_t *)psVar6 = *(uint32_t *)psVar10;
        psVar10 = psVar10 + 2;
        psVar6 = psVar6 + 2;
      }
      for (uVar2 = (int)psVar8 - (int)psVar4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)psVar6 = (char)*psVar10;
        psVar10 = (short *)((int)psVar10 + 1);
        psVar6 = (short *)((int)psVar6 + 1);
      }
      local_210 = 0;
      local_214 = (uint8_t  [4])psVar4;
      psVar6 = (short *)D2Lang_10003(0x2b43);
      psVar8 = psVar6;
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      puVar11 = (uint32_t *)(local_214 + 2);
      do {
        psVar10 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar10 != 0);
      psVar10 = psVar6;
      for (uVar2 = (uint)((int)psVar8 - (int)psVar6) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar11 = *(uint32_t *)psVar10;
        psVar10 = psVar10 + 2;
        puVar11 = puVar11 + 1;
      }
      for (uVar2 = (int)psVar8 - (int)psVar6 & 3; psVar8 = psVar5, uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)puVar11 = (char)*psVar10;
        psVar10 = (short *)((int)psVar10 + 1);
        puVar11 = (uint32_t *)((int)puVar11 + 1);
      }
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      uVar2 = (int)psVar8 - (int)psVar5;
      puVar11 = (uint32_t *)(local_214 + 2);
      do {
        psVar8 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar8 != 0);
      for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *(uint32_t *)psVar5;
        psVar5 = psVar5 + 2;
        puVar11 = puVar11 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)puVar11 = (char)*psVar5;
        psVar5 = (short *)((int)psVar5 + 1);
        puVar11 = (uint32_t *)((int)puVar11 + 1);
      }
      client_DrawHoverItem_1021e610(0,param_1,iVar3,param_2,(int)&local_210);
    }
    do {
      sVar1 = *psVar9;
      psVar9 = psVar9 + 1;
    } while (sVar1 != 0);
    uVar2 = (int)psVar9 - (int)psVar4;
    psVar5 = param_2 + -1;
    do {
      psVar9 = psVar5 + 1;
      psVar5 = psVar5 + 1;
    } while (*psVar9 != 0);
    psVar9 = psVar4;
    for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(uint32_t *)psVar5 = *(uint32_t *)psVar9;
      psVar9 = psVar9 + 2;
      psVar5 = psVar5 + 2;
    }
    for (uVar2 = uVar2 & 3; psVar8 = psVar4, uVar2 != 0; uVar2 = uVar2 - 1) {
      *(char *)psVar5 = (char)*psVar9;
      psVar9 = (short *)((int)psVar9 + 1);
      psVar5 = (short *)((int)psVar5 + 1);
    }
    do {
      sVar1 = *psVar8;
      psVar8 = psVar8 + 1;
    } while (sVar1 != 0);
    uVar2 = (int)psVar8 - (int)psVar4;
    psVar5 = param_2 + -1;
    do {
      psVar9 = psVar5 + 1;
      psVar5 = psVar5 + 1;
    } while (*psVar9 != 0);
    for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(uint32_t *)psVar5 = *(uint32_t *)psVar4;
      psVar4 = psVar4 + 2;
      psVar5 = psVar5 + 2;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(char *)psVar5 = (char)*psVar4;
      psVar4 = (short *)((int)psVar4 + 1);
      psVar5 = (short *)((int)psVar5 + 1);
    }
    return;
  }
  Fog_10024("","D2CLIENT_GetSocketFillerString",0x288);
                    /* WARNING: Subroutine does not return */
  _exit(-1);
}


// 0x1021ef70  (ghidra: FUN_1021ef70)  [range]
void __fastcall client_DrawHoverItem_1021ef70(short *param_1)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  short *psVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  
  psVar2 = (short *)D2Lang_10003(0xf9e);
  uVar3 = D2Common_10744(*p_D2Client_DAT_6fbcbc38,0x35);
  if (uVar3 != 0) {
    client_DrawHoverItem_1021e690(*p_D2Client_DAT_6fbcbc38,param_1);
    psVar4 = (short *)D2Lang_10003(0x2b48);
    psVar6 = psVar4;
    do {
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar1 != 0);
    psVar8 = param_1 + -1;
    do {
      psVar7 = psVar8 + 1;
      psVar8 = psVar8 + 1;
    } while (*psVar7 != 0);
    psVar7 = psVar4;
    for (uVar3 = (uint)((int)psVar6 - (int)psVar4) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(uint32_t *)psVar8 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      psVar8 = psVar8 + 2;
    }
    for (uVar3 = (int)psVar6 - (int)psVar4 & 3; psVar6 = psVar2, uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)psVar8 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      psVar8 = (short *)((int)psVar8 + 1);
    }
    do {
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar1 != 0);
    uVar3 = (int)psVar6 - (int)psVar2;
    psVar6 = param_1 + -1;
    do {
      psVar4 = psVar6 + 1;
      psVar6 = psVar6 + 1;
    } while (*psVar4 != 0);
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(uint32_t *)psVar6 = *(uint32_t *)psVar2;
      psVar2 = psVar2 + 2;
      psVar6 = psVar6 + 2;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)psVar6 = (char)*psVar2;
      psVar2 = (short *)((int)psVar2 + 1);
      psVar6 = (short *)((int)psVar6 + 1);
    }
    return;
  }
  Fog_10024("","D2CLIENT_DrawHoverItemSocketFillers",0x2e6);
                    /* WARNING: Subroutine does not return */
  _exit(-1);
}


// 0x1021f050  (ghidra: FUN_1021f050)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall client_DrawHoverItem_1021f050(int param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  short *psVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  uint32_t *puVar11;
  short local_14 [6];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  piVar4 = *(int **)(param_1 + 0x60);
  if (piVar4 != (int *)0x0) {
    local_14[4] = 0;
    local_14[5] = 0;
    local_14[0] = 0;
    local_14[1] = 0;
    local_14[2] = 0;
    local_14[3] = 0;
    bVar2 = false;
    psVar3 = (short *)D2Lang_10003(0xf9e);
    piVar4 = (int *)D2Common_10460(piVar4);
    if (piVar4 != (int *)0x0) {
      do {
        uVar5 = D2Common_11147(piVar4);
        if (uVar5 == 0) break;
        uVar6 = D2Common_10744(uVar5,0x4a);
        if (uVar6 != 0) {
          iVar7 = D2Common_10695(*(uint *)(uVar5 + 4));
          if ((*(int *)(iVar7 + 0xf0) != 0) &&
             (iVar7 = D2Common_10806(*(int *)(iVar7 + 0xf0)), iVar7 != 0)) {
            if (!bVar2) {
              bVar2 = true;
              psVar8 = (short *)D2Lang_10003(0x501a);
              psVar9 = psVar8;
              do {
                sVar1 = *psVar9;
                psVar9 = psVar9 + 1;
              } while (sVar1 != 0);
              puVar11 = (uint32_t *)(param_2 + -2);
              do {
                psVar10 = (short *)((int)puVar11 + 2);
                puVar11 = (uint32_t *)((int)puVar11 + 2);
              } while (*psVar10 != 0);
              psVar10 = psVar8;
              for (uVar5 = (uint)((int)psVar9 - (int)psVar8) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                *puVar11 = *(uint32_t *)psVar10;
                psVar10 = psVar10 + 2;
                puVar11 = puVar11 + 1;
              }
              for (uVar5 = (int)psVar9 - (int)psVar8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(char *)puVar11 = (char)*psVar10;
                psVar10 = (short *)((int)psVar10 + 1);
                puVar11 = (uint32_t *)((int)puVar11 + 1);
              }
            }
            client_DrawHoverItem_10225420(local_14,&DAT_10377630);
            psVar9 = local_14;
            do {
              sVar1 = *psVar9;
              psVar9 = psVar9 + 1;
            } while (sVar1 != 0);
            uVar5 = (int)psVar9 - (int)local_14;
            puVar11 = (uint32_t *)(param_2 + -2);
            do {
              psVar9 = (short *)((int)puVar11 + 2);
              puVar11 = (uint32_t *)((int)puVar11 + 2);
            } while (*psVar9 != 0);
            psVar9 = local_14;
            for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar11 = *(uint32_t *)psVar9;
              psVar9 = psVar9 + 2;
              puVar11 = puVar11 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(char *)puVar11 = (char)*psVar9;
              psVar9 = (short *)((int)psVar9 + 1);
              puVar11 = (uint32_t *)((int)puVar11 + 1);
            }
          }
        }
        piVar4 = (int *)D2Common_10464(piVar4);
      } while (piVar4 != (int *)0x0);
      if (bVar2) {
        client_DrawHoverItem_10225420(local_14,&DAT_10377630);
        psVar9 = local_14;
        do {
          sVar1 = *psVar9;
          psVar9 = psVar9 + 1;
        } while (sVar1 != 0);
        uVar5 = (int)psVar9 - (int)local_14;
        puVar11 = (uint32_t *)(param_2 + -2);
        do {
          psVar9 = (short *)((int)puVar11 + 2);
          puVar11 = (uint32_t *)((int)puVar11 + 2);
        } while (*psVar9 != 0);
        psVar9 = local_14;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar11 = *(uint32_t *)psVar9;
          psVar9 = psVar9 + 2;
          puVar11 = puVar11 + 1;
        }
        for (uVar5 = uVar5 & 3; psVar8 = psVar3, uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar11 = (char)*psVar9;
          psVar9 = (short *)((int)psVar9 + 1);
          puVar11 = (uint32_t *)((int)puVar11 + 1);
        }
        do {
          sVar1 = *psVar8;
          psVar8 = psVar8 + 1;
        } while (sVar1 != 0);
        uVar5 = (int)psVar8 - (int)psVar3;
        puVar11 = (uint32_t *)(param_2 + -2);
        do {
          psVar9 = (short *)((int)puVar11 + 2);
          puVar11 = (uint32_t *)((int)puVar11 + 2);
        } while (*psVar9 != 0);
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar11 = *(uint32_t *)psVar3;
          psVar3 = psVar3 + 2;
          puVar11 = puVar11 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar11 = (char)*psVar3;
          psVar3 = (short *)((int)psVar3 + 1);
          puVar11 = (uint32_t *)((int)puVar11 + 1);
        }
      }
    }
  }
  return;
}


// 0x1021f220  (ghidra: FUN_1021f220)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall client_DrawHoverItem_1021f220(uint16_t *param_1,int param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  uint uVar6;
  short *psVar7;
  uint uVar8;
  uint32_t *puVar9;
  short local_1c [10];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_1c[8] = 0;
  local_1c[9] = 0;
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_1c[3] = 0;
  local_1c[4] = 0;
  local_1c[5] = 0;
  local_1c[6] = 0;
  local_1c[7] = 0;
  psVar2 = (short *)D2Lang_10003(0xf9b);
  psVar3 = (short *)D2Lang_10003(0xf9e);
  if (0 < (int)((uint)*(ushort *)(param_2 + 0x10c) + param_3)) {
    psVar4 = (short *)D2Lang_10003(0xd83);
    psVar5 = psVar4;
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
      *(short *)((int)param_1 + (-2 - (int)psVar4) + (int)psVar5) = sVar1;
      psVar7 = psVar2;
    } while (sVar1 != 0);
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar8 = (int)psVar7 - (int)psVar2;
    puVar9 = (uint32_t *)(param_1 + -1);
    do {
      psVar5 = (short *)((int)puVar9 + 2);
      puVar9 = (uint32_t *)((int)puVar9 + 2);
    } while (*psVar5 != 0);
    for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *(uint32_t *)psVar2;
      psVar2 = psVar2 + 2;
      puVar9 = puVar9 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar9 = (char)*psVar2;
      psVar2 = (short *)((int)psVar2 + 1);
      puVar9 = (uint32_t *)((int)puVar9 + 1);
    }
    sub_1021cbb0(local_1c,&DAT_103775a4);
    psVar2 = local_1c;
    do {
      sVar1 = *psVar2;
      psVar2 = psVar2 + 1;
    } while (sVar1 != 0);
    uVar8 = (int)psVar2 - (int)local_1c;
    puVar9 = (uint32_t *)(param_1 + -1);
    do {
      psVar2 = (short *)((int)puVar9 + 2);
      puVar9 = (uint32_t *)((int)puVar9 + 2);
    } while (*psVar2 != 0);
    psVar2 = local_1c;
    for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *(uint32_t *)psVar2;
      psVar2 = psVar2 + 2;
      puVar9 = puVar9 + 1;
    }
    for (uVar8 = uVar8 & 3; psVar5 = psVar3, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar9 = (char)*psVar2;
      psVar2 = (short *)((int)psVar2 + 1);
      puVar9 = (uint32_t *)((int)puVar9 + 1);
    }
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar1 != 0);
    uVar8 = (int)psVar5 - (int)psVar3;
    puVar9 = (uint32_t *)(param_1 + -1);
    do {
      psVar2 = (short *)((int)puVar9 + 2);
      puVar9 = (uint32_t *)((int)puVar9 + 2);
    } while (*psVar2 != 0);
    for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *(uint32_t *)psVar3;
      psVar3 = psVar3 + 2;
      puVar9 = puVar9 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar9 = (char)*psVar3;
      psVar3 = (short *)((int)psVar3 + 1);
      puVar9 = (uint32_t *)((int)puVar9 + 1);
    }
    return;
  }
  *param_1 = 0;
  return;
}


// 0x1021f370  (ghidra: FUN_1021f370)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall client_DrawHoverItem_1021f370(uint16_t *param_1,int param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  uint uVar6;
  short *psVar7;
  uint uVar8;
  uint32_t *puVar9;
  short local_1c [10];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_1c[8] = 0;
  local_1c[9] = 0;
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_1c[3] = 0;
  local_1c[4] = 0;
  local_1c[5] = 0;
  local_1c[6] = 0;
  local_1c[7] = 0;
  psVar2 = (short *)D2Lang_10003(0xf9b);
  psVar3 = (short *)D2Lang_10003(0xf9e);
  if (0 < (int)((uint)*(ushort *)(param_2 + 0x10a) + param_3)) {
    psVar4 = (short *)D2Lang_10003(0xd82);
    psVar5 = psVar4;
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
      *(short *)((int)param_1 + (-2 - (int)psVar4) + (int)psVar5) = sVar1;
      psVar7 = psVar2;
    } while (sVar1 != 0);
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar8 = (int)psVar7 - (int)psVar2;
    puVar9 = (uint32_t *)(param_1 + -1);
    do {
      psVar5 = (short *)((int)puVar9 + 2);
      puVar9 = (uint32_t *)((int)puVar9 + 2);
    } while (*psVar5 != 0);
    for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *(uint32_t *)psVar2;
      psVar2 = psVar2 + 2;
      puVar9 = puVar9 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar9 = (char)*psVar2;
      psVar2 = (short *)((int)psVar2 + 1);
      puVar9 = (uint32_t *)((int)puVar9 + 1);
    }
    sub_1021cbb0(local_1c,&DAT_103775a4);
    psVar2 = local_1c;
    do {
      sVar1 = *psVar2;
      psVar2 = psVar2 + 1;
    } while (sVar1 != 0);
    uVar8 = (int)psVar2 - (int)local_1c;
    puVar9 = (uint32_t *)(param_1 + -1);
    do {
      psVar2 = (short *)((int)puVar9 + 2);
      puVar9 = (uint32_t *)((int)puVar9 + 2);
    } while (*psVar2 != 0);
    psVar2 = local_1c;
    for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *(uint32_t *)psVar2;
      psVar2 = psVar2 + 2;
      puVar9 = puVar9 + 1;
    }
    for (uVar8 = uVar8 & 3; psVar5 = psVar3, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar9 = (char)*psVar2;
      psVar2 = (short *)((int)psVar2 + 1);
      puVar9 = (uint32_t *)((int)puVar9 + 1);
    }
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar1 != 0);
    uVar8 = (int)psVar5 - (int)psVar3;
    puVar9 = (uint32_t *)(param_1 + -1);
    do {
      psVar2 = (short *)((int)puVar9 + 2);
      puVar9 = (uint32_t *)((int)puVar9 + 2);
    } while (*psVar2 != 0);
    for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *(uint32_t *)psVar3;
      psVar3 = psVar3 + 2;
      puVar9 = puVar9 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar9 = (char)*psVar3;
      psVar3 = (short *)((int)psVar3 + 1);
      puVar9 = (uint32_t *)((int)puVar9 + 1);
    }
    return;
  }
  *param_1 = 0;
  return;
}


// 0x1021f4c0  (ghidra: FUN_1021f4c0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall client_DrawHoverItem_1021f4c0(int param_1,int reg_EDX)

{
  short sVar1;
  int *reg_ECX;
  short *psVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  uint uVar8;
  short *psVar9;
  uint32_t *puVar10;
  short local_1c [10];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_1c[8] = 0;
  local_1c[9] = 0;
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_1c[3] = 0;
  local_1c[4] = 0;
  local_1c[5] = 0;
  local_1c[6] = 0;
  local_1c[7] = 0;
  psVar2 = (short *)D2Lang_10003(0xf9b);
  psVar3 = (short *)D2Lang_10003(0xf9e);
  uVar4 = D2Common_10744(reg_EDX,0x33);
  reg_ECX = (int *)*p_D2Client_DAT_6fbcbbfc;
  if (uVar4 == 0) {
    uVar4 = D2Common_10744(reg_EDX,0xf);
    if (uVar4 == 0) {
      return;
    }
    uVar4 = 0x5516;
  }
  else {
    iVar5 = D2Common_10630((uint)reg_ECX,0x75);
    if ((iVar5 != 0) && (uVar4 = D2Common_10494_10277e30(reg_ECX,0x65), uVar4 != 0)) {
      uVar4 = D2Common_10306((int)reg_ECX,iVar5,1);
      D2Common_10567(reg_ECX,0x75,uVar4,1);
      D2Common_10297(reg_ECX,0x75,uVar4,1);
    }
    uVar4 = 0xd8c;
  }
  psVar6 = (short *)D2Lang_10003(uVar4);
  iVar5 = param_1 - (int)psVar6;
  do {
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
    *(short *)(iVar5 + -2 + (int)psVar6) = sVar1;
    psVar7 = psVar2;
  } while (sVar1 != 0);
  do {
    sVar1 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar1 != 0);
  uVar4 = (int)psVar7 - (int)psVar2;
  puVar10 = (uint32_t *)(param_1 + -2);
  do {
    psVar6 = (short *)((int)puVar10 + 2);
    puVar10 = (uint32_t *)((int)puVar10 + 2);
  } while (*psVar6 != 0);
  psVar6 = psVar2;
  for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar10 = *(uint32_t *)psVar6;
    psVar6 = psVar6 + 2;
    puVar10 = puVar10 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar10 = (char)*psVar6;
    psVar6 = (short *)((int)psVar6 + 1);
    puVar10 = (uint32_t *)((int)puVar10 + 1);
  }
  sub_1021cbb0(local_1c,&DAT_103775a4);
  psVar6 = local_1c;
  do {
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
  } while (sVar1 != 0);
  uVar4 = (int)psVar6 - (int)local_1c;
  puVar10 = (uint32_t *)(param_1 + -2);
  do {
    psVar6 = (short *)((int)puVar10 + 2);
    puVar10 = (uint32_t *)((int)puVar10 + 2);
  } while (*psVar6 != 0);
  psVar6 = local_1c;
  for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar10 = *(uint32_t *)psVar6;
    psVar6 = psVar6 + 2;
    puVar10 = puVar10 + 1;
  }
  for (uVar4 = uVar4 & 3; psVar7 = psVar2, uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar10 = (char)*psVar6;
    psVar6 = (short *)((int)psVar6 + 1);
    puVar10 = (uint32_t *)((int)puVar10 + 1);
  }
  do {
    sVar1 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar1 != 0);
  uVar4 = (int)psVar7 - (int)psVar2;
  puVar10 = (uint32_t *)(param_1 + -2);
  do {
    psVar6 = (short *)((int)puVar10 + 2);
    puVar10 = (uint32_t *)((int)puVar10 + 2);
  } while (*psVar6 != 0);
  psVar6 = psVar2;
  for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar10 = *(uint32_t *)psVar6;
    psVar6 = psVar6 + 2;
    puVar10 = puVar10 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar10 = (char)*psVar6;
    psVar6 = (short *)((int)psVar6 + 1);
    puVar10 = (uint32_t *)((int)puVar10 + 1);
  }
  psVar7 = (short *)D2Lang_10003(0xd88);
  psVar6 = psVar7;
  do {
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
  } while (sVar1 != 0);
  puVar10 = (uint32_t *)(param_1 + -2);
  do {
    psVar9 = (short *)((int)puVar10 + 2);
    puVar10 = (uint32_t *)((int)puVar10 + 2);
  } while (*psVar9 != 0);
  psVar9 = psVar7;
  for (uVar4 = (uint)((int)psVar6 - (int)psVar7) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar10 = *(uint32_t *)psVar9;
    psVar9 = psVar9 + 2;
    puVar10 = puVar10 + 1;
  }
  for (uVar4 = (int)psVar6 - (int)psVar7 & 3; psVar6 = psVar2, uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar10 = (char)*psVar9;
    psVar9 = (short *)((int)psVar9 + 1);
    puVar10 = (uint32_t *)((int)puVar10 + 1);
  }
  do {
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
  } while (sVar1 != 0);
  uVar4 = (int)psVar6 - (int)psVar2;
  puVar10 = (uint32_t *)(param_1 + -2);
  do {
    psVar6 = (short *)((int)puVar10 + 2);
    puVar10 = (uint32_t *)((int)puVar10 + 2);
  } while (*psVar6 != 0);
  for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar10 = *(uint32_t *)psVar2;
    psVar2 = psVar2 + 2;
    puVar10 = puVar10 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar10 = (char)*psVar2;
    psVar2 = (short *)((int)psVar2 + 1);
    puVar10 = (uint32_t *)((int)puVar10 + 1);
  }
  sub_1021cbb0(local_1c,&DAT_103775a4);
  psVar2 = local_1c;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  uVar4 = (int)psVar2 - (int)local_1c;
  puVar10 = (uint32_t *)(param_1 + -2);
  do {
    psVar2 = (short *)((int)puVar10 + 2);
    puVar10 = (uint32_t *)((int)puVar10 + 2);
  } while (*psVar2 != 0);
  psVar2 = local_1c;
  for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar10 = *(uint32_t *)psVar2;
    psVar2 = psVar2 + 2;
    puVar10 = puVar10 + 1;
  }
  for (uVar4 = uVar4 & 3; psVar6 = psVar3, uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar10 = (char)*psVar2;
    psVar2 = (short *)((int)psVar2 + 1);
    puVar10 = (uint32_t *)((int)puVar10 + 1);
  }
  do {
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
  } while (sVar1 != 0);
  uVar4 = (int)psVar6 - (int)psVar3;
  puVar10 = (uint32_t *)(param_1 + -2);
  do {
    psVar2 = (short *)((int)puVar10 + 2);
    puVar10 = (uint32_t *)((int)puVar10 + 2);
  } while (*psVar2 != 0);
  for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar10 = *(uint32_t *)psVar3;
    psVar3 = psVar3 + 2;
    puVar10 = puVar10 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar10 = (char)*psVar3;
    psVar3 = (short *)((int)psVar3 + 1);
    puVar10 = (uint32_t *)((int)puVar10 + 1);
  }
  return;
}


// 0x1021f770  (ghidra: FUN_1021f770)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall client_DrawHoverItem_1021f770(int param_1,int param_2,int param_3)

{
  short sVar1;
  int *reg_ECX;
  int iVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  short *psVar6;
  uint uVar7;
  uint32_t *puVar8;
  int local_24c;
  short local_248 [256];
  short local_48 [32];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_24c = D2Common_10973_10273ce0(param_1,0x14,0);
  reg_ECX = (int *)*p_D2Client_DAT_6fbcbbfc;
  iVar2 = local_24c;
  if (reg_ECX != (int *)0x0) {
    uVar4 = reg_ECX[1];
    if ((int)uVar4 < 0) {
      return;
    }
    if (*(uint *)(*p_D2Common_DAT_6fde9e1c_10279cd0 + 0xbc8) <= uVar4) {
      return;
    }
    iVar2 = uVar4 * 0xc4 + *(int *)(*p_D2Common_DAT_6fde9e1c_10279cd0 + 0xbc4);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = local_24c + (uint)*(byte *)(iVar2 + 0x49);
    iVar3 = D2Common_10630((uint)reg_ECX,0x75);
    if ((iVar3 != 0) && (uVar4 = D2Common_10494_10277e30(reg_ECX,0x65), uVar4 != 0)) {
      uVar4 = D2Common_10306((int)reg_ECX,iVar3,1);
      iVar3 = D2Common_10832(uVar4,0x75);
      iVar2 = iVar2 + iVar3;
      local_24c = local_24c + iVar3;
    }
    if (0x4b < iVar2) goto LAB_1021f835;
  }
  if (iVar2 == 0) {
    return;
  }
LAB_1021f835:
  memset(local_48,0,0x40);
  memset(local_248,0,0x200);
  client_DrawHoverItem_10225440(local_48,L"%d%%\n");
  if ((int)(uint)*(byte *)(param_3 + 0x111) < local_24c) {
    sub_102f0c70(local_48,3);
  }
  psVar5 = (short *)D2Lang_10003(0x2b0a);
  psVar6 = psVar5;
  do {
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
    *(short *)((int)local_248 + (-2 - (int)psVar5) + (int)psVar6) = sVar1;
  } while (sVar1 != 0);
  sub_102f0c70(local_248,0);
  psVar6 = local_248;
  iVar2 = param_2 - (int)psVar6;
  do {
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
    *(short *)(iVar2 + -2 + (int)psVar6) = sVar1;
  } while (sVar1 != 0);
  psVar6 = local_48;
  do {
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
  } while (sVar1 != 0);
  uVar4 = (int)psVar6 - (int)local_48;
  puVar8 = (uint32_t *)(param_2 + -2);
  do {
    psVar6 = (short *)((int)puVar8 + 2);
    puVar8 = (uint32_t *)((int)puVar8 + 2);
  } while (*psVar6 != 0);
  psVar6 = local_48;
  for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar8 = *(uint32_t *)psVar6;
    psVar6 = psVar6 + 2;
    puVar8 = puVar8 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar8 = (char)*psVar6;
    psVar6 = (short *)((int)psVar6 + 1);
    puVar8 = (uint32_t *)((int)puVar8 + 1);
  }
  return;
}


// 0x1021f930  (ghidra: FUN_1021f930)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall client_DrawHoverItem_1021f930(void *this,int param_2,int *reg_EDX)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  void *pvVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  uint uVar10;
  uint32_t *puVar11;
  int local_2c;
  uint local_20;
  short local_1c [10];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if (this == (void *)0x0) {
    return;
  }
  local_1c[8] = 0;
  local_1c[9] = 0;
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_1c[3] = 0;
  local_1c[4] = 0;
  local_1c[5] = 0;
  local_1c[6] = 0;
  local_1c[7] = 0;
  psVar2 = (short *)D2Lang_10003(0xf9b);
  psVar3 = (short *)D2Lang_10003(0xf9e);
  local_20 = 0;
  pvVar4 = (void *)D2Common_11160(*p_D2Client_DAT_6fbcbc38,&local_20);
  if ((pvVar4 == (void *)0x0) || (this == pvVar4)) {
    D2Common_10164((int)this,reg_EDX,1);
    local_2c = D2Common_10935((int)reg_EDX);
    if (pvVar4 == (void *)0x0) {
      D2Common_11127((uint)this,(int)reg_EDX);
      goto LAB_1021f9c9;
    }
  }
  else {
    D2Common_10164((int)pvVar4,reg_EDX,1);
    local_2c = D2Common_10935((int)reg_EDX);
    this = pvVar4;
  }
  D2Common_10164((int)this,reg_EDX,local_20);
LAB_1021f9c9:
  iVar5 = D2Common_10587((int)reg_EDX,0x1f,0);
  psVar6 = (short *)D2Lang_10003(0xd85);
  iVar8 = param_2 - (int)psVar6;
  do {
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
    *(short *)(iVar8 + -2 + (int)psVar6) = sVar1;
    psVar9 = psVar2;
  } while (sVar1 != 0);
  do {
    sVar1 = *psVar9;
    psVar9 = psVar9 + 1;
  } while (sVar1 != 0);
  uVar10 = (int)psVar9 - (int)psVar2;
  puVar11 = (uint32_t *)(param_2 + -2);
  do {
    psVar6 = (short *)((int)puVar11 + 2);
    puVar11 = (uint32_t *)((int)puVar11 + 2);
  } while (*psVar6 != 0);
  for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar11 = *(uint32_t *)psVar2;
    psVar2 = psVar2 + 2;
    puVar11 = puVar11 + 1;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(char *)puVar11 = (char)*psVar2;
    psVar2 = (short *)((int)psVar2 + 1);
    puVar11 = (uint32_t *)((int)puVar11 + 1);
  }
  sub_1021cbb0(local_1c,&DAT_103775a4);
  if (iVar5 != local_2c) {
    sub_102f0c70(local_1c,3);
  }
  psVar2 = local_1c;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  uVar10 = (int)psVar2 - (int)local_1c;
  puVar11 = (uint32_t *)(param_2 + -2);
  do {
    psVar2 = (short *)((int)puVar11 + 2);
    puVar11 = (uint32_t *)((int)puVar11 + 2);
  } while (*psVar2 != 0);
  psVar2 = local_1c;
  for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar11 = *(uint32_t *)psVar2;
    psVar2 = psVar2 + 2;
    puVar11 = puVar11 + 1;
  }
  for (uVar10 = uVar10 & 3; psVar6 = psVar3, uVar10 != 0; uVar10 = uVar10 - 1) {
    *(char *)puVar11 = (char)*psVar2;
    psVar2 = (short *)((int)psVar2 + 1);
    puVar11 = (uint32_t *)((int)puVar11 + 1);
  }
  do {
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
  } while (sVar1 != 0);
  uVar10 = (int)psVar6 - (int)psVar3;
  puVar11 = (uint32_t *)(param_2 + -2);
  do {
    psVar2 = (short *)((int)puVar11 + 2);
    puVar11 = (uint32_t *)((int)puVar11 + 2);
  } while (*psVar2 != 0);
  for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar11 = *(uint32_t *)psVar3;
    psVar3 = psVar3 + 2;
    puVar11 = puVar11 + 1;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(char *)puVar11 = (char)*psVar3;
    psVar3 = (short *)((int)psVar3 + 1);
    puVar11 = (uint32_t *)((int)puVar11 + 1);
  }
  return;
}


// 0x1021fb00  (ghidra: FUN_1021fb00)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall client_DrawHoverItem_1021fb00(int param_1,int param_2,int param_3)

{
  short sVar1;
  int *piVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  uint32_t uVar6;
  int iVar7;
  uint16_t extraout_var;
  uint16_t extraout_var_00;
  uint uVar8;
  uint uVar9;
  short *psVar10;
  uint32_t *puVar11;
  short local_420 [512];
  short local_20 [10];
  uint local_c;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_c = DAT_1039800c ^ (uint)&stack0xfffffffc;
  piVar2 = (int *)*p_D2Client_DAT_6fbcbbfc;
  if ((((param_3 != 0) && (param_1 != 0)) && (*(short *)(param_1 + 0xb4) != 0)) &&
     ((piVar2 != (int *)0x0 && (*(short *)(param_1 + 0xb6) != 0x1506)))) {
    psVar3 = (short *)D2Lang_10003(0xf9b);
    psVar4 = (short *)D2Lang_10003(0xf9e);
    iVar7 = *(ushort *)(param_1 + 0xb4) - 1;
    switch(iVar7) {
    case 0:
      psVar3 = (short *)D2Lang_10003(CONCAT22((short)((uint)iVar7 >> 0x10),
                                              *(uint16_t *)(param_1 + 0xb6)));
      iVar7 = param_2 - (int)psVar3;
      do {
        sVar1 = *psVar3;
        psVar3 = psVar3 + 1;
        *(short *)(iVar7 + -2 + (int)psVar3) = sVar1;
        psVar5 = psVar4;
      } while (sVar1 != 0);
      do {
        sVar1 = *psVar5;
        psVar5 = psVar5 + 1;
      } while (sVar1 != 0);
      uVar9 = (int)psVar5 - (int)psVar4;
      puVar11 = (uint32_t *)(param_2 + -2);
      do {
        psVar3 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar3 != 0);
      break;
    case 1:
      uVar9 = D2Common_10428((uint)piVar2,param_3,*(uint *)(param_1 + 0xa4));
      switch(*(uint16_t *)(param_1 + 0x9e)) {
      case 6:
      case 0x4a:
        D2Common_10540(piVar2,uVar9);
        break;
      case 8:
      case 0x1a:
        D2Common_10393(piVar2,uVar9);
      }
      local_20[0] = 0;
      local_20[1] = 0;
      local_20[2] = 0;
      local_20[3] = 0;
      local_20[4] = 0;
      local_20[5] = 0;
      local_20[6] = 0;
      local_20[7] = 0;
      local_20[8] = 0;
      local_20[9] = 0;
      psVar5 = (short *)D2Lang_10003(CONCAT22((short)((uint)param_1 >> 0x10),
                                              *(uint16_t *)(param_1 + 0xb6)));
      iVar7 = param_2 - (int)psVar5;
      do {
        sVar1 = *psVar5;
        psVar5 = psVar5 + 1;
        *(short *)(iVar7 + -2 + (int)psVar5) = sVar1;
      } while (sVar1 != 0);
      sub_1021cbb0(local_20,&DAT_103775a4);
      psVar5 = psVar3;
      do {
        sVar1 = *psVar5;
        psVar5 = psVar5 + 1;
      } while (sVar1 != 0);
      puVar11 = (uint32_t *)(param_2 + -2);
      do {
        psVar10 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar10 != 0);
      psVar10 = psVar3;
      for (uVar9 = (uint)((int)psVar5 - (int)psVar3) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar11 = *(uint32_t *)psVar10;
        psVar10 = psVar10 + 2;
        puVar11 = puVar11 + 1;
      }
      for (uVar9 = (int)psVar5 - (int)psVar3 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(char *)puVar11 = (char)*psVar10;
        psVar10 = (short *)((int)psVar10 + 1);
        puVar11 = (uint32_t *)((int)puVar11 + 1);
      }
      psVar3 = local_20;
      do {
        sVar1 = *psVar3;
        psVar3 = psVar3 + 1;
      } while (sVar1 != 0);
      uVar9 = (int)psVar3 - (int)local_20;
      puVar11 = (uint32_t *)(param_2 + -2);
      do {
        psVar3 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar3 != 0);
      psVar3 = local_20;
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = *(uint32_t *)psVar3;
        psVar3 = psVar3 + 2;
        puVar11 = puVar11 + 1;
      }
      for (uVar9 = uVar9 & 3; psVar5 = psVar4, uVar9 != 0; uVar9 = uVar9 - 1) {
        *(char *)puVar11 = (char)*psVar3;
        psVar3 = (short *)((int)psVar3 + 1);
        puVar11 = (uint32_t *)((int)puVar11 + 1);
      }
      do {
        sVar1 = *psVar5;
        psVar5 = psVar5 + 1;
      } while (sVar1 != 0);
      uVar9 = (int)psVar5 - (int)psVar4;
      puVar11 = (uint32_t *)(param_2 + -2);
      do {
        psVar3 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar3 != 0);
      break;
    case 2:
      D2Common_10428((uint)piVar2,param_3,*(uint *)(param_1 + 0xa4));
      local_20[0] = 0;
      local_20[1] = 0;
      local_20[2] = 0;
      local_20[3] = 0;
      local_20[4] = 0;
      local_20[5] = 0;
      local_20[6] = 0;
      local_20[7] = 0;
      local_20[8] = 0;
      local_20[9] = 0;
      psVar5 = (short *)D2Lang_10003(CONCAT22(extraout_var,*(uint16_t *)(param_1 + 0xb6)));
      iVar7 = param_2 - (int)psVar5;
      do {
        sVar1 = *psVar5;
        psVar5 = psVar5 + 1;
        *(short *)(iVar7 + -2 + (int)psVar5) = sVar1;
      } while (sVar1 != 0);
      sub_1021cbb0(local_20,&DAT_103775a4);
      psVar5 = psVar3;
      do {
        sVar1 = *psVar5;
        psVar5 = psVar5 + 1;
      } while (sVar1 != 0);
      puVar11 = (uint32_t *)(param_2 + -2);
      do {
        psVar10 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar10 != 0);
      psVar10 = psVar3;
      for (uVar9 = (uint)((int)psVar5 - (int)psVar3) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar11 = *(uint32_t *)psVar10;
        psVar10 = psVar10 + 2;
        puVar11 = puVar11 + 1;
      }
      for (uVar9 = (int)psVar5 - (int)psVar3 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(char *)puVar11 = (char)*psVar10;
        psVar10 = (short *)((int)psVar10 + 1);
        puVar11 = (uint32_t *)((int)puVar11 + 1);
      }
      psVar3 = local_20;
      do {
        sVar1 = *psVar3;
        psVar3 = psVar3 + 1;
      } while (sVar1 != 0);
      uVar9 = (int)psVar3 - (int)local_20;
      puVar11 = (uint32_t *)(param_2 + -2);
      do {
        psVar3 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar3 != 0);
      psVar3 = local_20;
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = *(uint32_t *)psVar3;
        psVar3 = psVar3 + 2;
        puVar11 = puVar11 + 1;
      }
      for (uVar9 = uVar9 & 3; psVar5 = psVar4, uVar9 != 0; uVar9 = uVar9 - 1) {
        *(char *)puVar11 = (char)*psVar3;
        psVar3 = (short *)((int)psVar3 + 1);
        puVar11 = (uint32_t *)((int)puVar11 + 1);
      }
      do {
        sVar1 = *psVar5;
        psVar5 = psVar5 + 1;
      } while (sVar1 != 0);
      uVar9 = (int)psVar5 - (int)psVar4;
      puVar11 = (uint32_t *)(param_2 + -2);
      do {
        psVar3 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar3 != 0);
      break;
    case 3:
      D2Common_10428((uint)piVar2,param_3,*(uint *)(param_1 + 0xa4));
      memset(local_420,0,0x400);
      uVar6 = D2Lang_10003(CONCAT22(extraout_var_00,*(uint16_t *)(param_1 + 0xb6)));
      sub_10219580(local_420,0x200,uVar6);
      psVar3 = local_420;
      do {
        sVar1 = *psVar3;
        psVar3 = psVar3 + 1;
      } while (sVar1 != 0);
      uVar9 = (int)psVar3 - (int)local_420;
      puVar11 = (uint32_t *)(param_2 + -2);
      do {
        psVar3 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar3 != 0);
      psVar3 = local_420;
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = *(uint32_t *)psVar3;
        psVar3 = psVar3 + 2;
        puVar11 = puVar11 + 1;
      }
      for (uVar9 = uVar9 & 3; psVar5 = psVar4, uVar9 != 0; uVar9 = uVar9 - 1) {
        *(char *)puVar11 = (char)*psVar3;
        psVar3 = (short *)((int)psVar3 + 1);
        puVar11 = (uint32_t *)((int)puVar11 + 1);
      }
      do {
        sVar1 = *psVar5;
        psVar5 = psVar5 + 1;
      } while (sVar1 != 0);
      uVar9 = (int)psVar5 - (int)psVar4;
      puVar11 = (uint32_t *)(param_2 + -2);
      do {
        psVar3 = (short *)((int)puVar11 + 2);
        puVar11 = (uint32_t *)((int)puVar11 + 2);
      } while (*psVar3 != 0);
      break;
    default:
      goto switchD_1021fba1_default;
    }
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar11 = *(uint32_t *)psVar4;
      psVar4 = psVar4 + 2;
      puVar11 = puVar11 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(char *)puVar11 = (char)*psVar4;
      psVar4 = (short *)((int)psVar4 + 1);
      puVar11 = (uint32_t *)((int)puVar11 + 1);
    }
  }
switchD_1021fba1_default:
  return;
}


// 0x1021ffc0  (ghidra: FUN_1021ffc0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void client_DrawHoverItem_Wraps_D2Client_UI_inv_1021ffc0(void *reg_ECX,int *reg_EDX)

{
  uint32_t uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint8_t local_44 [28];
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uVar1 = D2Lang_10003(0xf9e);
  sub_10219580(&local_28,0x10,uVar1);
  uVar2 = D2Common_10202(reg_EDX,0x400000,0x6c1,"..\\Source\\D2Client\\UI\\inv.cpp");
  if (uVar2 != 0) {
    pvVar3 = (void *)D2Lang_10003(0x58d9);
    Unicode_strcat(reg_ECX,pvVar3);
  }
  uVar4 = D2Common_10202(reg_EDX,0x800,0x6c9,"..\\Source\\D2Client\\UI\\inv.cpp");
  if (uVar4 == 0) {
    if (uVar2 == 0) {
      return;
    }
  }
  else {
    if (uVar2 != 0) {
      Unicode_strcat(reg_ECX,&DAT_10377668);
    }
    D2Lang_10003(0xf9a);
    pvVar3 = (void *)D2Lang_10003(0xd7d);
    Unicode_strcat(reg_ECX,pvVar3);
    D2Common_10366(reg_EDX);
    iVar5 = D2Common_10973((int)reg_EDX,0x168,0);
    if (iVar5 == 0x20) {
      client_DrawHoverItem_10225460(local_44,L" (%i)%s1*%s3");
      Unicode_strcat(reg_ECX,local_44);
    }
    else {
      client_DrawHoverItem_10225460(local_44,L" (%i)");
      Unicode_strcat(reg_ECX,local_44);
    }
  }
  Unicode_strcat(reg_ECX,&local_28);
  return;
}


// 0x102200f0  (ghidra: FUN_102200f0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void client_DrawHoverItem_Wraps_D2Client_UI_ui_102200f0(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  short *psVar5;
  uint16_t extraout_var;
  uint unused_ECX;
  uint uVar6;
  uint reg_EDX;
  short *psVar7;
  uint uVar8;
  short *psVar9;
  uint32_t *puVar10;
  ulonglong uVar11;
  short local_21c;
  uint8_t local_21a [252];
  uint32_t uStack_11e;
  uint8_t local_11a [254];
  short local_1c [10];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  *p_D2Client_DAT_6fb8bc58 = *p_D2Client_DAT_6fb8bc58 - 0x10;
  if (param_1 != 0) {
    iVar2 = D2Common_10695(*(uint *)(param_1 + 4));
    psVar3 = (short *)D2Lang_10003(CONCAT22(extraout_var,*(uint16_t *)(iVar2 + 0xf4)));
    uVar8 = 0;
    uVar11 = D2Common_10106(unused_ECX,reg_EDX,(int *)param_1);
    switch((int)uVar11) {
    case 4:
      uVar8 = 3;
      break;
    case 5:
      uVar8 = 2;
      break;
    case 6:
      uVar8 = 9;
      break;
    case 7:
      uVar8 = 4;
      break;
    case 8:
      uVar8 = 8;
      break;
    case 9:
      uVar8 = 10;
      break;
    default:
      uVar4 = D2Common_10202((int *)param_1,0x800,0x5aa,"..\\Source\\D2Client\\UI\\ui.cpp");
      if ((uVar4 != 0) ||
         (uVar4 = D2Common_10202((int *)param_1,0x400000,0x5ae,"..\\Source\\D2Client\\UI\\ui.cpp"),
         uVar4 != 0)) {
        uVar8 = 5;
      }
    }
    if ((*(char *)(iVar2 + 0x12a) != '\0') && (*(int *)(iVar2 + 0x80) != 0x2067656c)) {
      uVar8 = 4;
    }
    iVar2 = *(int *)(iVar2 + 0x80);
    if (((((iVar2 == 0x20686563) || (iVar2 == 0x20746562)) || (iVar2 == 0x20736574)) ||
        ((((iVar2 == 0x20646566 || (iVar2 == 0x20616f74)) ||
          ((iVar2 == 0x206e6864 || ((iVar2 == 0x20796562 || (iVar2 == 0x2072626d)))))) ||
         (iVar2 == 0x20316b70)))) ||
       (((iVar2 == 0x20326b70 || (iVar2 == 0x20336b70)) ||
        (uVar4 = D2Common_10744(param_1,0x4a), uVar4 != 0)))) {
      uVar8 = 8;
    }
    memset((void *)((int)&uStack_11e + 2),0,0x100);
    iVar2 = D2Common_11088((int *)param_1);
    if (iVar2 == 4) {
      D2Common_10973_10273ce0(param_1,0xe,0);
      local_1c[8] = 0;
      local_1c[9] = 0;
      local_1c[0] = 0;
      local_1c[1] = 0;
      local_1c[2] = 0;
      local_1c[3] = 0;
      local_1c[4] = 0;
      local_1c[5] = 0;
      local_1c[6] = 0;
      local_1c[7] = 0;
      sub_1021cbb0(local_1c,&DAT_103775a4);
      iVar2 = 0;
      do {
        sVar1 = *(short *)((int)local_1c + iVar2);
        *(short *)(local_11a + iVar2 + -2) = sVar1;
        iVar2 = iVar2 + 2;
      } while (sVar1 != 0);
      psVar5 = (short *)D2Lang_10003(0xf9b);
      psVar7 = psVar5;
      do {
        sVar1 = *psVar7;
        psVar7 = psVar7 + 1;
      } while (sVar1 != 0);
      puVar10 = &uStack_11e;
      do {
        psVar9 = (short *)((int)puVar10 + 2);
        puVar10 = (uint32_t *)((int)puVar10 + 2);
      } while (*psVar9 != 0);
      psVar9 = psVar5;
      for (uVar4 = (uint)((int)psVar7 - (int)psVar5) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar10 = *(uint32_t *)psVar9;
        psVar9 = psVar9 + 2;
        puVar10 = puVar10 + 1;
      }
      for (uVar4 = (int)psVar7 - (int)psVar5 & 3; psVar7 = psVar3, uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)puVar10 = (char)*psVar9;
        psVar9 = (short *)((int)psVar9 + 1);
        puVar10 = (uint32_t *)((int)puVar10 + 1);
      }
      do {
        sVar1 = *psVar7;
        psVar7 = psVar7 + 1;
      } while (sVar1 != 0);
      uVar4 = (int)psVar7 - (int)psVar3;
      puVar10 = &uStack_11e;
      do {
        psVar7 = (short *)((int)puVar10 + 2);
        puVar10 = (uint32_t *)((int)puVar10 + 2);
      } while (*psVar7 != 0);
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar10 = *(uint32_t *)psVar3;
        psVar3 = psVar3 + 2;
        puVar10 = puVar10 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)puVar10 = (char)*psVar3;
        psVar3 = (short *)((int)psVar3 + 1);
        puVar10 = (uint32_t *)((int)puVar10 + 1);
      }
      if (param_2 != 0) {
        sub_102f0c70((int)&uStack_11e + 2,uVar8);
        psVar3 = (short *)((int)&uStack_11e + 2);
        do {
          sVar1 = *psVar3;
          psVar3 = psVar3 + 1;
        } while (sVar1 != 0);
        if (param_3 <= (int)psVar3 - (int)local_11a >> 1) {
          Fog_10024("","D2CLIENT_DrawHoverItemGround_INTERCEPT",0x5e0);
                    /* WARNING: Subroutine does not return */
          _exit(-1);
        }
        psVar3 = (short *)((int)&uStack_11e + 2);
        iVar2 = param_2 - (int)psVar3;
        do {
          sVar1 = *psVar3;
          psVar3 = psVar3 + 1;
          *(short *)(iVar2 + -2 + (int)psVar3) = sVar1;
        } while (sVar1 != 0);
        return;
      }
      psVar3 = (short *)((int)&uStack_11e + 2);
      uVar4 = *p_D2Client_DAT_6fb8bc58;
      uVar6 = *p_D2Client_DAT_6fb8bc54;
    }
    else {
      memset(&local_21c,0,0x100);
      UI_inv_6fb414f0((void *)param_1,(int)&local_21c,0x80);
      if (param_2 != 0) {
        sub_102f0c70(&local_21c,uVar8);
        psVar3 = &local_21c;
        do {
          sVar1 = *psVar3;
          psVar3 = psVar3 + 1;
        } while (sVar1 != 0);
        if (param_3 <= (int)psVar3 - (int)local_21a >> 1) {
          Fog_10024("","D2CLIENT_DrawHoverItemGround_INTERCEPT",0x5eb);
                    /* WARNING: Subroutine does not return */
          _exit(-1);
        }
        psVar3 = &local_21c;
        iVar2 = param_2 - (int)psVar3;
        do {
          sVar1 = *psVar3;
          psVar3 = psVar3 + 1;
          *(short *)(iVar2 + -2 + (int)psVar3) = sVar1;
        } while (sVar1 != 0);
        return;
      }
      psVar3 = &local_21c;
      uVar4 = *p_D2Client_DAT_6fb8bc58;
      uVar6 = *p_D2Client_DAT_6fb8bc54;
    }
    D2Win_10085(psVar3,uVar6,uVar4,uVar8,1);
  }
  return;
}


// 0x102204c0  (ghidra: FUN_102204c0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void client_DrawHoverItem_102204c0(uint32_t reg_EDI)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  uint unused_ECX;
  uint uVar5;
  void *this;
  uint uVar6;
  uint reg_EDX;
  short *psVar7;
  uint32_t *puVar8;
  ulonglong uVar9;
  short local_68c [64];
  uint8_t local_60c [4];
  uint8_t local_608 [510];
  uint32_t uStack_40a;
  uint8_t local_108 [256];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  memset(local_608,0,0x200);
  memset(local_108,0,0x100);
  memset((void *)((int)&uStack_40a + 2),0,0x300);
  if ((((*p_D2Client_DAT_6fbcc468 != 0) && (*p_D2Client_DAT_6fbcc47c != 0)) &&
      (iVar2 = D2Common_11017(*(int **)(*p_D2Client_DAT_6fbcbbfc + 0x60)), iVar2 == 0)) &&
     (((*p_D2Client_DAT_6fba538c < 4 || (*p_D2Client_DAT_6fbcc46c != 0)) || (*p_D2Client_DAT_6fbcc470 != 0)))) {
    if (*p_D2Client_DAT_6fbcc47c == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = *(uint *)(*p_D2Client_DAT_6fbcc47c + 4);
    }
    iVar2 = D2Common_10695(uVar5);
    if (iVar2 == 0) {
      Fog_10024("","D2CLIENT_DrawHoverItemBelt_INTERCEPT",0x61d);
                    /* WARNING: Subroutine does not return */
      _exit(-1);
    }
    UI_inv_6fb414f0((void *)*p_D2Client_DAT_6fbcc47c,(int)local_108,0x80);
    uVar9 = D2Common_10106(unused_ECX,reg_EDX,(int *)*p_D2Client_DAT_6fbcc47c);
    if ((int)uVar9 != 3) {
      client_DrawHoverItem_102246b0(local_608,*p_D2Client_DAT_6fbcc47c,1,0,reg_EDI);
    }
    psVar3 = (short *)sub_102f0c70(local_608,3);
    psVar4 = psVar3;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
      *(short *)(((int)&uStack_40a - (int)psVar3) + (int)psVar4) = sVar1;
    } while (sVar1 != 0);
    psVar3 = (short *)sub_102f0c70(local_108,0);
    psVar4 = psVar3;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    puVar8 = &uStack_40a;
    do {
      psVar7 = (short *)((int)puVar8 + 2);
      puVar8 = (uint32_t *)((int)puVar8 + 2);
    } while (*psVar7 != 0);
    psVar7 = psVar3;
    for (uVar5 = (uint)((int)psVar4 - (int)psVar3) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = (int)psVar4 - (int)psVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar8 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar8 = (uint32_t *)((int)puVar8 + 1);
    }
    if ((-1 < (int)*p_D2Client_DAT_6fba5390) && (-1 < (int)*p_D2Client_DAT_6fba5394)) {
      iVar2 = *p_D2Client_DAT_6fbcbc34;
      if ((iVar2 == 1) || ((iVar2 == 2 || (iVar2 == 3)))) {
        memset(local_68c,0,0x80);
        sub_102f0c50(this,local_60c,*p_D2Client_DAT_6fbcc47c,1,local_68c,0x40);
        if (local_68c[0] != 0) {
          psVar3 = (short *)D2Lang_10003(0xf9e);
          psVar4 = psVar3;
          do {
            sVar1 = *psVar4;
            psVar4 = psVar4 + 1;
          } while (sVar1 != 0);
          puVar8 = &uStack_40a;
          do {
            psVar7 = (short *)((int)puVar8 + 2);
            puVar8 = (uint32_t *)((int)puVar8 + 2);
          } while (*psVar7 != 0);
          psVar7 = psVar3;
          for (uVar5 = (uint)((int)psVar4 - (int)psVar3) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar8 = *(uint32_t *)psVar7;
            psVar7 = psVar7 + 2;
            puVar8 = puVar8 + 1;
          }
          for (uVar5 = (int)psVar4 - (int)psVar3 & 3; psVar4 = local_68c, uVar5 != 0;
              uVar5 = uVar5 - 1) {
            *(char *)puVar8 = (char)*psVar7;
            psVar7 = (short *)((int)psVar7 + 1);
            puVar8 = (uint32_t *)((int)puVar8 + 1);
          }
          do {
            sVar1 = *psVar4;
            psVar4 = psVar4 + 1;
          } while (sVar1 != 0);
          uVar5 = (int)psVar4 - (int)local_68c;
          puVar8 = &uStack_40a;
          do {
            psVar4 = (short *)((int)puVar8 + 2);
            puVar8 = (uint32_t *)((int)puVar8 + 2);
          } while (*psVar4 != 0);
          psVar4 = local_68c;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar8 = *(uint32_t *)psVar4;
            psVar4 = psVar4 + 2;
            puVar8 = puVar8 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(char *)puVar8 = (char)*psVar4;
            psVar4 = (short *)((int)psVar4 + 1);
            puVar8 = (uint32_t *)((int)puVar8 + 1);
          }
        }
      }
      D2Win_10085((void *)((int)&uStack_40a + 2),*p_D2Client_DAT_6fba5390,*p_D2Client_DAT_6fba5394,0,1);
    }
  }
  return;
}


// 0x10220780  (ghidra: FUN_10220780)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __fastcall client_DrawHoverItem_10220780(char *param_1,int param_2)

{
  uint uVar1;
  uint64_t uVar2;
  char *pcVar3;
  uint32_t local_2c [6];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10303d2d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 4) {
    uVar1 = functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)param_1);
  }
  else {
    sub_1020f990(local_2c,"");
    local_8 = 0;
    if (param_2 == 1) {
      pcVar3 = "Xbox";
    }
    else {
      pcVar3 = "DS4";
    }
    client_DrawHoverItem_102250e0(local_2c,pcVar3);
    client_DrawHoverItem_102250d0(local_2c,param_1);
    uVar2 = thunk_FUN_1020fe30((int)local_2c);
    uVar1 = functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)uVar2);
    thunk_FUN_1020fc60(local_2c);
  }
  ExceptionList = local_10;
  return uVar1;
}


// 0x10220830  (ghidra: FUN_10220830)  [range]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall client_DrawHoverItem_10220830(short *param_1,int *param_2)

{
  short sVar1;
  bool bVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  uint32_t uVar6;
  void *pvVar7;
  int iVar8;
  uint uVar9;
  char extraout_DL;
  short *psVar10;
  uint uVar11;
  uint32_t *puVar12;
  char cVar13;
  uint64_t uVar14;
  uint32_t local_218c [6];
  char local_2174;
  char local_2173;
  char local_2172;
  char local_2171;
  uint32_t local_2170 [6];
  uint32_t local_2158 [6];
  uint32_t local_2140 [5];
  uint32_t uStack_212a;
  short local_128 [130];
  uint local_24;
  uint8_t *puStack_20;
  void *local_1c;
  uint8_t *puStack_18;
  uint32_t local_14;
  uint8_t  stack0xfffffff0;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_10303e20;
  local_1c = ExceptionList;
  local_24 = DAT_1039800c ^ (uint)&stack0xfffffff0;
  if (param_2 == (int *)0x0) {
    return;
  }
  if (*param_2 != 4) {
    return;
  }
  if (param_2[5] == 0) {
    return;
  }
  if (DAT_104e2510 == '\0') {
    return;
  }
  iVar8 = *p_D2Client_DAT_6fbcbbfc;
  ExceptionList = &local_1c;
  client_DrawHoverItem_10225070(local_2140);
  local_14 = 0;
  psVar3 = (short *)D2Lang_10003(0xf9a);
  client_DrawHoverItem_10225040(local_2170,psVar3);
  local_14._0_1_ = 1;
  client_DrawHoverItem_10225480(local_2158,(int)local_2170,(short *)&DAT_10377714);
  local_14._0_1_ = 2;
  uVar11 = *(uint *)(param_2[5] + 0x18);
  uVar14 = sub_102edf00();
  cVar13 = (int)uVar14 != 0;
  iVar4 = 4;
  if (((DAT_103d9867 != '\0') && (iVar4 = DAT_104e2514, DAT_104e2514 != 1)) && (DAT_104e2514 != 2))
  {
    iVar4 = sub_1022b890(DAT_103d98dc);
    iVar4 = 2 - (uint)(iVar4 != 0);
    cVar13 = extraout_DL;
  }
  if ((uVar11 & 0x20000000) == 0) {
    if (cVar13 == '\0') {
      iVar5 = D2Common_10695(param_2[1]);
      local_2173 = '\0';
      if (iVar5 != 0) {
        local_2173 = *(int *)(iVar5 + 0x94) != 0;
        uVar14 = functions_D2NewFunctions_102ce500((int *)(iVar5 + 0x80),(int *)&DAT_10377484);
        if ((int)uVar14 != 0) goto LAB_10220f45;
      }
      uVar14 = sub_102edf00();
      local_2174 = (int)uVar14 != 0;
      uVar14 = sub_102edf00();
      if (((int)uVar14 == 0) && (uVar14 = sub_102edf00(), (int)uVar14 == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      iVar5 = param_2[5];
      local_2171 = *(char *)(iVar5 + 0x45);
      if ((local_2171 != '\0') || (local_2172 = '\x01', !bVar2)) {
        local_2172 = '\0';
      }
      if ((*(int *)(*(int *)(iVar5 + 0x5c) + 8) == iVar8) && (local_2171 != -1)) {
        uVar6 = client_DrawHoverItem_10220780("HotkeyItemCtrlRight",iVar4);
        sub_1021cb90(local_128,uVar6);
        pvVar7 = client_DrawHoverItem_10225480(local_218c,(int)local_2158,local_128);
        local_14._0_1_ = 3;
        client_DrawHoverItem_10225020(local_2140,(int)pvVar7);
        local_14._0_1_ = 2;
        thunk_FUN_102250f0(local_218c);
        client_DrawHoverItem_10225010(local_2140,(short *)&DAT_1037772c);
        iVar5 = param_2[5];
      }
      if (((*(byte *)(iVar5 + 0x18) & 0x10) == 0) && (DAT_103e777c != 0)) {
        uVar6 = client_DrawHoverItem_10220780("HotkeyItemShiftLeft",iVar4);
        sub_1021cb90(local_128,uVar6);
        pvVar7 = client_DrawHoverItem_10225480(local_218c,(int)local_2158,local_128);
        local_14._0_1_ = 4;
        client_DrawHoverItem_10225020(local_2140,(int)pvVar7);
        local_14._0_1_ = 2;
        thunk_FUN_102250f0(local_218c);
        client_DrawHoverItem_10225010(local_2140,(short *)&DAT_1037772c);
      }
      if ((((local_2171 == '\x04') || (local_2171 == '\x03')) || (local_2171 == '\x05')) ||
         (local_2172 != '\0')) {
        uVar6 = client_DrawHoverItem_10220780("HotkeyItemShiftRight",iVar4);
        sub_1021cb90(local_128,uVar6);
        pvVar7 = client_DrawHoverItem_10225480(local_218c,(int)local_2158,local_128);
        local_14._0_1_ = 5;
        client_DrawHoverItem_10225020(local_2140,(int)pvVar7);
        local_14._0_1_ = 2;
        thunk_FUN_102250f0(local_218c);
        client_DrawHoverItem_10225010(local_2140,(short *)&DAT_1037772c);
      }
      iVar8 = functions_HelperFunctions_102d0c20(param_2);
      if ((iVar8 != -1) || (iVar8 = functions_HelperFunctions_102d0ba0(param_2), iVar8 != -1)) {
        uVar6 = client_DrawHoverItem_10220780("HotkeyItemCtrlShiftLeft",iVar4);
        sub_1021cb90(local_128,uVar6);
        pvVar7 = client_DrawHoverItem_10225480(local_218c,(int)local_2158,local_128);
        local_14._0_1_ = 6;
        client_DrawHoverItem_10225020(local_2140,(int)pvVar7);
        local_14._0_1_ = 2;
        thunk_FUN_102250f0(local_218c);
        client_DrawHoverItem_10225010(local_2140,(short *)&DAT_1037772c);
      }
      if ((local_2174 == '\0') && (DAT_103e7639 != '\0')) {
        if ((local_2171 != '\x04') && ((local_2171 != '\x05' && (local_2171 != '\0'))))
        goto LAB_10220f45;
        uVar6 = client_DrawHoverItem_10220780("HotkeyItemCtrlShiftRight",iVar4);
        sub_1021cb90(local_128,uVar6);
        pvVar7 = client_DrawHoverItem_10225480(local_218c,(int)local_2158,local_128);
        local_14._0_1_ = 7;
        client_DrawHoverItem_10225020(local_2140,(int)pvVar7);
        local_14._0_1_ = 2;
        thunk_FUN_102250f0(local_218c);
        client_DrawHoverItem_10225010(local_2140,(short *)&DAT_1037772c);
      }
      if ((local_2171 != '\0') || (local_2173 == '\0')) goto LAB_10220f45;
      uVar6 = client_DrawHoverItem_10220780("HotkeyItemRight",iVar4);
      sub_1021cb90(local_128,uVar6);
      pvVar7 = client_DrawHoverItem_10225480(local_218c,(int)local_2158,local_128);
      local_14._0_1_ = 8;
    }
    else if ((*(uint *)(param_2[5] + 0x18) & 0x2000) == 0) {
      uVar6 = client_DrawHoverItem_10220780("HotkeyItemShopCtrlLeft",iVar4);
      sub_1021cb90(local_128,uVar6);
      pvVar7 = client_DrawHoverItem_10225480(local_218c,(int)local_2158,local_128);
      local_14._0_1_ = 0xf;
    }
    else {
      uVar6 = client_DrawHoverItem_10220780("HotkeyItemShopRight",iVar4);
      sub_1021cb90(local_128,uVar6);
      pvVar7 = client_DrawHoverItem_10225480(local_218c,(int)local_2158,local_128);
      local_14._0_1_ = 0xd;
      client_DrawHoverItem_10225020(local_2140,(int)pvVar7);
      local_14._0_1_ = 2;
      thunk_FUN_102250f0(local_218c);
      client_DrawHoverItem_10225010(local_2140,(short *)&DAT_1037772c);
      uVar6 = client_DrawHoverItem_10220780("HotkeyItemShopShiftRight",iVar4);
      sub_1021cb90(local_128,uVar6);
      pvVar7 = client_DrawHoverItem_10225480(local_218c,(int)local_2158,local_128);
      local_14._0_1_ = 0xe;
    }
  }
  else {
    uVar6 = client_DrawHoverItem_10220780("HotkeyCurrencyTabItemCtrl",iVar4);
    sub_1021cb90(local_128,uVar6);
    pvVar7 = client_DrawHoverItem_10225480(local_218c,(int)local_2158,local_128);
    local_14._0_1_ = 9;
    client_DrawHoverItem_10225020(local_2140,(int)pvVar7);
    local_14._0_1_ = 2;
    thunk_FUN_102250f0(local_218c);
    client_DrawHoverItem_10225010(local_2140,(short *)&DAT_1037772c);
    uVar6 = client_DrawHoverItem_10220780("HotkeyCurrencyTabItemShift",iVar4);
    sub_1021cb90(local_128,uVar6);
    pvVar7 = client_DrawHoverItem_10225480(local_218c,(int)local_2158,local_128);
    local_14._0_1_ = 10;
    client_DrawHoverItem_10225020(local_2140,(int)pvVar7);
    local_14._0_1_ = 2;
    thunk_FUN_102250f0(local_218c);
    client_DrawHoverItem_10225010(local_2140,(short *)&DAT_1037772c);
    if (DAT_103e7639 == '\0') goto LAB_10220f45;
    uVar6 = client_DrawHoverItem_10220780("HotkeyCurrencyTabItemCtrlShiftLeft",iVar4);
    sub_1021cb90(local_128,uVar6);
    pvVar7 = client_DrawHoverItem_10225480(local_218c,(int)local_2158,local_128);
    local_14._0_1_ = 0xb;
    client_DrawHoverItem_10225020(local_2140,(int)pvVar7);
    local_14._0_1_ = 2;
    thunk_FUN_102250f0(local_218c);
    client_DrawHoverItem_10225010(local_2140,(short *)&DAT_1037772c);
    uVar6 = client_DrawHoverItem_10220780("HotkeyCurrencyTabItemCtrlShiftRight",iVar4);
    sub_1021cb90(local_128,uVar6);
    pvVar7 = client_DrawHoverItem_10225480(local_218c,(int)local_2158,local_128);
    local_14._0_1_ = 0xc;
  }
  client_DrawHoverItem_10225020(local_2140,(int)pvVar7);
  local_14._0_1_ = 2;
  thunk_FUN_102250f0(local_218c);
  client_DrawHoverItem_10225010(local_2140,(short *)&DAT_1037772c);
LAB_10220f45:
  pvVar7 = client_DrawHoverItem_10225480(local_218c,(int)local_2170,(short *)&DAT_10377868);
  local_14 = CONCAT31(local_14._1_3_,0x10);
  client_DrawHoverItem_10225020(local_2140,(int)pvVar7);
  thunk_FUN_102250f0(local_218c);
  uVar14 = thunk_FUN_10225280((int)local_2140);
  psVar3 = (short *)uVar14;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
    *(short *)(((int)&uStack_212a - (int)(short *)uVar14) + (int)psVar3) = sVar1;
    psVar10 = param_1;
  } while (sVar1 != 0);
  do {
    sVar1 = *psVar10;
    psVar10 = psVar10 + 1;
  } while (sVar1 != 0);
  uVar11 = (int)psVar10 - (int)param_1;
  puVar12 = &uStack_212a;
  do {
    psVar3 = (short *)((int)puVar12 + 2);
    puVar12 = (uint32_t *)((int)puVar12 + 2);
  } while (*psVar3 != 0);
  psVar3 = param_1;
  for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar12 = *(uint32_t *)psVar3;
    psVar3 = psVar3 + 2;
    puVar12 = puVar12 + 1;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(char *)puVar12 = (char)*psVar3;
    psVar3 = (short *)((int)psVar3 + 1);
    puVar12 = (uint32_t *)((int)puVar12 + 1);
  }
  psVar3 = (short *)((int)&uStack_212a + 2);
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
    *(short *)((int)param_1 + (-2 - ((int)&uStack_212a + 2)) + (int)psVar3) = sVar1;
  } while (sVar1 != 0);
  thunk_FUN_102250f0(local_2158);
  thunk_FUN_102250f0(local_2170);
  thunk_FUN_102250f0(local_2140);
  ExceptionList = local_1c;
  return;
}


// 0x10221040  (ghidra: FUN_10221040)  [range]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void client_DrawHoverItem_10221040(void)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  uint *puVar8;
  short *psVar9;
  uint32_t *puVar10;
  int local_1114;
  uint local_1110;
  short local_110c [1023];
  uint32_t uStack_90e;
  short local_10c [130];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  memset((void *)((int)&uStack_90e + 2),0,0x800);
  memset(local_110c,0,0x800);
  psVar2 = (short *)D2Lang_10003(0xf9e);
  if ((int *)*p_D2Client_DAT_6fbcbc38 == (int *)0x0) {
    Fog_10024("","D2CLIENT_DrawHoverBookTexts",0x664);
                    /* WARNING: Subroutine does not return */
    _exit(-1);
  }
  iVar3 = D2Common_11088((int *)*p_D2Client_DAT_6fbcbc38);
  if (iVar3 == 0x12) {
    if (*p_D2Client_DAT_6fbcbc38 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = *(uint *)(*p_D2Client_DAT_6fbcbc38 + 4);
    }
    iVar3 = D2Common_10695(uVar5);
    if (iVar3 != 0) {
      client_DrawHoverItem_1021e290((int)&uStack_90e + 2,*p_D2Client_DAT_6fbcbc38);
      if (*p_D2Client_DAT_6fbcbc34 == 0) {
        psVar4 = (short *)D2Lang_10003(0x89b);
        psVar7 = psVar4;
        do {
          sVar1 = *psVar7;
          psVar7 = psVar7 + 1;
        } while (sVar1 != 0);
        puVar10 = &uStack_90e;
        do {
          psVar9 = (short *)((int)puVar10 + 2);
          puVar10 = (uint32_t *)((int)puVar10 + 2);
        } while (*psVar9 != 0);
        psVar9 = psVar4;
        for (uVar5 = (uint)((int)psVar7 - (int)psVar4) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar10 = *(uint32_t *)psVar9;
          psVar9 = psVar9 + 2;
          puVar10 = puVar10 + 1;
        }
        for (uVar5 = (int)psVar7 - (int)psVar4 & 3; psVar7 = psVar2, uVar5 != 0; uVar5 = uVar5 - 1)
        {
          *(char *)puVar10 = (char)*psVar9;
          psVar9 = (short *)((int)psVar9 + 1);
          puVar10 = (uint32_t *)((int)puVar10 + 1);
        }
        do {
          sVar1 = *psVar7;
          psVar7 = psVar7 + 1;
        } while (sVar1 != 0);
        uVar5 = (int)psVar7 - (int)psVar2;
        puVar10 = &uStack_90e;
        do {
          psVar7 = (short *)((int)puVar10 + 2);
          puVar10 = (uint32_t *)((int)puVar10 + 2);
        } while (*psVar7 != 0);
        psVar7 = psVar2;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar10 = *(uint32_t *)psVar7;
          psVar7 = psVar7 + 2;
          puVar10 = puVar10 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar10 = (char)*psVar7;
          psVar7 = (short *)((int)psVar7 + 1);
          puVar10 = (uint32_t *)((int)puVar10 + 1);
        }
        psVar4 = (short *)D2Lang_10003(0x89e);
        psVar7 = psVar4;
        do {
          sVar1 = *psVar7;
          psVar7 = psVar7 + 1;
        } while (sVar1 != 0);
        puVar10 = &uStack_90e;
        do {
          psVar9 = (short *)((int)puVar10 + 2);
          puVar10 = (uint32_t *)((int)puVar10 + 2);
        } while (*psVar9 != 0);
        psVar9 = psVar4;
        for (uVar5 = (uint)((int)psVar7 - (int)psVar4) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar10 = *(uint32_t *)psVar9;
          psVar9 = psVar9 + 2;
          puVar10 = puVar10 + 1;
        }
        for (uVar5 = (int)psVar7 - (int)psVar4 & 3; psVar7 = psVar2, uVar5 != 0; uVar5 = uVar5 - 1)
        {
          *(char *)puVar10 = (char)*psVar9;
          psVar9 = (short *)((int)psVar9 + 1);
          puVar10 = (uint32_t *)((int)puVar10 + 1);
        }
        do {
          sVar1 = *psVar7;
          psVar7 = psVar7 + 1;
        } while (sVar1 != 0);
        uVar5 = (int)psVar7 - (int)psVar2;
        puVar10 = &uStack_90e;
        do {
          psVar7 = (short *)((int)puVar10 + 2);
          puVar10 = (uint32_t *)((int)puVar10 + 2);
        } while (*psVar7 != 0);
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar10 = *(uint32_t *)psVar2;
          psVar2 = psVar2 + 2;
          puVar10 = puVar10 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar10 = (char)*psVar2;
          psVar2 = (short *)((int)psVar2 + 1);
          puVar10 = (uint32_t *)((int)puVar10 + 1);
        }
      }
      memset(local_10c,0,0x100);
      UI_inv_6fb414f0((void *)*p_D2Client_DAT_6fbcbc38,(int)local_10c,0x80);
      psVar2 = local_10c;
      do {
        sVar1 = *psVar2;
        psVar2 = psVar2 + 1;
      } while (sVar1 != 0);
      uVar5 = (int)psVar2 - (int)local_10c;
      puVar10 = &uStack_90e;
      do {
        psVar2 = (short *)((int)puVar10 + 2);
        puVar10 = (uint32_t *)((int)puVar10 + 2);
      } while (*psVar2 != 0);
      psVar2 = local_10c;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar10 = *(uint32_t *)psVar2;
        psVar2 = psVar2 + 2;
        puVar10 = puVar10 + 1;
      }
      iVar3 = *p_D2Client_DAT_6fbcbc34;
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)puVar10 = (char)*psVar2;
        psVar2 = (short *)((int)psVar2 + 1);
        puVar10 = (uint32_t *)((int)puVar10 + 1);
      }
      if ((iVar3 < 1) || (9 < iVar3)) {
        iVar3 = 0;
        do {
          sVar1 = *(short *)((int)&uStack_90e + iVar3 + 2);
          *(short *)((int)local_110c + iVar3) = sVar1;
          iVar3 = iVar3 + 2;
        } while (sVar1 != 0);
      }
      else {
        sub_102f0bd0(local_110c,(int)&uStack_90e + 2);
      }
      client_DrawHoverItem_10220830(local_110c,(int *)*p_D2Client_DAT_6fbcbc38);
      local_1114 = 0;
      local_1110 = 0;
      D2Win_10177_102aa690((uint)local_110c,&local_1114,(int *)&local_1110);
      uVar5 = *p_D2Client_DAT_6fb90eac;
      if ((uVar5 == local_1110) || (puVar8 = p_D2Client_DAT_6fb90ea8, (int)(uVar5 - local_1110) < 0)) {
        uVar5 = *p_D2Client_DAT_6fb90eb4 + local_1110;
        puVar8 = p_D2Client_DAT_6fb90eb0;
      }
      D2Win_10085(local_110c,*puVar8,uVar5,0,0);
      return;
    }
    Fog_10024("","D2CLIENT_DrawHoverBookTexts",0x673);
                    /* WARNING: Subroutine does not return */
    _exit(-1);
  }
  Fog_10024("","D2CLIENT_DrawHoverBookTexts",0x66b);
                    /* WARNING: Subroutine does not return */
  _exit(-1);
}


// 0x10221380  (ghidra: FUN_10221380)  [range]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall client_DrawHoverItem_Wraps_D2Client_UI_inv_10221380(int *param_1)

{
  short sVar1;
  ushort uVar2;
  int *piVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint32_t uVar12;
  void *pvVar13;
  void *pvVar14;
  short *psVar15;
  short *psVar16;
  uint16_t extraout_var;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint32_t extraout_ECX;
  void *this;
  short *psVar20;
  uint32_t *puVar21;
  uint64_t uVar22;
  uint local_52c4;
  uint local_52c0;
  int *local_52b0;
  int local_52ac;
  int local_52a8;
  int *local_52a4;
  int local_52a0;
  int local_529c;
  int local_5298;
  uint local_5294;
  uint local_5290;
  short local_528c;
  uint8_t local_528a [2044];
  uint32_t uStack_4a8e;
  uint32_t uStack_468e;
  short local_368c;
  uint8_t local_368a [1022];
  short local_328c;
  uint8_t local_328a [1020];
  uint8_t auStack_2e8e [2];
  uint32_t local_2e8c [212];
  short local_2b3c [344];
  short local_288c [256];
  uint8_t local_268c [512];
  uint16_t local_248c [256];
  uint16_t local_228c [256];
  uint8_t local_208c [510];
  uint32_t uStack_1e8e;
  uint8_t auStack_168e [2];
  uint32_t local_168c [511];
  uint32_t uStack_e8e;
  short local_c8c [256];
  short local_a8c [256];
  short local_88c [256];
  short local_68c [255];
  uint32_t uStack_48e;
  short local_28c [256];
  short local_8c [66];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if (param_1 != (int *)0x0) {
    local_52c4 = 0;
    local_52c0 = 0;
    local_52b0 = (int *)0x0;
    memset((void *)((int)&uStack_1e8e + 2),0,0x800);
    memset((void *)((int)&uStack_468e + 2),0,0x1000);
    memset(local_68c,0,0x200);
    memset((void *)((int)&uStack_48e + 2),0,0x200);
    memset(local_208c,0,0x200);
    memset(local_268c,0,0x200);
    memset(local_248c,0,0x200);
    memset(local_228c,0,0x200);
    memset(local_28c,0,0x200);
    memset(local_c8c,0,0x200);
    memset(local_a8c,0,0x200);
    memset(local_288c,0,0x200);
    memset(local_88c,0,0x200);
    memset(local_168c,0,0x800);
    memset((void *)((int)&uStack_e8e + 2),0,0x200);
    memset(local_368a,0,0x3fe);
    memset(local_528a,0,0x7fe);
    memset(local_328a,0,0x3fe);
    psVar4 = (short *)D2Lang_10003(0xf9e);
    local_52a4 = param_1;
    if ((*param_1 == 1) && (uVar5 = D2Common_11104(param_1), uVar5 == 0)) {
      local_52a4 = (int *)*p_D2Client_DAT_6fbcbbfc;
    }
    if ((((*p_D2Client_DAT_6fbcbc2c != 0) || (*p_D2Client_DAT_6fbcbc28 != 0)) && (*p_D2Client_DAT_6fbcbc38 != 0)) &&
       (iVar6 = D2Common_11017((int *)param_1[0x18]), iVar6 == 0)) {
      if (*p_D2Client_DAT_6fbcbc38 == 0) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = *(uint *)(*p_D2Client_DAT_6fbcbc38 + 4);
      }
      iVar6 = D2Common_10695(uVar5);
      if (iVar6 == 0) {
        Fog_10024("","D2CLIENT_DrawHoverSetItemDetails",0x6de);
                    /* WARNING: Subroutine does not return */
        _exit(-1);
      }
      iVar9 = *p_D2Common_DAT_6fde9e1c_10279cd0;
      uVar5 = D2Common_10620((int *)*p_D2Client_DAT_6fbcbc38);
      if (((-1 < (int)uVar5) && (uVar5 < *(uint *)(iVar9 + 0xc1c))) &&
         ((iVar7 = uVar5 * 0x1b8 + *(int *)(iVar9 + 0xc18), iVar7 != 0 &&
          ((uVar5 = (uint)*(ushort *)(iVar7 + 0x2c), uVar5 < *(uint *)(iVar9 + 0xc10) &&
           (local_52a8 = uVar5 * 0x128 + *(int *)(iVar9 + 0xc0c), local_52a8 != 0)))))) {
        psVar8 = (short *)D2Lang_10003(CONCAT22(extraout_var,*(uint16_t *)(local_52a8 + 2)));
        piVar3 = local_52a4;
        psVar16 = psVar8;
        do {
          sVar1 = *psVar16;
          *(short *)((int)psVar16 + (int)&uStack_48e + (2 - (int)psVar8)) = sVar1;
          psVar16 = psVar16 + 1;
          psVar15 = psVar4;
        } while (sVar1 != 0);
        do {
          sVar1 = *psVar15;
          psVar15 = psVar15 + 1;
        } while (sVar1 != 0);
        uVar5 = (int)psVar15 - (int)psVar4;
        puVar21 = &uStack_48e;
        do {
          psVar16 = (short *)((int)puVar21 + 2);
          puVar21 = (uint32_t *)((int)puVar21 + 2);
        } while (*psVar16 != 0);
        psVar16 = psVar4;
        for (uVar17 = uVar5 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar21 = *(uint32_t *)psVar16;
          psVar16 = psVar16 + 2;
          puVar21 = puVar21 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar21 = (char)*psVar16;
          psVar16 = (short *)((int)psVar16 + 1);
          puVar21 = (uint32_t *)((int)puVar21 + 1);
        }
        local_5298 = 0;
        local_5294 = 0;
        local_529c = 0;
        D2Common_10244((int *)*p_D2Client_DAT_6fbcbc38,local_52a4,0,&local_5298,&local_5294,&local_529c);
        client_DrawHoverItem_1021dec0((int)local_208c,*p_D2Client_DAT_6fbcbc38);
        iVar9 = D2Common_11015((int *)*p_D2Client_DAT_6fbcbc38,piVar3);
        if (1 < iVar9) {
          local_52c4 = (uint)(local_529c == 0);
          client_DrawHoverItem_1021e3d0((int)local_268c);
        }
        iVar9 = 0;
        iVar7 = 0;
        uVar5 = D2Common_10744(*p_D2Client_DAT_6fbcbc38,0x2d);
        uVar17 = D2Common_10744(*p_D2Client_DAT_6fbcbc38,0x32);
        if ((uVar5 != 0) || (uVar17 != 0)) {
          iVar10 = D2Common_10910(*p_D2Client_DAT_6fbcbc38,0x5b,0);
          if (iVar10 != 0) {
            uVar22 = functions_HelperFunctions_102ce840(iVar10,100);
            iVar9 = (int)uVar22;
            uVar22 = functions_HelperFunctions_102ce840(iVar10,(uint)((ulonglong)uVar22 >> 0x20));
            iVar7 = (int)uVar22;
          }
          uVar11 = D2Common_10202((int *)*p_D2Client_DAT_6fbcbc38,0x400000,0x71f,
                                  "..\\Source\\D2Client\\UI\\inv.cpp");
          if (uVar11 != 0) {
            iVar9 = iVar9 + -10;
            iVar7 = iVar7 + -10;
          }
          if (*(short *)(iVar6 + 0x10a) != 0) {
            local_52c0 = (uint)(local_5298 == 0);
            client_DrawHoverItem_1021f370(local_248c,iVar6,iVar9);
          }
          if (*(short *)(iVar6 + 0x10c) != 0) {
            local_52b0 = (int *)(uint)(local_5294 == 0);
            client_DrawHoverItem_1021f220(local_228c,iVar6,iVar7);
          }
        }
        psVar8 = (short *)sub_102f0c70(local_268c,local_52c4);
        psVar16 = psVar8;
        do {
          sVar1 = *psVar16;
          psVar16 = psVar16 + 1;
        } while (sVar1 != 0);
        puVar21 = (uint32_t *)auStack_168e;
        do {
          psVar15 = (short *)((int)puVar21 + 2);
          puVar21 = (uint32_t *)((int)puVar21 + 2);
        } while (*psVar15 != 0);
        psVar15 = psVar8;
        for (uVar11 = (uint)((int)psVar16 - (int)psVar8) >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar21 = *(uint32_t *)psVar15;
          psVar15 = psVar15 + 2;
          puVar21 = puVar21 + 1;
        }
        for (uVar11 = (int)psVar16 - (int)psVar8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(char *)puVar21 = (char)*psVar15;
          psVar15 = (short *)((int)psVar15 + 1);
          puVar21 = (uint32_t *)((int)puVar21 + 1);
        }
        psVar8 = (short *)sub_102f0c70(local_248c,local_52c0);
        psVar16 = psVar8;
        do {
          sVar1 = *psVar16;
          psVar16 = psVar16 + 1;
        } while (sVar1 != 0);
        puVar21 = (uint32_t *)auStack_168e;
        do {
          psVar15 = (short *)((int)puVar21 + 2);
          puVar21 = (uint32_t *)((int)puVar21 + 2);
        } while (*psVar15 != 0);
        psVar15 = psVar8;
        for (uVar11 = (uint)((int)psVar16 - (int)psVar8) >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar21 = *(uint32_t *)psVar15;
          psVar15 = psVar15 + 2;
          puVar21 = puVar21 + 1;
        }
        for (uVar11 = (int)psVar16 - (int)psVar8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(char *)puVar21 = (char)*psVar15;
          psVar15 = (short *)((int)psVar15 + 1);
          puVar21 = (uint32_t *)((int)puVar21 + 1);
        }
        psVar8 = (short *)sub_102f0c70(local_228c,local_52b0);
        psVar16 = psVar8;
        do {
          sVar1 = *psVar16;
          psVar16 = psVar16 + 1;
        } while (sVar1 != 0);
        puVar21 = (uint32_t *)auStack_168e;
        do {
          psVar15 = (short *)((int)puVar21 + 2);
          puVar21 = (uint32_t *)((int)puVar21 + 2);
        } while (*psVar15 != 0);
        psVar15 = psVar8;
        for (uVar11 = (uint)((int)psVar16 - (int)psVar8) >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar21 = *(uint32_t *)psVar15;
          psVar15 = psVar15 + 2;
          puVar21 = puVar21 + 1;
        }
        piVar3 = (int *)*p_D2Client_DAT_6fbcbc38;
        for (uVar11 = (int)psVar16 - (int)psVar8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(char *)puVar21 = (char)*psVar15;
          psVar15 = (short *)((int)psVar15 + 1);
          puVar21 = (uint32_t *)((int)puVar21 + 1);
        }
        uVar11 = D2Common_10822(piVar3);
        if (uVar11 != 7) {
          psVar8 = (short *)D2Lang_10003(uVar11 + 0x2aa5);
          psVar16 = psVar8;
          do {
            sVar1 = *psVar16;
            psVar16 = psVar16 + 1;
          } while (sVar1 != 0);
          puVar21 = &uStack_e8e;
          do {
            psVar15 = (short *)((int)puVar21 + 2);
            puVar21 = (uint32_t *)((int)puVar21 + 2);
          } while (*psVar15 != 0);
          psVar15 = psVar8;
          for (uVar18 = (uint)((int)psVar16 - (int)psVar8) >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *puVar21 = *(uint32_t *)psVar15;
            psVar15 = psVar15 + 2;
            puVar21 = puVar21 + 1;
          }
          for (uVar18 = (int)psVar16 - (int)psVar8 & 3; psVar16 = psVar4, uVar18 != 0;
              uVar18 = uVar18 - 1) {
            *(char *)puVar21 = (char)*psVar15;
            psVar15 = (short *)((int)psVar15 + 1);
            puVar21 = (uint32_t *)((int)puVar21 + 1);
          }
          do {
            sVar1 = *psVar16;
            psVar16 = psVar16 + 1;
          } while (sVar1 != 0);
          uVar18 = (int)psVar16 - (int)psVar4;
          puVar21 = &uStack_e8e;
          do {
            psVar16 = (short *)((int)puVar21 + 2);
            puVar21 = (uint32_t *)((int)puVar21 + 2);
          } while (*psVar16 != 0);
          uVar12 = 0;
          psVar16 = psVar4;
          for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
            *puVar21 = *(uint32_t *)psVar16;
            psVar16 = psVar16 + 2;
            puVar21 = puVar21 + 1;
          }
          for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(char *)puVar21 = (char)*psVar16;
            psVar16 = (short *)((int)psVar16 + 1);
            puVar21 = (uint32_t *)((int)puVar21 + 1);
          }
          if (((local_52a4 != (int *)0x0) && (*local_52a4 == 0)) && (local_52a4[1] != uVar11)) {
            uVar12 = 1;
          }
          psVar8 = (short *)sub_102f0c70((int)&uStack_e8e + 2,uVar12);
          psVar16 = psVar8;
          do {
            sVar1 = *psVar16;
            psVar16 = psVar16 + 1;
          } while (sVar1 != 0);
          puVar21 = (uint32_t *)auStack_168e;
          do {
            psVar15 = (short *)((int)puVar21 + 2);
            puVar21 = (uint32_t *)((int)puVar21 + 2);
          } while (*psVar15 != 0);
          psVar15 = psVar8;
          for (uVar11 = (uint)((int)psVar16 - (int)psVar8) >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar21 = *(uint32_t *)psVar15;
            psVar15 = psVar15 + 2;
            puVar21 = puVar21 + 1;
          }
          for (uVar11 = (int)psVar16 - (int)psVar8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(char *)puVar21 = (char)*psVar15;
            psVar15 = (short *)((int)psVar15 + 1);
            puVar21 = (uint32_t *)((int)puVar21 + 1);
          }
        }
        psVar8 = (short *)sub_102f0c70(local_208c,0);
        psVar16 = psVar8;
        do {
          sVar1 = *psVar16;
          psVar16 = psVar16 + 1;
        } while (sVar1 != 0);
        puVar21 = (uint32_t *)auStack_168e;
        do {
          psVar15 = (short *)((int)puVar21 + 2);
          puVar21 = (uint32_t *)((int)puVar21 + 2);
        } while (*psVar15 != 0);
        psVar15 = psVar8;
        for (uVar11 = (uint)((int)psVar16 - (int)psVar8) >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar21 = *(uint32_t *)psVar15;
          psVar15 = psVar15 + 2;
          puVar21 = puVar21 + 1;
        }
        for (uVar11 = (int)psVar16 - (int)psVar8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(char *)puVar21 = (char)*psVar15;
          psVar15 = (short *)((int)psVar15 + 1);
          puVar21 = (uint32_t *)((int)puVar21 + 1);
        }
        if (uVar5 != 0) {
          client_DrawHoverItem_1021cbd0(*p_D2Client_DAT_6fbcbc38,(int)local_28c);
          sub_102f0c70(local_28c,0);
          psVar16 = local_28c;
          do {
            sVar1 = *psVar16;
            psVar16 = psVar16 + 1;
          } while (sVar1 != 0);
          uVar5 = (int)psVar16 - (int)local_28c;
          puVar21 = (uint32_t *)auStack_168e;
          do {
            psVar16 = (short *)((int)puVar21 + 2);
            puVar21 = (uint32_t *)((int)puVar21 + 2);
          } while (*psVar16 != 0);
          psVar16 = local_28c;
          for (uVar11 = uVar5 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar21 = *(uint32_t *)psVar16;
            psVar16 = psVar16 + 2;
            puVar21 = puVar21 + 1;
          }
          iVar9 = *p_D2Client_DAT_6fbcbc38;
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(char *)puVar21 = (char)*psVar16;
            psVar16 = (short *)((int)psVar16 + 1);
            puVar21 = (uint32_t *)((int)puVar21 + 1);
          }
          iVar9 = D2Common_10823(iVar9,0);
          if ((-1 < iVar9) && (iVar9 = D2Common_10925(*p_D2Client_DAT_6fbcbc38,0), -1 < iVar9)) {
            client_DrawHoverItem_1021cf80(extraout_ECX,*p_D2Client_DAT_6fbcbc38,(int)local_c8c);
            sub_102f0c70(local_c8c,0);
            psVar16 = local_c8c;
            do {
              sVar1 = *psVar16;
              psVar16 = psVar16 + 1;
            } while (sVar1 != 0);
            uVar5 = (int)psVar16 - (int)local_c8c;
            puVar21 = (uint32_t *)auStack_168e;
            do {
              psVar16 = (short *)((int)puVar21 + 2);
              puVar21 = (uint32_t *)((int)puVar21 + 2);
            } while (*psVar16 != 0);
            psVar16 = local_c8c;
            for (uVar11 = uVar5 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar21 = *(uint32_t *)psVar16;
              psVar16 = psVar16 + 2;
              puVar21 = puVar21 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(char *)puVar21 = (char)*psVar16;
              psVar16 = (short *)((int)psVar16 + 1);
              puVar21 = (uint32_t *)((int)puVar21 + 1);
            }
          }
        }
        uVar5 = D2Common_10744(*p_D2Client_DAT_6fbcbc38,0x33);
        if (uVar5 != 0) {
          if (((local_52a4 != (int *)0x0) && (*local_52a4 == 0)) &&
             ((local_52a4[1] == 3 &&
              ((uVar5 = D2Common_10089((int *)*p_D2Client_DAT_6fbcbc38), uVar5 == 0 ||
               (uVar5 = D2Common_10822((int *)*p_D2Client_DAT_6fbcbc38), uVar5 == 3)))))) {
            client_DrawHoverItem_1021f4c0((int)local_a8c,*p_D2Client_DAT_6fbcbc38);
            sub_102f0c70(local_a8c,0);
            psVar16 = local_a8c;
            do {
              sVar1 = *psVar16;
              psVar16 = psVar16 + 1;
            } while (sVar1 != 0);
            uVar5 = (int)psVar16 - (int)local_a8c;
            puVar21 = (uint32_t *)auStack_168e;
            do {
              psVar16 = (short *)((int)puVar21 + 2);
              puVar21 = (uint32_t *)((int)puVar21 + 2);
            } while (*psVar16 != 0);
            psVar16 = local_a8c;
            for (uVar11 = uVar5 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar21 = *(uint32_t *)psVar16;
              psVar16 = psVar16 + 2;
              puVar21 = puVar21 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(char *)puVar21 = (char)*psVar16;
              psVar16 = (short *)((int)psVar16 + 1);
              puVar21 = (uint32_t *)((int)puVar21 + 1);
            }
          }
          client_DrawHoverItem_1021f770(*p_D2Client_DAT_6fbcbc38,(int)local_88c,iVar6);
          sub_102f0c70(local_88c,0);
          psVar16 = local_88c;
          do {
            sVar1 = *psVar16;
            psVar16 = psVar16 + 1;
          } while (sVar1 != 0);
          uVar5 = (int)psVar16 - (int)local_88c;
          puVar21 = (uint32_t *)auStack_168e;
          do {
            psVar16 = (short *)((int)puVar21 + 2);
            puVar21 = (uint32_t *)((int)puVar21 + 2);
          } while (*psVar16 != 0);
          psVar16 = local_88c;
          for (uVar11 = uVar5 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar21 = *(uint32_t *)psVar16;
            psVar16 = psVar16 + 2;
            puVar21 = puVar21 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(char *)puVar21 = (char)*psVar16;
            psVar16 = (short *)((int)psVar16 + 1);
            puVar21 = (uint32_t *)((int)puVar21 + 1);
          }
        }
        if ((uVar17 != 0) && (iVar6 = D2Common_10935(*p_D2Client_DAT_6fbcbc38), 0 < iVar6)) {
          client_DrawHoverItem_1021f930(local_52a4,(int)local_288c,*p_D2Client_DAT_6fbcbc38);
          sub_102f0c70(local_288c,0);
          psVar16 = local_288c;
          do {
            sVar1 = *psVar16;
            psVar16 = psVar16 + 1;
          } while (sVar1 != 0);
          uVar5 = (int)psVar16 - (int)local_288c;
          puVar21 = (uint32_t *)auStack_168e;
          do {
            psVar16 = (short *)((int)puVar21 + 2);
            puVar21 = (uint32_t *)((int)puVar21 + 2);
          } while (*psVar16 != 0);
          psVar16 = local_288c;
          for (uVar17 = uVar5 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *puVar21 = *(uint32_t *)psVar16;
            psVar16 = psVar16 + 2;
            puVar21 = puVar21 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(char *)puVar21 = (char)*psVar16;
            psVar16 = (short *)((int)psVar16 + 1);
            puVar21 = (uint32_t *)((int)puVar21 + 1);
          }
        }
        UI_inv_6fb414f0((void *)*p_D2Client_DAT_6fbcbc38,(int)local_68c,0x100);
        uVar12 = 2;
        uVar5 = D2Common_10202((int *)*p_D2Client_DAT_6fbcbc38,0x100,0x77b,"..\\Source\\D2Client\\UI\\inv.cpp")
        ;
        if (uVar5 != 0) {
          uVar12 = 1;
        }
        sub_102f0c70(local_68c,uVar12);
        psVar16 = local_68c;
        do {
          sVar1 = *psVar16;
          psVar16 = psVar16 + 1;
        } while (sVar1 != 0);
        uVar5 = (int)psVar16 - (int)local_68c;
        puVar21 = (uint32_t *)auStack_168e;
        do {
          psVar16 = (short *)((int)puVar21 + 2);
          puVar21 = (uint32_t *)((int)puVar21 + 2);
        } while (*psVar16 != 0);
        psVar16 = local_68c;
        for (uVar17 = uVar5 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar21 = *(uint32_t *)psVar16;
          psVar16 = psVar16 + 2;
          puVar21 = puVar21 + 1;
        }
        local_528c = 0;
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar21 = (char)*psVar16;
          psVar16 = (short *)((int)psVar16 + 1);
          puVar21 = (uint32_t *)((int)puVar21 + 1);
        }
        uVar5 = D2Common_10202((int *)*p_D2Client_DAT_6fbcbc38,0x800,0x784,"..\\Source\\D2Client\\UI\\inv.cpp")
        ;
        if (uVar5 != 0) {
          memset(local_2b3c,0,0x4b0);
          client_DrawHoverItem_Wraps_D2Client_UI_inv_1021ffc0(local_2b3c,*p_D2Client_DAT_6fbcbc38);
          iVar6 = 0;
          do {
            sVar1 = *(short *)((int)local_2b3c + iVar6);
            *(short *)(local_528a + iVar6 + -2) = sVar1;
            iVar6 = iVar6 + 2;
          } while (sVar1 != 0);
        }
        client_DrawHoverItem_102246b0(&local_528c,*p_D2Client_DAT_6fbcbc38,1,0,puVar21);
        piVar3 = local_52a4;
        local_328c = 0;
        sub_102f0bf0(local_52a4,*p_D2Client_DAT_6fbcbc38,&local_328c,0x200);
        local_368c = 0;
        iVar6 = *p_D2Client_DAT_6fbcbc38;
        if ((iVar6 != 0) && (*(int *)(iVar6 + 0x10) == 1)) {
          sub_102f0c10(iVar6,piVar3,&local_368c,0x200);
        }
        memset((void *)((int)&uStack_4a8e + 2),0,0x400);
        local_52ac = 0;
        if (0 < *(int *)(local_52a8 + 0xc)) {
          local_52b0 = (int *)(local_52a8 + 0x110);
          do {
            iVar6 = *local_52b0;
            if (iVar6 == 0) break;
            iVar9 = sub_102f0c30();
            memset(local_2e8c,0,0x800);
            uVar2 = *(ushort *)(iVar6 + 0x24);
            if (uVar2 != 0) {
              pvVar13 = (void *)D2Lang_10003((uint)uVar2);
              pvVar14 = (void *)D2Lang_10003(0x2769);
              UI_inv_6fb40cb0(local_2e8c,pvVar14,pvVar13);
              psVar16 = psVar4;
              do {
                sVar1 = *psVar16;
                psVar16 = psVar16 + 1;
              } while (sVar1 != 0);
              puVar21 = (uint32_t *)auStack_2e8e;
              do {
                psVar8 = (short *)((int)puVar21 + 2);
                puVar21 = (uint32_t *)((int)puVar21 + 2);
              } while (*psVar8 != 0);
              psVar8 = psVar4;
              for (uVar5 = (uint)((int)psVar16 - (int)psVar4) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                *puVar21 = *(uint32_t *)psVar8;
                psVar8 = psVar8 + 2;
                puVar21 = puVar21 + 1;
              }
              for (uVar5 = (int)psVar16 - (int)psVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(char *)puVar21 = (char)*psVar8;
                psVar8 = (short *)((int)psVar8 + 1);
                puVar21 = (uint32_t *)((int)puVar21 + 1);
              }
            }
            sub_102f0c70(local_2e8c,(iVar9 != 0) + 1);
            psVar16 = (short *)local_2e8c;
            do {
              sVar1 = *psVar16;
              psVar16 = psVar16 + 1;
            } while (sVar1 != 0);
            uVar5 = (int)psVar16 - (int)local_2e8c;
            puVar21 = &uStack_4a8e;
            do {
              psVar16 = (short *)((int)puVar21 + 2);
              puVar21 = (uint32_t *)((int)puVar21 + 2);
            } while (*psVar16 != 0);
            local_52b0 = local_52b0 + 1;
            psVar16 = (short *)local_2e8c;
            for (uVar17 = uVar5 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *puVar21 = *(uint32_t *)psVar16;
              psVar16 = psVar16 + 2;
              puVar21 = puVar21 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(char *)puVar21 = (char)*psVar16;
              psVar16 = (short *)((int)psVar16 + 1);
              puVar21 = (uint32_t *)((int)puVar21 + 1);
            }
            local_52ac = local_52ac + 1;
          } while (local_52ac < *(int *)(local_52a8 + 0xc));
        }
        psVar8 = (short *)sub_102f0c70((int)&uStack_4a8e + 2,2);
        psVar16 = psVar8;
        do {
          sVar1 = *psVar16;
          *(short *)((int)psVar16 + (int)&uStack_1e8e + (2 - (int)psVar8)) = sVar1;
          psVar16 = psVar16 + 1;
        } while (sVar1 != 0);
        psVar8 = (short *)sub_102f0c70((int)&uStack_48e + 2,4);
        psVar16 = psVar8;
        do {
          sVar1 = *psVar16;
          psVar16 = psVar16 + 1;
        } while (sVar1 != 0);
        puVar21 = &uStack_1e8e;
        do {
          psVar15 = (short *)((int)puVar21 + 2);
          puVar21 = (uint32_t *)((int)puVar21 + 2);
        } while (*psVar15 != 0);
        psVar15 = psVar8;
        for (uVar5 = (uint)((int)psVar16 - (int)psVar8) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar21 = *(uint32_t *)psVar15;
          psVar15 = psVar15 + 2;
          puVar21 = puVar21 + 1;
        }
        for (uVar5 = (int)psVar16 - (int)psVar8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar21 = (char)*psVar15;
          psVar15 = (short *)((int)psVar15 + 1);
          puVar21 = (uint32_t *)((int)puVar21 + 1);
        }
        psVar16 = psVar4;
        psVar8 = psVar4;
        if (local_368c != 0) {
          do {
            sVar1 = *psVar8;
            psVar8 = psVar8 + 1;
          } while (sVar1 != 0);
          uVar5 = (int)psVar8 - (int)psVar4;
          puVar21 = &uStack_1e8e;
          do {
            psVar8 = (short *)((int)puVar21 + 2);
            puVar21 = (uint32_t *)((int)puVar21 + 2);
          } while (*psVar8 != 0);
          psVar8 = psVar4;
          for (uVar17 = uVar5 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *puVar21 = *(uint32_t *)psVar8;
            psVar8 = psVar8 + 2;
            puVar21 = puVar21 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(char *)puVar21 = (char)*psVar8;
            psVar8 = (short *)((int)psVar8 + 1);
            puVar21 = (uint32_t *)((int)puVar21 + 1);
          }
          psVar15 = (short *)sub_102f0c70(&local_368c,4);
          psVar8 = psVar15;
          do {
            sVar1 = *psVar8;
            psVar8 = psVar8 + 1;
          } while (sVar1 != 0);
          puVar21 = &uStack_1e8e;
          do {
            psVar20 = (short *)((int)puVar21 + 2);
            puVar21 = (uint32_t *)((int)puVar21 + 2);
          } while (*psVar20 != 0);
          psVar20 = psVar15;
          for (uVar5 = (uint)((int)psVar8 - (int)psVar15) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar21 = *(uint32_t *)psVar20;
            psVar20 = psVar20 + 2;
            puVar21 = puVar21 + 1;
          }
          for (uVar5 = (int)psVar8 - (int)psVar15 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(char *)puVar21 = (char)*psVar20;
            psVar20 = (short *)((int)psVar20 + 1);
            puVar21 = (uint32_t *)((int)puVar21 + 1);
          }
        }
        do {
          sVar1 = *psVar16;
          psVar16 = psVar16 + 1;
        } while (sVar1 != 0);
        uVar5 = (int)psVar16 - (int)psVar4;
        puVar21 = &uStack_1e8e;
        do {
          psVar16 = (short *)((int)puVar21 + 2);
          puVar21 = (uint32_t *)((int)puVar21 + 2);
        } while (*psVar16 != 0);
        psVar16 = psVar4;
        for (uVar17 = uVar5 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar21 = *(uint32_t *)psVar16;
          psVar16 = psVar16 + 2;
          puVar21 = puVar21 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar21 = (char)*psVar16;
          psVar16 = (short *)((int)psVar16 + 1);
          puVar21 = (uint32_t *)((int)puVar21 + 1);
        }
        if (local_328c != 0) {
          psVar8 = (short *)sub_102f0c70(&local_328c,2);
          psVar16 = psVar8;
          do {
            sVar1 = *psVar16;
            psVar16 = psVar16 + 1;
          } while (sVar1 != 0);
          puVar21 = &uStack_1e8e;
          do {
            psVar15 = (short *)((int)puVar21 + 2);
            puVar21 = (uint32_t *)((int)puVar21 + 2);
          } while (*psVar15 != 0);
          psVar15 = psVar8;
          for (uVar5 = (uint)((int)psVar16 - (int)psVar8) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar21 = *(uint32_t *)psVar15;
            psVar15 = psVar15 + 2;
            puVar21 = puVar21 + 1;
          }
          for (uVar5 = (int)psVar16 - (int)psVar8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(char *)puVar21 = (char)*psVar15;
            psVar15 = (short *)((int)psVar15 + 1);
            puVar21 = (uint32_t *)((int)puVar21 + 1);
          }
        }
        psVar8 = (short *)sub_102f0c70(&local_528c,3);
        psVar16 = psVar8;
        do {
          sVar1 = *psVar16;
          psVar16 = psVar16 + 1;
        } while (sVar1 != 0);
        puVar21 = &uStack_1e8e;
        do {
          psVar15 = (short *)((int)puVar21 + 2);
          puVar21 = (uint32_t *)((int)puVar21 + 2);
        } while (*psVar15 != 0);
        psVar15 = psVar8;
        for (uVar5 = (uint)((int)psVar16 - (int)psVar8) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar21 = *(uint32_t *)psVar15;
          psVar15 = psVar15 + 2;
          puVar21 = puVar21 + 1;
        }
        for (uVar5 = (int)psVar16 - (int)psVar8 & 3; psVar16 = (short *)local_168c, uVar5 != 0;
            uVar5 = uVar5 - 1) {
          *(char *)puVar21 = (char)*psVar15;
          psVar15 = (short *)((int)psVar15 + 1);
          puVar21 = (uint32_t *)((int)puVar21 + 1);
        }
        do {
          sVar1 = *psVar16;
          psVar16 = psVar16 + 1;
        } while (sVar1 != 0);
        uVar5 = (int)psVar16 - (int)local_168c;
        puVar21 = &uStack_1e8e;
        do {
          psVar16 = (short *)((int)puVar21 + 2);
          puVar21 = (uint32_t *)((int)puVar21 + 2);
        } while (*psVar16 != 0);
        psVar16 = (short *)local_168c;
        for (uVar17 = uVar5 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar21 = *(uint32_t *)psVar16;
          psVar16 = psVar16 + 2;
          puVar21 = puVar21 + 1;
        }
        iVar6 = *p_D2Client_DAT_6fbcbc34;
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar21 = (char)*psVar16;
          psVar16 = (short *)((int)psVar16 + 1);
          puVar21 = (uint32_t *)((int)puVar21 + 1);
        }
        if (((iVar6 == 0) || (iVar6 < 1)) || (9 < iVar6)) {
          iVar6 = 0;
          do {
            sVar1 = *(short *)((int)&uStack_1e8e + iVar6 + 2);
            *(short *)((int)&uStack_468e + iVar6 + 2) = sVar1;
            iVar6 = iVar6 + 2;
          } while (sVar1 != 0);
        }
        else {
          memset(local_8c,0,0x80);
          local_52a8 = 0;
          sub_102f0c50(this,&local_52a8,*p_D2Client_DAT_6fbcbc38,*p_D2Client_DAT_6fb90ea4,local_8c,0x40);
          iVar6 = 0;
          do {
            sVar1 = *(short *)((int)&uStack_1e8e + iVar6 + 2);
            *(short *)((int)&uStack_468e + iVar6 + 2) = sVar1;
            iVar6 = iVar6 + 2;
          } while (sVar1 != 0);
          if (local_52a8 == 0) {
            if (*p_D2Client_DAT_6fbcbc34 != 4) {
              memset(local_8c,0,0x80);
              psVar8 = (short *)D2Lang_10003(0xd05);
              psVar16 = psVar8;
              do {
                sVar1 = *psVar16;
                *(short *)((int)psVar16 + ((int)local_8c - (int)psVar8)) = sVar1;
                psVar16 = psVar16 + 1;
                psVar15 = psVar4;
              } while (sVar1 != 0);
              do {
                sVar1 = *psVar15;
                psVar15 = psVar15 + 1;
              } while (sVar1 != 0);
              uVar5 = (int)psVar15 - (int)psVar4;
              puVar21 = &uStack_468e;
              do {
                psVar16 = (short *)((int)puVar21 + 2);
                puVar21 = (uint32_t *)((int)puVar21 + 2);
              } while (*psVar16 != 0);
              for (uVar17 = uVar5 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                *puVar21 = *(uint32_t *)psVar4;
                psVar4 = psVar4 + 2;
                puVar21 = puVar21 + 1;
              }
              for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(char *)puVar21 = (char)*psVar4;
                psVar4 = (short *)((int)psVar4 + 1);
                puVar21 = (uint32_t *)((int)puVar21 + 1);
              }
              psVar16 = (short *)sub_102f0c70(local_8c,1);
              psVar4 = psVar16;
              do {
                sVar1 = *psVar4;
                psVar4 = psVar4 + 1;
              } while (sVar1 != 0);
              puVar21 = &uStack_468e;
              do {
                psVar8 = (short *)((int)puVar21 + 2);
                puVar21 = (uint32_t *)((int)puVar21 + 2);
              } while (*psVar8 != 0);
              psVar8 = psVar16;
              for (uVar5 = (uint)((int)psVar4 - (int)psVar16) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                *puVar21 = *(uint32_t *)psVar8;
                psVar8 = psVar8 + 2;
                puVar21 = puVar21 + 1;
              }
              for (uVar5 = (int)psVar4 - (int)psVar16 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(char *)puVar21 = (char)*psVar8;
                psVar8 = (short *)((int)psVar8 + 1);
                puVar21 = (uint32_t *)((int)puVar21 + 1);
              }
            }
          }
          else {
            psVar16 = psVar4;
            if (local_8c[0] != 0) {
              do {
                sVar1 = *psVar16;
                psVar16 = psVar16 + 1;
              } while (sVar1 != 0);
              uVar5 = (int)psVar16 - (int)psVar4;
              puVar21 = &uStack_468e;
              do {
                psVar16 = (short *)((int)puVar21 + 2);
                puVar21 = (uint32_t *)((int)puVar21 + 2);
              } while (*psVar16 != 0);
              for (uVar17 = uVar5 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                *puVar21 = *(uint32_t *)psVar4;
                psVar4 = psVar4 + 2;
                puVar21 = puVar21 + 1;
              }
              for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(char *)puVar21 = (char)*psVar4;
                psVar4 = (short *)((int)psVar4 + 1);
                puVar21 = (uint32_t *)((int)puVar21 + 1);
              }
            }
            psVar4 = local_8c;
            do {
              sVar1 = *psVar4;
              psVar4 = psVar4 + 1;
            } while (sVar1 != 0);
            uVar5 = (int)psVar4 - (int)local_8c;
            puVar21 = &uStack_468e;
            do {
              psVar4 = (short *)((int)puVar21 + 2);
              puVar21 = (uint32_t *)((int)puVar21 + 2);
            } while (*psVar4 != 0);
            psVar4 = local_8c;
            for (uVar17 = uVar5 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *puVar21 = *(uint32_t *)psVar4;
              psVar4 = psVar4 + 2;
              puVar21 = puVar21 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(char *)puVar21 = (char)*psVar4;
              psVar4 = (short *)((int)psVar4 + 1);
              puVar21 = (uint32_t *)((int)puVar21 + 1);
            }
          }
        }
        client_DrawHoverItem_10220830((short *)((int)&uStack_468e + 2),(int *)*p_D2Client_DAT_6fbcbc38);
        local_52a0 = 0;
        local_5290 = 0;
        D2Win_10177_102aa690((int)&uStack_468e + 2,&local_52a0,(int *)&local_5290);
        uVar5 = *p_D2Client_DAT_6fb90ea8;
        uVar17 = *p_D2Client_DAT_6fb90eac;
        if ((uVar17 == local_5290) || ((int)(uVar17 - local_5290) < 0)) {
          uVar5 = *p_D2Client_DAT_6fb90eb0;
          uVar17 = *p_D2Client_DAT_6fb90eb4 + local_5290;
        }
        D2Win_10085((void *)((int)&uStack_468e + 2),uVar5,uVar17,0,1);
      }
    }
  }
  return;
}


// 0x10222470  (ghidra: FUN_10222470)  [range]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void client_DrawHoverItem_Wraps_D2Client_UI_inv_10222470(int *param_1,int param_2,uint32_t reg_ESI,uint32_t reg_EDI)

{
  int iVar1;
  short sVar2;
  short *psVar3;
  uint uVar4;
  void *pvVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  uint8_t uVar9;
  uint uVar10;
  uint32_t extraout_ECX;
  uint extraout_EDX;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint32_t *puVar14;
  uint64_t uVar15;
  ulonglong uVar16;
  uint8_t auStack_804c [4];
  int *piStack_8048;
  short *psStack_8044;
  byte bStack_803d;
  int *local_803c;
  uint local_8038;
  uint local_8034;
  uint local_8030;
  uint local_802c;
  int iStack_8028;
  uint uStack_8024;
  void *pvStack_8020;
  int iStack_801c;
  uint uStack_8018;
  uint32_t uStack_8014;
  uint8_t auStack_8012 [512];
  uint32_t uStack_7e12;
  uint32_t uStack_7c12;
  uint8_t local_7a10 [510];
  uint8_t auStack_7812 [2];
  uint32_t local_7810 [1023];
  uint32_t uStack_6812;
  uint8_t local_6410 [512];
  uint16_t local_6210 [256];
  uint16_t local_6010 [256];
  uint8_t local_5e10 [512];
  uint8_t local_5c10 [512];
  uint8_t local_5a10 [512];
  uint8_t local_5810 [512];
  uint8_t local_5610 [512];
  short local_5410 [256];
  uint8_t local_5210 [510];
  uint32_t uStack_5012;
  uint8_t auStack_500e [2044];
  uint16_t uStack_4812;
  short local_4010 [1023];
  uint32_t uStack_3812;
  uint8_t local_3010 [2048];
  short local_2810 [1024];
  uint8_t local_2010 [8196];
  uint local_c;
  uint8_t  stack0xffff7fec;   /* not traced by Ghidra: address of a stack slot */
  
  local_c = DAT_1039800c ^ (uint)auStack_804c;
  local_803c = param_1;
  local_8038 = 0;
  local_8034 = 0;
  local_8030 = 0;
  local_802c = 0;
  memset(local_7810,0,0x1000);
  memset((void *)((int)&uStack_5012 + 2),0,0x1000);
  memset((uint8_t *)((int)register0x00000010 + -0x8012) + 2,0,0x200);
  memset((void *)((int)&uStack_3812 + 2),0,0x800);
  memset(local_5410,0,0x200);
  memset((void *)((int)&uStack_7e12 + 2),0,0x200);
  memset(local_7a10,0,0x200);
  memset(local_5810,0,0x200);
  memset(local_5610,0,0x200);
  memset(local_5210,0,0x200);
  memset((void *)((int)&uStack_7c12 + 2),0,0x200);
  memset(local_5c10,0,0x200);
  memset(local_5e10,0,0x200);
  memset(local_6010,0,0x200);
  memset(local_6410,0,0x200);
  memset(local_5a10,0,0x200);
  memset(local_6210,0,0x200);
  memset(local_4010,0,0x800);
  memset(local_2810,0,0x800);
  memset(local_3010,0,0x800);
  memset(local_2010,0,0x2000);
  psStack_8044 = (short *)D2Lang_10003(0xf9e);
  psVar3 = (short *)D2Lang_10003(0xf9d);
  pvStack_8020 = (void *)D2Lang_10003(0x1030);
  piStack_8048 = param_1;
  if ((param_2 != 0) && (piStack_8048 = param_1, (int *)*p_D2Client_DAT_6fbcbbfc != (int *)0x0)) {
    piStack_8048 = (int *)*p_D2Client_DAT_6fbcbbfc;
  }
  if (*p_D2Client_DAT_6fbcc474 == 0) {
    uVar15 = sub_102edf00();
    if ((int)uVar15 != 0) {
      iStack_801c = *p_D2Client_DAT_6fbcb9a4;
      iVar12 = iStack_801c + -0x3f + *p_D2Client_DAT_6fb8bc4c;
      iVar13 = *p_D2Client_DAT_6fbcb9a0;
      if ((((iVar13 + 0x110 <= *p_D2Client_DAT_6fbcb828) && (*p_D2Client_DAT_6fbcb828 <= iVar13 + 0x130)) &&
          (iVar12 + -0x20 <= (int)*p_D2Client_DAT_6fbcb824)) && ((int)*p_D2Client_DAT_6fbcb824 <= iVar12)) {
        D2Win_10085(pvStack_8020,iVar13 + 0x11f,iStack_801c + -0x62 + *p_D2Client_DAT_6fb8bc4c,0,1);
      }
    }
    uVar15 = sub_102edf00();
    if (((((int)uVar15 != 0) || (uVar15 = sub_102edf00(), (int)uVar15 != 0)) ||
        ((uVar15 = sub_102edf00(), (int)uVar15 != 0 ||
         ((uVar15 = sub_102edf00(), (int)uVar15 != 0 || (uVar15 = sub_102edf00(), (int)uVar15 != 0))
         )))) || (uVar15 = sub_102edf00(), (int)uVar15 != 0)) {
      iVar13 = *p_D2Client_DAT_6fb8bc48 - *p_D2Client_DAT_6fbcb9a0;
      if ((iVar13 + -0x12e <= *p_D2Client_DAT_6fbcb828) && (*p_D2Client_DAT_6fbcb828 <= iVar13 + -0x10e)) {
        iVar12 = *p_D2Client_DAT_6fb8bc4c;
        iVar1 = *p_D2Client_DAT_6fbcb9a4;
        uStack_8024 = *p_D2Client_DAT_6fbcb824;
        if (((uint)(iVar1 + -0x35 + iVar12) <= uStack_8024) &&
           (uStack_8024 <= (uint)(iVar1 + -0x15 + iVar12))) {
          D2Win_10085(pvStack_8020,iVar13 - 0x11f,iVar1 + -0x38 + iVar12,0,1);
        }
      }
      iVar12 = *p_D2Client_DAT_6fbcb9a4 + *p_D2Client_DAT_6fb8bc4c + -0x1b;
      if ((((iVar13 + -0xf8 <= *p_D2Client_DAT_6fbcb828) && (*p_D2Client_DAT_6fbcb828 <= iVar13 + -0xd9)) &&
          (iVar12 + -0x12 <= (int)*p_D2Client_DAT_6fbcb824)) &&
         (((int)*p_D2Client_DAT_6fbcb824 <= iVar12 && (uVar4 = sub_6faf5980(), uVar4 == 0)))) {
        uVar4 = 0x101d;
        switch(*p_D2Client_DAT_6fbcbc34) {
        case 1:
          uVar4 = 0x1003;
          break;
        case 0xb:
          uVar4 = 0x1021;
          break;
        case 0xc:
        case 0xd:
        case 0xf:
          uVar4 = 0x101e;
        }
        iVar12 = *p_D2Client_DAT_6fb8bc4c;
        iVar1 = *p_D2Client_DAT_6fbcb9a4;
        pvVar5 = (void *)D2Lang_10003(uVar4);
        D2Win_10085(pvVar5,iVar13 - 0xde,iVar1 + iVar12 + -0x30,0,1);
      }
      uVar4 = Fog_10227();
      if (((uVar4 != 0) && (*p_D2Client_DAT_6fbc9854 != 0)) && (iVar13 = sub_102293e0(), iVar13 != 0)) {
        memset((void *)((int)&uStack_6812 + 2),0,0x400);
        psVar6 = (short *)D2Lang_10003(0x58c6);
        psVar7 = psVar6;
        do {
          sVar2 = *psVar7;
          psVar7 = psVar7 + 1;
          *(short *)(((int)&uStack_6812 - (int)psVar6) + (int)psVar7) = sVar2;
        } while (sVar2 != 0);
        sVar2 = sub_10228270(0x2c,1);
        psVar7 = psVar3;
        if (sVar2 == -1) {
          sVar2 = sub_10228270(0x2c,0);
          if (sVar2 != -1) {
            do {
              sVar2 = *psVar7;
              psVar7 = psVar7 + 1;
            } while (sVar2 != 0);
            uVar4 = (int)psVar7 - (int)psVar3;
            puVar14 = &uStack_6812;
            do {
              psVar7 = (short *)((int)puVar14 + 2);
              puVar14 = (uint32_t *)((int)puVar14 + 2);
            } while (*psVar7 != 0);
            for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar14 = *(uint32_t *)psVar3;
              psVar3 = psVar3 + 2;
              puVar14 = puVar14 + 1;
            }
            for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(char *)puVar14 = (char)*psVar3;
              psVar3 = (short *)((int)psVar3 + 1);
              puVar14 = (uint32_t *)((int)puVar14 + 1);
            }
            psVar7 = (short *)sub_10228b70(0x2c,0);
            psVar3 = psVar7;
            do {
              sVar2 = *psVar3;
              psVar3 = psVar3 + 1;
            } while (sVar2 != 0);
            uVar4 = (int)psVar3 - (int)psVar7;
            puVar14 = &uStack_6812;
            do {
              psVar3 = (short *)((int)puVar14 + 2);
              puVar14 = (uint32_t *)((int)puVar14 + 2);
            } while (*psVar3 != 0);
            goto LAB_10222a2c;
          }
        }
        else {
          do {
            sVar2 = *psVar7;
            psVar7 = psVar7 + 1;
          } while (sVar2 != 0);
          uVar4 = (int)psVar7 - (int)psVar3;
          puVar14 = &uStack_6812;
          do {
            psVar7 = (short *)((int)puVar14 + 2);
            puVar14 = (uint32_t *)((int)puVar14 + 2);
          } while (*psVar7 != 0);
          for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar14 = *(uint32_t *)psVar3;
            psVar3 = psVar3 + 2;
            puVar14 = puVar14 + 1;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(char *)puVar14 = (char)*psVar3;
            psVar3 = (short *)((int)psVar3 + 1);
            puVar14 = (uint32_t *)((int)puVar14 + 1);
          }
          psVar7 = (short *)sub_10228b70(0x2c,1);
          psVar3 = psVar7;
          do {
            sVar2 = *psVar3;
            psVar3 = psVar3 + 1;
          } while (sVar2 != 0);
          uVar4 = (int)psVar3 - (int)psVar7;
          puVar14 = &uStack_6812;
          do {
            psVar3 = (short *)((int)puVar14 + 2);
            puVar14 = (uint32_t *)((int)puVar14 + 2);
          } while (*psVar3 != 0);
LAB_10222a2c:
          for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar14 = *(uint32_t *)psVar7;
            psVar7 = psVar7 + 2;
            puVar14 = puVar14 + 1;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(char *)puVar14 = (char)*psVar7;
            psVar7 = (short *)((int)psVar7 + 1);
            puVar14 = (uint32_t *)((int)puVar14 + 1);
          }
        }
        iVar13 = 600;
        if (*p_D2Client_DAT_6fbcb828 <= *p_D2Client_DAT_6fbcb9a0 + 500) {
          iVar13 = 0x170;
        }
        D2Win_10085((void *)((int)&uStack_6812 + 2),iVar13 + *p_D2Client_DAT_6fbcb9a0,0x15 - *p_D2Client_DAT_6fbcb9a4,0,1)
        ;
      }
    }
  }
  piVar11 = local_803c;
  if (DAT_103d6228 != (int *)0x0) {
    piVar11 = DAT_103d6228;
  }
  if ((((*p_D2Client_DAT_6fbcbc2c == 0) && (*p_D2Client_DAT_6fbcbc28 == 0)) || (*p_D2Client_DAT_6fbcbc38 == 0)) ||
     (((int *)piVar11[0x18] == (int *)0x0 ||
      (iVar13 = D2Common_11017((int *)piVar11[0x18]), iVar13 != 0)))) {
    return;
  }
  uVar15 = sub_102edf00();
  uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
  if (((int)uVar15 == 0) && (piVar11[0x18] != 0)) {
    uVar4 = 0;
    if (((int *)*p_D2Client_DAT_6fbcbc38 != (int *)0x0) &&
       (uVar10 = D2Common_10391(piVar11[0x18],(int *)*p_D2Client_DAT_6fbcbc38), uVar4 = extraout_EDX,
       uVar10 == 0)) {
      return;
    }
  }
  uStack_8014 = 0;
  uStack_8018 = 0;
  if ((((*p_D2Client_DAT_6fbcbc28 != 0) && (*p_D2Client_DAT_6fb90ea4 == 0)) && (*p_D2Client_DAT_6fbc97a8 != 0)) &&
     ((0 < *p_D2Client_DAT_6fbcbc34 && (*p_D2Client_DAT_6fbcbc34 < 10)))) {
    UI_inv_6fb414f0((void *)*p_D2Client_DAT_6fbcbc38,(int)local_4010,0x7f);
    psVar3 = (short *)D2Lang_10003(0xd7f);
    psVar7 = psStack_8044;
    iVar13 = -(int)psVar3;
    do {
      sVar2 = *psVar3;
      psVar3 = psVar3 + 1;
      *(short *)((uint8_t *)((int)register0x00000010 + -0x8012) + iVar13 + (int)psVar3) = sVar2;
      psVar6 = psStack_8044;
    } while (sVar2 != 0);
    do {
      sVar2 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar2 != 0);
    uVar4 = (int)psVar6 - (int)psStack_8044;
    puVar14 = (uint32_t *)((int)register0x00000010 + -0x8012);
    do {
      psVar3 = (short *)((int)puVar14 + 2);
      puVar14 = (uint32_t *)((int)puVar14 + 2);
    } while (*psVar3 != 0);
    psVar3 = psStack_8044;
    for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar14 = *(uint32_t *)psVar3;
      psVar3 = psVar3 + 2;
      puVar14 = puVar14 + 1;
    }
    psVar6 = (short *)((uint8_t *)((int)register0x00000010 + -0x8012) + 2);
    for (uVar4 = uVar4 & 3; psVar8 = psVar6, uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar14 = (char)*psVar3;
      psVar3 = (short *)((int)psVar3 + 1);
      puVar14 = (uint32_t *)((int)puVar14 + 1);
    }
    do {
      sVar2 = *psVar8;
      psVar8 = psVar8 + 1;
    } while (sVar2 != 0);
    uVar4 = (int)psVar8 - (int)psVar6;
    puVar14 = (uint32_t *)auStack_7812;
    do {
      psVar3 = (short *)((int)puVar14 + 2);
      puVar14 = (uint32_t *)((int)puVar14 + 2);
    } while (*psVar3 != 0);
    for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar14 = *(uint32_t *)psVar6;
      psVar6 = psVar6 + 2;
      puVar14 = puVar14 + 1;
    }
    piVar11 = (int *)*p_D2Client_DAT_6fbcbc38;
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar14 = (char)*psVar6;
      psVar6 = (short *)((int)psVar6 + 1);
      puVar14 = (uint32_t *)((int)puVar14 + 1);
    }
    uVar4 = D2Common_10822(piVar11);
    if (uVar4 != 7) {
      psVar6 = (short *)D2Lang_10003(uVar4 + 0x2aa5);
      psVar3 = psVar6;
      do {
        sVar2 = *psVar3;
        psVar3 = psVar3 + 1;
      } while (sVar2 != 0);
      puVar14 = (uint32_t *)auStack_7812;
      do {
        psVar8 = (short *)((int)puVar14 + 2);
        puVar14 = (uint32_t *)((int)puVar14 + 2);
      } while (*psVar8 != 0);
      psVar8 = psVar6;
      for (uVar4 = (uint)((int)psVar3 - (int)psVar6) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar14 = *(uint32_t *)psVar8;
        psVar8 = psVar8 + 2;
        puVar14 = puVar14 + 1;
      }
      for (uVar4 = (int)psVar3 - (int)psVar6 & 3; psVar3 = psVar7, uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)puVar14 = (char)*psVar8;
        psVar8 = (short *)((int)psVar8 + 1);
        puVar14 = (uint32_t *)((int)puVar14 + 1);
      }
      do {
        sVar2 = *psVar3;
        psVar3 = psVar3 + 1;
      } while (sVar2 != 0);
      uVar4 = (int)psVar3 - (int)psVar7;
      puVar14 = (uint32_t *)auStack_7812;
      do {
        psVar3 = (short *)((int)puVar14 + 2);
        puVar14 = (uint32_t *)((int)puVar14 + 2);
      } while (*psVar3 != 0);
      for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar14 = *(uint32_t *)psVar7;
        psVar7 = psVar7 + 2;
        puVar14 = puVar14 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)puVar14 = (char)*psVar7;
        psVar7 = (short *)((int)psVar7 + 1);
        puVar14 = (uint32_t *)((int)puVar14 + 1);
      }
    }
    psVar3 = local_4010;
    do {
      sVar2 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar2 != 0);
    uVar4 = (int)psVar3 - (int)local_4010;
    puVar14 = (uint32_t *)auStack_7812;
    do {
      psVar3 = (short *)((int)puVar14 + 2);
      puVar14 = (uint32_t *)((int)puVar14 + 2);
    } while (*psVar3 != 0);
    psVar3 = local_4010;
    for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar14 = *(uint32_t *)psVar3;
      psVar3 = psVar3 + 2;
      puVar14 = puVar14 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar14 = (char)*psVar3;
      psVar3 = (short *)((int)psVar3 + 1);
      puVar14 = (uint32_t *)((int)puVar14 + 1);
    }
    sub_102f0c70(local_7810,0);
    sub_102f0bd0((int)&uStack_5012 + 2,local_7810);
    D2Win_10177_102aa690((int)&uStack_5012 + 2,&stack0xffff7fec,(int *)&uStack_8018);
    uVar4 = 0;
    goto LAB_10223c93;
  }
  uVar16 = D2Common_10106((uint)p_D2Client_DAT_6fbcbc38,uVar4,(int *)*p_D2Client_DAT_6fbcbc38);
  iVar13 = (int)uVar16;
  iStack_8028 = iVar13;
  if ((*p_D2Client_DAT_6fbcb864 == 8) || (iVar12 = D2Common_10661((int *)*p_D2Client_DAT_6fbcbc38), iVar12 != 0)) {
    UI_inv_6fb42440();
    return;
  }
  if ((iVar13 == 5) &&
     (uVar4 = D2Common_10202((int *)*p_D2Client_DAT_6fbcbc38,0x10,3999,"..\\Source\\D2Client\\UI\\inv.cpp"),
     uVar4 != 0)) {
    client_DrawHoverItem_Wraps_D2Client_UI_inv_10221380(piVar11);
    return;
  }
  iVar13 = D2Common_11088((int *)*p_D2Client_DAT_6fbcbc38);
  if (iVar13 == 0x12) {
    client_DrawHoverItem_10221040();
    return;
  }
  local_803c = (int *)D2Common_10822((int *)*p_D2Client_DAT_6fbcbc38);
  if (local_803c != (int *)0x7) {
    psVar7 = (short *)D2Lang_10003((int)local_803c + 0x2aa5);
    psVar3 = psVar7;
    do {
      sVar2 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar2 != 0);
    puVar14 = &uStack_7e12;
    do {
      psVar6 = (short *)((int)puVar14 + 2);
      puVar14 = (uint32_t *)((int)puVar14 + 2);
    } while (*psVar6 != 0);
    psVar6 = psVar7;
    for (uVar4 = (uint)((int)psVar3 - (int)psVar7) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar14 = *(uint32_t *)psVar6;
      psVar6 = psVar6 + 2;
      puVar14 = puVar14 + 1;
    }
    for (uVar4 = (int)psVar3 - (int)psVar7 & 3; psVar3 = psStack_8044, uVar4 != 0; uVar4 = uVar4 - 1
        ) {
      *(char *)puVar14 = (char)*psVar6;
      psVar6 = (short *)((int)psVar6 + 1);
      puVar14 = (uint32_t *)((int)puVar14 + 1);
    }
    do {
      sVar2 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar2 != 0);
    uVar4 = (int)psVar3 - (int)psStack_8044;
    puVar14 = &uStack_7e12;
    do {
      psVar3 = (short *)((int)puVar14 + 2);
      puVar14 = (uint32_t *)((int)puVar14 + 2);
    } while (*psVar3 != 0);
    psVar3 = psStack_8044;
    for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar14 = *(uint32_t *)psVar3;
      psVar3 = psVar3 + 2;
      puVar14 = puVar14 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar14 = (char)*psVar3;
      psVar3 = (short *)((int)psVar3 + 1);
      puVar14 = (uint32_t *)((int)puVar14 + 1);
    }
    if (piStack_8048 == (int *)0x0) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = piStack_8048[1];
    }
    local_802c = (uint)((int *)uVar4 != local_803c);
  }
  psVar3 = psStack_8044;
  piVar11 = piStack_8048;
  if (*p_D2Client_DAT_6fbcbc38 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(uint *)(*p_D2Client_DAT_6fbcbc38 + 4);
  }
  psVar7 = (short *)D2Common_10695(uVar4);
  psStack_8044 = psVar7;
  if (psVar7 == (short *)0x0) {
    Fog_10024("","D2CLIENT_DrawHoverItemDetails",0xfc2);
                    /* WARNING: Subroutine does not return */
    _exit(-1);
  }
  iVar13 = D2Common_11144((int *)*p_D2Client_DAT_6fbcbc38);
  if (iVar13 == 0) {
    client_DrawHoverItem_1021dec0((int)local_5e10,*p_D2Client_DAT_6fbcbc38);
  }
  else {
    client_DrawHoverItem_1021e110((int)local_7810,*p_D2Client_DAT_6fbcbc38,psVar7);
  }
  iStack_801c = 0;
  uStack_8024 = 0;
  pvStack_8020 = (void *)0x0;
  D2Common_10244((int *)*p_D2Client_DAT_6fbcbc38,piVar11,0,&iStack_801c,&uStack_8024,(int *)&pvStack_8020);
  uVar4 = D2Common_10202((int *)*p_D2Client_DAT_6fbcbc38,0x10,0xfd6,"..\\Source\\D2Client\\UI\\inv.cpp");
  if ((uVar4 != 0) && (iVar13 = D2Common_11015((int *)*p_D2Client_DAT_6fbcbc38,piVar11), 1 < iVar13)) {
    local_8038 = (uint)(pvStack_8020 == (void *)0x0);
    client_DrawHoverItem_1021e3d0((int)local_6410);
  }
  uVar4 = D2Common_10744(*p_D2Client_DAT_6fbcbc38,0x35);
  if (uVar4 != 0) {
    client_DrawHoverItem_1021ef70(local_2810);
  }
  uVar4 = D2Common_10757((int *)*p_D2Client_DAT_6fbcbc38);
  if (uVar4 != 0) {
    client_DrawHoverItem_1021f050(*p_D2Client_DAT_6fbcbc38,(int)local_5610);
  }
  uVar4 = D2Common_10744(*p_D2Client_DAT_6fbcbc38,0xd);
  if (uVar4 != 0) {
    psVar6 = (short *)D2Lang_10003(0x4fd6);
    psVar7 = psVar6;
    do {
      sVar2 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar2 != 0);
    puVar14 = &uStack_7c12;
    do {
      psVar8 = (short *)((int)puVar14 + 2);
      puVar14 = (uint32_t *)((int)puVar14 + 2);
    } while (*psVar8 != 0);
    psVar8 = psVar6;
    for (uVar4 = (uint)((int)psVar7 - (int)psVar6) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar14 = *(uint32_t *)psVar8;
      psVar8 = psVar8 + 2;
      puVar14 = puVar14 + 1;
    }
    for (uVar4 = (int)psVar7 - (int)psVar6 & 3; psVar7 = psVar3, uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar14 = (char)*psVar8;
      psVar8 = (short *)((int)psVar8 + 1);
      puVar14 = (uint32_t *)((int)puVar14 + 1);
    }
    do {
      sVar2 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar2 != 0);
    uVar4 = (int)psVar7 - (int)psVar3;
    puVar14 = &uStack_7c12;
    do {
      psVar7 = (short *)((int)puVar14 + 2);
      puVar14 = (uint32_t *)((int)puVar14 + 2);
    } while (*psVar7 != 0);
    psVar7 = psVar3;
    for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar14 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar14 = puVar14 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar14 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar14 = (uint32_t *)((int)puVar14 + 1);
    }
  }
  client_DrawHoverItem_Wraps_D2Client_UI_inv_1021ffc0(local_5210,*p_D2Client_DAT_6fbcbc38);
  iVar12 = 0;
  iVar13 = 0;
  local_803c = (int *)D2Common_10910(*p_D2Client_DAT_6fbcbc38,0x5b,0);
  if (local_803c != (int *)0x0) {
    uVar15 = functions_HelperFunctions_102ce840((int)local_803c,100);
    iVar13 = (int)uVar15;
    uVar15 = functions_HelperFunctions_102ce840((int)local_803c,(uint)((ulonglong)uVar15 >> 0x20));
    iVar12 = (int)uVar15;
  }
  uVar4 = D2Common_10202((int *)*p_D2Client_DAT_6fbcbc38,0x400000,0xffa,"..\\Source\\D2Client\\UI\\inv.cpp");
  if (uVar4 != 0) {
    iVar13 = iVar13 + -10;
    iVar12 = iVar12 + -10;
  }
  if (psStack_8044[0x86] != 0) {
    local_8030 = (uint)(uStack_8024 == 0);
    client_DrawHoverItem_1021f220(local_6010,(int)psStack_8044,iVar12);
  }
  psVar7 = psStack_8044;
  if (psStack_8044[0x85] != 0) {
    local_8034 = (uint)(iStack_801c == 0);
    client_DrawHoverItem_1021f370(local_6210,(int)psStack_8044,iVar13);
  }
  uVar4 = D2Common_10744(*p_D2Client_DAT_6fbcbc38,0x2d);
  if (uVar4 != 0) {
    iVar13 = D2Common_10823(*p_D2Client_DAT_6fbcbc38,0);
    if ((-1 < iVar13) && (iVar13 = D2Common_10925(*p_D2Client_DAT_6fbcbc38,0), -1 < iVar13)) {
      client_DrawHoverItem_1021cf80(extraout_ECX,*p_D2Client_DAT_6fbcbc38,(int)local_5c10);
    }
    client_DrawHoverItem_1021cbd0(*p_D2Client_DAT_6fbcbc38,(int)local_3010);
  }
  uVar4 = D2Common_10744(*p_D2Client_DAT_6fbcbc38,0x33);
  piVar11 = piStack_8048;
  if (uVar4 == 0) {
    uVar4 = D2Common_10744(*p_D2Client_DAT_6fbcbc38,0xf);
    piVar11 = piStack_8048;
    if (((uVar4 != 0) && (piStack_8048 != (int *)0x0)) && (piStack_8048[1] == 6)) {
      client_DrawHoverItem_1021f4c0((int)local_7a10,*p_D2Client_DAT_6fbcbc38);
    }
  }
  else {
    if (((piStack_8048 != (int *)0x0) && (piStack_8048[1] == 3)) &&
       ((uVar4 = D2Common_10089((int *)*p_D2Client_DAT_6fbcbc38), uVar4 == 0 ||
        (uVar4 = D2Common_10822((int *)*p_D2Client_DAT_6fbcbc38), uVar4 == 3)))) {
      client_DrawHoverItem_1021f4c0((int)local_7a10,*p_D2Client_DAT_6fbcbc38);
    }
    client_DrawHoverItem_1021f770(*p_D2Client_DAT_6fbcbc38,(int)local_5a10,(int)psVar7);
  }
  uVar4 = D2Common_10744(*p_D2Client_DAT_6fbcbc38,0x32);
  if ((uVar4 != 0) && (iVar13 = D2Common_10935(*p_D2Client_DAT_6fbcbc38), 0 < iVar13)) {
    client_DrawHoverItem_1021f930(piVar11,(int)local_5810,*p_D2Client_DAT_6fbcbc38);
  }
  bStack_803d = 0;
  switch(iStack_8028) {
  case 4:
    piStack_8048 = (int *)CONCAT31(piStack_8048._1_3_,3);
    break;
  case 5:
    piStack_8048 = (int *)CONCAT31(piStack_8048._1_3_,2);
    break;
  case 6:
    piStack_8048 = (int *)CONCAT31(piStack_8048._1_3_,9);
    break;
  case 7:
    piStack_8048 = (int *)CONCAT31(piStack_8048._1_3_,4);
    break;
  case 8:
    piStack_8048 = (int *)CONCAT31(piStack_8048._1_3_,8);
    break;
  case 9:
    piStack_8048 = (int *)CONCAT31(piStack_8048._1_3_,10);
    break;
  default:
    uVar4 = D2Common_10202((int *)*p_D2Client_DAT_6fbcbc38,0x800,0x1050,"..\\Source\\D2Client\\UI\\inv.cpp");
    if (uVar4 == 0) {
      uVar4 = D2Common_10202((int *)*p_D2Client_DAT_6fbcbc38,0x400000,0x1054,
                             "..\\Source\\D2Client\\UI\\inv.cpp");
      piStack_8048 = (int *)(uint)bStack_803d;
      if (uVar4 != 0) {
        piStack_8048 = (int *)0x5;
      }
    }
    else {
      piStack_8048 = (int *)CONCAT31(piStack_8048._1_3_,5);
    }
  }
  uVar4 = D2Common_10202((int *)*p_D2Client_DAT_6fbcbc38,0x10,0x105d,"..\\Source\\D2Client\\UI\\inv.cpp");
  if (((uVar4 == 0) && (0 < *p_D2Client_DAT_6fbcbc34)) && (*p_D2Client_DAT_6fbcbc34 < 10)) {
    uVar9 = SUB41(piStack_8048,0);
    if (*p_D2Client_DAT_6fb90ea4 == 0) {
      uVar9 = 0;
    }
    piStack_8048 = (int *)CONCAT31(piStack_8048._1_3_,uVar9);
  }
  uVar4 = D2Common_10202((int *)*p_D2Client_DAT_6fbcbc38,0x10,0x1069,"..\\Source\\D2Client\\UI\\inv.cpp");
  if (uVar4 == 0) {
    psVar7 = (short *)D2Lang_10003(0xd7f);
    iVar13 = -(int)psVar7;
    do {
      sVar2 = *psVar7;
      psVar7 = psVar7 + 1;
      *(short *)((uint8_t *)((int)register0x00000010 + -0x8012) + iVar13 + (int)psVar7) = sVar2;
      psVar6 = psVar3;
    } while (sVar2 != 0);
    do {
      sVar2 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar2 != 0);
    uVar4 = (int)psVar6 - (int)psVar3;
    puVar14 = (uint32_t *)((int)register0x00000010 + -0x8012);
    do {
      psVar7 = (short *)((int)puVar14 + 2);
      puVar14 = (uint32_t *)((int)puVar14 + 2);
    } while (*psVar7 != 0);
    psVar7 = psVar3;
    for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar14 = *(uint32_t *)psVar7;
      psVar7 = psVar7 + 2;
      puVar14 = puVar14 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar14 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar14 = (uint32_t *)((int)puVar14 + 1);
    }
  }
  else {
    uVar4 = D2Common_10202((int *)*p_D2Client_DAT_6fbcbc38,0x800,0x106c,"..\\Source\\D2Client\\UI\\inv.cpp");
    if (((uVar4 == 0) && (piVar11 = (int *)*p_D2Client_DAT_6fbcbc38, piVar11 != (int *)0x0)) &&
       ((*piVar11 == 4 &&
        ((iVar13 = functions_HelperFunctions_102ce780(piVar11), iVar13 != 0 && (*(char *)(iVar13 + 9) == '\0')))))) {
      client_DrawHoverItem_1021e290((int)local_5410,*p_D2Client_DAT_6fbcbc38);
    }
    client_DrawHoverItem_102246b0(local_2010,*p_D2Client_DAT_6fbcbc38,1,0,psVar7);
  }
  client_DrawHoverItem_1021fb00((int)psStack_8044,(int)&uStack_3812 + 2,*p_D2Client_DAT_6fbcbc38);
  psVar7 = local_5410;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  uVar4 = (int)psVar7 - (int)local_5410;
  puVar14 = &uStack_3812;
  do {
    psVar7 = (short *)((int)puVar14 + 2);
    puVar14 = (uint32_t *)((int)puVar14 + 2);
  } while (*psVar7 != 0);
  psVar7 = local_5410;
  for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar14 = *(uint32_t *)psVar7;
    psVar7 = psVar7 + 2;
    puVar14 = puVar14 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar14 = (char)*psVar7;
    psVar7 = (short *)((int)psVar7 + 1);
    puVar14 = (uint32_t *)((int)puVar14 + 1);
  }
  UI_inv_6fb414f0((void *)*p_D2Client_DAT_6fbcbc38,(int)local_4010,0x100);
  psVar7 = (short *)sub_102f0c70(local_5210,3);
  iVar13 = -(int)psVar7;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
    *(short *)(auStack_7812 + iVar13 + (int)psVar7) = sVar2;
  } while (sVar2 != 0);
  iVar13 = *(int *)(psStack_8044 + 0x40);
  if (((((((iVar13 == 0x20686563) || (iVar13 == 0x20746562)) || (iVar13 == 0x20736574)) ||
        ((iVar13 == 0x20646566 || (iVar13 == 0x20616f74)))) || (iVar13 == 0x206e6864)) ||
      ((iVar13 == 0x20796562 || (iVar13 == 0x2072626d)))) ||
     ((iVar13 == 0x20316b70 ||
      (((iVar13 == 0x20326b70 || (iVar13 == 0x20336b70)) ||
       (uVar4 = D2Common_10744(*p_D2Client_DAT_6fbcbc38,0x4a), uVar4 != 0)))))) {
    piStack_8048 = (int *)CONCAT31(piStack_8048._1_3_,8);
  }
  psVar6 = (short *)sub_102f0c70(local_2010,3);
  psVar7 = psVar6;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  puVar14 = (uint32_t *)auStack_7812;
  do {
    psVar8 = (short *)((int)puVar14 + 2);
    puVar14 = (uint32_t *)((int)puVar14 + 2);
  } while (*psVar8 != 0);
  psVar8 = psVar6;
  for (uVar4 = (uint)((int)psVar7 - (int)psVar6) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar14 = *(uint32_t *)psVar8;
    psVar8 = psVar8 + 2;
    puVar14 = puVar14 + 1;
  }
  for (uVar4 = (int)psVar7 - (int)psVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar14 = (char)*psVar8;
    psVar8 = (short *)((int)psVar8 + 1);
    puVar14 = (uint32_t *)((int)puVar14 + 1);
  }
  psVar6 = (short *)sub_102f0c70((uint8_t *)((int)register0x00000010 + -0x8012) + 2,1);
  psVar7 = psVar6;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  puVar14 = (uint32_t *)auStack_7812;
  do {
    psVar8 = (short *)((int)puVar14 + 2);
    puVar14 = (uint32_t *)((int)puVar14 + 2);
  } while (*psVar8 != 0);
  psVar8 = psVar6;
  for (uVar4 = (uint)((int)psVar7 - (int)psVar6) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar14 = *(uint32_t *)psVar8;
    psVar8 = psVar8 + 2;
    puVar14 = puVar14 + 1;
  }
  for (uVar4 = (int)psVar7 - (int)psVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar14 = (char)*psVar8;
    psVar8 = (short *)((int)psVar8 + 1);
    puVar14 = (uint32_t *)((int)puVar14 + 1);
  }
  psVar6 = (short *)sub_102f0c70(local_3010,0);
  psVar7 = psVar6;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  puVar14 = (uint32_t *)auStack_7812;
  do {
    psVar8 = (short *)((int)puVar14 + 2);
    puVar14 = (uint32_t *)((int)puVar14 + 2);
  } while (*psVar8 != 0);
  psVar8 = psVar6;
  for (uVar4 = (uint)((int)psVar7 - (int)psVar6) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar14 = *(uint32_t *)psVar8;
    psVar8 = psVar8 + 2;
    puVar14 = puVar14 + 1;
  }
  for (uVar4 = (int)psVar7 - (int)psVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar14 = (char)*psVar8;
    psVar8 = (short *)((int)psVar8 + 1);
    puVar14 = (uint32_t *)((int)puVar14 + 1);
  }
  psVar6 = (short *)sub_102f0c70(local_6410,local_8038);
  psVar7 = psVar6;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  puVar14 = (uint32_t *)auStack_7812;
  do {
    psVar8 = (short *)((int)puVar14 + 2);
    puVar14 = (uint32_t *)((int)puVar14 + 2);
  } while (*psVar8 != 0);
  psVar8 = psVar6;
  for (uVar4 = (uint)((int)psVar7 - (int)psVar6) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar14 = *(uint32_t *)psVar8;
    psVar8 = psVar8 + 2;
    puVar14 = puVar14 + 1;
  }
  for (uVar4 = (int)psVar7 - (int)psVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar14 = (char)*psVar8;
    psVar8 = (short *)((int)psVar8 + 1);
    puVar14 = (uint32_t *)((int)puVar14 + 1);
  }
  psVar6 = (short *)sub_102f0c70(local_6210,local_8034);
  psVar7 = psVar6;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  puVar14 = (uint32_t *)auStack_7812;
  do {
    psVar8 = (short *)((int)puVar14 + 2);
    puVar14 = (uint32_t *)((int)puVar14 + 2);
  } while (*psVar8 != 0);
  psVar8 = psVar6;
  for (uVar4 = (uint)((int)psVar7 - (int)psVar6) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar14 = *(uint32_t *)psVar8;
    psVar8 = psVar8 + 2;
    puVar14 = puVar14 + 1;
  }
  for (uVar4 = (int)psVar7 - (int)psVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar14 = (char)*psVar8;
    psVar8 = (short *)((int)psVar8 + 1);
    puVar14 = (uint32_t *)((int)puVar14 + 1);
  }
  psVar6 = (short *)sub_102f0c70(local_6010,local_8030);
  psVar7 = psVar6;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  puVar14 = (uint32_t *)auStack_7812;
  do {
    psVar8 = (short *)((int)puVar14 + 2);
    puVar14 = (uint32_t *)((int)puVar14 + 2);
  } while (*psVar8 != 0);
  psVar8 = psVar6;
  for (uVar4 = (uint)((int)psVar7 - (int)psVar6) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar14 = *(uint32_t *)psVar8;
    psVar8 = psVar8 + 2;
    puVar14 = puVar14 + 1;
  }
  for (uVar4 = (int)psVar7 - (int)psVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar14 = (char)*psVar8;
    psVar8 = (short *)((int)psVar8 + 1);
    puVar14 = (uint32_t *)((int)puVar14 + 1);
  }
  psVar6 = (short *)sub_102f0c70((int)&uStack_7e12 + 2,local_802c);
  psVar7 = psVar6;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  puVar14 = (uint32_t *)auStack_7812;
  do {
    psVar8 = (short *)((int)puVar14 + 2);
    puVar14 = (uint32_t *)((int)puVar14 + 2);
  } while (*psVar8 != 0);
  psVar8 = psVar6;
  for (uVar4 = (uint)((int)psVar7 - (int)psVar6) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar14 = *(uint32_t *)psVar8;
    psVar8 = psVar8 + 2;
    puVar14 = puVar14 + 1;
  }
  for (uVar4 = (int)psVar7 - (int)psVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar14 = (char)*psVar8;
    psVar8 = (short *)((int)psVar8 + 1);
    puVar14 = (uint32_t *)((int)puVar14 + 1);
  }
  psVar6 = (short *)sub_102f0c70(local_5e10,0);
  psVar7 = psVar6;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  puVar14 = (uint32_t *)auStack_7812;
  do {
    psVar8 = (short *)((int)puVar14 + 2);
    puVar14 = (uint32_t *)((int)puVar14 + 2);
  } while (*psVar8 != 0);
  psVar8 = psVar6;
  for (uVar4 = (uint)((int)psVar7 - (int)psVar6) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar14 = *(uint32_t *)psVar8;
    psVar8 = psVar8 + 2;
    puVar14 = puVar14 + 1;
  }
  for (uVar4 = (int)psVar7 - (int)psVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar14 = (char)*psVar8;
    psVar8 = (short *)((int)psVar8 + 1);
    puVar14 = (uint32_t *)((int)puVar14 + 1);
  }
  psVar6 = (short *)sub_102f0c70(local_2810,0);
  psVar7 = psVar6;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  puVar14 = (uint32_t *)auStack_7812;
  do {
    psVar8 = (short *)((int)puVar14 + 2);
    puVar14 = (uint32_t *)((int)puVar14 + 2);
  } while (*psVar8 != 0);
  psVar8 = psVar6;
  for (uVar4 = (uint)((int)psVar7 - (int)psVar6) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar14 = *(uint32_t *)psVar8;
    psVar8 = psVar8 + 2;
    puVar14 = puVar14 + 1;
  }
  for (uVar4 = (int)psVar7 - (int)psVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar14 = (char)*psVar8;
    psVar8 = (short *)((int)psVar8 + 1);
    puVar14 = (uint32_t *)((int)puVar14 + 1);
  }
  psVar6 = (short *)sub_102f0c70((int)&uStack_7c12 + 2,0);
  psVar7 = psVar6;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  puVar14 = (uint32_t *)auStack_7812;
  do {
    psVar8 = (short *)((int)puVar14 + 2);
    puVar14 = (uint32_t *)((int)puVar14 + 2);
  } while (*psVar8 != 0);
  psVar8 = psVar6;
  for (uVar4 = (uint)((int)psVar7 - (int)psVar6) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar14 = *(uint32_t *)psVar8;
    psVar8 = psVar8 + 2;
    puVar14 = puVar14 + 1;
  }
  for (uVar4 = (int)psVar7 - (int)psVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar14 = (char)*psVar8;
    psVar8 = (short *)((int)psVar8 + 1);
    puVar14 = (uint32_t *)((int)puVar14 + 1);
  }
  psVar6 = (short *)sub_102f0c70((int)&uStack_3812 + 2,0);
  psVar7 = psVar6;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  puVar14 = (uint32_t *)auStack_7812;
  do {
    psVar8 = (short *)((int)puVar14 + 2);
    puVar14 = (uint32_t *)((int)puVar14 + 2);
  } while (*psVar8 != 0);
  psVar8 = psVar6;
  for (uVar4 = (uint)((int)psVar7 - (int)psVar6) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar14 = *(uint32_t *)psVar8;
    psVar8 = psVar8 + 2;
    puVar14 = puVar14 + 1;
  }
  for (uVar4 = (int)psVar7 - (int)psVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar14 = (char)*psVar8;
    psVar8 = (short *)((int)psVar8 + 1);
    puVar14 = (uint32_t *)((int)puVar14 + 1);
  }
  psVar6 = (short *)sub_102f0c70(local_5c10,0);
  psVar7 = psVar6;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  puVar14 = (uint32_t *)auStack_7812;
  do {
    psVar8 = (short *)((int)puVar14 + 2);
    puVar14 = (uint32_t *)((int)puVar14 + 2);
  } while (*psVar8 != 0);
  psVar8 = psVar6;
  for (uVar4 = (uint)((int)psVar7 - (int)psVar6) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar14 = *(uint32_t *)psVar8;
    psVar8 = psVar8 + 2;
    puVar14 = puVar14 + 1;
  }
  for (uVar4 = (int)psVar7 - (int)psVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar14 = (char)*psVar8;
    psVar8 = (short *)((int)psVar8 + 1);
    puVar14 = (uint32_t *)((int)puVar14 + 1);
  }
  psVar6 = (short *)sub_102f0c70(local_7a10,0);
  psVar7 = psVar6;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  puVar14 = (uint32_t *)auStack_7812;
  do {
    psVar8 = (short *)((int)puVar14 + 2);
    puVar14 = (uint32_t *)((int)puVar14 + 2);
  } while (*psVar8 != 0);
  psVar8 = psVar6;
  for (uVar4 = (uint)((int)psVar7 - (int)psVar6) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar14 = *(uint32_t *)psVar8;
    psVar8 = psVar8 + 2;
    puVar14 = puVar14 + 1;
  }
  for (uVar4 = (int)psVar7 - (int)psVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar14 = (char)*psVar8;
    psVar8 = (short *)((int)psVar8 + 1);
    puVar14 = (uint32_t *)((int)puVar14 + 1);
  }
  psVar6 = (short *)sub_102f0c70(local_5a10,0);
  psVar7 = psVar6;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  puVar14 = (uint32_t *)auStack_7812;
  do {
    psVar8 = (short *)((int)puVar14 + 2);
    puVar14 = (uint32_t *)((int)puVar14 + 2);
  } while (*psVar8 != 0);
  psVar8 = psVar6;
  for (uVar4 = (uint)((int)psVar7 - (int)psVar6) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar14 = *(uint32_t *)psVar8;
    psVar8 = psVar8 + 2;
    puVar14 = puVar14 + 1;
  }
  for (uVar4 = (int)psVar7 - (int)psVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar14 = (char)*psVar8;
    psVar8 = (short *)((int)psVar8 + 1);
    puVar14 = (uint32_t *)((int)puVar14 + 1);
  }
  psVar6 = (short *)sub_102f0c70(local_5810,0);
  psVar7 = psVar6;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  puVar14 = (uint32_t *)auStack_7812;
  do {
    psVar8 = (short *)((int)puVar14 + 2);
    puVar14 = (uint32_t *)((int)puVar14 + 2);
  } while (*psVar8 != 0);
  psVar8 = psVar6;
  for (uVar4 = (uint)((int)psVar7 - (int)psVar6) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar14 = *(uint32_t *)psVar8;
    psVar8 = psVar8 + 2;
    puVar14 = puVar14 + 1;
  }
  for (uVar4 = (int)psVar7 - (int)psVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar14 = (char)*psVar8;
    psVar8 = (short *)((int)psVar8 + 1);
    puVar14 = (uint32_t *)((int)puVar14 + 1);
  }
  psVar6 = (short *)sub_102f0c70(local_5610,4);
  psVar7 = psVar6;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  puVar14 = (uint32_t *)auStack_7812;
  do {
    psVar8 = (short *)((int)puVar14 + 2);
    puVar14 = (uint32_t *)((int)puVar14 + 2);
  } while (*psVar8 != 0);
  psVar8 = psVar6;
  for (uVar4 = (uint)((int)psVar7 - (int)psVar6) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar14 = *(uint32_t *)psVar8;
    psVar8 = psVar8 + 2;
    puVar14 = puVar14 + 1;
  }
  piVar11 = (int *)*p_D2Client_DAT_6fbcbc38;
  for (uVar4 = (int)psVar7 - (int)psVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar14 = (char)*psVar8;
    psVar8 = (short *)((int)psVar8 + 1);
    puVar14 = (uint32_t *)((int)puVar14 + 1);
  }
  uVar4 = D2Common_10202(piVar11,0x100,0x10a7,"..\\Source\\D2Client\\UI\\inv.cpp");
  uVar10 = (uint)piStack_8048 & 0xff;
  if (uVar4 != 0) {
    uVar10 = 1;
  }
  psVar6 = (short *)sub_102f0c70(local_4010,uVar10);
  psVar7 = psVar6;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  puVar14 = (uint32_t *)auStack_7812;
  do {
    psVar8 = (short *)((int)puVar14 + 2);
    puVar14 = (uint32_t *)((int)puVar14 + 2);
  } while (*psVar8 != 0);
  psVar8 = psVar6;
  for (uVar4 = (uint)((int)psVar7 - (int)psVar6) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar14 = *(uint32_t *)psVar8;
    psVar8 = psVar8 + 2;
    puVar14 = puVar14 + 1;
  }
  for (uVar4 = (int)psVar7 - (int)psVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar14 = (char)*psVar8;
    psVar8 = (short *)((int)psVar8 + 1);
    puVar14 = (uint32_t *)((int)puVar14 + 1);
  }
  iVar13 = *p_D2Client_DAT_6fbcbc34;
  if (((iVar13 == 0) || (iVar13 < 1)) || (9 < iVar13)) {
    iVar13 = 0;
    do {
      sVar2 = *(short *)((int)local_7810 + iVar13);
      *(short *)(auStack_500e + iVar13 + -2) = sVar2;
      iVar13 = iVar13 + 2;
    } while (sVar2 != 0);
  }
  else {
    sub_102f0bd0((int)&uStack_5012 + 2,local_7810);
  }
  uVar4 = 0;
  if (((char)psStack_8044[0x95] != '\0') &&
     (iVar13 = *(int *)(psStack_8044 + 0x40), iVar13 != 0x2067656c)) {
    if ((*p_D2Client_DAT_6fbcbc34 == 0) && ((*p_D2Client_DAT_6fbcbc38 == 0 || (*(int *)(*p_D2Client_DAT_6fbcbc38 + 0x10) == 0)))) {
      psVar7 = psVar3;
      if (iVar13 == 0x20646b62) {
        iVar13 = 0;
        do {
          sVar2 = *(short *)(auStack_500e + iVar13 + -2);
          *(short *)((int)local_7810 + iVar13) = sVar2;
          iVar13 = iVar13 + 2;
        } while (sVar2 != 0);
        psVar8 = (short *)D2Lang_10003(0x89d);
        psVar6 = psVar8;
        do {
          sVar2 = *psVar6;
          *(short *)((int)psVar6 + (int)(auStack_500e + (-2 - (int)psVar8))) = sVar2;
          psVar6 = psVar6 + 1;
        } while (sVar2 != 0);
      }
      else {
        if (iVar13 != 0x20786f62) goto LAB_10223c6a;
        iVar13 = 0;
        do {
          sVar2 = *(short *)(auStack_500e + iVar13 + -2);
          *(short *)((int)local_7810 + iVar13) = sVar2;
          iVar13 = iVar13 + 2;
        } while (sVar2 != 0);
        psVar8 = (short *)D2Lang_10003(0x89c);
        psVar6 = psVar8;
        do {
          sVar2 = *psVar6;
          *(short *)((int)psVar6 + (int)(auStack_500e + (-2 - (int)psVar8))) = sVar2;
          psVar6 = psVar6 + 1;
        } while (sVar2 != 0);
      }
      do {
        sVar2 = *psVar7;
        psVar7 = psVar7 + 1;
      } while (sVar2 != 0);
      uVar4 = (int)psVar7 - (int)psVar3;
      puVar14 = &uStack_5012;
      do {
        psVar7 = (short *)((int)puVar14 + 2);
        puVar14 = (uint32_t *)((int)puVar14 + 2);
      } while (*psVar7 != 0);
      for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar14 = *(uint32_t *)psVar3;
        psVar3 = psVar3 + 2;
        puVar14 = puVar14 + 1;
      }
      for (uVar4 = uVar4 & 3; psVar7 = (short *)local_7810, uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)puVar14 = (char)*psVar3;
        psVar3 = (short *)((int)psVar3 + 1);
        puVar14 = (uint32_t *)((int)puVar14 + 1);
      }
      do {
        sVar2 = *psVar7;
        psVar7 = psVar7 + 1;
      } while (sVar2 != 0);
      uVar4 = (int)psVar7 - (int)local_7810;
      puVar14 = &uStack_5012;
      do {
        psVar3 = (short *)((int)puVar14 + 2);
        puVar14 = (uint32_t *)((int)puVar14 + 2);
      } while (*psVar3 != 0);
      psVar3 = (short *)local_7810;
      for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar14 = *(uint32_t *)psVar3;
        psVar3 = psVar3 + 2;
        puVar14 = puVar14 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)puVar14 = (char)*psVar3;
        psVar3 = (short *)((int)psVar3 + 1);
        puVar14 = (uint32_t *)((int)puVar14 + 1);
      }
    }
LAB_10223c6a:
    sub_102f0c70((int)&uStack_5012 + 2,4);
    uVar4 = 4;
  }
  D2Win_10177_102aa690((int)&uStack_5012 + 2,&stack0xffff7fec,(int *)&uStack_8018);
LAB_10223c93:
  client_DrawHoverItem_10220830((short *)((int)&uStack_5012 + 2),(int *)*p_D2Client_DAT_6fbcbc38);
  psVar3 = (short *)((int)&uStack_5012 + 2);
  do {
    sVar2 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar2 != 0);
  if (0x3fe < (uint)((int)psVar3 - (int)auStack_500e >> 1)) {
    uStack_4812 = 0;
  }
  uVar10 = *p_D2Client_DAT_6fb90eac;
  if ((uVar10 != uStack_8018) && (-1 < (int)(uVar10 - uStack_8018))) {
    D2Win_10085((void *)((int)&uStack_5012 + 2),*p_D2Client_DAT_6fb90ea8,uVar10,uVar4,1);
    return;
  }
  D2Win_10085((void *)((int)&uStack_5012 + 2),*p_D2Client_DAT_6fb90eb0,*p_D2Client_DAT_6fb90eb4 + uStack_8018,uVar4,1);
  return;
}


// 0x10223db0  (ghidra: FUN_10223db0)  [anchor] refs client/DrawHoverItem.cpp
uint32_t __fastcall
client_DrawHoverItem_10223db0(int param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6,int param_7
            )

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint32_t param_7;   /* not traced by Ghidra: value with no visible source */
  
  iVar3 = *p_D2Client_DAT_6fb8bc4c + -0x30;
  iVar6 = *param_2;
  iVar7 = *param_4;
  if (iVar6 < param_1) {
    *param_2 = 6;
    iVar7 = (iVar7 - iVar6) + param_1;
    iVar6 = 6;
    *param_4 = iVar7;
  }
  iVar8 = *param_3;
  if (iVar8 < 6) {
    iVar4 = 6 - iVar8;
    iVar8 = 6;
    *param_5 = *param_5 + iVar4;
    *param_3 = 6;
  }
  if (param_7 <= iVar7) {
    iVar4 = (iVar7 - param_7) + 1;
    iVar6 = iVar6 - iVar4;
    *param_4 = iVar7 - iVar4;
    *param_2 = iVar6;
  }
  iVar7 = *param_5;
  if (iVar3 <= iVar7) {
    *param_5 = iVar3;
    iVar8 = (iVar8 - iVar7) + iVar3;
    *param_3 = iVar8;
  }
  if (0x2f < DAT_103d6230) {
    Fog_10024("",
              "C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\client\\DrawHoverItem.cpp"
              ,0x47);
                    /* WARNING: Subroutine does not return */
    _exit(-1);
  }
  iVar7 = 0;
  if (0 < DAT_103d6230) {
    piVar5 = &DAT_103d624c;
    do {
      if ((piVar5[-1] < iVar6) || (*param_4 < piVar5[-3])) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((*piVar5 < iVar8) || (*param_5 < piVar5[-2])) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar1) && (bVar2)) {
        if (6 < param_6) {
          iVar3 = *param_4;
          if (((iVar3 - iVar6) / 2 == 0) || (iVar6 < param_7)) {
            iVar7 = ((&DAT_103d6248)[iVar7 * 0x48] - iVar6) + 1;
          }
          else {
            iVar7 = ((&DAT_103d6240)[iVar7 * 0x48] - iVar3) + -1;
          }
          *param_2 = iVar6 + iVar7;
          *param_4 = iVar3 + iVar7;
          return 0;
        }
        iVar6 = *param_5;
        if (((iVar6 - iVar8) / 2 != 0) && (iVar8 <= iVar3)) {
          iVar7 = ((&DAT_103d6244)[iVar7 * 0x48] - iVar6) + -3;
          *param_3 = iVar8 + iVar7;
          *param_5 = iVar6 + iVar7;
          return 0;
        }
        iVar7 = ((&DAT_103d624c)[iVar7 * 0x48] - iVar8) + 5;
        *param_3 = iVar8 + iVar7;
        *param_5 = iVar6 + iVar7;
        return 0;
      }
      iVar7 = iVar7 + 1;
      piVar5 = piVar5 + 0x48;
    } while (iVar7 < DAT_103d6230);
  }
  return 1;
}


// 0x10223f90  (ghidra: FUN_10223f90)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void client_DrawHoverItem_Wraps_D2Client_UI_showitems_10223f90(void)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  uint32_t uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint16_t *puVar14;
  int iVar15;
  uint32_t *puVar16;
  uint64_t uVar17;
  ulonglong uVar18;
  int local_54;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  byte local_29;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  uVar3 = D2gfx_10013();
  if (((int *)*p_D2Client_DAT_6fbcbbfc != (int *)0x0) &&
     (puVar4 = (uint *)D2Common_10331_102753f0((int *)*p_D2Client_DAT_6fbcbbfc), puVar4 != (uint *)0x0)) {
    piVar5 = UNIT_Monster_6fb01a80();
    iVar10 = *p_D2Client_DAT_6fbcb828;
    uVar1 = *p_D2Client_DAT_6fbcb824;
    D2Common_10383_10278610(puVar4,&local_28,&local_c);
    uVar6 = D2Win_10190_1028e380('\0','@',0x80);
    local_29 = (byte)uVar6;
    DAT_103d6230 = 0;
    local_40 = 0;
    DAT_103d622c = 0;
    DAT_103d6224 = 0;
    DAT_103d5efc._3_1_ = '\0';
    iVar7 = D2Common_10057_102763f0((int)puVar4);
    if ((iVar7 != 0) && (iVar7 = 0, 0 < (int)local_c)) {
      do {
        for (piVar2 = *(int **)(*(int *)(local_28 + iVar7 * 4) + 0x74); piVar2 != (int *)0x0;
            piVar2 = (int *)piVar2[0x3a]) {
          if ((*piVar2 == 2) && (piVar2[1] == 0x10b)) {
            if (uVar3 == 0) {
              iVar7 = *p_D2Client_DAT_6fbc9960;
              iVar12 = *p_D2Client_DAT_6fbcc418;
              iVar13 = *p_D2Client_DAT_6fbc995c;
              uVar8 = D2Common_10651(piVar2);
              DAT_103d622c = uVar8 - (iVar7 - iVar12);
              uVar8 = D2Common_11142(piVar2);
              DAT_103d6224 = uVar8 + (-8 - iVar13);
            }
            else {
              uVar8 = D2Common_11080(piVar2);
              uVar11 = D2Common_11168(piVar2);
              uVar9 = D2gfx_10012(uVar8,uVar11);
              if (uVar9 == 0) break;
              D2gfx_10023(uVar8,uVar11,0,(uint)&local_14,(uint)&local_18);
              DAT_103d6224 = local_18;
              DAT_103d622c = local_14;
              if (*p_D2Client_DAT_6fbcc414 == 1) {
                DAT_103d622c = local_14 - (*p_D2Client_DAT_6fb8bc48 >> 2);
              }
              else if (*p_D2Client_DAT_6fbcc414 == 2) {
                DAT_103d622c = (*p_D2Client_DAT_6fb8bc48 >> 2) + local_14;
              }
            }
            DAT_103d5efc._3_1_ = '\x01';
            goto LAB_1022414e;
          }
        }
      } while ((DAT_103d5efc._3_1_ == '\0') && (iVar7 = iVar7 + 1, iVar7 < (int)local_c));
    }
LAB_1022414e:
    iVar12 = 0;
    iVar7 = 0;
    if (DAT_103a7014 != 0) {
      iVar7 = sub_10231b50();
      iVar12 = sub_10231b70();
    }
    if (DAT_103d5efc._3_1_ != '\0') {
      DAT_103d6240 = (DAT_103d622c - iVar7) + -0x14;
      DAT_103d6248 = (DAT_103d622c - iVar7) + 0x14;
      DAT_103d6244 = (DAT_103d6224 - iVar12) + -0x14;
      DAT_103d624c = (DAT_103d6224 - iVar12) + 0x14;
      DAT_103d6230 = 1;
    }
    local_54 = 0;
    iVar7 = DAT_103d6230;
    if (0 < (int)local_c) {
      do {
        for (piVar2 = *(int **)(*(int *)(local_28 + local_54 * 4) + 0x74); piVar2 != (int *)0x0;
            piVar2 = (int *)piVar2[0x3a]) {
          if ((((*(byte *)(piVar2 + 0x32) & 0x80) != 0) && (*piVar2 == 4)) && (iVar7 < 0x30)) {
            (&DAT_103d6250)[iVar7 * 0x48] = piVar2;
            if (uVar3 == 0) {
              iVar7 = *p_D2Client_DAT_6fbc9960;
              iVar12 = *p_D2Client_DAT_6fbcc418;
              uVar8 = D2Common_10651(piVar2);
              local_30 = uVar8 - (iVar7 - iVar12);
              iVar7 = *p_D2Client_DAT_6fbc995c;
              uVar8 = D2Common_11142(piVar2);
              local_34 = uVar8 + (-8 - iVar7);
              iVar12 = local_30;
LAB_10224242:
              local_30 = *p_D2Client_DAT_6fbcc414;
              if (local_30 == 1) {
LAB_10224256:
                local_48 = (int)*p_D2Client_DAT_6fb8bc48 / 2 - 0x20;
                local_3c = 0;
              }
              else {
                local_48 = *p_D2Client_DAT_6fb8bc48;
                local_3c = 0;
                if (local_30 == 2) {
LAB_102242f6:
                  local_3c = (int)local_48 / 2;
                }
              }
              iVar7 = DAT_103d6230;
              if (((local_3c <= iVar12) && (iVar12 <= (int)local_48)) &&
                 ((-9 < local_34 && (local_34 <= *p_D2Client_DAT_6fb8bc4c + -0x10)))) {
                puVar14 = &DAT_103d6254 + DAT_103d6230 * 0x90;
                *puVar14 = 0;
                client_DrawHoverItem_Wraps_D2Client_UI_ui_102200f0((int)piVar2,(int)puVar14,0x100);
                D2Win_10177_102aa690((uint)puVar14,&local_10,&local_24);
                iVar7 = local_34;
                iVar13 = 0;
                local_10 = local_10 + 8;
                iVar12 = iVar12 - (local_10 >> 1);
                local_38 = local_10 + iVar12;
                local_30 = (local_34 - local_24) + 4;
                uVar8 = 0;
                if (DAT_103a7014 != 0) {
                  local_44 = sub_10231b50();
                  iVar13 = sub_10231b70();
                  uVar8 = local_44;
                }
                local_34 = local_30 - iVar13;
                local_44 = local_38 - uVar8;
                iVar15 = 0;
                local_38 = iVar7 - iVar13;
                local_30 = iVar12 - uVar8;
                do {
                  iVar12 = client_DrawHoverItem_10223db0(local_3c,&local_30,&local_34,(int *)&local_44,&local_38,
                                        iVar15,local_48);
                  iVar7 = DAT_103d6230;
                  if (iVar12 != 0) {
                    if (((int)local_48 < (int)local_44) || (local_30 < local_3c)) break;
                    uVar6 = 0;
                    uVar11 = DAT_103d6230 * 0x120;
                    (&DAT_103d6240)[DAT_103d6230 * 0x48] = local_30;
                    (&DAT_103d6244)[iVar7 * 0x48] = local_34;
                    (&DAT_103d6248)[iVar7 * 0x48] = local_44;
                    (&DAT_103d624c)[iVar7 * 0x48] = local_38;
                    iVar12 = DAT_103d6230;
                    uVar8 = local_44;
                    if (local_40 == 0) {
                      if ((((local_30 <= iVar10) && (iVar10 <= (int)local_44)) &&
                          (uVar8 = uVar1, local_34 <= (int)uVar1)) && ((int)uVar1 <= local_38 + 4))
                      {
                        (&DAT_103d635c)[iVar7 * 0x48] = 0;
                        (&DAT_103d6354)[iVar7 * 0x48] = (uint)local_29;
                        (&DAT_103d6358)[iVar7 * 0x48] = 5;
                        sub_102f0880();
                        DAT_103d6230 = DAT_103d6230 + 1;
                        local_40 = 1;
                        iVar7 = DAT_103d6230;
                        break;
                      }
                      if (piVar2 == piVar5) {
                        (&DAT_103d6354)[iVar7 * 0x48] = (uint)local_29;
                        (&DAT_103d6358)[iVar7 * 0x48] = 5;
                        (&DAT_103d635c)[iVar7 * 0x48] = 0;
                        D2Win_10085((void *)0x0,0,0,0,0);
                        iVar7 = DAT_103d6230 + 1;
                        local_40 = 1;
                        DAT_103d6230 = iVar7;
                        *p_D2Client_DAT_6fbcc2f8 = 0;
                        *p_D2Client_DAT_6fbcc2f4 = 0;
                        break;
                      }
                    }
                    (&DAT_103d6354)[DAT_103d6230 * 0x48] = 0;
                    (&DAT_103d6358)[iVar12 * 0x48] = 1;
                    uVar18 = D2Common_10106(uVar11,uVar8,piVar2);
                    switch((int)uVar18) {
                    case 4:
                      uVar6 = 3;
                      break;
                    case 5:
                      uVar6 = 2;
                      break;
                    case 6:
                      uVar6 = 9;
                      break;
                    case 7:
                      uVar6 = 4;
                      break;
                    case 8:
                      uVar6 = 8;
                      break;
                    case 9:
                      uVar6 = 10;
                      break;
                    default:
                      uVar8 = D2Common_10202(piVar2,0x800,0x106,
                                             "..\\Source\\D2Client\\UI\\showitems.cpp");
                      if (((uVar8 == 0) || (uVar8 = D2Common_10757(piVar2), uVar8 == 0)) ||
                         (uVar8 = D2Common_11151(piVar2), (char)uVar8 == '\0')) {
                        uVar8 = D2Common_10202(piVar2,0x400000,0x10c,
                                               "..\\Source\\D2Client\\UI\\showitems.cpp");
                        if (uVar8 != 0) {
                          uVar6 = 5;
                        }
                      }
                      else {
                        uVar6 = 5;
                      }
                    }
                    iVar7 = D2Common_10695(piVar2[1]);
                    if ((*(char *)(iVar7 + 0x12a) != '\0') && (*(int *)(iVar7 + 0x80) != 0x2067656c)
                       ) {
                      uVar6 = 4;
                    }
                    iVar7 = DAT_103d6230 + 1;
                    iVar12 = DAT_103d6230 * 0x48;
                    DAT_103d6230 = iVar7;
                    (&DAT_103d635c)[iVar12] = uVar6;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < 0xc);
              }
            }
            else {
              uVar8 = D2Common_11080(piVar2);
              uVar11 = D2Common_11168(piVar2);
              uVar9 = D2gfx_10012(uVar8,uVar11);
              iVar7 = DAT_103d6230;
              if (uVar9 != 0) {
                D2gfx_10023(uVar8,uVar11,0,(uint)&local_20,(uint)&local_1c);
                local_34 = local_1c;
                if (*p_D2Client_DAT_6fbcc414 != 1) {
                  iVar12 = local_20;
                  if (*p_D2Client_DAT_6fbcc414 != 2) goto LAB_10224242;
                  iVar12 = (*p_D2Client_DAT_6fb8bc48 >> 2) + local_20;
                  local_48 = *p_D2Client_DAT_6fb8bc48;
                  goto LAB_102242f6;
                }
                iVar12 = local_20 - (*p_D2Client_DAT_6fb8bc48 >> 2);
                goto LAB_10224256;
              }
            }
          }
        }
        local_54 = local_54 + 1;
      } while (local_54 < (int)local_c);
    }
    uVar3 = (uint)(DAT_103d5efc._3_1_ != '\0');
    if ((int)uVar3 < iVar7) {
      puVar16 = &DAT_103d6358 + uVar3 * 0x48;
      do {
        D2Win_10013(puVar16 + -0x41,puVar16[-0x46],puVar16[-0x43],puVar16[-1],*puVar16,puVar16[1]);
        uVar3 = uVar3 + 1;
        puVar16 = puVar16 + 0x48;
      } while ((int)uVar3 < DAT_103d6230);
    }
    iVar10 = sub_10231650(9);
    if (((iVar10 == 0) || (uVar17 = sub_102edf00(), (int)uVar17 != 0)) && (local_40 == 0)) {
      *p_D2Client_DAT_6fbcc2f8 = 0;
      *p_D2Client_DAT_6fbcc2f4 = 0;
      D2Win_10085((void *)0x0,0,0,0,0);
    }
  }
  return;
}


// 0x102246b0  (ghidra: FUN_102246b0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall client_DrawHoverItem_102246b0(void *param_1,int param_2,int param_3,int param_4,uint32_t reg_EDI)

{
  short sVar1;
  uint reg_ESI;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  short *psVar5;
  int reg_EDI_00;
  uint32_t local_810;
  short local_80c;
  uint8_t local_80a [2050];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_810 = (void *)param_4;
  memset(local_80a,0,0x7fe);
  local_80c = 0;
  client_DrawHoverItem_10224a40(0xab,param_2,&local_80c,0x400,1,0,0x40,param_3,reg_EDI);
  psVar5 = &local_80c;
  do {
    sVar1 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar1 != 0);
  reg_EDI_00 = (int)psVar5 - (int)local_80a >> 1;
  if ((local_810 == (void *)0x0) || (reg_EDI_00 == 0)) {
    Unicode_strcat(param_1,&local_80c);
    sub_102316e0(param_1);
    return;
  }
  iVar4 = reg_EDI_00 + -2;
  if (iVar4 < 1) {
LAB_10224837:
    Unicode_strcat(param_1,local_810);
    Unicode_strcat(param_1,&local_80c);
    return;
  }
  sVar1 = *(short *)(local_80a + iVar4 * 2 + -2);
  while (sVar1 != 10) {
    iVar4 = iVar4 + -1;
    if (iVar4 < 1) goto LAB_10224837;
    sVar1 = *(short *)(local_80a + iVar4 * 2 + -2);
  }
  pvVar2 = (void *)D2Lang_10003(0xf9e);
  pvVar3 = (void *)D2Lang_10003(0xf0c);
  reg_ESI = iVar4 * 2;
  if (reg_ESI < 0x800) {
    *(uint16_t *)(local_80a + (reg_ESI - 2)) = 0;
    Unicode_strcat(param_1,&local_80c);
    Unicode_strcat(param_1,pvVar2);
    Unicode_strcat(param_1,local_810);
    if (*(short *)((int)&local_810 + reg_EDI_00 * 2 + 2) == 10) {
      if (0x7ff < reg_EDI_00 * 2 - 2U) goto LAB_10224887;
      *(uint16_t *)((int)&local_810 + reg_EDI_00 * 2 + 2) = 0;
    }
    Unicode_strcat(param_1,local_80a + reg_ESI);
    Unicode_strcat(param_1,pvVar3);
    Unicode_strcat(param_1,pvVar2);
    return;
  }
LAB_10224887:
                    /* WARNING: Subroutine does not return */
  FUN_103021cd(param_1,reg_ESI,reg_EDI_00);
}


// 0x10224890  (ghidra: FUN_10224890)  [range]
void __fastcall client_DrawHoverItem_10224890(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  memset(param_2,0,0xa8);
  iVar1 = D2Common_10680_10278430(param_1,0x11,0);
  param_2[7] = iVar1;
  iVar1 = D2Common_10680_10278430(param_1,0x12,0);
  param_2[6] = iVar1;
  iVar1 = D2Common_10680_10278430(param_1,0x17,0);
  *param_2 = iVar1;
  if (iVar1 == 0) {
    iVar1 = D2Common_10680_10278430(param_1,0x15,0);
    *param_2 = iVar1;
  }
  iVar1 = D2Common_10680_10278430(param_1,0x18,0);
  param_2[1] = iVar1;
  if (iVar1 == 0) {
    iVar1 = D2Common_10680_10278430(param_1,0x16,0);
    param_2[1] = iVar1;
  }
  iVar1 = D2Common_10680_10278430(param_1,0x30,0);
  param_2[0x18] = iVar1;
  iVar1 = D2Common_10680_10278430(param_1,0x31,0);
  param_2[0x19] = iVar1;
  iVar1 = D2Common_10680_10278430(param_1,0x32,0);
  param_2[0x12] = iVar1;
  iVar1 = D2Common_10680_10278430(param_1,0x33,0);
  param_2[0x13] = iVar1;
  iVar1 = D2Common_10680_10278430(param_1,0x34,0);
  param_2[0x24] = iVar1;
  iVar1 = D2Common_10680_10278430(param_1,0x35,0);
  param_2[0x25] = iVar1;
  iVar1 = D2Common_10680_10278430(param_1,0x36,0);
  param_2[0xc] = iVar1;
  iVar1 = D2Common_10680_10278430(param_1,0x37,0);
  param_2[0xd] = iVar1;
  iVar1 = D2Common_10680_10278430(param_1,0x39,0);
  param_2[0x1e] = iVar1;
  iVar1 = D2Common_10680_10278430(param_1,0x3a,0);
  param_2[0x1f] = iVar1;
  iVar1 = D2Common_10680_10278430(param_1,0x3b,0);
  param_2[0x20] = iVar1;
  iVar1 = D2Common_10973_10273ce0(param_3,0x146,0);
  param_2[0x21] = iVar1;
  if ((0 < *param_2) && (0 < param_2[1])) {
    param_2[4] = 1;
  }
  if ((0 < param_2[6]) && (0 < param_2[7])) {
    param_2[10] = 1;
  }
  if ((0 < param_2[0xc]) && (0 < param_2[0xd])) {
    param_2[0x10] = 1;
  }
  if ((0 < param_2[0x12]) && (0 < param_2[0x13])) {
    param_2[0x16] = 1;
  }
  if ((0 < param_2[0x18]) && (0 < param_2[0x19])) {
    param_2[0x1c] = 1;
  }
  if ((0 < param_2[0x1e]) && (0 < param_2[0x1f])) {
    param_2[0x22] = 1;
  }
  if ((0 < param_2[0x24]) && (0 < param_2[0x25])) {
    param_2[0x28] = 1;
  }
  return;
}


// 0x10224a40  (ghidra: FUN_10224a40)  [range]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void client_DrawHoverItem_10224a40(int param_1,int param_2,void *param_3,uint32_t param_4,int param_5,int param_6,
                 uint param_7,int param_8,uint32_t reg_EDI)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  void *pvVar7;
  int iVar8;
  int *piVar9;
  uint8_t auStack_24e4 [7];
  char cStack_24dd;
  int *local_24dc;
  void *local_24d8;
  uint *puStack_24d4;
  int iStack_24d0;
  int local_24cc;
  void *local_24c8;
  void *local_24c4;
  void *pvStack_24c0;
  uint uStack_24bc;
  int iStack_24b8;
  int iStack_24b4;
  int local_24b0 [42];
  ushort local_2408 [2];
  int aiStack_2404 [2045];
  uint8_t local_410 [512];
  uint8_t local_210 [516];
  uint local_c;
  
  local_c = DAT_1039800c ^ (uint)auStack_24e4;
  local_24c4 = (void *)param_1;
  local_24dc = (int *)param_2;
  local_24d8 = param_3;
  local_24cc = param_6;
  local_24c8 = (void *)param_7;
  memset(local_410,0,0x200);
  memset(local_210,0,0x200);
  memset(local_24b0,0,0xa8);
  memset(local_2408,0,0x1ff8);
  iVar2 = D2Common_11088(local_24dc);
  piVar9 = local_24dc;
  if (iVar2 == 0xb) {
    sub_6fb04880((uint)local_24dc,(uint)param_3,(int *)*p_D2Client_DAT_6fba20c8);
    return;
  }
  pvStack_24c0 = (void *)D2Common_10930((int)local_24dc,param_6,param_7);
  if (pvStack_24c0 == (void *)0x0) {
    return;
  }
  if (piVar9 == (int *)0x0) {
    uVar3 = 0;
    iVar2 = 6;
    iVar8 = -1;
  }
  else {
    uVar3 = piVar9[2];
    iVar2 = *piVar9;
    iVar8 = piVar9[3];
  }
  puVar4 = D2Common_11013_102781f0(uVar3,0,0,iVar2,iVar8);
  puStack_24d4 = puVar4;
  D2Common_10308(puVar4,(int)pvStack_24c0);
  piVar9 = local_24dc;
  if ((local_24c4 != (void *)0x0) &&
     (iVar2 = D2Common_10930((int)local_24dc,(int)local_24c4,param_7), iVar2 != 0)) {
    D2Common_10308(puVar4,iVar2);
  }
  if (((piVar9 != (int *)0x0) && (*piVar9 == 4)) && ((int *)piVar9[0x18] != (int *)0x0)) {
    piVar5 = (int *)D2Common_10460((int *)piVar9[0x18]);
    puVar1 = puStack_24d4;
    while ((puVar4 = puStack_24d4, piVar5 != (int *)0x0 &&
           (uVar3 = D2Common_11147(piVar5), piVar9 = local_24dc, param_3 = local_24d8,
           puVar4 = puStack_24d4, uVar3 != 0))) {
      piVar5 = (int *)D2Common_10464(piVar5);
      iVar2 = D2Common_10930(uVar3,local_24cc,(uint)local_24c8);
      param_3 = local_24d8;
      piVar9 = local_24dc;
      if (iVar2 != 0) {
        D2Common_10308(puVar1,iVar2);
        param_3 = local_24d8;
        piVar9 = local_24dc;
      }
    }
  }
  pvStack_24c0 = (void *)D2Lang_10003(0xf9e);
  local_24c4 = (void *)D2Lang_10003(0xf9b);
  local_24c8 = (void *)D2Lang_10003(0xf0c);
  if (((param_5 != 0) && (uVar3 = D2Common_10744((int)piVar9,0x39), uVar3 != 0)) &&
     (iVar2 = D2Common_10910((int)piVar9,0x7a,0), iVar2 == 0)) {
    sub_6fb04780(local_210);
    Unicode_strcat(param_3,local_210);
  }
  client_DrawHoverItem_10224890(puVar4,local_24b0,piVar9);
  cStack_24dd = '\0';
  local_24cc = 0;
  iVar2 = *p_D2Common_DAT_6fde9e1c_10279cd0;
  if (0 < *(int *)(iVar2 + 0xbdc)) {
    do {
      uVar3 = (uint)*(short *)(*(int *)(iVar2 + 0xbd8) + local_24cc * 2);
      if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(iVar2 + 0xbd4))) {
        iStack_24b4 = D2Common_11110((uint)puVar4,uVar3,local_2408,0x3ff);
        iStack_24d0 = 0;
        if (0 < iStack_24b4) {
          do {
            iVar2 = iStack_24d0;
            iStack_24b8 = aiStack_2404[iStack_24d0 * 2];
            uStack_24bc = (uint)local_2408[iStack_24d0 * 4];
            if (iStack_24b8 != 0) {
              uVar6 = sub_102315f0();
              if (uVar6 == 0) {
                iVar8 = sub_102f0040(local_24b0,uVar3,param_3);
              }
              else {
                iVar8 = sub_10231710(local_24dc,local_24b0,uVar3,param_3);
              }
              if (iVar8 == 0) {
                uVar6 = uStack_24bc & 0xffff;
                iVar8 = sub_102ee2e0();
                sub_10231750(local_410,uVar3,local_24dc,uVar6);
                param_3 = local_24d8;
                iVar2 = iStack_24d0;
                if (iVar8 != 0) {
                  if (uVar3 == 0x17) {
                    iVar2 = 0x15;
LAB_10224d64:
                    iVar8 = D2Common_10680_10278430((int)puStack_24d4,iVar2,0);
                    param_3 = local_24d8;
                    iVar2 = iStack_24d0;
                    if (iVar8 != 0) goto LAB_10224dcd;
                  }
                  else if (uVar3 == 0x18) {
                    iVar2 = 0x16;
                    goto LAB_10224d64;
                  }
                  if (param_8 != 0) {
                    Unicode_strcat(local_410,pvStack_24c0);
                  }
                  param_3 = local_24d8;
                  if ((cStack_24dd != '\0') && (param_8 == 0)) {
                    Unicode_strcat(local_24d8,local_24c8);
                    Unicode_strcat(param_3,local_24c4);
                  }
                  cStack_24dd = '\x01';
                  Unicode_strcat(param_3,local_410);
                  iVar2 = iStack_24d0;
                }
              }
            }
LAB_10224dcd:
            iStack_24d0 = iVar2 + 1;
          } while (iStack_24d0 < iStack_24b4);
        }
        iVar2 = *p_D2Common_DAT_6fde9e1c_10279cd0;
        puVar4 = puStack_24d4;
      }
      local_24cc = local_24cc + 1;
      piVar9 = local_24dc;
    } while (local_24cc < *(int *)(iVar2 + 0xbdc));
  }
  if (((((piVar9 != (int *)0x0) && (*piVar9 == 4)) &&
       (iVar2 = D2Common_10695(piVar9[1]), *(char *)(iVar2 + 0x113) == '\0')) &&
      ((*(char *)(iVar2 + 0x112) != '\0' &&
       (iVar2 = D2Common_10973_10273ce0((int)piVar9,0x98,0), iVar2 < 1)))) &&
     (iVar2 = D2Common_11116((int)piVar9), iVar2 == 0)) {
    pvVar7 = (void *)D2Lang_10003(0x52f8);
    if ((cStack_24dd == '\0') || (param_8 != 0)) {
      Unicode_strcat(param_3,pvVar7);
      pvVar7 = pvStack_24c0;
      if (param_8 == 0) goto LAB_10224e94;
    }
    else {
      Unicode_strcat(param_3,local_24c8);
      Unicode_strcat(param_3,local_24c4);
    }
    Unicode_strcat(param_3,pvVar7);
  }
LAB_10224e94:
  D2Common_11108_102a3820(puVar4);
  return;
}


// 0x10224ec0  (ghidra: FUN_10224ec0)  [linked]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint client_DrawHoverItem_10224ec0(void)

{
  uint *puVar1;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_c = sub_1020f1c0();
  local_10 = 8;
  puVar1 = sub_1020ff10(&local_c,&local_10);
  local_10 = *puVar1 - 1;
  local_14 = sub_1020f1c0();
  puVar1 = sub_10210430(&local_14,&local_10);
  return *puVar1;
}


// 0x10224f20  (ghidra: FUN_10224f20)  [linked]
uint32_t __fastcall client_DrawHoverItem_10224f20(int param_1)

{
  return *(uint32_t *)(param_1 + 0x10);
}


// 0x10224f30  [inferred]
uint64_t __fastcall thunk_FUN_10225280(int param_1)

{
  bool bVar1;
  uint32_t uVar2;
  uint32_t *extraout_ECX;
  uint32_t extraout_EDX;
  uint32_t extraout_EDX_00;
  
  bVar1 = client_DrawHoverItem_10225270(param_1);
  if (bVar1) {
    uVar2 = sub_1020fe80(*extraout_ECX);
    return CONCAT44(extraout_EDX_00,uVar2);
  }
  return CONCAT44(extraout_EDX,extraout_ECX);
}


// 0x10224f40  (ghidra: FUN_10224f40)  [linked]
uint32_t * __thiscall client_DrawHoverItem_10224f40(void *this,void *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint32_t *puVar4;
  uint64_t uVar5;
  
  uVar3 = param_2;
  iVar2 = *(int *)((int)this + 0x10);
  if (param_2 <= (uint)(*(int *)((int)this + 0x14) - iVar2)) {
    iVar1 = iVar2 + param_2;
    *(int *)((int)this + 0x10) = iVar1;
    uVar5 = client_DrawHoverItem_10225280((int)this);
    client_DrawHoverItem_10225380((void *)((int)uVar5 + iVar2 * 2),param_1,(int)((ulonglong)uVar5 >> 0x20));
    param_1 = (void *)0x0;
    client_DrawHoverItem_10225350((uint16_t *)((int)uVar5 + iVar1 * 2),(uint16_t *)&param_1);
    return this;
  }
  param_2 = param_2 & 0xffffff00;
  puVar4 = client_DrawHoverItem_102254e0(this,uVar3,param_2,param_1,uVar3);
  return puVar4;
}


// 0x10224fc0  (ghidra: FUN_10224fc0)  [linked]
void client_DrawHoverItem_10224fc0(void *param_1,void *param_2,int param_3,void *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_3;
  client_DrawHoverItem_102253a0(param_1,param_2,param_3);
  iVar2 = param_5;
  client_DrawHoverItem_102253a0((void *)((int)param_1 + iVar1 * 2),param_4,param_5);
  param_3 = 0;
  client_DrawHoverItem_10225350((uint16_t *)((int)param_1 + (iVar1 + iVar2) * 2),(uint16_t *)&param_3);
  return;
}


// 0x10225010  (ghidra: FUN_10225010)  [linked]
void __thiscall client_DrawHoverItem_10225010(void *this,short *param_1)

{
  client_DrawHoverItem_10225220(this,param_1);
  return;
}


// 0x10225020  (ghidra: FUN_10225020)  [linked]
void __thiscall client_DrawHoverItem_10225020(void *this,int param_1)

{
  client_DrawHoverItem_10225250(this,param_1);
  return;
}


// 0x10225030  [inferred]
void __fastcall thunk_FUN_102250f0(uint32_t *param_1)

{
  bool bVar1;
  uint32_t *puStack_8;
  
  puStack_8 = param_1;
  bVar1 = client_DrawHoverItem_10225270((int)param_1);
  if (bVar1) {
    client_DrawHoverItem_102253e0((void *)*param_1,param_1[5] + 1);
  }
  param_1[4] = 0;
  param_1[5] = 7;
  puStack_8 = (uint32_t *)0x0;
  client_DrawHoverItem_10225350((uint16_t *)param_1,(uint16_t *)&puStack_8);
  return;
}


// 0x10225040  (ghidra: FUN_10225040)  [linked]
uint32_t * __thiscall client_DrawHoverItem_10225040(void *this,short *param_1)

{
  uint16_t *extraout_ECX;
  void *this_00;
  
  sub_10210450(this);
  client_DrawHoverItem_10225130(extraout_ECX);
  client_DrawHoverItem_10225160(this_00,param_1);
  return this;
}


// 0x10225070  (ghidra: FUN_10225070)  [linked]
uint32_t __fastcall client_DrawHoverItem_10225070(uint32_t *param_1)

{
  uint16_t *extraout_ECX;
  uint32_t extraout_ECX_00;
  
  sub_10210450(param_1);
  client_DrawHoverItem_10225130(extraout_ECX);
  return extraout_ECX_00;
}


// 0x10225090  [inferred]
uint64_t __fastcall thunk_FUN_1020fe30(int param_1)

{
  bool bVar1;
  uint32_t uVar2;
  uint32_t *extraout_ECX;
  uint32_t extraout_EDX;
  uint32_t extraout_EDX_00;
  
  bVar1 = sub_10210040(param_1);
  if (bVar1) {
    uVar2 = sub_1020fe80(*extraout_ECX);
    return CONCAT44(extraout_EDX_00,uVar2);
  }
  return CONCAT44(extraout_EDX,extraout_ECX);
}


// 0x102250a0  (ghidra: FUN_102250a0)  [linked]
void __thiscall client_DrawHoverItem_102250a0(void *this,char *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = sub_1020fe50(param_1);
  uVar2 = sub_1020fe80(iVar1);
  client_DrawHoverItem_102252a0(this,param_1,uVar2);
  return;
}


// 0x102250d0  (ghidra: FUN_102250d0)  [linked]
void __thiscall client_DrawHoverItem_102250d0(void *this,char *param_1)

{
  client_DrawHoverItem_102250a0(this,param_1);
  return;
}


// 0x102250e0  (ghidra: FUN_102250e0)  [linked]
void __thiscall client_DrawHoverItem_102250e0(void *this,char *param_1)

{
  sub_1020fcd0(this,param_1);
  return;
}


// 0x102250f0  (ghidra: FUN_102250f0)  [inferred]
void __fastcall client_DrawHoverItem_102250f0(uint32_t *param_1)

{
  bool bVar1;
  uint32_t *local_8;
  
  local_8 = param_1;
  bVar1 = client_DrawHoverItem_10225270((int)param_1);
  if (bVar1) {
    client_DrawHoverItem_102253e0((void *)*param_1,param_1[5] + 1);
  }
  param_1[4] = 0;
  param_1[5] = 7;
  local_8 = (uint32_t *)0x0;
  client_DrawHoverItem_10225350((uint16_t *)param_1,(uint16_t *)&local_8);
  return;
}


// 0x10225130  (ghidra: FUN_10225130)  [linked]
void __fastcall client_DrawHoverItem_10225130(uint16_t *param_1)

{
  uint32_t local_8;
  
  *(uint32_t *)(param_1 + 8) = 0;
  *(uint32_t *)(param_1 + 10) = 7;
  local_8 = 0;
  client_DrawHoverItem_10225350(param_1,(uint16_t *)&local_8);
  return;
}


// 0x10225160  (ghidra: FUN_10225160)  [linked]
void __thiscall client_DrawHoverItem_10225160(void *this,short *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = client_DrawHoverItem_10225360(param_1);
  uVar2 = sub_1020fe80(iVar1);
  client_DrawHoverItem_10225190(this,param_1,uVar2);
  return;
}


// 0x10225190  (ghidra: FUN_10225190)  [linked]
uint32_t * __thiscall client_DrawHoverItem_10225190(void *this,void *param_1,uint param_2)

{
  uint uVar1;
  uint32_t *puVar2;
  uint64_t uVar3;
  
  uVar1 = param_2;
  if (param_2 <= *(uint *)((int)this + 0x14)) {
    uVar3 = client_DrawHoverItem_10225280((int)this);
    *(uint *)((int)this + 0x10) = uVar1;
    client_DrawHoverItem_10225380((void *)uVar3,param_1,uVar1);
    param_1 = (void *)0x0;
    client_DrawHoverItem_10225350((uint16_t *)((int)(void *)uVar3 + uVar1 * 2),(uint16_t *)&param_1);
    return this;
  }
  param_2 = param_2 & 0xffffff00;
  puVar2 = client_DrawHoverItem_102255a0(this,uVar1,param_2,param_1);
  return puVar2;
}


// 0x102251f0  (ghidra: FUN_102251f0)  [linked]
void client_DrawHoverItem_102251f0(void *param_1,int param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = param_2;
  client_DrawHoverItem_102253a0(param_1,param_3,param_2);
  param_2 = 0;
  client_DrawHoverItem_10225350((uint16_t *)((int)param_1 + iVar1 * 2),(uint16_t *)&param_2);
  return;
}


// 0x10225220  (ghidra: FUN_10225220)  [linked]
void __thiscall client_DrawHoverItem_10225220(void *this,short *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = client_DrawHoverItem_10225360(param_1);
  uVar2 = sub_1020fe80(iVar1);
  client_DrawHoverItem_10224f40(this,param_1,uVar2);
  return;
}


// 0x10225250  (ghidra: FUN_10225250)  [linked]
void __thiscall client_DrawHoverItem_10225250(void *this,int param_1)

{
  uint64_t uVar1;
  
  uVar1 = client_DrawHoverItem_10225280(param_1);
  client_DrawHoverItem_10224f40(this,(void *)uVar1,(uint)((ulonglong)uVar1 >> 0x20));
  return;
}


// 0x10225270  (ghidra: FUN_10225270)  [linked]
bool __fastcall client_DrawHoverItem_10225270(int param_1)

{
  return 7 < *(uint *)(param_1 + 0x14);
}


// 0x10225280  (ghidra: FUN_10225280)  [linked]
uint64_t __fastcall client_DrawHoverItem_10225280(int param_1)

{
  bool bVar1;
  uint32_t uVar2;
  uint32_t *extraout_ECX;
  uint32_t extraout_EDX;
  uint32_t extraout_EDX_00;
  
  bVar1 = client_DrawHoverItem_10225270(param_1);
  if (bVar1) {
    uVar2 = sub_1020fe80(*extraout_ECX);
    return CONCAT44(extraout_EDX_00,uVar2);
  }
  return CONCAT44(extraout_EDX,extraout_ECX);
}


// 0x102252a0  (ghidra: FUN_102252a0)  [linked]
uint32_t * __thiscall client_DrawHoverItem_102252a0(void *this,void *param_1,uint param_2)

{
  void *pvVar1;
  uint uVar2;
  uint32_t *puVar3;
  uint64_t uVar4;
  
  uVar2 = param_2;
  if (param_2 <= (uint)(*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10))) {
    *(uint *)((int)this + 0x10) = *(int *)((int)this + 0x10) + param_2;
    uVar4 = sub_1020fe30((int)this);
    pvVar1 = (void *)((int)uVar4 + (int)((ulonglong)uVar4 >> 0x20));
    sub_10210060(pvVar1,param_1,uVar2);
    param_1 = (void *)((uint)param_1 & 0xffffff);
    sub_10210050((uint8_t *)((int)pvVar1 + uVar2),(uint8_t *)((int)&param_1 + 3));
    return this;
  }
  param_2 = param_2 & 0xffffff00;
  puVar3 = client_DrawHoverItem_10225640(this,uVar2,param_2,param_1,uVar2);
  return puVar3;
}


// 0x10225310  (ghidra: FUN_10225310)  [linked]
void client_DrawHoverItem_10225310(void *param_1,void *param_2,size_t param_3,void *param_4,size_t param_5)

{
  size_t sVar1;
  size_t sVar2;
  
  sVar1 = param_3;
  sub_1020fe60(param_1,param_2,param_3);
  sVar2 = param_5;
  sub_1020fe60((void *)(sVar1 + (int)param_1),param_4,param_5);
  param_3 = param_3 & 0xffffff;
  sub_10210050((uint8_t *)((int)(sVar1 + (int)param_1) + sVar2),(uint8_t *)((int)&param_3 + 3)
              );
  return;
}


// 0x10225350  (ghidra: FUN_10225350)  [linked]
void __fastcall client_DrawHoverItem_10225350(uint16_t *param_1,uint16_t *param_2)

{
  *param_1 = *param_2;
  return;
}


// 0x10225360  (ghidra: FUN_10225360)  [linked]
int __fastcall client_DrawHoverItem_10225360(short *param_1)

{
  short *psVar1;
  short sVar2;
  
  psVar1 = param_1 + 1;
  do {
    sVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (sVar2 != 0);
  return (int)param_1 - (int)psVar1 >> 1;
}


// 0x10225380  (ghidra: FUN_10225380)  [linked]
void * __fastcall client_DrawHoverItem_10225380(void *param_1,void *param_2,int param_3)

{
  memmove(param_1,param_2,param_3 * 2);
  return param_1;
}


// 0x102253a0  (ghidra: FUN_102253a0)  [linked]
void * __cdecl client_DrawHoverItem_102253a0(void *param_1,void *param_2,int param_3)

{
  memcpy(param_1,param_2,param_3 * 2);
  return param_1;
}


// 0x102253c0  (ghidra: FUN_102253c0)  [linked]
void client_DrawHoverItem_102253c0(uint param_1)

{
  uint uVar1;
  
  uVar1 = client_DrawHoverItem_10225700(param_1);
  sub_10210950(uVar1);
  return;
}


// 0x102253e0  (ghidra: FUN_102253e0)  [linked]
void client_DrawHoverItem_102253e0(void *param_1,int param_2)

{
  sub_10210850(param_1,param_2 * 2);
  return;
}


// 0x10225400  (ghidra: FUN_10225400)  [linked]
void __cdecl client_DrawHoverItem_10225400(uint32_t param_1,uint32_t param_2)

{
  uint8_t  stack0x0000000c;   /* not traced by Ghidra: address of a stack slot */

  sub_1021b820(param_1,0x100,param_2,&stack0x0000000c);
  return;
}


// 0x10225420  (ghidra: FUN_10225420)  [linked]
void __cdecl client_DrawHoverItem_10225420(uint32_t param_1,uint32_t param_2)

{
  uint8_t  stack0x0000000c;   /* not traced by Ghidra: address of a stack slot */

  sub_1021b820(param_1,6,param_2,&stack0x0000000c);
  return;
}


// 0x10225440  (ghidra: FUN_10225440)  [linked]
void __cdecl client_DrawHoverItem_10225440(uint32_t param_1,uint32_t param_2)

{
  uint8_t  stack0x0000000c;   /* not traced by Ghidra: address of a stack slot */

  sub_1021b820(param_1,0x20,param_2,&stack0x0000000c);
  return;
}


// 0x10225460  (ghidra: FUN_10225460)  [linked]
void __cdecl client_DrawHoverItem_10225460(uint32_t param_1,uint32_t param_2)

{
  uint8_t  stack0x0000000c;   /* not traced by Ghidra: address of a stack slot */

  sub_1021b820(param_1,0xe,param_2,&stack0x0000000c);
  return;
}


// 0x10225480  (ghidra: FUN_10225480)  [linked]
void * __fastcall client_DrawHoverItem_10225480(void *param_1,int param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint32_t extraout_ECX;
  uint64_t uVar5;
  
  iVar1 = client_DrawHoverItem_10224f20(param_2);
  iVar2 = client_DrawHoverItem_10225360(param_3);
  uVar3 = sub_1020fe80(iVar2);
  uVar4 = client_DrawHoverItem_10224ec0();
  if (uVar3 <= uVar4 - iVar1) {
    uVar5 = thunk_FUN_10225280(param_2);
    client_DrawHoverItem_10225730(param_1,uVar3,extraout_ECX,(void *)uVar5,iVar1,param_3,
                 (int)((ulonglong)uVar5 >> 0x20));
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_1020f3f0();
}


// 0x102254e0  (ghidra: FUN_102254e0)  [linked]
uint32_t * __thiscall
client_DrawHoverItem_102254e0(void *this,uint param_1,uint32_t param_2,void *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  void *extraout_EDX;
  int iVar5;
  void *pvVar6;
  uint32_t local_10;
  int local_c;
  void *local_8;
  
  local_8 = param_3;
  iVar5 = *(int *)((int)this + 0x10);
  local_c = iVar5;
  uVar1 = client_DrawHoverItem_10224ec0();
  if (uVar1 - iVar5 < param_1) {
                    /* WARNING: Subroutine does not return */
    sub_stl_1020f3f0();
  }
  uVar1 = *(uint *)((int)this + 0x14);
  uVar2 = client_DrawHoverItem_10225710(this,iVar5 + param_1);
  local_10 = client_DrawHoverItem_102253c0(-(uint)(0xfffffffe < uVar2) | uVar2 + 1);
  *(uint *)((int)this + 0x10) = iVar5 + param_1;
  *(uint *)((int)this + 0x14) = uVar2;
  pvVar3 = (void *)sub_1020fe80(local_10);
  if (7 < uVar1) {
    pvVar3 = *(void **)this;
    iVar5 = local_c;
    pvVar6 = local_8;
    pvVar4 = (void *)sub_1020fe80(pvVar3);
    client_DrawHoverItem_10224fc0(extraout_EDX,pvVar4,iVar5,pvVar6,param_4);
    client_DrawHoverItem_102253e0(pvVar3,uVar1 + 1);
    *(uint32_t *)this = local_10;
    return this;
  }
  client_DrawHoverItem_10224fc0(pvVar3,this,local_c,local_8,param_4);
  sub_10210750(this,&local_10);
  return this;
}


// 0x102255a0  (ghidra: FUN_102255a0)  [linked]
uint32_t * __thiscall client_DrawHoverItem_102255a0(void *this,uint param_1,uint32_t param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint32_t local_8;
  
  uVar1 = client_DrawHoverItem_10224ec0();
  if (uVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    sub_stl_1020f3f0();
  }
  uVar1 = *(uint *)((int)this + 0x14);
  uVar2 = client_DrawHoverItem_10225710(this,param_1);
  local_8 = client_DrawHoverItem_102253c0(-(uint)(0xfffffffe < uVar2) | uVar2 + 1);
  *(uint *)((int)this + 0x10) = param_1;
  *(uint *)((int)this + 0x14) = uVar2;
  pvVar3 = (void *)sub_1020fe80(local_8);
  client_DrawHoverItem_102251f0(pvVar3,param_1,param_3);
  if (7 < uVar1) {
    client_DrawHoverItem_102253e0(*(void **)this,uVar1 + 1);
    *(uint32_t *)this = local_8;
    return this;
  }
  sub_10210750(this,&local_8);
  return this;
}


// 0x10225640  (ghidra: FUN_10225640)  [linked]
uint32_t * __thiscall
client_DrawHoverItem_10225640(void *this,uint param_1,uint32_t param_2,void *param_3,size_t param_4)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  void *extraout_EDX;
  size_t sVar5;
  void *pvVar6;
  uint32_t local_10;
  size_t local_c;
  void *local_8;
  
  local_8 = param_3;
  sVar5 = *(size_t *)((int)this + 0x10);
  local_c = sVar5;
  uVar1 = sub_1020ffe0();
  if (uVar1 - sVar5 < param_1) {
                    /* WARNING: Subroutine does not return */
    sub_stl_1020f3f0();
  }
  uVar1 = *(uint *)((int)this + 0x14);
  uVar2 = sub_10210b70(this,sVar5 + param_1);
  local_10 = sub_10210080(-(uint)(0xfffffffe < uVar2) | uVar2 + 1);
  *(size_t *)((int)this + 0x10) = sVar5 + param_1;
  *(uint *)((int)this + 0x14) = uVar2;
  pvVar3 = (void *)sub_1020fe80(local_10);
  if (0xf < uVar1) {
    pvVar3 = *(void **)this;
    sVar5 = local_c;
    pvVar6 = local_8;
    pvVar4 = (void *)sub_1020fe80(pvVar3);
    client_DrawHoverItem_10225310(extraout_EDX,pvVar4,sVar5,pvVar6,param_4);
    sub_102100a0(pvVar3,uVar1 + 1);
    *(uint32_t *)this = local_10;
    return this;
  }
  client_DrawHoverItem_10225310(pvVar3,this,local_c,local_8,param_4);
  sub_10210750(this,&local_10);
  return this;
}


// 0x10225700  (ghidra: FUN_10225700)  [linked]
int __fastcall client_DrawHoverItem_10225700(uint param_1)

{
  uint32_t auStack_10 [3];
  
  if (param_1 < 0x80000000) {
    return param_1 * 2;
  }
  sub_1020f2f0(auStack_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(auStack_10,(ThrowInfo *)&DAT_10393b48);
}


// 0x10225710  (ghidra: FUN_10225710)  [linked]
void __thiscall client_DrawHoverItem_10225710(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = client_DrawHoverItem_10224ec0();
  client_DrawHoverItem_10225810(param_1,*(uint *)((int)this + 0x14),uVar1);
  return;
}


// 0x10225730  (ghidra: FUN_10225730)  [linked]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t * __thiscall
client_DrawHoverItem_10225730(void *this,uint32_t param_1,uint32_t param_2,void *param_3,int param_4,
            void *param_5,int param_6)

{
  uint *puVar1;
  void *pvVar2;
  uint uVar3;
  uint32_t local_14;
  void *local_10;
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_10 = param_5;
  sub_10210440(this);
  uVar3 = 7;
  local_c = param_6 + param_4;
  pvVar2 = this;
  if (7 < local_c) {
    uVar3 = client_DrawHoverItem_10224ec0();
    puVar1 = sub_1020ff10(&local_c,(uint *)&DAT_103775e8);
    uVar3 = client_DrawHoverItem_10225810(*puVar1,7,uVar3);
    local_14 = client_DrawHoverItem_102253c0(-(uint)(0xfffffffe < uVar3) | uVar3 + 1);
    pvVar2 = (void *)sub_1020fe80(local_14);
    sub_10210750(this,&local_14);
  }
  *(uint *)((int)this + 0x10) = local_c;
  *(uint *)((int)this + 0x14) = uVar3;
  client_DrawHoverItem_102253a0(pvVar2,param_3,param_4);
  client_DrawHoverItem_102253a0((void *)((int)pvVar2 + param_4 * 2),local_10,param_6);
  local_10 = (void *)0x0;
  client_DrawHoverItem_10225350((uint16_t *)((int)pvVar2 + local_c * 2),(uint16_t *)&local_10);
  return this;
}


// 0x10225810  (ghidra: FUN_10225810)  [linked]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __fastcall client_DrawHoverItem_10225810(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint local_10;
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_c = param_1 | 7;
  if ((local_c <= param_3) && (param_2 <= param_3 - (param_2 >> 1))) {
    local_10 = (param_2 >> 1) + param_2;
    puVar1 = sub_1020ff10(&local_c,&local_10);
    return *puVar1;
  }
  return param_3;
}

