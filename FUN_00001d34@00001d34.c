
/* WARNING: Removing unreachable block (ram,0x00001d5a) */
/* WARNING: Removing unreachable block (ram,0x00001d72) */

void FUN_00001d34(int param_1,uint param_2,int param_3,ulonglong *param_4,uint *param_5)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = *(int *)(param_1 + 0xc);
  uVar2 = 2;
  *param_5 = 2;
  uVar1 = *(ulonglong *)(iVar3 + 0xc);
  uVar4 = FUN_0000039c(param_2,param_3,2,0);
  if (uVar4 < uVar1) {
    do {
      uVar2 = uVar2 + 1;
      uVar4 = FUN_0000039c(uVar2,0,param_2,param_3);
    } while (uVar4 < uVar1);
    *param_5 = uVar2;
  }
  *param_4 = uVar4;
  return;
}

