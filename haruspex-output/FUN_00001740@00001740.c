
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00001740(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  int extraout_r3;
  int extraout_r4;
  int extraout_r5;
  
  do {
    uVar1 = FUN_00001706(param_1,0x2c);
    if ((uVar1 & 2) != 0) break;
    param_1 = extraout_r5;
  } while ((undefined *)(*(int *)(extraout_r3 + 4) - extraout_r4) < &DAT_000186a0);
  if ((uVar1 & 2) == 0) {
    FUN_0000e198((byte *)s__s_transfer_timed_out_0000179c,*(uint *)(extraout_r5 + 8),extraout_r2,
                 extraout_r3,extraout_r4,extraout_r5);
    uVar2 = 0xffffffff;
  }
  else if ((uVar1 & 4) == 0) {
    uVar2 = 0;
  }
  else {
    FUN_0000e198((byte *)s__s_no_ACK_00001790,*(uint *)(extraout_r5 + 8),extraout_r2,extraout_r3,
                 extraout_r4,extraout_r5);
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}

