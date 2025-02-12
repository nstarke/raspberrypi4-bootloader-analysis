
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000b3cc(void)

{
  bool bVar2;
  bool extraout_var;
  undefined4 uVar3;
  int function_status;
  astruct_3 *puVar5;
  undefined4 operation_code;
  uint extraout_r1_00;
  uint operation_result;
  undefined4 event_data_2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 event_data_3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 event_data_4;
  undefined4 extraout_r4_00;
  undefined4 extraout_r4_01;
  undefined4 extraout_r4_02;
  undefined4 extraout_r4_03;
  undefined4 event_data_5;
  undefined4 extraout_r5_00;
  undefined4 extraout_r5_01;
  undefined4 extraout_r5_02;
  undefined4 extraout_r5_03;
  undefined4 extraout_r5_04;
  astruct_2 *piVar7;
  undefined *puVar8;
  int customer_key_count;
  int unaff_gp;
  undefined8 uVar10;
  undefined auStack_44 [2];
  byte reset_result;
  byte reset_status;
  uint reset_info_flag;
  undefined auStack_3c [32];
  code *pcVar1;
  
  piVar7 = (astruct_2 *)(unaff_gp + 0x124);
  puVar8 = auStack_44;
  (**(code **)(piVar7->field0_0x0 + 0xb0))();
  if (*(int *)(unaff_gp + 1000) == 0) {
    reset_status = 0;
    bVar2 = FUN_0000af6a();
    if ((CONCAT31(_extraout_var,bVar2) != 0) &&
       (function_status = FUN_0000a4d4(), function_status == 0)) {
      FUN_0000d292(&reset_result,&reset_status);
      FUN_00000608((uint)reset_result);
    }
    operation_result = (uint)reset_status;
    if ((_DAT_7d200020 & 2) != 0) {
      reset_status = reset_status | 1;
      operation_result = operation_result | 1;
      _DAT_7d200020 = _DAT_7d200020 & 0xfffffffd | 0x5a000000;
    }
    *(uint *)(unaff_gp + 0x2d4) = operation_result & 1;
    operation_result = FUN_00000532();
    FUN_0000e198((byte *)s_part__08x_reset_info__08x_0000b5c8,operation_result,
                 *(uint *)(unaff_gp + 0x2d4),event_data_3,event_data_4,event_data_5);
    FUN_0000e198((byte *)s_PMIC_reset_event__08x_rtc__08x_a_0000b604,*(uint *)(unaff_gp + 0x4e4),
                 *(undefined4 *)(unaff_gp + 0x540),*(undefined4 *)(unaff_gp + 0x544),
                 *(undefined4 *)(unaff_gp + 0x548),extraout_r5_00);
    uVar10 = FUN_0000af96();
    function_status = (int)uVar10;
    *(int *)(unaff_gp + 0x3ec) = function_status;
    if (function_status != 0) {
      *(undefined4 *)(&DAT_00002d14 + unaff_gp) = 3;
    }
    FUN_00009d90(function_status,(int)((ulonglong)uVar10 >> 0x20));
    customer_key_count = 0x25;
    pcVar1 = *(code **)(piVar7->field0_0x0 + 0xc4);
    (*pcVar1)(pcVar1);
    operation_result = (**(code **)(piVar7->field0_0x0 + 0x84))(0x20);
    uVar10 = (**(code **)(piVar7->field0_0x0 + 0x84))(0x16);
    pcVar1 = *(code **)(piVar7->field0_0x0 + 0x84);
    uVar3 = (*pcVar1)(0x17,(int)((ulonglong)uVar10 >> 0x20),piVar7->field0_0x0,pcVar1);
    FUN_0000e198((byte *)s_OTP_boardrev__x_bootrom__x__x_0000b5e4,operation_result,(int)uVar10,uVar3
                 ,extraout_r4_00,extraout_r5_01);
    function_status = 8;
    do {
      puVar5 = (astruct_3 *)(puVar8 + 8);
      puVar8 = puVar8 + 4;
      FUN_0000ca68(customer_key_count,puVar5,(undefined4 *)0x0);
      customer_key_count = customer_key_count + 1;
      function_status = function_status + -1;
    } while (0 < function_status);
    FUN_0000ca68(0x15,&reset_info_flag,(undefined4 *)0x0);
    FUN_0000e198((byte *)s_Customer_key_hash__32H_0000b5b0,(uint)auStack_3c,event_data_2,
                 extraout_r3_00,extraout_r4_01,extraout_r5_02);
    if ((reset_info_flag & 0xc000000) == 0) {
      operation_result = unaff_gp + 0xd;
    }
    else {
      operation_result = unaff_gp + 0xc;
    }
    FUN_0000e198((byte *)s_VC_JTAG__slocked_0000b59c,operation_result,extraout_r2_00,extraout_r3_01,
                 extraout_r4_02,extraout_r5_03);
    (**(code **)(piVar7->field0_0x0 + 0xa4))(0);
    pcVar1 = *(code **)(piVar7->field0_0x0 + 0xa8);
    (*pcVar1)(0,operation_code,pcVar1);
    FUN_0000bf1c(20000);
    (**(code **)(piVar7->field0_0x0 + 0xa4))(1);
    FUN_000053f2();
    *(undefined4 *)(unaff_gp + 1000) = 1;
  }
  (**(code **)(piVar7->field0_0x0 + 0x5c))();
  function_status = FUN_0000a4dc();
  if (function_status != 0) {
    *(uint *)(unaff_gp + 0x40c) = *(uint *)(unaff_gp + 0x40c) | 2;
  }
  function_status = FUN_0000a4e0();
  operation_result = extraout_r1_00;
  if (function_status != 0) {
    operation_result = *(uint *)(unaff_gp + 0x40c) | 1;
    *(uint *)(unaff_gp + 0x40c) = operation_result;
  }
  if ((*(uint *)(unaff_gp + 0x2d4) & 1) != 0) {
    _write_to_stderr((byte *)s_TRYBOOT_0000b594,operation_result,extraout_r2_01,
                     *(uint *)(unaff_gp + 0x2d4),extraout_r4_03,extraout_r5_04);
  }
  function_status = FUN_0000a4d8();
  if (function_status != 0) {
    FUN_0000c3f8();
    FUN_0000b6ca();
    FUN_0000b354(0);
  }
  return;
}

