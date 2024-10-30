__int64 has_ballistic_computer()
{
  if ( LocalUnit && !*(LocalUnit + 0x10B0) )
    return is_cc_sight_available(*(game + 0x440) + 0x910i64);
  else
    return 0i64;
}