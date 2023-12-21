void __fastcall guidance_radar(__int64 a1, const char **a2, int a3, _QWORD *a4)
{
  avprintf(a4, 0x10i64, "Guidance: Radar\n", 0i64, 0);
  if ( a3 > 0 && !strcmp(*a2, "autopilot") )
    homing_autopilot((a1 + 0x1B8), (a2 + 1), a3 - 1, a4);
}
