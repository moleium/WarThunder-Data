_QWORD *__fastcall log_aimphase(__int64 a1, _QWORD *a2, char a3, unsigned int a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned int v14; // r11d
  char v15; // cl
  unsigned int v16; // edx
  char *v17; // r9
  char *v18; // r10
  __int64 *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rbx
  CHAR *v22; // rax
  CHAR *v23; // rcx
  __int64 v24; // r9
  int v26; // [rsp+30h] [rbp-38h] BYREF
  char *v27; // [rsp+38h] [rbp-30h]
  int v28; // [rsp+40h] [rbp-28h]
  __int64 v29; // [rsp+48h] [rbp-20h]

  if ( !a3 || !unknown_unit_check(a1) )
  {
    sub_15EAE30(a1, a2, 0i64, a4);
    return a2;
  }
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v7, v8, v9);
  v11 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 352i64);
  *a2 = 0i64;
  a2[1] = v11;
  a2[2] = 0i64;
  v12 = *(a1 + 16);
  v13 = *(a1 + 136);
  if ( v12 < 0 )
  {
    v20 = *(a1 + 20);
    if ( xmmword_4B69BF0 > v20 )
    {
      v14 = *(qword_4B69BE8 + 4 * v20);
      v15 = byte_4B69C1A;
      v16 = v14 >> byte_4B69C1A;
      v17 = &xmmword_4B69BF0 + 8;
      v18 = &xmmword_4B69C00 + 8;
      v19 = &qword_4B69C10;
      goto LABEL_11;
    }
  }
  else if ( xmmword_4B69C40 > v12 )
  {
    v14 = *(qword_4B69C38 + 4 * v12);
    v15 = byte_4B69C6A;
    v16 = v14 >> byte_4B69C6A;
    v17 = &xmmword_4B69C40 + 8;
    v18 = &xmmword_4B69C50 + 8;
    v19 = &qword_4B69C60;
LABEL_11:
    v21 = (*v18 + 16i64 * v16);
    if ( v16 == *v19 )
      v21 = v17;
    v22 = (*v21 + (v14 & ~(-1 << v15)));
    goto LABEL_15;
  }
  v22 = 0i64;
LABEL_15:
  v23 = &szFile;
  if ( v22 )
    v23 = v22;
  v27 = v23;
  v26 = 1;
  v29 = *(&off_44A4ED0 + v13);
  v28 = 1;
  ctor_vprintf(a2, 256i64, "\n%s(stage: %s, ", &v26, 2);
  if ( *(a1 + 136) == 4 )
  {
    v27 = off_44A4F00[*(a1 + 140)];
    v26 = 1;
    avprintf(a2, 64i64, "aimPhase: %s, ", &v26, 1);
  }
  log_combat(*(a1 + 56), *(a1 + 76), a2, v24);
  avprintf(a2, 1i64, ")", 0i64, 0);
  return a2;
}
