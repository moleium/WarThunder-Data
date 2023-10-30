bool can_request_aircraft()
{
  int v0; // ecx
  bool result; // al

  v0 = **(game + 0x108);
  if ( !LocalUnit )
  {
    if ( v0 == 7 )
      return 0;
    return v0 != 9;
  }
  result = 0;
  if ( v0 != 7 && (*(LocalUnit + 0x1058) & 0x10) == 0 )
    return v0 != 9;
  return result;
}
