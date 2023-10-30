CHAR *__fastcall get_respawn_base_by_id(unsigned int id)
{
  __int64 v1; // rdx
  CHAR *result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = *(game + 0x420);
  result = &szFile;
  if ( *(v1 + 0x108) > id )
  {
    v3 = *(*(v1 + 0xF8) + 8i64 * id);
    if ( v3 )
    {
      if ( (*(v3 + 0x52) & 2) == 0 )
      {
        v4 = *(v3 + 0x58);
        result = &szFile;
        if ( v4 )
          return v4;
      }
    }
  }
  return result;
}
