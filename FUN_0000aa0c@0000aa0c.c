
void FUN_0000aa0c(void)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  bVar2 = false;
  iVar5 = 0;
  piVar3 = (int *)&DAT_c1000000;
  do {
    *piVar3 = iVar5;
    iVar5 = iVar5 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar5 < 0x100000);
  do {
    if (bVar2) {
      return;
    }
    uVar4 = 0;
    do {
      uVar1 = *(uint *)(&DAT_c1000000 + uVar4 * 4);
      if (uVar4 != uVar1) {
        _write_to_stderr((byte *)s_Loop__d_address__p_expected__08x_0000aa58,1,
                         &DAT_c1000000 + uVar4 * 4,uVar4,uVar1,iVar5);
        FUN_0000a3e8(8);
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100000);
    bVar2 = true;
  } while( true );
}

