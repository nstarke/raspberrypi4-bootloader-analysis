
void FUN_0000b798(byte *param_1)

{
  byte bVar1;
  
  while( true ) {
    if (param_1 == (byte *)0x0) {
      return;
    }
    bVar1 = *param_1;
    if (bVar1 == 0) break;
    if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
      FUN_0000b794(param_1,bVar1 + 0x20);
      return;
    }
    *param_1 = bVar1;
    param_1 = param_1 + 1;
  }
  return;
}

