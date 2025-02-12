
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000a94(void)

{
  bool is_valid;
  uint param_value;
  undefined3 extraout_var;
  int main_variable;
  char *str_ptr;
  uint operation_result;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  uint final_result;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 extraout_r4;
  uint extraout_r4_00;
  uint extraout_r4_01;
  uint extraout_r5;
  uint extraout_r5_00;
  undefined4 uVar2;
  int *pointer_to_int;
  char char_flag;
  byte *byte_ptr;
  undefined *puVar3;
  astruct_4 *unaff_gp;
  uint local_counter;
  undefined2 local_data;
  int iVar1;
  
  pointer_to_int = &unaff_gp->field56_0x38;
  FUN_00001078(*pointer_to_int);
  if (_DAT_7d5040dc != 0) {
    _write_to_stdout((byte *)s_BOOT_ORDER_override__0x_08x_00001018,_DAT_7d5040dc,extraout_r2,
                     extraout_r3,extraout_r4,_DAT_7d5040dc);
    *(uint *)&unaff_gp[8].field_0x230 = _DAT_7d5040dc;
  }
  _DAT_7d5040dc = 0;
  main_variable = *pointer_to_int;
  if (*(int *)(main_variable + 0xd8) == 0) {
    param_value = *(uint *)&unaff_gp[8].field_0x180;
    final_result = param_value;
    if (param_value < 0x385) {
      final_result = 900;
    }
    if (final_result < 0x1389) {
      if (param_value < 0x385) {
        param_value = 900;
      }
    }
    else {
      param_value = 5000;
    }
    *(uint *)&unaff_gp[8].field_0x180 = param_value;
    unaff_gp->field_0x4e8 = 5;
    unaff_gp->field1237_0x4f4 = param_value;
  }
  if (*(int *)(main_variable + 0x60) != 0) {
    *(undefined4 *)&unaff_gp[8].field_0x388 = 1;
  }
  if ((*(undefined **)&unaff_gp[8].field_0x184 < (undefined *)0x2580) ||
     (&DAT_000e1000 < *(undefined **)&unaff_gp[8].field_0x184)) {
    *(undefined **)&unaff_gp[8].field_0x184 = &DAT_0001c200;
  }
  if (*(int *)&unaff_gp[8].field_0x38c != 0) {
    *(undefined4 *)&unaff_gp[8].field_0x388 = 0;
    *(undefined4 *)(main_variable + 0x60) = 0;
  }
  if (*(int *)(main_variable + 0xec) != 0) {
    *(undefined4 *)&unaff_gp[8].field_0x234 = 0xffffffff;
  }
  if (*(int *)&unaff_gp[8].field_0x230 == 0 || *(int *)&unaff_gp[8].field_0x230 == 0xf) {
    *(undefined4 *)&unaff_gp[8].field_0x230 = 0xf;
    FUN_0000a7bc();
    *(uint *)&unaff_gp[8].field_0x230 = *(int *)&unaff_gp[8].field_0x230 << 4 | 6;
    is_valid = FUN_0000a7ca();
    main_variable = *pointer_to_int;
    final_result = *(int *)&unaff_gp[8].field_0x230 << 4;
    if (CONCAT31(extraout_var,is_valid) == 0) {
      final_result = final_result | 4;
    }
    else {
      final_result = final_result | 5;
    }
    *(uint *)&unaff_gp[8].field_0x230 = final_result << 4 | 1;
  }
  if (*(int *)(main_variable + 0x24) != 0) {
    *(undefined4 *)&unaff_gp[8].field_0x304 = 0x52506935;
  }
  final_result = *(uint *)&unaff_gp[8].field_0x1b4;
  if (final_result == 0) {
    final_result = 4000;
  }
  if (final_result < 0x1f5) {
    final_result = 500;
  }
  param_value = *(uint *)&unaff_gp[8].field_0x1b0;
  *(uint *)&unaff_gp[8].field_0x1b4 = final_result;
  if (param_value == 0) {
    param_value = 45000;
  }
  if (param_value < 0x1389) {
    param_value = 5000;
  }
  final_result = *(uint *)&unaff_gp[8].field_0x1b8;
  *(uint *)&unaff_gp[8].field_0x1b0 = param_value;
  if (final_result == 0) {
    final_result = 30000;
  }
  if (final_result < 0x1389) {
    final_result = 5000;
  }
  *(uint *)&unaff_gp[8].field_0x1b8 = final_result;
  final_result = *(uint *)&unaff_gp[8].field_0x1bc;
  if (final_result == 0) {
    final_result = 10000;
  }
  if (final_result < 0x2711) {
    final_result = 10000;
  }
  iVar1 = unaff_gp->field962_0x3d8;
  *(uint *)&unaff_gp[8].field_0x1bc = final_result;
  if (iVar1 == 7) {
    *(undefined4 *)&unaff_gp[8].field_0x388 = 1;
    *(undefined4 *)&unaff_gp[8].field_0x230 = 0xf3;
    *(undefined4 *)&unaff_gp[8].field_0x4b0 = 0;
  }
  final_result = *(uint *)&unaff_gp[8].field_0x1c0;
  if (final_result == 0) {
    final_result = 25000;
  }
  if (final_result < 0x3e9) {
    final_result = 1000;
  }
  *(uint *)&unaff_gp[8].field_0x1c0 = final_result;
  if ((*(int *)(main_variable + 0x74) == 0) || (main_variable = FUN_0000a4d4(), main_variable != 0))
  {
    final_result = *(uint *)&unaff_gp[8].field_0x1ac;
  }
  else {
    final_result = 1000;
  }
  if (4999 < final_result) {
    final_result = 5000;
  }
  *(uint *)&unaff_gp[8].field_0x1ac = final_result;
  if (final_result != 0) {
    if (final_result < 0xfb) {
      final_result = 0xfa;
    }
    *(uint *)&unaff_gp[8].field_0x1ac = final_result;
  }
  byte_ptr = &unaff_gp[8].field_0x1c8;
  main_variable = FUN_0000df42((char *)byte_ptr);
  if (main_variable != 0) {
    puVar3 = &unaff_gp->field_0x3f0;
    for (final_result = 0; ((byte_ptr != (byte *)0x0 && (*byte_ptr != 0)) && (final_result < 4));
        final_result = final_result + 1) {
      main_variable = FUN_0000b7b6(byte_ptr,(undefined4 *)0x0,0x10);
      *(int *)(puVar3 + 0x2c) = main_variable;
      byte_ptr = (byte *)FUN_0000ddfa((char *)byte_ptr,0x2c);
      if ((byte_ptr != (byte *)0x0) && (*byte_ptr != 0)) {
        byte_ptr = byte_ptr + 1;
      }
      puVar3 = puVar3 + 4;
    }
  }
  main_variable = *pointer_to_int;
  if (*(int *)(main_variable + 0x9c) != 0) {
    *(undefined4 *)&unaff_gp[8].field_0x19c = 1;
  }
  unaff_gp->field1354_0x56c = *(undefined4 *)&unaff_gp[8].field_0x1a0;
  if (*(int *)(main_variable + 0x88) != 0) {
    *(undefined4 *)&unaff_gp[8].field_0x23c = 9;
  }
  puVar3 = &unaff_gp[8].field_0x2f4;
  final_result = FUN_0000df42(puVar3);
  if (2 < final_result) {
    final_result = FUN_0000dfbc(puVar3,(undefined4 *)0x0,10);
    str_ptr = FUN_0000ddfa(puVar3,0x2c);
    if (((str_ptr != (char *)0x0) &&
        (param_value = FUN_0000dfbc((byte *)(str_ptr + 1),(undefined4 *)0x0,10),
        final_result < 8 && param_value < 8)) && (final_result != param_value)) {
      main_variable = FUN_0000b8a2();
      param_value = (**(code **)(main_variable + 0x84))(param_value + 0x4d);
      main_variable = FUN_0000b8a2();
      final_result = (**(code **)(main_variable + 0x84))(final_result + 0x4d);
      if (param_value != 0) {
        unaff_gp->field776_0x314 = param_value;
        unaff_gp->field775_0x310 = final_result;
        FUN_000097fe(&unaff_gp->field775_0x310,(undefined *)&unaff_gp->field777_0x318);
      }
    }
  }
  operation_result = FUN_0000df42(&unaff_gp[8].field_0x2d4);
  final_result = extraout_r4_00;
  param_value = extraout_r5;
  if ((0x10 < operation_result) &&
     (main_variable = FUN_0000abda(&unaff_gp[8].field_0x2d4,(undefined *)&local_counter),
     final_result = extraout_r4_01, param_value = extraout_r5_00, main_variable == 0)) {
    unaff_gp->field777_0x318 = local_counter;
    unaff_gp->field778_0x31c = local_data;
    final_result = (uint)local_data._1_1_ << 0x10 | (uint)(byte)local_data << 0x18;
    param_value = (local_counter >> 8 & 0xff) << 0x10 | local_counter << 0x18;
    unaff_gp->field775_0x310 = final_result;
    unaff_gp->field776_0x314 =
         (local_counter >> 0x10 & 0xff) << 8 | param_value | local_counter >> 0x18;
  }
  main_variable = *(int *)&unaff_gp[8].field_0x250;
  if (main_variable == 0) {
    str_ptr = &unaff_gp->field789_0x328;
    FUN_0000b388((int)str_ptr,0xc,(byte *)s__08x__00001000,unaff_gp->field702_0x2c4,final_result,
                 param_value);
LAB_00000de0:
    FUN_0000df7a(&unaff_gp->field817_0x344,str_ptr,(char *)0x7f);
    unaff_gp->field_0x3c3 = 0;
  }
  else {
    if (main_variable == 1) {
      str_ptr = &unaff_gp[8].field_0x254;
      goto LAB_00000de0;
    }
    if (main_variable == 2) {
      FUN_0000b388((int)&unaff_gp->field817_0x344,0x80,&DAT_00001034,
                   (uint)*(byte *)&unaff_gp->field777_0x318,
                   (uint)*(byte *)((int)&unaff_gp->field777_0x318 + 1),
                   (uint)*(byte *)((int)&unaff_gp->field777_0x318 + 2));
    }
  }
  FUN_0000a780();
  is_valid = FUN_0000a7ea();
  if (CONCAT31(extraout_var_00,is_valid) == 0 || *(int *)&unaff_gp[8].field_0x18c == 2) {
    FUN_0000a48c(*(int *)&unaff_gp[8].field_0x18c,*(uint *)&unaff_gp[8].field_0x190);
  }
  else {
    *(undefined4 *)&unaff_gp[8].field_0x18c = 0;
    *(undefined4 *)&unaff_gp[8].field_0x190 = 1;
  }
  *(undefined4 *)&unaff_gp[8].field_0x4bc = 1;
  puVar3 = &unaff_gp[8].field_0x3a4;
  if (((unaff_gp[8].field_0x3a4 == '\0') ||
      (main_variable = FUN_0000b6f0(puVar3,(byte *)s_death_blacksite_alephvoid_com_00001054,0x22),
      main_variable == 0)) || (main_variable = FUN_0000e642(puVar3), main_variable == 0)) {
    char_flag = '\0';
    FUN_0000df7a((undefined4 *)puVar3,s_death_blacksite_alephvoid_com_00001054,(char *)0x3f);
    unaff_gp[8].field_0x3e8 = 0;
    *(undefined4 *)&unaff_gp[8].field_0x468 = 1;
  }
  else {
    char_flag = unaff_gp[8].field_0x3e8;
    if (unaff_gp[8].field_0x46c == '\0') {
      *(undefined4 *)&unaff_gp[8].field_0x468 = 0;
      if (*(int *)&unaff_gp[8].field_0x3e4 == 0) {
        *(undefined4 *)&unaff_gp[8].field_0x3e4 = 0x50;
      }
      goto LAB_00000eec;
    }
    *(undefined4 *)&unaff_gp[8].field_0x468 = 1;
    if (*(int *)&unaff_gp[8].field_0x3e4 != 0) goto LAB_00000eec;
  }
  *(undefined4 *)&unaff_gp[8].field_0x3e4 = 0x1bb;
LAB_00000eec:
  if (char_flag == '\0') {
    FUN_0000df7a((undefined4 *)&unaff_gp[8].field_0x3e8,s__net_install__00001008,(char *)0x7f);
    unaff_gp[8].field_0x467 = 0;
  }
  if ((*(int *)(*pointer_to_int + 0xb0) != 0) &&
     (final_result = FUN_0000b0b8(), (final_result & 0xfffffffe) == 0)) {
    is_valid = FUN_0000a7f8();
    uVar2 = 0;
    if (((CONCAT31(extraout_var_01,is_valid) != 0) ||
        (is_valid = FUN_0000a7ea(), CONCAT31(extraout_var_02,is_valid) != 0)) ||
       (((is_valid = FUN_0000a806(), CONCAT31(extraout_var_03,is_valid) != 0 ||
         (is_valid = FUN_0000a814(), CONCAT31(extraout_var_04,is_valid) != 0)) &&
        (main_variable = FUN_0000a4d8(), main_variable != 0)))) {
      uVar2 = 1;
    }
    *(undefined4 *)&unaff_gp[8].field_0x4b0 = uVar2;
  }
  if ((unaff_gp->field153_0x9c & 0x10000000) != 0) {
    *(undefined4 *)&unaff_gp[8].field_0x4b0 = 0;
  }
  if ((*(int *)&unaff_gp[8].field_0x238 != 0) || (unaff_gp->field979_0x3ec != 0)) {
    *(undefined4 *)&unaff_gp[8].field_0x4b0 = 0;
  }
  final_result = FUN_0000b0b8();
  if (((final_result & 0xfffffffe) != 0) && (*(int *)&unaff_gp[8].field_0x468 != 0)) {
    *(undefined4 *)&unaff_gp[8].field_0x4b0 = 0;
    *(undefined4 *)&unaff_gp[8].field_0x4bc = 0;
  }
  if (*(int *)(*pointer_to_int + 0xc4) != 0) {
    *(undefined4 *)&unaff_gp[8].field_0x4c0 = 500;
  }
  is_valid = FUN_0000af6a();
  if ((CONCAT31(extraout_var_05,is_valid) == 0) || (*(int *)&unaff_gp[8].field_0x4b0 == 0)) {
    *(undefined4 *)&unaff_gp[8].field_0x4b4 = 0;
    main_variable = 0;
  }
  else {
    main_variable = *(int *)&unaff_gp[8].field_0x4b4;
  }
  iVar1 = *pointer_to_int;
  if (main_variable != 0) {
    *(undefined4 *)&unaff_gp[8].field_0x23c = 0;
    *(undefined4 *)&unaff_gp[8].field_0x154 = 1;
    if (*(int *)(iVar1 + 0xc4) != 0) {
      *(undefined4 *)&unaff_gp[8].field_0x4c0 = 0x1194;
    }
  }
  if (*(int *)(iVar1 + 0x100) != 0) {
    is_valid = FUN_0000a7bc();
    if ((CONCAT31(extraout_var_06,is_valid) == 0) &&
       (is_valid = FUN_0000a7ca(), CONCAT31(extraout_var_07,is_valid) == 0)) {
      *(undefined4 *)&unaff_gp[8].field_0x4c8 = 0x6421;
    }
    else {
      *(undefined **)&unaff_gp[8].field_0x4c8 = &DAT_00065421;
    }
  }
  return;
}

