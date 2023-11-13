__int64 __fastcall set_show_reticle(char flag)
{
  __int64 ballistics; // rax

  ballistics = game;
  if ( game )
  {
    ballistics = *(game + 0x440);
    if ( ballistics )
      *(ballistics + 0xA5E) = flag;
  }
  return ballistics;
}
