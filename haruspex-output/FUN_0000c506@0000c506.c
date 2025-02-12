
void FUN_0000c506(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0000b8a2();
  (**(code **)(iVar1 + 0x24))(0x3ea,0x3ea,0x10,*(code **)(iVar1 + 0x24));
  if (param_1 != 0) {
    iVar1 = FUN_0000b8a2();
    (**(code **)(iVar1 + 0x30))(0x3ea,0,*(code **)(iVar1 + 0x30));
    FUN_0000bf1c(100);
  }
  iVar1 = FUN_0000b8a2();
  (**(code **)(iVar1 + 0x30))(0x3ea,1);
  if (param_2 == 0) {
    FUN_0000bf1c(100);
  }
  if (param_1 != 0) {
    FUN_0000bf1c(3000);
  }
  return;
}

