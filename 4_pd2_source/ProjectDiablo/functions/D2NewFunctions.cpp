/*
 * functions/D2NewFunctions.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x101269e0 - 0x102ce500
 * Functions     : 297
 * Attribution   : range=233, linked=40, anchor=1, inferred=23
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x101269e0  (ghidra: FUN_101269e0)  [range]
void functions_D2NewFunctions_init_101269e0(void)

{
  uint32_t extraout_ECX;
  
  sub_1020f410((uint64_t *)&DAT_104e3064);
  sub_1020f960(extraout_ECX);
  _atexit(FUN_1031d310);
  return;
}


// 0x10126a00  (ghidra: FUN_10126a00)  [range]
void functions_D2NewFunctions_init_10126a00(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e31d0);
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
  sub_1020f900(&DAT_104e31d0);
  _atexit((_func_4879 *)&LAB_1031d320);
  return;
}


// 0x10126af0  (ghidra: FUN_10126af0)  [range]
void functions_D2NewFunctions_init_10126af0(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e3050);
  local_c = 0x84;
  local_1c = 6;
  uStack_18 = 0x42;
  uStack_14 = 0x4c;
  uStack_10 = 0x6a;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104e3050);
  _atexit((_func_4879 *)&LAB_1031d330);
  return;
}


// 0x10126b50  (ghidra: FUN_10126b50)  [range]
void functions_D2NewFunctions_init_10126b50(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e3198);
  local_c = 0x113;
  local_1c = 0;
  uStack_18 = 0xff;
  uStack_14 = 0x104;
  uStack_10 = 0x10e;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104e3198);
  _atexit((_func_4879 *)&LAB_1031d340);
  return;
}


// 0x10126bb0  (ghidra: FUN_10126bb0)  [range]
void functions_D2NewFunctions_init_10126bb0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e30ac);
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
  sub_1020f900(&DAT_104e30ac);
  _atexit((_func_4879 *)&LAB_1031d350);
  return;
}


// 0x10126c20  (ghidra: FUN_10126c20)  [range]
void functions_D2NewFunctions_init_10126c20(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e3118);
  local_28 = 0x115;
  uStack_24 = 0x39;
  uStack_20 = 0xdb;
  uStack_1c = 0xdc;
  local_18 = 0x202;
  uStack_14 = 0xd9;
  uStack_10 = 0xda;
  uStack_c = 0x201;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104e3118);
  _atexit((_func_4879 *)&LAB_1031d360);
  return;
}


// 0x10126c80  (ghidra: FUN_10126c80)  [range]
void functions_D2NewFunctions_init_10126c80(void)

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
  
  sub_1020f420((uint64_t *)&DAT_104e3138);
  local_28 = 0x1d8;
  uStack_24 = 0x1d9;
  uStack_20 = 0x1da;
  uStack_1c = 0x1a0;
  local_18 = 0x1dc;
  uStack_14 = 0x1dd;
  uStack_10 = 0x1de;
  uStack_c = 0x1df;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f780((uint32_t *)&DAT_104e3138);
  _atexit((_func_4879 *)&LAB_1031d370);
  return;
}


// 0x10126ce0  (ghidra: FUN_10126ce0)  [range]
void functions_D2NewFunctions_init_10126ce0(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e3144);
  local_10 = 0x6b;
  local_c = 0x102;
  local_20 = 0x36;
  uStack_1c = 0x165;
  uStack_18 = 0x16f;
  uStack_14 = 0x172;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104e3144);
  _atexit((_func_4879 *)&LAB_1031d380);
  return;
}


// 0x10126d50  (ghidra: FUN_10126d50)  [range]
void functions_D2NewFunctions_init_10126d50(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e302c);
  local_10 = 0x8f;
  local_c = 0x6b;
  local_20 = 0x111;
  uStack_1c = 0x79;
  uStack_18 = 0x97;
  uStack_14 = 0x84;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104e302c);
  _atexit((_func_4879 *)&LAB_1031d390);
  return;
}


// 0x10126dc0  (ghidra: FUN_10126dc0)  [range]
void functions_D2NewFunctions_init_10126dc0(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e3164);
  local_10 = 0x22b;
  local_c = 0x22a;
  local_20 = 0x254;
  uStack_1c = 0x251;
  uStack_18 = 0x22c;
  uStack_14 = 0x22d;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104e3164);
  _atexit((_func_4879 *)&LAB_1031d3a0);
  return;
}


// 0x10126e30  (ghidra: FUN_10126e30)  [range]
void functions_D2NewFunctions_init_10126e30(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e30b4);
  local_28 = 0x92;
  uStack_24 = 0x94;
  uStack_20 = 0x97;
  uStack_1c = 0x9b;
  local_18 = 0x91;
  uStack_14 = 0xa9;
  uStack_10 = 0x8f;
  uStack_c = 0x9e;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104e30b4);
  _atexit((_func_4879 *)&LAB_1031d3b0);
  return;
}


// 0x10126e90  (ghidra: FUN_10126e90)  [range]
void functions_D2NewFunctions_init_10126e90(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e3130);
  local_28 = 0x35d;
  uStack_24 = 0x36f;
  uStack_20 = 0x366;
  uStack_1c = 0x37d;
  local_18 = 0x2ea;
  uStack_14 = 0x3e4;
  uStack_10 = 0x2ee;
  uStack_c = 0x393;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104e3130);
  _atexit((_func_4879 *)&LAB_1031d3c0);
  return;
}


// 0x10126ef0  (ghidra: FUN_10126ef0)  [range]
void functions_D2NewFunctions_init_10126ef0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e31e4);
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
  sub_1020f900(&DAT_104e31e4);
  _atexit((_func_4879 *)&LAB_1031d3d0);
  return;
}


// 0x10126f60  (ghidra: FUN_10126f60)  [range]
void functions_D2NewFunctions_init_10126f60(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e2fd4);
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
  sub_1020f900(&DAT_104e2fd4);
  _atexit((_func_4879 *)&LAB_1031d3e0);
  return;
}


// 0x10126fd0  (ghidra: FUN_10126fd0)  [range]
void functions_D2NewFunctions_init_10126fd0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e30a4);
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
  sub_1020f900(&DAT_104e30a4);
  _atexit((_func_4879 *)&LAB_1031d3f0);
  return;
}


// 0x10127040  (ghidra: FUN_10127040)  [range]
void functions_D2NewFunctions_init_10127040(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e31b8);
  local_28 = 0x33a;
  uStack_24 = 0x3e6;
  uStack_20 = 0x373;
  uStack_1c = 0x329;
  local_18 = 0x461;
  uStack_14 = 0x462;
  uStack_10 = 0x2f3;
  uStack_c = 0x3c4;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104e31b8);
  _atexit((_func_4879 *)&LAB_1031d400);
  return;
}


// 0x101270a0  (ghidra: FUN_101270a0)  [range]
void functions_D2NewFunctions_init_101270a0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e3018);
  local_28 = 0x98;
  uStack_24 = 0x99;
  uStack_20 = 0xa4;
  uStack_1c = 0xa5;
  local_18 = 0xab;
  uStack_14 = 0xac;
  uStack_10 = 0xba;
  uStack_c = 0xbb;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104e3018);
  _atexit((_func_4879 *)&LAB_1031d410);
  return;
}


// 0x10127100  (ghidra: FUN_10127100)  [range]
void functions_D2NewFunctions_init_10127100(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e31c0);
  local_14 = 0x2eb;
  local_10 = 1000;
  local_c = 0x44f;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104e31c0);
  _atexit((_func_4879 *)&LAB_1031d420);
  return;
}


// 0x10127160  (ghidra: FUN_10127160)  [range]
void functions_D2NewFunctions_init_10127160(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e31a0);
  local_14 = 0x2e7;
  local_10 = 0x450;
  local_c = 0x451;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104e31a0);
  _atexit((_func_4879 *)&LAB_1031d430);
  return;
}


// 0x101271c0  (ghidra: FUN_101271c0)  [range]
void functions_D2NewFunctions_init_101271c0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e3224);
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
  sub_1020f900(&DAT_104e3224);
  _atexit((_func_4879 *)&LAB_1031d440);
  return;
}


// 0x10127240  (ghidra: FUN_10127240)  [range]
void functions_D2NewFunctions_init_10127240(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e3010);
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
  sub_1020f900(&DAT_104e3010);
  _atexit((_func_4879 *)&LAB_1031d450);
  return;
}


// 0x101272b0  (ghidra: FUN_101272b0)  [range]
void functions_D2NewFunctions_init_101272b0(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104e30c8);
  local_18 = 0x9d;
  local_14 = 0x9f;
  sub_1020f550(local_10,&local_18,local_10);
  sub_1020f900(&DAT_104e30c8);
  _atexit((_func_4879 *)&LAB_1031d460);
  return;
}


// 0x10127310  (ghidra: FUN_10127310)  [range]
void functions_D2NewFunctions_init_10127310(void)

{
  uint8_t local_20 [8];
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e3150);
  local_18 = 0x89;
  uStack_14 = 0xa1;
  uStack_10 = 0xa8;
  uStack_c = 0xbc;
  sub_1020f550(local_20,&local_18,local_8);
  sub_1020f900(&DAT_104e3150);
  _atexit((_func_4879 *)&LAB_1031d470);
  return;
}


// 0x10127370  (ghidra: FUN_10127370)  [range]
void functions_D2NewFunctions_init_10127370(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e3120);
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
  sub_1020f900(&DAT_104e3120);
  _atexit((_func_4879 *)&LAB_1031d480);
  return;
}


// 0x10127410  (ghidra: FUN_10127410)  [range]
void functions_D2NewFunctions_init_10127410(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e310c);
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
  sub_1020f900(&DAT_104e310c);
  _atexit((_func_4879 *)&LAB_1031d490);
  return;
}


// 0x10127480  (ghidra: FUN_10127480)  [range]
void functions_D2NewFunctions_init_10127480(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e308c);
  local_14 = 0x89;
  local_10 = 0xa1;
  local_c = 0xbc;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104e308c);
  _atexit((_func_4879 *)&LAB_1031d4a0);
  return;
}


// 0x101274e0  (ghidra: FUN_101274e0)  [range]
void functions_D2NewFunctions_init_101274e0(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e3034);
  local_14 = 0x85;
  local_10 = 0x86;
  local_c = 0x87;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104e3034);
  _atexit((_func_4879 *)&LAB_1031d4b0);
  return;
}


// 0x10127540  (ghidra: FUN_10127540)  [range]
void functions_D2NewFunctions_init_10127540(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e3210);
  local_c = 0x220;
  local_1c = 0x9c;
  uStack_18 = 0xd3;
  uStack_14 = 0xf2;
  uStack_10 = 0xf3;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104e3210);
  _atexit((_func_4879 *)&LAB_1031d4c0);
  return;
}


// 0x101275a0  (ghidra: FUN_101275a0)  [range]
void functions_D2NewFunctions_init_101275a0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e2fdc);
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
  sub_1020f900(&DAT_104e2fdc);
  _atexit((_func_4879 *)&LAB_1031d4d0);
  return;
}


// 0x10127630  (ghidra: FUN_10127630)  [range]
void functions_D2NewFunctions_init_10127630(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e30c0);
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
  sub_1020f900(&DAT_104e30c0);
  _atexit((_func_4879 *)&LAB_1031d4e0);
  return;
}


// 0x101276f0  (ghidra: FUN_101276f0)  [range]
void functions_D2NewFunctions_init_101276f0(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e3074);
  local_20 = 0x315;
  local_c = 0x458;
  local_1c = 0x3a5;
  uStack_18 = 0x3a6;
  uStack_14 = 0x3a7;
  uStack_10 = 0x3a8;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104e3074);
  _atexit((_func_4879 *)&LAB_1031d4f0);
  return;
}


// 0x10127760  (ghidra: FUN_10127760)  [range]
void functions_D2NewFunctions_init_10127760(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e3044);
  local_10 = 0x2d9;
  local_c = 0x2da;
  local_20 = 0x2d5;
  uStack_1c = 0x2d6;
  uStack_18 = 0x2d7;
  uStack_14 = 0x2d8;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104e3044);
  _atexit((_func_4879 *)&LAB_1031d500);
  return;
}


// 0x101277d0  (ghidra: FUN_101277d0)  [range]
void functions_D2NewFunctions_init_101277d0(void)

{
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104e3004);
  local_14 = 0x2c8;
  sub_1020f550(local_10,&local_14,local_10);
  sub_1020f900(&DAT_104e3004);
  _atexit((_func_4879 *)&LAB_1031d510);
  return;
}


// 0x10127820  (ghidra: FUN_10127820)  [range]
void functions_D2NewFunctions_init_10127820(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104e3184);
  local_18 = 0x2db;
  local_14 = 0x2dc;
  sub_1020f550(local_10,&local_18,local_10);
  sub_1020f900(&DAT_104e3184);
  _atexit((_func_4879 *)&LAB_1031d520);
  return;
}


// 0x10127880  (ghidra: FUN_10127880)  [range]
void functions_D2NewFunctions_init_10127880(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e31b0);
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
  sub_1020f880(&DAT_104e31b0);
  _atexit((_func_4879 *)&LAB_1031d530);
  return;
}


// 0x10127910  (ghidra: FUN_10127910)  [range]
void functions_D2NewFunctions_init_10127910(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e31a8);
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
  sub_1020f880(&DAT_104e31a8);
  _atexit((_func_4879 *)&LAB_1031d540);
  return;
}


// 0x10127a10  (ghidra: FUN_10127a10)  [range]
void functions_D2NewFunctions_init_10127a10(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e318c);
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
  sub_1020f900(&DAT_104e318c);
  _atexit((_func_4879 *)&LAB_1031d550);
  return;
}


// 0x10127a90  (ghidra: FUN_10127a90)  [range]
void functions_D2NewFunctions_init_10127a90(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e3170);
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
  sub_1020f900(&DAT_104e3170);
  _atexit((_func_4879 *)&LAB_1031d560);
  return;
}


// 0x10127b20  (ghidra: FUN_10127b20)  [range]
void functions_D2NewFunctions_init_10127b20(void)

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
  sub_1020f420((uint64_t *)&DAT_104e3178);
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
  sub_1020f7f0((uint32_t *)&DAT_104e3178);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_100,0xc,9,thunk_FUN_1020fb40);
  _atexit((_func_4879 *)&LAB_1031d570);
  ExceptionList = local_10;
  return;
}


// 0x101280e0  (ghidra: FUN_101280e0)  [range]
void functions_D2NewFunctions_init_101280e0(void)

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
  sub_1020f420((uint64_t *)&DAT_104e3058);
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
  sub_1020f840((uint32_t *)&DAT_104e3058);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_304,8,0x26,thunk_FUN_1020f8e0);
  _atexit((_func_4879 *)&DAT_1031d580);
  ExceptionList = local_10;
  return;
}


// 0x10128ab0  (ghidra: FUN_10128ab0)  [range]
void functions_D2NewFunctions_init_10128ab0(void)

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
  sub_1020f420((uint64_t *)&DAT_104e2ff4);
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
  sub_1020f7f0((uint32_t *)&DAT_104e2ff4);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_4ec,0xc,0x26,thunk_FUN_1020fb40);
  _atexit((_func_4879 *)&LAB_1031d590);
  ExceptionList = local_10;
  return;
}


// 0x101294b0  (ghidra: FUN_101294b0)  [range]
void functions_D2NewFunctions_init_101294b0(void)

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
  sub_1020f420((uint64_t *)&DAT_104e3098);
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
  sub_1020f730((uint32_t *)&DAT_104e3098);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_3a8,0x18,0x26,thunk_FUN_1020fc60);
  _atexit((_func_4879 *)&LAB_1031d5a0);
  ExceptionList = local_10;
  return;
}


// 0x10129830  (ghidra: FUN_10129830)  [range]
void functions_D2NewFunctions_init_10129830(void)

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
  sub_1020f410((uint64_t *)&DAT_104e303c);
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
  sub_1020f6a0(&DAT_104e303c);
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
  _atexit((_func_4879 *)&LAB_1031d5b0);
  ExceptionList = local_10;
  return;
}


// 0x10129d60  (ghidra: FUN_10129d60)  [range]
void functions_D2NewFunctions_init_10129d60(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e31dc);
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
  sub_10210100(&DAT_10376ccc,&local_6c);
  local_68 = 0x10;
  sub_10210100(&DAT_10376cd0,&local_68);
  local_64 = 0x13;
  sub_10210100(&DAT_10376cc4,&local_64);
  sub_1020f550(local_10,local_60,local_10);
  sub_1020f640(&DAT_104e31dc);
  _atexit((_func_4879 *)&LAB_1031d5c0);
  return;
}


// 0x10129f10  (ghidra: FUN_10129f10)  [range]
void functions_D2NewFunctions_init_10129f10(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104e2fe4);
  local_18 = 0x41503033;
  local_14 = 0x32484754;
  local_10 = 0x57375258;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104e2fe4);
  _atexit((_func_4879 *)&LAB_1031d5d0);
  return;
}


// 0x10129f70  (ghidra: FUN_10129f70)  [range]
void functions_D2NewFunctions_init_10129f70(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104e307c);
  local_18 = 0x554f4e36;
  local_14 = 0x56383149;
  local_10 = 0x4a4d5942;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104e307c);
  _atexit((_func_4879 *)&LAB_1031d5e0);
  return;
}


// 0x10129fd0  (ghidra: FUN_10129fd0)  [range]
void functions_D2NewFunctions_init_10129fd0(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104e3020);
  local_18 = 0x44513534;
  local_14 = 0x455a4b4c;
  local_10 = 0x46433953;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104e3020);
  _atexit((_func_4879 *)&LAB_1031d5f0);
  return;
}


// 0x1012a030  (ghidra: FUN_1012a030)  [range]
void functions_D2NewFunctions_init_1012a030(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104e30d0);
  local_18 = 0x35333130;
  local_14 = 0x4b4c4941;
  local_10 = 0x5553514f;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104e30d0);
  _atexit((_func_4879 *)&LAB_1031d600);
  return;
}


// 0x1012a090  (ghidra: FUN_1012a090)  [range]
void functions_D2NewFunctions_init_1012a090(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e2fcc);
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
  sub_1020f570(&DAT_104e2fcc);
  _atexit((_func_4879 *)&LAB_1031d610);
  return;
}


// 0x1012aa70  (ghidra: FUN_1012aa70)  [range]
void functions_D2NewFunctions_InitPtr_D2Common_DAT_6fde9e1c_1012aa70(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Common_DAT_6fde9e1c();
  p_D2Common_DAT_6fde9e1c = *puVar1;
  return;
}


// 0x1012af40  (ghidra: FUN_1012af40)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd1b870_1012af40(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd1b870();
  p_D2Game_DAT_6fd1b870 = *puVar1;
  return;
}


// 0x1012af50  (ghidra: FUN_1012af50)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd1b770_1012af50(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd1b770();
  p_D2Game_DAT_6fd1b770 = *puVar1;
  return;
}


// 0x1012afa0  (ghidra: FUN_1012afa0)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd18be0_1012afa0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd18be0();
  p_D2Game_DAT_6fd18be0 = *puVar1;
  return;
}


// 0x1012bd80  (ghidra: FUN_1012bd80)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd27238_1012bd80(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd27238();
  p_D2Game_DAT_6fd27238 = *puVar1;
  return;
}


// 0x1012bd90  (ghidra: FUN_1012bd90)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd274a8_1012bd90(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd274a8();
  p_D2Game_DAT_6fd274a8 = *puVar1;
  return;
}


// 0x1012bda0  (ghidra: FUN_1012bda0)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd277a8_1012bda0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd277a8();
  p_D2Game_DAT_6fd277a8 = *puVar1;
  return;
}


// 0x1012bdc0  (ghidra: FUN_1012bdc0)  [range]
void functions_D2NewFunctions_InitPtr_D2Client_DAT_6fb8ea48_1012bdc0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fb8ea48();
  p_D2Client_DAT_6fb8ea48 = *puVar1;
  return;
}


// 0x1012bdd0  (ghidra: FUN_1012bdd0)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd27338_1012bdd0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd27338();
  p_D2Game_DAT_6fd27338 = *puVar1;
  return;
}


// 0x1012be00  (ghidra: FUN_1012be00)  [range]
void functions_D2NewFunctions_InitPtr_D2Client_DAT_6fb8de60_1012be00(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fb8de60();
  p_D2Client_DAT_6fb8de60 = *puVar1;
  return;
}


// 0x1012be10  (ghidra: FUN_1012be10)  [range]
void functions_D2NewFunctions_InitPtr_D2Net_DAT_6fbfa900_1012be10(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Net_DAT_6fbfa900();
  p_D2Net_DAT_6fbfa900 = *puVar1;
  return;
}


// 0x1012be20  (ghidra: FUN_1012be20)  [range]
void functions_D2NewFunctions_InitPtr_D2Net_DAT_6fbfabd8_1012be20(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Net_DAT_6fbfabd8();
  p_D2Net_DAT_6fbfabd8 = *puVar1;
  return;
}


// 0x1012bef0  (ghidra: FUN_1012bef0)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd31c3c_1012bef0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd31c3c();
  p_D2Game_DAT_6fd31c3c = *puVar1;
  return;
}


// 0x1012bf00  (ghidra: FUN_1012bf00)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd1a3f8_1012bf00(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd1a3f8();
  p_D2Game_DAT_6fd1a3f8 = *puVar1;
  return;
}


// 0x1012bf10  (ghidra: FUN_1012bf10)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd2e050_1012bf10(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd2e050();
  p_D2Game_DAT_6fd2e050 = *puVar1;
  return;
}


// 0x1012bf20  (ghidra: FUN_1012bf20)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd27bb8_1012bf20(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd27bb8();
  p_D2Game_DAT_6fd27bb8 = *puVar1;
  return;
}


// 0x1012bf50  (ghidra: FUN_1012bf50)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd26f0c_1012bf50(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd26f0c();
  p_D2Game_DAT_6fd26f0c = *puVar1;
  return;
}


// 0x1012bf70  (ghidra: FUN_1012bf70)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd2f448_1012bf70(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd2f448();
  p_D2Game_DAT_6fd2f448 = *puVar1;
  return;
}


// 0x1012c000  (ghidra: FUN_1012c000)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd22ab0_1012c000(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd22ab0();
  p_D2Game_DAT_6fd22ab0 = *puVar1;
  return;
}


// 0x1012c030  (ghidra: FUN_1012c030)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd1a3dc_1012c030(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd1a3dc();
  p_D2Game_DAT_6fd1a3dc = *puVar1;
  return;
}


// 0x1012c040  (ghidra: FUN_1012c040)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd1a01c_1012c040(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd1a01c();
  p_D2Game_DAT_6fd1a01c = *puVar1;
  return;
}


// 0x1012c050  (ghidra: FUN_1012c050)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd1a048_1012c050(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd1a048();
  p_D2Game_DAT_6fd1a048 = *puVar1;
  return;
}


// 0x1012c2c0  (ghidra: FUN_1012c2c0)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd303b8_1012c2c0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd303b8();
  p_D2Game_DAT_6fd303b8 = *puVar1;
  return;
}


// 0x1012c2d0  (ghidra: FUN_1012c2d0)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd307b8_1012c2d0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd307b8();
  p_D2Game_DAT_6fd307b8 = *puVar1;
  return;
}


// 0x1012c2e0  (ghidra: FUN_1012c2e0)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd30bb8_1012c2e0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd30bb8();
  p_D2Game_DAT_6fd30bb8 = *puVar1;
  return;
}


// 0x1012c2f0  (ghidra: FUN_1012c2f0)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd30bd0_1012c2f0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd30bd0();
  p_D2Game_DAT_6fd30bd0 = *puVar1;
  return;
}


// 0x1012c330  (ghidra: FUN_1012c330)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd31c18_1012c330(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd31c18();
  p_D2Game_DAT_6fd31c18 = *puVar1;
  return;
}


// 0x1012ca60  (ghidra: FUN_1012ca60)  [range]
void functions_D2NewFunctions_InitPtr_D2Client_DAT_6fb84390_1012ca60(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fb84390();
  p_D2Client_DAT_6fb84390 = *puVar1;
  return;
}


// 0x1012ca70  (ghidra: FUN_1012ca70)  [range]
void functions_D2NewFunctions_InitPtr_D2Client_DAT_6fb84290_1012ca70(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fb84290();
  p_D2Client_DAT_6fb84290 = *puVar1;
  return;
}


// 0x1012e570  (ghidra: FUN_1012e570)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd2da44_1012e570(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd2da44();
  p_D2Game_DAT_6fd2da44 = *puVar1;
  return;
}


// 0x1012e590  (ghidra: FUN_1012e590)  [range]
void functions_D2NewFunctions_InitPtr_D2Game_DAT_6fd2d970_102a91f0_1012e590(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd2d970_102a91f0();
  p_D2Game_DAT_6fd2d970_102a91f0 = *puVar1;
  return;
}


// 0x1012e9e0  (ghidra: FUN_1012e9e0)  [range]
void functions_D2NewFunctions_init_1012e9e0(void)

{
  uint32_t extraout_ECX;
  
  functions_D2NewFunctions_102be2e0();
  functions_D2NewFunctions_102cbda0(extraout_ECX);
  _atexit(FUN_1031d620);
  return;
}


// 0x1012ea00  (ghidra: FUN_1012ea00)  [range]
void functions_D2NewFunctions_init_1012ea00(void)

{
  sub_1020f990(&DAT_104e30f0,"35.225.107.249");
  _atexit(FUN_1031d630);
  return;
}


// 0x1012ea20  (ghidra: FUN_1012ea20)  [range]
void functions_D2NewFunctions_init_1012ea20(void)

{
  sub_1020f990(&DAT_104e31f4,"127.0.0.1");
  _atexit(FUN_1031d640);
  return;
}


// 0x102be2e0  (ghidra: FUN_102be2e0)  [linked]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void functions_D2NewFunctions_102be2e0(void)

{
  DAT_104e3158 = 0;
  return;
}


// 0x102be2f0  (ghidra: FUN_102be2f0)  [range]
uint32_t functions_D2NewFunctions_102be2f0(void)

{
  int iVar1;
  
  iVar1 = p_D2Game_DAT_6fd27238;
  *(code **)(p_D2Game_DAT_6fd27238 + 0x14) = sub_102d46c0;
  *(code **)(iVar1 + 0x1c) = sub_102d4750;
  *(code **)(iVar1 + 0x2c) = sub_102d47d0;
  *(code **)(iVar1 + 100) = functions_ItemFunctions_102d4820;
  *(code **)(iVar1 + 0x6c) = functions_ItemFunctions_102d5650;
  return 1;
}


// 0x102be320  (ghidra: FUN_102be320)  [range]
uint32_t functions_D2NewFunctions_102be320(void)

{
  int iVar1;
  
  iVar1 = p_D2Client_DAT_6fb8ea48;
  *(code **)(p_D2Client_DAT_6fb8ea48 + 0x20) = sub_102f5e00;
  *(code **)(iVar1 + 0x14c) = sub_102f5f60;
  *(code **)(iVar1 + 0x178) = sub_102f6070;
  *(code **)(iVar1 + 0x184) = sub_102f6170;
  *(code **)(iVar1 + 0x188) = sub_102f6360;
  *(code **)(iVar1 + 400) = sub_102f6470;
  *(code **)(iVar1 + 0x194) = sub_102f6520;
  *(code **)(iVar1 + 0x198) = sub_102f6650;
  *(uint8_t **)(iVar1 + 0x19c) = &LAB_102f66e0;
  *(code **)(iVar1 + 0x1a0) = sub_102f66f0;
  *(code **)(iVar1 + 0x1a4) = sub_102f6770;
  *(code **)(iVar1 + 0x1a8) = sub_102f6810;
  *(code **)(iVar1 + 0x1ac) = sub_102f6970;
  *(code **)(iVar1 + 0x1b0) = sub_102f6a20;
  *(code **)(iVar1 + 0x1b4) = sub_102f6a90;
  *(code **)(iVar1 + 0x1b8) = sub_102f6ac0;
  *(code **)(iVar1 + 0x1bc) = sub_102f6be0;
  *(code **)(iVar1 + 0x1c0) = sub_102f6eb0;
  *(code **)(iVar1 + 0x1c4) = sub_102f70e0;
  *(code **)(iVar1 + 0x1c8) = sub_102f7170;
  *(code **)(iVar1 + 0x1cc) = sub_102f7500;
  *(code **)(iVar1 + 0x1d0) = sub_102f76b0;
  *(code **)(iVar1 + 0x1d4) = sub_102f77b0;
  *(code **)(iVar1 + 0x1d8) = sub_102f7810;
  iVar1 = p_D2Game_DAT_6fd274a8;
  *(code **)(p_D2Game_DAT_6fd274a8 + 0x10) = sub_102f9330;
  *(code **)(iVar1 + 0x18) = sub_102f94a0;
  *(code **)(iVar1 + 0x20) = sub_102f9610;
  *(code **)(iVar1 + 100) = sub_102f98d0;
  *(code **)(iVar1 + 0x9c) = sub_102f9a90;
  *(code **)(iVar1 + 0xb0) = sub_102f9ac0;
  *(code **)(iVar1 + 0xb4) = sub_102f9d10;
  *(code **)(iVar1 + 0xb8) = sub_102f9e30;
  *(code **)(iVar1 + 0xbc) = sub_102f9f00;
  *(code **)(iVar1 + 0xc0) = sub_102f9f80;
  *(code **)(iVar1 + 0xc4) = sub_102fa0e0;
  *(code **)(iVar1 + 200) = sub_102fa2f0;
  *(code **)(iVar1 + 0xcc) = sub_102fa4b0;
  *(code **)(iVar1 + 0xd8) = sub_102fa770;
  *(code **)(iVar1 + 0xdc) = sub_102fa7f0;
  *(code **)(iVar1 + 0xe0) = sub_102fab50;
  *(code **)(iVar1 + 0xe4) = sub_102fab90;
  *(code **)(iVar1 + 0x100) = sub_102fabe0;
  *(code **)(iVar1 + 0x11c) = sub_102fad00;
  *(code **)(iVar1 + 0x1a0) = sub_102fae90;
  *(code **)(iVar1 + 0x1c0) = sub_102faf50;
  *(code **)(iVar1 + 0x1c4) = sub_102fb200;
  *(code **)(iVar1 + 0x1c8) = sub_102fb340;
  *(code **)(iVar1 + 0x1cc) = sub_102fb5b0;
  *(code **)(iVar1 + 0x1d8) = sub_102fb6d0;
  *(code **)(iVar1 + 0x1dc) = sub_102fb7f0;
  *(code **)(iVar1 + 0x22c) = sub_102fb950;
  *(code **)(iVar1 + 0x23c) = sub_102fba50;
  *(code **)(iVar1 + 0x250) = sub_102fbb60;
  *(code **)(iVar1 + 0x264) = sub_102fbc90;
  *(code **)(iVar1 + 0x268) = sub_102fbf30;
  *(code **)(iVar1 + 0x26c) = sub_102fc070;
  *(code **)(iVar1 + 0x270) = sub_102fc320;
  *(code **)(iVar1 + 0x274) = sub_102fc440;
  *(code **)(iVar1 + 0x278) = sub_102fc5b0;
  *(code **)(iVar1 + 0x27c) = sub_102fc6a0;
  *(code **)(iVar1 + 0x280) = sub_102fc760;
  *(code **)(iVar1 + 0x284) = sub_102fc940;
  *(code **)(iVar1 + 0x288) = sub_102fcb80;
  *(code **)(iVar1 + 0x28c) = sub_102fcce0;
  *(code **)(iVar1 + 0x290) = sub_102fcec0;
  *(code **)(iVar1 + 0x294) = sub_102fd110;
  *(code **)(iVar1 + 0x298) = sub_102fd320;
  *(uint8_t **)(iVar1 + 0x29c) = &LAB_102fd470;
  *(code **)(iVar1 + 0x2a0) = sub_102fd480;
  *(code **)(iVar1 + 0x2a4) = sub_102fd510;
  *(code **)(iVar1 + 0x2a8) = sub_102fd5b0;
  *(code **)(iVar1 + 0x2ac) = sub_102fd9e0;
  *(code **)(iVar1 + 0x2b0) = sub_102fdca0;
  *(code **)(iVar1 + 0x2b4) = sub_102fde60;
  *(code **)(iVar1 + 0x2b8) = sub_102fdeb0;
  *(code **)(iVar1 + 700) = sub_102fe410;
  *(code **)(iVar1 + 0x2c0) = sub_102fe610;
  *(code **)(iVar1 + 0x2c4) = sub_102fe760;
  *(code **)(iVar1 + 0x2c8) = sub_102fead0;
  *(code **)(iVar1 + 0x2cc) = sub_102febf0;
  *(code **)(iVar1 + 0x2d0) = sub_102ff1c0;
  *(code **)(iVar1 + 0x2d4) = sub_102ff680;
  *(code **)(iVar1 + 0x2d8) = sub_102ff7f0;
  *(code **)(iVar1 + 0x2dc) = sub_102ffa30;
  *(code **)(iVar1 + 0x2e0) = sub_102ffac0;
  *(code **)(iVar1 + 0x2e4) = sub_102ffc60;
  *(code **)(iVar1 + 0x2e8) = sub_103000a0;
  *(code **)(iVar1 + 0x2ec) = sub_10300280;
  *(code **)(iVar1 + 0x2f0) = sub_10300390;
  *(code **)(iVar1 + 0x2f4) = sub_10300400;
  iVar1 = p_D2Game_DAT_6fd27338;
  *(code **)(p_D2Game_DAT_6fd27338 + 0x70) = sub_103007a0;
  *(code **)(iVar1 + 0x74) = sub_10300920;
  *(code **)(iVar1 + 0x94) = sub_10300a90;
  *(code **)(iVar1 + 0x108) = sub_10300be0;
  *(code **)(iVar1 + 0x10c) = sub_10300ca0;
  *(code **)(iVar1 + 0x110) = sub_10300e10;
  *(uint8_t **)(iVar1 + 0x114) = &LAB_102fd470;
  *(code **)(iVar1 + 0x118) = sub_10300e90;
  *(uint8_t **)(iVar1 + 0x11c) = &LAB_10300f20;
  *(code **)(iVar1 + 0x120) = sub_Wraps_D2Game_SKILLS_SkilPal_10300fa0;
  *(uint8_t **)(iVar1 + 0x124) = &LAB_10301150;
  *(code **)(iVar1 + 0x128) = sub_10301190;
  *(code **)(iVar1 + 300) = sub_103011e0;
  *(code **)(iVar1 + 0x130) = sub_10301260;
  *(code **)(iVar1 + 0x134) = sub_10301440;
  *(code **)(iVar1 + 0x138) = sub_103014b0;
  return 1;
}


// 0x102be750  (ghidra: FUN_102be750)  [range]
uint32_t functions_D2NewFunctions_102be750(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = p_D2Client_DAT_6fb8de60;
  iVar1 = p_D2Net_DAT_6fbfa900;
  *(uint8_t **)(p_D2Client_DAT_6fb8de60 + 0x78) = &LAB_102debc0;
  *(uint32_t *)(iVar2 + 0x7c) = 6;
  *(uint32_t *)(iVar1 + 0x28) = 6;
  *(uint8_t **)(iVar2 + 0x198) = &LAB_102debd0;
  *(uint32_t *)(iVar2 + 0x19c) = 0xc;
  *(uint32_t *)(iVar1 + 0x88) = 0xc;
  *(uint8_t **)(iVar2 + 0x21c) = &LAB_102deca0;
  *(uint32_t *)(iVar2 + 0x220) = 5;
  *(uint32_t *)(iVar1 + 0xb4) = 5;
  *(code **)(iVar2 + 0x228) = sub_102decd0;
  *(uint32_t *)(iVar2 + 0x22c) = 0x12;
  *(uint32_t *)(iVar1 + 0xb8) = 0x12;
  *(code **)(iVar2 + 0x234) = sub_102dedb0;
  *(uint32_t *)(iVar2 + 0x238) = 0xb;
  *(uint32_t *)(iVar1 + 0xbc) = 0xb;
  *(uint8_t **)(iVar2 + 0x3fc) = &LAB_102debe0;
  *(uint32_t *)(iVar2 + 0x400) = 0xd2;
  *(uint32_t *)(iVar1 + 0x154) = 0xd2;
  *(code **)(iVar2 + 0x408) = sub_102dec00;
  *(uint32_t *)(iVar2 + 0x40c) = 0x42;
  *(uint32_t *)(iVar1 + 0x158) = 0x42;
  *(code **)(iVar2 + 0x4c8) = sub_102defd0;
  *(uint32_t *)(iVar2 + 0x4cc) = 5;
  *(uint32_t *)(iVar1 + 0x198) = 5;
  *(code **)(iVar2 + 0x624) = sub_102df010;
  *(uint32_t *)(iVar2 + 0x628) = 0x10;
  *(uint32_t *)(iVar1 + 0x20c) = 0x10;
  *(code **)(iVar2 + 0x630) = sub_102df050;
  *(uint32_t *)(iVar2 + 0x634) = 4;
  *(uint32_t *)(iVar1 + 0x210) = 4;
  *(code **)(iVar2 + 0x63c) = sub_102df090;
  *(uint32_t *)(iVar2 + 0x640) = 0xdd;
  *(uint32_t *)(iVar1 + 0x214) = 0xdd;
  *(code **)(iVar2 + 0x648) = sub_102df0c0;
  *(uint32_t *)(iVar2 + 0x64c) = 7;
  *(uint32_t *)(iVar1 + 0x218) = 7;
  *(code **)(iVar2 + 0x714) = sub_102df110;
  *(uint32_t *)(iVar2 + 0x718) = 1;
  *(uint32_t *)(iVar1 + 0x25c) = 1;
  *(uint8_t **)(iVar2 + 0x750) = &LAB_102df150;
  *(uint8_t **)(iVar2 + 0x7bc) = &LAB_102df160;
  *(uint32_t *)(iVar2 + 0x7c0) = 8;
  *(uint32_t *)(iVar1 + 0x294) = 8;
  *(code **)(iVar2 + 0x7ec) = sub_102df240;
  *(uint32_t *)(iVar2 + 0x7f0) = 7;
  *(uint32_t *)(iVar1 + 0x2a4) = 7;
  iVar1 = p_D2Net_DAT_6fbfabd8;
  *(code **)(iVar2 + 0x810) = sub_102e6880;
  *(uint32_t *)(iVar1 + 0x88) = 0xb;
  *(uint32_t *)(iVar1 + 0xac) = 5;
  *(uint32_t *)(iVar1 + 0xb8) = 5;
  *(uint32_t *)(iVar1 + 0xec) = 4;
  *(uint32_t *)(iVar1 + 0x108) = 7;
  *(uint32_t *)(iVar1 + 0x10c) = 10;
  *(uint32_t *)(iVar1 + 0x130) = 9;
  *(uint32_t *)(iVar1 + 0x154) = 2;
  *(uint32_t *)(iVar1 + 0x158) = 0x83;
  *(uint32_t *)(iVar1 + 0x15c) = 5;
  *(uint32_t *)(iVar1 + 0x168) = 1;
  *(uint32_t *)(iVar1 + 0x16c) = 5;
  *(uint32_t *)(iVar1 + 0x170) = 0xd;
  return 1;
}


// 0x102be9c0  (ghidra: FUN_102be9c0)  [range]
uint32_t functions_D2NewFunctions_102be9c0(void)

{
  int iVar1;
  int iVar2;
  uint32_t *puVar3;
  uint32_t *puVar4;
  
  iVar1 = p_D2Game_DAT_6fd22ab0;
  puVar4 = p_D2Game_DAT_6fd26f0c;
  *(uint32_t *)(p_D2Game_DAT_6fd22ab0 + 0xc) = 0x1a9;
  *(uint32_t *)(iVar1 + 0xbc) = 0x166;
  iVar1 = p_D2Game_DAT_6fd2f448;
  puVar3 = &DAT_1037e220;
  for (iVar2 = 0x36; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(uint8_t *)puVar4 = *(uint8_t *)puVar3;
  *(uint32_t *)(iVar1 + 0x19c) = 0;
  *(uint32_t *)(iVar1 + 0x1a0) = 0;
  return 1;
}


// 0x102bea10  (ghidra: FUN_102bea10)  [range]
uint32_t functions_D2NewFunctions_102bea10(void)

{
  int iVar1;
  
  iVar1 = p_D2Game_DAT_6fd277a8;
  *(code **)(p_D2Game_DAT_6fd277a8 + 0x18) = events_SkillEvents_102aee30;
  *(code **)(iVar1 + 0x1c) = events_SkillEvents_102aefe0;
  *(code **)(iVar1 + 0x3c) = events_SkillEvents_102af060;
  *(code **)(iVar1 + 0x40) = events_SkillEvents_102af610;
  *(code **)(iVar1 + 0x4c) = events_SkillEvents_102afa40;
  *(code **)(iVar1 + 0x58) = events_SkillEvents_102afab0;
  *(code **)(iVar1 + 0x5c) = events_SkillEvents_102afb70;
  *(code **)(iVar1 + 0x60) = events_SkillEvents_102afc70;
  *(code **)(iVar1 + 100) = events_SkillEvents_102afe90;
  *(code **)(iVar1 + 0x6c) = events_SkillEvents_102aff50;
  *(code **)(iVar1 + 0x80) = events_SkillEvents_102affc0;
  *(code **)(iVar1 + 0x84) = events_SkillEvents_102afff0;
  return 1;
}


// 0x102bea80  (ghidra: FUN_102bea80)  [range]
uint32_t functions_D2NewFunctions_102bea80(void)

{
  int iVar1;
  
  *(code **)(p_D2Game_DAT_6fd2e050 + 0x78) = sub_102deb60;
  iVar1 = p_D2Game_DAT_6fd27bb8;
  *(code **)(p_D2Game_DAT_6fd27bb8 + 0x10) = sub_102f43d0;
  *(code **)(iVar1 + 0x3c) = sub_102f4560;
  *(code **)(iVar1 + 0x8c) = sub_102f4670;
  *(code **)(iVar1 + 0x90) = sub_102f5190;
  *(code **)(iVar1 + 0x94) = sub_102f5380;
  *(code **)(iVar1 + 0x98) = sub_102f5570;
  *(code **)(iVar1 + 0xd4) = sub_Wraps_D2Game_Quests_a3q5_102f56f0;
  *(code **)(iVar1 + 0x128) = sub_102f58d0;
  *(code **)(iVar1 + 300) = sub_102f5960;
  *(code **)(iVar1 + 0x130) = sub_102f5a80;
  return 1;
}


// 0x102beb00  (ghidra: FUN_102beb00)  [range]
uint32_t functions_D2NewFunctions_102beb00(void)

{
  *(code **)(p_D2Game_DAT_6fd1a3f8 + 0x10) = sub_102deb30;
  return 1;
}


// 0x102beb20  (ghidra: FUN_102beb20)  [anchor] refs functions/D2NewFunctions.cpp
uint * functions_D2NewFunctions_102beb20(uint param_1,uint param_2,byte param_3,uint *param_4,uint *param_5,uint param_6,
                   uint param_7)

{
  uint *puVar1;
  LPCRITICAL_SECTION p_Var2;
  uint *puVar3;
  DWORD DVar4;
  uint uVar5;
  uint16_t *puVar6;
  int iVar7;
  
  if (((p_D2Game_DAT_6fd31c18 != 0) && (param_2 != 0)) && (*(uint *)(param_2 + 0x8c) < 8)) {
    puVar3 = Fog_10045(*(void **)(param_2 + 0x1c),0x52c,
                       "C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\functions\\D2NewFunctions.cpp"
                       ,0x192,0);
    memset(puVar3 + 1,0,0x528);
    *puVar3 = param_1;
    DVar4 = GetTickCount();
    puVar3[0x6a] = param_2;
    puVar3[0xf6] = DVar4 + 180000;
    if ((*(int *)(param_2 + 0x1d28) != 0) &&
       ((*(uint *)(*(int *)(param_2 + 0x1d28) + 8) & 0x100) != 0)) {
      *(byte *)(puVar3 + 3) = param_3;
      uVar5 = D2Common_10241((uint)param_3,*(int *)(*(int *)(param_2 + 0x1d28) + 0xc));
      param_3 = (byte)uVar5;
    }
    *(byte *)(puVar3 + 2) = param_3;
    Storm_501((int)puVar3 + 0xd,param_4,0x7fffffff);
    Storm_501((int)puVar3 + 0x1d,param_5,0x7fffffff);
    iVar7 = 0x10;
    puVar3[0x18] = param_6;
    puVar3[0x143] = param_7;
    puVar3[0x1a] = 0;
    puVar3[1] = 0;
    puVar3[0x6e] = 0;
    puVar3[0x6f] = 0;
    puVar3[0x70] = 0;
    puVar6 = (uint16_t *)((int)puVar3 + 0x3de);
    do {
      puVar6[-1] = 0xffff;
      *puVar6 = 0;
      *(uint32_t *)(puVar6 + 1) = 0xffffffff;
      p_Var2 = p_D2Game_DAT_6fd30bb8;
      iVar7 = iVar7 + -1;
      puVar6 = puVar6 + 4;
    } while (iVar7 != 0);
    puVar3[0x12a] = *(uint *)(param_2 + 0x88);
    *(uint **)(param_2 + 0x88) = puVar3;
    Fog_10050(p_Var2);
    p_Var2 = p_D2Game_DAT_6fd30bb8;
    puVar1 = (uint *)(p_D2Game_DAT_6fd307b8 + (param_1 & 0xff) * 4);
    puVar3[299] = *puVar1;
    *puVar1 = (uint)puVar3;
    LeaveCriticalSection(p_Var2);
    uVar5 = Fog_10137((byte *)param_4);
    Fog_10050(p_D2Game_DAT_6fd30bd0);
    p_Var2 = p_D2Game_DAT_6fd30bd0;
    puVar1 = (uint *)(p_D2Game_DAT_6fd303b8 + (uVar5 & 0xff) * 4);
    puVar3[300] = *puVar1;
    *puVar1 = (uint)puVar3;
    LeaveCriticalSection(p_Var2);
    *(int *)(param_2 + 0x8c) = *(int *)(param_2 + 0x8c) + 1;
    return puVar3;
  }
  return (uint *)0x0;
}


// 0x102becf0  (ghidra: FUN_102becf0)  [range]
void __fastcall functions_D2NewFunctions_102becf0(int param_1,uint *param_2,uint32_t param_3,uint param_4,int *param_5)

{
  int iVar1;
  
  if ((((param_1 != 0) && (param_2 != (uint *)0x0)) && (*param_2 < 6)) && (param_4 < 0xff)) {
    if ((param_5 != (int *)0x0) &&
       (((iVar1 = *param_5, iVar1 == 3 || (iVar1 == 6)) || ((iVar1 == 7 || (iVar1 == 8)))))) {
      sub_102ed3e0(param_2,param_1,param_4,param_2,0);
      return;
    }
    sub_102ed3e0(param_2,param_1,param_4,param_5,0);
  }
  return;
}


// 0x102bed50  (ghidra: FUN_102bed50)  [range]
void __thiscall functions_D2NewFunctions_102bed50(void *this,uint32_t param_1,int param_2)

{
  uint uVar1;
  
  if (((this != (void *)0x0) && (param_2 != 0)) &&
     (uVar1 = D2Common_11157((int *)param_2), uVar1 != 0)) {
    D2Common_10945((int *)param_2,0x68,1);
    D2Common_10158((int *)param_2);
  }
  return;
}


// 0x102bed80  (ghidra: FUN_102bed80)  [range]
int functions_D2NewFunctions_102bed80(int param_1,int param_2,uint32_t *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2;
  if ((param_2 != 0) && (param_3 != (uint32_t *)0x0)) {
    param_2 = 0;
    iVar5 = 5;
    if (((ushort *)*param_3 != (ushort *)0x0) &&
       (iVar2 = functions_HelperFunctions_102ce5a0((uint)*(ushort *)*param_3), iVar2 != 0)) {
      iVar5 = *(int *)(iVar2 + 0x150);
    }
    uVar3 = D2Common_10631_10276710((int)param_3);
    if ((uVar3 == 0) || (uVar3 <= *(uint *)(iVar1 + 0xa8))) {
      iVar2 = sub_102edb00();
      if (iVar2 == 0) {
        param_2 = 1;
        iVar2 = iVar5;
      }
      else {
        param_2 = 2;
        iVar4 = functions_HelperFunctions_102ceae0(param_1);
        iVar2 = iVar5 + 1;
        if (iVar4 != 0) {
          iVar2 = iVar5;
        }
      }
      D2Common_11031_10276740((int)param_3,*(int *)(iVar1 + 0xa8) + iVar2);
    }
    return param_2;
  }
  return 0;
}


// 0x102bee20  (ghidra: FUN_102bee20)  [range]
uint32_t functions_D2NewFunctions_102bee20(int param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint32_t uVar5;
  void *this;
  void *extraout_ECX;
  void *this_00;
  int extraout_EDX;
  ushort *extraout_EDX_00;
  uint64_t uVar6;
  
  if ((param_1 != 0) && (param_3 != 0)) {
    uVar6 = D2Common_10392(*(int *)(param_1 + 0x2c));
    this_00 = this;
    if ((int)uVar6 != 0) {
      iVar1 = sub_102ecac0(this);
      this_00 = extraout_ECX;
      if (iVar1 != 0) {
        uVar2 = sub_6fc21100((int *)param_1);
        uVar3 = sub_6fc21130((int *)param_1);
        iVar1 = *param_4;
        iVar4 = sub_10260180(*param_2 - uVar2);
        *param_2 = iVar4 + extraout_EDX;
        iVar1 = sub_10260180(iVar1 - uVar3);
        *param_4 = *param_4 + iVar1;
        D2Common_10286(*(int *)(param_1 + 0x2c),*extraout_EDX_00,(ushort)*param_4);
        D2Common_10336(*(int *)(param_1 + 0x2c),(uint *)0x0);
        return 1;
      }
    }
    uVar5 = sub_102ecac0(this_00);
    return uVar5;
  }
  return 0;
}


// 0x102beed0  (ghidra: FUN_102beed0)  [range]
uint32_t functions_D2NewFunctions_102beed0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint32_t uVar5;
  int extraout_EDX;
  ushort *extraout_EDX_00;
  uint64_t uVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar6 = D2Common_10392(*(int *)(param_1 + 0x2c));
  if ((int)uVar6 != 0) {
    iVar1 = sub_102ecae0(param_1,param_2,param_3);
    if (iVar1 != 0) {
      uVar2 = sub_6fc21100((int *)param_1);
      uVar3 = sub_6fc21130((int *)param_1);
      iVar1 = *param_3;
      iVar4 = sub_10260180(*param_2 - uVar2);
      *param_2 = iVar4 + extraout_EDX;
      iVar1 = sub_10260180(iVar1 - uVar3);
      *param_3 = *param_3 + iVar1;
      D2Common_10286(*(int *)(param_1 + 0x2c),*extraout_EDX_00,(ushort)*param_3);
      D2Common_10336(*(int *)(param_1 + 0x2c),(uint *)0x0);
      return 1;
    }
  }
  uVar5 = sub_102ecae0(param_1,param_2,param_3);
  return uVar5;
}


// 0x102bef70  (ghidra: FUN_102bef70)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall functions_D2NewFunctions_102bef70(int param_1,int *param_2)

{
  uint *puVar1;
  uint32_t *reg_EBX;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  uint8_t auStack_64 [4];
  uint *puStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int *local_50;
  uint8_t uStack_4c;
  uint16_t uStack_4b;
  uint16_t uStack_49;
  uint16_t uStack_47;
  uint32_t uStack_45;
  uint8_t uStack_41;
  int iStack_40;
  uint32_t *local_3c;
  uint uStack_38;
  int *local_34;
  int *local_30;
  uint32_t local_2c;
  uint32_t local_28;
  int local_24;
  uint32_t local_20;
  int local_1c;
  int local_18;
  uint64_t local_14;
  uint local_c;
  
  local_c = DAT_1039800c ^ (uint)auStack_64;
  reg_EBX = *(uint32_t **)(param_1 + 0xc);
  local_14 = 0;
  piVar5 = *(int **)(param_1 + 4);
  local_3c = reg_EBX + 4;
  local_2c = *reg_EBX;
  local_28 = reg_EBX[1];
  local_24 = reg_EBX[2];
  local_18 = reg_EBX[3];
  local_20 = *local_3c;
  local_50 = param_2;
  local_34 = piVar5;
  local_30 = param_2;
  local_1c = functions_D2NewFunctions_102c0540(reg_EBX[10],*local_3c,param_2);
  if (local_18 == 0x57) {
    if ((*piVar5 == 0) && (*param_2 == 0)) {
      return 0;
    }
    if ((*param_2 == 1) && (uVar2 = D2Common_10278(param_2), uVar2 != 0)) {
      return 0;
    }
  }
  if (local_24 < 1) {
    return 0;
  }
  local_58 = reg_EBX[0x10];
  if (((local_18 == 0x10) || (local_18 == 0xbc)) &&
     (uVar2 = D2Common_10494(param_2,0x60), uVar2 != 0)) {
    local_58 = 10;
    uVar2 = D2Common_11104(param_2);
    iVar4 = 10;
  }
  else {
    iStack_5c = 0;
    uVar2 = D2Common_11104(param_2);
    iVar4 = local_58;
    if (local_58 == 0) goto LAB_102bf08f;
  }
  if (((*param_2 == 0) && (param_2 != piVar5)) ||
     ((param_2[0x31] < 0 || (iStack_5c = 0, uVar2 != 0)))) {
    local_1c = local_1c / iVar4;
    iStack_5c = 1;
  }
LAB_102bf08f:
  puVar3 = (uint *)functions_D2NewFunctions_102bfe20(&local_34,reg_EBX,param_2,piVar5);
  if (puVar3 == (uint *)0x0) {
    return 0;
  }
  piVar5 = reg_EBX + 5;
  iStack_54 = 1;
  puStack_60 = puVar3;
  do {
    if (*piVar5 != -1) {
      puVar1 = puVar3 + 10;
      iVar4 = 0;
      if ((ushort)*puVar1 != 0) {
        uStack_38 = local_3c[iStack_54];
        puVar6 = (uint *)puVar3[9];
        do {
          puVar3 = puStack_60;
          param_2 = local_50;
          if (*puVar6 >> 0x10 == uStack_38) goto LAB_102bf122;
          iVar4 = iVar4 + 1;
          puVar6 = puVar6 + 2;
        } while (iVar4 < (int)(uint)(ushort)*puVar1);
      }
      iVar4 = functions_D2NewFunctions_102c0540(piVar5[6],*piVar5,param_2);
      if (iStack_5c != 0) {
        iVar4 = iVar4 / local_58;
      }
      D2Common_10245(puStack_60,*piVar5,iVar4,0);
      puVar3 = puStack_60;
    }
LAB_102bf122:
    iStack_54 = iStack_54 + 1;
    piVar5 = piVar5 + 1;
    if (5 < iStack_54) {
      D2Common_10158(param_2);
      D2Common_10945(param_2,local_18,1);
      puVar3 = puStack_60;
      if ((*param_2 == 0) && (uVar2 = D2Common_10959((int)puStack_60), 0 < (int)uVar2)) {
        uStack_49 = (uint16_t)puVar3[7];
        uStack_45 = 0;
        uStack_4b = (uint16_t)puVar3[5];
        uStack_47 = (uint16_t)puVar3[8];
        iStack_40 = uVar2 - *(int *)(param_2[0x20] + 0xa8);
        uStack_4c = 0x83;
        uStack_41 = 1;
        sub_102ecd00(*(uint32_t *)(param_2[5] + 0x9c),&uStack_4c,0x10);
      }
      return 1;
    }
  } while( true );
}


// 0x102bf1e0  (ghidra: FUN_102bf1e0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall
functions_D2NewFunctions_102bf1e0(uint32_t param_1,uint param_2,int *param_3,uint param_4,uint param_5,
            uint32_t param_6,int param_7)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint extraout_ECX;
  uint64_t uVar5;
  uint8_t auStack_98 [8];
  short *psStack_90;
  uint *puStack_8c;
  uint local_88;
  int local_84;
  uint local_80;
  uint local_7c;
  uint32_t local_78;
  int *local_74;
  uint32_t local_70;
  uint uStack_6c;
  uint32_t uStack_68;
  uint8_t *puStack_64;
  uint8_t local_60 [4];
  uint local_5c;
  uint32_t uStack_58;
  uint uStack_54;
  uint local_50 [15];
  uint local_14;
  
  local_14 = DAT_1039800c ^ (uint)auStack_98;
  local_74 = param_3;
  local_84 = *p_D2Common_DAT_6fde9e1c;
  local_7c = param_4;
  local_88 = param_2;
  local_78 = param_1;
  iVar3 = functions_HelperFunctions_102ce5a0(param_4);
  if (iVar3 != 0) {
    local_50[0] = 0;
    local_50[1] = 0;
    local_50[2] = 0;
    local_50[3] = 0;
    local_50[4] = 0;
    local_50[5] = 0;
    local_50[6] = 0;
    local_50[7] = 0;
    local_50[8] = 0;
    local_50[9] = 0;
    local_50[10] = 0;
    local_50[0xb] = 0;
    local_50[0xc] = 0;
    local_5c = param_5;
    local_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    puStack_64 = (uint8_t *)0x0;
    local_80 = param_5;
    uVar5 = D2Common_10786(param_2,*(uint *)(iVar3 + 0x60),extraout_ECX,param_5);
    uStack_58 = (uint32_t)uVar5;
    if (param_7 == 0) {
      uVar1 = *(ushort *)(iVar3 + 0x80);
    }
    else {
      uVar1 = *(ushort *)(iVar3 + 0x82);
    }
    uStack_54 = (uint)uVar1;
    puStack_8c = (uint *)(iVar3 + 0x68);
    psStack_90 = (short *)(iVar3 + 0x54);
    iVar3 = 0;
    do {
      sVar2 = *psStack_90;
      if ((sVar2 < 0) || (*(uint *)(local_84 + 0xbd4) <= (uint)(int)sVar2)) {
        if (iVar3 == 0) {
          return 1;
        }
        uVar4 = 0xffffffff;
        local_50[iVar3] = 0xffffffff;
      }
      else {
        local_50[iVar3] = (int)sVar2;
        uVar5 = D2Common_10786(local_88,*puStack_8c,local_7c,local_80);
        uVar4 = (uint)uVar5;
      }
      local_50[iVar3 + 6] = uVar4;
      iVar3 = iVar3 + 1;
      puStack_8c = puStack_8c + 1;
      psStack_90 = psStack_90 + 1;
    } while (iVar3 < 6);
    local_50[0xc] = param_6;
    local_70 = local_78;
    uStack_6c = local_88;
    puStack_64 = local_60;
    uStack_68 = 1;
    functions_D2NewFunctions_102bef70((int)&local_70,local_74);
  }
  return 1;
}


// 0x102bf370  (ghidra: FUN_102bf370)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall
functions_D2NewFunctions_102bf370(void *param_1,int *param_2,uint32_t param_3,uint32_t param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  LPCWSTR pWVar7;
  LPSTR pCVar8;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *piVar9;
  void *this;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint64_t uVar13;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int *local_28;
  int *local_24;
  uint local_20;
  char local_19;
  int *local_18;
  uint local_14;
  int *local_10;
  uint local_c;
  uint8_t  stack0xffffff98;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_c = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_19 = *(char *)((int)param_1 + 0x6d);
  sub_102ecac0(param_1);
  uVar13 = D2Common_10331(param_2);
  local_30 = (uint)uVar13;
  if (local_30 == 0) {
    return 0;
  }
  uVar13 = D2Common_10826(local_30);
  local_24 = (int *)uVar13;
  uVar4 = D2Common_10014((int)local_24);
  local_2c = uVar4;
  if ((uVar4 == 0) || (*(char *)(uVar4 + 4) == '\0')) {
functions_D2NewFunctions_102bf6cc:
    pWVar7 = (LPCWSTR)D2Lang_10011_102d0fb0((byte *)"TeleportBlocked");
    pCVar8 = sub_10237720(pWVar7);
    sub_1020f990(&stack0xffffff98,pCVar8);
    functions_HelperFunctions_102cfd10((int)param_2,1);
  }
  else {
    if ((param_5 != 0) && (local_19 == '\x02')) {
      sub_10228040(&DAT_104e3064,&local_3c,(int *)&local_24);
      piVar5 = (int *)sub_102280a0(&DAT_104e3064,&local_28);
      bVar2 = sub_1023d8f0(this,piVar5);
      if (bVar2) goto functions_D2NewFunctions_102bf6cc;
    }
    uVar13 = D2Common_10871((int)param_2,0xd6);
    piVar5 = local_18;
    uVar11 = local_20;
    uVar10 = (uint)((ulonglong)uVar13 >> 0x20);
    if ((int)uVar13 == 0) {
      piVar9 = extraout_ECX;
      if ((*(char *)(uVar4 + 4) != '\0') && (*(char *)(uVar4 + 4) == '\x02')) {
        uVar13 = D2Common_10686(param_2,local_20,(int)local_18,0x804);
        uVar10 = (uint)((ulonglong)uVar13 >> 0x20);
        piVar9 = extraout_ECX_00;
        if ((int)uVar13 != 0) {
          return 0;
        }
      }
      if ((*(char *)(local_2c + 4) != '\0') && (*(char *)(local_2c + 4) == '\x03')) {
        local_34 = (uint)*(ushort *)(param_2[0xb] + 2);
        local_38 = (uint)*(ushort *)(param_2[0xb] + 6);
        uVar4 = D2Common_10589((uint *)param_2);
        local_14 = uVar11;
        local_10 = piVar5;
        D2Common_10509(local_30,(int *)&local_14,uVar4,0x80d,0);
        local_28 = (int *)0x0;
        local_18 = (int *)0x0;
        local_24 = (int *)0x0;
        local_20 = 0;
        local_3c = 0;
        local_2c = 0;
        uVar13 = functions_HelperFunctions_102d1ba0(param_1,param_2,&local_14,&local_28,(int *)&local_20,&local_18,
                              &local_3c,&local_24,(int *)&local_2c);
        piVar5 = local_28;
        uVar10 = (uint)((ulonglong)uVar13 >> 0x20);
        if (local_28 != (int *)0x0) {
          local_28 = (int *)0x0;
          local_2c = 0;
          functions_HelperFunctions_102cfc20(piVar5,(uint *)&local_28,&local_2c,&local_2c);
          if ((((int)local_28 < (int)local_34) && ((int)local_28 < (int)local_14)) ||
             (((int)local_34 < (int)local_28 && ((int)local_14 < (int)local_28)))) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if ((((int)local_2c < (int)local_38) && ((int)local_2c < (int)local_10)) ||
             (((int)local_38 < (int)local_2c && ((int)local_10 < (int)local_2c)))) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          uVar10 = local_38;
          if (((!bVar2) || (!bVar1)) && ((int)local_20 < 0x19)) {
            iVar6 = D2Common_10303(local_30,local_14,(int)local_10,3,3,0x80d);
            uVar13 = D2Common_10686(param_2,local_14,(int)local_10,0x80d);
            uVar10 = (uint)((ulonglong)uVar13 >> 0x20);
            if ((int)uVar13 != 0) {
              return 0;
            }
            if (0 < iVar6) {
              return 0;
            }
          }
        }
        piVar12 = local_10;
        uVar4 = local_14;
        piVar5 = local_18;
        if (local_18 != (int *)0x0) {
          local_20 = 0;
          local_18 = (int *)0x0;
          functions_HelperFunctions_102cfc20(piVar5,&local_20,(uint *)&local_18,&local_18);
          uVar11 = (int)((int)local_18 - local_38) >> 0x1f;
          uVar10 = local_34;
          if (((((int)local_34 <= (int)local_20) || ((int)uVar4 <= (int)local_20)) &&
              (((int)local_20 <= (int)local_34 || ((int)local_20 <= (int)uVar4)))) &&
             ((int)(((int)local_18 - local_38 ^ uVar11) - uVar11) < 0x19)) {
            iVar6 = D2Common_10303(local_30,uVar4,(int)piVar12,3,3,0x80d);
            uVar13 = D2Common_10686(param_2,local_14,(int)local_10,0x80d);
            uVar10 = (uint)((ulonglong)uVar13 >> 0x20);
            if ((int)uVar13 != 0) {
              return 0;
            }
            piVar12 = local_10;
            uVar4 = local_14;
            if (0 < iVar6) {
              return 0;
            }
          }
        }
        piVar5 = local_24;
        piVar9 = (int *)0x0;
        if (local_24 != (int *)0x0) {
          local_24 = (int *)0x0;
          local_18 = (int *)0x0;
          functions_HelperFunctions_102cfc20(piVar5,(uint *)&local_24,(uint *)&local_18,&local_18);
          uVar11 = (int)((int)local_24 - local_34) >> 0x1f;
          piVar9 = local_18;
          uVar10 = local_38;
          if ((((int)local_38 <= (int)local_18) || ((int)piVar12 <= (int)local_18)) &&
             ((((int)local_18 <= (int)local_38 || ((int)local_18 <= (int)piVar12)) &&
              ((int)(((int)local_24 - local_34 ^ uVar11) - uVar11) < 0x19)))) {
            iVar6 = D2Common_10303(local_30,uVar4,(int)piVar12,3,3,0x80d);
            uVar13 = D2Common_10686(param_2,local_14,(int)local_10,0x80d);
            uVar10 = (uint)((ulonglong)uVar13 >> 0x20);
            if ((int)uVar13 != 0) {
              return 0;
            }
            piVar9 = extraout_ECX_01;
            if (0 < iVar6) {
              return 0;
            }
          }
        }
      }
      cVar3 = sub_102ecb00(piVar9,uVar10);
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}


// 0x102bf6cc  (ghidra: FUN_102bf6cc)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t functions_D2NewFunctions_102bf6cc(int reg_EBX)

{
  LPCWSTR pWVar1;
  LPSTR pCVar2;
  uint8_t auStack_18 [24];
  
  pWVar1 = (LPCWSTR)D2Lang_10011_102d0fb0((byte *)"TeleportBlocked");
  pCVar2 = sub_10237720(pWVar1);
  sub_1020f990(auStack_18,pCVar2);
  functions_HelperFunctions_102cfd10(reg_EBX,1);
  return 0;
}


// 0x102bf710  (ghidra: FUN_102bf710)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall
functions_D2NewFunctions_102bf710(uint8_t *param_1,int param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  uint8_t *local_70;
  uint local_6c;
  uint8_t *local_68;
  uint32_t local_5c;
  int local_58;
  int local_54;
  uint32_t local_40;
  uint32_t local_3c;
  uint8_t *local_18;
  uint8_t *local_14;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if ((((param_1 != (uint8_t *)0x0) && (param_2 != 0)) &&
      ((param_6 != 0 || ((param_7 != 0 || (sub_102ecac0(&param_7), param_7 != 0)))))) &&
     (iVar1 = param_7, iVar2 = D2Common_10080((int *)param_1,param_6,param_7), iVar2 < 0x65)) {
    puVar3 = sub_6fc572c0_1029a300((int)param_1);
    local_70 = (uint8_t *)0x0;
    if (puVar3 != (uint *)0x0) {
      local_70 = sub_Hook_sub_6fc89b00_102727d0(param_1,(int)puVar3,(uint32_t *)0x0,1,param_1);
    }
    memset(&local_6c,0,0x5c);
    local_3c = param_4;
    local_40 = param_3;
    local_5c = param_5;
    local_6c = 1;
    local_18 = &LAB_1027d5f0;
    local_14 = local_70;
    local_68 = param_1;
    local_58 = param_6;
    local_54 = iVar1;
    piVar4 = MISSILES_Missiles_6fc8f930(param_2,&local_6c);
    return piVar4;
  }
  return 0;
}


// 0x102bf800  (ghidra: FUN_102bf800)  [range]
void __fastcall functions_D2NewFunctions_102bf800(int param_1,uint16_t param_2,uint32_t param_3)

{
  if (param_1 != 0) {
    *(uint16_t *)(param_1 + 0x6e) = param_2;
    *(uint32_t *)(param_1 + 0x70) = param_3;
    D2Common_10158((int *)param_1);
    *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) | 0x400;
  }
  return;
}


// 0x102bf830  (ghidra: FUN_102bf830)  [range]
int __fastcall functions_D2NewFunctions_102bf830(int param_1,uint8_t *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint8_t local_c;
  uint8_t local_b;
  uint32_t local_a;
  
  if (param_2 == (uint8_t *)0x0) {
    return 0;
  }
  local_b = *param_2;
  piVar1 = (int *)(param_1 + 0x1120);
  local_a = *(uint32_t *)(param_2 + 0xc);
  local_c = 10;
  iVar3 = 0x80;
  do {
    iVar2 = iVar3;
    if ((*piVar1 != 0) && (iVar3 = *(int *)(*piVar1 + 0x14), iVar3 != 0)) {
      sub_102ecd00(*(uint32_t *)(iVar3 + 0x9c),&local_c,6);
    }
    piVar1 = piVar1 + 1;
    iVar3 = iVar2 + -1;
  } while (iVar3 != 0);
  D2Common_10408((int *)param_2);
  D2Common_11016((int *)param_2);
  return iVar2;
}


// 0x102bf8a0  (ghidra: FUN_102bf8a0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall
functions_D2NewFunctions_102bf8a0(int param_1,int param_2,ushort param_3,uint32_t param_4,uint32_t param_5,
            int param_6,uint32_t param_7,int param_8,uint param_9,uint param_10,int param_11,
            int param_12,int param_13)

{
  int *reg_ECX;
  int iVar1;
  uint local_64;
  int local_60;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint32_t local_48;
  uint32_t local_44;
  int local_3c;
  uint32_t local_38;
  uint32_t local_34;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  memset(&local_64,0,0x5c);
  local_54 = (uint)param_3;
  local_38 = param_4;
  local_34 = param_5;
  local_64 = 3;
  if ((param_9 == 0) && (param_10 == 0)) {
    local_50 = (uint)*(ushort *)(*(int *)(param_2 + 0x2c) + 2);
    param_10 = (uint)*(ushort *)(*(int *)(param_2 + 0x2c) + 6);
  }
  else {
    local_50 = param_9;
  }
  if (param_6 != -1) {
    local_64 = 7;
    local_3c = param_6;
  }
  if ((param_8 == 0) || (0x40 < param_8)) {
    param_8 = 0x40;
  }
  iVar1 = 0;
  local_60 = param_2;
  local_4c = param_10;
  do {
    local_48 = *(uint32_t *)(iVar1 + p_D2Game_DAT_6fd1b870);
    local_44 = *(uint32_t *)(iVar1 + p_D2Game_DAT_6fd1b770);
    reg_ECX = MISSILES_Missiles_6fc8f930(param_1,&local_64);
    if (reg_ECX != (int *)0x0) {
      if (param_11 != 0) {
        functions_D2NewFunctions_102c0b30(reg_ECX,param_11);
      }
      if (param_12 != 0) {
        functions_HelperFunctions_102d19e0((int)reg_ECX,param_1);
      }
      if (param_13 != 0) {
        reg_ECX[0x32] = reg_ECX[0x32] | 0x80000;
      }
    }
    iVar1 = iVar1 + (int)(0x40 / (longlong)param_8) * 4;
  } while (iVar1 < 0x100);
  return;
}


// 0x102bf9c0  (ghidra: FUN_102bf9c0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall
functions_D2NewFunctions_102bf9c0(int param_1,ushort param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5,
            uint32_t param_6,int param_7,uint param_8,uint param_9)

{
  int iVar1;
  uint local_64;
  int local_60;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  memset(&local_64,0,0x5c);
  local_54 = (uint)param_2;
  local_38 = param_3;
  local_34 = param_4;
  local_64 = 3;
  if ((param_8 == 0) && (param_9 == 0)) {
    local_50 = (uint)*(ushort *)(*(int *)(param_1 + 0x2c) + 2);
    param_9 = (uint)*(ushort *)(*(int *)(param_1 + 0x2c) + 6);
  }
  else {
    local_50 = param_8;
  }
  if ((param_7 == 0) || (0x40 < param_7)) {
    param_7 = 0x40;
  }
  iVar1 = 0;
  local_60 = param_1;
  local_4c = param_9;
  do {
    local_48 = *(uint32_t *)(iVar1 + p_D2Client_DAT_6fb84390);
    local_44 = *(uint32_t *)(iVar1 + p_D2Client_DAT_6fb84290);
    UNIT_Missile_6fb630f0(&local_64);
    iVar1 = iVar1 + (int)(0x40 / (longlong)param_7) * 4;
  } while (iVar1 < 0x100);
  return;
}


// 0x102bfa90  (ghidra: FUN_102bfa90)  [range]
uint __fastcall functions_D2NewFunctions_102bfa90(uint32_t param_1,uint param_2)

{
  uint64_t uVar1;
  
  sub_102ed070(param_1);
  uVar1 = D2Common_10392(*(int *)(param_2 + 0x2c));
  return (uint)uVar1 & -(uint)((uint)uVar1 != param_2);
}


// 0x102bfab0  (ghidra: FUN_102bfab0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t
functions_D2NewFunctions_Hook_BNGatewayAccess_GetGatewayList_102bfab0(uint32_t param_1,uint32_t param_2,uint32_t param_3,char *param_4,int param_5,
            int *param_6)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  void *this;
  char *pcVar4;
  uint64_t uVar5;
  uint32_t local_2c [6];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10304b3d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  sub_10237930(local_2c);
  local_8 = 0;
  client_DrawHoverItem_102250d0(this,"1002,01,");
  sub_1023e1b0(local_2c,0x104e30f0);
  client_DrawHoverItem_102250d0(local_2c,",1,Project Diablo 2,");
  client_DrawHoverItem_102250d0(local_2c,",");
  if ((param_4 == (char *)0x0) || (param_5 == 0)) {
    if (param_6 != (int *)0x0) {
      uVar5 = thunk_FUN_1020fe30((int)local_2c);
      pcVar3 = (char *)uVar5;
      pcVar4 = pcVar3 + 1;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      *param_6 = (int)pcVar3 - (int)pcVar4;
    }
  }
  else {
    client_DrawHoverItem_102250d0(local_2c,",,");
    uVar5 = thunk_FUN_1020fe30((int)local_2c);
    pcVar4 = (char *)uVar5;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar4[(int)(param_4 + (-1 - (int)(char *)uVar5))] = cVar1;
    } while (cVar1 != '\0');
    pcVar4 = param_4;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar2 = 0;
    if (0 < (int)pcVar4 - (int)(param_4 + 1)) {
      do {
        if (param_4[iVar2] == ',') {
          param_4[iVar2] = '\0';
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)pcVar4 - (int)(param_4 + 1));
    }
  }
  thunk_FUN_1020fc60(local_2c);
  ExceptionList = local_10;
  return 1;
}


// 0x102bfbc0  (ghidra: FUN_102bfbc0)  [range]
void functions_D2NewFunctions_Hook_sub_6faf4b50_102bfbc0(LPOSVERSIONINFOA param_1)

{
  BOOL BVar1;
  
  BVar1 = GetVersionExA(param_1);
  if ((BVar1 != 0) && (param_1 != (LPOSVERSIONINFOA)0x0)) {
    param_1->dwMajorVersion = 5;
    param_1->dwMinorVersion = 1;
    param_1->dwBuildNumber = 0xa28;
  }
  return;
}


// 0x102bfbf0  (ghidra: FUN_102bfbf0)  [range]
uint32_t functions_D2NewFunctions_102bfbf0(int reg_ECX,int *reg_EDX)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  
  piVar1 = *(int **)(reg_ECX + 0xc);
  iVar2 = piVar1[1];
  uVar4 = D2Common_10973((int)reg_EDX,(uint)(iVar2 == 8) * 2 + 7,0);
  uVar5 = D2Common_10973((int)reg_EDX,iVar2,0);
  iVar3 = *piVar1 * 0x100 + (int)uVar5;
  if ((int)uVar4 < iVar3) {
    iVar3 = (int)uVar4;
  }
  D2Common_10887(reg_EDX,iVar2,iVar3,0);
  return 1;
}


// 0x102bfc50  (ghidra: FUN_102bfc50)  [range]
void __fastcall functions_D2NewFunctions_102bfc50(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  uint16_t uVar3;
  int iVar4;
  int *piVar5;
  int extraout_ECX;
  void *this;
  int iVar6;
  int iVar7;
  uint8_t local_c [4];
  uint8_t local_8 [4];
  
  iVar1 = param_3;
  iVar7 = 0x36;
  if (*(char *)(param_1 + 0x6d) != '\0') {
    iVar7 = 0x68;
  }
  iVar6 = 0;
  do {
    iVar4 = functions_HelperFunctions_102ce660((uint)*(ushort *)(iVar6 + iVar7 + param_2));
    if ((((iVar4 == 0) || (*(char *)(iVar4 + 0x2c) != '\0')) || (*(char *)(iVar4 + 0x2d) != '\0'))
       || (*(short *)(iVar4 + 0x20) != -1)) {
LAB_102bfccc:
      uVar3 = 0xffff;
    }
    else {
      param_3 = extraout_ECX;
      sub_10228040(&DAT_104e31d0,local_8,&param_3);
      piVar5 = (int *)sub_102280a0(&DAT_104e31d0,local_c);
      bVar2 = sub_1023d8f0(this,piVar5);
      if (bVar2) goto LAB_102bfccc;
      uVar3 = *(uint16_t *)(iVar6 + iVar7 + param_2);
    }
    *(uint16_t *)(iVar6 + iVar1) = uVar3;
    iVar6 = iVar6 + 2;
    if (0x31 < iVar6) {
      return;
    }
  } while( true );
}


// 0x102bfcf0  (ghidra: FUN_102bfcf0)  [range]
void __fastcall functions_D2NewFunctions_102bfcf0(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  uint16_t uVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  void *this;
  uint64_t uVar8;
  uint8_t local_24 [4];
  uint8_t local_20 [4];
  uint32_t local_1c;
  uint8_t local_18 [4];
  code *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar1 = true;
  local_14 = rand_exref;
  local_c = param_1;
  do {
    uVar8 = sub_102bacf0(&DAT_104e3050);
    (*(code *)((ulonglong)uVar8 >> 0x20))();
    uVar8 = functions_D2ServerFunctions_1026cd50(&DAT_104e3050,local_18);
    piVar4 = sub_102bad60(&local_1c,(int)((ulonglong)uVar8 >> 0x20),*(uint32_t *)uVar8);
    puVar5 = (uint *)sub_1025f2f0(piVar4);
    local_8 = functions_HelperFunctions_102ce630(*puVar5);
    iVar7 = 0x36;
    if (*(char *)(local_c + 0x6d) != '\0') {
      iVar7 = 0x68;
    }
    local_8 = local_8 + iVar7;
    iVar7 = 0;
    do {
      iVar6 = functions_HelperFunctions_102ce660((uint)*(ushort *)(iVar7 + local_8));
      if ((((iVar6 == 0) || (*(char *)(iVar6 + 0x2c) != '\0')) || (*(char *)(iVar6 + 0x2d) != '\0'))
         || (*(short *)(iVar6 + 0x20) != -1)) {
LAB_102bfdc6:
        uVar3 = 0xffff;
      }
      else {
        sub_10228040(&DAT_104e31d0,local_20,&local_10);
        piVar4 = (int *)sub_102280a0(&DAT_104e31d0,local_24);
        bVar2 = sub_1023d8f0(this,piVar4);
        if (bVar2) goto LAB_102bfdc6;
        bVar1 = false;
        uVar3 = *(uint16_t *)(iVar7 + local_8);
      }
      *(uint16_t *)(iVar7 + param_2) = uVar3;
      iVar7 = iVar7 + 2;
    } while (iVar7 < 0x32);
    if (!bVar1) {
      return;
    }
  } while( true );
}


// 0x102bfdf0  (ghidra: FUN_102bfdf0)  [range]
void __fastcall functions_D2NewFunctions_102bfdf0(int param_1)

{
  int iVar1;
  
  do {
    iVar1 = rand();
  } while (*(short *)(param_1 + (iVar1 % 0x19) * 2) == -1);
  return;
}


// 0x102bfe20  (ghidra: FUN_102bfe20)  [range]
int * functions_D2NewFunctions_102bfe20(uint32_t *param_1,uint32_t reg_EBX,uint32_t reg_ESI,uint32_t reg_EDI)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  void *this;
  void *this_00;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint64_t uVar12;
  uint *puStack_b0;
  uint *local_ac;
  uint local_a8;
  uint uStack_a4;
  int *local_a0;
  uint *local_9c;
  uint *local_98;
  int local_94;
  uint local_90;
  uint *local_8c;
  uint8_t uStack_88;
  uint16_t uStack_87;
  uint16_t uStack_85;
  uint16_t uStack_83;
  int iStack_81;
  uint8_t uStack_7d;
  int iStack_7c;
  uint32_t uStack_78;
  uint32_t uStack_74;
  uint uStack_58;
  
  local_a8 = *p_D2Common_DAT_6fde9e1c;
  piVar1 = (int *)param_1[1];
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  uVar5 = param_1[7];
  local_94 = piVar1[0x20];
  if (*(uint *)(local_a8 + 0xc4) <= uVar5) {
    return (int *)0x0;
  }
  local_8c = (uint *)(*(int *)(local_a8 + 0xbc) + uVar5 * 0x3c);
  if (local_8c == (uint *)0x0) {
    return (int *)0x0;
  }
  local_90 = uVar5;
  if (*piVar1 == 1) {
    local_9c = (uint *)piVar1[1];
    if (*(uint **)(local_a8 + 0xa80) <= local_9c) {
      return (int *)0x0;
    }
    iVar7 = (int)local_9c * 0x1a8 + *(int *)(local_a8 + 0xa78);
    if (iVar7 == 0) {
      return (int *)0x0;
    }
    if ((*(uint *)(iVar7 + 0xc) >> 8 & (uint)*(byte *)*p_D2Game_DAT_6fd18be0 & 1) != 0) {
      return (int *)0x0;
    }
    iVar7 = sub_102ecbe0();
    if (iVar7 == 0) {
      return (int *)0x0;
    }
    if ((*(uint *)(iVar7 + 4) & 0x200) == 0) {
      return (int *)0x0;
    }
    if ((uVar5 == 0x3c) && (uVar3 = D2Common_10278(piVar1), uVar3 != 0)) {
      return (int *)0x0;
    }
    local_98 = local_9c;
    sub_10228040(&DAT_104e31c0,&local_ac,(int *)&local_98);
    piVar4 = (int *)sub_102280a0(&DAT_104e31c0,&local_a0);
    bVar2 = sub_1023d8f0(this,piVar4);
    if (bVar2) {
LAB_102bff74:
      bVar2 = true;
    }
    else {
      local_98 = local_9c;
      sub_10228040(&DAT_104e31a0,&uStack_a4,(int *)&local_98);
      piVar4 = (int *)sub_102280a0(&DAT_104e31a0,&puStack_b0);
      bVar2 = sub_1023d8f0(this_00,piVar4);
      if (bVar2) goto LAB_102bff74;
      bVar2 = false;
    }
    if ((uVar5 == 0x3a) && (bVar2)) {
      return (int *)0x0;
    }
  }
  local_a0 = (int *)*param_1;
  if (((uVar5 == 0x3c) && (*piVar1 == 0)) && (*local_a0 == 0)) {
    return (int *)0x0;
  }
  local_ac = (uint *)D2Common_10033(uVar5);
  if (uVar5 == 0x59) {
    uVar12 = D2Common_10973((int)piVar1,0x6d,0);
    if ((0x4b < (int)uVar12) || ((int)uVar12 != 0)) {
      uVar12 = functions_HelperFunctions_102ce840(param_1[4],100);
      param_1[4] = (int)uVar12;
      if ((int)uVar12 == 0) {
        return (int *)0x0;
      }
    }
    uVar12 = D2Common_10973((int)piVar1,0x1f8,0);
    if (((0x4b < (int)uVar12) || ((int)uVar12 != 0)) && (param_1[6] != 0)) {
      uVar12 = functions_HelperFunctions_102ce840(param_1[6],100);
      param_1[6] = (int)uVar12;
      if ((int)uVar12 == 0) {
        return (int *)0x0;
      }
    }
  }
  local_98 = (uint *)0x0;
  if (local_ac == (uint *)0x0) {
    uStack_a4 = 0;
LAB_102c0307:
    uVar12 = D2Common_10871((int)piVar1,uVar5);
    puVar8 = (uint *)uVar12;
LAB_102c030e:
    puStack_b0 = puVar8;
    if (puVar8 == (uint *)0x0) goto LAB_102c041e;
  }
  else {
    if (uVar5 != 0xc4) {
      uVar12 = D2Common_10973((int)piVar1,0x6d,0);
      if ((0x4b < (int)uVar12) || ((int)uVar12 != 0)) {
        uVar12 = functions_HelperFunctions_102ce840(param_1[4],100);
        param_1[4] = (int)uVar12;
        if ((int)uVar12 == 0) {
          return (int *)0x0;
        }
      }
      uVar12 = D2Common_10973((int)piVar1,0x1f8,0);
      if (((0x4b < (int)uVar12) || ((int)uVar12 != 0)) && (param_1[6] != 0)) {
        uVar12 = functions_HelperFunctions_102ce840(param_1[6],100);
        param_1[6] = (int)uVar12;
        if ((int)uVar12 == 0) {
          return (int *)0x0;
        }
      }
    }
    D2Common_10494(piVar1,0x39);
    uVar12 = D2Common_10973((int)local_a0,0x170,0);
    local_ac = (uint *)((int)uVar12 + 1);
    puVar8 = (uint *)0x0;
    puStack_b0 = (uint *)0x0;
    uStack_a4 = 0x20;
    local_9c = (uint *)0x0;
    local_98 = local_ac;
    if (piVar1[0x17] == 0) {
      puVar8 = (uint *)D2Common_10195((int)piVar1,0x20);
      goto LAB_102c030e;
    }
    puVar11 = *(uint **)(piVar1[0x17] + 0x3c);
    puVar10 = puStack_b0;
    if (puVar11 != (uint *)0x0) {
      puVar10 = (uint *)0x0;
      do {
        if ((puVar11[4] & 0x20) != 0) {
          puVar10 = (uint *)((int)puVar10 + 1);
          puVar8 = (uint *)D2Common_10680((int)puVar11,0xbe,0);
          if ((puVar8 == (uint *)0x0) || ((int)local_ac <= (int)puVar8)) {
            if ((int)local_ac < (int)puVar8) {
              local_ac = puVar8;
            }
          }
          else {
            D2Common_10261(puVar11,0xbe,0,0);
          }
          puVar8 = local_9c;
          if (puVar11[6] < 0x7fffffff) {
            puVar8 = puVar11;
            local_9c = puVar11;
          }
        }
        puVar11 = (uint *)puVar11[0xb];
      } while (puVar11 != (uint *)0x0);
    }
    puStack_b0 = puVar10;
    if (local_90 == 0xc4) {
      for (puVar11 = *(uint **)(piVar1[0x17] + 0x3c); puVar11 != (uint *)0x0;
          puVar11 = (uint *)puVar11[0xb]) {
        if (((puVar11[4] & 0x20) != 0) && (puVar11 != puVar8)) {
          D2Common_11108(puVar11);
          break;
        }
      }
      puVar8 = puStack_b0;
      if ((int)puStack_b0 < 1) {
        return (int *)0x0;
      }
      uVar12 = D2Common_10786((uint)local_a0,
                              *(uint *)(param_1[2] * 0x23c + *(int *)(local_a8 + 0xb98) + 0x138),
                              param_1[2],param_1[3]);
      memset(&uStack_78,0,0x70);
      sub_102eda90(param_1[2],local_a0,&uStack_78,param_1[3]);
      uStack_74 = 5;
      uStack_78 = 1;
      uStack_58 = FUN_103030b0();
      sub_102ec960(local_94,local_a0,(uint)*(ushort *)(piVar1[0xb] + 2),
                   (uint)*(ushort *)(piVar1[0xb] + 6),(int)puVar8 + (int)uVar12 + -1,0x8583,
                   SKILLS_Skills_6fcc1210,&uStack_78,0);
    }
    uVar5 = local_90;
    if ((int)puStack_b0 < (int)local_ac) goto LAB_102c0307;
    if (local_90 == 0xc4) goto LAB_102c041e;
    uVar12 = D2Common_10871((int)piVar1,local_90);
    puVar8 = local_9c;
    puStack_b0 = (uint *)uVar12;
    if ((uint *)uVar12 == (uint *)0x0) goto LAB_102c030e;
  }
  uVar5 = D2Common_11132((int)puStack_b0);
  local_a8 = D2Common_10555((int)puStack_b0);
  puVar8 = puStack_b0;
  if ((uVar5 == param_1[7]) &&
     ((local_a8 == param_1[2] ||
      (iVar7 = functions_HelperFunctions_102d2720(local_a8,param_1[2]), puVar8 = puStack_b0, iVar7 != 0)))) {
    puVar8 = puStack_b0;
    uVar5 = D2Common_10515((int)puStack_b0);
    if (param_1[3] == uVar5) {
      iStack_81 = functions_HelperFunctions_102d2720(local_a8,param_1[2]);
      if (iStack_81 != 0) {
        return (int *)0x0;
      }
      uStack_85 = (uint16_t)puVar8[7];
      uStack_83 = (uint16_t)puVar8[8];
      uStack_87 = (uint16_t)puVar8[5];
      uStack_88 = 0x83;
      if (param_1[4] != 0) {
        uVar5 = *(int *)(local_94 + 0xa8) + param_1[4];
        D2Common_10161((int)puVar8,uVar5);
        functions_D2NewFunctions_102c9db0(local_94,piVar1,0xc,uVar5,0,local_90,0);
        if ((*piVar1 == 0) && (piVar1[5] != 0)) {
          uStack_7d = 1;
          iStack_7c = uVar5 - *(int *)(piVar1[0x20] + 0xa8);
          sub_102ecd00(*(uint32_t *)(piVar1[5] + 0x9c),&uStack_88,0x10);
        }
      }
      return (int *)puVar8;
    }
    if ((int)param_1[3] < (int)uVar5) {
      return (int *)0x0;
    }
  }
  D2Common_11108(puVar8);
LAB_102c041e:
  D2Common_10158(piVar1);
  uVar5 = local_90;
  D2Common_10945(piVar1,local_90,1);
  local_a8 = 0;
  if (param_1[4] != 0) {
    uStack_a4 = uStack_a4 | 2;
    local_a8 = *(int *)(local_94 + 0xa8) + param_1[4];
    functions_D2NewFunctions_102c9db0(local_94,(int *)param_1[1],0xc,local_a8,0,uVar5,0);
  }
  uVar6 = D2Common_10226(uVar5);
  uVar3 = uStack_a4;
  if (uVar6 != 0) {
    uVar3 = uStack_a4 | 0x800;
  }
  uVar6 = uVar3 | 8;
  if ((*(uint *)((int)local_8c + 0x10) & 2) == 0) {
    uVar6 = uVar3;
  }
  if (local_a0 == (int *)0x0) {
    iVar7 = -1;
    iVar9 = 6;
  }
  else {
    iVar7 = local_a0[3];
    iVar9 = *local_a0;
  }
  puVar8 = D2Common_11013(piVar1[2],uVar6,local_a8,iVar9,iVar7);
  local_8c = puVar8;
  D2Common_10785((int)puVar8,uVar5);
  D2Common_10725((int)puVar8,param_1[2]);
  D2Common_11081((int)puVar8,param_1[3]);
  if (param_1[5] != 0xffffffff) {
    D2Common_10188(puVar8,param_1[5],param_1[6],0);
  }
  uVar12 = D2Common_10973((int)piVar1,0xbe,0);
  if ((int)uVar12 < (int)local_98) {
    D2Common_10188(puVar8,0xbe,(int)local_98,0);
  }
  D2Common_10807((int)piVar1,puVar8,1);
  if (param_1[8] != 0) {
    D2Common_10911((int)puVar8,param_1[8]);
    return (int *)puVar8;
  }
  D2Common_10911((int)puVar8,0x1027dd70);
  return (int *)puVar8;
}


// 0x102c0540  (ghidra: FUN_102c0540)  [range]
int functions_D2NewFunctions_102c0540(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  
  switch(param_2) {
  case 0x24:
  case 0x25:
  case 0x27:
  case 0x29:
  case 0x2b:
  case 0x2d:
    if (((param_1 < 1) &&
        (((param_3 == (int *)0x0 || (*param_3 != 0)) &&
         (uVar1 = D2Common_11104(param_3), uVar1 == 0)))) &&
       (iVar2 = D2Common_10587((int)param_3,param_2,0), 99 < iVar2)) {
      return param_1 / 2;
    }
  }
  return param_1;
}


// 0x102c05c0  (ghidra: FUN_102c05c0)  [range]
void __fastcall functions_D2NewFunctions_102c05c0(void *param_1,uint32_t param_2,uint32_t param_3)

{
  sub_102eccc0(param_1,param_3,param_2,param_1);
  return;
}


// 0x102c05e0  (ghidra: FUN_102c05e0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint16_t * functions_D2NewFunctions_102c05e0(int param_1)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  uint32_t extraout_var;
  int iVar4;
  short *psVar5;
  uint16_t *puVar6;
  int extraout_EDX;
  uint uVar7;
  uint64_t uVar8;
  uint32_t local_44 [6];
  uint32_t local_2c [6];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314c85;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x14) + 4);
  uVar7 = (uint)bVar1;
  if (*(int *)(param_1 + 4) != 0x3b) {
    client_DrawHoverItem_10225040(local_44,&DAT_104dbf48);
    local_8 = 0;
    bVar3 = functions_HelperFunctions_102ce890(uVar7);
    if ((((CONCAT31(extraout_var,bVar3) != 0) && (iVar4 = functions_D2NewFunctions_102cbe00((int)local_44), iVar4 != 0))
        && (uVar7 != 0xa1)) && ((bVar1 != 0xa2 && (bVar1 != 0xa3)))) {
      client_DrawHoverItem_10225070(local_2c);
      local_8 = CONCAT31(local_8._1_3_,1);
      switch(uVar7) {
      case 0xb0:
      case 0xb1:
      case 0xb2:
      case 0xb3:
        psVar5 = (short *)D2Lang_10011_102d0fb0((byte *)"Zhar the Mad Map");
        break;
      default:
        psVar5 = (short *)sub_102eccf0();
        break;
      case 0xb5:
      case 0xb6:
        psVar5 = (short *)D2Lang_10011_102d0fb0((byte *)"Warlord of Blood Map");
      }
      client_DrawHoverItem_10225220(local_2c,psVar5);
      iVar4 = functions_D2NewFunctions_102cbe30(local_44,(int)local_2c);
      if (iVar4 == -1) {
        psVar5 = &DAT_104dbf48;
        do {
          sVar2 = *psVar5;
          psVar5 = psVar5 + 1;
        } while (sVar2 != 0);
        iVar4 = client_DrawHoverItem_10224f20((int)local_2c);
        if (iVar4 + 6U < 0x1fbU - extraout_EDX) {
          uVar8 = thunk_FUN_10225280((int)local_2c);
          iVar4 = (int)((ulonglong)uVar8 >> 0x20);
          sub_10219580(&DAT_104dbf48 + iVar4,0x1fc - iVar4,&DAT_1037e3d4);
        }
      }
      thunk_FUN_102250f0(local_2c);
      thunk_FUN_102250f0(local_44);
      ExceptionList = local_10;
      return &DAT_104dbf48;
    }
    local_8 = 0xffffffff;
    thunk_FUN_102250f0(local_44);
  }
  puVar6 = (uint16_t *)sub_102eccf0();
  ExceptionList = local_10;
  return puVar6;
}


// 0x102c0790  (ghidra: FUN_102c0790)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall functions_D2NewFunctions_102c0790(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  ushort uVar1;
  uint32_t uVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint8_t *puVar8;
  uint32_t *extraout_ECX;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  short *psVar9;
  uint uVar10;
  uint64_t uVar11;
  uint local_48;
  uint32_t local_44;
  int local_40;
  uint local_3c;
  int local_38;
  uint8_t local_34 [4];
  uint32_t local_30;
  ulonglong local_2c;
  uint32_t local_24;
  int local_20 [3];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314cbd;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = param_2;
  local_38 = param_1;
  sub_1020f420((uint64_t *)local_20);
  uVar11 = sub_1020f7c0(extraout_ECX);
  iVar6 = (int)((ulonglong)uVar11 >> 0x20);
  local_8 = 0;
  local_3c = (uint)*(ushort *)(iVar6 + 0xc0);
  local_40 = 0;
  if (local_3c != 0) {
    do {
      uVar2 = *(uint32_t *)(iVar6 + 4 + local_40 * 8);
      uVar5 = *(uint *)(iVar6 + local_40 * 8) >> 0x10;
      if ((((uVar5 != 0x168) && (uVar5 != 0x169)) && (uVar5 != 0x1ca)) &&
         (iVar4 = functions_HelperFunctions_102ce6d0(uVar5), iVar6 = local_38, iVar4 != 0)) {
        local_24 = 0;
        uVar1 = *(ushort *)(iVar4 + 0x3e);
        local_2c = (ulonglong)CONCAT24(uVar1,(uint)*(ushort *)(iVar4 + 0x34));
        local_30 = uVar2;
        if (uVar1 != 0) {
          uVar10 = 0;
          uVar5 = functions_D2NewFunctions_102cbd10(local_20);
          local_48 = uVar5;
          if (uVar5 != 0) {
            do {
              iVar6 = functions_D2NewFunctions_102cbcf0(local_20,uVar10);
              if ((*(uint *)(iVar6 + 0xc) == (uint)uVar1) &&
                 (iVar6 = functions_D2NewFunctions_102cbcf0(this,uVar10), uVar5 = local_48,
                 *(int *)(iVar6 + 4) == *(int *)(local_38 + 4 + local_40 * 8))) {
                iVar6 = functions_D2NewFunctions_102cbcf0(local_20,uVar10);
                *(uint32_t *)(iVar6 + 0x10) = 1;
                iVar6 = local_38;
                goto LAB_102c08b9;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar5);
          }
        }
        uVar5 = functions_D2NewFunctions_102cbd10(local_20);
        if (0xe < uVar5) break;
        functions_D2NewFunctions_102cbd20(this_00,local_34);
        iVar6 = local_38;
      }
LAB_102c08b9:
      local_40 = local_40 + 1;
    } while (local_40 < (int)local_3c);
  }
  sub_10218c90(local_20,&local_3c);
  uVar11 = sub_10218cb0(local_20,&local_48);
  functions_D2NewFunctions_102cbf90(this_01,*(uint32_t *)uVar11,(int)((ulonglong)uVar11 >> 0x20),local_44);
  sub_10219580(&DAT_104dc340,1000,&DAT_1037e3cc);
  psVar3 = &DAT_104dc340;
  do {
    psVar9 = psVar3;
    psVar3 = psVar9 + 1;
  } while (*psVar9 != 0);
  uVar5 = 0;
  iVar4 = (int)(psVar9 + -0x826e1a0) >> 1;
  iVar6 = functions_D2NewFunctions_102cbd10(local_20);
  if (iVar6 != 0) {
    do {
      puVar7 = (uint *)functions_D2NewFunctions_102cbcf0(local_20,uVar5);
      uVar10 = *puVar7;
      iVar6 = functions_D2NewFunctions_102cbcf0(this_02,uVar5);
      local_3c = *(uint *)(iVar6 + 4);
      iVar6 = functions_D2NewFunctions_102cbcf0(this_03,uVar5);
      if (iVar4 < 1000) {
        functions_HelperFunctions_102cf020(&DAT_104dc340 + iVar4,1000 - iVar4,uVar10,local_3c,*(int *)(iVar6 + 0x10));
        psVar3 = &DAT_104dc340;
        do {
          psVar9 = psVar3;
          psVar3 = psVar9 + 1;
        } while (*psVar9 != 0);
        iVar4 = (int)(psVar9 + -0x826e1a0) >> 1;
      }
      uVar5 = uVar5 + 1;
      uVar10 = functions_D2NewFunctions_102cbd10(local_20);
    } while (uVar5 < uVar10);
  }
  psVar3 = &DAT_104dc340;
  do {
    psVar9 = psVar3;
    psVar3 = psVar9 + 1;
  } while (*psVar9 != 0);
  sub_102eccf0();
  switch(param_4) {
  default:
    puVar8 = &DAT_1037e40c;
    break;
  case 4:
    puVar8 = &DAT_1037e418;
    break;
  case 6:
    puVar8 = &DAT_1037e424;
    break;
  case 7:
    puVar8 = &DAT_1037e3c0;
  }
  sub_10219580(&DAT_104dc340 + ((int)(psVar9 + -0x826e1a0) >> 1),
               1000 - ((int)(psVar9 + -0x826e1a0) >> 1),puVar8);
  psVar3 = &DAT_104dc340;
  do {
    psVar9 = psVar3;
    psVar3 = psVar9 + 1;
  } while (*psVar9 != 0);
  iVar6 = ((int)(psVar9 + -0x826e1a0) >> 1) + -0x1fb;
  iVar4 = 0;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  wcsncpy(&DAT_104dbf48,&DAT_104dc340 + iVar4,0x1fb);
  DAT_104dc33e = 0;
  if (0 < iVar4) {
    sub_10219580(&DAT_104dbf48,8,&DAT_1037e418);
    DAT_104dbf56 = 0x5d;
  }
  thunk_FUN_102cbe70(local_20);
  ExceptionList = local_10;
  return;
}


// 0x102c0ad0  (ghidra: FUN_102c0ad0)  [range]
void functions_D2NewFunctions_Hook_UNIT_SUnitDmg_6fcfc780_102c0ad0(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint64_t uVar3;
  
  uVar2 = param_4 & 0xffff;
  D2Common_10261((uint *)param_1,param_2,param_3,uVar2);
  D2Common_10261((uint *)param_1,0x1a7,param_3 * 3,uVar2);
  if (*(int *)(param_1 + 4) != 0) {
    uVar3 = D2Common_10973(*(int *)(param_1 + 4),0x69,0);
    iVar1 = (int)uVar3;
    if (-1 < iVar1) {
      if (iVar1 <= -param_3) {
        param_3 = -iVar1;
      }
      D2Common_10261((uint *)param_1,0x69,param_3,uVar2);
    }
  }
  return;
}


// 0x102c0b30  (ghidra: FUN_102c0b30)  [range]
void functions_D2NewFunctions_102c0b30(int *reg_ECX,int reg_EDX)

{
  uint64_t uVar1;
  
  uVar1 = D2Common_10973((int)reg_ECX,0x15,0);
  D2Common_10887(reg_ECX,0x15,*(int *)(reg_EDX + 4) + (int)uVar1,0);
  uVar1 = D2Common_10973((int)reg_ECX,0x16,0);
  D2Common_10887(reg_ECX,0x16,*(int *)(reg_EDX + 8) + (int)uVar1,0);
  uVar1 = D2Common_10973((int)reg_ECX,0x39,0);
  D2Common_10887(reg_ECX,0x39,*(int *)(reg_EDX + 0x34) + (int)uVar1,0);
  uVar1 = D2Common_10973((int)reg_ECX,0x3a,0);
  D2Common_10887(reg_ECX,0x3a,*(int *)(reg_EDX + 0x38) + (int)uVar1,0);
  uVar1 = D2Common_10973((int)reg_ECX,0x3b,0);
  D2Common_10887(reg_ECX,0x3b,*(int *)(reg_EDX + 0x3c) + (int)uVar1,0);
  uVar1 = D2Common_10973((int)reg_ECX,0x146,0);
  D2Common_10887(reg_ECX,0x146,*(int *)(reg_EDX + 0x40) + (int)uVar1,0);
  return;
}


// 0x102c0be0  (ghidra: FUN_102c0be0)  [range]
uint functions_D2NewFunctions_Hook_sub_6fcf01d0_102c0be0(int param_1,int param_2,int param_3,int *param_4,uint *param_5,int *param_6)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint uVar9;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_2 + 4);
  uVar5 = D2Common_10744(param_1,0x25);
  if (((((int)uVar5 != 0) || (uVar5 = D2Common_10744(param_1,0x10), (int)uVar5 != 0)) ||
      (uVar5 = D2Common_10744(param_1,3), (int)uVar5 != 0)) ||
     ((uVar5 = D2Common_10744(param_1,0x13), (int)uVar5 != 0 ||
      (uVar5 = D2Common_10744(param_1,0xf), (int)uVar5 != 0)))) goto LAB_102c0e2d;
  uVar4 = param_1;
  if (iVar1 < 0x231) {
    if (iVar1 == 0x230) {
LAB_102c0df9:
      uVar5 = D2Common_10744(param_1,0x1c);
      if ((((int)uVar5 != 0) || (uVar5 = D2Common_10744(param_1,0x1e), (int)uVar5 != 0)) ||
         (uVar5 = D2Common_10744(param_1,0x24), (int)uVar5 != 0)) goto LAB_102c0e2d;
      uVar9 = 0x1f;
    }
    else {
      if (iVar1 != 0x10f) {
        if (iVar1 == 0x152) {
          uVar5 = D2Common_10744(param_1,0x21);
          if ((int)uVar5 != 0) goto LAB_102c0e2d;
          uVar9 = 0x22;
        }
        else {
          if (iVar1 != 0x167) {
            return 0;
          }
          uVar5 = D2Common_10744(param_1,0x1e);
          if ((((((int)uVar5 != 0) || (uVar5 = D2Common_10744(param_1,0x19), (int)uVar5 != 0)) ||
               (uVar5 = D2Common_10744(param_1,0x44), (int)uVar5 != 0)) ||
              (((uVar5 = D2Common_10744(param_1,0x46), (int)uVar5 != 0 ||
                (uVar5 = D2Common_10744(param_1,0x24), (int)uVar5 != 0)) ||
               (uVar5 = D2Common_10744(param_1,0x18), (int)uVar5 != 0)))) &&
             (uVar5 = D2Common_10744(param_1,0x72), (int)uVar5 == 0)) goto LAB_102c0e2d;
          uVar9 = 2;
        }
        goto LAB_102c0e20;
      }
      piVar2 = *(int **)(param_2 + 0x60);
      uVar4 = D2Common_11139(piVar2,4);
      uVar9 = D2Common_11139(piVar2,5);
      uVar5 = D2Common_10744(param_1,0x1b);
      if ((int)uVar5 == 0) {
        uVar5 = D2Common_10744(param_1,0x55);
        bVar3 = false;
        if ((int)uVar5 != 0) goto LAB_102c0d2d;
      }
      else {
LAB_102c0d2d:
        bVar3 = true;
      }
      uVar5 = D2Common_10744(param_1,0x23);
      uVar6 = D2Common_10744(param_1,5);
      uVar7 = D2Common_10744(param_1,6);
      if (((bVar3) && ((uVar9 == 0 || (uVar8 = D2Common_10744(uVar9,5), (int)uVar8 != 0)))) ||
         ((((int)uVar5 != 0 && ((uVar9 == 0 || (uVar5 = D2Common_10744(uVar9,6), (int)uVar5 != 0))))
          || (((int)uVar6 != 0 &&
              (((uVar4 == 0 || (uVar5 = D2Common_10744(uVar4,0x1b), (int)uVar5 != 0)) ||
               (uVar5 = D2Common_10744(uVar4,0x55), (int)uVar5 != 0)))))))) goto LAB_102c0e2d;
      if ((int)uVar7 == 0) {
        return 0;
      }
      if (uVar4 == 0) goto LAB_102c0e2d;
      uVar9 = 0x23;
    }
  }
  else {
    if (iVar1 == 0x231) goto LAB_102c0df9;
    if (iVar1 != 0x420) {
      return 0;
    }
    uVar9 = 0x1a;
  }
LAB_102c0e20:
  uVar5 = D2Common_10744(uVar4,uVar9);
  if ((int)uVar5 == 0) {
    return 0;
  }
LAB_102c0e2d:
  uVar4 = D2Common_10244((int *)param_1,(int *)param_2,param_3,param_4,param_5,param_6);
  return uVar4;
}


// 0x102c0e50  (ghidra: FUN_102c0e50)  [range]
uint32_t functions_D2NewFunctions_Hook_D2Common_10244_102c0e50(int *param_1,int param_2,int param_3)

{
  if (((param_3 != 0x230) && (param_3 != 0x231)) || (param_2 != 4)) {
    if (param_3 == 0x10f) {
      if (param_2 == 0) {
        return 1;
      }
    }
    else if (param_3 == 0x167) {
      if (param_2 == 1) {
        return 1;
      }
      if (param_2 == 3) {
        return 1;
      }
    }
    if (((param_1 == (int *)0x0) || (*param_1 != 0)) || (param_1[1] != param_2)) {
      return 0;
    }
  }
  return 1;
}


// 0x102c0eb0  (ghidra: FUN_102c0eb0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall functions_D2NewFunctions_Hook_sub_6fc441b0_102c0eb0(uint32_t param_1,uint param_2,uint32_t param_3,uint param_4)

{
  int iVar1;
  uint extraout_ECX;
  uint64_t uVar2;
  uint local_34;
  uint32_t local_30;
  uint local_28;
  uint32_t uStack_24;
  int iStack_20;
  uint32_t uStack_1c;
  uint uStack_18;
  uint64_t local_14;
  uint local_c;
  
  local_c = DAT_1039800c ^ (uint)&local_34;
  iVar1 = sub_102ece30(param_1);
  if (iVar1 != 0) {
    iVar1 = functions_HelperFunctions_102ce5a0(0x1a8);
    if (iVar1 != 0) {
      local_30 = param_3;
      local_14 = 0;
      local_28 = param_4;
      local_34 = param_2;
      uVar2 = D2Common_10786(param_2,*(uint *)(iVar1 + 0x60),extraout_ECX,param_4);
      uStack_24 = (uint32_t)uVar2;
      iStack_20 = (int)*(short *)(iVar1 + 0x54);
      uVar2 = D2Common_10786(param_2,*(uint *)(iVar1 + 0x68),0x1a8,param_4);
      uStack_1c = (uint32_t)uVar2;
      uStack_18 = (uint)*(ushort *)(iVar1 + 0x82);
      functions_D2NewFunctions_102bfe20(&local_34,param_2,param_4,iVar1);
    }
  }
  return;
}


// 0x102c0f60  (ghidra: FUN_102c0f60)  [range]
uint32_t
functions_D2NewFunctions_102c0f60(int *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5,uint32_t param_6,uint32_t param_7)

{
  uint32_t uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    return 0;
  }
  uVar1 = sub_102ece70(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


// 0x102c0f80  (ghidra: FUN_102c0f80)  [range]
uint32_t functions_D2NewFunctions_102c0f80(int param_1,int param_2,uint32_t param_3,uint32_t param_4)

{
  bool bVar1;
  int iVar2;
  uint32_t extraout_var;
  uint32_t uVar3;
  int extraout_EDX;
  
  if ((((param_2 != 0) && (*(int *)(param_2 + 0x14) != 0)) &&
      (*(int *)(*(int *)(param_2 + 0x14) + 0x9c) != 0)) &&
     ((param_1 != 0 && (DAT_104dbb3a == '\0')))) {
    iVar2 = functions_HelperFunctions_102ceae0(param_2);
    if ((iVar2 != 0) && ((*(ushort *)(extraout_EDX + 10) & 4) != 0)) {
      *(ushort *)(extraout_EDX + 10) = *(ushort *)(extraout_EDX + 10) & 0xfff7;
    }
    bVar1 = functions_HelperFunctions_102ceb10(param_2);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      return 0;
    }
    iVar2 = sub_102d3c20(param_2,*(int *)(*(int *)(param_2 + 0x14) + 0x1b4));
    if (iVar2 != 0) {
      sub_102d40a0(param_2);
      uVar3 = sub_102ecec0(param_1,param_2,param_3,param_4);
      goto LAB_102c101d;
    }
  }
  uVar3 = sub_102ecec0(param_1,param_2,param_3,param_4);
  if (param_2 == 0) {
    return uVar3;
  }
LAB_102c101d:
  if (((*(int *)(param_2 + 0x14) != 0) && (param_1 != 0)) &&
     ((DAT_104dbb3a == '\0' && (iVar2 = sub_102d4150(param_2), iVar2 != 0)))) {
    sub_102d3d10(param_2,*(int *)(*(int *)(param_2 + 0x14) + 0x1b4),1);
  }
  return uVar3;
}


// 0x102c1060  (ghidra: FUN_102c1060)  [range]
void functions_D2NewFunctions_102c1060(int *param_1)

{
  int iVar1;
  uint32_t extraout_ECX;
  ulonglong uVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    *(uint32_t *)(param_1[5] + 0x170) = 1;
    iVar1 = D2Common_10630((uint)param_1,0x17c);
    if (iVar1 != 0) {
      uVar2 = D2Common_10397(iVar1);
      if ((uVar2 & 3) != 0) {
        sub_102ee950(extraout_ECX,(int)(uVar2 >> 0x20));
        sub_102ecfd0();
        goto LAB_102c10bc;
      }
    }
  }
  sub_102ecfd0();
  if (param_1 == (int *)0x0) {
    return;
  }
LAB_102c10bc:
  if (*param_1 == 0) {
    *(uint32_t *)(param_1[5] + 0x170) = 0;
  }
  return;
}


// 0x102c10e0  (ghidra: FUN_102c10e0)  [range]
int __fastcall functions_D2NewFunctions_102c10e0(uint param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (((param_3 != (int *)0x0) && (param_3[5] != 0)) &&
     ((*param_3 != 0 || ((*(int *)(param_3[5] + 0x170) == 0 || (param_2 != 0x61)))))) {
    iVar1 = functions_HelperFunctions_102ce5a0(param_1);
    return iVar1;
  }
  return 0;
}


// 0x102c1120  (ghidra: FUN_102c1120)  [range]
uint32_t functions_D2NewFunctions_102c1120(int *param_1,uint32_t param_2,uint32_t param_3,uint param_4)

{
  uint32_t uVar1;
  
  if (((*param_1 == 0) && (*(int *)(param_1[5] + 0x170) != 0)) &&
     ((param_4 & 0xffff0000) == 0x1670000)) {
    return 0;
  }
  uVar1 = sub_102ed000();
  return uVar1;
}


// 0x102c1160  (ghidra: FUN_102c1160)  [range]
void __fastcall functions_D2NewFunctions_102c1160(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 0x1df4) == 0x10) && (*(int *)(param_1 + 0x2628) < 0x32)) {
    *(uint32_t *)(param_1 + 0x2628) = 0x32;
    uVar3 = D2Common_10459(param_2);
    functions_HelperFunctions_102cff20(param_1,uVar3,0);
    functions_HelperFunctions_102d0dd0(param_1,0x26d,(uint *)0x0,param_2);
    piVar4 = (int *)(param_1 + 0x1320);
    iVar5 = 0x80;
    do {
      iVar1 = *piVar4;
      if ((iVar1 != 0) &&
         (((iVar2 = *(int *)(iVar1 + 4), iVar2 == 0x3e2 || (iVar2 == 0x3e1)) || (iVar2 == 0x3e3))))
      {
        sub_102b0900(param_1,iVar1);
      }
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}


// 0x102c11f0  (ghidra: FUN_102c11f0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

uint32_t __fastcall functions_D2NewFunctions_Hook_Unwind_6fd178a0_102c11f0(int *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint8_t uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  void *pvVar14;
  int *piVar15;
  uint32_t *puVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
  uint32_t extraout_var;
  uint32_t extraout_var_00;
  uint uVar20;
  uint *puVar21;
  uint32_t extraout_ECX;
  void *this;
  uint32_t extraout_ECX_00;
  void *this_00;
  int iVar22;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  void *extraout_ECX_06;
  uint64_t uVar23;
  ulonglong uVar24;
  uint32_t uVar25;
  int *piVar26;
  code *pcVar27;
  int local_1b4;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  int *local_1a4;
  byte local_19d;
  uint local_19c;
  int local_198;
  int *local_194;
  int *local_190;
  int local_18c;
  uint local_188;
  int local_184;
  int *local_180;
  uint *local_17c;
  int *local_178;
  uint32_t local_174;
  uint32_t local_170;
  uint32_t local_16c;
  int local_168;
  uint32_t local_164;
  uint local_160;
  uint64_t local_15c;
  int local_154;
  uint64_t local_150;
  int local_148;
  int *local_144;
  uint local_140;
  int *local_13c;
  int *local_138;
  uint local_134;
  uint *local_130;
  uint8_t local_12c [40];
  uint local_104;
  uint local_100;
  int local_fc;
  uint local_f8;
  uint local_f4;
  uint8_t local_b0 [4];
  uint32_t local_ac;
  uint local_88;
  uint64_t local_40;
  int local_38;
  uint *local_34;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_20;
  uint64_t local_1c;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314d05;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar18 = *(uint **)(param_2 + 4);
  local_30 = 0x20202020;
  local_198 = param_2;
  local_130 = puVar18;
  local_1c._4_4_ = param_1;
  if (puVar18 == (uint *)0x0) goto LAB_102c5178;
  local_180 = functions_D2NewFunctions_102cb180(*(int **)(param_2 + 8),1);
  piVar15 = (int *)puVar18[1];
  local_18c = *p_D2Common_DAT_6fde9e1c;
  local_138 = piVar15;
  if (((*puVar18 == 1) && ((puVar18[0x32] & 0x100000) != 0)) &&
     (piVar9 = functions_D2NewFunctions_102cb180((int *)puVar18,1), piVar9 != (int *)0x0)) {
    functions_HelperFunctions_102d3280(param_1,(int *)puVar18);
  }
  if (piVar15 == (int *)0x399) {
    functions_HelperFunctions_102d0dd0((int)param_1,0x2c1,puVar18,0);
    uVar13 = param_1[0x2a] + 0x55;
    uVar12 = 0;
    uVar10 = 0;
    pcVar27 = functions_D2NewFunctions_102c7710;
LAB_102c132b:
    sub_6fcaea80((int)param_1,(int *)puVar18,7,uVar13,(uint)pcVar27,uVar10,uVar12);
  }
  else if (piVar15 == (int *)0x39a) {
    local_30 = 0x766d7472;
    uVar10 = functions_D2NewFunctions_102c5d10((int *)puVar18);
    if (uVar10 % 3 == 0) {
      functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,7,0x83,(uint32_t *)0x0,(uint32_t *)0x0,
                   0,3,puVar18);
    }
    iVar11 = rand();
    uVar10 = iVar11 % 5 + 0x14;
    uVar12 = functions_HelperFunctions_102d0fc0(0x3b7);
    pcVar27 = functions_D2NewFunctions_102c9030;
    uVar13 = param_1[0x2a] + 1;
    goto LAB_102c132b;
  }
  uVar23 = D2Common_10331((int *)puVar18);
  uVar23 = D2Common_10826((int)uVar23);
  local_140 = (uint)uVar23;
  pvVar14 = (void *)sub_10228040(&DAT_104e30b4,&local_188,(int *)&local_140);
  piVar15 = (int *)sub_102280a0(&DAT_104e30b4,&local_19c);
  bVar4 = sub_1023d8f0(pvVar14,piVar15);
  local_1a4 = local_138;
  pvVar14 = (void *)sub_10228040(&DAT_104e3130,&local_188,(int *)&local_1a4);
  piVar15 = (int *)sub_102280a0(&DAT_104e3130,&local_19c);
  bVar5 = sub_1023d8f0(pvVar14,piVar15);
  local_1b0 = (uint)bVar5;
  pvVar14 = (void *)sub_10228040(&DAT_104e31e4,&local_188,(int *)&local_140);
  piVar15 = (int *)sub_102280a0(&DAT_104e31e4,&local_19c);
  bVar5 = sub_1023d8f0(pvVar14,piVar15);
  local_1a4 = local_138;
  pvVar14 = (void *)sub_10228040(&DAT_104e2fd4,&local_188,(int *)&local_1a4);
  piVar15 = (int *)sub_102280a0(&DAT_104e2fd4,&local_19c);
  bVar6 = sub_1023d8f0(pvVar14,piVar15);
  local_1ac = (uint)bVar6;
  pvVar14 = (void *)sub_10228040(&DAT_104e30a4,&local_188,(int *)&local_140);
  piVar15 = (int *)sub_102280a0(&DAT_104e30a4,&local_19c);
  bVar6 = sub_1023d8f0(pvVar14,piVar15);
  local_1a4 = (int *)(uint)bVar6;
  local_194 = local_138;
  pvVar14 = (void *)sub_10228040(&DAT_104e31b8,&local_188,(int *)&local_194);
  piVar15 = (int *)sub_102280a0(&DAT_104e31b8,&local_19c);
  bVar6 = sub_1023d8f0(pvVar14,piVar15);
  local_1a8 = (uint)bVar6;
  pvVar14 = (void *)sub_10228040(&DAT_104e3018,&local_188,(int *)&local_140);
  piVar15 = (int *)sub_102280a0(&DAT_104e3018,&local_19c);
  bVar6 = sub_1023d8f0(pvVar14,piVar15);
  local_19c = (uint)bVar6;
  local_194 = local_138;
  pvVar14 = (void *)sub_10228040(&DAT_104e31c0,&local_188,(int *)&local_194);
  piVar15 = (int *)sub_102280a0(&DAT_104e31c0,&local_148);
  bVar6 = sub_1023d8f0(pvVar14,piVar15);
  local_194 = local_138;
  pvVar14 = (void *)sub_10228040(&DAT_104e31a0,&local_188,(int *)&local_194);
  piVar15 = (int *)sub_102280a0(&DAT_104e31a0,&local_148);
  bVar7 = sub_1023d8f0(pvVar14,piVar15);
  local_194 = (int *)(uint)bVar7;
  pvVar14 = (void *)sub_10228040(&DAT_104e3224,&local_188,(int *)&local_140);
  piVar15 = (int *)sub_102280a0(&DAT_104e3224,&local_148);
  sub_1023d8f0(pvVar14,piVar15);
  local_13c = local_138;
  pvVar14 = (void *)sub_10228040(&DAT_104e3010,&local_188,(int *)&local_13c);
  piVar15 = (int *)sub_102280a0(&DAT_104e3010,&local_148);
  bVar7 = sub_1023d8f0(pvVar14,piVar15);
  if ((((local_1b0 != 0) || (local_1ac != 0)) ||
      ((local_1a8 != 0 || ((bVar6 || (local_194 != (int *)0x0)))))) || (bVar7)) {
    iVar11 = 1;
  }
  else {
    iVar11 = 0;
  }
  local_38 = iVar11;
  uVar23 = D2Common_10973((int)puVar18,0x1ed,0);
  local_1b4 = (int)uVar23;
  if ((local_1b4 < 1) || (local_184 = 2, iVar11 != 0)) {
    local_184 = 1;
  }
  D2Common_10973((int)puVar18,0x114,0);
  uVar23 = D2Common_10973((int)puVar18,0x111,0);
  puVar17 = local_130;
  piVar15 = local_180;
  local_188 = (uint)uVar23;
  if ((local_180 != (int *)0x0) && (*local_180 == 0)) {
    *(int *)(local_180[5] + 0x37d) = *(int *)(local_180[5] + 0x37d) + 1;
    *(int *)(local_180[5] + 0x3f9) = *(int *)(local_180[5] + 0x3f9) + 1;
    if ((local_1b4 != 0) && (local_38 == 0)) {
      *(int *)(local_180[5] + 0x37d) = *(int *)(local_180[5] + 0x37d) + 1;
      *(int *)(local_180[5] + 0x3f9) = *(int *)(local_180[5] + 0x3f9) + 1;
    }
  }
  if ((int *)0x3dd < local_138) {
    switch(local_138) {
    case (int *)0x3de:
    case (int *)0x3df:
      goto switchD_102c269a_caseD_3de;
    case (int *)0x3e1:
    case (int *)0x3e2:
    case (int *)0x3e3:
      if ((param_1[0x77d] == 0x10) && (param_1[0x98a] - 2U < 0x30)) {
        if (local_138 == (int *)0x3e1) {
          local_30._0_3_ = 0x326b70;
        }
        else {
          uVar8 = 0x31;
          if (local_138 == (int *)0x3e3) {
            uVar8 = 0x33;
          }
          local_30._0_3_ = CONCAT12(uVar8,0x6b70);
        }
        local_30 = CONCAT13(0x20,(uint32_t)local_30);
        uVar10 = (uint)*(byte *)(*(int *)puVar18[5] + 0x30) +
                 (uint)*(byte *)(*(int *)puVar18[5] + 0x2f);
        if (uVar10 == 0) {
          uVar10 = 1;
        }
        uVar12 = functions_D2NewFunctions_102c5d10((int *)puVar18);
        if ((uVar12 % 0x960 < (uint)(1000 / (ulonglong)uVar10)) &&
           (piVar15 = functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,7,0x82,(uint32_t *)0x0,
                                   (uint32_t *)0x0,0,3,puVar18), piVar15 != (int *)0x0)) {
          param_1[0x98a] = param_1[0x98a] + 1;
        }
        if (5 < param_1[0x98a] + -2) {
          functions_D2NewFunctions_102c1160((int)param_1,local_140);
        }
      }
      break;
    case (int *)0x422:
      if ((param_1[0x77d] == 0x1e) && (*(byte *)((int)param_1 + 0x262a) < 4)) {
        if ((local_180 != (int *)0x0) && (*local_180 == 0)) {
          *(short *)(local_180[5] + 0x39d) = *(short *)(local_180[5] + 0x39d) + 1;
          *(short *)(local_180[5] + 0x419) = *(short *)(local_180[5] + 0x419) + 1;
        }
        *(uint8_t *)((int)param_1 + 0x262a) = 4;
        sub_102db2f0((int)param_1,(int *)puVar18,(int *)(uint)*(ushort *)(puVar18[0xb] + 2),
                     (uint)*(ushort *)(puVar18[0xb] + 6),0x6d,0x24a);
        local_1c._0_4_ = 0;
        local_1c._4_4_ = (int *)0x0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        uVar24 = sub_102bacf0(&DAT_104e3170);
        uVar10 = rand();
        uVar23 = functions_D2ServerFunctions_1026cd50(&DAT_104e3170,&local_148);
        piVar15 = sub_102bad60(&local_190,(int)((ulonglong)uVar10 % (uVar24 & 0xffffffff)),
                               *(uint32_t *)uVar23);
        puVar16 = (uint32_t *)sub_1025f2f0(piVar15);
        local_20 = *puVar16;
        local_30 = 0x20336d63;
        functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,4,99,&local_20,&local_2c,0,3,puVar18);
      }
      break;
    case (int *)0x424:
      if (param_1[0x77d] == 0x1f) {
        if ((local_180 != (int *)0x0) && (*local_180 == 0)) {
          *(short *)(local_180[5] + 0x39d) = *(short *)(local_180[5] + 0x39d) + 1;
          *(short *)(local_180[5] + 0x419) = *(short *)(local_180[5] + 0x419) + 1;
        }
        sub_102db2f0((int)param_1,(int *)puVar18,(int *)(uint)*(ushort *)(puVar18[0xb] + 2),
                     (uint)*(ushort *)(puVar18[0xb] + 6),0x6d,0x24a);
        iVar11 = local_18c;
        if (local_18c == 0) {
          ExceptionList = local_10;
          return 0;
        }
        uVar23 = D2Common_10331((int *)puVar18);
        local_34 = (uint *)uVar23;
        if (local_34 == (uint *)0x0) {
          ExceptionList = local_10;
          return 0;
        }
        uVar10 = rand();
        uVar10 = uVar10 & 0x80000001;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
        }
        local_148 = uVar10 + 2;
        local_1c._4_4_ = (int *)0x0;
        if (0 < local_148) {
          do {
            uVar10 = rand();
            piVar15 = (int *)0x14;
            while( true ) {
              local_144 = (int *)(uVar10 % *(uint *)(iVar11 + 0xc28));
              iVar22 = (int)local_144 * 0x14c + *(int *)(iVar11 + 0xc24);
              if ((((iVar22 != 0) && (*(int *)(iVar22 + 0x2c) != 0)) &&
                  (*(int *)(iVar22 + 0x30) != 0)) &&
                 ((*(ushort *)(iVar22 + 0x34) != 0 && (*(ushort *)(iVar22 + 0x34) < 100)))) break;
              local_190 = (int *)((int)piVar15 - 1);
              if ((int)local_190 < 1) {
                ExceptionList = local_10;
                return 0;
              }
              uVar10 = rand();
              piVar15 = local_190;
            }
            local_154 = 0;
            D2Common_10450(*(uint *)(iVar22 + 0x28),&local_154);
            uVar23 = functions_HelperFunctions_102d1a80((int)param_1,(uint)local_144,0);
            local_144 = (int *)sub_102eef00(extraout_ECX,(int)((ulonglong)uVar23 >> 0x20));
            if (local_144 != (int *)0x0) {
              sub_102bb5f0((int)local_144,0,iVar11);
              D2Common_10977(local_144,0x10,0);
              local_134 = 0;
              local_138 = (int *)0x0;
              functions_HelperFunctions_102cfc20((int *)puVar18,&local_134,(uint *)&local_138,&local_138);
              if (((local_34 != (uint *)0x0) && (0 < (int)local_134)) && (0 < (int)local_138)) {
                iVar22 = functions_ItemFunctions_102dab80(&local_34,(int *)&local_134,(int *)&local_138,1,0x805,0);
                if ((iVar22 != 0) &&
                   (iVar22 = functions_ItemFunctions_102dac30(&local_34,(int *)&local_134,(int *)&local_138,2,0x805,7,0)
                   , iVar22 == 0)) {
                  ExceptionList = local_10;
                  return 0;
                }
                iVar22 = functions_ItemFunctions_102daae0((int *)&local_34,&local_134,(uint *)&local_138,1);
                if (iVar22 == 0) {
                  ExceptionList = local_10;
                  return 0;
                }
                sub_102ee060(this);
              }
            }
            local_1c._4_4_ = (int *)((int)local_1c._4_4_ + 1);
          } while ((int)local_1c._4_4_ < local_148);
        }
        local_13c = (int *)0x0;
        local_130 = (uint *)0x0;
        D2Common_10383(local_34,(uint *)&local_13c,(uint *)&local_130);
        local_1c._4_4_ = (int *)0x0;
        puVar17 = local_130;
        if (0 < (int)local_130) {
          do {
            for (piVar15 = *(int **)(local_13c[(int)local_1c._4_4_] + 0x74); piVar15 != (int *)0x0;
                piVar15 = (int *)piVar15[0x3a]) {
              if ((*piVar15 == 1) && (piVar15[1] == 0x421)) {
                sub_102b0900(param_1,(int)piVar15);
              }
              puVar17 = local_130;
            }
            local_1c._4_4_ = (int *)((int)local_1c._4_4_ + 1);
          } while ((int)local_1c._4_4_ < (int)puVar17);
        }
      }
      break;
    case (int *)0x425:
    case (int *)0x426:
    case (int *)0x427:
      if ((param_1[0x77d] == 0x1e) && (*(byte *)((int)param_1 + 0x262a) < 4)) {
        uVar10 = rand();
        uVar10 = uVar10 & 0x80000001;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
        }
        if ((int)uVar10 < 1) {
          local_28 = 0;
          local_24 = 0;
          local_20 = 0;
          local_1c._0_4_ = 0;
          local_1c._4_4_ = (int *)0x0;
          uVar24 = sub_102bacf0(&DAT_104e3170);
          uVar10 = rand();
          uVar23 = functions_D2ServerFunctions_1026cd50(&DAT_104e3170,&local_148);
          piVar15 = sub_102bad60(&local_190,(int)((ulonglong)uVar10 % (uVar24 & 0xffffffff)),
                                 *(uint32_t *)uVar23);
          puVar16 = (uint32_t *)sub_1025f2f0(piVar15);
          local_2c = *puVar16;
          local_30 = 0x20336d63;
          functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,4,0x5a,&local_2c,&local_20,0,3,puVar18)
          ;
        }
      }
      break;
    case (int *)0x428:
      if ((param_1[0x77d] == 0x13) && (param_1[0x98a] == 2)) {
        uVar23 = D2Common_10331((int *)puVar18);
        if ((uint *)uVar23 == (uint *)0x0) {
          ExceptionList = local_10;
          return 0;
        }
        functions_HelperFunctions_102d0dd0((int)param_1,0x26d,puVar18,0);
        param_1[0x98a] = 3;
        local_13c = (int *)0x0;
        local_130 = (uint *)0x0;
        D2Common_10383((uint *)uVar23,(uint *)&local_13c,(uint *)&local_130);
        local_1c._4_4_ = (int *)0x0;
        puVar17 = local_130;
        if (0 < (int)local_130) {
          do {
            for (piVar15 = *(int **)(local_13c[(int)local_1c._4_4_] + 0x74); piVar15 != (int *)0x0;
                piVar15 = (int *)piVar15[0x3a]) {
              if ((*piVar15 == 1) && (piVar15[1] == 0x429)) {
                sub_102b0900(param_1,(int)piVar15);
              }
              puVar17 = local_130;
            }
            local_1c._4_4_ = (int *)((int)local_1c._4_4_ + 1);
          } while ((int)local_1c._4_4_ < (int)puVar17);
        }
      }
      break;
    case (int *)0x446:
      if (param_1[0x77d] == 0x20) {
        if ((local_180 != (int *)0x0) && (*local_180 == 0)) {
          *(short *)(local_180[5] + 0x39d) = *(short *)(local_180[5] + 0x39d) + 1;
          *(short *)(local_180[5] + 0x419) = *(short *)(local_180[5] + 0x419) + 1;
        }
        sub_102db2f0((int)param_1,(int *)puVar18,(int *)(uint)*(ushort *)(puVar18[0xb] + 2),
                     (uint)*(ushort *)(puVar18[0xb] + 6),0x6d,0x24a);
        if (local_18c == 0) {
          ExceptionList = local_10;
          return 0;
        }
        uVar23 = D2Common_10331((int *)puVar18);
        if ((int)uVar23 == 0) {
          ExceptionList = local_10;
          return 0;
        }
        uVar10 = rand();
        uVar10 = uVar10 & 0x80000007;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffff8) + 1;
        }
        functions_HelperFunctions_102d1a80((int)param_1,uVar10 + 0x188,0);
        functions_ItemFunctions_102d5980((int)param_1,(int *)puVar18,uVar10 + 0x188,99,3,0,0);
      }
      break;
    case (int *)0x447:
      goto switchD_102c1905_caseD_371;
    case (int *)0x448:
      if (param_1[0x77d] == 0x20) {
        if ((local_180 != (int *)0x0) && (*local_180 == 0)) {
          *(short *)(local_180[5] + 0x39d) = *(short *)(local_180[5] + 0x39d) + 1;
          *(short *)(local_180[5] + 0x419) = *(short *)(local_180[5] + 0x419) + 1;
        }
        iVar11 = 0x248;
        uVar10 = 0xb8;
LAB_102c31bf:
        sub_102db2f0((int)param_1,(int *)puVar18,(int *)(uint)*(ushort *)(puVar18[0xb] + 2),
                     (uint)*(ushort *)(puVar18[0xb] + 6),uVar10,iVar11);
      }
      break;
    case (int *)0x450:
      if (puVar18 == (uint *)param_1[0x980]) {
        param_1[0x980] = 0;
        if ((param_1[0x77d] == 9) && ((char)param_1[0x98a] == '\x01')) {
          *(uint8_t *)(param_1 + 0x98a) = 2;
        }
        piVar15 = (int *)param_1[0x981];
        if ((piVar15 != (int *)0x0) && (*piVar15 == 2)) {
          functions_HelperFunctions_102d20e0((int)param_1,piVar15);
          param_1[0x981] = 0;
        }
        piVar15 = (int *)param_1[0x982];
        if ((piVar15 != (int *)0x0) && (*piVar15 == 2)) {
          functions_HelperFunctions_102d20e0((int)param_1,piVar15);
          param_1[0x982] = 0;
        }
      }
      break;
    case (int *)0x451:
      if (puVar18 == (uint *)param_1[0x980]) {
        param_1[0x980] = 0;
        if ((param_1[0x77d] == 9) && ((char)param_1[0x98a] == '\x01')) {
          *(uint8_t *)(param_1 + 0x98a) = 2;
        }
        piVar15 = (int *)param_1[0x981];
        if ((piVar15 != (int *)0x0) && (*piVar15 == 2)) {
          functions_HelperFunctions_102d20e0((int)param_1,piVar15);
          param_1[0x981] = 0;
        }
      }
      break;
    case (int *)0x458:
      piVar15 = sub_102db1e0((int)param_1,0x6d,1,0x26e,2,0,0,0);
      piVar9 = sub_102db1e0((int)param_1,0xbc,0,0x24b,2,0,0xfffffffb,0xfffffffb);
      sub_102db500((int)param_1,(int)piVar15,(uint)piVar9,1);
      sub_102db2f0((int)param_1,(int *)puVar18,(int *)0x6221,0x17df,0xbd,0x26e);
      bVar1 = *(byte *)((int)param_1 + 0x2629);
      if ((bVar1 != 0) &&
         (uVar10 = functions_D2NewFunctions_102c5d10((int *)puVar18), uVar10 % ((4 - (uint)bVar1) * 0x19) == 0)) {
        local_30 = 0x6e726d69;
        functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,7,0x82,(uint32_t *)0x0,
                     (uint32_t *)0x0,0,3,puVar18);
      }
      *(uint8_t *)((int)param_1 + 0x262a) = 8;
      if ((uint8_t *)param_1[0x981] != (uint8_t *)0x0) {
        functions_D2NewFunctions_102bf830((int)param_1,(uint8_t *)param_1[0x981]);
        uVar10 = D2Common_10459(local_140);
        piVar15 = (int *)D2Common_10717(param_1[uVar10 + 0x2f]);
        local_13c = piVar15;
        for (; piVar15 != (int *)0x0; piVar15 = (int *)piVar15[0x1f]) {
          uVar23 = D2Common_10826((int)piVar15);
          if ((int)uVar23 == 0xbc) {
            for (piVar9 = (int *)piVar15[0x1d]; piVar9 != (int *)0x0; piVar9 = (int *)piVar9[0x3a])
            {
              if (*piVar9 == 1) {
                switch(piVar9[1]) {
                case 0x45a:
                case 0x45b:
                case 0x474:
                case 0x475:
                  sub_102b0900(param_1,(int)piVar9);
                }
              }
            }
          }
          puVar18 = local_130;
        }
      }
      piVar15 = local_180;
      if (((local_180 == (int *)0x0) || (*local_180 != 0)) || ((char)param_1[0x98a] != '\x01'))
      break;
      *(short *)(local_180[5] + 0x389) = *(short *)(local_180[5] + 0x389) + 1;
      *(short *)(local_180[5] + 0x405) = *(short *)(local_180[5] + 0x405) + 1;
      guard_check_icall();
      if (*(char *)((int)param_1 + 0x2629) != '\x02') break;
      *(short *)(piVar15[5] + 0x38b) = *(short *)(piVar15[5] + 0x38b) + 1;
      *(short *)(piVar15[5] + 0x407) = *(short *)(piVar15[5] + 0x407) + 1;
      *(uint *)(piVar15[5] + 0x375) = *(uint *)(piVar15[5] + 0x375) | 8;
      *(uint *)(piVar15[5] + 0x1b0) = *(uint *)(piVar15[5] + 0x1b0) | 0x100;
      *(uint *)(piVar15[5] + 0x1bc) = *(uint *)(piVar15[5] + 0x1bc) | 0x100;
      goto LAB_102c1a5a;
    case (int *)0x47c:
      if (param_1[0x77d] == 0x22) {
        if ((local_180 != (int *)0x0) && (*local_180 == 0)) {
          *(short *)(local_180[5] + 0x39d) = *(short *)(local_180[5] + 0x39d) + 1;
          *(short *)(local_180[5] + 0x419) = *(short *)(local_180[5] + 0x419) + 1;
        }
        piVar15 = sub_102db070((int)param_1,0x6d,(uint)*(ushort *)(puVar18[0xb] + 2),
                               (uint)*(ushort *)(puVar18[0xb] + 6),0x248,2);
        piVar9 = sub_102db1e0((int)param_1,0xc2,0,0x24b,2,0,0xfffffffb,0xfffffffb);
        sub_102db500((int)param_1,(int)piVar15,(uint)piVar9,1);
        local_30 = 0x2070706c;
        goto LAB_102c32fa;
      }
      break;
    case (int *)0x48e:
      if (param_1[0x77d] == 0x22) {
        if (puVar18 == (uint *)param_1[0x981]) {
          param_1[0x981] = 0;
        }
        if ((local_180 != (int *)0x0) && (*local_180 == 0)) {
          *(short *)(local_180[5] + 0x39d) = *(short *)(local_180[5] + 0x39d) + 1;
          *(short *)(local_180[5] + 0x419) = *(short *)(local_180[5] + 0x419) + 1;
        }
        sub_102db2f0((int)param_1,(int *)puVar18,(int *)(uint)*(ushort *)(puVar18[0xb] + 2),
                     (uint)*(ushort *)(puVar18[0xb] + 6),0x6d,0x24a);
        local_30 = 0x786f626c;
        goto LAB_102c32fa;
      }
      break;
    case (int *)0x496:
      if (param_1[0x77d] == 0x23) {
        if ((local_180 != (int *)0x0) && (*local_180 == 0)) {
          *(short *)(local_180[5] + 0x39d) = *(short *)(local_180[5] + 0x39d) + 1;
          *(short *)(local_180[5] + 0x419) = *(short *)(local_180[5] + 0x419) + 1;
        }
        sub_102db2f0((int)param_1,(int *)puVar18,(int *)(uint)*(ushort *)(puVar18[0xb] + 2),
                     (uint)*(ushort *)(puVar18[0xb] + 6),0x6d,0x24a);
        iVar11 = local_18c;
        if (local_18c == 0) {
          ExceptionList = local_10;
          return 0;
        }
        uVar23 = D2Common_10331((int *)puVar18);
        local_130 = (uint *)uVar23;
        if (local_130 == (uint *)0x0) {
          ExceptionList = local_10;
          return 0;
        }
        local_154 = 0;
        do {
          local_134 = 0x28;
          local_13c = (int *)0x0;
          do {
            local_134 = local_134 - 1;
            if ((int)local_134 < 1) {
              ExceptionList = local_10;
              return 0;
            }
            uVar10 = rand();
            local_190 = (int *)(uVar10 % *(uint *)(iVar11 + 0xc28));
            local_148 = (int)local_190 * 0x14c + *(int *)(iVar11 + 0xc24);
          } while ((((local_148 == 0) ||
                    (iVar22 = D2Common_10450(*(uint *)(local_148 + 0x28),&local_13c), iVar22 == 0))
                   || (*(char *)(iVar22 + 0x138) == '\0')) ||
                  (((*(int *)(local_148 + 0x2c) == 0 || (*(int *)(local_148 + 0x30) == 0)) ||
                   (0x62 < (ushort)(*(short *)(local_148 + 0x34) - 1U)))));
          uVar23 = functions_HelperFunctions_102d1a80((int)param_1,(uint)local_190,0);
          local_1c._4_4_ = (int *)sub_102eef00(extraout_ECX_00,(int)((ulonglong)uVar23 >> 0x20));
          if (local_1c._4_4_ != (int *)0x0) {
            functions_HelperFunctions_102d3050(local_1c._4_4_);
            D2Common_10977(local_1c._4_4_,0x10,0);
            local_138 = (int *)0x0;
            local_34 = (uint *)0x0;
            functions_HelperFunctions_102cfc20((int *)puVar18,(uint *)&local_138,(uint *)&local_34,&local_34);
            if (((local_130 != (uint *)0x0) && (0 < (int)local_138)) && (0 < (int)local_34)) {
              iVar22 = functions_ItemFunctions_102dab80(&local_130,(int *)&local_138,(int *)&local_34,1,0x805,0);
              if ((iVar22 != 0) &&
                 (iVar22 = functions_ItemFunctions_102dac30(&local_130,(int *)&local_138,(int *)&local_34,2,0x805,7,0),
                 iVar22 == 0)) {
                ExceptionList = local_10;
                return 0;
              }
              iVar22 = functions_ItemFunctions_102daae0((int *)&local_130,(uint *)&local_138,(uint *)&local_34,1);
              if (iVar22 == 0) {
                ExceptionList = local_10;
                return 0;
              }
              sub_102ee060(this_00);
            }
          }
          local_154 = local_154 + 1;
        } while (local_154 < 3);
      }
      break;
    case (int *)0x49f:
    case (int *)0x4a0:
    case (int *)0x4a1:
    case (int *)0x4a2:
    case (int *)0x4a3:
    case (int *)0x4a4:
    case (int *)0x4a5:
      if (param_1[0x77d] != 0x14) break;
      *(char *)((int)param_1 + 0x262b) = *(char *)((int)param_1 + 0x262b) + '\x01';
      local_34 = (uint *)functions_HelperFunctions_102d15e0((int)param_1,(int)puVar18);
      uVar10 = functions_HelperFunctions_102d0fc0(0x419);
      iVar11 = local_18c;
      if (uVar10 < *(uint *)(local_18c + 0x9c0)) {
        sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                     uVar10 * 0x2c + *(int *)(local_18c + 0x9bc),0,(int)local_34,0,0,(int *)0x0,1);
      }
      uVar10 = functions_HelperFunctions_102d0fc0(0x41b);
      if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
        sub_6fc32380((int)param_1,(int *)puVar18,local_180,uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),
                     0,(int)local_34,0,0,(int *)0x0,1);
      }
      uVar10 = functions_HelperFunctions_102d0fc0(0x41a);
      if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
        sub_6fc32380((int)param_1,(int *)puVar18,local_180,uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),
                     0,(int)local_34,0,0,(int *)0x0,1);
      }
      uVar10 = functions_HelperFunctions_102d0fc0(0x41c);
      if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
        sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                     *(int *)(local_18c + 0x9bc) + uVar10 * 0x2c,0,(int)local_34,0,0,(int *)0x0,1);
        sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                     *(int *)(local_18c + 0x9bc) + uVar10 * 0x2c,0,(int)local_34,0,0,(int *)0x0,1);
        iVar11 = local_18c;
      }
      uVar10 = functions_HelperFunctions_102d0fc0(0x41d);
      if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
        sub_6fc32380((int)param_1,(int *)puVar18,local_180,uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),
                     0,(int)local_34,0,0,(int *)0x0,1);
      }
      switch(local_138) {
      default:
        functions_D2NewFunctions_102ce4e0(0x7a657669,(uint8_t *)&local_30);
        functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,2,(int)local_34,(uint32_t *)0x0,
                     (uint32_t *)0x0,0,3,puVar18);
        uVar10 = functions_HelperFunctions_102d0fc0(0x426);
        if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
          sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                       uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,(int)local_34,0,0,(int *)0x0,1);
        }
        uVar10 = functions_HelperFunctions_102d0fc0(0x416);
        if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
          sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                       uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,(int)local_34,0,0,(int *)0x0,1);
        }
        uVar10 = rand();
        uVar10 = uVar10 & 0x80000003;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
        }
        switch(uVar10) {
        default:
          iVar22 = 0x424;
          break;
        case 1:
          uVar10 = functions_HelperFunctions_102d0fc0(0x420);
          if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
            sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                         uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,(int)local_34,0,0,(int *)0x0,1);
          }
          iVar22 = 0x421;
          break;
        case 2:
          uVar10 = functions_HelperFunctions_102d0fc0(0x422);
          if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
            sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                         uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,(int)local_34,0,0,(int *)0x0,1);
          }
          iVar22 = 0x423;
          break;
        case 3:
          iVar22 = 0x425;
          goto LAB_102c3e3f;
        }
        break;
      case (int *)0x4a0:
        functions_D2NewFunctions_102ce4e0(0x61657669,(uint8_t *)&local_30);
        functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,2,(int)local_34,(uint32_t *)0x0,
                     (uint32_t *)0x0,0,3,puVar18);
        uVar10 = functions_HelperFunctions_102d0fc0(0x41e);
        if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
          sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                       uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,(int)local_34,0,0,(int *)0x0,1);
        }
        uVar10 = functions_HelperFunctions_102d0fc0(0x416);
        if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
          sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                       uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,(int)local_34,0,0,(int *)0x0,1);
        }
        uVar10 = functions_HelperFunctions_102d0fc0(0x429);
        if (*(uint *)(iVar11 + 0x9c0) <= uVar10) goto switchD_102c1905_caseD_2c6;
        sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                     *(int *)(local_18c + 0x9bc) + uVar10 * 0x2c,0,(int)local_34,0,0,(int *)0x0,1);
        iVar11 = *(int *)(local_18c + 0x9bc) + uVar10 * 0x2c;
        goto LAB_102c3e96;
      case (int *)0x4a1:
        functions_D2NewFunctions_102ce4e0(0x62657669,(uint8_t *)&local_30);
        functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,2,(int)local_34,(uint32_t *)0x0,
                     (uint32_t *)0x0,0,3,puVar18);
        uVar10 = functions_HelperFunctions_102d0fc0(0x42a);
        if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
          sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                       uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,(int)local_34,0,0,(int *)0x0,1);
        }
        uVar10 = functions_HelperFunctions_102d0fc0(0x418);
        if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
          sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                       uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,(int)local_34,0,0,(int *)0x0,1);
        }
        iVar22 = rand();
        iVar22 = iVar22 % 3;
        if (iVar22 != 0) {
          if (iVar22 == 1) {
            uVar10 = functions_HelperFunctions_102d0fc0(0x42b);
            if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
              sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                           *(int *)(local_18c + 0x9bc) + uVar10 * 0x2c,0,(int)local_34,0,0,
                           (int *)0x0,1);
              sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                           *(int *)(local_18c + 0x9bc) + uVar10 * 0x2c,0,(int)local_34,0,0,
                           (int *)0x0,1);
            }
          }
          else {
            if (iVar22 != 2) goto LAB_102c39fb;
            uVar10 = functions_HelperFunctions_102d0fc0(0x42f);
            if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
              sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                           *(int *)(local_18c + 0x9bc) + uVar10 * 0x2c,0,(int)local_34,0,0,
                           (int *)0x0,1);
              sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                           *(int *)(local_18c + 0x9bc) + uVar10 * 0x2c,0,(int)local_34,0,0,
                           (int *)0x0,1);
            }
          }
          goto switchD_102c1905_caseD_2c6;
        }
LAB_102c39fb:
        iVar22 = 0x435;
        break;
      case (int *)0x4a2:
        functions_D2NewFunctions_102ce4e0(0x64657669,(uint8_t *)&local_30);
        functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,2,(int)local_34,(uint32_t *)0x0,
                     (uint32_t *)0x0,0,3,puVar18);
        uVar10 = functions_HelperFunctions_102d0fc0(0x436);
        if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
          sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                       uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,(int)local_34,0,0,(int *)0x0,1);
        }
        uVar10 = functions_HelperFunctions_102d0fc0(0x416);
        if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
          sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                       uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,(int)local_34,0,0,(int *)0x0,1);
        }
        iVar22 = 0x437;
LAB_102c3e3f:
        uVar10 = functions_HelperFunctions_102d0fc0(iVar22);
        if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
          sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                       uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,(int)local_34,0,0,(int *)0x0,1);
        }
        iVar22 = 0x41f;
        break;
      case (int *)0x4a3:
        functions_D2NewFunctions_102ce4e0(0x6e657669,(uint8_t *)&local_30);
        functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,2,(int)local_34,(uint32_t *)0x0,
                     (uint32_t *)0x0,0,3,puVar18);
        uVar10 = functions_HelperFunctions_102d0fc0(0x41e);
        if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
          sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                       uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,(int)local_34,0,0,(int *)0x0,1);
        }
        uVar10 = functions_HelperFunctions_102d0fc0(0x417);
        if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
          sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                       uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,(int)local_34,0,0,(int *)0x0,1);
        }
        uVar10 = functions_HelperFunctions_102d0fc0(0x438);
        if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
          sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                       uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,(int)local_34,0,0,(int *)0x0,1);
        }
        iVar22 = 0x439;
        break;
      case (int *)0x4a4:
        functions_D2NewFunctions_102ce4e0(0x70657669,(uint8_t *)&local_30);
        functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,2,(int)local_34,(uint32_t *)0x0,
                     (uint32_t *)0x0,0,3,puVar18);
        uVar10 = functions_HelperFunctions_102d0fc0(0x41e);
        if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
          sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                       uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,(int)local_34,0,0,(int *)0x0,1);
        }
        uVar10 = functions_HelperFunctions_102d0fc0(0x418);
        if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
          sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                       uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,(int)local_34,0,0,(int *)0x0,1);
        }
        uVar10 = functions_HelperFunctions_102d0fc0(0x43d);
        if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
          sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                       uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,(int)local_34,0,0,(int *)0x0,1);
        }
        iVar22 = 0x43e;
        break;
      case (int *)0x4a5:
        functions_D2NewFunctions_102ce4e0(0x73657669,(uint8_t *)&local_30);
        functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,2,(int)local_34,(uint32_t *)0x0,
                     (uint32_t *)0x0,0,3,puVar18);
        uVar10 = functions_HelperFunctions_102d0fc0(0x426);
        if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
          sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                       uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,(int)local_34,0,0,(int *)0x0,1);
        }
        uVar10 = functions_HelperFunctions_102d0fc0(0x417);
        if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
          sub_6fc32380((int)param_1,(int *)puVar18,local_180,
                       uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,(int)local_34,0,0,(int *)0x0,1);
        }
        uVar10 = rand();
        uVar10 = uVar10 & 0x80000001;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
        }
        if ((uVar10 != 0) && (uVar10 == 1)) {
          iVar22 = 0x43b;
          goto LAB_102c3e3f;
        }
        iVar22 = 0x43a;
      }
      uVar10 = functions_HelperFunctions_102d0fc0(iVar22);
      if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
        iVar11 = uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc);
LAB_102c3e96:
        sub_6fc32380((int)param_1,(int *)puVar18,local_180,iVar11,0,(int)local_34,0,0,(int *)0x0,1);
      }
      break;
    case (int *)0x4aa:
      uVar23 = D2Common_10331((int *)puVar18);
      iVar11 = local_18c;
      if ((int)uVar23 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      local_1c._4_4_ = (int *)0x0;
      do {
        uVar10 = rand();
        local_130 = (uint *)(uVar10 % *(uint *)(iVar11 + 0xc28));
        iVar22 = 0x14;
        while ((((iVar19 = (int)local_130 * 0x14c + *(int *)(iVar11 + 0xc24), iVar19 == 0 ||
                 (*(int *)(iVar19 + 0x2c) == 0)) || (*(int *)(iVar19 + 0x30) == 0)) ||
               ((*(ushort *)(iVar19 + 0x34) == 0 || (99 < *(ushort *)(iVar19 + 0x34)))))) {
          local_148 = iVar22 + -1;
          if (local_148 < 1) {
            ExceptionList = local_10;
            return 0;
          }
          uVar10 = rand();
          local_130 = (uint *)(uVar10 % *(uint *)(iVar11 + 0xc28));
          iVar22 = local_148;
        }
        local_13c = (int *)0x0;
        D2Common_10450(*(uint *)(iVar19 + 0x28),&local_13c);
        functions_HelperFunctions_102d1a80((int)param_1,(uint)local_130,0);
        functions_D2NewFunctions_102c89d0((int)puVar18,(int)param_1,(uint)local_13c,7,(int)local_130 + 1,4);
        local_1c._4_4_ = (int *)((int)local_1c._4_4_ + 1);
      } while ((int)local_1c._4_4_ < 3);
      break;
    case (int *)0x4ab:
    case (int *)0x4ac:
      iVar11 = functions_HelperFunctions_102ce660(puVar18[1]);
      if ((uint)*(ushort *)(iVar11 + 0x96) < *(uint *)(local_18c + 0x9c0)) {
        sub_6fcaea80((int)param_1,(int *)puVar18,7,param_1[0x2a] + 1,0x102c9030,0x3c,
                     (uint)*(ushort *)(iVar11 + 0x96));
      }
    }
    goto switchD_102c1905_caseD_2c6;
  }
  if (local_138 == (int *)0x3dd) {
switchD_102c269a_caseD_3de:
    if ((param_1[0x77d] != 0x2c) || (uVar10 = param_1[0x98a], (uVar10 & 0x110) != 0x10))
    goto switchD_102c1905_caseD_2c6;
    if (local_138 == (int *)0x3dd) {
      uVar10 = uVar10 | 0x20;
LAB_102c28d3:
      param_1[0x98a] = uVar10;
    }
    else {
      if (local_138 == (int *)0x3de) {
        uVar10 = uVar10 | 0x40;
        goto LAB_102c28d3;
      }
      if (local_138 == (int *)0x3df) {
        uVar10 = uVar10 | 0x80;
        goto LAB_102c28d3;
      }
    }
    uVar13 = uVar10 >> 1 & 1;
    uVar12 = uVar13 + 1;
    if ((uVar10 & 4) == 0) {
      uVar12 = uVar13;
    }
    uVar20 = uVar10 >> 5 & 1;
    uVar13 = uVar20 + 1;
    if ((uVar10 & 0x40) == 0) {
      uVar13 = uVar20;
    }
    local_134 = uVar13 + 1;
    if ((uVar10 & 0x80) == 0) {
      local_134 = uVar13;
    }
    uVar13 = uVar12 + 1;
    if ((uVar10 & 8) == 0) {
      uVar13 = uVar12;
    }
    puVar18 = local_130;
    if (uVar13 <= local_134) {
      iVar11 = 0;
      param_1[0x98a] = uVar10 | 0x100;
      puVar21 = (uint *)(param_1 + 0x548);
LAB_102c2942:
      local_13c = (int *)*puVar21;
      if (((local_13c == (int *)0x0) || (*local_13c != 2)) || (local_13c[1] != 0x250))
      goto LAB_102c295c;
      uVar10 = functions_HelperFunctions_102d0fc0(0x3b6);
      iVar11 = rand();
      piVar15 = local_13c;
      sub_6fcaea80((int)param_1,local_13c,7,param_1[0x2a] + 1,0x102c90f0,
                   iVar11 % (int)(local_134 * 6 + 4) + (local_134 * 3 + 2) * 4,uVar10);
      local_30 = 0x20647473;
      puVar18 = puVar17;
      for (uVar10 = local_134; uVar10 != 0; uVar10 = uVar10 - 1) {
        functions_D2NewFunctions_102c5510((int)param_1,piVar15,&local_30,7,0x82,(uint32_t *)0x0,(uint32_t *)0x0,0,3,
                     uVar10);
        puVar18 = local_130;
      }
LAB_102c2a01:
      piVar15 = local_180;
      local_138 = (int *)0x4e4d;
      local_144 = (int *)0x3705;
      uVar23 = sub_102daf10((int)param_1,0x4e4d,0x3705,0xa8);
      local_1c._4_4_ = (int *)uVar23;
      if (local_1c._4_4_ == (int *)0x0) {
        ExceptionList = local_10;
        return 0;
      }
      iVar11 = functions_ItemFunctions_102daae0((uint32_t *)((int)&local_1c + 4),(uint *)&local_138,(uint *)&local_144
                            ,1);
      if (((iVar11 != 0) &&
          (sub_102db2f0((int)param_1,(int *)puVar18,local_138,(uint)local_144,0x6d,0x24a),
          piVar15 != (int *)0x0)) && ((*piVar15 == 0 && (local_134 == 3)))) {
        *(short *)(piVar15[5] + 0x38f) = *(short *)(piVar15[5] + 0x38f) + 1;
        *(short *)(piVar15[5] + 0x40b) = *(short *)(piVar15[5] + 0x40b) + 1;
        guard_check_icall();
      }
    }
    goto switchD_102c1905_caseD_2c6;
  }
  if (local_138 < (int *)0x2c1) {
    if (local_138 == (int *)0x2c0) {
      param_1[0x98a] = param_1[0x98a] | 0x10;
      uVar10 = param_1[0x98a];
      goto LAB_102c201f;
    }
    if (local_138 < (int *)0xf3) {
      if (local_138 == (int *)0xf2) {
        if ((local_180 != (int *)0x0) && (*local_180 == 0)) {
          *(short *)(local_180[5] + 0x395) = *(short *)(local_180[5] + 0x395) + 1;
          *(short *)(local_180[5] + 0x411) = *(short *)(local_180[5] + 0x411) + 1;
          guard_check_icall();
        }
        if (*(char *)((int)param_1 + 0x6d) == '\x02') {
          local_30 = 0x6f736364;
          uVar10 = functions_D2NewFunctions_102c5d10((int *)puVar18);
          uVar10 = uVar10 % 0x38;
          goto joined_r0x102c18d0;
        }
      }
      else if (local_138 == (int *)0x9c) {
        if ((local_180 != (int *)0x0) && (*local_180 == 0)) {
          *(short *)(local_180[5] + 0x391) = *(short *)(local_180[5] + 0x391) + 1;
          *(short *)(local_180[5] + 0x40d) = *(short *)(local_180[5] + 0x40d) + 1;
          guard_check_icall();
        }
      }
      else if (((local_138 == (int *)0xd3) && (local_180 != (int *)0x0)) && (*local_180 == 0)) {
        *(short *)(local_180[5] + 0x393) = *(short *)(local_180[5] + 0x393) + 1;
        *(short *)(local_180[5] + 0x40f) = *(short *)(local_180[5] + 0x40f) + 1;
        guard_check_icall();
      }
    }
    else if (local_138 == (int *)0xf3) {
      if ((local_180 != (int *)0x0) && (*local_180 == 0)) {
        *(short *)(local_180[5] + 0x397) = *(short *)(local_180[5] + 0x397) + 1;
        *(short *)(local_180[5] + 0x413) = *(short *)(local_180[5] + 0x413) + 1;
        guard_check_icall();
      }
      if (*(char *)((int)param_1 + 0x6d) == '\x02') {
        local_30 = 0x6f736364;
        uVar10 = functions_D2NewFunctions_102c5d10((int *)puVar18);
        uVar10 = uVar10 % 0x15;
joined_r0x102c18d0:
        if (uVar10 == 0) goto LAB_102c32fa;
      }
    }
    else if (local_138 == (int *)0x220) {
      if ((local_180 != (int *)0x0) && (*local_180 == 0)) {
        *(short *)(local_180[5] + 0x399) = *(short *)(local_180[5] + 0x399) + 1;
        *(short *)(local_180[5] + 0x415) = *(short *)(local_180[5] + 0x415) + 1;
        guard_check_icall();
      }
      if (*(char *)((int)param_1 + 0x6d) == '\x02') {
        local_30 = 0x6f736364;
        uVar10 = functions_D2NewFunctions_102c5d10((int *)puVar18);
        uVar10 = uVar10 % 0xd;
        goto joined_r0x102c18d0;
      }
    }
    goto switchD_102c1905_caseD_2c6;
  }
  switch(local_138) {
  case (int *)0x2c1:
  case (int *)0x2c5:
    uVar10 = param_1[0x98a];
    if (local_138 == (int *)0x2c1) {
      uVar10 = uVar10 | 0x20;
    }
    else {
      if (local_138 != (int *)0x2c5) goto LAB_102c201f;
      uVar10 = uVar10 | 0x40;
    }
    param_1[0x98a] = uVar10;
LAB_102c201f:
    if (((byte)uVar10 & 0x70) == 0x70) {
      local_30 = 0x20326d63;
      functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,7,0x82,(uint32_t *)0x0,(uint32_t *)0x0,
                   0,3,puVar18);
      local_30 = 0x6f686364;
      functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,7,0x82,(uint32_t *)0x0,(uint32_t *)0x0,
                   0,3,puVar18);
      if ((piVar15 != (int *)0x0) && (*piVar15 == 0)) {
        *(short *)(piVar15[5] + 0x38d) = *(short *)(piVar15[5] + 0x38d) + 1;
        *(short *)(piVar15[5] + 0x409) = *(short *)(piVar15[5] + 0x409) + 1;
        guard_check_icall();
      }
      iVar11 = 0x3c;
      uVar10 = 0x6d;
      goto LAB_102c31bf;
    }
    break;
  case (int *)0x2c2:
    local_30 = 0x2072626d;
    goto LAB_102c32fa;
  case (int *)0x2c3:
    local_30 = 0x206e6864;
    goto LAB_102c32fa;
  case (int *)0x2c4:
    local_30 = 0x20796562;
LAB_102c32fa:
    functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,7,0x82,(uint32_t *)0x0,(uint32_t *)0x0,0,
                 3,puVar18);
    break;
  case (int *)0x2e7:
    if (puVar18 == (uint *)param_1[0x980]) {
      param_1[0x980] = 0;
      if ((param_1[0x77d] == 9) && ((char)param_1[0x98a] == '\x01')) {
        *(uint8_t *)(param_1 + 0x98a) = 2;
      }
      piVar15 = (int *)param_1[0x981];
      if ((piVar15 != (int *)0x0) && (*piVar15 == 2)) {
        functions_HelperFunctions_102d20e0((int)param_1,piVar15);
        param_1[0x981] = 0;
      }
      piVar15 = (int *)param_1[0x982];
      if ((piVar15 != (int *)0x0) && (*piVar15 == 2)) {
        functions_HelperFunctions_102d20e0((int)param_1,piVar15);
        param_1[0x982] = 0;
      }
      piVar15 = (int *)param_1[0x983];
      if ((piVar15 != (int *)0x0) && (*piVar15 == 2)) {
        functions_HelperFunctions_102d20e0((int)param_1,piVar15);
        param_1[0x983] = 0;
      }
      piVar15 = (int *)param_1[0x984];
      if ((piVar15 != (int *)0x0) && (*piVar15 == 2)) {
        functions_HelperFunctions_102d20e0((int)param_1,piVar15);
        param_1[0x984] = 0;
      }
      piVar15 = (int *)param_1[0x985];
      if ((piVar15 != (int *)0x0) && (*piVar15 == 2)) {
        functions_HelperFunctions_102d20e0((int)param_1,piVar15);
        param_1[0x985] = 0;
      }
      piVar15 = (int *)param_1[0x986];
      if ((piVar15 != (int *)0x0) && (*piVar15 == 2)) {
        functions_HelperFunctions_102d20e0((int)param_1,piVar15);
        param_1[0x986] = 0;
      }
      piVar15 = (int *)param_1[0x987];
      if ((piVar15 != (int *)0x0) && (*piVar15 == 2)) {
        functions_HelperFunctions_102d20e0((int)param_1,piVar15);
        param_1[0x987] = 0;
      }
    }
    break;
  case (int *)0x315:
    sub_102db2f0((int)param_1,(int *)puVar18,(int *)(uint)*(ushort *)(puVar18[0xb] + 2),
                 (uint)*(ushort *)(puVar18[0xb] + 6),0x6d,0x24a);
    local_30 = 0x20316d63;
    functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,7,0x82,(uint32_t *)0x0,(uint32_t *)0x0,0,
                 3,puVar18);
    if ((*(char *)((int)param_1 + 0x2629) == '\0') ||
       (uVar10 = functions_D2NewFunctions_102c5d10((int *)puVar18), uVar10 % 200 != 0)) goto switchD_102c1983_default;
    uVar10 = functions_D2NewFunctions_102c5d10((int *)puVar18);
    switch(uVar10 % 5) {
    case 0:
      local_30 = 0x20627475;
      break;
    case 1:
      functions_ItemFunctions_102d5980((int)param_1,(int *)puVar18,0x192,0x83,3,0,0);
      goto switchD_102c1983_default;
    case 2:
      local_30 = 0x20687475;
      break;
    case 3:
      local_30 = 0x20727137;
      break;
    case 4:
      local_30 = 0x20736237;
      break;
    default:
      goto switchD_102c1983_default;
    }
    functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,7,0x83,(uint32_t *)0x0,(uint32_t *)0x0,0,
                 3,puVar18);
switchD_102c1983_default:
    if (((piVar15 != (int *)0x0) && (*piVar15 == 0)) && ((char)param_1[0x98a] == '\x01')) {
      *(short *)(piVar15[5] + 0x381) = *(short *)(piVar15[5] + 0x381) + 1;
      *(short *)(piVar15[5] + 0x3fd) = *(short *)(piVar15[5] + 0x3fd) + 1;
      guard_check_icall();
      if (*(char *)((int)param_1 + 0x2629) == '\x02') {
        *(short *)(piVar15[5] + 899) = *(short *)(piVar15[5] + 899) + 1;
        *(short *)(piVar15[5] + 0x3ff) = *(short *)(piVar15[5] + 0x3ff) + 1;
        *(uint *)(piVar15[5] + 0x375) = *(uint *)(piVar15[5] + 0x375) | 1;
        *(uint *)(piVar15[5] + 0x1b0) = *(uint *)(piVar15[5] + 0x1b0) | 8;
        *(uint *)(piVar15[5] + 0x1bc) = *(uint *)(piVar15[5] + 0x1bc) | 8;
LAB_102c1a5a:
        functions_HelperFunctions_102d2540(piVar15);
      }
    }
    break;
  case (int *)0x371:
    goto switchD_102c1905_caseD_371;
  case (int *)0x397:
    if ((param_1[0x77d] == 0xc) && (param_1[0x98a] == 1)) {
      uVar23 = D2Common_10331((int *)puVar18);
      uVar23 = D2Common_10826((int)uVar23);
      local_144 = (int *)uVar23;
      local_138 = (int *)0x0;
      local_34 = (uint *)0x0;
      local_134 = 0;
      sub_1020f410(&local_1c);
      sub_1020f960(&local_1c);
      local_8 = 0;
      if (bVar4) {
        local_138 = (int *)0x3;
        local_34 = (uint *)0x2;
        local_134 = 1;
        sub_102280a0(&DAT_104e30b4,&local_148);
        functions_D2ServerFunctions_1026cd50(&DAT_104e30b4,&local_190);
        functions_D2NewFunctions_102cbfe0(&local_1c);
        sub_102280a0(&DAT_104e31e4,&local_148);
        functions_D2ServerFunctions_1026cd50(&DAT_104e31e4,&local_190);
        functions_D2NewFunctions_102cbfe0(&local_1c);
      }
      if (bVar5) {
        local_138 = (int *)0x1;
        local_34 = (uint *)0x3;
        local_134 = 2;
        sub_102280a0(&DAT_104e31e4,&local_148);
        functions_D2ServerFunctions_1026cd50(&DAT_104e31e4,&local_190);
        functions_D2NewFunctions_102cbfe0(&local_1c);
        sub_102280a0(&DAT_104e30a4,&local_148);
        functions_D2ServerFunctions_1026cd50(&DAT_104e30a4,&local_190);
        functions_D2NewFunctions_102cbfe0(&local_1c);
      }
      if (local_1a4 != (int *)0x0) {
        local_138 = (int *)0x1;
        local_34 = (uint *)0x2;
        local_134 = 3;
        sub_102280a0(&DAT_104e30a4,&local_148);
        functions_D2ServerFunctions_1026cd50(&DAT_104e30a4,&local_190);
        functions_D2NewFunctions_102cbfe0(&local_1c);
      }
      uVar23 = sub_102bacf0(&local_1c);
      if ((int)uVar23 != 0) {
        uVar24 = sub_102bacf0(&local_1c);
        uVar10 = rand();
        uVar23 = functions_D2ServerFunctions_1026cd50(&local_1c,&local_148);
        piVar15 = sub_102bad60(&local_190,(int)((ulonglong)uVar10 % (uVar24 & 0xffffffff)),
                               *(uint32_t *)uVar23);
        puVar17 = (uint *)sub_1025f2f0(piVar15);
        piVar9 = local_144;
        piVar15 = (int *)*puVar17;
        while (piVar15 == piVar9) {
          uVar24 = sub_102bacf0(&local_1c);
          uVar10 = rand();
          uVar23 = functions_D2ServerFunctions_1026cd50(&local_1c,&local_148);
          piVar15 = sub_102bad60(&local_190,(int)((ulonglong)uVar10 % (uVar24 & 0xffffffff)),
                                 *(uint32_t *)uVar23);
          puVar18 = (uint *)sub_1025f2f0(piVar15);
          piVar15 = (int *)*puVar18;
          puVar18 = local_130;
        }
        if (piVar15 != (int *)0x0) {
          uVar2 = *(ushort *)(param_1 + 0x9bc);
          local_150 = CONCAT44(0xa000a,(uint32_t)local_150);
          param_1[(uint)uVar2 * 2 + 0x98c] = 0xa000a;
          param_1[(uint)uVar2 * 2 + 0x98d] = (int)piVar15;
          *(ushort *)(param_1 + 0x9bc) = uVar2 + 1;
          sub_102dc520((int)param_1,(uint)piVar15,0);
          puVar17 = (uint *)sub_102db2f0((int)param_1,(int *)puVar18,(int *)0x0,0,(uint)piVar15,0x3c
                                        );
          uVar23 = D2Common_10331((int *)puVar17);
          uVar23 = D2Common_10826((int)uVar23);
          functions_HelperFunctions_102d0dd0((int)param_1,0x9fc,puVar17,(int)uVar23);
          param_1[0x98a] = param_1[0x98a] + 1;
        }
      }
      iVar11 = rand();
      if (iVar11 % 10 < 1) {
        functions_HelperFunctions_102d2ea0((int)param_1,(int *)puVar18);
      }
      local_130 = (uint *)functions_HelperFunctions_102d15e0((int)param_1,(int)puVar18);
      uVar10 = functions_HelperFunctions_102d0fc0(0x36);
      piVar15 = local_180;
      if ((uVar10 < *(uint *)(local_18c + 0x9c0)) &&
         (local_13c = (int *)(uVar10 * 0x2c + *(int *)(local_18c + 0x9bc)), local_138 != (int *)0x0)
         ) {
        do {
          sub_6fc32380((int)param_1,(int *)puVar18,piVar15,(int)local_13c,0,(int)local_130,0,0,
                       (int *)0x0,1);
          local_138 = (int *)((int)local_138 + -1);
        } while (local_138 != (int *)0x0);
        local_138 = (int *)0x0;
      }
      iVar11 = local_18c;
      uVar10 = functions_HelperFunctions_102d0fc0(0x37);
      piVar15 = local_180;
      if ((uVar10 < *(uint *)(iVar11 + 0x9c0)) &&
         (local_13c = (int *)(uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc)), local_34 != (uint *)0x0)) {
        do {
          sub_6fc32380((int)param_1,(int *)puVar18,piVar15,(int)local_13c,0,(int)local_130,0,0,
                       (int *)0x0,1);
          local_34 = (uint *)((int)local_34 - 1);
        } while (local_34 != (uint *)0x0);
        local_34 = (uint *)0x0;
        iVar11 = local_18c;
      }
      uVar10 = functions_HelperFunctions_102d0fc0(0x38);
      piVar15 = local_180;
      if (uVar10 < *(uint *)(iVar11 + 0x9c0)) {
        local_13c = (int *)(uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc));
        for (; local_134 != 0; local_134 = local_134 - 1) {
          sub_6fc32380((int)param_1,(int *)puVar18,piVar15,(int)local_13c,0,(int)local_130,0,0,
                       (int *)0x0,1);
        }
      }
      local_8 = 0xffffffff;
      thunk_FUN_1020f8e0(&local_1c);
    }
    break;
  case (int *)0x3a5:
    if ((param_1[0x77d] == 0x2b) && (*(byte *)((int)param_1 + 0x262a) < 4)) {
      *(uint8_t *)((int)param_1 + 0x262a) = 4;
      piVar15 = sub_102db070((int)param_1,0xa2,0x47d3,0x394b,0x249,2);
      uVar10 = 0xa3;
LAB_102c1c14:
      piVar9 = sub_102db1e0((int)param_1,uVar10,0,0x24b,2,1,0,0);
      sub_102db500((int)param_1,(int)piVar15,(uint)piVar9,1);
    }
    break;
  case (int *)0x3a6:
    if ((param_1[0x77d] == 0x2b) && (*(byte *)((int)param_1 + 0x262a) < 2)) {
      *(uint8_t *)((int)param_1 + 0x262a) = 2;
      piVar15 = sub_102db070((int)param_1,0xa1,0x476c,0x35bf,0x249,2);
      uVar10 = 0xa2;
      goto LAB_102c1c14;
    }
    break;
  case (int *)0x3a7:
  case (int *)0x3a8:
    if (param_1[0x77d] == 0x2b) {
      if (*(char *)((int)param_1 + 0x262a) == '\x05') {
        piVar15 = param_1 + 0x4c8;
        *(uint8_t *)((int)param_1 + 0x262a) = 6;
        local_130 = (uint *)0x80;
        do {
          piVar9 = (int *)*piVar15;
          if ((piVar9 != (int *)0x0) && (*piVar9 == 1)) {
            if (piVar9[1] == 0x3a8) {
              iVar11 = piVar9[4];
            }
            else {
              if (piVar9[1] != 0x3a7) goto LAB_102c1d95;
              iVar11 = piVar9[4];
            }
            if ((iVar11 != 0xc) && (local_13c = (int *)functions_HelperFunctions_102ce5a0(0x1e5), local_13c != (int *)0x0)
               ) {
              local_15c = 0;
              local_174 = 0x1e5;
              local_170 = 1;
              local_17c = puVar18;
              local_178 = piVar9;
              uVar23 = D2Common_10786((uint)puVar18,local_13c[0x18],0x1e5,1);
              piVar9 = local_13c;
              local_16c = (uint32_t)uVar23;
              local_168 = (int)(short)local_13c[0x15];
              uVar23 = D2Common_10786((uint)puVar18,local_13c[0x1a],0x1e5,1);
              local_164 = (uint32_t)uVar23;
              local_160 = (uint)*(ushort *)((int)piVar9 + 0x82);
              functions_D2NewFunctions_102bfe20(&local_17c,puVar18,piVar9,piVar15);
            }
          }
LAB_102c1d95:
          piVar15 = piVar15 + 1;
          local_130 = (uint *)((int)local_130 + -1);
        } while (local_130 != (uint *)0x0);
        local_130 = (uint *)0x0;
        param_1 = local_1c._4_4_;
      }
      else if (*(char *)((int)param_1 + 0x262a) == '\x06') {
        *(uint8_t *)((int)param_1 + 0x262a) = 7;
        piVar15 = param_1 + 0x4c8;
        local_130 = (uint *)0x80;
        do {
          piVar9 = (int *)*piVar15;
          if (((piVar9 != (int *)0x0) && (*piVar9 == 1)) &&
             ((piVar9[4] != 0xc &&
              ((((((iVar11 = piVar9[1], iVar11 == 0x3c8 || (iVar11 == 0x3c9)) || (iVar11 == 0x452))
                 || ((iVar11 == 0x453 || (iVar11 == 0x3a9)))) || (iVar11 == 0x3aa)) ||
               (iVar11 == 0x3ab)))))) {
            sub_102b0900(param_1,(int)puVar18);
          }
          piVar15 = piVar15 + 1;
          local_130 = (uint *)((int)local_130 + -1);
        } while (local_130 != (uint *)0x0);
        sub_102db2f0((int)param_1,(int *)puVar18,(int *)(uint)*(ushort *)(puVar18[0xb] + 2),
                     (uint)*(ushort *)(puVar18[0xb] + 6),0x6d,0x24a);
        local_30 = 0x73737763;
        functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,7,0x82,(uint32_t *)0x0,
                     (uint32_t *)0x0,0,3,puVar18);
        local_19d = *(byte *)((int)param_1 + 0x2629);
        uVar10 = (uint)local_19d;
        uVar12 = functions_D2NewFunctions_102c5d10((int *)puVar18);
        if (uVar12 % (uVar10 * -6 + 0x32) == 0) {
          uVar10 = functions_D2NewFunctions_102c5d10((int *)puVar18);
          uVar10 = uVar10 % 3;
          if (uVar10 == 0) {
            local_30 = 0x20646972;
          }
          else if (uVar10 == 1) {
            local_30 = 0x20707472;
          }
          else {
            if (uVar10 != 2) goto LAB_102c1efa;
            local_30 = 0x79656b72;
          }
          functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,7,0x83,(uint32_t *)0x0,
                       (uint32_t *)0x0,0,3,puVar18);
        }
LAB_102c1efa:
        if ((local_19d != 0) && (uVar10 = functions_D2NewFunctions_102c5d10((int *)puVar18), uVar10 % 200 == 0)) {
          uVar10 = functions_D2NewFunctions_102c5d10((int *)puVar18);
          uVar10 = uVar10 % 3;
          if (uVar10 == 0) {
            local_30 = 0x206d6172;
          }
          else if (uVar10 == 1) {
            local_30 = 0x20726172;
          }
          else {
            if (uVar10 != 2) goto LAB_102c1f67;
            local_30 = 0x20656272;
          }
          functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,7,0x83,(uint32_t *)0x0,
                       (uint32_t *)0x0,0,3,puVar18);
        }
LAB_102c1f67:
        piVar15 = local_180;
        if (((local_180 != (int *)0x0) && (*local_180 == 0)) && ((char)param_1[0x98a] == '\x01')) {
          *(short *)(local_180[5] + 0x385) = *(short *)(local_180[5] + 0x385) + 1;
          *(short *)(local_180[5] + 0x401) = *(short *)(local_180[5] + 0x401) + 1;
          guard_check_icall();
          if (*(char *)((int)param_1 + 0x2629) == '\x02') {
            *(short *)(piVar15[5] + 0x387) = *(short *)(piVar15[5] + 0x387) + 1;
            *(short *)(piVar15[5] + 0x403) = *(short *)(piVar15[5] + 0x403) + 1;
            *(uint *)(piVar15[5] + 0x375) = *(uint *)(piVar15[5] + 0x375) | 2;
            *(uint *)(piVar15[5] + 0x1b0) = *(uint *)(piVar15[5] + 0x1b0) | 0x10;
            *(uint *)(piVar15[5] + 0x1bc) = *(uint *)(piVar15[5] + 0x1bc) | 0x10;
            goto LAB_102c1a5a;
          }
        }
      }
    }
    break;
  case (int *)0x3b1:
    if (((puVar18[5] != 0) && (iVar11 = *(int *)(puVar18[5] + 0x28), iVar11 != 0)) &&
       (iVar11 = *(int *)(iVar11 + 0x14), iVar11 < 9)) {
      iVar11 = 9 - iVar11;
      do {
        local_148 = 0;
        local_150 = ZEXT48(puVar18) << 0x20;
        functions_ItemFunctions_102d5b80((int)&local_150,(int)param_1);
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
switchD_102c1905_caseD_2c6:
  uVar10 = local_1ac;
  if (param_1[0x77d] == 0x21) {
    if (((local_1b0 != 0) || (local_1ac != 0)) || (local_1a8 != 0)) {
      local_34 = (uint *)(uint)*(ushort *)(puVar18[0xb] + 2);
      local_138 = (int *)(uint)*(ushort *)(puVar18[0xb] + 6);
      local_134 = 0;
      local_130 = (uint *)0x0;
      functions_HelperFunctions_102ceab0(local_140,(int *)&local_134,(int *)&local_130);
      iVar11 = param_1[0x98a];
      if (iVar11 != 0) {
        if (iVar11 == 1) {
          if (uVar10 != 0) {
            param_1[0x98a] = 2;
            uVar24 = sub_102bacf0(&DAT_104e31b0);
            uVar10 = rand();
            puVar16 = (uint32_t *)functions_D2NewFunctions_102cbde0(&local_148);
            piVar15 = sub_102bad60(&local_190,(int)((ulonglong)uVar10 % (uVar24 & 0xffffffff)),
                                   *puVar16);
            piVar15 = (int *)sub_1025f2f0(piVar15);
            if (*piVar15 != -1) {
              functions_D2NewFunctions_102ce4e0(*piVar15,(uint8_t *)&local_30);
              functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,2,0x82,(uint32_t *)0x0,
                           (uint32_t *)0x0,0,3,puVar18);
            }
            puVar17 = (uint *)sub_102db0c0((int)param_1,local_140,(int)local_34 - 1,
                                           (int)local_138 - 1,0x249,2,1);
            piVar15 = sub_102db070((int)param_1,local_140,local_134 + 0x34d,(int)local_130 + 0x24e,
                                   0x24b,2);
            sub_102db500((int)param_1,(int)puVar17,(uint)piVar15,1);
            D2Common_11090(puVar17,2);
          }
        }
        else if ((iVar11 == 2) && (local_1a8 != 0)) {
          param_1[0x98a] = 3;
          uVar24 = sub_102bacf0(&DAT_104e31b0);
          uVar10 = rand();
          puVar16 = (uint32_t *)functions_D2NewFunctions_102cbde0(&local_148);
          piVar15 = sub_102bad60(&local_190,(int)((ulonglong)uVar10 % (uVar24 & 0xffffffff)),
                                 *puVar16);
          piVar15 = (int *)sub_1025f2f0(piVar15);
          if (*piVar15 != -1) {
            functions_D2NewFunctions_102ce4e0(*piVar15,(uint8_t *)&local_30);
            functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,2,0x82,(uint32_t *)0x0,
                         (uint32_t *)0x0,0,3,puVar18);
          }
          sub_102db2f0((int)param_1,(int *)puVar18,(int *)local_34,(uint)local_138,0x6d,0x24a);
        }
        goto LAB_102c4182;
      }
      if (local_1b0 == 0) goto LAB_102c41cc;
      param_1[0x98a] = 1;
      uVar24 = sub_102bacf0(&DAT_104e31b0);
      uVar10 = rand();
      puVar16 = (uint32_t *)functions_D2NewFunctions_102cbde0(&local_148);
      piVar15 = sub_102bad60(&local_190,(int)((ulonglong)uVar10 % (uVar24 & 0xffffffff)),*puVar16);
      piVar15 = (int *)sub_1025f2f0(piVar15);
      if (*piVar15 != -1) {
        functions_D2NewFunctions_102ce4e0(*piVar15,(uint8_t *)&local_30);
        functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,2,0x82,(uint32_t *)0x0,
                     (uint32_t *)0x0,0,3,puVar18);
      }
      puVar17 = (uint *)sub_102db0c0((int)param_1,local_140,(int)local_34 - 1,(int)local_138 - 1,
                                     0x249,2,1);
      piVar15 = sub_102db070((int)param_1,local_140,local_134 + 0x1e5,(int)local_130 + 0x3a2,0x24b,2
                            );
      sub_102db500((int)param_1,(int)puVar17,(uint)piVar15,1);
      D2Common_11090(puVar17,2);
      goto LAB_102c418b;
    }
LAB_102c42b1:
    piVar15 = local_180;
    if (bVar6) {
      if ((local_180 != (int *)0x0) && (*local_180 == 0)) {
        *(short *)(local_180[5] + 0x39f) = *(short *)(local_180[5] + 0x39f) + 1;
        *(short *)(local_180[5] + 0x41b) = *(short *)(local_180[5] + 0x41b) + 1;
      }
      local_30 = 0x6c626364;
      uVar10 = functions_D2NewFunctions_102c5d10((int *)puVar18);
      if (uVar10 % 0x14 == 0) {
        functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,7,0x82,(uint32_t *)0x0,
                     (uint32_t *)0x0,0,3,puVar18);
      }
      local_30 = 0x62726373;
      uVar10 = functions_D2NewFunctions_102c5d10((int *)puVar18);
      if (uVar10 % 6 == 0) {
        functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,7,0x82,(uint32_t *)0x0,
                     (uint32_t *)0x0,0,3,puVar18);
      }
      uVar10 = functions_HelperFunctions_102d0fc0(0x40c);
      sub_6fcaea80((int)param_1,(int *)puVar18,7,param_1[0x2a] + 1,0x102c9030,0x3c,uVar10);
    }
    else if (local_194 != (int *)0x0) {
      uVar10 = functions_HelperFunctions_102d0fc0(0x40b);
      sub_6fcaea80((int)param_1,(int *)puVar18,7,param_1[0x2a] + 1,0x102c9030,0x1e,uVar10);
      piVar15 = local_180;
    }
  }
  else {
LAB_102c4182:
    uVar10 = local_1ac;
    if (local_1b0 == 0) {
LAB_102c41cc:
      piVar15 = local_180;
      if (uVar10 == 0) {
        if (local_1a8 == 0) goto LAB_102c42b1;
        if ((local_180 != (int *)0x0) && (*local_180 == 0)) {
          *(short *)(local_180[5] + 0x39d) = *(short *)(local_180[5] + 0x39d) + 1;
          *(short *)(local_180[5] + 0x419) = *(short *)(local_180[5] + 0x419) + 1;
        }
        local_30 = 0x6c626364;
        uVar10 = functions_D2NewFunctions_102c5d10((int *)puVar18);
        uVar12 = 0xf;
      }
      else {
        if ((local_180 != (int *)0x0) && (*local_180 == 0)) {
          *(short *)(local_180[5] + 0x39d) = *(short *)(local_180[5] + 0x39d) + 1;
          *(short *)(local_180[5] + 0x419) = *(short *)(local_180[5] + 0x419) + 1;
        }
        local_30 = 0x6c626364;
        uVar10 = functions_D2NewFunctions_102c5d10((int *)puVar18);
        uVar12 = 0x19;
      }
      if (uVar10 % uVar12 == 0) {
        functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,7,0x82,(uint32_t *)0x0,
                     (uint32_t *)0x0,0,3,puVar18);
      }
      local_30 = 0x62726373;
      uVar10 = functions_D2NewFunctions_102c5d10((int *)puVar18);
      uVar12 = 0xf;
    }
    else {
LAB_102c418b:
      piVar15 = local_180;
      if ((local_180 != (int *)0x0) && (*local_180 == 0)) {
        *(short *)(local_180[5] + 0x39d) = *(short *)(local_180[5] + 0x39d) + 1;
        *(short *)(local_180[5] + 0x419) = *(short *)(local_180[5] + 0x419) + 1;
      }
      local_30 = 0x6c626364;
      uVar10 = functions_D2NewFunctions_102c5d10((int *)puVar18);
      uVar12 = 0xb;
    }
    if (uVar10 % uVar12 == 0) {
      functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,7,0x82,(uint32_t *)0x0,(uint32_t *)0x0,
                   0,3,puVar18);
    }
  }
  uVar23 = D2Common_10494_10277e30((int *)puVar18,0xec);
  if ((int)uVar23 == 0) {
    uVar23 = D2Common_10494_10277e30((int *)puVar18,0xde);
    pvVar14 = extraout_ECX_03;
    if ((int)uVar23 != 0) {
      uVar23 = D2Common_10871((int)puVar18,0xde);
      local_130 = *(uint **)((int)uVar23 + 0x20);
      pvVar14 = extraout_ECX_04;
      if ((0 < (int)local_130) &&
         (local_134 = sub_102ecd40(), pvVar14 = extraout_ECX_05, local_134 != 0)) {
        local_13c = (int *)functions_HelperFunctions_102ce5a0(0xe6);
        local_190 = (int *)(uint)*(ushort *)((int)local_13c + 0x4a);
        local_148 = D2Common_10510_10277b90(local_134,0xe6,(int)local_130,1);
        local_194 = (int *)(float)((double)local_13c[0x57] +
                                  (double)(&DAT_103804e0)[-(local_13c[0x57] >> 0x1f)]);
        if (((float)local_194 <= 0.0) || (65536.0 <= (float)local_194)) {
          local_194 = (int *)0x0;
        }
        memset(local_b0,0,0x70);
        local_ac = 1;
        sub_102eda90(0xe6,local_134,local_b0,local_130);
        memset(local_12c,0,0x7c);
        local_104 = FUN_10303060();
        uVar10 = puVar18[0xb];
        local_fc = local_148;
        pvVar14 = (void *)0x0;
        local_100 = local_104;
        if (uVar10 != 0) {
          uVar2 = *(ushort *)(uVar10 + 6);
          uVar3 = *(ushort *)(uVar10 + 2);
          iVar11 = local_13c[0x55];
          piVar26 = (int *)0xffffffff;
          uVar25 = 0xe6;
          piVar9 = local_190;
          goto LAB_102c46e2;
        }
      }
    }
  }
  else {
    uVar23 = D2Common_10871((int)puVar18,0xec);
    local_130 = *(uint **)((int)uVar23 + 0x20);
    pvVar14 = extraout_ECX_01;
    if ((0 < (int)local_130) &&
       (local_134 = sub_102ecd40(), pvVar14 = extraout_ECX_02, local_134 != 0)) {
      local_190 = (int *)functions_HelperFunctions_102ce5a0(0x49);
      local_13c = (int *)(uint)*(ushort *)(local_190 + 0x12);
      iVar11 = D2Common_11169((int)local_13c,(int)local_130);
      local_194 = (int *)(iVar11 / 2);
      local_148 = D2Common_10510_10277b90(local_134,0x49,(int)local_130,1);
      memset(local_b0,0,0x70);
      local_ac = 1;
      sub_102ecb30();
      memset(local_12c,0,0x7c);
      if (local_148 != 0) {
        local_88 = FUN_10303060();
      }
      uVar10 = puVar18[0xb];
      pvVar14 = (void *)0x0;
      local_f8 = local_88;
      local_f4 = local_88;
      if (uVar10 != 0) {
        uVar2 = *(ushort *)(uVar10 + 6);
        uVar3 = *(ushort *)(uVar10 + 2);
        iVar11 = local_190[0x54];
        uVar25 = 0x49;
        piVar9 = local_13c;
        piVar26 = local_194;
LAB_102c46e2:
        functions_D2NewFunctions_102bf8a0((int)param_1,local_134,(ushort)piVar9,uVar25,local_130,(int)piVar26,0xffffffff,
                     iVar11,(uint)uVar3,(uint)uVar2,(int)local_12c,1,0);
        pvVar14 = extraout_ECX_06;
      }
    }
  }
  if ((((0 < local_1b4) && (local_38 == 0)) && ((puVar18[0x31] & 0x4000000) == 0)) &&
     (piVar15 != (int *)0x0)) {
    sub_102eeb40(pvVar14,puVar18,piVar15,param_1);
  }
  if ((puVar18[0x31] & 0x20000) != 0) {
switchD_102c1905_caseD_371:
    goto LAB_102c5178;
  }
  if ((param_1[0x77d] == 0xe) && (uVar23 = D2Common_10871((int)puVar18,0xd5), (int)uVar23 != 0)) {
    local_30 = 0x20737377;
    uVar10 = functions_D2NewFunctions_102c5d10((int *)puVar18);
    iVar11 = (uVar10 & 3) + 2;
    local_148 = iVar11;
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,7,0x83,(uint32_t *)0x0,(uint32_t *)0x0,
                   0,3,puVar18);
    }
  }
  local_138 = (int *)param_1[0x24];
  if (8 < (int)local_138) {
    local_138 = (int *)0x1;
  }
  local_34 = (uint *)sub_102efc20();
  uVar10 = D2Common_10239((int *)puVar18);
  piVar15 = local_138;
  if (uVar10 != 0) {
    iVar11 = functions_HelperFunctions_102d0fc0(*(byte *)((int)param_1 + 0x6d) + 0x3fe);
    piVar15 = local_138;
    iVar11 = functions_D2NewFunctions_102c5480(param_1,(int *)puVar18,iVar11,local_184,(int)local_138);
    if (iVar11 != 0) {
      local_130 = (uint *)0x6f6d7472;
      functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,(int *)&local_130,7,0x83,(uint32_t *)0x0,
                   (uint32_t *)0x0,0,3,puVar18);
    }
  }
  uVar10 = D2Common_10255((int *)puVar18);
  if (uVar10 != 0) {
    iVar11 = functions_HelperFunctions_102d0fc0(*(byte *)((int)param_1 + 0x6d) + 0x408);
    iVar11 = functions_D2NewFunctions_102c5480(param_1,(int *)puVar18,iVar11,local_184,(int)piVar15);
    if (iVar11 != 0) {
      local_130 = (uint *)0x6463756c;
      functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,(int *)&local_130,7,0x83,(uint32_t *)0x0,
                   (uint32_t *)0x0,0,3,puVar18);
    }
  }
  if (((local_140 == 0x7d) || (local_140 == 0x7f)) || (local_140 == 0x7e)) {
    iVar11 = functions_HelperFunctions_102d0fc0(*(byte *)((int)param_1 + 0x6d) + 0x404);
    iVar11 = functions_D2NewFunctions_102c5480(param_1,(int *)puVar18,iVar11,local_184,(int)piVar15);
    if (iVar11 != 0) {
      local_130 = (uint *)0x6263756c;
      functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,(int *)&local_130,7,0x83,(uint32_t *)0x0,
                   (uint32_t *)0x0,0,3,puVar18);
    }
  }
  iVar11 = functions_HelperFunctions_102d0fc0(*(byte *)((int)param_1 + 0x6d) + 0x3e6);
  iVar11 = functions_D2NewFunctions_102c5480(param_1,(int *)puVar18,iVar11,local_184,(int)piVar15);
  if (iVar11 != 0) {
    local_130 = (uint *)0x786f626c;
    functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,(int *)&local_130,7,0x83,(uint32_t *)0x0,
                 (uint32_t *)0x0,0,3,puVar18);
  }
  iVar11 = functions_HelperFunctions_102d0fc0(*(byte *)((int)param_1 + 0x6d) + 0x3e9);
  iVar11 = functions_D2NewFunctions_102c5480(param_1,(int *)puVar18,iVar11,local_184,(int)piVar15);
  if (iVar11 != 0) {
    local_130 = (uint *)0x2070706c;
    functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,(int *)&local_130,7,0x83,(uint32_t *)0x0,
                 (uint32_t *)0x0,0,3,puVar18);
  }
  iVar11 = functions_HelperFunctions_102d0fc0(*(byte *)((int)param_1 + 0x6d) + 0x3ec);
  iVar11 = functions_D2NewFunctions_102c5480(param_1,(int *)puVar18,iVar11,local_184,(int)piVar15);
  if (iVar11 != 0) {
    local_130 = (uint *)0x79656b72;
    functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,(int *)&local_130,7,0x83,(uint32_t *)0x0,
                 (uint32_t *)0x0,0,3,puVar18);
  }
  iVar11 = functions_HelperFunctions_102d0fc0(*(byte *)((int)param_1 + 0x6d) + 0x3f2);
  iVar11 = functions_D2NewFunctions_102c5480(param_1,(int *)puVar18,iVar11,local_184,(int)piVar15);
  if (iVar11 != 0) {
    local_130 = (uint *)0x20707472;
    functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,(int *)&local_130,7,0x83,(uint32_t *)0x0,
                 (uint32_t *)0x0,0,3,puVar18);
  }
  iVar11 = functions_HelperFunctions_102d0fc0(*(byte *)((int)param_1 + 0x6d) + 0x3ef);
  iVar11 = functions_D2NewFunctions_102c5480(param_1,(int *)puVar18,iVar11,local_184,(int)piVar15);
  if (iVar11 != 0) {
    local_130 = (uint *)0x20646972;
    functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,(int *)&local_130,7,0x83,(uint32_t *)0x0,
                 (uint32_t *)0x0,0,3,puVar18);
  }
  iVar11 = functions_HelperFunctions_102d0fc0(*(byte *)((int)param_1 + 0x6d) + 0x3f5);
  iVar11 = functions_D2NewFunctions_102c5480(param_1,(int *)puVar18,iVar11,local_184,(int)piVar15);
  if (iVar11 != 0) {
    local_130 = (uint *)0x726d6c6c;
    functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,(int *)&local_130,7,0x83,(uint32_t *)0x0,
                 (uint32_t *)0x0,0,3,puVar18);
  }
  iVar11 = functions_HelperFunctions_102d0fc0(*(byte *)((int)param_1 + 0x6d) + 0x3f8);
  iVar11 = functions_D2NewFunctions_102c5480(param_1,(int *)puVar18,iVar11,local_184,(int)piVar15);
  if (iVar11 != 0) {
    local_130 = (uint *)0x6c76736c;
    functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,(int *)&local_130,7,0x83,(uint32_t *)0x0,
                 (uint32_t *)0x0,0,3,puVar18);
  }
  iVar11 = functions_HelperFunctions_102d0fc0(*(byte *)((int)param_1 + 0x6d) + 0x40f);
  iVar11 = functions_D2NewFunctions_102c5480(param_1,(int *)puVar18,iVar11,local_184,(int)piVar15);
  if (iVar11 != 0) {
    local_130 = (uint *)0x6e726d69;
    functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,(int *)&local_130,7,0x83,(uint32_t *)0x0,
                 (uint32_t *)0x0,0,3,puVar18);
  }
  if (bVar4) {
    iVar11 = functions_HelperFunctions_102d0fc0(0x401);
    iVar11 = functions_D2NewFunctions_102c5480(param_1,(int *)puVar18,iVar11,local_184,(int)piVar15);
    if (iVar11 != 0) {
      local_130 = (uint *)0x61616275;
LAB_102c4bf5:
      functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,(int *)&local_130,7,0x83,(uint32_t *)0x0,
                   (uint32_t *)0x0,0,3,puVar18);
    }
  }
  else if (bVar5) {
    iVar11 = functions_HelperFunctions_102d0fc0(0x402);
    iVar11 = functions_D2NewFunctions_102c5480(param_1,(int *)puVar18,iVar11,local_184,(int)piVar15);
    if (iVar11 != 0) {
      local_130 = (uint *)0x62616275;
      goto LAB_102c4bf5;
    }
  }
  else if (local_1a4 != (int *)0x0) {
    iVar11 = functions_HelperFunctions_102d0fc0(0x403);
    iVar11 = functions_D2NewFunctions_102c5480(param_1,(int *)puVar18,iVar11,local_184,(int)piVar15);
    if (iVar11 != 0) {
      local_130 = (uint *)0x63616275;
      goto LAB_102c4bf5;
    }
  }
  bVar4 = functions_HelperFunctions_102ce890(local_140);
  if (CONCAT31(extraout_var,bVar4) != 0) {
    iVar11 = 0x3fc;
    if ((((local_1b0 != 0) || (local_1ac != 0)) || (local_1a8 != 0)) || (bVar6)) {
      iVar11 = 0x3fd;
    }
    iVar11 = functions_HelperFunctions_102d0fc0(iVar11);
    iVar11 = functions_D2NewFunctions_102c5480(param_1,(int *)puVar18,iVar11,local_184,(int)piVar15);
    if (iVar11 != 0) {
      functions_HelperFunctions_102d2ea0((int)param_1,(int *)puVar18);
    }
  }
  bVar4 = functions_HelperFunctions_102ce890(local_140);
  if (((CONCAT31(extraout_var_00,bVar4) != 0) && (*puVar18 == 1)) &&
     ((*(byte *)(puVar18[5] + 0x16) & 0x10) == 0)) {
    local_134 = functions_HelperFunctions_102d15e0((int)param_1,(int)puVar18);
    uVar10 = functions_D2NewFunctions_102c5d10((int *)puVar18);
    iVar11 = local_198;
    if (0 < local_1b4) {
      if (local_38 == 0) {
        functions_ItemFunctions_102d5b80(local_198,(int)param_1);
      }
      else {
        if (uVar10 % 100 < 0x19) {
          functions_ItemFunctions_102d5b80(local_198,(int)param_1);
        }
        functions_D2NewFunctions_102c5d10((int *)puVar18);
      }
    }
    if (local_19c != 0) {
      functions_ItemFunctions_102d5b80(iVar11,(int)param_1);
    }
    if (((local_140 == 0xc5) || (local_140 == 0xc6)) || (local_140 == 199)) {
      functions_ItemFunctions_102d5b80(iVar11,(int)param_1);
    }
    uVar10 = functions_D2NewFunctions_102c5d10((int *)puVar18);
    if ((0 < (int)local_188) && ((int)(uVar10 % 100) < (int)local_188)) {
      functions_ItemFunctions_102d5b80(iVar11,(int)param_1);
    }
    uVar10 = functions_D2NewFunctions_102c5d10((int *)puVar18);
    uVar23 = D2Common_10973((int)puVar18,0x1ee,0);
    iVar11 = local_18c;
    if (((0 < (int)uVar23) && ((int)(uVar10 % 100) < (int)uVar23 * local_184)) &&
       (uVar10 = functions_HelperFunctions_102d0fc0(0x3d6), iVar11 = local_18c, uVar10 < *(uint *)(local_18c + 0x9c0))) {
      sub_6fc32380((int)param_1,(int *)puVar18,local_180,uVar10 * 0x2c + *(int *)(local_18c + 0x9bc)
                   ,0,local_134,0,0,(int *)0x0,0);
    }
    local_188 = functions_D2NewFunctions_102c5d10((int *)puVar18);
    local_188 = local_188 % 100;
    uVar23 = D2Common_10973((int)puVar18,0x1ef,0);
    if (((0 < (int)uVar23) && ((int)local_188 < (int)uVar23 * local_184)) &&
       (uVar10 = functions_HelperFunctions_102d0fc0(0x3d7), uVar10 < *(uint *)(iVar11 + 0x9c0))) {
      sub_6fc32380((int)param_1,(int *)puVar18,local_180,uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,
                   local_134,0,0,(int *)0x0,0);
    }
    local_188 = functions_D2NewFunctions_102c5d10((int *)puVar18);
    local_188 = local_188 % 100;
    uVar23 = D2Common_10973((int)puVar18,0x1f0,0);
    if (((0 < (int)uVar23) && ((int)local_188 < (int)uVar23 * local_184)) &&
       (uVar10 = functions_HelperFunctions_102d0fc0(0x3d8), uVar10 < *(uint *)(iVar11 + 0x9c0))) {
      sub_6fc32380((int)param_1,(int *)puVar18,local_180,uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,
                   local_134,0,0,(int *)0x0,0);
    }
    local_188 = functions_D2NewFunctions_102c5d10((int *)puVar18);
    local_188 = local_188 % 100;
    uVar23 = D2Common_10973((int)puVar18,0x1f1,0);
    if (((0 < (int)uVar23) && ((int)local_188 < (int)uVar23 * local_184)) &&
       (uVar10 = functions_HelperFunctions_102d0fc0(0x3d9), uVar10 < *(uint *)(iVar11 + 0x9c0))) {
      sub_6fc32380((int)param_1,(int *)puVar18,local_180,uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,
                   local_134,0,0,(int *)0x0,0);
    }
    local_188 = functions_D2NewFunctions_102c5d10((int *)puVar18);
    local_188 = local_188 % 100;
    uVar23 = D2Common_10973((int)puVar18,0x1f6,0);
    if (((0 < (int)uVar23) && ((int)local_188 < (int)uVar23 * local_184)) &&
       (uVar10 = functions_HelperFunctions_102d0fc0(0x3da), uVar10 < *(uint *)(iVar11 + 0x9c0))) {
      sub_6fc32380((int)param_1,(int *)puVar18,local_180,uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,
                   local_134,0,0,(int *)0x0,0);
    }
    local_188 = functions_D2NewFunctions_102c5d10((int *)puVar18);
    local_188 = local_188 % 100;
    uVar23 = D2Common_10973((int)puVar18,0x1fa,0);
    if (((0 < (int)uVar23) && ((int)local_188 < (int)uVar23 * local_184)) &&
       (uVar10 = functions_HelperFunctions_102d0fc0(0x3dc), uVar10 < *(uint *)(iVar11 + 0x9c0))) {
      sub_6fc32380((int)param_1,(int *)puVar18,local_180,uVar10 * 0x2c + *(int *)(iVar11 + 0x9bc),0,
                   local_134,0,0,(int *)0x0,0);
    }
  }
  sub_1020f410(&local_40);
  iVar11 = functions_D2CommonFunctions_1026b810(&DAT_104e3058,*(uint *)((int)param_1 + 0x26f2));
  sub_10212a90(&local_40,iVar11);
  local_8 = 1;
  pvVar14 = (void *)sub_10228040(&local_40,&local_188,(int *)&local_140);
  piVar15 = (int *)sub_102280a0(&local_40,&local_19c);
  bVar4 = sub_1023d8f0(pvVar14,piVar15);
  if (bVar4) {
    iVar11 = functions_HelperFunctions_102d0fc0(0x3fb);
    piVar15 = local_138;
    iVar11 = functions_D2NewFunctions_102c5480(param_1,(int *)puVar18,iVar11,local_184,(int)local_138);
    if (iVar11 != 0) {
      local_30 = 0x20737377;
      functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,7,0x83,(uint32_t *)0x0,(uint32_t *)0x0,
                   0,3,puVar18);
    }
    iVar11 = functions_HelperFunctions_102d0fc0(0x407);
    iVar11 = functions_D2NewFunctions_102c5480(param_1,(int *)puVar18,iVar11,local_184,(int)piVar15);
    if (iVar11 != 0) {
      local_38 = 0x6363756c;
      functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_38,7,0x83,(uint32_t *)0x0,(uint32_t *)0x0,
                   0,3,puVar18);
    }
    iVar11 = functions_HelperFunctions_102d0fc0(0x412);
    iVar11 = functions_D2NewFunctions_102c5480(param_1,(int *)puVar18,iVar11,local_184,(int)piVar15);
    if (iVar11 != 0) {
      uVar24 = sub_102bacf0(&DAT_104e30b4);
      uVar10 = rand();
      uVar23 = functions_D2ServerFunctions_1026cd50(&DAT_104e30b4,&local_1b4);
      piVar15 = sub_102bad60(&local_38,(int)((ulonglong)uVar10 % (uVar24 & 0xffffffff)),
                             *(uint32_t *)uVar23);
      piVar15 = (int *)sub_1025f2f0(piVar15);
      uVar23 = functions_HelperFunctions_102ceb40(*piVar15);
      if ((int)uVar23 != 0) {
        local_30 = (int)uVar23;
        functions_D2NewFunctions_102c5510((int)param_1,(int *)puVar18,&local_30,2,99,(uint32_t *)0x0,(uint32_t *)0x0,
                     0,3,puVar18);
      }
    }
  }
  local_8 = 0xffffffff;
  thunk_FUN_1020f8e0(&local_40);
LAB_102c5178:
  uVar25 = sub_6fc96270();
  ExceptionList = local_10;
  return uVar25;
LAB_102c295c:
  iVar11 = iVar11 + 1;
  puVar21 = puVar21 + 1;
  if (0x7f < iVar11) goto LAB_102c2a01;
  goto LAB_102c2942;
}


// 0x102c5450  (ghidra: FUN_102c5450)  [range]
uint __fastcall functions_D2NewFunctions_102c5450(uint param_1,int param_2)

{
  if (param_2 - 1U < 8) {
    return (*(int *)(&DAT_10376ca0 + param_2 * 4) * param_1) / 0x7f;
  }
  return param_1;
}


// 0x102c5480  (ghidra: FUN_102c5480)  [range]
uint32_t __fastcall
functions_D2NewFunctions_102c5480(uint32_t param_1,int *param_2,uint32_t param_3,int param_4,int param_5)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  psVar1 = D2Common_10634((ushort)param_3,0);
  if (((psVar1 != (short *)0x0) &&
      (uVar2 = (uint)(ushort)psVar1[0x10], (ushort)(psVar1[0x10] - 1U) < 0xfffe)) && (uVar2 != 0)) {
    if (1 < param_5) {
      uVar2 = functions_D2NewFunctions_102c5450(uVar2,param_5);
    }
    uVar4 = 1;
    if ((ushort)(psVar1[0xf] - 2U) < 0xfffd) {
      uVar4 = (uint)(ushort)psVar1[0xf];
    }
    uVar3 = functions_D2NewFunctions_102c5d10(param_2);
    if ((int)(uVar3 % (uVar4 * uVar2)) < param_4) {
      return 1;
    }
  }
  return 0;
}


// 0x102c5510  (ghidra: FUN_102c5510)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * __fastcall
functions_D2NewFunctions_102c5510(int param_1,int *param_2,int *param_3,uint32_t param_4,int param_5,
            uint32_t *param_6,uint32_t *param_7,uint32_t param_8,uint32_t param_9,
            uint32_t reg_EBX)

{
  int iVar1;
  int *piVar2;
  uint64_t uVar3;
  uint8_t auStack_ac [4];
  uint uStack_a8;
  uint uStack_a4;
  uint *local_a0;
  int iStack_9c;
  int *apiStack_98 [2];
  int iStack_90;
  int iStack_8c;
  int iStack_84;
  uint32_t uStack_80;
  uint uStack_7c;
  uint uStack_78;
  int iStack_74;
  uint16_t uStack_70;
  uint16_t uStack_6e;
  uint32_t uStack_68;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint local_c;
  
  local_c = DAT_1039800c ^ (uint)auStack_ac;
  local_a0 = (uint *)param_3;
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    uVar3 = D2Common_10331(param_2);
    iStack_9c = (int)uVar3;
    if (iStack_9c != 0) {
      uStack_a8 = 0;
      uStack_a4 = 0;
      functions_HelperFunctions_102cfc20(param_2,&uStack_a8,&uStack_a4,&uStack_a4);
      if (param_5 == -1) {
        param_5 = sub_102ed030();
      }
      local_a0 = (uint *)D2Common_10814(*local_a0);
      if (local_a0 != (uint *)0xffffffff) {
        functions_ItemFunctions_102dac30(&iStack_9c,(int *)&uStack_a8,(int *)&uStack_a4,2,0x805,7,0);
        sub_102ed030();
        if (((iStack_9c != 0) && (0 < (int)uStack_a8)) && (0 < (int)uStack_a4)) {
          functions_ItemFunctions_102daae0(&iStack_9c,&uStack_a8,&uStack_a4,1);
          memset(apiStack_98,0,0x84);
          iVar1 = iStack_9c;
          uStack_6e = *(uint16_t *)(param_1 + 0x78);
          iStack_84 = (int)local_a0;
          uStack_68 = param_4;
          uStack_7c = uStack_a8;
          uStack_78 = uStack_a4;
          uStack_80 = param_9;
          uStack_70 = 1;
          iStack_74 = iStack_9c;
          uStack_18 = param_8;
          if (param_6 != (uint32_t *)0x0) {
            uStack_30 = *param_6;
            uStack_2c = param_6[1];
            uStack_28 = param_6[2];
          }
          if (param_7 != (uint32_t *)0x0) {
            uStack_24 = *param_7;
            uStack_20 = param_7[1];
            uStack_1c = param_7[2];
          }
          apiStack_98[0] = param_2;
          iStack_90 = param_1;
          iStack_8c = param_5;
          piVar2 = (int *)sub_6fc31490(param_1,(int *)apiStack_98,0);
          functions_D2NewFunctions_102c8ea0(param_1,piVar2,iVar1);
          return piVar2;
        }
      }
    }
  }
  return (int *)0x0;
}


// 0x102c5700  (ghidra: FUN_102c5700)  [range]
void functions_D2NewFunctions_Hook_sub_6fcb1b70_102c5700(uint param_1,int param_2)

{
  bool bVar1;
  uint32_t *puVar2;
  int *piVar3;
  void *this;
  uint8_t local_c [4];
  uint8_t local_8 [4];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar2 = (uint32_t *)D2Common_10511(param_1);
    if (puVar2 != (uint32_t *)0x0) {
      param_1 = (uint)*(ushort *)*puVar2;
      sub_10228040(&DAT_104e3198,local_8,(int *)&param_1);
      piVar3 = (int *)sub_102280a0(&DAT_104e3198,local_c);
      bVar1 = sub_10228020(this,piVar3);
      if (!bVar1) {
        D2Common_11108((void *)param_2);
      }
    }
  }
  return;
}


// 0x102c5770  (ghidra: FUN_102c5770)  [range]
void functions_D2NewFunctions_Hook_sub_6fcb1b70_102c5770(uint param_1,uint32_t reg_ESI)

{
  uint uVar1;
  bool bVar2;
  uint32_t *puVar3;
  int *piVar4;
  void *this;
  uint32_t in_stack_fffffff4;
  uint8_t local_8 [4];
  uint8_t  stack0xfffffff4;   /* not traced by Ghidra: address of a stack slot */
  
  uVar1 = param_1;
  if (param_1 != 0) {
    puVar3 = (uint32_t *)D2Common_10511(param_1);
    if (puVar3 != (uint32_t *)0x0) {
      param_1 = (uint)*(ushort *)*puVar3;
      sub_10228040(&DAT_104e3198,local_8,(int *)&param_1);
      piVar4 = (int *)sub_102280a0(&DAT_104e3198,&stack0xfffffff4);
      bVar2 = sub_10228020(this,piVar4);
      if (!bVar2) {
        D2Common_10993((int *)uVar1,reg_ESI,in_stack_fffffff4);
      }
    }
  }
  return;
}


// 0x102c57d0  (ghidra: FUN_102c57d0)  [range]
int functions_D2NewFunctions_102c57d0(int *reg_ECX)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint64_t uVar9;
  
  iVar1 = *p_D2Common_DAT_6fde9e1c;
  iVar7 = 0;
  iVar8 = 0;
  iVar2 = *(int *)(iVar1 + 0x170);
  do {
    uVar6 = (uint)*(ushort *)(*(int *)(iVar1 + 0x16c) + iVar7 * 2);
    uVar3 = D2Common_10494(reg_ECX,uVar6);
    if (uVar3 != 0) {
      uVar9 = D2Common_10871((int)reg_ECX,uVar6);
      iVar5 = (int)uVar9;
      if (iVar5 != 0) {
        uVar3 = D2Common_10680(iVar5,0x15e,0);
        iVar4 = functions_HelperFunctions_102ce5a0(uVar3);
        if ((iVar4 != 0) && (-1 < *(short *)(iVar4 + 0x54))) {
          iVar5 = D2Common_10680(iVar5,(int)*(short *)(iVar4 + 0x54),0);
          if (iVar8 < iVar5) {
            iVar8 = iVar5;
          }
        }
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < iVar2);
  if (3 < iVar8) {
    return 3;
  }
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  return iVar8;
}


// 0x102c5880  (ghidra: FUN_102c5880)  [range]
int __fastcall
functions_D2NewFunctions_102c5880(uint32_t param_1,uint32_t param_2,int param_3,int param_4,int param_5,uint *param_6
            )

{
  int iVar1;
  uint32_t *puVar2;
  int iVar3;
  ushort *puVar4;
  uint32_t param_6;   /* not traced by Ghidra: value with no visible source */
  
  puVar2 = (uint32_t *)D2Common_10511(param_3);
  if (puVar2 != (uint32_t *)0x0) {
    iVar3 = functions_HelperFunctions_102ce5a0((uint)*(ushort *)*puVar2);
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 4) & 8) != 0)) {
      iVar3 = 0;
      puVar4 = (ushort *)(param_5 + 0xf6);
      do {
        if ((*puVar4 - 1 < 0xbe) && (iVar1 = (uint)*puVar4 * 4, *(int *)(iVar1 + p_D2Client_DAT_6fb8ea48) != 0)
           ) {
          D2Common_10188(param_6,(int)*(short *)(param_5 + 0x54),iVar3 + 1,0);
          (**(code **)(iVar1 + p_D2Client_DAT_6fb8ea48))(param_2);
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar3 < param_4);
    }
    return param_4;
  }
  return 0;
}


// 0x102c5930  (ghidra: FUN_102c5930)  [range]
uint32_t __fastcall
functions_D2NewFunctions_102c5930(int param_1,uint param_2,uint param_3,int param_4,uint param_5,int *param_6)

{
  short sVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  short *psVar8;
  uint64_t uVar9;
  int local_c;
  
  iVar2 = functions_HelperFunctions_102ce5a0(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  uVar9 = D2Common_10786((uint)param_6,*(uint *)(iVar2 + 0x60),param_2,param_3);
  uVar5 = *(int *)(param_1 + 0xa8) + (int)uVar9;
  uVar9 = D2Common_10871((int)param_6,param_4);
  puVar3 = (uint *)uVar9;
  if (puVar3 == (uint *)0x0) {
    if (param_6 == (int *)0x0) {
      iVar4 = -1;
      iVar6 = 6;
    }
    else {
      iVar4 = param_6[3];
      iVar6 = *param_6;
    }
    puVar3 = D2Common_11013(*(uint *)(param_1 + 0x1c),2,uVar5,iVar6,iVar4);
    if (puVar3 == (uint *)0x0) {
      return 0;
    }
    D2Common_10785((int)puVar3,param_4);
    D2Common_10911((int)puVar3,0x10288110);
    D2Common_10807((int)param_6,puVar3,1);
    D2Common_10188(puVar3,0x15e,param_2,0);
    D2Common_10188(puVar3,0x15f,param_3,0);
  }
  D2Common_11043((int)puVar3,uVar5);
  functions_D2NewFunctions_102c9db0(param_1,param_6,0xc,uVar5,0,param_4,0);
  iVar4 = D2Common_10680((int)puVar3,param_5,0);
  if (iVar4 + 1 < 4) {
    D2Common_10188(puVar3,param_5,iVar4 + 1,0);
    local_c = 5;
    puVar7 = (uint *)(iVar2 + 0x6c);
    psVar8 = (short *)(iVar2 + 0x56);
    do {
      sVar1 = *psVar8;
      if ((-1 < sVar1) && (param_5 < *(uint *)(*p_D2Common_DAT_6fde9e1c + 0xbd4))) {
        uVar9 = D2Common_10786((uint)param_6,*puVar7,param_2,param_3);
        D2Common_10245(puVar3,(int)sVar1,(int)uVar9,0);
      }
      psVar8 = psVar8 + 1;
      puVar7 = puVar7 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    D2Common_10945(param_6,param_4,1);
    D2Common_11039(param_6,param_4,1);
  }
  return 1;
}


// 0x102c5ac0  (ghidra: FUN_102c5ac0)  [range]
uint32_t functions_D2NewFunctions_102c5ac0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 8);
  if (((iVar4 != 0) && (iVar1 != 0)) && (*(int *)(iVar4 + 0x14) != 0)) {
    iVar1 = functions_HelperFunctions_102cea70((uint)*(byte *)(*(int *)(iVar4 + 0x14) + 4));
    if (iVar1 != 0) {
      return 0;
    }
    iVar2 = functions_HelperFunctions_102ceae0(extraout_EDX);
    iVar1 = extraout_EDX_00;
    if (iVar2 != 0) {
      return 0;
    }
  }
  iVar2 = -1;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  uVar3 = D2Common_10181(iVar4);
  iVar4 = -1;
  if (uVar3 != 0) {
    iVar4 = *(int *)(uVar3 + 4);
  }
  if (iVar2 == iVar4) {
    return 0;
  }
  return 1;
}


// 0x102c5b30  (ghidra: FUN_102c5b30)  [range]
uint32_t functions_D2NewFunctions_102c5b30(int param_1,int param_2,short param_3,short param_4)

{
  if (((param_1 != 0) && (param_2 != 0)) &&
     ((param_3 == param_4 || (*(int *)(param_1 + 0x5c) == *(int *)(param_2 + 0x5c))))) {
    return 0;
  }
  return 1;
}


// 0x102c5b70  (ghidra: FUN_102c5b70)  [range]
void __fastcall functions_D2NewFunctions_102c5b70(int param_1,int reg_EDX)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint32_t local_c;
  uint32_t local_8;
  
  if (param_1 != 0) {
    local_c = D2Common_10534((int *)param_1);
    if (0x4d < local_c) {
      local_c = 0x4d;
      D2Common_10558((int *)param_1,0x4d);
      D2Common_10970((int *)param_1,0x4d);
    }
    iVar1 = *(int *)(param_1 + 0x2c);
    uVar3 = D2Common_10983(iVar1);
    D2Common_10614((uint *)(param_1 + 0x20),uVar3 + reg_EDX);
    uVar3 = *(uint *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x24);
    uVar4 = uVar3 * 0x6ac690c5;
    if ((iVar2 == 0) ||
       (local_8 = 1, uVar4 < 0x7fffffffU - iVar2 || uVar4 - (0x7fffffffU - iVar2) == 0)) {
      local_8 = 0;
    }
    *(uint *)(param_1 + 0x24) =
         ((uint)((ulonglong)uVar3 * 0x6ac690c5) >> 0x14 |
         (((int)uVar3 >> 0x1f) * 0x6ac690c5 + (int)((ulonglong)uVar3 * 0x6ac690c5 >> 0x20)) * 0x1000
         ) + local_8;
    *(uint *)(param_1 + 0x20) = iVar2 + uVar4;
    if (0x13 < (iVar2 + uVar4) % 100) {
      D2Common_10647(iVar1,10);
      D2Common_10168(iVar1,(byte)local_c);
      D2Common_10334(iVar1,(int *)param_1,0);
    }
  }
  return;
}


// 0x102c5d10  (ghidra: FUN_102c5d10)  [range]
void __fastcall functions_D2NewFunctions_102c5d10(int *param_1)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  
  puVar3 = (uint *)(param_1 + 8);
  if (*param_1 == 4) {
    puVar3 = (uint *)D2Common_10411(param_1);
  }
  iVar1 = param_1[9];
  uVar4 = *puVar3 * 0x6ac690c5;
  if ((iVar1 == 0) || (uVar4 < 0x7fffffffU - iVar1 || uVar4 - (0x7fffffffU - iVar1) == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = 1;
  }
  lVar2 = (ulonglong)*puVar3 * 0x6ac690c5;
  param_1[9] = ((uint)lVar2 >> 0x14 | (int)((ulonglong)lVar2 >> 0x20) << 0xc) + iVar5;
  *puVar3 = iVar1 + uVar4;
  return;
}


// 0x102c5d70  (ghidra: FUN_102c5d70)  [range]
uint __fastcall functions_D2NewFunctions_102c5d70(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *param_1 * 0x6ac690c5;
  uVar1 = param_1[1];
  if ((uVar1 == 0) || (uVar3 < 0x7fffffff - uVar1 || uVar3 - (0x7fffffff - uVar1) == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = 1;
  }
  uVar2 = *param_1;
  *param_1 = uVar1 + uVar3;
  param_1[1] = ((uint)((ulonglong)uVar2 * 0x6ac690c5) >> 0x14 |
               (param_1[1] * 0x6ac690c5 + (int)((ulonglong)uVar2 * 0x6ac690c5 >> 0x20)) * 0x1000) +
               iVar4;
  return uVar1 + uVar3;
}


// 0x102c5dd0  (ghidra: FUN_102c5dd0)  [range]
void functions_D2NewFunctions_102c5dd0(int param_1,int *param_2,uint32_t param_3,uint32_t reg_ECX,uint32_t reg_EDX)

{
  functions_D2NewFunctions_102c5df0(param_2,param_1,param_3,0,reg_ECX,reg_EDX);
  return;
}


// 0x102c5df0  (ghidra: FUN_102c5df0)  [range]
uint32_t
functions_D2NewFunctions_102c5df0(int *param_1,int param_2,uint32_t param_3,int param_4,uint reg_ECX,uint reg_EDX)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  void *this;
  uint *puVar5;
  int iVar6;
  uint extraout_ECX;
  int iVar7;
  bool bVar8;
  ulonglong uVar9;
  uint64_t uVar10;
  uint local_30 [4];
  int local_20;
  uint local_1c;
  uint *local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  uVar9 = D2Common_10106(reg_ECX,reg_EDX,param_1);
  local_20 = (int)uVar9;
  if ((param_2 != 1) || (local_20 != 1)) {
    uVar1 = functions_D2NewFunctions_102c5d10(param_1);
    local_c = 1;
    uVar1 = uVar1 % 100 + param_4;
    if (uVar1 < 0x50) {
      if (uVar1 < 0x32) {
        if ((uVar1 < 10) && (param_4 == 0)) {
          return 0;
        }
      }
      else {
        local_c = 2;
      }
    }
    else {
      local_c = 3;
    }
    uVar1 = D2Common_10957(param_1);
    uVar10 = D2Common_10744((int)param_1,0x20);
    if ((int)uVar10 != 0) {
      uVar1 = 7;
    }
    local_10 = uVar1;
    local_1c = D2Common_10718(param_1);
    local_30[0] = 0xffffffff;
    local_30[1] = 0xffffffff;
    local_30[2] = 0xffffffff;
    iVar2 = D2Common_11088_10275940(param_1);
    local_30[3] = param_2 / 3;
    if (10 < local_30[3]) {
      local_30[3] = 10;
    }
    local_14 = 0;
    do {
      iVar7 = 4;
      local_18 = local_30 + local_14;
      local_8 = local_30[local_14];
      if (local_8 == 0xffffffff) {
        for (; 0 < iVar7; iVar7 = iVar7 + -1) {
          piVar3 = (int *)functions_D2NewFunctions_102cbdc0(&DAT_104e3178,local_10);
          uVar1 = sub_10218980(piVar3);
          uVar4 = functions_D2NewFunctions_102c5d10(param_1);
          this = (void *)functions_D2NewFunctions_102cbdc0(&DAT_104e3178,local_10);
          puVar5 = (uint *)sub_10218970(this,uVar4 % uVar1);
          iVar6 = functions_HelperFunctions_102ce5a0(*puVar5);
          if ((((*(ushort *)(iVar6 + 0x174) == 1) ||
               ((int)(*(ushort *)(iVar6 + 0x174) + 7) <= param_2)) && (extraout_ECX != local_30[0]))
             && ((extraout_ECX != local_30[1] && (extraout_ECX != local_30[2])))) {
            if (extraout_ECX == 0x49) {
              bVar8 = iVar2 == 0x19;
            }
            else if (extraout_ECX == 0x74) {
              bVar8 = iVar2 == 0x18;
            }
            else {
              bVar8 = extraout_ECX == 0x17c;
            }
            if (!bVar8) {
              local_8 = extraout_ECX;
              *local_18 = extraout_ECX;
              break;
            }
          }
        }
      }
      iVar7 = 1;
      if (((int)local_1c < 100) || (local_20 != 1)) {
        uVar1 = functions_D2NewFunctions_102c5d10(param_1);
        uVar1 = uVar1 % (local_30[3] + 0x5a) + param_4 / 2;
        if (uVar1 < 0x4b) {
          iVar7 = 2 - (uint)(uVar1 < 0x28);
        }
        else {
          iVar7 = 3;
        }
      }
      if (local_8 != 0xffffffff) {
        puVar5 = (uint *)D2Common_10930_10277f50((int)param_1,0,0x40);
        if (puVar5 == (uint *)0x0) {
          if (param_1 != (int *)0x0) {
            puVar5 = D2Common_11013(param_1[2],0x40,0,4,param_1[3]);
            D2Common_10807((int)param_1,puVar5,1);
            if (puVar5 != (uint *)0x0) goto LAB_102c5ff7;
          }
        }
        else {
LAB_102c5ff7:
          D2Common_10188(puVar5,0x6b,iVar7,local_8 & 0xffff);
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < local_c);
  }
  return 0;
}


// 0x102c6030  (ghidra: FUN_102c6030)  [range]
void __fastcall
functions_D2NewFunctions_Hook_sub_6fccfdb0_102c6030(int param_1,int *param_2,int param_3,uint param_4,int param_5,int param_6)

{
  int iVar1;
  uint *puVar2;
  int extraout_ECX;
  uint uVar3;
  uint32_t local_8;
  
  if (((param_1 != 0) && (param_2 != (int *)0x0)) &&
     (iVar1 = functions_HelperFunctions_102ce6d0(param_4 >> 0x10), iVar1 != 0)) {
    local_8 = 0;
    if (param_3 != 0) {
      local_8 = *(uint32_t *)(param_3 + 0xc);
    }
    if (extraout_ECX == 0xbf) {
      uVar3 = param_4 & 0xffff;
      if (param_6 == 0) {
        if (((param_5 != 0) && (D2Common_10302(param_2,uVar3,0,1,0,0), *param_2 == 0)) &&
           (*(int *)(param_2[5] + 0x9c) != 0)) {
          sub_102ed890();
        }
        sub_102ef4a0(uVar3,param_2,param_1,local_8);
      }
      else {
        puVar2 = D2Common_10708((int)param_2,uVar3,-1);
        if (puVar2 == (uint *)0x0) {
          D2Common_10008(param_2,uVar3);
          D2Common_10302(param_2,uVar3,0,0,0,0);
          if ((*param_2 == 0) && (*(int *)(param_2[5] + 0x9c) != 0)) {
            sub_102ed890();
          }
          D2Common_10056(param_2,uVar3);
        }
        sub_102ef480(param_2,param_1,local_8,uVar3,param_6);
      }
    }
    ITEMS_ItemMode_6fcf9470((void *)param_1,(uint *)param_2,param_3,param_4,param_5,param_6);
  }
  return;
}


// 0x102c6150  (ghidra: FUN_102c6150)  [range]
uint32_t __fastcall functions_D2NewFunctions_102c6150(void *param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  
  uVar5 = 0;
  piVar2 = *(int **)(param_2 + 0x60);
  piVar3 = (int *)piVar2[3];
  while (piVar3 != (int *)0x0) {
    uVar6 = D2Common_10695(piVar3[1]);
    iVar4 = (int)uVar6;
    if ((iVar4 == 0) ||
       (((*(int *)(iVar4 + 0x80) != 0x20786f62 && (*(int *)(iVar4 + 0x80) != 0x206b6269)) &&
        (*(int *)(iVar4 + 0x80) != 0x2079656b)))) {
      cVar1 = *(char *)(piVar3[5] + 0x45);
      if (((cVar1 == '\0') || (cVar1 == '\x03')) || (cVar1 == -1)) {
        uVar6 = D2Common_10464(piVar3);
        if (param_3 == 0) {
          functions_D2NewFunctions_102c05c0(param_1,param_2,piVar3);
        }
        uVar5 = 1;
        piVar3 = (int *)uVar6;
      }
      else {
        uVar6 = D2Common_10464(piVar3);
        piVar3 = (int *)uVar6;
      }
    }
    else {
      uVar6 = D2Common_10464(piVar3);
      piVar3 = (int *)uVar6;
    }
  }
  uVar6 = D2Common_11017(piVar2);
  if ((int)uVar6 != 0) {
    if (param_3 == 0) {
      functions_D2NewFunctions_102c05c0(param_1,param_2,(int)uVar6);
    }
    return 1;
  }
  return uVar5;
}


// 0x102c6220  (ghidra: FUN_102c6220)  [range]
void functions_D2NewFunctions_102c6220(int *param_1,uint32_t param_2)

{
  int iVar1;
  uint64_t uVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    uVar2 = D2Common_10973((int)param_1,0xc,0);
    iVar1 = (int)uVar2 + 1;
    if (((0x5a < iVar1) || (iVar1 == (iVar1 / 10) * 10)) && (iVar1 == 99)) {
      *(uint *)(param_1[5] + 0x375) = *(uint *)(param_1[5] + 0x375) | 4;
      *(uint *)(param_1[5] + 0x1b0) = *(uint *)(param_1[5] + 0x1b0) | 2;
      *(uint *)(param_1[5] + 0x1bc) = *(uint *)(param_1[5] + 0x1bc) | 2;
      functions_HelperFunctions_102d2540(param_1);
    }
  }
  sub_102ed430(param_1,param_2);
  return;
}


// 0x102c62a0  (ghidra: FUN_102c62a0)  [range]
void functions_D2NewFunctions_Hook_ITEMS_ItemMode_6fcf9470_102c62a0(int *param_1,int param_2,uint param_3,int param_4,int param_5)

{
  D2Common_10029(param_1,param_2,param_3,param_4,param_5,0);
  return;
}


// 0x102c62b0  (ghidra: FUN_102c62b0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void functions_D2NewFunctions_Wraps_D2Game_SKILLS_Skills_102c62b0(uint param_1,int *param_2,uint32_t param_3,uint32_t param_4)

{
  ushort uVar1;
  uint *puVar2;
  int iVar3;
  uint32_t extraout_ECX;
  uint64_t uVar4;
  uint local_10 [2];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if (*param_2 != 1) {
    return;
  }
  iVar3 = param_2[5];
  if (iVar3 != 0) {
    if (param_2[1] == 0x2c0) {
      D2Common_10302(param_2,0x7b,0x14,1,"..\\Source\\D2Game\\SKILLS\\Skills.cpp",0x112a);
      D2Common_10418(param_2);
      if (*param_2 == 0) {
        PLAYER_PlayerPets_6fcb6fa0(param_2[0x20],param_2);
      }
      param_1 = 0x7b;
      goto LAB_102c63a5;
    }
    if (*(short *)(iVar3 + 0x26) == 0x25) {
      param_1 = 0x1d9;
    }
    else {
      uVar1 = *(ushort *)(iVar3 + 0x14);
      D2Common_10936(local_10);
      D2Common_10614(local_10,(uint)uVar1);
      sub_10218980((int *)&DAT_104e3138);
      iVar3 = sub_102ecdf0(extraout_ECX);
      puVar2 = (uint *)sub_10218970(&DAT_104e3138,iVar3);
      param_1 = *puVar2;
    }
  }
  uVar4 = D2Common_10973((int)param_2,0xc,0);
  iVar3 = (int)uVar4 / 7;
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  else if (0xd < iVar3) {
    iVar3 = 0xd;
  }
  sub_102ef9b0(param_1,param_2,iVar3,param_4);
LAB_102c63a5:
  functions_D2NewFunctions_Wraps_D2Game_SKILLS_Skills_102c8190(param_2,0,param_1,0xffffffff);
  return;
}


// 0x102c63c0  (ghidra: FUN_102c63c0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t
functions_D2NewFunctions_102c63c0(int *param_1,int param_2,uint param_3,uint param_4,uint32_t param_5,
            uint32_t param_6,int param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint32_t uVar5;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  uint64_t uVar6;
  uint8_t local_30;
  uint16_t local_2f;
  uint16_t local_2d;
  uint16_t local_2b;
  uint32_t local_29;
  uint8_t local_25;
  uint32_t local_24;
  uint8_t local_20 [4];
  int local_1c;
  int local_18;
  char local_12;
  char local_11;
  uint local_10;
  uint local_c;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_c = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_1c = param_2;
  local_10 = param_3;
  if ((param_1 == (int *)0x0) || (iVar2 = functions_HelperFunctions_102ce5a0(param_3), iVar2 == 0)) {
    return 0;
  }
  local_11 = *(char *)(iVar2 + 0x10);
  local_12 = *(char *)(iVar2 + 0x13);
  if (((*param_1 == 0) && (param_1[5] != 0)) && (param_7 == 0)) {
    iVar3 = functions_HelperFunctions_102d18c0(param_1,param_3);
    if ((iVar3 == -1) || (*(int *)(iVar2 + 0xc) != param_1[1])) {
      iVar3 = *(int *)(param_1[5] + 0x1cc);
    }
    else {
      iVar3 = *(int *)(param_1[5] + 0x1d0 + iVar3 * 4);
    }
    if (iVar3 != 0) {
      return 0;
    }
    sub_10228040(&DAT_104e3118,&local_18,(int *)&local_10);
    piVar4 = (int *)sub_102280a0(&DAT_104e3118,local_20);
    bVar1 = sub_10228020(this,piVar4);
    if (bVar1) {
      sub_10228040(&DAT_104e30ac,local_20,(int *)&local_10);
      piVar4 = (int *)sub_102280a0(&DAT_104e30ac,&local_18);
      bVar1 = sub_1023d8f0(this_00,piVar4);
      if (((bVar1) || (local_11 == '\n')) ||
         ((local_11 == '\x12' &&
          (((local_12 == '\f' || (local_12 == '\x06')) || (local_12 == '\x12')))))) {
        uVar6 = D2Common_10331(param_1);
        if (((int)uVar6 != 0) && (param_1[0xb] != 0)) {
          uVar6 = D2Common_10826((int)uVar6);
          local_18 = (int)uVar6;
          iVar3 = functions_HelperFunctions_102cea40(local_18);
          if ((iVar3 == 0) &&
             (uVar6 = functions_HelperFunctions_102cf710(local_18,(uint)*(ushort *)(param_1[0xb] + 2),
                                   (uint)*(ushort *)(param_1[0xb] + 6)), (int)uVar6 == 0)) {
            uVar6 = D2Common_10392(param_1[0xb]);
            sub_6fcaea80(local_1c,param_1,7,*(int *)(local_1c + 0xa8) + 5,0x102becf0,0xe,(uint)uVar6
                        );
          }
        }
      }
    }
    if (((param_3 == 0xf9) || (param_3 == 0xfa)) || (param_3 == 0x251)) {
      local_29 = 0;
      local_2f = *(uint16_t *)(iVar2 + 0x80);
      local_30 = 0x83;
      local_2d = (uint16_t)param_3;
      local_2b = (uint16_t)param_4;
      local_25 = 1;
      uVar6 = D2Common_10786((uint)param_1,*(uint *)(iVar2 + 0x60),param_3,param_4);
      local_24 = (uint32_t)uVar6;
      sub_102ecd00(*(uint32_t *)(param_1[5] + 0x9c),&local_30,0x10);
    }
  }
  if (*param_1 != 1) goto LAB_102c666d;
  if ((param_1[4] == 7) || (param_1[4] == 0xe)) {
    sub_10228040(&DAT_104e3118,local_20,(int *)&local_10);
    piVar4 = (int *)sub_102280a0(&DAT_104e3118,&local_18);
    bVar1 = sub_10228020(this_01,piVar4);
    if (!bVar1) goto LAB_102c65df;
  }
  else {
LAB_102c65df:
    sub_10228040(&DAT_104e30ac,local_20,(int *)&local_10);
    piVar4 = (int *)sub_102280a0(&DAT_104e30ac,&local_18);
    bVar1 = sub_1023d8f0(this_02,piVar4);
    if (!bVar1) goto LAB_102c666d;
  }
  uVar6 = D2Common_10331(param_1);
  if (((int)uVar6 != 0) && (param_1[0xb] != 0)) {
    uVar6 = D2Common_10826((int)uVar6);
    local_18 = (int)uVar6;
    iVar2 = functions_HelperFunctions_102cea40(local_18);
    if (iVar2 == 0) {
      iVar2 = param_1[0xb];
      uVar6 = functions_HelperFunctions_102cf710(local_18,(uint)*(ushort *)(iVar2 + 2),(uint)*(ushort *)(iVar2 + 6));
      if ((int)uVar6 == 0) {
        uVar6 = D2Common_10392(iVar2);
        sub_6fcaea80(local_1c,param_1,7,*(int *)(local_1c + 0xa8) + 5,0x102becf0,0xe,(uint)uVar6);
      }
    }
  }
LAB_102c666d:
  uVar5 = sub_102ed510(param_1,local_1c,param_3,param_4,param_5,param_6,param_7);
  return uVar5;
}


// 0x102c66a0  (ghidra: FUN_102c66a0)  [range]
void functions_D2NewFunctions_102c66a0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  sub_102ed540(param_1,param_2,param_3,param_4,param_5);
  return;
}


// 0x102c66b0  (ghidra: FUN_102c66b0)  [range]
void __fastcall functions_D2NewFunctions_Hook_PLAYER_PlrModes_6fc99850_102c66b0(int param_1,uint *param_2)

{
  ushort *puVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint32_t extraout_ECX;
  uint64_t uVar8;
  uint64_t uVar9;
  int *local_10;
  uint local_c;
  uint local_8;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == (uint *)0x0) {
    return;
  }
  uVar3 = *param_2;
  if ((uVar3 == 2) || ((3 < uVar3 && (uVar3 < 6)))) {
    local_c = *(uint *)(param_2[0xb] + 0xc);
    local_8 = *(uint *)(param_2[0xb] + 0x10);
  }
  else if (param_2[0xb] == 0) {
    local_c = 0;
    local_8 = 0;
  }
  else {
    local_c = D2Common_10867(param_2[0xb]);
    local_8 = D2Common_10750(param_2[0xb]);
  }
  uVar8 = D2Common_10331((int *)param_2);
  local_10 = (int *)0x0;
  if (*param_2 == 0) {
    iVar4 = D2Common_10920((int *)param_2);
    iVar7 = *(int *)(iVar4 + 0x9c);
    if (param_2[0x27] == 1) {
      local_10 = (int *)sub_102ecd40();
      functions_HelperFunctions_102d1960(local_10,1);
    }
    functions_HelperFunctions_102d1960((int *)param_2,0);
    uVar9 = D2Common_10331((int *)param_2);
    D2Common_10826((int)uVar9);
    iVar5 = functions_HelperFunctions_102ceae0((int)param_2);
    if (iVar5 == 0) {
      PLAYER_PlrModes_6fc99210((int *)param_1,(int)param_2,local_c,local_8,(int)uVar8);
      functions_HelperFunctions_102d1660(param_1,(int *)param_2,1);
      *(short *)(iVar4 + 0x39b) = *(short *)(iVar4 + 0x39b) + 1;
      *(short *)(iVar4 + 0x417) = *(short *)(iVar4 + 0x417) + 1;
      if ((*(uint *)(*(int *)(param_1 + 0x1d28) + 8) & 0x800) != 0) {
        sub_102d3e40((int)param_2,1,0);
      }
      if (iVar7 != 0) {
        iVar4 = functions_HelperFunctions_102ceae0((int)param_2);
        if (iVar4 == 0) {
          *(byte *)(iVar7 + 10) = *(byte *)(iVar7 + 10) | 8;
        }
        if ((*p_D2Game_DAT_6fd31c3c != 0) && ((*(byte *)(iVar7 + 10) & 4) == 0)) goto LAB_102c6873;
      }
      if ((*param_2 != 0) ||
         ((iVar7 = D2Common_10920((int *)param_2), iVar7 == 0 || (*(int *)(iVar7 + 0x9c) == 0))))
      goto LAB_102c68a1;
      functions_D2NewFunctions_102c0f80(param_1,(int)param_2,*(int *)(iVar7 + 0x9c) + 0xd,0);
    }
    else {
      puVar1 = (ushort *)(*(int *)(param_2[5] + 0x9c) + 10);
      *puVar1 = *puVar1 & 0xfff7;
      PLAYER_PlrModes_6fc98550(param_1,(uint)param_2,0,5,0,0,0);
      piVar6 = functions_D2NewFunctions_102cb180(local_10,1);
      if (((piVar6 != (int *)0x0) && (*piVar6 == 0)) && (piVar6[5] != 0)) {
        psVar2 = (short *)(piVar6[5] + 0x3a1);
        *psVar2 = *psVar2 + 1;
        *(short *)(piVar6[5] + 0x41d) = *(short *)(piVar6[5] + 0x41d) + 1;
      }
      functions_HelperFunctions_102d1660(param_1,(int *)param_2,0);
    }
LAB_102c6873:
    sub_102f0550(param_2,param_1);
    D2Common_11090(param_2,0x11);
    sub_102f0570();
    sub_102f0580(extraout_ECX);
    functions_D2NewFunctions_102cdf80(param_1,(int)param_2);
    return;
  }
LAB_102c68a1:
  Fog_10024("","",0x1803);
                    /* WARNING: Subroutine does not return */
  _exit(-1);
}


// 0x102c68d0  (ghidra: FUN_102c68d0)  [range]
void functions_D2NewFunctions_Hook_GAME_Game_6fc4cbe0_102c68d0(int param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint32_t extraout_var;
  uint32_t extraout_var_00;
  void *this;
  int iVar4;
  int *piVar5;
  LPCWSTR pWVar6;
  LPSTR pCVar7;
  int *piVar8;
  int iVar9;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_EDX;
  int iVar10;
  int iVar11;
  uint64_t uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iStack_28;
  int iStack_24;
  int *piStack_20;
  uint uStack_1c;
  int iStack_18;
  int iStack_14;
  uint uStack_10;
  uint auStack_c [2];
  uint8_t  stack0xffffffb0;   /* not traced by Ghidra: address of a stack slot */
  
  uVar12 = D2Common_10826(param_2);
  piVar8 = (int *)uVar12;
  piStack_20 = piVar8;
  iVar3 = functions_HelperFunctions_102d0fe0((int)piVar8);
  if (iVar3 != 0) {
    return;
  }
  bVar2 = functions_HelperFunctions_102ce890(extraout_ECX);
  if ((CONCAT31(extraout_var,bVar2) != 0) &&
     (bVar2 = functions_HelperFunctions_102ce8b0(), CONCAT31(extraout_var_00,bVar2) == 0)) {
    iStack_28 = 0xc;
    iStack_18 = (*(uint *)(param_2 + 0x54) >> 1) + *(int *)(param_2 + 0x4c);
    uStack_1c = (*(uint *)(param_2 + 0x58) >> 1) + *(int *)(param_2 + 0x50);
    if (piVar8 == (int *)0x8e) {
      iStack_28 = 8;
    }
    else if (piVar8 == (int *)0x90) {
      iStack_28 = 8;
    }
    auStack_c[0] = *(uint *)(*(int *)(param_1 + 0xf0 + (int)piVar8 * 4) + 4);
    iStack_14 = iStack_18;
    uStack_10 = uStack_1c;
    this = (void *)sub_102dc220((int)piVar8);
    iStack_24 = (extraout_EDX * 100) / (int)this;
    iVar3 = sub_102ee3a0(this,iStack_14,param_2,param_1,uStack_10);
    if (iVar3 == 0) {
      iVar4 = rand();
      iVar4 = iVar4 % 100;
      iVar3 = *(int *)(param_1 + 0x1df4);
      if (iVar3 == 0xc) {
        if (((*(int *)(param_1 + 0x2628) == 0) && (0x8c < iVar4 + iStack_24)) &&
           (piVar5 = sub_102db160(param_1,param_2,(uint)piVar8,&iStack_18,(int *)&uStack_1c,0x397,1,
                                  iStack_28), piVar5 != (int *)0x0)) {
          *(uint32_t *)(param_1 + 0x2628) = 1;
          pWVar6 = (LPCWSTR)D2Lang_10011_102d0fb0((byte *)"MapEventNotifyHorazon");
          pCVar7 = sub_10237720(pWVar6);
          sub_1020f990(&stack0xffffffb0,pCVar7);
          functions_HelperFunctions_102cfe70(param_1,1);
          return;
        }
      }
      else if (iVar3 == 0xe) {
        if (((*(int *)(param_1 + 0x2628) < 3) &&
            ((*(int *)(param_1 + 0x2628) + 1) * 0x19 < iStack_24)) &&
           ((iVar4 < 0x19 &&
            (piVar5 = sub_102db160(param_1,param_2,(uint)piVar8,&iStack_18,(int *)&uStack_1c,0x399,1
                                   ,iStack_28), piVar5 != (int *)0x0)))) {
          *(int *)(param_1 + 0x2628) = *(int *)(param_1 + 0x2628) + 1;
          pWVar6 = (LPCWSTR)D2Lang_10011_102d0fb0((byte *)"MapEventNotifyDarkWanderer");
          pCVar7 = sub_10237720(pWVar6);
          sub_1020f990(&stack0xffffffb0,pCVar7);
          functions_HelperFunctions_102cfe70(param_1,1);
          return;
        }
      }
      else if (iVar3 == 0xb) {
        if (((*(int *)(param_1 + 0x2628) == 0) && (0x8c < iVar4 + iStack_24)) &&
           (piVar5 = sub_102db160(param_1,param_2,(uint)piVar8,&iStack_18,(int *)&uStack_1c,0x39a,1,
                                  iStack_28), piVar5 != (int *)0x0)) {
          piVar5[0x34] = 0xb;
          *(uint32_t *)(param_1 + 0x2628) = 1;
          pWVar6 = (LPCWSTR)D2Lang_10011_102d0fb0((byte *)"MapEventNotifyMendeln");
          pCVar7 = sub_10237720(pWVar6);
          sub_1020f990(&stack0xffffffb0,pCVar7);
          functions_HelperFunctions_102cfe70(param_1,1);
          return;
        }
      }
      else if (iVar3 == 0xf) {
        if ((((*(int *)(param_1 + 0x2628) < 3) &&
             ((*(int *)(param_1 + 0x2628) + 1) * 0x19 < iStack_24)) && (iVar4 < 0x19)) &&
           (piVar5 = sub_102db160(param_1,param_2,(uint)piVar8,&iStack_18,(int *)&uStack_1c,0x3b1,1,
                                  iStack_28), piVar5 != (int *)0x0)) {
          *(int *)(param_1 + 0x2628) = *(int *)(param_1 + 0x2628) + 1;
          pWVar6 = (LPCWSTR)D2Lang_10011_102d0fb0((byte *)"MapEventNotifyTreasure");
          pCVar7 = sub_10237720(pWVar6);
          sub_1020f990(&stack0xffffffb0,pCVar7);
          functions_HelperFunctions_102cfe70(param_1,1);
          return;
        }
      }
      else if (iVar3 == 0x10) {
        iVar3 = *(int *)(param_1 + 0x2628);
        if (iVar3 < 1) {
          if ((iVar4 < 0x14) && (0xf < (int)auStack_c[0])) {
            iStack_14 = 0;
            uStack_10 = 0;
            sub_102daeb0(param_2,&iStack_14,(int *)&uStack_10);
            piVar5 = sub_102db160(param_1,param_2,(uint)piVar8,&iStack_14,(int *)&uStack_10,0x251,2,
                                  iStack_28);
            uVar16 = uStack_10;
            iVar3 = iStack_14;
            if (piVar5 != (int *)0x0) {
              sub_102db070(param_1,(uint)piStack_20,iStack_14 + 2,uStack_10,0x176,2);
              sub_102db070(param_1,(uint)piStack_20,iVar3,uVar16 + 2,0x176,2);
              sub_102db070(param_1,(uint)piStack_20,iVar3 + -1,uVar16 - 1,0x176,2);
              *(int *)(param_1 + 0x2628) = *(int *)(param_1 + 0x2628) + 1;
              pWVar6 = (LPCWSTR)D2Lang_10011_102d0fb0((byte *)"MapEventNotifyTainted");
              pCVar7 = sub_10237720(pWVar6);
              sub_1020f990(&stack0xffffffb0,pCVar7);
              functions_HelperFunctions_102cfe70(param_1,1);
              return;
            }
          }
        }
        else if ((1 < iVar3) && (iVar3 < 0x32)) {
          iVar3 = rand();
          iVar3 = iVar3 % 6;
          uStack_1c = 0x3e1;
          if (iVar3 != 1) {
            uStack_1c = 0;
          }
          if (iVar3 == 2) {
            uStack_1c = 0x3e2;
          }
          else if (iVar3 == 3) {
            uStack_1c = 0x3e3;
          }
          else if (iVar3 != 1) goto LAB_102c6e00;
          auStack_c[0] = functions_HelperFunctions_102ce660(uStack_1c);
          iStack_18 = ((uint)*(byte *)(auStack_c[0] + 0x30) - (uint)*(byte *)(auStack_c[0] + 0x2f))
                      + 1;
          if (1 < iStack_18) {
            iVar3 = rand();
            iStack_18 = (uint)*(byte *)(auStack_c[0] + 0x2f) + iVar3 % iStack_18;
          }
          if (0 < iStack_18) {
            do {
              iVar3 = rand();
              iStack_28 = iStack_14 + -5 + iVar3 % 10;
              iVar3 = rand();
              auStack_c[0] = (uStack_10 - 5) + iVar3 % 10;
              sub_102db160(param_1,param_2,(uint)piVar8,&iStack_28,(int *)auStack_c,uStack_1c,1,10);
              iStack_18 = iStack_18 + -1;
            } while (iStack_18 != 0);
          }
        }
LAB_102c6e00:
        if ((0x5a < iStack_24) && (*(int *)(param_1 + 0x2628) - 2U < 0x30)) {
          functions_D2NewFunctions_102c1160(param_1,(int)piVar8);
        }
      }
      else if (iVar3 != 0x11) {
        if (iVar3 == 0x12) {
          if (((*(int *)(param_1 + 0x2628) < 1) && (0x8c < iVar4 + iStack_24)) &&
             (piVar5 = sub_102db160(param_1,param_2,(uint)piVar8,&iStack_14,(int *)&uStack_10,0x93,1
                                    ,iStack_28), piVar5 != (int *)0x0)) {
            sub_102db070(param_1,(uint)piVar8,iStack_14,uStack_10,0x252,2);
            *(int *)(param_1 + 0x2628) = *(int *)(param_1 + 0x2628) + 1;
            pWVar6 = (LPCWSTR)D2Lang_10011_102d0fb0((byte *)"MapEventNotifyGheed");
            pCVar7 = sub_10237720(pWVar6);
            sub_1020f990(&stack0xffffffb0,pCVar7);
            functions_HelperFunctions_102cfe70(param_1,1);
            return;
          }
        }
        else if (iVar3 == 0x13) {
          if ((*(int *)(param_1 + 0x2628) < 1) && (0x8c < iVar4 + iStack_24)) {
            auStack_c[0] = uStack_10;
            piVar5 = sub_102db160(param_1,param_2,(uint)piVar8,&iStack_14,(int *)auStack_c,0x263,2,
                                  iStack_28);
            if (piVar5 != (int *)0x0) {
              *(uint32_t *)(param_1 + 0x2628) = 1;
              pWVar6 = (LPCWSTR)D2Lang_10011_102d0fb0((byte *)"MapEventNotifyShard");
              pCVar7 = sub_10237720(pWVar6);
              sub_1020f990(&stack0xffffffb0,pCVar7);
              functions_HelperFunctions_102cfe70(param_1,1);
              return;
            }
          }
        }
        else if (iVar3 == 0x14) {
          bVar1 = *(byte *)(param_1 + 0x2628);
          if ((((bVar1 < 3) && ((int)((uint)bVar1 * 0x14 + 0x19) < iStack_24)) && (iVar4 < 0x19)) &&
             (piVar5 = sub_102db160(param_1,param_2,(uint)piVar8,&iStack_18,(int *)&uStack_1c,0x49e,
                                    1,iStack_28), piVar5 != (int *)0x0)) {
            *(byte *)(param_1 + 0x2628) = bVar1 + 1;
            pWVar6 = (LPCWSTR)D2Lang_10011_102d0fb0((byte *)"MapEventNotifyInvaders");
            pCVar7 = sub_10237720(pWVar6);
            sub_1020f990(&stack0xffffffb0,pCVar7);
            functions_HelperFunctions_102cfe70(param_1,1);
            return;
          }
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x1df4) == 0x28) {
    iStack_18 = (*(uint *)(param_2 + 0x54) >> 1) + *(int *)(param_2 + 0x4c);
    iStack_14 = (*(uint *)(param_2 + 0x58) >> 1) + *(int *)(param_2 + 0x50);
    iVar3 = sub_102dc220((int)piVar8);
    uStack_10 = (*(int *)(*(int *)(param_1 + 0xf0 + extraout_ECX_00 * 4) + 4) * 100) / iVar3;
    iVar3 = rand();
    piVar8 = piStack_20;
    iVar3 = iVar3 % 100;
    if (piStack_20 == (int *)0x85) {
      if (((0x6e < (int)(uStack_10 + iVar3)) && ((*(byte *)(param_1 + 0x2628) & 0x20) == 0)) &&
         (piVar5 = sub_102db160(param_1,param_2,0x85,&iStack_18,&iStack_14,0x2c3,1,6),
         piVar5 != (int *)0x0)) {
        *(uint *)(param_1 + 0x2628) = *(uint *)(param_1 + 0x2628) | 0x20;
        return;
      }
    }
    else if (piStack_20 == (int *)0x86) {
      if (((0x6e < (int)(uStack_10 + iVar3)) && ((*(byte *)(param_1 + 0x2628) & 0x40) == 0)) &&
         (piVar5 = sub_102db160(param_1,param_2,0x86,&iStack_18,&iStack_14,0x2c4,1,6),
         piVar5 != (int *)0x0)) {
        *(uint *)(param_1 + 0x2628) = *(uint *)(param_1 + 0x2628) | 0x40;
        return;
      }
    }
    else if (((piStack_20 == (int *)0x87) && (0x6e < (int)(uStack_10 + iVar3))) &&
            (((*(byte *)(param_1 + 0x2628) & 0x80) == 0 &&
             (piVar5 = sub_102db160(param_1,param_2,0x87,&iStack_18,&iStack_14,0x2c2,1,6),
             piVar5 != (int *)0x0)))) {
      *(uint *)(param_1 + 0x2628) = *(uint *)(param_1 + 0x2628) | 0x80;
      return;
    }
  }
  iVar3 = *(int *)(param_1 + 0x1df4);
  if (iVar3 == 0x2c) {
    if (piVar8 != (int *)0xa8) goto LAB_102c750e;
    if (*(int *)(param_1 + 0x2628) == 0) {
      *(uint32_t *)(param_1 + 0x2628) = 1;
      sub_102db070(param_1,0xa8,0x4e50,0x36fd,0x250,2);
      sub_102db070(param_1,0xa8,0x4e45,0x36fd,0x24d,2);
      sub_102db070(param_1,0xa8,0x4e50,0x36f3,0x24e,2);
      sub_102db070(param_1,0xa8,0x4e5a,0x36fd,0x24f,2);
      iVar3 = *(int *)(param_1 + 0x1df4);
      goto LAB_102c722f;
    }
  }
  else {
LAB_102c722f:
    if (iVar3 == 0x2b) {
      if (piVar8 == (int *)0xa1) {
        if (*(char *)(param_1 + 0x262a) == '\0') {
          *(uint8_t *)(param_1 + 0x262a) = 1;
          piVar8 = sub_102db070(param_1,0xa1,0x4862,0x363d,0x249,2);
          piVar5 = sub_102db070(param_1,0xa1,0x476b,0x35d3,0x24b,2);
          sub_102db500(param_1,(int)piVar8,(uint)piVar5,1);
          sub_102db070(param_1,0xa1,0x476c,0x35bf,0x3a6,1);
          piVar8 = piStack_20;
        }
        iVar9 = *(int *)(param_2 + 0x50);
        iVar11 = *(int *)(param_2 + 0x4c);
        iVar10 = 0x4794;
        iVar4 = 0x35e7;
        iVar13 = 0x3597;
        iVar3 = 0x4744;
        uVar16 = *(int *)(param_2 + 0x54) + iVar11;
        iVar14 = *(int *)(param_2 + 0x58) + iVar9;
      }
      else if (piVar8 == (int *)0xa2) {
        if (*(char *)(param_1 + 0x262a) == '\x02') {
          *(uint8_t *)(param_1 + 0x262a) = 3;
          piVar8 = sub_102db070(param_1,0xa2,0x488a,0x3a25,0x249,2);
          piVar5 = sub_102db070(param_1,0xa2,0x47d7,0x3961,0x24b,2);
          sub_102db500(param_1,(int)piVar8,(uint)piVar5,1);
          sub_102db070(param_1,0xa2,0x47d3,0x394b,0x3a5,1);
          piVar8 = piStack_20;
        }
        iVar9 = *(int *)(param_2 + 0x50);
        iVar11 = *(int *)(param_2 + 0x4c);
        iVar10 = 0x47fb;
        iVar4 = 0x3973;
        iVar13 = 0x3923;
        iVar3 = 0x47ab;
        uVar16 = *(int *)(param_2 + 0x54) + iVar11;
        iVar14 = *(int *)(param_2 + 0x58) + iVar9;
      }
      else {
        if (piVar8 != (int *)0xa3) goto LAB_102c750e;
        if (*(char *)(param_1 + 0x262a) == '\x04') {
          *(uint8_t *)(param_1 + 0x262a) = 5;
          iVar3 = rand();
          if (iVar3 % 3 == 0) {
            iVar4 = 0x1590;
            iVar3 = 0x4fb1;
          }
          else if (iVar3 % 3 == 1) {
            iVar4 = 0x151c;
            iVar3 = 0x4ff0;
          }
          else {
            iVar4 = 0x1549;
            iVar3 = 0x5096;
          }
          piStack_20 = sub_102db070(param_1,0xa3,iVar3,iVar4,0x249,2);
          if (((piStack_20 == (int *)0x0) &&
              (piStack_20 = sub_102db070(param_1,0xa3,0x4fae,0x158d,0x249,2),
              piStack_20 == (int *)0x0)) &&
             (piStack_20 = sub_102db070(param_1,0xa3,0x4fed,0x1519,0x249,2),
             piStack_20 == (int *)0x0)) {
            piStack_20 = sub_102db070(param_1,0xa3,0x5093,0x1546,0x249,2);
          }
          piVar5 = sub_102db070(param_1,0xa3,0x4e98,0x1419,0x24b,2);
          sub_102db500(param_1,(int)piStack_20,(uint)piVar5,1);
          sub_102db070(param_1,0xa3,0x4e97,0x1403,0x3a8,1);
          sub_102db070(param_1,0xa3,0x4e9d,0x1403,0x3a7,1);
        }
        iVar9 = *(int *)(param_2 + 0x50);
        iVar11 = *(int *)(param_2 + 0x4c);
        iVar10 = 0x4ec2;
        iVar4 = 0x142b;
        iVar13 = 0x13db;
        iVar3 = 0x4e72;
        uVar16 = *(int *)(param_2 + 0x54) + iVar11;
        iVar14 = *(int *)(param_2 + 0x58) + iVar9;
      }
    }
    else {
LAB_102c750e:
      if (piVar8 != (int *)0xb4) goto LAB_102c7682;
      iVar3 = D2Common_10749(0xb4);
      iStack_18 = *(int *)(param_2 + 0x58) + *(int *)(param_2 + 0x50);
      uStack_1c = *(int *)(param_2 + 0x54) + *(int *)(param_2 + 0x4c);
      uStack_10 = *(int *)(iVar3 + 0x28) * 5;
      piStack_20 = (int *)(*(int *)(iVar3 + 0x24) * 5);
      iVar3 = functions_HelperFunctions_102cfbb0((int)piStack_20 + 0x41,(int)piStack_20 + 0x9b,uStack_10 + 0x122,
                           uStack_10 + 0x17c,*(int *)(param_2 + 0x4c),uStack_1c,
                           *(int *)(param_2 + 0x50),iStack_18);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = functions_HelperFunctions_102cfbb0((int)(piStack_20 + 0x6e),(int)piStack_20 + 0x212,uStack_10 + 0x375,
                           uStack_10 + 0x3cf,*(int *)(param_2 + 0x4c),uStack_1c,
                           *(int *)(param_2 + 0x50),iStack_18);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = functions_HelperFunctions_102cfbb0((int)piStack_20 + 0x113,(int)piStack_20 + 0x16d,uStack_10 + 0x26c,
                           uStack_10 + 0x2c6,*(int *)(param_2 + 0x4c),uStack_1c,
                           *(int *)(param_2 + 0x50),iStack_18);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = functions_HelperFunctions_102cfbb0((int)(piStack_20 + 200),(int)piStack_20 + 0x37a,uStack_10 + 0x221,
                           uStack_10 + 0x27b,*(int *)(param_2 + 0x4c),uStack_1c,
                           *(int *)(param_2 + 0x50),iStack_18);
      if (iVar3 != 0) {
        return;
      }
      iVar9 = *(int *)(param_2 + 0x50);
      iVar4 = uStack_10 + 0xff;
      iVar11 = *(int *)(param_2 + 0x4c);
      iVar13 = uStack_10 + 0xa5;
      iVar10 = (int)piStack_20 + 0x36b;
      iVar3 = (int)piStack_20 + 0x311;
      uVar16 = uStack_1c;
      iVar14 = iStack_18;
    }
    iVar3 = functions_HelperFunctions_102cfbb0(iVar3,iVar10,iVar13,iVar4,iVar11,uVar16,iVar9,iVar14);
    if (iVar3 != 0) {
      return;
    }
  }
LAB_102c7682:
  if ((*(int *)(param_1 + 0x1df4) == 0x1f) && (piVar8 == (int *)0xb6)) {
    iVar4 = *(int *)(param_2 + 0x50);
    iVar13 = *(int *)(param_2 + 0x4c);
    iVar10 = *(int *)(param_2 + 0x58) + iVar4;
    iVar9 = *(int *)(param_2 + 0x54) + iVar13;
    iVar11 = 0x5a88;
    iVar15 = 0x263a;
    iVar14 = 0x25c2;
    iVar3 = 0x5a10;
  }
  else {
    if (piVar8 != (int *)0xa6) goto LAB_102c76f5;
    iVar4 = *(int *)(param_2 + 0x50);
    iVar13 = *(int *)(param_2 + 0x4c);
    iVar10 = *(int *)(param_2 + 0x58) + iVar4;
    iVar9 = *(int *)(param_2 + 0x54) + iVar13;
    iVar11 = 0x5191;
    iVar15 = 0x334b;
    iVar14 = 0x32e7;
    iVar3 = 0x512d;
  }
  iVar3 = functions_HelperFunctions_102cfbb0(iVar3,iVar11,iVar14,iVar15,iVar13,iVar9,iVar4,iVar10);
  if (iVar3 != 0) {
    return;
  }
LAB_102c76f5:
  sub_6fc67a20((void *)param_1,(void *)param_2);
  return;
}


// 0x102c7710  (ghidra: FUN_102c7710)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall functions_D2NewFunctions_102c7710(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *this;
  uint64_t uVar5;
  uint32_t local_2c;
  uint8_t local_28 [4];
  uint32_t local_24;
  uint8_t local_20 [4];
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if (param_1 == 0) {
    return;
  }
  if (param_2 == (uint *)0x0) {
    return;
  }
  if (5 < *param_2) {
    return;
  }
  local_1c = param_1;
  uVar5 = D2Common_10331((int *)param_2);
  local_c = (int)uVar5;
  local_14 = 0;
  local_10 = 0;
  uVar5 = functions_HelperFunctions_102cfc20((int *)param_2,&local_14,&local_10,&local_10);
  iVar1 = functions_ItemFunctions_102daae0(&local_c,(uint *)((ulonglong)uVar5 >> 0x20),&local_10,1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = 0;
  do {
    if (0x31 < iVar1) {
      return;
    }
    iVar1 = iVar1 + 1;
    local_18 = 0;
    iVar2 = rand();
    if (iVar2 % 3 == 0) {
      local_18 = 1;
      sub_102bacf0(&DAT_104e3210);
      rand();
      uVar5 = functions_D2ServerFunctions_1026cd50(&DAT_104e3210,local_20);
      piVar3 = sub_102bad60(&local_24,(int)((ulonglong)uVar5 >> 0x20),*(uint32_t *)uVar5);
      piVar3 = (int *)sub_1025f2f0(piVar3);
      iVar2 = *piVar3;
      this = extraout_ECX;
    }
    else {
      sub_102bacf0(&DAT_104e2fdc);
      rand();
      uVar5 = functions_D2ServerFunctions_1026cd50(&DAT_104e2fdc,local_28);
      piVar3 = sub_102bad60(&local_2c,(int)((ulonglong)uVar5 >> 0x20),*(uint32_t *)uVar5);
      piVar3 = (int *)sub_1025f2f0(piVar3);
      iVar2 = *piVar3;
      this = extraout_ECX_00;
      if ((iVar2 != 0x10b) && (iVar2 != 0x100)) {
        iVar2 = D2Common_10285(2,iVar2);
        this = extraout_ECX_01;
      }
    }
    piVar3 = (int *)sub_102ec930(this,iVar2,local_c,local_1c,local_14,local_10,1);
  } while (piVar3 == (int *)0x0);
  iVar1 = 2;
  if (iVar2 == 0x220) {
    iVar1 = 1;
  }
  else if (local_18 == 0) {
    iVar1 = 4;
    iVar2 = 100;
    goto LAB_102c787d;
  }
  iVar2 = 0x32;
LAB_102c787d:
  uVar5 = D2Common_10973((int)piVar3,7,0);
  D2Common_10887(piVar3,7,(int)uVar5 * iVar1,0);
  puVar4 = D2Common_11013(*(uint *)(local_1c + 0x1c),8,0,*piVar3,piVar3[3]);
  if (puVar4 != (uint *)0x0) {
    D2Common_10785((int)puVar4,0xd5);
    D2Common_10188(puVar4,0x19,iVar2,0);
    iVar2 = iVar2 * 2;
    D2Common_10188(puVar4,0x149,iVar2,0);
    D2Common_10188(puVar4,0x14b,iVar2,0);
    D2Common_10188(puVar4,0x14a,iVar2,0);
    D2Common_10188(puVar4,0x14c,iVar2,0);
    D2Common_10807((int)piVar3,puVar4,1);
    D2Common_10911((int)puVar4,0x1027dd70);
    D2Common_10158(piVar3);
  }
  return;
}


// 0x102c7950  (ghidra: FUN_102c7950)  [range]
void __fastcall
functions_D2NewFunctions_102c7950(int param_1,int param_2,int *param_3,int param_4,uint param_5,uint8_t param_6)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  ushort *puVar11;
  short *psVar12;
  uint64_t uVar13;
  uint32_t in_stack_00000011;
  int local_c;
  uint32_t _param_6;   /* not traced by Ghidra: value with no visible source */
  
  piVar4 = param_3;
  if (((param_2 != 0) && (param_3 != (int *)0x0)) && (param_4 != 0)) {
    iVar7 = *(int *)(param_1 + 0x148);
    iVar2 = *(int *)(*p_D2Common_DAT_6fde9e1c + 0xbd4);
    iVar5 = D2Common_10913((int)param_3);
    iVar5 = (iVar5 * (_param_6 - 1) * iVar7) / 100 + iVar5;
    D2Common_10887(param_3,6,iVar5,0);
    D2Common_10887(param_3,7,iVar5,0);
    puVar6 = D2Common_11013(*(uint *)(param_2 + 0x1c),0,0,*param_3,param_3[3]);
    if (puVar6 != (uint *)0x0) {
      D2Common_10807((int)param_3,puVar6,1);
      param_3 = (int *)0x6;
      puVar9 = (uint *)(param_1 + 0x68);
      puVar11 = (ushort *)(param_1 + 0x54);
      do {
        uVar1 = *puVar11;
        if ((int)(uint)uVar1 < iVar2) {
          uVar13 = D2Common_10786((uint)piVar4,*puVar9,param_5,_param_6);
          D2Common_10188(puVar6,(uint)uVar1,(int)uVar13,0);
        }
        puVar11 = puVar11 + 1;
        puVar9 = puVar9 + 1;
        param_3 = (int *)((int)param_3 + -1);
      } while (param_3 != (int *)0x0);
      param_3 = (int *)0x5;
      puVar9 = (uint *)(param_1 + 0xa4);
      puVar11 = (ushort *)(param_1 + 0x98);
      do {
        uVar1 = *puVar11;
        if ((int)(uint)uVar1 < iVar2) {
          uVar13 = D2Common_10786((uint)piVar4,*puVar9,param_5,_param_6);
          D2Common_10188(puVar6,(uint)uVar1,(int)uVar13,0);
        }
        puVar11 = puVar11 + 1;
        puVar9 = puVar9 + 1;
        param_3 = (int *)((int)param_3 + -1);
      } while (param_3 != (int *)0x0);
      local_c = sub_10245ba0();
      if (local_c != 0) {
        param_3 = (int *)(param_1 + 0xd0);
        psVar12 = (short *)(param_1 + 0xc4);
        do {
          if (-1 < *psVar12) {
            uVar10 = (uint)*psVar12;
            iVar7 = functions_HelperFunctions_102ce5a0(uVar10);
            uVar3 = *param_3;
            uVar13 = D2Common_10786(param_4,uVar3,param_5,_param_6);
            if ((iVar7 != 0) && (0 < (int)uVar3)) {
              D2Common_10302(piVar4,uVar10,(int)uVar13,0,0,0);
              D2Common_10418(piVar4);
              if (*piVar4 == 0) {
                PLAYER_PlayerPets_6fcb6fa0(param_2,piVar4);
              }
              if ((*(byte *)(iVar7 + 4) & 0x20) != 0) {
                functions_D2NewFunctions_Wraps_D2Game_SKILLS_Skills_102c8190(piVar4,0,uVar10,0xffffffff);
              }
            }
          }
          param_3 = param_3 + 1;
          psVar12 = psVar12 + 1;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
      if (((piVar4[1] != 0x3a4) && (piVar8 = functions_D2NewFunctions_102cb180(piVar4,0), piVar8 != (int *)0x0)) &&
         (*piVar8 == 0)) {
        functions_SaveFunctions_102e9380(piVar8,(int)piVar4,param_5,param_6);
      }
    }
  }
  return;
}


// 0x102c7b60  (ghidra: FUN_102c7b60)  [range]
void functions_D2NewFunctions_Hook_sub_6fc8a9d0_102c7b60(uint *param_1,int param_2,int param_3,uint param_4)

{
  D2Common_10261(param_1,0x43,0x23,param_4);
  D2Common_10261(param_1,param_2,param_3,param_4);
  return;
}


// 0x102c7b80  (ghidra: FUN_102c7b80)  [range]
void __fastcall functions_D2NewFunctions_102c7b80(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint64_t uVar2;
  
  if (param_4 != 0) {
    uVar2 = D2Common_10973(param_4,0x46,0);
    if (1 < (int)uVar2) {
      iVar1 = (int)uVar2 + -1;
      D2Common_10887((int *)param_4,0x46,iVar1,0);
      if ((param_2 != 0) && (*(int *)(param_2 + 0x14) != 0)) {
        sub_102ede30(param_4,0,*(uint32_t *)(*(int *)(param_2 + 0x14) + 0x9c),1,0x46,iVar1);
      }
      sub_6fc8b070(param_1,(int *)param_2,param_3,0);
      return;
    }
  }
  sub_6fc8b070(param_1,(int *)param_2,param_3,param_4);
  return;
}


// 0x102c7c00  (ghidra: FUN_102c7c00)  [range]
uint32_t __fastcall functions_D2NewFunctions_102c7c00(int param_1)

{
  uint32_t uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = functions_D2NewFunctions_102c7c10();
  return uVar1;
}


// 0x102c7c10  (ghidra: FUN_102c7c10)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t functions_D2NewFunctions_102c7c10(void)

{
  bool bVar1;
  int *piVar2;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  uint8_t local_14 [4];
  uint8_t local_10 [4];
  int local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  sub_10228040(&DAT_104e3130,local_10,&local_c);
  piVar2 = (int *)sub_102280a0(&DAT_104e3130,local_14);
  bVar1 = sub_1023d8f0(this,piVar2);
  if (!bVar1) {
    sub_10228040(&DAT_104e2fd4,local_14,&local_c);
    piVar2 = (int *)sub_102280a0(&DAT_104e2fd4,local_10);
    bVar1 = sub_1023d8f0(this_00,piVar2);
    if (!bVar1) {
      sub_10228040(&DAT_104e31b8,local_14,&local_c);
      piVar2 = (int *)sub_102280a0(&DAT_104e31b8,local_10);
      bVar1 = sub_1023d8f0(this_01,piVar2);
      if (!bVar1) {
        sub_10228040(&DAT_104e31c0,local_14,&local_c);
        piVar2 = (int *)sub_102280a0(&DAT_104e31c0,local_10);
        bVar1 = sub_1023d8f0(this_02,piVar2);
        if (!bVar1) {
          sub_10228040(&DAT_104e31a0,local_14,&local_c);
          piVar2 = (int *)sub_102280a0(&DAT_104e31a0,local_10);
          bVar1 = sub_1023d8f0(this_03,piVar2);
          if (!bVar1) {
            sub_10228040(&DAT_104e3010,local_14,&local_c);
            piVar2 = (int *)sub_102280a0(&DAT_104e3010,local_10);
            bVar1 = sub_1023d8f0(this_04,piVar2);
            if (!bVar1) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}


// 0x102c7d70  (ghidra: FUN_102c7d70)  [range]
bool functions_D2NewFunctions_102c7d70(int param_1)

{
  return (bool)('\x01' - (10 < param_1 - 0x23dU));
}


// 0x102c7d90  (ghidra: FUN_102c7d90)  [range]
uint32_t functions_D2NewFunctions_102c7d90(int param_1)

{
  if (((((param_1 != 0x3b) && (param_1 != 0x3c)) && (param_1 != 100)) &&
      ((((param_1 != 0x248 && (param_1 != 0x249)) &&
        ((param_1 != 0x24a && ((param_1 != 0x24b && (param_1 != 0x253)))))) && (param_1 != 0x254))))
     && (((param_1 != 0x255 && (param_1 != 0x256)) && (param_1 != 599)))) {
    return 0;
  }
  return 1;
}


// 0x102c7e00  (ghidra: FUN_102c7e00)  [range]
uint32_t functions_D2NewFunctions_102c7e00(uint *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  uint32_t extraout_var;
  uint uVar2;
  
  if (((param_4 != 0) && (*(int *)(param_4 + 0xc) != 0)) && (*(int *)(param_4 + 0x10) == 0x3c)) {
    bVar1 = functions_HelperFunctions_102ce890((uint)*(byte *)(*(int *)(param_4 + 0xc) + 4));
    if (CONCAT31(extraout_var,bVar1) == 0) {
      return 1;
    }
  }
  uVar2 = D2Common_10174(param_1,param_2,param_3);
  return uVar2;
}


// 0x102c7e40  (ghidra: FUN_102c7e40)  [range]
void functions_D2NewFunctions_102c7e40(int *param_1,int param_2)

{
  int *piVar1;
  
  if ((((param_1 == (int *)0x0) || (param_2 == 0)) ||
      (piVar1 = functions_D2NewFunctions_102cb180(param_1,0), piVar1 == (int *)0x0)) || (*piVar1 != 0)) {
    sub_102edb70(param_1,param_2);
    return;
  }
  if (param_1[4] == 0xc) {
    return;
  }
  if (param_1[4] == 0) {
    return;
  }
  sub_102eda40(param_1,param_2,piVar1,3,0,0,0);
  return;
}


// 0x102c7ea0  (ghidra: FUN_102c7ea0)  [range]
void functions_D2NewFunctions_102c7ea0(int param_1,uint32_t param_2,int param_3)

{
  int iVar1;
  uint64_t uVar2;
  
  sub_102edba0(param_1,param_2,param_3);
  if ((*(int *)(param_1 + 0x14) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x28), iVar1 != 0)) {
    if (*(int *)(param_3 + 8) == 0x36f) {
      *(uint32_t *)(param_3 + 0x4c) = *(uint32_t *)(iVar1 + 0x1c);
    }
    else {
      if (*(int *)(param_3 + 8) == 0x3b1) {
        *(uint32_t *)(param_3 + 0x4c) = *(uint32_t *)(iVar1 + 0x14);
        return;
      }
      uVar2 = D2Common_10871(param_1,0xd5);
      if ((int)uVar2 != 0) {
        *(uint32_t *)(param_3 + 0x4c) = 0xd5;
        return;
      }
    }
  }
  return;
}


// 0x102c7f10  (ghidra: FUN_102c7f10)  [range]
void functions_D2NewFunctions_102c7f10(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  uint32_t extraout_var;
  int *piVar6;
  uint *puVar7;
  void *this;
  int iVar8;
  uint64_t uVar9;
  uint8_t local_c [4];
  uint8_t local_8 [4];
  
  iVar3 = param_3;
  iVar8 = param_2;
  piVar4 = param_1;
  uVar1 = *(uint *)(param_3 + 0x18);
  if ((((uVar1 & 0x400) != 0) && (-1 < (char)uVar1)) && ((uVar1 & 0x100) == 0)) {
    *(uint *)(param_3 + 0x18) = uVar1 & 0xfffffbff;
  }
  sub_102edbe0(param_1,param_2,param_3);
  if ((piVar4[5] != 0) && (iVar2 = *(int *)(piVar4[5] + 0x28), iVar2 != 0)) {
    if (*(int *)(iVar3 + 8) == 0x36f) {
      *(uint32_t *)(iVar2 + 0x1c) = *(uint32_t *)(iVar3 + 0x4c);
    }
    else if (*(int *)(iVar3 + 8) == 0x3b1) {
      *(uint32_t *)(iVar2 + 0x14) = *(uint32_t *)(iVar3 + 0x4c);
    }
    else {
      uVar9 = D2Common_10331(piVar4);
      param_3 = (int)uVar9;
      if (param_3 != 0) {
        uVar9 = D2Common_10826(param_3);
        bVar5 = functions_HelperFunctions_102ce890((int)uVar9);
        if ((CONCAT31(extraout_var,bVar5) != 0) &&
           (uVar9 = D2Common_10871((int)piVar4,0xc6), (int)uVar9 == 0)) {
          sub_102dbfe0(iVar8,piVar4,param_3);
        }
      }
      if (*(int *)(iVar3 + 0x4c) == 0xd5) {
        if (*(int *)(iVar8 + 0x1df4) == 0xe) {
          uVar9 = D2Common_10871((int)piVar4,0xd5);
          if (((int)uVar9 != 0) ||
             (param_3 = (int)D2Common_11013(*(uint *)(iVar8 + 0x1c),8,0,*piVar4,piVar4[3]),
             (uint *)param_3 == (uint *)0x0)) goto LAB_102c80b5;
          param_1 = (int *)piVar4[1];
          sub_10228040(&DAT_104e3210,local_8,(int *)&param_1);
          piVar6 = (int *)sub_102280a0(&DAT_104e3210,local_c);
          bVar5 = sub_1023d8f0(this,piVar6);
          iVar8 = 100;
          if (bVar5) {
            iVar8 = 0x32;
          }
          D2Common_10785(param_3,0xd5);
          D2Common_10188((uint *)param_3,0x19,iVar8,0);
          iVar8 = iVar8 * 2;
          D2Common_10188((uint *)param_3,0x149,iVar8,0);
          D2Common_10188((uint *)param_3,0x14b,iVar8,0);
          D2Common_10188((uint *)param_3,0x14a,iVar8,0);
          puVar7 = (uint *)param_3;
        }
        else {
          if (((*(int *)(iVar8 + 0x1df4) != 0x21) ||
              (uVar9 = D2Common_10871((int)piVar4,0xd5), (int)uVar9 != 0)) ||
             (puVar7 = D2Common_11013(*(uint *)(iVar8 + 0x1c),8,0,*piVar4,piVar4[3]),
             iVar8 = param_2, puVar7 == (uint *)0x0)) goto LAB_102c80b5;
          D2Common_10785((int)puVar7,0xd5);
          D2Common_10188(puVar7,0x19,5,0);
          D2Common_10188(puVar7,0x149,10,0);
          D2Common_10188(puVar7,0x14b,10,0);
          D2Common_10188(puVar7,0x14a,10,0);
          iVar8 = 10;
        }
        D2Common_10188(puVar7,0x14c,iVar8,0);
        D2Common_10807((int)piVar4,puVar7,1);
        D2Common_10911((int)puVar7,0x1027dd70);
        D2Common_10158(piVar4);
        iVar8 = param_2;
      }
    }
  }
LAB_102c80b5:
  if (((*(int *)(iVar8 + 0x1df4) == 0x10) && (0x31 < *(int *)(iVar8 + 0x2628))) &&
     ((iVar3 = *(int *)(iVar3 + 8), iVar3 == 0x3e2 || ((iVar3 == 0x3e1 || (iVar3 == 0x3e3)))))) {
    sub_102b0900(iVar8,(int)piVar4);
  }
  return;
}


// 0x102c8190  (ghidra: FUN_102c8190)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall functions_D2NewFunctions_Wraps_D2Game_SKILLS_Skills_102c8190(int *param_1,int param_2,uint param_3,uint param_4)

{
  short sVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  uint32_t uVar9;
  uint64_t uVar10;
  uint32_t *local_1c;
  uint *local_14;
  int local_10;
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_c = param_4;
  iVar8 = *p_D2Common_DAT_6fde9e1c;
  if (param_3 != 5) {
    uVar4 = D2Common_10494(param_1,0x55);
    if (uVar4 != 0) {
      D2Common_10945(param_1,0x55,0);
    }
    puVar5 = D2Common_10708((int)param_1,param_3,local_c);
    if (puVar5 != (uint *)0x0) {
      if (param_2 == 0) {
        local_14 = (uint *)D2Common_10507_102a3700((int)param_1);
        local_1c = (uint32_t *)D2Common_10828_102a3730((int)param_1);
        D2Common_10978((int)param_1,param_3,local_c);
      }
      else {
        local_14 = (uint *)D2Common_10828_102a3730((int)param_1);
        local_1c = (uint32_t *)D2Common_10507_102a3700((int)param_1);
        D2Common_10546((int)param_1,param_3,local_c);
      }
      local_c = 0xffffffff;
      D2Common_10537(puVar5,(int *)&local_c,(int *)0x0,(uint *)0x0,(uint *)0x0);
      if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
        uVar4 = param_1[3];
        iVar6 = D2Common_10920(param_1);
        GAME_SCmd_6fcab710(local_c,uVar4,*(uint *)(iVar6 + 0x9c),(uchar)param_2,(ushort)param_3,
                           local_c);
      }
      local_10 = param_2;
      if (local_14 != (uint *)0x0) {
        D2Common_10601(local_14,"..\\Source\\D2Game\\SKILLS\\Skills.cpp",0xdb3);
        iVar6 = sub_102edc40();
        if ((iVar6 != 0) && ((*(byte *)(iVar6 + 4) & 0x20) != 0)) {
          sVar1 = *(short *)(iVar6 + 0x80);
          if ((-1 < sVar1) || (local_10 = *(int *)(iVar8 + 0xc4), sVar1 < local_10)) {
            uVar10 = D2Common_10871((int)param_1,(int)sVar1);
            pvVar7 = (void *)uVar10;
            if (pvVar7 != (void *)0x0) {
              D2Common_11111_102a37f0((uint)param_1,pvVar7);
              D2Common_11108_102a3820(pvVar7);
            }
            D2Common_10945(param_1,(int)*(short *)(iVar6 + 0x80),0);
          }
          sub_102edc50();
          if (param_1 != (int *)0x0) {
            pcVar2 = (char *)param_1[0x37];
            while (pcVar3 = pcVar2, pcVar3 != (char *)0x0) {
              pcVar2 = *(char **)(pcVar3 + 0x24);
              if ((*pcVar3 == '\b') && (*(int *)(pcVar3 + 0x14) == -1)) {
                sub_102ec990();
              }
            }
          }
        }
      }
      iVar8 = functions_HelperFunctions_102ce5a0(param_3);
      if ((*(byte *)(iVar8 + 4) & 0x20) != 0) {
        uVar9 = sub_102edc50();
        sub_102edc60(local_10,param_1,uVar9,param_3);
      }
      if (((local_1c != (uint32_t *)0x0) && ((ushort *)*local_1c != (ushort *)0x0)) &&
         (iVar8 = functions_HelperFunctions_102ce5a0((uint)*(ushort *)*local_1c), (*(byte *)(iVar8 + 4) & 0x20) != 0)) {
        uVar9 = sub_102edc50();
        sub_102edc60((uint)(local_10 == 0),param_1,uVar9,(uint)*(ushort *)*local_1c);
      }
    }
  }
  return;
}


// 0x102c83a0  (ghidra: FUN_102c83a0)  [range]
void functions_D2NewFunctions_102c83a0(int *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = D2Common_10708((int)param_1,param_2,param_3);
  iVar2 = D2Common_10787(param_1,(int *)puVar1);
  if ((iVar2 != 2) && (iVar2 != 7)) {
    functions_D2NewFunctions_Wraps_D2Game_SKILLS_Skills_102c8190(param_1,1,param_2,param_3);
  }
  return;
}


// 0x102c83e0  (ghidra: FUN_102c83e0)  [range]
void __fastcall functions_D2NewFunctions_102c83e0(int param_1,int *param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  uint32_t extraout_var;
  uint64_t uVar3;
  
  if ((param_2 != (int *)0x0) && (*param_2 == 1)) {
    uVar3 = D2Common_10826(param_3);
    bVar2 = functions_HelperFunctions_102ce890((int)uVar3);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      bVar1 = *(byte *)(param_1 + 0x2629);
      uVar3 = D2Common_10871((int)param_2,0xf1);
      if ((int)uVar3 == 0) {
        functions_HelperFunctions_102d2af0(param_1,(int)param_2,(uint)bVar1);
      }
    }
  }
  return;
}


// 0x102c8430  (ghidra: FUN_102c8430)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint * functions_D2NewFunctions_102c8430(int param_1,uint32_t param_2,int param_3,int param_4,void *param_5,
                   uint32_t param_6,uint *param_7)

{
  int iVar1;
  uint32_t *puVar2;
  uint32_t *puVar3;
  uint32_t local_11c [33];
  void *local_98;
  uint32_t local_94;
  uint *local_90;
  uint32_t local_8c [33];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_98 = param_5;
  local_90 = param_7;
  local_94 = param_6;
  if (param_3 == 1) {
    local_90 = (uint *)sub_102ec930(param_5,param_1,param_5,param_4,param_6,param_7,param_2);
  }
  else {
    if (param_3 == 2) {
      if (param_1 - 0x23eU < 10) {
        local_90 = (uint *)sub_102eddb0(param_1,param_4,param_5,param_6,param_7,param_2);
        goto LAB_102c856f;
      }
      if (param_1 == 0x23d) {
        return local_90;
      }
    }
    local_90 = (uint *)functions_D2NewFunctions_102c85a0(param_6,param_7,param_4,param_5,1,param_2,0,param_3,param_1);
    if (param_3 == 4) {
      if (local_90 != (uint *)0x0) {
        memset(local_11c,0,0x84);
        puVar2 = local_11c;
        puVar3 = local_8c;
        for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        D2Common_10826((int)local_98);
        iVar1 = sub_102ed3c0(&local_90,param_4,local_8c,1);
        if (iVar1 != 0) goto LAB_102c856f;
        sub_6fd020a0((void *)param_4,(int *)local_90);
      }
      return local_90;
    }
  }
LAB_102c856f:
  if (local_90 != (uint *)0x0) {
    local_90[0x31] = local_90[0x31] | 0x3000000;
  }
  return local_90;
}


// 0x102c85a0  (ghidra: FUN_102c85a0)  [range]
int * functions_D2NewFunctions_102c85a0(uint32_t param_1,uint param_2,int param_3,uint32_t param_4,uint32_t param_5
                  ,uint32_t param_6,uint32_t param_7,int reg_ECX,uint reg_EDX)

{
  int *piVar1;
  uint32_t param_5;   /* not traced by Ghidra: value with no visible source */
  
  piVar1 = sub_6fd01d90(reg_ECX,reg_EDX,(byte)param_1,param_2,param_3,param_4,param_5,param_6,
                        param_7);
  sub_102dbfe0(param_3,piVar1,param_4);
  functions_D2NewFunctions_102c83e0(param_3,piVar1,param_4);
  return piVar1;
}


// 0x102c85f0  (ghidra: FUN_102c85f0)  [range]
short __fastcall functions_D2NewFunctions_102c85f0(int param_1,uint param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  ushort *puVar4;
  
  iVar3 = 0;
  iVar1 = **(int **)(param_1 + 0x14);
  puVar4 = (ushort *)(iVar1 + 0x170);
  while (*puVar4 != param_2) {
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
    if (7 < iVar3) {
      return 0;
    }
  }
  switch(*(uint8_t *)(iVar3 + 0x180 + iVar1)) {
  case 4:
    sVar2 = *(short *)(iVar1 + 0x3a);
    break;
  case 5:
    sVar2 = *(short *)(iVar1 + 0x3c);
    break;
  default:
    goto switchD_102c8625_caseD_6;
  case 7:
    sVar2 = *(short *)(iVar1 + 0x46);
    break;
  case 8:
    sVar2 = *(short *)(iVar1 + 0x3e);
    break;
  case 9:
    sVar2 = *(short *)(iVar1 + 0x40);
    break;
  case 10:
    sVar2 = *(short *)(iVar1 + 0x42);
    break;
  case 0xb:
    sVar2 = *(short *)(iVar1 + 0x44);
    break;
  case 0xe:
    sVar2 = *(short *)(iVar1 + 0x48);
  }
  if (sVar2 == 0) {
switchD_102c8625_caseD_6:
    sVar2 = 0;
  }
  return sVar2;
}


// 0x102c86a0  (ghidra: FUN_102c86a0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void functions_D2NewFunctions_102c86a0(uint32_t param_1,int param_2,uint32_t param_3,int *param_4,int param_5,
                 void *param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int extraout_ECX;
  int local_10;
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if (((param_4 == (int *)0x0) || (param_2 == 0)) || (param_6 == (void *)0x0)) {
    sub_102ee4c0();
    return;
  }
  bVar1 = *(char *)(param_4[5] + 0x435) - 1;
  if (bVar1 < 5) {
    uVar2 = D2Common_10585_102766e0(bVar1);
    iVar3 = functions_HelperFunctions_102ce630(uVar2);
    local_c = D2Common_10459(extraout_ECX);
    iVar4 = functions_HelperFunctions_102d0ca0((int)param_6,param_4,local_c);
    if (iVar4 != 0) {
      *(uint *)(param_5 + 0x1ac) = local_c;
      sub_102ee510();
      local_c = 0;
      local_10 = 0;
      piVar5 = D2Common_10816(*(int *)((int)param_6 + *(int *)(param_5 + 0x1ac) * 4 + 0xbc),uVar2,0,
                              (int *)&local_c,&local_10,2);
      if (piVar5 != (int *)0x0) {
        *(uint *)(param_5 + 0x1ac) = (uint)*(byte *)(iVar3 + 2);
        sub_102ee510();
        *(uint *)(param_5 + 0x1ac) = (uint)*(byte *)(iVar3 + 3);
        sub_102ee4c0();
        functions_SaveFunctions_102e9650(param_6,param_4);
        return;
      }
      goto LAB_102c87e7;
    }
  }
  sub_102ee4c0();
LAB_102c87e7:
  functions_SaveFunctions_102e9650(param_6,param_4);
  return;
}


// 0x102c8830  (ghidra: FUN_102c8830)  [range]
uint64_t
functions_D2NewFunctions_102c8830(uint32_t param_1,int param_2,int *param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint32_t uVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar6;
  uint64_t uVar7;
  uint32_t local_10;
  uint8_t local_c [4];
  int local_8;
  
  uVar7 = D2Common_10331(param_3);
  uVar7 = D2Common_10826((int)uVar7);
  iVar2 = param_4;
  iVar6 = (int)((ulonglong)uVar7 >> 0x20);
  iVar3 = param_5;
  if ((int)uVar7 == 0x6d) {
    uVar7 = functions_D2NewFunctions_102ce500(&param_2,(int *)&DAT_1037e4e4);
    local_8 = (int)uVar7;
    uVar7 = functions_D2NewFunctions_102ce500(&param_2,(int *)&DAT_1037e4dc);
    iVar3 = (int)uVar7;
    uVar7 = functions_D2NewFunctions_102ce500(&param_2,(int *)&DAT_1037e4d4);
    iVar6 = (int)uVar7;
    if ((((local_8 != 0) || (iVar3 != 0)) || (iVar6 != 0)) &&
       ((cVar1 = *(char *)(iVar2 + 0x6d), cVar1 == '\0' ||
        ((((local_8 != 0 || (iVar3 != 0)) || (iVar6 != 0)) &&
         ((cVar1 == '\x01' ||
          ((((local_8 != 0 || (iVar3 != 0)) || (iVar6 != 0)) && (cVar1 == '\x02')))))))))) {
      uVar5 = 0x73373072;
      if (iVar3 == 0) {
        if (iVar6 != 0) {
          uVar5 = 0x73393072;
        }
        uVar7 = sub_102ee530(uVar5,0x73393072);
        return uVar7;
      }
      uVar7 = sub_102ee530(0x73383072,local_8);
      return uVar7;
    }
    iVar3 = param_5;
    iVar6 = local_8;
    if (((param_5 == 6) && (param_6 == 1)) && (*(char *)(iVar2 + 0x6d) == '\x02')) {
      local_8 = 3;
      do {
        sub_102bacf0(&DAT_104e30b4);
        rand();
        uVar7 = functions_D2ServerFunctions_1026cd50(&DAT_104e30b4,local_c);
        piVar4 = sub_102bad60(&local_10,(int)((ulonglong)uVar7 >> 0x20),*(uint32_t *)uVar7);
        piVar4 = (int *)sub_1025f2f0(piVar4);
        uVar7 = functions_HelperFunctions_102ceb40(*piVar4);
        iVar6 = (int)((ulonglong)uVar7 >> 0x20);
        iVar3 = extraout_ECX;
        if ((int)uVar7 != 0) {
          uVar7 = sub_102ee530(extraout_ECX,iVar6);
          iVar6 = (int)((ulonglong)uVar7 >> 0x20);
          iVar3 = extraout_ECX_00;
        }
        local_8 = local_8 + -1;
      } while (local_8 != 0);
      local_8 = 0;
    }
  }
  uVar7 = sub_102ee530(iVar3,iVar6);
  return uVar7;
}


// 0x102c89a0  (ghidra: FUN_102c89a0)  [range]
int __fastcall functions_D2NewFunctions_102c89a0(uint32_t param_1,uint32_t param_2)

{
  int reg_ESI;
  uint64_t uVar1;
  
  uVar1 = sub_102ee530(param_1,param_2);
  reg_ESI = (int)uVar1;
  sub_102bb5f0(reg_ESI,0,reg_ESI);
  return reg_ESI;
}


// 0x102c89d0  (ghidra: FUN_102c89d0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * functions_D2NewFunctions_102c89d0(int param_1,int param_2,uint param_3,uint32_t param_4,uint32_t param_5,
                  uint param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint32_t extraout_var;
  int iVar4;
  int *piVar5;
  uint32_t *puVar6;
  uint unused_ECX;
  uint reg_EDX;
  void *this;
  int *reg_ESI;
  uint64_t uVar7;
  ulonglong uVar8;
  uint8_t auStack_158 [8];
  int aiStack_150 [7];
  uint uStack_134;
  uint uStack_130;
  int *local_12c;
  uint local_128;
  int iStack_124;
  uint32_t uStack_120;
  uint32_t uStack_11c;
  uint32_t uStack_118;
  uint32_t uStack_114;
  uint32_t uStack_110;
  uint32_t uStack_10c;
  uint32_t uStack_108;
  uint32_t uStack_104;
  uint32_t uStack_100;
  uint32_t uStack_fc;
  uint32_t uStack_f8;
  uint32_t uStack_f4;
  uint32_t uStack_f0;
  uint32_t uStack_ec;
  uint32_t uStack_e8;
  uint32_t uStack_e4;
  uint64_t uStack_d0;
  int iStack_b4;
  int *apiStack_b0 [2];
  int iStack_a8;
  int iStack_a4;
  uint uStack_9c;
  uint32_t uStack_98;
  uint uStack_94;
  uint uStack_90;
  int iStack_8c;
  uint16_t uStack_88;
  uint16_t uStack_86;
  uint32_t uStack_80;
  uint32_t uStack_70;
  uint uStack_30;
  uint32_t uStack_24;
  uint32_t uStack_20;
  int iStack_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_1039800c ^ (uint)auStack_158;
  local_12c = (int *)param_1;
  local_128 = param_3;
  if (((int)param_3 < 0) || (param_1 == 0)) {
    return (int *)0x0;
  }
  reg_ESI = (int *)0x0;
  uVar7 = D2Common_10331((int *)param_1);
  iStack_b4 = (int)uVar7;
  uVar7 = D2Common_10826(iStack_b4);
  aiStack_150[0] = (int)uVar7;
  uStack_134 = 0;
  uStack_130 = 0;
  functions_HelperFunctions_102cfc20(local_12c,&uStack_134,&uStack_130,&uStack_130);
  iStack_124 = functions_D2CommonFunctions_10268de0(local_12c);
  uVar7 = D2Common_10695(local_128);
  if (((int)uVar7 != 0) &&
     (uVar2 = D2Common_11034((uint)*(ushort *)((int)uVar7 + 0x11e),0x69), uVar2 != 0)) {
    param_4 = 2;
  }
  if (((iStack_b4 != 0) && (0 < (int)uStack_134)) && (0 < (int)uStack_130)) {
    iVar3 = functions_ItemFunctions_102dab80(&iStack_b4,(int *)&uStack_134,(int *)&uStack_130,1,0x805,0);
    if ((iVar3 != 0) &&
       (iVar3 = functions_ItemFunctions_102dac30(&iStack_b4,(int *)&uStack_134,(int *)&uStack_130,2,0x805,7,0),
       iVar3 == 0)) {
      return (int *)0x0;
    }
    iVar3 = functions_ItemFunctions_102daae0(&iStack_b4,&uStack_134,&uStack_130,1);
    if (iVar3 == 0) {
      return (int *)0x0;
    }
    memset(apiStack_b0,0,0x84);
    uStack_86 = *(uint16_t *)(param_2 + 0x78);
    uStack_9c = local_128;
    uStack_94 = uStack_134;
    uStack_90 = uStack_130;
    uStack_80 = param_4;
    iStack_8c = iStack_b4;
    iStack_a4 = iStack_124;
    uStack_70 = param_5;
    iStack_a8 = param_2;
    uStack_98 = 3;
    uStack_88 = 1;
    apiStack_b0[0] = local_12c;
    if ((*local_12c == 1) && (local_12c[1] == 0x187)) {
      uStack_30 = 1;
    }
    uStack_30 = uStack_30 | param_6;
    bVar1 = functions_HelperFunctions_102ce890(aiStack_150[0]);
    iStack_124 = CONCAT31(extraout_var,bVar1);
    if (((iStack_124 != 0) && (iVar3 = sub_102dba30(param_2,0xd), 0 < iVar3)) &&
       (iVar4 = rand(), iVar4 % 100 < iVar3)) {
      uStack_30 = uStack_30 | 4;
    }
    reg_ESI = (int *)sub_6fc31490(param_2,(int *)apiStack_b0,0);
    if (reg_ESI != (int *)0x0) {
      uVar8 = D2Common_10106(unused_ECX,reg_EDX,reg_ESI);
      if ((int)uVar8 == 7) {
        sub_1025e010(aiStack_150,(uint *)(reg_ESI[5] + 0x28));
        piVar5 = (int *)sub_1025e030(&local_128);
        bVar1 = sub_1023d8f0(this,piVar5);
        if (bVar1) {
          puVar6 = (uint32_t *)sub_1025dfd0((uint *)(reg_ESI[5] + 0x28));
          uStack_120 = *puVar6;
          uStack_11c = puVar6[1];
          uStack_118 = puVar6[2];
          uStack_114 = puVar6[3];
          uStack_110 = puVar6[4];
          uStack_10c = puVar6[5];
          uStack_108 = puVar6[6];
          uStack_104 = puVar6[7];
          uStack_100 = puVar6[8];
          uStack_fc = puVar6[9];
          uStack_f8 = puVar6[10];
          uStack_f4 = puVar6[0xb];
          uStack_f0 = puVar6[0xc];
          uStack_ec = puVar6[0xd];
          uStack_e8 = puVar6[0xe];
          uStack_e4 = puVar6[0xf];
          uStack_d0 = *(uint64_t *)(puVar6 + 0x14);
          aiStack_150[0] = puVar6[0x10];
          if ((0 < aiStack_150[0]) && (0 < (int)(uint)uStack_d0)) {
            uVar2 = functions_D2NewFunctions_102c5d10(local_12c);
            if (uVar2 % (uint)uStack_d0 == 0) {
              iStack_1c = aiStack_150[0];
              iStack_18 = aiStack_150[0];
              uStack_24 = 0x1b5;
              uStack_20 = 0;
              D2Common_10914(reg_ESI,(uint)&uStack_24,0);
            }
          }
        }
      }
      if (iStack_124 != 0) {
        aiStack_150[0] = sub_102dba30(param_2,6);
        if ((0 < aiStack_150[0]) && (iVar3 = rand(), iVar3 % 100 < aiStack_150[0])) {
          sub_102bb5f0((int)reg_ESI,0,reg_ESI);
        }
        aiStack_150[0] = sub_102dba30(param_2,0xb);
        if (((0 < aiStack_150[0]) && (uVar2 = D2Common_10360(reg_ESI), uVar2 != 0)) &&
           (iVar3 = rand(), iVar3 % 100 < aiStack_150[0])) {
          functions_HelperFunctions_102d3050(reg_ESI);
        }
      }
      functions_D2NewFunctions_102c8ea0(param_2,reg_ESI,iStack_b4);
    }
  }
  return reg_ESI;
}


// 0x102c8db0  (ghidra: FUN_102c8db0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint64_t __fastcall functions_D2NewFunctions_102c8db0(uint32_t param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint64_t uVar6;
  int *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  uVar3 = local_8;
  piVar5 = param_2;
  if ((((param_2 != (int *)0x0) && (*param_2 == 4)) && (uVar3 = param_2[5], uVar3 != 0)) &&
     ((iVar1 = *(int *)(uVar3 + 0x7c), iVar1 != 0 &&
      (*(uint32_t *)(uVar3 + 0x7c) = 0, param_2[4] == 3)))) {
    uVar6 = D2Common_10331(param_2);
    piVar5 = (int *)((ulonglong)uVar6 >> 0x20);
    uVar3 = 0;
    if ((uint *)uVar6 != (uint *)0x0) {
      local_10 = 0;
      local_c = 0;
      uVar6 = D2Common_10383((uint *)uVar6,&local_10,&local_c);
      uVar3 = (uint)uVar6;
      piVar5 = (int *)0x0;
      local_14 = (int *)0x0;
      uVar4 = local_c;
      if (0 < (int)local_c) {
        do {
          uVar3 = local_10;
          for (piVar5 = *(int **)(*(int *)(local_10 + (int)local_14 * 4) + 0x74);
              piVar5 != (int *)0x0; piVar5 = (int *)piVar5[0x3a]) {
            if (((*piVar5 == 0) && (uVar3 = piVar5[4], uVar3 != 0x11)) &&
               ((uVar3 != 0 && (piVar5[3] != iVar1)))) {
              uVar3 = 0;
              if (piVar5[5] != 0) {
                iVar2 = *(int *)(piVar5[5] + 0x9c);
                uVar3 = 0;
                if (iVar2 != 0) {
                  uVar3 = functions_ItemFunctions_102d6f30(iVar2,(int)param_2,3,0,0);
                }
              }
            }
            uVar4 = local_c;
          }
          piVar5 = (int *)((int)local_14 + 1);
          local_14 = piVar5;
        } while ((int)piVar5 < (int)uVar4);
      }
    }
  }
  return CONCAT44(piVar5,uVar3);
}


// 0x102c8ea0  (ghidra: FUN_102c8ea0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall functions_D2NewFunctions_102c8ea0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint32_t *puVar3;
  uint32_t uVar4;
  uint32_t extraout_ECX;
  uint uVar5;
  uint32_t extraout_ECX_00;
  uint64_t uVar6;
  uint8_t local_38 [4];
  uint32_t local_34;
  uint8_t local_30 [4];
  int local_2c;
  uint local_28;
  uint64_t local_24;
  uint local_1c;
  uint local_18;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314d3d;
  local_10 = ExceptionList;
  local_18 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((param_1 == 0) || (param_2 == (int *)0x0)) || (param_3 == 0)) {
    uVar4 = 0;
  }
  else {
    if (((*(int *)(param_1 + 0x26fa) != 0) &&
        (local_2c = param_1, iVar1 = functions_ItemFunctions_102d6f90(param_2), iVar1 != 0)) && (param_2[5] != 0)) {
      sub_1020f410(&local_24);
      sub_1020f960(extraout_ECX);
      local_8 = 0;
      local_28 = 0;
      local_1c = 0;
      D2Common_10383((uint *)param_3,&local_28,&local_1c);
      iVar1 = 0;
      uVar5 = local_1c;
      if (0 < (int)local_1c) {
        do {
          for (piVar2 = *(int **)(*(int *)(local_28 + iVar1 * 4) + 0x74); piVar2 != (int *)0x0;
              piVar2 = (int *)piVar2[0x3a]) {
            if (((*piVar2 == 0) && (piVar2[4] != 0x11)) && (piVar2[4] != 0)) {
              sub_10260230(&local_24,local_38,(uint)(piVar2 + 3));
            }
            uVar5 = local_1c;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)uVar5);
      }
      uVar6 = sub_102bacf0(&local_24);
      if ((int)uVar6 != 0) {
        sub_102bacf0(extraout_ECX_00);
        rand();
        uVar6 = functions_D2ServerFunctions_1026cd50(&local_24,local_30);
        piVar2 = sub_102bad60(&local_34,(int)((ulonglong)uVar6 >> 0x20),*(uint32_t *)uVar6);
        puVar3 = (uint32_t *)sub_1025f2f0(piVar2);
        *(uint32_t *)(param_2[5] + 0x7c) = *puVar3;
        sub_6fcaea80(local_2c,param_2,7,*(int *)(local_2c + 0xa8) + 0xfa,0x102c8db0,0,0);
      }
      thunk_FUN_1020f8e0(&local_24);
    }
    uVar4 = 1;
  }
  ExceptionList = local_10;
  return uVar4;
}


// 0x102c9030  (ghidra: FUN_102c9030)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __fastcall functions_D2NewFunctions_102c9030(int param_1,uint *param_2,uint32_t param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint64_t uVar4;
  int local_24;
  uint8_t local_20 [24];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  uVar3 = local_8;
  if ((((param_1 != 0) && (param_2 != (uint *)0x0)) && (*param_2 < 6)) &&
     (uVar3 = param_4 - 1U, param_4 - 1U < 1999)) {
    iVar1 = *p_D2Common_DAT_6fde9e1c;
    iVar2 = functions_HelperFunctions_102d15e0(param_1,(int)param_2);
    local_24 = 0;
    if (param_5 < *(uint *)(iVar1 + 0x9c0)) {
      sub_6fc32380(param_1,(int *)param_2,(int *)param_2,param_5 * 0x2c + *(int *)(iVar1 + 0x9bc),0,
                   iVar2,0,(int)local_20,&local_24,3);
    }
    uVar3 = param_5;
    if (param_4 - local_24 != 0) {
      uVar4 = sub_6fcaea80(param_1,(int *)param_2,7,*(int *)(param_1 + 0xa8) + 5,0x102c9030,
                           param_4 - local_24,param_5);
      uVar3 = (uint)uVar4;
    }
  }
  return uVar3;
}


// 0x102c90f0  (ghidra: FUN_102c90f0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __fastcall
functions_D2NewFunctions_102c90f0(int param_1,int *param_2,uint32_t param_3,uint param_4,uint param_5,
            uint32_t reg_EBX)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  int local_bc;
  int local_b8;
  int local_b4;
  int iStack_b0;
  int local_ac;
  int local_a8 [33];
  uint8_t auStack_24 [24];
  uint local_c;
  
  local_c = DAT_1039800c ^ (uint)&local_bc;
  uVar4 = param_4 - 1;
  if ((((uVar4 < 1999) && (param_1 != 0)) && (param_2 != (int *)0x0)) &&
     ((*param_2 == 2 && (piVar1 = (int *)param_2[0xb], uVar4 = 0, piVar1 != (int *)0x0)))) {
    local_ac = piVar1[3];
    local_b8 = piVar1[4];
    local_a8[0] = 10;
    local_a8[1] = 9;
    local_a8[2] = 7;
    local_a8[3] = 4;
    local_b4 = *piVar1;
    local_a8[4] = 0;
    local_a8[5] = 0xfffffffc;
    local_a8[6] = 0xfffffff9;
    local_a8[7] = 0xfffffff7;
    local_a8[8] = 0xfffffff6;
    local_a8[9] = 0xfffffff7;
    local_a8[10] = 0xfffffff9;
    local_a8[0xb] = 0xfffffffc;
    local_a8[0xc] = 0;
    local_a8[0xd] = 4;
    local_a8[0xe] = 7;
    local_a8[0xf] = 9;
    iVar6 = local_a8[param_4 & 0xf] + local_ac;
    local_a8[0x10] = 0;
    local_a8[0x11] = 4;
    local_a8[0x12] = 7;
    local_a8[0x13] = 9;
    local_a8[0x14] = 10;
    local_a8[0x15] = 9;
    local_a8[0x16] = 7;
    local_a8[0x17] = 4;
    local_a8[0x18] = 0;
    local_a8[0x19] = 0xfffffffc;
    local_a8[0x1a] = 0xfffffff9;
    local_a8[0x1b] = 0xfffffff7;
    local_a8[0x1c] = 0xfffffff6;
    local_a8[0x1d] = 0xfffffff7;
    local_a8[0x1e] = 0xfffffff9;
    local_a8[0x1f] = 0xfffffffc;
    iVar5 = local_a8[(param_4 & 0xf) + 0x10] + local_b8;
    local_bc = param_1;
    uVar7 = D2Common_10826(local_b4);
    uVar7 = sub_102daf10(local_bc,iVar6,iVar5,(uint)uVar7);
    iVar2 = local_bc;
    iVar3 = (int)uVar7;
    if ((int)uVar7 == 0) {
      iVar3 = local_b4;
    }
    *(int *)(param_2[0xb] + 0xc) = iVar6;
    *(int *)(param_2[0xb] + 0x10) = iVar5;
    *(int *)param_2[0xb] = iVar3;
    iStack_b0 = *p_D2Common_DAT_6fde9e1c;
    iVar3 = functions_HelperFunctions_102d15e0(local_bc,(int)param_2);
    local_a8[0x20] = 0;
    if (param_5 < *(uint *)(iStack_b0 + 0x9c0)) {
      sub_6fc32380(iVar2,param_2,param_2,param_5 * 0x2c + *(int *)(iStack_b0 + 0x9bc),0,iVar3,0,
                   (int)auStack_24,local_a8 + 0x20,3);
    }
    *(int *)(param_2[0xb] + 0xc) = local_ac;
    *(int *)(param_2[0xb] + 0x10) = local_b8;
    *(int *)param_2[0xb] = local_b4;
    uVar4 = 0;
    if (param_4 - local_a8[0x20] != 0) {
      uVar7 = sub_6fcaea80(iVar2,param_2,7,*(int *)(iVar2 + 0xa8) + 5,0x102c90f0,
                           param_4 - local_a8[0x20],param_5);
      uVar4 = (uint)uVar7;
    }
  }
  return uVar4;
}


// 0x102c92c0  (ghidra: FUN_102c92c0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall functions_D2NewFunctions_102c92c0(uint param_1,int *param_2,int param_3)

{
  char cVar1;
  int *reg_ESI;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint unused_ECX;
  void *this;
  uint reg_EDX;
  uint64_t uVar5;
  uint64_t uVar6;
  uint local_34;
  uint uStack_30;
  int *local_2c;
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  uint32_t local_14;
  int local_10;
  uint local_c;
  
  local_c = DAT_1039800c ^ (uint)&local_34;
  local_10 = param_3;
  if (((*(char *)(param_1 + 0x262a) == '\b') &&
      (local_2c = param_2, puVar2 = (uint *)sub_102efa10(param_1,param_3,1), puVar2 != (uint *)0x0))
     && (iVar3 = sub_102effe0(param_2,local_10,param_1), iVar3 != 0)) {
    *(uint8_t *)(param_1 + 0x262a) = 9;
    cVar1 = *(char *)(param_1 + 0x2629);
    iVar3 = rand();
    reg_ESI = local_2c;
    if ((int)((-(uint)(cVar1 != '\0') & 10) + 0x32) <= iVar3 % 100) {
      local_34 = 0x20756d61;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      puVar2 = (uint *)functions_D2NewFunctions_102c5510(param_1,local_2c,(int *)&local_34,6,99,&local_1c,&local_28,1,4,
                                    param_1);
      sub_102edea0(reg_ESI,puVar2,param_1);
      sub_102bb5f0((int)puVar2,0,reg_ESI);
    }
    sub_102bb5f0((int)puVar2,1,reg_ESI);
    D2Common_10012(unused_ECX,reg_EDX,(int *)puVar2,'\0');
    uVar4 = ITEMS_ItemMode_6fcf76a0(param_1,reg_ESI,puVar2[3],0,0,1,1,0);
    if (uVar4 == 0) {
      D2Common_11090(puVar2,3);
      uVar5 = D2Common_10331(reg_ESI);
      uStack_30 = 0;
      local_34 = 0;
      local_10 = (int)uVar5;
      uVar6 = functions_HelperFunctions_102cfc20(local_2c,&uStack_30,&local_34,&local_34);
      if ((((int)uVar5 != 0) && (0 < (int)uStack_30)) && (0 < (int)local_34)) {
        iVar3 = functions_ItemFunctions_102dab80(&local_10,(int *)((ulonglong)uVar6 >> 0x20),(int *)&local_34,1,0x805,0)
        ;
        if ((iVar3 != 0) &&
           (iVar3 = functions_ItemFunctions_102dac30(&local_10,(int *)&uStack_30,(int *)&local_34,2,0x805,7,0),
           iVar3 == 0)) {
          return 0;
        }
        iVar3 = functions_ItemFunctions_102daae0(&local_10,&uStack_30,&local_34,1);
        if (iVar3 == 0) {
          return 0;
        }
        sub_102ee060(this);
      }
    }
    return 1;
  }
  return 0;
}


// 0x102c94e0  (ghidra: FUN_102c94e0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint64_t __fastcall
functions_D2NewFunctions_102c94e0(int param_1,uint *param_2,uint32_t param_3,int param_4,uint param_5)

{
  int *piVar1;
  LPCWSTR pWVar2;
  LPSTR pCVar3;
  void *pvVar4;
  uint uVar5;
  void **ppvVar6;
  int iVar7;
  uint32_t *puVar8;
  double in_XMM0_Qa;
  uint64_t uVar9;
  uint32_t uStack_80;
  uint32_t local_48;
  int local_44;
  uint *local_40;
  int *local_3c;
  uint local_38;
  uint32_t local_34;
  uint32_t local_30 [6];
  uint local_18;
  void *local_10;
  uint8_t *puStack_c;
  int local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314d85;
  local_10 = ExceptionList;
  local_18 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ppvVar6 = &local_10;
  if ((((param_1 == 0) || (param_2 == (uint *)0x0)) || (5 < *param_2)) ||
     ((*(int *)(param_1 + 0x1df4) != 0xd || (3 < *(int *)(param_1 + 0x2628))))) goto LAB_102c96c5;
  ExceptionList = ppvVar6;
  functions_D2NewFunctions_102cc080(param_4);
  iVar7 = (int)in_XMM0_Qa;
  pWVar2 = (LPCWSTR)D2Lang_10011_102d0fb0((byte *)"MapEventNotifyTimer");
  pCVar3 = sub_10237720(pWVar2);
  sub_1020f990(local_30,pCVar3);
  local_8 = 0;
  if (iVar7 == 0x14) {
    sub_1025fb90(&uStack_80,"20",(int)local_30);
    functions_HelperFunctions_102cfe70(param_1,1);
LAB_102c9611:
    uStack_80 = 0x102c9631;
    sub_6fcaea80(param_1,(int *)param_2,7,*(int *)(param_1 + 0xa8) + 0x19,0x102c94e0,iVar7 - 1,
                 param_5);
  }
  else {
    if (iVar7 == 10) {
      sub_1025fb90(&uStack_80,"10",(int)local_30);
      functions_HelperFunctions_102cfe70(param_1,1);
      goto LAB_102c9611;
    }
    if (iVar7 < 10) {
      pvVar4 = sub_1022fa80(&local_48);
      local_8._0_1_ = 1;
      client_Sound_Sound_10233d00(&uStack_80,pvVar4,(int)local_30);
      functions_HelperFunctions_102cfe70(param_1,1);
      local_8 = (uint)local_8._1_3_ << 8;
      thunk_FUN_1020fc60(&local_48);
    }
    if (0 < iVar7) goto LAB_102c9611;
    uVar5 = sub_102ecd40();
    if (uVar5 != 0) {
      local_38 = param_2[5];
      puVar8 = (uint32_t *)(param_1 + 0x1120);
      iVar7 = 0x80;
      local_3c = (int *)0x0;
      local_34 = 0x24a;
      local_44 = param_1;
      local_40 = param_2;
      do {
        piVar1 = (int *)*puVar8;
        if (piVar1 != (int *)0x0) {
          uVar9 = D2Common_10331(piVar1);
          uVar9 = D2Common_10826((int)uVar9);
          if ((int)uVar9 == 0xad) {
            local_3c = piVar1;
            sub_102f4670(&local_44);
          }
        }
        puVar8 = puVar8 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      sub_102db500(param_1,(int)param_2,uVar5,1);
      *(uint32_t *)(param_1 + 0x2628) = 4;
    }
  }
  uVar9 = thunk_FUN_1020fc60(local_30);
  param_2 = (uint *)((ulonglong)uVar9 >> 0x20);
  ppvVar6 = (void **)uVar9;
LAB_102c96c5:
  ExceptionList = local_10;
  return CONCAT44(param_2,ppvVar6);
}


// 0x102c96f0  (ghidra: FUN_102c96f0)  [range]
void functions_D2NewFunctions_Hook_sub_6fcdb3b0_102c96f0(uint param_1,int param_2,uint32_t param_3)

{
  uint *puVar1;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 4) != 0)) {
    puVar1 = (uint *)(*(int *)(param_2 + 4) + 0xc4);
    *puVar1 = *puVar1 | 0x20000;
  }
  sub_6fc95e10(param_1,(int *)param_2,param_3);
  return;
}


// 0x102c9720  (ghidra: FUN_102c9720)  [range]
int functions_D2NewFunctions_102c9720(int param_1)

{
  int iVar1;
  
  iVar1 = D2Common_10920((int *)param_1);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x60) != 0)) {
    functions_D2NewFunctions_102c9750(param_1);
  }
  return iVar1;
}


// 0x102c9750  (ghidra: FUN_102c9750)  [range]
void __fastcall functions_D2NewFunctions_102c9750(int param_1)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int3 extraout_var;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  ushort *puVar11;
  uint64_t uVar12;
  
  iVar4 = functions_HelperFunctions_102ce6d0(0xcc);
  uVar2 = *(uint *)(iVar4 + 0x10);
  piVar5 = (int *)D2Common_10460(*(int **)(param_1 + 0x60));
  do {
    if (piVar5 == (int *)0x0) {
      return;
    }
    cVar1 = *(char *)(piVar5[5] + 0x45);
    cVar3 = sub_102d4390((int)piVar5);
    if ((CONCAT31(extraout_var,cVar3) != 0 && -1 < extraout_var) &&
       (((cVar1 == '\x01' || (cVar1 == -1)) &&
        (uVar6 = D2Common_10195((int)piVar5,0x40), uVar6 != 0)))) {
      iVar4 = 0;
      puVar11 = (ushort *)0x0;
      if (*(ushort *)(uVar6 + 0x28) != 0) {
        puVar7 = *(ushort **)(uVar6 + 0x24);
        do {
          puVar11 = puVar7;
          if (puVar7[1] == 0xcc) break;
          iVar4 = iVar4 + 1;
          puVar7 = puVar7 + 4;
          puVar11 = (ushort *)0x0;
        } while (iVar4 < (int)(uint)*(ushort *)(uVar6 + 0x28));
      }
      iVar10 = 0;
      uVar6 = (uint)*(ushort *)(*(int *)(param_1 + 0x5c) + 0x4c);
      iVar4 = 0;
      if (uVar6 != 0) {
        iVar8 = *(int *)(*(int *)(param_1 + 0x5c) + 0x48);
        do {
          iVar4 = iVar8;
          if (*(short *)(iVar8 + 2) == 0xcc) break;
          iVar10 = iVar10 + 1;
          iVar8 = iVar8 + 8;
          iVar4 = 0;
        } while (iVar10 < (int)uVar6);
      }
      if (((puVar11 != (ushort *)0x0) && (iVar4 != 0)) &&
         (puVar9 = D2Common_10708(param_1,(uint)(*puVar11 >> 6),piVar5[3]), puVar9 != (uint *)0x0))
      {
        D2Common_10863((int)puVar9,*(uint *)(puVar11 + 2) % uVar2);
      }
    }
    uVar12 = D2Common_10464(piVar5);
    piVar5 = (int *)uVar12;
  } while( true );
}


// 0x102c9860  (ghidra: FUN_102c9860)  [range]
int functions_D2NewFunctions_102c9860(int param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sub_102eeb10(param_2,param_3);
  if (((iVar1 != 0) && (iVar2 = functions_HelperFunctions_102d1700(param_1,param_2), iVar2 != 0)) &&
     (*(int *)(iVar2 + 0x60) != 0)) {
    functions_HelperFunctions_102d1800(param_1,param_2);
  }
  return iVar1;
}


// 0x102c98a0  (ghidra: FUN_102c98a0)  [range]
void functions_D2NewFunctions_102c98a0(int *param_1,uint32_t param_2)

{
  int iVar1;
  void *pvVar2;
  uint64_t uVar3;
  
  D2Common_10507_102a3700((int)param_1);
  iVar1 = sub_102edc40();
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 4) & 0x20) != 0)) {
    uVar3 = D2Common_10871((int)param_1,(uint)*(ushort *)(iVar1 + 0x80));
    pvVar2 = (void *)uVar3;
    if (pvVar2 != (void *)0x0) {
      D2Common_11111_102a37f0((uint)param_1,pvVar2);
      D2Common_11108_102a3820(pvVar2);
    }
    D2Common_10945(param_1,(uint)*(ushort *)(iVar1 + 0x80),0);
  }
  D2Common_10828_102a3730((int)param_1);
  iVar1 = sub_102edc40();
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 4) & 0x20) != 0)) {
    uVar3 = D2Common_10871((int)param_1,(uint)*(ushort *)(iVar1 + 0x80));
    pvVar2 = (void *)uVar3;
    if (pvVar2 != (void *)0x0) {
      D2Common_11111_102a37f0((uint)param_1,pvVar2);
      D2Common_11108_102a3820(pvVar2);
    }
    D2Common_10945(param_1,(uint)*(ushort *)(iVar1 + 0x80),0);
  }
  sub_102ede60(param_1,param_2);
  D2Common_10418(param_1);
  return;
}


// 0x102c9960  (ghidra: FUN_102c9960)  [range]
void __fastcall
functions_D2NewFunctions_102c9960(int param_1,int *param_2,uint32_t param_3,uint32_t param_4,uint param_5)

{
  int iVar1;
  uint16_t uVar2;
  
  if ((((param_1 != 0) && (param_2 != (int *)0x0)) && (*param_2 == 0)) &&
     ((iVar1 = param_2[5], iVar1 != 0 && (*(int *)(iVar1 + 0x9c) != 0)))) {
    if (param_5 == 0xffffffff) {
      *(uint32_t *)(iVar1 + 0x1cc) = 0;
    }
    else {
      *(uint32_t *)(iVar1 + 0x1d0 + param_5 * 4) = 0;
    }
    uVar2 = (uint16_t)param_5;
    param_5 = (uint)CONCAT21(uVar2,0x84);
    sub_102ecd00(*(uint32_t *)(param_2[5] + 0x9c),&param_5,4);
  }
  return;
}


// 0x102c99e0  (ghidra: FUN_102c99e0)  [range]
void functions_D2NewFunctions_102c99e0(int param_1,int *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint64_t uVar4;
  
  piVar2 = param_4;
  piVar1 = param_2;
  if (((((param_3 != 0) && (param_2 != (int *)0x0)) && (0 < param_1)) &&
      ((param_4 != (int *)0x0 && (iVar3 = *param_4, iVar3 != 0)))) &&
     ((*param_2 == 0 && ((param_2[5] != 0 && (*(int *)(param_2[5] + 0x9c) != 0)))))) {
    if ((iVar3 != 0xe4) && ((iVar3 != 0xdf && (iVar3 != 0x184)))) {
      uVar4 = D2Common_10331(param_2);
      if (((int)uVar4 != 0) && (uVar4 = D2Common_10057((int)uVar4), (int)uVar4 != 0)) {
        return;
      }
    }
    iVar3 = functions_HelperFunctions_102d18c0(piVar1,*piVar2);
    if ((iVar3 == -1) || (piVar2[3] != piVar1[1])) {
      iVar3 = -1;
      *(uint32_t *)(piVar1[5] + 0x1cc) = 1;
    }
    else {
      *(uint32_t *)(piVar1[5] + 0x1d0 + iVar3 * 4) = 1;
    }
    param_2 = (int *)CONCAT13(1,CONCAT21((short)iVar3,0x84));
    sub_102ecd00(*(uint32_t *)(piVar1[5] + 0x9c),&param_2,4);
    functions_D2NewFunctions_102c9db0(param_3,piVar1,0xc,*(int *)(param_3 + 0xa8) + param_1,0x102c9960,0,iVar3);
  }
  return;
}


// 0x102c9af0  (ghidra: FUN_102c9af0)  [range]
void functions_D2NewFunctions_102c9af0(int param_1,uint32_t param_2,int param_3,uint32_t param_4)

{
  bool bVar1;
  uint32_t extraout_var;
  uint32_t extraout_var_00;
  uint64_t uVar2;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x14) == 0)) ||
     (*(char *)(*(int *)(param_1 + 0x14) + 0x264) == '\0')) {
    uVar2 = D2Common_10331((int *)param_1);
    D2Common_10826((int)uVar2);
    bVar1 = functions_HelperFunctions_102ce900();
    if (((CONCAT31(extraout_var,bVar1) == 0) &&
        (bVar1 = functions_HelperFunctions_102ce950(), CONCAT31(extraout_var_00,bVar1) == 0)) || (0x4f < param_3)) {
      sub_102eeb60(param_1,param_2,param_3,param_4);
    }
  }
  return;
}


// 0x102c9b50  (ghidra: FUN_102c9b50)  [range]
void functions_D2NewFunctions_102c9b50(int param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t extraout_EDX;
  
  iVar1 = functions_HelperFunctions_102ceae0(param_1);
  if (iVar1 == 0) {
    sub_102eee70(extraout_EDX,param_2,param_3);
    return;
  }
  return;
}


// 0x102c9b70  (ghidra: FUN_102c9b70)  [range]
uint32_t
functions_D2NewFunctions_102c9b70(uint32_t param_1,int param_2,uint32_t param_3,void *param_4,uint32_t param_5)

{
  uint32_t uVar1;
  
  if (*(int *)(param_2 + 0x1320 + ((uint)param_4 & 0x7f) * 4) == 0) {
    return 0;
  }
  uVar1 = sub_102ecf60(param_4,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}


// 0x102c9ba0  (ghidra: FUN_102c9ba0)  [range]
uint32_t functions_D2NewFunctions_Wraps_D2Game_PLAYER_PlrModes_102c9ba0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar6 = D2Common_10494_10277e30((int *)param_2,0x36);
  if ((int)uVar6 != 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x10) == 0x11) {
    return 0;
  }
  if (param_3 == 0) {
    return 1;
  }
  if (param_4 == 0) {
    return 1;
  }
  puVar2 = (uint *)D2Common_10511(param_2);
  if (puVar2 == (uint *)0x0) {
    return 1;
  }
  D2Common_10601(puVar2,"..\\Source\\D2Game\\PLAYER\\PlrModes.cpp",0xba);
  iVar3 = sub_102edc40();
  if (iVar3 == 0) {
    return 1;
  }
  D2Common_10601((uint *)param_5,"..\\Source\\D2Game\\SKILLS\\Skills.cpp",0xdb3);
  iVar4 = sub_102edc40();
  if (iVar4 == 0) {
LAB_102c9c57:
    if ((param_5 == 0) || ((uint *)param_5 == puVar2)) {
      sVar1 = *(short *)(iVar3 + 0x2e);
      if (sVar1 == 0x43) {
        return 1;
      }
      if (sVar1 == 0xb4) {
        return 1;
      }
      if (sVar1 == 0x4c) {
        return 1;
      }
    }
    if (*(int *)(iVar3 + 4) < 0) {
      uVar6 = D2Common_10494_10277e30((int *)param_2,0xf);
      uVar7 = D2Common_10494_10277e30((int *)param_2,0x2a);
      if ((int)uVar7 == 0) {
        if ((int)uVar6 == 0) {
          return 1;
        }
      }
      else {
        uVar7 = D2Common_10871(param_2,0x2a);
        iVar3 = D2Common_10680((int)uVar7,0xa4,0);
        iVar4 = sub_102ecdf0(param_2 + 0x20);
        if ((iVar3 <= iVar4) && ((int)uVar6 == 0)) {
          return 1;
        }
      }
      if (*(int *)(param_2 + 0x10) != 1) {
        switch(param_3) {
        case 3:
        case 7:
        case 8:
        case 10:
        case 0xb:
        case 0xd:
        case 0x12:
          goto switchD_102c9c9a_caseD_3;
        default:
          goto switchD_102c9c9a_caseD_4;
        }
      }
      goto LAB_102c9ca1;
    }
    if (*(int *)(param_2 + 0x10) == 1) {
LAB_102c9ca1:
      PLAYER_PlrModes_6fc98550(param_1,param_2,0,1,0,0,1);
      return 1;
    }
    switch(param_3) {
    case 3:
    case 7:
    case 8:
    case 10:
    case 0xb:
    case 0xd:
    case 0x12:
switchD_102c9c9a_caseD_3:
      iVar3 = sub_102ef600(param_2,param_1);
      bVar5 = iVar3 == 0;
      break;
    default:
      goto switchD_102c9c9a_caseD_4;
    }
  }
  else if (*(short *)(iVar3 + 0x2e) == 0x13) {
    bVar5 = *(short *)(iVar4 + 0x2e) == 0x13;
  }
  else {
    if (*(short *)(iVar3 + 0x2e) != 0x30) goto LAB_102c9c57;
    bVar5 = *(short *)(iVar4 + 0x2e) == 0x30;
  }
  if (!bVar5) {
    return 1;
  }
switchD_102c9c9a_caseD_4:
  return 0;
}


// 0x102c9d80  (ghidra: FUN_102c9d80)  [range]
void functions_D2NewFunctions_Hook_sub_6fcefbc0_102c9d80(int param_1,int *param_2,uint32_t param_3)

{
  ITEMS_ItemMode_6fcf51a0(param_1,param_2,param_3);
  if ((param_2 != (int *)0x0) && (*param_2 == 1)) {
    sub_102ef560();
  }
  return;
}


// 0x102c9db0  (ghidra: FUN_102c9db0)  [range]
void __fastcall
functions_D2NewFunctions_102c9db0(int param_1,int *param_2,int param_3,uint param_4,int param_5,int param_6,
            uint32_t param_7)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar4;
  uint uVar5;
  uint64_t uVar6;
  
  if (param_3 < 0x10) {
    if (param_4 == 0xffffffff) {
      sub_102ef430();
      return;
    }
    if (param_4 <= *(uint *)(param_1 + 0xa8)) {
      param_4 = *(uint *)(param_1 + 0xa8) + 1;
    }
    if (((param_2 == (int *)0x0) || (*param_2 != 1)) || (param_3 != 2)) {
      iVar4 = param_3;
      if (((param_3 == 0xc) && (param_5 == 0)) && ((param_6 != 0 && (param_2 != (int *)0x0)))) {
        for (psVar3 = (short *)param_2[0x37]; psVar3 != (short *)0x0;
            psVar3 = *(short **)(psVar3 + 0x12)) {
          if (((*psVar3 == 0xc) && (*(int *)(psVar3 + 10) == param_6)) &&
             (*(int *)(psVar3 + 0x16) == 0)) {
            if ((*(byte *)(psVar3 + 1) & 1) == 0) {
              sub_102ec990();
              iVar4 = extraout_ECX_01;
            }
            break;
          }
        }
      }
    }
    else {
      uVar6 = D2Common_10494_10277e30(param_2,0x36);
      iVar4 = extraout_ECX;
      if ((int)uVar6 != 0) {
        sub_6fd02240(param_2,0);
        iVar4 = extraout_ECX_00;
      }
    }
    psVar3 = (short *)sub_102ef460(iVar4);
    *psVar3 = (short)(char)param_3;
    *(uint *)(psVar3 + 2) = param_4;
    *(int *)(psVar3 + 10) = param_6;
    *(uint32_t *)(psVar3 + 0xc) = param_7;
    *(int *)(psVar3 + 0x16) = param_5;
    iVar4 = p_D2Game_DAT_6fd1a3dc;
    uVar5 = param_4 & 0x8000003f;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xffffffc0) + 1;
    }
    iVar1 = *(int *)(p_D2Game_DAT_6fd1a3dc + *(int *)(psVar3 + 8) * 4);
    iVar2 = *(int *)(param_1 + 0xb8);
    psVar3[0xe] = 0;
    psVar3[0xf] = 0;
    iVar2 = iVar2 + (iVar1 * 0x40 + uVar5) * 4;
    iVar1 = *(int *)(iVar2 + 0x504);
    *(int *)(psVar3 + 0x10) = iVar1;
    if (iVar1 != 0) {
      *(short **)(iVar1 + 0x1c) = psVar3;
    }
    *(short **)(iVar2 + 0x504) = psVar3;
    iVar4 = *(int *)(iVar4 + *(int *)(psVar3 + 8) * 4) * 0x40 + uVar5;
    if (*(int *)(*(int *)(param_1 + 0xb8) + 4 + iVar4 * 4) == 0) {
      *(short **)(*(int *)(param_1 + 0xb8) + 4 + iVar4 * 4) = psVar3;
    }
  }
  return;
}


// 0x102c9f00  (ghidra: FUN_102c9f00)  [range]
uint32_t functions_D2NewFunctions_102c9f00(int *param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint64_t uVar5;
  
  if ((((param_1 != (int *)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((iVar1 = functions_HelperFunctions_102ce5a0(param_4), iVar1 != 0 &&
      (uVar2 = (uint)*(ushort *)(iVar1 + 0x80), uVar2 < *(uint *)(*p_D2Common_DAT_6fde9e1c + 0xc4))))) {
    uVar5 = D2Common_10786(param_3,*(uint *)(iVar1 + 0x60),param_4,param_5);
    uVar4 = *(int *)(param_2 + 0xa8) + (int)uVar5;
    uVar5 = D2Common_10871((int)param_1,uVar2);
    puVar3 = (uint *)uVar5;
    if (puVar3 == (uint *)0x0) {
      puVar3 = D2Common_11013(*(uint *)(param_2 + 0x1c),2,uVar4,*(uint32_t *)param_3,
                              *(uint32_t *)(param_3 + 0xc));
      if (puVar3 == (uint *)0x0) {
        return 0;
      }
      D2Common_10785((int)puVar3,(uint)*(ushort *)(iVar1 + 0x80));
      D2Common_10911((int)puVar3,0x1027dd70);
      D2Common_10807((int)param_1,puVar3,1);
      D2Common_10945(param_1,(uint)*(ushort *)(iVar1 + 0x80),1);
    }
    D2Common_11039(param_1,(uint)*(ushort *)(iVar1 + 0x80),1);
    D2Common_10161((int)puVar3,uVar4);
    functions_D2NewFunctions_102c9db0(param_2,param_1,0xc,uVar4,0,uVar2,0);
    sub_102ef500(iVar1,param_3,puVar3,param_4,param_5);
    D2Common_10418(param_1);
    if (*param_1 == 0) {
      PLAYER_PlayerPets_6fcb6fa0(param_1[0x20],param_1);
    }
    return 1;
  }
  return 0;
}


// 0x102ca050  (ghidra: FUN_102ca050)  [range]
void __fastcall
functions_D2NewFunctions_102ca050(void *param_1,int *param_2,int param_3,int param_4,uint param_5,uint16_t param_6,
            int param_7)

{
  int iVar1;
  void *this;
  void *this_00;
  uint64_t uVar2;
  
  switch(param_6) {
  case 0x10:
  case 0x31:
    sub_102ecba0(param_1,param_2,0,param_1,param_3,param_5);
switchD_102ca073_default:
    return;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x74:
  case 0x75:
  case 0x76:
    goto switchD_102ca073_default;
  case 0x1f:
    sub_102ecba0(param_1,param_2,0,param_1,param_3,param_5);
    sub_102ef660(this,param_3,param_2,param_4,param_5);
    return;
  case 0x38:
    sub_102ecba0(param_1,param_2,0,param_1,param_3,param_5);
    functions_D2NewFunctions_102ca430((int)param_1,param_2,param_3,param_4,(char)param_5,0);
    sub_102ef680();
    return;
  case 0x73:
    D2Common_10945((int *)param_3,0x96,1);
    uVar2 = D2Common_10786((uint)param_2,*(uint *)(param_7 + 0x13c),param_4,param_5);
    iVar1 = (int)uVar2;
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    D2Common_10887((int *)param_3,0xc,iVar1,0);
    return;
  case 0x77:
    if (*(char *)(param_7 + 0xbe) != '\r') {
      sub_102ee5a0();
    }
    D2Common_10786((uint)param_2,*(uint *)(param_7 + 0x13c),param_4,param_5);
    sub_102ecba0(this_00,param_2,0,param_1,param_3,param_5);
    return;
  default:
    return;
  }
}


// 0x102ca200  (ghidra: FUN_102ca200)  [range]
void functions_D2NewFunctions_102ca200(int *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,int *reg_EDX
                 )

{
  switch((uint16_t)param_4) {
  case 0x10:
    D2Common_10945(param_1,0x5d,1);
    break;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
    goto switchD_102ca21d_default;
  case 0x1f:
    sub_102ef680();
    goto LAB_102ca261;
  case 0x31:
    break;
  case 0x38:
    sub_102ee5a0();
    return;
  default:
    return;
  }
  D2Common_10210(param_1,reg_EDX);
LAB_102ca261:
  sub_102ee5a0();
switchD_102ca21d_default:
  return;
}


// 0x102ca2c0  (ghidra: FUN_102ca2c0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall functions_D2NewFunctions_102ca2c0(void *param_1,int *param_2,uint param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint8_t uVar7;
  uint32_t local_2c;
  int *local_28;
  uint local_24;
  uint32_t local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  iVar2 = functions_HelperFunctions_102ce5a0(param_3);
  if (iVar2 == 0) {
    return 0;
  }
  local_10 = (uint)*(byte *)(iVar2 + 0xbe);
  if (*(uint *)(*p_D2Common_DAT_6fde9e1c + 0xbf0) <= local_10) {
    return 0;
  }
  local_18 = (uint)*(ushort *)(param_2[0xb] + 2);
  local_14 = (uint)*(ushort *)(param_2[0xb] + 6);
  local_2c = 1;
  local_20 = 0;
  local_1c = (uint)*(byte *)(iVar2 + 0xbf);
  local_28 = param_2;
  uVar5 = D2Common_10786((uint)param_2,*(uint *)(iVar2 + 0xc0),param_3,param_4);
  local_c = (uint32_t)uVar5;
  local_24 = (uint)*(ushort *)(iVar2 + 0xbc);
  iVar3 = sub_102ecb80(&local_2c,param_1);
  if (iVar3 == 0) {
    return 0;
  }
  functions_D2NewFunctions_102ca050(param_1,param_2,iVar3,param_3,param_4,*(uint16_t *)(iVar2 + 0x2e),iVar2);
  sVar1 = *(short *)(iVar2 + 0x2e);
  uVar7 = (uint8_t)param_4;
  if (sVar1 == 0x38) {
    sub_102ef6a0();
    uVar6 = 0x102ca3ad;
    param_4 = param_3;
    functions_SaveFunctions_102e9380(param_2,iVar3,param_3,uVar7);
    param_3 = uVar6;
    goto LAB_102ca3e8;
  }
  uVar4 = 0;
  if (sVar1 == 0x10) {
    uVar6 = *(uint *)(iVar2 + 0x13c);
LAB_102ca3d1:
    uVar5 = D2Common_10786((uint)param_2,uVar6,param_3,param_4);
    uVar4 = (uint32_t)uVar5;
  }
  else if (sVar1 == 0x31) {
    uVar6 = *(uint *)(iVar2 + 0x144);
    goto LAB_102ca3d1;
  }
  functions_D2NewFunctions_102ca430((int)param_1,param_2,iVar3,param_3,uVar7,uVar4);
LAB_102ca3e8:
  uVar4 = functions_D2NewFunctions_102ca200(iVar3,param_3,param_4,(uint)*(ushort *)(iVar2 + 0x2e),param_2);
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


// 0x102ca430  (ghidra: FUN_102ca430)  [range]
uint8_t
functions_D2NewFunctions_102ca430(int param_1,int *param_2,int param_3,int param_4,uint8_t param_5,uint32_t param_6)

{
  uint8_t uVar1;
  uint uVar2;
  uint32_t in_stack_00000015;
  uint32_t _param_5;   /* not traced by Ghidra: value with no visible source */
  
  if ((((param_1 == 0) || (param_2 == (int *)0x0)) || (param_3 == 0)) || (param_4 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar2 = SKILLS_SkillNec_6fc6f970(param_1,(int)param_2,(int *)param_3,param_4,_param_5,param_6);
    uVar1 = (uint8_t)uVar2;
    if (*param_2 == 0) {
      functions_SaveFunctions_102e9380(param_2,param_3,param_4,param_5);
      return uVar1;
    }
  }
  return uVar1;
}


// 0x102ca490  (ghidra: FUN_102ca490)  [range]
void functions_D2NewFunctions_102ca490(void)

{
  sub_102ef760();
  return;
}


// 0x102ca4b0  (ghidra: FUN_102ca4b0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void functions_D2NewFunctions_102ca4b0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint32_t uVar6;
  int local_5c;
  uint local_58;
  int local_54;
  int local_50 [19];
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_50[0x12] = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if (param_2 == (int *)0x0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if ((*param_2 != 0) && (*param_2 != 1)) {
    return;
  }
  iVar1 = D2Common_10587(param_3,0xd,0);
  if (iVar1 == 0) {
    return;
  }
  piVar2 = param_2;
  if (*param_2 != 0) {
    if (*param_2 != 1) {
      return;
    }
    piVar2 = functions_D2NewFunctions_102cb180(param_2,1);
    local_58 = 0;
    iVar1 = D2Common_10927((uint)param_2);
    if (iVar1 != 0) {
      local_58 = D2Common_10195((int)param_2,0x800);
    }
    iVar1 = D2Common_10927(param_3);
    if (iVar1 != 0) {
      local_58 = D2Common_10195(param_3,0x800);
    }
    if (local_58 != 0) {
      D2Common_11131(local_58);
      D2Common_10473(local_58);
      piVar2 = (int *)sub_102ecd40();
    }
    if (piVar2 == (int *)0x0) {
      return;
    }
    if (*piVar2 != 0) {
      return;
    }
  }
  D2Common_10587(param_3,0xc,0);
  piVar3 = (int *)functions_HelperFunctions_102d1700(param_1,piVar2);
  if (piVar3 != (int *)0x0) {
    iVar1 = D2Common_10587((int)piVar3,0xc,0);
    uVar4 = functions_D2NewFunctions_102ca490();
    if (param_2 != piVar3) {
      uVar4 = uVar4 * 0x56 >> 8;
    }
    sub_102ef790(uVar4,param_1,piVar2,piVar3,iVar1);
  }
  iVar1 = D2Common_10587((int)piVar2,0xc,0);
  iVar5 = sub_102ef1d0();
  if (iVar5 == 0xffff) {
LAB_102ca661:
    uVar6 = functions_D2NewFunctions_102ca490();
    functions_D2NewFunctions_102c9af0((int)piVar2,param_1,iVar1,uVar6);
    return;
  }
  local_54 = param_3;
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 0;
  local_50[7] = 0;
  local_50[8] = 0;
  local_50[9] = 0;
  local_50[10] = 0;
  local_50[0xb] = 0;
  local_50[0xc] = 0;
  local_50[0xd] = 0;
  local_50[0xe] = 0;
  local_50[0xf] = 0;
  local_50[0x10] = 0;
  local_50[0x11] = 0;
  sub_102ef7b0(piVar2,param_1,&LAB_102866b0,&local_54);
  if ((0 < local_50[0x10]) && (0 < local_50[0x11])) {
    if (local_50[0x10] == 1) goto LAB_102ca661;
    local_5c = 0;
    if (0 < local_50[0x10]) {
      do {
        iVar1 = local_50[local_5c + 8];
        iVar5 = local_50[local_5c];
        FUN_103030b0();
        uVar6 = functions_D2NewFunctions_102ca490();
        functions_D2NewFunctions_102c9af0(iVar5,param_1,iVar1,uVar6);
        local_5c = local_5c + 1;
      } while (local_5c < local_50[0x10]);
    }
  }
  return;
}


// 0x102ca730  (ghidra: FUN_102ca730)  [range]
uint functions_D2NewFunctions_102ca730(uint *param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_4 == 0) || (param_3 == 0)) {
    uVar2 = D2Common_10174(param_1,param_2,0xf);
    return uVar2;
  }
  if (*(int *)(param_4 + 0x10f4) == 0) {
    uVar2 = D2Common_10174(param_1,param_2,0xf);
    return uVar2;
  }
  puVar1 = *(uint **)(*(int *)(param_4 + 0x10f4) + 0xc);
  uVar2 = D2Common_10174(param_1,param_2,0xf);
  uVar3 = D2Common_10174(puVar1,param_2,0xf);
  uVar4 = D2Common_10174(puVar1,param_2,1);
  uVar5 = D2Common_10174(puVar1,param_2,(uint)*(byte *)(param_3 + 0x9f));
  if ((((uVar2 == 0) && (uVar3 == 0)) && (uVar4 == 0)) && (uVar5 == 0)) {
    return 0;
  }
  return 1;
}


// 0x102ca7e0  (ghidra: FUN_102ca7e0)  [range]
uint functions_D2NewFunctions_102ca7e0(int *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == 0)) && (param_1[5] != 0)) &&
     ((piVar1 = *(int **)(param_1[5] + 0x38), piVar1 != (int *)0x0 && (param_1 != param_2)))) {
    iVar2 = -1;
    if (param_2 != (int *)0x0) {
      iVar2 = param_2[3];
    }
    do {
      if (*piVar1 == iVar2) {
        return piVar1[1] & param_3;
      }
      piVar1 = (int *)piVar1[4];
    } while (piVar1 != (int *)0x0);
  }
  return 0;
}


// 0x102ca830  (ghidra: FUN_102ca830)  [range]
uint32_t functions_D2NewFunctions_102ca830(int *param_1,uint32_t reg_EBX)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  piVar1 = (int *)*param_1;
  do {
    piVar3 = (int *)(&DAT_104e6e70)[iVar5];
    if (piVar3 != (int *)0x0) {
      if (piVar3 == piVar1) {
        DAT_104e2408 = iVar5 + 1;
        sub_Config74_10239e00(reg_EBX);
        uVar2 = D2Win_10003((int *)(&DAT_104e6e70)[iVar5]);
        if (uVar2 != 0) goto LAB_102ca885;
        piVar3 = (int *)(&DAT_104e6e70)[iVar5];
        iVar4 = 1;
      }
      else {
        iVar4 = 0;
      }
      D2Win_10097(piVar3,iVar4);
    }
LAB_102ca885:
    iVar5 = iVar5 + 1;
    if (8 < iVar5) {
      return 1;
    }
  } while( true );
}


// 0x102ca8a0  (ghidra: FUN_102ca8a0)  [range]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t functions_D2NewFunctions_102ca8a0(uint32_t reg_EBX,uint32_t *param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  DAT_104e2418 = (uint)(DAT_104e2418 == 0);
  sub_Config74_10239e00(reg_EBX);
  D2Win_10097(piVar1,DAT_104e2418);
  iVar3 = 4;
  if (DAT_104e2418 == 0) {
    iVar3 = 5;
  }
  pvVar2 = (void *)D2Lang_10011_102d0fb0((byte *)"LootAllocationTitle");
  D2Win_10000(DAT_104e6e64,pvVar2,iVar3,0,0);
  return 1;
}


// 0x102ca910  (ghidra: FUN_102ca910)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void functions_D2NewFunctions_102ca910(uint *param_1)

{
  uint32_t *puVar1;
  void *pvVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  int local_1c;
  byte local_18 [16];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  uVar5 = 0x9c;
  DAT_104e6e68 = D2Win_10204((void *)0x277,0x78,0x19,0,0,(int *)0x0,(int *)0x0,2,0);
  pvVar2 = (void *)D2Lang_10011_102d0fb0((byte *)"GameServerTitle");
  D2Win_10020(DAT_104e6e68,pvVar2);
  local_1c = 0;
  do {
    iVar3 = sub_102edee0("DATA\\GLOBAL\\UI\\BIGMENU\\gsselectbuttons",0);
    if (local_1c != 0) {
      uVar5 = uVar5 + 0xe;
    }
    puVar1 = &DAT_104e6e70 + local_1c;
    puVar4 = D2Win_10068(0x285,uVar5,0x78,0xe,iVar3,0x102ca830,0,0,2,0,0);
    *puVar1 = puVar4;
    local_1c = local_1c + 1;
    sub_10229570(local_18,0x10,"CreateGameGS%d");
    pvVar2 = (void *)D2Lang_10011_102d0fb0(local_18);
    D2Win_10192((int *)*puVar1,0,pvVar2,0);
  } while (local_1c < 9);
  if (DAT_104e2408 != 10) {
    D2Win_10097(*(int **)(&DAT_104e6e6c + DAT_104e2408 * 4),1);
  }
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 2;
  iVar7 = 0;
  uVar5 = 0;
  pcVar6 = functions_D2NewFunctions_102ca8a0;
  iVar3 = sub_102edee0("DATA\\GLOBAL\\UI\\BIGMENU\\joingameclickbox",0);
  DAT_104e6e60 = D2Win_10068(0x1ad,0x148,0xf,0x10,iVar3,(uint)pcVar6,uVar5,iVar7,uVar8,uVar9,uVar10)
  ;
  D2Win_10097((int *)DAT_104e6e60,DAT_104e2418);
  DAT_104e6e64 = D2Win_10204((void *)0x171,300,0xc,0,0,(int *)0x0,(int *)0x0,2,0);
  iVar3 = 4;
  if (DAT_104e2418 == 0) {
    iVar3 = 5;
  }
  pvVar2 = (void *)D2Lang_10011_102d0fb0((byte *)"LootAllocationTitle");
  D2Win_10000(DAT_104e6e64,pvVar2,iVar3,0,0);
  D2Win_10098(param_1);
  return;
}


// 0x102caab0  (ghidra: FUN_102caab0)  [range]
void functions_D2NewFunctions_102caab0(uint *param_1,uint32_t reg_EDX)

{
  uint32_t *puVar1;
  uint64_t uVar2;
  
  puVar1 = &DAT_104e6e70;
  do {
    if ((int *)*puVar1 != (int *)0x0) {
      uVar2 = D2Win_10155((int *)*puVar1,reg_EDX);
      reg_EDX = (uint32_t)((ulonglong)uVar2 >> 0x20);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x104e6e94);
  if (DAT_104e6e68 != (int *)0x0) {
    uVar2 = D2Win_10041(DAT_104e6e68);
    reg_EDX = (uint32_t)((ulonglong)uVar2 >> 0x20);
    DAT_104e6e68 = (int *)0x0;
  }
  if (DAT_104e6e60 != (int *)0x0) {
    D2Win_10155(DAT_104e6e60,reg_EDX);
    DAT_104e6e60 = (int *)0x0;
  }
  if (DAT_104e6e64 != (int *)0x0) {
    D2Win_10041(DAT_104e6e64);
    DAT_104e6e64 = (int *)0x0;
  }
  D2Win_10050(param_1);
  return;
}


// 0x102cab30  (ghidra: FUN_102cab30)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * functions_D2NewFunctions_102cab30(int param_1,int *param_2,int param_3,uint32_t param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  void *this;
  uint64_t uVar5;
  uint local_14;
  uint local_10;
  int *local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if (param_1 == 7) {
    piVar1 = (int *)sub_102ef940(7,param_2,param_3,param_4);
    return piVar1;
  }
  if ((param_1 != 3) && (param_1 != 0x1c)) {
    piVar1 = (int *)sub_102ef940(param_1,param_2,param_3,param_4);
    return piVar1;
  }
  piVar1 = (int *)D2Common_10920(param_2);
  if (((((piVar1 != (int *)0x0) && (piVar1[0x11] != 0)) &&
       (piVar1 = (int *)functions_D2NewFunctions_102cae50(param_3,(int)param_2,0), param_1 == 3)) &&
      ((piVar1 = (int *)param_2[4], piVar1 != (int *)0x11 && (piVar1 != (int *)0x0)))) &&
     ((piVar2 = (int *)sub_102efa30(), piVar1 = piVar2, piVar2 != (int *)0x0 && (piVar2[1] == 0x123)
      ))) {
    local_c = (int *)D2Common_10460((int *)piVar2[0x18]);
    piVar1 = (int *)0x0;
    if (local_c != (int *)0x0) {
      uVar3 = D2Common_11147(local_c);
      piVar1 = (int *)0x0;
      if (uVar3 != 0) {
        sub_102efa10(param_3,local_c,1);
        uVar5 = D2Common_10331(piVar2);
        local_c = (int *)uVar5;
        piVar1 = (int *)0x0;
        if (local_c != (int *)0x0) {
          local_10 = 0;
          local_14 = 0;
          uVar5 = functions_HelperFunctions_102cfc20(piVar2,&local_10,&local_14,&local_14);
          piVar1 = (int *)uVar5;
          if ((0 < (int)local_10) && (0 < (int)local_14)) {
            iVar4 = functions_ItemFunctions_102dab80(&local_c,(int *)((ulonglong)uVar5 >> 0x20),(int *)&local_14,1,0x805
                                 ,0);
            if ((iVar4 != 0) &&
               (iVar4 = functions_ItemFunctions_102dac30(&local_c,(int *)&local_10,(int *)&local_14,2,0x805,7,0),
               iVar4 == 0)) {
              return (int *)0x0;
            }
            iVar4 = functions_ItemFunctions_102daae0((int *)&local_c,&local_10,&local_14,1);
            piVar1 = (int *)0x0;
            if (iVar4 != 0) {
              sub_102ee060(this);
              piVar1 = (int *)functions_HelperFunctions_102d1600(param_3,param_2);
            }
          }
        }
      }
    }
  }
  return piVar1;
}


// 0x102cacf0  (ghidra: FUN_102cacf0)  [range]
int functions_D2NewFunctions_102cacf0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint64_t uVar2;
  
  if (param_1 < (int)param_2) {
    iVar1 = param_2 - param_1;
    if (10 < iVar1) {
      iVar1 = 10;
    }
    if ((0x13 < param_1) && (0 < (int)param_2)) {
      if (0x18 < param_1) {
        uVar2 = functions_HelperFunctions_102ce840(param_3,param_2);
        return (int)uVar2;
      }
      goto LAB_102cad97;
    }
    iVar1 = *(int *)(p_D2Game_DAT_6fd1a048 + iVar1 * 4);
  }
  else {
    iVar1 = param_1 - param_2;
    if (10 < iVar1) {
      iVar1 = 10;
    }
    iVar1 = *(int *)(p_D2Game_DAT_6fd1a01c + iVar1 * 4);
  }
  if (iVar1 == 0x100) {
    return param_3;
  }
LAB_102cad97:
  uVar2 = functions_HelperFunctions_102ce840(param_3,0x100);
  return (int)uVar2;
}


// 0x102cadb0  (ghidra: FUN_102cadb0)  [range]
void functions_D2NewFunctions_102cadb0(uint32_t *param_1,int param_2)

{
  uint32_t uVar1;
  
  if ((param_1 != (uint32_t *)0x0) && (param_2 != 0)) {
    uVar1 = *param_1;
    switch(param_1[3]) {
    case 0x2c0:
      sub_102efc00(6,uVar1,param_2,1);
      sub_102efc00(0x1e,uVar1,param_2,1);
      return;
    case 0x2c1:
    case 0x2c2:
    case 0x2c4:
    case 0x2c5:
      sub_102efc00(6,uVar1,param_2,1);
      return;
    case 0x2c3:
      sub_102efc00(6,uVar1,param_2,1);
      sub_102efc00(0x1d,uVar1,param_2,1);
      return;
    }
  }
  sub_102efbd0(param_1);
  return;
}


// 0x102cae50  (ghidra: FUN_102cae50)  [range]
uint32_t __fastcall functions_D2NewFunctions_102cae50(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = **(int **)(*(int *)(param_2 + 0x14) + 0x44);
  piVar5 = (int *)(iVar1 + 0x150);
  if ((piVar5 != (int *)0x0) && (0 < *(int *)(iVar1 + 0x158))) {
    iVar2 = functions_HelperFunctions_102d2220(param_2,0x4b);
    iVar3 = functions_HelperFunctions_102d2220(param_2,0x55);
    iVar4 = functions_HelperFunctions_102d2220(param_2,0x5e);
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    if (iVar4 == -1) {
      iVar4 = *(int *)(iVar1 + 0x158);
    }
    if (iVar1 == -0x24) {
      iVar3 = 0;
    }
    else {
      functions_HelperFunctions_102d2220(param_2,0x5a);
      iVar3 = 0;
      if (0 < *(int *)(iVar1 + 0x28)) {
        iVar3 = *(int *)(iVar1 + 0x28);
      }
    }
    iVar2 = (iVar4 - iVar3) + 1;
    if (param_3 != 0) {
      iVar2 = iVar4 - iVar3;
    }
    iVar4 = *piVar5;
    while (iVar4 != 0) {
      if (*(int *)(iVar1 + 0x154) < iVar2) {
        return 1;
      }
      iVar4 = sub_102ef980();
      PLAYER_PlayerPets_6fcb7b50(param_1,param_2,iVar4,1);
      iVar4 = *piVar5;
    }
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}


// 0x102caf40  (ghidra: FUN_102caf40)  [range]
uint32_t __fastcall
functions_D2NewFunctions_102caf40(int param_1,int param_2,int param_3,uint32_t param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_5 == 0xb) {
    uVar4 = 0xe3;
  }
  else {
    if (param_5 != 0xc) {
      return 0;
    }
    uVar4 = 0xed;
  }
  piVar1 = (int *)(**(int **)(*(int *)(param_2 + 0x14) + 0x44) + param_5 * 0xc);
  if ((piVar1 != (int *)0x0) && (0 < piVar1[2])) {
    iVar2 = functions_HelperFunctions_102d2220(param_2,uVar4);
    if (param_3 == 0) {
      iVar2 = iVar2 + 1;
    }
    iVar3 = *piVar1;
    while (iVar3 != 0) {
      if (piVar1[1] < iVar2) {
        return 1;
      }
      iVar3 = sub_102ef980();
      PLAYER_PlayerPets_6fcb7b50(param_1,param_2,iVar3,1);
      iVar3 = *piVar1;
    }
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}


// 0x102cafe0  (ghidra: FUN_102cafe0)  [range]
uint32_t __fastcall functions_D2NewFunctions_102cafe0(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  uint8_t uVar3;
  uint32_t extraout_var;
  uint32_t extraout_var_00;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint32_t extraout_var_01;
  uint32_t extraout_var_02;
  uint32_t extraout_var_03;
  uint32_t extraout_var_04;
  uint32_t extraout_ECX;
  uint32_t extraout_ECX_00;
  uint64_t uVar8;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  bVar2 = false;
  uVar8 = D2Common_10973(param_3,0x1dc,0);
  if (((int)uVar8 != 0) || (uVar8 = D2Common_10973(param_4,0x1dc,0), (int)uVar8 != 0)) {
    bVar2 = true;
  }
  uVar3 = functions_HelperFunctions_102d2270(param_3);
  if ((CONCAT31(extraout_var,uVar3) != 0) ||
     (uVar3 = functions_HelperFunctions_102d2270(param_4), CONCAT31(extraout_var_00,uVar3) != 0)) {
    bVar2 = true;
  }
  uVar8 = D2Common_10973(param_3,0x1fe,0);
  if (((int)uVar8 != 0) || (uVar8 = D2Common_10973(param_4,0x1fe,0), (int)uVar8 != 0)) {
    bVar2 = true;
  }
  if (((param_3 == 0) && (param_4 == 0)) &&
     (piVar1 = *(int **)(param_2 + 0x60), piVar1 != (int *)0x0)) {
    uVar4 = D2Common_11139(piVar1,5);
    uVar5 = D2Common_11139(piVar1,4);
    uVar6 = D2Common_11139(piVar1,0xc);
    uVar7 = D2Common_11139(piVar1,0xb);
    uVar8 = D2Common_10973(uVar4,0x1dc,0);
    if ((((int)uVar8 != 0) || (uVar8 = D2Common_10973(uVar5,0x1dc,0), (int)uVar8 != 0)) ||
       ((uVar8 = D2Common_10973(uVar6,0x1dc,0), (int)uVar8 != 0 ||
        (uVar8 = D2Common_10973(uVar7,0x1dc,0), (int)uVar8 != 0)))) {
      bVar2 = true;
    }
    uVar3 = functions_HelperFunctions_102d2270(uVar4);
    if (((CONCAT31(extraout_var_01,uVar3) != 0) ||
        (uVar3 = functions_HelperFunctions_102d2270(uVar5), CONCAT31(extraout_var_02,uVar3) != 0)) ||
       ((uVar3 = functions_HelperFunctions_102d2270(uVar6), CONCAT31(extraout_var_03,uVar3) != 0 ||
        (uVar3 = functions_HelperFunctions_102d2270(uVar7), CONCAT31(extraout_var_04,uVar3) != 0)))) goto LAB_102cb135;
  }
  if (!bVar2) {
    return 1;
  }
LAB_102cb135:
  PLAYER_PlayerPets_6fcb6fa0(param_1,(int *)param_2);
  functions_D2NewFunctions_102cae50(param_1,param_2,0);
  functions_D2NewFunctions_102caf40(param_1,param_2,0,extraout_ECX,0xb);
  functions_D2NewFunctions_102caf40(param_1,param_2,0,extraout_ECX_00,0xc);
  return 1;
}


// 0x102cb180  (ghidra: FUN_102cb180)  [range]
int * __fastcall functions_D2NewFunctions_102cb180(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_1 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return param_1;
  }
  if (param_1[0x20] == 0) {
    return (int *)0x0;
  }
  piVar4 = (int *)0x0;
  if (iVar1 == 1) {
    if (param_1[5] == 0) goto LAB_102cb1ef;
    uVar2 = *(uint *)(param_1[5] + 0x28);
  }
  else {
    if (iVar1 != 3) goto LAB_102cb1ef;
    uVar2 = param_1[0x32] & 0x400;
  }
  if (uVar2 != 0) {
    piVar4 = (int *)sub_102ecd40();
  }
LAB_102cb1ef:
  if (param_2 == 0) {
    if (piVar4 == (int *)0x0) {
      return param_1;
    }
  }
  else {
    if (piVar4 == (int *)0x0) {
      return param_1;
    }
    if ((((*piVar4 == 1) && (piVar4[5] != 0)) && (*(int *)(piVar4[5] + 0x28) != 0)) &&
       (piVar3 = (int *)sub_102ecd40(), piVar3 != (int *)0x0)) {
      return piVar3;
    }
  }
  return piVar4;
}


// 0x102cb2c0  (ghidra: FUN_102cb2c0)  [range]
int functions_D2NewFunctions_102cb2c0(uint param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                uint32_t param_5,int *param_6,uint32_t param_7,uint32_t param_8)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_1c [4];
  uint32_t local_c;
  uint32_t local_8;
  
  local_1c[0] = 0;
  local_1c[1] = 0xffffffff;
  local_1c[2] = 0;
  local_1c[3] = param_2;
  local_c = param_2;
  local_8 = 0x7fffffff;
  piVar1 = functions_D2NewFunctions_102cb180(param_6,1);
  uVar2 = D2Common_11133(param_6);
  iVar4 = uVar2 + 2;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 1) {
      iVar4 = uVar2 + 3;
    }
    else if (*piVar1 == 0) {
      iVar4 = iVar4 + (int)uVar2 / 2;
    }
    iVar3 = functions_HelperFunctions_102ceae0((int)piVar1);
    if ((iVar3 != 0) && (6 < iVar4)) {
      iVar4 = 6;
    }
  }
  sub_102ec960(param_5,param_6,param_7,param_8,iVar4,param_1 | 0xa783,&LAB_102cb250,local_1c,0);
  if (local_1c[0] == 0) {
    local_1c[0] = local_1c[2];
  }
  return local_1c[0];
}


// 0x102cb370  (ghidra: FUN_102cb370)  [range]
void functions_D2NewFunctions_102cb370(uint32_t param_1,int *param_2,uint32_t param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = D2Common_10048(param_2);
  if ((((uVar1 != 0) && (iVar2 = D2Common_11088_10275940(param_2), iVar2 != 0x2c)) &&
      (iVar2 != 0x2b)) && (((iVar2 != 0x2a && (iVar2 != 0x57)) && ((iVar2 != 5 && (iVar2 != 6))))))
  {
    return;
  }
  sub_102f0640(param_1,param_2,param_3);
  return;
}


// 0x102cb3c0  (ghidra: FUN_102cb3c0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int functions_D2NewFunctions_Hook_sub_6fcdffa0_102cb3c0(int param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint64_t uVar4;
  uint32_t local_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint local_c;
  
  local_c = DAT_1039800c ^ (uint)&local_24;
  local_24 = param_3;
  if (((param_1 != 0) && (param_2 != 0)) && (*(uint *)(param_2 + 0x14) != 0)) {
    uVar4 = D2Common_10695(*(uint *)(param_2 + 0x14));
    iVar3 = (int)uVar4;
    if (((iVar3 != 0) && (*(char *)(iVar3 + 0x80) == '7')) &&
       ((*(char *)(iVar3 + 0x81) == 'c' &&
        ((*(char *)(iVar3 + 0x82) == 'r' && (*(char *)(iVar3 + 0x83) == ' ')))))) {
      iVar3 = 0x8c;
      if (*(char *)(param_1 + 0x6d) != '\x01') {
        iVar3 = 0x118;
      }
      if (*(char *)(param_1 + 0x6d) == '\x02') {
        iVar3 = 0x46;
      }
      iVar1 = rand();
      param_3 = local_24;
      if (iVar1 % iVar3 < 1) {
        uStack_10 = 0;
        D2Common_10450(0x32726337,&uStack_10);
        *(uint32_t *)(param_2 + 0xc) = 0x57;
        *(uint32_t *)(param_2 + 0x14) = uStack_10;
        *(uint32_t *)(param_2 + 0x30) = 7;
        *(uint32_t *)(param_2 + 0x40) = 0x154;
        piVar2 = (int *)sub_6fc31490_1027a920(param_1,(int *)param_2,local_24);
        param_3 = local_24;
        if (piVar2 != (int *)0x0) {
          uStack_20 = 0x44;
          uStack_1c = 0;
          uStack_18 = 2;
          uStack_14 = 2;
          D2Common_10914(piVar2,(uint)&uStack_20,0);
          uStack_20 = 0x7f;
          uStack_1c = 0xe1;
          uStack_18 = 0x4b;
          uStack_14 = 0x32;
          D2Common_10914(piVar2,(uint)&uStack_20,0);
          uStack_20 = 0xe8;
          uStack_1c = 0;
          uStack_18 = 0x14;
          uStack_14 = 0x14;
          D2Common_10914(piVar2,(uint)&uStack_20,0);
          uStack_20 = 0x20;
          uStack_1c = 0;
          uStack_18 = 5;
          uStack_14 = 10;
          D2Common_10914(piVar2,(uint)&uStack_20,0);
          uStack_20 = 0x10;
          uStack_1c = 0;
          uStack_18 = 0x14;
          uStack_14 = 0x1e;
          D2Common_10914(piVar2,(uint)&uStack_20,0);
          uStack_20 = 0xfc;
          uStack_1c = 0;
          uStack_18 = 6;
          uStack_14 = 6;
          D2Common_10914(piVar2,(uint)&uStack_20,0);
          uStack_20 = 0x1d;
          uStack_1c = 0;
          uStack_18 = 0x118;
          uStack_14 = 0x140;
          D2Common_10914(piVar2,(uint)&uStack_20,0);
          uStack_20 = 0x19e;
          uStack_1c = 0x251;
          uStack_18 = 0x1e;
          uStack_14 = 0x1e;
          D2Common_10914(piVar2,(uint)&uStack_20,0);
          uStack_20 = 0x10d;
          uStack_1c = 0x166;
          uStack_18 = 100;
          uStack_14 = 1;
          D2Common_10914(piVar2,(uint)&uStack_20,0);
          return (int)piVar2;
        }
      }
    }
  }
  iVar3 = sub_6fc31490_1027a920(param_1,(int *)param_2,param_3);
  return iVar3;
}


// 0x102cb690  (ghidra: FUN_102cb690)  [range]
void __fastcall functions_D2NewFunctions_Hook_Quests_a2q6_6fce9f60_102cb690(int param_1,int param_2)

{
  func_0x10276300();
  func_0x102f0690(0,&UNK_10276330,*(uint32_t *)(param_1 + 4),*(uint32_t *)(param_2 + 8));
  func_0x102f0690(0,&UNK_10276360,*(uint32_t *)(param_1 + 4),*(uint32_t *)(param_2 + 8));
  func_0x102f0690(0,&UNK_10276390,*(uint32_t *)(param_1 + 4),*(uint32_t *)(param_2 + 8));
  return;
}


// 0x102cb6e0  (ghidra: FUN_102cb6e0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void functions_D2NewFunctions_102cb6e0(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint64_t uVar5;
  int local_14 [4];
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_14[3] = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_14[0] = 0x8c;
  local_14[1] = 0x8b;
  local_14[2] = 0xb0;
  if ((param_2 == 0) || (iVar1 = sub_102efe30(param_2,0), iVar1 == 0)) {
    sub_6fcbdf40(param_1,param_2,param_3,param_4);
    return;
  }
  piVar4 = local_14;
  while( true ) {
    uVar5 = D2Common_10871(iVar1,*piVar4);
    iVar3 = (int)uVar5;
    if (iVar3 != 0) break;
    piVar4 = piVar4 + 1;
    if (piVar4 == local_14 + 3) {
      sub_6fcbdf40(param_1,param_2,param_3,param_4);
      return;
    }
  }
  iVar2 = D2Common_10680_10278430(iVar3,0x15e,0);
  iVar3 = D2Common_10680_10278430(iVar3,0x15f,0);
  sub_6fcbdf40(param_1,param_2,param_3,param_4);
  if (iVar2 < 1) {
    return;
  }
  if (iVar3 < 1) {
    return;
  }
  sub_102ed510(iVar1,param_1,iVar2,iVar3,0,0,0);
  return;
}


// 0x102cb7f0  (ghidra: FUN_102cb7f0)  [range]
void functions_D2NewFunctions_102cb7f0(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint64_t uVar4;
  
  if ((((param_2 != (uint *)0x0) && (iVar2 = functions_HelperFunctions_102ce600(param_2[1]), iVar2 != 0)) &&
      (0 < (short)*(ushort *)(iVar2 + 0xc))) &&
     ((int)(uint)*(ushort *)(iVar2 + 0xc) < *p_D2Game_DAT_6fd2da44)) {
    uVar4 = D2Common_10331((int *)param_2);
    if ((int)uVar4 == 0) {
      sub_6fc21130((int *)param_2);
      sub_6fc21100((int *)param_2);
      sub_102ecbc0();
    }
    uVar1 = *(uint *)(iVar2 + 4);
    piVar3 = (int *)sub_102f0700(param_2,param_1);
    if ((piVar3 != (int *)0x0) && ((uVar1 >> 10 & 1) == 0)) {
      uVar4 = D2Common_10331(piVar3);
      if (((int)uVar4 != 0) && (uVar4 = D2Common_10057((int)uVar4), (int)uVar4 != 0)) {
        sub_6fd020a0((void *)param_1,(int *)param_2);
        return;
      }
    }
    iVar2 = (**(code **)(p_D2Game_DAT_6fd2d970_102a91f0 + (uint)*(ushort *)(iVar2 + 0xc) * 4))();
    if (iVar2 == 2) {
      sub_6fd020a0((void *)param_1,(int *)param_2);
      return;
    }
  }
  return;
}


// 0x102cb8d0  (ghidra: FUN_102cb8d0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void functions_D2NewFunctions_102cb8d0(int *param_1,int *param_2)

{
  uint8_t *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  int *local_24;
  uint8_t *puStack_20;
  int *local_1c;
  uint auStack_18 [3];
  uint local_c;
  
  local_c = DAT_1039800c ^ (uint)&local_24;
  local_24 = param_1;
  local_1c = param_2;
  if ((((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && ((*param_1 == 0 || (*param_1 == 1))))
     && ((*param_2 == 3 && (param_2[5] != 0)))) {
    iVar2 = functions_HelperFunctions_102ce600(param_2[1]);
    if ((iVar2 != 0) && ((*(byte *)(iVar2 + 4) & 4) != 0)) {
      iVar2 = D2Common_10910((int)param_1,0x9c,0);
      uVar5 = D2Common_10973((int)param_1,0xa6,0);
      puStack_20 = functions_HelperFunctions_102d30b0((uint8_t *)local_24,0xa6,iVar2);
      puStack_20 = puStack_20 + iVar2 + (int)uVar5;
      if (puStack_20 != (uint8_t *)0x0) {
        auStack_18[0] = 0;
        auStack_18[1] = 0;
        uVar3 = D2Common_10587((int)local_24,0x148,0);
        D2Common_10614(auStack_18,uVar3);
        puVar1 = puStack_20;
        iVar2 = 10;
        if ((param_2[5] != 0) && (*(short *)(param_2[5] + 10) == 0x23)) {
          iVar2 = 6;
        }
        iVar4 = 0;
        do {
          uVar3 = functions_D2NewFunctions_102c5d70(auStack_18);
          if (puVar1 <= (uint8_t *)(uVar3 % 100)) break;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar2);
        D2Common_10887(local_1c,0x148,iVar4,0);
      }
    }
  }
  return;
}


// 0x102cba10  (ghidra: FUN_102cba10)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void functions_D2NewFunctions_102cba10(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  uint8_t auStack_24 [4];
  uint uStack_20;
  int *local_1c;
  uint auStack_18 [3];
  uint local_c;
  
  local_c = DAT_1039800c ^ (uint)auStack_24;
  local_1c = param_2;
  if ((((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && ((*param_1 == 0 || (*param_1 == 1))))
     && (*param_2 == 3)) {
    iVar1 = functions_HelperFunctions_102ce600(param_2[1]);
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 4) & 4) != 0)) {
      iVar1 = D2Common_10910((int)param_1,0x9c,0);
      uVar5 = D2Common_10973((int)param_1,0xa6,0);
      uStack_20 = (int)uVar5 + iVar1;
      if (uStack_20 != 0) {
        auStack_18[0] = 0;
        auStack_18[1] = 0;
        uVar2 = D2Common_10587((int)param_1,0x148,0);
        D2Common_10614(auStack_18,uVar2);
        uVar2 = uStack_20;
        iVar1 = 10;
        if ((param_2[5] != 0) && (*(short *)(param_2[5] + 10) == 0x23)) {
          iVar1 = 6;
        }
        iVar4 = 0;
        do {
          uVar3 = functions_D2NewFunctions_102c5d70(auStack_18);
          if (uVar2 <= uVar3 % 100) break;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
        D2Common_10887(local_1c,0x148,iVar4,0);
      }
    }
  }
  return;
}


// 0x102cbb20  (ghidra: FUN_102cbb20)  [range]
void functions_D2NewFunctions_102cbb20(uint32_t param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  sub_102f0f50(param_1,param_2,param_3);
  cVar2 = *(char *)(param_2 + 0x6d);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      if (*(int *)(param_3 + 0xc) < 1) {
        return;
      }
      iVar4 = 0;
      do {
        piVar1 = (int *)(*(int *)(param_3 + 8) + iVar4 * 4);
        iVar3 = *piVar1;
        if ((iVar3 == 0x20767161) || (iVar3 == 0x33767161)) {
          *piVar1 = 0x32767161;
        }
        else if ((iVar3 == 0x20767163) || (iVar3 == 0x33767163)) {
          *piVar1 = 0x32767163;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_3 + 0xc));
      return;
    }
    if (cVar2 == '\x02') {
      if (*(int *)(param_3 + 0xc) < 1) {
        return;
      }
      iVar4 = 0;
      do {
        piVar1 = (int *)(*(int *)(param_3 + 8) + iVar4 * 4);
        iVar3 = *piVar1;
        if ((iVar3 == 0x20767161) || (iVar3 == 0x32767161)) {
          *piVar1 = 0x33767161;
        }
        else if ((iVar3 == 0x20767163) || (iVar3 == 0x32767163)) {
          *piVar1 = 0x33767163;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_3 + 0xc));
      return;
    }
  }
  if (0 < *(int *)(param_3 + 0xc)) {
    iVar4 = 0;
    do {
      piVar1 = (int *)(*(int *)(param_3 + 8) + iVar4 * 4);
      iVar3 = *piVar1;
      if ((iVar3 == 0x32767161) || (iVar3 == 0x33767161)) {
        *piVar1 = 0x20767161;
      }
      else if ((iVar3 == 0x32767163) || (iVar3 == 0x33767163)) {
        *piVar1 = 0x20767163;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_3 + 0xc));
  }
  return;
}


// 0x102cbc40  (ghidra: FUN_102cbc40)  [range]
void functions_D2NewFunctions_Hook_sub_6fcdc050_102cbc40(int param_1,uint *param_2,int *param_3,int param_4,int *param_5,uint32_t param_6
                 )

{
  uint *puVar1;
  int iVar2;
  uint32_t param_6;   /* not traced by Ghidra: value with no visible source */
  
  sub_6fc54130(param_1,(int *)param_2,param_3,param_4,param_5,param_6);
  if (*param_5 == 0) {
    *param_5 = param_1;
    puVar1 = param_2 + 1;
    *param_2 = 0x1e46;
    *puVar1 = 0x1446;
    iVar2 = functions_ItemFunctions_102daae0(param_5,param_2,puVar1,param_3);
    if ((iVar2 == 0) || ((int)*puVar1 < 0x1432)) {
      *param_2 = 0x1e6e;
      *puVar1 = 0x1446;
      iVar2 = functions_ItemFunctions_102daae0(param_5,param_2,puVar1,param_3);
      if ((iVar2 == 0) || ((int)*puVar1 < 0x1432)) {
        *param_5 = 0;
      }
    }
  }
  return;
}


// 0x102cbcd0  [range]
void __fastcall sub_6fd020a0(void *param_1,int *param_2)

{
  int iVar1;
  
  if (((param_1 != (void *)0x0) && (param_2 != (int *)0x0)) && ((uint)*param_2 < 6)) {
    if (p_sub_6fd020a0 == (FARPROC)0x0) {
      iVar1 = sub_GameVersionIndex_10253fc0();
      p_sub_6fd020a0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7d30 + iVar1 * 4));
    }
                    /* WARNING: Could not recover jumptable at 0x10273286. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*p_sub_6fd020a0)();
    return;
  }
  return;
}


// 0x102cbcf0  (ghidra: FUN_102cbcf0)  [range]
int __thiscall functions_D2NewFunctions_102cbcf0(void *this,int param_1)

{
  return *(int *)this + param_1 * 0x14;
}


// 0x102cbd10  (ghidra: FUN_102cbd10)  [range]
int __fastcall functions_D2NewFunctions_102cbd10(int *param_1)

{
  return (param_1[1] - *param_1 >> 2) * -0x33333333;
}


// 0x102cbd20  (ghidra: FUN_102cbd20)  [range]
void __thiscall functions_D2NewFunctions_102cbd20(void *this,uint32_t param_1)

{
  functions_D2NewFunctions_102cbd30(this,param_1);
  return;
}


// 0x102cbd30  (ghidra: FUN_102cbd30)  [range]
void __thiscall functions_D2NewFunctions_102cbd30(void *this,uint32_t param_1)

{
  int iVar1;
  uint32_t uVar2;
  void *this_00;
  
  iVar1 = *(int *)((int)this + 4);
  uVar2 = sub_1020fe80(param_1);
  if (iVar1 != *(int *)((int)this_00 + 8)) {
    functions_D2NewFunctions_102cbd60(this_00,uVar2);
    return;
  }
  functions_D2NewFunctions_102cc0f0(this_00,iVar1,uVar2);
  return;
}


// 0x102cbd60  (ghidra: FUN_102cbd60)  [range]
void __thiscall functions_D2NewFunctions_102cbd60(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_1);
  sub_1020fe80(*(uint32_t *)((int)this + 4));
  functions_D2NewFunctions_102cc0c0(uVar1);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x14;
  return;
}


// 0x102cbd90  [range]
void __fastcall thunk_FUN_102cbe70(uint32_t *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    functions_D2NewFunctions_102cbee0(pvVar1,(param_1[2] - (int)pvVar1 >> 2) * -0x33333333);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// 0x102cbda0  (ghidra: FUN_102cbda0)  [range]
uint8_t * __fastcall functions_D2NewFunctions_102cbda0(uint32_t param_1)

{
  functions_D2NewFunctions_102cbeb0(param_1);
  return &DAT_104e3158;
}


// 0x102cbdc0  (ghidra: FUN_102cbdc0)  [range]
int __thiscall functions_D2NewFunctions_102cbdc0(void *this,int param_1)

{
  return *(int *)this + param_1 * 0xc;
}


// 0x102cbde0  (ghidra: FUN_102cbde0)  [range]
uint32_t functions_D2NewFunctions_102cbde0(void *param_1)

{
  uint32_t *puVar1;
  uint32_t extraout_ECX;
  
  puVar1 = (uint32_t *)thunk_FUN_1020fe80(&DAT_104e31b0);
  sub_10218cd0(param_1,*(uint32_t *)*puVar1);
  return extraout_ECX;
}


// 0x102cbe00  (ghidra: FUN_102cbe00)  [linked]
void __fastcall functions_D2NewFunctions_102cbe00(int param_1)

{
  uint32_t extraout_ECX;
  uint64_t uVar1;
  
  client_DrawHoverItem_10225360((short *)&DAT_1037748c);
  uVar1 = client_DrawHoverItem_10225280(param_1);
  functions_D2NewFunctions_102cbf20((ushort *)uVar1,*(uint *)(param_1 + 0x10),extraout_ECX,
               (uint)((ulonglong)uVar1 >> 0x20));
  return;
}


// 0x102cbe30  (ghidra: FUN_102cbe30)  [linked]
void __thiscall functions_D2NewFunctions_102cbe30(void *this,int param_1)

{
  uint32_t extraout_ECX;
  uint64_t uVar1;
  
  client_DrawHoverItem_10225280(param_1);
  uVar1 = client_DrawHoverItem_10225280((int)this);
  functions_D2NewFunctions_102cc1c0((short *)uVar1,*(uint *)((int)this + 0x10),extraout_ECX,
               (ushort *)((ulonglong)uVar1 >> 0x20),*(uint *)(param_1 + 0x10));
  return;
}


// 0x102cbe70  (ghidra: FUN_102cbe70)  [inferred]
void __fastcall functions_D2NewFunctions_102cbe70(uint32_t *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    functions_D2NewFunctions_102cbee0(pvVar1,(param_1[2] - (int)pvVar1 >> 2) * -0x33333333);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// 0x102cbeb0  (ghidra: FUN_102cbeb0)  [linked]
uint8_t * __fastcall functions_D2NewFunctions_102cbeb0(uint32_t param_1)

{
  uint32_t local_9;
  uint8_t local_5;
  
  functions_D2NewFunctions_102cc250(local_9,param_1,&local_5);
  functions_D2NewFunctions_102cbf00();
  return &DAT_104e3158;
}


// 0x102cbee0  (ghidra: FUN_102cbee0)  [linked]
void functions_D2NewFunctions_102cbee0(void *param_1,int param_2)

{
  sub_10210850(param_1,param_2 * 0x14);
  return;
}


// 0x102cbf00  (ghidra: FUN_102cbf00)  [linked]
void functions_D2NewFunctions_102cbf00(void)

{
  uint32_t *puVar1;
  uint32_t extraout_EDX;
  
  sub_10210780();
  puVar1 = (uint32_t *)thunk_FUN_1020fe80(&DAT_104e3158);
  *puVar1 = extraout_EDX;
  return;
}


// 0x102cbf20  (ghidra: FUN_102cbf20)  [linked]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __fastcall functions_D2NewFunctions_102cbf20(ushort *param_1,uint param_2,uint32_t param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_c = param_2;
  puVar1 = sub_10210430(&local_c,&param_4);
  uVar2 = sub_1025f9b0(param_1,(ushort *)&DAT_1037748c,*puVar1);
  if (uVar2 == 0) {
    if (param_2 < param_4) {
      return 0xffffffff;
    }
    uVar2 = (uint)(param_4 < param_2);
  }
  return uVar2;
}


// 0x102cbf90  (ghidra: FUN_102cbf90)  [linked]
void __thiscall functions_D2NewFunctions_102cbf90(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint8_t uVar1;
  uint32_t *puVar2;
  uint32_t *extraout_EDX;
  uint32_t local_8;
  
  puVar2 = (uint32_t *)thunk_FUN_10218bf0(&param_1);
  thunk_FUN_10218bf0(&param_2);
  uVar1 = sub_10218d20((char)param_3);
  local_8 = CONCAT31((int3)((uint)this >> 8),uVar1);
  functions_D2NewFunctions_102cc390(puVar2,extraout_EDX,((int)extraout_EDX - (int)puVar2 >> 2) * -0x33333333,local_8);
  return;
}


// 0x102cbfe0  (ghidra: FUN_102cbfe0)  [linked]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall functions_D2NewFunctions_102cbfe0(void *param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  void *extraout_ECX;
  void *extraout_ECX_00;
  uint8_t auStack_18 [4];
  int local_14;
  int local_10;
  uint local_c;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */
  
  local_c = DAT_1039800c ^ (uint)auStack_18;
  sub_102401f0(&local_14);
  sub_102bafa0(extraout_ECX,&stack0x00000004);
  sub_102401f0(&local_10);
  sub_102bafa0(extraout_ECX_00,&stack0x00000008);
  piVar3 = (int *)thunk_FUN_1020fe80(param_1);
  iVar1 = *piVar3;
  bVar2 = sub_1023d8f0(&local_14,&local_10);
  if (bVar2) {
    do {
      iVar4 = sub_1025f2f0(&local_14);
      sub_10211350(param_1,iVar1,iVar4);
      sub_10212530(&local_14);
      bVar2 = sub_1023d8f0(&local_14,&local_10);
    } while (bVar2);
  }
  return;
}


// 0x102cc080  (ghidra: FUN_102cc080)  [linked]
void __fastcall functions_D2NewFunctions_102cc080(int param_1)

{
  round((double)param_1 + (double)(&DAT_103804e0)[-(param_1 >> 0x1f)]);
  return;
}


// 0x102cc0c0  (ghidra: FUN_102cc0c0)  [linked]
void __cdecl functions_D2NewFunctions_102cc0c0(uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  uint32_t uVar4;
  uint32_t *puVar5;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  puVar3 = (uint32_t *)sub_1020fe80(param_1);
  uVar4 = sub_1020fe80(extraout_EDX);
  puVar5 = (uint32_t *)sub_1020f1d0(extraout_ECX,uVar4);
  uVar4 = puVar3[1];
  uVar1 = puVar3[2];
  uVar2 = puVar3[3];
  *puVar5 = *puVar3;
  puVar5[1] = uVar4;
  puVar5[2] = uVar1;
  puVar5[3] = uVar2;
  puVar5[4] = puVar3[4];
  return;
}


// 0x102cc0f0  (ghidra: FUN_102cc0f0)  [linked]
int __thiscall functions_D2NewFunctions_102cc0f0(void *this,int param_1,uint32_t param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint32_t uVar4;
  uint32_t extraout_EDX;
  int iVar5;
  
  iVar1 = *(int *)this;
  iVar5 = (*(int *)((int)this + 4) - iVar1 >> 2) * -0x33333333;
  uVar2 = sub_10211890();
  if (iVar5 - uVar2 != 0) {
    uVar2 = iVar5 + 1;
    uVar3 = functions_D2NewFunctions_102cc2c0(this,uVar2);
    iVar5 = functions_D2NewFunctions_102cc330(uVar3);
    iVar1 = iVar5 + ((param_1 - iVar1) / 0x14) * 0x14;
    uVar4 = sub_1020fe80(param_2);
    sub_1020fe80(extraout_EDX);
    functions_D2NewFunctions_102cc0c0(uVar4);
    if (param_1 == *(int *)((int)this + 4)) {
      functions_D2NewFunctions_102cc2f0(*(uint32_t *)this,*(int *)((int)this + 4),iVar5);
    }
    else {
      functions_D2NewFunctions_102cc310(*(uint32_t *)this,param_1,iVar5);
      functions_D2NewFunctions_102cc310(param_1,*(uint32_t *)((int)this + 4),iVar1 + 0x14);
    }
    functions_D2NewFunctions_102cc270(this,iVar5,uVar2,uVar3);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_10210bb0();
}


// 0x102cc1c0  (ghidra: FUN_102cc1c0)  [linked]
int __fastcall
functions_D2NewFunctions_102cc1c0(short *param_1,uint param_2,uint32_t param_3,ushort *param_4,uint param_5)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_5 <= param_2) {
    if (param_5 == 0) {
      return 0;
    }
    iVar3 = (param_2 - param_5) + 1;
    for (puVar1 = (ushort *)sub_10260ea0(param_1,iVar3 * 2 >> 1,(short *)param_4);
        puVar1 != (ushort *)0x0;
        puVar1 = (ushort *)
                 sub_10260ea0((short *)(puVar1 + 1),
                              (int)param_1 + (iVar3 * 2 - (int)(puVar1 + 1)) >> 1,(short *)param_4))
    {
      iVar2 = sub_1025f9b0(puVar1,param_4,param_5);
      if (iVar2 == 0) {
        return (int)puVar1 - (int)param_1 >> 1;
      }
    }
  }
  return -1;
}


// 0x102cc250  (ghidra: FUN_102cc250)  [linked]
uint8_t * functions_D2NewFunctions_102cc250(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  sub_1020fe80(param_3);
  functions_D2NewFunctions_102cc380();
  return &DAT_104e3158;
}


// 0x102cc270  (ghidra: FUN_102cc270)  [linked]
void __thiscall functions_D2NewFunctions_102cc270(void *this,int param_1,int param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    functions_D2NewFunctions_102cbee0(pvVar1,(*(int *)((int)this + 8) - (int)pvVar1 >> 2) * -0x33333333);
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_1 + param_2 * 0x14;
  *(int *)((int)this + 8) = param_1 + param_3 * 0x14;
  return;
}


// 0x102cc2c0  (ghidra: FUN_102cc2c0)  [linked]
uint __thiscall functions_D2NewFunctions_102cc2c0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = functions_D2NewFunctions_102cc370(this);
  uVar2 = sub_10211890();
  if (uVar1 <= uVar2 - (uVar1 >> 1)) {
    uVar2 = (uVar1 >> 1) + uVar1;
    if (uVar2 < param_1) {
      uVar2 = param_1;
    }
  }
  return uVar2;
}


// 0x102cc2f0  (ghidra: FUN_102cc2f0)  [linked]
void functions_D2NewFunctions_102cc2f0(uint32_t param_1,uint32_t param_2,int param_3)

{
  functions_D2NewFunctions_102cc350(param_1,param_2,param_3);
  return;
}


// 0x102cc310  (ghidra: FUN_102cc310)  [linked]
void functions_D2NewFunctions_102cc310(uint32_t param_1,uint32_t param_2,int param_3)

{
  functions_D2NewFunctions_102cc460(param_1,param_2,param_3);
  return;
}


// 0x102cc330  (ghidra: FUN_102cc330)  [linked]
void functions_D2NewFunctions_102cc330(uint param_1)

{
  uint uVar1;
  
  uVar1 = sub_10211470(param_1);
  sub_10210950(uVar1);
  return;
}


// 0x102cc350  (ghidra: FUN_102cc350)  [linked]
void functions_D2NewFunctions_102cc350(uint32_t param_1,uint32_t param_2,int param_3)

{
  functions_D2NewFunctions_102cc460(param_1,param_2,param_3);
  return;
}


// 0x102cc370  (ghidra: FUN_102cc370)  [linked]
int __fastcall functions_D2NewFunctions_102cc370(int *param_1)

{
  return (param_1[2] - *param_1 >> 2) * -0x33333333;
}


// 0x102cc380  (ghidra: FUN_102cc380)  [linked]
uint8_t * functions_D2NewFunctions_102cc380(void)

{
  functions_D2NewFunctions_102cc4d0();
  return &DAT_104e3158;
}


// 0x102cc390  (ghidra: FUN_102cc390)  [linked]
void __fastcall functions_D2NewFunctions_102cc390(uint32_t *param_1,uint32_t *param_2,int param_3,uint32_t param_4)

{
  int iVar1;
  uint32_t *local_10;
  uint32_t *local_c;
  
  iVar1 = (int)param_2 - (int)param_1;
  while( true ) {
    if (iVar1 < 0x294) {
      functions_D2NewFunctions_102cc4f0(param_1,param_2);
      return;
    }
    if (param_3 < 1) break;
    functions_D2NewFunctions_102cc6a0(&local_10,param_1,param_2,(char)param_4);
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if (((int)local_10 - (int)param_1 >> 2) * -0x33333333 <
        ((int)param_2 - (int)local_c >> 2) * -0x33333333) {
      functions_D2NewFunctions_102cc390(param_1,local_10,param_3,param_4);
      param_1 = local_c;
    }
    else {
      functions_D2NewFunctions_102cc390(local_c,param_2,param_3,param_4);
      param_2 = local_10;
    }
    iVar1 = (int)param_2 - (int)param_1;
  }
  functions_D2NewFunctions_102cc5d0((int)param_1,(int)param_2);
  functions_D2NewFunctions_102cc660(param_1,(int)param_2);
  return;
}


// 0x102cc460  (ghidra: FUN_102cc460)  [linked]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __fastcall functions_D2NewFunctions_102cc460(uint32_t param_1,uint32_t param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t local_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_10 = param_2;
  local_c = param_1;
  iVar1 = sub_1020faf0(&local_c);
  iVar2 = sub_1020faf0(&local_10);
  uVar3 = sub_1020fe80(param_3);
  sub_102126a0(iVar1,iVar2,uVar3);
  return param_3 + ((iVar2 - iVar1) / 0x14) * 0x14;
}


// 0x102cc4d0  (ghidra: FUN_102cc4d0)  [linked]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t * functions_D2NewFunctions_102cc4d0(void)

{
  DAT_104e3158 = 0;
  DAT_104e315c = 0;
  return &DAT_104e3158;
}


// 0x102cc4f0  (ghidra: FUN_102cc4f0)  [linked]
void __fastcall functions_D2NewFunctions_102cc4f0(uint32_t *param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  bool bVar3;
  uint32_t *puVar4;
  uint32_t *puVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  uint32_t extraout_EDX_01;
  uint32_t uVar6;
  uint32_t *extraout_EDX_02;
  uint32_t extraout_EDX_03;
  int iVar7;
  uint32_t *puVar8;
  uint32_t local_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t local_14;
  uint32_t *local_10;
  uint32_t *local_c;
  uint32_t *local_8;
  
  if ((param_1 != param_2) && (puVar8 = param_1 + 5, puVar8 != param_2)) {
    local_10 = param_2;
    local_8 = param_1;
    local_c = (uint32_t *)sub_1020fe80(&local_24);
    iVar7 = extraout_EDX;
    do {
      puVar4 = (uint32_t *)sub_1020fe80(puVar8);
      local_24 = *puVar4;
      uStack_20 = puVar4[1];
      uStack_1c = puVar4[2];
      uStack_18 = puVar4[3];
      local_14 = puVar4[4];
      bVar3 = sub_102be2c0((int)&local_24,extraout_EDX_00);
      if (bVar3) {
        sub_10219190(local_8,puVar8,iVar7 + 0x28);
        uVar6 = local_c[1];
        uVar1 = local_c[2];
        uVar2 = local_c[3];
        *local_8 = *local_c;
        local_8[1] = uVar6;
        local_8[2] = uVar1;
        local_8[3] = uVar2;
        local_8[4] = local_c[4];
      }
      else {
        bVar3 = sub_102be2c0((int)&local_24,iVar7);
        uVar6 = extraout_EDX_01;
        puVar4 = puVar8;
        if (bVar3) {
          do {
            puVar5 = (uint32_t *)sub_1020fe80(uVar6);
            uVar6 = puVar5[1];
            uVar1 = puVar5[2];
            uVar2 = puVar5[3];
            *puVar4 = *puVar5;
            puVar4[1] = uVar6;
            puVar4[2] = uVar1;
            puVar4[3] = uVar2;
            puVar4[4] = puVar5[4];
            bVar3 = sub_102be2c0((int)&local_24,(int)(extraout_EDX_02 + -5));
            uVar6 = extraout_EDX_03;
            puVar4 = extraout_EDX_02;
          } while (bVar3);
        }
        uVar6 = local_c[1];
        uVar1 = local_c[2];
        uVar2 = local_c[3];
        *puVar4 = *local_c;
        puVar4[1] = uVar6;
        puVar4[2] = uVar1;
        puVar4[3] = uVar2;
        puVar4[4] = local_c[4];
      }
      puVar8 = puVar8 + 5;
      iVar7 = iVar7 + 0x14;
    } while (puVar8 != local_10);
  }
  return;
}


// 0x102cc5d0  (ghidra: FUN_102cc5d0)  [linked]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall functions_D2NewFunctions_102cc5d0(int param_1,int param_2)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  uint extraout_EDX;
  int iVar3;
  int iVar4;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  iVar3 = (param_2 - param_1 >> 2) * -0x33333333 >> 1;
  if (0 < iVar3) {
    uVar1 = sub_1020fe80(&local_1c);
    iVar4 = param_1 + iVar3 * 0x14;
    do {
      iVar4 = iVar4 + -0x14;
      iVar3 = iVar3 + -1;
      puVar2 = (uint32_t *)sub_1020fe80(iVar4);
      local_1c = *puVar2;
      uStack_18 = puVar2[1];
      uStack_14 = puVar2[2];
      uStack_10 = puVar2[3];
      local_c = puVar2[4];
      functions_D2NewFunctions_102cc8c0(param_1,iVar3,extraout_EDX,uVar1);
    } while (0 < iVar3);
  }
  return;
}


// 0x102cc660  (ghidra: FUN_102cc660)  [linked]
void __fastcall functions_D2NewFunctions_102cc660(void *param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = param_2 - (int)param_1; 0x27 < iVar1; iVar1 = iVar1 + -0x14) {
    functions_D2NewFunctions_102cc980(param_1,param_2);
    param_2 = param_2 + -0x14;
  }
  return;
}


// 0x102cc6a0  (ghidra: FUN_102cc6a0)  [linked]
uint32_t __fastcall
functions_D2NewFunctions_102cc6a0(uint32_t param_1,uint32_t *param_2,uint32_t *param_3,uint8_t param_4)

{
  bool bVar1;
  uint32_t *puVar2;
  uint32_t *puVar3;
  uint32_t *extraout_EDX;
  uint32_t *extraout_EDX_00;
  uint32_t *extraout_EDX_01;
  uint32_t *puVar4;
  uint32_t *puVar5;
  uint32_t *puVar6;
  uint32_t *puVar7;
  uint32_t *puVar8;
  uint64_t uVar9;
  uint32_t *local_14;
  uint32_t *local_10;
  uint32_t *local_c;
  uint32_t *local_8;
  
  local_8 = (uint32_t *)CONCAT31(local_8._1_3_,param_4);
  puVar6 = param_2 + (((int)param_3 - (int)param_2 >> 2) * -0x33333333 >> 1) * 5;
  puVar2 = (uint32_t *)functions_D2NewFunctions_102cc9f0((int)param_3);
  functions_D2NewFunctions_102cca00((int)param_2,puVar6,puVar2);
  local_10 = puVar6;
  puVar2 = (uint32_t *)functions_D2NewFunctions_102ccaa0((int)puVar6);
  local_c = puVar2;
  if (param_2 < puVar6) {
    do {
      local_8 = (uint32_t *)functions_D2NewFunctions_102cc9f0((int)puVar6);
      bVar1 = sub_102be2c0((int)local_8,(int)puVar6);
      if ((bVar1) || (bVar1 = sub_102be2c0((int)puVar6,(int)local_8), bVar1)) break;
      puVar6 = puVar6 + -5;
      local_10 = puVar6;
    } while (extraout_EDX < puVar6);
  }
  while (((puVar7 = puVar2, puVar8 = puVar6, puVar4 = puVar2, puVar5 = puVar2, local_14 = puVar6,
          puVar2 < param_3 && (bVar1 = sub_102be2c0((int)puVar2,(int)puVar6), !bVar1)) &&
         (bVar1 = sub_102be2c0((int)puVar6,(int)puVar2), !bVar1))) {
    puVar2 = puVar2 + 5;
    local_c = puVar2;
  }
  do {
    while (local_8 = puVar5, puVar5 = puVar6, puVar6 = local_14, param_3 <= puVar7) {
joined_r0x102cc7a7:
      while (local_8 = puVar4, param_2 < puVar5) {
        puVar3 = (uint32_t *)functions_D2NewFunctions_102cc9f0((int)puVar5);
        bVar1 = sub_102be2c0((int)puVar3,(int)puVar8);
        puVar4 = extraout_EDX_00;
        if (!bVar1) {
          bVar1 = sub_102be2c0((int)puVar8,(int)puVar3);
          puVar5 = extraout_EDX_01;
          puVar2 = local_c;
          puVar7 = local_8;
          if (bVar1) break;
          local_10 = puVar8 + -5;
          puVar4 = extraout_EDX_01;
          puVar8 = local_10;
          if (local_10 != puVar3) {
            thunk_FUN_102ccbe0(local_10);
            puVar4 = puVar6;
            puVar8 = local_10;
          }
        }
        puVar5 = puVar4 + -5;
        puVar2 = local_c;
        puVar7 = local_8;
        puVar6 = puVar4 + -5;
        puVar4 = local_8;
      }
      if (puVar5 == param_2) {
        if (puVar7 == param_3) {
          sub_10210100(&local_10,&local_c);
          return param_1;
        }
        if (puVar2 != puVar7) {
          thunk_FUN_102ccbe0(puVar8);
          puVar2 = local_c;
          puVar8 = local_10;
        }
        local_c = puVar2 + 5;
        thunk_FUN_102ccbe0(puVar8);
        local_10 = local_10 + 5;
        puVar7 = puVar7 + 5;
        puVar2 = local_c;
        puVar8 = local_10;
        puVar4 = puVar7;
        puVar5 = puVar7;
        local_14 = puVar6;
      }
      else {
        local_14 = puVar5 + -5;
        if (puVar7 == param_3) {
          local_10 = puVar8 + -5;
          if (local_14 != local_10) {
            thunk_FUN_102ccbe0(local_14);
            puVar2 = local_c;
          }
          local_c = puVar2 + -5;
          thunk_FUN_102ccbe0(local_10);
          puVar6 = local_14;
          puVar2 = local_c;
          puVar8 = local_10;
          puVar4 = local_8;
          puVar5 = local_8;
        }
        else {
          uVar9 = thunk_FUN_102ccbe0(puVar7);
          puVar6 = (uint32_t *)((ulonglong)uVar9 >> 0x20);
          puVar7 = puVar7 + 5;
          puVar2 = local_c;
          puVar8 = local_10;
          puVar4 = puVar7;
          puVar5 = puVar7;
        }
      }
    }
    bVar1 = sub_102be2c0((int)puVar8,(int)puVar7);
    if (!bVar1) {
      bVar1 = sub_102be2c0((int)puVar7,(int)puVar8);
      puVar5 = local_14;
      puVar4 = puVar7;
      if (bVar1) goto joined_r0x102cc7a7;
      if (puVar2 != puVar7) {
        thunk_FUN_102ccbe0(puVar2);
        puVar2 = local_c;
        puVar8 = local_10;
      }
      puVar2 = puVar2 + 5;
      local_c = puVar2;
    }
    puVar7 = puVar7 + 5;
    puVar4 = puVar7;
    puVar5 = local_8;
  } while( true );
}


// 0x102cc8c0  (ghidra: FUN_102cc8c0)  [linked]
void __fastcall functions_D2NewFunctions_102cc8c0(int param_1,int param_2,uint param_3,uint32_t param_4)

{
  int iVar1;
  uint32_t *puVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  bool bVar6;
  uint32_t *puVar7;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar8;
  int iVar9;
  
  iVar9 = (int)(param_3 - 1) >> 1;
  iVar8 = param_2;
  while (iVar8 < iVar9) {
    iVar1 = param_1 + (iVar8 * 2 + 2) * 0x14;
    bVar6 = sub_102be2c0(iVar1,iVar1 + -0x14);
    puVar7 = (uint32_t *)sub_1020fe80(param_1 + (extraout_EDX + (bVar6 ^ 1) + 1) * 0x14);
    uVar3 = puVar7[1];
    uVar4 = puVar7[2];
    uVar5 = puVar7[3];
    puVar2 = (uint32_t *)(param_1 + iVar8 * 0x14);
    *puVar2 = *puVar7;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    *(uint32_t *)(param_1 + 0x10 + iVar8 * 0x14) = puVar7[4];
    iVar8 = extraout_EDX_00;
  }
  if ((iVar8 == iVar9) && ((param_3 & 1) == 0)) {
    puVar7 = (uint32_t *)sub_1020fe80(param_1 + (param_3 - 1) * 0x14);
    uVar3 = puVar7[1];
    uVar4 = puVar7[2];
    uVar5 = puVar7[3];
    puVar2 = (uint32_t *)(param_1 + extraout_EDX_01 * 0x14);
    *puVar2 = *puVar7;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    *(uint32_t *)(param_1 + 0x10 + extraout_EDX_01 * 0x14) = puVar7[4];
    iVar8 = param_3 - 1;
  }
  iVar9 = sub_1020fe80(param_4);
  functions_D2NewFunctions_102ccac0(param_1,iVar8,param_2,iVar9);
  return;
}


// 0x102cc980  (ghidra: FUN_102cc980)  [linked]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall functions_D2NewFunctions_102cc980(void *param_1,int param_2)

{
  uint32_t *puVar1;
  uint32_t uVar2;
  uint32_t *extraout_EDX;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if (1 < (param_2 - (int)param_1 >> 2) * -0x33333333) {
    puVar1 = (uint32_t *)sub_1020fe80(param_2 + -0x14);
    local_1c = *puVar1;
    uStack_18 = puVar1[1];
    uStack_14 = puVar1[2];
    uStack_10 = puVar1[3];
    local_c = puVar1[4];
    uVar2 = sub_1020fe80(&local_1c);
    functions_D2NewFunctions_102ccb30(param_1,extraout_EDX,uVar2);
  }
  return;
}


// 0x102cc9f0  (ghidra: FUN_102cc9f0)  [linked]
int __fastcall functions_D2NewFunctions_102cc9f0(int param_1)

{
  return param_1 + -0x14;
}


// 0x102cca00  (ghidra: FUN_102cca00)  [linked]
void __fastcall functions_D2NewFunctions_102cca00(int param_1,uint32_t *param_2,uint32_t *param_3)

{
  int iVar1;
  
  iVar1 = ((int)param_3 - param_1 >> 2) * -0x33333333;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1 >> 3;
    functions_D2NewFunctions_102ccb80(param_1,(uint32_t *)(iVar1 * 0x14 + param_1),
                 (uint32_t *)(iVar1 * 0x28 + param_1));
    functions_D2NewFunctions_102ccb80((int)(param_2 + iVar1 * -5),param_2,param_2 + iVar1 * 5);
    functions_D2NewFunctions_102ccb80((int)(param_3 + iVar1 * -10),param_3 + iVar1 * -5,param_3);
    functions_D2NewFunctions_102ccb80(iVar1 * 0x14 + param_1,param_2,param_3 + iVar1 * -5);
    return;
  }
  functions_D2NewFunctions_102ccb80(param_1,param_2,param_3);
  return;
}


// 0x102ccaa0  (ghidra: FUN_102ccaa0)  [linked]
int __fastcall functions_D2NewFunctions_102ccaa0(int param_1)

{
  return param_1 + 0x14;
}


// 0x102ccab0  [inferred]
uint64_t __fastcall thunk_FUN_102ccbe0(uint32_t *param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  uint32_t extraout_EDX;
  uint32_t *extraout_EDX_00;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint32_t uStack_8;
  
  puVar4 = (uint32_t *)sub_1020fe80(param_1);
  uStack_18 = *puVar4;
  uStack_14 = puVar4[1];
  uStack_10 = puVar4[2];
  uStack_c = puVar4[3];
  uStack_8 = puVar4[4];
  puVar4 = (uint32_t *)sub_1020fe80(extraout_EDX);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *param_1 = *puVar4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = puVar4[4];
  puVar4 = (uint32_t *)sub_1020fe80(&uStack_18);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *extraout_EDX_00 = *puVar4;
  extraout_EDX_00[1] = uVar1;
  extraout_EDX_00[2] = uVar2;
  extraout_EDX_00[3] = uVar3;
  uVar1 = puVar4[4];
  extraout_EDX_00[4] = uVar1;
  return CONCAT44(extraout_EDX_00,uVar1);
}


// 0x102ccac0  (ghidra: FUN_102ccac0)  [linked]
void __fastcall functions_D2NewFunctions_102ccac0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint32_t *puVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  bool bVar6;
  uint32_t *puVar7;
  int extraout_EDX;
  
  while (param_3 < param_2) {
    iVar1 = param_1 + (param_2 + -1 >> 1) * 0x14;
    bVar6 = sub_102be2c0(iVar1,param_4);
    if (!bVar6) break;
    puVar7 = (uint32_t *)sub_1020fe80(iVar1);
    uVar3 = puVar7[1];
    uVar4 = puVar7[2];
    uVar5 = puVar7[3];
    puVar2 = (uint32_t *)(param_1 + param_2 * 0x14);
    *puVar2 = *puVar7;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    *(uint32_t *)(param_1 + 0x10 + param_2 * 0x14) = puVar7[4];
    param_2 = extraout_EDX;
  }
  puVar7 = (uint32_t *)sub_1020fe80(param_4);
  uVar3 = puVar7[1];
  uVar4 = puVar7[2];
  uVar5 = puVar7[3];
  puVar2 = (uint32_t *)(param_1 + param_2 * 0x14);
  *puVar2 = *puVar7;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  *(uint32_t *)(param_1 + 0x10 + param_2 * 0x14) = puVar7[4];
  return;
}


// 0x102ccb30  (ghidra: FUN_102ccb30)  [linked]
void __thiscall functions_D2NewFunctions_102ccb30(void *this,uint32_t *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  uint32_t uVar4;
  int extraout_EDX;
  
  puVar3 = (uint32_t *)sub_1020fe80(this);
  uVar4 = puVar3[1];
  uVar1 = puVar3[2];
  uVar2 = puVar3[3];
  *param_1 = *puVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = puVar3[4];
  uVar4 = sub_1020fe80(param_2);
  functions_D2NewFunctions_102cc8c0((int)this,0,(extraout_EDX - (int)this >> 2) * -0x33333333,uVar4);
  return;
}


// 0x102ccb80  (ghidra: FUN_102ccb80)  [linked]
uint64_t __fastcall functions_D2NewFunctions_102ccb80(int param_1,uint32_t *param_2,uint32_t *param_3)

{
  bool bVar1;
  uint32_t uVar2;
  uint32_t extraout_var_00;
  uint32_t extraout_EDX;
  uint32_t extraout_EDX_00;
  uint32_t uVar3;
  uint64_t uVar4;
  uint32_t extraout_var;
  
  bVar1 = sub_102be2c0((int)param_2,param_1);
  if (bVar1) {
    thunk_FUN_102ccbe0(param_2);
  }
  bVar1 = sub_102be2c0((int)param_3,(int)param_2);
  uVar2 = CONCAT31(extraout_var,bVar1);
  uVar3 = extraout_EDX;
  if (bVar1) {
    thunk_FUN_102ccbe0(param_3);
    bVar1 = sub_102be2c0((int)param_2,param_1);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
    uVar3 = extraout_EDX_00;
    if (bVar1) {
      uVar4 = thunk_FUN_102ccbe0(param_2);
      return uVar4;
    }
  }
  return CONCAT44(uVar3,uVar2);
}


// 0x102ccbe0  (ghidra: FUN_102ccbe0)  [inferred]
uint64_t __fastcall functions_D2NewFunctions_102ccbe0(uint32_t *param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  uint32_t extraout_EDX;
  uint32_t *extraout_EDX_00;
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint32_t local_8;
  
  puVar4 = (uint32_t *)sub_1020fe80(param_1);
  local_18 = *puVar4;
  uStack_14 = puVar4[1];
  uStack_10 = puVar4[2];
  uStack_c = puVar4[3];
  local_8 = puVar4[4];
  puVar4 = (uint32_t *)sub_1020fe80(extraout_EDX);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *param_1 = *puVar4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = puVar4[4];
  puVar4 = (uint32_t *)sub_1020fe80(&local_18);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *extraout_EDX_00 = *puVar4;
  extraout_EDX_00[1] = uVar1;
  extraout_EDX_00[2] = uVar2;
  extraout_EDX_00[3] = uVar3;
  uVar1 = puVar4[4];
  extraout_EDX_00[4] = uVar1;
  return CONCAT44(extraout_EDX_00,uVar1);
}


// 0x102ccc30  (ghidra: FUN_102ccc30)  [inferred]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint64_t functions_D2NewFunctions_102ccc30(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  uint local_14;
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  uVar4 = *(uint *)(param_2 + 0xa8);
  uVar1 = D2Common_10031(param_1);
  iVar2 = uVar1 * 0x100;
  if (param_1[0xc] == 0) {
    uVar1 = (uint)*(ushort *)(param_1 + 0x13);
    iVar3 = param_1[0x12];
  }
  else {
    uVar1 = param_1[0xf];
    iVar3 = param_1[0xd];
  }
  if (uVar1 == 0) {
    uVar6 = sub_6fcaea80(param_2,param_1,1,*(int *)(param_2 + 0xa8) + 1,0,0,0);
    return uVar6;
  }
  local_14 = 0;
  iVar5 = iVar2 >> 8;
  while (iVar2 = iVar2 + uVar1, iVar2 < iVar3) {
    uVar4 = uVar4 + 1;
    for (; (iVar5 <= iVar2 >> 8 && (iVar5 < 0x90)); iVar5 = iVar5 + 1) {
      local_c = 0;
      if (param_1[0xc] == 0) {
        local_c = (uint)*(byte *)(param_1[0x14] + 0x10 + iVar5);
      }
      else {
        D2Common_10153(param_1[0xc],iVar5 << 8,&local_c);
      }
      switch(local_c) {
      case 1:
      case 2:
      case 4:
        sub_6fcaea80(param_2,param_1,0,uVar4,0,local_c,local_14);
        local_14 = local_14 + 1;
        break;
      case 3:
        sub_6fcaea80(param_2,param_1,0,uVar4,0,local_c,0);
      }
    }
  }
  uVar1 = uVar4 + 1;
  if (uVar4 != *(uint *)(param_2 + 0xa8)) {
    uVar1 = uVar4;
  }
  uVar6 = sub_6fcaea80(param_2,param_1,1,uVar1 + 1,0,0,0);
  uVar6 = functions_D2NewFunctions_102cd360(param_1,*(int *)(param_2 + 0xa8) << 8,(int)uVar6);
  return uVar6;
}


// 0x102ccdd0  (ghidra: FUN_102ccdd0)  [inferred]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint64_t __fastcall functions_D2NewFunctions_102ccdd0(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  uint64_t uVar8;
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  psVar6 = (short *)param_2[0x37];
  local_8 = uVar1;
  if (psVar6 != (short *)0x0) {
    do {
      if (*psVar6 == 0) {
        uVar1 = sub_102ec990();
      }
      psVar6 = *(short **)(psVar6 + 0x12);
    } while (psVar6 != (short *)0x0);
    for (psVar6 = (short *)param_2[0x37]; psVar6 != (short *)0x0;
        psVar6 = *(short **)(psVar6 + 0x12)) {
      if (*psVar6 == 1) {
        uVar1 = sub_102ec990();
      }
    }
  }
  functions_D2NewFunctions_102cd360(param_2,(*(int *)(param_1 + 0xa8) - param_3) * 0x100,uVar1);
  if (param_2[0xc] == 0) {
    uVar1 = (uint)*(ushort *)(param_2 + 0x13);
    iVar2 = param_2[0x12];
  }
  else {
    uVar1 = param_2[0xf];
    iVar2 = param_2[0xd];
  }
  if (uVar1 == 0) {
    uVar1 = *(uint *)(param_1 + 0xa8);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0xa8);
    iVar7 = param_3 + -1;
    iVar3 = param_3 * 0x100 + uVar1;
    uVar5 = uVar4;
    if (iVar3 < iVar2) {
      do {
        for (; iVar7 <= iVar3 >> 8; iVar7 = iVar7 + 1) {
          local_c = 0;
          if (param_2[0xc] == 0) {
            local_c = (uint)*(byte *)(param_2[0x14] + 0x10 + iVar7);
          }
          else {
            D2Common_10153(param_2[0xc],iVar7 << 8,&local_c);
          }
          if (local_c - 1 < 4) {
            sub_6fcaea80(param_1,param_2,0,uVar4,0,local_c,0);
          }
        }
        iVar3 = iVar3 + uVar1;
        uVar5 = uVar4 + 1;
        uVar4 = uVar5;
      } while (iVar3 < iVar2);
      uVar4 = *(uint *)(param_1 + 0xa8);
    }
    uVar1 = uVar5 + 1;
    if (uVar5 != uVar4) {
      uVar1 = uVar5;
    }
  }
  uVar8 = sub_6fcaea80(param_1,param_2,1,uVar1 + 1,0,0,0);
  return uVar8;
}


// 0x102ccf40  (ghidra: FUN_102ccf40)  [inferred]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint64_t __fastcall functions_D2NewFunctions_102ccf40(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int extraout_EDX;
  uint uVar6;
  short *psVar7;
  uint64_t uVar8;
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  psVar7 = (short *)param_2[0x37];
  if (psVar7 != (short *)0x0) {
    do {
      if (*psVar7 == 0) {
        sub_102ec990();
      }
      psVar7 = *(short **)(psVar7 + 0x12);
    } while (psVar7 != (short *)0x0);
    for (psVar7 = (short *)param_2[0x37]; psVar7 != (short *)0x0;
        psVar7 = *(short **)(psVar7 + 0x12)) {
      if (*psVar7 == 1) {
        sub_102ec990();
      }
    }
  }
  uVar1 = functions_D2NewFunctions_102cd380(param_2);
  iVar3 = extraout_EDX - (uVar1 >> 8);
  iVar4 = iVar3 + -1;
  functions_D2NewFunctions_102cd360(param_2,(extraout_EDX - iVar4) * 0x100,uVar1 >> 8);
  if (param_2[0xc] == 0) {
    uVar1 = (uint)*(ushort *)(param_2 + 0x13);
    iVar2 = param_2[0x12];
  }
  else {
    uVar1 = param_2[0xf];
    iVar2 = param_2[0xd];
  }
  if (uVar1 == 0) {
    uVar1 = *(uint *)(param_1 + 0xa8);
  }
  else {
    uVar5 = *(uint *)(param_1 + 0xa8);
    iVar3 = iVar3 + -2;
    iVar4 = iVar4 * 0x100 + uVar1;
    uVar6 = uVar5;
    if (iVar4 < iVar2) {
      do {
        local_c = 0;
        uVar6 = uVar5 + 1;
        for (; iVar3 <= iVar4 >> 8; iVar3 = iVar3 + 1) {
          if (param_2[0xc] == 0) {
            local_c = (uint)*(byte *)(param_2[0x14] + 0x10 + iVar3);
          }
          else {
            D2Common_10153(param_2[0xc],iVar3 << 8,&local_c);
          }
          if (local_c - 1 < 4) {
            sub_6fcaea80(param_1,param_2,0,uVar6,0,local_c,0);
          }
        }
        iVar4 = iVar4 + uVar1;
        uVar5 = uVar6;
      } while (iVar4 < iVar2);
      uVar5 = *(uint *)(param_1 + 0xa8);
    }
    uVar1 = uVar6 + 1;
    if (uVar6 != uVar5) {
      uVar1 = uVar6;
    }
  }
  uVar8 = sub_6fcaea80(param_1,param_2,1,uVar1 + 1,0,0,0);
  return uVar8;
}


// 0x102cd0b0  (ghidra: FUN_102cd0b0)  [inferred]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint functions_D2NewFunctions_102cd0b0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  uint64_t uVar8;
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    psVar6 = (short *)param_1[0x37];
    if (psVar6 != (short *)0x0) {
      do {
        if (*psVar6 == 0) {
          sub_102ec990();
        }
        psVar6 = *(short **)(psVar6 + 0x12);
      } while (psVar6 != (short *)0x0);
      for (psVar6 = (short *)param_1[0x37]; psVar6 != (short *)0x0;
          psVar6 = *(short **)(psVar6 + 0x12)) {
        if (*psVar6 == 1) {
          sub_102ec990();
        }
      }
    }
    iVar2 = *(int *)(param_2 + 0xa8);
    uVar1 = functions_D2NewFunctions_102cd380(param_1);
    uVar1 = (iVar2 - (uVar1 >> 8)) * (100 - param_3);
    uVar5 = uVar1 / 100;
    functions_D2NewFunctions_102cd360(param_1,(iVar2 - uVar5) * 0x100,uVar1 * 0x51eb851f);
    if (param_1[0xc] == 0) {
      uVar1 = (uint)*(ushort *)(param_1 + 0x13);
      iVar2 = param_1[0x12];
    }
    else {
      uVar1 = param_1[0xf];
      iVar2 = param_1[0xd];
    }
    if (uVar1 == 0) {
      uVar1 = *(uint *)(param_2 + 0xa8);
    }
    else {
      uVar4 = *(uint *)(param_2 + 0xa8);
      iVar7 = uVar5 - 1;
      iVar3 = uVar5 * 0x100 + uVar1;
      uVar5 = uVar4;
      if (iVar3 < iVar2) {
        do {
          local_c = 0;
          uVar5 = uVar4 + 1;
          for (; iVar7 <= iVar3 >> 8; iVar7 = iVar7 + 1) {
            if (param_1[0xc] == 0) {
              local_c = (uint)*(byte *)(param_1[0x14] + 0x10 + iVar7);
            }
            else {
              D2Common_10153(param_1[0xc],iVar7 << 8,&local_c);
            }
            if (local_c - 1 < 4) {
              sub_6fcaea80(param_2,param_1,0,uVar5,0,local_c,0);
            }
          }
          iVar3 = iVar3 + uVar1;
          uVar4 = uVar5;
        } while (iVar3 < iVar2);
        uVar4 = *(uint *)(param_2 + 0xa8);
      }
      uVar1 = uVar5 + 1;
      if (uVar5 != uVar4) {
        uVar1 = uVar5;
      }
    }
    uVar8 = sub_6fcaea80(param_2,param_1,1,uVar1 + 1,0,0,0);
    local_8 = (uint)uVar8;
  }
  return local_8;
}


// 0x102cd250  (ghidra: FUN_102cd250)  [inferred]
void functions_D2NewFunctions_Hook_sub_6fc95900_102cd250(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int extraout_EDX;
  uint64_t uVar8;
  
  piVar2 = param_1;
  *(uint16_t *)((int)param_1 + 0x4e) = 0;
  if (param_1[0xc] == 0) {
    uVar4 = functions_D2NewFunctions_102cd380(param_1);
    uVar4 = uVar4 >> 8;
    if (0xff < *(ushort *)(param_1 + 0x13)) {
      uVar4 = uVar4 + 1;
    }
    iVar3 = functions_D2NewFunctions_102cd380(extraout_ECX);
    functions_D2NewFunctions_102cd360(extraout_ECX_00,extraout_EDX + iVar3,iVar3);
    piVar5 = (int *)functions_D2NewFunctions_102cd380(extraout_ECX_01);
    piVar6 = (int *)param_1[0x12];
    param_1 = piVar5;
    if (piVar6 <= piVar5) {
      do {
        if (uVar4 < (uint)piVar6 >> 8) {
          do {
            functions_D2NewFunctions_102cd3a0((int)piVar2,uVar4);
            uVar4 = uVar4 + 1;
          } while ((int)uVar4 < (int)((uint)piVar6 >> 8));
          piVar6 = (int *)piVar2[0x12];
        }
        uVar4 = 0;
        uVar7 = D2Common_10031(piVar2);
        iVar3 = uVar7 * 0x100 - (int)piVar6;
        param_1 = (int *)((int)param_1 + iVar3);
        uVar8 = functions_D2NewFunctions_102cd360(piVar2,(int)param_1,iVar3);
        piVar6 = (int *)piVar2[0x12];
      } while (piVar6 <= (int *)((ulonglong)uVar8 >> 0x20));
    }
    uVar7 = functions_D2NewFunctions_102cd380(piVar2);
    if (uVar4 <= uVar7 >> 8) {
      do {
        functions_D2NewFunctions_102cd3a0((int)piVar2,uVar4);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 <= (int)(uVar7 >> 8));
    }
  }
  else {
    iVar1 = param_1[0xe];
    param_1[0x31] = param_1[0x31] & 0xffffbfff;
    iVar3 = param_1[0xf] + iVar1;
    param_1[0xe] = iVar3;
    if (param_1[0xd] <= iVar3) {
      param_1[0xe] = iVar3 - param_1[0xd];
    }
    param_1[0x12] = param_1[0x12] - param_1[0xf];
    iVar3 = sub_102ed220(param_1,iVar1);
    if (iVar3 != 0) {
      param_1[0x31] = param_1[0x31] | 0x4000;
      return;
    }
  }
  return;
}


// 0x102cd360  (ghidra: FUN_102cd360)  [inferred]
uint64_t __fastcall functions_D2NewFunctions_102cd360(int *param_1,int param_2,uint32_t reg_EAX)

{
  int iVar1;
  
  if ((*param_1 == 0) && (iVar1 = param_1[5], reg_EAX = 0, iVar1 != 0)) {
    *(int *)(iVar1 + 0x198) = param_2;
    return CONCAT44(param_2,iVar1);
  }
  param_1[0x11] = param_2;
  return CONCAT44(param_2,reg_EAX);
}


// 0x102cd380  (ghidra: FUN_102cd380)  [inferred]
int __fastcall functions_D2NewFunctions_102cd380(int *param_1)

{
  int iVar1;
  
  if (((*param_1 != 0) || (param_1[5] == 0)) || (iVar1 = *(int *)(param_1[5] + 0x198), iVar1 == 0))
  {
    iVar1 = param_1[0x11];
  }
  return iVar1;
}


// 0x102cd3a0  (ghidra: FUN_102cd3a0)  [inferred]
void __fastcall functions_D2NewFunctions_102cd3a0(int param_1,int param_2)

{
  ushort uVar1;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x50) != 0)) && (param_2 < 0x90)) &&
     (uVar1 = (ushort)*(byte *)(*(int *)(param_1 + 0x50) + 0x10 + param_2), (ushort)(uVar1 - 1) < 4)
     ) {
    *(ushort *)(param_1 + 0x4e) = uVar1;
  }
  return;
}


// 0x102cd3d0  (ghidra: FUN_102cd3d0)  [inferred]
uint32_t __fastcall functions_D2NewFunctions_102cd3d0(uint param_1)

{
  if ((-1 < (int)param_1) && (param_1 < 0x252)) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((&DAT_102cdd04)[param_1]) {
    case 0:
      return 0x7c;
    case 1:
      return 0x7b;
    case 2:
      return 0x7e;
    case 3:
      return 0x7d;
    case 4:
      return 0x81;
    case 5:
      return 0x80;
    case 7:
      return 1;
    case 8:
      return 2;
    case 9:
      return 3;
    case 10:
      return 4;
    case 0xb:
      return 5;
    case 0xc:
      return 6;
    case 0xd:
      return 7;
    case 0xe:
      return 8;
    case 0xf:
      return 9;
    case 0x10:
      return 10;
    case 0x11:
      return 0xb;
    case 0x12:
      return 0xc;
    case 0x13:
      return 0xd;
    case 0x14:
      return 0xe;
    case 0x15:
      return 0xf;
    case 0x16:
      return 0x10;
    case 0x17:
      return 0x11;
    case 0x18:
      return 0x12;
    case 0x19:
      return 0x13;
    case 0x1a:
      return 0x14;
    case 0x1b:
      return 0x15;
    case 0x1c:
      return 0x16;
    case 0x1d:
      return 0x17;
    case 0x1e:
      return 0x18;
    case 0x1f:
      return 0x19;
    case 0x20:
      return 0x1a;
    case 0x21:
      return 0x1b;
    case 0x22:
      return 0x1c;
    case 0x23:
      return 0x1d;
    case 0x24:
      return 0xcc;
    case 0x25:
      return 0xce;
    case 0x26:
      return 0xd0;
    case 0x27:
      return 0xd1;
    case 0x28:
      return 0xed;
    case 0x29:
      return 0xd2;
    case 0x2a:
      return 0xd3;
    case 0x2b:
      return 0xd5;
    case 0x2c:
      return 0xd8;
    case 0x2d:
      return 0xd6;
    case 0x2e:
      return 0xd7;
    case 0x2f:
      return 0xd9;
    case 0x30:
      return 0xda;
    case 0x31:
      return 0xdb;
    case 0x32:
      return 0xdc;
    case 0x33:
      return 0xdd;
    case 0x34:
      return 0xde;
    case 0x35:
      return 0xdf;
    case 0x36:
      return 0xe0;
    case 0x37:
      return 0xe1;
    case 0x38:
      return 0xe2;
    case 0x39:
      return 0xe3;
    case 0x3a:
      return 0xe6;
    case 0x3b:
      return 0xe4;
    case 0x3c:
      return 0xe5;
    case 0x3d:
      return 0xe7;
    case 0x3e:
      return 0xe8;
    case 0x3f:
      return 0xe9;
    case 0x40:
      return 0xea;
    case 0x41:
      return 0xeb;
    case 0x42:
      return 0x8b;
    case 0x43:
      return 0x8c;
    case 0x44:
      return 0x8d;
    case 0x45:
      return 0x8e;
    case 0x46:
      return 0x8f;
    case 0x47:
      return 0x90;
    case 0x48:
      return 0x91;
    case 0x49:
      return 0x92;
    case 0x4a:
      return 0x93;
    case 0x4b:
      return 0x94;
    case 0x4c:
      return 0x95;
    case 0x4d:
      return 0x96;
    case 0x4e:
      return 0x97;
    case 0x4f:
      return 0x98;
    case 0x50:
      return 0x99;
    case 0x51:
      return 0x9a;
    case 0x52:
      return 0x9b;
    case 0x53:
      return 0x9c;
    case 0x54:
      return 0x9d;
    case 0x55:
      return 0x9e;
    case 0x56:
      return 0x9f;
    case 0x57:
      return 0xa0;
    case 0x58:
      return 0xa1;
    case 0x59:
      return 0xac;
    case 0x5a:
      return 0xa3;
    case 0x5b:
      return 0xa4;
    case 0x5c:
      return 0xa5;
    case 0x5d:
      return 0xa6;
    case 0x5e:
      return 0xa7;
    case 0x5f:
      return 0xa8;
    case 0x60:
      return 0xad;
    case 0x61:
      return 0xae;
    case 0x62:
      return 0xaf;
    case 99:
      return 0xb0;
    case 100:
      return 0xb1;
    case 0x65:
      return 0xb2;
    case 0x66:
      return 0xb3;
    case 0x67:
      return 0xb4;
    case 0x68:
      return 0xb5;
    case 0x69:
      return 0xb6;
    case 0x6a:
      return 0xb7;
    case 0x6b:
      return 0xb8;
    case 0x6c:
      return 0xb9;
    case 0x6d:
      return 0xc0;
    case 0x6e:
      return 0xbb;
    case 0x6f:
      return 0xc1;
    case 0x70:
      return 0xbf;
    case 0x71:
      return 0xbc;
    case 0x72:
      return 0xbe;
    case 0x73:
      return 0xba;
    case 0x74:
      return 0xf0;
    case 0x75:
      return 0xc2;
    case 0x76:
      return 0xc3;
    case 0x77:
      return 0xc4;
    case 0x78:
      return 0xc5;
    case 0x79:
      return 0xc6;
    case 0x7a:
      return 200;
    case 0x7b:
      return 199;
    case 0x7c:
      return 0xca;
    case 0x7d:
      return 0xc9;
    case 0x7e:
      return 0x3e;
    case 0x7f:
      return 0x3f;
    case 0x80:
      return 0x40;
    case 0x81:
      return 0x41;
    case 0x82:
      return 0x42;
    case 0x83:
      return 0x43;
    case 0x84:
      return 0x44;
    case 0x85:
      return 0x45;
    case 0x86:
      return 0x46;
    case 0x87:
      return 0x47;
    case 0x88:
      return 0x48;
    case 0x89:
      return 0x49;
    case 0x8a:
      return 0x4a;
    case 0x8b:
      return 0x4b;
    case 0x8c:
      return 0x4c;
    case 0x8d:
      return 0x4d;
    case 0x8e:
      return 0x4e;
    case 0x8f:
      return 0x4f;
    case 0x90:
      return 0x50;
    case 0x91:
      return 0x51;
    case 0x92:
      return 0x52;
    case 0x93:
      return 0x53;
    case 0x94:
      return 0x54;
    case 0x95:
      return 0x55;
    case 0x96:
      return 0x56;
    case 0x97:
      return 0x57;
    case 0x98:
      return 0x58;
    case 0x99:
      return 0x59;
    case 0x9a:
      return 0x5a;
    case 0x9b:
      return 0x5b;
    case 0x9c:
      return 0x82;
    case 0x9d:
      return 0x84;
    case 0x9e:
      return 0x5c;
    case 0x9f:
      return 0x5d;
    case 0xa0:
      return 0x66;
    case 0xa1:
      return 0x76;
    case 0xa2:
      return 0x6c;
    case 0xa3:
      return 100;
    case 0xa4:
      return 0x5f;
    case 0xa5:
      return 0x67;
    case 0xa6:
      return 0x6d;
    case 0xa7:
      return 0x6e;
    case 0xa8:
      return 0x60;
    case 0xa9:
      return 0x77;
    case 0xaa:
      return 0x78;
    case 0xab:
      return 0x6f;
    case 0xac:
      return 0x70;
    case 0xad:
      return 0x61;
    case 0xae:
      return 0x62;
    case 0xaf:
      return 0x68;
    case 0xb0:
      return 0x69;
    case 0xb1:
      return 0x71;
    case 0xb2:
      return 99;
    case 0xb3:
      return 0x79;
    case 0xb4:
      return 0x6a;
    case 0xb5:
      return 0x72;
    case 0xb6:
      return 0x73;
    case 0xb7:
      return 0x5e;
    case 0xb8:
      return 0x65;
    case 0xb9:
      return 0x6b;
    case 0xba:
      return 0x75;
    case 0xbb:
      return 0x74;
    case 0xbc:
      return 0x1e;
    case 0xbd:
      return 0x28;
    case 0xbe:
      return 0x29;
    case 0xbf:
      return 0x32;
    case 0xc0:
      return 0x33;
    case 0xc1:
      return 0x1f;
    case 0xc2:
      return 0x20;
    case 0xc3:
      return 0x30;
    case 0xc4:
      return 0x34;
    case 0xc5:
      return 0x35;
    case 0xc6:
      return 0x21;
    case 199:
      return 0x22;
    case 200:
      return 0x2b;
    case 0xc9:
      return 0x2a;
    case 0xca:
      return 0x37;
    case 0xcb:
      return 0x23;
    case 0xcc:
      return 0x2d;
    case 0xcd:
      return 0x31;
    case 0xce:
      return 0x3b;
    case 0xcf:
      return 0x36;
    case 0xd0:
      return 0x3c;
    case 0xd1:
      return 0x25;
    case 0xd2:
      return 0x2f;
    case 0xd3:
      return 0x38;
    case 0xd4:
      return 0x39;
    case 0xd5:
      return 0x26;
    case 0xd6:
      return 0x27;
    case 0xd7:
      return 0x2c;
    case 0xd8:
      return 0x2e;
    case 0xd9:
      return 0x3a;
    case 0xda:
      return 0x85;
    case 0xdb:
      return 0xcb;
    case 0xdc:
      return 0x24;
    case 0xdd:
      return 0xa9;
    case 0xde:
      return 0xec;
    case 0xdf:
      return 0x7a;
    case 0xe0:
      return 0xcd;
    case 0xe1:
      return 0xaa;
    case 0xe2:
      return 0xee;
    case 0xe3:
      return 0xcf;
    case 0xe4:
      return 0xab;
    case 0xe5:
      return 0xef;
    case 0xe6:
      return 0xf1;
    case 0xe7:
      return 0x87;
    }
  }
  return 0;
}


// 0x102cdf60  (ghidra: FUN_102cdf60)  [inferred]
void functions_D2NewFunctions_102cdf60(int param_1,int param_2)

{
  functions_D2NewFunctions_102cdf80(param_1,param_2);
  return;
}


// 0x102cdf80  (ghidra: FUN_102cdf80)  [linked]
void __fastcall functions_D2NewFunctions_102cdf80(int param_1,int param_2)

{
  short *psVar1;
  
  if (((param_1 != 0) && (param_2 != 0)) &&
     (psVar1 = *(short **)(param_2 + 0xdc), psVar1 != (short *)0x0)) {
    do {
      if (*psVar1 == 0) {
        sub_102ec990();
      }
      psVar1 = *(short **)(psVar1 + 0x12);
    } while (psVar1 != (short *)0x0);
    for (psVar1 = *(short **)(param_2 + 0xdc); psVar1 != (short *)0x0;
        psVar1 = *(short **)(psVar1 + 0x12)) {
      if (*psVar1 == 1) {
        sub_102ec990();
      }
    }
  }
  return;
}


// 0x102cdfe0  (ghidra: FUN_102cdfe0)  [inferred]
uint32_t functions_D2NewFunctions_102cdfe0(int *param_1,int param_2,int param_3)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint64_t uVar6;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (*param_1 != 0) {
    uVar1 = sub_102ef640();
    return uVar1;
  }
  if (((((int *)param_1[0x18] != (int *)0x0) &&
       (uVar6 = D2Common_11017((int *)param_1[0x18]), (int)uVar6 != 0)) && (param_3 != 0)) &&
     (param_3 != 0x11)) {
    return 0;
  }
  D2Common_10331(param_1);
  if (param_3 == 0) {
    return 1;
  }
  if (param_3 == 0x11) {
    return 1;
  }
  if (param_3 == 1) {
    return 1;
  }
  if (param_3 == 5) {
    return 1;
  }
  switch(param_1[4]) {
  case 0:
  case 0x11:
    goto switchD_102ce05b_caseD_0;
  case 1:
  case 3:
    if ((((param_3 == 0x12) || (param_3 == 10)) && (param_1[5] != 0)) &&
       (*(uint *)(param_2 + 0xa8) < *(int *)(param_1[5] + 0x16c) + 5U)) {
      return 0;
    }
    break;
  case 4:
  case 9:
    uVar4 = sub_102ef620();
    uVar5 = *(int *)(param_2 + 0xa8) + 2;
    goto LAB_102ce073;
  case 7:
  case 8:
  case 10:
  case 0xb:
    iVar3 = sub_102ef600(param_1,param_2);
    if (((iVar3 == 0) && (param_3 != 4)) && (param_3 != 9)) {
      return 0;
    }
    break;
  case 0xc:
    uVar1 = sub_102ef600(param_1,param_2);
    return uVar1;
  case 0xd:
    iVar3 = param_1[1];
    goto LAB_102ce0b1;
  case 0xf:
    iVar3 = param_1[1] + -5;
LAB_102ce0b1:
    if (iVar3 == 0) {
      return 0;
    }
    return 1;
  case 0x12:
    puVar2 = (uint32_t *)D2Common_10511((int)param_1);
    if (((puVar2 != (uint32_t *)0x0) && ((ushort *)*puVar2 != (ushort *)0x0)) &&
       ((iVar3 = functions_HelperFunctions_102ce5a0((uint)*(ushort *)*puVar2), iVar3 != 0 &&
        (*(char *)(iVar3 + 0x16) != '\0')))) {
      return 1;
    }
    uVar4 = sub_102ef620();
    uVar5 = *(int *)(param_2 + 0xa8) + 5;
LAB_102ce073:
    if (uVar5 < uVar4) {
switchD_102ce05b_caseD_0:
      return 0;
    }
  }
  return 1;
}


// 0x102ce170  (ghidra: FUN_102ce170)  [inferred]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

uint32_t functions_D2NewFunctions_102ce170(uint32_t *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_18 [3];
  int local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if ((param_1 != (uint32_t *)0x0) && (param_1[0x15] != 0)) {
    local_18[2] = *param_1;
    local_18[0] = param_1[1];
    local_c = D2Common_10175(param_1);
    D2Common_10350(param_1,(uint *)(local_18 + 2),local_18,&local_c,&DAT_10367500,0);
    iVar1 = D2Common_10688(local_18[0]);
    if ((iVar1 != 0) &&
       ((*(char *)(param_2 + 0x13f + iVar1) == '\x01' &&
        (iVar1 = param_1[0x15], *(char *)(iVar1 + param_2 * 2) == '\0')))) {
      local_18[1] = 0;
      iVar2 = sub_102f0b90(param_1,local_18 + 1,param_2);
      if (iVar2 != 0) {
        *(uint8_t *)(iVar1 + param_2 * 2) = 1;
        return 1;
      }
    }
  }
  return 0;
}


// 0x102ce230  (ghidra: FUN_102ce230)  [inferred]
void __fastcall functions_D2NewFunctions_102ce230(int *param_1)

{
  uint32_t *puVar1;
  
  if ((int *)*param_1 != (int *)0x0) {
    puVar1 = (uint32_t *)(**(code **)(*(int *)*param_1 + 8))();
    if (puVar1 != (uint32_t *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}


// 0x102ce250  (ghidra: FUN_102ce250)  [inferred]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall functions_D2NewFunctions_102ce250(void *this,int param_1)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  bool bVar3;
  uint64_t uVar4;
  int local_4c;
  _Locinfo local_48 [52];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314dc6;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  std::locale::_Init(false);
  local_4c = *(int *)((int)this + 4);
  local_8 = 0;
  uVar4 = thunk_FUN_1020fe30(param_1);
  std::_Locinfo::_Locinfo(local_48,0x3f,(char *)uVar4);
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar1 = functions_D2NewFunctions_102ce3e0(local_48);
  bVar3 = (char)uVar1 == '\0';
  if (bVar3) {
    std::locale::_Locimp::_Makeloc(local_48,0x3f,*(_Locimp **)((int)this + 4),(locale *)0x0);
    *(uint32_t *)(*(int *)((int)this + 4) + 0x10) = 0x3f;
    uVar4 = thunk_FUN_1020fe30(param_1);
    std::_Yarn<char>::operator=((_Yarn<char> *)(*(int *)((int)this + 4) + 0x18),(char *)uVar4);
  }
  std::_Locinfo::~_Locinfo(local_48);
  local_4c = 0;
  local_8 = 0xffffffff;
  functions_D2NewFunctions_102ce230(&local_4c);
  if (!bVar3) {
    puVar2 = (uint32_t *)(**(code **)(**(int **)((int)this + 4) + 8))();
    if (puVar2 != (uint32_t *)0x0) {
      (**(code **)*puVar2)(1);
    }
    std::_Xruntime_error("bad locale name");
  }
  ExceptionList = local_10;
  return;
}


// 0x102ce360  (ghidra: FUN_102ce360)  [inferred]
void * __fastcall functions_D2NewFunctions_102ce360(void *param_1)

{
  _Locimp *p_Var1;
  uint32_t local_28 [6];
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314dfd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var1 = std::locale::_Locimp::_New_Locimp(false);
  *(_Locimp **)((int)param_1 + 4) = p_Var1;
  sub_1020f990(local_28,"");
  local_8 = 0;
  functions_D2NewFunctions_102ce250(param_1,(int)local_28);
  thunk_FUN_1020fc60(local_28);
  ExceptionList = local_10;
  return param_1;
}


// 0x102ce3e0  (ghidra: FUN_102ce3e0)  [inferred]
uint32_t functions_D2NewFunctions_102ce3e0(_Locinfo *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar3 = &DAT_1037e5e4;
  pbVar2 = (byte *)std::_Locinfo::_Getname(param_1);
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return CONCAT31((int3)(-(uint)bVar4 >> 8),(-(uint)bVar4 | 1) == 0);
}


// 0x102ce430  (ghidra: FUN_102ce430)  [inferred]
void __cdecl
functions_D2NewFunctions_102ce430(double *param_1,double param_2,double param_3,double param_4,double param_5)

{
  *param_1 = param_4 + param_2;
  param_1[1] = param_5 + param_3;
  return;
}


// 0x102ce460  (ghidra: FUN_102ce460)  [inferred]
void __cdecl
functions_D2NewFunctions_102ce460(double *param_1,double param_2,double param_3,double param_4,double param_5)

{
  *param_1 = param_2 - param_4;
  param_1[1] = param_3 - param_5;
  return;
}


// 0x102ce490  (ghidra: FUN_102ce490)  [inferred]
void __cdecl functions_D2NewFunctions_102ce490(uint8_t (*param_1) [16],double param_2,double param_3)

{
  uint8_t auVar1 [16];
  double dVar2;
  uint32_t in_XMM2_Da;
  uint32_t in_XMM2_Db;
  
  dVar2 = param_3 * (double)CONCAT44(in_XMM2_Db,in_XMM2_Da);
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = param_2 * (double)CONCAT44(in_XMM2_Db,in_XMM2_Da);
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *param_1 = auVar1;
  return;
}


// 0x102ce4b0  (ghidra: FUN_102ce4b0)  [inferred]
void functions_D2NewFunctions_102ce4b0(void)

{
  rand();
  return;
}


// 0x102ce4e0  (ghidra: FUN_102ce4e0)  [linked]
void __fastcall functions_D2NewFunctions_102ce4e0(uint32_t param_1,uint8_t *param_2)

{
  if (param_2 != (uint8_t *)0x0) {
    *param_2 = (char)param_1;
    param_2[1] = (char)((uint)param_1 >> 8);
    param_2[2] = (char)((uint)param_1 >> 0x10);
    param_2[3] = (char)((uint)param_1 >> 0x18);
  }
  return;
}


// 0x102ce500  (ghidra: FUN_102ce500)  [linked]
uint64_t __fastcall functions_D2NewFunctions_102ce500(int *param_1,int *param_2)

{
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    return CONCAT44(param_2,(uint)(*param_1 == *param_2));
  }
  return ZEXT48(param_2) << 0x20;
}

