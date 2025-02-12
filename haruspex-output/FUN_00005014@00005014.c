
void FUN_00005014(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 extraout_r4;
  undefined4 extraout_r5;
  int unaff_gp;
  uint unaff_lr;
  
  iVar1 = FUN_0000b8a2();
  puVar2 = *(undefined **)(unaff_gp + 0x2d04);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = &DAT_0001c200;
  }
  FUN_0000e09e(iVar1,puVar2);
  FUN_0000a2ac((byte *)s_I2C_error____x_0000504c,unaff_lr,extraout_r2,extraout_r3,extraout_r4,
               extraout_r5);
  FUN_0000e072();
  do {
    FUN_0000a332(0x33,0);
  } while( true );
}

