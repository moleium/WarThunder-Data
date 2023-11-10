__int64 clan_get_exp()
{
  _DWORD *v0; // rsi
  int v1; // eax
  __int64 result; // rax

  v0 = *(game + 0x430);
  v1 = sub_4D1E40(v0 + 0x178);
  if ( v1 <= v0[0x35E0] )
    v1 = v0[0x35E0];
  result = (v0[0x35DF] + v1 - v0[0x35DE]);
  if ( result <= 0 )
    return 0i64;
  return result;
}
