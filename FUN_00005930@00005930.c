
void FUN_00005930(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0x80000000;
  uVar4 = 0;
  uVar1 = 0;
  if ((param_2 & 0x80000000) == 0) {
    do {
      uVar2 = uVar3 << 0x1f;
      uVar1 = uVar1 + 1;
      uVar3 = uVar3 >> 1;
      uVar4 = uVar4 >> 1 | uVar2;
      if (0x3f < uVar1) {
        return;
      }
    } while ((uVar3 & param_2) == 0 && (uVar4 & param_1) == 0);
  }
  return;
}

