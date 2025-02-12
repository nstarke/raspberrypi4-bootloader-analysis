
undefined4 FUN_00004d82(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0000444c(param_2);
  uVar3 = 0;
  if ((iVar1 == 0) && ((int)param_3 < 4)) {
    if (param_3 == 3) {
      param_3 = (uint)(byte)(&DAT_0000f170)[param_2];
    }
    uVar2 = FUN_00004778(param_2);
    uVar2 = uVar2 & 0xfffffff3;
    if (param_3 == 2) {
      uVar2 = uVar2 | 8;
    }
    else if (param_3 == 1) {
      uVar2 = uVar2 | 4;
    }
    FUN_000047a2(param_2,uVar2);
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

