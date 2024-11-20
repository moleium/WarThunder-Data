char __fastcall mission_completed(__int64 a1, __int64 *a2)
{
  __int64 current_mission_; // rcx
  char start_replay_camera; // al
  char disable_replay_camera; // bl
  __int64 current_mission; // rdi
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]

  if ( *(game + 0xDD) )
  {
    timed_restart();
  }
  else
  {
    current_mission_ = *(game + 0x420);
    if ( *(current_mission_ + 0xD8) == 1 ) // isMissionRunning
    {
      if ( should_fail_mission(current_mission_) )
      {
        logmessage_fmt(0x47495254u, "missionCompleted: we're about to fail mission, ignoring trigger", 0i64, 0, v8, v9);
      }
      else
      {
        LOBYTE(v8) = 0;
        start_replay_camera = data::get_bool(a2, "startReplayCamera", &v8);
        LOBYTE(v8) = 1;
        disable_replay_camera = start_replay_camera ^ 1;
        missionHasContinueOption = (start_replay_camera ^ 1) & data::get_bool(a2, "timer", &v8);
        LOBYTE(v8) = 1;
        data::get_bool(a2, "showCompleteMessage", &v8);
        LOBYTE(v8) = 1;
        data::get_bool(a2, "playCompleteMusic", &v8);
        v8 = 0i64;
        missionTriggerAfterComplete = data::get_str(a2, "afterComplete", &v8);
        current_mission = *(game + 0x420);
        LODWORD(v8) = 6;
        sub_145A390(a2, "debriefingTimer", &v8);
        aces::end_mission(current_mission, 2i64);
        if ( !disable_replay_camera )
          set_replay_camera(*(game + 0x440));
      }
    }
    else
    {
      v9 = *(current_mission_ + 0xD8);
      LODWORD(v8) = 2;
      logmessage_fmt(0x47495254u, "missionCompleted: app->mission->status is already %d", &v8, 1, v8, v9);
    }
  }
  return 1;
}