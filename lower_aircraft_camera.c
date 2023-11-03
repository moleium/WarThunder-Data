__int64 __fastcall lower_aircraft_camera(char a1)
{
  __int64 ballistics; // rax

  ballistics = *(game + 0x440);
  *(ballistics + 0x150) = a1;
  return ballistics;
}
