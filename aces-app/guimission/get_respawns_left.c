__int64 get_respawns_left()
{
  unsigned int respawns_left; // esi
  __int64 result; // rax
  int score_; // ecx
  int score; // [rsp+20h] [rbp-18h] BYREF
  __int64 respawns_left_; // [rsp+28h] [rbp-10h]

  respawns_left = 0xFFFFFFFF;
  if ( !g_net || !LocalPlayer || (dword_4B1C814 & 4) == 0 )
    return respawns_left;
  if ( byte_4B1C331 )
  {
    respawns_left = *(LocalPlayer + 0xA60);
    respawns_left_ = *(LocalPlayer + 0xA60);
LABEL_8:
    score = 2;
    logmessage_fmt(3u, "[USS] get_respawns_left : score = %d", &score, 1);
    return respawns_left;
  }
  if ( byte_4B1C332 )
  {
    respawns_left = *(*(game + 0x420) + 0x140i64 * *(LocalPlayer + 0x208) + 0x550);
    respawns_left_ = respawns_left;
    goto LABEL_8;
  }
  if ( mission_max_respawns <= 0 )
    return respawns_left;
  score_ = *(LocalPlayer + 0x998) + mission_max_respawns - *(LocalPlayer + 0x8A8);
  result = 0i64;
  if ( score_ > 0 )
    return score_;
  return result;
}
