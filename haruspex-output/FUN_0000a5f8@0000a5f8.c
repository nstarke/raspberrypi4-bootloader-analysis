
void FUN_0000a5f8(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  int iVar5;
  undefined4 extraout_r4;
  undefined4 extraout_r4_00;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  undefined4 extraout_r5_01;
  undefined4 extraout_r5_02;
  int unaff_gp;
  int iStack_20;
  int iStack_1c;
  uint uStack_18;
  undefined *puStack_14;
  
  if (*(int *)(unaff_gp + 0x4c) == 0) {
    iVar1 = FUN_0000b898();
    if (iVar1 == 0) {
      FUN_00009e56();
      *(undefined4 *)(unaff_gp + 0x4c) = 1;
    }
    else {
      iVar1 = FUN_0000a4e4();
      uVar2 = FUN_0000a476();
      *(uint *)(unaff_gp + 0x2e0) = uVar2;
      *(undefined4 *)(unaff_gp + 0x2e8) = *(undefined4 *)(unaff_gp + 0x88);
      if (iVar1 == 0) {
        puStack_14 = &DAT_0000a6f8;
        uStack_18 = 0;
        iStack_1c = 0;
        iStack_20 = 0;
        iVar1 = RetrieveMemoryInfo(&puStack_14,&uStack_18,&iStack_1c,&iStack_20);
        uVar3 = FUN_0000b2be(uStack_18,iStack_1c,iVar1,extraout_r3,extraout_r4,extraout_r5);
        *(uint *)(unaff_gp + 0x2e4) = uVar3;
        if (uVar2 != 0 && uVar2 != uVar3) {
          _sprintf_to_stdout((byte *)s_SDRAM_mismatch___boardrev__08x_s_0000a728,
                             *(uint *)(unaff_gp + 0x94),*(undefined4 *)(unaff_gp + 0xa4),
                             extraout_r3_00,extraout_r4_00,extraout_r5_00);
          uVar4 = FUN_0000b310(uVar2);
          if ((uVar2 & 8) == 0) {
            iVar1 = unaff_gp + 0x18;
          }
          else {
            iVar1 = unaff_gp + 0x130;
          }
          if ((uVar2 & 0x10) == 0) {
            iVar5 = unaff_gp + 0x19;
          }
          else {
            iVar5 = unaff_gp + 0x13b;
          }
          _sprintf_to_stdout((byte *)s_Expected_configuration__u_Gbit_s_0000a754,uVar4,iVar1,iVar5,
                             uVar2,extraout_r5_01);
          uVar2 = FUN_0000b310(uVar3);
          if ((uVar3 & 8) == 0) {
            iVar1 = unaff_gp + 0x1a;
          }
          else {
            iVar1 = unaff_gp + 0x146;
          }
          if ((uVar3 & 0x10) == 0) {
            iVar5 = unaff_gp + 0x1b;
          }
          else {
            iVar5 = unaff_gp + 0x151;
          }
          _sprintf_to_stdout((byte *)s_Actual_configuration__u_Gbit_s_s_0000a6fc,uVar2,iVar1,iVar5,
                             uVar3,extraout_r5_02);
          FUN_0000a3e8(9);
        }
        FUN_0000aa0c();
      }
      else {
        FUN_0000a3e8(8);
      }
    }
  }
  return;
}

