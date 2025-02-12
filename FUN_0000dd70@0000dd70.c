
int FUN_0000dd70(int param_1,int param_2)

{
  undefined uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 == 8) {
    *(undefined *)(param_1 + 0x248) = 0;
  }
  if (param_2 == 9) {
    uVar1 = 1;
    *(undefined *)(param_1 + 0x248) = 1;
  }
  else {
    uVar1 = *(undefined *)(param_1 + 0x248);
  }
  switch(uVar1) {
  case 0:
    break;
  case 1:
    FUN_0000c042(param_1);
    FUN_0000e552(param_1,0,param_1 + 8,8);
    *(undefined *)(param_1 + 0x248) = 2;
    break;
  case 2:
    if (param_2 == 10) {
      *(undefined *)(param_1 + 0x248) = 3;
    }
    break;
  case 3:
  case 4:
    if (param_2 != 0xd) {
      return 0;
    }
    if (*(int *)(param_1 + 0x24) == 8) {
      iVar2 = FUN_00004ec4(param_1,*(ushort **)(param_1 + 0x10));
      return iVar2;
    }
  default:
    iVar2 = -1;
  }
  return iVar2;
}

