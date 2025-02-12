
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000e2c8(int param_1)

{
  if (param_1 == 0) {
    _DAT_7c48000c = 0x20402700;
    FUN_0000bf1c(25000);
    _DAT_7c480400 = 1;
    _DAT_7c480404 = &USHORT_0000bb80;
  }
  else {
    _DAT_7c48000c = 0x40402700;
    _DAT_7c480b00 = 0x8000000;
    _DAT_7c480900 = 0x8000000;
  }
  FUN_0000e48c();
  return;
}

