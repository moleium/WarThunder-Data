void __fastcall unknown_setarmy(__int64 Player, char a2, __int64 a3)
{
  unsigned __int8 v5; // bl
  __int64 SomeWhatUnit; // rsi
  unsigned __int8 AlsoUnitInfo; // al
  __int64 v8; // rdx
  _QWORD *OwnedUnit; // rsi
  unsigned __int8 v10; // bl
  unsigned __int8 UnitInfo; // al
  __int64 v12; // rdx
  _QWORD *Unit; // rax
  unsigned __int8 v14; // bl
  unsigned __int8 v15; // al
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // [rsp+20h] [rbp-68h] BYREF
  const char *v19; // [rsp+28h] [rbp-60h]
  int v20; // [rsp+30h] [rbp-58h]
  __int64 v21; // [rsp+38h] [rbp-50h]
  int v22; // [rsp+40h] [rbp-48h]
  __int64 v23; // [rsp+48h] [rbp-40h]
  int v24; // [rsp+50h] [rbp-38h]
  __int64 v25; // [rsp+58h] [rbp-30h]

  if ( *(Player + 0x208) != a2 )
  {
    *(Player + 0x80) |= 4u;
    LOBYTE(v18) = a2;
    sub_158CE00(Player + 0x1E8, Player, &v18);
    v5 = v18;
    *(Player + 0x208) = v18;
    SomeWhatUnit = *(Player + 0x720);
    if ( SomeWhatUnit )
    {
      AlsoUnitInfo = *(SomeWhatUnit + 0x1110);
      if ( AlsoUnitInfo != v5 )
      {
        if ( !*(SomeWhatUnit + 0x10B0) )
        {
          v8 = *(SomeWhatUnit + 8) & 0x7FF;
          v19 = "setArmy";
          v18 = 1;
          v21 = v8;
          v20 = 2;
          v23 = AlsoUnitInfo;
          v22 = 2;
          v25 = v5;
          v24 = 2;
          dg_debug(3u, "%s fm %d army %d -> %d", &v18, 4);
          AlsoUnitInfo = *(SomeWhatUnit + 0x1110);
        }
        LOBYTE(v18) = v5;
        if ( AlsoUnitInfo != v5 )
        {
          sub_158CE00(SomeWhatUnit + 0x10F0, SomeWhatUnit, &v18);
          *(SomeWhatUnit + 0x1110) = v18;
        }
      }
    }
    OwnedUnit = *(Player + 0x6F8);
    if ( OwnedUnit )
    {
LABEL_9:
      v10 = *(Player + 0x208);
      UnitInfo = *(OwnedUnit + 0x1110);
      if ( UnitInfo != v10 )
      {
        if ( !*(OwnedUnit + 0x858) )
        {
          v12 = OwnedUnit[1] & 0x7FF;
          v19 = "setArmy";
          v18 = 1;
          v21 = v12;
          v20 = 2;
          v23 = UnitInfo;
          v22 = 2;
          v25 = v10;
          v24 = 2;
          dg_debug(3u, "%s fm %d army %d -> %d", &v18, 4);
          UnitInfo = *(OwnedUnit + 0x1110);
        }
        LOBYTE(v18) = v10;
        if ( UnitInfo != v10 )
        {
          sub_158CE00(OwnedUnit + 0x21E, OwnedUnit, &v18);
          *(OwnedUnit + 0x1110) = v18;
        }
      }
      goto LABEL_29;
    }
    if ( *(Player + 0x6F0) != 0xFFFF && (*(Player + 0x668) != 4 || *(game + 0xCA)) )
    {
      if ( off_4B69C70 )
      {
        Unit = off_4B69C70();
        *(Player + 0x6F8) = Unit;
        if ( !Unit )
          goto LABEL_29;
        OwnedUnit = Unit;
        if ( Unit[0x217] != Player )
        {
          // unit_assign_parent_entity(DagorUnit* unit, DagorEntity* entity
          (*(*Unit + 0x190i64))(Unit, Player);
          OwnedUnit = *(Player + 0x6F8);
        }
        v14 = *(Player + 0x208);
        v15 = *(OwnedUnit + 0x1110);
        if ( v15 != v14 )
        {
          if ( !*(OwnedUnit + 0x858) )
          {
            v16 = OwnedUnit[1] & 0x7FF;
            v19 = "setArmy";
            v18 = 1;
            v21 = v16;
            v20 = 2;
            v23 = v15;
            v22 = 2;
            v25 = v14;
            v24 = 2;
            dg_debug(3u, "%s fm %d army %d -> %d", &v18, 4);
            v15 = *(OwnedUnit + 0x1110);
          }
          LOBYTE(v18) = v14;
          if ( v15 != v14 )
          {
            sub_158CE00(OwnedUnit + 0x21E, OwnedUnit, &v18);
            *(OwnedUnit + 0x1110) = v18;
          }
          OwnedUnit = *(Player + 0x6F8);
          if ( !OwnedUnit )
            goto LABEL_29;
        }
        goto LABEL_9;
      }
      *(Player + 0x6F8) = 0i64;
    }
LABEL_29:
    v17 = *(Player + 0x208);
    v19 = *(Player + 8);
    v18 = 2;
    v21 = v17;
    v20 = 2;
    v23 = a3;
    v22 = 1;
    dg_debug(0x504C554Du, "[%d].setTeam(%d) from %s", &v18, 3);
  }
}
