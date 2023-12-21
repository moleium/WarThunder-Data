char __fastcall mission_custom_artillery(__int64 a1, __int64 *a2)
{
  char v2; // al
  __int64 v3; // rsi
  char v5; // [rsp+2Eh] [rbp-Ah] BYREF
  char v6[9]; // [rsp+2Fh] [rbp-9h] BYREF

  v6[0] = 0;
  v2 = data::get_bool(a2, "enabled", v6);
  v3 = *(game + 0x420);
  v5 = v2;
  if ( *(v3 + 0x3B0) != v2 )
  {
    sub_158CE00(v3 + 0x390, v3, &v5);
    *(v3 + 0x3B0) = v5;
  }
  return 1;
}
