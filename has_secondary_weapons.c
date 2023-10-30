bool has_secondary_weapons()
{
  __int64 v0; // rcx
  _DWORD *v1; // rcx
  bool result; // al

  v0 = 0i64;
  if ( !*(LocalUnit + 0x10B0) )
    v0 = LocalUnit;
  v1 = *(*(v0 + 0x11D0) + 0x300i64);
  result = 1;
  if ( !v1[0xE] && !v1[0x12] && !v1[0x16] && !v1[0x1A] && !v1[0x1E] && !v1[0x22] )
    return v1[0x26] != 0;
  return result;
}
