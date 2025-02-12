
void FUN_0000b844(uint param_1,undefined *param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  
  iVar1 = 0;
  for (fVar2 = 1.0; fVar2 <= (float)(int)param_1; fVar2 = fVar2 * 25.0) {
  }
  uVar3 = (uint)FLOOR(fVar2 / 25.0);
  if (uVar3 == 0) {
    *param_2 = 0x30;
    iVar1 = 1;
  }
  for (; uVar3 != 0; uVar3 = uVar3 / 10) {
    param_2[iVar1] = (char)(param_1 / uVar3) + '0';
    iVar1 = iVar1 + 1;
    param_1 = param_1 - (param_1 / uVar3) * uVar3;
  }
  param_2[iVar1] = 0;
  return;
}

