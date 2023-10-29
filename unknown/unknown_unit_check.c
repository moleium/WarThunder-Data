bool __fastcall unknown_check_units(_QWORD *a1)
{
  __int64 game_; // rsi
  __int64 v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // r15
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v10; // rax
  __int64 v11; // rax

  game_ = game;
  v3 = *(a1[1] + 8i64);
  if ( (*(game + 0xCB) & 1) != 0 )
  {
    v4 = 0i64;
  }
  else
  {
    v4 = *(game + 0x620);
    if ( v4 )
      EnterCriticalSection(*(game + 0x620));
  }
  if ( *(game_ + 0x360) > v3 )                  // game + 0x360 = Unit Count
  {
    v5 = *(*(game_ + 0x350) + 8 * v3);          // game + 0x350 = Unit List, 8 = iterator
    if ( !v4 )
      goto LABEL_16;
    goto LABEL_15;
  }
  v6 = *(game_ + 0x378);
  if ( !*(game_ + 0x378) )
  {
    v5 = 0i64;
    if ( !v4 )
      goto LABEL_16;
    goto LABEL_15;
  }
  v7 = *(game_ + 0x368);
  v8 = 0i64;
  while ( 1 )
  {
    v5 = *(v7 + 8 * v8);
    if ( v3 == (*(v5 + 8) & 0x7FF) )
      break;
    if ( v6 == ++v8 )
    {
      v5 = 0i64;
      break;
    }
  }
  if ( v4 )
LABEL_15:
    LeaveCriticalSection(v4);
LABEL_16:
  if ( !v5 || *(v5 + 4272) )
  {
    a1[5] = 0i64;
    return 0;
  }
  a1[5] = v5;
  if ( *(v5 + 4272) )
    return 0;
  v10 = *(v5 + 2512);
  a1[6] = v10;
  if ( !v10 )
    return 0;
  v11 = *(v5 + 13264);
  a1[7] = v11;
  return v11 != 0;
}
