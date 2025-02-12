
undefined4 FUN_00007904(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar4 = iVar3 * 8;
  if (uVar4 < param_3) {
    iVar1 = iVar3 * -8 + param_3;
    FUN_00007e18(param_2,0,param_3 + iVar3 * -8);
    param_3 = uVar4;
    param_2 = (undefined4 *)((int)param_2 + iVar1);
  }
  else if (param_3 < uVar4) {
    iVar3 = *(int *)(param_1 + 8);
    uVar5 = param_3;
    do {
      puVar2 = (uint *)((uVar5 & 0xfffffff8) + iVar3);
      uVar6 = FUN_0000036e(*puVar2,puVar2[1],(uVar5 & 7) << 3);
      if ((uVar6 & 0xff) != 0) {
        return 0xfffffff8;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  uVar4 = 0;
  if (param_3 != 0) {
    iVar3 = *(int *)(param_1 + 8);
    do {
      puVar2 = (uint *)((uVar4 & 0xfffffff8) + iVar3);
      uVar6 = FUN_0000036e(*puVar2,puVar2[1],(uVar4 & 7) << 3);
      *(char *)((int)param_2 + (param_3 - uVar4) + -1) = (char)uVar6;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  return 0;
}

