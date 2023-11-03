__int64 __fastcall clan_request_log(char *a1, __int64 a2)
{
  int v3; // ecx
  __int64 result; // rax

  if ( a1 && *a1 )
  {
    v3 = sub_1EC440(a1, "%lld");
    result = 0xFFFFFFFFi64;
    if ( a2 && v3 == 1 )
      return sub_F6F370(*(game + 0x430) + 0x5E0i64, 0xFFFFFFFFFFFFFFFFui64, a2);
  }
  else
  {
    if ( a2 )
      return sub_F6F370(*(game + 0x430) + 0x5E0i64, 0xFFFFFFFFFFFFFFFFui64, a2);
    return 0xFFFFFFFFi64;
  }
  return result;
}
