bool has_CCIP_sightmode()
{
  bool has_ccip_sight; // al
  _BYTE *v1; // rcx

  if ( !LocalUnit || *(LocalUnit + 0x10B0) )
    return 0;
  v1 = *(LocalUnit + 0x4160);
  has_ccip_sight = 1;
  if ( !v1[0x3F1] && !v1[0x3EF] && !v1[0x3F0] )
    return v1[0x3EE] != 0;
  return has_ccip_sight;
}
