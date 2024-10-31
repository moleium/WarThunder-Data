void on_artillery_close()
{
  if ( is_in_artillery_map )
  {
    is_in_artillery_map = 0;
    if ( qword_4B173B8 )
      gui_call_interop(qword_4B173B8 + 0x380);
    if ( curTacticalMap )
    {
      *(curTacticalMap + 0x3B78) = 0;
      v1 = "false";
      v0 = 1;
      logmessage_fmt(0x4D434154u, "tactical map: bind to player = %s", &v0, 1);
      if ( curTacticalMap )
      {
        *(curTacticalMap + 0x3B77) = 0;
        v1 = 0i64;
        v0 = 2;
        logmessage_fmt(0x4D434154u, "tactical map: mode %d", &v0, 1);
      }
    }
  }
}