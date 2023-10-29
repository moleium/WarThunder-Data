__int64 __fastcall start_classic_debug_system(
        char *debug_fname,
        char en_time,
        char hhmmss_fmt,
        int hhmmss_subsec,
        char append_file)
{
  const char *v8; // rsi
  signed __int64 v9; // rax
  __int64 v10; // rdi
  const char *last_char_ptr; // rbx
  struct tm *v12; // rbp
  const char *v13; // rdi
  size_t v14; // rax
  size_t v15; // rax
  int v16; // ebx
  int v17; // ebp
  int v18; // r14d
  int v19; // esi
  __int64 v20; // rax
  int wHour; // ebp
  int wMinute; // r12d
  int wSecond; // r14d
  int wMilliseconds; // ebx
  __int64 v25; // rax
  __int128 *enc_key_ptr; // rax
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  char *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 result; // rax
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  const char *v40; // [rsp+20h] [rbp-2A8h]
  int v41; // [rsp+28h] [rbp-2A0h]
  int v42; // [rsp+30h] [rbp-298h]
  int tm_mday; // [rsp+38h] [rbp-290h]
  int tm_hour; // [rsp+40h] [rbp-288h]
  struct _SYSTEMTIME SystemTime; // [rsp+70h] [rbp-258h] BYREF
  char v46; // [rsp+173h] [rbp-155h]
  int v47[64]; // [rsp+180h] [rbp-148h] BYREF
  char v48; // [rsp+282h] [rbp-46h]

  if ( debug_fname )
  {
    v8 = debug_fname;
    if ( *debug_fname )
    {
      v9 = strlen(debug_fname);
      v10 = &v8[v9 - 1];
      if ( v9 >= 3 && (last_char_ptr = &v8[v9 - 2], !strcmp(last_char_ptr, "/#")) )
      {
        xmmword_4B86390 = xmmword_4512990;
        xmmword_4B86380 = xmmword_4512980;
        xmmword_4B86370 = xmmword_4512970;
        xmmword_4B86360 = xmmword_4512960;
        xmmword_4B86350 = xmmword_4512950;
        xmmword_4B86340 = xmmword_4512940;
        xmmword_4B86330 = xmmword_4512930;
        log_crypt_key = clog_key;
        enc_key_ptr = &log_crypt_key;
        dword_4B863A0 = 62914560;
        dword_4B863B0 = 0;
        dword_4B863B4 = 0;
        dword_4B863B8 = 0;
        dword_4B863BC = 0;
        dword_4B863C0 = 0;
        off_4B863C8 = 0i64;
        while ( !*enc_key_ptr )
        {
          enc_key_ptr = (enc_key_ptr + 1);
          if ( enc_key_ptr >= &dword_4B863A0 )
            goto LABEL_6;
        }
        off_4B863C8 = &log_crypt_key;
      }
      else
      {
        last_char_ptr = v10;
      }
LABEL_6:
      if ( *last_char_ptr == 47 )
      {
        *&SystemTime.wYear = unknown_libname_80(0i64);
        v12 = localtime64(&SystemTime);
        GetCurrentProcessId();
        tm_hour = v12->tm_hour;
        tm_mday = v12->tm_mday;
        v42 = v12->tm_mon + 1;
        v41 = v12->tm_year + 1900;
        v40 = v8;
        v8 = v47;
        sub_17A810(v47, 259, &dword_48C8F30);
        v48 = 0;
      }
    }
  }
  else
  {
    v8 = 0i64;
  }
  unk_4B862D4 = 0;
  dword_4B86968 = -1;
  memset("D:\\Games\\WarThunder/.game_logs/2023_10_06_13_41_22__6152.clog", 0, 0x104ui64);
  memset(byte_4B863F0, 0, 0x104ui64);
  memset(byte_4B86500, 0, 0x104ui64);
  memset(&byte_4B86830, 0, 0x104ui64);
  memset("D:\\Games\\WarThunder/.game_logs/2023_10_06_13_41_22__6152.clog.fatal", 0, 0x104ui64);
  memset("D:\\Games\\WarThunder/.game_logs/2023_10_06_13_41_22__6152.clog", 0, 0x104ui64);
  v13 = "D:/Games/WarThunder/.game_logs/";
  memset("D:/Games/WarThunder/.game_logs/", 0, 0x104ui64);
  if ( v8 )
  {
    if ( *v8 != 37 && (!strncmp(v8, asc_499B523, 2ui64) || !strncmp(v8, "//", 2ui64) || strchr(v8, 58)) )
    {
      strcpy("D:\\Games\\WarThunder/.game_logs/2023_10_06_13_41_22__6152.clog.fatal", v8);
      strcat("D:\\Games\\WarThunder/.game_logs/2023_10_06_13_41_22__6152.clog.fatal", ".fatal");
    }
    else
    {
      getcwd("D:\\Games\\WarThunder/.game_logs/2023_10_06_13_41_22__6152.clog.fatal", 255);
      v14 = strlen("D:\\Games\\WarThunder/.game_logs/2023_10_06_13_41_22__6152.clog.fatal");
      strncat("D:\\Games\\WarThunder/.game_logs/2023_10_06_13_41_22__6152.clog.fatal", "/fatalerr", 259 - v14);
    }
    byte_4A78E04 = en_time;
    if ( hhmmss_fmt )
    {
      GetLocalTime(&SystemTime);
      wHour = SystemTime.wHour;
      wMinute = SystemTime.wMinute;
      wSecond = SystemTime.wSecond;
      wMilliseconds = SystemTime.wMilliseconds;
      off_4A796D0(&SystemTime);
      v25 = *&SystemTime.wYear - qword_4B768B8;
      if ( *&SystemTime.wYear - qword_4B768B8 >= 7000000000000i64 )
      {
        LODWORD(v25) = (v25 / *&qword_4A796D8);
      }
      else
      {
        v25 *= 1000000i64;
        if ( (Frequency.QuadPart | v25) >> 32 )
          v25 /= Frequency.QuadPart;
        else
          LODWORD(v25) = v25 / Frequency.LowPart;
      }
      dword_4B67878 = v25 / 1000 - wMilliseconds;
      dword_4B6787C = wSecond + 3600 * wHour + 60 * wMinute;
      if ( hhmmss_subsec )
      {
        v27 = 1;
        if ( hhmmss_subsec >= 2 )
          v27 = hhmmss_subsec;
        v28 = 3;
        if ( v27 < 3 )
          v28 = v27;
        dword_4B67880 = v28 + 1;
        v29 = 100;
        if ( v28 != 1 )
          v29 = 9 * (v28 == 2) + 1;
      }
      else
      {
        dword_4B67880 = 0;
        v29 = 1;
      }
      dword_4A78DE8 = v29;
      qword_4B86938 = sub_1463DE0;
    }
    if ( !byte_4B768B0 )
    {
      byte_4B768B0 = 1;
      timeBeginPeriod(1u);
      QueryPerformanceFrequency(&Frequency);
      *&qword_4A796D8 = Frequency.LowPart * *&qword_44AA5D8;
      off_4A796D0(&SystemTime);
      qword_4B768B8 = *&SystemTime.wYear;
    }
    v30 = *v8;
    if ( v30 != 37 && (v30 == 42 || !strncmp(v8, asc_499B523, 2ui64) || !strncmp(v8, "//", 2ui64) || strchr(v8, 58)) )
    {
      strncpy("D:\\Games\\WarThunder/.game_logs/2023_10_06_13_41_22__6152.clog", v8, 0x103ui64);
    }
    else
    {
      getcwd(&SystemTime, 260);
      v46 = 0;
      v40 = v8;
      sub_17A810("D:\\Games\\WarThunder/.game_logs/2023_10_06_13_41_22__6152.clog", 260, "%s/%s");
      byte_4B862D3 = 0;
    }
    unk_4B862D4 = 8;
    strncpy("D:\\Games\\WarThunder/.game_logs/2023_10_06_13_41_22__6152.clog", v8, 0x103ui64);
LABEL_51:
    if ( !aDGamesWarthund_0[0] )
      goto LABEL_61;
    goto LABEL_52;
  }
  getcwd("D:\\Games\\WarThunder/.game_logs/2023_10_06_13_41_22__6152.clog.fatal", 255);
  v15 = strlen("D:\\Games\\WarThunder/.game_logs/2023_10_06_13_41_22__6152.clog.fatal");
  strncat("D:\\Games\\WarThunder/.game_logs/2023_10_06_13_41_22__6152.clog.fatal", "/fatalerr", 259 - v15);
  byte_4A78E04 = en_time;
  if ( !hhmmss_fmt )
    goto LABEL_51;
  GetLocalTime(&SystemTime);
  v16 = SystemTime.wHour;
  v17 = SystemTime.wMinute;
  v18 = SystemTime.wSecond;
  v19 = SystemTime.wMilliseconds;
  off_4A796D0(&SystemTime);
  v20 = *&SystemTime.wYear - qword_4B768B8;
  if ( *&SystemTime.wYear - qword_4B768B8 >= 7000000000000i64 )
  {
    LODWORD(v20) = (v20 / *&qword_4A796D8);
  }
  else
  {
    v20 *= 1000000i64;
    if ( (Frequency.QuadPart | v20) >> 32 )
      v20 /= Frequency.QuadPart;
    else
      LODWORD(v20) = v20 / Frequency.LowPart;
  }
  dword_4B67878 = v20 / 1000 - v19;
  dword_4B6787C = v18 + 3600 * v16 + 60 * v17;
  if ( hhmmss_subsec )
  {
    v37 = 1;
    if ( hhmmss_subsec >= 2 )
      v37 = hhmmss_subsec;
    v38 = 3;
    if ( v37 < 3 )
      v38 = v37;
    dword_4B67880 = v38 + 1;
    v39 = 100;
    if ( v38 != 1 )
      v39 = 9 * (v38 == 2) + 1;
  }
  else
  {
    dword_4B67880 = 0;
    v39 = 1;
  }
  dword_4A78DE8 = v39;
  qword_4B86938 = sub_1463DE0;
  if ( aDGamesWarthund_0[0] )
  {
LABEL_52:
    byte_4B67884 = append_file;
    if ( append_file )
    {
      off_4A82818 = "ab";
      dword_4B67888 = sub_17B0670("D:\\Games\\WarThunder/.game_logs/2023_10_06_13_41_22__6152.clog");
    }
    else
    {
      sub_44117A8("D:\\Games\\WarThunder/.game_logs/2023_10_06_13_41_22__6152.clog");
    }
    if ( *"b64://" ^ *"D:\\Games\\WarThunder/.game_logs/2023_10_06_13_41_22__6152.clog" | (*"//" ^ *"ames\\WarThunder/.game_logs/2023_10_06_13_41_22__6152.clog") )
    {
      strcpy("D:/Games/WarThunder/.game_logs/", "D:\\Games\\WarThunder/.game_logs/2023_10_06_13_41_22__6152.clog");
      sub_1901570("D:/Games/WarThunder/.game_logs/");
      v31 = strrchr("D:/Games/WarThunder/.game_logs/", 47);
      if ( !v31 )
        v31 = strchr("D:/Games/WarThunder/.game_logs/", 58);
      v13 = v31 + 1;
      if ( !v31 )
        v13 = "D:/Games/WarThunder/.game_logs/";
    }
    *v13 = 0;
  }
LABEL_61:
  sub_44117A8("D:\\Games\\WarThunder/.game_logs/2023_10_06_13_41_22__6152.clog.fatal");
  unk_4B863D0 = 0i64;
  dword_4B863E0 = 0;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v32, v33, v34, v40, v41, v42, tm_mday, tm_hour);
  result = *(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  *(result + 312) = 1;
  return result;
}
