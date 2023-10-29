__int64 __fastcall log_serialization_process(
        int *a1,
        char *a2,
        char *a3,
        int a4,
        int a5,
        __int64 (__fastcall ***a6)(_QWORD))
{
  char *v10; // rdx
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  char *v13; // rbx
  unsigned int v14; // eax
  char *v15; // rdi
  unsigned int v16; // r8d
  unsigned int v17; // eax
  CHAR *v18; // rsi
  char v19; // al
  const char *v20; // rbx
  bool v21; // zf
  __int64 v22; // rax
  const char *v23; // rdx
  __int64 v24; // rcx
  __int64 result; // rax
  char *v26; // [rsp+28h] [rbp-90h] BYREF
  void *v27; // [rsp+30h] [rbp-88h]
  __int64 v28; // [rsp+38h] [rbp-80h]
  int v29; // [rsp+40h] [rbp-78h] BYREF
  CHAR *v30; // [rsp+48h] [rbp-70h]
  int v31; // [rsp+50h] [rbp-68h]
  __int64 v32; // [rsp+58h] [rbp-60h]
  int v33; // [rsp+60h] [rbp-58h]
  __int64 v34; // [rsp+68h] [rbp-50h]
  int v35; // [rsp+70h] [rbp-48h]
  const char *v36; // [rsp+78h] [rbp-40h]

  v27 = off_4B678C8;
  v26 = (*(*off_4B678C8 + 24i64))(off_4B678C8, 16i64);
  v28 = 0x100000000Ci64;
  strcpy(v26, "Serialize [");
  switch ( a4 )
  {
    case 1:
      v10 = "load BEGIN";
      goto LABEL_12;
    case 2:
      v10 = "load OK";
      goto LABEL_8;
    case 4:
      v10 = "load ERROR";
      goto LABEL_12;
    case 8:
      v10 = "save BEGIN";
      goto LABEL_12;
    case 16:
      v10 = "save OK";
LABEL_8:
      v11 = 7;
      goto LABEL_13;
    case 32:
      v10 = "save SKIP";
      goto LABEL_10;
    case 64:
      v10 = "save ERROR";
LABEL_12:
      v11 = 10;
      goto LABEL_13;
    default:
      v10 = "<UNKNOWN>";
LABEL_10:
      v11 = 9;
LABEL_13:
      sub_1546A60(&v26, v10, v11);
      sub_1546A60(&v26, "][", 2u);
      if ( a2 )
        v12 = strlen(a2);
      else
        v12 = 0;
      sub_1546A60(&v26, a2, v12);
      sub_1546A60(&v26, "][", 2u);
      if ( a5 <= 63 )
      {
        v13 = "LEGACY_SAVE_TO_USERDATA";
        switch ( a5 )
        {
          case 2:
            break;
          case 4:
            v13 = "LEGACY_LOAD_FROM_USERDATA";
            break;
          case 8:
            v13 = "CLIENT_GET_FROM_CHARSRV";
            break;
          case 16:
            v13 = "HOST_GET_FROM_CHARSRV";
            break;
          case 32:
            v13 = "CLIENT_SEND_ONLINE";
            break;
          default:
            goto LABEL_35;
        }
      }
      else
      {
        if ( a5 > 511 )
        {
          switch ( a5 )
          {
            case 512:
              v13 = "CHARSRV_READ_FROM_DB";
              goto LABEL_36;
            case 1024:
              v13 = "CHARSRV_WRITE_TO_DB";
              goto LABEL_36;
            case 2048:
              v13 = "CHARSRV_SEND_TO_ONLINE";
              goto LABEL_36;
          }
        }
        else
        {
          switch ( a5 )
          {
            case 64:
              v13 = "HOST_SEND_ONLINE";
              goto LABEL_36;
            case 128:
              v13 = "CHARSRV_GET_FROM_CLIENT";
              goto LABEL_36;
            case 256:
              v13 = "CHARSRV_GET_FROM_HOST";
              goto LABEL_36;
          }
        }
LABEL_35:
        v13 = "<BAD_STAT_PROCESS_MODE>";
      }
LABEL_36:
      v14 = strlen(v13);
      sub_1546A60(&v26, v13, v14);
      sub_1546A60(&v26, "][", 2u);
      if ( a6 )
      {
        v15 = (**a6)(a6);
        if ( !v15 )
        {
          v15 = 0i64;
          v16 = 0;
          goto LABEL_41;
        }
      }
      else
      {
        v15 = "<NULLPROC>";
      }
      v16 = strlen(v15);
LABEL_41:
      sub_1546A60(&v26, v15, v16);
      if ( a3 && *a3 )
      {
        sub_1546A60(&v26, "][", 2u);
        v17 = strlen(a3);
        sub_1546A60(&v26, a3, v17);
      }
      sub_1546A60(&v26, "]", 1u);
      if ( v28 )
        v18 = v26;
      else
        v18 = &szFile;
      v19 = (*(*a1 + 8i64))(a1);
      v20 = "bitmask";
      v21 = v19 == 0;
      if ( v19 )
        v20 = "numeric";
      v22 = a1[3];
      v23 = "%s: cur = %llx; lastUploaded = %llx; [%s]";
      if ( !v21 )
        v23 = "%s: cur = %lld; lastUploaded = %lld; [%s]";
      v24 = a1[2];
      v30 = v18;
      v29 = 1;
      v32 = v22;
      v31 = 2;
      v34 = v24;
      v33 = 2;
      v36 = v20;
      v35 = 1;
      result = dg_debug(1313817413i64, v23, &v29, 4i64);
      if ( v26 )
        return (*(*v27 + 64i64))(v27);
      return result;
  }
}
