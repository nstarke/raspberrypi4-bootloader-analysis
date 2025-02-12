
int FUN_0000c392(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  FUN_0000c506(param_1,0);
  iVar1 = FUN_0000b8a2();
  iVar1 = (**(code **)(iVar1 + 0x40))(0);
  if (iVar1 != 0) {
    iVar2 = FUN_0000b8a2();
    (**(code **)(iVar2 + 0x44))(iVar1,0x43,*(code **)(iVar2 + 0x44));
    FUN_0000c612(iVar1,0);
    uVar3 = FUN_0000c4b4(iVar1);
    if (uVar3 == 0x20001927) {
      return iVar1;
    }
  }
  if (iVar1 != 0) {
    iVar2 = FUN_0000b8a2();
    (**(code **)(iVar2 + 0x3c))(iVar1,*(code **)(iVar2 + 0x3c));
  }
  return 0;
}

