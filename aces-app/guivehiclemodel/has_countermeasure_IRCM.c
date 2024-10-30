bool has_countermeasure_IRCM()
{
  return LocalUnit && *(LocalUnit + 0x1278) != 0;
}
