
void switchD_0000bb70::caseD_48(void)

{
  int unaff_r7;
  code *unaff_r10;
  undefined4 *unaff_r11;
  byte *pbVar1;
  
  pbVar1 = (byte *)*unaff_r11;
  if (unaff_r7 < 1) {
    FUN_0000bae2();
    return;
  }
  do {
    FUN_000098ec((int)(uint)*pbVar1 >> 4);
    (*unaff_r10)();
    FUN_000098ec(*pbVar1 & 0xf);
    (*unaff_r10)();
    unaff_r7 = unaff_r7 + -1;
    pbVar1 = pbVar1 + 1;
  } while (0 < unaff_r7);
  FUN_0000bae2();
  return;
}

