
void FUN_0000b794(byte *param_1,byte param_2)

{
  byte *pbVar1;
  
  while( true ) {
    pbVar1 = param_1 + 1;
    *param_1 = param_2;
    if (pbVar1 == (byte *)0x0) {
      return;
    }
    param_2 = *pbVar1;
    if (param_2 == 0) break;
    param_1 = pbVar1;
    if ((0x40 < param_2) && (param_2 < 0x5b)) {
      FUN_0000b794(pbVar1,param_2 + 0x20);
      return;
    }
  }
  return;
}

