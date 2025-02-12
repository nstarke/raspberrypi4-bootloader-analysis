
int FUN_00004060(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 7) == '\0') {
    iVar1 = 0;
  }
  else {
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + -1;
    iVar1 = (int)*(char *)(param_1 + (uint)*(byte *)(param_1 + 6));
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) + 1;
  }
  return iVar1;
}

