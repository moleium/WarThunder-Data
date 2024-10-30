__int64 __fastcall set_mission_blk(__int64 mission, __int64 a2)
{

  v83 = *(mission + 0x678);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "_gameMode", &v83);
  LOBYTE(v83) = *(mission + 0x682);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "forceBenchmark", &v83);
  v4 = *(mission + 8);
  v5 = &szFile;
  if ( !v4 )
    v4 = &szFile;
  data::set_str(a2, "chapter", v4);
  v6 = *mission;
  if ( !*mission )
    v6 = &szFile;
  data::set_str(a2, "campaign", v6);
  v7 = *(mission + 0x10);
  if ( !v7 )
    v7 = &szFile;
  data::set_str(a2, "name", v7);
  v8 = *(mission + 0x50);
  if ( !v8 )
    v8 = &szFile;
  data::set_str(a2, "locName", v8);
  v9 = *(mission + 0x58);
  if ( !v9 )
    v9 = &szFile;
  data::set_str(a2, "locNameTeamA", v9);
  v10 = *(mission + 0x60);
  if ( !v10 )
    v10 = &szFile;
  data::set_str(a2, "locNameTeamB", v10);
  v11 = *(mission + 0x68);
  if ( !v11 )
    v11 = &szFile;
  data::set_str(a2, "locDesc", v11);
  v12 = *(mission + 0x70);
  if ( !v12 )
    v12 = &szFile;
  data::set_str(a2, "locDescTeamA", v12);
  v13 = *(mission + 0x78);
  if ( !v13 )
    v13 = &szFile;
  data::set_str(a2, "locDescTeamB", v13);
  v14 = *(mission + 0x18);
  if ( v14 && *v14 )
    data::set_str(a2, "loc_name", v14);
  v15 = *(mission + 0x20);
  if ( !v15 )
    v15 = &szFile;
  data::set_str(a2, "postfix", v15);
  v16 = *(mission + 0x30);
  if ( !v16 )
    v16 = &szFile;
  data::set_str(a2, "level", v16);
  v17 = *(mission + 0x40);
  if ( !v17 )
    v17 = &szFile;
  data::set_str(a2, "environment", v17);
  v18 = *(mission + 0x38);
  if ( !v18 )
    v18 = &szFile;
  data::set_str(a2, "mis_file", v18);
  v19 = *(mission + 0x48);
  if ( !v19 )
    v19 = &szFile;
  data::set_str(a2, "weather", v19);
  v20 = sub_145DB90(a2, "netDifficultyBlk");
  sub_676AA0(mission + 0x37C, v20);
  v21 = &szFile;
  if ( *(mission + 0x148) )
    v21 = *(mission + 0x138);
  data::set_str(a2, "player_class", v21);
  v22 = &szFile;
  if ( *(mission + 0x160) )
    v22 = *(mission + 0x150);
  data::set_str(a2, "player_weapons", v22);
  if ( *(mission + 0x340) )
    v5 = *(mission + 0x340);
  data::set_str(a2, "battleAreaColorPreset", v5);
  data::set_str(a2, "restoreType", (&off_4A70F20)[*(mission + 0x370)]);
  LOBYTE(v83) = *(mission + 0x17A);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "takeOffOnStart", &v83);
  LOBYTE(v83) = *(mission + 0x17C);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "isLimitedFuel", &v83);
  LOBYTE(v83) = *(mission + 0x17B);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "isLimitedAmmo", &v83);
  LOBYTE(v83) = *(mission + 0x3A9);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "hideDamageFromPlayer", &v83);
  LOBYTE(v83) = *(mission + 0x197);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "ignoreInvulnerableTimer", &v83);
  v83 = *(mission + 0x1F0);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "timeLimit", &v83);
  v83 = *(mission + 0x1F4);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "lockCrewsTimeLimit", &v83);
  v83 = *(mission + 0x1F8);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "scoreLimit", &v83);
  v83 = *(mission + 0x278);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "esTTL", &v83);
  LOBYTE(v83) = *(mission + 0x17D);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "allowJIP", &v83);
  LOBYTE(v83) = *(mission + 0x17E);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "isBotsAllowed", &v83);
  LOBYTE(v83) = *(mission + 0x18A);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "autoBalance", &v83);
  LOBYTE(v83) = *(mission + 0x18B);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "multiRespawn", &v83);
  LOBYTE(v83) = *(mission + 0x196);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "multiRespawnNoRepair", &v83);
  v83 = *(mission + 0x1CC);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_real(a2, "multiRespawnNoRepairDmg", &v83);
  LOBYTE(v83) = *(mission + 0x18C);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "slotMultiSpawn", &v83);
  LOBYTE(v83) = *(mission + 0x18E);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "crewLockEnabled", &v83);
  LOBYTE(v83) = *(mission + 0x18F);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "keepProfileOnReconnect", &v83);
  LOBYTE(v83) = *(mission + 0x18D);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "isAwardByObjective", &v83);
  LOBYTE(v83) = *(mission + 0x199);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "useSpawnScore", &v83);
  LOBYTE(v83) = *(mission + 0x198);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "needShowLockedSlots", &v83);
  LOBYTE(v83) = *(mission + 0x19A);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "useTeamSpawnScore", &v83);
  LOBYTE(v83) = *(mission + 0x19D);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "useKillStreaks", &v83);
  LOBYTE(v83) = *(mission + 0x19E);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "useAssaultBombFuseInKillStreak", &v83);
  LOBYTE(v83) = *(mission + 0x19F);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "wwarEconomics", &v83);
  LOBYTE(v83) = *(mission + 0x1A0);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "isWorldWar", &v83);
  LOBYTE(v83) = *(mission + 0x1A1);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "checkPlayerUnits", &v83);
  v23 = *(mission + 0x130);
  if ( !v23 )
    v23 = &szFile;
  data::set_str(a2, "nameKillStreaks", v23);
  LOBYTE(v83) = *(mission + 0x1A2);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "useFinalResults", &v83);
  LOBYTE(v83) = *(mission + 0x1A3);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "useCustomOnlineUnlocksOnly", &v83);
  LOBYTE(v83) = *(mission + 0x19B);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "singleSpawnByTypeTechnics", &v83);
  LOBYTE(v83) = *(mission + 0x19C);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "updateSpawnDelayOnlyForCurrentUnit", &v83);
  LOBYTE(v83) = *(mission + 0x1A4);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "useSpawnDelay", &v83);
  LOBYTE(v83) = *(mission + 0x1A5);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "afterDeathDelayOnly", &v83);
  LOBYTE(v83) = *(mission + 0x1A7);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "allowSpare", &v83);
  LOBYTE(v83) = *(mission + 0x1A6);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "useFreeRepairs", &v83);
  LOBYTE(v83) = *(mission + 0x1A9);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "allowUseArtillerySupport", &v83);
  LOBYTE(v83) = *(mission + 0x1AA);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "allowWinch", &v83);
  LOBYTE(v83) = *(mission + 0x1AC);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "forceFreeBeltsAndWeapons", &v83);
  LOBYTE(v83) = *(mission + 0x1A8);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "enableProcessTeamInjury", &v83);
  v83 = *(mission + 0x388);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "minPlayers", &v83);
  v83 = *(mission + 0x38C);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "maxPlayers", &v83);
  v83 = *(mission + 0x390);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "maxBots", &v83);
  v83 = *(mission + 0x394);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "wpAward", &v83);
  v83 = *(mission + 0x248);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_real(a2, "respawnTimeMultiplier", &v83);
  v83 = *(mission + 0x260);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_real(a2, "missionCostMul", &v83);
  if ( *(mission + 0x26C) > 0.0 )
  {
    v83 = *(mission + 0x26C);
    if ( *(a2 + 0x14) != 0xFFFFFFFF )
      sub_145E9A0(a2);
    data::set_real(a2, "tankInvisibleForAirplaneDistance", &v83);
  }
  if ( *(mission + 0x270) > 0.0 )
  {
    v83 = *(mission + 0x270);
    if ( *(a2 + 0x14) != 0xFFFFFFFF )
      sub_145E9A0(a2);
    data::set_real(a2, "shipInvisibleForAirplaneDistance", &v83);
  }
  if ( *(mission + 0x274) >= 0 )
  {
    LOBYTE(v83) = *(mission + 0x274) != 0;
    if ( *(a2 + 0x14) != 0xFFFFFFFF )
      sub_145E9A0(a2);
    data::set_bool(a2, "hudTankDetectedByAircraft", &v83);
  }
  v83 = *(mission + 0x24C);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_real(a2, "deathPenaltyMul", &v83);
  v83 = *(mission + 0x250);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_real(a2, "ctaCaptureZoneEqualPenaltyMul", &v83);
  v83 = *(mission + 0x254);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_real(a2, "ctaCaptureZoneDiffPenaltyExp", &v83);
  v83 = *(mission + 0x258);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "ctaNoAliveAirctaftTimer", &v83);
  LOBYTE(v83) = *(mission + 0x25C);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "ctaInstantDecreaseTicketsWhenNoRespawn", &v83);
  v83 = *(mission + 0x264);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_real(a2, "spawnScoreMul", &v83);
  v83 = *(mission + 0x268);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_real(a2, "spawnScoreForTeamMul", &v83);
  LOBYTE(v83) = *(mission + 0x180);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "arcadeCountry", &v83);
  LOBYTE(v83) = *(mission + 0x188);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "noRespawns", &v83);
  LOBYTE(v83) = *(mission + 0x189);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "forceNoRespawnsByMission", &v83);
  v83 = *(mission + 0x184);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "maxRespawns", &v83);
  LOBYTE(v83) = *(mission + 0x195);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "useAlternativeMapCoord", &v83);
  LOBYTE(v83) = *(mission + 0x308);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "useAlternativeAerobaticSmokes", &v83);
  LOBYTE(v83) = *(mission + 0x1AD);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "disableUnitsOutOfSessionRank", &v83);
  LOBYTE(v83) = *(mission + 0x1AE);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "sendAwardsToUserLog", &v83);
  LOBYTE(v83) = *(mission + 0x30B);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "hideUnitsBehindSmoke", &v83);
  LOBYTE(v83) = *(mission + 0x1AF);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "useTimeAwardingEconomics", &v83);
  v83 = *(mission + 0x1B0);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "timeAwardingEconomicsRewardPeriodSec", &v83);
  v24 = *(mission + 0x1B8);
  if ( !v24 )
    v24 = &szFile;
  data::set_str(a2, "timeAwardingEconomicsActivityPreset", v24);
  if ( *(mission + 0x2F8) )
  {
    v83 = *(mission + 0x300);
    if ( *(a2 + 0x14) != 0xFFFFFFFF )
      sub_145E9A0(a2);
    sub_145AC50(a2, "colorTeamA", &v83);
    v83 = *(mission + 0x304);
    if ( *(a2 + 0x14) != 0xFFFFFFFF )
      sub_145E9A0(a2);
    sub_145AC50(a2, "colorTeamB", &v83);
  }
  v83 = *(mission + 0x1D4);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "numBotRespawns", &v83);
  v83 = *(mission + 0x1D8);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "numTankBotRespawns", &v83);
  v83 = *(mission + 0x1DC);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "numShipBotRespawns", &v83);
  v83 = *(mission + 0x1E0);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "addWaitBetweenBotRespawns", &v83);
  v83 = *(mission + 0x27C);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "timeToKickAfk", &v83);
  v83 = *(mission + 0x280);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "timeToKickAfkInSession", &v83);
  v83 = *(mission + 0x284);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_real(a2, "delaySpawnMRankPow", &v83);
  v83 = *(mission + 0x288);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "delayForMaxRankMinutes", &v83);
  v83 = *(mission + 0x28C);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "delayTimeRoundConstant", &v83);
  v83 = *(mission + 0x290);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_real(a2, "gameModeCustomDmg", &v83);
  v83 = *(mission + 0x294);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_real(a2, "roguelikeLandingAwardPart_exp", &v83);
  v83 = *(mission + 0x298);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_real(a2, "roguelikeLandingAwardPart_wp", &v83);
  v83 = *(mission + 0x29C);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_real(a2, "botSurviveAmmoLostPercent", &v83);
  v83 = *(mission + 0x2A0);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_real(a2, "botSurviveWeaponLostPercent", &v83);
  v25 = *(mission + 0x2A8);
  if ( !v25 )
    v25 = &szFile;
  data::set_str(a2, "activityPreset", v25);
  v83 = *(mission + 0x2B0);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_real(a2, "maxTimeLagCompensation", &v83);
  v83 = *(mission + 0x30C);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "raceLaps", &v83);
  v83 = *(mission + 0x310);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "ffaWinners", &v83);
  v83 = *(mission + 0x310);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "raceWinners", &v83);
  LOBYTE(v83) = *(mission + 0x314);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "raceForceCannotShoot", &v83);
  v83 = *(mission + 0x318);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_real(a2, "footballScoreGoal", &v83);
  v83 = *(mission + 0x31C);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_real(a2, "footballScoreAssist", &v83);
  v83 = *(mission + 0x320);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_real(a2, "footballScoreSave", &v83);
  v83 = *(mission + 0x324);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_real(a2, "footballSaveTraceTime", &v83);
  v83 = *(mission + 0x328);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_real(a2, "footballSaveTraceCooldown", &v83);
  LOBYTE(v83) = *(mission + 0x32C);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "isScoreTournament", &v83);
  v26 = *(mission + 0x330);
  if ( !v26 )
    v26 = &szFile;
  data::set_str(a2, "userstatModes", v26);
  LOBYTE(v83) = *(mission + 0x338);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "isPersistentSmoke", &v83);
  v83 = *(mission + 0x33C);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "persistentSmokeId", &v83);
  LOBYTE(v83) = *(mission + 0x190);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "userMission", &v83);
  LOBYTE(v83) = *(mission + 0x191);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "dedicatedReplay", &v83);
  v83 = *(mission + 0x1E8);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "skiesInitialRandomSeed", &v83);
  LOBYTE(v83) = *(mission + 0x398);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "groundUnitsAllowed", &v83);
  v27 = (mission + 0x67C);
  LOBYTE(v83) = *(mission + 0x67C) & 1;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, &unk_49287D8, &v83);
  LOBYTE(v83) = (*v27 & 2) != 0;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "gt_cooperative", &v83);
  LOBYTE(v83) = (*v27 & 4) != 0;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "gt_versus", &v83);
  LOBYTE(v83) = (*v27 & 8) != 0;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "gt_use_lb", &v83);
  LOBYTE(v83) = (*v27 & 0x10) != 0;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, &unk_4870DDA, &v83);
  LOBYTE(v83) = (*v27 & 0x20) != 0;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "gt_use_stats", &v83);
  LOBYTE(v83) = (*v27 & 0x80000) != 0;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "gt_ffa_deathmatch", &v83);
  LOBYTE(v83) = *(mission + 0x67F) & 1;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "gt_ffa", &v83);
  LOBYTE(v83) = (*v27 & 0x100000) != 0;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "gt_race", &v83);
  LOBYTE(v83) = (*v27 & 0x8000000) != 0;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "gt_football", &v83);
  LOBYTE(v83) = (*v27 & 0x40) != 0;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "gt_mp_score", &v83);
  LOBYTE(v83) = *v27 >> 7;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "gt_mp_tickets", &v83);
  LOBYTE(v83) = *(mission + 0x67D) & 1;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "gt_mp_capture", &v83);
  LOBYTE(v83) = (*v27 & 0x200) != 0;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "gt_mp_solo", &v83);
  LOBYTE(v83) = (*v27 & 0x400) != 0;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "gt_sp_restart", &v83);
  LOBYTE(v83) = (*v27 & 0x800) != 0;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "gt_sp_use_skin", &v83);
  LOBYTE(v83) = (*v27 & 0x1000) != 0;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "gt_dynamic", &v83);
  LOBYTE(v83) = (*v27 & 0x8000) != 0;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "gt_use_xp", &v83);
  LOBYTE(v83) = (*v27 & 0x2000) != 0;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "gt_use_wp", &v83);
  LOBYTE(v83) = (*v27 & 0x200000) != 0;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "gt_use_unlocks", &v83);
  LOBYTE(v83) = (*v27 & 0x400000) != 0;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "gt_use_orders", &v83);
  LOBYTE(v83) = (*v27 & 0x800000) != 0;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "gt_auto_spawn", &v83);
  LOBYTE(v83) = (*v27 & 0x2000000) != 0;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "gt_last_man_standing", &v83);
  LOBYTE(v83) = *(mission + 0x67E) & 1;
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "gt_reload_explosives", &v83);
  LOBYTE(v83) = *(mission + 0x3A0);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "disableDrag", &v83);
  LOBYTE(v83) = *(mission + 0x3A1);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "disableGravity", &v83);
  v83 = *(mission + 0x3A4);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_real(a2, "tformPhysicsError", &v83);
  v28 = sub_145DB90(a2, "tags");
  sub_145FAA0(v28, word_492B3CE);
  if ( *(mission + 0x210) )
  {
    v29 = 0i64;
    do
    {
      v30 = *(*(mission + 0x200) + 8 * v29);
      if ( !v30 )
        v30 = &szFile;
      sub_145A110(v28, word_492B3CE, v30);
      ++v29;
    }
    while ( v29 < *(mission + 0x210) );
  }
  v31 = sub_145DB90(a2, "aircrafts");
  sub_145FAA0(v31, "a");
  if ( *(mission + 0x228) )
  {
    v32 = 0i64;
    do
    {
      v33 = *(*(mission + 0x218) + 8 * v32);
      if ( !v33 )
        v33 = &szFile;
      sub_145A110(v31, "a", v33);
      ++v32;
    }
    while ( v32 < *(mission + 0x228) );
  }
  v34 = sub_145DB90(a2, "ranks");
  v83 = *(mission + 0x170);
  if ( *(v34 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(v34);
  sub_145A790(v34, "min", &v83);
  v83 = *(mission + 0x174);
  if ( *(v34 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(v34);
  sub_145A790(v34, "max", &v83);
  sub_145FAA0(a2, "pilotName");
  if ( *(mission + 0x240) )
  {
    v35 = 0i64;
    do
    {
      v36 = *(*(mission + 0x230) + 8 * v35);
      if ( !v36 )
        v36 = &szFile;
      sub_145A110(a2, "pilotName", v36);
      ++v35;
    }
    while ( v35 < *(mission + 0x240) );
  }
  v37 = *(mission + 0x90);
  if ( !v37 )
    v37 = &szFile;
  data::set_str(a2, "country_axis", v37);
  v38 = *(mission + 0x98);
  if ( !v38 )
    v38 = &szFile;
  data::set_str(a2, "country_allies", v38);
  if ( *(mission + 0x61E) + *(mission + 0x61C)
    && *(mission + 0x63E) + *(mission + 0x63C)
    && *(mission + 0x5FE) + *(mission + 0x5FC) )
  {
    v39 = sub_145DB90(a2, "weatherPreset");
    sub_1458A90(v39, (mission + 0x610), 0i64);
    v40 = sub_145DB90(a2, "weatherType");
    sub_1458A90(v40, (mission + 0x630), 0i64);
    v41 = sub_145DB90(a2, "environmentGlobal");
    sub_1458A90(v41, (mission + 0x5F0), 0i64);
  }
  v42 = sub_145DB90(a2, "customWeather");
  sub_1458A90(v42, (mission + 0x650), 0i64);
  v43 = sub_145DB90(a2, "limits");
  sub_1458A90(v43, (mission + 0x430), 0i64);
  v44 = sub_145DB90(a2, "spawnTypes");
  sub_1458A90(v44, (mission + 0x450), 0i64);
  v45 = sub_145DB90(a2, "customSpawnScore");
  sub_1458A90(v45, (mission + 0x470), 0i64);
  v46 = sub_145DB90(a2, "roguelikeModeAircrafts");
  sub_1458A90(v46, (mission + 0x490), 0i64);
  v47 = sub_145DB90(a2, "roguelikeModeActions");
  sub_1458A90(v47, (mission + 0x4B0), 0i64);
  v48 = sub_145DB90(a2, "customRules");
  sub_1458A90(v48, (mission + 0x530), 0i64);
  v49 = sub_145DB90(a2, "unitsParamsList");
  sub_1458A90(v49, (mission + 0x550), 0i64);
  if ( !*(mission + 0x190) )
  {
    if ( !(*(mission + 0x4DE) + *(mission + 0x4DC)) )
      goto LABEL_415;
    v78 = sub_145DB90(a2, "overrideSlotbar");
    v79 = v78;
    LOBYTE(v83) = 1;
    if ( *(v78 + 0x14) != 0xFFFFFFFF )
      sub_145E9A0(v78);
    data::set_bool(v79, "isNotEmpty", &v83);
    if ( !*(mission + 0x190) )
    {
LABEL_415:
      if ( !(*(mission + 0x4FE) + *(mission + 0x4FC))
        || (v80 = sub_145DB90(a2, "editSlotbar"), sub_1458A90(v80, (mission + 0x4F0), 0i64), !*(mission + 0x190)) )
      {
        if ( !(*(mission + 0x5DE) + *(mission + 0x5DC))
          || (v81 = sub_145DB90(a2, "aiCasualtiesMapping"),
              sub_1458A90(v81, (mission + 0x5D0), 0i64),
              !*(mission + 0x190)) )
        {
          if ( *(mission + 0x57E) + *(mission + 0x57C) )
          {
            v82 = sub_145DB90(a2, "unitGroups");
            sub_1458A90(v82, (mission + 0x570), 0i64);
          }
        }
      }
    }
  }
  v50 = *(mission + 0xD8);
  if ( !v50 )
    v50 = &szFile;
  data::set_str(a2, "overrideUnit", v50);
  v51 = *(mission + 0xE0);
  if ( !v51 )
    v51 = &szFile;
  data::set_str(a2, "missionProgressType", v51);
  v52 = *(mission + 0xA0);
  if ( !v52 )
    v52 = &szFile;
  data::set_str(a2, "tournament_mode", v52);
  v53 = *(mission + 0xA8);
  if ( !v53 )
    v53 = &szFile;
  data::set_str(a2, "constantWPAwardName", v53);
  v54 = *(mission + 0xB0);
  if ( !v54 )
    v54 = &szFile;
  data::set_str(a2, "pveXPAwardName", v54);
  v55 = *(mission + 0xB8);
  if ( !v55 )
    v55 = &szFile;
  data::set_str(a2, "pveWPAwardName", v55);
  v56 = *(mission + 0xC0);
  if ( !v56 )
    v56 = &szFile;
  data::set_str(a2, "pveCustomUnlockForVictory", v56);
  v57 = *(mission + 0xC8);
  if ( !v57 )
    v57 = &szFile;
  data::set_str(a2, "pveTrophyName", v57);
  LOBYTE(v83) = *(mission + 0xD0);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "isBoosterEnabled", &v83);
  LOBYTE(v83) = *(mission + 0xD1);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "disableTrophyAward", &v83);
  v83 = *(mission + 0x680);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "mainPlayerType", &v83);
  LOBYTE(v83) = *(mission + 0x2B4);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "useCustomSuperArtillery", &v83);
  v58 = *(mission + 0x2E8);
  if ( !v58 )
    v58 = &szFile;
  data::set_str(a2, "killOutOfBattleAreaUnit", v58);
  LOBYTE(v83) = *(mission + 0x2D8);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "useDeathmatchHUD", &v83);
  LOBYTE(v83) = *(mission + 0x2D9);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "showTacticalMapCellSize", &v83);
  LOBYTE(v83) = *(mission + 0x2DA);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "hudUseModernMarkers", &v83);
  v83 = *(mission + 0x2DC);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  sub_145A790(a2, "timeLimitWarn", &v83);
  v59 = *(mission + 0x348);
  if ( !v59 )
    v59 = &szFile;
  data::set_str(a2, "countryFlagTeamA", v59);
  v60 = *(mission + 0x350);
  if ( !v60 )
    v60 = &szFile;
  data::set_str(a2, "countryFlagTeamB", v60);
  v61 = *(mission + 0x358);
  if ( !v61 )
    v61 = &szFile;
  data::set_str(a2, "customArtillerySfxPath", v61);
  v62 = *(mission + 0x360);
  if ( !v62 )
    v62 = &szFile;
  data::set_str(a2, "customArtillerySfx", v62);
  v63 = *(mission + 0x2C8);
  if ( !v63 )
    v63 = &szFile;
  data::set_str(a2, "customArtilleryImage", v63);
  v64 = *(mission + 0x2F0);
  if ( !v64 )
    v64 = &szFile;
  data::set_str(a2, "customHUD", v64);
  LOBYTE(v83) = *(mission + 0xF0);
  if ( *(a2 + 0x14) != 0xFFFFFFFF )
    sub_145E9A0(a2);
  data::set_bool(a2, "isCustomVisualFilterAllowed", &v83);
  v65 = *(mission + 0x128);
  if ( !v65 )
    v65 = &szFile;
  data::set_str(a2, "allowedTagsPreset", v65);
  v66 = sub_145DB90(a2, "forbidVisualTags");
  sub_145E230(v66);
  v84 = mission;
  v67 = *(mission + 0x108);
  if ( *(mission + 0x108) )
  {
    v68 = *(v84 + 0xF8);
    v69 = 8 * v67;
    v70 = 0i64;
    do
    {
      v71 = *(v68 + v70);
      if ( !v71 )
        v71 = &szFile;
      LOBYTE(v83) = 1;
      if ( *(v66 + 0x14) != 0xFFFFFFFF )
        sub_145E9A0(v66);
      data::set_bool(v66, v71, &v83);
      v70 += 8i64;
    }
    while ( v69 != v70 );
  }
  v72 = sub_145DB90(a2, "allowedVisualTags");
  sub_145E230(v72);
  result = v84;
  if ( *(v84 + 0x120) )
  {
    v74 = *(v84 + 0x110);
    v75 = 8i64 * *(v84 + 0x120);
    v76 = 0i64;
    do
    {
      v77 = *(v74 + v76);
      if ( !v77 )
        v77 = &szFile;
      LOBYTE(v83) = 1;
      if ( *(v72 + 0x14) != 0xFFFFFFFF )
        sub_145E9A0(v72);
      result = data::set_bool(v72, v77, &v83);
      v76 += 8i64;
    }
    while ( v75 != v76 );
  }
  return result;
}
