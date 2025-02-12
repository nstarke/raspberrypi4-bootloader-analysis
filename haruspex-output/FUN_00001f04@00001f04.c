
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001f04(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint extraout_r3;
  uint uVar1;
  undefined4 extraout_r4;
  undefined4 uVar2;
  uint extraout_r5;
  uint uVar3;
  int unaff_gp;
  undefined auStack_20 [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  
  FUN_0000ca88((int)param_1,3,(int)auStack_20,param_4,param_5,param_6);
  uVar1 = extraout_r3;
  uVar2 = extraout_r4;
  uVar3 = extraout_r5;
  switch(*param_1) {
  case 1:
    uVar1 = local_14 | 0x400;
    local_14 = uVar1;
    break;
  case 2:
  case 7:
    local_18 = local_18 | 0x4000;
    local_1c = local_1c | 0x11c000;
    break;
  case 4:
    if (*(int *)(unaff_gp + 100) == 0) {
      _DAT_7d5200f0 = 0x910c0000;
      _DAT_7d5200f4 = 0x40b8c451;
      _DAT_7d5200f8 = 0x46502fbc;
      uVar3 = 0x20b8c205;
      _DAT_7d5200fc = 0x20b8c205;
      uVar2 = 0x420183ff;
      _DAT_7d520100 = 0x420183ff;
      uVar1 = 0x7c001181;
      _DAT_7d520104 = 0x7c001181;
      _DAT_7d520108 = 0xc8365c80;
      _DAT_7d52010c = 0xf0804444;
      _DAT_7d520110 = 0xf80f8000;
      local_1c = local_1c | 0x228000;
    }
    else {
      uVar3 = local_18 | 0x40000;
      local_18 = uVar3;
    }
  }
  FUN_0000cac2((int)param_1,3,(int)auStack_20,uVar1,uVar2,uVar3);
  return;
}

