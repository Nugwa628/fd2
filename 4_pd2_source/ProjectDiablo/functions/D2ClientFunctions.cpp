/*
 * functions/D2ClientFunctions.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x10049080 - 0x1022f430
 * Functions     : 113
 * Attribution   : range=112, nearest=1
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x10049080  (ghidra: FUN_10049080)  [range]
void functions_D2ClientFunctions_init_10049080(void)

{
  uint32_t extraout_ECX;
  
  sub_1020f410((uint64_t *)&DAT_104ddfc8);
  sub_1020f960(extraout_ECX);
  _atexit(FUN_10317db0);
  return;
}


// 0x100490a0  (ghidra: FUN_100490a0)  [range]
void functions_D2ClientFunctions_init_100490a0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de104);
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
  sub_1020f900(&DAT_104de104);
  _atexit((_func_4879 *)&LAB_10317dc0);
  return;
}


// 0x10049190  (ghidra: FUN_10049190)  [range]
void functions_D2ClientFunctions_init_10049190(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104ddfb0);
  local_c = 0x84;
  local_1c = 6;
  uStack_18 = 0x42;
  uStack_14 = 0x4c;
  uStack_10 = 0x6a;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104ddfb0);
  _atexit((_func_4879 *)&LAB_10317dd0);
  return;
}


// 0x100491f0  (ghidra: FUN_100491f0)  [range]
void functions_D2ClientFunctions_init_100491f0(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de0cc);
  local_c = 0x113;
  local_1c = 0;
  uStack_18 = 0xff;
  uStack_14 = 0x104;
  uStack_10 = 0x10e;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104de0cc);
  _atexit((_func_4879 *)&LAB_10317de0);
  return;
}


// 0x10049250  (ghidra: FUN_10049250)  [range]
void functions_D2ClientFunctions_init_10049250(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de008);
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
  sub_1020f900(&DAT_104de008);
  _atexit((_func_4879 *)&LAB_10317df0);
  return;
}


// 0x100492c0  (ghidra: FUN_100492c0)  [range]
void functions_D2ClientFunctions_init_100492c0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de04c);
  local_28 = 0x115;
  uStack_24 = 0x39;
  uStack_20 = 0xdb;
  uStack_1c = 0xdc;
  local_18 = 0x202;
  uStack_14 = 0xd9;
  uStack_10 = 0xda;
  uStack_c = 0x201;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104de04c);
  _atexit((_func_4879 *)&LAB_10317e00);
  return;
}


// 0x10049320  (ghidra: FUN_10049320)  [range]
void functions_D2ClientFunctions_init_10049320(void)

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
  
  sub_1020f420((uint64_t *)&DAT_104de070);
  local_28 = 0x1d8;
  uStack_24 = 0x1d9;
  uStack_20 = 0x1da;
  uStack_1c = 0x1a0;
  local_18 = 0x1dc;
  uStack_14 = 0x1dd;
  uStack_10 = 0x1de;
  uStack_c = 0x1df;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f780((uint32_t *)&DAT_104de070);
  _atexit((_func_4879 *)&LAB_10317e10);
  return;
}


// 0x10049380  (ghidra: FUN_10049380)  [range]
void functions_D2ClientFunctions_init_10049380(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de080);
  local_10 = 0x6b;
  local_c = 0x102;
  local_20 = 0x36;
  uStack_1c = 0x165;
  uStack_18 = 0x16f;
  uStack_14 = 0x172;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104de080);
  _atexit((_func_4879 *)&LAB_10317e20);
  return;
}


// 0x100493f0  (ghidra: FUN_100493f0)  [range]
void functions_D2ClientFunctions_init_100493f0(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104ddf88);
  local_10 = 0x8f;
  local_c = 0x6b;
  local_20 = 0x111;
  uStack_1c = 0x79;
  uStack_18 = 0x97;
  uStack_14 = 0x84;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104ddf88);
  _atexit((_func_4879 *)&LAB_10317e30);
  return;
}


// 0x10049460  (ghidra: FUN_10049460)  [range]
void functions_D2ClientFunctions_init_10049460(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de098);
  local_10 = 0x22b;
  local_c = 0x22a;
  local_20 = 0x254;
  uStack_1c = 0x251;
  uStack_18 = 0x22c;
  uStack_14 = 0x22d;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104de098);
  _atexit((_func_4879 *)&LAB_10317e40);
  return;
}


// 0x100494d0  (ghidra: FUN_100494d0)  [range]
void functions_D2ClientFunctions_init_100494d0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de014);
  local_28 = 0x92;
  uStack_24 = 0x94;
  uStack_20 = 0x97;
  uStack_1c = 0x9b;
  local_18 = 0x91;
  uStack_14 = 0xa9;
  uStack_10 = 0x8f;
  uStack_c = 0x9e;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104de014);
  _atexit((_func_4879 *)&LAB_10317e50);
  return;
}


// 0x10049530  (ghidra: FUN_10049530)  [range]
void functions_D2ClientFunctions_init_10049530(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de068);
  local_28 = 0x35d;
  uStack_24 = 0x36f;
  uStack_20 = 0x366;
  uStack_1c = 0x37d;
  local_18 = 0x2ea;
  uStack_14 = 0x3e4;
  uStack_10 = 0x2ee;
  uStack_c = 0x393;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104de068);
  _atexit((_func_4879 *)&LAB_10317e60);
  return;
}


// 0x10049590  (ghidra: FUN_10049590)  [range]
void functions_D2ClientFunctions_init_10049590(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de114);
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
  sub_1020f900(&DAT_104de114);
  _atexit((_func_4879 *)&LAB_10317e70);
  return;
}


// 0x10049600  (ghidra: FUN_10049600)  [range]
void functions_D2ClientFunctions_init_10049600(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104ddf28);
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
  sub_1020f900(&DAT_104ddf28);
  _atexit((_func_4879 *)&LAB_10317e80);
  return;
}


// 0x10049670  (ghidra: FUN_10049670)  [range]
void functions_D2ClientFunctions_init_10049670(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104ddffc);
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
  sub_1020f900(&DAT_104ddffc);
  _atexit((_func_4879 *)&LAB_10317e90);
  return;
}


// 0x100496e0  (ghidra: FUN_100496e0)  [range]
void functions_D2ClientFunctions_init_100496e0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de0f0);
  local_28 = 0x33a;
  uStack_24 = 0x3e6;
  uStack_20 = 0x373;
  uStack_1c = 0x329;
  local_18 = 0x461;
  uStack_14 = 0x462;
  uStack_10 = 0x2f3;
  uStack_c = 0x3c4;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104de0f0);
  _atexit((_func_4879 *)&LAB_10317ea0);
  return;
}


// 0x10049740  (ghidra: FUN_10049740)  [range]
void functions_D2ClientFunctions_init_10049740(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104ddf70);
  local_28 = 0x98;
  uStack_24 = 0x99;
  uStack_20 = 0xa4;
  uStack_1c = 0xa5;
  local_18 = 0xab;
  uStack_14 = 0xac;
  uStack_10 = 0xba;
  uStack_c = 0xbb;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104ddf70);
  _atexit((_func_4879 *)&LAB_10317eb0);
  return;
}


// 0x100497a0  (ghidra: FUN_100497a0)  [range]
void functions_D2ClientFunctions_init_100497a0(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de0f8);
  local_14 = 0x2eb;
  local_10 = 1000;
  local_c = 0x44f;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104de0f8);
  _atexit((_func_4879 *)&LAB_10317ec0);
  return;
}


// 0x10049800  (ghidra: FUN_10049800)  [range]
void functions_D2ClientFunctions_init_10049800(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de0d4);
  local_14 = 0x2e7;
  local_10 = 0x450;
  local_c = 0x451;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104de0d4);
  _atexit((_func_4879 *)&LAB_10317ed0);
  return;
}


// 0x10049860  (ghidra: FUN_10049860)  [range]
void functions_D2ClientFunctions_init_10049860(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de134);
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
  sub_1020f900(&DAT_104de134);
  _atexit((_func_4879 *)&LAB_10317ee0);
  return;
}


// 0x100498e0  (ghidra: FUN_100498e0)  [range]
void functions_D2ClientFunctions_init_100498e0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104ddf64);
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
  sub_1020f900(&DAT_104ddf64);
  _atexit((_func_4879 *)&LAB_10317ef0);
  return;
}


// 0x10049950  (ghidra: FUN_10049950)  [range]
void functions_D2ClientFunctions_init_10049950(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104de028);
  local_18 = 0x9d;
  local_14 = 0x9f;
  sub_1020f550(local_10,&local_18,local_10);
  sub_1020f900(&DAT_104de028);
  _atexit((_func_4879 *)&LAB_10317f00);
  return;
}


// 0x100499b0  (ghidra: FUN_100499b0)  [range]
void functions_D2ClientFunctions_init_100499b0(void)

{
  uint8_t local_20 [8];
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de08c);
  local_18 = 0x89;
  uStack_14 = 0xa1;
  uStack_10 = 0xa8;
  uStack_c = 0xbc;
  sub_1020f550(local_20,&local_18,local_8);
  sub_1020f900(&DAT_104de08c);
  _atexit((_func_4879 *)&LAB_10317f10);
  return;
}


// 0x10049a10  (ghidra: FUN_10049a10)  [range]
void functions_D2ClientFunctions_init_10049a10(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de054);
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
  sub_1020f900(&DAT_104de054);
  _atexit((_func_4879 *)&LAB_10317f20);
  return;
}


// 0x10049ab0  (ghidra: FUN_10049ab0)  [range]
void functions_D2ClientFunctions_init_10049ab0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de044);
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
  sub_1020f900(&DAT_104de044);
  _atexit((_func_4879 *)&LAB_10317f30);
  return;
}


// 0x10049b20  (ghidra: FUN_10049b20)  [range]
void functions_D2ClientFunctions_init_10049b20(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104ddfe4);
  local_14 = 0x89;
  local_10 = 0xa1;
  local_c = 0xbc;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104ddfe4);
  _atexit((_func_4879 *)&LAB_10317f40);
  return;
}


// 0x10049b80  (ghidra: FUN_10049b80)  [range]
void functions_D2ClientFunctions_init_10049b80(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104ddf90);
  local_14 = 0x85;
  local_10 = 0x86;
  local_c = 0x87;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104ddf90);
  _atexit((_func_4879 *)&LAB_10317f50);
  return;
}


// 0x10049be0  (ghidra: FUN_10049be0)  [range]
void functions_D2ClientFunctions_init_10049be0(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de124);
  local_c = 0x220;
  local_1c = 0x9c;
  uStack_18 = 0xd3;
  uStack_14 = 0xf2;
  uStack_10 = 0xf3;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104de124);
  _atexit((_func_4879 *)&LAB_10317f60);
  return;
}


// 0x10049c40  (ghidra: FUN_10049c40)  [range]
void functions_D2ClientFunctions_init_10049c40(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104ddf30);
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
  sub_1020f900(&DAT_104ddf30);
  _atexit((_func_4879 *)&LAB_10317f70);
  return;
}


// 0x10049cd0  (ghidra: FUN_10049cd0)  [range]
void functions_D2ClientFunctions_init_10049cd0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de020);
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
  sub_1020f900(&DAT_104de020);
  _atexit((_func_4879 *)&LAB_10317f80);
  return;
}


// 0x10049d90  (ghidra: FUN_10049d90)  [range]
void functions_D2ClientFunctions_init_10049d90(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104ddfd0);
  local_20 = 0x315;
  local_c = 0x458;
  local_1c = 0x3a5;
  uStack_18 = 0x3a6;
  uStack_14 = 0x3a7;
  uStack_10 = 0x3a8;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104ddfd0);
  _atexit((_func_4879 *)&LAB_10317f90);
  return;
}


// 0x10049e00  (ghidra: FUN_10049e00)  [range]
void functions_D2ClientFunctions_init_10049e00(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104ddfa0);
  local_10 = 0x2d9;
  local_c = 0x2da;
  local_20 = 0x2d5;
  uStack_1c = 0x2d6;
  uStack_18 = 0x2d7;
  uStack_14 = 0x2d8;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104ddfa0);
  _atexit((_func_4879 *)&LAB_10317fa0);
  return;
}


// 0x10049e70  (ghidra: FUN_10049e70)  [range]
void functions_D2ClientFunctions_init_10049e70(void)

{
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104ddf58);
  local_14 = 0x2c8;
  sub_1020f550(local_10,&local_14,local_10);
  sub_1020f900(&DAT_104ddf58);
  _atexit((_func_4879 *)&LAB_10317fb0);
  return;
}


// 0x10049ec0  (ghidra: FUN_10049ec0)  [range]
void functions_D2ClientFunctions_init_10049ec0(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104de0b8);
  local_18 = 0x2db;
  local_14 = 0x2dc;
  sub_1020f550(local_10,&local_18,local_10);
  sub_1020f900(&DAT_104de0b8);
  _atexit((_func_4879 *)&LAB_10317fc0);
  return;
}


// 0x10049f20  (ghidra: FUN_10049f20)  [range]
void functions_D2ClientFunctions_init_10049f20(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de0e8);
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
  sub_1020f880(&DAT_104de0e8);
  _atexit((_func_4879 *)&LAB_10317fd0);
  return;
}


// 0x10049fb0  (ghidra: FUN_10049fb0)  [range]
void functions_D2ClientFunctions_init_10049fb0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de0dc);
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
  sub_1020f880(&DAT_104de0dc);
  _atexit((_func_4879 *)&LAB_10317fe0);
  return;
}


// 0x1004a0b0  (ghidra: FUN_1004a0b0)  [range]
void functions_D2ClientFunctions_init_1004a0b0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de0c0);
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
  sub_1020f900(&DAT_104de0c0);
  _atexit((_func_4879 *)&LAB_10317ff0);
  return;
}


// 0x1004a130  (ghidra: FUN_1004a130)  [range]
void functions_D2ClientFunctions_init_1004a130(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de0a4);
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
  sub_1020f900(&DAT_104de0a4);
  _atexit((_func_4879 *)&LAB_10318000);
  return;
}


// 0x1004a1c0  (ghidra: FUN_1004a1c0)  [range]
void functions_D2ClientFunctions_init_1004a1c0(void)

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
  sub_1020f420((uint64_t *)&DAT_104de0ac);
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
  sub_1020f7f0((uint32_t *)&DAT_104de0ac);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_100,0xc,9,thunk_FUN_1020fb40);
  _atexit((_func_4879 *)&LAB_10318010);
  ExceptionList = local_10;
  return;
}


// 0x1004a780  (ghidra: FUN_1004a780)  [range]
void functions_D2ClientFunctions_init_1004a780(void)

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
  sub_1020f420((uint64_t *)&DAT_104ddfb8);
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
  sub_1020f840((uint32_t *)&DAT_104ddfb8);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_304,8,0x26,thunk_FUN_1020f8e0);
  _atexit((_func_4879 *)&DAT_10318020);
  ExceptionList = local_10;
  return;
}


// 0x1004b150  (ghidra: FUN_1004b150)  [range]
void functions_D2ClientFunctions_init_1004b150(void)

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
  sub_1020f420((uint64_t *)&DAT_104ddf4c);
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
  sub_1020f7f0((uint32_t *)&DAT_104ddf4c);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_4ec,0xc,0x26,thunk_FUN_1020fb40);
  _atexit((_func_4879 *)&LAB_10318030);
  ExceptionList = local_10;
  return;
}


// 0x1004bb50  (ghidra: FUN_1004bb50)  [range]
void functions_D2ClientFunctions_init_1004bb50(void)

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
  sub_1020f420((uint64_t *)&DAT_104ddff0);
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
  sub_1020f730((uint32_t *)&DAT_104ddff0);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_3a8,0x18,0x26,thunk_FUN_1020fc60);
  _atexit((_func_4879 *)&LAB_10318040);
  ExceptionList = local_10;
  return;
}


// 0x1004bed0  (ghidra: FUN_1004bed0)  [range]
void functions_D2ClientFunctions_init_1004bed0(void)

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
  sub_1020f410((uint64_t *)&DAT_104ddf98);
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
  sub_1020f6a0(&DAT_104ddf98);
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
  _atexit((_func_4879 *)&LAB_10318050);
  ExceptionList = local_10;
  return;
}


// 0x1004c400  (ghidra: FUN_1004c400)  [range]
void functions_D2ClientFunctions_init_1004c400(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de10c);
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
  sub_10210100(&DAT_10367d94,&local_6c);
  local_68 = 0x10;
  sub_10210100(&DAT_10367d8c,&local_68);
  local_64 = 0x13;
  sub_10210100(&DAT_10367d90,&local_64);
  sub_1020f550(local_10,local_60,local_10);
  sub_1020f640(&DAT_104de10c);
  _atexit((_func_4879 *)&LAB_10318060);
  return;
}


// 0x1004c5b0  (ghidra: FUN_1004c5b0)  [range]
void functions_D2ClientFunctions_init_1004c5b0(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104ddf40);
  local_18 = 0x41503033;
  local_14 = 0x32484754;
  local_10 = 0x57375258;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104ddf40);
  _atexit((_func_4879 *)&LAB_10318070);
  return;
}


// 0x1004c610  (ghidra: FUN_1004c610)  [range]
void functions_D2ClientFunctions_init_1004c610(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104ddfd8);
  local_18 = 0x554f4e36;
  local_14 = 0x56383149;
  local_10 = 0x4a4d5942;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104ddfd8);
  _atexit((_func_4879 *)&LAB_10318080);
  return;
}


// 0x1004c670  (ghidra: FUN_1004c670)  [range]
void functions_D2ClientFunctions_init_1004c670(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104ddf7c);
  local_18 = 0x44513534;
  local_14 = 0x455a4b4c;
  local_10 = 0x46433953;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104ddf7c);
  _atexit((_func_4879 *)&LAB_10318090);
  return;
}


// 0x1004c6d0  (ghidra: FUN_1004c6d0)  [range]
void functions_D2ClientFunctions_init_1004c6d0(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104de030);
  local_18 = 0x35333130;
  local_14 = 0x4b4c4941;
  local_10 = 0x5553514f;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104de030);
  _atexit((_func_4879 *)&LAB_103180a0);
  return;
}


// 0x1004c730  (ghidra: FUN_1004c730)  [range]
void functions_D2ClientFunctions_init_1004c730(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104ddf20);
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
  sub_1020f570(&DAT_104ddf20);
  _atexit((_func_4879 *)&LAB_103180b0);
  return;
}


// 0x1004e4e0  (ghidra: FUN_1004e4e0)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbba608_1004e4e0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbba608();
  p_D2Client_DAT_6fbba608 = *puVar1;
  return;
}


// 0x1004ebc0  (ghidra: FUN_1004ebc0)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbbb228_1004ebc0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbbb228();
  p_D2Client_DAT_6fbbb228 = *puVar1;
  return;
}


// 0x1004ebd0  (ghidra: FUN_1004ebd0)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbbb210_1004ebd0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbbb210();
  p_D2Client_DAT_6fbbb210 = *puVar1;
  return;
}


// 0x1004ebe0  (ghidra: FUN_1004ebe0)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbbb214_1004ebe0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbbb214();
  p_D2Client_DAT_6fbbb214 = *puVar1;
  return;
}


// 0x1004ebf0  (ghidra: FUN_1004ebf0)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbbb21c_1004ebf0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbbb21c();
  p_D2Client_DAT_6fbbb21c = *puVar1;
  return;
}


// 0x1004f120  (ghidra: FUN_1004f120)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fb8bc48_1004f120(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fb8bc48();
  p_D2Client_DAT_6fb8bc48 = *puVar1;
  return;
}


// 0x1004f1d0  (ghidra: FUN_1004f1d0)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcb828_1004f1d0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcb828();
  p_D2Client_DAT_6fbcb828 = *puVar1;
  return;
}


// 0x1004f1e0  (ghidra: FUN_1004f1e0)  [range]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcb824_1004f1e0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcb824();
  p_D2Client_DAT_6fbcb824 = *puVar1;
  return;
}


// 0x1004f6c0  (ghidra: FUN_1004f6c0)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbc971d_10296c60_1004f6c0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbc971d_10296c60();
  p_D2Client_DAT_6fbc971d_10296c60 = *puVar1;
  return;
}


// 0x1004f870  (ghidra: FUN_1004f870)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcbbfc_1004f870(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcbbfc();
  p_D2Client_DAT_6fbcbbfc = *puVar1;
  return;
}


// 0x1004f880  (ghidra: FUN_1004f880)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcbc38_1004f880(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcbc38();
  p_D2Client_DAT_6fbcbc38 = *puVar1;
  return;
}


// 0x10050320  (ghidra: FUN_10050320)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc434_10050320(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc434();
  p_D2Client_DAT_6fbcc434 = *puVar1;
  return;
}


// 0x10050330  (ghidra: FUN_10050330)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc058_10050330(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc058();
  p_D2Client_DAT_6fbcc058 = *puVar1;
  return;
}


// 0x10050340  (ghidra: FUN_10050340)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc05c_10050340(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc05c();
  p_D2Client_DAT_6fbcc05c = *puVar1;
  return;
}


// 0x10050350  (ghidra: FUN_10050350)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc060_10050350(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc060();
  p_D2Client_DAT_6fbcc060 = *puVar1;
  return;
}


// 0x100505f0  (ghidra: FUN_100505f0)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fba46c4_100505f0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fba46c4();
  p_D2Client_DAT_6fba46c4 = *puVar1;
  return;
}


// 0x10050600  (ghidra: FUN_10050600)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fba46c8_10050600(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fba46c8();
  p_D2Client_DAT_6fba46c8 = *puVar1;
  return;
}


// 0x100506c0  (ghidra: FUN_100506c0)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc2f4_100506c0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc2f4();
  p_D2Client_DAT_6fbcc2f4 = *puVar1;
  return;
}


// 0x100506d0  (ghidra: FUN_100506d0)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc2f8_100506d0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc2f8();
  p_D2Client_DAT_6fbcc2f8 = *puVar1;
  return;
}


// 0x100506e0  (ghidra: FUN_100506e0)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc068_100506e0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc068();
  p_D2Client_DAT_6fbcc068 = *puVar1;
  return;
}


// 0x100506f0  (ghidra: FUN_100506f0)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc06c_100506f0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc06c();
  p_D2Client_DAT_6fbcc06c = *puVar1;
  return;
}


// 0x10050700  (ghidra: FUN_10050700)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc3dc_10050700(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc3dc();
  p_D2Client_DAT_6fbcc3dc = *puVar1;
  return;
}


// 0x10050710  (ghidra: FUN_10050710)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc3de_10050710(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc3de();
  p_D2Client_DAT_6fbcc3de = *puVar1;
  return;
}


// 0x10050720  (ghidra: FUN_10050720)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc3f8_10050720(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc3f8();
  p_D2Client_DAT_6fbcc3f8 = *puVar1;
  return;
}


// 0x10050730  (ghidra: FUN_10050730)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc3fc_10050730(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc3fc();
  p_D2Client_DAT_6fbcc3fc = *puVar1;
  return;
}


// 0x10050760  (ghidra: FUN_10050760)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc3a4_10050760(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc3a4();
  p_D2Client_DAT_6fbcc3a4 = *puVar1;
  return;
}


// 0x100507a0  (ghidra: FUN_100507a0)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc538_100507a0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc538();
  p_D2Client_DAT_6fbcc538 = *puVar1;
  return;
}


// 0x10050910  (ghidra: FUN_10050910)  [range]
void functions_D2ClientFunctions_InitPtr_D2Client_DAT_6fbcc414_10050910(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc414();
  p_D2Client_DAT_6fbcc414 = *puVar1;
  return;
}


// 0x1022da20  (ghidra: FUN_1022da20)  [range]
void functions_D2ClientFunctions_1022da20(int param_1)

{
  if (*p_D2Client_DAT_6fbcc3a4 != 0) {
    *(uint32_t *)(param_1 + 0x18) = 0;
    return;
  }
  DAT_103d987c = 1;
  sub_1022a570((uint)*(ushort *)(param_1 + 0xc),(uint)*(ushort *)(param_1 + 0xe));
  *(uint32_t *)(param_1 + 0x18) = 1;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  Storm_511_102a1770(param_1);
  return;
}


// 0x1022da70  (ghidra: FUN_1022da70)  [range]
void functions_D2ClientFunctions_1022da70(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  if (*p_D2Client_DAT_6fbcc3a4 != 0) {
    *(uint32_t *)(param_1 + 0x18) = 0;
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0xc);
  uVar2 = *(ushort *)(param_1 + 0xe);
  sub_1022a9e0((uint)uVar2,(uint)uVar1);
  DAT_103d987c = 0;
  sub_1022a570((uint)uVar1,(uint)uVar2);
  *(uint32_t *)(param_1 + 0x18) = 1;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  Storm_511_102a1770(param_1);
  return;
}


// 0x1022dad0  (ghidra: FUN_1022dad0)  [range]
void functions_D2ClientFunctions_1022dad0(int param_1)

{
  int iVar1;
  
  iVar1 = *p_D2Client_DAT_6fbcc538;
  if (*p_D2Client_DAT_6fbcc3a4 == 0) {
    do {
      sub_6fac17c0(1);
    } while (*(int *)(&DAT_10399ab0 + *p_D2Client_DAT_6fbcc538 * 10) == 0x6c);
    if (iVar1 != *p_D2Client_DAT_6fbcc538) {
      client_Sound_Sound_10233980(1,0,0,0,0);
    }
    *(uint32_t *)(param_1 + 0x18) = 1;
    *(uint32_t *)(param_1 + 0x1c) = 0;
    Storm_511_102a1770(param_1);
    return;
  }
  *(uint32_t *)(param_1 + 0x18) = 0;
  return;
}


// 0x1022db50  (ghidra: FUN_1022db50)  [range]
void functions_D2ClientFunctions_1022db50(int param_1)

{
  int iVar1;
  
  iVar1 = *p_D2Client_DAT_6fbcc538;
  if (*p_D2Client_DAT_6fbcc3a4 == 0) {
    do {
      sub_6fac17c0(-1);
    } while (*(int *)(&DAT_10399ab0 + *p_D2Client_DAT_6fbcc538 * 10) == 0x6c);
    if (iVar1 != *p_D2Client_DAT_6fbcc538) {
      client_Sound_Sound_10233980(1,0,0,0,0);
    }
    *(uint32_t *)(param_1 + 0x18) = 1;
    *(uint32_t *)(param_1 + 0x1c) = 0;
    Storm_511_102a1770(param_1);
    return;
  }
  *(uint32_t *)(param_1 + 0x18) = 0;
  return;
}


// 0x1022dbc0  (ghidra: FUN_1022dbc0)  [range]
void functions_D2ClientFunctions_1022dbc0(int param_1)

{
  if (*p_D2Client_DAT_6fbcc3a4 != 0) {
    *(uint32_t *)(param_1 + 0x18) = 0;
    return;
  }
  if (DAT_103d98a4 == 0) {
    DAT_103d98a4 = 1;
    client_Sound_Sound_10233980(1,0,0,0,0);
  }
  *(uint32_t *)(param_1 + 0x18) = 1;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  Storm_511_102a1770(param_1);
  return;
}


// 0x1022dc20  (ghidra: FUN_1022dc20)  [range]
void functions_D2ClientFunctions_1022dc20(int param_1)

{
  if (*p_D2Client_DAT_6fbcc3a4 != 0) {
    *(uint32_t *)(param_1 + 0x18) = 0;
    return;
  }
  if (DAT_103d98a4 == 1) {
    DAT_103d98a4 = 0;
    client_Sound_Sound_10233980(1,0,0,0,0);
  }
  *(uint32_t *)(param_1 + 0x18) = 1;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  Storm_511_102a1770(param_1);
  return;
}


// 0x1022dc80  (ghidra: FUN_1022dc80)  [range]
void functions_D2ClientFunctions_1022dc80(int param_1)

{
  if (*p_D2Client_DAT_6fbcc3a4 != 0) {
    *(uint32_t *)(param_1 + 0x18) = 0;
    return;
  }
  if (DAT_103984d8 == 0) {
    DAT_103984d8 = 1;
  }
  else if (((*(uint *)(param_1 + 0xc) & 0x40000000) == 0) &&
          (*(int *)(&DAT_10399ab0 + *p_D2Client_DAT_6fbcc538 * 10) != 0x6c)) {
    sub_6fac2eb0();
    client_Sound_Sound_10233980(2,0,0,0,0);
    DAT_103984d8 = 0;
  }
  *(uint32_t *)(param_1 + 0x18) = 1;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  Storm_511_102a1770(param_1);
  return;
}


// 0x1022dd10  (ghidra: FUN_1022dd10)  [range]
void functions_D2ClientFunctions_1022dd10(int param_1)

{
  if (*p_D2Client_DAT_6fbcc3a4 != 0) {
    *(uint32_t *)(param_1 + 0x18) = 0;
    return;
  }
  if (DAT_103984d8 == 0) {
    DAT_103984d8 = 1;
  }
  else if ((*(uint *)(param_1 + 0xc) & 0x40000000) == 0) {
    sub_102282e0(*(int *)(&DAT_10399ab0 + *p_D2Client_DAT_6fbcc538 * 10));
    client_Sound_Sound_10233980(2,0,0,0,0);
  }
  *(uint32_t *)(param_1 + 0x18) = 1;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  Storm_511_102a1770(param_1);
  return;
}


// 0x1022dd90  (ghidra: FUN_1022dd90)  [range]
void functions_D2ClientFunctions_1022dd90(int param_1)

{
  if (*p_D2Client_DAT_6fbcc3a4 != 0) {
    *(uint32_t *)(param_1 + 0x18) = 0;
    return;
  }
  if (DAT_103984d8 == 0) {
    DAT_103984d8 = 1;
  }
  else if ((*(uint *)(param_1 + 0xc) & 0x40000000) == 0) {
    sub_10229590();
    client_Sound_Sound_10233980(1,0,0,0,0);
  }
  *(uint32_t *)(param_1 + 0x18) = 1;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  Storm_511_102a1770(param_1);
  return;
}


// 0x1022de00  (ghidra: FUN_1022de00)  [range]
void functions_D2ClientFunctions_1022de00(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  if (*p_D2Client_DAT_6fbcc3a4 != 0) {
    *(uint32_t *)(param_1 + 0x18) = 0;
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0xc);
  uVar2 = *(ushort *)(param_1 + 0xe);
  sub_6fac14f0(1);
  DAT_103d987c = 1;
  sub_1022a570((uint)uVar1,(uint)uVar2);
  *(uint32_t *)(param_1 + 0x18) = 1;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  Storm_511_102a1770(param_1);
  return;
}


// 0x1022de60  (ghidra: FUN_1022de60)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void functions_D2ClientFunctions_1022de60(int param_1)

{
  short sVar1;
  int iVar2;
  int local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_c = 0;
  sVar1 = *(short *)(param_1 + 8);
  if (*p_D2Client_DAT_6fbcc3a4 != 0) {
    *(uint32_t *)(param_1 + 0x18) = 0;
    return;
  }
  if ((*(uint *)(param_1 + 0xc) & 0x40000000) != 0) goto LAB_1022df4a;
  if (sVar1 == 0x1b) {
    sub_6fac14f0(1);
    client_Sound_Sound_10233980(1,0,0,0,0);
    DAT_103984d8 = 0;
    goto LAB_1022df4a;
  }
  iVar2 = sub_1022a3d0(&local_c,*(int *)(&DAT_10399ab0 + *p_D2Client_DAT_6fbcc538 * 10),DAT_103d98a4,sVar1);
  if (iVar2 == 0) {
LAB_1022df29:
    DAT_103984d8 = 1;
  }
  else {
    sub_6fac14f0(1);
    client_Sound_Sound_10233980(2,0,0,0,0);
    if ((((sVar1 != 0xd) && (sVar1 != 0x2e)) && (sVar1 != 8)) && (sVar1 != 0x20)) goto LAB_1022df29;
    DAT_103984d8 = 0;
  }
  if (local_c != 0) {
    DAT_103d98a8 = local_c;
    DAT_103d98a0 = GetTickCount();
  }
LAB_1022df4a:
  *(uint32_t *)(param_1 + 0x18) = 1;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  Storm_511_102a1770(param_1);
  return;
}


// 0x1022df70  (ghidra: FUN_1022df70)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void functions_D2ClientFunctions_1022df70(int param_1)

{
  int iVar1;
  int local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_c = 0;
  if (*p_D2Client_DAT_6fbcc3a4 != 0) {
    *(uint32_t *)(param_1 + 0x18) = 0;
    return;
  }
  if (DAT_103984d8 == 0) {
    DAT_103984d8 = 1;
  }
  else {
    iVar1 = sub_1022a3d0(&local_c,*(int *)(&DAT_10399ab0 + *p_D2Client_DAT_6fbcc538 * 10),DAT_103d98a4,
                         *(short *)(param_1 + 8));
    if (iVar1 != 0) {
      sub_6fac14f0(1);
      client_Sound_Sound_10233980(2,0,0,0,0);
    }
    if (local_c != 0) {
      DAT_103d98a8 = local_c;
      DAT_103d98a0 = GetTickCount();
    }
  }
  *(uint32_t *)(param_1 + 0x18) = 1;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  Storm_511_102a1770(param_1);
  return;
}


// 0x1022e040  (ghidra: FUN_1022e040)  [range]
void functions_D2ClientFunctions_1022e040(int param_1)

{
  if (*p_D2Client_DAT_6fbcc3a4 != 0) {
    *(uint32_t *)(param_1 + 0x18) = 0;
    return;
  }
  sub_10228f50(0x100);
  *(uint32_t *)(param_1 + 0x18) = 1;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  Storm_511_102a1770(param_1);
  return;
}


// 0x1022e080  (ghidra: FUN_1022e080)  [range]
void functions_D2ClientFunctions_1022e080(int param_1)

{
  short sVar1;
  
  if (*p_D2Client_DAT_6fbcc3a4 != 0) {
    *(uint32_t *)(param_1 + 0x18) = 0;
    return;
  }
  if (*(short *)(param_1 + 10) == 1) {
    sVar1 = 0x101;
  }
  else {
    if (*(short *)(param_1 + 10) != 2) goto LAB_1022e0c0;
    sVar1 = 0x102;
  }
  sub_10228f50(sVar1);
LAB_1022e0c0:
  *(uint32_t *)(param_1 + 0x18) = 1;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  Storm_511_102a1770(param_1);
  return;
}


// 0x1022e0e0  (ghidra: FUN_1022e0e0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void functions_D2ClientFunctions_1022e0e0(int param_1)

{
  int iVar1;
  int local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_c = 0;
  if (*p_D2Client_DAT_6fbcc3a4 != 0) {
    *(uint32_t *)(param_1 + 0x18) = 0;
    return;
  }
  iVar1 = (int)*(short *)(param_1 + 10) / 0x78;
  if (iVar1 != 0) {
    iVar1 = sub_1022a3d0(&local_c,*(int *)(&DAT_10399ab0 + *p_D2Client_DAT_6fbcc538 * 10),DAT_103d98a4,
                         0x103 - (short)(iVar1 >> 0x1f));
    if (iVar1 == 0) {
      if (local_c != 0) {
        DAT_103d98a8 = local_c;
        DAT_103d98a0 = GetTickCount();
      }
    }
    else {
      sub_6fac14f0(1);
    }
  }
  *(uint32_t *)(param_1 + 0x18) = 1;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  Storm_511_102a1770(param_1);
  return;
}


// 0x1022e1b0  (ghidra: FUN_1022e1b0)  [range]
void functions_D2ClientFunctions_1022e1b0(int param_1)

{
  SHORT SVar1;
  uint *puVar2;
  int iVar3;
  
  if ((*(uint *)(param_1 + 0xc) & 0x40000000) == 0) {
    iVar3 = 0;
    puVar2 = DAT_104ddd68;
    while ((((uint)(ushort)puVar2[1] != *(uint *)(param_1 + 8) || (0x6b < *puVar2)) ||
           ((&PTR_sub_6faec5b0_103995a0)[*puVar2 * 3] == (uint8_t *)0x0))) {
      iVar3 = iVar3 + 1;
      puVar2 = (uint *)((int)puVar2 + 10);
      if (0xd7 < iVar3) {
        return;
      }
    }
    if (((iVar3 != -1) &&
        ((*(short *)((int)DAT_104ddd68 + iVar3 * 10 + 4) != 0x73 ||
         (SVar1 = GetKeyState(0x12), -1 < SVar1)))) &&
       ((*p_D2Client_DAT_6fbcc434 != 2 ||
        (*(int *)(&DAT_103995a8 + *(int *)((int)DAT_104ddd68 + iVar3 * 10) * 0xc) != 0)))) {
      IsBadCodePtr((FARPROC)(&PTR_sub_6faec5b0_103995a0)
                            [*(int *)((int)DAT_104ddd68 + iVar3 * 10) * 3]);
      (*(code *)(&PTR_sub_6faec5b0_103995a0)[*(int *)((int)DAT_104ddd68 + iVar3 * 10) * 3])();
      *(uint32_t *)(param_1 + 0x18) = 1;
      *(uint32_t *)(param_1 + 0x1c) = 0;
      Storm_511_102a1770(param_1);
    }
  }
  return;
}


// 0x1022e290  (ghidra: FUN_1022e290)  [range]
void functions_D2ClientFunctions_1022e290(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = DAT_104ddd68;
  while ((((uint)(ushort)puVar1[1] != *(uint *)(param_1 + 8) || (0x6b < *puVar1)) ||
         (*(int *)(&DAT_103995a4 + *puVar1 * 0xc) == 0))) {
    iVar2 = iVar2 + 1;
    puVar1 = (uint *)((int)puVar1 + 10);
    if (0xd7 < iVar2) {
      return;
    }
  }
  if ((iVar2 != -1) &&
     ((*p_D2Client_DAT_6fbcc434 != 2 ||
      (*(int *)(&DAT_103995a8 + *(int *)((int)DAT_104ddd68 + iVar2 * 10) * 0xc) != 0)))) {
    IsBadCodePtr(*(FARPROC *)(&DAT_103995a4 + *(int *)((int)DAT_104ddd68 + iVar2 * 10) * 0xc));
    (**(code **)(&DAT_103995a4 + *(int *)((int)DAT_104ddd68 + iVar2 * 10) * 0xc))();
    *(uint32_t *)(param_1 + 0x18) = 1;
    *(uint32_t *)(param_1 + 0x1c) = 0;
    Storm_511_102a1770(param_1);
  }
  return;
}


// 0x1022e340  (ghidra: FUN_1022e340)  [range]
void functions_D2ClientFunctions_1022e340(int param_1)

{
  bool bVar1;
  ushort uVar2;
  uint32_t extraout_var;
  uint uVar3;
  uint32_t extraout_var_00;
  
  bVar1 = sub_102282a0(7,1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    uVar2 = sub_10228270(7,1);
    uVar3 = (uint)uVar2;
    if (((uVar3 != 0xffff) && (uVar3 < 0xe0)) && (uVar3 == *(uint *)(param_1 + 8))) {
      return;
    }
  }
  bVar1 = sub_102282a0(7,0);
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    uVar2 = sub_10228270(7,0);
    uVar3 = (uint)uVar2;
    if (((uVar3 != 0xffff) && (uVar3 < 0xe0)) && (uVar3 == *(uint *)(param_1 + 8))) {
      return;
    }
  }
  sub_6fb2e840(param_1);
  return;
}


// 0x1022e3b0  (ghidra: FUN_1022e3b0)  [range]
void functions_D2ClientFunctions_1022e3b0(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  int *extraout_ECX;
  int *this;
  
  uVar1 = *(ushort *)(param_1 + 0xe);
  uVar2 = *(ushort *)(param_1 + 0xc);
  iVar4 = sub_102f0190();
  piVar3 = p_D2Client_DAT_6fbcc058;
  this = extraout_ECX;
  if (iVar4 != -1) {
    *p_D2Client_DAT_6fbcc058 = iVar4;
    this = piVar3;
  }
  sub_102f01a0(this,(uint)uVar1,(uint)uVar2);
  *p_D2Client_DAT_6fbcc068 = 1;
  *(uint32_t *)(param_1 + 0x18) = 1;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  Storm_511_102a1770(param_1);
  return;
}


// 0x1022e410  (ghidra: FUN_1022e410)  [range]
void functions_D2ClientFunctions_1022e410(int param_1)

{
  int iVar1;
  
  if (*p_D2Client_DAT_6fbcc068 != 0) {
    iVar1 = sub_102f0190();
    if (iVar1 == *p_D2Client_DAT_6fbcc058) {
      sub_102f01c0();
    }
  }
  *p_D2Client_DAT_6fba46c8 = 0x10;
  *p_D2Client_DAT_6fba46c4 = 0x10;
  *p_D2Client_DAT_6fbcc3dc = 0;
  *p_D2Client_DAT_6fbcc3de = 0;
  *p_D2Client_DAT_6fbcc3f8 = 0;
  *p_D2Client_DAT_6fbcc3fc = 0;
  *p_D2Client_DAT_6fbcc2f8 = 0;
  *p_D2Client_DAT_6fbcc2f4 = 0;
  *p_D2Client_DAT_6fbcc068 = 0;
  *p_D2Client_DAT_6fbcc06c = 0;
  *(uint32_t *)(param_1 + 0x18) = 1;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  Storm_511_102a1770(param_1);
  return;
}


// 0x1022e4d0  (ghidra: FUN_1022e4d0)  [range]
void functions_D2ClientFunctions_1022e4d0(int param_1)

{
  code *pcVar1;
  int *piVar2;
  uint32_t *puVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = p_D2Client_DAT_6fbcc058;
  do {
    puVar3 = p_D2Client_DAT_6fbcc05c;
    *piVar2 = *piVar2 + 1;
    if (*(int *)*puVar3 + -1 < *piVar2) {
      *piVar2 = 0;
    }
    piVar5 = (int *)(*piVar2 * 0x550 + *p_D2Client_DAT_6fbcc060);
  } while ((*piVar5 == -1) ||
          ((pcVar1 = (code *)piVar5[0x44], pcVar1 != (code *)0x0 &&
           (iVar4 = (*pcVar1)(), piVar2 = p_D2Client_DAT_6fbcc058, iVar4 == 0))));
  client_Sound_Sound_10233980(1,0,0,0,0);
  *(uint32_t *)(param_1 + 0x18) = 1;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  Storm_511_102a1770(param_1);
  return;
}


// 0x1022e550  (ghidra: FUN_1022e550)  [range]
void functions_D2ClientFunctions_1022e550(int param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = p_D2Client_DAT_6fbcc058;
  do {
    *piVar2 = *piVar2 + -1;
    if (*piVar2 < 0) {
      *piVar2 = *(int *)*p_D2Client_DAT_6fbcc05c + -1;
    }
    piVar4 = (int *)(*piVar2 * 0x550 + *p_D2Client_DAT_6fbcc060);
  } while ((*piVar4 == -1) ||
          ((pcVar1 = (code *)piVar4[0x44], pcVar1 != (code *)0x0 &&
           (iVar3 = (*pcVar1)(), piVar2 = p_D2Client_DAT_6fbcc058, iVar3 == 0))));
  client_Sound_Sound_10233980(1,0,0,0,0);
  *(uint32_t *)(param_1 + 0x18) = 1;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  Storm_511_102a1770(param_1);
  return;
}


// 0x1022e5c0  (ghidra: FUN_1022e5c0)  [range]
void __thiscall functions_D2ClientFunctions_1022e5c0(void *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  iVar5 = *p_D2Client_DAT_6fbcc058;
  iVar1 = *(int *)(iVar5 * 0x550 + 0x124 + *p_D2Client_DAT_6fbcc060);
  pcVar2 = *(code **)(iVar5 * 0x550 + 0x110 + *p_D2Client_DAT_6fbcc060);
  if (pcVar2 != (code *)0x0) {
    iVar3 = (*pcVar2)();
    iVar5 = *p_D2Client_DAT_6fbcc058;
    piVar7 = p_D2Client_DAT_6fbcc060;
    if (iVar3 == 0) goto LAB_1022e655;
  }
  piVar7 = p_D2Client_DAT_6fbcc060;
  piVar6 = (int *)(iVar5 * 0x550 + *p_D2Client_DAT_6fbcc060);
  if (*piVar6 == 1) {
    iVar3 = piVar6[0x49];
    uVar4 = piVar6[0x48] - 1;
    piVar6[0x49] = iVar3 - 1U;
    if (iVar3 - 1U <= uVar4) goto LAB_1022e655;
  }
  else {
    if (*piVar6 != 2) goto LAB_1022e655;
    this = (void *)0x0;
    uVar4 = piVar6[0x49] - 1U;
    if (piVar6[0x48] - 1U < piVar6[0x49] - 1U) {
      uVar4 = 0;
    }
  }
  piVar6[0x49] = uVar4;
LAB_1022e655:
  iVar5 = iVar5 * 0x550 + *piVar7;
  if (iVar1 != *(int *)(iVar5 + 0x124)) {
    pcVar2 = *(code **)(iVar5 + 0x114);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(this);
    }
    client_Sound_Sound_10233980(1,0,0,0,0);
  }
  *(uint32_t *)(param_1 + 0x18) = 1;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  Storm_511_102a1770(param_1);
  return;
}


// 0x1022e6b0  (ghidra: FUN_1022e6b0)  [range]
void functions_D2ClientFunctions_1022e6b0(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  iVar5 = *p_D2Client_DAT_6fbcc058;
  iVar1 = *(int *)(iVar5 * 0x550 + 0x124 + *p_D2Client_DAT_6fbcc060);
  pcVar2 = *(code **)(iVar5 * 0x550 + 0x110 + *p_D2Client_DAT_6fbcc060);
  if (pcVar2 != (code *)0x0) {
    iVar3 = (*pcVar2)();
    iVar5 = *p_D2Client_DAT_6fbcc058;
    piVar7 = p_D2Client_DAT_6fbcc060;
    if (iVar3 == 0) goto LAB_1022e746;
  }
  piVar7 = p_D2Client_DAT_6fbcc060;
  piVar6 = (int *)(iVar5 * 0x550 + *p_D2Client_DAT_6fbcc060);
  if (*piVar6 == 1) {
    iVar3 = piVar6[0x49];
    piVar6[0x49] = iVar3 + 1U;
    if (piVar6[0x48] - 1U < iVar3 + 1U) {
      piVar6[0x49] = 0;
    }
  }
  else if (*piVar6 == 2) {
    uVar4 = piVar6[0x49] + 1U;
    if (piVar6[0x48] - 1U < piVar6[0x49] + 1U) {
      uVar4 = piVar6[0x48] - 1U;
    }
    piVar6[0x49] = uVar4;
  }
LAB_1022e746:
  iVar5 = iVar5 * 0x550 + *piVar7;
  if (iVar1 != *(int *)(iVar5 + 0x124)) {
    pcVar2 = *(code **)(iVar5 + 0x114);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    client_Sound_Sound_10233980(1,0,0,0,0);
  }
  *(uint32_t *)(param_1 + 0x18) = 1;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  Storm_511_102a1770(param_1);
  return;
}


// 0x1022e790  (ghidra: FUN_1022e790)  [range]
void functions_D2ClientFunctions_1022e790(int param_1)

{
  sub_102f01c0();
  *(uint32_t *)(param_1 + 0x18) = 1;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  Storm_511_102a1770(param_1);
  return;
}


// 0x1022e7c0  (ghidra: FUN_1022e7c0)  [range]
void functions_D2ClientFunctions_1022e7c0(int param_1)

{
  if ((DAT_1039816c == 0) || ((uint8_t *)*p_D2Client_DAT_6fbcc060 == &DAT_103a7018)) {
    (**(code **)(DAT_103d98e4 * 0x550 + 0x114 + *p_D2Client_DAT_6fbcc060))();
  }
  DAT_1039816c = 0;
  *(uint32_t *)(param_1 + 0x18) = 1;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  Storm_511_102a1770(param_1);
  return;
}


// 0x1022e820  (ghidra: FUN_1022e820)  [range]
uint8_t __fastcall functions_D2ClientFunctions_1022e820(int param_1)

{
  int *piVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint8_t uVar6;
  uint64_t uVar7;
  uint8_t local_28;
  int local_27;
  uint32_t local_23;
  uint32_t local_1f;
  uint local_18;
  uint8_t uStack_14;
  int local_10;
  int local_c;
  uint32_t local_8;
  
  uVar6 = 0;
  local_18 = *p_D2Client_DAT_6fbcb828;
  local_10 = *p_D2Client_DAT_6fbcbbfc;
  local_8 = (uint)*(ushort *)(param_1 + 8);
  if (DAT_103c39cc != -1) {
    DAT_103e7644 = 0;
    DAT_103c39cc = -1;
  }
  DAT_103e7778 = 0;
  if ((DAT_103e764c == 0) || (DAT_104dbb3a != '\0')) {
    if (DAT_103e7660 != 0) {
      DAT_103e7654 = 1;
      client_Sound_Sound_10233980(1,0,0,0,0);
      return 0;
    }
    if (DAT_103e765c != 0) {
      DAT_103e7658 = 1;
      client_Sound_Sound_10233980(1,0,0,0,0);
      return 0;
    }
    if ((DAT_103e7788 != 0) && (DAT_104dbb3a == '\0')) {
      DAT_103e766c = 1;
      client_Sound_Sound_10233980(1,0,0,0,0);
      return 0;
    }
    if (DAT_103e7668 != 0) {
      DAT_103e7778 = 1;
      client_Sound_Sound_10233980(1,0,0,0,0);
      return 0;
    }
    if ((DAT_104dbf3c == 10) && (uVar7 = sub_102edf00(), (int)uVar7 != 0)) {
      local_c = 1;
    }
    else {
      local_c = 0;
    }
    piVar3 = (int *)sub_6fac6020();
    piVar1 = (int *)*p_D2Client_DAT_6fbcbc38;
    if ((DAT_103c39c8 == -1) || ((local_c != 0 && (DAT_103c39c8 != 0)))) {
      if ((DAT_103d9867 != '\0') &&
         (((((local_c == 0 || (DAT_103c39c8 == 0)) && (*p_D2Client_DAT_6fbcc414 == 1)) &&
           ((uVar7 = sub_102edf00(), (int)uVar7 == 0 && (piVar3 != (int *)0x0)))) &&
          (local_18 < *p_D2Client_DAT_6fb8bc48 >> 1)))) {
        local_18 = CONCAT31((int3)piVar3[3],0x17);
        uStack_14 = (uint8_t)((uint)piVar3[3] >> 0x18);
        sub_102ed200(&local_18);
        uVar6 = 1;
      }
    }
    else if (piVar3 == (int *)0x0) {
      if ((piVar1 != (int *)0x0) && (*piVar1 == 4)) {
        uVar7 = D2Common_10695(piVar1[1]);
        iVar4 = (int)uVar7;
        if (iVar4 != 0) {
          uVar7 = functions_D2NewFunctions_102ce500((int *)(iVar4 + 0x80),(int *)&DAT_10378138);
          if (((((int)uVar7 == 0) &&
               (uVar7 = functions_D2NewFunctions_102ce500((int *)(iVar4 + 0x80),(int *)&DAT_10378130), (int)uVar7 == 0))
              && (((byte)local_8 & 0xc) == 0xc)) &&
             ((iVar5 = functions_HelperFunctions_102d0140(piVar1), iVar5 != 0 ||
              (iVar5 = functions_HelperFunctions_102d0100(piVar1), iVar5 != 0)))) {
            local_27 = piVar1[3];
            local_23 = CONCAT22(DAT_103c39d0,DAT_103c39c4);
            local_28 = 0x22;
            local_1f._0_2_ = CONCAT11(1,(uint8_t)DAT_103c39c8);
            sub_102ed200(&local_28);
            client_Sound_Sound_10233980((uint)*(ushort *)(iVar4 + 0x124),0,0,0,0);
            return 1;
          }
          if ((((local_8 & 4) != 0) && (piVar1[5] != 0)) &&
             (((*(byte *)(piVar1[5] + 0x18) & 0x10) == 0 &&
              (((DAT_103e777c != 0 && (local_10 != 0)) &&
               (iVar4 = *(int *)(local_10 + 0x2c), iVar4 != 0)))))) {
            DAT_103e7650 = piVar1[3];
            local_27 = *(uint32_t *)(DAT_103e777c + 0xc);
            local_28 = 0x20;
            local_23 = (uint)*(ushort *)(iVar4 + 2);
            local_1f = (uint)*(ushort *)(iVar4 + 6);
            sub_102ed200(&local_28);
            return 1;
          }
        }
      }
    }
    else if ((local_8 & 8) != 0) {
      uVar7 = D2Common_10695(piVar3[1]);
      iVar4 = (int)uVar7;
      if (iVar4 != 0) {
        uVar7 = functions_D2NewFunctions_102ce500((int *)(iVar4 + 0x80),(int *)&DAT_10378138);
        if (((int)uVar7 != 0) ||
           (uVar7 = functions_D2NewFunctions_102ce500((int *)(iVar4 + 0x80),(int *)&DAT_10378130), (int)uVar7 != 0)) {
          functions_HelperFunctions_102d0100(piVar3);
          functions_HelperFunctions_102d0140(piVar3);
          D2Common_10973((int)piVar3,0x46,0);
          return 0;
        }
        local_10 = functions_HelperFunctions_102d0100(piVar3);
        local_c = functions_HelperFunctions_102d0140(piVar3);
        uVar7 = D2Common_10973((int)piVar3,0x46,0);
        if (((local_10 != 0) || ((local_c != 0 && ((local_8 & 4) != 0)))) ||
           ((1 < (int)uVar7 && (iVar5 = functions_HelperFunctions_102d00b0(piVar3), iVar5 != 0)))) {
          uVar2 = local_1f._2_2_;
          local_27 = piVar3[3];
          local_23 = CONCAT22(DAT_103c39d0,DAT_103c39c4);
          local_1f = (uint)local_1f._2_2_ << 0x10;
          local_28 = 0x22;
          local_1f = CONCAT31(local_1f._1_3_,(uint8_t)DAT_103c39c8);
          if (((local_8 & 4) != 0) && ((local_c != 0 || (local_10 != 0)))) {
            local_1f._0_2_ = CONCAT11(1,(uint8_t)DAT_103c39c8);
            local_1f = CONCAT22(uVar2,(uint16_t)local_1f);
          }
          sub_102ed200(&local_28);
          client_Sound_Sound_10233980((uint)*(ushort *)(iVar4 + 0x124),0,0,0,0);
          return 1;
        }
      }
    }
  }
  else if ((-1 < DAT_103c39c0) && ((DAT_103c39c0 < 0xb && (DAT_103c39c0 != DAT_104dbf3c)))) {
    local_8 = (uint)CONCAT11((char)DAT_103c39c0 + '\x01',0x55);
    sub_102ed200(&local_8);
    return 1;
  }
  return uVar6;
}


// 0x1022ec90  (ghidra: FUN_1022ec90)  [range]
uint8_t __fastcall functions_D2ClientFunctions_1022ec90(int param_1)

{
  ushort uVar1;
  int *piVar2;
  SHORT SVar3;
  int iVar4;
  uint uVar5;
  uint64_t uVar6;
  uint8_t local_24;
  int local_23;
  uint32_t local_1f;
  uint8_t local_18;
  int local_17;
  uint local_13;
  int local_c;
  uint8_t local_5;
  
  uVar1 = *(ushort *)(param_1 + 8);
  local_5 = 0;
  sub_102edf00();
  uVar6 = sub_102edf00();
  local_c = (int)uVar6;
  uVar6 = sub_102edf00();
  if (DAT_103c39c8 == -1) {
    return local_5;
  }
  iVar4 = sub_6fac6020();
  if (iVar4 != 0) {
    return local_5;
  }
  piVar2 = (int *)*p_D2Client_DAT_6fbcbc38;
  if (piVar2 == (int *)0x0) {
    return local_5;
  }
  if (*piVar2 != 4) {
    return local_5;
  }
  if (piVar2[5] == 0) {
    return local_5;
  }
  if ((*(uint *)(piVar2[5] + 0x18) & 0x20000000) != 0) {
    return local_5;
  }
  local_13 = D2Common_10020(piVar2);
  local_13 = local_13 & 0xff;
  if (local_13 == 0xff) {
    return 0;
  }
  local_17 = piVar2[3];
  local_18 = 0x4c;
  if (((byte)uVar1 & 0xc) == 0xc) {
    uVar5 = 3;
  }
  else if ((uVar1 & 4) == 0) {
    if ((uVar1 & 8) == 0) {
      if ((char)DAT_104e24fc == '\0') {
        return 0;
      }
      D2Common_10695(piVar2[1]);
      iVar4 = functions_HelperFunctions_102ce780(piVar2);
      uVar5 = D2Common_11006(piVar2);
      if (uVar5 == 0) {
        return 0;
      }
      if (iVar4 == 0) {
        return 0;
      }
      if (*(char *)(iVar4 + 9) == '\0') {
        return 0;
      }
      local_23 = piVar2[3];
      local_24 = 0x1a;
      local_1f = 0xaa;
      SVar3 = GetAsyncKeyState(0x12);
      if ((SVar3 != 0) || ((DAT_103d9867 != '\0' && ((uVar1 & 0x20) != 0)))) {
        local_1f = 0xbb;
      }
      sub_102ed200(&local_24);
      return 0;
    }
    uVar5 = 0xff;
  }
  else if (local_13 == 4) {
    if (local_c == 0) {
      return 0;
    }
    uVar5 = 0;
  }
  else if (local_13 == 3) {
    if ((int)uVar6 == 0) {
      return 0;
    }
    uVar5 = 0;
  }
  else {
    if (local_13 != 0) {
      return 0;
    }
    if (local_c == 0) {
      if ((int)uVar6 == 0) {
        return 0;
      }
      uVar5 = 3;
    }
    else {
      uVar5 = 4;
    }
  }
  if (local_13 == uVar5) {
    return 0;
  }
  local_13 = uVar5;
  sub_102ed200(&local_18);
  client_Sound_Sound_10233980(0xeb,0,0,0,0);
  return 1;
}


// 0x1022ee40  (ghidra: FUN_1022ee40)  [range]
uint8_t functions_D2ClientFunctions_1022ee40(void)

{
  return 0;
}


// 0x1022ee50  (ghidra: FUN_1022ee50)  [range]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t functions_D2ClientFunctions_1022ee50(uint reg_EBX)

{
  uint32_t uVar1;
  uint extraout_EAX;
  int iVar2;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  uint reg_EBX_00;
  uint8_t local_20;
  uint32_t local_1f;
  uint local_1b;
  uint32_t local_17;
  uint8_t local_10;
  uint32_t local_f;
  uint8_t local_8;
  char local_7;
  
  reg_EBX_00 = reg_EBX & 0xffffff00;
  GetTickCount64();
  uVar1 = *p_D2Client_DAT_6fbc971d_10296c60;
  iVar2 = sub_102ecd20(extraout_ECX,extraout_EDX);
  if (((extraout_EAX < DAT_103e7774) || (DAT_103e7660 == 0)) || (DAT_103e7654 != 1)) {
    if ((DAT_103e765c == 0) || (DAT_103e7658 != 1)) {
      if ((DAT_103e7788 != 0) && ((DAT_103e766c == 1 && (DAT_104dbb3a == '\0')))) {
        local_8 = 0x55;
        if (DAT_104dbf3c == 10) {
          local_7 = DAT_103e7648 + '\x01';
        }
        else {
          local_7 = '\v';
        }
        DAT_103e7648 = DAT_104dbf3c;
        sub_102ed200(&local_8);
      }
    }
    else {
      DAT_104e24b8 = DAT_104e24b8 == '\0';
      local_17 = 0;
      local_20 = 0x5c;
      local_1b = (uint)(byte)DAT_104e24b8;
      local_1f = 2;
      sub_102ed200(&local_20);
      sub_Config74_10239e00(reg_EBX_00);
    }
  }
  else {
    if (iVar2 != 0) {
      sub_102edf70();
    }
    local_10 = 0x57;
    local_f = uVar1;
    sub_102ed200(&local_10);
    DAT_103e7774 = extraout_EAX + 0x113;
    reg_EBX_00 = 1;
  }
  if (DAT_103e7784 == 0) {
    DAT_103e7894 = 0;
  }
  DAT_103e7654 = 0;
  DAT_103e7658 = 0;
  DAT_103e766c = 0;
  return (char)reg_EBX_00;
}


// 0x1022efb0  (ghidra: FUN_1022efb0)  [range]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t __fastcall functions_D2ClientFunctions_1022efb0(int param_1,uint reg_EAX)

{
  short sVar1;
  int iVar2;
  uint32_t uVar3;
  uint8_t local_8;
  char local_7;
  uint16_t uStack_6;
  uint32_t _local_8;   /* not traced by Ghidra: value with no visible source */
  
  if ((DAT_103e7664 != 0) && (DAT_104dbb3a == '\0')) {
    sVar1 = *(short *)(param_1 + 10);
    if (sVar1 < 1) {
      if (-1 < sVar1) {
        return (uint)(byte)((ushort)sVar1 >> 8) << 8;
      }
      iVar2 = -1;
    }
    else {
      iVar2 = 1;
    }
    iVar2 = iVar2 + DAT_104dbf3c;
    if (iVar2 == -1) {
      iVar2 = 10;
    }
    else if (iVar2 == 0xb) {
      iVar2 = 0;
    }
    DAT_103e7648 = DAT_104dbf3c;
    uStack_6 = (uint16_t)((uint)param_1 >> 0x10);
    _local_8 = CONCAT11((char)iVar2 + '\x01',0x55);
    uVar3 = sub_102ed200(&local_8);
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return reg_EAX & 0xffffff00;
}


// 0x1022f020  (ghidra: FUN_1022f020)  [range]
uint8_t functions_D2ClientFunctions_1022f020(void)

{
  sub_10256810();
  return 0;
}


// 0x1022f030  (ghidra: FUN_1022f030)  [range]
uint8_t __fastcall functions_D2ClientFunctions_1022f030(int param_1)

{
  uint8_t uVar1;
  
  uVar1 = 0;
  if (DAT_103e7778 != 0) {
    switch(*(uint8_t *)(param_1 + 8)) {
    case 0xd:
    case 0x1b:
    case 0x20:
    case 0x38:
      uVar1 = 1;
    }
  }
  return uVar1;
}


// 0x1022f090  (ghidra: FUN_1022f090)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint8_t __fastcall functions_D2ClientFunctions_1022f090(int param_1,uint reg_EBX)

{
  int iVar1;
  ushort uVar2;
  short *psVar3;
  BOOL BVar4;
  char *_SrcBuf;
  errno_t eVar5;
  uint reg_EBX_00;
  short *psVar6;
  uint uVar7;
  uint reg_ESI;
  HANDLE hMem;
  uint64_t uVar8;
  int local_14 [4];
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_14[3] = DAT_1039800c ^ (uint)&stack0xfffffffc;
  reg_EBX_00 = reg_EBX & 0xffffff00;
  uVar2 = *(ushort *)(param_1 + 8);
  hMem = (HANDLE)(uint)uVar2;
  if (DAT_103e7778 == 0) {
    uVar8 = sub_102edf00();
    if (((int)uVar8 == 0) || (hMem != (HANDLE)0x6)) goto switchD_1022f0e2_caseD_1;
    DAT_103e7778 = 1;
    goto LAB_1022f27f;
  }
  psVar3 = &DAT_103e7670;
  do {
    psVar6 = psVar3;
    psVar3 = psVar6 + 1;
  } while (*psVar6 != 0);
  uVar7 = (int)(psVar6 + -0x81f3b38) >> 1;
  switch(hMem) {
  case (HANDLE)0x1:
  case (HANDLE)0x2:
  case (HANDLE)0x3:
  case (HANDLE)0x4:
  case (HANDLE)0x5:
  case (HANDLE)0x6:
  case (HANDLE)0x7:
  case (HANDLE)0x9:
  case (HANDLE)0xa:
  case (HANDLE)0xb:
  case (HANDLE)0xc:
  case (HANDLE)0xe:
  case (HANDLE)0xf:
  case (HANDLE)0x10:
  case (HANDLE)0x11:
  case (HANDLE)0x12:
  case (HANDLE)0x13:
  case (HANDLE)0x14:
  case (HANDLE)0x15:
  case (HANDLE)0x17:
  case (HANDLE)0x18:
  case (HANDLE)0x19:
  case (HANDLE)0x1a:
  case (HANDLE)0x1c:
  case (HANDLE)0x1d:
  case (HANDLE)0x1e:
  case (HANDLE)0x1f:
    goto switchD_1022f0e2_caseD_1;
  case (HANDLE)0x8:
    if (uVar7 != 0) {
      reg_ESI = uVar7 * 2 - 2;
      if (0xff < reg_ESI) {
LAB_1022f294:
                    /* WARNING: Subroutine does not return */
        FUN_103021cd(reg_EBX_00,reg_ESI,hMem);
      }
      *(uint16_t *)((int)&DAT_103e766c + uVar7 * 2 + 2) = 0;
      sub_1025db10();
    }
    break;
  case (HANDLE)0xd:
    DAT_103e7778 = 0;
    break;
  case (HANDLE)0x16:
    local_14[0] = 0;
    local_14[1] = 0;
    D2Win_10177(0x103e7670,local_14,local_14 + 1);
    if (((uVar7 < 0x18) && (local_14[0] < 0x9e)) && (BVar4 = OpenClipboard((HWND)0x0), BVar4 != 0))
    {
      hMem = GetClipboardData(1);
      if ((hMem == (HANDLE)0x0) || (_SrcBuf = GlobalLock(hMem), _SrcBuf == (char *)0x0)) {
        CloseClipboard();
        return 0;
      }
      local_14[2] = 0;
      eVar5 = mbstowcs_s((size_t *)(local_14 + 2),&DAT_103e7670 + uVar7,0x18 - uVar7,_SrcBuf,
                         0xffffffff);
      if (eVar5 == 0) {
        iVar1 = (local_14[2] + uVar7) * 2;
        reg_ESI = uVar7;
        if (0xff < iVar1 - 2U) goto LAB_1022f294;
        *(uint16_t *)((int)&DAT_103e766c + iVar1 + 2) = 0;
      }
      GlobalUnlock(hMem);
      CloseClipboard();
      sub_1025daf0();
      return 0;
    }
    goto switchD_1022f0e2_caseD_1;
  case (HANDLE)0x1b:
    sub_1025daa0();
    break;
  default:
    local_14[2] = 0;
    local_14[1] = 0;
    D2Win_10177(0x103e7670,local_14 + 2,local_14 + 1);
    if ((uVar7 < 0x18) && (local_14[2] < 0x9e)) {
      (&DAT_103e7670)[uVar7] = uVar2;
      reg_ESI = uVar7 * 2 + 2;
      if (0xff < reg_ESI) goto LAB_1022f294;
      (&DAT_103e7672)[uVar7] = 0;
      sub_1025daf0();
    }
  }
LAB_1022f27f:
  reg_EBX_00 = 1;
switchD_1022f0e2_caseD_1:
  return (char)reg_EBX_00;
}


// 0x1022f2d0  (ghidra: FUN_1022f2d0)  [range]
void __fastcall functions_D2ClientFunctions_Hook_FUN_6fb7dbb0_1022f2d0(uint32_t param_1,uint32_t param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  DWORD DVar4;
  int *piVar5;
  uint uVar6;
  uint64_t uVar7;
  
  if ((((*p_D2Client_DAT_6fbbb210 == 0) && (*p_D2Client_DAT_6fbbb214 == 1)) &&
      (iVar3 = sub_102ecd20(*p_D2Client_DAT_6fbbb21c & 0x7f,param_2), iVar3 != 0)) &&
     (*(int *)(iVar3 + 4) == 0x26d)) {
    if (*p_D2Client_DAT_6fbcbbfc != 0) {
      uVar1 = *(ushort *)(param_3 + 0xe);
      uVar2 = *(ushort *)(param_3 + 0xc);
      *(uint32_t *)(param_3 + 0x18) = 1;
      *(uint32_t *)(param_3 + 0x1c) = 0;
      Storm_511_102a1770(param_3);
      DVar4 = GetTickCount();
      if (399 < DVar4 - *p_D2Client_DAT_6fbbb228) {
        *p_D2Client_DAT_6fbbb228 = DVar4;
        iVar3 = sub_102effd0();
        if (iVar3 == 0) {
          sub_6fb4f7b0((uint)uVar2,(uint)uVar1);
          piVar5 = (int *)sub_6fac6020();
          if ((((piVar5 != (int *)0x0) && (uVar2 - 0x7b < 0x59)) &&
              ((uVar1 - 0x6a < 0x73 &&
               ((uVar7 = D2Common_10695(piVar5[1]), (int)uVar7 != 0 &&
                (uVar6 = D2Common_10202(piVar5,0x10,0x562,"D2ClientFunctions.cpp"), uVar6 != 0))))))
             && (((uVar7 = D2Common_10744((int)piVar5,0xc), (int)uVar7 != 0 ||
                  (uVar7 = D2Common_10744((int)piVar5,0xc9), (int)uVar7 != 0)) &&
                 (((uVar7 = D2Common_10973((int)piVar5,0x168,0), (int)uVar7 != 0 &&
                   (uVar7 = D2Common_10973((int)piVar5,0xce,0), (int)uVar7 == 0)) &&
                  (uVar7 = D2Common_10973((int)piVar5,0x1e6,0), (int)uVar7 == 0)))))) {
            sub_102effc0();
          }
        }
      }
    }
    return;
  }
  sub_6fb50320(param_3);
  return;
}


// 0x1022f430  (ghidra: FUN_1022f430)  [nearest]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall functions_D2ClientFunctions_1022f430(uint32_t param_1)

{
  DAT_104e6d30 = param_1;
  DAT_104e6d34 = 1;
  DAT_104e6d38 = 0;
  DAT_104e6d3c = 0;
  DAT_104e6d40 = 0;
  uRam104e6d44 = 0;
  DAT_104e6d48 = 0;
  DAT_104e6d4c = 0;
  DAT_104e6d50 = 0;
  DAT_104e6d54 = 0;
  DAT_104e6d58 = 0;
  return;
}

