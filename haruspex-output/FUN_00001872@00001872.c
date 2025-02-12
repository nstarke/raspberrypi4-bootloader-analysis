
void FUN_00001872(int param_1,undefined param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  *(undefined *)(param_1 + (uVar1 & 3) + 0x10) = param_2;
  if ((uVar1 & 3) == 3) {
    *(undefined4 *)(*(int *)(param_1 + 4) + (uVar1 & 0xfffffffc)) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
    uVar1 = *(uint *)(param_1 + 8);
  }
  *(uint *)(param_1 + 8) = uVar1 + 1;
  return;
}

