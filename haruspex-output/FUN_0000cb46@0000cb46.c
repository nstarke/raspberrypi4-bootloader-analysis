
void FUN_0000cb46(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if ((0x3f < *(uint *)(param_1 + 0xc)) && (uVar1 = FUN_0000c854(5,0,0), uVar1 == 0xff)) {
    iVar3 = 0;
    do {
      iVar2 = 0;
      do {
        FUN_0000c8fc(3,iVar3,iVar2,0x2f);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  return;
}

