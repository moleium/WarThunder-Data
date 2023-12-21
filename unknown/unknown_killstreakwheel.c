char __fastcall unknown_killstreakwheel(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  char result; // al
  __int64 v7; // rdx
  int v8; // edi
  _WORD *v9; // rax
  unsigned __int16 v10; // cx
  _QWORD *ThreadLocalStoragePointer; // rcx
  unsigned __int16 v12; // ax
  int v13; // ecx
  char v14; // [rsp+2Fh] [rbp-39h] BYREF
  char v15[20]; // [rsp+30h] [rbp-38h] BYREF
  int v16; // [rsp+44h] [rbp-24h]

  result = byte_4B19A25 != 0;
  if ( (byte_4B19A25 != 0) == a2 )
    return result;
  v7 = *(*(game + 0x440) + 0x3F4i64);
  if ( v7 <= 0x16 && (v8 = 0x410189, _bittest(&v8, v7))
    || *(game + 0xCD)
    || !*(game + 0xCA)
    || (*(game + 0xCB) & 1) == 0
    || !*&mUnit
    || *(qword_4B176E8 + 0x1E)
    || (v12 = __ROR2__(*(*&mUnit + 0x10B0i64) - 3, 1), v12 > 6u)
    || (v13 = 0x53, !_bittest(&v13, v12)) )
  {
    if ( *&mUnit && (v9 = *(*&mUnit + 0x10B8i64)) != 0i64 )
    {
      v10 = *(*&mUnit + 8i64) & 0x7FF;
      if ( v9[0x160] == v10 )
        goto LABEL_13;
      if ( v9[0x161] == v10 )
        goto LABEL_13;
      if ( v9[0x162] == v10 )
        goto LABEL_13;
      result = v9[0x163] == v10;
      if ( result )
        goto LABEL_13;
    }
    else
    {
      result = 0;
    }
    if ( a2 )
      return result;
  }
LABEL_13:
  byte_4B19A25 = a2;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v7, a3, a4);
  sub_14584E0(v15, *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64));
  v14 = a2;
  if ( v16 != 0xFFFFFFFF )
    sub_145E9A0(v15);
  sub_145BE60(v15, "open", &v14);
  fire_event(a1 + 0x5A8, "ToggleKillStreakWheel", v15);
  return sub_1458FF0(v15);
}
