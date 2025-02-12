
undefined4 FUN_0000759c(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_3c [3];
  int local_30 [3];
  
  FUN_000074be(local_30);
  FUN_000074be(local_3c);
  if (param_1 == param_2) {
    FUN_00006c4e(local_30,param_2);
    param_2 = local_30;
  }
  if (param_1 == param_3) {
    FUN_00006c4e(local_3c,param_3);
    param_3 = local_3c;
  }
  uVar5 = param_2[1];
  if (uVar5 != 0) {
    do {
      iVar1 = param_2[2] + uVar5 * 8;
      if (*(int *)(iVar1 + -4) != 0 || *(int *)(iVar1 + -8) != 0) break;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  iVar1 = param_3[1];
  if (iVar1 != 0) {
    do {
      iVar2 = param_3[2] + iVar1 * 8;
      if (*(int *)(iVar2 + -4) != 0 || *(int *)(iVar2 + -8) != 0) break;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00007476((int)param_1,iVar1 + uVar5);
  FUN_000074ca(param_1,0,0);
  if (iVar1 != 0) {
    iVar2 = iVar1 << 3;
    do {
      iVar3 = param_3[2] + iVar2;
      iVar4 = param_1[2] + iVar2;
      iVar2 = iVar2 + -8;
      FUN_00009366(uVar5,(uint *)param_2[2],(uint *)(iVar4 + -8),*(uint *)(iVar3 + -8),
                   *(uint *)(iVar3 + -4));
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *param_1 = *param_3 * *param_2;
  FUN_00007450(local_3c);
  FUN_00007450(local_30);
  return 0;
}

