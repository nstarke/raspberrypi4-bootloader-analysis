
int FUN_000086e6(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar6 = 0;
  uVar1 = (**(code **)(param_2 + 8))();
  iVar5 = 0;
  uVar3 = 0;
  uVar2 = (**(code **)(param_2 + 8))();
  uVar4 = uVar2 + 10000000;
  do {
    uVar7 = (**(code **)(param_2 + 8))(uVar2,*(code **)(param_2 + 8));
    if (uVar4 < (uint)uVar7) {
      return 0xd;
    }
    uVar2 = (**(code **)(param_2 + 8))
                      ((uint)uVar7,(int)((ulonglong)uVar7 >> 0x20),*(code **)(param_2 + 8));
    if (uVar1 + param_3 < uVar2) {
      uVar2 = (**(code **)(param_2 + 8))();
      iVar6 = *(int *)(param_1 + 0x2014);
      uVar1 = uVar2;
      if ((iVar6 == 0) || (iVar6 != iVar5)) {
        uVar3 = 0;
        iVar5 = iVar6;
      }
      else {
        uVar3 = uVar3 + 1;
      }
    }
  } while (uVar3 < 2);
  *(undefined4 *)(param_1 + 0x2010) = 0;
  iVar5 = (**(code **)(param_2 + 8))();
  do {
    if (*(int *)(param_1 + 0x2014) == 0) {
      if (iVar6 != 1) {
        return iVar6;
      }
      return 0;
    }
    uVar1 = (**(code **)(param_2 + 8))(*(code **)(param_2 + 8));
  } while (uVar1 <= iVar5 + 10000000U);
  return 0xd;
}

