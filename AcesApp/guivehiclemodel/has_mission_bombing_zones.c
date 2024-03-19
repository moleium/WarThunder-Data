bool has_mission_bombing_zones()
{
  __int64 v0; // rax

  v0 = *(game + 0x420);
  return v0 && *(v0 + 0x150) != 0;
}
