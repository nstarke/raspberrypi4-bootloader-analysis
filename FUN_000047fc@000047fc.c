
undefined4
FUN_000047fc(uint param_1,uint *param_2,int *param_3,int *param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int unaff_gp;
  
  if (((int)param_1 < 0x44c) || (0x451 < (int)param_1)) {
    if (((int)param_1 < 1000) || (0x3f7 < (int)param_1)) {
      if ((-1 < (int)param_1) && ((int)param_1 < 0x30)) {
        *param_2 = param_1;
        if (param_5 != (undefined4 *)0x0) {
          if ((int)param_1 < 0x20) {
            uVar1 = 0x7d508504;
          }
          else {
            uVar1 = 0x7d508524;
          }
          *param_5 = uVar1;
        }
        if (param_6 != (undefined4 *)0x0) {
          if ((int)param_1 < 0x20) {
            uVar1 = 0x7d508508;
          }
          else {
            uVar1 = 0x7d508528;
          }
          *param_6 = uVar1;
        }
        if ((*(int *)(unaff_gp + 100) == 0) ||
           (param_1 = (uint)(char)(&DAT_0000f0fc)[param_1], -1 < (int)param_1)) {
          if (param_3 != (int *)0x0) {
            *param_3 = ((int)param_1 >> 3) * 4 + 0x7d504100;
          }
          goto LAB_00004926;
        }
      }
    }
    else {
      *param_2 = param_1 - 1000;
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 0x7d517c04;
      }
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = 0x7d517c08;
      }
      uVar2 = param_1 - 1000;
      if ((*(int *)(unaff_gp + 100) == 0) ||
         (uVar2 = (int)(char)(&DAT_0000ed04)[param_1], -1 < (char)(&DAT_0000ed04)[param_1])) {
        param_1 = uVar2;
        if (param_3 != (int *)0x0) {
          *param_3 = ((int)param_1 >> 3) * 4 + 0x7d51070c;
        }
LAB_00004926:
        if (param_4 == (int *)0x0) {
          return 0;
        }
        uVar2 = param_1 & 7;
        goto LAB_00004864;
      }
    }
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = param_1 - 0x44c;
    *param_2 = uVar2;
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0x7d517c24;
    }
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = 0x7d517c28;
    }
    if (param_3 != (int *)0x0) {
      if ((int)uVar2 < 4) {
        *param_3 = 0x7d510700;
      }
      else if (uVar2 == 4) {
        *param_3 = 0x7d510704;
      }
      else if (uVar2 == 5) {
        *param_3 = 0x7d510708;
      }
    }
    if (param_4 == (int *)0x0) {
      return 0;
    }
    if ((int)uVar2 < 4) {
LAB_00004864:
      iVar3 = uVar2 << 2;
    }
    else {
      iVar3 = 0;
    }
    uVar1 = 0;
    *param_4 = iVar3;
  }
  return uVar1;
}

