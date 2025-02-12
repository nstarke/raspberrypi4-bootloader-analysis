
undefined4 FUN_0000abda(byte *param_1,undefined *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte *local_18;
  
  if ((param_1 == (byte *)0x0) || (uVar1 = FUN_0000df42((char *)param_1), uVar1 < 0x11)) {
LAB_0000ac24:
    uVar3 = 0xffffffff;
  }
  else {
    iVar4 = 0;
    do {
      local_18 = param_1;
      iVar2 = FUN_0000aae4(param_1,&local_18,1);
      *param_2 = (char)iVar2;
      if (((iVar4 < 5) && (*local_18 != 0x3a)) || ((int)local_18 - (int)param_1 != 2))
      goto LAB_0000ac24;
      param_1 = local_18 + 1;
      param_2 = param_2 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    uVar3 = 0;
  }
  return uVar3;
}

