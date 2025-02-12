
void FUN_0000dfdc(char *param_1,uint param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = 8;
  do {
    bVar2 = (byte)(param_2 >> 0x18);
    if (param_2 >> 0x1c < 10) {
      cVar1 = (bVar2 >> 4) + 0x30;
    }
    else {
      cVar1 = (bVar2 >> 4) + 0x57;
    }
    pcVar3 = param_1 + 1;
    *param_1 = cVar1;
    param_2 = param_2 << 4;
    param_1 = param_1 + 2;
    *pcVar3 = '\0';
    iVar4 = iVar4 + -1;
  } while (0 < iVar4);
  return;
}

