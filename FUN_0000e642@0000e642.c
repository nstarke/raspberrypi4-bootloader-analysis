
undefined4 FUN_0000e642(byte *param_1)

{
  byte bVar1;
  
  if (param_1 != (byte *)0x0) {
    do {
      param_1 = param_1 + 1;
      bVar1 = *param_1;
      if (bVar1 == 0) {
        return 1;
      }
      if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
        bVar1 = bVar1 + 0x20;
      }
    } while ((((0x60 < bVar1) && (bVar1 < 0x7b)) || ((0x2f < bVar1 && (bVar1 < 0x3a)))) ||
            ((bVar1 == 0x2d || (bVar1 == 0x2e))));
  }
  return 0;
}

