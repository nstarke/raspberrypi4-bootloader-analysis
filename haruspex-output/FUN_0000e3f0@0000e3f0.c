
int FUN_0000e3f0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uStack_1c;
  
  uVar1 = *(uint *)(param_1 + 0x37c);
  if (uVar1 <= param_3) {
    param_3 = uVar1;
  }
  *(uint *)(param_1 + 0x37c) = uVar1 - param_3;
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    do {
      *(undefined *)(param_1 + 0x380) = 1;
      iVar2 = FUN_000019d4(param_1,&uStack_1c);
      iVar2 = FUN_0000dd70(param_1,(iVar2 << 0x19) >> 0x19);
      if (iVar2 != 0) break;
    } while (*(char *)(param_1 + 0x249) != '\a');
    iVar2 = FUN_00003680(param_1,*(int *)(param_1 + 0x24c),param_2,param_3);
    FUN_000019d4(param_1,&uStack_1c);
    *(undefined *)(param_1 + 0x249) = 4;
  }
  return iVar2;
}

