bool has_countermeasure_fc()
{
  return LocalUnit && !*(LocalUnit + 0x10B0) && *(*(*(LocalUnit + 0x11D0) + 0x300i64) + 0xE8i64) != 0;
  // Unit + 0x11D0 Player Weapon Info
}
