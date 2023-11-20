void __fastcall add_unit(__int64 game, __int64 Unit, __int64 a3, __int64 a4)
{
  _QWORD *ThreadLocalStoragePointer; // rcx
  struct _RTL_CRITICAL_SECTION *v7; // r13
  __int64 UnitList; // rax
  __int64 UnitCount; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 UnitList_; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  _QWORD *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rdx
  int v32; // [rsp+40h] [rbp-58h] BYREF
  __int64 v33; // [rsp+48h] [rbp-50h]

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
                v31 = 2i64;
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
                  v33 = 0x5DCi64;
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
            v18 = 0;
            while ( 1 )
            {
              v19 = *(game + 0x368);
              v20 = v18;
              v21 = *(*(v19 + 8i64 * v18) + 8i64) & 0x7FF;
              if ( *(game + 0x360) == v21 )
              {
                if ( *(game + 0x364) == v21 )
                {
                  if ( v21 )
                  {
                    if ( v21 > 0x1FFu )
                      v25 = ((v21 + 1) >> 1) + v21;
                    else
                      v25 = 2 * v21;
                  }
                  else
                  {
                    v25 = 2i64;
                  }
                  sub_FC0D0(game + 0x350, v25);
                  LODWORD(v21) = *(game + 0x360);
                }
                UnitList_ = *(game + 0x350);
                *(game + 0x360) = v21 + 1;
                *(UnitList_ + 8i64 * v21) = *(v19 + 8 * v20);
                sub_56BE50(game, *(*(game + 0x368) + 8 * v20), v16);
                v33 = *(*(*(game + 0x368) + 8 * v20) + 8i64);
                v32 = 2;
                dg_debug(0x20505041u, "adding unit with uid 0x%x to unitsList from outOfOrderUnitsList", &v32, 1);
                v23 = *(game + 0x368);
                v24 = (*(game + 0x378) - 1);
                *(game + 0x378) = v24;
                *(v23 + 8 * v20) = *(v23 + 8 * v24);
                v17 = *(game + 0x378);
                v18 = 0xFFFFFFFF;
                if ( !v17 )
                  break;
              }
              if ( ++v18 >= v17 )
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
              dg_debug(1u, "ERROR - no app or unit detector", 0i64, 0);
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
              v30 = 2i64;
            }
            sub_FC0D0(game + 0x368, v30);
            v13 = *(game + 0x378);
          }
          v15 = *(game + 0x368);
          *(game + 0x378) = v13 + 1;
          *(v15 + 8i64 * v13) = Unit;
          v33 = *(Unit + 8);
          v32 = 2;
          dg_debug(0x20505041u, "cannot add unit with uid 0x%x, pushing it to outOfOrderUnitsList", &v32, 1);
        }
      }
    }
    if ( v7 )
      LeaveCriticalSection(v7);
  }
}
