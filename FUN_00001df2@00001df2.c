
void FUN_00001df2(void)

{
  int unaff_gp;
  
  if (*(int *)(unaff_gp + 100) != 0) {
    *(int *)(unaff_gp + 0x68) = unaff_gp + 0xb18;
    *(int *)(unaff_gp + 0xfc) = unaff_gp + 0x1500;
    *(undefined4 *)(unaff_gp + 0x6c) = 0x19;
    return;
  }
  *(int *)(unaff_gp + 0x68) = unaff_gp + 0x604;
  *(int *)(unaff_gp + 0xfc) = (int)(&LAB_000014d8 + unaff_gp);
  *(undefined4 *)(unaff_gp + 0x6c) = 0x19;
  return;
}

