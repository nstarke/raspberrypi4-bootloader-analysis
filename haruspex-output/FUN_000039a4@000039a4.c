
int FUN_000039a4(int param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint local_38 [4];
  int local_28;
  
  iVar3 = 0;
  if (*(short *)(param_1 + 0x30) != 0) {
    do {
      FUN_00007dca(local_38,(undefined4 *)
                            ((uint)*(ushort *)(param_1 + 0x2e) * iVar3 +
                            *(int *)(param_1 + 0x20) + param_1),0x28);
      puVar1 = (uint *)FUN_00003a60(param_1,local_38[0]);
      iVar2 = FUN_0000de22(puVar1,param_2);
      if (iVar2 == 0) {
        return local_28 + param_1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 0x30));
  }
  return 0;
}

