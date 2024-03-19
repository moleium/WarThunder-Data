bool has_laser_designator()
{
  return LocalUnit && !*(LocalUnit + 0x10B0) && *(*(LocalUnit + 0x4160) + 0x3FBi64) != 0;
}
