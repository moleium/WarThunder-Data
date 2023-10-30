__int64 __fastcall has_gun_stabilizer()
{
  unsigned int v0; // esi
  __int64 v1; // rax
  unsigned __int64 v2; // r14
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 v5; // rax

  if ( LocalUnit && (v1 = *(LocalUnit + 0x11D0)) != 0 && (v2 = *(v1 + 0x2E0), *(v1 + 0x2E0)) )
  {
    v3 = *(v1 + 0x2D0);
    LOBYTE(v0) = 1;
    v4 = 1i64;
    do
    {
      if ( (*(**(v3 + 8 * v4 - 8) + 0x200i64))(*(v3 + 8 * v4 - 8))
        && !*((*(**(v3 + 8 * v4 - 8) + 0x200i64))(*(v3 + 8 * v4 - 8)) + 2) )
      {
        break;
      }
      LOBYTE(v0) = v4 < v2;
      v5 = v4 - v2 + 1;
      ++v4;
    }
    while ( v5 != 1 );
  }
  else
  {
    v0 = 0;
  }
  LOBYTE(v0) = v0 & 1;
  return v0;
}
