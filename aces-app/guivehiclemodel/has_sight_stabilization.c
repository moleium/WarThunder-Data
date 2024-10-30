bool has_sight_stabilization()
{
  return LocalUnit && !*(LocalUnit + 0x10B0) && *(*(LocalUnit + 0x4160) + 0x3F8i64) != 0;
}
