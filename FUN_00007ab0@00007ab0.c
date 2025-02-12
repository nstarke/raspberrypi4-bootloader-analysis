
int FUN_00007ab0(uint *param_1,undefined *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = *param_1 & 0x3f;
  uVar4 = uVar3 + 1;
  *(undefined *)((int)param_1 + uVar3 + 0x28) = 0x80;
  puVar1 = (uint *)((int)param_1 + uVar3 + 0x29);
  if (uVar4 < 0x39) {
    uVar4 = 0x38 - uVar4;
  }
  else {
    FUN_00007e18(puVar1,0,0x40 - uVar4);
    iVar2 = FUN_00005c58((int)param_1,(byte *)(param_1 + 10));
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar1 = param_1 + 10;
    uVar4 = 0x38;
  }
  FUN_00007e18(puVar1,0,uVar4);
  iVar2 = *param_1 << 3;
  iVar5 = param_1[1] << 3;
  *(char *)(param_1 + 0x18) = (char)((uint)iVar5 >> 0x18);
  *(char *)((int)param_1 + 0x61) = (char)((uint)iVar5 >> 0x10);
  *(char *)((int)param_1 + 0x62) = (char)((uint)iVar5 >> 8);
  *(byte *)((int)param_1 + 99) = (byte)iVar5 | (byte)(*param_1 >> 0x1d);
  *(char *)(param_1 + 0x19) = (char)((uint)iVar2 >> 0x18);
  *(char *)((int)param_1 + 0x65) = (char)((uint)iVar2 >> 0x10);
  *(char *)((int)param_1 + 0x66) = (char)((uint)iVar2 >> 8);
  *(char *)((int)param_1 + 0x67) = (char)iVar2;
  iVar2 = FUN_00005c58((int)param_1,(byte *)(param_1 + 10));
  if (iVar2 == 0) {
    uVar3 = param_1[2];
    *param_2 = (char)(uVar3 >> 0x18);
    param_2[1] = (char)(uVar3 >> 0x10);
    param_2[2] = (char)(uVar3 >> 8);
    param_2[3] = (char)uVar3;
    uVar3 = param_1[3];
    param_2[4] = (char)(uVar3 >> 0x18);
    param_2[5] = (char)(uVar3 >> 0x10);
    param_2[6] = (char)(uVar3 >> 8);
    param_2[7] = (char)uVar3;
    uVar3 = param_1[4];
    param_2[8] = (char)(uVar3 >> 0x18);
    param_2[9] = (char)(uVar3 >> 0x10);
    param_2[10] = (char)(uVar3 >> 8);
    param_2[0xb] = (char)uVar3;
    uVar3 = param_1[5];
    param_2[0xc] = (char)(uVar3 >> 0x18);
    param_2[0xd] = (char)(uVar3 >> 0x10);
    param_2[0xe] = (char)(uVar3 >> 8);
    param_2[0xf] = (char)uVar3;
    uVar3 = param_1[6];
    param_2[0x10] = (char)(uVar3 >> 0x18);
    param_2[0x11] = (char)(uVar3 >> 0x10);
    param_2[0x12] = (char)(uVar3 >> 8);
    param_2[0x13] = (char)uVar3;
    uVar3 = param_1[7];
    param_2[0x14] = (char)(uVar3 >> 0x18);
    param_2[0x15] = (char)(uVar3 >> 0x10);
    param_2[0x16] = (char)(uVar3 >> 8);
    param_2[0x17] = (char)uVar3;
    uVar3 = param_1[8];
    param_2[0x18] = (char)(uVar3 >> 0x18);
    param_2[0x19] = (char)(uVar3 >> 0x10);
    param_2[0x1a] = (char)(uVar3 >> 8);
    param_2[0x1b] = (char)uVar3;
    if (param_1[0x1a] == 0) {
      uVar3 = param_1[9];
      param_2[0x1c] = (char)(uVar3 >> 0x18);
      param_2[0x1d] = (char)(uVar3 >> 0x10);
      param_2[0x1e] = (char)(uVar3 >> 8);
      param_2[0x1f] = (char)uVar3;
    }
    iVar2 = 0;
  }
  return iVar2;
}

