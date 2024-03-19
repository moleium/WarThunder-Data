float get_mission_time()
{
  __int64 v0; // rax
  __int64 v1; // rcx

  if ( !g_net || *(game + 0xCD) || *(game + 0xCE) )
  {
    v1 = *(game + 0x450);
    if ( v1 && *(v1 + 0x5CA) )
      v0 = v1 + 0x620;
    else
      v0 = game + 0x2E0;
  }
  else
  {
    v0 = g_net + 0x70;
  }
  return *v0;
}
