
undefined4 _sdram_config(undefined4 param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_r2;
  int iVar6;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  int extraout_r3_01;
  int iVar7;
  undefined4 extraout_r4;
  undefined4 extraout_r4_00;
  undefined4 extraout_r4_01;
  undefined4 extraout_r4_02;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  undefined4 uVar8;
  undefined4 extraout_r5_01;
  undefined4 extraout_r5_02;
  undefined4 extraout_r5_03;
  undefined4 *puVar9;
  uint uVar10;
  int unaff_gp;
  int iStack_30;
  undefined4 uStack_2c;
  uint local_28;
  uint local_24;
  
  uVar2 = FUN_0000a476();
  uVar10 = 0;
  bVar1 = false;
  uVar3 = extraout_r4;
  uVar8 = extraout_r5;
  if (uVar2 != 0) {
    _write_to_stdout((byte *)s_SDRAM_CONFIG___02x_00008ee4,uVar2,extraout_r2,extraout_r3,extraout_r4
                     ,extraout_r5);
    local_28 = (uint)((uVar2 & 8) != 0);
    local_24 = (uint)((uVar2 & 0x10) != 0);
    uVar10 = FUN_0000b310(uVar2);
    uVar3 = extraout_r4_00;
    uVar8 = extraout_r5_00;
  }
  if ((uVar10 != 0) && (uVar10 != *(uint *)(unaff_gp + 0x88))) {
    _write_to_stdout((byte *)s_SDRAM__OTP_config_mismatch_expec_00008f5c,uVar10,
                     *(uint *)(unaff_gp + 0x88),uVar2,uVar3,uVar8);
  }
  if (uVar10 == 0) {
    uVar10 = FUN_0000c960(&uStack_2c,&local_24,&local_28,&iStack_30);
  }
  *(uint *)(unaff_gp + 0x2cd0) = uVar10;
  uVar3 = FUN_00008120(param_1);
  uVar4 = FUN_0000b2be(local_24,local_28,uVar10,extraout_r3_00,extraout_r4_01,extraout_r5_01);
  uVar5 = 2;
  if (local_24 == 0) {
    uVar5 = 1;
  }
  _write_to_stdout((byte *)s_Initialising_SDRAM_rank__d_total_00008f9c,uVar5,uVar10,uVar3,uVar4,
                   uVar2);
  iVar6 = *(int *)(&DAT_00002d14 + unaff_gp);
  *(uint *)(unaff_gp + 0x558) = local_24;
  *(int *)(unaff_gp + 0x55c) = iVar6;
  if (uVar10 != 0x18) {
    iVar7 = extraout_r3_01;
    if ((int)uVar10 < 0x19) {
      if (uVar10 != 8 && uVar10 != 0x10) goto LAB_00008e26;
    }
    else if (uVar10 != 0x40) {
      if ((int)uVar10 < 0x41) {
        if (uVar10 != 0x20) {
LAB_00008e26:
          FUN_0000a2ac((byte *)s_Unsupported_memory_size___d_00008f14,uVar10,iVar6,iVar7,local_24,
                       extraout_r5_02);
          FUN_0000a3e8(9);
          return 0xffffffff;
        }
      }
      else if (((uVar10 != 0x80) || (iVar7 = *(int *)(unaff_gp + 100), iVar7 == 0)) ||
              (iVar6 = *(int *)(unaff_gp + 0x88), iVar6 != 0x80)) goto LAB_00008e26;
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    puVar9 = param_2 + param_3;
    for (; param_2 + 0x2b < puVar9; param_2 = param_2 + uVar4 + 0x2b) {
      uVar2 = FUN_00008120(param_1);
      uVar4 = param_2[6];
      if ((((uVar2 == param_2[2]) && (local_24 == param_2[4])) &&
          ((local_28 == param_2[5] && ((uVar10 == param_2[3] && (uVar4 != 0)))))) && (uVar4 < 0x99))
      {
        _write_to_stdout((byte *)s_DDR__d__d__d__d__d_BL__d_00008ef8,param_2[2],param_2[4],
                         param_2[5],param_2[3],uVar4);
        bVar1 = true;
        FUN_00007dca(*(undefined4 **)(unaff_gp + 0x40),param_2,0x1c);
        FUN_00007dca((undefined4 *)(unaff_gp + 0x5b7c),param_2 + 7,0x90);
        FUN_00007dca((undefined4 *)(unaff_gp + 0x5580),param_2 + 0x2b,param_2[6] << 2);
        break;
      }
    }
    if (bVar1) {
      return 0;
    }
    uVar2 = FUN_00008120(param_1);
    FUN_0000a2ac((byte *)s_MCB__d_size_gbit__d_dual_rank__d_00008f30,uVar2,extraout_r2_00,local_24,
                 extraout_r4_02,extraout_r5_03);
  }
  return 0xffffffff;
}

