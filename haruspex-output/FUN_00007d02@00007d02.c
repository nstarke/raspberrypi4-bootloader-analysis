
int FUN_00007d02(uint *param_1,byte *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 != 0) {
    uVar3 = *param_1 & 0x3f;
    uVar2 = *param_1 + param_3;
    *param_1 = uVar2;
    uVar4 = 0x40 - uVar3;
    if (uVar2 < param_3) {
      param_1[1] = param_1[1] + 1;
    }
    if ((uVar3 != 0) && (uVar4 <= param_3)) {
      FUN_00007dca((undefined4 *)((int)param_1 + uVar3 + 0x28),(undefined4 *)param_2,uVar4);
      iVar1 = FUN_00005c58((int)param_1,(byte *)(param_1 + 10));
      if (iVar1 != 0) {
        return iVar1;
      }
      param_2 = param_2 + uVar4;
      param_3 = param_3 - uVar4;
      uVar3 = 0;
    }
    for (; 0x3f < param_3; param_3 = param_3 - 0x40) {
      iVar1 = FUN_00005c58((int)param_1,param_2);
      if (iVar1 != 0) {
        return iVar1;
      }
      param_2 = param_2 + 0x40;
    }
    if (param_3 != 0) {
      FUN_00007dca((undefined4 *)((int)param_1 + uVar3 + 0x28),(undefined4 *)param_2,param_3);
    }
  }
  return 0;
}

