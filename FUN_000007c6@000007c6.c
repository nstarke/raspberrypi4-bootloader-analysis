
uint FUN_000007c6(byte *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  byte *local_24;
  byte *local_20;
  int local_1c;
  
  local_20 = param_1;
  while (((&DAT_0000eee1)[*local_20] & 8) != 0) {
    local_20 = local_20 + 1;
  }
  *param_4 = 0;
  iVar2 = 0;
  if (*local_20 == 0x2d) {
    iVar2 = -1;
LAB_000007fa:
    local_20 = local_20 + 1;
  }
  else if (*local_20 == 0x2b) goto LAB_000007fa;
  local_1c = 0;
  if (param_3 == 0) {
    param_3 = FUN_000040f8((int *)&local_20);
LAB_00000816:
    uVar1 = FUN_0000071e(local_20,param_3,&local_24,&local_1c);
    if (local_1c == 0) {
      if (iVar2 != 0) {
        uVar1 = -uVar1;
      }
      goto LAB_00000858;
    }
    if (local_1c != -1) {
      uVar1 = 0xffffffff;
      *param_4 = 0x22;
      goto LAB_00000858;
    }
  }
  else {
    if (param_3 == 0x10) {
      FUN_000040f8((int *)&local_20);
      goto LAB_00000816;
    }
    if ((1 < (int)param_3) && ((int)param_3 < 0x25)) goto LAB_00000816;
  }
  uVar1 = 0;
  local_24 = param_1;
LAB_00000858:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_24;
  }
  return uVar1;
}

