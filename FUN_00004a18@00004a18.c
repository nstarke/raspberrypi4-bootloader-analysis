
void FUN_00004a18(uint param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_gp;
  uint local_34;
  int local_30;
  uint *local_2c;
  uint *local_28;
  
  if (param_2 < param_1) {
    FUN_00009cdc(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    do {
      uVar3 = param_3;
      if (0xff < param_3) {
        uVar2 = param_3 - 0x100;
        uVar3 = 0;
        if (uVar2 < 3) {
          if (((int)param_1 < 0) || (0x2f < (int)param_1)) {
            if ((999 < (int)param_1) && ((int)param_1 < 0x3f8)) {
              uVar3 = (uint)*(byte *)(param_1 * 3 + *(int *)(unaff_gp + 0x128) + uVar2 + -3000);
            }
          }
          else {
            uVar3 = (uint)*(byte *)(*(int *)(unaff_gp + 300) + param_1 * 3 + uVar2);
          }
        }
      }
      iVar1 = FUN_000047fc(param_1,&local_34,(int *)&local_28,&local_30,(undefined4 *)0x0,&local_2c)
      ;
      if (iVar1 != 0) {
        return;
      }
      if (param_3 == 0 || param_3 == 0x10) {
        uVar3 = 0;
        if (param_3 == 0) {
          uVar2 = *local_2c | 1 << (local_34 & 0x1f);
        }
        else {
          uVar2 = *local_2c & ~(1 << (local_34 & 0x1f));
        }
        *local_2c = uVar2;
      }
      *local_28 = uVar3 << local_30 | *local_28 & ~(0xf << local_30);
      param_1 = param_1 + 1;
    } while (param_1 <= param_2);
  }
  return;
}

