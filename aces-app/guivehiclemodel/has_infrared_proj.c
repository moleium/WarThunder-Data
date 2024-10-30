bool has_infrared_proj()
{
  return LocalUnit && *(LocalUnit + 0x10B0) == 3 && *(LocalUnit + 0x38C8) != 0;
}
