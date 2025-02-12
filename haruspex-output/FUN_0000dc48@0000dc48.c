
void FUN_0000dc48(void)

{
  int iVar1;
  uint extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 extraout_r4;
  undefined4 extraout_r5;
  
  iVar1 = FUN_0000af30(&LAB_0000d72a,0,100000,1000);
  if (iVar1 < 0) {
    _write_to_stderr((byte *)s_SPI_WEL_timeout_0000dc70,extraout_r1,extraout_r2,extraout_r3,
                     extraout_r4,extraout_r5);
  }
  return;
}

