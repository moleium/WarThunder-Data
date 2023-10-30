bool has_vtol_control()
{
  bool result; // al
  unsigned int *v1; // r8
  __int64 v2; // r9
  __int64 v3; // rcx

  if ( !LocalUnit )
    return 0;
  if ( *(LocalUnit + 0x10B0) )
    return 0;
  if ( (*(LocalUnit + 0x1058) & 0x7000014) != 0 )
    return 0;
  v1 = *(*(LocalUnit + 0x9D0) + 0x3AC8i64);
  v2 = *v1;
  if ( v2 <= 0 )
    return 0;
  v3 = 1i64;
  do
  {
    result = *(**&v1[2 * v3] + 0x22Ci64) != 0;
    if ( *(**&v1[2 * v3] + 0x22Ci64) )
      break;
  }
  while ( v2 != v3++ );
  return result;
}
