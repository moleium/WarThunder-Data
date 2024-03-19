void __fastcall apply_global_blk(__int64 hud, __int64 a2)
{
  v217 = a2;
  v216 = sub_145DB90(a2, "profile");
  if ( *(hud + 0x39458) )
  {
    v3 = sub_145DB90(v216, "internet_radio_stations");
    if ( *(hud + 0x39458) )
    {
      v4 = v3;
      v5 = 0i64;
      v6 = 0i64;
      do
      {
        v7 = add_ss_section(v4, "station");
        v8 = *(hud + 0x39448);
        v9 = &szFile;
        if ( *(v8 + v5 + 0x10) )
          v9 = *(v8 + v5);
        sub_145A110(v7, "name", v9);
        v10 = *(hud + 0x39448);
        v11 = &szFile;
        if ( *(v10 + v5 + 0x28) )
          v11 = *(v10 + v5 + 0x18);
        sub_145A110(v7, "path", v11);
        ++v6;
        v5 += 0x30i64;
      }
      while ( v6 != *(hud + 0x39458) );
    }
  }
  v12 = v216;
  if ( *(hud + 0x39470) )
  {
    v13 = sub_145DB90(v216, "seen_missions");
    if ( *(hud + 0x39470) )
    {
      v14 = v13;
      v15 = 0x10i64;
      v16 = 0i64;
      do
      {
        v17 = *(hud + 0x39460);
        v18 = &szFile;
        if ( *(v17 + v15) )
          v18 = *(v17 + v15 - 0x10);
        sub_145A110(v14, "GUID", v18);
        ++v16;
        v15 += 0x18i64;
      }
      while ( v16 != *(hud + 0x39470) );
    }
  }
  if ( *(hud + 0x39488) )
  {
    v19 = sub_145DB90(v216, "fav_missions");
    if ( *(hud + 0x39488) )
    {
      v20 = v19;
      v21 = 0x10i64;
      v22 = 0i64;
      do
      {
        v23 = *(hud + 0x39478);
        v24 = &szFile;
        if ( *(v23 + v21) )
          v24 = *(v23 + v21 - 0x10);
        sub_145A110(v20, "name", v24);
        ++v22;
        v21 += 0x18i64;
      }
      while ( v22 != *(hud + 0x39488) );
    }
  }
  if ( *(hud + 0xEB98) )
  {
    if ( *(hud + 0x375) )
    {
      v25 = sub_145DB90(v216, "delayed_download_contents");
      if ( *(hud + 0xEB98) )
      {
        v26 = v25;
        v27 = 0x10i64;
        v28 = 0i64;
        do
        {
          v29 = *(*(game + 0x430) + 0xEB88i64);
          v30 = &szFile;
          if ( *(v29 + v27) )
            v30 = *(v29 + v27 - 0x10);
          sub_145A110(v26, "tex", v30);
          ++v28;
          v27 += 0x18i64;
        }
        while ( v28 < *(hud + 0xEB98) );
      }
    }
  }
  sub_145F7B0(v216, "summary_stat_2");
  sub_145DB90(v216, "warpoints_stat");
  v31 = sub_145DB90(v216, "last_played");
  if ( v31 )
  {
    v32 = v31;
    if ( *(hud + 0x38EC8) >= 2u && *(hud + 0x38EE0) >= 2u )
    {
      v33 = &szFile;
      sub_145A110(v31, "campaignChapter", *(hud + 0x38EB8));
      if ( *(hud + 0x38EE0) )
        v33 = *(hud + 0x38ED0);
      sub_145A110(v32, "campaignItem", v33);
    }
    if ( *(hud + 0x38EF8) >= 2u && *(hud + 0x38F10) >= 2u )
    {
      v34 = &szFile;
      sub_145A110(v32, "tutorialChapter", *(hud + 0x38EE8));
      if ( *(hud + 0x38F10) )
        v34 = *(hud + 0x38F00);
      sub_145A110(v32, "tutorialItem", v34);
    }
    if ( *(hud + 0x38F40) >= 2u )
      sub_145A110(v32, "versusItem", *(hud + 0x38F30));
    v209 = 0i64;
    v210 = off_4B678C8;
    v211 = 0i64;
    v35 = (hud + 0x38F70);
    v36 = 0i64;
    v37 = 0i64;
    do
    {
      if ( v35[0xFFFFFFFA] >= 2u && *v35 >= 2u )
      {
        v214 = v37;
        LODWORD(v213) = 2;
        ctor_vprintf(&v209, 0x20i64, "sm%dChapter", &v213, 1);
        v39 = &szFile;
        if ( v35[0xFFFFFFFA] )
          v39 = *(v35 + 0xFFFFFFFB);
        v40 = &szFile;
        if ( v211 )
          v40 = v209;
        sub_145A110(v32, v40, v39);
        v214 = v37;
        LODWORD(v213) = 2;
        ctor_vprintf(&v209, 0x20i64, "sm%dItem", &v213, 1);
        v41 = &szFile;
        if ( *v35 )
          v41 = *(v35 + 0xFFFFFFFE);
        v36 = v209;
        v38 = v209;
        if ( !v211 )
          v38 = &szFile;
        sub_145A110(v32, v38, v41);
      }
      v37 = (v37 + 1);
      v35 += 0xC;
    }
    while ( v37 != &word_8 );
    v42 = *(hud + 0x390C8);
    if ( v42 < 8 )
      data::add_int(v32, "lastSinglMissionPlayed", v42);
    v12 = v216;
    if ( v36 )
      (*(*v210 + 0x40i64))(v210, v36);
  }
  v43 = sub_145DB90(v217, "settings");
  if ( v43 )
  {
    v44 = v43;
    v45 = *(hud + 0x90);
    v46 = xmmword_4AD8FA8;
    if ( v45 >= 0 && v45 < xmmword_4AD8FA8 )
    {
      v47 = 5 * v45;
      v48 = &szFile;
      if ( *(qword_4AD8F98 + 8 * v47 + 0x18) )
        v48 = *(qword_4AD8F98 + 8 * v47 + 0x18);
      sub_145A110(v44, "speed", v48);
      v46 = xmmword_4AD8FA8;
    }
    v49 = *(hud + 0x94);
    if ( v49 >= 0 && v49 < v46 )
    {
      v50 = 5 * v49;
      v51 = &szFile;
      if ( *(qword_4AD8F98 + 8 * v50 + 0x18) )
        v51 = *(qword_4AD8F98 + 8 * v50 + 0x18);
      sub_145A110(v44, "alt", v51);
      v46 = xmmword_4AD8FA8;
    }
    v52 = *(hud + 0x98);
    if ( v52 >= 0 && v52 < v46 )
    {
      v53 = 5 * v52;
      v54 = &szFile;
      if ( *(qword_4AD8F98 + 8 * v53 + 0x18) )
        v54 = *(qword_4AD8F98 + 8 * v53 + 0x18);
      sub_145A110(v44, "dist", v54);
      v46 = xmmword_4AD8FA8;
    }
    v55 = *(hud + 0x9C);
    if ( v55 >= 0 && v55 < v46 )
    {
      v56 = 5 * v55;
      v57 = &szFile;
      if ( *(qword_4AD8F98 + 8 * v56 + 0x18) )
        v57 = *(qword_4AD8F98 + 8 * v56 + 0x18);
      sub_145A110(v44, "climbSpeed", v57);
      v46 = xmmword_4AD8FA8;
    }
    v58 = *(hud + 0xA0);
    if ( v58 >= 0 && v58 < v46 )
    {
      v59 = 5 * v58;
      v60 = &szFile;
      if ( *(qword_4AD8F98 + 8 * v59 + 0x18) )
        v60 = *(qword_4AD8F98 + 8 * v59 + 0x18);
      sub_145A110(v44, "temperature", v60);
      v46 = xmmword_4AD8FA8;
    }
    v61 = *(hud + 0xA4);
    if ( v61 >= 0 && v61 < v46 )
    {
      v62 = 5 * v61;
      v63 = &szFile;
      if ( *(qword_4AD8F98 + 8 * v62 + 0x18) )
        v63 = *(qword_4AD8F98 + 8 * v62 + 0x18);
      sub_145A110(v44, "wingLoading", v63);
      v46 = xmmword_4AD8FA8;
    }
    v64 = *(hud + 0xA8);
    if ( v64 >= 0 && v64 < v46 )
    {
      v65 = 5 * v64;
      v66 = &szFile;
      if ( *(qword_4AD8F98 + 8 * v65 + 0x18) )
        v66 = *(qword_4AD8F98 + 8 * v65 + 0x18);
      sub_145A110(v44, "powerToWeightRatio", v66);
    }
    assign_char_property(v44, "grassInTankVision", *(hud + 0x18));
    assign_char_property(v44, "selectedOnce", *(hud + 0x3AC));
    data::add_int(v44, "indicatedSpeedType", *(hud + 0x1C));
    assign_char_property(v44, "horizontalSpeed", *(hud + 0x20));
    assign_char_property(v44, "autoShowChat", *(hud + 0x21));
    data::add_int(v44, "chatMessages", *(hud + 0x4C));
    data::add_int(v44, "tacticalMapScale", *(hud + 0x50));
    assign_char_property(v44, "chatFilter", *(hud + 0x22));
    assign_char_property(v44, "showPilot", *(hud + 0x23));
    assign_char_property(v44, "gunVerticalTargeting", *(hud + 0x24));
    assign_char_property(v44, "showDeflection", *(hud + 0x310));
    assign_char_property(v44, "showGyroSightDeflection", *(hud + 0x311));
    assign_char_property(v44, "hudScreenshotLogo", *(hud + 0x312));
    data::add_int(v44, "showIndicatorsMode", *(hud + 0x314));
    assign_char_property(v44, "showIndicatorsModeTitle", *(hud + 0x314) >> 7);
    data::add_int(v44, "hudShowFuel", *(hud + 0x320));
    data::add_int(v44, "hudShowAmmo", *(hud + 0x324));
    data::add_int(v44, "hudShowTemperature", *(hud + 0x328));
    data::add_int(v44, "hudTpsCrosshairType", *(hud + 0x330));
    data::add_int(v44, "hudCrosshairColorPreset", *(hud + 0x334));
    data::add_int(v44, "autoPilotOnBombAndGunnerView", *(hud + 0x33C));
    assign_char_property(v44, "autoRearmOnAirfield", *(hud + 0x340));
    assign_char_property(v44, "enableLaserDesignatorBeforeLaunch", *(hud + 0x341));
    assign_char_property(v44, "seekerAutoStabilization", *(hud + 0x342));
    assign_char_property(v44, "activateAirborneRadarOnSpawn", *(hud + 0x343));
    assign_char_property(v44, "useRectangularRadarIndicator", *(hud + 0x344));
    assign_char_property(v44, "radarTargetCycling", *(hud + 0x345));
    assign_char_property(v44, "useRadarAimElevationControl", *(hud + 0x346));
    assign_char_property(v44, "useRadarHudInCockpit", *(hud + 0x347));
    assign_char_property(v44, "useTwsHudInCockpit", *(hud + 0x348));
    assign_char_property(v44, "activateAirborneActiveCounterMeasuresOnSpawn", *(hud + 0x349));
    assign_char_property(v44, "activateAirborneWeaponSelectionOnSpawn", *(hud + 0x34A));
    assign_char_property(v44, "automaticEmptyContainersJettison", *(hud + 0x34B));
    data::add_int(v44, "hintsMask", *(hud + 0x338));
    assign_char_property(v44, "autosaveReplays", *(hud + 0x35));
    assign_char_property(v44, "showAttachables", *(hud + 0x36));
    assign_char_property(v44, "enableXrayDeath", *(hud + 0x35D));
    assign_char_property(v44, "enableXrayKill", *(hud + 0x35E));
    data::add_int(v44, "isSubtitles", *(hud + 0xB0));
    data::add_int(v44, "isSubtitlesRadio", *(hud + 0xB4));
    assign_char_property(v44, "vwsOnlyInCockpit", *(hud + 0xBA));
    assign_char_property(v44, "usePTT", *(hud + 0xB8));
    assign_char_property(v44, "useVoiceChat", *(hud + 0xB9));
    data::add_int(v44, "voiceMessageVoice", *(hud + 0x5DC));
    data::add_int(v44, "viewType", *(hud + 0x54));
    assign_char_property(v44, "enableControllerLight", *(hud + 0x369));
    assign_char_property(v44, "useOculusToAimHelicopter", *(hud + 0x37));
    data::add_int(v44, "autoPilotOnGunnerViewHelicopter", *(hud + 0x38));
    assign_char_property(v44, "hideMouseInSpectator", *(hud + 0x3C));
    assign_char_property(v44, "fixGunInMouseLook", *(hud + 0x3D));
    assign_char_property(v44, "delayedDownloadContent", *(hud + 0x36F));
    assign_char_property(v44, "replaySnapshotsEnabled", *(hud + 0x378));
    data::add_int(v44, "recordSnapshotPeriod", *(hud + 0x37C));
    data::add_int(v44, "preferredDifficulty", *(hud + 0x280));
    data::add_int(v44, "preferredTeam", *(hud + 0x284));
    data::add_int(v44, "voiceLanguageType", *(hud + 0x5D0));
    data::add_int(v44, "aerobaticsSmokeType", *(hud + 0x288));
    data::add_int(v44, "aerobaticsSmokeColors", *(hud + 0x28C));
    data::add_int(v44, "gunConvergenceDistance", *(hud + 0x2C0));
    assign_string_float(v44, "bombDelayExplosion");
    assign_string_float(v44, "depthChargeDelayExplosion");
    data::add_int(v44, "bombActivationType", *(hud + 0x2CC));
    assign_string_float(v44, "rocketFuseDist");
    assign_string_float(v44, "torpedoDiveDepth");
    data::add_int(v44, "countermeasuresSeries", *(hud + 0x2DC));
    assign_string_float(v44, "countermeasuresPeriods");
    assign_string_float(v44, "countermeasuresSeriesPeriods");
    data::add_int(v44, "bombSeries", *(hud + 0x2E4));
    data::add_int(v44, "hudColor", *(hud + 0x44));
    data::add_int(v44, "hudIndicators", *(hud + 0x48));
    assign_char_property(v44, "hangarSound", *(hud + 0xAC));
    assign_char_property(v44, "usePerfectRangefinder", *(hud + 0x2F4));
    assign_char_property(v44, "saveAiTargetType", *(hud + 0x318));
    data::add_int(v44, "defaultAiTargetType", *(hud + 0x31C));
    assign_char_property(v44, "enableSoundSpeed", *(hud + 0x3BC));
    data::add_int(v44, "aiGunnerTime", *(hud + 0x40));
    v213 = 0i64;
    v214 = off_4B678C8;
    v215 = 0i64;
    v210 = (&_ImageBase + 1);
    LODWORD(v209) = 2;
    ctor_vprintf(&v213, 0x20i64, "favoriteVoiceMessage%i", &v209, 1);
    v67 = &szFile;
    v68 = &szFile;
    if ( v215 )
      v68 = v213;
    data::add_int(v44, v68, *(hud + 0x290));
    v210 = (&_ImageBase + 2);
    LODWORD(v209) = 2;
    ctor_vprintf(&v213, 0x20i64, "favoriteVoiceMessage%i", &v209, 1);
    v69 = &szFile;
    if ( v215 )
      v69 = v213;
    data::add_int(v44, v69, *(hud + 0x294));
    v210 = (&_ImageBase + 3);
    LODWORD(v209) = 2;
    ctor_vprintf(&v213, 0x20i64, "favoriteVoiceMessage%i", &v209, 1);
    v70 = &szFile;
    if ( v215 )
      v70 = v213;
    data::add_int(v44, v70, *(hud + 0x298));
    v210 = &word_4;
    LODWORD(v209) = 2;
    ctor_vprintf(&v213, 0x20i64, "favoriteVoiceMessage%i", &v209, 1);
    v71 = &szFile;
    if ( v215 )
      v71 = v213;
    data::add_int(v44, v71, *(hud + 0x29C));
    v210 = (&word_4 + 1);
    LODWORD(v209) = 2;
    ctor_vprintf(&v213, 0x20i64, "favoriteVoiceMessage%i", &v209, 1);
    v72 = &szFile;
    if ( v215 )
      v72 = v213;
    data::add_int(v44, v72, *(hud + 0x2A0));
    v210 = &word_6;
    LODWORD(v209) = 2;
    ctor_vprintf(&v213, 0x20i64, "favoriteVoiceMessage%i", &v209, 1);
    v73 = &szFile;
    if ( v215 )
      v73 = v213;
    data::add_int(v44, v73, *(hud + 0x2A4));
    v210 = (&word_6 + 1);
    LODWORD(v209) = 2;
    ctor_vprintf(&v213, 0x20i64, "favoriteVoiceMessage%i", &v209, 1);
    v74 = &szFile;
    if ( v215 )
      v74 = v213;
    data::add_int(v44, v74, *(hud + 0x2A8));
    v210 = &word_8;
    LODWORD(v209) = 2;
    ctor_vprintf(&v213, 0x20i64, "favoriteVoiceMessage%i", &v209, 1);
    v75 = &szFile;
    if ( v215 )
      v75 = v213;
    data::add_int(v44, v75, *(hud + 0x2AC));
    v210 = (&word_8 + 1);
    LODWORD(v209) = 2;
    ctor_vprintf(&v213, 0x20i64, "favoriteVoiceMessage%i", &v209, 1);
    v76 = &szFile;
    if ( v215 )
      v76 = v213;
    data::add_int(v44, v76, *(hud + 0x2B0));
    v210 = &word_A;
    LODWORD(v209) = 2;
    ctor_vprintf(&v213, 0x20i64, "favoriteVoiceMessage%i", &v209, 1);
    v77 = &szFile;
    if ( v215 )
      v77 = v213;
    data::add_int(v44, v77, *(hud + 0x2B4));
    v210 = (&word_A + 1);
    LODWORD(v209) = 2;
    ctor_vprintf(&v213, 0x20i64, "favoriteVoiceMessage%i", &v209, 1);
    v78 = &szFile;
    if ( v215 )
      v78 = v213;
    data::add_int(v44, v78, *(hud + 0x2B8));
    v210 = &word_C;
    LODWORD(v209) = 2;
    ctor_vprintf(&v213, 0x20i64, "favoriteVoiceMessage%i", &v209, 1);
    v79 = *(hud + 0x2BC);
    v80 = v213;
    v218 = v213;
    if ( !v215 )
      v80 = &szFile;
    data::add_int(v44, v80, v79);
    data::add_int(v44, "timesIntroVideoPlayed", *(hud + 0x384));
    assign_string_float(v44, "graphicsAutodetectGpuTimeAvg");
    if ( *(hud + 0x3A0) )
      v67 = *(hud + 0x390);
    sub_145A110(v44, "graphicsAutodetectGpuInfo", v67);
    assign_string_float(v44, "graphicsAutodetectTimestamp");
    assign_char_property(v44, "enableInstructorGroundAvoidance", *(hud + 0x358));
    assign_char_property(v44, "enableInstructorGearControl", *(hud + 0x359));
    assign_char_property(v44, "enableInstructorFlapsControl", *(hud + 0x35A));
    assign_char_property(v44, "enableInstructorEngineControl", *(hud + 0x35B));
    assign_char_property(v44, "enableInstructorSimpleJoy", *(hud + 0x35C));
    assign_char_property(v44, "storeZoomMapByLevel", *(hud + 0x367));
    assign_char_property(v44, "needShowCompassInTankHud", *(hud + 0x36C));
    assign_char_property(v44, "pitchBlockerWhileBraking", *(hud + 0x36D));
    data::add_int(v44, "commanderCameraInViews", *(hud + 0x370));
    assign_char_property(v44, "saveDirWhileSwitchTrigger", *(hud + 0x376));
    v81 = "..\\..\\skyquake\\prog\\main\\playerProfile.cpp";
    v82 = 0x400000000003i64;
    while ( 1 )
    {
      v83 = *v81 - 0x2E;
      if ( v83 > 0x2E || !_bittest64(&v82, v83) )
        break;
      ++v81;
    }
    v210 = v81;
    LODWORD(v209) = 1;
    v212 = 0x6CCi64;
    LODWORD(v211) = 2;
    logmessage_fmt(3u, "cp: %s,%d", &v209, 2);
    sub_145A110(v44, "hudArcade", off_44B5F70[*(hud + 0x34C)]);
    sub_145A110(v44, &unk_498BCB5, off_44B5F70[*(hud + 0x350)]);
    sub_145A110(v44, "hudHardcore", off_44B5F70[*(hud + 0x354)]);
    v84 = sub_145DB90(v44, "customSettings");
    sub_1458A90(v84, (hud + 0x4F8), 0i64);
    v85 = sub_145DB90(v44, "internetRadioSettings");
    sub_1458A90(v85, (hud + 0x518), 0i64);
    v86 = sub_145DB90(v44, "unitsSettings");
    sub_1458A90(v86, (hud + 0x538), 0i64);
    v87 = sub_145DB90(v44, "userSkins");
    sub_1458A90(v87, (hud + 0x558), 0i64);
    assign_char_property(v44, "showDestroyedParts", *(hud + 0x3B4));
    assign_char_property(v44, "activateGroundRadarOnSpawn", *(hud + 0x3B5));
    assign_char_property(v44, "groundRadarTargetCycling", *(hud + 0x3B6));
    assign_char_property(v44, "activateGroundActiveCounterMeasuresOnSpawn", *(hud + 0x3B7));
    assign_char_property(v44, "tankGunnerCameraFromSight", *(hud + 0x3CC));
    v88 = sub_145DB90(v44, "tankAltCrosshair");
    sub_1458A90(v88, (hud + 0x3D0), 0i64);
    data::add_int(v44, "saveZoomCameraSetting", *(hud + 0x3F0));
    assign_char_property(v44, "playInactiveWindowSound", *(hud + 0x3BB));
    v89 = sub_145DB90(v44, "forbid_visual_tags");
    if ( *(hud + 0x588) )
    {
      v90 = v89;
      v91 = 0i64;
      do
      {
        v92 = *(*(hud + 0x578) + 8 * v91);
        if ( !v92 )
          v92 = &szFile;
        assign_char_property(v90, v92, 1);
        ++v91;
      }
      while ( v91 < *(hud + 0x588) );
    }
    v93 = sub_145DB90(v44, "hitIndicator");
    v94 = *&dword_44890B4;
    data::add_int(v93, "radius", (*(hud + 0xDC) * *&dword_44890B4));
    data::add_int(v93, "scale", (*(hud + 0xE0) * v94));
    data::add_int(v93, "alpha", (*(hud + 0xE4) * v94));
    data::add_int(v93, "timeout", *(hud + 0xE8));
    v95 = sub_145DB90(v44, "lwsIndicator");
    data::add_int(v95, "radius", (*(hud + 0xEC) * v94));
    data::add_int(v95, "scale", (*(hud + 0xF0) * v94));
    data::add_int(v95, "alpha", (*(hud + 0xF4) * v94));
    data::add_int(v95, "timeout", *(hud + 0xF8));
    v96 = sub_145DB90(v44, "lwsIndicatorHelicopter");
    data::add_int(v96, "radius", (*(hud + 0xFC) * v94));
    data::add_int(v96, "scale", (*(hud + 0x100) * v94));
    data::add_int(v96, "alpha", (v94 * *(hud + 0x104)));
    data::add_int(v96, "timeout", *(hud + 0x108));
    assign_char_property(v44, "advancedHitIndicatorSimplified", *(hud + 0xD9));
    data::add_int(v44, "lwsAzimuthIndicatorTimeout", *(hud + 0x10C));
    data::add_int(v44, "lwsAzimuthIndicatorTimeoutHelicopter", *(hud + 0x110));
    data::add_int(v44, "freeCameraZoomSpeed", *(hud + 0x5C8));
    data::add_int(v44, "replayCameraFov", *(hud + 0x5CC));
    if ( v218 )
      (*(*v214 + 0x40i64))(v214);
    v12 = v216;
  }
  LODWORD(v209) = *(hud + 0x39434);
  if ( *(v12 + 5) != 0xFFFFFFFF )
    sub_145E9A0(v12);
  sub_145A790(v12, "scoutTargetSuccess", &v209);
  LODWORD(v209) = *(hud + 0x39438);
  if ( *(v12 + 5) != 0xFFFFFFFF )
    sub_145E9A0(v12);
  sub_145A790(v12, "scoutBinocularSuccess", &v209);
  LODWORD(v209) = *(hud + 0x3943C);
  if ( *(v12 + 5) != 0xFFFFFFFF )
    sub_145E9A0(v12);
  sub_145A790(v12, "footballTargetLockShown", &v209);
  LOBYTE(v209) = *(hud + 0x39440);
  if ( *(v12 + 5) != 0xFFFFFFFF )
    sub_145E9A0(v12);
  data::set_bool(v12, "automaticExtinguisher", &v209);
  LOBYTE(v209) = *(hud + 0x39442);
  if ( *(v12 + 5) != 0xFFFFFFFF )
    sub_145E9A0(v12);
  data::set_bool(v12, "automaticRepair", &v209);
  LOBYTE(v209) = *(hud + 0x39441);
  if ( *(v12 + 5) != 0xFFFFFFFF )
    sub_145E9A0(v12);
  data::set_bool(v12, "automaticPump", &v209);
  LODWORD(v209) = *(hud + 0x39498);
  if ( *(v12 + 5) != 0xFFFFFFFF )
    sub_145E9A0(v12);
  sub_145A790(v12, "globalSaveVersion", &v209);
  LODWORD(v209) = 2;
  if ( *(v12 + 5) != 0xFFFFFFFF )
    sub_145E9A0(v12);
  sub_145A790(v12, "saveVersion", &v209);
  v97 = sub_145DB90(v12, &unk_48A9039);
  LODWORD(v98) = *(hud + 0x39118);
  if ( v98 > 0 )
  {
    v99 = 0i64;
    do
    {
      if ( v99 >= v98 )
      {
        v100 = 0i64;
      }
      else
      {
        v101 = *(hud + 0x39142);
        v102 = *(*(hud + 0x39110) + 4 * v99) >> v101;
        v103 = (hud + 0x39120);
        if ( v102 != *(hud + 0x39138) )
          v103 = (*(hud + 0x39130) + 0x10 * v102);
        v100 = (*v103 + (*(*(hud + 0x39110) + 4 * v99) & ~(0xFFFFFFFF << v101)));
      }
      data::add_int(v97, v100, *(*(hud + 0x39148) + 4 * v99++));
      v98 = *(hud + 0x39118);
    }
    while ( v99 < v98 );
  }
  v104 = sub_145DB90(v12, "seen_video");
  LODWORD(v105) = *(hud + 0x39180);
  if ( v105 > 0 )
  {
    v106 = 0i64;
    do
    {
      if ( v106 >= v105 )
      {
        v107 = 0i64;
      }
      else
      {
        v108 = *(hud + 0x391AA);
        v109 = *(*(hud + 0x39178) + 4 * v106) >> v108;
        v110 = (hud + 0x39188);
        if ( v109 != *(hud + 0x391A0) )
          v110 = (*(hud + 0x39198) + 0x10 * v109);
        v107 = *v110 + (*(*(hud + 0x39178) + 4 * v106) & ~(0xFFFFFFFF << v108));
      }
      sub_145A110(v104, "path", v107);
      ++v106;
      v105 = *(hud + 0x39180);
    }
    while ( v106 < v105 );
  }
  data::add_int(v12, "countryId2", *(hud + 0xD424));
  v111 = sub_145DB90(v12, "hints_count");
  if ( *(hud + 0xEBB0) )
  {
    v112 = v111;
    v113 = 0i64;
    v114 = 0i64;
    do
    {
      v115 = add_ss_section(v112, "hint");
      data::add_int(v115, "id", *(*(hud + 0xEBA0) + v113));
      data::add_int(v115, "totalCount", *(*(hud + 0xEBA0) + v113 + 4));
      data::add_int(v115, "realisticCount", *(*(hud + 0xEBA0) + v113 + 8));
      ++v114;
      v113 += 0xCi64;
    }
    while ( v114 < *(hud + 0xEBB0) );
  }
  v116 = v217;
  sub_145E090(v217, hud + 0x39558, "selectedAir");
  v117 = v216;
  assign_char_property(v216, "firstFreeFlight", *(hud + 0x394B0));
  data::add_int(v117, "completedOneMission", *(hud + 0xEB80));
  assign_char_property(v117, "seenNuclearEvent", *(hud + 0xEB84));
  assign_char_property(v117, "seenBackgroundNuclearEvent", *(hud + 0xEB85));
  v118 = *(hud + 0x394B4);
  v119 = v116;
  data::add_int(v117, "battleCntWithSupportPlane", v118);
  v120 = sub_681400(3i64);
  v121 = sub_145DB90(v119, "customDifficultyBlk");
  sub_676AA0(v120, v121);
  v122 = lpCriticalSection;
  if ( lpCriticalSection )
  {
    EnterCriticalSection(lpCriticalSection);
    v123 = qword_4A79308;
    LeaveCriticalSection(v122);
    if ( v123 == 0xFFFFFFFFFFFFFFFFi64 )
      return;
  }
  else
  {
    v123 = qword_4A79308;
    if ( qword_4A79308 == 0xFFFFFFFFFFFFFFFFui64 )
      return;
  }
  v124 = *v119;
  v125 = 0xFFFFFFFF;
  if ( v124 )
  {
    v126 = *(v124 + 0x50);
    if ( v126 )
    {
      v127 = *(v126 + 0x20);
      if ( !*(v124 + 0x20) )
        goto LABEL_178;
    }
    else
    {
      v127 = 0;
      if ( !*(v124 + 0x20) )
        goto LABEL_178;
    }
    v128 = data::get_name_id(v124, "settings", 8ui64, 0xC5E8B81F);
    if ( v128 >= 0 )
    {
      v129 = v127 + v128;
LABEL_180:
      v125 = v129;
      goto LABEL_181;
    }
LABEL_178:
    if ( !v127 )
      goto LABEL_181;
    v129 = data::get_name_id(*(v124 + 0x50), "settings", 8ui64, 0xC5E8B81F);
    goto LABEL_180;
  }
LABEL_181:
  v130 = *(v217 + 0x10);
  if ( v130 == 0xFFFFFFFF )
  {
    v136 = *(v217 + 0xE);
    if ( !*(v217 + 0xE) )
      return;
    v137 = v125 + 1;
    v138 = *(v217 + 0x18);
    v139 = *v138;
    v140 = *(v138 + 2) - 8 * v136;
    v141 = 0;
    while ( (*(*(v139 + v140) + 8i64) & 0x3FFFFFFF) != v137 )
    {
      ++v141;
      v140 += 8i64;
      if ( v136 == v141 )
        return;
    }
    if ( v141 >= v136 )
      return;
    v142 = *(v139 + v140);
    if ( !v142 )
      return;
  }
  else
  {
    v131 = *(v217 + 0xE);
    if ( v130 >= (v130 + v131) )
      return;
    v132 = v125 + 1;
    v133 = *v217 + *(*v217 + 0x5Ci64) + 0x90i64;
    v134 = 0;
    while ( 1 )
    {
      v135 = 0x20i64 * (v130 + v134);
      if ( (*(v133 + v135 + 8) & 0x3FFFFFFF) == v132 )
        break;
      if ( v131 == ++v134 )
        return;
    }
    if ( v134 >= v131 )
      return;
    v142 = v135 + v133;
  }
  v143 = *v142;
  v144 = 0xFFFFFFFF;
  if ( *v142 )
  {
    v145 = *(v143 + 0x50);
    if ( v145 )
    {
      v146 = *(v145 + 0x20);
      if ( !*(v143 + 0x20) )
        goto LABEL_203;
    }
    else
    {
      v146 = 0;
      if ( !*(v143 + 0x20) )
        goto LABEL_203;
    }
    v147 = data::get_name_id(v143, "customSettings", 0xEui64, 0x3B1BE3EDu);
    if ( v147 >= 0 )
    {
      v148 = v146 + v147;
LABEL_205:
      v144 = v148;
      goto LABEL_206;
    }
LABEL_203:
    if ( !v146 )
      goto LABEL_206;
    v148 = data::get_name_id(*(v143 + 0x50), "customSettings", 0xEui64, 0x3B1BE3EDu);
    goto LABEL_205;
  }
LABEL_206:
  v149 = *(v142 + 0x10);
  if ( v149 == 0xFFFFFFFF )
  {
    v155 = *(v142 + 0xE);
    if ( !*(v142 + 0xE) )
      return;
    v156 = v144 + 1;
    v157 = *(v142 + 0x18);
    v158 = *v157;
    v159 = *(v157 + 2) - 8 * v155;
    v160 = 0;
    while ( (*(*(v158 + v159) + 8i64) & 0x3FFFFFFF) != v156 )
    {
      ++v160;
      v159 += 8i64;
      if ( v155 == v160 )
        return;
    }
    if ( v160 >= v155 )
      return;
    v161 = *(v158 + v159);
    if ( !v161 )
      return;
  }
  else
  {
    v150 = *(v142 + 0xE);
    if ( v149 >= (v149 + v150) )
      return;
    v151 = v144 + 1;
    v152 = *v142 + *(*v142 + 0x5Ci64) + 0x90i64;
    v153 = 0;
    while ( 1 )
    {
      v154 = 0x20i64 * (v149 + v153);
      if ( (*(v152 + v154 + 8) & 0x3FFFFFFF) == v151 )
        break;
      if ( v150 == ++v153 )
        return;
    }
    if ( v153 >= v150 )
      return;
    v161 = v154 + v152;
  }
  v162 = *v161;
  v163 = 0xFFFFFFFF;
  if ( !*v161 )
    goto LABEL_231;
  v164 = data::get_name_id("accounts", 8ui64);
  v165 = *(v162 + 0x50);
  if ( v165 )
    v166 = *(v165 + 0x20);
  else
    v166 = 0;
  if ( *(v162 + 0x20) && (v167 = data::get_name_id(v162, "accounts", 8ui64, v164), v167 >= 0) )
  {
    v168 = v166 + v167;
  }
  else
  {
    if ( !v166 )
      goto LABEL_231;
    v168 = data::get_name_id(*(v162 + 0x50), "accounts", 8ui64, v164);
  }
  v163 = v168;
LABEL_231:
  v169 = *(v161 + 0x10);
  if ( v169 == 0xFFFFFFFF )
  {
    v175 = *(v161 + 0xE);
    if ( *(v161 + 0xE) )
    {
      v176 = v163 + 1;
      v177 = *(v161 + 0x18);
      v178 = *v177;
      v179 = *(v177 + 2) - 8 * v175;
      v180 = 0;
      while ( (*(*(v178 + v179) + 8i64) & 0x3FFFFFFF) != v176 )
      {
        ++v180;
        v179 += 8i64;
        if ( v175 == v180 )
          return;
      }
      if ( v180 < v175 )
      {
        v181 = *(v178 + v179);
        if ( v181 )
        {
LABEL_246:
          v213 = 0i64;
          v214 = off_4B678C8;
          v215 = 0i64;
          v182 = *(qword_4B122F8 + 8) & 0x3FFFFFFF;
          v183 = v182 == 0;
          v184 = v182 - 1;
          if ( v183 )
          {
LABEL_247:
            v185 = 0i64;
            goto LABEL_257;
          }
          v186 = *qword_4B122F8;
          v185 = 0i64;
          if ( *qword_4B122F8 )
          {
            v187 = *(v186 + 0x50);
            if ( v187 && (LODWORD(v185) = *(v187 + 0x20), v185 > v184) )
            {
              v188 = *(*(v187 + 0x18) + 4i64 * v184);
              v189 = *(v187 + 0x4A);
              v190 = v188 >> v189;
            }
            else
            {
              v191 = v184 - v185;
              if ( *(v186 + 0x20) <= v191 )
                goto LABEL_247;
              v188 = *(*(v186 + 0x18) + 4i64 * v191);
              v189 = *(v186 + 0x4A);
              v190 = v188 >> v189;
              v187 = *qword_4B122F8;
            }
            v192 = (*(v187 + 0x38) + 0x10i64 * v190);
            if ( v190 == *(v187 + 0x40) )
              v192 = (v187 + 0x28);
            v185 = *v192 + (v188 & ~(0xFFFFFFFF << v189));
          }
LABEL_257:
          v210 = v123;
          LODWORD(v209) = 2;
          v212 = v185;
          LODWORD(v211) = 1;
          ctor_vprintf(&v213, 0x64i64, "%lld.%s", &v209, 2);
          sub_14584E0(&v209, off_4B678B0);
          v193 = v213;
          v194 = &szFile;
          if ( v215 )
            v194 = v213;
          v195 = sub_145DD00(v181, v194);
          v196 = *(v181 + 0x10);
          if ( v196 == 0xFFFFFFFF )
          {
            v202 = *(v181 + 0xE);
            if ( !*(v181 + 0xE) )
              goto LABEL_275;
            v203 = v195 + 1;
            v204 = *(v181 + 0x18);
            v205 = *v204;
            v206 = *(v204 + 2) - 8 * v202;
            v207 = 0;
            while ( (*(*(v205 + v206) + 8i64) & 0x3FFFFFFF) != v203 )
            {
              ++v207;
              v206 += 8i64;
              if ( v202 == v207 )
                goto LABEL_275;
            }
            if ( v207 >= v202 )
              goto LABEL_275;
            v208 = *(v205 + v206);
            if ( !v208 )
              goto LABEL_275;
          }
          else
          {
            v197 = *(v181 + 0xE);
            if ( v196 >= (v196 + v197) )
              goto LABEL_275;
            v198 = v195 + 1;
            v199 = *(*v181 + 0x5Ci64) + *v181 + 0x90i64;
            v200 = 0;
            while ( 1 )
            {
              v201 = 0x20i64 * (v196 + v200);
              if ( (*(v199 + v201 + 8) & 0x3FFFFFFF) == v198 )
                break;
              if ( v197 == ++v200 )
                goto LABEL_275;
            }
            if ( v200 >= v197 )
              goto LABEL_275;
            v208 = (v201 + v199);
          }
          sub_1458A90(&v209, v208, 0i64);
LABEL_275:
          sub_145E230(v181);
          if ( HIWORD(v210) + WORD2(v210) )
            sub_145E090(v181, &v209, v194);
          sub_1458FF0(&v209);
          if ( v193 )
            (*(*v214 + 0x40i64))(v214, v193);
        }
      }
    }
  }
  else
  {
    v170 = *(v161 + 0xE);
    if ( v169 < (v169 + v170) )
    {
      v171 = v163 + 1;
      v172 = *v161 + *(*v161 + 0x5Ci64) + 0x90i64;
      v173 = 0;
      while ( 1 )
      {
        v174 = 0x20i64 * (v169 + v173);
        if ( (*(v172 + v174 + 8) & 0x3FFFFFFF) == v171 )
          break;
        if ( v170 == ++v173 )
          return;
      }
      if ( v173 < v170 )
      {
        v181 = v174 + v172;
        goto LABEL_246;
      }
    }
  }
}
