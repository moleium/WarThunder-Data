char has_thrust_reverse()
{
  char result; // al
  unsigned int *v1; // rdx
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax
  __int64 v4; // rcx

  if ( !LocalUnit )
    return 0;
  if ( *(LocalUnit + 0x10B0) )
    return 0;
  v1 = *(*(LocalUnit + 0x2E68) + 0x3AC8i64);
  v2 = *v1;
  if ( !*v1 )
    return 0;
  result = 1;
  if ( !*(**(v1 + 1) + 0x234i64) )
  {
    v3 = 0i64;
    while ( v2 - 1 != v3 )
    {
      v4 = **&v1[2 * v3++ + 4];
      if ( *(v4 + 0x234) )
        return v3 < v2;
    }
    v3 = *v1;
    return v3 < v2;
  }
  return result;
}
