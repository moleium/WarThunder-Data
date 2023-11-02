__int64 get_mission_status()
{
  __int64 v0; // rax

  v0 = *(game + 0x420);
  if ( v0 )
    return *(v0 + 0xD8);
  else
    return 1i64;
}
