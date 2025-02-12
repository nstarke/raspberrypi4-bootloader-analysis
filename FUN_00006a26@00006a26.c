
undefined4 FUN_00006a26(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  if (*param_3 * iVar1 < 0) {
    iVar2 = FUN_00006aaa((int)param_2,(int)param_3);
    if (iVar2 < 0) {
      FUN_00007842(param_1,param_3,param_2);
      *param_1 = -iVar1;
      return 0;
    }
    FUN_00007842(param_1,param_2,param_3);
  }
  else {
    FUN_0000692a(param_1,param_2,param_3);
  }
  *param_1 = iVar1;
  return 0;
}

