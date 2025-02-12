
undefined4 FUN_0000498a(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int extraout_r2;
  uint uVar4;
  int local_1c;
  int iStack_18;
  
  iVar1 = FUN_0000444c(param_2);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  FUN_00004590(param_2,&iStack_18,&local_1c);
  uVar2 = FUN_00004778(param_2);
  if (extraout_r2 == 0) {
    uVar3 = FUN_00004cc6(param_2);
    uVar3 = uVar3 & ~(1 << local_1c);
  }
  else {
    if (extraout_r2 != 1) {
      if (extraout_r2 == 3) {
        uVar4 = 4;
      }
      else {
        uVar4 = extraout_r2 - 4;
      }
      if ((int)uVar4 < 0) {
        return 0xffffffff;
      }
      uVar4 = uVar4 & 0x1f;
      goto LAB_000049f4;
    }
    uVar3 = FUN_00004cc6(param_2);
    uVar3 = uVar3 | 1 << local_1c;
  }
  uVar4 = 5;
  FUN_00004cea(param_2,uVar3);
LAB_000049f4:
  FUN_000047a2(param_2,uVar2 & 0xffffff7f | 0x40);
  uVar2 = FUN_0000452a(param_2);
  FUN_00004554(param_2,uVar2 & 0xffffffe0 | uVar4);
  return 0;
}

