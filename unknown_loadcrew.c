char __fastcall unknown_loadcrew(__int64 Unit, unsigned int unitArmyNo)
{
  const char *v4; // rdi
  char *v5; // rax
  const char *v6; // rbx
  __int64 v7; // rdi
  __int64 game_; // r12
  __int64 hud; // r13
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  const char **v15; // rdx
  const char *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r15
  _QWORD *stealthArmyMask; // rdi
  void *v20; // rbp
  void *v21; // rbp
  int v22; // r8d
  void *v23; // rax
  char result; // al
  unsigned int unitArmyNo_; // [rsp+34h] [rbp-74h]
  int v26; // [rsp+40h] [rbp-68h] BYREF
  __int64 _unitArmyNo; // [rsp+48h] [rbp-60h]
  int v28; // [rsp+50h] [rbp-58h]
  const char *v29; // [rsp+58h] [rbp-50h]

  v4 = &szFile;
  if ( *(*(Unit + 0x1120) + 0x10i64) )
    v4 = *(*(Unit + 0x1120) + 0x10i64);
  v5 = strrchr(v4, 0x2F);
  v6 = v5 + 1;
  if ( !v5 )
    v6 = v4;
  if ( qword_4B507E8 && *(qword_4B507E8 + 0x60) )
  {
    if ( qword_4B50090 > unitArmyNo )
    {
      v7 = *(qword_4B50080 + unitArmyNo);
      if ( v7 )
      {
        sub_12000D0(*(qword_4B50080 + unitArmyNo));
        sub_11FE900(v7);
      }
    }
    goto LABEL_29;
  }
  if ( !(*(*(Unit + 0x50) + 0x18i64))(Unit + 0x50) && *(game + 0x554) != unitArmyNo
    || (game_ = game, hud = *(game + 0x430), v10 = *(hud + 0x718), !*(hud + 0x718)) )
  {
LABEL_29:
    v18 = 0i64;
    goto LABEL_31;
  }
  unitArmyNo_ = unitArmyNo;
  v11 = *(hud + 0x708);
  v12 = 0i64;
  while ( 1 )
  {
    v13 = *(v11 + 8 * v12);
    v14 = *(v13 + 0x70);
    v15 = (*(v13 + 0x28) + 8 * v14);
    if ( *(v13 + 0x38) <= v14 )
      v15 = &qword_4ACF788;
    if ( v14 < 0 )
      v15 = &qword_4ACF788;
    v16 = *v15;
    if ( v16 )
    {
      if ( *v16 && !strcmp(v6, v16) )
        break;
    }
    if ( v10 == ++v12 )
      goto LABEL_30;
  }
  if ( v12 < 0 )
  {
LABEL_30:
    v18 = 0i64;
    unitArmyNo = unitArmyNo_;
    goto LABEL_31;
  }
  unitArmyNo = unitArmyNo_;
  if ( dword_4B1C810 == 2 || dword_4B1C810 == 5 || (v17 = *(game_ + 0x450)) != 0 && *(v17 + 0x5CA) )
    *(hud + 0x8A0) = v12;
  v18 = hud + 0x5E0;
LABEL_31:
  stealthArmyMask = *(Unit + 0x11B0);
  if ( stealthArmyMask )
  {
    *stealthArmyMask = &off_44AB090;
    v20 = stealthArmyMask[0x161];
    if ( v20 )
    {
      sub_1AB250(stealthArmyMask[0x161]);
      _InterlockedAdd(&dword_4B6788C, -((j__msize(v20) + 0xF) >> 4));
      _InterlockedDecrement(&dword_4B67890);
      free(v20);
      stealthArmyMask[0x161] = 0i64;
    }
    stealthArmyMask[0x160] = 0i64;
    stealthArmyMask[0x162] = 0xFFFFFFFFFFFFFFFFui64;
    sub_301550(*(Unit + 0x11B0), *(Unit + 0x10B0), 0i64, (*(Unit + 0x1080) >> 0x1B) & 1);
    if ( !v18 )
      return sub_307F60(*(Unit + 0x11B0), *(HudInfo + 0x56));
  }
  else
  {
    v21 = j__malloc_base(0xE78ui64);
    if ( !v21 )
    {
      do
      {
        if ( !off_4B678A0 || !off_4B678A0(0xE78i64) )
        {
          _unitArmyNo = 0xE78i64;
          v26 = 2;
          LOBYTE(v22) = 1;
          log_err(
            "..\\..\\prog\\engine2\\memory\\dagmem.cpp",
            0x345,
            v22,
            "Not enough memory to alloc %llu bytes",
            &v26,
            1);
        }
        v23 = j__malloc_base(0xE78ui64);
      }
      while ( !v23 );
      v21 = v23;
    }
    _InterlockedAdd(&dword_4B6788C, (j__msize(v21) + 0xF) >> 4);
    _InterlockedIncrement(&dword_4B67890);
    sub_301550(v21, *(Unit + 0x10B0), 0i64, (*(Unit + 0x1080) >> 0x1B) & 1);
    *(Unit + 0x11B0) = v21;
    if ( !v18 )
      return sub_307F60(*(Unit + 0x11B0), *(HudInfo + 0x56));
  }
  result = sub_308460(*(Unit + 0x11B0), v18);
  if ( result )
    return result;
  _unitArmyNo = unitArmyNo;
  v26 = 2;
  v29 = v6;
  v28 = 1;
  logmessage_fmt(1u, "loadCrew - can't init crew playerId %d, name = %s", &v26, 2);
  return sub_307F60(*(Unit + 0x11B0), *(HudInfo + 0x56));
}
