
undefined4 FUN_000082a4(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  int extraout_r5;
  uint extraout_r5_00;
  undefined4 extraout_r5_01;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  
  uVar4 = param_1[2];
  uVar10 = 0;
  if (uVar4 != 0) {
    do {
      if ((param_1[3] >> uVar10 & 1) != 0) {
        iVar1 = *(int *)(param_1[5] + uVar10 * 4);
        *(int *)(&DAT_00012100 + iVar1) = 1;
        *(undefined4 *)(&DAT_00012104 + iVar1) = 0x101;
        *(undefined4 *)(&DAT_00012108 + iVar1) = 2;
        *(undefined4 *)(&DAT_0001210c + iVar1) = 0x8040200;
        if ((param_1[9] & 4) == 0) {
          *(undefined4 *)(&DAT_00012110 + iVar1) = 0;
        }
        else {
          *(undefined4 *)(&DAT_00012110 + iVar1) = 1;
        }
        iVar3 = FUN_0000815c((int *)(&DAT_00012100 + iVar1),0x18);
        *(int *)(&DAT_00012114 + iVar1) = iVar3;
        *(undefined4 *)(extraout_r5 + 0x2010) = 1;
        uVar4 = param_1[2];
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar4);
  }
  uVar10 = 0;
  if (uVar4 != 0) {
    do {
      if ((param_1[3] >> uVar10 & 1) != 0) {
        iVar1 = *(int *)(param_1[5] + uVar10 * 4);
        uVar4 = FUN_000086e6(iVar1 + 0x10000,param_1[10],0);
        if (uVar4 == 0) {
          iVar3 = FUN_0000815c((int *)(&DAT_00012100 + iVar1),0x34);
          if (iVar3 == *(int *)(&DAT_00012130 + iVar1)) {
            if (*(int *)(&DAT_0001210c + iVar1) == *(int *)(param_1[0xc] + 0xc)) {
              uVar4 = extraout_r5_00;
              if ((*(uint *)(&DAT_00012110 + iVar1) & 0xff00) >> 8 != *param_1) {
                uVar4 = 0xc;
              }
            }
            else {
              uVar4 = 8;
            }
          }
          else {
            uVar4 = 0xe;
          }
          iVar3 = 0xd;
          piVar12 = (int *)(uVar10 * 0x34 + param_2);
          piVar5 = (int *)(&DAT_00012100 + iVar1);
          piVar6 = piVar12;
          do {
            *piVar6 = *piVar5;
            iVar3 = iVar3 + -1;
            piVar5 = piVar5 + 1;
            piVar6 = piVar6 + 1;
          } while (0 < iVar3);
          if (param_1[0x1c] != 0) {
            puVar9 = (undefined4 *)(uVar10 * 0x4c + param_1[0x1c]);
            puVar9[1] = 1;
            if (*(int *)(&DAT_00012128 + iVar1) != 0) {
              iVar11 = 0;
              iVar3 = 0x13;
              puVar7 = puVar9;
              do {
                iVar2 = iVar11 + piVar12[10] + iVar1;
                iVar11 = iVar11 + 4;
                *puVar7 = *(undefined4 *)(&DAT_00014000 + iVar2);
                iVar3 = iVar3 + -1;
                puVar7 = puVar7 + 1;
              } while (0 < iVar3);
              uVar8 = puVar9[0xc];
              puVar9[0xc] = uVar8 >> 0x18 |
                            (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
              uVar8 = puVar9[0xd];
              puVar9[0xd] = uVar8 >> 0x18 |
                            (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
            }
          }
        }
        if (uVar4 != 0) {
          param_1[0xd] = uVar10;
          FUN_00009170((int)(param_1 + 0x1a),uVar4);
          return extraout_r5_01;
        }
        uVar4 = param_1[2];
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar4);
  }
  return 0;
}

