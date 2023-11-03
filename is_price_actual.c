bool is_price_actual()
{
  __int64 v0; // rdx
  const char *v1; // rcx
  bool result; // al
  const char *v3; // rax
  const char *v4; // rdx

  v0 = *(game + 0x430);
  v1 = *(v0 + 0xC60);
  result = 1;
  if ( v1 && *v1 )
  {
    v3 = *(v0 + 0xEB10);
    v4 = &szFile;
    if ( v3 )
      v4 = v3;
    return strcmp(v1, v4) == 0;
  }
  return result;
}
