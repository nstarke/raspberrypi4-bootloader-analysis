
undefined4 FUN_00001372(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_r3;
  uint extraout_r4;
  undefined4 extraout_r4_00;
  uint extraout_r5;
  uint uVar4;
  int extraout_r5_00;
  uint uVar5;
  
  FUN_00001866(param_1,0x24,0);
  FUN_00001866(param_1,0x2c,0);
  FUN_00001866(param_1,0,0);
  uVar5 = 0;
  FUN_00001866(param_1,0,param_2 << 1);
  FUN_00001866(param_1,0x50,0x50);
  FUN_00001866(param_1,extraout_r5,param_4 & 0x3f);
  if (param_4 != 0) {
    uVar4 = 4;
    do {
      uVar3 = 0;
      iVar1 = 4;
      uVar2 = uVar5;
      do {
        uVar3 = uVar3 >> 8;
        if (uVar2 < param_4) {
          uVar3 = uVar3 | (uint)*(byte *)(param_3 + uVar2) << 0x18;
        }
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (0 < iVar1);
      FUN_00001866(param_1,uVar4,uVar3);
      uVar4 = extraout_r5_00 + 4;
      uVar5 = uVar5 + 4;
    } while (uVar5 < param_4);
  }
  uVar5 = FUN_00001706(param_1,0x28);
  FUN_00001866(param_1,extraout_r3,uVar5 & 0xfffffffc);
  uVar5 = FUN_00001706(param_1,0x2c);
  FUN_00001866(param_1,0x2c,uVar5 & 0xffffff8f | extraout_r4 | 1);
  FUN_00001740(param_1);
  FUN_00001866(param_1,0x2c,0);
  return extraout_r4_00;
}

