
void FUN_0000ccee(uint param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar3;
  uint extraout_r3;
  uint extraout_r3_00;
  int extraout_r4;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint extraout_r5;
  uint extraout_r5_00;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  if (*(code **)(param_1 + 0x60) == (code *)0x0) {
    uVar2 = *(uint *)(param_1 + 0x5c);
    iVar12 = 0;
    if (0 < (int)uVar2) {
      iVar15 = 0;
      iVar5 = 0;
      uVar7 = param_1;
      uVar11 = param_2;
      do {
        uVar17 = CONCAT44(uVar11,uVar7);
        uVar11 = *(uint *)(param_1 + 0x40);
        iVar9 = *(int *)(param_1 + 0x58) + iVar15;
        uVar3 = (uint)*(byte *)(iVar9 + 4);
        uVar7 = *(uint *)(iVar9 + 0x18);
        uVar10 = *(uint *)(iVar9 + 0x14);
        iVar14 = *(int *)(iVar9 + 8);
        iVar13 = param_5;
        if (uVar3 != 2) {
          iVar13 = param_4;
        }
        uVar6 = uVar7 | uVar10;
        if (uVar6 != 0) {
          uVar2 = 2;
          if (*(int *)(param_1 + 0x50) != 2) {
            uVar2 = 1;
          }
          uVar17 = FUN_00000224(param_2,param_3,uVar2,0);
          uVar3 = (uint)(uVar17 >> 0x20);
          uVar18 = FUN_00000224((uint)uVar17,uVar3,uVar10,uVar7);
          uVar2 = (uint)uVar18;
          *(uint *)(iVar9 + 0x10) = uVar2;
          if (uVar2 < 2) {
            uVar2 = 2;
          }
          *(uint *)(iVar9 + 0x10) = uVar2;
          uVar17 = FUN_00000224((uint)uVar17,uVar3,uVar2,0);
          *(ulonglong *)(iVar9 + 0x14) = uVar17;
          uVar2 = extraout_r2;
          uVar3 = extraout_r3;
          iVar5 = extraout_r4;
          uVar6 = extraout_r5;
        }
        uVar7 = *(uint *)(iVar9 + 0xc);
        uVar10 = uVar11;
        if (uVar7 < uVar11) {
          iVar8 = 0x18 - (uVar11 - uVar7);
          if (iVar14 < 1) {
            FUN_00009cdc((int)uVar17,(int)(uVar17 >> 0x20),uVar2,uVar3,iVar5,uVar6);
            uVar10 = *(uint *)(param_1 + 0x40);
            uVar3 = extraout_r3_00;
            uVar6 = extraout_r5_00;
          }
          iVar14 = iVar14 + -1;
          uVar11 = uVar11 - uVar7;
        }
        else {
          iVar8 = uVar7 - uVar11;
        }
        puVar16 = (uint *)(iVar13 + iVar14 * 4);
        uVar7 = (1 << uVar11) + -1 << iVar8;
        uVar1 = *puVar16 & ~uVar7;
        *puVar16 = uVar1;
        uVar4 = *(uint *)(iVar9 + 0x10) & (1 << uVar11) - 1U;
        uVar2 = uVar4 << iVar8 | uVar1;
        *puVar16 = uVar2;
        if (uVar11 != uVar10) {
          iVar14 = iVar14 + 1;
          puVar16 = (uint *)(iVar13 + iVar14 * 4);
          iVar8 = 0;
          uVar3 = *(uint *)(iVar9 + 0x10) >> uVar11;
          uVar11 = uVar10 - uVar11;
          *(uint *)(iVar9 + 0x10) = uVar3;
          uVar2 = (1 << uVar11) - 1;
          uVar7 = *puVar16 & ~uVar2;
          *puVar16 = uVar7;
          uVar6 = *(uint *)(iVar9 + 0x10) & (1 << uVar11) - 1U | uVar7;
          *puVar16 = uVar6;
        }
        iVar8 = uVar11 + iVar8;
        if (0x17 < iVar8) {
          iVar14 = iVar14 + 1;
          iVar8 = 0;
          puVar16 = (uint *)(iVar13 + iVar14 * 4);
        }
        if (3 < iVar14) {
          uVar7 = FUN_00009cdc(uVar7,uVar1,uVar2,uVar3,uVar4,uVar6);
          uVar2 = extraout_r2_00;
        }
        uVar11 = *(uint *)(iVar9 + 0x24);
        iVar5 = *(int *)(param_1 + 0x5c);
        if (uVar11 == 0) {
          uVar3 = *puVar16 | 1 << iVar8;
        }
        else {
          uVar3 = *puVar16 & ~(1 << iVar8);
        }
        *puVar16 = uVar3;
        iVar15 = iVar15 + 0x28;
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar5);
    }
  }
  else {
    (**(code **)(param_1 + 0x60))(param_1,param_4,param_5);
  }
  return;
}

