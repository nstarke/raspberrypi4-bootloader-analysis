
undefined4 FUN_000041b4(int param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int unaff_gp;
  byte abStack_58 [64];
  
  uVar3 = (uint)*(byte *)(param_2 + 6) + (uint)*(byte *)(param_2 + 7) * 0x100;
  switch(*(undefined *)(param_2 + 3)) {
  case 1:
    pbVar2 = &DAT_0000f1b4;
    uVar1 = uVar3;
    if (0x11 < uVar3) {
      uVar1 = 0x12;
    }
    break;
  case 2:
    if (*(char *)(param_2 + 2) != '\0') {
      return 0xffffffff;
    }
    *(uint *)(param_1 + 0x24c) = (uint)DAT_0000f1d2;
    *(uint *)(param_1 + 0x250) = (uint)DAT_0000f1ca;
    uVar1 = (uint)DAT_0000f1a8;
    uVar5 = (uint)DAT_0000f1d8;
    FUN_00007dca((undefined4 *)abStack_58,(undefined4 *)&DAT_0000f1a8,uVar1);
    iVar4 = uVar1 + uVar5;
    uVar6 = (uint)DAT_0000f1d0;
    FUN_00007dca((undefined4 *)(abStack_58 + uVar1),(undefined4 *)&DAT_0000f1d8,uVar5);
    FUN_00007dca((undefined4 *)(abStack_58 + iVar4),(undefined4 *)&DAT_0000f1d0,uVar6);
    iVar4 = iVar4 + uVar6;
    uVar1 = (uint)DAT_0000f1c8;
    FUN_00007dca((undefined4 *)(abStack_58 + iVar4),(undefined4 *)&DAT_0000f1c8,uVar1);
    uVar1 = uVar1 + iVar4;
    pbVar2 = abStack_58;
    if (uVar3 < uVar1) {
      pbVar2 = abStack_58;
      uVar1 = uVar3;
    }
    break;
  case 3:
    uVar1 = (uint)*(byte *)(param_2 + 2);
    if (uVar1 < 5) {
      pbVar2 = *(byte **)(&DAT_00001040 + uVar1 * 4 + unaff_gp);
    }
    else {
      if (uVar1 != 0xee) {
        return 0xffffffff;
      }
      pbVar2 = *(byte **)(s__02x__02x__00001048 + unaff_gp);
    }
    uVar1 = (uint)*pbVar2;
    if (uVar3 <= *pbVar2) {
      uVar1 = uVar3;
    }
    break;
  default:
    pbVar2 = (byte *)(param_1 + 8);
    uVar1 = 0;
  }
  FUN_0000e598(param_1,0,(undefined4 *)pbVar2,uVar1);
  return 0;
}

