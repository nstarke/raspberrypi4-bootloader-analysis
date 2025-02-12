
undefined4 FUN_00001e3a(uint param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  
  pbVar1 = FUN_00001ed0(param_1);
  if (pbVar1 == (byte *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(pbVar1 + 0x24);
  }
  return uVar2;
}

