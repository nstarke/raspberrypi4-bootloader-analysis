
undefined4 FUN_0000c2ae(uint *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  uVar3 = *(uint *)(param_2 + 8);
  do {
    do {
      if (uVar3 <= uVar4) {
        return 6;
      }
      cVar2 = *(char *)(*(int *)(param_2 + 4) + uVar4);
      uVar4 = uVar4 + 1;
      *param_1 = uVar4;
      *(undefined *)((int)param_1 + 0x11) = 4;
      if (cVar2 == '\0') {
        return 7;
      }
      uVar1 = param_1[0x5a];
    } while ((uVar1 == 0) && (cVar2 == ' ' || cVar2 == '\t'));
    if (cVar2 == ']' || cVar2 == '\n') {
      return 1;
    }
    *(char *)((int)param_1 + uVar1 + 0x1c) = cVar2;
    param_1[0x5a] = uVar1 + 1;
  } while (uVar1 + 1 < 0x21);
  return 1;
}

