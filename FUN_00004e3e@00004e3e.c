
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00004e3e(int param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_2 + 1) == '\x05') {
    _DAT_7c480800 = (*(byte *)(param_2 + 2) & 0x7f) << 4 | _DAT_7c480800 & 0xfffff80f;
    FUN_0000e598(param_1,0,(undefined4 *)(param_1 + 8),0);
    iVar1 = FUN_0000433c(param_1,0);
    if ((iVar1 << 0x19) >> 0x19 == 0xb) {
      return 0;
    }
  }
  else if (*(char *)(param_2 + 1) == '\t') {
    FUN_0000e598(param_1,0,(undefined4 *)(param_1 + 8),0);
    iVar1 = FUN_0000433c(param_1,0);
    if ((iVar1 << 0x19) >> 0x19 == 0xb) {
      FUN_0000e552(param_1,1,param_1 + 0x3d,*(uint *)(param_1 + 0x240));
      *(undefined *)(param_1 + 0x248) = 4;
      return 0;
    }
  }
  return 0xffffffff;
}

