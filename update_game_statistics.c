__int64 __fastcall update_game_statistics(__int64 stats)
{
  __int64 hud; // rax
  __int64 v3; // r8
  __int64 v4; // rax
  unsigned int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // ebx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rdx
  unsigned int negative_award; // edi
  char *player_name_; // rdi
  struct _RTL_CRITICAL_SECTION *v13; // rbx
  __int64 player_name_index; // rsi
  char player_name[104]; // [rsp+30h] [rbp-68h] BYREF

  sub_18EB840();
  if ( qword_4AE5640 )
  {
    hud = *(game + 0x430);
    v3 = *(hud + 0xCFD8)
       + *(hud + 0xCFC0)
       + *(hud + 0xCF30)
       + *(hud + 0xCFBC)
       + *(hud + 0xCFB8)
       + *(hud + 0xCFB0)
       + *(hud + 0xCF48)
       + *(hud + 0xCEE0)
       + *(hud + 0xCEF8)
       - *(hud + 0xCF10)
       - *(hud + 0xCFB4)
       - (*(hud + 0xCFA8)
        + *(hud + 0xCF90))
       - *(hud + 0xCFF0);
    v4 = *(hud + 0xCFF8);
    if ( v3 >= v4 )
      v3 = v4;
  }
  else
  {
    v3 = 0i64;
  }
  sub_18ECA80(stats, &word_48E6928, v3);
  v5 = (*(**(*(game + 0x430) + 0xCEA8i64) + 0x28i64))(*(*(game + 0x430) + 0xCEA8i64));
  sub_18ECA80(stats, "exp", v5);
  v6 = 0i64;
  sub_18ECA80(stats, "prestige", 0i64);
  v7 = *(*(game + 0x430) + 0xD424i64);
  if ( xmmword_4AD8F60 > v7 )
  {
    v8 = *(*(&xmmword_4AD8F50 + 1) + 4 * v7);
    v9 = v8 >> SBYTE2(dword_4AD8F88);
    v10 = (*(&xmmword_4AD8F70 + 1) + 0x10 * v9);
    if ( v9 == qword_4AD8F80 )
      v10 = &xmmword_4AD8F60 + 1;
    v6 = *v10 + (v8 & ~(0xFFFFFFFF << SBYTE2(dword_4AD8F88)));
  }
  sub_18ECE80(stats, "country", v6);
  sub_18ECA80(stats, "pilotId", *(*(game + 0x430) + 0xD428i64));
  sub_18ECA80(stats, "aircrafts", *(*(game + 0x430) + 0x5F8i64));
  sub_18ECA80(stats, "gold", *(*(game + 0x430) + 0xD8C8i64));
  if ( qword_4B507E8 && byte_4B1C323 )
  {
    sub_18ECA80(stats, "cur_award_positive", *(*(game + 0x430) + 0xE978i64));
    negative_award = *(*(game + 0x430) + 0xE9E0i64);
  }
  else
  {
    negative_award = 0;
    sub_18ECA80(stats, "cur_award_positive", 0i64);
  }
  sub_18ECA80(stats, "cur_award_negative", negative_award);
  player_name_ = player_name;
  strncpy(player_name, "ur_username", 0x41ui64);
  player_name[0x40] = 0;
  v13 = lpCriticalSection;
  if ( lpCriticalSection )
    EnterCriticalSection(lpCriticalSection);
  player_name_index = qword_4A79308;
  if ( v13 )
    LeaveCriticalSection(v13);
  if ( player_name_index == 0xFFFFFFFFFFFFFFFFui64 )
    player_name_ = &szFile;
  sub_18ECE80(stats, "name", player_name_);
  return stats;
}
