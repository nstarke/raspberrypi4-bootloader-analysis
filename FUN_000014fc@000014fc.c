
undefined4 FUN_000014fc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    if (*(uint *)(param_1 + 0x10) < 2) {
      uVar1 = 0x90;
      *(undefined4 *)(param_1 + 0x18) = 2;
    }
    else {
      if (*(uint *)(param_1 + 0x10) == 2) {
        uVar1 = 0x10;
      }
      else {
        uVar1 = 0x30;
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    FUN_00001866(param_1,0x28,uVar1);
    FUN_00001866(param_1,0x50,0x40);
    iVar2 = *(int *)(param_1 + 4);
  }
  *(int *)(param_1 + 4) = iVar2 + 1;
  return 0;
}

