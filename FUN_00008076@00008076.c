
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00008076(undefined4 *param_1)

{
  int unaff_gp;
  
  _DAT_7c001008 = param_1[1];
  _DAT_7c001040 = param_1[0xd];
  if (*(uint *)(&DAT_00002d14 + unaff_gp) < 4) {
    _DAT_7c001008 = (*(uint *)(&DAT_00002d14 + unaff_gp) & 7) << 0xc | _DAT_7c001008 & 0xffff8fff;
  }
  _DAT_7c001004 = *param_1;
  _DAT_7c00100c = param_1[2];
  _DAT_7c001010 = param_1[3];
  _DAT_7c001014 = param_1[4];
  _DAT_7c001018 = param_1[5];
  _DAT_7c00101c = param_1[6];
  _DAT_7c001020 = param_1[7];
  _DAT_7c001024 = param_1[8];
  _DAT_7c001028 = param_1[9];
  _DAT_7c001060 = param_1[0xf];
  _DAT_7c001030 = param_1[0xb];
  if ((*(int *)(unaff_gp + 100) != 0) && (*(int *)(unaff_gp + 0x88) == 0x80)) {
    _DAT_7c001040 = _DAT_7c001040 | 0x10000;
  }
  _DAT_7c001038 = param_1[0xc];
  if (*(int *)(unaff_gp + 100) != 0) {
    _DAT_7c00102c = param_1[10];
    _DAT_7c001048 = param_1[0xe];
  }
  _DAT_7c001064 = param_1[0x10];
  _DAT_7c001068 = param_1[0x11];
  FUN_00007eac();
  return;
}

