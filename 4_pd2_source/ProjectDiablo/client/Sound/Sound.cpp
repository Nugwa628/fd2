/*
 * client/Sound/Sound.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x10061080 - 0x10233f80
 * Functions     : 94
 * Attribution   : range=78, linked=11, inferred=3, anchor=2
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x10061080  (ghidra: FUN_10061080)  [range]
void client_Sound_Sound_init_10061080(void)

{
  uint32_t extraout_ECX;
  
  sub_1020f410((uint64_t *)&DAT_104de5bc);
  sub_1020f960(extraout_ECX);
  _atexit(FUN_103186e0);
  return;
}


// 0x100610a0  (ghidra: FUN_100610a0)  [range]
void client_Sound_Sound_init_100610a0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de6fc);
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
  sub_1020f900(&DAT_104de6fc);
  _atexit((_func_4879 *)&LAB_103186f0);
  return;
}


// 0x10061190  (ghidra: FUN_10061190)  [range]
void client_Sound_Sound_init_10061190(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de5a8);
  local_c = 0x84;
  local_1c = 6;
  uStack_18 = 0x42;
  uStack_14 = 0x4c;
  uStack_10 = 0x6a;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104de5a8);
  _atexit((_func_4879 *)&LAB_10318700);
  return;
}


// 0x100611f0  (ghidra: FUN_100611f0)  [range]
void client_Sound_Sound_init_100611f0(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de6c4);
  local_c = 0x113;
  local_1c = 0;
  uStack_18 = 0xff;
  uStack_14 = 0x104;
  uStack_10 = 0x10e;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104de6c4);
  _atexit((_func_4879 *)&LAB_10318710);
  return;
}


// 0x10061250  (ghidra: FUN_10061250)  [range]
void client_Sound_Sound_init_10061250(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de60c);
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
  sub_1020f900(&DAT_104de60c);
  _atexit((_func_4879 *)&LAB_10318720);
  return;
}


// 0x100612c0  (ghidra: FUN_100612c0)  [range]
void client_Sound_Sound_init_100612c0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de658);
  local_28 = 0x115;
  uStack_24 = 0x39;
  uStack_20 = 0xdb;
  uStack_1c = 0xdc;
  local_18 = 0x202;
  uStack_14 = 0xd9;
  uStack_10 = 0xda;
  uStack_c = 0x201;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104de658);
  _atexit((_func_4879 *)&LAB_10318730);
  return;
}


// 0x10061320  (ghidra: FUN_10061320)  [range]
void client_Sound_Sound_init_10061320(void)

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
  
  sub_1020f420((uint64_t *)&DAT_104de674);
  local_28 = 0x1d8;
  uStack_24 = 0x1d9;
  uStack_20 = 0x1da;
  uStack_1c = 0x1a0;
  local_18 = 0x1dc;
  uStack_14 = 0x1dd;
  uStack_10 = 0x1de;
  uStack_c = 0x1df;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f780((uint32_t *)&DAT_104de674);
  _atexit((_func_4879 *)&LAB_10318740);
  return;
}


// 0x10061380  (ghidra: FUN_10061380)  [range]
void client_Sound_Sound_init_10061380(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de680);
  local_10 = 0x6b;
  local_c = 0x102;
  local_20 = 0x36;
  uStack_1c = 0x165;
  uStack_18 = 0x16f;
  uStack_14 = 0x172;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104de680);
  _atexit((_func_4879 *)&LAB_10318750);
  return;
}


// 0x100613f0  (ghidra: FUN_100613f0)  [range]
void client_Sound_Sound_init_100613f0(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de584);
  local_10 = 0x8f;
  local_c = 0x6b;
  local_20 = 0x111;
  uStack_1c = 0x79;
  uStack_18 = 0x97;
  uStack_14 = 0x84;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104de584);
  _atexit((_func_4879 *)&LAB_10318760);
  return;
}


// 0x10061460  (ghidra: FUN_10061460)  [range]
void client_Sound_Sound_init_10061460(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de698);
  local_10 = 0x22b;
  local_c = 0x22a;
  local_20 = 0x254;
  uStack_1c = 0x251;
  uStack_18 = 0x22c;
  uStack_14 = 0x22d;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104de698);
  _atexit((_func_4879 *)&LAB_10318770);
  return;
}


// 0x100614d0  (ghidra: FUN_100614d0)  [range]
void client_Sound_Sound_init_100614d0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de614);
  local_28 = 0x92;
  uStack_24 = 0x94;
  uStack_20 = 0x97;
  uStack_1c = 0x9b;
  local_18 = 0x91;
  uStack_14 = 0xa9;
  uStack_10 = 0x8f;
  uStack_c = 0x9e;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104de614);
  _atexit((_func_4879 *)&LAB_10318780);
  return;
}


// 0x10061530  (ghidra: FUN_10061530)  [range]
void client_Sound_Sound_init_10061530(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de66c);
  local_28 = 0x35d;
  uStack_24 = 0x36f;
  uStack_20 = 0x366;
  uStack_1c = 0x37d;
  local_18 = 0x2ea;
  uStack_14 = 0x3e4;
  uStack_10 = 0x2ee;
  uStack_c = 0x393;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104de66c);
  _atexit((_func_4879 *)&LAB_10318790);
  return;
}


// 0x10061590  (ghidra: FUN_10061590)  [range]
void client_Sound_Sound_init_10061590(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de70c);
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
  sub_1020f900(&DAT_104de70c);
  _atexit((_func_4879 *)&LAB_103187a0);
  return;
}


// 0x10061600  (ghidra: FUN_10061600)  [range]
void client_Sound_Sound_init_10061600(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de534);
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
  sub_1020f900(&DAT_104de534);
  _atexit((_func_4879 *)&LAB_103187b0);
  return;
}


// 0x10061670  (ghidra: FUN_10061670)  [range]
void client_Sound_Sound_init_10061670(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de600);
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
  sub_1020f900(&DAT_104de600);
  _atexit((_func_4879 *)&LAB_103187c0);
  return;
}


// 0x100616e0  (ghidra: FUN_100616e0)  [range]
void client_Sound_Sound_init_100616e0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de6e4);
  local_28 = 0x33a;
  uStack_24 = 0x3e6;
  uStack_20 = 0x373;
  uStack_1c = 0x329;
  local_18 = 0x461;
  uStack_14 = 0x462;
  uStack_10 = 0x2f3;
  uStack_c = 0x3c4;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104de6e4);
  _atexit((_func_4879 *)&LAB_103187d0);
  return;
}


// 0x10061740  (ghidra: FUN_10061740)  [range]
void client_Sound_Sound_init_10061740(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de56c);
  local_28 = 0x98;
  uStack_24 = 0x99;
  uStack_20 = 0xa4;
  uStack_1c = 0xa5;
  local_18 = 0xab;
  uStack_14 = 0xac;
  uStack_10 = 0xba;
  uStack_c = 0xbb;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104de56c);
  _atexit((_func_4879 *)&LAB_103187e0);
  return;
}


// 0x100617a0  (ghidra: FUN_100617a0)  [range]
void client_Sound_Sound_init_100617a0(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de6f0);
  local_14 = 0x2eb;
  local_10 = 1000;
  local_c = 0x44f;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104de6f0);
  _atexit((_func_4879 *)&LAB_103187f0);
  return;
}


// 0x10061800  (ghidra: FUN_10061800)  [range]
void client_Sound_Sound_init_10061800(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de6cc);
  local_14 = 0x2e7;
  local_10 = 0x450;
  local_c = 0x451;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104de6cc);
  _atexit((_func_4879 *)&LAB_10318800);
  return;
}


// 0x10061860  (ghidra: FUN_10061860)  [range]
void client_Sound_Sound_init_10061860(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de720);
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
  sub_1020f900(&DAT_104de720);
  _atexit((_func_4879 *)&LAB_10318810);
  return;
}


// 0x100618e0  (ghidra: FUN_100618e0)  [range]
void client_Sound_Sound_init_100618e0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de564);
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
  sub_1020f900(&DAT_104de564);
  _atexit((_func_4879 *)&LAB_10318820);
  return;
}


// 0x10061950  (ghidra: FUN_10061950)  [range]
void client_Sound_Sound_init_10061950(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104de62c);
  local_18 = 0x9d;
  local_14 = 0x9f;
  sub_1020f550(local_10,&local_18,local_10);
  sub_1020f900(&DAT_104de62c);
  _atexit((_func_4879 *)&LAB_10318830);
  return;
}


// 0x100619b0  (ghidra: FUN_100619b0)  [range]
void client_Sound_Sound_init_100619b0(void)

{
  uint8_t local_20 [8];
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de68c);
  local_18 = 0x89;
  uStack_14 = 0xa1;
  uStack_10 = 0xa8;
  uStack_c = 0xbc;
  sub_1020f550(local_20,&local_18,local_8);
  sub_1020f900(&DAT_104de68c);
  _atexit((_func_4879 *)&LAB_10318840);
  return;
}


// 0x10061a10  (ghidra: FUN_10061a10)  [range]
void client_Sound_Sound_init_10061a10(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de660);
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
  sub_1020f900(&DAT_104de660);
  _atexit((_func_4879 *)&LAB_10318850);
  return;
}


// 0x10061ab0  (ghidra: FUN_10061ab0)  [range]
void client_Sound_Sound_init_10061ab0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de650);
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
  sub_1020f900(&DAT_104de650);
  _atexit((_func_4879 *)&LAB_10318860);
  return;
}


// 0x10061b20  (ghidra: FUN_10061b20)  [range]
void client_Sound_Sound_init_10061b20(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de5ec);
  local_14 = 0x89;
  local_10 = 0xa1;
  local_c = 0xbc;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104de5ec);
  _atexit((_func_4879 *)&LAB_10318870);
  return;
}


// 0x10061b80  (ghidra: FUN_10061b80)  [range]
void client_Sound_Sound_init_10061b80(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de58c);
  local_14 = 0x85;
  local_10 = 0x86;
  local_c = 0x87;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104de58c);
  _atexit((_func_4879 *)&LAB_10318880);
  return;
}


// 0x10061be0  (ghidra: FUN_10061be0)  [range]
void client_Sound_Sound_init_10061be0(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de714);
  local_c = 0x220;
  local_1c = 0x9c;
  uStack_18 = 0xd3;
  uStack_14 = 0xf2;
  uStack_10 = 0xf3;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104de714);
  _atexit((_func_4879 *)&LAB_10318890);
  return;
}


// 0x10061c40  (ghidra: FUN_10061c40)  [range]
void client_Sound_Sound_init_10061c40(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de53c);
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
  sub_1020f900(&DAT_104de53c);
  _atexit((_func_4879 *)&LAB_103188a0);
  return;
}


// 0x10061cd0  (ghidra: FUN_10061cd0)  [range]
void client_Sound_Sound_init_10061cd0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de620);
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
  sub_1020f900(&DAT_104de620);
  _atexit((_func_4879 *)&LAB_103188b0);
  return;
}


// 0x10061d90  (ghidra: FUN_10061d90)  [range]
void client_Sound_Sound_init_10061d90(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de5d4);
  local_20 = 0x315;
  local_c = 0x458;
  local_1c = 0x3a5;
  uStack_18 = 0x3a6;
  uStack_14 = 0x3a7;
  uStack_10 = 0x3a8;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104de5d4);
  _atexit((_func_4879 *)&LAB_103188c0);
  return;
}


// 0x10061e00  (ghidra: FUN_10061e00)  [range]
void client_Sound_Sound_init_10061e00(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de5a0);
  local_10 = 0x2d9;
  local_c = 0x2da;
  local_20 = 0x2d5;
  uStack_1c = 0x2d6;
  uStack_18 = 0x2d7;
  uStack_14 = 0x2d8;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104de5a0);
  _atexit((_func_4879 *)&LAB_103188d0);
  return;
}


// 0x10061e70  (ghidra: FUN_10061e70)  [range]
void client_Sound_Sound_init_10061e70(void)

{
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104de55c);
  local_14 = 0x2c8;
  sub_1020f550(local_10,&local_14,local_10);
  sub_1020f900(&DAT_104de55c);
  _atexit((_func_4879 *)&LAB_103188e0);
  return;
}


// 0x10061ec0  (ghidra: FUN_10061ec0)  [range]
void client_Sound_Sound_init_10061ec0(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104de6b4);
  local_18 = 0x2db;
  local_14 = 0x2dc;
  sub_1020f550(local_10,&local_18,local_10);
  sub_1020f900(&DAT_104de6b4);
  _atexit((_func_4879 *)&LAB_103188f0);
  return;
}


// 0x10061f20  (ghidra: FUN_10061f20)  [range]
void client_Sound_Sound_init_10061f20(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de6dc);
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
  sub_1020f880(&DAT_104de6dc);
  _atexit((_func_4879 *)&LAB_10318900);
  return;
}


// 0x10061fb0  (ghidra: FUN_10061fb0)  [range]
void client_Sound_Sound_init_10061fb0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de6d4);
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
  sub_1020f880(&DAT_104de6d4);
  _atexit((_func_4879 *)&LAB_10318910);
  return;
}


// 0x100620b0  (ghidra: FUN_100620b0)  [range]
void client_Sound_Sound_init_100620b0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de6bc);
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
  sub_1020f900(&DAT_104de6bc);
  _atexit((_func_4879 *)&LAB_10318920);
  return;
}


// 0x10062130  (ghidra: FUN_10062130)  [range]
void client_Sound_Sound_init_10062130(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de6a0);
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
  sub_1020f900(&DAT_104de6a0);
  _atexit((_func_4879 *)&LAB_10318930);
  return;
}


// 0x100621c0  (ghidra: FUN_100621c0)  [range]
void client_Sound_Sound_init_100621c0(void)

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
  sub_1020f420((uint64_t *)&DAT_104de6a8);
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
  sub_1020f7f0((uint32_t *)&DAT_104de6a8);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_100,0xc,9,thunk_FUN_1020fb40);
  _atexit((_func_4879 *)&LAB_10318940);
  ExceptionList = local_10;
  return;
}


// 0x10062780  (ghidra: FUN_10062780)  [range]
void client_Sound_Sound_init_10062780(void)

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
  sub_1020f420((uint64_t *)&DAT_104de5b0);
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
  sub_1020f840((uint32_t *)&DAT_104de5b0);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_304,8,0x26,thunk_FUN_1020f8e0);
  _atexit((_func_4879 *)&DAT_10318950);
  ExceptionList = local_10;
  return;
}


// 0x10063150  (ghidra: FUN_10063150)  [range]
void client_Sound_Sound_init_10063150(void)

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
  sub_1020f420((uint64_t *)&DAT_104de550);
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
  sub_1020f7f0((uint32_t *)&DAT_104de550);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_4ec,0xc,0x26,thunk_FUN_1020fb40);
  _atexit((_func_4879 *)&LAB_10318960);
  ExceptionList = local_10;
  return;
}


// 0x10063b50  (ghidra: FUN_10063b50)  [range]
void client_Sound_Sound_init_10063b50(void)

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
  sub_1020f420((uint64_t *)&DAT_104de5f4);
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
  sub_1020f730((uint32_t *)&DAT_104de5f4);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_3a8,0x18,0x26,thunk_FUN_1020fc60);
  _atexit((_func_4879 *)&LAB_10318970);
  ExceptionList = local_10;
  return;
}


// 0x10063ed0  (ghidra: FUN_10063ed0)  [range]
void client_Sound_Sound_init_10063ed0(void)

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
  sub_1020f410((uint64_t *)&DAT_104de598);
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
  sub_1020f6a0(&DAT_104de598);
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
  _atexit((_func_4879 *)&LAB_10318980);
  ExceptionList = local_10;
  return;
}


// 0x10064400  (ghidra: FUN_10064400)  [range]
void client_Sound_Sound_init_10064400(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de704);
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
  sub_10210100(&DAT_10367db4,&local_6c);
  local_68 = 0x10;
  sub_10210100(&DAT_10367db8,&local_68);
  local_64 = 0x13;
  sub_10210100(&DAT_10367db0,&local_64);
  sub_1020f550(local_10,local_60,local_10);
  sub_1020f640(&DAT_104de704);
  _atexit((_func_4879 *)&LAB_10318990);
  return;
}


// 0x100645b0  (ghidra: FUN_100645b0)  [range]
void client_Sound_Sound_init_100645b0(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104de544);
  local_18 = 0x41503033;
  local_14 = 0x32484754;
  local_10 = 0x57375258;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104de544);
  _atexit((_func_4879 *)&LAB_103189a0);
  return;
}


// 0x10064610  (ghidra: FUN_10064610)  [range]
void client_Sound_Sound_init_10064610(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104de5dc);
  local_18 = 0x554f4e36;
  local_14 = 0x56383149;
  local_10 = 0x4a4d5942;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104de5dc);
  _atexit((_func_4879 *)&LAB_103189b0);
  return;
}


// 0x10064670  (ghidra: FUN_10064670)  [range]
void client_Sound_Sound_init_10064670(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104de578);
  local_18 = 0x44513534;
  local_14 = 0x455a4b4c;
  local_10 = 0x46433953;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104de578);
  _atexit((_func_4879 *)&LAB_103189c0);
  return;
}


// 0x100646d0  (ghidra: FUN_100646d0)  [range]
void client_Sound_Sound_init_100646d0(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104de638);
  local_18 = 0x35333130;
  local_14 = 0x4b4c4941;
  local_10 = 0x5553514f;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104de638);
  _atexit((_func_4879 *)&LAB_103189d0);
  return;
}


// 0x10064730  (ghidra: FUN_10064730)  [range]
void client_Sound_Sound_init_10064730(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de52c);
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
  sub_1020f570(&DAT_104de52c);
  _atexit((_func_4879 *)&LAB_103189e0);
  return;
}


// 0x10065110  (ghidra: FUN_10065110)  [range]
void client_Sound_Sound_InitPtr_D2Common_DAT_6fde9e1c_10065110(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Common_DAT_6fde9e1c();
  p_D2Common_DAT_6fde9e1c = *puVar1;
  return;
}


// 0x10067870  (ghidra: FUN_10067870)  [range]
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcbbfc_10067870(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcbbfc();
  p_D2Client_DAT_6fbcbbfc = *puVar1;
  return;
}


// 0x10067e90  (ghidra: FUN_10067e90)  [range]
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc24c_10067e90(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc24c();
  p_D2Client_DAT_6fbcc24c = *puVar1;
  return;
}


// 0x10067ea0  (ghidra: FUN_10067ea0)  [range]
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc250_10067ea0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc250();
  p_D2Client_DAT_6fbcc250 = *puVar1;
  return;
}


// 0x10067eb0  (ghidra: FUN_10067eb0)  [range]
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc254_10067eb0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc254();
  p_D2Client_DAT_6fbcc254 = *puVar1;
  return;
}


// 0x10067ec0  (ghidra: FUN_10067ec0)  [range]
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc258_10067ec0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc258();
  p_D2Client_DAT_6fbcc258 = *puVar1;
  return;
}


// 0x10067ed0  (ghidra: FUN_10067ed0)  [range]
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc25c_10067ed0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc25c();
  p_D2Client_DAT_6fbcc25c = *puVar1;
  return;
}


// 0x10067ee0  (ghidra: FUN_10067ee0)  [range]
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc260_10067ee0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc260();
  p_D2Client_DAT_6fbcc260 = *puVar1;
  return;
}


// 0x10067ef0  (ghidra: FUN_10067ef0)  [range]
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbc75b8_10067ef0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbc75b8();
  p_D2Client_DAT_6fbc75b8 = *puVar1;
  return;
}


// 0x10067f00  (ghidra: FUN_10067f00)  [range]
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc280_10067f00(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc280();
  p_D2Client_DAT_6fbcc280 = *puVar1;
  return;
}


// 0x10068820  (ghidra: FUN_10068820)  [range]
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbc97f8_10068820(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbc97f8();
  p_D2Client_DAT_6fbc97f8 = *puVar1;
  return;
}


// 0x10068c80  (ghidra: FUN_10068c80)  [range]
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc268_10068c80(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc268();
  p_D2Client_DAT_6fbcc268 = *puVar1;
  return;
}


// 0x10068c90  (ghidra: FUN_10068c90)  [range]
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcbf34_10068c90(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcbf34();
  p_D2Client_DAT_6fbcbf34 = *puVar1;
  return;
}


// 0x10068cd0  (ghidra: FUN_10068cd0)  [range]
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcbf38_10068cd0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcbf38();
  p_D2Client_DAT_6fbcbf38 = *puVar1;
  return;
}


// 0x10068cf0  (ghidra: FUN_10068cf0)  [range]
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc354_10068cf0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc354();
  p_D2Client_DAT_6fbcc354 = *puVar1;
  return;
}


// 0x10068d30  (ghidra: FUN_10068d30)  [range]
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc4c0_10068d30(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc4c0();
  p_D2Client_DAT_6fbcc4c0 = *puVar1;
  return;
}


// 0x10068d40  (ghidra: FUN_10068d40)  [range]
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc4c4_10068d40(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc4c4();
  p_D2Client_DAT_6fbcc4c4 = *puVar1;
  return;
}


// 0x10068d50  (ghidra: FUN_10068d50)  [range]
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc4c8_10068d50(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc4c8();
  p_D2Client_DAT_6fbcc4c8 = *puVar1;
  return;
}


// 0x10068d60  (ghidra: FUN_10068d60)  [range]
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc4cc_10068d60(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc4cc();
  p_D2Client_DAT_6fbcc4cc = *puVar1;
  return;
}


// 0x10068d70  (ghidra: FUN_10068d70)  [range]
void client_Sound_Sound_InitPtr_D2Client_DAT_6fbcc4d0_10068d70(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc4d0();
  p_D2Client_DAT_6fbcc4d0 = *puVar1;
  return;
}


// 0x10232090  (ghidra: FUN_10232090)  [linked]
void __fastcall client_Sound_Sound_10232090(char *param_1,char *param_2)

{
  strstr(param_1,param_2);
  return;
}


// 0x102320a0  (ghidra: FUN_102320a0)  [inferred]
int client_Sound_Sound_102320a0(void)

{
  short sVar1;
  
  sVar1 = fdclass();
  return (int)sVar1;
}


// 0x102320c0  (ghidra: FUN_102320c0)  [linked]
void client_Sound_Sound_102320c0(void)

{
  float in_XMM0_Da;
  
  if (0.0 <= in_XMM0_Da) {
    return;
  }
  libm_sse2_sqrt_precise();
  return;
}


// 0x102320f0  (ghidra: FUN_102320f0)  [linked]
int __cdecl client_Sound_Sound_102320f0(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)sub_10219540();
  iVar2 = __stdio_common_vsprintf(*puVar1 | 1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}


// 0x10232130  (ghidra: FUN_10232130)  [linked]
void __fastcall
client_Sound_Sound_10232130(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  client_Sound_Sound_102320f0(param_2,param_1,param_4);
  return;
}


// 0x10232150  (ghidra: FUN_10232150)  [linked]
void __cdecl client_Sound_Sound_10232150(uint32_t param_1,uint32_t param_2)

{
  uint8_t  stack0x0000000c;   /* not traced by Ghidra: address of a stack slot */

  client_Sound_Sound_10232130(param_1,param_2,param_1,&stack0x0000000c);
  return;
}


// 0x10232170  (ghidra: FUN_10232170)  [linked]
void client_Sound_Sound_10232170(void)

{
  client_Sound_Sound_102320c0();
  return;
}


// 0x10232180  (ghidra: FUN_10232180)  [range]
void client_Sound_Sound_Hook_sub_6faf4b50_10232180(uint32_t param_1)

{
  uint32_t *puVar1;
  uint uVar2;
  
  uVar2 = D2sound_10041();
  if (uVar2 != 0) {
    client_Sound_Sound_Wraps_D2Client_Sound_SoundHdr_10232b40();
    client_Sound_Sound_10233f80(param_1);
    *p_D2Client_DAT_6fbcbf34 = 1;
    *p_D2Client_DAT_6fbcbf38 = 0;
    client_Sound_SoundInstance_102347a0();
    client_Sound_Sound_Hook_WARDEN_WardenClient_6fb39830_102323b0();
    memset(&DAT_103d9910,0,0x1000);
    *p_D2Client_DAT_6fbcc4c0 = 0;
    *p_D2Client_DAT_6fbcc4c4 = 0;
    *p_D2Client_DAT_6fbcc4c8 = 0x5a;
    *p_D2Client_DAT_6fbcc4cc = 0;
    *p_D2Client_DAT_6fbcc4d0 = 0;
    D2sound_10061(0xff);
    puVar1 = p_D2Client_DAT_6fbcc268;
    DAT_103d990c = 0;
    *p_D2Client_DAT_6fbcc268 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  return;
}


// 0x10232240  (ghidra: FUN_10232240)  [range]
/* WARNING: Unknown calling convention */

void client_Sound_Sound_Hook_sub_6faf4b50_10232240(uint32_t reg_EBX,uint32_t reg_ESI)

{
  if (*p_D2Client_DAT_6fbcc280 != 0) {
    client_Sound_SoundInstance_10234810(reg_EBX,reg_ESI,*p_D2Client_DAT_6fbcc268);
    client_Sound_SoundInstance_10235480(*p_D2Client_DAT_6fbcc268);
    client_Sound_SoundSample_10236630(*p_D2Client_DAT_6fbcc268);
    client_Sound_SoundInstance_10235760();
    func_0x10233e90();
    *p_D2Client_DAT_6fbcc268 = *p_D2Client_DAT_6fbcc268 + 1;
    Sleep(0);
  }
  return;
}


// 0x102322a0  (ghidra: FUN_102322a0)  [anchor] refs client/Sound/Sound.cpp
void client_Sound_Sound_102322a0(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  
  piVar2 = (int *)*p_D2Client_DAT_6fbcbbfc;
  uVar3 = D2Common_10331(piVar2);
  if (uVar3 == 0) {
    return;
  }
  uVar3 = D2Common_10826_10276680(uVar3);
  if ((int)uVar3 < 0) {
    return;
  }
  if (*(uint *)(*p_D2Common_DAT_6fde9e1c + 0xc5c) < uVar3) {
    return;
  }
  if (uVar3 == DAT_104e6d98) {
    return;
  }
  DAT_104e6d98 = uVar3;
  if (*(int *)(&DAT_103d9910 + uVar3 * 4) != 0) {
    return;
  }
  puVar6 = &DAT_103c3450;
  do {
    iVar4 = 0;
    puVar5 = puVar6;
    do {
      if (*puVar5 == 0) break;
      if (*puVar5 == uVar3) {
        if (puVar6 != (uint *)0x0) {
          iVar4 = 0;
          goto LAB_10232330;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 < 10);
    puVar6 = puVar6 + 0xc;
    if (0x103c36ef < (int)puVar6) {
      return;
    }
  } while( true );
  while( true ) {
    iVar4 = iVar4 + 4;
    *(uint32_t *)(&DAT_103d9910 + *piVar1 * 4) = 1;
    if (0x27 < iVar4) break;
LAB_10232330:
    piVar1 = (int *)(iVar4 + (int)puVar6);
    if (*piVar1 == 0) break;
  }
  if ((puVar6[10] == 0) || (iVar4 = sub_102f0a60(), iVar4 != 0)) {
    if (piVar2 == (int *)0x0) {
      Fog_10024("",
                "C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\client\\Sound\\Sound.cpp"
                ,0xcbb);
                    /* WARNING: Subroutine does not return */
      _exit(-1);
    }
    if ((0x3e < (uint)(*p_D2Client_DAT_6fbc97f8 - piVar2[0x1f])) && (iVar4 = client_Sound_SoundInstance_10234f50(), iVar4 == 0)) {
      sub_6fad3200((int)piVar2,(uint)(ushort)puVar6[0xb]);
    }
  }
  return;
}


// 0x102323b0  (ghidra: FUN_102323b0)  [range]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void client_Sound_Sound_Hook_WARDEN_WardenClient_6fb39830_102323b0(void)

{
  uint uVar1;
  
  DAT_103d98f8 = 0;
  DAT_103da914 = 0;
  DAT_103e291c = 0;
  DAT_103e2918 = 0;
  *p_D2Client_DAT_6fbcc354 = 0;
  DAT_103d9908 = 0;
  uVar1 = D2sound_10041();
  if (uVar1 != 0) {
    memset((void *)*p_D2Client_DAT_6fbc75b8,0,(*p_D2Client_DAT_6fbcc260 - *p_D2Client_DAT_6fbcc25c) * 4 + 4);
  }
  return;
}


// 0x10232420  (ghidra: FUN_10232420)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall client_Sound_Sound_10232420(int *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  float *pfVar6;
  void *extraout_ECX;
  int iVar7;
  int iVar8;
  float fVar9;
  uint64_t uVar10;
  uint32_t local_a8 [6];
  uint32_t local_90 [6];
  uint32_t local_78 [6];
  float local_60;
  char *local_5c;
  float local_58;
  float local_54;
  float local_50;
  uint32_t local_4c [6];
  uint32_t local_34 [6];
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10303ec3;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  iVar1 = param_1[2];
  local_5c = (char *)*p_D2Client_DAT_6fbcc24c;
  if (iVar1 == 0) {
    return;
  }
  if (local_5c == (char *)0x0) {
    return;
  }
  iVar8 = *(int *)(iVar1 + 4);
  if (((-1 < iVar8) && (iVar8 < *p_D2Client_DAT_6fbcc250)) &&
     (local_5c = local_5c + iVar8 * 0x92, local_5c == (char *)0x0)) {
    return;
  }
  switch(*(uint32_t *)(local_5c + 0x47)) {
  case 0:
    local_58 = 60.0;
    local_54 = 400.0;
    break;
  default:
    local_58 = 60.0;
    local_54 = 700.0;
    break;
  case 2:
    local_58 = 200.0;
    local_54 = 1000.0;
    break;
  case 3:
    local_58 = 400.0;
    local_54 = 1500.0;
    break;
  case 4:
    local_54 = 2000.0;
    local_58 = 2000.0;
  }
  local_18 = *(int *)(iVar1 + 0x1c);
  ExceptionList = &local_10;
  if (*(int *)(iVar1 + 0x59) != 0) {
switchD_1023252d_caseD_c:
    local_18 = local_18 * DAT_104e21b8;
    goto LAB_10232599;
  }
  switch(*(uint32_t *)(local_5c + 0x8e)) {
  case 2:
    uVar3 = D2sound_10011();
    local_18 = local_18 * uVar3;
    break;
  case 3:
    local_18 = local_18 * DAT_104e2128;
    break;
  case 4:
    local_18 = local_18 * DAT_104e2138;
    break;
  case 5:
    local_18 = local_18 * DAT_104e2148;
    break;
  case 6:
    local_18 = local_18 * DAT_104e2158;
    break;
  case 7:
    local_18 = local_18 * DAT_104e2168;
    break;
  case 8:
    local_18 = local_18 * DAT_104e2178;
    break;
  case 9:
    local_18 = local_18 * DAT_104e2188;
    break;
  case 10:
    local_18 = local_18 * DAT_104e2198;
    break;
  case 0xb:
    local_18 = local_18 * DAT_104e21a8;
    break;
  case 0xc:
    goto switchD_1023252d_caseD_c;
  default:
    goto switchD_1023252d_default;
  }
LAB_10232599:
  local_18 = local_18 / 100;
switchD_1023252d_default:
  if (((*(int *)(local_5c + 0x8e) != 2) && (*(int *)(local_5c + 0x8e) != 0xc)) &&
     (*(int *)(iVar1 + 0x59) == 0)) {
    uVar3 = D2sound_10001();
    local_18 = (int)(local_18 * uVar3) / 100;
    if (((DAT_103e7638 != '\0') && (0 < local_18)) && (local_5c[0x4c] == '\0')) {
      sub_1020f990(local_4c,local_5c);
      local_8 = 0;
      pvVar4 = sub_1022fa80(local_a8);
      local_8._0_1_ = 1;
      pvVar4 = sub_10231dc0(local_90,"Played sound (",pvVar4);
      local_8._0_1_ = 2;
      pvVar4 = client_Sound_Sound_10233cd0(local_78,pvVar4,") ");
      local_8._0_1_ = 3;
      client_Sound_Sound_10233d00(local_34,pvVar4,(int)local_4c);
      thunk_FUN_1020fc60(local_78);
      thunk_FUN_1020fc60(local_90);
      local_8 = CONCAT31(local_8._1_3_,7);
      thunk_FUN_1020fc60(local_a8);
      uVar10 = thunk_FUN_1020fe30((int)local_34);
      sub_10237780(7,(int)uVar10);
      thunk_FUN_1020fc60(local_34);
      local_8 = 0xffffffff;
      thunk_FUN_1020fc60(local_4c);
    }
  }
  if ((((DAT_103e2d48 != 100) && ((iVar8 < 0x1231 || (0x125a < iVar8)))) &&
      ((iVar8 < 0x34 || (0x47 < iVar8)))) && ((iVar8 < 1 || (0xf < iVar8)))) {
    local_18 = (local_18 * DAT_103e2d48) / 100;
  }
  if ((DAT_103e292c != 100) && (local_5c[0x52] == '\0')) {
    local_18 = (local_18 * DAT_103e292c) / 100;
  }
  uVar3 = D2sound_10059();
  uVar5 = D2sound_10067();
  if ((*p_D2Client_DAT_6fbcc280 != 0) && (((uVar3 == 1 || (uVar3 == 2)) && (uVar5 != 0x32)))) {
    local_50 = (float)((int)(uVar5 * 2 + -100) / 3);
    if ((*param_1 != 0) && (0 < (int)local_50)) {
      local_18 = ((0xff - ((int)local_50 * 0xff) / 0x32) * local_18) / 0xff;
    }
    if (((*(byte *)(param_1 + 1) & 2) != 0) && ((int)local_50 < 0)) {
      local_18 = ((((int)local_50 * 0xff) / 0x32 + 0xff) * local_18) / 0xff;
    }
  }
  iVar8 = local_18;
  if (local_18 != param_1[6]) goto LAB_10232890;
  bVar2 = client_Sound_Sound_10233d30();
  if (bVar2) {
LAB_1023283e:
    local_50 = (float)param_1[7];
    bVar2 = true;
  }
  else {
    local_50 = (float)param_1[7];
    bVar2 = client_Sound_Sound_10233d30();
    if (bVar2) goto LAB_1023283e;
    bVar2 = false;
  }
  if (bVar2 != (*(float *)(iVar1 + 0x20) == local_50)) {
    iVar7 = 3;
    pfVar6 = (float *)(iVar1 + 0xc);
    while( true ) {
      if (iVar7 == 0) {
        ExceptionList = local_10;
        return;
      }
      iVar7 = iVar7 + -1;
      if (*pfVar6 != *(float *)((int)param_1 + (0xc - (iVar1 + 0xc)) + (int)pfVar6)) break;
      pfVar6 = pfVar6 + 1;
    }
  }
LAB_10232890:
  local_50 = *(float *)(iVar1 + 0xc);
  local_60 = *(float *)(iVar1 + 0x10);
  fVar9 = local_50 * local_50 + local_60 * local_60;
  client_Sound_Sound_10232170();
  if (local_58 <= fVar9) {
    local_50 = *(float *)(iVar1 + 0xc);
    local_60 = *(float *)(iVar1 + 0x10);
    if (fVar9 != local_58) {
      iVar8 = (int)(((local_54 - fVar9) * (float)iVar8) / (local_54 - local_58));
      local_50 = *(float *)(iVar1 + 0xc);
      local_60 = *(float *)(iVar1 + 0x10);
      local_18 = iVar8;
    }
  }
  pvVar4 = (void *)((uint)(byte)local_5c[0x3c] * iVar8);
  fVar9 = local_50 * 0.003125;
  uVar3 = param_1[1];
  iVar8 = (int)pvVar4 / 0xff;
  local_50 = local_60 * 0.003125;
  local_1c = 0;
  local_54 = *(float *)(iVar1 + 0x14) * 0.003125;
  local_60 = fVar9;
  if (uVar3 == 0) {
    D2sound_10047(&local_18,&local_1c,fVar9,local_50,local_54);
    D2sound_10028((uint *)*param_1,local_1c);
    uVar3 = param_1[1];
    iVar8 = (iVar8 * local_18) / 0xff;
    pvVar4 = extraout_ECX;
  }
  if ((uVar3 & 2) != 0) {
    sub_102eff50(pvVar4,*param_1,local_60,local_50,local_54);
  }
  D2sound_10051((void *)*param_1);
  D2sound_10008((int *)*param_1,iVar8);
  param_1[3] = *(int *)(iVar1 + 0xc);
  param_1[4] = *(int *)(iVar1 + 0x10);
  param_1[5] = *(int *)(iVar1 + 0x14);
  param_1[6] = local_18;
  param_1[7] = *(int *)(iVar1 + 0x20);
  ExceptionList = local_10;
  return;
}


// 0x10232a90  (ghidra: FUN_10232a90)  [range]
int client_Sound_Sound_Hook_sub_6fb4cd07_10232a90(int param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*p_D2Client_DAT_6fbcc24c != 0) {
    iVar7 = 0;
    if ((-1 < param_1) && (param_1 < *p_D2Client_DAT_6fbcc250)) {
      iVar7 = param_1 * 0x92 + *p_D2Client_DAT_6fbcc24c;
    }
    bVar2 = *(byte *)(iVar7 + 0x3d);
    if (1 < bVar2) {
      iVar5 = bVar2 - 1;
      iVar6 = 2;
      if (iVar5 < 2) {
        iVar6 = iVar5;
      }
      if ((bVar2 < 4) && (uVar3 = sub_1025de90(bVar2 + 1), uVar3 == 0)) {
        iVar6 = iVar6 + -1;
      }
      uVar3 = sub_1025de90((uint)*(byte *)(iVar7 + 0x3d));
      iVar5 = param_1 + uVar3;
      if (0 < iVar6) {
        do {
          iVar4 = 0;
          iVar1 = *(int *)(iVar7 + 100);
          while (iVar5 != iVar1) {
            iVar4 = iVar4 + 1;
            if (iVar6 <= iVar4) {
              return iVar5;
            }
            iVar1 = *(int *)(iVar7 + 100 + iVar4 * 4);
          }
          uVar3 = sub_1025de90((uint)*(byte *)(iVar7 + 0x3d));
          iVar5 = param_1 + uVar3;
        } while( true );
      }
      return iVar5;
    }
  }
  return param_1;
}


// 0x10232b40  (ghidra: FUN_10232b40)  [anchor] refs client/Sound/Sound.cpp
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void client_Sound_Sound_Wraps_D2Client_Sound_SoundHdr_10232b40(void)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint local_4d8;
  int local_4d4;
  int local_4d0;
  char *local_4cc;
  uint32_t local_4c8;
  uint32_t local_4c4;
  uint32_t local_4c0;
  uint32_t local_4bc;
  char *local_4b8;
  uint32_t local_4b4;
  uint32_t local_4b0;
  uint32_t local_4ac;
  uint32_t local_4a8;
  char *local_4a4;
  uint32_t local_4a0;
  uint32_t local_49c;
  uint32_t local_498;
  uint32_t local_494;
  uint8_t *local_490;
  uint32_t local_48c;
  uint32_t local_488;
  uint32_t local_484;
  uint32_t local_480;
  char *local_47c;
  uint32_t local_478;
  uint32_t local_474;
  uint32_t local_470;
  uint32_t local_46c;
  char *local_468;
  uint32_t local_464;
  uint32_t local_460;
  uint32_t local_45c;
  uint32_t local_458;
  char *local_454;
  uint32_t local_450;
  uint32_t local_44c;
  uint32_t local_448;
  uint32_t local_444;
  char *local_440;
  uint32_t local_43c;
  uint32_t local_438;
  uint32_t local_434;
  uint32_t local_430;
  char *local_42c;
  uint32_t local_428;
  uint32_t local_424;
  uint32_t local_420;
  uint32_t local_41c;
  char *local_418;
  uint32_t local_414;
  uint32_t local_410;
  uint32_t local_40c;
  uint32_t local_408;
  char *local_404;
  uint32_t local_400;
  uint32_t local_3fc;
  uint32_t local_3f8;
  uint32_t local_3f4;
  char *local_3f0;
  uint32_t local_3ec;
  uint32_t local_3e8;
  uint32_t local_3e4;
  uint32_t local_3e0;
  char *local_3dc;
  uint32_t local_3d8;
  uint32_t local_3d4;
  uint32_t local_3d0;
  uint32_t local_3cc;
  char *local_3c8;
  uint32_t local_3c4;
  uint32_t local_3c0;
  uint32_t local_3bc;
  uint32_t local_3b8;
  char *local_3b4;
  uint32_t local_3b0;
  uint32_t local_3ac;
  uint32_t local_3a8;
  uint32_t local_3a4;
  char *local_3a0;
  uint32_t local_39c;
  uint32_t local_398;
  uint32_t local_394;
  uint32_t local_390;
  char *local_38c;
  uint32_t local_388;
  uint32_t local_384;
  uint32_t local_380;
  uint32_t local_37c;
  char *local_378;
  uint32_t local_374;
  uint32_t local_370;
  uint32_t local_36c;
  uint32_t local_368;
  uint8_t *local_364;
  uint32_t local_360;
  uint32_t local_35c;
  uint32_t local_358;
  uint32_t local_354;
  char *local_350;
  uint32_t local_34c;
  uint32_t local_348;
  uint32_t local_344;
  uint32_t local_340;
  char *local_33c;
  uint32_t local_338;
  uint32_t local_334;
  uint32_t local_330;
  uint32_t local_32c;
  char *local_328;
  uint32_t local_324;
  uint32_t local_320;
  uint32_t local_31c;
  uint32_t local_318;
  char *local_314;
  uint32_t local_310;
  uint32_t local_30c;
  uint32_t local_308;
  uint32_t local_304;
  char *local_300;
  uint32_t local_2fc;
  uint32_t local_2f8;
  uint32_t local_2f4;
  uint32_t local_2f0;
  uint8_t *local_2ec;
  uint32_t local_2e8;
  uint32_t local_2e4;
  uint32_t local_2e0;
  uint32_t local_2dc;
  uint8_t *local_2d8;
  uint32_t local_2d4;
  uint32_t local_2d0;
  uint32_t local_2cc;
  uint32_t local_2c8;
  char *local_2c4;
  uint32_t local_2c0;
  uint32_t local_2bc;
  uint32_t local_2b8;
  uint32_t local_2b4;
  char *local_2b0;
  uint32_t local_2ac;
  uint32_t local_2a8;
  uint32_t local_2a4;
  uint32_t local_2a0;
  char *local_29c;
  uint32_t local_298;
  uint32_t local_294;
  uint32_t local_290;
  uint32_t local_28c;
  char *local_288;
  uint32_t local_284;
  uint32_t local_280;
  uint32_t local_27c;
  uint32_t local_278;
  char *local_274;
  uint32_t local_270;
  uint32_t local_26c;
  uint32_t local_268;
  uint32_t local_264;
  char *local_260;
  uint32_t local_25c;
  uint32_t local_258;
  uint32_t local_254;
  uint32_t local_250;
  char *local_24c;
  uint32_t local_248;
  uint32_t local_244;
  uint32_t local_240;
  uint32_t local_23c;
  char *local_238;
  uint32_t local_234;
  uint32_t local_230;
  uint32_t local_22c;
  uint32_t local_228;
  char *local_224;
  uint32_t local_220;
  uint32_t local_21c;
  uint32_t local_218;
  uint32_t local_214;
  char *local_210;
  uint32_t local_20c;
  uint32_t local_208;
  uint32_t local_204;
  uint32_t local_200;
  char *local_1fc;
  uint32_t local_1f8;
  uint32_t local_1f4;
  uint32_t local_1f0;
  uint32_t local_1ec;
  char *local_1e8;
  uint32_t local_1e4;
  uint32_t local_1e0;
  uint32_t local_1dc;
  uint32_t local_1d8;
  char *local_1d4;
  uint32_t local_1d0;
  uint32_t local_1cc;
  uint32_t local_1c8;
  uint32_t local_1c4;
  char *local_1c0;
  uint32_t local_1bc;
  uint32_t local_1b8;
  uint32_t local_1b4;
  uint32_t local_1b0;
  char *local_1ac;
  uint32_t local_1a8;
  uint32_t local_1a4;
  uint32_t local_1a0;
  uint32_t local_19c;
  char *local_198;
  uint32_t local_194;
  uint32_t local_190;
  uint32_t local_18c;
  uint32_t local_188;
  char *local_184;
  uint32_t local_180;
  uint32_t local_17c;
  uint32_t local_178;
  uint32_t local_174;
  char *local_170;
  uint32_t local_16c;
  uint32_t local_168;
  uint32_t local_164;
  uint32_t local_160;
  char *local_15c;
  uint32_t local_158;
  uint32_t local_154;
  uint32_t local_150;
  uint32_t local_14c;
  char *local_148;
  uint32_t local_144;
  uint32_t local_140;
  uint32_t local_13c;
  uint32_t local_138;
  char *local_134;
  uint32_t local_130;
  uint32_t local_12c;
  uint32_t local_128;
  uint32_t local_124;
  uint8_t *local_120;
  uint32_t local_11c;
  uint32_t local_118;
  uint32_t local_114;
  uint32_t local_110;
  uint8_t local_10c [260];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_4cc = "Filename";
  local_4c8 = 1;
  local_4c4 = 0x3b;
  local_4c0 = 0;
  local_4bc = 0;
  local_4b8 = "Volume";
  local_4b4 = 4;
  local_4b0 = 0;
  local_4ac = 0x3c;
  local_4a8 = 0;
  local_4a4 = "Group Size";
  local_4a0 = 4;
  local_49c = 0;
  local_498 = 0x3d;
  local_494 = 0;
  local_490 = &DAT_103783fc;
  local_48c = 4;
  local_488 = 0;
  local_484 = 0x3e;
  local_480 = 0;
  local_47c = "Fade In";
  local_478 = 4;
  local_474 = 0;
  local_470 = 0x3f;
  local_46c = 0;
  local_468 = "Fade Out";
  local_464 = 4;
  local_460 = 0;
  local_45c = 0x40;
  local_458 = 0;
  local_454 = "Defer Inst";
  local_450 = 4;
  local_44c = 0;
  local_448 = 0x41;
  local_444 = 0;
  local_440 = "Stop Inst";
  local_43c = 4;
  local_438 = 0;
  local_434 = 0x42;
  local_430 = 0;
  local_42c = "Duration";
  local_428 = 3;
  local_424 = 0;
  local_420 = 0x43;
  local_41c = 0;
  local_418 = "Compound";
  local_414 = 3;
  local_410 = 0;
  local_40c = 0x45;
  local_408 = 0;
  local_404 = "Falloff";
  local_400 = 2;
  local_3fc = 0;
  local_3f8 = 0x47;
  local_3f4 = 0;
  local_3f0 = "Reverb";
  local_3ec = 4;
  local_3e8 = 0;
  local_3e4 = 0x4b;
  local_3e0 = 0;
  local_3dc = "Cache";
  local_3d8 = 4;
  local_3d4 = 0;
  local_3d0 = 0x4c;
  local_3cc = 0;
  local_3c8 = "Async Only";
  local_3c4 = 4;
  local_3c0 = 0;
  local_3bc = 0x4d;
  local_3b8 = 0;
  local_3b4 = "Priority";
  local_3b0 = 4;
  local_3ac = 0;
  local_3a8 = 0x4e;
  local_3a4 = 0;
  local_3a0 = "Stream";
  local_39c = 4;
  local_398 = 0;
  local_394 = 0x4f;
  local_390 = 0;
  local_38c = "Stereo";
  local_388 = 4;
  local_384 = 0;
  local_380 = 0x50;
  local_37c = 0;
  local_378 = "Tracking";
  local_374 = 4;
  local_370 = 0;
  local_36c = 0x51;
  local_368 = 0;
  local_364 = &DAT_10378480;
  local_360 = 4;
  local_35c = 0;
  local_358 = 0x52;
  local_354 = 0;
  local_350 = "Music Vol";
  local_34c = 4;
  local_348 = 0;
  local_344 = 0x53;
  local_340 = 0;
  local_33c = "Block 1";
  local_338 = 2;
  local_334 = 0;
  local_330 = 0x54;
  local_32c = 0;
  local_328 = "Block 2";
  local_324 = 2;
  local_320 = 0;
  local_31c = 0x58;
  local_318 = 0;
  local_314 = "Block 3";
  local_310 = 2;
  local_30c = 0;
  local_308 = 0x5c;
  local_304 = 0;
  local_300 = "Sound Group";
  local_2fc = 2;
  local_2f8 = 0;
  local_2f4 = 0x8e;
  local_2f0 = 0;
  local_2ec = &DAT_103784b8;
  local_2e8 = 0;
  local_2e4 = 0;
  local_2e0 = 0;
  local_2dc = 0;
  local_2d8 = &DAT_103784d8;
  local_2d4 = 2;
  local_2d0 = 0;
  local_2cc = 0;
  local_2c8 = 0;
  local_2c4 = "Day Ambience";
  local_2c0 = 2;
  local_2bc = 0;
  local_2b8 = 4;
  local_2b4 = 0;
  local_2b0 = "Night Ambience";
  local_2ac = 2;
  local_2a8 = 0;
  local_2a4 = 8;
  local_2a0 = 0;
  local_29c = "Day Event";
  local_298 = 2;
  local_294 = 0;
  local_290 = 0xc;
  local_28c = 0;
  local_288 = "Night Event";
  local_284 = 2;
  local_280 = 0;
  local_27c = 0x10;
  local_278 = 0;
  local_274 = "Event Delay";
  local_270 = 2;
  local_26c = 0;
  local_268 = 0x14;
  local_264 = 0;
  local_260 = "Indoors";
  local_25c = 4;
  local_258 = 0;
  local_254 = 0x18;
  local_250 = 0;
  local_24c = "Material 1";
  local_248 = 2;
  local_244 = 0;
  local_240 = 0x1c;
  local_23c = 0;
  local_238 = "Material 2";
  local_234 = 2;
  local_230 = 0;
  local_22c = 0x20;
  local_228 = 0;
  local_224 = "EAX Environ";
  local_220 = 2;
  local_21c = 0;
  local_218 = 0x24;
  local_214 = 0;
  local_210 = "EAX Env Size";
  local_20c = 2;
  local_208 = 0;
  local_204 = 0x28;
  local_200 = 0;
  local_1fc = "EAX Env Diff";
  local_1f8 = 2;
  local_1f4 = 0;
  local_1f0 = 0x2c;
  local_1ec = 0;
  local_1e8 = "EAX Room Vol";
  local_1e4 = 2;
  local_1e0 = 0;
  local_1dc = 0x30;
  local_1d8 = 0;
  local_1d4 = "EAX Room HF";
  local_1d0 = 2;
  local_1cc = 0;
  local_1c8 = 0x34;
  local_1c4 = 0;
  local_1c0 = "EAX Decay Time";
  local_1bc = 2;
  local_1b8 = 0;
  local_1b4 = 0x38;
  local_1b0 = 0;
  local_1ac = "EAX Decay HF";
  local_1a8 = 2;
  local_1a4 = 0;
  local_1a0 = 0x3c;
  local_19c = 0;
  local_198 = "EAX Reflect";
  local_194 = 2;
  local_190 = 0;
  local_18c = 0x40;
  local_188 = 0;
  local_184 = "EAX Reflect Delay";
  local_180 = 2;
  local_17c = 0;
  local_178 = 0x44;
  local_174 = 0;
  local_170 = "EAX Reverb";
  local_16c = 2;
  local_168 = 0;
  local_164 = 0x48;
  local_160 = 0;
  local_15c = "EAX Rev Delay";
  local_158 = 2;
  local_154 = 0;
  local_150 = 0x4c;
  local_14c = 0;
  local_148 = "EAX Room Roll";
  local_144 = 2;
  local_140 = 0;
  local_13c = 0x50;
  local_138 = 0;
  local_134 = "EAX Air Absorb";
  local_130 = 2;
  local_12c = 0;
  local_128 = 0x54;
  local_124 = 0;
  local_120 = &DAT_103784b8;
  local_11c = 0;
  local_118 = 0;
  local_114 = 0;
  local_110 = 0;
  local_4d0 = 0;
  if (*p_D2Client_DAT_6fbcc24c == 0) {
    if (*p_D2Client_DAT_6fbcc254 == 0) {
      client_Sound_Sound_10232150(local_10c,"%s\\sounds.txt");
      puVar4 = (uint *)sub_102f09d0(local_10c,0,&local_4d0);
      puVar4 = Fog_10208(puVar4,local_4d0);
      uVar10 = puVar4[2] * 0x92;
      *p_D2Client_DAT_6fbcc250 = puVar4[2];
      puVar5 = Fog_10042(uVar10,"..\\Source\\D2Client\\Sound\\SoundHdr.cpp",0x106,0);
      piVar2 = p_D2Client_DAT_6fbcc24c;
      *p_D2Client_DAT_6fbcc24c = (int)puVar5;
      memset(puVar5,0,uVar10);
      Fog_10207((int)puVar4,(uint *)&local_4cc,*piVar2,*p_D2Client_DAT_6fbcc250,0x92);
      Fog_10209(puVar4);
      client_Sound_Sound_10232150(local_10c,"%s\\soundenviron.txt");
      puVar4 = (uint *)sub_102f09d0(local_10c,0,&local_4d0);
      puVar4 = Fog_10208(puVar4,local_4d0);
      uVar10 = puVar4[2] * 0x58;
      *p_D2Client_DAT_6fbcc258 = puVar4[2];
      puVar5 = Fog_10042(uVar10,"..\\Source\\D2Client\\Sound\\SoundHdr.cpp",0x112,0);
      piVar2 = p_D2Client_DAT_6fbcc254;
      *p_D2Client_DAT_6fbcc254 = (int)puVar5;
      memset(puVar5,0,uVar10);
      Fog_10207((int)puVar4,(uint *)&local_2d8,*piVar2,*p_D2Client_DAT_6fbcc258,0x58);
      Fog_10209(puVar4);
      puVar5 = p_D2Client_DAT_6fbcc25c;
      puVar4 = p_D2Client_DAT_6fbcc250;
      iVar9 = 0;
      local_4d8 = 1;
      iVar12 = 1;
      *p_D2Client_DAT_6fbcc25c = *p_D2Client_DAT_6fbcc250;
      piVar2 = p_D2Client_DAT_6fbcc24c;
      if (1 < (int)*puVar4) {
        local_4d4 = 0x92;
        do {
          iVar11 = *piVar2 + local_4d4;
          if (((iVar9 == 0) || (iVar12 < iVar9)) ||
             (iVar7 = iVar9, (int)(iVar9 + local_4d8) <= iVar12)) {
            iVar7 = iVar12;
          }
          *(int *)(iVar11 + 0x60) = iVar7;
          if (*(byte *)(iVar11 + 0x3d) == 0) {
            *(uint8_t *)(iVar11 + 0x3d) = 1;
          }
          else {
            local_4d8 = (uint)*(byte *)(iVar11 + 0x3d);
            iVar9 = iVar12;
          }
          cVar8 = '\0';
          piVar6 = (int *)(iVar11 + 0x54);
          iVar7 = 0;
          do {
            if (*piVar6 == -1) break;
            iVar7 = iVar7 + 1;
            cVar8 = cVar8 + '\x01';
            piVar6 = piVar6 + 1;
          } while (iVar7 < 3);
          iVar12 = iVar12 + 1;
          *(char *)(iVar11 + 0x80) = cVar8;
          local_4d4 = local_4d4 + 0x92;
        } while (iVar12 < (int)*puVar4);
      }
      puVar3 = p_D2Client_DAT_6fbcc258;
      puVar4 = p_D2Client_DAT_6fbcc260;
      *p_D2Client_DAT_6fbcc260 = 0;
      if (0 < (int)*puVar3) {
        iVar9 = 0;
        iVar12 = 0;
        uVar10 = 0;
        do {
          uVar1 = *(uint *)(iVar12 + *p_D2Client_DAT_6fbcc254);
          if (0 < (int)uVar1) {
            if ((int)uVar1 < (int)*puVar5) {
              *puVar5 = uVar1;
            }
            if ((int)uVar10 < (int)uVar1) {
              uVar10 = uVar1;
            }
          }
          puVar3 = p_D2Client_DAT_6fbcc258;
          iVar9 = iVar9 + 1;
          *puVar4 = uVar10;
          iVar12 = iVar12 + 0x58;
        } while (iVar9 < (int)*puVar3);
      }
      uVar10 = (*puVar4 - *puVar5) * 4 + 4;
      puVar4 = Fog_10042(uVar10,"..\\Source\\D2Client\\Sound\\SoundHdr.cpp",0x147,0);
      *p_D2Client_DAT_6fbc75b8 = puVar4;
      memset(puVar4,0,uVar10);
      return;
    }
    iVar9 = 0xfd;
  }
  else {
    iVar9 = 0xfc;
  }
  Fog_10024("Bad Sounds.txt",
            "C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\client\\Sound\\Sound.cpp"
            ,iVar9);
                    /* WARNING: Subroutine does not return */
  _exit(-1);
}


// 0x10233790  (ghidra: FUN_10233790)  [range]
void client_Sound_Sound_Hook_sub_6faf4b50_10233790(void)

{
  int iVar1;
  
  if (*p_D2Client_DAT_6fbcc254 != 0) {
    Fog_10043(0x181,0);
    *p_D2Client_DAT_6fbcc254 = 0;
    *p_D2Client_DAT_6fbcc258 = 0;
  }
  if (*p_D2Client_DAT_6fbcc24c != 0) {
    iVar1 = 1;
    if (1 < *p_D2Client_DAT_6fbcc250) {
      do {
        client_Sound_SoundSample_10236560(iVar1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *p_D2Client_DAT_6fbcc250);
    }
    Fog_10043(0x18e,0);
    *p_D2Client_DAT_6fbcc24c = 0;
    *p_D2Client_DAT_6fbcc250 = 0;
  }
  *p_D2Client_DAT_6fbcc25c = 0;
  *p_D2Client_DAT_6fbcc260 = 0;
  return;
}


// 0x10233840  (ghidra: FUN_10233840)  [range]
int * client_Sound_Sound_Hook_WARDEN_WardenClient_6fb38dd0_10233840(uint param_1)

{
  DWORD DVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  DVar1 = GetTickCount();
  uVar4 = 0xffffffff;
  pcVar5 = (char *)*p_D2Client_DAT_6fbcc24c;
  if (param_1 != 0) {
    uVar4 = *(uint *)(param_1 + 4);
    if (uVar4 - 0x126a < 0x10) goto LAB_102338ce;
    if ((-1 < (int)uVar4) && (uVar4 < 0x2000)) {
      if (DVar1 <= *(uint *)(&DAT_103da918 + uVar4 * 4)) {
        return (int *)0x0;
      }
      *(DWORD *)(&DAT_103da918 + uVar4 * 4) = DVar1 + 0x32;
    }
  }
  if ((pcVar5 != (char *)0x0) &&
     ((((int)uVar4 < 0 || (*p_D2Client_DAT_6fbcc250 <= (int)uVar4)) ||
      (pcVar5 = pcVar5 + uVar4 * 0x92, pcVar5 != (char *)0x0)))) {
    if (uVar4 - 0x48 < 0x82) {
      if (DAT_103d98f4 < DVar1) {
        DAT_103d98f4 = DVar1 + 1000;
        goto LAB_102338ce;
      }
    }
    else {
      iVar3 = client_Sound_Sound_10232090(pcVar5,"\\neutral");
      if (iVar3 == 0) {
        iVar3 = client_Sound_Sound_10232090(pcVar5,"\\gethit");
        if (iVar3 == 0) {
          iVar3 = client_Sound_Sound_10232090(pcVar5,"\\attack");
          if (iVar3 == 0) goto LAB_102338ce;
          if (DAT_103e2924 < DVar1) {
            DAT_103e2924 = DVar1 + 0xfa;
            piVar2 = client_Sound_SoundChannel_102341a0(param_1);
            return piVar2;
          }
        }
        else if (DAT_103d9900 < DVar1) {
          DAT_103d9900 = DVar1 + 500;
          piVar2 = client_Sound_SoundChannel_102341a0(param_1);
          return piVar2;
        }
      }
      else if (DAT_103d98f0 < DVar1) {
        DAT_103d98f0 = DVar1 + 500;
        piVar2 = client_Sound_SoundChannel_102341a0(param_1);
        return piVar2;
      }
    }
    return (int *)0x0;
  }
LAB_102338ce:
  piVar2 = client_Sound_SoundChannel_102341a0(param_1);
  return piVar2;
}


// 0x10233980  (ghidra: FUN_10233980)  [range]
int client_Sound_Sound_10233980(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int *reg_ESI;
  int iVar2;
  int iVar3;
  float local_18 [3];
  int local_c;
  
  local_c = *p_D2Client_DAT_6fbcc268;
  if (*p_D2Client_DAT_6fbcbf34 == 0) {
    return 0;
  }
  if (param_1 < 1) {
    return 0;
  }
  if (*p_D2Client_DAT_6fbcc24c == 0) {
    return 0;
  }
  if (*p_D2Client_DAT_6fbcc250 <= param_1) {
    return 0;
  }
  iVar2 = param_1 * 0x92 + *p_D2Client_DAT_6fbcc24c;
  if (iVar2 == 0) {
    return 0;
  }
  if (*(char *)(iVar2 + 0x3c) == '\0') {
    return 0;
  }
  switch(*(uint32_t *)(iVar2 + 0x8e)) {
  case 2:
    uVar1 = D2sound_10011();
    break;
  case 3:
    uVar1 = DAT_104e2128;
    break;
  case 4:
    uVar1 = DAT_104e2138;
    break;
  case 5:
    uVar1 = DAT_104e2148;
    break;
  case 6:
    uVar1 = DAT_104e2158;
    break;
  case 7:
    uVar1 = DAT_104e2168;
    break;
  case 8:
    uVar1 = DAT_104e2178;
    break;
  case 9:
    uVar1 = DAT_104e2188;
    break;
  case 10:
    uVar1 = DAT_104e2198;
    break;
  case 0xb:
    uVar1 = DAT_104e21a8;
    break;
  default:
    goto switchD_102339ef_default;
  }
  if (uVar1 == 0) {
    return 0;
  }
switchD_102339ef_default:
  if ((*(short *)(iVar2 + 0x45) == 0) ||
     (reg_ESI = (int *)client_Sound_SoundInstance_10234e50(param_1), reg_ESI == (int *)0x0)) {
    reg_ESI = client_Sound_SoundInstance_Hook_sub_6fb2d850_102343f0();
    if (reg_ESI == (int *)0x0) {
      return 0;
    }
    iVar3 = 0;
    reg_ESI[0xe] = param_4;
    reg_ESI[0xd] = param_3 + local_c;
    reg_ESI[1] = param_1;
    reg_ESI[9] = param_5;
    reg_ESI[7] = 0xff;
    *(uint8_t *)(reg_ESI + 0xf) = *(uint8_t *)(iVar2 + 0x4e);
    local_18[0] = 0.0;
    local_18[1] = 0.0;
    local_18[2] = 0.0;
    if (param_2 == 0) {
      local_18[0] = 0.0;
      local_18[1] = 0.0;
      local_18[2] = 320.0;
      client_Sound_SoundInstance_10234520(local_18,(int)reg_ESI);
    }
    else {
      sub_10236940(local_18,param_1,reg_ESI,param_2,param_2);
      client_Sound_SoundInstance_10234520(local_18,(int)reg_ESI);
      sub_10236880(param_1,param_2);
      reg_ESI[8] = iVar3;
    }
  }
  if (param_2 == *p_D2Client_DAT_6fbcbbfc) {
    *(char *)(reg_ESI + 0xf) = (char)reg_ESI[0xf] + 'P';
  }
  if (param_2 != 0) {
    D2sound_10034((uint *)(reg_ESI + 10),param_2);
    sub_102f0d50(param_2,reg_ESI[2]);
  }
  return reg_ESI[2];
}


// 0x10233b50  [range]
int _D2Client_PlaySoundWithCustomVolumeOrPriority_20
              (int param_1,int param_2,int param_3,int param_4,uint32_t param_5)

{
  int *reg_ESI;
  int iVar1;
  int iVar2;
  int iVar3;
  float local_14 [3];
  int local_8;
  
                    /* 0x233b50  1  _D2Client_PlaySoundWithCustomVolumeOrPriority@20 */
  local_8 = *p_D2Client_DAT_6fbcc268;
  if (((((*p_D2Client_DAT_6fbcbf34 == 0) || (param_2 < 1)) || (*p_D2Client_DAT_6fbcc24c == 0)) ||
      ((*p_D2Client_DAT_6fbcc250 <= param_2 || (iVar1 = param_2 * 0x92 + *p_D2Client_DAT_6fbcc24c, iVar1 == 0)))) ||
     (DAT_104e21b8 == 0)) {
    return 0;
  }
  iVar2 = 0xff;
  if (param_4 < 0x100) {
    iVar2 = param_4;
  }
  iVar3 = 0xff;
  if (param_3 < 0x100) {
    iVar3 = param_3;
  }
  if ((*(short *)(iVar1 + 0x45) == 0) ||
     (reg_ESI = (int *)client_Sound_SoundInstance_10234e50(param_2), reg_ESI == (int *)0x0)) {
    reg_ESI = client_Sound_SoundInstance_Hook_sub_6fb2d850_102343f0();
    if (reg_ESI == (int *)0x0) {
      return 0;
    }
    reg_ESI[0xd] = local_8;
    iVar1 = 0;
    reg_ESI[7] = iVar3;
    *(char *)(reg_ESI + 0xf) = (char)iVar2;
    reg_ESI[0xe] = 0;
    reg_ESI[1] = param_2;
    reg_ESI[9] = 0;
    *(uint32_t *)((int)reg_ESI + 0x59) = param_5;
    local_14[0] = 0.0;
    local_14[1] = 0.0;
    local_14[2] = 0.0;
    if (param_1 == 0) {
      local_14[0] = 0.0;
      local_14[1] = 0.0;
      local_14[2] = 320.0;
      client_Sound_SoundInstance_10234520(local_14,(int)reg_ESI);
      return reg_ESI[2];
    }
    sub_10236940(local_14,param_2,reg_ESI,param_2,param_1);
    client_Sound_SoundInstance_10234520(local_14,(int)reg_ESI);
    sub_10236880(param_2,param_1);
    reg_ESI[8] = iVar1;
  }
  else if (param_1 == 0) goto LAB_10233c91;
  D2sound_10034((uint *)(reg_ESI + 10),param_1);
  sub_102f0d50(param_1,reg_ESI[2]);
LAB_10233c91:
  return reg_ESI[2];
}


// 0x10233cb0  (ghidra: FUN_10233cb0)  [linked]
void __thiscall client_Sound_Sound_10233cb0(void *this,int param_1)

{
  uint64_t uVar1;
  
  uVar1 = sub_1020fe30(param_1);
  client_DrawHoverItem_102252a0(this,(void *)uVar1,(uint)((ulonglong)uVar1 >> 0x20));
  return;
}


// 0x10233cd0  (ghidra: FUN_10233cd0)  [linked]
void * __fastcall client_Sound_Sound_10233cd0(void *param_1,void *param_2,char *param_3)

{
  uint32_t uVar1;
  uint8_t *puVar2;
  
  uVar1 = client_DrawHoverItem_102250a0(param_2,param_3);
  puVar2 = (uint8_t *)sub_1020fe80(uVar1);
  sub_10231cb0(param_1,puVar2);
  return param_1;
}


// 0x10233d00  (ghidra: FUN_10233d00)  [linked]
void * __fastcall client_Sound_Sound_10233d00(void *param_1,void *param_2,int param_3)

{
  uint32_t uVar1;
  uint8_t *puVar2;
  
  uVar1 = client_Sound_Sound_10233cb0(param_2,param_3);
  puVar2 = (uint8_t *)sub_1020fe80(uVar1);
  sub_10231cb0(param_1,puVar2);
  return param_1;
}


// 0x10233d30  (ghidra: FUN_10233d30)  [linked]
bool client_Sound_Sound_10233d30(void)

{
  int iVar1;
  
  iVar1 = client_Sound_Sound_102320a0();
  return iVar1 == 2;
}


// 0x10233d40  (ghidra: FUN_10233d40)  [inferred]
int * __fastcall client_Sound_Sound_10233d40(uint param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  float fVar8;
  
  piVar4 = &DAT_103e2930;
  do {
    if (((piVar4[2] == 0) && (piVar4[1] == param_2)) &&
       (iVar2 = D2sound_10044((int *)*piVar4), iVar2 == 0)) {
      return piVar4;
    }
    piVar4 = piVar4 + 8;
  } while ((int)piVar4 < 0x103e2d30);
  piVar6 = &DAT_103e2930;
  piVar4 = (int *)0x0;
  do {
    piVar5 = piVar4;
    if (((piVar6[1] == param_2) && (uVar7 = piVar6[2], uVar7 != 0)) &&
       (piVar5 = piVar6, piVar4 != (int *)0x0)) {
      uVar3 = piVar4[2];
      if ((*(byte *)(uVar3 + 0x3c) <= *(byte *)(uVar7 + 0x3c)) &&
         (piVar5 = piVar4, *(byte *)(uVar7 + 0x3c) == *(byte *)(uVar3 + 0x3c))) {
        bVar1 = client_Sound_Sound_10233d30();
        if (bVar1) {
LAB_10233dde:
          fVar8 = *(float *)(uVar7 + 0x18);
          bVar1 = true;
        }
        else {
          fVar8 = *(float *)(uVar7 + 0x18);
          bVar1 = client_Sound_Sound_10233d30();
          if (bVar1) goto LAB_10233dde;
          bVar1 = false;
        }
        piVar5 = piVar6;
        if ((((*(float *)(uVar3 + 0x18) < fVar8 == bVar1) &&
             (piVar5 = piVar4, *(float *)(uVar3 + 0x18) <= fVar8)) &&
            (piVar5 = piVar6, *(uint *)(uVar3 + 0x34) <= *(uint *)(uVar7 + 0x34))) &&
           ((piVar5 = piVar4, *(uint *)(uVar7 + 0x34) == *(uint *)(uVar3 + 0x34) && (uVar7 < uVar3))
           )) {
          piVar5 = piVar6;
        }
      }
    }
    piVar6 = piVar6 + 8;
    piVar4 = piVar5;
    if (0x103e2d2f < (int)piVar6) {
      if (piVar5 != (int *)0x0) {
        uVar7 = piVar5[2];
        if ((*(byte *)(uVar7 + 0x3c) < *(byte *)(param_1 + 0x3c)) ||
           ((*(byte *)(uVar7 + 0x3c) == *(byte *)(param_1 + 0x3c) && (uVar7 < param_1)))) {
          if (*piVar5 != 0) {
            uVar3 = D2sound_10032(*piVar5);
            *(uint *)(uVar7 + 0x41) = uVar3;
            D2sound_10006((int *)*piVar5);
            uVar7 = piVar5[2];
          }
          if (uVar7 != 0) {
            *(uint32_t *)(uVar7 + 0x30) = 2;
            *(uint32_t *)(piVar5[2] + 0x2c) = 0;
            piVar5[2] = 0;
          }
          return piVar5;
        }
      }
      return (int *)0x0;
    }
  } while( true );
}


// 0x10233f20  (ghidra: FUN_10233f20)  [inferred]
uint32_t __fastcall client_Sound_Sound_10233f20(int param_1)

{
  uint uVar1;
  
  if (param_1 == 1) {
    uVar1 = D2sound_10056();
    if (uVar1 == 0) {
      return 0;
    }
    client_Sound_SoundChannel_Hook_sub_6faf4b50_10234080();
    client_Sound_SoundChannel_10233fe0(1);
  }
  else {
    if ((param_1 == 2) && (uVar1 = D2sound_10046(), uVar1 == 0)) {
      return 0;
    }
    client_Sound_SoundChannel_Hook_sub_6faf4b50_10234080();
    client_Sound_SoundChannel_10233fe0(param_1);
    if (param_1 == 0) {
      return 0;
    }
  }
  uVar1 = D2sound_10059();
  if (uVar1 != param_1) {
    D2sound_10066(param_1);
  }
  return 1;
}


// 0x10233f80  (ghidra: FUN_10233f80)  [linked]
void __fastcall client_Sound_Sound_10233f80(uint32_t param_1)

{
  uint uVar1;
  uint uVar2;
  
  DAT_103e2928 = param_1;
  uVar1 = D2sound_10059();
  if (uVar1 == 1) {
    uVar2 = D2sound_10056();
  }
  else {
    if (uVar1 != 2) goto LAB_10233fba;
    uVar2 = D2sound_10046();
  }
  if (uVar2 == 0) {
    client_Sound_SoundChannel_Hook_sub_6faf4b50_10234080();
    client_Sound_SoundChannel_10233fe0(0);
    return;
  }
LAB_10233fba:
  client_Sound_SoundChannel_Hook_sub_6faf4b50_10234080();
  client_Sound_SoundChannel_10233fe0(uVar1);
  if (uVar1 != 0) {
    uVar2 = D2sound_10059();
    if (uVar2 != uVar1) {
      D2sound_10066(uVar1);
      return;
    }
  }
  return;
}

