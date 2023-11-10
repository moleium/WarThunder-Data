char __fastcall get_units_count(__int64 a1, __int64 a2)
{
  const char *target_type; // rsi
  const char **target_types; // rbx
  __int64 target_type_index; // rdi
  const char *team; // rax
  const char *team_; // rsi
  int team_id; // eax
  char (__stdcall *v10)(); // r15
  const char *unit_type; // rax
  const char *unit_type_; // rsi
  int v13; // r13d
  __int64 UnitCount; // rbx
  __int64 UnitList; // rdi
  __int64 v16; // rbx
  __int64 index; // rbp
  int total_count; // r12d
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rdi
  __int64 Unit; // rsi
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rbp
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rsi
  int team_id_; // [rsp+28h] [rbp-60h]
  char *team_name; // [rsp+30h] [rbp-58h] BYREF
  __int64 v42; // [rsp+38h] [rbp-50h]
  __int64 v43; // [rsp+40h] [rbp-48h]

  team_name = "isAlive";
  target_type = sub_1459B30(a2, "target_type", &team_name);
  team_id_ = 0;
  if ( target_type )
  {
    target_types = &off_44CF850;
    target_type_index = 0i64;
    while ( strcmp(*target_types, target_type) )
    {
      ++target_type_index;
      ++target_types;
      if ( target_type_index == 0x31 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    LODWORD(target_type_index) = 0;
  }
  team_name = "Both";
  team = sub_1459B30(a2, "team", &team_name);
  if ( team )
  {
    team_ = team;
    if ( !strcmp("Both", team) )
    {
      team_id = 0;
      goto LABEL_13;
    }
    if ( !strcmp("A", team_) )
    {
      team_id = 1;
      goto LABEL_13;
    }
    team_id_ = 0;
    if ( !strcmp("B", team_) )
    {
      team_id = 2;
LABEL_13:
      team_id_ = team_id;
    }
  }
  v10 = funcs_7FF717B84E97[target_type_index];
  team_name = "all";
  unit_type = sub_1459B30(a2, "unit_type", &team_name);
  v43 = a1;
  v42 = a2;
  if ( !unit_type || (unit_type_ = unit_type, !strcmp("all", unit_type)) )
  {
LABEL_19:
    UnitCount = *(game + 0x360);
    if ( *(game + 0x360) )
    {
      UnitList = *(game + 0x350);
      if ( team_id_ )
      {
        v16 = 8 * UnitCount;
        index = 0i64;
        total_count = 0;
        do
        {
          v19 = *(UnitList + index);
          if ( v19 && v10() )
            total_count += team_id_ == (*(*(v19 + 0x50) + 0x30i64))(v19 + 0x50);
          index += 8i64;
        }
        while ( v16 != index );
      }
      else
      {
        v25 = 8 * UnitCount;
        v26 = 0i64;
        total_count = 0;
        do
        {
          if ( *(UnitList + v26) )
            total_count += v10();
          v26 += 8i64;
        }
        while ( v25 != v26 );
      }
      goto LABEL_46;
    }
LABEL_45:
    total_count = 0;
    goto LABEL_46;
  }
  v13 = strcmp("land", unit_type_);
  if ( !v13 || !strcmp("naval", unit_type_) )
  {
    v20 = *(game + 0x348);
    if ( !*(game + 0x348) )
      goto LABEL_45;
    v21 = *(game + 0x338);
    if ( team_id_ )
    {
      v22 = 8 * v20;
      v23 = 0i64;
      total_count = 0;
      do
      {
        Unit = *(v21 + v23);
        if ( Unit && (v13 == 0) != (*(Unit + 0x10B0) == 5) && v10() )
          total_count += team_id_ == (*(*(Unit + 0x50) + 0x30i64))(Unit + 0x50);
        v23 += 8i64;
      }
      while ( v22 != v23 );
    }
    else
    {
      v35 = 8 * v20;
      v36 = 0i64;
      total_count = 0;
      do
      {
        v37 = *(v21 + v36);
        if ( v37 && (v13 == 0) != (*(v37 + 0x10B0) == 5) )
          total_count += v10();
        v36 += 8i64;
      }
      while ( v35 != v36 );
    }
  }
  else
  {
    if ( strcmp("armada", unit_type_) )
      goto LABEL_19;
    v27 = *(game + 0x330);
    if ( !*(game + 0x330) )
      goto LABEL_45;
    v28 = *(game + 0x320);
    if ( team_id_ )
    {
      v29 = 8 * v27;
      v30 = 0i64;
      total_count = 0;
      do
      {
        v31 = *(v28 + v30);
        if ( v31 && v10() )
          total_count += team_id_ == *(v31 + 0x1110);
        v30 += 8i64;
      }
      while ( v29 != v30 );
    }
    else
    {
      v38 = 8 * v27;
      v39 = 0i64;
      total_count = 0;
      do
      {
        if ( *(v28 + v39) )
          total_count += v10();
        v39 += 8i64;
      }
      while ( v38 != v39 );
    }
  }
LABEL_46:
  team_name = &szFile;
  v32 = sub_1459B30(v42, "var", &team_name);
  v33 = sub_D43DD0(v43, v32, 2i64, "getTotalUnitsCount");
  if ( v33 )
    *(v33 + 8) = total_count;
  return 1;
}
