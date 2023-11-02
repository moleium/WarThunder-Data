__int64 get_mp_respawn_countdown()
{
  int v0; // r9d
  __int64 result; // rax

  v0 = **(game + 0x108);
  if ( LocalPlayer && qword_4B507E8 && *(LocalPlayer + 0x668) == 6 && (dword_4B1C814 & 4) != 0 )
    return (*(*(game + 0x498) + 0x218i64) - *(qword_4B507E8 + 0xC8));
  result = 0xFFFFFC18i64;
  if ( (v0 - 6) < 4 || v0 == 0xB )
  {
    if ( !LocalPlayer )
      return 0xFFFFFC18i64;
    result = *(LocalPlayer + 0x458);
    if ( result <= 0 )
      return 0xFFFFFC18i64;
  }
  return result;
}
