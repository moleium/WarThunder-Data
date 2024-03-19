char __fastcall mission_debriefing(__int64 a1, __int64 a2)
{
  __int64 game_; // rax
  __int64 current_mission_; // rax
  __int64 v5; // rcx
  __int64 game__; // rax
  __int64 current_mission; // rax
  int v8; // [rsp+20h] [rbp-28h] BYREF
  const char *v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]
  __int64 mission_running; // [rsp+38h] [rbp-10h]

  game_ = game;
  if ( *(game + 0xDD) )
  {
    timed_restart();
    return 1;
  }
  if ( dword_4B1C810 == 7 || byte_4B1C81A )
  {
    *(game + 0x2C0) = 0x3F800000;
    *(game_ + 0x2C4) = 1;
  }
  if ( *(*(game_ + 0x420) + 0xD8i64) == 2 )
  {
    current_mission_ = *(game + 0x420);
    // isMissionSuccessful
    if ( current_mission_ && *(current_mission_ + 0xD8) == 2 && !*(game + 0x2C5) )
    {
      if ( byte_4B1C820 )
      {
        if ( (dword_4B1C814 & 2) != 0 )
        {
          v5 = g_net;
          if ( g_net )
            goto LABEL_18;
        }
      }
      v9 = "debriefing";
      v8 = 1;
      mission_running = 0xD8i64;
      v10 = 2;
      logmessage_fmt(3u, "blackness init %s, %d", &v8, 2);
      game__ = game;
      *(game + 0x2C0) = 0x3F800000;
      *(game__ + 0x2C4) = 1;
    }
  }
  else
  {
    current_mission = *(game + 0x420);
    v9 = "missionDebriefing";
    v8 = 1;
    mission_running = *(current_mission + 0xD8);
    v10 = 2;
    logmessage_fmt(
      0x47495254u,
      "%s ignored due to mission status %d, it can be called only on MISSION_STATUS_SUCCESS",
      &v8,
      2);
  }
  v5 = g_net;
  if ( g_net && (dword_4B1C814 & 2) != 0 )
  {
LABEL_18:
    LOBYTE(a2) = *(*(game + 0x420) + 0xD8i64) != 2;
    onWin_Or_FailMission(v5, a2);
  }
  return 1;
}