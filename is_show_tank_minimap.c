bool is_show_tank_minimap()
{
  return LocalUnit && *(LocalUnit + 0x14C0) != 0;
}
