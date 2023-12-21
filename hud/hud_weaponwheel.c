char __fastcall hud_weaponwheel(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al
  char v5; // bl
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v8; // r9
  char v9; // [rsp+2Fh] [rbp-39h] BYREF
  char v10[20]; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+44h] [rbp-24h]

  result = byte_4B19A26 != 0;
  if ( (byte_4B19A26 != 0) != a2 )
  {
    v5 = a2;
    byte_4B19A26 = a2;
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(ThreadLocalStoragePointer, a2, a3, a4);
    sub_14584E0(v10, *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64));
    v9 = v5;
    if ( v11 != 0xFFFFFFFF )
      sub_145E9A0(v10);
    data::set_bool(v10, "open", &v9);
    fire_event(a1 + 0x5A8, "ToggleSelectWeaponWheel", v10, v8);
    return sub_1458FF0(v10);
  }
  return result;
}
