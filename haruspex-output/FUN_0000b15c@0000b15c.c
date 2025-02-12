
int FUN_0000b15c(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int unaff_gp;
  
  piVar3 = (int *)(unaff_gp + 0xbc);
  iVar2 = *piVar3;
  if (iVar2 == 0) {
    puVar1 = (undefined4 *)FUN_00004614();
    *piVar3 = (int)puVar1;
    (*(code *)*puVar1)();
    (**(code **)(*piVar3 + 0xc))(0,unaff_gp + 0xc4);
    iVar2 = *piVar3;
  }
  *param_1 = *(undefined4 *)(unaff_gp + 0xc4);
  return iVar2;
}

