
int FUN_000085b8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *extraout_r3;
  uint extraout_r5;
  int extraout_r5_00;
  int iVar9;
  uint uVar10;
  
  *param_2 = 0;
  uVar7 = param_1[9];
  iVar9 = 0;
  uVar10 = (uint)((uVar7 & 2) == 0);
  if ((uVar7 & 0x10) != 0) {
    uVar10 = uVar10 | 0x10;
  }
  if ((uVar7 & 0x20) != 0) {
    uVar10 = uVar10 | 0x20;
  }
  if (*param_1 == 0) {
    iVar9 = 10000;
  }
  uVar3 = param_1[2];
  uVar7 = 0;
  if (uVar3 != 0) {
    do {
      if (((uint)param_1[3] >> uVar7 & 1) != 0) {
        iVar1 = *(int *)(param_1[5] + uVar7 * 4);
        *(undefined4 *)(&DAT_00012100 + iVar1) = 1;
        *(undefined4 *)(&DAT_00012104 + iVar1) = 0x401;
        *(undefined4 *)(&DAT_00012108 + iVar1) = 2;
        *(undefined4 *)(&DAT_0001210c + iVar1) = 0x8040200;
        *(uint *)(&DAT_00012110 + iVar1) = uVar10;
        piVar4 = FUN_00008296((int)(&DAT_00012100 + iVar1),2);
        iVar5 = FUN_0000815c(extraout_r3,(int)piVar4 + (4 - (int)extraout_r3));
        *piVar4 = iVar5;
        *(undefined4 *)(&DAT_00012010 + iVar1) = 1;
        uVar3 = param_1[2];
        uVar7 = extraout_r5;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  uVar7 = 0;
  if (uVar3 != 0) {
    do {
      if (((uint)param_1[3] >> uVar7 & 1) != 0) {
        iVar1 = *(int *)(param_1[5] + uVar7 * 4);
        iVar5 = FUN_000086e6(iVar1 + 0x10000,param_1[10],iVar9);
        if (iVar5 == 0) {
          piVar4 = (int *)(&DAT_00012100 + iVar1);
          piVar6 = FUN_00008296((int)piVar4,2);
          iVar5 = FUN_0000815c(piVar4,(int)piVar6 + (4 - (int)piVar4));
          if (*piVar6 == iVar5) {
            iVar5 = extraout_r5_00;
            if ((*(uint *)(&DAT_0001210c + iVar1) & 1) != 0) {
              iVar5 = 0x10;
              iVar8 = *(int *)(&DAT_00012108 + iVar1) + -1;
              piVar6 = param_1;
              if (0xc < iVar8) {
                iVar8 = 0xc;
              }
              for (; 0 < iVar8; iVar8 = iVar8 + -1) {
                piVar2 = piVar4 + 4;
                piVar4 = piVar4 + 1;
                piVar6[0xe] = *piVar2;
                piVar6 = piVar6 + 1;
              }
              *param_2 = *(undefined4 *)(&DAT_0001210c + iVar1);
            }
            if ((*(uint *)(&DAT_0001210c + iVar1) & 2) == 2) {
              param_1[1] = 1;
            }
            else {
              param_1[1] = 0;
            }
          }
          else {
            iVar5 = 0xe;
          }
        }
        if (iVar5 != 0) {
          param_1[0xd] = uVar7;
          return iVar5;
        }
        uVar3 = param_1[2];
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  return 0;
}

