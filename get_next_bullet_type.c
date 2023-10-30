__int64 __fastcall get_next_bullet_type(unsigned int a1)
{
  unsigned int v1; // r14d
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rbp
  unsigned __int8 *v8; // rdi

  v1 = 0xFFFFFFFF;
  if ( LocalUnit )
  {
    if ( (*(LocalUnit + 0x1058) & 0x7000014) == 0 )
    {
      v3 = *(LocalUnit + 0x11D0);
      if ( v3 )
      {
        v4 = 3i64 * a1;
        if ( *(v3 + 8 * v4 + 0x328) )
        {
          v5 = *(v3 + 8 * v4 + 0x318);
          v6 = 8i64 * *(v3 + 8 * v4 + 0x328);
          v7 = 0i64;
          while ( 1 )
          {
            v8 = *(v5 + v7);
            if ( v8 )
            {
              if ( (*(*v8 + 0x108i64))(*(v5 + v7)) )
                break;
            }
            v7 += 8i64;
            if ( v6 == v7 )
              return v1;
          }
          if ( (*(*v8 + 0x108i64))(v8) )
            return v8[0x43D];
        }
      }
    }
  }
  return v1;
}
