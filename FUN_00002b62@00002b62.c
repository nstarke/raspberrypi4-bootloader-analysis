
void FUN_00002b62(undefined4 *param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_gp;
  uint local_1c;
  
  FUN_00007e18(param_1,0,0x2a4);
  iVar2 = param_2;
  iVar3 = param_3;
  if (0 < param_3) {
    do {
      *(undefined4 *)(iVar2 + 0x10) = 1;
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + 0x14;
    } while (0 < iVar3);
  }
  param_1[6] = param_3;
  param_1[5] = param_2;
  uVar1 = FUN_00009e48(&local_1c);
  param_1[0xa7] = uVar1;
  *(undefined *)(param_1 + 0xa2) = 2;
  param_1[0xa3] = &LAB_00002c70;
  param_1[0xa4] = param_1 + 0x61;
  param_1[0xa5] = 0x101;
  uVar4 = (uint)((param_4 & 1) != 0);
  param_1[2] = uVar4;
  if (local_1c < 0x4000) {
    FUN_00009cdc(uVar1,param_1 + 0xa0,local_1c,uVar4,0x101,2);
  }
  param_1[0x60] = 1;
  param_1[0x5f] = 1;
  param_1[0x5e] = 1;
  param_1[0x5d] = 1;
  param_1[0x5c] = 1;
  iVar2 = FUN_0000a4d8();
  if (((iVar2 != 0) && (*(int *)(unaff_gp + 0xb8) == 0)) && (param_1[2] != 0)) {
    iVar2 = FUN_0000b15c((undefined4 *)(unaff_gp + 0xc0));
    *(int *)(unaff_gp + 0xb8) = iVar2;
  }
  return;
}

