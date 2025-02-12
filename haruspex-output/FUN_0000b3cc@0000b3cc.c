
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000b3cc(void)

{
  code *pcVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 extraout_r1;
  uint extraout_r1_00;
  uint uVar6;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r4;
  undefined4 extraout_r4_00;
  undefined4 extraout_r4_01;
  undefined4 extraout_r4_02;
  undefined4 extraout_r4_03;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  undefined4 extraout_r5_01;
  undefined4 extraout_r5_02;
  undefined4 extraout_r5_03;
  undefined4 extraout_r5_04;
  int *piVar7;
  undefined *puVar8;
  int iVar9;
  int unaff_gp;
  undefined8 uVar10;
  undefined auStack_44 [2];
  byte local_42;
  byte local_41;
  uint local_40;
  undefined auStack_3c [32];
  
  piVar7 = (int *)(unaff_gp + 0x124);
  puVar8 = auStack_44;
  (**(code **)(*piVar7 + 0xb0))();
  if (*(int *)(unaff_gp + 1000) == 0) {
    local_41 = 0;
    bVar2 = FUN_0000af6a();
    if ((CONCAT31(extraout_var,bVar2) != 0) && (iVar4 = FUN_0000a4d4(), iVar4 == 0)) {
      FUN_0000d292(&local_42,&local_41);
      FUN_00000608((uint)local_42);
    }
    uVar6 = (uint)local_41;
    if ((_DAT_7d200020 & 2) != 0) {
      local_41 = local_41 | 1;
      uVar6 = uVar6 | 1;
      _DAT_7d200020 = _DAT_7d200020 & 0xfffffffd | 0x5a000000;
    }
    *(uint *)(unaff_gp + 0x2d4) = uVar6 & 1;
    uVar6 = FUN_00000532();
    _write_to_stdout((byte *)s_part__08x_reset_info__08x_0000b5c8,uVar6,*(uint *)(unaff_gp + 0x2d4),
                     extraout_r3,extraout_r4,extraout_r5);
    _write_to_stdout((byte *)s_PMIC_reset_event__08x_rtc__08x_a_0000b604,*(uint *)(unaff_gp + 0x4e4)
                     ,*(undefined4 *)(unaff_gp + 0x540),*(undefined4 *)(unaff_gp + 0x544),
                     *(undefined4 *)(unaff_gp + 0x548),extraout_r5_00);
    uVar10 = FUN_0000af96();
    iVar4 = (int)uVar10;
    *(int *)(unaff_gp + 0x3ec) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(&DAT_00002d14 + unaff_gp) = 3;
    }
    FUN_00009d90(iVar4,(int)((ulonglong)uVar10 >> 0x20));
    iVar9 = 0x25;
    (**(code **)(*piVar7 + 0xc4))(*(code **)(*piVar7 + 0xc4));
    uVar6 = (**(code **)(*piVar7 + 0x84))(0x20);
    uVar10 = (**(code **)(*piVar7 + 0x84))(0x16);
    pcVar1 = *(code **)(*piVar7 + 0x84);
    uVar3 = (*pcVar1)(0x17,(int)((ulonglong)uVar10 >> 0x20),*piVar7,pcVar1);
    _write_to_stdout((byte *)s_OTP_boardrev__x_bootrom__x__x_0000b5e4,uVar6,(int)uVar10,uVar3,
                     extraout_r4_00,extraout_r5_01);
    iVar4 = 8;
    do {
      puVar5 = (undefined4 *)(puVar8 + 8);
      puVar8 = puVar8 + 4;
      FUN_0000ca68(iVar9,puVar5,(undefined4 *)0x0);
      iVar9 = iVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (0 < iVar4);
    FUN_0000ca68(0x15,&local_40,(undefined4 *)0x0);
    _write_to_stdout((byte *)s_Customer_key_hash__32H_0000b5b0,(uint)auStack_3c,extraout_r2,
                     extraout_r3_00,extraout_r4_01,extraout_r5_02);
    if ((local_40 & 0xc000000) == 0) {
      uVar6 = unaff_gp + 0xd;
    }
    else {
      uVar6 = unaff_gp + 0xc;
    }
    _write_to_stdout((byte *)s_VC_JTAG__slocked_0000b59c,uVar6,extraout_r2_00,extraout_r3_01,
                     extraout_r4_02,extraout_r5_03);
    (**(code **)(*piVar7 + 0xa4))(0);
    (**(code **)(*piVar7 + 0xa8))(0,extraout_r1,*(code **)(*piVar7 + 0xa8));
    FUN_0000bf1c(20000);
    (**(code **)(*piVar7 + 0xa4))(1);
    FUN_000053f2();
    *(undefined4 *)(unaff_gp + 1000) = 1;
  }
  (**(code **)(*piVar7 + 0x5c))();
  iVar4 = FUN_0000a4dc();
  if (iVar4 != 0) {
    *(uint *)(unaff_gp + 0x40c) = *(uint *)(unaff_gp + 0x40c) | 2;
  }
  iVar4 = FUN_0000a4e0();
  uVar6 = extraout_r1_00;
  if (iVar4 != 0) {
    uVar6 = *(uint *)(unaff_gp + 0x40c) | 1;
    *(uint *)(unaff_gp + 0x40c) = uVar6;
  }
  if ((*(uint *)(unaff_gp + 0x2d4) & 1) != 0) {
    FUN_0000a2ac((byte *)s_TRYBOOT_0000b594,uVar6,extraout_r2_01,*(uint *)(unaff_gp + 0x2d4),
                 extraout_r4_03,extraout_r5_04);
  }
  iVar4 = FUN_0000a4d8();
  if (iVar4 != 0) {
    FUN_0000c3f8();
    FUN_0000b6ca();
    FUN_0000b354(0);
  }
  return;
}

