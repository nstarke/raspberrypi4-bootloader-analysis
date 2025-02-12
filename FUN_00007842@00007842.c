
undefined4 * FUN_00007842(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 auStack_20 [3];
  
  iVar1 = FUN_00006aaa((int)param_2,(int)param_3);
  if (iVar1 < 0) {
    param_2 = (undefined4 *)0xfffffff6;
  }
  if (-1 < iVar1) {
    FUN_000074be(auStack_20);
    if (param_1 == param_3) {
      FUN_00006c4e(auStack_20,param_3);
      param_3 = auStack_20;
    }
    if (param_1 != param_2) {
      FUN_00006c4e(param_1,param_2);
    }
    param_2 = (undefined4 *)0x0;
    *param_1 = 1;
    uVar2 = param_3[1];
    puVar3 = (uint *)param_3[2];
    while ((uVar2 != 0 && (puVar3[uVar2 * 2 + -1] == 0 && puVar3[uVar2 * 2 + -2] == 0))) {
      uVar2 = uVar2 - 1;
    }
    FUN_0000971e(uVar2,puVar3,(uint *)param_1[2]);
    FUN_00007450(auStack_20);
  }
  return param_2;
}

