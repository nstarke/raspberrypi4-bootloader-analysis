
void FUN_00007eae(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int unaff_gp;
  
  if (param_1 == 0) {
    if (*(int *)(&DAT_00002f18 + unaff_gp) != 0) {
      FUN_0000bf1c(10000);
    }
    uRam7d5043a8 = 0;
    uRam7d504380 = 0x7f;
    iVar1 = FUN_0000b8a2();
    pcVar3 = *(code **)(iVar1 + 0x24);
    uVar2 = 0x100;
  }
  else {
    FUN_0000e072();
    uRam7d5043a8 = 0x1a0;
    uRam7d504380 = 0x10;
    iVar1 = FUN_0000b8a2();
    pcVar3 = *(code **)(iVar1 + 0x24);
    uVar2 = 0x101;
  }
  (*pcVar3)(0x3f5,0x3f6,uVar2,pcVar3);
  return;
}

