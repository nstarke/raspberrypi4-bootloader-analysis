
undefined4
FUN_0000d750(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r2;
  undefined4 extraout_r3;
  byte *pbVar3;
  undefined4 extraout_r4;
  uint uVar4;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  undefined4 extraout_r5_01;
  undefined4 extraout_r5_02;
  undefined4 extraout_r5_03;
  undefined4 uVar5;
  byte local_d;
  
  uVar1 = 0;
  local_d = 0;
  uVar5 = 8;
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0x103) {
    uVar1 = FUN_00009cdc(0,param_2,iVar2,param_4,param_5,param_6);
    iVar2 = extraout_r2;
    param_4 = extraout_r3;
    param_5 = extraout_r4;
  }
  uVar4 = (uint)*(byte *)(*(int *)(param_1 + 4) + 2);
  if (uVar4 != 0) {
    FUN_00009cdc(uVar1,*(int *)(param_1 + 4),iVar2,param_4,param_5,uVar4);
  }
  FUN_0000d4ba();
  iVar2 = FUN_0000d19c();
  uVar1 = extraout_r5;
  if (iVar2 == 0) {
    FUN_0000d4ba();
    iVar2 = FUN_0000d2ac(6,0,0,0,0);
    uVar1 = extraout_r5_00;
    if (iVar2 < 0) goto LAB_0000d7e2;
    iVar2 = FUN_0000dd52(&local_d);
    uVar4 = (uint)local_d;
    uVar1 = extraout_r5_01;
    if ((-1 < iVar2) && ((local_d & 2) != 0)) {
      iVar2 = FUN_0000d2ac(2,*(int *)(param_1 + 4),0x103,0,0);
      uVar1 = extraout_r5_02;
      if ((-1 < iVar2) &&
         (iVar2 = FUN_0000af30(&LAB_0000d706,0,2000000,0), uVar1 = extraout_r5_03, -1 < iVar2)) {
        uVar5 = 0;
        goto LAB_0000d7fa;
      }
      goto LAB_0000d7e2;
    }
  }
  else {
LAB_0000d7e2:
    uVar4 = (uint)local_d;
  }
  pbVar3 = *(byte **)(param_1 + 4);
  FUN_0000a2ac((byte *)s_EEPROM_error__program_page_0x_02_0000d804,(uint)*pbVar3,(uint)pbVar3[1],
               (uint)pbVar3[2],uVar4,uVar1);
LAB_0000d7fa:
  FUN_0000d298();
  return uVar5;
}

