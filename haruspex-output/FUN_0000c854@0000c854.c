
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0000c854(uint param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint extraout_r5;
  uint uVar3;
  
  iVar1 = FUN_0000c7f6();
  uVar3 = 0xffffffff;
  if (iVar1 == 0) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x1000000;
    }
    if (param_3 == 0) {
      _DAT_7c001090 = 0;
    }
    else {
      _DAT_7c001090 = 0x4000000;
    }
    _DAT_7c001090 = _DAT_7c001090 | param_1 & 0x7f | uVar2;
    iVar1 = 10;
    while (((_DAT_7c001090 & 0x80000000) == 0 && (iVar1 = iVar1 + -1, iVar1 != 0))) {
      FUN_0000bf1c(1000);
      uVar2 = extraout_r5;
    }
    if ((_DAT_7c001090 & 0x40000000) == 0) {
      uVar3 = (_DAT_7c001090 & 0xff0000) >> 0x10;
    }
    else {
      FUN_0000a2ac((byte *)s_SD_MR__08x_R_timeout__d__d__d_rd_0000c8d0,_DAT_7c001090,param_1,param_2
                   ,param_3,uVar2);
    }
  }
  FUN_0000c7f4();
  return uVar3;
}

