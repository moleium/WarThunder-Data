_QWORD *__fastcall log_runway(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 game_; // rdi
  __int64 v8; // rbx
  struct _RTL_CRITICAL_SECTION *v9; // rsi
  __int64 v10; // r15
  __int64 v12; // rax
  __int64 v13; // rsi
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v15; // rax
  const char *runway_status; // rax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  char v19; // cl
  unsigned int v20; // edx
  char *v21; // r8
  char *v22; // rbp
  __int64 *v23; // rsi
  __int64 v24; // rcx
  _QWORD *v25; // rdi
  CHAR *v26; // rdx
  CHAR *v27; // rcx
  const char *v28; // rcx
  int v29; // [rsp+30h] [rbp-58h] BYREF
  void *v30; // [rsp+38h] [rbp-50h]
  int v31; // [rsp+40h] [rbp-48h]
  const char *runway_status_; // [rsp+48h] [rbp-40h]

  v4 = a4;
  if ( !a3 )
    goto LABEL_14;
  game_ = game;
  v8 = *(*(a1 + 8) + 8i64);
  if ( (*(game + 0xCB) & 1) != 0 )
  {
    v9 = 0i64;
  }
  else
  {
    v9 = *(game + 0x620);
    if ( v9 )
      EnterCriticalSection(*(game + 0x620));
  }
  if ( *(game_ + 0x360) > v8 )
  {
    v10 = *(*(game_ + 0x350) + 8 * v8);
    if ( !v9 )
      goto LABEL_12;
    goto LABEL_11;
  }
  v10 = 0i64;
  if ( v9 )
LABEL_11:
    LeaveCriticalSection(v9);
LABEL_12:
  if ( !v10 || *(v10 + 4272) || (v12 = *(v10 + 13264)) == 0 )
  {
LABEL_14:
    sub_15EAE30(a1, a2, 0i64, v4);
    return a2;
  }
  v13 = *(v12 + 1888);
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, a2, a3, a4);
  v15 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 352i64);
  *a2 = 0i64;
  a2[1] = v15;
  a2[2] = 0i64;
  if ( v13 )
  {
    runway_status = "FREE";
    if ( *(v13 + 592) == v10 )
      runway_status = "BUSY";
  }
  else
  {
    runway_status = "NONE";
  }
  v17 = *(a1 + 16);
  if ( v17 < 0 )
  {
    v24 = *(a1 + 20);
    if ( xmmword_4B69BF0 > v24 )
    {
      v18 = *(qword_4B69BE8 + 4 * v24);
      v19 = byte_4B69C1A;
      v20 = v18 >> byte_4B69C1A;
      v21 = &xmmword_4B69BF0 + 8;
      v22 = &xmmword_4B69C00 + 8;
      v23 = &qword_4B69C10;
      goto LABEL_29;
    }
  }
  else if ( xmmword_4B69C40 > v17 )
  {
    v18 = *(qword_4B69C38 + 4 * v17);
    v19 = byte_4B69C6A;
    v20 = v18 >> byte_4B69C6A;
    v21 = &xmmword_4B69C40 + 8;
    v22 = &xmmword_4B69C50 + 8;
    v23 = &qword_4B69C60;
LABEL_29:
    v25 = (*v22 + 16i64 * v20);
    if ( v20 == *v23 )
      v25 = v21;
    v26 = (*v25 + (v18 & ~(-1 << v19)));
    goto LABEL_33;
  }
  v26 = 0i64;
LABEL_33:
  v27 = &szFile;
  if ( v26 )
    v27 = v26;
  v30 = v27;
  v29 = 1;
  runway_status_ = runway_status;
  v31 = 1;
  ctor_vprintf(a2, 128i64, "%s(runway: %s, ", &v29, 2);
  v28 = "TRUE";
  if ( !*(*(v10 + 13264) + 1603i64) )
    v28 = "FALSE";
  v30 = v28;
  v29 = 1;
  avprintf(a2, 16i64, "takeoffPermission: %s", &v29, 1);
  avprintf(a2, 1i64, ")", 0i64, 0);
  return a2;
}
