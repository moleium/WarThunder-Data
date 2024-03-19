bool __fastcall is_aircraft_active(unsigned int index)
{
  __int64 game_; // rbx
  struct _RTL_CRITICAL_SECTION *result; // r14
  __int64 Unit; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 Unit_; // rax

  game_ = game;
  if ( (*(game + 0xCB) & 1) != 0 )
  {
    result = 0i64;
  }
  else
  {
    result = *(game + 0x620);
    if ( result )
      EnterCriticalSection(*(game + 0x620));
  }
  if ( *(game_ + 0x360) > index )
  {
    Unit = *(*(game_ + 0x350) + 8i64 * index);
    if ( !result )
      goto LABEL_16;
LABEL_15:
    LeaveCriticalSection(result);
    goto LABEL_16;
  }
  v5 = *(game_ + 0x378);
  if ( *(game_ + 0x378) )
  {
    v6 = *(game_ + 0x368);
    v7 = 0i64;
    while ( 1 )
    {
      Unit = *(v6 + 8 * v7);
      if ( (*(Unit + 8) & 0x7FF) == index )
        break;
      if ( v5 == ++v7 )
      {
        Unit = 0i64;
        break;
      }
    }
    if ( result )
      goto LABEL_15;
  }
  else
  {
    Unit = 0i64;
    if ( result )
      goto LABEL_15;
  }
LABEL_16:
  Unit_ = 0i64;
  if ( !*(Unit + 0x10B0) )
    Unit_ = Unit;
  return *(Unit_ + 0x10A8) < 2u;
}
