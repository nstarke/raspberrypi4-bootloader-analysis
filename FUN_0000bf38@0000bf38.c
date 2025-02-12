
void FUN_0000bf38(int param_1,int param_2)

{
  char *pcVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint *puVar3;
  int extraout_r4;
  byte *extraout_r5;
  int unaff_gp;
  
  pcVar1 = *(char **)(*(int *)(unaff_gp + 0xfc) + param_1 * 4);
  if (*(int *)(pcVar1 + 0x30) != 0) {
    bVar2 = FUN_00001ebe(pcVar1);
    if ((CONCAT31(extraout_var,bVar2) == 0 || extraout_r4 == 0) || (param_2 != 0)) {
      puVar3 = *(uint **)(extraout_r5 + 0x30);
      *puVar3 = *(uint *)(extraout_r5 + 0x48) | *puVar3 | 0x5a000000;
      if (*(int *)(extraout_r5 + 0x4c) != 0 && extraout_r4 != 0) {
        do {
        } while ((*(uint *)(extraout_r5 + 0x4c) & *puVar3) == 0);
      }
    }
    else {
      FUN_000009b8(extraout_r5,0);
    }
  }
  return;
}

