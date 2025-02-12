
undefined4 FUN_0000982c(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int extraout_r2;
  int local_10;
  
  uVar1 = *param_1;
  if (*(int *)(param_2 + 8) - 1U < uVar1) {
    return 1;
  }
  uVar3 = (uint)*(byte *)(*(int *)(param_2 + 4) + uVar1);
  switch(*(undefined *)((int)param_1 + 0x11)) {
  case 0:
    if (param_1[0x58] == 0) {
      if (uVar3 == 0x23) {
        return 2;
      }
      if (uVar3 == 0x5b) {
        *param_1 = uVar1 + 1;
        return 6;
      }
      iVar2 = FUN_00002cec(uVar3);
      if (iVar2 == 0) {
        FUN_0000c35e((int)param_1);
        return 4;
      }
    }
    else {
      uVar1 = FUN_00002c04((int)param_1,&local_10);
      param_1[0xa8] = uVar1;
      if (uVar1 == 0) {
        FUN_0000c35e((int)param_1);
        return 2;
      }
      *(undefined *)((int)param_1 + 0x11) = 1;
      if (local_10 == 0) {
        return 3;
      }
    }
    break;
  case 1:
    iVar2 = FUN_00002cec(uVar3);
    if (iVar2 == 0) {
      if (extraout_r2 != 0x3d) {
        return 2;
      }
      *param_1 = *param_1 + 1;
      return 5;
    }
    break;
  case 2:
    FUN_000026c2((int)param_1);
    return 0;
  default:
    return 7;
  case 4:
    FUN_0000276c((int)param_1);
  }
  return 0;
}

