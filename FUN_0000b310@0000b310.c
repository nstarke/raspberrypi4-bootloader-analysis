
undefined4 FUN_0000b310(uint param_1)

{
  undefined4 uVar1;
  
  switch(param_1 & 7) {
  default:
    uVar1 = 0;
    break;
  case 3:
    uVar1 = 0x80;
    break;
  case 4:
    uVar1 = 0x40;
    break;
  case 5:
    uVar1 = 0x20;
    break;
  case 6:
    uVar1 = 0x10;
    break;
  case 7:
    uVar1 = 8;
  }
  return uVar1;
}

