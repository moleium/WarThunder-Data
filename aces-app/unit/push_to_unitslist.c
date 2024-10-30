void __fastcall push_to_unitslist(__int64 game, __int64 Unit, __int64 a3, __int64 a4)
{
  if ( !a3 )
    goto LABEL_5;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, Unit, a3, a4);
  if ( !*(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x158i64) )
  {
    add_delayed_callback(
      &qword_4B71860,
      0i64,
      sub_56CCE0,
      Unit,
      "DelayedActionCB @\n\t..\\..\\skyquake\\prog\\main\\app.cpp(4124):");
  }
  else
  {
LABEL_5:
    if ( (*(::game + 0xCB) & 1) != 0 )
    {
      v7 = 0i64;
    }
    else
    {
      v7 = *(game + 0x620);
      if ( v7 )
        EnterCriticalSection(*(game + 0x620));
    }
    UnitList = *(game + 0x350);
    UnitCount = *(game + 0x360);
    if ( !*(game + 0x360) )
      goto LABEL_16;
    v10 = 0i64;
    while ( *(UnitList + v10) != Unit )
    {
      v11 = UnitList + v10 + 8;
      v10 += 8i64;
      if ( v11 >= UnitList + 8 * UnitCount )
        goto LABEL_16;
    }
    if ( (v10 & 0x400000000i64) != 0 )
    {
LABEL_16:
      if ( (*(Unit + 0x10B0) - 9) >= 2u )
      {
        v12 = *(Unit + 8) & 0x7FF;
        if ( UnitCount >= v12 )
        {
          if ( UnitCount > v12 && UnitList && !*(UnitList + 8 * v12) )
          {
            *(UnitList + 8 * v12) = Unit;
            sub_56BE50(game, Unit, a3);
          }
          else
          {
            if ( *(game + 0x364) == UnitCount )
            {
              if ( UnitCount )
              {
                if ( UnitCount > 0x1FF )
                  v31 = ((UnitCount + 1) >> 1) + UnitCount;
                else
                  v31 = 2 * UnitCount;
              }
              else
              {
                v31 = 2;
              }
              sub_FC0D0(game + 0x350, v31);
              UnitCount = *(game + 0x360);
              UnitList = *(game + 0x350);
            }
            *(game + 0x360) = UnitCount + 1;
            *(UnitList + 8 * UnitCount) = Unit;
            sub_56BE50(game, Unit, a3);
            if ( byte_4B1C328 )
            {
              if ( *(game + 0x360) >= 0x5DDu )
              {
                if ( qword_4B12198 )
                {
                  out_of_order_unit = 0x5DCi64;
                  v32 = 2;
                  if ( qword_4B12198(
                         0i64,
                         "..\\..\\skyquake\\prog\\main\\app.cpp",
                         0x1045i64,
                         "pushToUnitsList",
                         "unitsList.size() <= SAFE_UNITS_COUNT",
                         "Units count must be less than %d",
                         &v32) )
                    __debugbreak();
                }
              }
            }
          }
          v17 = *(game + 0x378);
          if ( v17 )
          {
            index = 0;
            while ( 1 )
            {
              outOfOrderUnitsList = *(game + 0x368);
              currIndex = index;
              unit_unk = *(*(outOfOrderUnitsList + 8i64 * index) + 8i64) & 0x7FF;
              if ( *(game + 0x360) == unit_unk )
              {
                if ( *(game + 0x364) == unit_unk )
                {
                  if ( unit_unk )
                  {
                    if ( unit_unk > 0x1FFu )
                      v25 = ((unit_unk + 1) >> 1) + unit_unk;
                    else
                      v25 = 2 * unit_unk;
                  }
                  else
                  {
                    v25 = 2;
                  }
                  sub_FC0D0(game + 0x350, v25);
                  LODWORD(unit_unk) = *(game + 0x360);
                }
                UnitList_ = *(game + 0x350);
                *(game + 0x360) = unit_unk + 1;
                *(UnitList_ + 8i64 * unit_unk) = *(outOfOrderUnitsList + 8 * currIndex);
                sub_56BE50(game, *(*(game + 0x368) + 8 * currIndex), v16);
                out_of_order_unit = *(*(*(game + 0x368) + 8 * currIndex) + 8i64);
                v32 = 2;
                logmessage_fmt(0x20505041u, "adding unit with uid 0x%x to unitsList from outOfOrderUnitsList", &v32, 1);
                v23 = *(game + 0x368);
                v24 = (*(game + 0x378) - 1);
                *(game + 0x378) = v24;
                *(v23 + 8 * currIndex) = *(v23 + 8 * v24);
                v17 = *(game + 0x378);
                index = 0xFFFFFFFF;
                if ( !v17 )
                  break;
              }
              if ( ++index >= v17 )
                goto LABEL_46;
            }
            v26 = *(game + 0x368);
            v27 = *(game + 0x370);
            *(game + 0x368) = 0i64;
            *(game + 0x378) = 0i64;
            if ( v26 )
              (*(*v27 + 0x40i64))(v27);
          }
LABEL_46:
          v28 = *(Unit + 0x10B8);
          if ( v28 )
          {
            LOBYTE(v16) = 1;
            sub_11FF640(v28, Unit, v16);
            if ( *(game + 0x554) == *(Unit + 0x1118) )
              sub_6DB8A0();
          }
          if ( *(game + 0xCC) )
          {
            if ( ::game && (v29 = *(::game + 0x470)) != 0i64 )
            {
              sub_4BDA00(*v29);
              sub_4BDA00(v29[1]);
            }
            else
            {
              logmessage_fmt(1u, "ERROR - no app or unit detector", 0i64, 0);
            }
          }
        }
        else
        {
          v13 = *(game + 0x378);
          v14 = *(game + 0x37C);
          if ( v14 == v13 )
          {
            if ( *(game + 0x37C) )
            {
              if ( v14 > 0x1FF )
                v30 = ((v14 + 1) >> 1) + v14;
              else
                v30 = 2 * v14;
            }
            else
            {
              v30 = 2;
            }
            sub_FC0D0(game + 0x368, v30);
            v13 = *(game + 0x378);
          }
          v15 = *(game + 0x368);
          *(game + 0x378) = v13 + 1;
          *(v15 + 8i64 * v13) = Unit;
          out_of_order_unit = *(Unit + 8);
          v32 = 2;
          logmessage_fmt(0x20505041u, "cannot add unit with uid 0x%x, pushing it to outOfOrderUnitsList", &v32, 1);
        }
      }
    }
    if ( v7 )
      LeaveCriticalSection(v7);
  }
}