__int64 __fastcall set_auto_zoom(char a1, char a2)
{
  __int64 result; // rax
  __int64 ballistics; // r8
  int v4; // xmm0_4

  result = game;
  if ( game )
  {
    ballistics = *(game + 0x440);
    if ( ballistics )
    {
      if ( a2 )
      {
        *(ballistics + 0xA71) = a1;
        if ( a1 )
        {
LABEL_5:
          v4 = LODWORD(Y);
LABEL_8:
          result = *(result + 0x440);
          *(result + 0x968) = v4;
          return result;
        }
      }
      else
      {
        *(ballistics + 0xA70) = a1;
        if ( a1 )
          goto LABEL_5;
      }
      v4 = screenScaleFactor;
      goto LABEL_8;
    }
  }
  return result;
}
