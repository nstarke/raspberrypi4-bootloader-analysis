
/* WARNING: Removing unreachable block (ram,0x00005bc4) */
/* WARNING: Removing unreachable block (ram,0x00005b26) */
/* WARNING: Removing unreachable block (ram,0x00005af2) */
/* WARNING: Removing unreachable block (ram,0x00005bf8) */

undefined8
FUN_000059de(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            ulonglong *param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  
  if ((param_6 == 0 && param_5 == 0) ||
     ((param_6 <= param_2 && ((param_2 != param_6 || (param_5 <= param_1)))))) {
    iVar1 = -1;
    iVar3 = -1;
    if (param_7 != (ulonglong *)0x0) {
      *(undefined4 *)param_7 = 0xffffffff;
      *(undefined4 *)((int)param_7 + 4) = 0xffffffff;
    }
  }
  else {
    uVar2 = FUN_00005930(param_5,param_6);
    lVar13 = FUN_000003c8(param_5,param_6,uVar2);
    uVar4 = (uint)((ulonglong)lVar13 >> 0x20);
    uVar5 = (uint)lVar13;
    lVar13 = FUN_000003c8(param_1,param_2,uVar2);
    uVar14 = FUN_0000036e(param_3,param_4,0x40 - uVar2);
    uVar6 = (int)(uVar2 | -uVar2) >> 0x1f;
    uVar7 = (uint)lVar13 | (uint)uVar14 & uVar6;
    uVar10 = (uint)((ulonglong)lVar13 >> 0x20) | (uint)(uVar14 >> 0x20) & uVar6;
    lVar13 = FUN_000003c8(param_3,param_4,uVar2);
    uVar8 = (uint)((ulonglong)lVar13 >> 0x20);
    uVar6 = (uint)lVar13;
    uVar14 = FUN_00000224(uVar7,uVar10,uVar4,0);
    iVar1 = (int)(uVar14 >> 0x20);
    uVar15 = FUN_0000039c((uint)uVar14,iVar1,uVar4,0);
    iVar3 = uVar10 - (int)((ulonglong)uVar15 >> 0x20);
    if (uVar7 < (uint)uVar15) {
      iVar3 = iVar3 + -1;
    }
    uVar9 = uVar7 - (uint)uVar15;
    if (iVar1 != 0) goto LAB_00005afa;
    while( true ) {
      uVar16 = FUN_0000039c((uint)uVar14,(int)(uVar14 >> 0x20),uVar5,0);
      uVar15 = FUN_0000039c(uVar9,iVar3,0,1);
      iVar1 = (int)((ulonglong)uVar15 >> 0x20);
      if (CARRY4((uint)uVar15,uVar8)) {
        iVar1 = iVar1 + 1;
      }
      if (uVar16 <= CONCAT44(iVar1,(uint)uVar15 + uVar8)) break;
LAB_00005afa:
      while( true ) {
        iVar12 = (int)(uVar14 >> 0x20);
        iVar1 = (int)uVar14 + -1;
        if ((int)uVar14 == 0) {
          iVar12 = iVar12 + -1;
        }
        uVar14 = CONCAT44(iVar12,iVar1);
        if (CARRY4(uVar9,uVar4)) {
          iVar3 = iVar3 + 1;
        }
        uVar9 = uVar9 + uVar4;
        if (iVar3 != 0) {
          uVar14 = CONCAT44(iVar12,iVar1);
          if (iVar3 == 1) {
            uVar14 = CONCAT44(iVar12,iVar1);
          }
          goto LAB_00005b28;
        }
        if (iVar12 == 0) break;
        uVar14 = CONCAT44(iVar12,iVar1);
        if (iVar12 == 1) {
          uVar14 = CONCAT44(iVar12,iVar1);
        }
      }
    }
LAB_00005b28:
    iVar12 = (int)(uVar14 >> 0x20);
    uVar15 = FUN_0000039c(uVar7,uVar10,0,1);
    uVar17 = FUN_0000039c((uint)uVar14,iVar12,uVar5,uVar4);
    iVar1 = -(int)((ulonglong)uVar17 >> 0x20);
    uVar7 = uVar8 - (uint)uVar17;
    if (uVar8 < (uint)uVar17) {
      iVar1 = iVar1 + -1;
    }
    uVar10 = (int)((ulonglong)uVar15 >> 0x20) + iVar1;
    uVar8 = (uint)uVar15 + uVar7;
    if (CARRY4(uVar7,(uint)uVar15)) {
      uVar10 = uVar10 + 1;
    }
    uVar16 = FUN_00000224(uVar8,uVar10,uVar4,0);
    iVar1 = (int)(uVar16 >> 0x20);
    uVar15 = FUN_0000039c((uint)uVar16,iVar1,uVar4,0);
    iVar3 = uVar10 - (int)((ulonglong)uVar15 >> 0x20);
    if (uVar8 < (uint)uVar15) {
      iVar3 = iVar3 + -1;
    }
    uVar7 = uVar8 - (uint)uVar15;
    if (iVar1 != 0) goto LAB_00005bcc;
    while( true ) {
      uVar18 = FUN_0000039c((uint)uVar16,(int)(uVar16 >> 0x20),uVar5,0);
      uVar15 = FUN_0000039c(uVar7,iVar3,0,1);
      iVar1 = (int)((ulonglong)uVar15 >> 0x20);
      if (CARRY4((uint)uVar15,uVar6)) {
        iVar1 = iVar1 + 1;
      }
      if (uVar18 <= CONCAT44(iVar1,(uint)uVar15 + uVar6)) break;
LAB_00005bcc:
      while( true ) {
        iVar11 = (int)(uVar16 >> 0x20);
        iVar1 = (int)uVar16 + -1;
        if ((int)uVar16 == 0) {
          iVar11 = iVar11 + -1;
        }
        uVar16 = CONCAT44(iVar11,iVar1);
        if (CARRY4(uVar7,uVar4)) {
          iVar3 = iVar3 + 1;
        }
        uVar7 = uVar7 + uVar4;
        if (iVar3 != 0) {
          uVar16 = CONCAT44(iVar11,iVar1);
          if (iVar3 == 1) {
            uVar16 = CONCAT44(iVar11,iVar1);
          }
          goto LAB_00005bfa;
        }
        if (iVar11 == 0) break;
        uVar16 = CONCAT44(iVar11,iVar1);
        if (iVar11 == 1) {
          uVar16 = CONCAT44(iVar11,iVar1);
        }
      }
    }
LAB_00005bfa:
    iVar3 = (int)(uVar16 >> 0x20);
    uVar7 = (uint)uVar16;
    if (param_7 != (ulonglong *)0x0) {
      uVar15 = FUN_0000039c(uVar8,uVar10,0,1);
      iVar1 = (int)((ulonglong)uVar15 >> 0x20);
      uVar8 = uVar6 + (uint)uVar15;
      if (CARRY4((uint)uVar15,uVar6)) {
        iVar1 = iVar1 + 1;
      }
      uVar15 = FUN_0000039c(uVar7,iVar3,uVar5,uVar4);
      uVar5 = iVar1 - (int)((ulonglong)uVar15 >> 0x20);
      if (uVar8 < (uint)uVar15) {
        uVar5 = uVar5 - 1;
      }
      uVar16 = FUN_0000036e(uVar8 - (uint)uVar15,uVar5,uVar2);
      *param_7 = uVar16;
    }
    uVar15 = FUN_0000039c((uint)uVar14,iVar12,0,1);
    iVar3 = (int)((ulonglong)uVar15 >> 0x20) + iVar3;
    iVar1 = (uint)uVar15 + uVar7;
    if (CARRY4((uint)uVar15,uVar7)) {
      iVar3 = iVar3 + 1;
    }
  }
  return CONCAT44(iVar3,iVar1);
}

