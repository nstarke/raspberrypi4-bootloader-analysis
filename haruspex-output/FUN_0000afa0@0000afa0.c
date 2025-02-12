
void FUN_0000afa0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r4;
  int extraout_r4_00;
  undefined4 extraout_r4_01;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  undefined4 extraout_r5_01;
  int unaff_gp;
  int iStack_2c8;
  undefined4 *local_2c4;
  uint local_2c0;
  uint auStack_2b4 [169];
  
  uVar1 = FUN_0000d9c4();
  *(uint *)(unaff_gp + 0x2cc) = uVar1;
  FUN_00002b62(auStack_2b4,param_1,param_2,1);
  uVar1 = FUN_0000b0b8();
  if ((uVar1 & 0xe) == 0) {
    FUN_0000adac(auStack_2b4,*(uint **)(unaff_gp + 0x174));
  }
  else {
    iVar2 = FUN_0000b2a4();
    if (iVar2 == 0) {
      FUN_0000b3cc();
    }
    iVar2 = FUN_0000b2a4();
    if (iVar2 == 0) {
      FUN_00009cdc(0,extraout_r1,extraout_r2,extraout_r3,extraout_r4,extraout_r5);
    }
    puVar3 = (undefined4 *)FUN_00002a94();
    FUN_00007dca(&iStack_2c8,puVar3,0x14);
    iVar2 = FUN_0000b8b8(&iStack_2c8,1);
    if ((iVar2 != 0) || (local_2c0 == 0)) {
      iVar2 = FUN_0000b8a2();
      FUN_0000e09e(iVar2,&DAT_0001c200);
      _sprintf_to_stdout((byte *)s_Failed_to_validate__s_0000b07c,*(uint *)(unaff_gp + 0x174),
                         extraout_r2_00,extraout_r3_00,extraout_r4_01,extraout_r5_01);
      FUN_0000a3e8(0x24);
      return;
    }
    FUN_00002c76(auStack_2b4,&iStack_2c8,0,local_2c0,extraout_r4_00,extraout_r5_00);
    FUN_00002756((int)auStack_2b4);
    FUN_00007dca((undefined4 *)&DAT_00038000,local_2c4,local_2c0);
    *(undefined4 *)(unaff_gp + 0x2d8) = 0x38000;
    *(uint *)(unaff_gp + 0x2dc) = local_2c0;
  }
  FUN_00002756((int)auStack_2b4);
  return;
}

