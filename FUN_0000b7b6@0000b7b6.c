
int FUN_0000b7b6(byte *param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  
  iVar2 = 0;
  uVar3 = (uint)(param_3 == 0x10);
  bVar1 = false;
  if (param_1 == (byte *)0x0) goto LAB_0000b81c;
  for (; (bVar4 = *param_1, bVar4 == 9 || (bVar4 == 0x20)); param_1 = param_1 + 1) {
  }
  if (bVar4 == 0) goto LAB_0000b81c;
  if (bVar4 == 0x2b) {
LAB_0000b7e8:
    param_1 = param_1 + 1;
    bVar4 = *param_1;
  }
  else if (bVar4 == 0x2d) {
    bVar1 = true;
    goto LAB_0000b7e8;
  }
  if (bVar4 == 0x30) {
    uVar5 = (uint)param_1[1];
    if ((0x40 < uVar5) && (uVar5 < 0x5b)) {
      uVar5 = uVar5 + 0x20;
    }
    if ((uVar5 == 0x78) && (param_3 == 0 || param_3 == 0x10)) {
      uVar3 = 1;
      param_1 = param_1 + 2;
    }
  }
  iVar2 = FUN_0000aae4(param_1,param_2,uVar3);
LAB_0000b81c:
  if (bVar1) {
    iVar2 = -iVar2;
  }
  return iVar2;
}

