
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00009e74(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  undefined4 extraout_r3;
  undefined4 extraout_r4;
  undefined4 extraout_r5;
  int unaff_gp;
  
  FUN_0000e13e();
  _write_to_stdout((byte *)s_RPi__s__s__s__s__s_00009f10,0x9f04,unaff_gp + 0x295,DAT_0000fad0,
                   DAT_0000fac8,DAT_0000facc);
  uVar2 = FUN_00000532();
  _write_to_stdout((byte *)s_BOOTMODE__0x_02x_partition__d_bu_00009f88,*(uint *)(unaff_gp + 0x3d8),
                   uVar2,*(undefined4 *)(unaff_gp + 0x28),*(undefined4 *)(unaff_gp + 0xa4),
                   *(undefined4 *)(unaff_gp + 0x94));
  _write_to_stdout((byte *)s_AON_RESET___08x_PM_RSTS__08x_00009f24,_DAT_7d51506c,_DAT_7d200020,
                   extraout_r3,0x7d200000,0x7d515040);
  bVar1 = FUN_0000af6a();
  _write_to_stdout((byte *)s_POWER_OFF_ON_HALT___d_WAIT_FOR_P_00009f44,
                   *(uint *)(&DAT_00002d10 + unaff_gp),*(undefined4 *)(&DAT_0000304c + unaff_gp),
                   CONCAT31(extraout_var,bVar1),extraout_r4,extraout_r5);
  return;
}

