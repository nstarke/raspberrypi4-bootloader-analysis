
void FUN_00001c60(uint param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r4;
  undefined4 extraout_r4_00;
  undefined4 extraout_r4_01;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  undefined4 extraout_r5_01;
  undefined auStack_38 [16];
  undefined auStack_28 [16];
  
  FUN_0000ca88(param_1,1,(int)auStack_28,param_4,param_5,param_6);
  FUN_0000ca88(param_1,2,(int)auStack_38,extraout_r3,extraout_r4,extraout_r5);
  FUN_0000ccee(param_1,param_2,param_3,(int)auStack_28,(int)auStack_38);
  FUN_0000cac2(param_1,2,(int)auStack_38,extraout_r3_00,extraout_r4_00,extraout_r5_00);
  FUN_0000cac2(param_1,1,(int)auStack_28,extraout_r3_01,extraout_r4_01,extraout_r5_01);
  FUN_000026b6();
  return;
}

