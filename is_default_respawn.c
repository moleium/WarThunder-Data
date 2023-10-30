__int64 __fastcall is_default_respawn(unsigned int a1)
{
  // Returns if default respawn base
  __int64 v1; // rax
  __int64 v2; // rax
  __int16 v3; // ax

  v1 = *(game + 0x420);
  if ( *(v1 + 0x108) <= a1 )
    return 0i64;
  v2 = *(*(v1 + 0xF8) + 8i64 * a1);
  if ( !v2 )
    return 0i64;
  v3 = *(v2 + 0x52);
  if ( (v3 & 2) != 0 )
    return 0i64;
  else
    return v3 >> 7;
}
