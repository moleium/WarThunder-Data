__int64 __fastcall set_armor_piercing_fixed(char flag)
{
  __int64 result; // rax

  result = game;
  if ( game )
  {
    result = *(game + 0x440);
    if ( result )
      *(result + 0xA5D) = flag;
  }
  return result;
}
