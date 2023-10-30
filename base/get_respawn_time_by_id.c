__int64 __fastcall get_respawn_time_by_id(unsigned int a1)
{
  // Gets Respawn Base Time Left By ID
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rcx
  int v4; // edx

  v1 = *(game + 0x420);
  result = 0xFFFFFFFFi64;
  if ( *(v1 + 0x108) > a1 )
  {
    v3 = *(*(v1 + 0xF8) + 8i64 * a1);
    if ( v3 )
    {
      if ( (*(v3 + 0x52) & 0x1A) == 0 )
      {
        v4 = *(v3 + 0x188);
        if ( v4 > 0 )
          return (v4 - *(v3 + 0x150));
      }
    }
  }
  return result;
}
