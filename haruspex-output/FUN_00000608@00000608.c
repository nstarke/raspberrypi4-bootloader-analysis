
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000608(uint param_1)

{
  _DAT_7d200020 =
       (uint)((param_1 & 0x20) != 0) << 10 |
       (uint)((param_1 & 0x10) != 0) << 8 |
       (uint)((param_1 & 8) != 0) << 6 |
       (uint)((param_1 & 4) != 0) << 4 |
       (uint)((param_1 & 2) != 0) << 2 |
       _DAT_7d200020 & 0xfffffaaa | 0x5a000000 | (uint)((param_1 & 1) != 0);
  return;
}

