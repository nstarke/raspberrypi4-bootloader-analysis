
undefined4 FUN_0000b8b8(int *param_1,int param_2)

{
  int iVar1;
  byte *buffer_pointer;
  int *input_data_buffer;
  int iVar3;
  uint result_param_1;
  uint uVar4;
  undefined4 extraout_r1_00;
  uint extraout_r1_01;
  uint result_param_2;
  uint uVar5;
  undefined4 extraout_r2_00;
  uint extraout_r2_01;
  int result_param_3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 context_param_4_value;
  int extraout_r3_02;
  int result_param_4;
  int iVar6;
  undefined4 extraout_r4_00;
  undefined4 extraout_r4_01;
  undefined4 context_param_5_value;
  int extraout_r4_02;
  undefined4 result_param_5;
  undefined4 uVar7;
  undefined4 extraout_r5_00;
  undefined4 extraout_r5_01;
  undefined4 extraout_r5_02;
  undefined4 context_param_6_value;
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
  undefined signature_buffer_storage [264];
  
  iVar1 = FUN_0000b2a4();
  uVar4 = result_param_1;
  uVar5 = result_param_2;
  iVar3 = result_param_3;
  iVar6 = result_param_4;
  uVar7 = result_param_5;
  if (iVar1 == 0) {
    FUN_00009cdc(0,result_param_1,result_param_2,result_param_3,result_param_4,result_param_5);
    uVar4 = extraout_r1_01;
    uVar5 = extraout_r2_01;
    iVar3 = extraout_r3_02;
    iVar6 = extraout_r4_02;
    uVar7 = extraout_r5_03;
  }
  FUN_0000189e(param_1,uVar4,uVar5,iVar3,iVar6,uVar7);
  buffer_pointer = (byte *)FUN_0000b8a8((undefined4 *)&stack0xffffff5c);
  if (in_stack_ffffff5c < 0x2040) {
    FUN_00009cdc(buffer_pointer,extraout_r1_00,in_stack_ffffff5c,extraout_r3_00,extraout_r4_00,
                 extraout_r5_00);
  }
  FUN_00007e18((undefined4 *)buffer_pointer,0,0x2040);
  *(undefined4 *)(unaff_gp + 0xac) = 0;
  input_data_buffer = FUN_0000a1a4(param_2);
  if (input_data_buffer != (int *)0x0) {
    FUN_000018fc((undefined4 *)&stack0xffffff9c,buffer_pointer + 0x40,0x1000);
    FUN_000018fc((undefined4 *)&stack0xffffff74,buffer_pointer,0x20);
    FUN_000018fc((undefined4 *)&stack0xffffff88,buffer_pointer + 0x20,0x20);
    FUN_000018fc((undefined4 *)&stack0xffffff60,buffer_pointer + 0x1040,0x1000);
    iVar3 = FUN_0000d534(*(uint **)(unaff_gp + 0x184),(undefined4 *)&stack0xffffffb0);
    if ((iVar3 == 0) &&
       (iVar3 = FUN_0000d850((int *)&stack0xffffffb0,(int)&stack0xffffff9c,0,in_stack_ffffffc8,
                             (undefined4 *)0x0,(byte *)0x0), iVar3 == 0)) {
      FUN_0000e198(&DAT_0000ba34,*(uint *)(unaff_gp + 0x184),*(undefined4 *)(unaff_gp + 0x188),
                   *(undefined4 *)(unaff_gp + 0x18c),*(undefined4 *)(unaff_gp + 400),extraout_r5_01)
      ;
      iVar3 = FUN_0000ac2c((int *)&stack0xffffff9c,(int *)&stack0xffffff74,(int *)&stack0xffffff60,
                           (uint *)0x0);
      if ((iVar3 == 0) &&
         (iVar3 = FUN_0000d534(*(uint **)(unaff_gp + 0x174),(undefined4 *)&stack0xffffffb0),
         iVar3 == 0)) {
        iVar3 = FUN_0000d850((int *)&stack0xffffffb0,(int)param_1,0,in_stack_ffffffc8,
                             (undefined4 *)(buffer_pointer + 0x20),buffer_pointer);
        if (iVar3 == 0) {
          iVar3 = FUN_00007d9e(buffer_pointer + 0x20,buffer_pointer,0x20);
          if (iVar3 == 0) {
            FUN_00007e18((undefined4 *)buffer_pointer,0,0x20);
            if (in_stack_ffffff68 == 0x100) {
              signature_buffer_storage._4_8_ = in_stack_ffffff60;
              signature_buffer_storage._0_4_ = in_stack_ffffff5c;
              signature_buffer_storage._12_4_ = 0x100;
              signature_buffer_storage._16_92_ = in_stack_ffffff6c;
              signature_buffer_storage._108_4_ = in_stack_ffffffc8;
              signature_buffer_storage._112_4_ = in_stack_ffffffcc;
              signature_buffer_storage._116_4_ = unaff_r16;
              signature_buffer_storage._120_4_ = unaff_r15;
              signature_buffer_storage._124_4_ = unaff_r14;
              signature_buffer_storage._128_4_ = unaff_r13;
              signature_buffer_storage._132_4_ = unaff_r12;
              signature_buffer_storage._136_4_ = unaff_r11;
              signature_buffer_storage._140_4_ = unaff_r10;
              signature_buffer_storage._144_4_ = unaff_r9;
              signature_buffer_storage._148_4_ = unaff_r8;
              signature_buffer_storage._152_4_ = unaff_r7;
              signature_buffer_storage._156_4_ = unaff_r6;
              signature_buffer_storage._160_4_ = unaff_lr;
              signature_buffer_storage._164_100_ = in_stack_00000000;
              iVar3 = _rsa_verify((int *)&stack0xffffff88,(int *)&stack0xffffff60,input_data_buffer,
                                  context_param_4_value,context_param_5_value,context_param_6_value,
                                  signature_buffer_storage);
              if (iVar3 == 0) {
                *(undefined4 *)(unaff_gp + 0xac) = 1;
                return 0;
              }
            }
            else {
              _write_to_stderr((byte *)s_Invalid_RSA_signature_size__u_by_0000ba50,in_stack_ffffff68
                               ,extraout_r2_00,context_param_4_value,context_param_5_value,
                               context_param_6_value);
            }
          }
        }
        else {
          _write_to_stderr((byte *)s__s_hash_mismatch__32H_0000ba38,*(uint *)(unaff_gp + 0x174),
                           buffer_pointer + 0x20,extraout_r3_01,extraout_r4_01,extraout_r5_02);
        }
      }
    }
  }
  *(undefined4 *)(&DAT_00002db0 + unaff_gp) = 0xfe;
  param_1[2] = 0;
  return 0xffffffff;
}

