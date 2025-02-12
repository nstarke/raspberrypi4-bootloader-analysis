
void FUN_0000440a(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  switch(param_1) {
  default:
    iVar3 = 0x32;
    break;
  case 1:
    iVar3 = 0x34;
    break;
  case 2:
    iVar3 = 0x36;
  }
  iVar1 = FUN_0000b8a2();
  uVar2 = (**(code **)(iVar1 + 0x84))(iVar3,*(code **)(iVar1 + 0x84));
  *param_2 = uVar2;
  iVar1 = FUN_0000b8a2();
  uVar2 = (**(code **)(iVar1 + 0x84))(iVar3 + 1);
  param_2[1] = uVar2;
  return;
}

