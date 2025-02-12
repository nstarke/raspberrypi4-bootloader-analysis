
void FUN_000026c2(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(param_1 + 0x2a0);
  if (pcVar3 != (char *)0x0) {
    if (*(int *)(param_1 + 0x16c) == 0) {
      *(uint *)(pcVar3 + 0x10) = (uint)(*(char *)(param_1 + 0x5e) == '\0');
      if ((pcVar3 == (char *)(param_1 + 0x288)) && (*(int *)(param_1 + 8) != 0)) {
        FUN_00009a40((byte *)(param_1 + 0x5e));
      }
      else {
        cVar1 = *pcVar3;
        if (cVar1 == '\0') {
          iVar2 = FUN_0000b774((byte *)(param_1 + 0x5e),(undefined4 *)0x0,0);
          **(int **)(*(int *)(param_1 + 0x2a0) + 8) = iVar2;
        }
        else if (cVar1 == '\x01') {
          iVar2 = FUN_0000b7b6((byte *)(param_1 + 0x5e),(undefined4 *)0x0,0);
          **(int **)(*(int *)(param_1 + 0x2a0) + 8) = iVar2;
        }
        else if (cVar1 == '\x02') {
          FUN_0000df7a(*(undefined4 **)(pcVar3 + 8),(char *)(param_1 + 0x5e),
                       *(char **)(pcVar3 + 0xc));
          *(undefined *)
           (*(int *)(*(int *)(param_1 + 0x2a0) + 8) + *(int *)(*(int *)(param_1 + 0x2a0) + 0xc) + -1
           ) = 0;
        }
      }
    }
    FUN_0000c35e(param_1);
  }
  return;
}

