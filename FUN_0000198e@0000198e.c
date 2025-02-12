
uint FUN_0000198e(uint param_1)

{
  return (int)(param_1 & 0x400) >> 5 |
         (int)(param_1 & 0x100) >> 4 |
         (int)(param_1 & 0x40) >> 3 |
         (int)(param_1 & 0x10) >> 2 | (int)(param_1 & 4) >> 1 | param_1 & 1;
}

