_QWORD *__fastcall log_takeoff(__int64 a1, _QWORD *a2, char istakeoff_granted, unsigned int a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v11; // rax
  const char *v12; // rbx
  const char *v13; // r15
  __int64 v14; // rcx
  unsigned int v15; // r8d
  char v16; // cl
  unsigned int v17; // edx
  char *v18; // r9
  char *v19; // r10
  __int64 *v20; // r11
  __int64 v21; // rcx
  _QWORD *v22; // rax
  CHAR *v23; // rdx
  CHAR *v24; // rax
  int v26; // [rsp+20h] [rbp-58h]
  int v27; // [rsp+30h] [rbp-48h] BYREF
  void *v28; // [rsp+38h] [rbp-40h]
  int v29; // [rsp+40h] [rbp-38h]
  const char *v30; // [rsp+48h] [rbp-30h]

  if ( !istakeoff_granted || !unknown_unit_check(a1) )
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
  v12 = "TRUE";
  v13 = "TRUE";
  if ( !*(*(a1 + 0x38) + 1896i64) )
    v13 = "FALSE";
  v14 = *(a1 + 0x10);
  if ( v14 < 0 )
  {
    v21 = *(a1 + 20);
    if ( xmmword_4B69BF0 > v21 )
    {
      v15 = *(qword_4B69BE8 + 4 * v21);
      v16 = byte_4B69C1A;
      v17 = v15 >> byte_4B69C1A;
      v18 = &xmmword_4B69BF0 + 8;
      v19 = &xmmword_4B69C00 + 8;
      v20 = &qword_4B69C10;
      goto LABEL_13;
    }
  }
  else if ( xmmword_4B69C40 > v14 )
  {
    v15 = *(qword_4B69C38 + 4 * v14);
    v16 = byte_4B69C6A;
    v17 = v15 >> byte_4B69C6A;
    v18 = &xmmword_4B69C40 + 8;
    v19 = &xmmword_4B69C50 + 8;
    v20 = &qword_4B69C60;
LABEL_13:
    v22 = (*v19 + 16i64 * v17);
    if ( v17 == *v20 )
      v22 = v18;
    v23 = (*v22 + (v15 & ~(-1 << v16)));
    goto LABEL_17;
  }
  v23 = 0i64;
LABEL_17:
  v24 = &szFile;
  if ( v23 )
    v24 = v23;
  v28 = v24;
  v27 = 1;
  v30 = v13;
  v29 = 1;
  v26 = 2;
  ctor_vprintf(a2, 128i64, "\n%s(takeoffIsGranted: %s, ", &v27, v26);
  if ( !*(*(a1 + 56) + 1603i64) )
    v12 = "FALSE";
  v28 = v12;
  v27 = 1;
  avprintf(a2, 16i64, "takeoffPermission: %s", &v27, 1);
  avprintf(a2, 1i64, ")", 0i64, 0);
  return a2;
}
