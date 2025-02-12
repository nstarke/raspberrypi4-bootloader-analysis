
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000a94(void)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  uint uVar8;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 extraout_r4;
  uint extraout_r4_00;
  uint extraout_r4_01;
  uint extraout_r5;
  uint extraout_r5_00;
  int *piVar9;
  byte *pbVar10;
  char cVar11;
  int unaff_gp;
  uint local_30;
  undefined2 local_2c;
  
  piVar9 = (int *)(unaff_gp + 0x38);
  FUN_00001078(*piVar9);
  if (_DAT_7d5040dc != 0) {
    FUN_0000e198((byte *)s_BOOT_ORDER_override__0x_08x_00001018,_DAT_7d5040dc,extraout_r2,
                 extraout_r3,extraout_r4,_DAT_7d5040dc);
    *(uint *)(&DAT_00002db0 + unaff_gp) = _DAT_7d5040dc;
  }
  _DAT_7d5040dc = 0;
  iVar3 = *piVar9;
  if (*(int *)(iVar3 + 0xd8) == 0) {
    uVar2 = *(uint *)(unaff_gp + 0x2d00);
    uVar8 = uVar2;
    if (uVar2 < 0x385) {
      uVar8 = 900;
    }
    if (uVar8 < 0x1389) {
      if (uVar2 < 0x385) {
        uVar2 = 900;
      }
    }
    else {
      uVar2 = 5000;
    }
    *(uint *)(unaff_gp + 0x2d00) = uVar2;
    *(undefined *)(unaff_gp + 0x4e8) = 5;
    *(uint *)(unaff_gp + 0x4f4) = uVar2;
  }
  if (*(int *)(iVar3 + 0x60) != 0) {
    *(undefined4 *)((int)&PTR_DAT_00002f08 + unaff_gp) = 1;
  }
  if ((*(undefined **)(unaff_gp + 0x2d04) < (undefined *)0x2580) ||
     (&DAT_000e1000 < *(undefined **)(unaff_gp + 0x2d04))) {
    *(undefined **)(unaff_gp + 0x2d04) = &DAT_0001c200;
  }
  if (*(int *)(&DAT_00002f0c + unaff_gp) != 0) {
    *(undefined4 *)((int)&PTR_DAT_00002f08 + unaff_gp) = 0;
    *(undefined4 *)(iVar3 + 0x60) = 0;
  }
  if (*(int *)(iVar3 + 0xec) != 0) {
    *(undefined4 *)(&DAT_00002db4 + unaff_gp) = 0xffffffff;
  }
  if (*(int *)(&DAT_00002db0 + unaff_gp) == 0 || *(int *)(&DAT_00002db0 + unaff_gp) == 0xf) {
    *(undefined4 *)(&DAT_00002db0 + unaff_gp) = 0xf;
    FUN_0000a7bc();
    *(uint *)(&DAT_00002db0 + unaff_gp) = *(int *)(&DAT_00002db0 + unaff_gp) << 4 | 6;
    bVar1 = FUN_0000a7ca();
    iVar3 = *piVar9;
    if (CONCAT31(extraout_var,bVar1) == 0) {
      uVar8 = *(int *)(&DAT_00002db0 + unaff_gp) << 4 | 4;
    }
    else {
      uVar8 = *(int *)(&DAT_00002db0 + unaff_gp) << 4 | 5;
    }
    *(uint *)(&DAT_00002db0 + unaff_gp) = uVar8 << 4 | 1;
  }
  if (*(int *)(iVar3 + 0x24) != 0) {
    *(undefined4 *)(&DAT_00002e84 + unaff_gp) = 0x52506935;
  }
  uVar8 = *(uint *)(&DAT_00002d34 + unaff_gp);
  if (uVar8 == 0) {
    uVar8 = 4000;
  }
  if (uVar8 < 0x1f5) {
    uVar8 = 500;
  }
  uVar2 = *(uint *)(&DAT_00002d30 + unaff_gp);
  *(uint *)(&DAT_00002d34 + unaff_gp) = uVar8;
  if (uVar2 == 0) {
    uVar2 = 45000;
  }
  if (uVar2 < 0x1389) {
    uVar2 = 5000;
  }
  uVar8 = *(uint *)(&DAT_00002d38 + unaff_gp);
  *(uint *)(&DAT_00002d30 + unaff_gp) = uVar2;
  if (uVar8 == 0) {
    uVar8 = 30000;
  }
  if (uVar8 < 0x1389) {
    uVar8 = 5000;
  }
  *(uint *)(&DAT_00002d38 + unaff_gp) = uVar8;
  uVar8 = *(uint *)(&DAT_00002d3c + unaff_gp);
  if (uVar8 == 0) {
    uVar8 = 10000;
  }
  if (uVar8 < 0x2711) {
    uVar8 = 10000;
  }
  iVar4 = *(int *)(unaff_gp + 0x3d8);
  *(uint *)(&DAT_00002d3c + unaff_gp) = uVar8;
  if (iVar4 == 7) {
    *(undefined4 *)((int)&PTR_DAT_00002f08 + unaff_gp) = 1;
    *(undefined4 *)(&DAT_00002db0 + unaff_gp) = 0xf3;
    *(undefined4 *)(&DAT_00003030 + unaff_gp) = 0;
  }
  uVar8 = *(uint *)(&DAT_00002d40 + unaff_gp);
  if (uVar8 == 0) {
    uVar8 = 25000;
  }
  if (uVar8 < 0x3e9) {
    uVar8 = 1000;
  }
  *(uint *)(&DAT_00002d40 + unaff_gp) = uVar8;
  if ((*(int *)(iVar3 + 0x74) == 0) || (iVar3 = FUN_0000a4d4(), iVar3 != 0)) {
    uVar8 = *(uint *)(&DAT_00002d2c + unaff_gp);
  }
  else {
    uVar8 = 1000;
  }
  if (4999 < uVar8) {
    uVar8 = 5000;
  }
  *(uint *)(&DAT_00002d2c + unaff_gp) = uVar8;
  if (uVar8 != 0) {
    if (uVar8 < 0xfb) {
      uVar8 = 0xfa;
    }
    *(uint *)(&DAT_00002d2c + unaff_gp) = uVar8;
  }
  pbVar10 = (byte *)((int)&PTR_DAT_00002d48 + unaff_gp);
  iVar3 = FUN_0000df42((char *)pbVar10);
  if (iVar3 != 0) {
    iVar3 = unaff_gp + 0x3f0;
    for (uVar8 = 0; ((pbVar10 != (byte *)0x0 && (*pbVar10 != 0)) && (uVar8 < 4)); uVar8 = uVar8 + 1)
    {
      iVar4 = FUN_0000b7b6(pbVar10,(undefined4 *)0x0,0x10);
      *(int *)(iVar3 + 0x2c) = iVar4;
      pbVar10 = (byte *)FUN_0000ddfa((char *)pbVar10,0x2c);
      if ((pbVar10 != (byte *)0x0) && (*pbVar10 != 0)) {
        pbVar10 = pbVar10 + 1;
      }
      iVar3 = iVar3 + 4;
    }
  }
  iVar3 = *piVar9;
  if (*(int *)(iVar3 + 0x9c) != 0) {
    *(undefined4 *)(&DAT_00002d1c + unaff_gp) = 1;
  }
  *(undefined4 *)(unaff_gp + 0x56c) = *(undefined4 *)(&DAT_00002d20 + unaff_gp);
  if (*(int *)(iVar3 + 0x88) != 0) {
    *(undefined4 *)(&DAT_00002dbc + unaff_gp) = 9;
  }
  pbVar10 = &DAT_00002e74 + unaff_gp;
  uVar8 = FUN_0000df42((char *)pbVar10);
  if (2 < uVar8) {
    uVar8 = FUN_0000dfbc(pbVar10,(undefined4 *)0x0,10);
    pcVar5 = FUN_0000ddfa((char *)pbVar10,0x2c);
    if (((pcVar5 != (char *)0x0) &&
        (uVar2 = FUN_0000dfbc((byte *)(pcVar5 + 1),(undefined4 *)0x0,10), uVar8 < 8 && uVar2 < 8))
       && (uVar8 != uVar2)) {
      iVar3 = FUN_0000b8a2();
      iVar3 = (**(code **)(iVar3 + 0x84))(uVar2 + 0x4d);
      iVar4 = FUN_0000b8a2();
      uVar6 = (**(code **)(iVar4 + 0x84))(uVar8 + 0x4d);
      if (iVar3 != 0) {
        *(int *)(unaff_gp + 0x314) = iVar3;
        *(undefined4 *)(unaff_gp + 0x310) = uVar6;
        FUN_000097fe((undefined4 *)(unaff_gp + 0x310),(undefined *)(unaff_gp + 0x318));
      }
    }
  }
  uVar7 = FUN_0000df42(&DAT_00002e54 + unaff_gp);
  uVar8 = extraout_r4_00;
  uVar2 = extraout_r5;
  if ((0x10 < uVar7) &&
     (iVar3 = FUN_0000abda(&DAT_00002e54 + unaff_gp,(undefined *)&local_30), uVar8 = extraout_r4_01,
     uVar2 = extraout_r5_00, iVar3 == 0)) {
    *(uint *)(unaff_gp + 0x318) = local_30;
    *(undefined2 *)(unaff_gp + 0x31c) = local_2c;
    uVar8 = (uint)local_2c._1_1_ << 0x10 | (uint)(byte)local_2c << 0x18;
    uVar2 = (local_30 >> 8 & 0xff) << 0x10 | local_30 << 0x18;
    *(uint *)(unaff_gp + 0x310) = uVar8;
    *(uint *)(unaff_gp + 0x314) = (local_30 >> 0x10 & 0xff) << 8 | uVar2 | local_30 >> 0x18;
  }
  iVar3 = *(int *)(&DAT_00002dd0 + unaff_gp);
  if (iVar3 == 0) {
    pcVar5 = (char *)(unaff_gp + 0x328);
    FUN_0000b388((int)pcVar5,0xc,(byte *)s__08x__00001000,*(uint *)(unaff_gp + 0x2c4),uVar8,uVar2);
LAB_00000de0:
    FUN_0000df7a((undefined4 *)(unaff_gp + 0x344),pcVar5,(char *)0x7f);
    *(undefined *)(unaff_gp + 0x3c3) = 0;
  }
  else {
    if (iVar3 == 1) {
      pcVar5 = &DAT_00002dd4 + unaff_gp;
      goto LAB_00000de0;
    }
    if (iVar3 == 2) {
      FUN_0000b388(unaff_gp + 0x344,0x80,&DAT_00001034,(uint)*(byte *)(unaff_gp + 0x318),
                   (uint)*(byte *)(unaff_gp + 0x319),(uint)*(byte *)(unaff_gp + 0x31a));
    }
  }
  FUN_0000a780();
  bVar1 = FUN_0000a7ea();
  if (CONCAT31(extraout_var_00,bVar1) == 0 || *(int *)(&DAT_00002d0c + unaff_gp) == 2) {
    FUN_0000a48c(*(int *)(&DAT_00002d0c + unaff_gp),*(uint *)(&DAT_00002d10 + unaff_gp));
  }
  else {
    *(undefined4 *)(&DAT_00002d0c + unaff_gp) = 0;
    *(undefined4 *)(&DAT_00002d10 + unaff_gp) = 1;
  }
  *(undefined4 *)((int)&PTR_DAT_0000303c + unaff_gp) = 1;
  pbVar10 = &LAB_00002f24 + unaff_gp;
  if ((((&LAB_00002f24)[unaff_gp] == '\0') ||
      (iVar3 = FUN_0000b6f0(pbVar10,(byte *)s_fw_download_alias1_raspberrypi_c_00001054,0x22),
      iVar3 == 0)) || (iVar3 = FUN_0000e642(pbVar10), iVar3 == 0)) {
    cVar11 = '\0';
    FUN_0000df7a((undefined4 *)pbVar10,s_fw_download_alias1_raspberrypi_c_00001054,(char *)0x3f);
    (&DAT_00002f68)[unaff_gp] = 0;
    *(undefined4 *)(&DAT_00002fe8 + unaff_gp) = 1;
  }
  else {
    cVar11 = (&DAT_00002f68)[unaff_gp];
    if ((&DAT_00002fec)[unaff_gp] == '\0') {
      *(undefined4 *)(&DAT_00002fe8 + unaff_gp) = 0;
      if (*(int *)(&DAT_00002f64 + unaff_gp) == 0) {
        *(undefined4 *)(&DAT_00002f64 + unaff_gp) = 0x50;
      }
      goto LAB_00000eec;
    }
    *(undefined4 *)(&DAT_00002fe8 + unaff_gp) = 1;
    if (*(int *)(&DAT_00002f64 + unaff_gp) != 0) goto LAB_00000eec;
  }
  *(undefined4 *)(&DAT_00002f64 + unaff_gp) = 0x1bb;
LAB_00000eec:
  if (cVar11 == '\0') {
    FUN_0000df7a((undefined4 *)(&DAT_00002f68 + unaff_gp),s__net_install__00001008,(char *)0x7f);
    (&DAT_00002fe7)[unaff_gp] = 0;
  }
  if ((*(int *)(*piVar9 + 0xb0) != 0) && (uVar8 = FUN_0000b0b8(), (uVar8 & 0xfffffffe) == 0)) {
    bVar1 = FUN_0000a7f8();
    uVar6 = 0;
    if (((CONCAT31(extraout_var_01,bVar1) != 0) ||
        (bVar1 = FUN_0000a7ea(), CONCAT31(extraout_var_02,bVar1) != 0)) ||
       (((bVar1 = FUN_0000a806(), CONCAT31(extraout_var_03,bVar1) != 0 ||
         (bVar1 = FUN_0000a814(), CONCAT31(extraout_var_04,bVar1) != 0)) &&
        (iVar3 = FUN_0000a4d8(), iVar3 != 0)))) {
      uVar6 = 1;
    }
    *(undefined4 *)(&DAT_00003030 + unaff_gp) = uVar6;
  }
  if ((*(uint *)(unaff_gp + 0x9c) & 0x10000000) != 0) {
    *(undefined4 *)(&DAT_00003030 + unaff_gp) = 0;
  }
  if ((*(int *)(&DAT_00002db8 + unaff_gp) != 0) || (*(int *)(unaff_gp + 0x3ec) != 0)) {
    *(undefined4 *)(&DAT_00003030 + unaff_gp) = 0;
  }
  uVar8 = FUN_0000b0b8();
  if (((uVar8 & 0xfffffffe) != 0) && (*(int *)(&DAT_00002fe8 + unaff_gp) != 0)) {
    *(undefined4 *)(&DAT_00003030 + unaff_gp) = 0;
    *(undefined4 *)((int)&PTR_DAT_0000303c + unaff_gp) = 0;
  }
  if (*(int *)(*piVar9 + 0xc4) != 0) {
    *(undefined4 *)(&DAT_00003040 + unaff_gp) = 500;
  }
  bVar1 = FUN_0000af6a();
  if ((CONCAT31(extraout_var_05,bVar1) == 0) || (*(int *)(&DAT_00003030 + unaff_gp) == 0)) {
    *(int *)(&DAT_00003034 + unaff_gp) = 0;
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(&DAT_00003034 + unaff_gp);
  }
  iVar4 = *piVar9;
  if (iVar3 != 0) {
    *(undefined4 *)(&DAT_00002dbc + unaff_gp) = 0;
    *(undefined4 *)(unaff_gp + 0x2cd4) = 1;
    if (*(int *)(iVar4 + 0xc4) != 0) {
      *(undefined4 *)(&DAT_00003040 + unaff_gp) = 0x1194;
    }
  }
  if (*(int *)(iVar4 + 0x100) != 0) {
    bVar1 = FUN_0000a7bc();
    if ((CONCAT31(extraout_var_06,bVar1) == 0) &&
       (bVar1 = FUN_0000a7ca(), CONCAT31(extraout_var_07,bVar1) == 0)) {
      *(undefined4 *)(&DAT_00003048 + unaff_gp) = 0x6421;
    }
    else {
      *(undefined **)(&DAT_00003048 + unaff_gp) = &DAT_00065421;
    }
  }
  return;
}

