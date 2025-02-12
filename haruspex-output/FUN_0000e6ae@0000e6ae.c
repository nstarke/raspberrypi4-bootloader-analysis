
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0000e6ae(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r4;
  undefined4 extraout_r4_00;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  uint *puVar3;
  int iVar4;
  uint local_30 [4];
  
  puVar3 = local_30;
  iVar4 = 0;
  FUN_00007dca(local_30,(undefined4 *)&DAT_0000eed0,0x10);
  uVar1 = FUN_0000c242(param_1,extraout_r1,extraout_r2,extraout_r3,extraout_r4,extraout_r5);
  if (param_2 == (uVar1 | param_2)) {
    if (param_2 != uVar1) {
      FUN_0000cc94();
      iVar4 = 4;
      do {
        FUN_0000bf1c(10);
        _DAT_7d00f018 = *puVar3;
        _DAT_7d00f01c = 0;
        iVar2 = FUN_000098fe(4);
        if (iVar2 != 0) {
          return iVar2;
        }
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (0 < iVar4);
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 1;
        FUN_0000bf1c(10);
        if (1000 < iVar4) {
          return -1;
        }
      } while ((_DAT_7d00f00c & 4) == 0);
      FUN_0000bf1c(10);
      _DAT_7d00f018 = param_2;
      if ((param_1 < 0x1f) || (0x2c < param_1)) {
        _DAT_7d00f01c = 0;
      }
      else {
        _DAT_7d00f01c = FUN_00001910(param_2,0);
      }
      FUN_0000bf1c(10);
      _DAT_7d00f020 = param_1;
      FUN_000098fe(0x14);
      iVar4 = FUN_000098fe(6);
      FUN_000026a0();
      uVar1 = FUN_0000c242(param_1,extraout_r1_00,extraout_r2_00,extraout_r3_00,extraout_r4_00,
                           extraout_r5_00);
      if (param_2 != uVar1) {
        iVar4 = -1;
      }
      FUN_000099d8(param_1,param_2);
    }
  }
  else {
    iVar4 = -2;
  }
  return iVar4;
}

