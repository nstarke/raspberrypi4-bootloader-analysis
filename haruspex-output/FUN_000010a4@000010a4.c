
undefined4
FUN_000010a4(undefined *param_1,undefined4 param_2,int param_3,undefined *param_4,undefined *param_5
            ,undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 uVar3;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined *puVar4;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 uVar5;
  undefined4 extraout_r4;
  undefined4 extraout_r4_00;
  undefined4 extraout_r4_01;
  undefined4 extraout_r4_02;
  undefined4 extraout_r4_03;
  undefined4 uVar6;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  undefined4 extraout_r5_01;
  undefined4 extraout_r5_02;
  undefined4 extraout_r5_03;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  byte local_42;
  byte local_41;
  
  uVar11 = 0;
  local_41 = 0;
  uVar10 = 0;
  iVar12 = 0;
  while( true ) {
    iVar1 = (*(code *)param_1)(&local_41,param_2);
    uVar14 = (ulonglong)CONCAT14(local_41,iVar1);
    if (iVar1 < 0) break;
    iVar1 = 7;
    while( true ) {
      if ((local_41 & 1) == 0) {
        iVar13 = (*(code *)param_1)(&local_42,param_2);
        if (iVar13 < 0) {
          return 0;
        }
        uVar14 = (*(code *)param_5)(local_42,param_6);
        uVar3 = extraout_r2_03;
        uVar5 = extraout_r3_03;
        uVar6 = extraout_r4_03;
        uVar7 = extraout_r5_03;
        if ((int)uVar14 < 0) goto LAB_000011b6;
        if (iVar12 < 0x100) {
          iVar12 = iVar12 + 1;
        }
        *(byte *)(param_3 + uVar10) = local_42;
        uVar10 = uVar10 + 1 & 0xff;
      }
      else {
        iVar13 = 0;
        uVar14 = (*(code *)param_1)(&local_42,param_2);
        uVar3 = extraout_r2_00;
        uVar5 = extraout_r3_00;
        uVar6 = extraout_r4_00;
        uVar7 = extraout_r5_00;
        if ((int)uVar14 < 0) goto LAB_000011b6;
        uVar8 = (iVar12 + -1) - (uint)local_42;
        uVar14 = (*(code *)param_1)(&local_42,param_2);
        uVar3 = extraout_r2_01;
        uVar5 = extraout_r3_01;
        uVar6 = extraout_r4_01;
        uVar7 = extraout_r5_01;
        if ((int)uVar14 < 0) goto LAB_000011b6;
        iVar9 = local_42 + 1;
        puVar4 = param_4;
        if (iVar9 != 0) {
          do {
            uVar2 = uVar8;
            if (0xff < iVar12) {
              uVar2 = uVar10 - (iVar12 - uVar8);
            }
            *puVar4 = *(undefined *)(param_3 + ((uVar2 & 0xff) + iVar13 & 0xff));
            iVar13 = iVar13 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar13 < iVar9);
        }
        puVar4 = param_4;
        if (iVar9 != 0) {
          do {
            uVar14 = (*(code *)param_5)(*puVar4,param_6);
            uVar3 = extraout_r2_02;
            uVar5 = extraout_r3_02;
            uVar6 = extraout_r4_02;
            uVar7 = extraout_r5_02;
            if ((int)uVar14 < 0) goto LAB_000011b6;
            if (iVar12 < 0x100) {
              iVar12 = iVar12 + 1;
            }
            *(undefined *)(param_3 + uVar10) = *puVar4;
            uVar10 = uVar10 + 1 & 0xff;
            iVar9 = iVar9 + -1;
            puVar4 = puVar4 + 1;
          } while (0 < iVar9);
        }
      }
      local_41 = local_41 >> 1;
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
    }
  }
  uVar3 = extraout_r2;
  uVar5 = extraout_r3;
  uVar6 = extraout_r4;
  uVar7 = extraout_r5;
  if ((local_41 & 1) != 0) {
LAB_000011b6:
    FUN_00009cdc((int)uVar14,(int)(uVar14 >> 0x20),uVar3,uVar5,uVar6,uVar7);
    uVar11 = 0xffffffff;
  }
  return uVar11;
}

