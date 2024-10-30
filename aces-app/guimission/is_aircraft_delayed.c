bool __fastcall is_aircraft_delayed(unsigned int index)
{
  __int64 game_; // rbx
  struct _RTL_CRITICAL_SECTION *critical_section; // r14
  __int64 unit; // rbx
  __int64 temp1; // rax
  __int64 temp2; // rcx
  __int64 temp3; // rdx
  __int64 unit_; // rax

  game_ = game;
  if ( (*(game + 0xCB) & 1) != 0 )
  {
    critical_section = 0i64;
  }
  else
  {
    critical_section = *(game + 0x620);
    if ( critical_section )
      EnterCriticalSection(*(game + 0x620));
  }
  if ( *(game_ + 0x360) > index )
  {
    unit = *(*(game_ + 0x350) + 8i64 * index);
    if ( !critical_section )
      goto LABEL_16;
    goto LABEL_15;
  }
  temp1 = *(game_ + 0x378);
  if ( !*(game_ + 0x378) )
  {
    unit = 0i64;
    if ( !critical_section )
      goto LABEL_16;
    goto LABEL_15;
  }
  temp2 = *(game_ + 0x368);
  temp3 = 0i64;
  while ( 1 )
  {
    unit = *(temp2 + 8 * temp3);
    if ( (*(unit + 8) & 0x7FF) == index )
      break;
    if ( temp1 == ++temp3 )
    {
      unit = 0i64;
      break;
    }
  }
  if ( critical_section )
LABEL_15:
    LeaveCriticalSection(critical_section);
LABEL_16:
  unit_ = 0i64;
  if ( unit && !*(unit + 0x10B0) )
    unit_ = unit;

  // checks unit flags
  return (*(unit_ + 0x1058) & 0x7000014) != 0;
}
