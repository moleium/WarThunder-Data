const char *get_hud_unit_type()
{
  __int64 Unit; // rcx
  int UnitType; // eax
  char v2; // cl
  const char *result; // rax
  bool v4; // zf

  if ( !game || qword_4B507E8 && *(qword_4B507E8 + 0x60) || !LocalPlayer || (*(LocalPlayer + 0x1B8) & 0x20) == 0 )
  {
    Unit = LocalUnit;
    if ( LocalUnit )
      goto LABEL_7;
    return &szFile;
  }
  Unit = *&mUnit;
  if ( !*&mUnit )
    return &szFile;
LABEL_7:
  UnitType = *(Unit + 0x10B0);
  if ( UnitType == 3 )
    return "tank";
  if ( UnitType == 5 )
  {
    v2 = (*(*Unit + 0x118i64))(Unit);
    result = "ship";
    if ( v2 )
      return "shipEx";
  }
  else if ( (*(Unit + 0x1083) & 8) != 0 )
  {
    return "helicopter";
  }
  else if ( *(Unit + 0x10B0) )
  {
    if ( UnitType == 0xB )
    {
      return "walker";
    }
    else
    {
      v4 = UnitType == 0xF;
      result = &szFile;
      if ( v4 )
        return "human";
    }
  }
  else
  {
    return "aircraft";
  }
  return result;
}
