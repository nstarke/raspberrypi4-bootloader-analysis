
uint FUN_00009954(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r4;
  undefined4 extraout_r4_00;
  undefined4 extraout_r4_01;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  undefined4 extraout_r5_01;
  uint uVar2;
  int unaff_gp;
  uint local_14;
  uint local_10;
  
  local_14 = FUN_0000c242(0x1f,param_2,param_3,param_4,param_5,param_6);
  local_10 = FUN_0000c242(0x23,extraout_r1,extraout_r2,extraout_r3,extraout_r4,extraout_r5);
  uVar2 = 0;
  if (local_14 == 0 || local_10 == 0) {
    FUN_000011c2((int *)&local_14);
    if (local_14 != 0) {
      uVar2 = FUN_0000e6ae(0x1f,local_14);
      uVar1 = FUN_0000c242(0x1f,extraout_r1_00,extraout_r2_00,extraout_r3_00,extraout_r4_00,
                           extraout_r5_00);
      *(uint *)(unaff_gp + 0xa4) = uVar1;
      if (local_14 != uVar1) {
        FUN_00009cdc(uVar1,extraout_r1_01,local_14,extraout_r3_01,extraout_r4_01,extraout_r5_01);
      }
    }
    if (local_10 != 0) {
      uVar1 = FUN_0000e6ae(0x23,local_10);
      uVar2 = uVar2 | uVar1;
    }
  }
  return uVar2;
}

