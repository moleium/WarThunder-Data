void __fastcall guidance_laser(__int64 a1, const char **a2, int a3, _QWORD *a4)
{
  avprintf(a4, 0x20i64, "Guidance: Laser\n", 0i64, 0);
  if ( a3 > 0 && !strcmp(*a2, "autopilot") )
    homing_autopilot((a1 + 0x80), (a2 + 1), a3 - 1, a4);
}
