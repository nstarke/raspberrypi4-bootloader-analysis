
undefined4 FUN_0000ceac(uint *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if (uVar2 < *(uint *)(param_2 + 8)) {
    do {
      cVar1 = *(char *)(*(int *)(param_2 + 4) + uVar2);
      if (cVar1 == '\0') {
        *param_1 = uVar2;
        return 7;
      }
      if (cVar1 == '=') {
        *param_1 = uVar2;
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_2 + 8));
    *param_1 = uVar2;
  }
  return 3;
}

