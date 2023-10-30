char has_alt_shot_freq()
{
  __int64 v0; // rax
  __int64 v1; // r14
  __int64 v2; // rdi
  __int64 v3; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // rax

  if ( !LocalUnit )
    return 0;
  v0 = *(LocalUnit + 0x11D0);
  if ( !v0 || !*(v0 + 0x2E0) )
    return 0;
  v1 = *(v0 + 0x2D0);
  v2 = 8i64 * *(v0 + 0x2E0);
  v3 = 0i64;
  while ( 1 )
  {
    v4 = *(v1 + v3);
    if ( v4 )
    {
      if ( (*(*v4 + 0x108i64))(*(v1 + v3)) )
      {
        v5 = v4[0x56];
        if ( v5 )
        {
          if ( *(v5 + 0x84) > 0.0 )
            break;
        }
      }
    }
    v3 += 8i64;
    if ( v2 == v3 )
      return 0;
  }
  return 1;
}
