
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000803c(void)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 extraout_r4;
  undefined4 extraout_r5;
  int iVar1;
  undefined8 uVar2;
  
  _DAT_7c001000 = 2;
  iVar1 = 0;
  FUN_0000bf1c(10);
  while ((_DAT_7c001000 & 0x8000) == 0) {
    uVar2 = FUN_0000bf1c(10);
    iVar1 = iVar1 + 1;
    if (0x14 < iVar1) {
      FUN_00009cdc((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),extraout_r2,extraout_r3,extraout_r4,
                   extraout_r5);
    }
  }
  return;
}

