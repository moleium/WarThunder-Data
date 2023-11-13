void __fastcall unknown_playerinfo(__int64 a1, __int64 a2)
{
  __int64 LocalUnit_; // rdi
  _WORD *PlayerInfo; // rbx
  _QWORD *v6; // rax
  __int16 v7; // cx
  unsigned int v8; // edx

  LocalUnit_ = LocalUnit;
  if ( LocalUnit )
  {
    PlayerInfo = *(LocalUnit + 0x10B8);
    if ( PlayerInfo )
    {
      v6 = sub_11FE900(*(LocalUnit + 0x10B8));
      if ( v6 )
      {
        v7 = *(LocalUnit_ + 8) & 0x7FF;
        v8 = 0;
        if ( PlayerInfo[0x160] == v7
          || (v8 = 1, PlayerInfo[0x161] == v7)
          || (v8 = 2, PlayerInfo[0x162] == v7)
          || (v8 = 3, PlayerInfo[0x163] == v7) )
        {
          if ( v8 < *(v6 + 0x4EC) )
          {
            *(a2 + 0x1A) = 1;
            if ( !*(LocalUnit_ + 0x10B0) )
            {
              if ( *(*(LocalUnit_ + 0x4160) + 0x309i64) )
              {
                *(a2 + 0x18) = *(HudInfo + 0x2DE);
                goto LABEL_15;
              }
              if ( *(LocalUnit_ + 0x2E78) == 2 )
              {
                *(a2 + 0x18) = *(HudInfo + 0xB6) == 2;
                goto LABEL_15;
              }
            }
            *(a2 + 0x18) = 0;
LABEL_15:
            *(a2 + 0x19) = 0;
            *(a2 + 0x1C) = 0;
            *(a2 + 0x3C) = 0;
            *(a2 + 0x4C) = 0;
            *(a2 + 0x40) = 0;
            *(a2 + 0x44) = 0xFFFFFFFFFFFFFFFFui64;
            *a2 = (*(*a1 + 0x38i64))(a1);
            *(a2 + 8) = 0i64;
          }
        }
      }
    }
  }
}
