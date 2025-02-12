
void FUN_00007e6a(void)

{
  int unaff_gp;
  
  if (*(int *)(unaff_gp + 0x108) == 0) {
    FUN_00007eaa();
  }
  if (*(int *)(unaff_gp + 0xf0) != 0) {
    *(undefined4 *)(unaff_gp + 0xf0) = 0;
  }
  FUN_00007e92();
  *(undefined4 *)(unaff_gp + 0x108) = 1;
  return;
}

