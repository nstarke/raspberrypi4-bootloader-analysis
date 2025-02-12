
undefined * FUN_00003a60(int param_1,uint param_2)

{
  undefined *puVar1;
  undefined4 auStack_34 [4];
  int local_24;
  uint local_20;
  
  FUN_00007dca(auStack_34,
               (undefined4 *)
               (*(int *)(param_1 + 0x20) +
                (uint)*(ushort *)(param_1 + 0x2e) * (uint)*(ushort *)(param_1 + 0x32) + param_1),
               0x28);
  if ((local_20 < param_2) || (local_24 + param_1 == 0)) {
    puVar1 = &DAT_00003aa0;
  }
  else {
    puVar1 = (undefined *)(local_24 + param_1 + param_2);
  }
  return puVar1;
}

