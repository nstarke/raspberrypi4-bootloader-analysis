
undefined4 FUN_000084ac(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  
  pcVar2 = *(code **)(*(int *)(param_1 + 0x28) + 0x14);
  if ((pcVar2 == (code *)0x0) || (iVar3 = (*pcVar2)(), iVar3 == 0)) {
    uVar5 = *(uint *)(param_1 + 8);
    uVar10 = 0;
    if (uVar5 != 0) {
      do {
        if ((*(uint *)(param_1 + 0xc) >> uVar10 & 1) != 0) {
          piVar4 = *(int **)(param_1 + 0x2c);
          iVar12 = 0;
          iVar3 = *(int *)(*(int *)(param_1 + 0x14) + uVar10 * 4);
          iVar7 = 0x2000;
          *(undefined4 *)(&DAT_00012000 + iVar3) = 1;
          piVar11 = (int *)(iVar3 + 0x18000);
          piVar8 = piVar11;
          do {
            *piVar8 = 0;
            iVar7 = iVar7 + -1;
            piVar8 = piVar8 + 1;
          } while (0 < iVar7);
          piVar9 = (int *)(&DAT_00014000 + iVar3);
          iVar3 = 0x800;
          piVar8 = piVar9;
          do {
            *piVar8 = 0;
            iVar3 = iVar3 + -1;
            piVar8 = piVar8 + 1;
          } while (0 < iVar3);
          iVar3 = 0x2000;
          piVar8 = piVar11;
          piVar6 = piVar4;
          do {
            piVar1 = piVar6 + 3;
            piVar6 = piVar6 + 1;
            *piVar8 = *piVar1;
            iVar3 = iVar3 + -1;
            piVar8 = piVar8 + 1;
          } while (0 < iVar3);
          piVar6 = piVar4 + 0x2000;
          iVar3 = 0x800;
          piVar8 = piVar9;
          do {
            piVar1 = piVar6 + 3;
            piVar6 = piVar6 + 1;
            *piVar8 = *piVar1;
            iVar3 = iVar3 + -1;
            piVar8 = piVar8 + 1;
          } while (0 < iVar3);
          iVar3 = 0x2000;
          do {
            iVar12 = iVar12 + *piVar11;
            iVar3 = iVar3 + -1;
            piVar11 = piVar11 + 1;
          } while (0 < iVar3);
          if (iVar12 != piVar4[1]) {
            *(uint *)(param_1 + 0x34) = uVar10;
            uVar5 = 9;
LAB_0000857a:
            FUN_00009170(param_1 + 0x68,uVar5);
            return 1;
          }
          iVar3 = 0;
          iVar7 = 0x800;
          do {
            iVar3 = iVar3 + *piVar9;
            iVar7 = iVar7 + -1;
            piVar9 = piVar9 + 1;
          } while (0 < iVar7);
          if (iVar3 != *piVar4) {
            *(uint *)(param_1 + 0x34) = uVar10;
            uVar5 = 10;
            goto LAB_0000857a;
          }
          uVar5 = *(uint *)(param_1 + 8);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar5);
    }
  }
  return 0;
}

