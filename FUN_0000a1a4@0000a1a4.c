
undefined4 * FUN_0000a1a4(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 uVar4;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 uVar5;
  int extraout_r4;
  int extraout_r4_00;
  int iVar6;
  undefined4 extraout_r4_01;
  int extraout_r4_02;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  undefined4 extraout_r5_01;
  undefined4 extraout_r5_02;
  undefined4 uVar7;
  undefined4 *puVar8;
  int unaff_gp;
  undefined8 uVar9;
  undefined4 local_88;
  undefined4 local_84;
  byte abStack_80 [32];
  byte abStack_60 [32];
  undefined4 local_40;
  int aiStack_3c [6];
  int local_24;
  
  puVar1 = *(uint **)(unaff_gp + 0x1a4);
  puVar8 = (undefined4 *)(unaff_gp + 0x5b54);
  FUN_000018fc(puVar8,&DAT_00005478 + unaff_gp,0x108);
  *(undefined4 *)(unaff_gp + 0x5b5c) = 0;
  iVar2 = FUN_0000d534(puVar1,aiStack_3c);
  uVar3 = extraout_r1;
  uVar4 = extraout_r2;
  uVar5 = extraout_r3;
  iVar6 = extraout_r4;
  uVar7 = extraout_r5;
  if (iVar2 == 0) {
    if (local_24 != 0x108) {
      return (undefined4 *)0x0;
    }
    uVar9 = FUN_0000d850(aiStack_3c,(int)puVar8,0,(byte *)0x108,(undefined4 *)0x0,(byte *)0x0);
    uVar3 = (uint)((ulonglong)uVar9 >> 0x20);
    uVar4 = extraout_r2_00;
    uVar5 = extraout_r3_00;
    iVar6 = extraout_r4_00;
    uVar7 = extraout_r5_00;
    if (((int)uVar9 == 0) && (iVar6 = *(int *)(unaff_gp + 0x5b5c), iVar6 == 0x108)) {
      if (param_1 == 0) {
        return puVar8;
      }
      local_88 = DAT_0000ed10;
      local_40 = 0;
      local_84 = DAT_0000ed14;
      FUN_0000b092((undefined4 *)abStack_60);
      FUN_00009d1e((int)&local_88,(undefined4 *)abStack_80);
      iVar6 = FUN_00007d9e(abStack_60,abStack_80,0x20);
      if (iVar6 == 0) {
        return puVar8;
      }
      _write_to_stderr((byte *)s_EEPROM_RSA_key_mismatch__32H__32_0000a280,(uint)abStack_60,
                       abStack_80,extraout_r3_01,extraout_r4_01,extraout_r5_01);
      uVar3 = extraout_r1_00;
      uVar4 = extraout_r2_01;
      uVar5 = extraout_r3_02;
      iVar6 = extraout_r4_02;
      uVar7 = extraout_r5_02;
    }
  }
  *(undefined4 *)(unaff_gp + 0x5b5c) = 0;
  FUN_0000e198((byte *)s_Customer_public_key_not_loaded__0000a260,uVar3,uVar4,uVar5,iVar6,uVar7);
  return (undefined4 *)0x0;
}

