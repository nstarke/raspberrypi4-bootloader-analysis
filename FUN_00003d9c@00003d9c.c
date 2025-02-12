
char * FUN_00003d9c(undefined4 param_1)

{
  char *pcVar1;
  
  switch(param_1) {
  case 3:
    pcVar1 = s_Generic_boot_failure_00003ec8;
    break;
  case 4:
    pcVar1 = s_Firmware__start__elf__not_found_00003fb0;
    break;
  default:
    pcVar1 = s_Unknown_00003e70;
    break;
  case 7:
    pcVar1 = s_Kernel_or_device_tree_not_found_o_0000401c;
    break;
  case 8:
    pcVar1 = s_SDRAM_failure_00003e84;
    break;
  case 9:
    pcVar1 = s_SDRAM_mismatch_00003ea4;
    break;
  case 10:
    pcVar1 = s_Halting_00003e68;
    break;
  case 0x11:
    pcVar1 = s_Operation_requires_USB_high_curr_00003ff0;
    break;
  case 0x21:
    pcVar1 = s_Partition_is_not_FAT_00003ee0;
    break;
  case 0x22:
    pcVar1 = s_Failed_to_read_from_partition_00003f90;
    break;
  case 0x23:
    pcVar1 = s_Extended_partition_not_FAT_00003f74;
    break;
  case 0x24:
    pcVar1 = s_File_signature_or_hash_mismatch_00003fd0;
    break;
  case 0x31:
    pcVar1 = s_SPI_EEPROM_error__00003eb4;
    break;
  case 0x32:
    pcVar1 = s_EEPROM_is_write_protected_00003f58;
    break;
  case 0x33:
    pcVar1 = s_I2C_ERROR_00003e78;
    break;
  case 0x43:
    pcVar1 = s_RP1_not_found_00003e94;
    break;
  case 0x44:
    pcVar1 = s_Unsupported_board_type_00003f40;
    break;
  case 0x45:
    pcVar1 = s_Fatal_firmware_error_00003ef8;
    break;
  case 0x46:
    pcVar1 = s_Power_failure_type_A_00003f10;
    break;
  case 0x47:
    pcVar1 = s_Power_failure_type_B_00003f28;
  }
  return pcVar1;
}

