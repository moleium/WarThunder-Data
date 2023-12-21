char __fastcall mission_completed(__int64 a1, __int64 *a2)
{
  __int64 v2; // rcx
  char v5; // al
  char v6; // bl
  __int64 v7; // rdi
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]

  if ( *(game + 0xDD) )
  {
    sub_D2B320();
  }
  else
  {
    v2 = *(game + 0x420);
    if ( *(v2 + 0xD8) == 1 )
    {
      if ( sub_C7D180(v2) )
      {
        dg_debug(0x47495254u, "missionCompleted: we're about to fail mission, ignoring trigger", 0i64, 0, v8, v9);
      }
      else
      {
        LOBYTE(v8) = 0;
        v5 = data::get_bool(a2, "startReplayCamera", &v8);
        LOBYTE(v8) = 1;
        v6 = v5 ^ 1;
        byte_4B1D300 = (v5 ^ 1) & data::get_bool(a2, "timer", &v8);
        LOBYTE(v8) = 1;
        data::get_bool(a2, "showCompleteMessage", &v8);
        LOBYTE(v8) = 1;
        data::get_bool(a2, "playCompleteMusic", &v8);
        v8 = 0i64;
        qword_4B1D2F8 = data::get_str(a2, "afterComplete", &v8);
        v7 = *(game + 0x420);
        LODWORD(v8) = 6;
        data::set_int(a2, "debriefingTimer", &v8);
        sub_C7AC60(v7, 2i64);
        if ( !v6 )
          sub_4765B0(*(game + 0x440));
      }
    }
    else
    {
      v9 = *(v2 + 0xD8);
      LODWORD(v8) = 2;
      dg_debug(0x47495254u, "missionCompleted: app->mission->status is already %d", &v8, 1, v8, v9);
    }
  }
  return 1;
}
