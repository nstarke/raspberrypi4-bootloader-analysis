
undefined4 FUN_000076d0(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  iVar4 = FUN_00006a70(param_1);
  uVar10 = param_2 >> 6;
  uVar9 = param_2 & 0x3f;
  uVar6 = param_2 + iVar4;
  if ((uint)(*(int *)(param_1 + 4) << 6) < uVar6) {
    FUN_00007476(param_1,(uint)((uVar6 & 0x3f) != 0) + (uVar6 >> 6));
  }
  if (uVar10 != 0) {
    uVar6 = *(uint *)(param_1 + 4);
    if (uVar10 < uVar6) {
      iVar4 = *(int *)(param_1 + 8);
      do {
        iVar7 = iVar4 + uVar6 * 8;
        iVar5 = iVar4 + (uVar6 - uVar10) * 8;
        uVar2 = *(undefined4 *)(iVar5 + -4);
        *(undefined4 *)(iVar7 + -8) = *(undefined4 *)(iVar5 + -8);
        *(undefined4 *)(iVar7 + -4) = uVar2;
        uVar6 = uVar6 - 1;
      } while (uVar10 < uVar6);
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      iVar4 = *(int *)(param_1 + 8) + uVar6 * 8;
      *(undefined4 *)(iVar4 + -8) = 0;
      *(undefined4 *)(iVar4 + -4) = 0;
    }
  }
  if ((uVar9 != 0) && (uVar6 = *(uint *)(param_1 + 4), uVar10 < uVar6)) {
    puVar8 = (ulonglong *)(*(int *)(param_1 + 8) + uVar10 * 8);
    uVar3 = 0;
    do {
      uVar1 = *(uint *)puVar8;
      uVar11 = *(uint *)((int)puVar8 + 4);
      uVar12 = FUN_0000036e(uVar1,uVar11,0x40 - uVar9);
      uVar13 = FUN_000003c8(uVar1,uVar11,uVar9);
      *puVar8 = uVar13 | uVar3;
      puVar8 = puVar8 + 1;
      uVar10 = uVar10 + 1;
      uVar3 = uVar12;
    } while (uVar10 < uVar6);
  }
  return 0;
}

