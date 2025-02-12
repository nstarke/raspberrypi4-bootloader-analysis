
/* WARNING: Removing unreachable block (ram,0x0000d140) */

void FUN_0000d044(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r4;
  undefined4 extraout_r4_00;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  undefined4 extraout_r5_01;
  int unaff_gp;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  uint local_1c;
  int local_18;
  
  local_2c = 0;
  local_24 = DAT_0000ed0c;
  local_30 = 0;
  local_28 = &uStack_20;
  uVar1 = FUN_0000a468(&local_30);
  FUN_000018fc(&uStack_20,uVar1,local_30);
  iVar2 = FUN_0000a824((uint *)s_bootmain_0000d164,(undefined4 *)(&DAT_00003050 + unaff_gp),
                       &DAT_0000f7e8,(int *)&local_28,0,extraout_r5);
  if ((((iVar2 == 0) && (iVar2 = FUN_00003aa2(local_1c,local_18), iVar2 == 0)) &&
      (puVar3 = (undefined4 *)FUN_000039a4(local_1c,(uint *)&DAT_0000d15c),
      puVar3 != (undefined4 *)0x0)) && (FUN_00007dca(&local_34,puVar3,4), local_34 == 0)) {
    iVar2 = FUN_00007d9e(&DAT_00003050 + unaff_gp,&DAT_0000f7e8,0x20);
    if (iVar2 != 0) {
      FUN_00009cdc(iVar2,extraout_r1,extraout_r2,extraout_r3,extraout_r4,extraout_r5_00);
    }
    uVar4 = FUN_000039f4(local_1c,local_18,&local_2c);
    if (uVar4 == 0) {
      *(undefined4 *)(unaff_gp + 0x2cf4) = 0x42454346;
      *(undefined4 *)(unaff_gp + 0x2cf8) = 0x35c;
      FUN_00007dca((undefined4 *)0xc0050000,(undefined4 *)(unaff_gp + 0x2cf4),0x35c);
      *(undefined4 *)(unaff_gp + 0x2c40) = 0x42444941;
      *(undefined4 *)(unaff_gp + 0x2c44) = 0xb4;
      FUN_00007dca((undefined4 *)0xc0060000,(undefined4 *)(unaff_gp + 0x2c40),0xb4);
      FUN_0000e53e();
      FUN_0000e072();
      FUN_0000b63a(local_2c);
    }
    else {
      _sprintf_to_stdout((byte *)s_ELF_loader_error___d_0000d170,uVar4,extraout_r2_00,extraout_r3_00
                         ,extraout_r4_00,extraout_r5_01);
    }
  }
  FUN_0000a3e8(0x31);
  return;
}

