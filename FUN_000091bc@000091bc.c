
void FUN_000091bc(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = 0x40;
  uVar1 = **(uint **)(param_2 + 8);
  uVar5 = (*(uint **)(param_2 + 8))[1];
  uVar2 = (uVar1 + 2 & 4) * 2;
  iVar4 = uVar2 + uVar1;
  uVar8 = CONCAT44(uVar5,iVar4);
  if (CARRY4(uVar2,uVar1)) {
    uVar8 = CONCAT44(uVar5 + 1,iVar4);
  }
  do {
    iVar3 = (int)((ulonglong)uVar8 >> 0x20);
    uVar7 = FUN_0000039c(uVar1,uVar5,(uint)uVar8,iVar3);
    iVar4 = -(int)((ulonglong)uVar7 >> 0x20);
    if (2 < (uint)uVar7) {
      iVar4 = iVar4 + -1;
    }
    uVar8 = FUN_0000039c(2 - (uint)uVar7,iVar4,(uint)uVar8,iVar3);
    uVar6 = uVar6 >> 1;
  } while (7 < uVar6);
  *param_1 = ~(uint)uVar8 + 1;
  uVar1 = ~(uint)((ulonglong)uVar8 >> 0x20);
  if (~(uint)uVar8 == 0xffffffff) {
    uVar1 = uVar1 + 1;
  }
  param_1[1] = uVar1;
  return;
}

