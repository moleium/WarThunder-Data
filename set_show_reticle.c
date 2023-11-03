__int64 __fastcall set_show_reticle(char flag)
{
  __int64 result; // rax

  result = game;
  if ( game )
  {
    result = *(game + 0x440);
    if ( result )
      *(result + 0xA5E) = flag;
  }
  return result;
}
