
int FUN_0000096a(byte *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    while( true ) {
      if (param_3 <= uVar3) {
        return 0;
      }
      uVar2 = (uint)*param_1;
      uVar1 = (uint)*param_2;
      if (uVar2 != uVar1) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      uVar3 = uVar3 + 1;
      if (uVar2 == 0) {
        return 0;
      }
    }
    if (((&DAT_0000eee1)[uVar2] & 2) != 0) {
      uVar2 = uVar2 - 0x20;
    }
    if (((&DAT_0000eee1)[uVar1] & 2) != 0) {
      uVar1 = uVar1 - 0x20;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    uVar3 = uVar3 + 1;
  } while (uVar2 == uVar1);
  return uVar2 - uVar1;
}

