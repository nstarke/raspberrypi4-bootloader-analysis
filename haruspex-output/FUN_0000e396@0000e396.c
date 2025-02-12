
int FUN_0000e396(int param_1,char *param_2)

{
  int iVar1;
  uint uStack_18;
  
  *(undefined4 *)(param_1 + 0x37c) = 0;
  do {
    FUN_0000df7a((undefined4 *)(param_1 + 0x27c),param_2,"");
    *(undefined *)(param_1 + 0x37b) = 0;
    *(undefined *)(param_1 + 0x380) = 0;
    iVar1 = FUN_000019d4(param_1,&uStack_18);
    iVar1 = FUN_0000dd70(param_1,(iVar1 << 0x19) >> 0x19);
    if (iVar1 != 0) break;
  } while (*(char *)(param_1 + 0x249) != '\b');
  *(undefined *)(param_1 + 0x249) = 4;
  iVar1 = *(int *)(param_1 + 0x37c);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  return iVar1;
}

