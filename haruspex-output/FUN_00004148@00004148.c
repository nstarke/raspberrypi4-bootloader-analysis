
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004148(void)

{
  uint uVar1;
  uint extraout_r1;
  ulonglong uVar2;
  
  if ((_DAT_7d202008 & 0xf) == 1) {
    FUN_0000aaa0();
  }
  else {
    uVar1 = FUN_00001e3a(1);
    uVar2 = FUN_00000224(uVar1,extraout_r1,1000000,0);
    FUN_0000011a((uint)uVar2,(uint)(uVar2 >> 0x20));
  }
  return;
}

