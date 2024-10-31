char __fastcall mission_mark_as_respawn_point(__int64 a1, __int64 *a2)
{
  v2 = a2;
  Str2[0] = 0;
  v3 = 1;
  if ( !data::get_bool(a2, "isGroundZone", Str2) )
  {
    Str2[0] = 0;
    v3 = data::get_bool(v2, "isAirfield", Str2);
  }
  Str2[0] = 0;
  v4 = data::get_bool(v2, "isUnit", Str2);
  Str2[0] = 0;
  v563 = data::get_bool(v2, "isIndividual", Str2);
  Str2[0] = 0;
  v569 = data::get_bool(v2, "isStrictSpawn", Str2);
  Str2[0] = 0;
  v567 = data::get_bool(v2, "forceRandomAreaSpawn", Str2);
  Str2[0] = 1;
  v566 = data::get_bool(v2, "isBotAllowed", Str2);
  Str2[0] = 0;
  v571 = data::get_bool(v2, "separate_fuel_time", Str2);
  *Str2 = 0xFFFFFFFF;
  v609 = data::set_int(v2, "disableAfter", Str2);
  Str2[0] = 0;
  v570 = data::get_bool(v2, "modular_airfield", Str2);
  Str2[0] = 0;
  v5 = data::get_bool(v2, "onlyOnePlayerPerSpawnPoint", Str2);
  Str2[0] = 0;
  v568 = data::get_bool(v2, "resetStrictSpawnIndex", Str2);
  *Str2 = 0i64;
  v6 = data::get_str(v2, "respawnAirBackup", Str2);
  if ( v3 && v4 )
  {
    if ( override_assertion_handler )
    {
      *&Str2[8] = &missionMarkAsReSpawnPoint;
      *Str2 = 1;
      if ( override_assertion_handler(
             0i64,
             "..\\..\\skyquake\\prog\\mission\\actions.cpp",
             0x1149i64,
             &missionMarkAsReSpawnPoint,
             "0",
             "%s isGroundZone AND isUnit is invalid flag combination",
             Str2) )
        __debugbreak();
    }
    return 1;
  }
  Str = v6;
  v559 = v4;
  v557 = v3;
  *Str2 = "Both";
  v7 = data::get_str(v2, "team", Str2);
  if ( !v7 || (v8 = v7, !strcmp("Both", v7)) )
  {
    v573 = 0;
  }
  else if ( !strcmp("A", v8) )
  {
    v573 = 1;
  }
  else
  {
    v573 = 0;
    if ( !strcmp("B", v8) )
      v573 = 2;
  }
  Str2[0] = 0;
  v565 = data::get_bool(v2, "canSpawnOnNeutral", Str2);
  *Str2 = 0i64;
  v9 = data::get_str(v2, "loc_name", Str2);
  v558 = v5;
  if ( v9 )
  {
    v10 = v9;
    if ( *v9 == 0x40 && *(a1 + 0x50) )
    {
      v11 = v9;
      v12 = v9 + 1;
      v13 = *(a1 + 0x40);
      v14 = 0x20i64 * *(a1 + 0x50);
      v15 = 0i64;
      while ( strcmp(*(v13 + v15), v12) )
      {
        v15 += 0x20i64;
        if ( v14 == v15 )
        {
          v10 = v11;
          goto LABEL_22;
        }
      }
      v10 = v11;
      if ( (*(v13 + v15 + 8) & 0xF) == 1 )
        v10 = *(v13 + v15 + 0x10);
    }
  }
  else
  {
    v10 = 0i64;
  }
LABEL_22:
  Str2[0] = 0;
  LOBYTE(v16) = data::get_bool(v2, "useExisting", Str2);
  v584 = 0;
  if ( v10 && v16 )
  {
    LOBYTE(v16) = *v10 != 0;
    v584 = v16;
  }
  Str2[0] = 0;
  v564 = data::get_bool(v2, "forceCreate", Str2);
  Str2[0] = 1;
  v562 = data::get_bool(v2, "showOnMap", Str2);
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v572 = v10;
  if ( *(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
  {
    v21 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    v574 = 0i64;
    v575 = v21;
    v576 = 0i64;
LABEL_28:
    v589 = 0i64;
    v590 = v21;
    v591 = 0i64;
    goto LABEL_29;
  }
  _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v17, v18, v19);
  v22 = *(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v21 = *(v22 + 0x160);
  v574 = 0i64;
  v575 = v21;
  v576 = 0i64;
  if ( *(v22 + 1) )
    goto LABEL_28;
  _dyn_tls_on_demand_init(v22, v17, v18, v19);
  v40 = *(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v21 = *(v40 + 0x160);
  v589 = 0i64;
  v590 = v21;
  v591 = 0i64;
  if ( !*(v40 + 1) )
  {
    _dyn_tls_on_demand_init(v40, v17, v18, v19);
    v21 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  }
LABEL_29:
  v586 = 0i64;
  v587 = v21;
  v588 = 0i64;
  v23 = *v2;
  v24 = 0xFFFFFFFF;
  if ( !*v2 )
    goto LABEL_39;
  v25 = data::get_name_id("target", 6ui64);
  v26 = *(v23 + 0x50);
  if ( v26 )
  {
    v27 = *(v26 + 0x20);
    if ( !*(v23 + 0x20) )
      goto LABEL_36;
  }
  else
  {
    v27 = 0;
    if ( !*(v23 + 0x20) )
      goto LABEL_36;
  }
  v28 = data::get_name_id(v23, "target", 6ui64, v25);
  if ( v28 >= 0 )
  {
    v29 = v27 + v28;
    goto LABEL_38;
  }
LABEL_36:
  if ( !v27 )
    goto LABEL_39;
  v29 = data::get_name_id(*(v23 + 0x50), "target", 6ui64, v25);
LABEL_38:
  v24 = v29;
LABEL_39:
  v30 = *(v2 + 0x14);
  v31 = *(v2 + 0xC);
  LOBYTE(v17) = v31 == 0 || v24 < 0;
  v560 = v2;
  if ( v30 == 0xFFFFFFFFi64 )
  {
    if ( v17 )
      goto LABEL_84;
    v33 = **(v2 + 0x18);
    v17 = &v33[8 * v31];
    v34 = v33;
    while ( (*v34 & 0xFFFFFF) != v24 )
    {
      v34 += 8;
      if ( v34 >= v17 )
        goto LABEL_84;
    }
  }
  else
  {
    if ( v17 )
      goto LABEL_84;
    v32 = *v2 + v30;
    v33 = (v32 + 0x90);
    v17 = v32 + 8 * v31 + 0x90;
    v34 = (v32 + 0x90);
    while ( (*v34 & 0xFFFFFF) != v24 )
    {
      v34 += 8;
      if ( v34 >= v17 )
        goto LABEL_84;
    }
  }
  if ( ((v34 - v33) & 0x400000000i64) != 0 )
    goto LABEL_84;
  v35 = *v2;
  v36 = 0xFFFFFFFF;
  if ( !*v2 )
    goto LABEL_66;
  v37 = data::get_name_id("spawnOffset", 0xBui64);
  v38 = *(v35 + 0x50);
  if ( !v38 )
  {
    v39 = 0;
    if ( !*(v35 + 0x20) )
      goto LABEL_63;
LABEL_61:
    v41 = data::get_name_id(v35, "spawnOffset", 0xBui64, v37);
    if ( v41 >= 0 )
    {
      v42 = v39 + v41;
LABEL_65:
      v36 = v42;
      goto LABEL_66;
    }
    goto LABEL_63;
  }
  v39 = *(v38 + 0x20);
  if ( *(v35 + 0x20) )
    goto LABEL_61;
LABEL_63:
  if ( v39 )
  {
    v42 = data::get_name_id(*(v35 + 0x50), "spawnOffset", 0xBui64, v37);
    goto LABEL_65;
  }
LABEL_66:
  v43 = *(v2 + 0x14);
  v44 = *(v2 + 0xC);
  LOBYTE(v17) = v44 == 0 || v36 < 0;
  if ( v43 == 0xFFFFFFFFi64 )
  {
    if ( v17 )
      goto LABEL_84;
    v46 = **(v2 + 0x18);
    v17 = &v46[8 * v44];
    v47 = v46;
    while ( (*v47 & 0xFFFFFF) != v36 )
    {
      v47 += 8;
      if ( v47 >= v17 )
        goto LABEL_84;
    }
  }
  else
  {
    if ( v17 )
      goto LABEL_84;
    v45 = *v2 + v43;
    v46 = (v45 + 0x90);
    v17 = v45 + 8 * v44 + 0x90;
    v47 = (v45 + 0x90);
    while ( (*v47 & 0xFFFFFF) != v36 )
    {
      v47 += 8;
      if ( v47 >= v17 )
        goto LABEL_84;
    }
  }
  if ( ((v47 - v46) & 0x400000000i64) == 0 )
  {
    if ( (v559 | v557) == 1 )
    {
      if ( override_assertion_handler )
      {
        *&Str2[8] = &missionMarkAsReSpawnPoint;
        *Str2 = 1;
        if ( override_assertion_handler(
               0i64,
               "..\\..\\skyquake\\prog\\mission\\actions.cpp",
               0x11DDi64,
               &missionMarkAsReSpawnPoint,
               &unk_489A044,
               "spawnOffset works only for areas(!groundZone && !isUnit)") )
          __debugbreak();
      }
    }
    if ( *(v2 + 0x14) == 0xFFFFFFFF )
      v48 = sub_14604F0(v2, "target", v18);
    else
      v48 = sub_14606A0(v2, "target", v18);
    v350 = v48;
    if ( v48 )
    {
      if ( *v48 == 0x40 && *(a1 + 0x50) )
      {
        v351 = *(a1 + 0x40);
        v352 = 0x20i64 * *(a1 + 0x50);
        v353 = 0i64;
        while ( strcmp(*(v351 + v353), v350 + 1) )
        {
          v353 += 0x20i64;
          if ( v352 == v353 )
            goto LABEL_606;
        }
        if ( (*(v351 + v353 + 8) & 0xF) == 1 )
          v350 = *(v351 + v353 + 0x10);
      }
    }
    else
    {
      v350 = 0i64;
    }
LABEL_606:
    v354 = *v560;
    v355 = 0xFFFFFFFF;
    if ( *v560 )
    {
      v356 = data::get_name_id("spawnOffset", 0xBui64);
      v357 = *(v354 + 0x50);
      if ( v357 )
        v358 = *(v357 + 0x20);
      else
        v358 = 0;
      if ( *(v354 + 0x20) && (v362 = data::get_name_id(v354, "spawnOffset", 0xBui64, v356), v362 >= 0) )
      {
        v363 = v358 + v362;
      }
      else
      {
        if ( !v358 )
          goto LABEL_626;
        v363 = data::get_name_id(*(v354 + 0x50), "spawnOffset", 0xBui64, v356);
      }
      v355 = v363;
    }
LABEL_626:
    v364 = *(v560 + 0x14);
    v365 = *(v560 + 0xC);
    v366 = v365 == 0 || v355 < 0;
    if ( v364 == 0xFFFFFFFFi64 )
    {
      if ( v366 )
        goto LABEL_839;
      v367 = **(v560 + 0x18);
      v368 = v367;
      while ( (*v368 & 0xFFFFFF) != v355 )
      {
        v368 += 2;
        if ( v368 >= v367 + 8 * v365 )
          goto LABEL_839;
      }
    }
    else
    {
      if ( v366 )
        goto LABEL_839;
      v367 = *v560 + v364 + 0x90;
      v368 = v367;
      while ( (*v368 & 0xFFFFFF) != v355 )
      {
        v368 += 2;
        if ( v368 >= v364 + *v560 + 8 * v365 + 0x90 )
          goto LABEL_839;
      }
    }
    v369 = (v368 - v367) >> 3;
    if ( v365 > v369 )
    {
      if ( v364 == 0xFFFFFFFF )
        v370 = **(v560 + 0x18);
      else
        v370 = v364 + *v560 + 0x90;
      v485 = HIBYTE(*(v370 + 8i64 * v369));
      if ( v485 == 1 )
      {
        if ( v364 == 0xFFFFFFFF )
          v505 = sub_14604F0(v560, "spawnOffset", v367);
        else
          v505 = sub_14606A0(v560, "spawnOffset", v367);
        v527 = v505;
        v528 = v505 == 0;
        v529 = a1;
        if ( v528 )
        {
          v527 = 0i64;
        }
        else if ( *v527 == 0x40 && *(a1 + 0x50) )
        {
          v530 = *(a1 + 0x40);
          v531 = 0x20i64 * *(a1 + 0x50);
          v532 = 0i64;
          while ( strcmp(*(v530 + v532), v527 + 1) )
          {
            v532 += 0x20i64;
            if ( v531 == v532 )
            {
              v529 = a1;
              goto LABEL_922;
            }
          }
          v529 = a1;
          if ( (*(v530 + v532 + 8) & 0xF) == 1 )
            v527 = *(v530 + v532 + 0x10);
        }
LABEL_922:
        v533 = *(v529 + 0x50);
        if ( *(v529 + 0x50) )
        {
          v534 = *(v529 + 0x40) + 8i64;
          while ( strcmp(*(v534 - 8), v527) )
          {
            v534 += 0x20i64;
            if ( !--v533 )
              goto LABEL_926;
          }
          v535 = (*v534 & 0xF) == 5;
        }
        else
        {
LABEL_926:
          v534 = 0i64;
          v535 = 0;
        }
        if ( !v535 )
        {
          if ( override_assertion_handler )
          {
            *&Str2[8] = &missionMarkAsReSpawnPoint;
            *Str2 = 1;
            if ( override_assertion_handler(
                   0i64,
                   "..\\..\\skyquake\\prog\\mission\\actions.cpp",
                   0x11E9i64,
                   &missionMarkAsReSpawnPoint,
                   "variable && variable->type == DataBlock::TYPE_POINT3",
                   "%s: Invalid variable type(expected point3)",
                   Str2) )
              __debugbreak();
          }
        }
        v486 = *(v534 + 0x10);
        v488 = *(v534 + 8);
        v487 = *(v534 + 0xC);
        goto LABEL_843;
      }
      if ( v485 == 5 )
      {
        if ( v364 == 0xFFFFFFFF )
          sub_1462400(v560, Str2, "spawnOffset");
        else
          sub_1462550(v560, Str2, "spawnOffset");
        v488 = *Str2;
        v487 = *&Str2[4];
        v486 = *&Str2[8];
        goto LABEL_843;
      }
    }
LABEL_839:
    v486 = 0.0;
    if ( override_assertion_handler )
    {
      *&Str2[8] = &missionMarkAsReSpawnPoint;
      *Str2 = 1;
      if ( override_assertion_handler(
             0i64,
             "..\\..\\skyquake\\prog\\mission\\actions.cpp",
             0x11EDi64,
             &missionMarkAsReSpawnPoint,
             "false",
             "%s: invalid spawnOffset parameter type. Must be point3 or string",
             Str2) )
        __debugbreak();
    }
    v487 = 0.0;
    v488 = 0.0;
LABEL_843:
    *Str2 = "world";
    v489 = data::get_str(v560, "spawnOffsetSpace", Str2);
    v490 = 1;
    if ( strcmp(v489, "world") )
    {
      if ( !strcmp(v489, "object") )
      {
        v490 = 0;
      }
      else if ( override_assertion_handler )
      {
        *&Str2[8] = v489;
        *Str2 = 1;
        if ( override_assertion_handler(
               0i64,
               "..\\..\\skyquake\\prog\\mission\\actions.cpp",
               0x11F6i64,
               &missionMarkAsReSpawnPoint,
               "false",
               "Invalid spawn offset space: %s",
               Str2) )
          __debugbreak();
      }
    }
    if ( !v350 )
      goto LABEL_868;
    v491 = *v350;
    if ( !*v350 )
      goto LABEL_868;
    v492 = *(game + 0x420);
    v493 = (v350 + 1);
    v494 = 0x811C9DC5;
    do
    {
      v494 = v491 ^ (0x1000193 * v494);
      v491 = *v493++;
    }
    while ( v491 );
    v495 = v494;
    v496 = *(v492 + 0x1F8);
    if ( v494 >= v496 )
      v495 = v494 % v496;
    v497 = *(v492 + 0x1F0);
    v498 = *(v497 + 8 * v495);
    if ( !v498 )
      goto LABEL_868;
    while ( 1 )
    {
      v499 = *v498;
      if ( !*v498 )
        v499 = &szFile;
      if ( !strcmp(v499, v350) )
        break;
      v498 = *(v498 + 0x10);
      if ( !v498 )
        goto LABEL_868;
    }
    if ( v498 == *(v497 + 8 * v496) || (v500 = *(v498 + 8)) == 0i64 )
    {
LABEL_868:
      v173 = 1;
      if ( override_assertion_handler )
      {
        *&Str2[8] = &missionMarkAsReSpawnPoint;
        *Str2 = 1;
        *(&v593 + 1) = v350;
        LODWORD(v593) = 1;
        if ( override_assertion_handler(
               0i64,
               "..\\..\\skyquake\\prog\\mission\\actions.cpp",
               0x11FCi64,
               &missionMarkAsReSpawnPoint,
               "false",
               "%s: target area %s wasn't found.",
               Str2,
               2) )
          __debugbreak();
      }
      goto LABEL_303;
    }
    if ( !v490 )
    {
      v501 = (v500[0x35] * v486) + ((v500[0x32] * v487) + (v500[0x2F] * v488));
      v502 = (v500[0x36] * v486) + ((v500[0x33] * v487) + (v500[0x30] * v488));
      v486 = (v486 * v500[0x37]) + ((v487 * v500[0x34]) + (v488 * v500[0x31]));
      v488 = v501;
      v487 = v502;
    }
    v607 = 0i64;
    v606 = 0i64;
    v605 = 0i64;
    v604 = 0i64;
    v603 = 0i64;
    v602 = 0i64;
    v601 = 0i64;
    v600 = 0i64;
    v599 = 0i64;
    v598 = 0i64;
    v597 = 0i64;
    v596 = 0i64;
    v595 = 0i64;
    *Block = 0i64;
    v593 = 0i64;
    *Str2 = 0i64;
    if ( v572 && *v572 )
    {
      v503 = v500;
      v555 = v572;
      v504 = "%s_dup_%s";
    }
    else
    {
      v503 = v500;
      LODWORD(v555) = *(v492 + 0x1C8);
      v504 = "%s_dup_%d";
    }
    sub_17A810(Str2, 0x100, v504);
    HIBYTE(v607) = 0;
    v518 = Str2[0];
    if ( Str2[0] )
    {
      v519 = *(game + 0x420);
      v520 = 0x811C9DC5;
      v521 = &Str2[1];
      do
      {
        v520 = v518 ^ (0x1000193 * v520);
        v518 = *v521++;
      }
      while ( v518 );
      v522 = v520;
      v523 = *(v519 + 0x1F8);
      if ( v520 >= v523 )
        v522 = v520 % v523;
      v524 = *(v519 + 0x1F0);
      v525 = *(v524 + 8 * v522);
      if ( v525 )
      {
        while ( 1 )
        {
          v526 = *v525;
          if ( !*v525 )
            v526 = &szFile;
          if ( !strcmp(v526, Str2) )
            break;
          v525 = *(v525 + 0x10);
          if ( !v525 )
            goto LABEL_935;
        }
        if ( v525 != *(v524 + 8 * v523) )
        {
          v536 = *(v525 + 8);
          if ( v536 )
            goto LABEL_943;
        }
      }
    }
LABEL_935:
    v536 = j__malloc_base(0x110ui64);
    if ( v536 )
      goto LABEL_940;
    while ( off_4B678A0 && off_4B678A0(0x110i64) )
    {
      v537 = j__malloc_base(0x110ui64);
      if ( v537 )
      {
        v536 = v537;
LABEL_940:
        _InterlockedAdd(&dword_4B6788C, (j__msize(v536) + 0xF) >> 4);
        _InterlockedIncrement(&dword_4B67890);
        v538 = game;
        v539 = *(*(game + 0x420) + 0x1C8i64);
        *(v536 + 4) = 0xFFFF;
        *(v536 + 8) = 0x54454E44;
        v536[5] = 0i64;
        v536[6] = 0i64;
        v536[7] = 0i64;
        v536[8] = 0i64;
        *(v536 + 0x12) = 0xA;
        *v536 = &off_44CF1A0;
        v536[0xA] = &szFile;
        v536[0xC] = 0x1000300002i64;
        v536[2] = v536 + 0xC;
        v536[3] = v536 + 0xC;
        v536[0xF] = 0i64;
        v536[0xD] = "areaFlags";
        v536[0xE] = sub_158DEB0;
        *(v536 + 0x40) = 8;
        *(v536 + 0x88) = 0;
        *(v536 + 0x3B) = 0;
        *(v536 + 0x7A) = 0;
        *(v536 + 0x7B) = v539;
        v536[0x21] = 0i64;
        *(v536 + 0xAC) = 0i64;
        *(v536 + 0xA) = 0i64;
        *(v536 + 9) = 0i64;
        *(v536 + 0x2B) = 0x3F800000;
        *(v536 + 0x27) = 0x3F800000;
        *(v536 + 0x23) = 0x3F800000;
        *(v536 + 0xD) = 0i64;
        *(v536 + 0xDC) = 0i64;
        *(v536 + 0xC) = 0i64;
        *(v536 + 0x37) = 0x3F800000;
        *(v536 + 0x33) = 0x3F800000;
        *(v536 + 0x2F) = 0x3F800000;
        v536[0x1F] = 0x3F8000003F800000i64;
        *(v536 + 0x40) = 0x3F800000;
        v540 = *(v538 + 0x420);
        v541 = *(v540 + 0x1C8);
        v542 = *(v540 + 0x1CC);
        if ( v542 == v541 )
        {
          if ( *(v540 + 0x1CC) )
          {
            if ( v542 > 0x1FF )
              v552 = ((v542 + 1) >> 1) + v542;
            else
              v552 = 2 * v542;
          }
          else
          {
            v552 = 2;
          }
          v553 = *(v540 + 0x1B8);
          if ( !v553 )
            goto LABEL_975;
          v554 = 2i64;
          if ( v552 >= 3 )
            v554 = v552;
          v543 = (*(**(v540 + 0x1C0) + 0x38i64))(*(v540 + 0x1C0), v553, 8 * v554);
          v552 = v554;
          if ( !v543 )
          {
LABEL_975:
            v554 = 2i64;
            if ( v552 >= 3 )
              v554 = v552;
            v543 = (*(**(v540 + 0x1C0) + 0x18i64))(*(v540 + 0x1C0), 8 * v554);
            memmove(v543, *(v540 + 0x1B8), 8i64 * *(v540 + 0x1C8));
            if ( *(v540 + 0x1B8) )
              (*(**(v540 + 0x1C0) + 0x40i64))(*(v540 + 0x1C0));
          }
          *(v540 + 0x1B8) = v543;
          *(v540 + 0x1CC) = v554;
          v541 = *(v540 + 0x1C8);
        }
        else
        {
          v543 = *(v540 + 0x1B8);
        }
        *(v540 + 0x1C8) = v541 + 1;
        *(v543 + v541) = v536;
        sub_C73CA0(*(game + 0x420), v536, Str2);
LABEL_943:
        LOWORD(v577) = v503[0x20] & 0xFFFB;
        if ( *(v536 + 0x40) != v577 )
        {
          on_reflection_var_changed((v536 + 0xC), v536, &v577);
          *(v536 + 0x40) = v577;
        }
        v544 = *(v503 + 0x2F);
        v545 = *(v503 + 0x33);
        *(v536 + 0xDC) = *(v503 + 0x37);
        *(v536 + 0xCC) = v545;
        *(v536 + 0xBC) = v544;
        v546 = v486 + *(v536 + 0x3A);
        v547 = v487 + *(v536 + 0x39);
        *(v536 + 0x38) = v488 + *(v536 + 0x38);
        *(v536 + 0x39) = v547;
        *(v536 + 0x3A) = v546;
        sub_C97890(v536);
        *(v536 + 0x3B) = v503[0x3B];
        *(v536 + 0x16) = v503[0x16];
        *(v536 + 0x3C) = v503[0x3C];
        v548 = *(v503 + 0x88);
        *(v536 + 0x88) = v548;
        if ( v548 )
          sub_C97C60(v536);
        v549 = v576;
        if ( HIDWORD(v576) == v576 )
        {
          if ( HIDWORD(v576) )
          {
            if ( HIDWORD(v576) > 0x1FF )
              v551 = ((HIDWORD(v576) + 1) >> 1) + HIDWORD(v576);
            else
              v551 = 2i64 * HIDWORD(v576);
          }
          else
          {
            v551 = 2i64;
          }
          sub_FC0D0(&v574, v551);
          v549 = v576;
        }
        LODWORD(v576) = v549 + 1;
        *(v574 + v549) = v536;
        v173 = 1;
        goto LABEL_303;
      }
    }
    v578 = &off_110;
    goto LABEL_965;
  }
LABEL_84:
  v49 = *v2;
  v50 = 0xFFFFFFFF;
  if ( !*v2 )
    goto LABEL_94;
  v51 = data::get_name_id("target", 6ui64);
  v52 = *(v49 + 0x50);
  if ( v52 )
  {
    v53 = *(v52 + 0x20);
    if ( !*(v49 + 0x20) )
      goto LABEL_91;
  }
  else
  {
    v53 = 0;
    if ( !*(v49 + 0x20) )
      goto LABEL_91;
  }
  v54 = data::get_name_id(v49, "target", 6ui64, v51);
  if ( v54 >= 0 )
  {
    v55 = v53 + v54;
    goto LABEL_93;
  }
LABEL_91:
  if ( !v53 )
    goto LABEL_94;
  v55 = data::get_name_id(*(v49 + 0x50), "target", 6ui64, v51);
LABEL_93:
  v50 = v55;
LABEL_94:
  v585 = *(game + 0x420);
  if ( !v557 )
  {
    if ( v559 )
    {
      *Str2 = "isAlive";
      v103 = data::get_str(v2, "object_type", Str2);
      if ( v103 )
      {
        v104 = v103;
        v105 = &off_44CF850;
        v106 = 0i64;
        while ( strcmp(*v105, v104) )
        {
          ++v106;
          ++v105;
          if ( v106 == 0x31 )
            goto LABEL_157;
        }
      }
      else
      {
LABEL_157:
        LODWORD(v106) = 0;
      }
      v107 = funcs_7FF717B84E97[v106];
      sub_CD2950(&v586, v2, v50, a1, v107, 0i64);
      if ( v588 )
      {
        v108 = 0;
        do
        {
          if ( v107() )
          {
            v109 = v588;
          }
          else
          {
            v109 = v588 - 1;
            if ( v588 - 1 > v108 )
            {
              memmove(v586 + 8 * v108, v586 + 8 * v108 + 8, 8i64 * v588 - (8i64 * v108 + 8));
              v109 = v588 - 1;
            }
            --v108;
            LODWORD(v588) = v109;
          }
          ++v108;
        }
        while ( v108 < v109 );
      }
      sub_CD4300(&v586, a1, v2, "object");
      Str2[0] = 0;
      v131 = data::get_bool(v2, "useForTriggerFiltered", Str2);
      v133 = v588;
      if ( v131 )
      {
        if ( !v588 )
          goto LABEL_243;
        v134 = 0;
        do
        {
          v132 = v586;
          if ( !*(a1 + 0xF8) )
            goto LABEL_228;
          v135 = *(a1 + 0xE8);
          v136 = 0i64;
          while ( *(v135 + v136) != *(v586 + v134) )
          {
            v137 = v135 + v136 + 8;
            v136 += 8i64;
            if ( v137 >= v135 + 8 * *(a1 + 0xF8) )
              goto LABEL_228;
          }
          if ( (v136 & 0x400000000i64) != 0 )
          {
LABEL_228:
            v138 = v133 - 1;
            if ( v133 - 1 > v134 )
            {
              memmove(v586 + 8 * v134, v586 + 8 * v134 + 8, 8i64 * v133 - (8i64 * v134 + 8));
              v138 = v588 - 1;
            }
            --v134;
            LODWORD(v588) = v138;
            v133 = v138;
          }
          ++v134;
        }
        while ( v134 < v133 );
      }
      if ( v133 )
        goto LABEL_231;
LABEL_243:
      v145 = *v2;
      v146 = 0xFFFFFFFF;
      if ( !*v2 )
        goto LABEL_348;
      v147 = data::get_name_id("tags", 4ui64);
      v148 = *(v145 + 0x50);
      if ( v148 )
      {
        v149 = *(v148 + 0x20);
        if ( !*(v145 + 0x20) )
          goto LABEL_345;
      }
      else
      {
        v149 = 0;
        if ( !*(v145 + 0x20) )
          goto LABEL_345;
      }
      v208 = data::get_name_id(v145, "tags", 4ui64, v147);
      if ( v208 >= 0 )
      {
        v209 = v149 + v208;
        goto LABEL_347;
      }
LABEL_345:
      if ( !v149 )
        goto LABEL_348;
      v209 = data::get_name_id(*(v145 + 0x50), "tags", 4ui64, v147);
LABEL_347:
      v146 = v209;
LABEL_348:
      if ( !v584 )
        goto LABEL_353;
      LOBYTE(v132) = 1;
      v210 = sub_145DA90(v2, v146, 0xFFFFFFFFi64, v132);
      v211 = &data::get_block_by_name;
      if ( v210 )
        v211 = v210;
      if ( !sub_145BD50(v211, "none_can_spawn") )
      {
LABEL_353:
        *&Str2[8] = &missionMarkAsReSpawnPoint;
        *Str2 = 1;
        *(&v593 + 1) = v572;
        LODWORD(v593) = 1;
        logmessage_fmt(0x47495254u, "%s can't find any units for unit zone %s (isUnit == true)", Str2, 2);
        if ( !override_assertion_handler )
          goto LABEL_659;
        *&Str2[8] = &missionMarkAsReSpawnPoint;
        *Str2 = 1;
        v144 = override_assertion_handler(
                 0i64,
                 "..\\..\\skyquake\\prog\\mission\\actions.cpp",
                 0x11AAi64,
                 &missionMarkAsReSpawnPoint,
                 "0",
                 "%s can't find any units for unit zone (isUnit == true)",
                 Str2,
                 1);
        goto LABEL_355;
      }
      *&Str2[8] = &missionMarkAsReSpawnPoint;
      *Str2 = 1;
      *(&v593 + 1) = v572;
      LODWORD(v593) = 1;
      logmessage_fmt(0x47495254u, "%s hide unit zone %s (isUnit == true)", Str2, 2);
LABEL_231:
      v139 = *v2;
      v140 = 0xFFFFFFFF;
      if ( !*v2 )
        goto LABEL_253;
      v141 = data::get_name_id("backupZone", 0xAui64);
      v142 = *(v139 + 0x50);
      if ( v142 )
      {
        v143 = *(v142 + 0x20);
        if ( !*(v139 + 0x20) )
        {
LABEL_250:
          if ( v143 )
          {
            v151 = data::get_name_id(*(v139 + 0x50), "backupZone", 0xAui64, v141);
            goto LABEL_252;
          }
LABEL_253:
          LOWORD(v152) = *(v2 + 0xC);
          if ( !v152 )
          {
LABEL_301:
            if ( v576 )
              goto LABEL_302;
            *&Str2[8] = &missionMarkAsReSpawnPoint;
            *Str2 = 1;
            logmessage_fmt(0x47495254u, "%s can't find backup zone for unit zone (isUnit = true)", Str2, 1);
            if ( !override_assertion_handler )
              goto LABEL_659;
            *&Str2[8] = &missionMarkAsReSpawnPoint;
            *Str2 = 1;
            v144 = override_assertion_handler(
                     0i64,
                     "..\\..\\skyquake\\prog\\mission\\actions.cpp",
                     0x11C2i64,
                     &missionMarkAsReSpawnPoint,
                     "0",
                     "%s can't find backup zone for unit zone (isUnit = true)",
                     Str2,
                     1);
            goto LABEL_355;
          }
          v153 = 0i64;
          while ( v153 < v152 )
          {
            v156 = *(v2 + 0x14);
            if ( v156 == 0xFFFFFFFFi64 )
              v157 = **(v2 + 0x18);
            else
              v157 = *v2 + v156 + 0x90;
            if ( (*(v157 + 8 * v153) & 0xFFFFFF) != v140 )
              goto LABEL_257;
            v158 = sub_1459970(v2, v153);
            if ( !v158 )
              goto LABEL_255;
            v154 = v158;
            v159 = *v158;
            v155 = a1;
            if ( v159 == 0x40 )
            {
              if ( !*(a1 + 0x50) )
              {
                v159 = 0x40;
                v2 = v560;
LABEL_278:
                v163 = (v154 + 1);
                v164 = 0x811C9DC5;
                do
                {
                  v164 = v159 ^ (0x1000193 * v164);
                  v159 = *v163++;
                }
                while ( v159 );
                v165 = v164;
                v166 = *(v585 + 0x1F8);
                if ( v164 >= v166 )
                  v165 = v164 % v166;
                v167 = *(v585 + 0x1F0);
                v168 = *(v167 + 8 * v165);
                if ( v168 )
                {
                  while ( 1 )
                  {
                    v169 = *v168;
                    if ( !*v168 )
                      v169 = &szFile;
                    if ( !strcmp(v169, v154) )
                      break;
                    v168 = *(v168 + 0x10);
                    if ( !v168 )
                      goto LABEL_293;
                  }
                  v155 = a1;
                  if ( v168 != *(v167 + 8 * v166) )
                  {
                    v170 = *(v168 + 8);
                    if ( v170 )
                    {
                      v171 = v576;
                      if ( HIDWORD(v576) == v576 )
                      {
                        if ( HIDWORD(v576) )
                        {
                          if ( HIDWORD(v576) > 0x1FF )
                            v172 = ((HIDWORD(v576) + 1) >> 1) + HIDWORD(v576);
                          else
                            v172 = 2i64 * HIDWORD(v576);
                        }
                        else
                        {
                          v172 = 2i64;
                        }
                        sub_FC0D0(&v574, v172);
                        v171 = v576;
                        v2 = v560;
                      }
                      LODWORD(v576) = v171 + 1;
                      *(v574 + v171) = v170;
                      goto LABEL_257;
                    }
                  }
                }
                goto LABEL_256;
              }
              v160 = *(a1 + 0x40);
              v161 = 0x20i64 * *(a1 + 0x50);
              v162 = 0i64;
              while ( strcmp(*(v160 + v162), v154 + 1) )
              {
                v162 += 0x20i64;
                if ( v161 == v162 )
                  goto LABEL_275;
              }
              if ( (*(v160 + v162 + 8) & 0xF) == 1 )
                v154 = *(v160 + v162 + 0x10);
LABEL_275:
              v2 = v560;
              if ( !v154 )
              {
                v154 = 0i64;
LABEL_293:
                v155 = a1;
                goto LABEL_256;
              }
              v159 = *v154;
              v155 = a1;
            }
            if ( v159 )
              goto LABEL_278;
LABEL_256:
            sub_CD6530(v155, &v574, v154);
LABEL_257:
            ++v153;
            v152 = *(v2 + 0xC);
            if ( v153 >= v152 )
              goto LABEL_301;
          }
          if ( v140 != 0xFFFFFFFF )
            goto LABEL_257;
LABEL_255:
          v154 = 0i64;
          v155 = a1;
          goto LABEL_256;
        }
      }
      else
      {
        v143 = 0;
        if ( !*(v139 + 0x20) )
          goto LABEL_250;
      }
      v150 = data::get_name_id(v139, "backupZone", 0xAui64, v141);
      if ( v150 >= 0 )
      {
        v151 = v143 + v150;
LABEL_252:
        v140 = v151;
        goto LABEL_253;
      }
      goto LABEL_250;
    }
    LOWORD(v110) = *(v2 + 0xC);
    if ( !v110 )
      goto LABEL_241;
    v111 = 0i64;
    while ( v111 < v110 )
    {
      v114 = *(v2 + 0x14);
      if ( v114 == 0xFFFFFFFFi64 )
        v115 = **(v2 + 0x18);
      else
        v115 = *v2 + v114 + 0x90;
      if ( (*(v115 + 8 * v111) & 0xFFFFFF) != v50 )
        goto LABEL_173;
      v116 = sub_1459970(v2, v111);
      if ( !v116 )
        goto LABEL_171;
      v112 = v116;
      v117 = *v116;
      v113 = a1;
      if ( v117 == 0x40 )
      {
        if ( !*(a1 + 0x50) )
        {
          v117 = 0x40;
          v2 = v560;
LABEL_194:
          v121 = (v112 + 1);
          v122 = 0x811C9DC5;
          do
          {
            v122 = v117 ^ (0x1000193 * v122);
            v117 = *v121++;
          }
          while ( v117 );
          v123 = v122;
          v124 = *(v585 + 0x1F8);
          if ( v122 >= v124 )
            v123 = v122 % v124;
          v125 = *(v585 + 0x1F0);
          v126 = *(v125 + 8 * v123);
          if ( v126 )
          {
            while ( 1 )
            {
              v127 = *v126;
              if ( !*v126 )
                v127 = &szFile;
              if ( !strcmp(v127, v112) )
                break;
              v126 = *(v126 + 0x10);
              if ( !v126 )
                goto LABEL_209;
            }
            v113 = a1;
            if ( v126 != *(v125 + 8 * v124) )
            {
              v128 = *(v126 + 8);
              if ( v128 )
              {
                v129 = v576;
                if ( HIDWORD(v576) == v576 )
                {
                  if ( HIDWORD(v576) )
                  {
                    if ( HIDWORD(v576) > 0x1FF )
                      v130 = ((HIDWORD(v576) + 1) >> 1) + HIDWORD(v576);
                    else
                      v130 = 2i64 * HIDWORD(v576);
                  }
                  else
                  {
                    v130 = 2i64;
                  }
                  sub_FC0D0(&v574, v130);
                  v129 = v576;
                  v2 = v560;
                }
                LODWORD(v576) = v129 + 1;
                *(v574 + v129) = v128;
                goto LABEL_173;
              }
            }
          }
          goto LABEL_172;
        }
        v118 = *(a1 + 0x40);
        v119 = 0x20i64 * *(a1 + 0x50);
        v120 = 0i64;
        while ( strcmp(*(v118 + v120), v112 + 1) )
        {
          v120 += 0x20i64;
          if ( v119 == v120 )
            goto LABEL_191;
        }
        if ( (*(v118 + v120 + 8) & 0xF) == 1 )
          v112 = *(v118 + v120 + 0x10);
LABEL_191:
        v2 = v560;
        if ( !v112 )
        {
          v112 = 0i64;
LABEL_209:
          v113 = a1;
          goto LABEL_172;
        }
        v117 = *v112;
        v113 = a1;
      }
      if ( v117 )
        goto LABEL_194;
LABEL_172:
      sub_CD6530(v113, &v574, v112);
LABEL_173:
      ++v111;
      v110 = *(v2 + 0xC);
      if ( v111 >= v110 )
      {
        if ( v576 )
          goto LABEL_302;
LABEL_241:
        *&Str2[8] = &missionMarkAsReSpawnPoint;
        *Str2 = 1;
        logmessage_fmt(0x47495254u, "%s can't find any areas for respawn with areas", Str2, 1);
        if ( !override_assertion_handler )
          goto LABEL_659;
        *&Str2[8] = &missionMarkAsReSpawnPoint;
        *Str2 = 1;
        v144 = override_assertion_handler(
                 0i64,
                 "..\\..\\skyquake\\prog\\mission\\actions.cpp",
                 0x11D6i64,
                 &missionMarkAsReSpawnPoint,
                 "0",
                 "%s can't find any areas for respawn with areas",
                 Str2,
                 1);
LABEL_355:
        if ( v144 )
          __debugbreak();
        goto LABEL_659;
      }
    }
    if ( v50 != 0xFFFFFFFF )
      goto LABEL_173;
LABEL_171:
    v112 = 0i64;
    v113 = a1;
    goto LABEL_172;
  }
  v56 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(v56[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(v56, v17, v18, v19);
  v57 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  v577 = 0i64;
  v578 = v57;
  v579 = 0i64;
  sub_CD2C10(&v577, v2, v50, a1);
  v58 = v579;
  v59 = v585;
  if ( !v579 )
    goto LABEL_166;
  v611 = v585 + 0x1B8;
  v60 = 0i64;
  while ( 2 )
  {
    v61 = *(v577 + 8 * v60);
    if ( !v61 )
      goto LABEL_100;
    v612 = v60;
    v62 = v591;
    if ( HIDWORD(v591) == v591 )
    {
      if ( HIDWORD(v591) )
      {
        if ( HIDWORD(v591) > 0x1FF )
          v102 = ((HIDWORD(v591) + 1) >> 1) + HIDWORD(v591);
        else
          v102 = 2i64 * HIDWORD(v591);
      }
      else
      {
        v102 = 2i64;
      }
      sub_FC0D0(&v589, v102);
      v62 = v591;
    }
    LODWORD(v591) = v62 + 1;
    *(v589 + v62) = v61;
    *(v61 + 0x330) = v571;
    if ( !v570 )
      goto LABEL_99;
    *(v61 + 0x331) = 1;
    v580 = (v61 + 0x238);
    v63 = 0i64;
    v608 = v61;
    while ( 2 )
    {
      v64 = *(v61 + 8 * v63 + 0x338);
      if ( !v64 || *(v64 + 0x20) )
        goto LABEL_105;
      v66 = j__malloc_base(0x110ui64);
      if ( v66 )
        goto LABEL_113;
      do
      {
        if ( !off_4B678A0 || !off_4B678A0(0x110i64) )
        {
          *&Str2[8] = 0x110i64;
          *Str2 = 2;
          v506 = Str2;
          goto LABEL_875;
        }
        v67 = j__malloc_base(0x110ui64);
      }
      while ( !v67 );
      v66 = v67;
LABEL_113:
      _InterlockedAdd(&dword_4B6788C, (j__msize(v66) + 0xF) >> 4);
      _InterlockedIncrement(&dword_4B67890);
      v68 = *(v59 + 0x1C8);
      *(v66 + 4) = 0xFFFF;
      *(v66 + 8) = 0x54454E44;
      v66[5] = 0i64;
      v66[6] = 0i64;
      v66[7] = 0i64;
      v66[8] = 0i64;
      *(v66 + 0x12) = 0xA;
      *v66 = &off_44CF1A0;
      v66[0xA] = &szFile;
      v66[0xC] = 0x1000300002i64;
      v66[2] = v66 + 0xC;
      v66[3] = v66 + 0xC;
      v66[0xF] = 0i64;
      v66[0xD] = "areaFlags";
      v66[0xE] = sub_158DEB0;
      *(v66 + 0x40) = 8;
      *(v66 + 0x88) = 0;
      *(v66 + 0x3B) = 0;
      *(v66 + 0x7A) = 0;
      *(v66 + 0x7B) = v68;
      v66[0x21] = 0i64;
      *(v66 + 0xAC) = 0i64;
      *(v66 + 0xA) = 0i64;
      *(v66 + 9) = 0i64;
      *(v66 + 0x2B) = 0x3F800000;
      *(v66 + 0x27) = 0x3F800000;
      *(v66 + 0x23) = 0x3F800000;
      *(v66 + 0xD) = 0i64;
      *(v66 + 0xDC) = 0i64;
      *(v66 + 0xC) = 0i64;
      *(v66 + 0x37) = 0x3F800000;
      *(v66 + 0x33) = 0x3F800000;
      *(v66 + 0x2F) = 0x3F800000;
      v66[0x1F] = 0x3F8000003F800000i64;
      *(v66 + 0x40) = 0x3F800000;
      v69 = *(v59 + 0x1C8);
      v70 = *(v59 + 0x1CC);
      if ( v70 == v69 )
      {
        if ( *(v59 + 0x1CC) )
        {
          if ( v70 > 0x1FF )
            v101 = ((v70 + 1) >> 1) + v70;
          else
            v101 = 2 * v70;
        }
        else
        {
          v101 = 2i64;
        }
        sub_FC0D0(v611, v101);
        v69 = *(v59 + 0x1C8);
      }
      v71 = *(v59 + 0x1B8);
      *(v59 + 0x1C8) = v69 + 1;
      *(v71 + 8i64 * v69) = v66;
      v72 = *(v61 + 0x158);
      v73 = (v72 + 0x1138);
      if ( !v72 )
        v73 = v580;
      v74 = *v73;
      if ( !*v73 )
        v74 = &szFile;
      Src = 0i64;
      v582 = off_4B678C8;
      Size = 0i64;
      if ( *v74 )
      {
        v75 = strlen(v74);
        v76 = v75 + 1;
        if ( v75 == 0xFFFFFFFF )
        {
          v77 = 0i64;
        }
        else
        {
          v78 = 0x10i64;
          if ( v76 >= 0x11 )
            v78 = v76;
          v77 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v78);
          memmove(v77, Src, Size);
          if ( Src )
            (*(*v582 + 0x40i64))(v582);
          Src = v77;
          HIDWORD(Size) = v78;
          v59 = v585;
        }
        LODWORD(Size) = v76;
        memmove(v77, v74, v76);
        v61 = v608;
      }
      append_string(&Src, "_", 1u);
      v79 = strlen(*(&off_44CFBB0 + *(v64 + 0x1C)));
      append_string(&Src, *(&off_44CFBB0 + *(v64 + 0x1C)), v79);
      v80 = &szFile;
      if ( Size )
        v80 = Src;
      sub_C73CA0(v59, v66, v80);
      *(v66 + 0x16) = 1;
      v81 = *v64;
      v82 = *(v64 + 8);
      v83 = *(v64 + 0x10) - *(v64 + 4);
      v84 = *(v64 + 0x14) - v82;
      v85 = *(v64 + 0xC) - *v64;
      v86 = (v85 * v85) + (v84 * v84);
      v87 = fsqrt(v86);
      v88 = 0.0;
      if ( v87 > *&epsilon_unk )
        v88 = Y / v87;
      v89 = *(v64 + 0x18);
      sub_5E8D60(v61, Str2);
      v90 = ((*&v593 + *&Str2[4]) * *&screenScaleFactor) + *&dword_44A44B0;
      v91 = Block[0];
      if ( Block[0] )
      {
        _InterlockedAdd(&dword_4B6788C, -((j__msize(Block[0]) + 0xF) >> 4));
        _InterlockedDecrement(&dword_4B67890);
        free(v91);
      }
      v92 = (COERCE_FLOAT(LODWORD(v89) ^ SIGN_BIT_MASK) * v85) * v88;
      v93 = (v89 * v84) * v88;
      v94 = (v84 * *&screenScaleFactor) + v82;
      v95 = (v85 * *&screenScaleFactor) + v81;
      *(v66 + 0x3B) = fsqrt(fmaxf(fmaxf(v86 + (v83 * v83), *&dword_44A4620), (v92 * v92) + (v93 * v93)));
      *(v66 + 0x3C) = 0;
      *(v66 + 0x2F) = v85;
      *(v66 + 0x30) = v83;
      *(v66 + 0x31) = v84;
      v66[0x19] = 0x4248000000000000i64;
      *(v66 + 0x34) = 0;
      *(v66 + 0x35) = v93;
      *(v66 + 0x36) = 0;
      *(v66 + 0x37) = v92;
      *(v66 + 0x38) = v95;
      *(v66 + 0x39) = v90;
      *(v66 + 0x3A) = v94;
      sub_C97890(v66);
      sub_C97C60(v66);
      v96 = sub_C76710(v59);
      v97 = *(v61 + 0x158);
      if ( v97 )
        v98 = (*(*(v97 + 0x50) + 0x30i64))(v97 + 0x50);
      else
        v98 = *(v61 + 0x2A8);
      sub_C86CD0(v96, *(v66 + 0x7B), v98);
      *(v96 + 0xBC) = 0x459C4000459C4000i64;
      *(v96 + 0x100) = 1;
      *(v96 + 0xF8) = v61;
      v100 = *(v96 + 0xA8);
      if ( v100 )
        sub_C97C60(v100);
      LOBYTE(v99) = 0xFF;
      sub_12110D0(v96, v99);
      sub_C87470(v96);
      *(v64 + 0x20) = v96;
      if ( Src )
        (*(*v582 + 0x40i64))(v582);
LABEL_105:
      if ( ++v63 != 4 )
        continue;
      break;
    }
LABEL_99:
    on_reflection_var_changed(v61 + 0x358, v61, v61 + 0x378);
    v58 = v579;
    v60 = v612;
LABEL_100:
    if ( ++v60 < v58 )
      continue;
    break;
  }
LABEL_166:
  if ( !v591 )
  {
    if ( override_assertion_handler )
    {
      *&Str2[8] = &missionMarkAsReSpawnPoint;
      *Str2 = 1;
      if ( override_assertion_handler(
             0i64,
             "..\\..\\skyquake\\prog\\mission\\actions.cpp",
             0x1199i64,
             &missionMarkAsReSpawnPoint,
             "0",
             "%s can't find any airfields for respawn (airfield)",
             Str2) )
        __debugbreak();
    }
    if ( v577 )
      (*(*v578 + 0x40i64))(v578);
    goto LABEL_659;
  }
  if ( v577 )
    (*(*v578 + 0x40i64))(v578);
LABEL_302:
  v173 = 0;
LABEL_303:
  if ( v584 )
  {
    Str2[0] = 0;
    v174 = data::get_bool(v560, "ignoreTeamsOnReuse", Str2);
    v175 = 0xFFFFFFFF;
    v176 = v573;
    if ( v174 )
      v176 = 0xFFFFFFFFi64;
    v177 = sub_C77940(*(game + 0x420), v572, v176, v557, v555);
    if ( v177 )
    {
      v178 = v177;
      v179 = *v560;
      if ( !*v560 )
        goto LABEL_331;
      v180 = data::get_name_id("tags", 4ui64);
      v181 = *(v179 + 0x50);
      if ( v181 )
      {
        v182 = *(v181 + 0x20);
        if ( !*(v179 + 0x20) )
        {
LABEL_328:
          if ( v182 )
          {
            v194 = data::get_name_id(*(v179 + 0x50), "tags", 4ui64, v180);
            goto LABEL_330;
          }
          goto LABEL_331;
        }
      }
      else
      {
        v182 = 0;
        if ( !*(v179 + 0x20) )
          goto LABEL_328;
      }
      v193 = data::get_name_id(v179, "tags", 4ui64, v180);
      if ( v193 < 0 )
        goto LABEL_328;
      v194 = v182 + v193;
LABEL_330:
      v175 = v194;
LABEL_331:
      v195 = *(v560 + 0x10);
      if ( v195 == 0xFFFFFFFF )
      {
        v202 = *(v560 + 0xE);
        v197 = 1;
        if ( *(v560 + 0xE) )
        {
          v203 = v175 + 1;
          v204 = *(v560 + 0x18);
          v205 = *v204;
          v206 = *(v204 + 2) - 8 * v202;
          v207 = 0;
          while ( (*(*(v205 + v206) + 8i64) & 0x3FFFFFFF) != v203 )
          {
            ++v207;
            v206 += 8i64;
            if ( v202 == v207 )
              goto LABEL_561;
          }
          if ( v207 < v202 )
          {
            v215 = *(v205 + v206);
            v213 = v557;
            v214 = v558;
            if ( !v215 )
              goto LABEL_562;
            goto LABEL_361;
          }
        }
      }
      else
      {
        v196 = *(v560 + 0xE);
        v197 = 1;
        if ( v195 < (v195 + v196) )
        {
          v198 = v175 + 1;
          v199 = *v560 + *(*v560 + 0x5Ci64) + 0x90i64;
          v200 = 0;
          while ( 1 )
          {
            v201 = 0x20i64 * (v195 + v200);
            if ( (*(v199 + v201 + 8) & 0x3FFFFFFF) == v198 )
              break;
            if ( v196 == ++v200 )
              goto LABEL_561;
          }
          v212 = v200 < v196;
          v213 = v557;
          v214 = v558;
          if ( !v212 )
            goto LABEL_562;
          v215 = v201 + v199;
LABEL_361:
          if ( *(v178 + 0xE0) )
            memset(*(v178 + 0xE8), 0, 4i64 * (*(v178 + 0xE4) + 1));
          *(v178 + 0xE0) = 0;
          v216 = *(v178 + 0x108);
          if ( v216 )
          {
            *(v178 + 0x108) = 0i64;
            _InterlockedAdd(&dword_4B6788C, -((j__msize(v216) + 0xF) >> 4));
            _InterlockedDecrement(&dword_4B67890);
            free(v216);
          }
          *(v178 + 0x110) = 0i64;
          if ( *(v178 + 0x120) )
          {
            v217 = *(v178 + 0x118);
            v218 = 0x10i64 * *(v178 + 0x120);
            v219 = 0i64;
            do
            {
              v220 = *(v217 + v219);
              if ( v220 )
              {
                *(v217 + v219) = 0i64;
                _InterlockedAdd(&dword_4B6788C, -((j__msize(v220) + 0xF) >> 4));
                _InterlockedDecrement(&dword_4B67890);
                free(v220);
              }
              v219 += 0x10i64;
            }
            while ( v218 != v219 );
          }
          *(v178 + 0x120) = 0;
          *(v178 + 0x100) = 0;
          if ( *(v178 + 0x90) )
            memset(*(v178 + 0x98), 0, 4i64 * (*(v178 + 0x94) + 1));
          *(v178 + 0x90) = 0;
          v221 = *(v178 + 0xB8);
          if ( v221 )
          {
            *(v178 + 0xB8) = 0i64;
            _InterlockedAdd(&dword_4B6788C, -((j__msize(v221) + 0xF) >> 4));
            _InterlockedDecrement(&dword_4B67890);
            free(v221);
          }
          *(v178 + 0xC0) = 0i64;
          if ( *(v178 + 0xD0) )
          {
            v222 = *(v178 + 0xC8);
            v223 = 0x10i64 * *(v178 + 0xD0);
            v224 = 0i64;
            do
            {
              v225 = *(v222 + v224);
              if ( v225 )
              {
                *(v222 + v224) = 0i64;
                _InterlockedAdd(&dword_4B6788C, -((j__msize(v225) + 0xF) >> 4));
                _InterlockedDecrement(&dword_4B67890);
                free(v225);
              }
              v224 += 0x10i64;
            }
            while ( v223 != v224 );
          }
          *(v178 + 0xD0) = 0;
          *(v178 + 0xB0) = 0;
          LOWORD(v226) = *(v215 + 0xC);
          if ( v226 )
          {
            v580 = (v178 + 0xE0);
            v227 = 0i64;
            v214 = v558;
            while ( 1 )
            {
              if ( v227 >= v226 )
              {
LABEL_397:
                v239 = 0i64;
                goto LABEL_398;
              }
              v228 = *(v215 + 0x14);
              if ( v228 == 0xFFFFFFFFi64 )
              {
                v229 = *v215;
                v230 = **(v215 + 0x18);
                if ( !*v215 )
                  goto LABEL_397;
              }
              else
              {
                v229 = *v215;
                v230 = *v215 + v228 + 0x90;
                if ( !*v215 )
                  goto LABEL_397;
              }
              v231 = *(v230 + 8 * v227) & 0xFFFFFF;
              v232 = *(v229 + 0x50);
              if ( v232 )
              {
                v233 = *(v232 + 0x20);
                if ( v233 > v231 )
                {
                  v234 = *(*(v232 + 0x18) + 4 * v231);
                  v235 = *(v232 + 0x4A);
                  v236 = v234 >> v235;
                  goto LABEL_394;
                }
              }
              else
              {
                v233 = 0;
              }
              v237 = v231 - v233;
              if ( *(v229 + 0x20) <= v237 )
                goto LABEL_397;
              v234 = *(*(v229 + 0x18) + 4i64 * v237);
              v235 = *(v229 + 0x4A);
              v236 = v234 >> v235;
              v232 = v229;
LABEL_394:
              v238 = (*(v232 + 0x38) + 0x10i64 * v236);
              if ( v236 == *(v232 + 0x40) )
                v238 = (v232 + 0x28);
              v239 = (*v238 + (v234 & ~(0xFFFFFFFF << v235)));
              v214 = v558;
LABEL_398:
              Str2[0] = 0;
              if ( data::get_bool(v215, v239, Str2) )
              {
                if ( !v239 )
                  goto LABEL_382;
                v240 = strlen(v239);
                v241 = data::get_name_id(v239, v240);
                v242 = v178 + 0x90;
              }
              else
              {
                if ( !v239 )
                  goto LABEL_382;
                v240 = strlen(v239);
                v241 = data::get_name_id(v239, v240);
                v242 = v580;
              }
              sub_127A00(v242, v239, v240, v241);
LABEL_382:
              ++v227;
              v226 = *(v215 + 0xC);
              if ( v227 >= v226 )
              {
                v197 = 0;
                v213 = v557;
                goto LABEL_562;
              }
            }
          }
          v197 = 0;
        }
      }
LABEL_561:
      v213 = v557;
      v214 = v558;
LABEL_562:
      if ( v563 )
        *(v178 + 0x53) |= 2u;
      v331 = *(v178 + 0x52);
      if ( v214 )
      {
        v331 |= 0x800u;
        *(v178 + 0x52) = v331;
      }
      v332 = v331 & 0xFFFFFEFF;
      LOBYTE(v333) = v332;
      *(v178 + 0x52) = v332 | (v562 << 8);
      v334 = &v574;
      if ( v213 )
        v334 = &v589;
      if ( !*(v334 + 4) )
      {
        if ( v197 )
        {
LABEL_658:
          *(v178 + 0x197) = 0;
          goto LABEL_659;
        }
LABEL_651:
        if ( (v333 & 1) == 0 )
        {
          v374 = *(v178 + 0x70);
          if ( v374 )
          {
            for ( i = 0i64; i < v374; ++i )
            {
              v376 = *(*(v178 + 0x60) + 8 * i);
              if ( v376 )
              {
                sub_C97C60(v376);
                v374 = *(v178 + 0x70);
              }
            }
          }
        }
        LOBYTE(v332) = 0xFF;
        sub_12110D0(v178, v332);
        goto LABEL_658;
      }
      Str2[0] = 0;
      if ( data::get_bool(v560, "removeAreas", Str2) )
      {
        v335 = *(v334 + 4);
        if ( v335 )
        {
          LODWORD(v336) = *(v178 + 0x70);
          for ( j = 0i64; j < v335; ++j )
          {
            if ( v336 )
            {
              v332 = *(v178 + 0x60);
              v338 = v332 + 8i64 * v336;
              v339 = 0i64;
              v340 = 0i64;
              while ( *(v332 + v339) != *(*v334 + j) )
              {
                ++v340;
                v341 = v332 + v339 + 8;
                v339 += 8i64;
                if ( v341 >= v338 )
                  goto LABEL_573;
              }
              if ( (v339 & 0x400000000i64) == 0 )
              {
                v336 = (v336 - 1);
                if ( v340 < v336 )
                {
                  memmove((v332 + 8i64 * v340), (v332 + 8i64 * v340 + 8), v338 - (v332 + 8i64 * v340 + 8));
                  LODWORD(v336) = *(v178 + 0x70) - 1;
                  v335 = *(v334 + 4);
                }
                *(v178 + 0x70) = v336;
              }
            }
            else
            {
              LODWORD(v336) = 0;
            }
LABEL_573:
            ;
          }
        }
        goto LABEL_649;
      }
      Str2[0] = 0;
      if ( data::get_bool(v560, "replaceAreas", Str2) )
      {
        v342 = *(v178 + 0x60);
        v343 = *(v178 + 0x68);
        *(v178 + 0x60) = 0i64;
        *(v178 + 0x70) = 0i64;
        if ( v342 )
          (*(*v343 + 0x40i64))(v343);
      }
      v344 = *v334;
      v345 = *(v334 + 4);
      v346 = (v178 + 0x60);
      v347 = *(v178 + 0x70);
      if ( !*v334 )
      {
        sub_C3AC80(v178 + 0x60, *v346 + 8 * v347, v345);
        goto LABEL_649;
      }
      v332 = *(v178 + 0x60);
      if ( (v347 + v345) > *(v178 + 0x74) )
      {
        if ( *(v178 + 0x70) )
        {
          if ( v347 > 0x1FF )
            v348 = v347 + ((v347 + 1) >> 1);
          else
            v348 = 2 * v347;
        }
        else
        {
          v348 = 2;
        }
        if ( v347 + v345 > v348 )
          v348 = v347 + v345;
        if ( v332 )
        {
          v359 = 2i64;
          if ( v348 >= 3 )
            v359 = v348;
          v360 = (*(**(v178 + 0x68) + 0x38i64))(*(v178 + 0x68), v332, 8 * v359);
          if ( v360 )
          {
            *(v178 + 0x60) = v360;
            *(v178 + 0x74) = v359;
            v361 = *(v178 + 0x70);
            v349 = (v360 + 8 * v347);
            if ( v361 != v347 )
              memmove((v360 + 8 * v347 + 8 * v345), (v360 + 8 * v347), 8 * v361 - 8 * v347);
            goto LABEL_595;
          }
          v348 = v359;
        }
        v371 = 2i64;
        if ( v348 >= 3 )
          v371 = v348;
        v372 = (*(**(v178 + 0x68) + 0x18i64))(*(v178 + 0x68), 8 * v371);
        v373 = v372;
        if ( v345 )
          memmove(v372, v344, 8 * v345);
        v332 = *v346;
        if ( *v346 )
          (*(**(v178 + 0x68) + 0x40i64))(*(v178 + 0x68));
        *(v178 + 0x60) = v373;
        *(v178 + 0x74) = v371;
        goto LABEL_648;
      }
      v349 = (v332 + 8 * v347);
LABEL_595:
      if ( v345 )
        memmove(v349, v344, 8 * v345);
LABEL_648:
      *(v178 + 0x70) += v345;
LABEL_649:
      v333 = *(v178 + 0x52);
      if ( !*(v178 + 0x70) )
      {
        v333 |= 2u;
        *(v178 + 0x52) = v333;
      }
      goto LABEL_651;
    }
  }
  if ( !v563 )
  {
    v192 = 0;
    v183 = 0;
LABEL_321:
    v184 = v560;
    v185 = v572;
    goto LABEL_431;
  }
  v183 = 0x200;
  v184 = v560;
  v185 = v572;
  if ( !v576 )
  {
    v192 = 0;
    goto LABEL_431;
  }
  *Str2 = 0i64;
  v186 = data::get_str(v560, "areaNameForSortingByProximity", Str2);
  if ( !v186 )
    goto LABEL_429;
  v187 = v186;
  v188 = *v186;
  if ( v188 != 0x40 )
    goto LABEL_409;
  if ( *(a1 + 0x50) )
  {
    v189 = *(a1 + 0x40);
    v190 = 0x20i64 * *(a1 + 0x50);
    v191 = 0i64;
    while ( strcmp(*(v189 + v191), v187 + 1) )
    {
      v191 += 0x20i64;
      if ( v190 == v191 )
        goto LABEL_407;
    }
    if ( (*(v189 + v191 + 8) & 0xF) == 1 )
      v187 = *(v189 + v191 + 0x10);
LABEL_407:
    v185 = v572;
    if ( !v187 )
      goto LABEL_429;
    v188 = *v187;
LABEL_409:
    if ( !v188 )
      goto LABEL_426;
    goto LABEL_410;
  }
  v188 = 0x40;
LABEL_410:
  v243 = *(game + 0x420);
  v244 = (v187 + 1);
  v245 = 0x811C9DC5;
  do
  {
    v245 = v188 ^ (0x1000193 * v245);
    v188 = *v244++;
  }
  while ( v188 );
  v246 = v245;
  v247 = *(v243 + 0x1F8);
  if ( v245 >= v247 )
    v246 = v245 % v247;
  v248 = *(v243 + 0x1F0);
  v249 = *(v248 + 8 * v246);
  if ( !v249 )
    goto LABEL_425;
  while ( 1 )
  {
    v250 = *v249;
    if ( !*v249 )
      v250 = &szFile;
    if ( !strcmp(v250, v187) )
      break;
    v249 = *(v249 + 0x10);
    if ( !v249 )
      goto LABEL_425;
  }
  if ( v249 == *(v248 + 8 * v247) )
  {
LABEL_425:
    v185 = v572;
  }
  else
  {
    v251 = *(v249 + 8);
    v185 = v572;
    if ( v251 )
    {
      v252 = v576;
      v253 = v574;
      if ( v576 )
      {
        if ( v576 - 1 >= 3 )
        {
          v254 = 0.0;
          v255 = 0i64;
          v256 = 0.0;
          do
          {
            v394 = *(v574 + v255);
            v395 = *(v574 + v255 + 1);
            v396 = (v256 + *(v394 + 0xE0)) + *(v395 + 0xE0);
            v397 = (v254 + *(v394 + 0xE8)) + *(v395 + 0xE8);
            v398 = *(v574 + v255 + 2);
            v399 = v396 + *(v398 + 0xE0);
            v400 = v397 + *(v398 + 0xE8);
            v401 = *(v574 + v255 + 3);
            v256 = v399 + *(v401 + 0xE0);
            v254 = v400 + *(v401 + 0xE8);
            v255 += 4i64;
          }
          while ( (v576 & 0xFFFFFFFC) != v255 );
        }
        else
        {
          v254 = 0.0;
          v255 = 0i64;
          v256 = 0.0;
        }
        v393 = v576;
        if ( (v576 & 3) != 0 )
        {
          v402 = v574 + 8 * v255;
          v403 = 0i64;
          do
          {
            v404 = *&v402[8 * v403];
            v256 = v256 + *(v404 + 0xE0);
            v254 = v254 + *(v404 + 0xE8);
            ++v403;
          }
          while ( (v576 & 3) != v403 );
          v393 = v576;
        }
      }
      else
      {
        v393 = 0i64;
        v256 = 0.0;
        v254 = 0.0;
      }
      v405 = Y / v576;
      v406 = v256 * v405;
      v407 = v405 * v254;
      v408 = *(v251 + 0xE0);
      v409 = *(v251 + 0xE8);
      v410 = v408 - v406;
      v411 = v409 - (v408 - v406);
      v412 = v410 + v409;
      v413 = v409 - v407;
      *&v577 = v408 + v413;
      *(&v577 + 1) = v411;
      *&Src = v408 - v413;
      *(&Src + 1) = v412;
      if ( v576 )
      {
        v414 = v574 + 8 * v393;
        v415 = 0xFFFFFFFFFFFFFFFEui64;
        v416 = v393;
        do
        {
          v416 >>= 1;
          v415 += 2i64;
          v417 = v393 <= 1;
          v393 = v416;
        }
        while ( !v417 );
        *Str2 = &v577;
        *&Str2[8] = &Src;
        sub_D2C3C0(v574, v414, v415, Str2);
        if ( v252 < 0x1D )
        {
          if ( v252 != 1 )
          {
            v425 = v253 + 8;
            v426 = 8i64;
            v427 = FABSF_MASK;
            do
            {
              v429 = *v425;
              v428 = v253;
              if ( v425 != v253 )
              {
                v430 = v426;
                do
                {
                  v431 = *&v253[v430 - 8];
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                      ((*(v429 + 0xE0) * (*(&Src + 1) - *(&v577 + 1)))
                                     + ((*&Src * *(&v577 + 1)) - (*(&Src + 1) * *&v577)))
                                    - (*(v429 + 0xE8) * (*&Src - *&v577))) & v427) >= COERCE_FLOAT(COERCE_UNSIGNED_INT((((*(&Src + 1) - *(&v577 + 1)) * *(v431 + 0xE0)) + ((*&Src * *(&v577 + 1)) - (*(&Src + 1) * *&v577))) - ((*&Src - *&v577) * *(v431 + 0xE8))) & v427) )
                  {
                    v428 = &v253[v430];
                    goto LABEL_716;
                  }
                  *&v253[v430] = v431;
                  v430 -= 8i64;
                }
                while ( v430 );
                v428 = v253;
              }
LABEL_716:
              *v428 = v429;
              v425 += 8;
              v426 += 8i64;
            }
            while ( v425 != v414 );
          }
        }
        else
        {
          v418 = 1i64;
          v419 = 8i64;
          v420 = FABSF_MASK;
          do
          {
            v422 = *&v253[8 * v418];
            v423 = v419;
            do
            {
              v424 = *&v253[v423 - 8];
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                  ((*(v422 + 0xE0) * (*(&Src + 1) - *(&v577 + 1)))
                                 + ((*&Src * *(&v577 + 1)) - (*(&Src + 1) * *&v577)))
                                - (*(v422 + 0xE8) * (*&Src - *&v577))) & v420) >= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                                 (((*(&Src + 1)
                                                                                                  - *(&v577 + 1))
                                                                                                 * *(v424 + 0xE0))
                                                                                                + ((*&Src * *(&v577 + 1))
                                                                                                 - (*(&Src + 1) * *&v577)))
                                                                                               - ((*&Src - *&v577)
                                                                                                * *(v424 + 0xE8))) & v420) )
              {
                v421 = &v253[v423];
                goto LABEL_708;
              }
              *&v253[v423] = v424;
              v423 -= 8i64;
            }
            while ( v423 );
            v421 = v253;
LABEL_708:
            *v421 = v422;
            ++v418;
            v419 += 8i64;
          }
          while ( v418 != 0x1C );
          v481 = v253 + 0xE0;
          do
          {
            v482 = *v481;
            for ( k = v481; ; k += 0xFFFFFFF8 )
            {
              v484 = *(k + 0xFFFFFFFF);
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                  ((*(v482 + 0xE0) * (*(&Src + 1) - *(&v577 + 1)))
                                 + ((*&Src * *(&v577 + 1)) - (*(&Src + 1) * *&v577)))
                                - (*(v482 + 0xE8) * (*&Src - *&v577))) & v420) >= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                                 (((*(&Src + 1)
                                                                                                  - *(&v577 + 1))
                                                                                                 * *(v484 + 0xE0))
                                                                                                + ((*&Src * *(&v577 + 1))
                                                                                                 - (*(&Src + 1) * *&v577)))
                                                                                               - ((*&Src - *&v577)
                                                                                                * *(v484 + 0xE8))) & v420) )
                break;
              *k = v484;
            }
            *k = v482;
            v481 += 8;
          }
          while ( v481 != v414 );
        }
      }
      v192 = 1;
      goto LABEL_321;
    }
  }
LABEL_426:
  if ( !override_assertion_handler )
  {
LABEL_429:
    v192 = 0;
    goto LABEL_430;
  }
  *&Str2[8] = "sort_spawn_areas";
  *Str2 = 1;
  *(&v593 + 1) = v187;
  LODWORD(v593) = 1;
  LODWORD(v556) = 2;
  v192 = 0;
  if ( override_assertion_handler(
         0i64,
         "..\\..\\skyquake\\prog\\mission\\actions.cpp",
         0x1135i64,
         "sort_spawn_areas",
         "false",
         "%s: area for spawn sorting (%s) wasn't found.",
         Str2,
         v556) )
  {
    __debugbreak();
    goto LABEL_429;
  }
LABEL_430:
  v184 = v560;
LABEL_431:
  v257 = &v574;
  if ( v557 )
    v257 = &v589;
  v258 = sub_C77720(*(game + 0x420), v257, v573, v609, v173 | v564);
  *(v258 + 0x52) |= (v557 + 4 * v559) | (v566 << 0xA) | (v562 << 8) | (v558 << 0xB) | v183;
  if ( *(v258 + 0x50) >= 3u )
  {
    if ( override_assertion_handler )
    {
      LODWORD(v556) = 0;
      if ( override_assertion_handler(
             0i64,
             "..\\..\\skyquake\\prog\\mission\\actions.cpp",
             0x124Ai64,
             &missionMarkAsReSpawnPoint,
             "(uint32_t)rb.team <= 2",
             0i64,
             0i64,
             v556) )
        __debugbreak();
    }
  }
  if ( !v185 )
    v185 = &szFile;
  v259 = *(v258 + 0x58);
  if ( v259 != v185 )
  {
    if ( v259 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( *v185
      && (v260 = v185, v261 = strlen(v185) + 1, (v262 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v261)) != 0i64) )
    {
      v263 = v262;
      memmove(v262, v260, v261);
    }
    else
    {
      v263 = 0i64;
    }
    *(v258 + 0x58) = v263;
  }
  *(v258 + 0x195) = (v192 | v569) & (v567 ^ 1);
  *(v258 + 0x196) = v565;
  v264 = Str;
  if ( Str )
  {
    v259 = *(v258 + 0x210);
    if ( v259 != Str )
    {
      if ( v259 )
      {
        (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
        v264 = Str;
      }
      if ( *v264 && (v265 = strlen(v264) + 1, (v266 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v265)) != 0i64) )
      {
        v267 = v266;
        memmove(v266, v264, v265);
      }
      else
      {
        v267 = 0i64;
      }
      *(v258 + 0x210) = v267;
    }
  }
  if ( v568 )
    *(v258 + 0x190) = 0;
  *(v258 + 0x197) = 0;
  v268 = *(v258 + 0x70);
  if ( *(v258 + 0x90) )
    memset(*(v258 + 0x98), 0, 4i64 * (*(v258 + 0x94) + 1));
  *(v258 + 0x90) = 0;
  v269 = *(v258 + 0xB8);
  if ( v269 )
  {
    *(v258 + 0xB8) = 0i64;
    _InterlockedAdd(&dword_4B6788C, -((j__msize(v269) + 0xF) >> 4));
    _InterlockedDecrement(&dword_4B67890);
    free(v269);
  }
  *(v258 + 0xC0) = 0i64;
  if ( *(v258 + 0xD0) )
  {
    v270 = *(v258 + 0xC8);
    v271 = 0x10i64 * *(v258 + 0xD0);
    v272 = 0i64;
    do
    {
      v273 = *(v270 + v272);
      if ( v273 )
      {
        *(v270 + v272) = 0i64;
        _InterlockedAdd(&dword_4B6788C, -((j__msize(v273) + 0xF) >> 4));
        _InterlockedDecrement(&dword_4B67890);
        free(v273);
      }
      v272 += 0x10i64;
    }
    while ( v271 != v272 );
  }
  *(v258 + 0xD0) = 0;
  *(v258 + 0xB0) = 0;
  if ( *(v258 + 0xE0) )
    memset(*(v258 + 0xE8), 0, 4i64 * (*(v258 + 0xE4) + 1));
  *(v258 + 0xE0) = 0;
  v274 = *(v258 + 0x108);
  if ( v274 )
  {
    *(v258 + 0x108) = 0i64;
    _InterlockedAdd(&dword_4B6788C, -((j__msize(v274) + 0xF) >> 4));
    _InterlockedDecrement(&dword_4B67890);
    free(v274);
  }
  *(v258 + 0x110) = 0i64;
  if ( *(v258 + 0x120) )
  {
    v275 = *(v258 + 0x118);
    v276 = 0x10i64 * *(v258 + 0x120);
    v277 = 0i64;
    do
    {
      v278 = *(v275 + v277);
      if ( v278 )
      {
        *(v275 + v277) = 0i64;
        _InterlockedAdd(&dword_4B6788C, -((j__msize(v278) + 0xF) >> 4));
        _InterlockedDecrement(&dword_4B67890);
        free(v278);
      }
      v277 += 0x10i64;
    }
    while ( v276 != v277 );
  }
  *(v258 + 0x120) = 0;
  *(v258 + 0x100) = 0;
  v279 = *v184;
  v280 = 0xFFFFFFFF;
  if ( *v184 )
  {
    v281 = data::get_name_id("tags", 4ui64);
    v282 = *(v279 + 0x50);
    if ( v282 )
    {
      v283 = *(v282 + 0x20);
      if ( !*(v279 + 0x20) )
        goto LABEL_483;
    }
    else
    {
      v283 = 0;
      if ( !*(v279 + 0x20) )
        goto LABEL_483;
    }
    v284 = data::get_name_id(v279, "tags", 4ui64, v281);
    if ( v284 >= 0 )
    {
      v285 = v283 + v284;
LABEL_485:
      v280 = v285;
      goto LABEL_486;
    }
LABEL_483:
    if ( !v283 )
      goto LABEL_486;
    v285 = data::get_name_id(*(v279 + 0x50), "tags", 4ui64, v281);
    goto LABEL_485;
  }
LABEL_486:
  v286 = *(v184 + 0x10);
  LODWORD(v608) = v268;
  if ( v286 == 0xFFFFFFFF )
  {
    v292 = *(v184 + 0xE);
    v287 = 0i64;
    if ( *(v184 + 0xE) )
    {
      v293 = v280 + 1;
      v294 = *(v184 + 0x18);
      v259 = *v294;
      v295 = *(v294 + 8) - 8 * v292;
      v296 = 0;
      while ( (*(*&v259[v295] + 8i64) & 0x3FFFFFFF) != v293 )
      {
        ++v296;
        v295 += 8i64;
        if ( v292 == v296 )
          goto LABEL_503;
      }
      if ( v296 >= v292 )
        v287 = 0i64;
      else
        v287 = *&v259[v295];
    }
  }
  else
  {
    v259 = *(v184 + 0xE);
    v287 = 0i64;
    if ( v286 < v286 + v259 )
    {
      v288 = v280 + 1;
      v289 = *v184 + *(*v184 + 0x5Ci64) + 0x90i64;
      v290 = 0;
      while ( 1 )
      {
        v291 = 0x20i64 * (v286 + v290);
        if ( (*(v289 + v291 + 8) & 0x3FFFFFFF) == v288 )
          break;
        if ( v259 == ++v290 )
          goto LABEL_503;
      }
      v297 = v291 + v289;
      v287 = 0i64;
      if ( v290 < v259 )
        v287 = v297;
    }
  }
LABEL_503:
  v298 = v258 + 0x90;
  v299 = &data::get_block_by_name;
  if ( v287 )
    v299 = v287;
  LOWORD(v300) = *(v299 + 6);
  v580 = (v258 + 0x90);
  if ( v300 )
  {
    for ( m = 0i64; m < v300; ++m )
    {
      if ( m >= v300 )
      {
LABEL_525:
        v316 = 0i64;
        goto LABEL_526;
      }
      v305 = *(v299 + 5);
      if ( v305 == 0xFFFFFFFFi64 )
      {
        v306 = *v299;
        v307 = *v299[3];
        if ( !*v299 )
          goto LABEL_525;
      }
      else
      {
        v306 = *v299;
        v307 = *v299 + v305 + 0x90;
        if ( !*v299 )
          goto LABEL_525;
      }
      v308 = *(v307 + 8 * m) & 0xFFFFFF;
      v309 = *(v306 + 0x50);
      if ( v309 )
      {
        v310 = *(v309 + 0x20);
        if ( v310 > v308 )
        {
          v311 = *(*(v309 + 0x18) + 4 * v308);
          v312 = *(v309 + 0x4A);
          v313 = v311 >> v312;
          goto LABEL_522;
        }
      }
      else
      {
        v310 = 0;
      }
      v314 = v308 - v310;
      if ( *(v306 + 0x20) <= v314 )
        goto LABEL_525;
      v311 = *(*(v306 + 0x18) + 4i64 * v314);
      v312 = *(v306 + 0x4A);
      v313 = v311 >> v312;
      v309 = v306;
LABEL_522:
      v315 = (*(v309 + 0x38) + 0x10i64 * v313);
      if ( v313 == *(v309 + 0x40) )
        v315 = (v309 + 0x28);
      v316 = (*v315 + (v311 & ~(0xFFFFFFFF << v312)));
      v298 = v580;
LABEL_526:
      Str2[0] = 0;
      if ( data::get_bool(v299, v316, Str2) )
      {
        if ( !v316 )
          goto LABEL_510;
        v302 = strlen(v316);
        v303 = data::get_name_id(v316, v302);
        v304 = v298;
        goto LABEL_509;
      }
      if ( v316 )
      {
        v302 = strlen(v316);
        v303 = data::get_name_id(v316, v302);
        v304 = v258 + 0xE0;
LABEL_509:
        sub_127A00(v304, v316, v302, v303);
      }
LABEL_510:
      v300 = *(v299 + 6);
    }
  }
  v317 = (v258 + 0x60);
  if ( v608 )
    goto LABEL_530;
  if ( !v557 )
  {
    v321 = v560;
    if ( v559 )
    {
      if ( v317 == &v574 )
      {
LABEL_730:
        v434 = (v258 + 0x78);
        if ( (v258 + 0x78) == &v586 )
        {
LABEL_749:
          v442 = *(v258 + 0x88);
          if ( !v442 )
          {
            v443 = *(v258 + 0x78);
            v444 = *(v258 + 0x80);
            *(v258 + 0x78) = 0i64;
            *(v258 + 0x88) = 0i64;
            if ( v443 )
            {
              (*(*v444 + 0x40i64))(v444);
              v442 = *(v258 + 0x88);
            }
            else
            {
              v442 = 0;
            }
          }
          *(v258 + 0x18C) = v442;
          sub_145C630(v321, Str2, "offset", &MATH_FLOAT_ZERO);
          *(v258 + 0x1DC) = *&Str2[8];
          *(v258 + 0x1D4) = *Str2;
          sub_145C630(v321, Str2, "offsetEnemyUnits", &MATH_FLOAT_ZERO);
          *(v258 + 0x1E8) = *&Str2[8];
          *(v258 + 0x1E0) = *Str2;
          *Str2 = 0x42480000;
          *(v258 + 0x1EC) = data::set_real(v321, "radius", Str2);
          goto LABEL_754;
        }
        v435 = v586;
        v436 = v588;
        v437 = 8i64 * v588;
        if ( *(v258 + 0x8C) >= v588 )
          goto LABEL_736;
        if ( *v434 )
        {
          if ( v588 <= 0x1FF )
            goto LABEL_744;
          if ( (*(**(v258 + 0x80) + 0x30i64))(*(v258 + 0x80), *v434, 8i64 * v588) )
          {
            *(v258 + 0x8C) = v436;
LABEL_736:
            memmove(*(v258 + 0x78), v435, v437);
LABEL_748:
            *(v258 + 0x88) = v436;
            goto LABEL_749;
          }
          if ( *(v258 + 0x78) )
LABEL_744:
            (*(**(v258 + 0x80) + 0x40i64))(*(v258 + 0x80));
        }
        v440 = 2i64;
        if ( v436 >= 3 )
          v440 = v436;
        v441 = (*(**(v258 + 0x80) + 0x18i64))(*(v258 + 0x80), 8 * v440);
        memmove(v441, v435, v437);
        *(v258 + 0x78) = v441;
        v321 = v560;
        *(v258 + 0x8C) = v440;
        goto LABEL_748;
      }
      v325 = v574;
      v326 = v576;
      v327 = 8i64 * v576;
      if ( *(v258 + 0x74) >= v576 )
        goto LABEL_552;
      if ( *v317 )
      {
        if ( v576 < 0x200 )
          goto LABEL_725;
        if ( (*(**(v258 + 0x68) + 0x30i64))(*(v258 + 0x68), *v317, 8i64 * v576) )
        {
          *(v258 + 0x74) = v326;
LABEL_552:
          memmove(*v317, v325, v327);
LABEL_729:
          *(v258 + 0x70) = v326;
          goto LABEL_730;
        }
        if ( *v317 )
LABEL_725:
          (*(**(v258 + 0x68) + 0x40i64))(*(v258 + 0x68));
      }
      v432 = 2i64;
      if ( v326 >= 3 )
        v432 = v326;
      v433 = (*(**(v258 + 0x68) + 0x18i64))(*(v258 + 0x68), 8 * v432);
      memmove(v433, v325, v327);
      *(v258 + 0x60) = v433;
      v321 = v560;
      *(v258 + 0x74) = v432;
      goto LABEL_729;
    }
    if ( v317 == &v574 )
      goto LABEL_754;
    v328 = v574;
    v329 = v576;
    v330 = 8i64 * v576;
    if ( *(v258 + 0x74) >= v576 )
      goto LABEL_559;
    if ( *v317 )
    {
      if ( v576 < 0x200 )
        goto LABEL_738;
      if ( (*(**(v258 + 0x68) + 0x30i64))(*(v258 + 0x68), *v317, 8i64 * v576) )
      {
        *(v258 + 0x74) = v329;
LABEL_559:
        memmove(*(v258 + 0x60), v328, v330);
LABEL_742:
        *(v258 + 0x70) = v329;
        goto LABEL_754;
      }
      if ( *v317 )
LABEL_738:
        (*(**(v258 + 0x68) + 0x40i64))(*(v258 + 0x68));
    }
    v438 = 2i64;
    if ( v329 >= 3 )
      v438 = v329;
    v439 = (*(**(v258 + 0x68) + 0x18i64))(*(v258 + 0x68), 8 * v438);
    memmove(v439, v328, v330);
    *(v258 + 0x60) = v439;
    v321 = v560;
    *(v258 + 0x74) = v438;
    goto LABEL_742;
  }
  v321 = v560;
  if ( v317 == &v589 )
    goto LABEL_672;
  v322 = v589;
  v323 = v591;
  v324 = 8i64 * v591;
  if ( *(v258 + 0x74) >= v591 )
    goto LABEL_544;
  if ( !*v317 )
    goto LABEL_668;
  if ( v591 < 0x200 )
  {
LABEL_667:
    (*(**(v258 + 0x68) + 0x40i64))(*(v258 + 0x68));
    goto LABEL_668;
  }
  if ( !(*(**(v258 + 0x68) + 0x30i64))(*(v258 + 0x68), *v317, 8i64 * v591) )
  {
    if ( *v317 )
      goto LABEL_667;
LABEL_668:
    v378 = 2i64;
    if ( v323 >= 3 )
      v378 = v323;
    v379 = (*(**(v258 + 0x68) + 0x18i64))(*(v258 + 0x68), 8 * v378);
    memmove(v379, v322, v324);
    *(v258 + 0x60) = v379;
    v321 = v560;
    *(v258 + 0x74) = v378;
    goto LABEL_671;
  }
  *(v258 + 0x74) = v323;
LABEL_544:
  memmove(*v317, v322, v324);
LABEL_671:
  *(v258 + 0x70) = v323;
LABEL_672:
  v380 = *v321;
  v381 = 0xFFFFFFFF;
  if ( *v321 )
  {
    v382 = data::get_name_id("object", 6ui64);
    v383 = *(v380 + 0x50);
    if ( v383 )
      v384 = *(v383 + 0x20);
    else
      v384 = 0;
    if ( *(v380 + 0x20) )
    {
      v385 = data::get_name_id(v380, "object", 6ui64, v382);
      if ( v385 >= 0 )
      {
        v386 = v384 + v385;
LABEL_681:
        v381 = v386;
        goto LABEL_682;
      }
    }
    if ( v384 )
    {
      v386 = data::get_name_id(*(v380 + 0x50), "object", 6ui64, v382);
      goto LABEL_681;
    }
  }
LABEL_682:
  sub_CD2950(v258 + 0x78, v321, v381, a1, sub_CD5000, 0i64);
  if ( *(v258 + 0x88) )
  {
    v387 = 0;
    do
    {
      if ( (*(*(*(v258 + 0x78) + 8i64 * v387) + 0x1058i64) & 0x7000014) != 0 )
      {
        v388 = *(v258 + 0x88);
        v389 = v388 - 1;
        if ( v388 - 1 > v387 )
        {
          memmove((*(v258 + 0x78) + 8i64 * v387), (*(v258 + 0x78) + 8i64 * v387 + 8), 8 * v388 - (8i64 * v387 + 8));
          v389 = *(v258 + 0x88) - 1;
        }
        --v387;
        *(v258 + 0x88) = v389;
      }
      else
      {
        v389 = *(v258 + 0x88);
      }
      ++v387;
    }
    while ( v387 < v389 );
  }
  sub_CD4300(v258 + 0x78, a1, v321, "object");
  v390 = *(v258 + 0x88);
  if ( v390 )
    goto LABEL_693;
  v391 = *(v258 + 0x78);
  v392 = *(v258 + 0x80);
  *(v258 + 0x78) = 0i64;
  *(v258 + 0x88) = 0i64;
  if ( v391 )
  {
    (*(*v392 + 0x40i64))(v392);
    v390 = *(v258 + 0x88);
LABEL_693:
    *(v258 + 0x18C) = v390;
    goto LABEL_754;
  }
  *(v258 + 0x18C) = 0;
LABEL_754:
  *Str2 = 0x41F00000;
  *(v258 + 0x1D0) = data::set_real(v321, "PosRecalcDelay", Str2);
  v445 = *v321;
  v446 = 0xFFFFFFFF;
  if ( !*v321 )
    goto LABEL_764;
  v447 = *(v445 + 0x50);
  if ( !v447 )
  {
    v448 = 0;
    if ( !*(v445 + 0x20) )
      goto LABEL_761;
LABEL_759:
    v449 = data::get_name_id(*v321, "spawnArrangeTo", 0xEui64, 0xA6E23C2F);
    if ( v449 >= 0 )
    {
      v450 = v448 + v449;
LABEL_763:
      v446 = v450;
      goto LABEL_764;
    }
    goto LABEL_761;
  }
  v448 = *(v447 + 0x20);
  if ( *(v445 + 0x20) )
    goto LABEL_759;
LABEL_761:
  if ( v448 )
  {
    v450 = data::get_name_id(*(v445 + 0x50), "spawnArrangeTo", 0xEui64, 0xA6E23C2F);
    goto LABEL_763;
  }
LABEL_764:
  v451 = *(v321 + 0x14);
  v452 = *(v321 + 0xC);
  v453 = v452 == 0 || v446 < 0;
  if ( v451 == 0xFFFFFFFFi64 )
  {
    if ( v453 )
      goto LABEL_801;
    v454 = **(v321 + 0x18);
    v457 = 8 * v452;
    v458 = 0i64;
    while ( (*(v454 + v458) & 0xFFFFFF) != v446 )
    {
      v458 += 8i64;
      if ( v457 == v458 )
        goto LABEL_801;
    }
    v456 = (v454 + v458);
  }
  else
  {
    if ( v453 )
      goto LABEL_801;
    v454 = *v321 + v451 + 0x90;
    v455 = 8 * v452;
    v456 = v454;
    while ( (*v456 & 0xFFFFFF) != v446 )
    {
      v456 += 2;
      v455 -= 8i64;
      if ( !v455 )
        goto LABEL_801;
    }
  }
  if ( ((v456 - v454) & 0x400000000i64) != 0 )
    goto LABEL_801;
  *Str2 = 0i64;
  *&Str2[8] = off_4B678C0;
  *&v593 = 0i64;
  v459 = &off_44CF850;
  v460 = 0i64;
  while ( strcmp(*v459, "isAlive") )
  {
    ++v460;
    ++v459;
    if ( v460 == 0x31 )
    {
      v460 = 0i64;
      break;
    }
  }
  v461 = funcs_7FF717B84E97[v460];
  sub_CD2950(Str2, v321, v446, a1, v461, 0i64);
  if ( v593 )
  {
    v462 = 0;
    do
    {
      if ( v461() )
      {
        v463 = v593;
      }
      else
      {
        v463 = v593 - 1;
        if ( v593 - 1 > v462 )
        {
          memmove((*Str2 + 8i64 * v462), (*Str2 + 8i64 * v462 + 8), 8i64 * v593 - (8i64 * v462 + 8));
          v463 = v593 - 1;
        }
        --v462;
        LODWORD(v593) = v463;
      }
      ++v462;
    }
    while ( v462 < v463 );
  }
  sub_CD4300(Str2, a1, v321, "object");
  if ( !v593 )
  {
    if ( *(v321 + 0x14) == 0xFFFFFFFF )
      v474 = sub_14604F0(v321, "spawnArrangeTo", v464);
    else
      v474 = sub_14606A0(v321, "spawnArrangeTo", v464);
    v475 = v474;
    if ( !v474 )
      goto LABEL_890;
    v476 = *(game + 0x420);
    if ( !v476 )
      goto LABEL_890;
    v477 = *v474;
    if ( *v475 == 0x40 )
    {
      if ( !*(a1 + 0x50) )
      {
        v477 = 0x40;
LABEL_881:
        v507 = (v475 + 1);
        v508 = 0x811C9DC5;
        do
        {
          v508 = v477 ^ (0x1000193 * v508);
          v477 = *v507++;
        }
        while ( v477 );
        v509 = v508;
        v510 = *(v476 + 0x1F8);
        if ( v508 >= v510 )
          v509 = v508 % v510;
        v511 = *(v476 + 0x1F0);
        v512 = *(v511 + 8 * v509);
        if ( v512 )
        {
          while ( 1 )
          {
            v513 = *v512;
            if ( !*v512 )
              v513 = &szFile;
            if ( !strcmp(v513, v475) )
              break;
            v512 = *(v512 + 0x10);
            if ( !v512 )
              goto LABEL_890;
          }
          if ( v512 != *(v511 + 8 * v510) )
          {
            v514 = *(v512 + 8);
            if ( v514 )
            {
              if ( (*(v514 + 0x58) - 1) > 1 )
              {
                v517 = *(v514 + 0xE0);
                v516 = *(v514 + 0xE4);
                v515 = *(v514 + 0xE8);
              }
              else
              {
                v515 = (*(v514 + 0xD0) * *&screenScaleFactor) + *(v514 + 0xE8);
                v516 = (*(v514 + 0xCC) * *&screenScaleFactor) + *(v514 + 0xE4);
                v517 = (*&screenScaleFactor * *(v514 + 0xC8)) + *(v514 + 0xE0);
              }
              v466 = j__malloc_base(0x20ui64);
              v321 = v560;
              if ( v466 )
                goto LABEL_955;
              while ( off_4B678A0 && off_4B678A0(0x20i64) )
              {
                v550 = j__malloc_base(0x20ui64);
                if ( v550 )
                {
                  v466 = v550;
                  v321 = v560;
LABEL_955:
                  _InterlockedAdd(&dword_4B6788C, (j__msize(v466) + 0xF) >> 4);
                  _InterlockedIncrement(&dword_4B67890);
                  v466[1] = v258;
                  *v466 = off_44CF040;
                  *(v466 + 4) = v517;
                  *(v466 + 5) = v516;
                  *(v466 + 6) = v515;
                  goto LABEL_796;
                }
              }
              v578 = (word_1C + 4);
              goto LABEL_965;
            }
          }
        }
LABEL_890:
        v578 = "initSpawnDirection";
        LODWORD(v577) = 1;
        logmessage_fmt(0x47495254u, "%s can't find spawnArrangeTo direction for unit zone (isUnit = true)", &v577, 1);
        if ( override_assertion_handler )
        {
          v578 = "initSpawnDirection";
          LODWORD(v577) = 1;
          if ( override_assertion_handler(
                 0i64,
                 "..\\..\\skyquake\\prog\\mission\\actions.cpp",
                 0x35Di64,
                 "initSpawnDirection",
                 "0",
                 "%s can't find spawnArrangeTo direction for unit zone (isUnit = true)",
                 &v577) )
            __debugbreak();
        }
        v321 = v560;
        if ( *Str2 )
          goto LABEL_800;
        goto LABEL_801;
      }
      v478 = *(a1 + 0x40);
      v479 = 0x20i64 * *(a1 + 0x50);
      v480 = 0i64;
      while ( strcmp(*(v478 + v480), v475 + 1) )
      {
        v480 += 0x20i64;
        if ( v479 == v480 )
          goto LABEL_878;
      }
      if ( (*(v478 + v480 + 8) & 0xF) == 1 )
        v475 = *(v478 + v480 + 0x10);
LABEL_878:
      if ( !v475 )
        goto LABEL_890;
      v477 = *v475;
    }
    if ( !v477 )
      goto LABEL_890;
    goto LABEL_881;
  }
  v465 = *Str2;
  v466 = j__malloc_base(0x18ui64);
  if ( v466 )
    goto LABEL_795;
  do
  {
    if ( !off_4B678A0 || !off_4B678A0(0x18i64) )
    {
      v578 = &word_18;
LABEL_965:
      LODWORD(v577) = 2;
      v506 = &v577;
LABEL_875:
      LOBYTE(v65) = 1;
      log_err("..\\..\\prog\\engine2\\memory\\dagmem.cpp", 0x345, v65, "Not enough memory to alloc %llu bytes", v506, 1);
    }
    v467 = j__malloc_base(0x18ui64);
  }
  while ( !v467 );
  v466 = v467;
LABEL_795:
  _InterlockedAdd(&dword_4B6788C, (j__msize(v466) + 0xF) >> 4);
  _InterlockedIncrement(&dword_4B67890);
  v468 = *v465;
  v466[1] = v258;
  *v466 = off_44CF020;
  v466[2] = v468;
LABEL_796:
  v469 = *(v258 + 0x200);
  if ( v469 != v466 )
  {
    *(v258 + 0x200) = v466;
    if ( v469 )
      (*(*v469 + 0x10i64))(v469, 1i64);
  }
  if ( *Str2 )
LABEL_800:
    (*(**&Str2[8] + 0x40i64))(*&Str2[8]);
LABEL_801:
  if ( !*(v258 + 0x70) )
  {
    if ( override_assertion_handler )
    {
      LODWORD(v556) = 0;
      if ( override_assertion_handler(
             0i64,
             "..\\..\\skyquake\\prog\\mission\\actions.cpp",
             0x1281i64,
             &missionMarkAsReSpawnPoint,
             "rb.areas_or_airfields.size()",
             0i64,
             0i64,
             v556) )
        __debugbreak();
    }
  }
  if ( *(v258 + 0x88) )
  {
    Str2[0] = 0;
    v470 = data::get_bool(v321, "awardByBodyHp", Str2);
    *(v258 + 0x194) = v470;
    if ( v470 )
    {
      if ( *(v258 + 0x88) != 1 )
      {
        if ( override_assertion_handler )
        {
          LODWORD(v556) = 0;
          if ( override_assertion_handler(
                 0i64,
                 "..\\..\\skyquake\\prog\\mission\\actions.cpp",
                 0x1286i64,
                 &missionMarkAsReSpawnPoint,
                 "!rb.awardByBodyHp || (rb.units.size() == 1)",
                 "missionMarkAsRespawnPoint: awardByBodyHp should not be set for multiple units",
                 0i64,
                 v556) )
            __debugbreak();
        }
      }
    }
  }
  sub_C8B0F0(v258);
  v471 = *&qword_4ACF768;
  if ( *&qword_4ACF768 )
  {
    if ( !*(*&qword_4ACF768 + 0x94i64) )
    {
      v472 = v580;
      v473 = 2;
      if ( data::get_name_id(v580, "ship", 4ui64, 0xB6956EB1) >= 0
        || data::get_name_id(v472, "destroyer", 9ui64, 0xDF6E8395) >= 0
        || (v473 = 1, data::get_name_id(v580, "tank", 4ui64, 0xDB8E249C) >= 0) )
      {
        *(v471 + 0x94) = v473;
      }
    }
  }
LABEL_530:
  if ( (*(v258 + 0x52) & 1) == 0 )
  {
    v318 = *(v258 + 0x70);
    if ( v318 )
    {
      for ( n = 0i64; n < v318; ++n )
      {
        v320 = *(*v317 + n);
        if ( v320 )
        {
          sub_C97C60(v320);
          v318 = *(v258 + 0x70);
        }
      }
    }
  }
  LOBYTE(v259) = 0xFF;
  sub_12110D0(v258, v259);
LABEL_659:
  if ( v586 )
    (*(*v587 + 0x40i64))(v587);
  if ( v589 )
    (*(*v590 + 0x40i64))(v590);
  if ( v574 )
    (*(*v575 + 0x40i64))(v575);
  return 1;
}
