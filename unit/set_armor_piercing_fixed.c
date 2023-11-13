__int64 __fastcall set_armor_piercing_fixed(char flag)
{
  __int64 ballistics; // rax

  ballistics = game;
  if ( game )
  {
    ballistics = *(game + 0x440);
    if ( ballistics )
      *(ballistics + 0xA5D) = flag;
  }
  return ballistics;
}
