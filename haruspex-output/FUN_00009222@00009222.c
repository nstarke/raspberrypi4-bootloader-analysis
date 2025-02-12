
undefined4 FUN_00009222(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  
  if ((*(uint *)(param_6 + 4) < *(int *)(param_3 + 4) + 1U) ||
     (*(undefined4 **)(param_6 + 8) == (undefined4 *)0x0)) {
    uVar5 = 0xfffffffc;
  }
  else {
    FUN_00007e18(*(undefined4 **)(param_6 + 8),0,*(uint *)(param_6 + 4) << 3);
    uVar2 = *(uint *)(param_3 + 4);
    uVar10 = 0;
    puVar9 = *(uint **)(param_6 + 8);
    uVar11 = *(uint *)(param_2 + 4);
    if (uVar2 <= *(uint *)(param_2 + 4)) {
      uVar11 = uVar2;
    }
    if (uVar2 != 0) {
      iVar12 = 0;
      do {
        puVar8 = *(uint **)(param_2 + 8);
        uVar3 = *puVar9;
        puVar6 = (uint *)(*(int *)(param_1 + 8) + iVar12);
        uVar1 = *puVar6;
        iVar12 = iVar12 + 8;
        uVar13 = puVar6[1];
        uVar4 = puVar9[1];
        uVar14 = FUN_0000039c(*puVar8,puVar8[1],uVar1,uVar13);
        iVar7 = (int)((ulonglong)uVar14 >> 0x20) + uVar4;
        if (CARRY4((uint)uVar14,uVar3)) {
          iVar7 = iVar7 + 1;
        }
        uVar14 = FUN_0000039c((uint)uVar14 + uVar3,iVar7,param_4,param_5);
        FUN_00009366(uVar11,puVar8,puVar9,uVar1,uVar13);
        FUN_00009366(uVar2,*(uint **)(param_3 + 8),puVar9,(uint)uVar14,
                     (uint)((ulonglong)uVar14 >> 0x20));
        puVar8 = puVar9 + 1;
        *puVar9 = uVar1;
        puVar9 = puVar9 + 2;
        *puVar8 = uVar13;
        puVar9[uVar2 * 2 + 2] = 0;
        puVar9[uVar2 * 2 + 3] = 0;
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar2);
    }
    FUN_00007dca(*(undefined4 **)(param_1 + 8),puVar9,uVar2 * 8 + 8);
    iVar12 = FUN_00006aaa(param_1,param_3);
    if (iVar12 < 0) {
      puVar9 = *(uint **)(param_6 + 8);
      puVar8 = *(uint **)(param_1 + 8);
    }
    else {
      puVar8 = *(uint **)(param_3 + 8);
      puVar9 = *(uint **)(param_1 + 8);
    }
    FUN_0000971e(uVar2,puVar8,puVar9);
    uVar5 = 0;
  }
  return uVar5;
}

