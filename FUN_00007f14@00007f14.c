
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00007f14(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 extraout_r4;
  undefined4 extraout_r5;
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int unaff_gp;
  uint local_ac [5];
  undefined4 *local_98;
  undefined4 *local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 *local_7c;
  undefined4 auStack_38 [5];
  undefined4 local_24;
  undefined4 local_4;
  
  iVar3 = 0;
  piVar2 = (int *)(unaff_gp + 0xec);
  if (param_2 == 0) {
    *piVar2 = 0;
  }
  else {
    iVar3 = *piVar2;
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(unaff_gp + 0x2cfc);
    uVar1 = 8;
    if ((iVar3 != 0) && ((*(uint *)(&DAT_00002f18 + unaff_gp) & 1) != 0)) {
      uVar1 = 0xb;
    }
    *(undefined4 *)(unaff_gp + 0xe8) = param_4;
    local_4 = param_3;
    if (param_2 == 0) {
      _DAT_7c001000 = _DAT_7c001000 & 0xfffffffd;
      FUN_00008112();
      iVar3 = *(int *)(unaff_gp + 0x2cfc);
    }
    if ((iVar3 != 0) && ((*(uint *)(&DAT_00002f18 + unaff_gp) & 1) != 0)) {
      FUN_00007eae(1);
    }
    local_24 = DAT_0000ed4c;
    FUN_00007dca(auStack_38,(undefined4 *)&DAT_0000ee20,0x14);
    FUN_00007dca(local_ac,(undefined4 *)&DAT_0000ee4c,0x74);
    local_98 = &local_24;
    local_90 = &local_4;
    local_ac[0] = param_2;
    local_88 = uVar1;
    local_80 = param_1;
    local_7c = auStack_38;
    iVar3 = FUN_00008774(local_ac);
    if (iVar3 != 0) {
      _write_to_stderr((byte *)s_SDRAM_init_failure_00007ffc,extraout_r1,extraout_r2,extraout_r3,
                       extraout_r4,extraout_r5);
    }
    *piVar2 = iVar3;
  }
  return iVar3;
}

