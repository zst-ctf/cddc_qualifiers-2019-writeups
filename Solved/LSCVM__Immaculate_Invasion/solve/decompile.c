
undefined8 FUN_0010127a(int iParm1)

{
  int iVar1;
  FILE *__stream;
  long in_FS_OFFSET;
  uint local_1174;
  undefined local_1118 [256];
  char local_1018 [4104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  setvbuf(stdout,(char *)0x0,1,0);
  setvbuf(stdin,(char *)0x0,1,0);
  memset(&DAT_00303140,0,0x4000);
  signal(0xe,FUN_00101265);
  alarm(10);
  local_1174 = (uint)(iParm1 == 2);
  __stream = fopen("flag","r");
  if (__stream == (FILE *)0x0) {
    perror("[-] Flag file open error");
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  fread(local_1118,1,0x100,__stream);
  fclose(__stream);
  FUN_00101133(
               "cfMcfMhiMfAhiMfAhiMfAeiMaAeiMjAhhcMMdAgjcMMcAhhcMMhAhhcMMgAhhcMMbAdfgMMhAijMfAeiMaAgjcMMaAdfgMMhAeehMMfAeehMMeAeehMMcAhhcMMhAjjMfAeiMaAeehMMaAeehMMcAgjcMMdAhjMeAeiMaAhhcMMcAhhcMMdAhhcMMdAeehMMaAjjMcAeehMMeAhhcMMgAhhcMMfAhhcMMhAijMeAeiMiAijMfAjjMfAhjMeAjjMcAijMeAeiMaAgjcMMdAeehMMeAeiMaAhhcMMdAgjcMMbAgjcMMdAhhcMMbAgjcMMaAhhcMMdAjjMgAeiMaAhiMfAhiMfAhiMfAcfMPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP"
               ,(ulong)local_1174,(ulong)local_1174);
  FUN_00101133("eiMaAhiMcAeiMaAhjMfAijMbAPPPPP",(ulong)local_1174,(ulong)local_1174);
  fgets(local_1018,0x1000,stdin);
  FUN_00101133(local_1018,(ulong)local_1174,(ulong)local_1174);
  iVar1 = strcmp(&DAT_00303140,"lsc_user");
  if (iVar1 == 0) {
    strcpy(&DAT_00303040,&DAT_00303140);
    FUN_00101133("eiMaAhiMcAeiMaAhhcMMcAeehMMcAgjcMMdAeehMMhAeehMMdAeehMMdAdfgMMhAijMiAPPPPPPPPPPP",
                 (ulong)local_1174,(ulong)local_1174);
    fgets(local_1018,0x1000,stdin);
    FUN_00101133(local_1018,(ulong)local_1174,(ulong)local_1174);
    iVar1 = strcmp(&DAT_00303140,"hi_darkspeed-corp!");
    if (iVar1 == 0) {
      printf("\nLogin Successful! %s\n\n",local_1118);
      printf(&DAT_00303040);
      FUN_00101133(
                   "cfMcfMeiMbAhhcMMdAefgMMbAhjMdAeiMaAhhcMMcAgjcMMdAgjcMMdAhjMiAeiMaAghMcAPPPPPPPPPPPPP"
                   ,(ulong)local_1174,(ulong)local_1174);
    }
    else {
      FUN_00101133(
                   "cfMhhcMMgAhhcMMbAeehMMeAdfgMMhAgjcMMbAeehMMdAhhcMMhAgjcMMbAeiMaAhhcMMcAeehMMcAgjcMMdAeehMMhAeehMMdAeehMMdAdfgMMhAijMiAeiMaAdfgMMdAghMdAdfgMMbAPPPPPPPPPPPPPPPPPPPPPP"
                   ,(ulong)local_1174,(ulong)local_1174);
    }
  }
  else {
    FUN_00101133(
                 "cfMhhcMMcAhhcMMhAeiMaAhhcMMfAgjcMMcAgjcMMdAeehMMcAjjMgAeiMaAdfgMMdAghMdAdfgMMbAPPPPPPPPPPPPP"
                 ,(ulong)local_1174,(ulong)local_1174);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}




void FUN_00100fc9(undefined uParm1)

{
  switch(uParm1) {
  case 10:
    FUN_00100fbe(); // return 0
    break;
  default:
    FUN_00100fbe(); // return 0
    break;
  case 0x20:
    FUN_00100fbe(); // return 0
    break;
  case 0x41: // A
    FUN_00100c3b(); // a + b
    break;
  case 0x42:
    FUN_00100fa7(); // a = b
    break;
  case 0x43:
    FUN_00100d84(); // ?
    break;
  case 0x44:
    FUN_00100f97(); // += 0x1000
    break;
  case 0x45:
    FUN_00100dcb(); // deref?
    break;
  case 0x46:
    FUN_00100e78(); // ?
    break;
  case 0x47:
    FUN_00100d2e(); // add number
    break;
  case 0x48:
    FUN_00100ef9(); // ?
    break;
  case 0x49:
    FUN_00100c18(); // Print digit to screen
    break;
  case 0x4a:
    FUN_00100ce5(); // ?
    break;
  case 0x4b:
    FUN_00100e22(); // ?
    break;
  case 0x4d: //M
    FUN_00100c8d(); // multiply
    break;
  case 0x50: //P
    FUN_00100bfe(); // Print char to screen
    break;
  case 0x52: //R
    FUN_00100dae(); // ?
    break;
  case 0x53: //S
    FUN_00100c61(); // v2-v1
    break;
  case 0x56: //V
    FUN_00100cb8(); // divide
    break;
  case 0x5a: //Z
    FUN_00100d4e(); // increment reg184
    break;
  case 0x61: //a
    FUN_00100b8a(0); // put 0
    break;
  case 0x62: //b
    FUN_00100b8a(1); // put 1
    break;
  case 99: //c
    FUN_00100b8a(2); // put 2
    break;
  case 100: //d
    FUN_00100b8a(3); // put 3
    break;
  case 0x65: //e
    FUN_00100b8a(4); // put 4
    break;
  case 0x66: //f
    FUN_00100b8a(5); // put 5
    break;
  case 0x67: //g
    FUN_00100b8a(6); // put 6
    break;
  case 0x68: //h
    FUN_00100b8a(7); // put 7
    break;
  case 0x69: //i
    FUN_00100b8a(8); // put 8
    break;
  case 0x6a: //j
    FUN_00100b8a(9); // put 9
  }
  return;
}


