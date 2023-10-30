bool has_cannons_bc()
{
  // Has Cannons Ballistic Computer
  bool result; // al
  __int64 v1; // rax
  __int64 v2; // rcx
  _DWORD *v3; // rcx

  if ( !LocalUnit )
    return 0;
  if ( *(LocalUnit + 0x10B0) )
    return 0;
  v1 = *(LocalUnit + 0x11D0);
  if ( !v1 )
    return 0;
  v2 = *(LocalUnit + 0x4160);
  if ( !*(v2 + 0x3EF) && !*(v2 + 0x3F3) )
    return 0;
  v3 = *(v1 + 0x300);
  result = 1;
  if ( !v3[6] && !v3[0xA] )
    return v3[2] != 0;
  return result;
}
