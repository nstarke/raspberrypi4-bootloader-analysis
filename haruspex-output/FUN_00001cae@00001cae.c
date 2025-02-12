
/* WARNING: Removing unreachable block (ram,0x00001d10) */
/* WARNING: Removing unreachable block (ram,0x00001d28) */

void FUN_00001cae(int param_1,uint param_2,uint param_3,ulonglong *param_4,uint *param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (param_3 == 0 && param_2 == 54000000) {
    *(undefined4 *)param_4 = 54000000;
    *(undefined4 *)((int)param_4 + 4) = 0;
    *param_5 = 1;
  }
  else {
    puVar1 = (ulonglong *)(*(int *)(param_1 + 0xc) + 0xc);
    uVar4 = *(uint *)(*(int *)(param_1 + 0xc) + 0x10);
    uVar2 = *puVar1;
    uVar3 = uVar4 >> 3;
    uVar4 = *(uint *)puVar1 >> 3 | uVar4 << 0x1d;
    if ((param_3 <= uVar3) && ((param_3 != uVar3 || (param_2 <= uVar4)))) {
      param_2 = uVar4;
      param_3 = uVar3;
    }
    uVar5 = FUN_0000039c(param_2,param_3,2,0);
    uVar4 = 2;
    *param_5 = 2;
    if (uVar5 < uVar2) {
      do {
        uVar4 = uVar4 + 2;
        uVar5 = FUN_0000039c(uVar4,0,param_2,param_3);
      } while (uVar5 < uVar2);
      *param_5 = uVar4;
    }
    *param_4 = uVar5;
  }
  return;
}

