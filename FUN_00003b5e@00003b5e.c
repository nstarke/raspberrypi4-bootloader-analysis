
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003b5e(void)

{
  int unaff_gp;
  
  _DAT_7d20203c = 0x5a001000;
  do {
  } while ((_DAT_7c012088 & 2) != 0);
  do {
  } while ((_DAT_7c01208c & 2) != 0);
  _DAT_7d202038 = 0x5a000001;
  _DAT_7d200304 = 0x5a000040;
  _DAT_7c012088 = _DAT_7c012088 & 0xfffffffe;
  _DAT_7c01208c = _DAT_7c01208c & 0xfffffffe;
  FUN_000026b6();
  _DAT_7ee02004 = 0x7777;
  _DAT_7ee02084 = 0x7777;
  _DAT_7ee0210c = 0x7770777;
  _DAT_7c01201c = 6;
  _DAT_7d2021c8 = 0x5a000011;
  if (*(int *)(unaff_gp + 100) == 0) {
    _DAT_7c840008 = &DAT_00005555;
  }
  _DAT_7cfff5d0 = 3;
  _DAT_7d1005d0 = 3;
  _DAT_7c01200c = 1;
  return;
}

