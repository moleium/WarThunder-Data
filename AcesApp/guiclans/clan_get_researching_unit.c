CHAR *clan_get_researching_unit()
{
  CHAR *result; // rax

  result = &szFile;
  if ( *(*(game + 0x430) + 0xD770i64) )
    return *(*(game + 0x430) + 0xD770i64);
  return result;
}
