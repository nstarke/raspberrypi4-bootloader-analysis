
undefined4 FUN_00009170(int param_1,uint param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + (param_2 >> 5) * 4) =
         *(uint *)(param_1 + (param_2 >> 5) * 4) | 1 << (param_2 & 0x1f);
  }
  return 0;
}

