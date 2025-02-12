
void FUN_000018c8(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if ((*(uint *)(param_1 + 8) & 3) != 0) {
    uVar2 = *(uint *)(param_1 + 8) & 0xfffffffc;
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(*(int *)(param_1 + 4) + uVar2) = uVar3;
    *(undefined4 *)(param_1 + 0x10) = 0;
    uVar1 = *(int *)(param_1 + 8) + 3U & 0xfffffffc;
    *(uint *)(param_1 + 8) = uVar1;
    if (*(uint *)(param_1 + 0xc) < uVar1) {
      FUN_00009cdc(param_1,uVar1,uVar2,0,*(uint *)(param_1 + 0xc),uVar3);
    }
  }
  return;
}

