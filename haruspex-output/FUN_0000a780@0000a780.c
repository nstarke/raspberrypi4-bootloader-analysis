
void FUN_0000a780(void)

{
  int unaff_gp;
  
  if (*(int *)(unaff_gp + 0x3d8) == 7) {
    *(undefined4 *)(unaff_gp + 0x2cfc) = 1;
  }
  if (*(int *)(unaff_gp + 0xcc) == 0) {
    if (*(int *)(unaff_gp + 0x2cfc) != 0) {
      FUN_0000e09e(*(int *)(unaff_gp + 0x124),&DAT_0001c200);
    }
    *(undefined4 *)(unaff_gp + 0xcc) = 1;
  }
  return;
}

