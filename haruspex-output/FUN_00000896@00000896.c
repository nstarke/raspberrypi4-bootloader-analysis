
void FUN_00000896(void)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  int unaff_gp;
  undefined auStack_18 [4];
  
  if (unaff_gp != 0x1624) {
    if (((*(char *)(unaff_gp + -0x1640) == 'I') && (*(char *)(unaff_gp + -0x163f) == 'N')) &&
       (*(char *)(unaff_gp + -0x163e) == 'I')) {
      iVar1 = 2;
      if (*(byte *)(unaff_gp + -0x163d) < 4) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 1;
    }
    if (iVar1 == 0) {
      if (*(byte *)(unaff_gp + -0x163d) < 3) {
        pcVar3 = (code *)&LAB_0000094e;
        piVar4 = (int *)(unaff_gp + -0x163c);
      }
      else {
        pcVar3 = *(code **)(unaff_gp + -0x163c);
        piVar4 = (int *)(unaff_gp + -0x1638);
      }
      while ((piVar2 = piVar4, iVar1 = piVar2[1], iVar1 != 0 || (*piVar2 != 0))) {
        piVar4 = piVar2 + 2;
        if (iVar1 != 0) {
          if (iVar1 < 1) {
            FUN_00007e18((undefined4 *)*piVar2,0,-iVar1);
          }
          else {
            (*pcVar3)(piVar4,iVar1,(undefined4 *)*piVar2,auStack_18);
            piVar4 = (int *)((int)piVar2 + (iVar1 + 3U & 0xfffffffc) + 8);
          }
        }
      }
    }
  }
  FUN_0000094c();
  return;
}

