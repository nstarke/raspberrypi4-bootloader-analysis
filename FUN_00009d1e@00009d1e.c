
int FUN_00009d1e(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint extraout_r1;
  uint uVar3;
  uint extraout_r1_00;
  uint extraout_r2;
  uint uVar4;
  uint extraout_r2_00;
  int extraout_r3;
  int iVar5;
  int extraout_r3_00;
  int extraout_r4;
  int iVar6;
  int extraout_r4_00;
  undefined4 extraout_r5;
  undefined4 uVar7;
  undefined4 extraout_r5_00;
  int iVar8;
  uint auStack_84 [27];
  
  FUN_00007e18(param_2,0xff,0x20);
  iVar8 = 0;
  FUN_00007c64(auStack_84);
  iVar2 = FUN_00007c6e(auStack_84,0);
  uVar3 = extraout_r1;
  uVar4 = extraout_r2;
  iVar5 = extraout_r3;
  iVar6 = extraout_r4;
  uVar7 = extraout_r5;
  if (-1 < iVar2) {
    for (; piVar1 = *(int **)(param_1 + iVar8 * 4), piVar1 != (int *)0x0; iVar8 = iVar8 + 1) {
      FUN_0000189e(piVar1,uVar3,uVar4,iVar5,iVar6,uVar7);
      iVar5 = *(int *)(param_1 + iVar8 * 4);
      iVar2 = FUN_00007d02(auStack_84,*(byte **)(iVar5 + 4),*(uint *)(iVar5 + 8));
      if (iVar2 < 0) goto LAB_00009d84;
      uVar3 = extraout_r1_00;
      uVar4 = extraout_r2_00;
      iVar5 = extraout_r3_00;
      iVar6 = extraout_r4_00;
      uVar7 = extraout_r5_00;
    }
    iVar2 = FUN_00007ab0(auStack_84,(undefined *)param_2);
    if (-1 < iVar2) {
      iVar2 = 0;
    }
  }
LAB_00009d84:
  FUN_00007c54((int)auStack_84);
  return iVar2;
}

