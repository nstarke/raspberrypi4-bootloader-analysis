
undefined4 FUN_00007520(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_00006b48(param_3,0,0);
  if (iVar1 < 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    FUN_00006cb2((int *)0x0,param_1,param_2,param_3);
    while (iVar1 = FUN_00006b48(param_1,0,0), iVar1 < 0) {
      FUN_00006a26(param_1,param_1,param_3);
    }
    while (iVar1 = FUN_00006b96(param_1,param_3), -1 < iVar1) {
      FUN_000078ba(param_1,param_1,param_3);
    }
  }
  return uVar2;
}

