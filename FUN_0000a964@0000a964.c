
undefined4 FUN_0000a964(byte *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_gp;
  
  iVar2 = *(int *)(unaff_gp + 0x4f4);
  for (; *param_1 == 0x20 || *param_1 == 9; param_1 = param_1 + 1) {
  }
  if (((((iVar2 < 0x5dc) && (iVar1 = FUN_0000b6f0(param_1,&LAB_0000a9f4,3), iVar1 == 0)) ||
       ((0x5db < iVar2 &&
        ((iVar2 < 3000 && (iVar1 = FUN_0000b6f0(param_1,&LAB_0000a9f8,4), iVar1 == 0)))))) ||
      ((2999 < iVar2 &&
       ((iVar2 < 5000 && (iVar1 = FUN_0000b6f0(param_1,&DAT_0000a9ec,2), iVar1 == 0)))))) ||
     ((4999 < iVar2 && (iVar2 = FUN_0000b6f0(param_1,&LAB_0000a9f0,2), iVar2 == 0)))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

