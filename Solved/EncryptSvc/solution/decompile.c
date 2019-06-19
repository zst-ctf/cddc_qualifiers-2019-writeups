
undefined8 FUN_0010174e(void)

{
  ssize_t sVar1;
  size_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  char local_19b9;
  int local_19b8;
  uint local_19b4;
  int local_19b0;
  undefined4 local_19ac;
  int local_19a8;
  uint local_19a4;
  void *local_19a0;
  char local_1998 [256];
  undefined local_1898 [2048];
  undefined local_1098 [128];
  undefined8 local_1018 [513];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = 0x200;
  puVar4 = local_1018;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  setvbuf(stdout,(char *)0x0,1,0);
  setvbuf(stdin,(char *)0x0,1,0);
  memset(local_1098,0,0x80);
  local_19b4 = FUN_00101696(&DAT_00101dd2,local_1098);
  local_19b0 = FUN_00101696("public.pem",local_1898);
  local_1898[(long)local_19b0] = 0;
  signal(0xe,FUN_00101739);
  alarm(100);
  puts("\n--------------------------------------------");
  puts("Text Encryption Service ");
  puts("--------------------------------------------\n");
  DAT_00303068 = FUN_0010146d(local_1898,1);
  local_19b8 = 0;
  do {
    if (9 < local_19b8) {
LAB_00101c28:
      if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return 0;
    }
    local_19ac = FUN_0010158d();
    switch(local_19ac) {
    default:
      puts("Please select 1-5 \n");
      break;
    case 1:
      local_19a4 = FUN_0010154c(local_1098,(ulong)local_19b4,local_1898,local_1018);
      if (local_19a4 == 0xffffffff) {
        FUN_00101402("[-] Public Key Encryption Failed ");
                    /* WARNING: Subroutine does not return */
        exit(-1);
      }
      puts("[Encrypted message example] ----------------------------------------|");
      printf("[+] Encrypted message length : %d\n",(ulong)local_19a4);
      local_19a0 = (void *)FUN_0010129a(local_1018,(ulong)local_19a4,(ulong)local_19a4);
      printf("[+] Encrypted Text : \n%s");
      free(local_19a0);
      puts("\n--------------------------------------------------------------------|\n");
      break;
     case 2:
      memset(local_1998,0,0x100);
      printf("\n\n[*] Input : ");
      fflush(stdout);
      sVar1 = read(0,local_1998,0x214);
      local_19a8 = (int)sVar1;
      local_1998[(long)(local_19a8 + -1)] = 0;
      if (local_19a8 < 0x101) {
        sVar2 = strlen(local_1998);
        local_19a4 = FUN_0010154c(local_1998,sVar2 & 0xffffffff,local_1898,local_1018);
        if (local_19a4 == 0xffffffff) {
          FUN_00101402("[-] Public Key Encryption Failed ");
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        puts("[Encrypted message] -------------------------------------------------|");
        printf("[+] Encrypted message length : %d\n",(ulong)local_19a4);
        local_19a0 = (void *)FUN_0010129a(local_1018,(ulong)local_19a4,(ulong)local_19a4);
        printf("[+] Encrypted Text : \n%s",local_19a0);
        free(local_19a0);
        puts("\n--------------------------------------------------------------------|\n");
      }
      else {
        puts("Input buffer overflow");
      }
      break;
    case 3:
      DAT_00303068 = FUN_0010146d(local_1898,1);
      puts("Decrypting service is *NOT* implemented yet. Sorry!\n");
      break;
    case 4:
      puts("[Print public key] -------------------------------------------------|");
      printf("[+] Public key length : %d\n",0x80);
      printf("[+] Public key : \n%s",local_1898);
      puts("\n--------------------------------------------------------------------|\n");
      break;
    case 5:
      printf("Are you satisfied our service? (y/n) : ");
      __isoc99_scanf(&DAT_00101d80,&local_19b9);
      fgetc(stdin);
      if (local_19b9 != 'n') {
        puts("\nGood bye!\n");
        goto LAB_00101c28;
      }
      local_19b8 = 0;
    }
    local_19b8 = local_19b8 + 1;
  } while( true );
}
