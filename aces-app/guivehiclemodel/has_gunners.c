bool has_gunners()
{
  return LocalUnit && !*(LocalUnit + 0x10B0) && *(*(LocalUnit + 0x11D0) + 0x266i64) != 0;
}
