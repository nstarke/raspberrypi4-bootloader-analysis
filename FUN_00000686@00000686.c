
void FUN_00000686(void)

{
  int unaff_gp;
  
  if (*(code **)(unaff_gp + 0x20) != (code *)0x0) {
    (**(code **)(unaff_gp + 0x20))();
  }
  *(undefined4 *)(unaff_gp + 0x20) = 0;
  if (*(code **)(unaff_gp + 0x24) != (code *)0x0) {
    (**(code **)(unaff_gp + 0x24))();
  }
  return;
}

