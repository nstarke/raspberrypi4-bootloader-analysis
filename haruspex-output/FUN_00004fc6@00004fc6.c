
bool FUN_00004fc6(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined uStack_15;
  undefined4 local_14;
  undefined4 local_10;
  
  puVar1 = (undefined4 *)FUN_00001552();
  local_14 = DAT_0000eec0;
  (*(code *)*puVar1)(DAT_0000eec0,(code *)*puVar1);
  (*(code *)puVar1[3])(&local_14,&local_10);
  (*(code *)puVar1[0xc])(local_10,0x38,(code *)puVar1[0xc]);
  iVar2 = (*(code *)puVar1[7])(local_10,&LAB_00001830,1,&uStack_15);
  (*(code *)puVar1[4])(local_10);
  return iVar2 == 0;
}

