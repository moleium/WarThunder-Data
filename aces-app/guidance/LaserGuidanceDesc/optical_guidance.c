int __fastcall optical_guidance(__int64 a1, const char **a2, int a3, _QWORD *a4)
{
  int result; // eax

  result = avprintf(a4, 0x20i64, "Guidance: Optical\n", 0i64, 0);
  if ( a3 > 0 )
  {
    result = strcmp(*a2, "autopilot");
    if ( !result )
      return homing_autopilot::processCommand(a1 + 0xF8, a2 + 1, (a3 - 1), a4);
  }
  return result;
}