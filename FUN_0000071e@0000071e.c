
uint FUN_0000071e(byte *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 uVar8;
  
  uVar4 = 0;
  uVar8 = 0;
  pbVar7 = param_1;
  switch(param_2) {
  case 2:
    iVar5 = 1;
    break;
  default:
    iVar5 = 0;
    uVar6 = 0xffffffff / param_2;
    goto LAB_00000766;
  case 4:
    iVar5 = 2;
    break;
  case 8:
    iVar5 = 3;
    break;
  case 0x10:
    iVar5 = 4;
  }
  uVar6 = 0xffffffff >> iVar5;
LAB_00000766:
  do {
    uVar2 = (uint)*pbVar7;
    bVar1 = (&DAT_0000eee1)[uVar2];
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 3) == 0) {
LAB_000007b0:
        if (param_1 == pbVar7) {
          uVar8 = 0xffffffff;
        }
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = pbVar7;
        }
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = uVar8;
        }
        return uVar4;
      }
      if ((bVar1 & 2) != 0) {
        uVar2 = uVar2 - 0x20;
      }
      iVar3 = uVar2 - 0x37;
    }
    else {
      iVar3 = uVar2 - 0x30;
    }
    if ((int)param_2 <= iVar3) goto LAB_000007b0;
    if (uVar6 < uVar4) {
      uVar8 = 0x22;
    }
    if (iVar5 == 0) {
      uVar4 = uVar4 * param_2;
      if (-iVar3 - 1U < uVar4) {
        uVar8 = 0x22;
      }
    }
    else {
      uVar4 = uVar4 << iVar5;
    }
    uVar4 = uVar4 + iVar3;
    pbVar7 = pbVar7 + 1;
  } while( true );
}

