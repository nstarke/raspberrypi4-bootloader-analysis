
undefined4 FUN_0000b8b8(int *param_1,int param_2)

{
  undefined signature_buffer [264];
  int iVar1;
  byte *pbVar2;
  int *input_data_3;
  int iVar3;
  uint extraout_r1;
  uint uVar4;
  undefined4 extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r2;
  uint uVar5;
  undefined4 extraout_r2_00;
  uint extraout_r2_01;
  int extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 context_param_4;
  int extraout_r3_02;
  int extraout_r4;
  int iVar6;
  undefined4 extraout_r4_00;
  undefined4 extraout_r4_01;
  undefined4 context_param_5;
  int extraout_r4_02;
  undefined4 extraout_r5;
  undefined4 uVar7;
  undefined4 extraout_r5_00;
  undefined4 extraout_r5_01;
  undefined4 extraout_r5_02;
  undefined4 context_param_6;
  undefined4 extraout_r5_03;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined4 unaff_r15;
  undefined4 unaff_r16;
  int unaff_gp;
  undefined4 unaff_lr;
  undefined in_stack_00000000 [100];
  uint in_stack_ffffff5c;
  undefined8 in_stack_ffffff60;
  uint in_stack_ffffff68;
  undefined in_stack_ffffff6c [92];
  byte *in_stack_ffffffc8;
  undefined4 in_stack_ffffffcc;
  
  iVar1 = FUN_0000b2a4();
  uVar4 = extraout_r1;
  uVar5 = extraout_r2;
  iVar3 = extraout_r3;
  iVar6 = extraout_r4;
  uVar7 = extraout_r5;
  if (iVar1 == 0) {
    FUN_00009cdc(0,extraout_r1,extraout_r2,extraout_r3,extraout_r4,extraout_r5);
    uVar4 = extraout_r1_01;
    uVar5 = extraout_r2_01;
    iVar3 = extraout_r3_02;
    iVar6 = extraout_r4_02;
    uVar7 = extraout_r5_03;
  }
  FUN_0000189e(param_1,uVar4,uVar5,iVar3,iVar6,uVar7);
  pbVar2 = (byte *)FUN_0000b8a8((undefined4 *)&stack0xffffff5c);
  if (in_stack_ffffff5c < 0x2040) {
    FUN_00009cdc(pbVar2,extraout_r1_00,in_stack_ffffff5c,extraout_r3_00,extraout_r4_00,
                 extraout_r5_00);
  }
  FUN_00007e18((undefined4 *)pbVar2,0,0x2040);
  *(undefined4 *)(unaff_gp + 0xac) = 0;
  input_data_3 = FUN_0000a1a4(param_2);
  if (input_data_3 != (int *)0x0) {
    FUN_000018fc((undefined4 *)&stack0xffffff9c,pbVar2 + 0x40,0x1000);
    FUN_000018fc((undefined4 *)&stack0xffffff74,pbVar2,0x20);
    FUN_000018fc((undefined4 *)&stack0xffffff88,pbVar2 + 0x20,0x20);
    FUN_000018fc((undefined4 *)&stack0xffffff60,pbVar2 + 0x1040,0x1000);
    iVar3 = FUN_0000d534(*(uint **)(unaff_gp + 0x184),(undefined4 *)&stack0xffffffb0);
    if ((iVar3 == 0) &&
       (iVar3 = FUN_0000d850((int *)&stack0xffffffb0,(int)&stack0xffffff9c,0,in_stack_ffffffc8,
                             (undefined4 *)0x0,(byte *)0x0), iVar3 == 0)) {
      _write_to_stdout(&DAT_0000ba34,*(uint *)(unaff_gp + 0x184),*(undefined4 *)(unaff_gp + 0x188),
                       *(undefined4 *)(unaff_gp + 0x18c),*(undefined4 *)(unaff_gp + 400),
                       extraout_r5_01);
      iVar3 = FUN_0000ac2c((int *)&stack0xffffff9c,(int *)&stack0xffffff74,(int *)&stack0xffffff60,
                           (uint *)0x0);
      if ((iVar3 == 0) &&
         (iVar3 = FUN_0000d534(*(uint **)(unaff_gp + 0x174),(undefined4 *)&stack0xffffffb0),
         iVar3 == 0)) {
        iVar3 = FUN_0000d850((int *)&stack0xffffffb0,(int)param_1,0,in_stack_ffffffc8,
                             (undefined4 *)(pbVar2 + 0x20),pbVar2);
        if (iVar3 == 0) {
          iVar3 = FUN_00007d9e(pbVar2 + 0x20,pbVar2,0x20);
          if (iVar3 == 0) {
            FUN_00007e18((undefined4 *)pbVar2,0,0x20);
            if (in_stack_ffffff68 == 0x100) {
              signature_buffer._4_8_ = in_stack_ffffff60;
              signature_buffer._0_4_ = in_stack_ffffff5c;
              signature_buffer._12_4_ = 0x100;
              signature_buffer._16_92_ = in_stack_ffffff6c;
              signature_buffer._108_4_ = in_stack_ffffffc8;
              signature_buffer._112_4_ = in_stack_ffffffcc;
              signature_buffer._116_4_ = unaff_r16;
              signature_buffer._120_4_ = unaff_r15;
              signature_buffer._124_4_ = unaff_r14;
              signature_buffer._128_4_ = unaff_r13;
              signature_buffer._132_4_ = unaff_r12;
              signature_buffer._136_4_ = unaff_r11;
              signature_buffer._140_4_ = unaff_r10;
              signature_buffer._144_4_ = unaff_r9;
              signature_buffer._148_4_ = unaff_r8;
              signature_buffer._152_4_ = unaff_r7;
              signature_buffer._156_4_ = unaff_r6;
              signature_buffer._160_4_ = unaff_lr;
              signature_buffer._164_100_ = in_stack_00000000;
              iVar3 = FUN_0000b18c((int *)&stack0xffffff88,(int *)&stack0xffffff60,input_data_3,
                                   context_param_4,context_param_5,context_param_6,signature_buffer)
              ;
              if (iVar3 == 0) {
                *(undefined4 *)(unaff_gp + 0xac) = 1;
                return 0;
              }
            }
            else {
              _sprintf_to_stdout((byte *)s_Invalid_RSA_signature_size__u_by_0000ba50,
                                 in_stack_ffffff68,extraout_r2_00,context_param_4,context_param_5,
                                 context_param_6);
            }
          }
        }
        else {
          _sprintf_to_stdout((byte *)s__s_hash_mismatch__32H_0000ba38,*(uint *)(unaff_gp + 0x174),
                             pbVar2 + 0x20,extraout_r3_01,extraout_r4_01,extraout_r5_02);
        }
      }
    }
  }
  *(undefined4 *)(&DAT_00002db0 + unaff_gp) = 0xfe;
  param_1[2] = 0;
  return 0xffffffff;
}

