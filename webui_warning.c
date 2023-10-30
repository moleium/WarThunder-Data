const char *__fastcall webui_warninglog(__int64 http_req, __int64 a2, double a3)
{
  void (*v4)(void); // rax
  const char *result; // rax
  _BYTE *v6; // rdi
  signed __int64 v7; // rdx
  void (*v8)(void); // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rdi
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v15; // rcx
  CHAR *v16; // rbx
  CHAR *v17; // rax
  CHAR *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rcx
  __int64 v23; // rcx
  const char *v24; // rcx
  _BYTE *v25; // rdi
  CHAR *v26; // [rsp+28h] [rbp-A0h] BYREF
  CHAR *v27; // [rsp+30h] [rbp-98h] BYREF
  void *v28; // [rsp+38h] [rbp-90h]
  __int64 v29; // [rsp+40h] [rbp-88h]
  __int64 (__fastcall **v30)(void *); // [rsp+48h] [rbp-80h] BYREF
  _BYTE *v31; // [rsp+50h] [rbp-78h]
  __int64 v32; // [rsp+58h] [rbp-70h]
  __int64 v33; // [rsp+60h] [rbp-68h]
  __int64 v34; // [rsp+68h] [rbp-60h]
  __int64 v35[2]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int8 v36; // [rsp+80h] [rbp-48h]

  if ( strcmp(*http_req, "GET") )
    goto LABEL_49;
  if ( !*(game + 0x718)
    || !*(game + 0xDC) && (!byte_4B1C820 || dword_4B1C810 != 5 && dword_4B1C810 != 2)
    || !*(*(game + 0x430) + 0x365i64) )
  {
    if ( *(http_req + 0x4E8) )
    {
      v8 = *(http_req + 0x4F8);
      if ( v8 )
        v8();
    }
    result = "HTTP/1.1 403 Forbidden\r\n\r\n";
    *(http_req + 0x4E8) = "HTTP/1.1 403 Forbidden\r\n\r\n";
    *(http_req + 0x4F0) = 0x1A;
    goto LABEL_18;
  }
  v6 = *(http_req + 0x18);
  v7 = v6 ? strlen(*(http_req + 0x18)) : 0i64;
  if ( !parse_command_data(v6, v7, "cmd", v35, 0x20i64)
    || (v12 = LocalUnit) == 0
    || *(LocalUnit + 0x10A8) > 1u
    || (*(LocalUnit + 0x1058) & 0x7000014) != 0
    || *(LocalUnit + 0x10B0)
    || !*(LocalUnit + 0x9D0)
    || (v13 = *(game + 0x720)) == 0 )
  {
LABEL_49:
    if ( *(http_req + 0x4E8) )
    {
      v4 = *(http_req + 0x4F8);
      if ( v4 )
        v4();
    }
    result = "HTTP/1.1 400 Bad Request\r\n\r\n";
    *(http_req + 0x4E8) = "HTTP/1.1 400 Bad Request\r\n\r\n";
    *(http_req + 0x4F0) = 0x1C;
LABEL_18:
    *(http_req + 0x4F8) = 0i64;
    return result;
  }
  if ( v35[0] == 0x73676F4C746567i64 )
  {
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v9, v10, v11);
    v15 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    v30 = &off_44CAF30;
    v32 = v15;
    v33 = 0x4000i64;
    v34 = 0i64;
    v31 = (*(*v15 + 0x18i64))(v15, 0x4000i64);
    *v31 = 0;
    sub_B09440(&v30, "{\n");
    sub_B094D0(v12, &v30);
    sub_B09440(&v30, ",\n");
    v27 = 0i64;
    v28 = off_4B678C8;
    v29 = 0i64;
    sub_4E49A0(v13, 2i64, &v27);
    v16 = &szFile;
    v17 = &szFile;
    if ( v29 )
      v17 = v27;
    v26 = v17;
    sub_B09AE0(&v30, "  \"errorLog\": %s,\n", &v26);
    sub_4E49A0(v13, 1i64, &v27);
    v18 = &szFile;
    if ( v29 )
      v18 = v27;
    v26 = v18;
    sub_B09AE0(&v30, "  \"warningLog\": %s,\n", &v26);
    sub_4E49A0(v13, 0i64, &v27);
    if ( v29 )
      v16 = v27;
    v26 = v16;
    sub_B09AE0(&v30, "  \"infoLog\": %s,\n", &v26);
    LODWORD(v26) = *(v13 + 0x20);
    sub_B09B80(&v30, "  \"updateTime\": %f \n", a3);
    sub_B09440(&v30, "}\n");
    sub_AF1600(http_req, v31, v34);
    if ( v27 )
      (*(*v28 + 0x40i64))(v28);
    v30 = &off_44CAF30;
    return (*(*v32 + 0x40i64))(v32, v31);
  }
  else
  {
    if ( v35[1] ^ 0x676F4C6574616470i64 | v35[0] ^ 0x556465654E746567i64 | v36 )
      return sub_AF1600(http_req, "HTTP/1.1 400 Bad Request\r\n\r\n", 0x1Ci64);
    LODWORD(v26) = 0xBF800000;
    if ( !sub_B0A5E0(http_req, "lastUpdateTime") )
    {
      return sub_AF1600(http_req, "HTTP/1.1 400 Bad Request\r\n\r\n", 0x1Ci64);
    }
    else
    {
      v22 = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(v22[TlsIndex] + 1i64) )
        _dyn_tls_on_demand_init(v22, v19, v20, v21);
      v23 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
      v30 = &off_44CAF30;
      v32 = v23;
      v33 = 0x80i64;
      v34 = 0i64;
      v31 = (*(*v23 + 0x18i64))(v23, 0x80i64);
      *v31 = 0;
      sub_B09440(&v30, "{\n");
      v24 = "false";
      if ( *(v13 + 0x20) > *&v26 )
        v24 = "true";
      v27 = v24;
      sub_B09AE0(&v30, "  \"shouldUpdate\": %s \n", &v27);
      sub_B09440(&v30, "}\n");
      v25 = v31;
      sub_AF1600(http_req, v31, v34);
      return (*(*v32 + 0x40i64))(v32, v25);
    }
  }
}
