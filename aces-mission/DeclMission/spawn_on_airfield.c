char __fastcall spawn_on_airfield(__int64 a1, __int64 *a2)
{
  *&v46[0] = &szFile;
  v4 = data::get_str(a2, "runwayName", v46);
  v45 = a1;
  if ( v4 )
  {
    v5 = v4;
    if ( *v4 == 0x40 && *(a1 + 0x50) )
    {
      v6 = *(a1 + 0x40);
      v7 = 0x20i64 * *(a1 + 0x50);
      v8 = 0i64;
      while ( strcmp(*(v6 + v8), v5 + 1) )
      {
        v8 += 0x20i64;
        if ( v7 == v8 )
          goto LABEL_9;
      }
      if ( (*(v6 + v8 + 8) & 0xF) == 1 )
        v5 = *(v6 + v8 + 0x10);
    }
  }
  else
  {
    v5 = 0i64;
  }
LABEL_9:
  v9 = *(game + 0x410);
  v10 = *(v9 + 4);
  if ( !*(v9 + 4) )
  {
LABEL_17:
    if ( override_assertion_handler )
    {
      *(&v46[0] + 1) = v5;
      LODWORD(v46[0]) = 1;
      if ( override_assertion_handler(
             0i64,
             "..\\..\\skyquake\\prog\\mission\\actions.cpp",
             0x1BC6i64,
             "spawnOnAirfield",
             "airfield",
             "Unknown airfield name '%s'",
             v46) )
        __debugbreak();
    }
    return 1;
  }
  v11 = *v9;
  v12 = 0i64;
  while ( 1 )
  {
    v13 = *(v11 + 8 * v12);
    v14 = *(v13 + 0x158);
    v15 = (v14 + 0x1138);
    if ( !v14 )
      v15 = (v13 + 0x238);
    v16 = &szFile;
    if ( *v15 )
      v16 = *v15;
    if ( !strcmp(v16, v5) )
      break;
    if ( v10 == ++v12 )
      goto LABEL_17;
  }
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v17, v18, v19);
  v21 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  UnitList = 0i64;
  v42 = v21;
  v43 = 0i64;
  v22 = *a2;
  v23 = 0xFFFFFFFF;
  if ( !*a2 )
    goto LABEL_34;
  v24 = data::get_name_id("objects", 7ui64);
  v25 = *(v22 + 0x50);
  if ( !v25 )
  {
    v26 = 0;
    if ( !*(v22 + 0x20) )
      goto LABEL_31;
LABEL_29:
    v27 = data::get_name_id(v22, "objects", 7ui64, v24);
    if ( v27 >= 0 )
    {
      v28 = v26 + v27;
LABEL_33:
      v23 = v28;
      goto LABEL_34;
    }
    goto LABEL_31;
  }
  v26 = *(v25 + 0x20);
  if ( *(v22 + 0x20) )
    goto LABEL_29;
LABEL_31:
  if ( v26 )
  {
    v28 = data::get_name_id(*(v22 + 0x50), "objects", 7ui64, v24);
    goto LABEL_33;
  }
LABEL_34:
  v29 = v45;
  sub_CD2950(&UnitList, a2, v23, v45, sub_CD8E60, 0i64);
  if ( v43 )
  {
    v30 = 0;
    do
    {
      Unit = *(UnitList + 8i64 * v30);
      v32 = *(Unit + 0x11A0);
      v33 = *(Unit + 0x1058);
      if ( v32 && (v33 & 0x2000010) == 0 && **(v32 + 0x90) )
      {
        v34 = v43;
      }
      else
      {
        v34 = v43 - 1;
        if ( v43 - 1 > v30 )
        {
          memmove((UnitList + 8i64 * v30), (UnitList + 8i64 * v30 + 8), 8i64 * v43 - (8i64 * v30 + 8));
          v34 = v43 - 1;
        }
        --v30;
        LODWORD(v43) = v34;
      }
      ++v30;
    }
    while ( v30 < v34 );
  }
  sub_CD4300(&UnitList, v29, a2, "object");
  v35 = v43;
  if ( v43 )
  {
    v36 = 0i64;
    do
    {
      if ( (dword_4B1C814 & 4) == 0 || !*(*(UnitList + 8 * v36) + 0x10B8i64) )
      {
        v49 = 0i64;
        memset(v46, 0, sizeof(v46));
        v47 = 0;
        v48 = 0x3F800000i64;
        v50 = 0i64;
        v51 = 0;
        v52 = 0xFFFFFFFFFFFFFFFFui64;
        v37 = *(UnitList + 8 * v36);
        v44 = 0xBF800000;
        v38 = data::set_real(a2, "takeoffInterval", &v44);
        sub_3421C0(v37, v13, v38, 0, 1, 0, v46, 0);
        if ( BYTE14(v50) )
        {
          sub_3384C0(*(UnitList + 8 * v36), v46);
        }
        else if ( !HIBYTE(v50) )
        {
          if ( override_assertion_handler )
          {
            LODWORD(v40) = 0;
            if ( override_assertion_handler(
                   0i64,
                   "..\\..\\skyquake\\prog\\mission\\actions.cpp",
                   0x1BD9i64,
                   "spawnOnAirfield",
                   "spawnInfo.isEnqueuedOk",
                   0i64,
                   0i64,
                   v40) )
              __debugbreak();
          }
        }
        v35 = v43;
      }
      ++v36;
    }
    while ( v36 < v35 );
  }
  if ( UnitList )
    (*(*v42 + 0x40i64))(v42);
  return 1;
}
