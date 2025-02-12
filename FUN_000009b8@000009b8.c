
void FUN_000009b8(byte *param_1,int param_2)

{
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  uint extraout_r3_01;
  uint uVar1;
  undefined4 extraout_r3_02;
  undefined4 extraout_r4;
  undefined4 extraout_r4_00;
  uint uVar2;
  undefined4 extraout_r4_01;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  uint extraout_r5_01;
  uint uVar3;
  undefined4 extraout_r5_02;
  undefined auStack_34 [4];
  uint local_30;
  uint local_2c;
  uint local_24 [4];
  
  FUN_00001ebe((char *)param_1);
  FUN_0000ca88((int)param_1,1,(int)local_24,extraout_r3,extraout_r4,extraout_r5);
  FUN_0000ca88((int)param_1,2,(int)auStack_34,extraout_r3_00,extraout_r4_00,extraout_r5_00);
  uVar2 = (uint)*param_1;
  uVar1 = extraout_r3_01;
  uVar3 = extraout_r5_01;
  if (param_2 == 0) {
    if (uVar2 == 2) {
      local_30 = local_30 & 0xffeffbff;
      local_2c = local_2c & 0xfffeffbf;
      uVar3 = local_24[0] & 0xfffeffff;
      local_24[0] = uVar3;
    }
    else {
      local_30 = local_30 & 0xfffffbff;
    }
  }
  else if (uVar2 == 2) {
    local_30 = local_30 | 0x100400;
    local_2c = local_2c | 0x10040;
    uVar1 = local_24[0] | 0x10000;
    local_24[0] = uVar1;
  }
  else {
    local_30 = local_30 | 0x400;
  }
  FUN_0000cac2((int)param_1,1,(int)local_24,uVar1,uVar2,uVar3);
  FUN_0000cac2((int)param_1,2,(int)auStack_34,extraout_r3_02,extraout_r4_01,extraout_r5_02);
  return;
}

