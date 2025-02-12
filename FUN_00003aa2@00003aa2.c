
undefined4 FUN_00003aa2(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((((((param_1 & 3) == 0) && (*(char *)(param_1 + 4) == '\x01')) &&
       (*(char *)(param_1 + 5) == '\x01')) &&
      ((*(short *)(param_1 + 0x12) == 0x89 && (*(short *)(param_1 + 0x10) == 2)))) &&
     ((*(ushort *)(param_1 + 0x2c) != 0 &&
      (((uint)*(ushort *)(param_1 + 0x2a) * (uint)*(ushort *)(param_1 + 0x2c) +
        *(int *)(param_1 + 0x1c) + param_1 <= param_2 + param_1 &&
       ((uint)*(ushort *)(param_1 + 0x2e) * (uint)*(ushort *)(param_1 + 0x30) +
        *(int *)(param_1 + 0x20) + param_1 <= param_2 + param_1)))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

