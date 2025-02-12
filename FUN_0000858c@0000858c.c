
void FUN_0000858c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x2000) = 1;
  iVar2 = 0x2000;
  puVar1 = (undefined4 *)(param_1 + 0x8000);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 1;
  } while (0 < iVar2);
  iVar2 = 0x800;
  puVar1 = (undefined4 *)(param_1 + 0x4000);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 1;
  } while (0 < iVar2);
  return;
}

