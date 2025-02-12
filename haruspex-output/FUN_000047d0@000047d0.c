
undefined4 FUN_000047d0(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_c;
  uint *local_8;
  
  iVar1 = FUN_000047fc(param_1,&local_c,(int *)0x0,(int *)0x0,&local_8,(undefined4 *)0x0);
  if ((iVar1 != 0) || (uVar2 = 1, (*local_8 & 1 << (local_c & 0x1f)) == 0)) {
    uVar2 = 0;
  }
  return uVar2;
}

