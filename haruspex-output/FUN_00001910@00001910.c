
void FUN_00001910(uint param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_a8 [6];
  uint auStack_90 [32];
  
  iVar4 = 0;
  puVar2 = local_a8;
  puVar3 = local_a8;
  do {
    *(uint *)((int)puVar2 + 0x18) = param_1 >> iVar4 & 1;
    puVar2 = (uint *)((int)puVar2 + 4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x20);
  iVar4 = 0;
  do {
    *puVar3 = param_2 >> iVar4 & 1;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  iVar4 = 0;
  do {
    iVar5 = 0;
    uVar6 = 1;
    uVar1 = 0;
    do {
      if ((uVar1 & uVar6) != 0) {
        if ((uVar6 & 1 << iVar4) != 0) {
          local_a8[iVar4] = auStack_90[iVar5] ^ local_a8[iVar4];
        }
        iVar5 = iVar5 + 1;
      }
      uVar1 = uVar1 + 1;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 0x27);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  iVar4 = 0;
  do {
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  return;
}

