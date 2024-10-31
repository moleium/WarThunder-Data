__int64 __fastcall hud_messages(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  if ( cur_hud_crosshair )
    sub_FE4450(cur_hud_crosshair);
  fire_event(a1 + 0x5A8, "HudMessageHide", &data::get_block_by_name, a4);
  fire_event(a1 + 0x5A8, "WatchedHeroChanged", &data::get_block_by_name, v6);
  sub_C414B0(0i64, 0i64, 0i64);
  *(a1 + 0xEC0) = *(a1 + 0xEB8);
  if ( !a2 )
  {
    Unit = LocalUnit;
    if ( LocalUnit )
      goto LABEL_5;
LABEL_11:
    type_name = &szFile;
    v13 = &szFile;
    goto LABEL_23;
  }
  Unit = *&mUnit;
  if ( !*&mUnit )
    goto LABEL_11;
LABEL_5:
  UnitType = *(Unit + 0x10B0);
  if ( UnitType == 3 )
  {
    type_name = "tank";
  }
  else if ( UnitType == 5 )
  {
    type_name = "ship";
    if ( (*(*Unit + 0x118i64))(Unit) )
      type_name = "shipEx";
  }
  else if ( (*(Unit + 0x1083) & 8) != 0 )
  {
    type_name = "helicopter";
  }
  else if ( *(Unit + 0x10B0) )
  {
    if ( UnitType == 0xB )
    {
      type_name = "walker";
    }
    else
    {
      type_name = &szFile;
      if ( UnitType == 0xF )
        type_name = "human";
    }
  }
  else
  {
    type_name = "aircraft";
  }
  v13 = &szFile;
  if ( *(*(Unit + 0x1120) + 0x10i64) )
    v13 = *(*(Unit + 0x1120) + 0x10i64);
LABEL_23:
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v7, v8, v9);
  v15 = gui_script_strings + 0x230;
  if ( *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x158i64) )
  {
    sub_B36480(v15, type_name, v8, v9);
    sub_B36480(gui_script_strings + 0x5A90, v13, v16, v17);
  }
  else
  {
    Unit_ = Unit;
    v18 = (*(*v15 + 8i64))(v15);
    v19 = *v18;
    v20 = *(v18 + 8);
    v21 = (*(*(gui_script_strings + 0xB52) + 8i64))(gui_script_strings + 0x5A90);
    v22 = *v21;
    v23 = *(v21 + 8);
    v24 = j__malloc_base(0x68ui64);
    if ( !v24 )
    {
      do
      {
        if ( !off_4B678A0 || !off_4B678A0(0x68i64) )
        {
          v52 = 0x68i64;
          v51 = 2;
          LOBYTE(v25) = 1;
          log_err(
            "..\\..\\prog\\engine2\\memory\\dagmem.cpp",
            0x345,
            v25,
            "Not enough memory to alloc %llu bytes",
            &v51,
            1);
        }
        v26 = j__malloc_base(0x68ui64);
      }
      while ( !v26 );
      v24 = v26;
    }
    _InterlockedAdd(&dword_4B6788C, (j__msize(v24) + 0xF) >> 4);
    _InterlockedIncrement(&dword_4B67890);
    v27 = (v23 + 0x38);
    if ( v22 != 0x18000010 )
      v27 = 0i64;
    Src = v27;
    v28 = (v20 + 0x38);
    *v24 = &off_44CC120;
    v29 = off_4B678C8;
    v24[1] = 0i64;
    v24[2] = v29;
    v24[3] = 0i64;
    if ( v19 != 0x18000010 )
      v28 = 0i64;
    v48 = v22;
    if ( v19 == 0x18000010 && *v28 )
    {
      v30 = v13;
      v31 = strlen(v28);
      v32 = v31 + 1;
      if ( v31 == 0xFFFFFFFF )
      {
        v33 = 0i64;
      }
      else
      {
        v34 = 0x10i64;
        if ( v32 >= 0x11 )
          v34 = v32;
        v33 = (*(*v29 + 0x18i64))(v29, v34);
        v24[1] = v33;
        *(v24 + 7) = v34;
      }
      *(v24 + 6) = v32;
      memmove(v33, v28, v32);
      v29 = off_4B678C8;
      v13 = v30;
      v22 = v48;
    }
    v24[4] = 0i64;
    v24[5] = v29;
    v24[6] = 0i64;
    if ( *type_name )
    {
      v35 = strlen(type_name);
      v36 = v35 + 1;
      if ( v35 == 0xFFFFFFFF )
      {
        v37 = 0i64;
      }
      else
      {
        v38 = 0x10i64;
        if ( v36 >= 0x11 )
          v38 = v36;
        v37 = (*(*v29 + 0x18i64))(v29, v38);
        v24[4] = v37;
        *(v24 + 0xD) = v38;
      }
      *(v24 + 0xC) = v36;
      memmove(v37, type_name, v36);
      v29 = off_4B678C8;
      v22 = v48;
    }
    v24[7] = 0i64;
    v24[8] = v29;
    v24[9] = 0i64;
    if ( v22 == 0x18000010 && *Src )
    {
      v39 = strlen(Src);
      v40 = v39 + 1;
      if ( v39 == 0xFFFFFFFF )
      {
        v41 = 0i64;
      }
      else
      {
        v42 = 0x10i64;
        if ( v40 >= 0x11 )
          v42 = v40;
        v41 = (*(*v29 + 0x18i64))(v29, v42);
        v24[7] = v41;
        *(v24 + 0x13) = v42;
      }
      *(v24 + 0x12) = v40;
      memmove(v41, Src, v40);
      v29 = off_4B678C8;
    }
    v24[0xA] = 0i64;
    v24[0xB] = v29;
    v24[0xC] = 0i64;
    if ( *v13 )
    {
      v43 = strlen(v13);
      v44 = v43 + 1;
      if ( v43 == 0xFFFFFFFF )
      {
        v45 = 0i64;
      }
      else
      {
        v46 = 0x10i64;
        if ( v44 >= 0x11 )
          v46 = v44;
        v45 = (*(*v29 + 0x18i64))(v29, v46);
        v24[0xA] = v45;
        *(v24 + 0x19) = v46;
      }
      *(v24 + 0x18) = v44;
      memmove(v45, v13, v44);
    }
    add_delayed_callback(
      &qword_4B71860,
      v24,
      0i64,
      0i64,
      "DelayedAction @\n\t..\\..\\skyquake\\prog\\gui\\hud\\hud.cpp(1644):");
    Unit = Unit_;
  }
  *(a1 + 0x1C94) = 0;
  result = *(a1 + 0x1C78);
  *(a1 + 0x1C80) = result;
  *(a1 + 0x1C90) = 0xBF800000;
  if ( Unit )
  {
    if ( *(Unit + 0x4E8) )
      return sub_B36A90();
  }
  return result;
}
