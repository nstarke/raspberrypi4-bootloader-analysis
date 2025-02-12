
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000dc80(undefined *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_gp;
  
  if (0 < *param_2) {
    if (param_2[1] == 0) {
      _DAT_7d004004 = 0;
      param_2[1] = 1;
      param_4 = 0;
    }
    do {
      uVar3 = param_4;
      if ((_DAT_7d004000 & 0x20000) != 0) {
        *param_1 = (char)_DAT_7d004004;
        iVar2 = *param_2;
        *param_2 = iVar2 + -1;
        if (iVar2 + -1 == 0) {
          return 0;
        }
        _DAT_7d004004 = 0;
        return 0;
      }
      uVar4 = _DAT_7c003004 - *(int *)(unaff_gp + 0x110);
      param_4 = _DAT_7d004000;
    } while (uVar4 < 0x989681);
    _sprintf_to_stdout((byte *)s_SPI_ERROR___d_CS__08_0000dcf0,0x52,_DAT_7d004000,uVar3,
                       _DAT_7c003004,uVar4);
    pcVar1 = (code *)swi(0xe);
    (*pcVar1)();
  }
  return 0xffffffff;
}

