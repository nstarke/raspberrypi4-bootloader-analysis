
uint FUN_0000dfbc(byte *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int local_10;
  
  uVar1 = FUN_000007c6(param_1,param_2,param_3,&local_10);
  if (local_10 != 0) {
    piVar2 = (int *)FUN_00000680();
    *piVar2 = local_10;
  }
  return uVar1;
}

