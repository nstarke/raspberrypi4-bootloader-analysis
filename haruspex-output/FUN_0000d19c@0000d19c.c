
undefined4 FUN_0000d19c(void)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r4;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  undefined4 uVar2;
  byte local_d;
  
  uVar2 = 8;
  FUN_0000d4ba();
  iVar1 = FUN_0000dd52(&local_d);
  if (iVar1 < 0) goto LAB_0000d24e;
  if ((local_d & 0xbc) != 0) {
    iVar1 = FUN_0000d2ac(6,0,0,0,0);
    if (((iVar1 < 0) || (iVar1 = FUN_0000dd52(&local_d), iVar1 < 0)) || ((local_d & 2) == 0))
    goto LAB_0000d24e;
    local_d = local_d & 0x43;
    iVar1 = FUN_0000d2ac(1,(int)&local_d,1,0,0);
    if (((iVar1 < 0) || (iVar1 = FUN_0000af30(&LAB_0000d706,0,1000000,10000), iVar1 < 0)) ||
       (iVar1 = FUN_0000dd52(&local_d), iVar1 < 0)) goto LAB_0000d24e;
    if ((local_d & 0xbc) != 0) {
      uVar2 = 0xe;
      _write_to_stderr((byte *)s_EEPROM_is_write_protected___02x__0000d26c,(uint)local_d,extraout_r2
                       ,extraout_r3,local_d & 0xbc,extraout_r5);
      goto LAB_0000d24e;
    }
    FUN_0000dc48();
    FUN_0000e198((byte *)s_EEPROM_CWP___02x_0000d258,(uint)local_d,extraout_r2_00,extraout_r3_00,
                 extraout_r4,extraout_r5_00);
  }
  uVar2 = 0;
LAB_0000d24e:
  FUN_0000d298();
  return uVar2;
}

