
void FUN_00004ad4(uint param_1,int param_2)

{
  int iVar1;
  uint local_10;
  uint *local_c;
  
  iVar1 = FUN_000047fc(param_1,&local_10,(int *)0x0,(int *)0x0,&local_c,(undefined4 *)0x0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      *local_c = *local_c & ~(1 << (local_10 & 0x1f));
    }
    else {
      *local_c = *local_c | 1 << (local_10 & 0x1f);
    }
  }
  return;
}

