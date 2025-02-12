
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000af30(undefined *param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_7c003004 + -1;
  while( true ) {
    iVar1 = (*(code *)param_1)(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    if (param_3 <= (uint)(_DAT_7c003004 - iVar2)) break;
    if (param_4 != 0) {
      FUN_0000bf1c(param_4);
    }
  }
  return 0xffffffff;
}

