
int FUN_00003680(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    if (param_2 == 0) {
      iVar1 = 0x40;
    }
    else {
      iVar1 = 0x200;
    }
    uVar3 = param_4;
    if (iVar1 <= (int)param_4) {
      if (param_2 == 0) {
        uVar3 = 0x40;
      }
      else {
        uVar3 = 0x200;
      }
    }
    FUN_0000e552(param_1,param_2,param_3,uVar3);
    iVar1 = FUN_0000433c(param_1,param_2);
    param_4 = param_4 - uVar3;
    param_3 = param_3 + uVar3;
    if ((iVar1 << 0x19) >> 0x19 != 0xc) {
      return -1;
    }
    uVar2 = *(uint *)(param_1 + param_2 * 4 + 0x24);
    iVar4 = iVar4 + uVar2;
    if ((int)param_4 < 1) {
      return iVar4;
    }
  } while (uVar3 == uVar2);
  return iVar4;
}

