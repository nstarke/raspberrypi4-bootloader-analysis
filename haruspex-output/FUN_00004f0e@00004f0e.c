
int FUN_00004f0e(int param_1,ushort *param_2)

{
  int iVar1;
  undefined uVar2;
  uint local_110;
  undefined4 auStack_10c [64];
  
  if ((*param_2 & 0x80) == 0) {
    if (*(char *)(param_1 + 0x249) == '\x05') {
      *(undefined4 *)(param_1 + 0x37c) = *(undefined4 *)(param_2 + 1);
      FUN_0000e008(param_1);
      *(undefined *)(param_1 + 0x249) = 8;
      return 0;
    }
    if (*(char *)(param_1 + 0x249) != '\x06') {
      return -1;
    }
    FUN_0000e008(param_1);
    uVar2 = 7;
LAB_00004f9c:
    *(undefined *)(param_1 + 0x249) = uVar2;
  }
  else {
    if (param_2[3] != 0x104) {
      return 0;
    }
    if (*(char *)(param_1 + 0x249) != '\x04') {
      return -1;
    }
    local_110 = (uint)*(byte *)(param_1 + 0x380);
    FUN_0000df1c(auStack_10c,(char *)(param_1 + 0x27c));
    iVar1 = FUN_000036e8(param_1,0,&local_110,(uint)param_2[3]);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = FUN_0000c77a(param_1);
    if (iVar1 < 0) {
      return -1;
    }
    switch(*(undefined *)(param_1 + 0x380)) {
    case 0:
      *(undefined *)(param_1 + 0x249) = 5;
      break;
    case 1:
      uVar2 = 6;
      goto LAB_00004f9c;
    case 2:
      *(undefined *)(param_1 + 0x249) = 8;
      return 0x11;
    }
  }
  return 0;
}

