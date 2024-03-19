bool has_nightvision()
{
  return LocalUnit && *(LocalUnit + 0x5F8) != 0;
}
