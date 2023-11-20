void __fastcall waypoint(__int64 a1, __int64 a2)
{
  __int64 game_; // rbx
  __int64 v4; // rax
  _DWORD *v5; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  unsigned __int64 v8; // r8
  unsigned int v9; // edi
  _QWORD *v10; // rdx
  unsigned int v11; // ecx
  unsigned __int64 v12; // rax
  _QWORD *v13; // rax

  if ( *(a2 + 0x18) != 0xF096 )
    return;
  if ( qword_4B507E8 && !*(qword_4B507E8 + 0x60) )
  {
    game_ = game;
    if ( *(a1 + 0x154) < 0 )
      goto LABEL_8;
  }
  else
  {
    game_ = game;
    v4 = *(game + 0x450);
    if ( !v4 || !*(v4 + 0x5CA) )
      return;
    if ( *(a1 + 0x154) < 0 )
      goto LABEL_8;
  }
  v5 = (a1 + 0x154);
  sub_5B5C80(*(game_ + 0x418), a1 + 0x154);
  *v5 = 0xFFFFFFFF;
LABEL_8:
  v6 = *(game_ + 0x3C0);
  if ( *(game_ + 0x3C0) )
  {
    v7 = *(game_ + 0x3B0);
    v8 = &v7[v6];
    v9 = 0;
    v10 = v7;
    while ( *v10 != a1 )
    {
      ++v10;
      ++v9;
      if ( v10 >= v8 )
        goto LABEL_21;
    }
    if ( (v9 & 0x80000000) == 0 )
    {
      v11 = v6 - 1;
      if ( v11 > v9 )
      {
        memmove(&v7[v9], &v7[v9 + 1], v8 - &v7[v9 + 1]);
        v11 = *(game_ + 0x3C0) - 1;
      }
      *(game_ + 0x3C0) = v11;
      if ( v11 > v9 )
      {
        v12 = v9;
        do
        {
          *(*(*(game_ + 0x3B0) + 8 * v12) + 8i64) = v12 | 0x3800;
          ++v12;
        }
        while ( v12 < *(game_ + 0x3C0) );
      }
    }
  }
LABEL_21:
  v13 = (*(*off_4B678B0 + 0x18i64))(off_4B678B0, 0x10i64);
  *v13 = &off_44B2A00;
  v13[1] = a1;
  add_delayed_callback(&qword_4B71860, v13, 0i64, 0i64, "DelayedAction @\n\t..\\..\\skyquake\\prog\\main\\waypoint.cpp(64):");
}
