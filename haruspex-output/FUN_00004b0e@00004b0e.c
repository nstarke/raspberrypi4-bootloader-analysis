
void FUN_00004b0e(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int unaff_gp;
  
  iVar2 = *(int *)(unaff_gp + 100);
  if (iVar2 == 0) {
    puVar4 = (uint *)&DAT_7d510718;
    puVar5 = (uint *)&DAT_7d50411c;
  }
  else {
    puVar4 = (uint *)&DAT_7d510714;
    puVar5 = (uint *)&DAT_7d504110;
  }
  if (param_2 < param_1) {
    return;
  }
  do {
    if (iVar2 == 0) {
      if (0x3ec < param_1) {
        iVar2 = param_1 * 2 + -0x7da;
        uVar3 = puVar4[1] & ~(3 << iVar2);
        uVar1 = param_3 << iVar2;
        goto LAB_00004b5c;
      }
      if (999 < param_1) {
        iVar2 = (param_1 - 0x3de) * 2;
        uVar1 = *puVar4 & ~(3 << iVar2);
        goto LAB_00004b80;
      }
      if (param_1 < 0x35) {
        if (param_1 < 0x26) {
          if (param_1 < 0x17) {
            if (7 < param_1) {
              iVar2 = param_1 * 2 + -0x10;
              uVar1 = puVar5[1] & ~(3 << iVar2) | param_3 << iVar2;
              goto LAB_00004bc4;
            }
            iVar2 = param_1 * 2 + 0xe;
            *puVar5 = *puVar5 & ~(3 << iVar2) | param_3 << iVar2;
          }
          else {
            iVar2 = param_1 * 2 + -0x2e;
            puVar5[2] = puVar5[2] & ~(3 << iVar2) | param_3 << iVar2;
          }
        }
        else {
          iVar2 = param_1 * 2 + -0x4c;
          puVar5[3] = puVar5[3] & ~(3 << iVar2) | param_3 << iVar2;
        }
      }
      else {
        iVar2 = param_1 * 2 + -0x6a;
        puVar5[4] = puVar5[4] & ~(3 << iVar2) | param_3 << iVar2;
      }
    }
    else if (param_1 < 0x3ee) {
      if (param_1 < 1000) {
        if (param_1 < 0x21) {
          if (param_1 < 0x12) {
            if ((param_1 != 0) && (param_1 < 6)) {
              iVar2 = param_1 * 2 + 10;
              *puVar5 = *puVar5 & ~(3 << iVar2) | param_3 << iVar2;
            }
          }
          else {
            iVar2 = param_1 * 2 + -0x24;
            uVar1 = puVar5[1] & ~(3 << iVar2) | param_3 << iVar2;
LAB_00004bc4:
            puVar5[1] = uVar1;
          }
        }
        else {
          iVar2 = param_1 * 2 + -0x42;
          puVar5[2] = puVar5[2] & ~(3 << iVar2) | param_3 << iVar2;
        }
      }
      else {
        iVar2 = param_1 * 2 + -0x7be;
        uVar1 = *puVar4 & ~(3 << iVar2);
LAB_00004b80:
        *puVar4 = uVar1 | param_3 << iVar2;
      }
    }
    else {
      iVar2 = param_1 * 2 + -0x7dc;
      uVar3 = param_3 << iVar2;
      uVar1 = puVar4[1] & ~(3 << iVar2);
LAB_00004b5c:
      puVar4[1] = uVar3 | uVar1;
    }
    param_1 = param_1 + 1;
    if (param_2 < param_1) {
      return;
    }
    iVar2 = *(int *)(unaff_gp + 100);
  } while( true );
}

