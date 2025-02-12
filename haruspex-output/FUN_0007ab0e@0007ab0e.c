
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Instruction at (ram,0x0007a89a) overlaps instruction at (ram,0x0007a898)
    */
/* WARNING: Removing unreachable block (ram,0x0007a60e) */
/* WARNING: Removing unreachable block (ram,0x0007ab1c) */
/* WARNING: Removing unreachable block (ram,0x0007ab20) */
/* WARNING: Removing unreachable block (ram,0x0007a806) */
/* WARNING: Removing unreachable block (ram,0x0007a7f0) */
/* WARNING: Removing unreachable block (ram,0x0007a7ec) */
/* WARNING: Removing unreachable block (ram,0x0007a7f6) */
/* WARNING: Removing unreachable block (ram,0x0007a7fa) */
/* WARNING: Removing unreachable block (ram,0x0007a808) */
/* WARNING: Removing unreachable block (ram,0x0007a80e) */
/* WARNING: Removing unreachable block (ram,0x0007a818) */
/* WARNING: Removing unreachable block (ram,0x0007a866) */

void FUN_0007ab0e(undefined2 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  undefined2 *extraout_r4;
  int unaff_r6;
  int unaff_r10;
  int unaff_r12;
  int unaff_r15;
  undefined unaff_r21;
  int unaff_gp;
  bool in_Z;
  undefined in_N;
  bool in_C;
  undefined in_V;
  undefined8 uVar2;
  undefined auStack_7c [32];
  
  *param_1 = (short)param_2;
  if (unaff_r15 + unaff_r6 == unaff_r12) {
    if (!in_C && !in_Z) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (-1 < param_2) {
      param_5 = (undefined4)((ulonglong)((longlong)(int)param_1 * (longlong)unaff_r6) >> 0x20);
    }
    pcVar1 = (code *)swi(0x35);
    uVar2 = (*pcVar1)(param_1,param_2,*(undefined4 *)(unaff_r10 + 0x14),param_4,param_5);
    pcVar1 = (code *)swi(0x23);
    (*pcVar1)((undefined *)uVar2,(int)((ulonglong)uVar2 >> 0x20),*(undefined *)uVar2);
    pcVar1 = (code *)swi(0x33);
    (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (code *)swi(0x3e);
  (*pcVar1)();
  func_0xfa699952();
  if (!(bool)in_V) {
    *extraout_r4 = (short)auStack_7c;
    if ((bool)in_N) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    irq_disable();
    pcVar1 = (code *)swi(0xe);
    (*pcVar1)();
    *(undefined *)(unaff_gp + 0x3f00) = unaff_r21;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0xfc4c008e();
  pcVar1 = (code *)swi(0x3f);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}

