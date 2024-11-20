void __fastcall mpl::set_connection_failed(__int64 a1, unsigned int a2)
{
  unsigned int v3; // eax
  __int64 v4; // rax
  CHAR *v5; // rax
  __int64 game_; // rax
  unsigned __int64 curr_index; // rbx
  _DWORD *curr_unit; // rdi
  int v9; // eax
  int v10; // ecx
  int v11; // [rsp+20h] [rbp-68h] BYREF
  const char *v12; // [rsp+28h] [rbp-60h]
  int v13; // [rsp+30h] [rbp-58h]
  __int64 v14; // [rsp+38h] [rbp-50h]
  int v15; // [rsp+40h] [rbp-48h]
  CHAR *v16; // [rsp+48h] [rbp-40h]
  CHAR *v17; // [rsp+58h] [rbp-30h] BYREF
  __int64 v18; // [rsp+60h] [rbp-28h]
  int v19; // [rsp+68h] [rbp-20h]

  if ( !*(a1 + 0x3C4) || !*(a1 + 0x65) )
  {
    v3 = 2 * (*(a1 + 0x60) != 0) - 0x7DDDFFFE;
    if ( a2 != 0xFFFFFFFF )
      v3 = a2;
    *(a1 + 0x3C4) = v3;
    sub_6DC600(&v17, v3);
    v4 = *(a1 + 0x3C4);
    v12 = "setConnectionFailed";
    v11 = 1;
    v14 = v4;
    v13 = 2;
    if ( v19 )
      v5 = v17;
    else
      v5 = &szFile;
    v16 = v5;
    v15 = 1;
    logmessage_fmt(0x504C554Du, "%s(%X='%s')", &v11, 3);
    if ( v17 )
      (*(*v18 + 0x40LL))(v18);
    if ( (*(game + 0xCB) & 1) != 0 )
    {
      v12 = "setConnectionFailed";
      v11 = 1;
      logmessage_fmt(0x504C554Du, "%s set all units to delayed state", &v11, 1);
      game_ = game;
      if ( *(game + 0x360) )
      {
        curr_index = 0LL;
        do
        {
          curr_unit = *(*(game_ + 0x350) + 8 * curr_index);
          if ( curr_unit )
          {
            if ( (curr_unit[0x416] & 4) == 0 )
            {
              v9 = curr_unit[0x416];
              v10 = v9 | 4;
              if ( v9 != (v9 | 4) )
              {
                curr_unit[0x416] = v10;
                if ( ((v10 ^ v9) & 0x38C5C2CE) != 0 )
                  unit::set_delayed((curr_unit + 0x40C), curr_unit, (curr_unit + 0x414));
              }
              (*(*curr_unit + 0x340LL))(curr_unit);
            }
            game_ = game;
          }
          ++curr_index;
        }
        while ( curr_index < *(game_ + 0x360) );
      }
      if ( *(a1 + 0x60) )
        aces::end_mission(*(game_ + 0x420), 3LL);
    }
    *(a1 + 0x65) = 1;
  }
}