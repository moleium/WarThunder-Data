char __fastcall need_target_for_lock(__int64 a1, int a2, char a3)
{
  __int64 ballistics; // rax
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 Unit; // rbx
  int v10; // ebp
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // edx
  bool v19; // si
  __int64 v20; // rcx
  __int64 v22; // [rsp+28h] [rbp-40h] BYREF

  LOBYTE(ballistics) = HudInfo;
  if ( !*(HudInfo + 0x20) )
  {
    if ( !LocalUnit )
      goto LABEL_45;
    LODWORD(ballistics) = *(LocalUnit + 0x10B0);
    if ( ballistics > 0xF )
      goto LABEL_45;
    v18 = 0x897E;
    if ( !_bittest(&v18, ballistics) || *(LocalUnit + 0x10A8) > 1u || !*(*(LocalUnit + 0x2280) + 0x461i64) )
      goto LABEL_45;
    if ( ballistics == 5 )
    {
      if ( !*(HudInfo + 0x400) )
        goto LABEL_45;
    }
    else if ( !*(HudInfo + 0x401) )
    {
      goto LABEL_45;
    }
  }
  ballistics = *(game + 0x440);
  v7 = *(ballistics + 0x620);
  v8 = LocalUnit;
  if ( !LocalUnit )
  {
LABEL_45:
    *(a1 + 0x84) = 0xFFFFFFFF;
    return ballistics;
  }
  Unit = *(*(game + 0x440) + 0x768i64);
  v22 = 0i64;
  if ( !Unit
    || (v10 = (*(*(LocalUnit + 0x50) + 0x30i64))(LocalUnit + 0x50),
        v11 = (*(*(Unit + 0x50) + 0x30i64))(Unit + 0x50),
        (dword_4B1C814 & 0x80000) == 0)
    && v11 == v10
    && (dword_4B1C814 & 0x1000000) == 0
    || (v12 = *(Unit + 0x11C8)) == 0
    || !sub_4BA770(v12, v8)
    || (v15 = *(Unit + 0x1020), v15 >= 0) && v15 != *(v8 + 8) )
  {
    Unit = sub_623C60(0, a2, 0, 1, &v22);
  }
  if ( *(v8 + 0x4E8) )
  {
    if ( *(*(game + 0x440) + 0x620i64) == Unit
      || !*(v8 + 0x10B0) && Unit && (v16 = *(Unit + 0x10B0), v16 <= 0xF) && (v17 = 0x897E, _bittest(&v17, v16)) )
    {
      LOBYTE(ballistics) = 0;
      Unit = 0i64;
      goto LABEL_31;
    }
  }
  LOBYTE(ballistics) = Unit != 0;
  if ( a3 || !Unit )
  {
LABEL_31:
    v19 = v7 != 0;
    if ( !v7 && !ballistics && ballistics_A68_qword )
    {
      if ( !*(v8 + 0x10B0) )
        fire_event(ballistics_A68_qword + 0x5A8, "hint:need_target_for_lock", &data::get_block_by_name, v14);
      v19 = 0;
    }
    goto LABEL_37;
  }
  if ( *(Unit + 0x10B0) )
  {
    v19 = v7 != 0;
LABEL_37:
    unknown_lock_target(*(game + 0x440), Unit, v13, v14);
    if ( v22 )
      *(*(game + 0x440) + 0x630i64) = *(v22 + 0x40);
    ballistics = cur_hud_crosshair;
    if ( (*(HudInfo + 0x35) || *(*(game + 0x430) + 0x3C9i64)) && v19 && *(v8 + 0x10B0) == 5 )
    {
      v20 = *(*(game + 0x440) + 0x620i64);
      if ( v20 )
      {
        if ( v20 == v7 )
        {
          *(cur_hud_crosshair + 0x3DF8) = 1;
          *(ballistics + 0x3E0C) = 0x3F800000;
          *(ballistics + 0x3DFA) = 1;
        }
      }
    }
    goto LABEL_45;
  }
  return ballistics;
}
