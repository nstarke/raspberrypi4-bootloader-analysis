
undefined4 FUN_00005c58(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  int *piVar24;
  uint uVar25;
  int *piVar26;
  uint uVar27;
  int *piVar28;
  uint *puVar29;
  int *piVar30;
  uint uVar31;
  uint uVar32;
  int *piVar33;
  uint uVar34;
  int local_1a4;
  undefined4 *local_1a0;
  undefined4 *local_19c;
  undefined4 *local_198;
  undefined4 *local_194;
  undefined4 *local_190;
  undefined4 *local_18c;
  int local_188;
  int *local_184;
  int *local_180;
  int *local_17c;
  int *local_178;
  int *local_174;
  int local_170;
  int local_16c;
  int local_168;
  uint local_164 [64];
  uint local_64 [4];
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  
  iVar15 = 8;
  piVar11 = &local_1a4;
  piVar12 = &local_1a4;
  piVar18 = &local_1a4;
  piVar10 = &local_1a4;
  iVar6 = param_1;
  do {
    puVar5 = (undefined4 *)(iVar6 + 8);
    iVar6 = iVar6 + 4;
    *(undefined4 *)((int)piVar11 + 0x140) = *puVar5;
    piVar11 = (int *)((int)piVar11 + 4);
    iVar15 = iVar15 + -1;
  } while (0 < iVar15);
  iVar6 = 0x10;
  do {
    bVar1 = *param_2;
    pbVar2 = param_2 + 1;
    pbVar3 = param_2 + 2;
    pbVar4 = param_2 + 3;
    param_2 = param_2 + 4;
    *(uint *)((int)piVar12 + 0x40) =
         (uint)*pbVar4 | (uint)*pbVar3 << 8 | (uint)*pbVar2 << 0x10 | (uint)bVar1 << 0x18;
    piVar12 = (int *)((int)piVar12 + 4);
    iVar6 = iVar6 + -1;
  } while (0 < iVar6);
  local_18c = &DAT_0000ec10;
  local_190 = &DAT_0000ec14;
  local_194 = &DAT_0000ec18;
  local_198 = &DAT_0000ec1c;
  local_19c = &DAT_0000ec20;
  local_1a0 = &DAT_0000ec24;
  local_1a4 = 0x10;
  piVar26 = &DAT_0000ec0c;
  piVar33 = &CRYPT_SHACAL2_K;
  piVar24 = &DAT_0000ec24;
  piVar28 = &DAT_0000ec20;
  piVar23 = &DAT_0000ec1c;
  piVar12 = &DAT_0000ec18;
  piVar11 = &DAT_0000ec14;
  piVar30 = &DAT_0000ec10;
  uVar7 = local_64[0];
  uVar8 = local_64[3];
  uVar9 = local_64[2];
  uVar13 = local_50;
  uVar14 = local_4c;
  uVar16 = local_64[1];
  uVar17 = local_54;
  uVar31 = local_48;
  do {
    iVar6 = *(int *)((int)piVar18 + 0x40) +
            *piVar33 +
            ((uVar14 ^ uVar13) & uVar17 ^ uVar14) +
            ((uVar17 << 0x15 | uVar17 >> 0xb) ^ (uVar17 << 0x1a | uVar17 >> 6) ^
            (uVar17 << 7 | uVar17 >> 0x19)) + uVar31;
    uVar8 = uVar8 + iVar6;
    uVar31 = ((uVar7 << 10 | uVar7 >> 0x16) ^
             (uVar7 << 0x13 | uVar7 >> 0xd) ^ (uVar7 << 0x1e | uVar7 >> 2)) +
             (uVar16 & uVar7 | (uVar16 | uVar7) & uVar9) + iVar6;
    iVar6 = *(int *)((int)piVar18 + 0x44) +
            *piVar26 +
            ((uVar13 ^ uVar17) & uVar8 ^ uVar13) +
            ((uVar8 >> 0xb | uVar8 * 0x200000) ^ (uVar8 * 0x4000000 | uVar8 >> 6) ^
            (uVar8 >> 0x19 | uVar8 * 0x80)) + uVar14;
    uVar9 = uVar9 + iVar6;
    uVar14 = (uVar7 & uVar31 | (uVar7 | uVar31) & uVar16) +
             ((uVar31 * 0x400 | uVar31 >> 0x16) ^
             (uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 * 0x40000000 | uVar31 >> 2)) + iVar6;
    iVar6 = *(int *)((int)piVar18 + 0x48) +
            *piVar30 +
            ((uVar8 ^ uVar17) & uVar9 ^ uVar17) +
            ((uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 * 0x4000000 | uVar9 >> 6) ^
            (uVar9 >> 0x19 | uVar9 * 0x80)) + uVar13;
    uVar16 = uVar16 + iVar6;
    uVar13 = (uVar14 & uVar31 | (uVar14 | uVar31) & uVar7) +
             ((uVar14 * 0x400 | uVar14 >> 0x16) ^
             (uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 * 0x40000000 | uVar14 >> 2)) + iVar6;
    iVar6 = *(int *)((int)piVar18 + 0x4c) +
            *piVar11 +
            ((uVar8 ^ uVar9) & uVar16 ^ uVar8) +
            ((uVar16 >> 0xb | uVar16 * 0x200000) ^ (uVar16 * 0x4000000 | uVar16 >> 6) ^
            (uVar16 >> 0x19 | uVar16 * 0x80)) + uVar17;
    uVar7 = uVar7 + iVar6;
    uVar17 = ((uVar13 >> 0x16 | uVar13 * 0x400) ^
             (uVar13 >> 0xd | uVar13 * 0x80000) ^ (uVar13 * 0x40000000 | uVar13 >> 2)) +
             (uVar14 & uVar13 | (uVar14 | uVar13) & uVar31) + iVar6;
    iVar6 = *(int *)((int)piVar18 + 0x50) +
            *piVar12 +
            ((uVar9 ^ uVar16) & uVar7 ^ uVar9) +
            ((uVar7 >> 0xb | uVar7 * 0x200000) ^ (uVar7 * 0x4000000 | uVar7 >> 6) ^
            (uVar7 >> 0x19 | uVar7 * 0x80)) + uVar8;
    uVar31 = uVar31 + iVar6;
    uVar8 = (uVar13 & uVar17 | (uVar13 | uVar17) & uVar14) +
            ((uVar17 * 0x400 | uVar17 >> 0x16) ^
            (uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 * 0x40000000 | uVar17 >> 2)) + iVar6;
    iVar6 = *(int *)((int)piVar18 + 0x54) +
            *piVar23 +
            ((uVar16 ^ uVar7) & uVar31 ^ uVar16) +
            ((uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 * 0x4000000 | uVar31 >> 6) ^
            (uVar31 >> 0x19 | uVar31 * 0x80)) + uVar9;
    uVar14 = uVar14 + iVar6;
    uVar9 = ((uVar8 >> 0x16 | uVar8 * 0x400) ^
            (uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 * 0x40000000 | uVar8 >> 2)) +
            (uVar8 & uVar17 | (uVar8 | uVar17) & uVar13) + iVar6;
    iVar6 = *(int *)((int)piVar18 + 0x58) +
            *piVar28 +
            ((uVar7 ^ uVar31) & uVar14 ^ uVar7) +
            ((uVar14 >> 0xb | uVar14 * 0x200000) ^ (uVar14 * 0x4000000 | uVar14 >> 6) ^
            (uVar14 >> 0x19 | uVar14 * 0x80)) + uVar16;
    uVar13 = uVar13 + iVar6;
    uVar16 = ((uVar9 * 0x400 | uVar9 >> 0x16) ^
             (uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 * 0x40000000 | uVar9 >> 2)) +
             (uVar8 & uVar9 | (uVar8 | uVar9) & uVar17) + iVar6;
    piVar28 = piVar28 + 8;
    piVar23 = piVar23 + 8;
    iVar6 = *piVar24;
    piVar24 = piVar24 + 8;
    piVar12 = piVar12 + 8;
    iVar6 = *(int *)((int)piVar18 + 0x5c) +
            iVar6 + ((uVar14 ^ uVar31) & uVar13 ^ uVar31) +
                    ((uVar13 * 0x200000 | uVar13 >> 0xb) ^ (uVar13 * 0x4000000 | uVar13 >> 6) ^
                    (uVar13 * 0x80 | uVar13 >> 0x19)) + uVar7;
    uVar17 = uVar17 + iVar6;
    piVar11 = piVar11 + 8;
    uVar7 = ((uVar16 >> 0x16 | uVar16 * 0x400) ^
            (uVar16 * 0x80000 | uVar16 >> 0xd) ^ (uVar16 * 0x40000000 | uVar16 >> 2)) +
            (uVar9 & uVar16 | (uVar9 | uVar16) & uVar8) + iVar6;
    piVar30 = piVar30 + 8;
    local_1a4 = local_1a4 + -8;
    piVar26 = piVar26 + 8;
    piVar33 = piVar33 + 8;
    piVar18 = (int *)((int)piVar18 + 0x20);
  } while (0 < local_1a4);
  puVar29 = local_164;
  local_174 = &DAT_0000ec48;
  local_178 = &DAT_0000ec4c;
  local_17c = &DAT_0000ec50;
  local_180 = &DAT_0000ec54;
  piVar18 = &DAT_0000ec58;
  piVar11 = &DAT_0000ec5c;
  piVar12 = &DAT_0000ec60;
  local_184 = &DAT_0000ec64;
  local_188 = 0x30;
  do {
    uVar21 = puVar29[0xe];
    uVar19 = puVar29[1];
    uVar25 = *puVar29 +
             ((uVar19 << 0xe | uVar19 >> 0x12) ^ (uVar19 << 0x19 | uVar19 >> 7) ^ uVar19 >> 3) +
             puVar29[9] +
             (uVar21 >> 10 ^ (uVar21 >> 0x13 | uVar21 << 0xd) ^ (uVar21 << 0xf | uVar21 >> 0x11));
    puVar29[0x10] = uVar25;
    iVar6 = *local_174 +
            ((uVar14 ^ uVar13) & uVar17 ^ uVar14) +
            ((uVar17 >> 0xb | uVar17 << 0x15) ^ (uVar17 << 0x1a | uVar17 >> 6) ^
            (uVar17 >> 0x19 | uVar17 << 7)) + uVar31 + uVar25;
    uVar8 = uVar8 + iVar6;
    uVar31 = (uVar16 & uVar7 | (uVar16 | uVar7) & uVar9) +
             ((uVar7 << 10 | uVar7 >> 0x16) ^
             (uVar7 << 0x13 | uVar7 >> 0xd) ^ (uVar7 << 0x1e | uVar7 >> 2)) + iVar6;
    uVar27 = puVar29[0xf];
    uVar20 = puVar29[2];
    uVar19 = puVar29[10] +
             (uVar27 >> 10 ^ (uVar27 >> 0x13 | uVar27 << 0xd) ^ (uVar27 << 0xf | uVar27 >> 0x11)) +
             (uVar20 >> 3 ^ (uVar20 >> 0x12 | uVar20 << 0xe) ^ (uVar20 << 0x19 | uVar20 >> 7)) +
             uVar19;
    puVar29[0x11] = uVar19;
    iVar6 = *local_178 +
            ((uVar13 ^ uVar17) & uVar8 ^ uVar13) +
            ((uVar8 >> 0xb | uVar8 * 0x200000) ^ (uVar8 * 0x4000000 | uVar8 >> 6) ^
            (uVar8 >> 0x19 | uVar8 * 0x80)) + uVar14 + uVar19;
    uVar9 = uVar9 + iVar6;
    uVar14 = (uVar7 & uVar31 | (uVar7 | uVar31) & uVar16) +
             ((uVar31 >> 0x16 | uVar31 * 0x400) ^
             (uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 * 0x40000000 | uVar31 >> 2)) + iVar6;
    uVar34 = puVar29[3];
    uVar20 = puVar29[0xb] +
             (uVar25 >> 10 ^ (uVar25 >> 0x13 | uVar25 * 0x2000) ^ (uVar25 * 0x8000 | uVar25 >> 0x11)
             ) + ((uVar34 << 0xe | uVar34 >> 0x12) ^ (uVar34 << 0x19 | uVar34 >> 7) ^ uVar34 >> 3) +
             uVar20;
    puVar29[0x12] = uVar20;
    iVar6 = *local_17c +
            ((uVar8 ^ uVar17) & uVar9 ^ uVar17) +
            ((uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 * 0x4000000 | uVar9 >> 6) ^
            (uVar9 * 0x80 | uVar9 >> 0x19)) + uVar13 + uVar20;
    uVar16 = uVar16 + iVar6;
    uVar13 = (uVar14 & uVar31 | (uVar14 | uVar31) & uVar7) +
             ((uVar14 * 0x400 | uVar14 >> 0x16) ^
             (uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 * 0x40000000 | uVar14 >> 2)) + iVar6;
    uVar32 = puVar29[4];
    uVar34 = puVar29[0xc] +
             (uVar19 >> 10 ^ (uVar19 >> 0x13 | uVar19 * 0x2000) ^ (uVar19 * 0x8000 | uVar19 >> 0x11)
             ) + ((uVar32 << 0xe | uVar32 >> 0x12) ^ (uVar32 << 0x19 | uVar32 >> 7) ^ uVar32 >> 3) +
             uVar34;
    puVar29[0x13] = uVar34;
    iVar6 = *local_180 +
            ((uVar8 ^ uVar9) & uVar16 ^ uVar8) +
            ((uVar16 >> 0xb | uVar16 * 0x200000) ^ (uVar16 * 0x4000000 | uVar16 >> 6) ^
            (uVar16 >> 0x19 | uVar16 * 0x80)) + uVar17 + uVar34;
    uVar7 = uVar7 + iVar6;
    uVar17 = (uVar14 & uVar13 | (uVar14 | uVar13) & uVar31) +
             ((uVar13 * 0x400 | uVar13 >> 0x16) ^
             (uVar13 >> 0xd | uVar13 * 0x80000) ^ (uVar13 * 0x40000000 | uVar13 >> 2)) + iVar6;
    uVar19 = puVar29[5];
    uVar32 = puVar29[0xd] +
             (uVar20 >> 10 ^ (uVar20 * 0x2000 | uVar20 >> 0x13) ^ (uVar20 * 0x8000 | uVar20 >> 0x11)
             ) + ((uVar19 >> 0x12 | uVar19 << 0xe) ^ (uVar19 << 0x19 | uVar19 >> 7) ^ uVar19 >> 3) +
             uVar32;
    puVar29[0x14] = uVar32;
    iVar6 = *piVar18 +
            ((uVar9 ^ uVar16) & uVar7 ^ uVar9) +
            ((uVar7 >> 0xb | uVar7 * 0x200000) ^ (uVar7 * 0x4000000 | uVar7 >> 6) ^
            (uVar7 >> 0x19 | uVar7 * 0x80)) + uVar8 + uVar32;
    uVar31 = uVar31 + iVar6;
    uVar8 = ((uVar17 >> 0x16 | uVar17 * 0x400) ^
            (uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 * 0x40000000 | uVar17 >> 2)) +
            (uVar13 & uVar17 | (uVar13 | uVar17) & uVar14) + iVar6;
    local_64[3] = uVar8;
    uVar22 = puVar29[6];
    uVar19 = (uVar22 >> 3 ^ (uVar22 >> 0x12 | uVar22 << 0xe) ^ (uVar22 << 0x19 | uVar22 >> 7)) +
             ((uVar34 >> 0x13 | uVar34 * 0x2000) ^ (uVar34 * 0x8000 | uVar34 >> 0x11) ^ uVar34 >> 10
             ) + uVar21 + uVar19;
    puVar29[0x15] = uVar19;
    iVar6 = ((uVar16 ^ uVar7) & uVar31 ^ uVar16) +
            ((uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 * 0x4000000 | uVar31 >> 6) ^
            (uVar31 >> 0x19 | uVar31 * 0x80)) + uVar9 + *piVar11 + uVar19;
    uVar14 = uVar14 + iVar6;
    local_4c = uVar14;
    uVar9 = iVar6 + (uVar8 & uVar17 | (uVar8 | uVar17) & uVar13) +
                    ((uVar8 >> 0x16 | uVar8 * 0x400) ^
                    (uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 * 0x40000000 | uVar8 >> 2));
    local_64[2] = uVar9;
    uVar20 = puVar29[7];
    uVar22 = (uVar32 >> 10 ^ (uVar32 * 0x2000 | uVar32 >> 0x13) ^ (uVar32 * 0x8000 | uVar32 >> 0x11)
             ) + uVar27 +
             ((uVar20 >> 0x12 | uVar20 << 0xe) ^ (uVar20 << 0x19 | uVar20 >> 7) ^ uVar20 >> 3) +
             uVar22;
    puVar29[0x16] = uVar22;
    iVar6 = ((uVar7 ^ uVar31) & uVar14 ^ uVar7) +
            ((uVar14 >> 0xb | uVar14 * 0x200000) ^ (uVar14 * 0x4000000 | uVar14 >> 6) ^
            (uVar14 >> 0x19 | uVar14 * 0x80)) + uVar16 + *piVar12 + uVar22;
    uVar13 = uVar13 + iVar6;
    local_50 = uVar13;
    uVar16 = iVar6 + (uVar8 & uVar9 | (uVar8 | uVar9) & uVar17) +
                     ((uVar9 >> 0x16 | uVar9 * 0x400) ^
                     (uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 * 0x40000000 | uVar9 >> 2));
    local_64[1] = uVar16;
    uVar34 = puVar29[8];
    uVar20 = ((uVar19 >> 0x13 | uVar19 * 0x2000) ^ (uVar19 * 0x8000 | uVar19 >> 0x11) ^ uVar19 >> 10
             ) + uVar25 +
             ((uVar34 >> 0x12 | uVar34 << 0xe) ^ (uVar34 << 0x19 | uVar34 >> 7) ^ uVar34 >> 3) +
             uVar20;
    puVar29[0x17] = uVar20;
    local_16c = ((uVar14 ^ uVar31) & uVar13 ^ uVar31) +
                ((uVar13 >> 0xb | uVar13 * 0x200000) ^ (uVar13 * 0x4000000 | uVar13 >> 6) ^
                (uVar13 >> 0x19 | uVar13 * 0x80)) + uVar7 + *local_184 + uVar20;
    local_168 = (uVar9 & uVar16 | (uVar9 | uVar16) & uVar8) +
                ((uVar16 >> 0x16 | uVar16 * 0x400) ^
                (uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 * 0x40000000 | uVar16 >> 2));
    uVar17 = uVar17 + local_16c;
    uVar7 = local_16c + local_168;
    piVar12 = piVar12 + 8;
    local_64[0] = uVar7;
    piVar11 = piVar11 + 8;
    local_184 = local_184 + 8;
    piVar18 = piVar18 + 8;
    puVar29 = puVar29 + 8;
    local_180 = local_180 + 8;
    local_17c = local_17c + 8;
    local_178 = local_178 + 8;
    local_174 = local_174 + 8;
    local_188 = local_188 + -8;
  } while (0 < local_188);
  local_48 = uVar31;
  local_54 = uVar17;
  iVar6 = 8;
  local_170 = param_1;
  do {
    piVar11 = (int *)((int)piVar10 + 0x140);
    piVar10 = (int *)((int)piVar10 + 4);
    *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + *piVar11;
    local_170 = local_170 + 4;
    iVar6 = iVar6 + -1;
  } while (0 < iVar6);
  FUN_00007994(&local_16c,0x128);
  return 0;
}

