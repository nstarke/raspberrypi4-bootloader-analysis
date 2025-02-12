
undefined4 FUN_00004088(int param_1,undefined param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 7);
  uVar3 = 0;
  if (bVar1 == 6) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = FUN_000003bc((uint)*(byte *)(param_1 + 6) + (uint)bVar1,6);
    *(undefined *)(param_1 + iVar2) = param_2;
    *(byte *)(param_1 + 7) = bVar1 + 1;
  }
  return uVar3;
}

