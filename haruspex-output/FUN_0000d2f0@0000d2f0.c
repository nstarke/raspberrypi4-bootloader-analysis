
/* WARNING: Removing unreachable block (ram,0x0000d3ba) */
/* WARNING: Removing unreachable block (ram,0x0000d39c) */
/* WARNING: Removing unreachable block (ram,0x0000d3a4) */
/* WARNING: Removing unreachable block (ram,0x0000d3a0) */
/* WARNING: Removing unreachable block (ram,0x0000d3ae) */
/* WARNING: Removing unreachable block (ram,0x0000d40a) */
/* WARNING: Removing unreachable block (ram,0x0000d410) */
/* WARNING: Removing unreachable block (ram,0x0000d418) */
/* WARNING: Removing unreachable block (ram,0x0000d41c) */
/* WARNING: Removing unreachable block (ram,0x0000d42c) */
/* WARNING: Removing unreachable block (ram,0x0000d43a) */
/* WARNING: Removing unreachable block (ram,0x0000d442) */
/* WARNING: Removing unreachable block (ram,0x0000d444) */
/* WARNING: Removing unreachable block (ram,0x0000d466) */
/* WARNING: Removing unreachable block (ram,0x0000d46a) */
/* WARNING: Removing unreachable block (ram,0x0000d484) */
/* WARNING: Removing unreachable block (ram,0x0000d47e) */
/* WARNING: Removing unreachable block (ram,0x0000d48c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0000d2f0(uint param_1,int param_2,int param_3,uint param_4,int *param_5,int param_6,
                 char param_7)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int unaff_gp;
  
  piVar4 = (int *)(unaff_gp + 0x110);
  _DAT_7d004008 = *(undefined4 *)(unaff_gp + 0x10c);
  *piVar4 = _DAT_7c003004;
  _DAT_7d004000 = 0x80;
  do {
    if (param_3 == -1) goto code_r0x0000d372;
    uVar3 = _DAT_7c003004 - *piVar4;
  } while (uVar3 < 0x989681);
  uVar2 = 0x92;
LAB_0000d3d8:
  _sprintf_to_stdout((byte *)s_SPI_ERROR___d_CS__08_0000dcf0,uVar2,0x80,uVar3,0,param_6);
  pcVar1 = (code *)swi(0xe);
  (*pcVar1)();
  _DAT_7d004000 = _DAT_7d004000 & 0xffffff7f;
  _sprintf_to_stdout((byte *)s_SPI_error___x__u__u__u__u__u_0000d49c,_DAT_7d004000,param_1,param_3,
                     param_4,_DAT_7c003004 - *piVar4);
  FUN_0000a332(0x31,1);
  return 0xffffffff;
code_r0x0000d372:
  do {
    uVar3 = _DAT_7c003004 - *piVar4;
  } while (uVar3 < 0x989681);
  uVar2 = 0x9b;
  goto LAB_0000d3d8;
}

