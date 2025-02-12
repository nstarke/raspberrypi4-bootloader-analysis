
undefined4 FUN_0000da10(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 uVar3;
  undefined4 extraout_r4;
  undefined4 extraout_r4_00;
  undefined4 extraout_r4_01;
  int extraout_r4_02;
  undefined4 extraout_r4_03;
  undefined4 extraout_r4_04;
  undefined4 uVar4;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  undefined4 extraout_r5_01;
  undefined4 extraout_r5_02;
  undefined4 extraout_r5_03;
  undefined4 uVar5;
  undefined4 uVar6;
  byte local_11;
  undefined auStack_10 [4];
  
  local_11 = 0;
  FUN_0000d4ba();
  iVar1 = FUN_0000d19c();
  uVar6 = 8;
  uVar3 = extraout_r3;
  uVar4 = extraout_r4;
  uVar5 = extraout_r5;
  if (iVar1 == 0) {
    FUN_0000d4ba();
    iVar1 = FUN_0000d2ac(6,0,0,0,0);
    uVar3 = extraout_r3_00;
    uVar4 = extraout_r4_00;
    uVar5 = extraout_r5_00;
    if (iVar1 < 0) goto LAB_0000da8e;
    iVar1 = FUN_0000dd52(&local_11);
    uVar2 = (uint)local_11;
    uVar3 = extraout_r3_01;
    uVar4 = extraout_r4_01;
    uVar5 = extraout_r5_01;
    if ((iVar1 == 0) && ((local_11 & 2) != 0)) {
      FUN_0000d186(auStack_10,param_1);
      iVar1 = FUN_0000d2ac(0x20,extraout_r4_02,3,0,0);
      uVar3 = extraout_r3_02;
      uVar4 = extraout_r4_03;
      uVar5 = extraout_r5_02;
      if ((-1 < iVar1) &&
         (iVar1 = FUN_0000af30(&LAB_0000d706,0,2000000,10), uVar3 = extraout_r3_03,
         uVar4 = extraout_r4_04, uVar5 = extraout_r5_03, -1 < iVar1)) {
        uVar6 = 0;
        goto LAB_0000da9c;
      }
      goto LAB_0000da8e;
    }
  }
  else {
LAB_0000da8e:
    uVar2 = (uint)local_11;
  }
  _sprintf_to_stdout((byte *)s_EEPROM_ERROR_sector_erase___h__h_0000daa8,param_1,uVar2,uVar3,uVar4,
                     uVar5);
LAB_0000da9c:
  FUN_0000d298();
  return uVar6;
}

