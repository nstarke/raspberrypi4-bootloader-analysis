
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003d20(int param_1)

{
  int iVar1;
  
  FUN_0000e48c();
  if (param_1 != 0) {
    FUN_0000bf1c(1000000);
  }
  iVar1 = FUN_0000b8a2();
  (**(code **)(iVar1 + 200))();
  _DAT_7c400020 = _DAT_7c400020 & 0xbfffffff;
  _DAT_7d0000d0 = _DAT_7d0000d0 | 0x48000;
  _DAT_7c4f0210 = _DAT_7c4f0210 & 0xffffffcf | 4;
  _DAT_7c4f0204 = _DAT_7c4f0204 & 0x7fffffff;
  FUN_0000e48c();
  FUN_0000bf1c(10000);
  FUN_0000e320(param_1);
  return 0;
}

