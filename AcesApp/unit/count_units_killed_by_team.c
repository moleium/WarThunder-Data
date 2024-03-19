char __fastcall count_units_killed_by_team(__int64 a1, __int64 a2)
{
  const char *team_name; // rax
  const char *team_name_; // rbx
  __int64 team_id; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v10[0] = &szFile;
  team_name = data::get_str(a2, "team", v10);
  if ( !team_name )
    goto LABEL_5;
  team_name_ = team_name;
  if ( !strcmp("Both", team_name) )
    goto LABEL_5;
  if ( !strcmp("A", team_name_) )
  {
    team_id = 1i64;
  }
  else
  {
    if ( strcmp("B", team_name_) )
    {
LABEL_5:
      team_id = 0i64;
      goto LABEL_6;
    }
    team_id = 2i64;
  }
LABEL_6:
  v10[0] = &szFile;
  v7 = data::get_str(a2, "var", v10);
  v8 = get_dm_var(a1, v7, 2i64, "countUnitsKilledByTeam");
  if ( v8 )
    *(v8 + 8) = *(*(*(game + 0x420) + 0xD0i64) + 4 * team_id);
  return 1;
}
