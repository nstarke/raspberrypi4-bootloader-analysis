
void FUN_00001d7e(int param_1,uint param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = *(uint *)(param_1 + 0x54);
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  uVar4 = FUN_00000224(54000000,0,uVar3,0);
  fVar1 = (float)FUN_0000011a((uint)uVar4,(uint)(uVar4 >> 0x20));
  fVar2 = (float)FUN_0000011a(param_2,param_3);
  FUN_0000b824(fVar2 / fVar1,0x14);
  return;
}

