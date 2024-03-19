bool has_cockpit()
{
  bool result; // al

  if ( !LocalUnit || *(LocalUnit + 0x10B0) )
    return 0;
  result = 1;
  if ( !*(LocalUnit + 0x2DD8) )
    return *(LocalUnit + 0x1E13) != 0;
  return result;
}
