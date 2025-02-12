
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000057d6(void)

{
  int boot_status;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r4;
  undefined4 extraout_r4_00;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  astruct_1 *global_pointer;
  undefined8 temporary_variable;
  
  FUN_0000ba74();
  *(undefined4 *)&global_pointer[10].field_0x214 = 0xbadf00d;
  *(undefined4 *)&global_pointer[0xe].field_0x29c = 0xbadf00d;
  FUN_00009fd2();
  FUN_0000d6ce();
  FUN_0000c1b2();
  FUN_0000a780();
  FUN_00009e74();
  boot_status = FUN_0000a4d8();
  if (boot_status != 0) {
    FUN_0000c3f8();
    FUN_0000b354(0);
    FUN_0000b6ca();
  }
  FUN_0000a48c(*(undefined4 *)&global_pointer[0xf].field_0x264,
               *(uint *)&global_pointer[0xf].field_0x268);
  FUN_0000ae2c();
  FUN_0000b3cc();
  if ((_DAT_7d200020 & 2) != 0) {
    global_pointer->field718_0x2d4 = global_pointer->field718_0x2d4 | 1;
  }
  FUN_00000a82();
  FUN_0000afa0(global_pointer->field56_0x38,global_pointer->field57_0x3c);
  temporary_variable = FUN_00000a94();
  temporary_variable =
       FUN_0000b3a0((int)temporary_variable,(int)((ulonglong)temporary_variable >> 0x20),extraout_r2
                    ,extraout_r3,extraout_r4,extraout_r5);
  temporary_variable =
       FUN_00001bb8((int)temporary_variable,(uint)((ulonglong)temporary_variable >> 0x20),
                    extraout_r2_00);
  FUN_0000b3a0((int)temporary_variable,(int)((ulonglong)temporary_variable >> 0x20),extraout_r2_01,
               extraout_r3_00,extraout_r4_00,extraout_r5_00);
  FUN_0000d044();
  return 0;
}

