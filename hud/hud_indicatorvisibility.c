__int64 __fastcall hud_indicator_visibility(__int64 a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v8; // r9
  char v10; // [rsp+2Fh] [rbp-39h] BYREF
  char v11[20]; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+44h] [rbp-24h]

  sub_224C10(qword_4B173B8 + 0x3B8);
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v4, v5, v6);
  sub_14584E0(v11, *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64));
  v10 = a2;
  if ( v12 != 0xFFFFFFFF )
    sub_145E9A0(v11);
  sub_145BE60(v11, "hasAnyDmg", &v10);
  fire_event(a1 + 0x5A8, "DamageIndicatorToggleVisbility", v11, v8);
  return sub_1458FF0(v11);
}
