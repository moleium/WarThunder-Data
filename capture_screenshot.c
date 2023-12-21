void __fastcall capture_screenshot(CHAR **ss_data, __int64 ss_size, int image_format, char a4, _BYTE *a5)
{
  __int64 (__usercall *capture_func)@<rax>(char *@<rcx>, int); // rax
  char *file_ext; // r12
  __int64 (__fastcall *capture_method)(int, int, int, int, int); // rdi
  const char *default_ext; // rdx
  CHAR *v11; // rax
  __int64 month; // rcx
  __int64 hour; // rbx
  __int64 minute; // rdi
  __int64 second; // r8
  CHAR *v16; // rdi
  CHAR *v17; // rdx
  CHAR *v18; // rax
  struct _SYSTEMTIME SystemTime; // [rsp+30h] [rbp-98h] BYREF
  int v20; // [rsp+40h] [rbp-88h]
  __int64 v21; // [rsp+48h] [rbp-80h]
  int v22; // [rsp+50h] [rbp-78h]
  __int64 wDay; // [rsp+58h] [rbp-70h]
  int v24; // [rsp+60h] [rbp-68h]
  __int64 v25; // [rsp+68h] [rbp-60h]
  int v26; // [rsp+70h] [rbp-58h]
  __int64 v27; // [rsp+78h] [rbp-50h]
  int v28; // [rsp+80h] [rbp-48h]
  __int64 v29; // [rsp+88h] [rbp-40h]

  if ( image_format )
  {
    if ( image_format == 2 )
    {
      capture_func = sub_FDA540;
      if ( a4 )
        capture_func = sub_FDA440;
      file_ext = "png";
    }
    else
    {
      if ( image_format != 1 )
      {
        v18 = off_4B678C8;
        *ss_data = 0i64;
        ss_data[1] = v18;
        ss_data[2] = 0i64;
        return;
      }
      capture_func = sub_FDA1D0;
      file_ext = "tga";
    }
  }
  else
  {
    capture_func = sub_FDA0E0;
    file_ext = "jpg";
  }
  capture_method = sub_1A553B0;
  if ( qword_4B8EF70 != 0i64 || qword_4B8EF80 == 0 )
    capture_method = capture_func;
  default_ext = "tga";
  if ( qword_4B8EF70 != 0i64 || qword_4B8EF80 == 0 )
    default_ext = file_ext;
  off_4A7B000 = capture_method;
  sub_185590(&qword_4B8EF70, default_ext);
  v11 = off_4B678C8;
  *ss_data = 0i64;
  ss_data[1] = v11;
  ss_data[2] = 0i64;
  sub_4DC450(ss_data);
  GetLocalTime(&SystemTime);
  month = SystemTime.wMonth;
  hour = SystemTime.wHour;
  minute = SystemTime.wMinute;
  second = SystemTime.wSecond;
  *&SystemTime.wHour = SystemTime.wYear;
  *&SystemTime.wYear = 2;
  v21 = month;
  v20 = 2;
  wDay = SystemTime.wDay;
  v22 = 2;
  v25 = hour;
  v24 = 2;
  v27 = minute;
  v26 = 2;
  v29 = second;
  v28 = 2;
  avprintf(ss_data, 0x100i64, "/shot %04d.%02d.%02d %02d.%02d.%02d", &SystemTime, 6);
  if ( a5 && *a5 )
  {
    *&SystemTime.wHour = a5;
    *&SystemTime.wYear = 1;
    avprintf(ss_data, 0x100i64, " %s", &SystemTime, 1);
  }
  *&SystemTime.wHour = file_ext;
  *&SystemTime.wYear = 1;
  avprintf(ss_data, 0x100i64, ".%s", &SystemTime, 1);
  v16 = &szFile;
  v17 = &szFile;
  if ( *(ss_data + 4) )
    v17 = *ss_data;
  sub_1A55550(ss_size, v17);
  if ( *(ss_data + 4) )
    v16 = *ss_data;
  if ( a5 )
  {
    *&SystemTime.wHour = a5;
    *&SystemTime.wYear = 1;
    v21 = v16;
    v20 = 1;
    logmessage_fmt(3u, "%s screenshot saved to %s", &SystemTime, 2);
  }
  else
  {
    *&SystemTime.wHour = v16;
    *&SystemTime.wYear = 1;
    logmessage_fmt(3u, "screenshot saved to %s", &SystemTime, 1);
  }
}
