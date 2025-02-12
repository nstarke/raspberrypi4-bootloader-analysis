
undefined4 FUN_0000c308(uint *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  uVar3 = *(uint *)(param_2 + 8);
  while( true ) {
    do {
      if (uVar3 <= uVar4) {
        return 5;
      }
      cVar2 = *(char *)(*(int *)(param_2 + 4) + uVar4);
      uVar4 = uVar4 + 1;
      *param_1 = uVar4;
      uVar1 = param_1[0x59];
    } while (((uVar1 == 0) && (cVar2 == ' ' || cVar2 == '\t')) ||
            (*(undefined *)((int)param_1 + 0x11) = 2, cVar2 == '\r'));
    if (cVar2 == '\n') break;
    *(char *)((int)param_1 + uVar1 + 0x5e) = cVar2;
    param_1[0x59] = uVar1 + 1;
    if (0xff < (int)(uVar1 + 1)) {
      return 1;
    }
  }
  return 1;
}

