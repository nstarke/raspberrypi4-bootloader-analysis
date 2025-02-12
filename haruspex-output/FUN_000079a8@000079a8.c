
int FUN_000079a8(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *extraout_r3;
  int iVar2;
  uint uVar3;
  int aiStack_24 [3];
  
  iVar2 = 0;
  FUN_000074be(aiStack_24);
  FUN_00007672(aiStack_24,extraout_r3,*(uint *)(param_1 + 4));
  iVar1 = FUN_00006b96(aiStack_24,(int *)(param_1 + 8));
  if (-1 < iVar1) {
    iVar2 = -4;
  }
  if (iVar1 < 0) {
    uVar3 = *(uint *)(param_1 + 4);
    FUN_0000704e(aiStack_24,aiStack_24,(int *)(param_1 + 0x14),(int *)(param_1 + 8),
                 (int *)(param_1 + 0x68));
    FUN_00007904((int)aiStack_24,param_3,uVar3);
  }
  FUN_00007450(aiStack_24);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + -0x4280;
  }
  return iVar2;
}

