bool has_baydoor()
{
  bool has_bay_door; // al

  has_bay_door = 0;
  if ( LocalUnit && !*(LocalUnit + 0x10B0) && !*(HudInfo + 0x450) )
    return *(*(LocalUnit + 0x9D0) + 0x568Fi64) != 0;
  // Unit + 0x9D0 Air Movement
  // Unit + 0x10B0 Unit Type (Plane, Tank, etc.)
  return has_bay_door;
}
