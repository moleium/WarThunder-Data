__int64 __fastcall has_rockets_bc(__int64 a1, __int64 a2)
{
  // Has Rockets Ballistic Computer
  unsigned int v2; // esi
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 i; // rbx
  __int64 v9; // rcx

  if ( LocalUnit
    && !*(LocalUnit + 0x10B0)
    && (v4 = *(LocalUnit + 0x11D0)) != 0
    && ((v5 = *(LocalUnit + 0x4160), *(v5 + 0x3EE)) || *(v5 + 0x3F2))
    && *(v4 + 0x310) >= 4u )
  {
    v6 = *(*(v4 + 0x300) + 0x38i64);
    v2 = 0;
    if ( v6 > 0 )
    {
      v7 = v6;
      for ( i = 0i64; i != v7; ++i )
      {
        v9 = *(*(*(v4 + 0x300) + 0x30i64) + 8 * i);
        LOBYTE(a2) = 1;
        v2 += (*(*v9 + 0x88i64))(v9, a2);
      }
      LOBYTE(v2) = v2 != 0;
    }
  }
  else
  {
    return 0;
  }
  return v2;
}
