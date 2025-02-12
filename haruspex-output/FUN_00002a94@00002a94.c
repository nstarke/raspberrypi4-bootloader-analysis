
int FUN_00002a94(void)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 extraout_r4;
  undefined4 extraout_r5;
  int unaff_gp;
  uint local_10;
  
  if (*(int *)(unaff_gp + 200) == 0) {
    uVar1 = FUN_00009e48(&local_10);
    if (local_10 < 0x4000) {
      FUN_00009cdc(uVar1,local_10,extraout_r2,extraout_r3,extraout_r4,extraout_r5);
    }
    FUN_000018fc((undefined4 *)(unaff_gp + 0x4f34),uVar1,0x4000);
    *(undefined4 *)(unaff_gp + 200) = 1;
  }
  return unaff_gp + 0x4f34;
}

