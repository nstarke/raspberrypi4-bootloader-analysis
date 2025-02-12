
undefined4 FUN_00006c4e(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != param_2) {
    if (param_2[2] == 0) {
      FUN_00007450(param_1);
    }
    else {
      uVar2 = param_2[1];
      do {
        uVar3 = uVar2;
        uVar2 = uVar3 - 1;
        if (uVar2 == 0) break;
        piVar1 = (int *)(param_2[2] + uVar2 * 8);
      } while (piVar1[1] == 0 && *piVar1 == 0);
      *param_1 = *param_2;
      if ((uint)param_1[1] < uVar3) {
        FUN_00007476((int)param_1,uVar3);
      }
      else {
        FUN_00007e18((undefined4 *)(param_1[2] + uVar3 * 8),0,(param_1[1] - uVar3) * 8);
      }
      FUN_00007dca((undefined4 *)param_1[2],(undefined4 *)param_2[2],uVar2 * 8 + 8);
    }
  }
  return 0;
}

