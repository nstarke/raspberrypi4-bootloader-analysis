
int FUN_0000815c(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  if (param_2 >> 2 != 1) {
    do {
      iVar1 = iVar1 + *param_1;
      uVar2 = uVar2 + 1;
      param_1 = param_1 + 1;
    } while (uVar2 < (param_2 >> 2) - 1);
  }
  return iVar1;
}

