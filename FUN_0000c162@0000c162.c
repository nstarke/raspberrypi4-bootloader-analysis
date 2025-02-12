
void FUN_0000c162(uint *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int unaff_gp;
  
  puVar3 = *(uint **)(unaff_gp + 0x5f4 + param_2 * 4);
  puVar2 = (uint *)0x0;
  while (puVar1 = puVar3, puVar1 != (uint *)0x0) {
    if (param_3 == 0) {
      if (*puVar1 <= *param_1) break;
    }
    else if (*param_1 <= *puVar1) break;
    puVar2 = puVar1;
    puVar3 = (uint *)puVar1[2];
  }
  param_1[2] = (uint)puVar1;
  if (puVar2 == (uint *)0x0) {
    *(uint **)(unaff_gp + 0x5f4 + param_2 * 4) = param_1;
  }
  else {
    puVar2[2] = (uint)param_1;
  }
  return;
}

