
void FUN_00002378(char *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  uint extraout_r3;
  int extraout_r5;
  
  bVar1 = FUN_00001ebe(param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    **(uint **)(extraout_r5 + 0x28) = extraout_r3 & 0xfffff | 0x5a000000;
  }
  else {
    **(uint **)(extraout_r5 + 0x28) =
         (extraout_r3 & 0x3ff) << 10 | 0x5a000000 | (extraout_r3 & 0xfffff) >> 10;
  }
  return;
}

