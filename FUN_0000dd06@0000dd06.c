
undefined4 FUN_0000dd06(undefined param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2[1];
  while( true ) {
    iVar1 = *(int *)(*param_2 + iVar3 * 4);
    iVar2 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0xc) != iVar2) {
      param_2[1] = iVar3;
      if (*(char *)(param_2 + 2) == '\x01') {
        FUN_00001872(iVar1,param_1);
      }
      else {
        *(undefined *)(*(int *)(iVar1 + 4) + iVar2) = param_1;
        *(int *)(iVar1 + 8) = iVar2 + 1;
      }
      return 0;
    }
    if (*(int *)(*param_2 + iVar3 * 4 + 4) == 0) break;
    iVar3 = iVar3 + 1;
  }
  param_2[1] = iVar3;
  return 0xffffffff;
}

