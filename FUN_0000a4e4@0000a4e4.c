
undefined4 FUN_0000a4e4(void)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar6;
  int extraout_r2;
  int extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar7;
  undefined4 extraout_r4;
  undefined4 extraout_r4_00;
  undefined4 uVar8;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  undefined4 extraout_r5_01;
  undefined4 extraout_r5_02;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  int unaff_gp;
  int local_28;
  
  uVar11 = 0;
  puVar1 = *(uint **)(unaff_gp + 0x1b4);
  local_28 = 0;
  if (*(int *)(unaff_gp + 0xd0) == 0) {
    piVar2 = (int *)FUN_00009084(0);
    iVar3 = FUN_0000a824(puVar1,(undefined4 *)0x0,&DAT_0000f25c,piVar2,0,extraout_r5);
    uVar6 = extraout_r1;
    iVar4 = extraout_r2;
    uVar7 = extraout_r3;
    uVar8 = extraout_r4;
    uVar9 = extraout_r5_00;
    if (iVar3 == 0) {
      uVar11 = FUN_000090a8(0x10ab);
      iVar4 = FUN_00008d34(uVar11,*(undefined4 **)(*piVar2 + 4),*(int *)(*piVar2 + 8));
      if (-1 < iVar4) {
        iVar3 = 5;
        uVar12 = 0;
        puVar10 = (undefined4 *)(unaff_gp + 0x1c4);
        do {
          puVar1 = (uint *)*puVar10;
          piVar2 = (int *)FUN_00008fe4(0);
          iVar5 = FUN_0000a824(puVar1,(undefined4 *)0x0,&DAT_0000f27c + uVar12 * 0x20,piVar2,0,
                               extraout_r5_01);
          uVar6 = extraout_r1_00;
          iVar4 = extraout_r2_00;
          uVar7 = extraout_r3_00;
          uVar8 = extraout_r4_00;
          uVar9 = extraout_r5_02;
          if (((iVar5 != 0) || (piVar2 == (int *)0x0)) || (iVar4 = *piVar2, iVar4 == 0))
          goto LAB_0000a5be;
          if (5 < iVar3) {
            iVar4 = FUN_00009142(uVar12 - 1,&local_28);
            if (iVar4 != 0) goto LAB_0000a5ba;
            if (local_28 != 0) break;
            iVar4 = *piVar2;
          }
          iVar4 = FUN_0000906a(*(undefined4 *)(iVar4 + 4),uVar12,0);
          if (iVar4 != 0) goto LAB_0000a5ba;
          puVar10 = puVar10 + 4;
          uVar12 = uVar12 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < 9);
        iVar4 = FUN_00009142(3,&local_28);
        if (iVar4 == 0) {
          *(undefined4 *)(unaff_gp + 0xd0) = 1;
          return 0;
        }
      }
LAB_0000a5ba:
      uVar11 = 0xffffffff;
    }
    else {
LAB_0000a5be:
      uVar11 = 0xfffffffe;
      _write_to_stderr((byte *)s_Missing_or_corrupted_SDRAM_FW_0000a5d8,uVar6,iVar4,uVar7,uVar8,
                       uVar9);
      FUN_0000a3e8(0x31);
    }
  }
  return uVar11;
}

