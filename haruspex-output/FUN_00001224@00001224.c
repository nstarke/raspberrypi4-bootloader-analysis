
uint FUN_00001224(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint auStack_10 [2];
  
  switch(param_1) {
  case 0x1f:
    iVar1 = FUN_0000b8a2();
    uVar2 = (**(code **)(iVar1 + 0x84))(param_1);
    if (uVar2 == 0) {
      uVar2 = 0x27122712;
    }
    break;
  case 0x20:
    iVar1 = FUN_0000b8a2();
    uVar2 = (**(code **)(iVar1 + 0x84))(param_1,*(code **)(iVar1 + 0x84));
    break;
  default:
    iVar1 = FUN_0000b8a2();
    uVar2 = (**(code **)(iVar1 + 0x84))(param_1);
    break;
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
    iVar1 = FUN_000057ba(param_1);
    FUN_000043a6(iVar1,auStack_10);
    iVar1 = FUN_000057a2(param_1);
    uVar2 = auStack_10[iVar1];
  }
  return uVar2;
}

