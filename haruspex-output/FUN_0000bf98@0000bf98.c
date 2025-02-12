
void FUN_0000bf98(int param_1)

{
  byte *pbVar1;
  bool bVar2;
  undefined3 extraout_var;
  int extraout_r4;
  int unaff_gp;
  
  pbVar1 = *(byte **)(*(int *)(unaff_gp + 0xfc) + param_1 * 4);
  if (*(int *)(pbVar1 + 0x30) != 0) {
    bVar2 = FUN_00001ebe((char *)pbVar1);
    if (CONCAT31(extraout_var,bVar2) != 0 && extraout_r4 != 0) {
      FUN_000009b8(pbVar1,1);
      FUN_000009b8(pbVar1,0);
    }
    **(uint **)(pbVar1 + 0x30) = **(uint **)(pbVar1 + 0x30) & ~*(uint *)(pbVar1 + 0x48) | 0x5a000000
    ;
  }
  return;
}

