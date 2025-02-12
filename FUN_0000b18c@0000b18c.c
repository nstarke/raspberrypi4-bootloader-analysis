
int FUN_0000b18c(int *param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined param_7 [264])

{
  undefined auVar1 [288];
  undefined4 *puVar2;
  char *pcVar3;
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
  int iVar4;
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
  uint unaff_gp;
  undefined4 unaff_lr;
  uint in_stack_ffffffe8;
  
  FUN_0000e198((byte *)s_RSA_verify_0000b21c,(uint)param_2,param_3,param_4,param_5,param_6);
  FUN_0000189e(param_1,extraout_r1,extraout_r2,extraout_r3,extraout_r4,extraout_r5);
  FUN_0000189e(param_2,extraout_r1_00,extraout_r2_00,extraout_r3_00,extraout_r4_00,extraout_r5_00);
  FUN_0000189e(param_3,extraout_r1_01,extraout_r2_01,extraout_r3_01,extraout_r4_01,extraout_r5_01);
  if (param_2[2] == 0x100) {
    iVar4 = param_3[2];
    if (iVar4 == 0x108) {
      iVar4 = param_3[1];
      puVar2 = (undefined4 *)FUN_0000a9fe((undefined4 *)&stack0xffffffe8);
      if (puVar2 == (undefined4 *)0x0) {
        FUN_00009cdc(0,extraout_r1_02,extraout_r2_03,extraout_r3_03,extraout_r4_03,extraout_r5_03);
      }
      auVar1._4_4_ = unaff_r9;
      auVar1._0_4_ = in_stack_ffffffe8;
      auVar1._8_4_ = unaff_r8;
      auVar1._12_4_ = unaff_r7;
      auVar1._16_4_ = unaff_r6;
      auVar1._20_4_ = unaff_lr;
      auVar1._24_264_ = param_7;
      iVar4 = FUN_0000c626(iVar4,iVar4 + 0x100,param_1[1],param_2[1],puVar2,in_stack_ffffffe8,auVar1
                          );
      if (iVar4 == 0) {
        unaff_gp = unaff_gp + 5;
      }
      FUN_0000a2ac((byte *)s_rsa_verify__s__0x_x__0000b228,unaff_gp,-iVar4,extraout_r3_04,
                   extraout_r4_04,extraout_r5_04);
      return iVar4;
    }
    pcVar3 = s_RSA__Invalid_key_length__u_0000b240;
  }
  else {
    pcVar3 = s_RSA__Invalid_signature_length__u_0000b25c;
    iVar4 = extraout_r4_02;
  }
  FUN_0000a2ac((byte *)pcVar3,param_2[2],extraout_r2_02,extraout_r3_02,iVar4,extraout_r5_02);
  return -1;
}

