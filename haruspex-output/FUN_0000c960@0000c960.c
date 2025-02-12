
int FUN_0000c960(undefined4 *param_1,uint *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined auStack_54 [16];
  uint local_44;
  uint local_3c;
  int local_34;
  
  iVar1 = FUN_0000b2a4();
  if (iVar1 == 0) {
    FUN_00009e56();
  }
  iVar4 = 0;
  iVar1 = 0;
  do {
    iVar5 = 0;
    puVar3 = auStack_54 + iVar1;
    do {
      uVar2 = FUN_0000c854(5,iVar5,iVar4);
      *(uint *)(puVar3 + 0x20) = uVar2;
      FUN_0000c854(6,iVar5,iVar4);
      uVar2 = FUN_0000c854(8,iVar5,iVar4);
      *(uint *)(puVar3 + 0x10) = uVar2;
      puVar3 = puVar3 + 8;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    iVar1 = iVar1 + 4;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  if (local_34 == 6) {
    *param_1 = s_Hynix_0000ca48;
  }
  else if (local_34 < 7) {
    if (local_34 == 1) {
      *param_1 = s_Samsung_0000ca58;
    }
    else {
LAB_0000c9dc:
      *param_1 = s_Unknown_0000ca60;
    }
  }
  else {
    if (local_34 != 0xff) goto LAB_0000c9dc;
    *param_1 = s_Micron_0000ca50;
  }
  switch((int)(local_44 & 0x3f) >> 2) {
  case 0:
    iVar1 = 4;
    break;
  case 1:
    iVar1 = 6;
    goto LAB_0000ca00;
  default:
    *param_4 = 8;
    goto LAB_0000ca1c;
  case 3:
    iVar1 = 0xc;
    goto LAB_0000ca06;
  case 4:
    iVar1 = 0x10;
LAB_0000ca00:
    *param_4 = iVar1;
    goto LAB_0000ca1c;
  case 5:
    iVar1 = 0x18;
LAB_0000ca06:
    *param_4 = iVar1;
    goto LAB_0000ca1c;
  case 6:
    iVar1 = 0x20;
  }
  *param_4 = iVar1;
LAB_0000ca1c:
  iVar1 = 2;
  if (local_44 != local_3c) {
    iVar1 = 1;
  }
  *param_2 = (uint)(iVar1 == 2);
  if ((int)local_44 >> 6 == 1) {
    iVar1 = iVar1 << 1;
    *param_3 = 1;
  }
  else {
    *param_3 = 0;
  }
  return *param_4 * iVar1;
}

