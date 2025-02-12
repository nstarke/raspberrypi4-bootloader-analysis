
void FUN_0000b354(int param_1)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = FUN_0000c420();
  if (iVar1 != 0) {
    iVar1 = FUN_0000b15c(&local_c);
    if (param_1 == 0) {
      (**(code **)(iVar1 + 0x2c))(local_c,0x2c,1,*(code **)(iVar1 + 0x2c));
    }
    else {
      (**(code **)(iVar1 + 0x30))(local_c,0x2c,1);
    }
  }
  return;
}

