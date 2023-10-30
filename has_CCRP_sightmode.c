bool has_CCRP_sightmode()
{
  bool has_ccrp_sight; // al
  _BYTE *v1; // rcx

  if ( !LocalUnit || *(LocalUnit + 0x10B0) )
    return 0;
  v1 = *(LocalUnit + 0x4160);
  has_ccrp_sight = 1;
  if ( !v1[0x3F5] && !v1[0x3F3] && !v1[0x3F4] )
    return v1[0x3F2] != 0;
  return has_ccrp_sight;
}
