__int64 has_forced_crosshair()
{
  __int64 v0; // rcx
  __int64 result; // rax

  if ( !*&mUnit )
    return 0i64;
  v0 = *(*&mUnit + 0x1120i64);
  if ( !v0 || !*(v0 + 0x2D1) )
    return 0i64;
  result = *(*&mUnit + 0x10B0i64);
  LOBYTE(result) = result == 3 || result == 0xF;
  return result;
}
