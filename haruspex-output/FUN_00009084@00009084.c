
int FUN_00009084(int param_1)

{
  undefined4 *puVar1;
  int unaff_gp;
  
  puVar1 = (undefined4 *)FUN_00008fe4(param_1);
  if (param_1 == 0) {
    *(undefined4 *)(unaff_gp + 0xe0) = *puVar1;
  }
  else {
    *(undefined4 *)(unaff_gp + 0xe0) = puVar1[1];
  }
  *(undefined4 *)(unaff_gp + 0xe4) = 0;
  return unaff_gp + 0xe0;
}

