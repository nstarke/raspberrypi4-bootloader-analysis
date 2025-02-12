
void FUN_0000a332(uint param_1,int param_2)

{
  code *pcVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_gp;
  
  uVar3 = param_1 & 0xf;
  iVar4 = (int)(param_1 & 0xf0) >> 4;
  if (param_2 != 0) {
    (**(code **)(*(int *)(unaff_gp + 0x124) + 0x9c))(0);
    FUN_0000bf1c(1000000);
  }
  if (iVar4 != 0) {
    do {
      (**(code **)(*(int *)(unaff_gp + 0x124) + 0x9c))(0);
      FUN_0000bf1c(400000);
      pcVar1 = *(code **)(*(int *)(unaff_gp + 0x124) + 0x9c);
      (*pcVar1)(1,pcVar1);
      FUN_0000bf1c(400000);
      iVar4 = iVar4 + -1;
    } while (0 < iVar4);
  }
  if (uVar3 != 0) {
    do {
      (**(code **)(*(int *)(unaff_gp + 0x124) + 0x9c))(0);
      FUN_0000bf1c(200000);
      pcVar1 = *(code **)(*(int *)(unaff_gp + 0x124) + 0x9c);
      (*pcVar1)(1,pcVar1);
      FUN_0000bf1c(200000);
      uVar3 = uVar3 - 1;
    } while (0 < (int)uVar3);
  }
  FUN_0000b33e(0);
  uVar2 = extraout_r1;
  if (param_1 != 10) {
    FUN_0000bf1c(2000000);
    uVar2 = extraout_r1_00;
  }
  if (param_2 != 0) {
    pcVar1 = *(code **)(*(int *)(unaff_gp + 0x124) + 0x9c);
    (*pcVar1)(1,uVar2,pcVar1);
  }
  return;
}

