void __fastcall log_radio(int a1, unsigned int a2, unsigned int a3, int a4)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rax
  CHAR *v12; // r12
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  CHAR *v16; // rcx
  __int64 v17; // rsi
  int v18; // r9d
  CHAR *v19; // rax
  int v20; // [rsp+40h] [rbp-58h] BYREF
  CHAR *v21; // [rsp+48h] [rbp-50h]

  EnterCriticalSection(&stru_4B776C8);
  if ( (byte_4B9DFD1 & 1) != 0 )
  {
    if ( byte_4B3FBE0 )
    {
      if ( a2 > 0x16
        || (v8 = 0x43FFBD, !_bittest(&v8, a2))
        || (v9 = qword_44D1D38[a2],
            dword_4A79158 = 0x41C64E6D * dword_4A79158 + 0x3039,
            !((HIWORD(dword_4A79158) & 0x7FFFi64) % dword_44D1CD0[v9])) )
      {
        v10 = 0;
        if ( dword_44AE130[a3] > a1 )
          v10 = a1;
        if ( qword_4B3FAB0 + qword_4B3FAC8 <= qword_4B3FAE0 && byte_4A75070 )
        {
          if ( !a2 && *&dword_448A1E0 > *(*(game + 0x548) + 0x120i64) )
          {
            v11 = *(game + 0x450);
            if ( v11 && *(v11 + 0x5CA) )
            {
              if ( !*(v11 + 0x618) )
                goto LABEL_27;
            }
            else if ( !qword_4B507E8 )
            {
              goto LABEL_27;
            }
          }
          v12 = &szFile;
          sub_185590(&qword_4B3FBF8, &szFile);
          v13 = strlen(*(&off_44D1C20 + a3));
          append_string(&qword_4B3FBF8, *(&off_44D1C20 + a3), v13);
          v21 = (v10 + 1);
          v20 = 2;
          add_server_param(&qword_4B3FBF8, 0x20i64, "_v%d_", &v20, 1);
          v14 = strlen(off_44D1AE0[a2]);
          append_string(&qword_4B3FBF8, off_44D1AE0[a2], v14);
          LOBYTE(v20) = 0x5F;
          append_string(&qword_4B3FBF8, &v20, 1u);
          v15 = strlen((&off_44D1D20)[a4]);
          append_string(&qword_4B3FBF8, (&off_44D1D20)[a4], v15);
          v16 = &szFile;
          if ( qword_4B3FC08 )
            v16 = qword_4B3FBF8;
          v17 = sub_F26450(v16, a3, v10);
          if ( qword_4B3FC08 )
            v12 = qword_4B3FBF8;
          v21 = v12;
          v20 = 1;
          dg_debug(3i64, "RADIO: %s", &v20);
          if ( v17 )
          {
            LOBYTE(v18) = 1;
            sub_F187B0(v17, 0, 0, v18, 3, 0i64, &szFile, 5);
          }
          else
          {
            if ( qword_4B3FC08 )
              v19 = qword_4B3FBF8;
            else
              v19 = &szFile;
            v21 = v19;
            v20 = 1;
            dg_debug(3i64, "[ERROR] FMOD cannot get radio event '%s'", &v20);
          }
        }
      }
    }
  }
LABEL_27:
  LeaveCriticalSection(&stru_4B776C8);
}
