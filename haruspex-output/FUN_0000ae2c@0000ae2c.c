
uint FUN_0000ae2c(void)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar3;
  undefined4 extraout_r4;
  undefined4 extraout_r4_00;
  undefined4 uVar4;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  int unaff_gp;
  undefined *local_28;
  undefined2 local_24;
  int local_20;
  uint local_1c;
  undefined4 local_18;
  
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  iVar2 = FUN_0000a4d8();
  if (iVar2 == 0) {
    return 0;
  }
  puVar7 = (uint *)(unaff_gp + 0x70);
  uVar6 = (uint)(*puVar7 != 0);
  if (*puVar7 != 0) {
    return uVar6;
  }
  iVar2 = FUN_0000b15c(&local_18);
  (**(code **)(iVar2 + 0x34))(local_18,0x1c,&local_1c,1,*(code **)(iVar2 + 0x34));
  bVar1 = FUN_0000a806();
  if ((CONCAT31(extraout_var,bVar1) == 0) || (*(int *)(unaff_gp + 0x90) != 0)) {
    bVar1 = FUN_0000a7d8();
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      bVar1 = FUN_0000a814();
      if (CONCAT31(extraout_var_01,bVar1) != 0) {
        (**(code **)(iVar2 + 0x3c))(local_18,0x21,1,*(code **)(iVar2 + 0x3c));
      }
      (**(code **)(iVar2 + 0x34))(local_18,0x21,&local_20,1);
      uVar3 = extraout_r3_00;
      uVar4 = extraout_r4_00;
      uVar5 = extraout_r5_00;
      goto LAB_0000aedc;
    }
    local_24 = DAT_0000ed1c;
    local_28 = PTR_DAT_0000ed18;
    (**(code **)(iVar2 + 0x1c))(local_18,0x21,&local_28);
    (**(code **)(iVar2 + 0x2c))(local_18,0x1c,1);
  }
  else {
    local_20 = (**(code **)(*(int *)(unaff_gp + 0x124) + 0x20))(0xe);
    uVar3 = extraout_r3;
    uVar4 = extraout_r4;
    uVar5 = extraout_r5;
LAB_0000aedc:
    _write_to_stdout((byte *)s_PCIEx1__PWR__d_DET_WAKE__d_0000af14,local_1c,local_20,uVar3,uVar4,
                     uVar5);
    if (((local_1c == 0) && (local_20 == 0)) && (*(int *)(&DAT_00002d08 + unaff_gp) == 0))
    goto LAB_0000aefc;
  }
  uVar6 = 1;
LAB_0000aefc:
  *puVar7 = uVar6;
  if (uVar6 != 0) {
    (**(code **)(iVar2 + 0x2c))(local_18,0x1c,1,*(code **)(iVar2 + 0x2c));
    uVar6 = *puVar7;
  }
  return uVar6;
}

