char has_primary_weapons()
{
  __int64 LocalUnit_; // rcx
  _DWORD *v1; // rdx
  char result; // al

  LocalUnit_ = 0i64;
  if ( !*(LocalUnit + 0x10B0) )
    LocalUnit_ = LocalUnit;
  v1 = *(*(LocalUnit_ + 0x11D0) + 0x300i64);
  result = 1;
  if ( !v1[2] && !v1[6] && !v1[0xA] && ((*(LocalUnit_ + 0x1083) & 8) == 0 || !v1[0x46]) )
    return 0;
  return result;
}
