
void FUN_000011c2(int *param_1)

{
  undefined4 extraout_r3;
  undefined4 uVar1;
  undefined4 extraout_r3_00;
  undefined4 extraout_r4;
  undefined4 uVar2;
  undefined4 extraout_r4_00;
  int iVar3;
  undefined4 extraout_r5;
  undefined4 uVar4;
  undefined4 extraout_r5_00;
  int *piVar5;
  int unaff_gp;
  uint local_18;
  
  piVar5 = (int *)(unaff_gp + 0xb0);
  iVar3 = *piVar5;
  if ((iVar3 == 0) && (*(int *)(unaff_gp + 0xb4) == 0)) {
    FUN_000053f2();
    uVar1 = extraout_r3;
    uVar2 = extraout_r4;
    uVar4 = extraout_r5;
    do {
      FUN_000042bc((undefined4 *)(unaff_gp + 0xb0),8,&local_18,uVar1,uVar2,uVar4);
      if (local_18 != 8) {
        FUN_00007e18((undefined4 *)(unaff_gp + 0xb0),0,8);
        break;
      }
      uVar1 = extraout_r3_00;
      uVar2 = extraout_r4_00;
      uVar4 = extraout_r5_00;
    } while ((*(int *)(unaff_gp + 0xb4) == 0) || (*(int *)(unaff_gp + 0xb4) == 0x10000000));
    iVar3 = *param_1;
    if (iVar3 == 0) {
      iVar3 = *piVar5;
    }
    else {
      *piVar5 = iVar3;
    }
  }
  *param_1 = iVar3;
  param_1[1] = *(int *)(unaff_gp + 0xb4);
  return;
}

