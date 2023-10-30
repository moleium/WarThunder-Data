const char *__fastcall webui_lastdamage(__int64 http_req)
{
  int v2; // eax
  __int64 v3; // rcx
  _BYTE *v4; // rdi
  signed __int64 v5; // rdx
  void (*v6)(void); // rax
  const char *result; // rax
  int v8; // edi
  _BYTE *v9; // rbx
  signed __int64 v10; // rdx
  int v11; // eax
  void *v12; // rdi
  int v13; // eax
  int v14; // ebp
  int v15; // eax
  int v16; // ebx
  char *v17; // rbx
  unsigned int v18; // r8d
  void (*v19)(void); // rax
  char *v20; // rdi
  unsigned int v21; // r8d
  char *Str; // [rsp+30h] [rbp-98h] BYREF
  void *v23; // [rsp+38h] [rbp-90h]
  __int64 v24; // [rsp+40h] [rbp-88h]
  char *v25; // [rsp+48h] [rbp-80h] BYREF
  void *v26; // [rsp+50h] [rbp-78h]
  __int64 v27; // [rsp+58h] [rbp-70h]
  char v28[32]; // [rsp+60h] [rbp-68h] BYREF
  char v29[72]; // [rsp+80h] [rbp-48h] BYREF

  if ( stricmp(*http_req, "GET") )
  {
    v2 = stricmp(*http_req, "POST");
    v3 = *(http_req + 0x4E8);
    if ( !v2 )
    {
      if ( v3 )
      {
        v6 = *(http_req + 0x4F8);
        if ( v6 )
          v6();
      }
      result = "HTTP/1.1 501 Not Implemented\r\n\r\n";
      *(http_req + 0x4E8) = "HTTP/1.1 501 Not Implemented\r\n\r\n";
      *(http_req + 0x4F0) = 0x20;
      goto LABEL_24;
    }
    if ( !v3 )
    {
LABEL_23:
      result = "HTTP/1.1 400 Bad Request\r\n\r\n";
      *(http_req + 0x4E8) = "HTTP/1.1 400 Bad Request\r\n\r\n";
      *(http_req + 0x4F0) = 0x1C;
LABEL_24:
      *(http_req + 0x4F8) = 0i64;
      return result;
    }
LABEL_21:
    v19 = *(http_req + 0x4F8);
    if ( v19 )
      v19();
    goto LABEL_23;
  }
  v4 = *(http_req + 0x18);
  if ( v4 )
    v5 = strlen(*(http_req + 0x18));
  else
    v5 = 0i64;
  v8 = parse_command_data(v4, v5, "lastEvt", v29, 0x20i64);
  v9 = *(http_req + 0x18);
  if ( v9 )
    v10 = strlen(*(http_req + 0x18));
  else
    v10 = 0i64;
  v11 = parse_command_data(v9, v10, "lastDmg", v28, 0x20i64);
  if ( v8 <= 0 || v11 <= 0 )
  {
    if ( !*(http_req + 0x4E8) )
      goto LABEL_23;
    goto LABEL_21;
  }
  v12 = off_4B678C8;
  v25 = 0i64;
  v26 = off_4B678C8;
  v27 = 0i64;
  unknown_libname_78(v28);
  v14 = v13;
  unknown_libname_78(v29);
  v16 = v15;
  Str = 0i64;
  v23 = v12;
  v24 = 0i64;
  EnterCriticalSection(&stru_4B19728);
  sub_185590(&v25, "{\"events\":");
  sub_AFA320(&qword_4B196E8, &Str, v16);
  if ( v24 )
  {
    v17 = Str;
    if ( Str )
    {
LABEL_19:
      v18 = strlen(v17);
      goto LABEL_28;
    }
  }
  else
  {
    v17 = &szFile;
    if ( &szFile )
      goto LABEL_19;
  }
  v18 = 0;
LABEL_28:
  append_string(&v25, v17, v18);
  append_string(&v25, ",\n\"damage\":", 0xBu);
  sub_AFA320(&qword_4B19708, &Str, v14);
  if ( !v24 )
  {
    v20 = &szFile;
    if ( &szFile )
      goto LABEL_30;
LABEL_32:
    v21 = 0;
    goto LABEL_33;
  }
  v20 = Str;
  if ( !Str )
    goto LABEL_32;
LABEL_30:
  v21 = strlen(v20);
LABEL_33:
  append_string(&v25, v20, v21);
  append_string(&v25, "}", 1u);
  LeaveCriticalSection(&stru_4B19728);
  if ( Str )
    (*(*v23 + 0x40i64))(v23);
  result = sub_AF1720(http_req, &v25);
  if ( v25 )
    return (*(*v26 + 0x40i64))(v26);
  return result;
}
