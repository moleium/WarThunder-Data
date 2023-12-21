__int64 __fastcall log_combat(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  int v5; // ebx
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rax
  _BYTE *v11; // rbx
  CHAR *v12; // rcx
  __int64 result; // rax
  char *v14; // rax
  char *v15; // rax
  char *v16; // rax
  char *v17; // rax
  _BYTE *v18; // [rsp+28h] [rbp-90h] BYREF
  __int64 v19; // [rsp+30h] [rbp-88h]
  __int64 v20; // [rsp+38h] [rbp-80h]
  int v21; // [rsp+40h] [rbp-78h] BYREF
  CHAR *v22; // [rsp+48h] [rbp-70h]
  int v23; // [rsp+50h] [rbp-68h]
  const char *v24; // [rsp+58h] [rbp-60h]
  int v25; // [rsp+60h] [rbp-58h]
  double v26; // [rsp+68h] [rbp-50h]
  int v27; // [rsp+70h] [rbp-48h]
  CHAR *v28; // [rsp+78h] [rbp-40h]
  int v29; // [rsp+80h] [rbp-38h]
  char *v30; // [rsp+88h] [rbp-30h]

  v5 = a2;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, a2, a3, a4);
  v8 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 352i64);
  v18 = 0i64;
  v19 = v8;
  v20 = 0i64;
  v9 = *(a1 + 1556);
  if ( (v9 & 0x1F) != 0 )
  {
    avprintf(&v18, 4i64, "all", 0i64, 0);
    goto LABEL_37;
  }
  if ( (v9 & 1) != 0 )
  {
    v22 = &szFile;
    v21 = 1;
    v24 = "MACHINE_GUNS";
    v23 = 1;
    avprintf(&v18, 32i64, "%s%s", &v21, 2);
    v9 = *(a1 + 1556);
    if ( (v9 & 2) == 0 )
    {
LABEL_7:
      if ( (v9 & 4) == 0 )
        goto LABEL_8;
      goto LABEL_22;
    }
  }
  else if ( (v9 & 2) == 0 )
  {
    goto LABEL_7;
  }
  if ( v20 && *v18 )
    v14 = word_4A23704;
  else
    v14 = &szFile;
  v22 = v14;
  v21 = 1;
  v24 = "CANNONS";
  v23 = 1;
  avprintf(&v18, 32i64, "%s%s", &v21, 2);
  v9 = *(a1 + 1556);
  if ( (v9 & 4) == 0 )
  {
LABEL_8:
    if ( (v9 & 8) == 0 )
      goto LABEL_9;
    goto LABEL_27;
  }
LABEL_22:
  if ( v20 && *v18 )
    v15 = word_4A23704;
  else
    v15 = &szFile;
  v22 = v15;
  v21 = 1;
  v24 = "ROCKETS";
  v23 = 1;
  avprintf(&v18, 32i64, "%s%s", &v21, 2);
  v9 = *(a1 + 1556);
  if ( (v9 & 8) == 0 )
  {
LABEL_9:
    if ( (v9 & 0x10) == 0 )
      goto LABEL_10;
LABEL_32:
    if ( v20 && *v18 )
      v17 = word_4A23704;
    else
      v17 = &szFile;
    v22 = v17;
    v21 = 1;
    v24 = "TORPEDOES";
    v23 = 1;
    avprintf(&v18, 32i64, "%s%s", &v21, 2);
LABEL_37:
    if ( v5 )
      goto LABEL_11;
    goto LABEL_38;
  }
LABEL_27:
  if ( v20 && *v18 )
    v16 = word_4A23704;
  else
    v16 = &szFile;
  v22 = v16;
  v21 = 1;
  v24 = "BOMBS";
  v23 = 1;
  avprintf(&v18, 32i64, "%s%s", &v21, 2);
  if ( (*(a1 + 1556) & 0x10) != 0 )
    goto LABEL_32;
LABEL_10:
  if ( v5 )
    goto LABEL_11;
LABEL_38:
  v5 = *(a1 + 1560);
LABEL_11:
  v10 = v5;
  v11 = v18;
  v12 = &szFile;
  if ( v20 )
    v12 = v18;
  v22 = *(a1 + 1752);
  v21 = 2;
  v24 = *(a1 + 1572);
  v23 = 2;
  v26 = *(a1 + 1576);
  v25 = 3;
  v28 = v12;
  v27 = 1;
  v30 = off_44A5040[v10];
  v29 = 1;
  result = avprintf(
             a3,
             256i64,
             "attackNum: %d, attackNumMax: %d, attackTimeMax: %.0f, weaponTypes: %s, fireMode: %s",
             &v21,
             5);
  if ( v11 )
    return (*(*v19 + 64i64))(v19, v11);
  return result;
}
