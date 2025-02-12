
uint FUN_0000b2be(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = 0x10;
  }
  if (param_2 != 0) {
    uVar1 = uVar1 | 8;
  }
  if (param_3 == 0x20) {
    return uVar1 | 5;
  }
  if (param_3 < 0x21) {
    if (param_3 == 8) {
      return uVar1 | 7;
    }
    if (param_3 == 0x10) {
      return uVar1 | 6;
    }
  }
  else {
    if (param_3 == 0x40) {
      return uVar1 | 4;
    }
    if (param_3 == 0x80) {
      return uVar1 | 3;
    }
  }
  FUN_00009cdc(param_1,param_2,param_3,uVar1,param_5,param_6);
  return 0;
}

