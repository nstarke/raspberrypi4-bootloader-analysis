
void FUN_0000afa0(int input_param_1,int input_param_2)

{
  uint result_value;
  int status_code;
  undefined4 *data_pointer;
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
  int stack_buffer;
  astruct *local_2c4;
  uint local_data_count;
  uint data_buffer [169];
  
  result_value = FUN_0000d9c4();
  *(uint *)(unaff_gp + 0x2cc) = result_value;
  FUN_00002b62(data_buffer,input_param_1,input_param_2,1);
  result_value = FUN_0000b0b8();
  if ((result_value & 0xe) == 0) {
    FUN_0000adac(data_buffer,*(uint **)(unaff_gp + 0x174));
  }
  else {
    status_code = FUN_0000b2a4();
    if (status_code == 0) {
      FUN_0000b3cc();
    }
    status_code = FUN_0000b2a4();
    if (status_code == 0) {
      FUN_00009cdc(0,extraout_r1,extraout_r2,extraout_r3,extraout_r4,extraout_r5);
    }
    data_pointer = (undefined4 *)FUN_00002a94();
    FUN_00007dca(&stack_buffer,data_pointer,0x14);
    status_code = FUN_0000b8b8(&stack_buffer,1);
    if ((status_code != 0) || (local_data_count == 0)) {
      status_code = FUN_0000b8a2();
      FUN_0000e09e(status_code,&DAT_0001c200);
      _write_to_stderr((byte *)s_Failed_to_validate__s_0000b07c,*(uint *)(unaff_gp + 0x174),
                       extraout_r2_00,extraout_r3_00,extraout_r4_01,extraout_r5_01);
      FUN_0000a3e8(0x24);
      return;
    }
    FUN_00002c76(data_buffer,&stack_buffer,0,local_data_count,extraout_r4_00,extraout_r5_00);
    FUN_00002756((int)data_buffer);
    FUN_00007dca((undefined4 *)&DAT_00038000,local_2c4,local_data_count);
    *(undefined4 *)(unaff_gp + 0x2d8) = 0x38000;
    *(uint *)(unaff_gp + 0x2dc) = local_data_count;
  }
  FUN_00002756((int)data_buffer);
  return;
}

