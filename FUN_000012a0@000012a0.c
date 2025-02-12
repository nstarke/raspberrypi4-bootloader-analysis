
int FUN_000012a0(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r4;
  int extraout_r4_00;
  int extraout_r5;
  int iVar5;
  
  FUN_00001866(param_1,0x24,0);
  FUN_00001866(param_1,0x2c,0);
  FUN_00001866(param_1,0,extraout_r5 << 1 | 1);
  FUN_00001866(param_1,0x50,0x50);
  FUN_00001866(param_1,0x24,param_4 & 0x3f);
  uVar1 = FUN_00001706(param_1,0x28);
  FUN_00001866(param_1,extraout_r3,uVar1 & 0xfffffffc | 1);
  uVar1 = FUN_00001706(param_1,0x2c);
  FUN_00001866(param_1,0x2c,extraout_r4 & 0x70 | uVar1 & 0xffffff8f | 3);
  iVar2 = FUN_00001740(param_1);
  if ((iVar2 == 0) && (param_4 != 0)) {
    uVar1 = 0x30;
    do {
      uVar1 = FUN_00001706(param_1,uVar1);
      iVar5 = 0;
      if (extraout_r3_00 < param_4) {
        uVar3 = extraout_r3_00;
        puVar4 = (undefined *)(param_3 + extraout_r3_00);
        do {
          *puVar4 = (char)uVar1;
          uVar1 = uVar1 >> 8;
          uVar3 = uVar3 + 1;
          iVar5 = iVar5 + 1;
          if (3 < iVar5) break;
          puVar4 = puVar4 + 1;
        } while (uVar3 < param_4);
      }
      uVar1 = extraout_r4_00 + 4;
    } while (extraout_r3_00 + 4 < param_4);
  }
  FUN_00001866(param_1,0x2c,0);
  return iVar2;
}

