
/* WARNING: Removing unreachable block (ram,0x0000964a) */
/* WARNING: Removing unreachable block (ram,0x00009536) */
/* WARNING: Removing unreachable block (ram,0x000093fa) */
/* WARNING: Removing unreachable block (ram,0x00009426) */
/* WARNING: Removing unreachable block (ram,0x0000955c) */
/* WARNING: Removing unreachable block (ram,0x00009674) */

void FUN_00009366(uint param_1,uint *param_2,uint *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar5 = 0;
  uVar9 = 0;
  if (0xf < param_1) {
    do {
      iVar10 = 0x10;
      uVar3 = uVar9;
      do {
        puVar11 = param_2 + 1;
        uVar9 = *param_2;
        param_2 = param_2 + 2;
        uVar1 = *puVar11;
        uVar13 = FUN_0000039c(param_5,0,uVar9,0);
        uVar8 = (uint)((ulonglong)uVar13 >> 0x20);
        uVar4 = (uint)uVar13;
        uVar13 = FUN_0000039c(param_4,0,uVar9,0);
        uVar14 = FUN_0000039c(param_4,0,uVar1,0);
        uVar7 = (uint)((ulonglong)uVar14 >> 0x20);
        uVar6 = (uint)uVar14;
        uVar14 = FUN_0000039c(param_5,0,uVar1,0);
        uVar9 = (uint)((ulonglong)uVar14 >> 0x20);
        uVar1 = uVar8 + (uint)uVar14;
        if (CARRY4(uVar8,(uint)uVar14)) {
          uVar9 = uVar9 + 1;
        }
        if (CARRY4(uVar7,uVar1)) {
          uVar9 = uVar9 + 1;
        }
        uVar8 = uVar4 + (int)((ulonglong)uVar13 >> 0x20);
        uVar7 = uVar7 + uVar1;
        uVar1 = (uint)(uVar8 != uVar4 && uVar8 < uVar4);
        if (CARRY4(uVar1,uVar7)) {
          uVar9 = uVar9 + 1;
        }
        uVar8 = uVar8 + uVar6;
        uVar7 = uVar7 + uVar1;
        uVar2 = uVar8 + uVar3;
        uVar1 = *param_3;
        uVar4 = (uint)(uVar8 != uVar6 && uVar8 < uVar6);
        if (CARRY4(uVar4,uVar7)) {
          uVar9 = uVar9 + 1;
        }
        uVar7 = uVar7 + uVar4;
        if (CARRY4((uint)uVar13,uVar5)) {
          uVar2 = uVar2 + 1;
        }
        uVar4 = (uint)uVar13 + uVar5;
        bVar12 = uVar3 < uVar2;
        if (uVar3 == uVar2) {
          bVar12 = uVar5 < uVar4;
        }
        uVar3 = (uint)(!bVar12 && (uVar3 != uVar2 || uVar5 != uVar4));
        uVar5 = param_3[1];
        if (CARRY4(uVar3,uVar7)) {
          uVar9 = uVar9 + 1;
        }
        uVar2 = uVar2 + uVar5;
        *param_3 = uVar4 + uVar1;
        if (CARRY4(uVar1,uVar4)) {
          uVar2 = uVar2 + 1;
        }
        param_3[1] = uVar2;
        bVar12 = uVar2 < uVar5;
        if (uVar2 == uVar5) {
          bVar12 = uVar4 + uVar1 < uVar1;
        }
        uVar3 = uVar3 + uVar7;
        param_3 = param_3 + 2;
        uVar5 = bVar12 + uVar3;
        if (CARRY4((uint)bVar12,uVar3)) {
          uVar9 = uVar9 + 1;
        }
        iVar10 = iVar10 + -1;
        uVar3 = uVar9;
      } while (0 < iVar10);
      param_1 = param_1 - 0x10;
    } while (0xf < param_1);
  }
  for (; 7 < param_1; param_1 = param_1 - 8) {
    iVar10 = 4;
    uVar3 = uVar9;
    do {
      puVar11 = param_2 + 1;
      uVar9 = *param_2;
      param_2 = param_2 + 2;
      uVar1 = *puVar11;
      uVar13 = FUN_0000039c(param_5,0,uVar9,0);
      uVar8 = (uint)((ulonglong)uVar13 >> 0x20);
      uVar4 = (uint)uVar13;
      uVar13 = FUN_0000039c(param_4,0,uVar9,0);
      uVar14 = FUN_0000039c(param_4,0,uVar1,0);
      uVar7 = (uint)((ulonglong)uVar14 >> 0x20);
      uVar6 = (uint)uVar14;
      uVar14 = FUN_0000039c(param_5,0,uVar1,0);
      uVar9 = (uint)((ulonglong)uVar14 >> 0x20);
      uVar1 = (uint)uVar14 + uVar8;
      if (CARRY4(uVar8,(uint)uVar14)) {
        uVar9 = uVar9 + 1;
      }
      uVar8 = uVar1 + uVar7;
      if (CARRY4(uVar7,uVar1)) {
        uVar9 = uVar9 + 1;
      }
      uVar7 = uVar4 + (int)((ulonglong)uVar13 >> 0x20);
      uVar1 = param_3[1];
      uVar4 = (uint)(uVar7 != uVar4 && uVar7 < uVar4);
      uVar7 = uVar7 + uVar6;
      if (CARRY4(uVar4,uVar8)) {
        uVar9 = uVar9 + 1;
      }
      uVar8 = uVar8 + uVar4;
      uVar4 = (uint)(uVar7 != uVar6 && uVar7 < uVar6);
      uVar7 = uVar7 + uVar3;
      uVar6 = uVar4 + uVar8;
      if (CARRY4(uVar4,uVar8)) {
        uVar9 = uVar9 + 1;
      }
      if (CARRY4((uint)uVar13,uVar5)) {
        uVar7 = uVar7 + 1;
      }
      uVar4 = (uint)uVar13 + uVar5;
      bVar12 = uVar3 < uVar7;
      if (uVar3 == uVar7) {
        bVar12 = uVar5 < uVar4;
      }
      uVar2 = uVar7 + uVar1;
      uVar3 = (uint)(!bVar12 && (uVar3 != uVar7 || uVar5 != uVar4));
      uVar8 = uVar3 + uVar6;
      uVar5 = *param_3;
      if (CARRY4(uVar3,uVar6)) {
        uVar9 = uVar9 + 1;
      }
      if (CARRY4(uVar4,uVar5)) {
        uVar2 = uVar2 + 1;
      }
      uVar4 = uVar4 + uVar5;
      *param_3 = uVar4;
      bVar12 = uVar1 < uVar2;
      param_3[1] = uVar2;
      if (uVar1 == uVar2) {
        bVar12 = uVar5 < uVar4;
      }
      uVar3 = (uint)(!bVar12 && (uVar1 != uVar2 || uVar5 != uVar4));
      param_3 = param_3 + 2;
      uVar5 = uVar3 + uVar8;
      if (CARRY4(uVar3,uVar8)) {
        uVar9 = uVar9 + 1;
      }
      iVar10 = iVar10 + -1;
      uVar3 = uVar9;
    } while (0 < iVar10);
  }
  for (; param_1 != 0; param_1 = param_1 - 1) {
    puVar11 = param_2 + 1;
    uVar3 = *param_2;
    param_2 = param_2 + 2;
    uVar1 = *puVar11;
    uVar13 = FUN_0000039c(param_5,0,uVar3,0);
    uVar6 = (uint)((ulonglong)uVar13 >> 0x20);
    uVar4 = (uint)uVar13;
    uVar13 = FUN_0000039c(param_4,0,uVar3,0);
    uVar14 = FUN_0000039c(param_4,0,uVar1,0);
    uVar8 = (uint)((ulonglong)uVar14 >> 0x20);
    uVar3 = (uint)uVar14;
    uVar14 = FUN_0000039c(param_5,0,uVar1,0);
    uVar1 = (uint)((ulonglong)uVar14 >> 0x20);
    uVar7 = uVar6 + (uint)uVar14;
    if (CARRY4(uVar6,(uint)uVar14)) {
      uVar1 = uVar1 + 1;
    }
    if (CARRY4(uVar8,uVar7)) {
      uVar1 = uVar1 + 1;
    }
    uVar6 = (int)((ulonglong)uVar13 >> 0x20) + uVar4;
    uVar7 = uVar7 + uVar8;
    uVar4 = (uint)(uVar6 != uVar4 && uVar6 < uVar4);
    uVar8 = uVar7 + uVar4;
    if (CARRY4(uVar4,uVar7)) {
      uVar1 = uVar1 + 1;
    }
    uVar6 = uVar3 + uVar6;
    uVar4 = uVar6 + uVar9;
    uVar3 = (uint)(uVar6 != uVar3 && uVar6 < uVar3);
    if (CARRY4(uVar3,uVar8)) {
      uVar1 = uVar1 + 1;
    }
    if (CARRY4((uint)uVar13,uVar5)) {
      uVar4 = uVar4 + 1;
    }
    uVar6 = (uint)uVar13 + uVar5;
    bVar12 = uVar9 < uVar4;
    uVar3 = uVar3 + uVar8;
    if (uVar9 == uVar4) {
      bVar12 = uVar5 < uVar6;
    }
    uVar5 = (uint)(!bVar12 && (uVar9 != uVar4 || uVar5 != uVar6));
    uVar8 = uVar5 + uVar3;
    uVar9 = *param_3;
    uVar7 = param_3[1];
    if (CARRY4(uVar5,uVar3)) {
      uVar1 = uVar1 + 1;
    }
    uVar5 = uVar6 + uVar9;
    *param_3 = uVar5;
    uVar4 = uVar4 + uVar7;
    if (CARRY4(uVar6,uVar9)) {
      uVar4 = uVar4 + 1;
    }
    param_3[1] = uVar4;
    bVar12 = uVar7 < uVar4;
    param_3 = param_3 + 2;
    if (uVar7 == uVar4) {
      bVar12 = uVar9 < uVar5;
    }
    uVar9 = (uint)(!bVar12 && (uVar7 != uVar4 || uVar9 != uVar5));
    uVar5 = uVar9 + uVar8;
    if (CARRY4(uVar9,uVar8)) {
      uVar1 = uVar1 + 1;
    }
    uVar9 = uVar1;
  }
  do {
    uVar3 = *param_3;
    uVar1 = uVar3 + uVar5;
    *param_3 = uVar1;
    uVar4 = param_3[1] + uVar9;
    if (CARRY4(uVar3,uVar5)) {
      uVar4 = uVar4 + 1;
    }
    param_3[1] = uVar4;
    bVar12 = uVar9 < uVar4;
    param_3 = param_3 + 2;
    if (uVar9 == uVar4) {
      bVar12 = uVar5 < uVar1;
    }
    uVar5 = (uint)(!bVar12 && (uVar9 != uVar4 || uVar5 != uVar1));
    uVar9 = 0;
  } while (uVar5 != 0);
  return;
}

