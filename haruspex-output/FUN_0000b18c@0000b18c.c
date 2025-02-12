
int FUN_0000b18c(int *input_data_1,int *input_data_2,int *input_data_3,undefined4 context_param_4,
                undefined4 context_param_5,undefined4 context_param_6,
                undefined signature_buffer [264])

{
  undefined4 *pending_function_result;
  char *error_message;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  undefined4 extraout_r1_02;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 extraout_r3_04;
  int extraout_r4;
  int extraout_r4_00;
  int extraout_r4_01;
  int extraout_r4_02;
  int key_length;
  undefined4 extraout_r4_03;
  undefined4 extraout_r4_04;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  undefined4 extraout_r5_01;
  undefined4 extraout_r5_02;
  undefined4 extraout_r5_03;
  undefined4 extraout_r5_04;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  uint global_counter;
  undefined4 link_register;
  undefined local_buffer [288];
  uint stack_value;
  
  _write_to_stdout((byte *)s_RSA_verify_0000b21c,(uint)input_data_2,input_data_3,context_param_4,
                   context_param_5,context_param_6);
  FUN_0000189e(input_data_1,extraout_r1,extraout_r2,extraout_r3,extraout_r4,extraout_r5);
  FUN_0000189e(input_data_2,extraout_r1_00,extraout_r2_00,extraout_r3_00,extraout_r4_00,
               extraout_r5_00);
  FUN_0000189e(input_data_3,extraout_r1_01,extraout_r2_01,extraout_r3_01,extraout_r4_01,
               extraout_r5_01);
  if (input_data_2[2] == 0x100) {
    key_length = input_data_3[2];
    if (key_length == 0x108) {
      key_length = input_data_3[1];
      pending_function_result = (undefined4 *)FUN_0000a9fe((undefined4 *)&stack0xffffffe8);
      if (pending_function_result == (undefined4 *)0x0) {
        FUN_00009cdc(0,extraout_r1_02,extraout_r2_03,extraout_r3_03,extraout_r4_03,extraout_r5_03);
      }
      local_buffer._4_4_ = unaff_r9;
      local_buffer._0_4_ = stack_value;
      local_buffer._8_4_ = unaff_r8;
      local_buffer._12_4_ = unaff_r7;
      local_buffer._16_4_ = unaff_r6;
      local_buffer._20_4_ = link_register;
      local_buffer._24_264_ = signature_buffer;
      key_length = FUN_0000c626(key_length,key_length + 0x100,input_data_1[1],input_data_2[1],
                                pending_function_result,stack_value,local_buffer);
      if (key_length == 0) {
        global_counter = global_counter + 5;
      }
      FUN_0000a2ac((byte *)s_rsa_verify__s__0x_x__0000b228,global_counter,-key_length,extraout_r3_04
                   ,extraout_r4_04,extraout_r5_04);
      return key_length;
    }
    error_message = s_RSA__Invalid_key_length__u_0000b240;
  }
  else {
    error_message = s_RSA__Invalid_signature_length__u_0000b25c;
    key_length = extraout_r4_02;
  }
  FUN_0000a2ac((byte *)error_message,input_data_2[2],extraout_r2_02,extraout_r3_02,key_length,
               extraout_r5_02);
  return -1;
}

