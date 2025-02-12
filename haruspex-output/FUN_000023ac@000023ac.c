
void FUN_000023ac(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,undefined4 param_6)

{
  bool bVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r2;
  uint *puVar3;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  uint extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 extraout_r3_04;
  uint uVar4;
  uint extraout_r3_05;
  int extraout_r3_06;
  undefined4 extraout_r3_07;
  undefined4 extraout_r4;
  undefined4 extraout_r4_00;
  undefined4 extraout_r4_01;
  undefined4 uVar5;
  undefined4 extraout_r4_02;
  undefined4 extraout_r4_03;
  undefined4 uVar6;
  uint extraout_r4_04;
  undefined4 extraout_r4_05;
  undefined4 extraout_r4_06;
  undefined4 extraout_r4_07;
  int iVar7;
  int extraout_r5;
  undefined4 extraout_r5_00;
  undefined4 extraout_r5_01;
  undefined4 extraout_r5_02;
  undefined4 uVar8;
  undefined4 extraout_r5_03;
  undefined4 extraout_r5_04;
  undefined4 extraout_r5_05;
  undefined4 extraout_r5_06;
  undefined4 extraout_r5_07;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int unaff_gp;
  
  if (*(int *)(unaff_gp + 100) != 0) {
    iVar11 = *(int *)(param_1 + 0x54);
    uVar4 = (uint)*param_1;
    puVar3 = (uint *)(&LAB_00003170 + uVar4 * 8 + unaff_gp);
    if (iVar11 == 0) {
      iVar11 = 1;
    }
    uVar10 = *puVar3;
    uVar9 = puVar3[1];
    if (uVar4 == 9) {
      uVar6 = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(unaff_gp + 0x31b8) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(unaff_gp + 0x31bc) = uVar6;
    }
    else {
      if (*(int *)(param_1 + 0x2c) == 0) {
        FUN_00009cdc(0,*(int *)(unaff_gp + 100),puVar3,uVar4,param_5,param_6);
        uVar4 = extraout_r3_05;
        param_5 = extraout_r4_04;
      }
      if (uVar9 == 0 && uVar10 == 0) {
        uVar10 = *(uint *)(param_1 + 4);
        uVar9 = *(uint *)(param_1 + 8);
      }
      puVar3 = *(uint **)(param_1 + 0x30);
      if ((puVar3 == (uint *)0x0) || (param_5 = *puVar3, (param_5 & 0x100) == 0)) {
        FUN_00001c60((uint)param_1,uVar10,uVar9,uVar4,param_5,puVar3);
        puVar3 = (uint *)(&LAB_00003170 + (uint)*param_1 * 8 + unaff_gp);
        *puVar3 = uVar10;
        puVar3[1] = uVar9;
      }
      else {
        uVar4 = FUN_00001d7e((int)param_1,uVar10,uVar9);
        bVar2 = FUN_00001ebe((char *)param_1);
        iVar7 = *(int *)(unaff_gp + 100);
        uVar12 = 0xf;
        if (CONCAT31(extraout_var_01,bVar2) == 0) {
          uVar12 = 4;
        }
        uVar6 = extraout_r2_00;
        uVar5 = extraout_r4_05;
        uVar8 = extraout_r5_05;
        if (iVar7 == 0) {
          **(uint **)(param_1 + 0x20) = uVar12 | 0x5a800000;
          FUN_0000bf1c(0x14);
          uVar6 = extraout_r2_01;
          iVar7 = extraout_r3_06;
          uVar5 = extraout_r4_06;
          uVar8 = extraout_r5_06;
        }
        puVar3 = *(uint **)(param_1 + 0x20);
        *puVar3 = uVar12 | 0x5a000000;
        FUN_00001f04(param_1,puVar3,uVar6,iVar7,uVar5,uVar8);
        FUN_0000bf38((uint)*param_1,0);
        bVar2 = FUN_00001ebe((char *)param_1);
        **(uint **)(param_1 + 0x2c) =
             uVar4 >> 0x14 & 0x3ff |
             iVar11 << 0xc | (uint)(CONCAT31(extraout_var_02,bVar2) != 0) << 0x12 | 0x5a000000;
        FUN_00002378((char *)param_1);
        puVar3 = (uint *)(&LAB_00003170 + (uint)*param_1 * 8 + unaff_gp);
        *puVar3 = uVar10;
        puVar3[1] = uVar9;
        FUN_0000bf1c(2);
        **(uint **)(param_1 + 0x30) = **(uint **)(param_1 + 0x30) & 0xfffffeff | 0x5a000000;
        FUN_00002676((int)param_1);
        FUN_00001c60((uint)param_1,uVar10,uVar9,extraout_r3_07,extraout_r4_07,extraout_r5_07);
        **(uint **)(param_1 + 0x2c) = **(uint **)(param_1 + 0x2c) | 0x5a020000;
        FUN_0000bf98((uint)*param_1);
        FUN_000026b6();
      }
    }
    return;
  }
  uVar10 = (uint)*param_1;
  iVar11 = *(int *)(param_1 + 0x54);
  bVar2 = uVar10 == 4;
  puVar3 = (uint *)(&LAB_00003170 + uVar10 * 8 + unaff_gp);
  uVar4 = *puVar3;
  uVar9 = puVar3[1];
  if (iVar11 == 0) {
    iVar11 = 1;
  }
  if (uVar10 == 9) {
    uVar6 = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(unaff_gp + 0x31b8) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(unaff_gp + 0x31bc) = uVar6;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x2c);
    if (iVar7 == 0) {
      FUN_00009cdc(puVar3,0,param_3,uVar10,param_5,0);
      uVar10 = extraout_r3;
      iVar7 = extraout_r5;
    }
    if (uVar9 == 0 && uVar4 == 0) {
      uVar4 = *(uint *)(param_1 + 4);
      uVar9 = *(uint *)(param_1 + 8);
    }
    puVar3 = *(uint **)(param_1 + 0x30);
    if ((puVar3 == (uint *)0x0) || ((*puVar3 & 0x100) == 0)) {
      FUN_00001c60((uint)param_1,uVar4,uVar9,uVar10,puVar3,iVar7);
      puVar3 = (uint *)(&LAB_00003170 + (uint)*param_1 * 8 + unaff_gp);
      *puVar3 = uVar4;
      puVar3[1] = uVar9;
    }
    else {
      uVar10 = FUN_00001d7e((int)param_1,uVar4,uVar9);
      if (!bVar2) {
        bVar1 = FUN_00001ebe((char *)param_1);
        uVar12 = 0xf;
        if (CONCAT31(extraout_var,bVar1) == 0) {
          uVar12 = 4;
        }
        **(uint **)(param_1 + 0x20) = uVar12 | 0x5a800000;
        FUN_0000bf1c(0x14);
        puVar3 = *(uint **)(param_1 + 0x20);
        *puVar3 = uVar12 | 0x5a000000;
        FUN_00001f04(param_1,extraout_r1,puVar3,extraout_r3_00,extraout_r4,extraout_r5_00);
      }
      FUN_0000bf38((uint)*param_1,0);
      bVar1 = FUN_00001ebe((char *)param_1);
      **(uint **)(param_1 + 0x2c) =
           uVar10 >> 0x14 & 0x3ff |
           iVar11 << 0xc | (uint)(CONCAT31(extraout_var_00,bVar1) != 0) << 0x12 | 0x5a000000;
      FUN_00002378((char *)param_1);
      puVar3 = (uint *)(&LAB_00003170 + (uint)*param_1 * 8 + unaff_gp);
      *puVar3 = uVar4;
      puVar3[1] = uVar9;
      FUN_0000bf1c(2);
      uVar6 = extraout_r3_01;
      uVar5 = extraout_r4_00;
      uVar8 = extraout_r5_01;
      if (!bVar2) {
        **(uint **)(param_1 + 0x30) = **(uint **)(param_1 + 0x30) & 0xfffffeff | 0x5a000000;
        FUN_00002676((int)param_1);
        uVar6 = extraout_r3_02;
        uVar5 = extraout_r4_01;
        uVar8 = extraout_r5_02;
      }
      FUN_00001c60((uint)param_1,uVar4,uVar9,uVar6,uVar5,uVar8);
      if (bVar2) {
        FUN_00001f04(param_1,extraout_r1_00,extraout_r2,extraout_r3_03,extraout_r4_02,extraout_r5_03
                    );
        **(undefined4 **)(param_1 + 0x20) = 0x5a800004;
        FUN_0000bf1c(100);
        **(undefined4 **)(param_1 + 0x20) = 0x5a000004;
        FUN_0000bf1c(100);
        **(uint **)(param_1 + 0x30) = **(uint **)(param_1 + 0x30) & 0xfffffeff | 0x5a000000;
        FUN_00002676((int)param_1);
        FUN_00001c60((uint)param_1,uVar4,uVar9,extraout_r3_04,extraout_r4_03,extraout_r5_04);
      }
      **(uint **)(param_1 + 0x2c) = **(uint **)(param_1 + 0x2c) | 0x5a020000;
      FUN_0000bf98((uint)*param_1);
      FUN_000026b6();
    }
  }
  return;
}

