__int64 __fastcall load_mission(__int64 a1, __int64 a2, int a3, char a4)
{
  v1162 = &szFile;
  v8 = data::get_str(a2, "url", &v1162);
  v1162 = &szFile;
  v9 = data::get_str(a2, "mis_file", &v1162);
  v1162 = &szFile;
  v10 = data::get_str(a2, "locName", &v1162);
  v1162 = &szFile;
  v1163 = data::get_str(a2, "name", &v1162);
  LODWORD(v1162) = 1;
  *&v1165 = v10;
  LODWORD(v1164) = 1;
  v1166 = v9;
  DWORD2(v1165) = 1;
  v1168 = v8;
  v1167 = 1;
  logmessage_fmt(3u, "Load mission '%s' ('%s') from file '%s' / url '%s'", &v1162, 4);
  v1172 = a4;
  if ( a4 )
    sub_1458A90(a1 + 0x510, a2, 0i64);
  LODWORD(v1162) = 0;
  v11 = data::set_int(a2, "_gameMode", &v1162);
  *(a1 + 0x678) = v11;
  *(a1 + 0x17F) = (v11 - 0xE) < 0xFFFFFFFD;
  if ( v11 == 7 || *(a1 + 0x682) )
    *(a1 + 0x1ED) = 0;
  LOBYTE(v1162) = 0;
  *(a1 + 0x682) = data::get_bool(a2, "forceBenchmark", &v1162);
  *(a1 + 0x67C) = sub_CA37F0(a2, *(a1 + 0x678));
  v1162 = "default";
  v12 = data::get_str(a2, "selectedSkin", &v1162);
  v13 = *(a1 + 0xE8);
  if ( v13 != v12 )
  {
    v14 = v12;
    if ( v13 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v14 && *v14 && (v15 = strlen(v14) + 1, (v16 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v15)) != 0i64) )
    {
      v17 = v16;
      memmove(v16, v14, v15);
    }
    else
    {
      v17 = 0i64;
    }
    *(a1 + 0xE8) = v17;
  }
  v1162 = "TM_NONE";
  v18 = data::get_str(a2, "tournament_mode", &v1162);
  v19 = *(a1 + 0xA0);
  if ( v19 != v18 )
  {
    v20 = v18;
    if ( v19 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v20 && *v20 && (v21 = strlen(v20) + 1, (v22 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v21)) != 0i64) )
    {
      v23 = v22;
      memmove(v22, v20, v21);
    }
    else
    {
      v23 = 0i64;
    }
    *(a1 + 0xA0) = v23;
  }
  v1162 = &szFile;
  v24 = data::get_str(a2, "constantWPAwardName", &v1162);
  v25 = *(a1 + 0xA8);
  if ( v25 != v24 )
  {
    v26 = v24;
    if ( v25 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v26 && *v26 && (v27 = strlen(v26) + 1, (v28 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v27)) != 0i64) )
    {
      v29 = v28;
      memmove(v28, v26, v27);
    }
    else
    {
      v29 = 0i64;
    }
    *(a1 + 0xA8) = v29;
  }
  v1162 = &szFile;
  v30 = data::get_str(a2, "pveXPAwardName", &v1162);
  v31 = *(a1 + 0xB0);
  if ( v31 != v30 )
  {
    v32 = v30;
    if ( v31 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v32 && *v32 && (v33 = strlen(v32) + 1, (v34 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v33)) != 0i64) )
    {
      v35 = v34;
      memmove(v34, v32, v33);
    }
    else
    {
      v35 = 0i64;
    }
    *(a1 + 0xB0) = v35;
  }
  v1162 = &szFile;
  v36 = data::get_str(a2, "pveWPAwardName", &v1162);
  v37 = *(a1 + 0xB8);
  if ( v37 != v36 )
  {
    v38 = v36;
    if ( v37 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v38 && *v38 && (v39 = strlen(v38) + 1, (v40 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v39)) != 0i64) )
    {
      v41 = v40;
      memmove(v40, v38, v39);
    }
    else
    {
      v41 = 0i64;
    }
    *(a1 + 0xB8) = v41;
  }
  v1162 = &szFile;
  v42 = data::get_str(a2, "pveCustomUnlockForVictory", &v1162);
  v43 = *(a1 + 0xC0);
  if ( v43 != v42 )
  {
    v44 = v42;
    if ( v43 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v44 && *v44 && (v45 = strlen(v44) + 1, (v46 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v45)) != 0i64) )
    {
      v47 = v46;
      memmove(v46, v44, v45);
    }
    else
    {
      v47 = 0i64;
    }
    *(a1 + 0xC0) = v47;
  }
  v1162 = &szFile;
  v48 = data::get_str(a2, "pveTrophyName", &v1162);
  v49 = *(a1 + 0xC8);
  if ( v49 != v48 )
  {
    v50 = v48;
    if ( v49 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v50 && *v50 && (v51 = strlen(v50) + 1, (v52 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v51)) != 0i64) )
    {
      v53 = v52;
      memmove(v52, v50, v51);
    }
    else
    {
      v53 = 0i64;
    }
    *(a1 + 0xC8) = v53;
  }
  LOBYTE(v1162) = 1;
  *(a1 + 0xD0) = data::get_bool(a2, "isBoosterEnabled", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0xD1) = data::get_bool(a2, "disableTrophyAward", &v1162);
  v1162 = (&off_4A70F40)[*(a1 + 0x678)];
  v54 = data::get_str(a2, "chapter", &v1162);
  v55 = *(a1 + 8);
  if ( v55 != v54 )
  {
    v56 = v54;
    if ( v55 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v56 && *v56 && (v57 = strlen(v56) + 1, (v58 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v57)) != 0i64) )
    {
      v59 = v58;
      memmove(v58, v56, v57);
    }
    else
    {
      v59 = 0i64;
    }
    *(a1 + 8) = v59;
  }
  v1162 = (&off_4A70F40)[*(a1 + 0x678)];
  v60 = data::get_str(a2, "campaign", &v1162);
  if ( *a1 != v60 )
  {
    v61 = v60;
    if ( *a1 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v61 && *v61 && (v62 = strlen(v61) + 1, (v63 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v62)) != 0i64) )
    {
      v64 = v63;
      memmove(v63, v61, v62);
    }
    else
    {
      v64 = 0i64;
    }
    *a1 = v64;
  }
  v1162 = 0i64;
  v65 = data::get_str(a2, "loc_name", &v1162);
  v1162 = &szFile;
  v66 = data::get_str(a2, "name", &v1162);
  sub_CAAE20(a1, v66, v65);
  v1162 = &szFile;
  v67 = data::get_str(a2, "postfix", &v1162);
  v68 = *(a1 + 0x20);
  if ( v68 != v67 )
  {
    v69 = v67;
    if ( v68 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v69 && *v69 && (v70 = strlen(v69) + 1, (v71 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v70)) != 0i64) )
    {
      v72 = v71;
      memmove(v71, v69, v70);
    }
    else
    {
      v72 = 0i64;
    }
    *(a1 + 0x20) = v72;
  }
  v1162 = &szFile;
  v73 = data::get_str(a2, "level", &v1162);
  v74 = *(a1 + 0x30);
  if ( v74 != v73 )
  {
    v75 = v73;
    if ( v74 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v75 && *v75 && (v76 = strlen(v75) + 1, (v77 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v76)) != 0i64) )
    {
      v78 = v77;
      memmove(v77, v75, v76);
    }
    else
    {
      v78 = 0i64;
    }
    *(a1 + 0x30) = v78;
  }
  v1162 = &szFile;
  v79 = data::get_str(a2, "mis_file", &v1162);
  v80 = *(a1 + 0x38);
  if ( v80 != v79 )
  {
    v81 = v79;
    if ( v80 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v81 && *v81 && (v82 = strlen(v81) + 1, (v83 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v82)) != 0i64) )
    {
      v84 = v83;
      memmove(v83, v81, v82);
    }
    else
    {
      v84 = 0i64;
    }
    *(a1 + 0x38) = v84;
  }
  v1162 = &szFile;
  v85 = data::get_str(a2, "environment", &v1162);
  v86 = *(a1 + 0x40);
  if ( v86 != v85 )
  {
    v87 = v85;
    if ( v86 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v87 && *v87 && (v88 = strlen(v87) + 1, (v89 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v88)) != 0i64) )
    {
      v90 = v89;
      memmove(v89, v87, v88);
    }
    else
    {
      v90 = 0i64;
    }
    *(a1 + 0x40) = v90;
  }
  v1162 = &szFile;
  v91 = data::get_str(a2, "weather", &v1162);
  v92 = *(a1 + 0x48);
  if ( v92 != v91 )
  {
    v93 = v91;
    if ( v92 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v93 && *v93 && (v94 = strlen(v93) + 1, (v95 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v94)) != 0i64) )
    {
      v96 = v95;
      memmove(v95, v93, v94);
    }
    else
    {
      v96 = 0i64;
    }
    *(a1 + 0x48) = v96;
  }
  v1162 = &szFile;
  v97 = data::get_str(a2, "locName", &v1162);
  v98 = *(a1 + 0x50);
  if ( v98 != v97 )
  {
    v99 = v97;
    if ( v98 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v99 && *v99 && (v100 = strlen(v99) + 1, (v101 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v100)) != 0i64) )
    {
      v102 = v101;
      memmove(v101, v99, v100);
    }
    else
    {
      v102 = 0i64;
    }
    *(a1 + 0x50) = v102;
  }
  v1162 = &szFile;
  v103 = data::get_str(a2, "locNameTeamA", &v1162);
  v104 = *(a1 + 0x58);
  if ( v104 != v103 )
  {
    v105 = v103;
    if ( v104 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v105 && *v105 && (v106 = strlen(v105) + 1, (v107 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v106)) != 0i64) )
    {
      v108 = v107;
      memmove(v107, v105, v106);
    }
    else
    {
      v108 = 0i64;
    }
    *(a1 + 0x58) = v108;
  }
  v1162 = &szFile;
  v109 = data::get_str(a2, "locNameTeamB", &v1162);
  v110 = *(a1 + 0x60);
  if ( v110 != v109 )
  {
    v111 = v109;
    if ( v110 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v111 && *v111 && (v112 = strlen(v111) + 1, (v113 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v112)) != 0i64) )
    {
      v114 = v113;
      memmove(v113, v111, v112);
    }
    else
    {
      v114 = 0i64;
    }
    *(a1 + 0x60) = v114;
  }
  v1162 = &szFile;
  v115 = data::get_str(a2, "locDesc", &v1162);
  v116 = *(a1 + 0x68);
  if ( v116 != v115 )
  {
    v117 = v115;
    if ( v116 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v117 && *v117 && (v118 = strlen(v117) + 1, (v119 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v118)) != 0i64) )
    {
      v120 = v119;
      memmove(v119, v117, v118);
    }
    else
    {
      v120 = 0i64;
    }
    *(a1 + 0x68) = v120;
  }
  v1162 = &szFile;
  v121 = data::get_str(a2, "locDescTeamA", &v1162);
  v122 = *(a1 + 0x70);
  if ( v122 != v121 )
  {
    v123 = v121;
    if ( v122 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v123 && *v123 && (v124 = strlen(v123) + 1, (v125 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v124)) != 0i64) )
    {
      v126 = v125;
      memmove(v125, v123, v124);
    }
    else
    {
      v126 = 0i64;
    }
    *(a1 + 0x70) = v126;
  }
  v1162 = &szFile;
  v127 = data::get_str(a2, "locDescTeamB", &v1162);
  v128 = *(a1 + 0x78);
  if ( v128 != v127 )
  {
    v129 = v127;
    if ( v128 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v129 && *v129 && (v130 = strlen(v129) + 1, (v131 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v130)) != 0i64) )
    {
      v132 = v131;
      memmove(v131, v129, v130);
    }
    else
    {
      v132 = 0i64;
    }
    *(a1 + 0x78) = v132;
  }
  v1162 = &szFile;
  v133 = data::get_str(a2, "player_class", &v1162);
  sub_185590(a1 + 0x138, v133);
  v1162 = &szFile;
  v134 = data::get_str(a2, "player_weapons", &v1162);
  sub_185590(a1 + 0x150, v134);
  v1162 = "attempts";
  v135 = data::get_str(a2, "restoreType", &v1162);
  if ( !v135 || (v136 = v135, !strcmp(off_4A70F20, v135)) )
  {
    v138 = 0;
  }
  else if ( !strcmp(off_4A70F28, v136) )
  {
    v138 = 1;
  }
  else
  {
    v137 = strcmp(off_4A70F30, v136);
    v138 = 0;
    if ( !v137 )
      v138 = 2;
  }
  *(a1 + 0x370) = v138;
  LOBYTE(v1162) = 0;
  v139 = data::get_bool(a2, "optionalTakeOff", &v1162);
  *(a1 + 0x179) = v139;
  LOBYTE(v1162) = v139;
  *(a1 + 0x17A) = data::get_bool(a2, "takeOffOnStart", &v1162);
  v140 = *a1;
  if ( !*a1 )
    v140 = &szFile;
  LOBYTE(v1162) = strcmp(v140, "tutorials") == 0;
  *(a1 + 0x178) = data::get_bool(a2, "tutorialMission", &v1162);
  LODWORD(v1162) = 0x3F800000;
  v141 = data::set_real(a2, "fuelAmount", &v1162);
  *(a1 + 0x378) = LODWORD(v141);
  LOBYTE(v1162) = 0;
  v142 = data::get_bool(a2, "isLimitedFuel", &v1162);
  *(a1 + 0x17C) = v142;
  BYTE2(dword_4A79030) = v142;
  LOBYTE(v1162) = 0;
  *(a1 + 0x17B) = data::get_bool(a2, "isLimitedAmmo", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0x3A9) = data::get_bool(a2, "hideDamageFromPlayer", &v1162);
  v143 = 0x3C;
  if ( *(a1 + 0x678) == 2 )
    v143 = 0xB4;
  LODWORD(v1162) = v143;
  v144 = data::set_int(a2, "timeLimit", &v1162);
  if ( v144 >= 0 )
    v143 = v144;
  *(a1 + 0x1F0) = v143;
  LODWORD(v1162) = v143 + 3;
  *(a1 + 0x1F4) = data::set_int(a2, "lockCrewsTimeLimit", &v1162);
  LODWORD(v1162) = 0;
  *(a1 + 0x1FC) = data::set_int(a2, "killLimit", &v1162);
  LODWORD(v1162) = 0x1F4;
  *(a1 + 0x1F8) = data::set_int(a2, "scoreLimit", &v1162);
  LODWORD(v1162) = 0x708;
  *(a1 + 0x278) = data::set_int(a2, "esTTL", &v1162);
  LOBYTE(v1162) = 1;
  *(a1 + 0x17D) = data::get_bool(a2, "allowJIP", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0x17E) = data::get_bool(a2, "isBotsAllowed", &v1162);
  *(a1 + 0x17F) = (*(a1 + 0x678) - 0xE) < 0xFFFFFFFD;
  LOBYTE(v1162) = 1;
  *(a1 + 0x18A) = data::get_bool(a2, "autoBalance", &v1162);
  LODWORD(v1162) = 0;
  *(a1 + 0x388) = data::set_int(a2, "minPlayers", &v1162);
  LODWORD(v1162) = 0x20;
  v145 = data::set_int(a2, "maxPlayers", &v1162);
  *(a1 + 0x38C) = v145;
  LODWORD(v1162) = v145;
  *(a1 + 0x390) = data::set_int(a2, "maxBots", &v1162);
  LODWORD(v1162) = 0;
  *(a1 + 0x394) = data::set_int(a2, "wpAward", &v1162);
  LODWORD(v1162) = 0x3F800000;
  v146 = data::set_real(a2, "respawnTimeMultiplier", &v1162);
  *(a1 + 0x248) = LODWORD(v146);
  LODWORD(v1162) = 0x3F800000;
  v147 = data::set_real(a2, "missionCostMul", &v1162);
  *(a1 + 0x260) = LODWORD(v147);
  LODWORD(v1162) = 0xBF800000;
  v148 = data::set_real(a2, "tankInvisibleForAirplaneDistance", &v1162);
  *(a1 + 0x26C) = LODWORD(v148);
  LODWORD(v1162) = 0xBF800000;
  v149 = data::set_real(a2, "shipInvisibleForAirplaneDistance", &v1162);
  *(a1 + 0x270) = LODWORD(v149);
  v150 = *a2;
  v151 = 0xFFFFFFFF;
  if ( *a2 )
  {
    v152 = data::get_name_id("hudTankDetectedByAircraft", 0x19ui64);
    v153 = *(v150 + 0x50);
    if ( v153 )
    {
      v154 = *(v153 + 0x20);
      if ( !*(v150 + 0x20) )
        goto LABEL_205;
    }
    else
    {
      v154 = 0;
      if ( !*(v150 + 0x20) )
        goto LABEL_205;
    }
    v155 = data::get_name_id(v150, "hudTankDetectedByAircraft", 0x19ui64, v152);
    if ( v155 >= 0 )
    {
      v156 = v154 + v155;
LABEL_207:
      v151 = v156;
      goto LABEL_208;
    }
LABEL_205:
    if ( !v154 )
      goto LABEL_208;
    v156 = data::get_name_id(*(v150 + 0x50), "hudTankDetectedByAircraft", 0x19ui64, v152);
    goto LABEL_207;
  }
LABEL_208:
  v157 = *(a2 + 0x14);
  v158 = *(a2 + 0xC);
  v159 = v158 == 0 || v151 < 0;
  v160 = 0xFFFFFFFF;
  if ( v157 == 0xFFFFFFFFi64 )
  {
    if ( v159 )
      goto LABEL_221;
    v162 = **(a2 + 0x18);
    v165 = &v162[8 * v158];
    v164 = v162;
    while ( (*v164 & 0xFFFFFF) != v151 )
    {
      v164 += 8;
      if ( v164 >= v165 )
        goto LABEL_221;
    }
  }
  else
  {
    if ( v159 )
      goto LABEL_221;
    v161 = *a2 + v157;
    v162 = (v161 + 0x90);
    v163 = v161 + 8 * v158 + 0x90;
    v164 = (v161 + 0x90);
    while ( (*v164 & 0xFFFFFF) != v151 )
    {
      v164 += 8;
      if ( v164 >= v163 )
        goto LABEL_221;
    }
  }
  v160 = 0xFFFFFFFF;
  if ( ((v164 - v162) & 0x400000000i64) == 0 )
  {
    LOBYTE(v1162) = 0;
    v160 = data::get_bool(a2, "hudTankDetectedByAircraft", &v1162);
  }
LABEL_221:
  *(a1 + 0x274) = v160;
  LODWORD(v1162) = 0x3F000000;
  v166 = data::set_real(a2, "deathPenaltyMul", &v1162);
  *(a1 + 0x24C) = LODWORD(v166);
  LODWORD(v1162) = *(*(game + 0x498) + 0x234i64);
  v167 = data::set_real(a2, "ctaCaptureZoneEqualPenaltyMul", &v1162);
  *(a1 + 0x250) = LODWORD(v167);
  LODWORD(v1162) = 0;
  v168 = data::set_real(a2, "ctaCaptureZoneDiffPenaltyExp", &v1162);
  *(a1 + 0x254) = LODWORD(v168);
  LODWORD(v1162) = *(*(game + 0x498) + 0x228i64);
  *(a1 + 0x258) = data::set_int(a2, "ctaNoAliveAirctaftTimer", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0x25C) = data::get_bool(a2, "ctaInstantDecreaseTicketsWhenNoRespawn", &v1162);
  LODWORD(v1162) = 0x3F800000;
  v169 = data::set_real(a2, "spawnScoreMul", &v1162);
  *(a1 + 0x264) = LODWORD(v169);
  LODWORD(v1162) = 0;
  v170 = data::set_real(a2, "spawnScoreForTeamMul", &v1162);
  *(a1 + 0x268) = LODWORD(v170);
  LODWORD(v1162) = 1;
  *(a1 + 0x30C) = data::set_int(a2, "raceLaps", &v1162);
  LODWORD(v1162) = 1;
  LODWORD(v1162) = data::set_int(a2, "raceWinners", &v1162);
  *(a1 + 0x310) = data::set_int(a2, "ffaWinners", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0x314) = data::get_bool(a2, "raceForceCannotShoot", &v1162);
  v171 = *a2;
  v172 = 0xFFFFFFFF;
  if ( !*a2 )
    goto LABEL_231;
  v173 = data::get_name_id("colorTeamA", 0xAui64);
  v174 = *(v171 + 0x50);
  if ( v174 )
  {
    v175 = *(v174 + 0x20);
    if ( !*(v171 + 0x20) )
      goto LABEL_228;
  }
  else
  {
    v175 = 0;
    if ( !*(v171 + 0x20) )
      goto LABEL_228;
  }
  v176 = data::get_name_id(v171, "colorTeamA", 0xAui64, v173);
  if ( v176 >= 0 )
  {
    v177 = v175 + v176;
    goto LABEL_230;
  }
LABEL_228:
  if ( !v175 )
    goto LABEL_231;
  v177 = data::get_name_id(*(v171 + 0x50), "colorTeamA", 0xAui64, v173);
LABEL_230:
  v172 = v177;
LABEL_231:
  v178 = *(a2 + 0x14);
  v179 = *(a2 + 0xC);
  v180 = v179 == 0 || v172 < 0;
  if ( v178 == 0xFFFFFFFFi64 )
  {
    if ( v180 )
      goto LABEL_264;
    v182 = **(a2 + 0x18);
    v184 = v182;
    while ( (*v184 & 0xFFFFFF) != v172 )
    {
      v184 += 8;
      if ( v184 >= &v182[8 * v179] )
        goto LABEL_264;
    }
  }
  else
  {
    if ( v180 )
      goto LABEL_264;
    v181 = *a2 + v178;
    v182 = (v181 + 0x90);
    v183 = v181 + 8 * v179 + 0x90;
    v184 = v182;
    while ( (*v184 & 0xFFFFFF) != v172 )
    {
      v184 += 8;
      if ( v184 >= v183 )
        goto LABEL_264;
    }
  }
  if ( ((v184 - v182) & 0x400000000i64) != 0 )
    goto LABEL_264;
  v185 = *a2;
  v186 = 0xFFFFFFFF;
  if ( !*a2 )
    goto LABEL_254;
  v187 = data::get_name_id("colorTeamB", 0xAui64);
  v188 = *(v185 + 0x50);
  if ( v188 )
  {
    v189 = *(v188 + 0x20);
    if ( !*(v185 + 0x20) )
      goto LABEL_251;
  }
  else
  {
    v189 = 0;
    if ( !*(v185 + 0x20) )
      goto LABEL_251;
  }
  v190 = data::get_name_id(v185, "colorTeamB", 0xAui64, v187);
  if ( v190 >= 0 )
  {
    v191 = v189 + v190;
    goto LABEL_253;
  }
LABEL_251:
  if ( !v189 )
    goto LABEL_254;
  v191 = data::get_name_id(*(v185 + 0x50), "colorTeamB", 0xAui64, v187);
LABEL_253:
  v186 = v191;
LABEL_254:
  v192 = *(a2 + 0x14);
  v193 = *(a2 + 0xC);
  v194 = v193 == 0 || v186 < 0;
  if ( v192 == 0xFFFFFFFFi64 )
  {
    if ( !v194 )
    {
      v196 = **(a2 + 0x18);
      v198 = v196;
      while ( (*v198 & 0xFFFFFF) != v186 )
      {
        v198 += 8;
        if ( v198 >= &v196[8 * v193] )
          goto LABEL_264;
      }
      goto LABEL_424;
    }
LABEL_264:
    *(a1 + 0x2F8) = 0;
    goto LABEL_265;
  }
  if ( v194 )
    goto LABEL_264;
  v195 = *a2 + v192;
  v196 = (v195 + 0x90);
  v197 = v195 + 8 * v193 + 0x90;
  v198 = v196;
  while ( (*v198 & 0xFFFFFF) != v186 )
  {
    v198 += 8;
    if ( v198 >= v197 )
      goto LABEL_264;
  }
LABEL_424:
  v321 = (v198 - v196) & 0x400000000i64;
  *(a1 + 0x2F8) = (v321 >> 0x22) ^ 1;
  if ( !v321 )
  {
    if ( *(a2 + 0x14) == 0xFFFFFFFF )
      sub_1460F50(a2, &v1162, "colorTeamA");
    else
      sub_1461090(a2, &v1162, "colorTeamA");
    *(a1 + 0x300) = v1162;
    if ( *(a2 + 0x14) == 0xFFFFFFFF )
      sub_1460F50(a2, &v1162, "colorTeamB");
    else
      sub_1461090(a2, &v1162, "colorTeamB");
    *(a1 + 0x304) = v1162;
  }
LABEL_265:
  LODWORD(v1162) = 0;
  v199 = data::set_real(a2, "footballScoreGoal", &v1162);
  *(a1 + 0x318) = LODWORD(v199);
  LODWORD(v1162) = 0;
  v200 = data::set_real(a2, "footballScoreAssist", &v1162);
  *(a1 + 0x31C) = LODWORD(v200);
  LODWORD(v1162) = 0;
  v201 = data::set_real(a2, "footballScoreSave", &v1162);
  *(a1 + 0x320) = LODWORD(v201);
  LODWORD(v1162) = 0;
  v202 = data::set_real(a2, "footballSaveTraceTime", &v1162);
  *(a1 + 0x324) = LODWORD(v202);
  LODWORD(v1162) = 0;
  v203 = data::set_real(a2, "footballSaveTraceCooldown", &v1162);
  *(a1 + 0x328) = LODWORD(v203);
  LOBYTE(v1162) = 0;
  *(a1 + 0x32C) = data::get_bool(a2, "isScoreTournament", &v1162);
  v1162 = &szFile;
  v204 = data::get_str(a2, "userstatModes", &v1162);
  v205 = *(a1 + 0x330);
  if ( v205 != v204 )
  {
    v206 = v204;
    if ( v205 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v206 && *v206 && (v207 = strlen(v206) + 1, (v208 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v207)) != 0i64) )
    {
      v209 = v208;
      memmove(v208, v206, v207);
    }
    else
    {
      v209 = 0i64;
    }
    *(a1 + 0x330) = v209;
  }
  LOBYTE(v1162) = 0;
  *(a1 + 0x338) = data::get_bool(a2, "isPersistentSmoke", &v1162);
  LODWORD(v1162) = 0;
  *(a1 + 0x33C) = data::set_int(a2, "persistentSmokeId", &v1162);
  v1162 = &szFile;
  v210 = data::get_str(a2, "country_axis", &v1162);
  v211 = *(a1 + 0x90);
  if ( v211 != v210 )
  {
    v212 = v210;
    if ( v211 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v212 && *v212 && (v213 = strlen(v212) + 1, (v214 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v213)) != 0i64) )
    {
      v215 = v214;
      memmove(v214, v212, v213);
    }
    else
    {
      v215 = 0i64;
    }
    *(a1 + 0x90) = v215;
  }
  v1162 = &szFile;
  v216 = data::get_str(a2, "country_allies", &v1162);
  v217 = *(a1 + 0x98);
  if ( v217 != v216 )
  {
    v218 = v216;
    if ( v217 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v218 && *v218 && (v219 = strlen(v218) + 1, (v220 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v219)) != 0i64) )
    {
      v221 = v220;
      memmove(v220, v218, v219);
    }
    else
    {
      v221 = 0i64;
    }
    *(a1 + 0x98) = v221;
  }
  LOBYTE(v1162) = 0;
  *(a1 + 0x195) = data::get_bool(a2, "useAlternativeMapCoord", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0x308) = data::get_bool(a2, "useAlternativeAerobaticSmokes", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0x188) = data::get_bool(a2, "noRespawns", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0x189) = data::get_bool(a2, "forceNoRespawnsByMission", &v1162);
  LODWORD(v1162) = *(a1 + 0x188) == 0 ? 0xFFFFFFFF : 1;
  *(a1 + 0x184) = data::set_int(a2, "maxRespawns", &v1162);
  LOBYTE(v1162) = 0;
  v222 = data::get_bool(a2, "userMission", &v1162);
  *(a1 + 0x190) = v222;
  byte_4A702C8 = v222 ^ 1;
  LOBYTE(v1162) = 0;
  *(a1 + 0x191) = data::get_bool(a2, "dedicatedReplay", &v1162);
  *(a1 + 0x1E8) = a3;
  *(a1 + 0x1EC) = 0;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v223, v224, v225);
  v227 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  v1181 = 0i64;
  v1182 = v227;
  v1183 = 0i64;
  v228 = *a2;
  v229 = 0xFFFFFFFF;
  if ( *a2 )
  {
    v230 = data::get_name_id("skiesInitialRandomSeed", 0x16ui64);
    v231 = *(v228 + 0x50);
    if ( v231 )
    {
      v232 = *(v231 + 0x20);
      if ( !*(v228 + 0x20) )
        goto LABEL_301;
    }
    else
    {
      v232 = 0;
      if ( !*(v228 + 0x20) )
        goto LABEL_301;
    }
    v233 = data::get_name_id(v228, "skiesInitialRandomSeed", 0x16ui64, v230);
    if ( v233 >= 0 )
    {
      v234 = v232 + v233;
LABEL_303:
      v229 = v234;
      goto LABEL_304;
    }
LABEL_301:
    if ( !v232 )
      goto LABEL_304;
    v234 = data::get_name_id(*(v228 + 0x50), "skiesInitialRandomSeed", 0x16ui64, v230);
    goto LABEL_303;
  }
LABEL_304:
  v1169 = a2;
  v235 = *(a2 + 0xC);
  if ( v235 )
  {
    for ( i = 0i64; i < v237; ++i )
    {
      v237 = v235;
      if ( i >= v235 )
      {
        if ( v229 == 0xFFFFFFFF )
          goto LABEL_321;
      }
      else
      {
        v238 = *(v1169 + 5);
        if ( v238 == 0xFFFFFFFFi64 )
        {
          if ( (*(*v1169[3] + 8 * i) & 0xFFFFFF) == v229 )
          {
            v241 = *v1169[3];
            if ( HIBYTE(*(v241 + 8 * i)) == 2 )
            {
              LODWORD(v240) = *(v241 + 8 * i + 4);
              goto LABEL_322;
            }
            LODWORD(v240) = 0;
            if ( HIBYTE(*(v241 + 8 * i)) != 0xC )
              goto LABEL_322;
            v242 = (*(v241 + 8 * i + 4) + 8 * v237);
LABEL_320:
            v240 = *(v241 + v242);
            if ( v240 != v240 )
LABEL_321:
              LODWORD(v240) = 0;
            goto LABEL_322;
          }
        }
        else if ( (*(v238 + *v1169 + 8 * i + 0x90) & 0xFFFFFF) == v229 )
        {
          v239 = *v1169 + v238;
          if ( HIBYTE(*(v239 + 8 * i + 0x90)) != 2 )
          {
            LODWORD(v240) = 0;
            if ( HIBYTE(*(v239 + 8 * i + 0x90)) != 0xC )
              goto LABEL_322;
            v242 = *(v239 + 8 * i + 0x94) + 8 * v235;
            v241 = *v1169[3];
            goto LABEL_320;
          }
          LODWORD(v240) = *(v239 + 8 * i + 0x94);
LABEL_322:
          v243 = v1183;
          if ( HIDWORD(v1183) == v1183 )
          {
            if ( HIDWORD(v1183) )
            {
              if ( HIDWORD(v1183) > 0x3FF )
                v244 = ((HIDWORD(v1183) + 1) >> 1) + HIDWORD(v1183);
              else
                v244 = 2i64 * HIDWORD(v1183);
            }
            else
            {
              v244 = 4i64;
            }
            sub_203F40(&v1181, v244);
            v243 = v1183;
          }
          LODWORD(v1183) = v243 + 1;
          *(v1181 + 4i64 * v243) = v240;
          v235 = *(v1169 + 6);
          v237 = v235;
        }
      }
    }
  }
  if ( v1183 )
  {
    *(a1 + 0x1E8) = *(v1181 + 4i64 * (((((0x41C64E6D * a3 + 0x3039) >> 0x10) & 0x7FFF) * v1183) / 0x8000));
    *(a1 + 0x1EC) = 1;
  }
  LOBYTE(v1162) = 1;
  v245 = v1169;
  if ( data::get_bool(v1169, "moveCloudsHole", &v1162) )
    v246 = *(a1 + 0x678) != 7 && *(a1 + 0x682) == 0;
  else
    v246 = 0;
  *(a1 + 0x1ED) = v246;
  LOBYTE(v1162) = 1;
  *(a1 + 0x398) = data::get_bool(v245, "groundUnitsAllowed", &v1162);
  v247 = *v245;
  v248 = 0xFFFFFFFF;
  if ( *v245 )
  {
    v249 = data::get_name_id("netDifficultyBlk", 0x10ui64);
    v250 = *(v247 + 0x50);
    if ( v250 )
    {
      v251 = *(v250 + 0x20);
      if ( !*(v247 + 0x20) )
        goto LABEL_342;
    }
    else
    {
      v251 = 0;
      if ( !*(v247 + 0x20) )
        goto LABEL_342;
    }
    v252 = data::get_name_id(v247, "netDifficultyBlk", 0x10ui64, v249);
    if ( v252 >= 0 )
    {
      v253 = v251 + v252;
LABEL_344:
      v248 = v253;
      goto LABEL_345;
    }
LABEL_342:
    if ( !v251 )
      goto LABEL_345;
    v253 = data::get_name_id(*(v247 + 0x50), "netDifficultyBlk", 0x10ui64, v249);
    goto LABEL_344;
  }
LABEL_345:
  v1171 = (v245 + 2);
  v254 = *(v245 + 4);
  if ( v254 != 0xFFFFFFFF )
  {
    v255 = *(v245 + 7);
    if ( v254 < (v254 + v255) )
    {
      v256 = v248 + 1;
      v257 = *v1169;
      v258 = 0;
      while ( (*(*v1169 + *(*v1169 + 0x5C) + 0x90 + 0x20i64 * (v254 + v258) + 8) & 0x3FFFFFFF) != v256 )
      {
        if ( v255 == ++v258 )
          goto LABEL_364;
      }
      if ( v258 < v255 )
      {
        v265 = a1 + 0x37C;
        goto LABEL_361;
      }
    }
LABEL_364:
    v269 = off_4A78F98();
    if ( !v269 )
      goto LABEL_460;
    v270 = v269;
    v271 = *v269;
    v272 = 0xFFFFFFFF;
    if ( !*v269 )
      goto LABEL_375;
    v273 = data::get_name_id("custom_difficulty", 0x11ui64);
    v274 = *(v271 + 0x50);
    if ( v274 )
    {
      v275 = *(v274 + 0x20);
      if ( !*(v271 + 0x20) )
      {
LABEL_372:
        if ( v275 )
        {
          v277 = data::get_name_id(*(v271 + 0x50), "custom_difficulty", 0x11ui64, v273);
          goto LABEL_374;
        }
LABEL_375:
        v278 = *(v270 + 4);
        if ( v278 == 0xFFFFFFFF )
        {
          v284 = *(v270 + 7);
          if ( !*(v270 + 7) )
            goto LABEL_460;
          v285 = v272 + 1;
          v286 = v270[3];
          v287 = *v286;
          v288 = *(v286 + 8) - 8 * v284;
          v289 = 0;
          while ( (*(*(v287 + v288) + 8i64) & 0x3FFFFFFF) != v285 )
          {
            ++v289;
            v288 += 8i64;
            if ( v284 == v289 )
              goto LABEL_460;
          }
          if ( v289 >= v284 )
            goto LABEL_460;
          v290 = *(v287 + v288);
          v294 = *(a1 + 0x374);
          v295 = "ship";
          if ( v294 < 6 )
            v295 = "tank";
          v293 = "air";
          if ( v294 >= 3 )
            v293 = v295;
          if ( !v290 )
            goto LABEL_460;
        }
        else
        {
          v279 = *(v270 + 7);
          if ( v278 >= (v278 + v279) )
            goto LABEL_460;
          v280 = v272 + 1;
          v281 = *v270 + *(*v270 + 0x5C) + 0x90;
          v282 = 0;
          while ( 1 )
          {
            v283 = 0x20i64 * (v278 + v282);
            if ( (*(v281 + v283 + 8) & 0x3FFFFFFF) == v280 )
              break;
            if ( v279 == ++v282 )
              goto LABEL_460;
          }
          if ( v282 >= v279 )
            goto LABEL_460;
          v290 = v283 + v281;
          v291 = *(a1 + 0x374);
          v292 = "ship";
          if ( v291 < 6 )
            v292 = "tank";
          v293 = "air";
          if ( v291 >= 3 )
            v293 = v292;
        }
        if ( *(v290 + 0xE) + *(v290 + 0xC) )
        {
          v1177 = 0i64;
          v1178 = off_4B678C8;
          *&v1179 = 0i64;
          v1162 = "arcade";
          v296 = data::get_str(v1169, "difficulty", &v1162);
          v1163 = v293;
          LODWORD(v1162) = 1;
          *&v1165 = v296;
          LODWORD(v1164) = 1;
          ctor_vprintf(&v1177, 0x40i64, "%s_%s", &v1162, 2);
          v1170 = v1177;
          v297 = v1177;
          if ( !v1179 )
            v297 = &szFile;
          v298 = sub_145DD00(v290, v297);
          v300 = *(v290 + 0x10);
          if ( v300 == 0xFFFFFFFF )
          {
            v323 = *(v290 + 0xE);
            v302 = 0i64;
            if ( !*(v290 + 0xE) )
              goto LABEL_455;
            v324 = v298 + 1;
            v325 = *(v290 + 0x18);
            v326 = *v325;
            v327 = *(v325 + 2) - 8 * v323;
            v328 = 0;
            while ( (*(*(v326 + v327) + 8i64) & 0x3FFFFFFF) != v324 )
            {
              ++v328;
              v327 += 8i64;
              if ( v323 == v328 )
                goto LABEL_455;
            }
            if ( v328 >= v323 || !*(v326 + v327) )
              goto LABEL_454;
          }
          else
          {
            v301 = *(v290 + 0xE);
            v302 = 0i64;
            if ( v300 >= (v300 + v301) )
              goto LABEL_455;
            v303 = v298 + 1;
            v304 = 0;
            while ( (*(*(*v290 + 0x5Ci64) + *v290 + 0x90i64 + 0x20i64 * (v300 + v304) + 8) & 0x3FFFFFFF) != v303 )
            {
              if ( v301 == ++v304 )
                goto LABEL_455;
            }
            if ( v304 >= v301 )
            {
LABEL_454:
              v302 = 0i64;
              goto LABEL_455;
            }
          }
          v329 = sub_145DD00(v290, v297);
          v330 = *(v290 + 0x10);
          if ( v330 == 0xFFFFFFFF )
          {
            v1097 = *(v290 + 0xE);
            v302 = 0i64;
            if ( !*(v290 + 0xE) )
              goto LABEL_455;
            v1098 = v329 + 1;
            v1099 = *(v290 + 0x18);
            v299 = *v1099;
            v1100 = *(v1099 + 8) - 8 * v1097;
            v1101 = 0;
            v335 = v1170;
            while ( (*(*(v299 + v1100) + 8i64) & 0x3FFFFFFF) != v1098 )
            {
              ++v1101;
              v1100 += 8i64;
              if ( v1097 == v1101 )
                goto LABEL_456;
            }
            if ( v1101 >= v1097 )
              v302 = 0i64;
            else
              v302 = *(v299 + v1100);
LABEL_456:
            if ( v335 )
              (*(*v1178 + 0x40i64))(v1178, v335, v299);
            if ( v302 )
            {
              sub_661620(a1 + 0x37C, v302);
              v308 = v1169;
              goto LABEL_470;
            }
            goto LABEL_460;
          }
          v331 = *(v290 + 0xE);
          v302 = 0i64;
          if ( v330 < (v330 + v331) )
          {
            v332 = v329 + 1;
            v333 = *(*v290 + 0x5Ci64) + *v290 + 0x90i64;
            v299 = 0x3FFFFFFFi64;
            v334 = 0;
            v335 = v1170;
            while ( 1 )
            {
              v336 = 0x20i64 * (v330 + v334);
              if ( (*(v333 + v336 + 8) & 0x3FFFFFFF) == v332 )
                break;
              if ( v331 == ++v334 )
                goto LABEL_456;
            }
            v1102 = v336 + v333;
            v302 = 0i64;
            if ( v334 < v331 )
              v302 = v1102;
            goto LABEL_456;
          }
LABEL_455:
          v335 = v1170;
          goto LABEL_456;
        }
LABEL_460:
        v1162 = "arcade";
        v308 = v1169;
        v337 = data::get_str(v1169, "difficulty", &v1162);
        v338 = 0xFFFFFFFF;
        if ( v337 )
        {
          v339 = v337;
          if ( !strcmp("arcade", v337) )
          {
            v338 = 0;
          }
          else if ( !strcmp("realistic", v339) )
          {
            v338 = 1;
          }
          else if ( !strcmp("hardcore", v339) )
          {
            v338 = 2;
          }
          else if ( !strcmp("custom", v339) )
          {
            v338 = 3;
          }
        }
        v340 = sub_681400(v338);
        *(a1 + 0x37C) = *v340;
        *(a1 + 0x384) = *(v340 + 8);
        goto LABEL_470;
      }
    }
    else
    {
      v275 = 0;
      if ( !*(v271 + 0x20) )
        goto LABEL_372;
    }
    v276 = data::get_name_id(v271, "custom_difficulty", 0x11ui64, v273);
    if ( v276 >= 0 )
    {
      v277 = v275 + v276;
LABEL_374:
      v272 = v277;
      goto LABEL_375;
    }
    goto LABEL_372;
  }
  v259 = *(v245 + 7);
  if ( !*(v245 + 7) )
    goto LABEL_364;
  v260 = v248 + 1;
  v261 = v1169[3];
  v262 = *v261;
  v263 = *(v261 + 8) - 8 * v259;
  v264 = 0;
  while ( (*(*(v262 + v263) + 8i64) & 0x3FFFFFFF) != v260 )
  {
    ++v264;
    v263 += 8i64;
    if ( v259 == v264 )
      goto LABEL_364;
  }
  if ( v264 >= v259 || !*(v262 + v263) )
    goto LABEL_364;
  v257 = *v1169;
  v265 = a1 + 0x37C;
  if ( !*v1169 )
    goto LABEL_412;
LABEL_361:
  v266 = data::get_name_id("netDifficultyBlk", 0x10ui64);
  v267 = *(v257 + 0x50);
  if ( v267 )
  {
    v268 = *(v267 + 0x20);
    if ( !*(v257 + 0x20) )
    {
LABEL_410:
      if ( v268 )
      {
        v306 = data::get_name_id(*(v257 + 0x50), "netDifficultyBlk", 0x10ui64, v266);
        goto LABEL_413;
      }
LABEL_412:
      v306 = 0xFFFFFFFF;
      goto LABEL_413;
    }
  }
  else
  {
    v268 = 0;
    if ( !*(v257 + 0x20) )
      goto LABEL_410;
  }
  v305 = data::get_name_id(v257, "netDifficultyBlk", 0x10ui64, v266);
  if ( v305 < 0 )
    goto LABEL_410;
  v306 = v268 + v305;
LABEL_413:
  v307 = *v1171;
  v308 = v1169;
  if ( *v1171 == 0xFFFFFFFF )
  {
    v315 = *(v1169 + 7);
    v310 = 0i64;
    if ( *(v1169 + 7) )
    {
      v316 = v306 + 1;
      v317 = v1169[3];
      v318 = *v317;
      v319 = *(v317 + 8) - 8 * v315;
      v320 = 0;
      while ( (*(*(v318 + v319) + 8i64) & 0x3FFFFFFF) != v316 )
      {
        ++v320;
        v319 += 8i64;
        if ( v315 == v320 )
          goto LABEL_438;
      }
      if ( v320 >= v315 )
        v310 = 0i64;
      else
        v310 = *(v318 + v319);
    }
  }
  else
  {
    v309 = *(v1169 + 7);
    v310 = 0i64;
    if ( v307 < (v307 + v309) )
    {
      v311 = v306 + 1;
      v312 = *v1169 + *(*v1169 + 0x5C) + 0x90;
      v313 = 0;
      while ( 1 )
      {
        v314 = 0x20i64 * (v307 + v313);
        if ( (*(v312 + v314 + 8) & 0x3FFFFFFF) == v311 )
          break;
        if ( v309 == ++v313 )
          goto LABEL_438;
      }
      v322 = v314 + v312;
      v310 = 0i64;
      if ( v313 < v309 )
        v310 = v322;
    }
  }
LABEL_438:
  sub_661620(v265, v310);
LABEL_470:
  LOBYTE(v1162) = (*(a1 + 0x67C) >> 2) & ((*(a1 + 0x37C) & 3) == 0);
  *(a1 + 0x180) = data::get_bool(v308, "arcadeCountry", &v1162) & ((*(a1 + 0x67C) & 4u) >> 2);
  LOBYTE(v1162) = *(a1 + 0x184) < 0xFFFFFFFF;
  *(a1 + 0x18B) = data::get_bool(v308, "multiRespawn", &v1162) & ((*(a1 + 0x67C) & 4u) >> 2);
  LOBYTE(v1162) = 0;
  *(a1 + 0x196) = data::get_bool(v308, "multiRespawnNoRepair", &v1162);
  LODWORD(v1162) = 0x3F800000;
  v341 = data::set_real(v308, "multiRespawnNoRepairDmg", &v1162);
  *(a1 + 0x1CC) = LODWORD(v341);
  LOBYTE(v1162) = 0;
  *(a1 + 0x197) = data::get_bool(v308, "ignoreInvulnerableTimer", &v1162);
  LOBYTE(v1162) = 1;
  *(a1 + 0x18C) = data::get_bool(v308, "slotMultiSpawn", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0x18D) = data::get_bool(v308, "isAwardByObjective", &v1162) & ((*(a1 + 0x67C) & 4u) >> 2);
  LOBYTE(v1162) = 0;
  v342 = data::get_bool(v308, "crewLockEnabled", &v1162);
  *(a1 + 0x18E) = v342;
  *(a1 + 0x1D0) = v342;
  *(a1 + 0x1D1) = v342;
  *(a1 + 0x1D2) = v342;
  LOBYTE(v1162) = 0;
  *(a1 + 0x18F) = data::get_bool(v308, "keepProfileOnReconnect", &v1162);
  v343 = *v308;
  v344 = 0xFFFFFFFF;
  if ( !*v308 )
    goto LABEL_480;
  v345 = data::get_name_id("ranks", 5ui64);
  v346 = *(v343 + 0x50);
  if ( v346 )
  {
    v347 = *(v346 + 0x20);
    if ( !*(v343 + 0x20) )
      goto LABEL_477;
  }
  else
  {
    v347 = 0;
    if ( !*(v343 + 0x20) )
      goto LABEL_477;
  }
  v348 = data::get_name_id(v343, "ranks", 5ui64, v345);
  if ( v348 >= 0 )
  {
    v349 = v347 + v348;
    goto LABEL_479;
  }
LABEL_477:
  if ( !v347 )
    goto LABEL_480;
  v349 = data::get_name_id(*(v343 + 0x50), "ranks", 5ui64, v345);
LABEL_479:
  v344 = v349;
LABEL_480:
  v350 = *v1171;
  if ( *v1171 == 0xFFFFFFFF )
  {
    v357 = *(v308 + 7);
    v352 = 0i64;
    if ( *(v308 + 7) )
    {
      v358 = v344 + 1;
      v359 = v308[3];
      v360 = *v359;
      v361 = *(v359 + 8) - 8 * v357;
      v362 = 0;
      while ( (*(*(v360 + v361) + 8i64) & 0x3FFFFFFF) != v358 )
      {
        ++v362;
        v361 += 8i64;
        if ( v357 == v362 )
          goto LABEL_497;
      }
      if ( v362 >= v357 )
        v352 = 0i64;
      else
        v352 = *(v360 + v361);
    }
  }
  else
  {
    v351 = *(v308 + 7);
    v352 = 0i64;
    if ( v350 < (v350 + v351) )
    {
      v353 = v344 + 1;
      v354 = *(*v308 + 0x5C) + *v308 + 0x90;
      v355 = 0;
      while ( 1 )
      {
        v356 = 0x20i64 * (v350 + v355);
        if ( (*(v354 + v356 + 8) & 0x3FFFFFFF) == v353 )
          break;
        if ( v351 == ++v355 )
          goto LABEL_497;
      }
      v363 = (v356 + v354);
      v352 = 0i64;
      if ( v355 < v351 )
        v352 = v363;
    }
  }
LABEL_497:
  if ( !v352 )
    v352 = &qword_4B67850;
  LODWORD(v1162) = 1;
  *(a1 + 0x170) = data::set_int(v352, "min", &v1162);
  LODWORD(v1162) = 1;
  *(a1 + 0x174) = data::set_int(v352, "max", &v1162);
  LOBYTE(v1162) = 0;
  if ( data::get_bool(v308, "randomSpawnTeams", &v1162) && !*(a1 + 0x194) )
  {
    v364 = 0x41C64E6D * dword_4A79158 + 0x3039;
    dword_4A79158 = v364;
    *(a1 + 0x193) = BYTE2(v364) & 1;
    *(a1 + 0x194) = 1;
    v365 = 1;
    if ( (v364 & 0x10000) == 0 )
    {
      LOBYTE(v1162) = 0;
      v365 = data::get_bool(v308, "remapAiTankModels", &v1162);
    }
    *(a1 + 0x192) = v365;
  }
  LOBYTE(v1162) = 1;
  *(a1 + 0x198) = data::get_bool(v308, "needShowLockedSlots", &v1162) & ((*(a1 + 0x67C) & 4u) >> 2);
  LOBYTE(v1162) = 0;
  *(a1 + 0x199) = data::get_bool(v308, "useSpawnScore", &v1162) & ((*(a1 + 0x67C) & 4u) >> 2);
  LOBYTE(v1162) = 0;
  *(a1 + 0x19A) = data::get_bool(v308, "useTeamSpawnScore", &v1162) & ((*(a1 + 0x67C) & 4u) >> 2);
  LOBYTE(v1162) = 0;
  *(a1 + 0x19D) = data::get_bool(v308, "useKillStreaks", &v1162) & ((*(a1 + 0x67C) & 4u) >> 2);
  LOBYTE(v1162) = 0;
  *(a1 + 0x19F) = data::get_bool(v308, "wwarEconomics", &v1162) & ((*(a1 + 0x67C) & 4u) >> 2);
  LOBYTE(v1162) = 0;
  *(a1 + 0x1A0) = data::get_bool(v308, "isWorldWar", &v1162) & ((*(a1 + 0x67C) & 4u) >> 2);
  LOBYTE(v1162) = 0;
  *(a1 + 0x1A1) = data::get_bool(v308, "checkPlayerUnits", &v1162);
  LOBYTE(v1162) = 1;
  *(a1 + 0x19E) = data::get_bool(v308, "useAssaultBombFuseInKillStreak", &v1162);
  v369 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(v369[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(v369, v366, v367, v368);
  v370 = v1190;
  sub_14584E0(v1190, *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64));
  if ( !sub_A60A60(qword_4B176E8) )
    sub_1606B70(v1190, "config/gameplay.blk", 0i64);
  if ( sub_A60A60(qword_4B176E8) )
    v370 = sub_564630(game, "config/gameplay.blk", 0i64);
  v1162 = &szFile;
  v371 = data::get_str(v308, "nameKillStreaks", &v1162);
  v1170 = v370;
  if ( !v371 )
  {
LABEL_637:
    v372 = 0i64;
    goto LABEL_638;
  }
  v372 = v371;
  if ( !*v371 )
    goto LABEL_638;
  v373 = *v370;
  v374 = 0xFFFFFFFF;
  if ( v373 )
  {
    v375 = strlen(v371);
    v376 = data::get_name_id(v372, v375);
    v377 = *(v373 + 0x50);
    if ( v377 )
    {
      v378 = *(v377 + 0x20);
      if ( !*(v373 + 0x20) )
        goto LABEL_519;
    }
    else
    {
      v378 = 0;
      if ( !*(v373 + 0x20) )
        goto LABEL_519;
    }
    v379 = data::get_name_id(v373, v372, v375, v376);
    if ( v379 >= 0 )
    {
      v380 = v378 + v379;
LABEL_521:
      v374 = v380;
      goto LABEL_522;
    }
LABEL_519:
    if ( !v378 )
      goto LABEL_522;
    v380 = data::get_name_id(*(v373 + 0x50), v372, v375, v376);
    goto LABEL_521;
  }
LABEL_522:
  v370 = v1170;
  v381 = *(v1170 + 4);
  Str = v372;
  if ( v381 == 0xFFFFFFFF )
  {
    v382 = *(v1170 + 7);
    if ( !*(v1170 + 7) )
    {
LABEL_636:
      dword_4A79158 = 0x41C64E6D * dword_4A79158 + 0x3039;
      goto LABEL_637;
    }
    v386 = v374 + 1;
    v387 = *(v1170 + 3);
    v388 = *v387;
    v389 = *(v387 + 2) - 8 * v382;
    v390 = 0;
    while ( (*(*(v388 + v389) + 8i64) & 0x3FFFFFFF) != v386 )
    {
      ++v390;
      v389 += 8i64;
      if ( v382 == v390 )
        goto LABEL_541;
    }
    if ( v390 < v382 )
    {
      v370 = v1170;
      v372 = Str;
      if ( !*(v388 + v389) )
        goto LABEL_543;
      v384 = *v1170;
      if ( !*v1170 )
      {
        v441 = 0xFFFFFFFF;
LABEL_621:
        v444 = *(v370 + 4);
        if ( v444 == 0xFFFFFFFFi64 )
        {
          v450 = *(v370 + 7);
          v451 = v441 + 1;
          v452 = *(v370 + 3);
          v453 = *v452;
          v454 = *(v452 + 2);
          v455 = (v454 - 8 * v450);
          LODWORD(v456) = 0;
          if ( (*(*(v453 + v455) + 8i64) & 0x3FFFFFFF) != v451 )
          {
            v457 = v455 + v453 + 8;
            v456 = 0i64;
            do
              v458 = *(*(v457 + 8 * v456++) + 8i64) & 0x3FFFFFFF;
            while ( v458 != v451 );
          }
          v459 = *(v453 + (v454 + 8 * (v456 - v450)));
        }
        else
        {
          v445 = v441 + 1;
          v446 = *(v370 + 7);
          v447 = *(*v370 + 0x5Ci64);
          v448 = v447 + *v370;
          if ( (*(0x20 * v444 + v448 + 0x98) & 0x3FFFFFFF) == v445 )
          {
            v449 = 0x20 * v444 + v448 + 0x90;
            LODWORD(v447) = *(v370 + 4);
          }
          else
          {
            v460 = v447 + *v370 + 0x90;
            v461 = v446 - 1;
            LODWORD(v447) = *(v370 + 4);
            do
            {
              v447 = (v447 + 1);
              --v461;
            }
            while ( (*(v460 + 0x20 * v447 + 8) & 0x3FFFFFFF) != v445 );
            v449 = 0x20 * v447 + v460;
          }
          v459 = 0i64;
          if ( v447 - v444 < v446 )
            v459 = v449;
        }
        v370 = v1170;
        v372 = Str;
        v1177 = 0x6400000000i64;
        sub_145CE20(v459, &v1162, "ranks", &v1177);
        v462 = *(a1 + 0x174);
        if ( v1162 <= v462 && SHIDWORD(v1162) >= v462 )
          goto LABEL_638;
        LOWORD(v382) = *(v370 + 7);
        if ( v382 )
          goto LABEL_544;
        goto LABEL_636;
      }
LABEL_538:
      v392 = strlen(v372);
      v393 = data::get_name_id(v372, v392);
      v394 = *(v384 + 0x50);
      if ( v394 )
      {
        v395 = *(v394 + 0x20);
        if ( !*(v384 + 0x20) )
          goto LABEL_611;
      }
      else
      {
        v395 = 0;
        if ( !*(v384 + 0x20) )
          goto LABEL_611;
      }
      v440 = data::get_name_id(v384, v372, v392, v393);
      if ( v440 >= 0 )
      {
        v441 = v395 + v440;
LABEL_620:
        v370 = v1170;
        goto LABEL_621;
      }
LABEL_611:
      if ( v395 )
        v441 = data::get_name_id(*(v384 + 0x50), v372, v392, v393);
      else
        v441 = 0xFFFFFFFF;
      goto LABEL_620;
    }
LABEL_541:
    v370 = v1170;
LABEL_542:
    v372 = Str;
    goto LABEL_543;
  }
  LOWORD(v382) = *(v1170 + 7);
  if ( v381 >= v381 + v382 )
    goto LABEL_542;
  v383 = v374 + 1;
  v384 = *v1170;
  v385 = 0;
  while ( (*(*v1170 + *(*v1170 + 0x5Ci64) + 0x90i64 + 0x20i64 * (v381 + v385) + 8) & 0x3FFFFFFF) != v383 )
  {
    if ( v382 == ++v385 )
      goto LABEL_541;
  }
  v391 = v385 < v382;
  v370 = v1170;
  v372 = Str;
  if ( v391 )
    goto LABEL_538;
LABEL_543:
  if ( !v382 )
    goto LABEL_636;
LABEL_544:
  v1180 = off_4B678C0;
  v396 = 0.0;
  v397 = 0;
  v398 = 0;
  v1176 = 0i64;
  v1173 = 0;
  Src = 0i64;
  do
  {
    v400 = *(v370 + 4);
    if ( v400 == 0xFFFFFFFF )
    {
      if ( v398 >= v382 )
      {
LABEL_553:
        v401 = 0i64;
        goto LABEL_554;
      }
      v401 = *(**(v370 + 3) + v397 + *(*(v370 + 3) + 8i64) - 8 * v382);
    }
    else
    {
      if ( v398 >= v382 )
        goto LABEL_553;
      v401 = 0x20i64 * (v398 + v400) + *v370 + *(*v370 + 0x5Ci64) + 0x90;
    }
LABEL_554:
    v402 = strlen(v372);
    v403 = *(v401 + 8) & 0x3FFFFFFF;
    v391 = v403 == 0;
    v404 = v403 - 1;
    if ( !v391 )
    {
      v405 = *v401;
      if ( *v401 )
      {
        v406 = *(v405 + 0x50);
        if ( v406 )
        {
          v407 = *(v406 + 0x20);
          if ( v407 > v404 )
          {
            v408 = *(*(v406 + 0x18) + 4i64 * v404);
            v409 = *(v406 + 0x4A);
            v410 = v408 >> v409;
            goto LABEL_563;
          }
        }
        else
        {
          v407 = 0;
        }
        v412 = v404 - v407;
        if ( *(v405 + 0x20) <= v412 )
        {
          v411 = 0i64;
LABEL_567:
          v372 = Str;
          goto LABEL_568;
        }
        v408 = *(*(v405 + 0x18) + 4i64 * v412);
        v409 = *(v405 + 0x4A);
        v410 = v408 >> v409;
        v406 = *v401;
LABEL_563:
        v413 = (*(v406 + 0x38) + 0x10i64 * v410);
        if ( v410 == *(v406 + 0x40) )
          v413 = (v406 + 0x28);
        v411 = (*v413 + (v408 & ~(0xFFFFFFFF << v409)));
        v370 = v1170;
        goto LABEL_567;
      }
    }
    v411 = 0i64;
LABEL_568:
    if ( !strncmp(v372, v411, v402) )
    {
      v1177 = 0x6400000000i64;
      sub_145CE20(v401, &v1162, "ranks", &v1177);
      v414 = *(a1 + 0x174);
      if ( v1162 <= v414 && SHIDWORD(v1162) >= v414 )
      {
        LODWORD(v1162) = 0x3F800000;
        v415 = data::set_real(v401, "weight", &v1162);
        v416 = v1173;
        if ( v1176 == v1173 )
        {
          v1187 = v1176;
          if ( v1176 )
          {
            v417 = v1180;
            if ( v1176 > 0x3FF )
              v418 = v1176 + ((v1176 + 1) >> 1);
            else
              v418 = 2i64 * v1176;
          }
          else
          {
            v418 = 4i64;
            v417 = v1180;
          }
          v419 = Src;
          if ( !Src )
          {
            v1176 = v418;
            goto LABEL_583;
          }
          if ( v418 < 5 )
            v418 = 4i64;
          v1176 = v418;
          v399 = (*(*v417 + 0x38i64))(v417, Src, 4 * v418);
          v416 = v1173;
          if ( !v399 )
          {
LABEL_583:
            v420 = v1176;
            if ( v1176 < 5 )
              v420 = 4i64;
            v1176 = v420;
            v421 = v1180;
            v399 = (*(*v1180 + 0x18i64))(v1180, 4 * v420);
            memmove(v399, v419, 4 * v1187);
            if ( v419 )
              (*(*v421 + 0x40i64))(v421, v419);
            v416 = v1173;
          }
        }
        else
        {
          v399 = Src;
        }
        v396 = v396 + *&v415;
        v1173 = v416 + 1;
        *(v399 + v416) = v398;
        Src = v399;
      }
    }
    ++v398;
    v382 = *(v370 + 7);
    v397 += 8;
  }
  while ( v398 < v382 );
  v422 = 0x41C64E6D * dword_4A79158 + 0x3039;
  dword_4A79158 = v422;
  v308 = v1169;
  if ( !v1173 )
  {
    v372 = 0i64;
    if ( Src )
      goto LABEL_618;
    goto LABEL_638;
  }
  v423 = (HIWORD(v422) & 0x7FFF) * (v396 * *&dword_44A0140);
  v424 = v1173;
  v425 = 0i64;
  while ( 2 )
  {
    v426 = *(Src + v425);
    v427 = *(v370 + 4);
    v428 = *(v370 + 7);
    if ( v427 == 0xFFFFFFFF )
    {
      v391 = v426 < v428;
      v430 = v426 - v428;
      if ( !v391 )
        goto LABEL_595;
      v429 = *(**(v370 + 3) + *(*(v370 + 3) + 8i64) + 8 * v430);
    }
    else
    {
      if ( v426 < v428 )
      {
        v429 = 0x20i64 * (v426 + v427) + *v370 + *(*v370 + 0x5Ci64) + 0x90;
        goto LABEL_596;
      }
LABEL_595:
      v429 = 0i64;
    }
LABEL_596:
    LODWORD(v1162) = 0x3F800000;
    v431 = data::set_real(v429, "weight", &v1162);
    v423 = v423 - *&v431;
    if ( v423 > 0.0 )
    {
      ++v425;
      v370 = v1170;
      if ( v424 == v425 )
        goto LABEL_598;
      continue;
    }
    break;
  }
  v432 = *(v429 + 8) & 0x3FFFFFFF;
  v391 = v432 == 0;
  v433 = v432 - 1;
  if ( v391 )
  {
    v372 = 0i64;
    goto LABEL_607;
  }
  v434 = *v429;
  v372 = 0i64;
  if ( *v429 )
  {
    v435 = 0;
    v436 = *(v434 + 0x50);
    if ( v436 && (v435 = *(v436 + 0x20), v435 > v433) )
    {
      v437 = *(*(v436 + 0x18) + 4i64 * v433);
      v438 = *(v436 + 0x4A);
      v439 = v437 >> v438;
      v370 = v1170;
    }
    else
    {
      v442 = v433 - v435;
      v370 = v1170;
      if ( *(v434 + 0x20) <= v442 )
      {
LABEL_598:
        v372 = 0i64;
        goto LABEL_618;
      }
      v437 = *(*(v434 + 0x18) + 4i64 * v442);
      v438 = *(v434 + 0x4A);
      v439 = v437 >> v438;
      v436 = v434;
    }
    v443 = (*(v436 + 0x38) + 0x10i64 * v439);
    if ( v439 == *(v436 + 0x40) )
      v443 = (v436 + 0x28);
    v372 = (*v443 + (v437 & ~(0xFFFFFFFF << v438)));
  }
  else
  {
LABEL_607:
    v370 = v1170;
  }
LABEL_618:
  (*(*v1180 + 0x40i64))(v1180);
LABEL_638:
  v463 = *(a1 + 0x130);
  if ( v463 != v372 )
  {
    if ( v463 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v372 && *v372 && (v464 = strlen(v372) + 1, (v465 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v464)) != 0i64) )
    {
      v466 = v465;
      memmove(v465, v372, v464);
    }
    else
    {
      v466 = 0i64;
    }
    *(a1 + 0x130) = v466;
    v370 = v1170;
  }
  sub_6C9E80(*(game + 0x498), v370, a1 + 0x130);
  LOBYTE(v1162) = 0;
  *(a1 + 0x1A4) = data::get_bool(v308, "useSpawnDelay", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0x1A5) = data::get_bool(v308, "afterDeathDelayOnly", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0x1AD) = data::get_bool(v308, "disableUnitsOutOfSessionRank", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0x1AE) = data::get_bool(v308, "sendAwardsToUserLog", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0x1AF) = data::get_bool(v308, "useTimeAwardingEconomics", &v1162) & ((*(a1 + 0x67C) & 4u) >> 2);
  LODWORD(v1162) = 0x384;
  *(a1 + 0x1B0) = data::set_int(v308, "timeAwardingEconomicsRewardPeriodSec", &v1162);
  v1162 = &szFile;
  v467 = data::get_str(v308, "timeAwardingEconomicsActivityPreset", &v1162);
  v468 = *(a1 + 0x1B8);
  if ( v468 != v467 )
  {
    v469 = v467;
    if ( v468 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v469 && *v469 && (v470 = strlen(v469) + 1, (v471 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v470)) != 0i64) )
    {
      v472 = v471;
      memmove(v471, v469, v470);
    }
    else
    {
      v472 = 0i64;
    }
    *(a1 + 0x1B8) = v472;
  }
  LOBYTE(v1162) = 1;
  *(a1 + 0x1A9) = data::get_bool(v308, "allowUseArtillerySupport", &v1162);
  LOBYTE(v1162) = 1;
  *(a1 + 0x1AA) = data::get_bool(v308, "allowWinch", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0x1AC) = data::get_bool(v308, "forceFreeBeltsAndWeapons", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0x1C0) = data::get_bool(v308, "useTankBots", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0x1C1) = data::get_bool(v308, "useShipBots", &v1162);
  LOBYTE(v1162) = 1;
  *(a1 + 0x1C2) = data::get_bool(v308, "keepDead", &v1162);
  LODWORD(v1162) = 0;
  v473 = data::set_real(v308, "tankBotsTargetingPosError", &v1162);
  *(a1 + 0x1C4) = LODWORD(v473);
  LODWORD(v1162) = LODWORD(v473);
  v474 = data::set_real(v308, "tankBotsTargetingPosErrorOnHuman", &v1162);
  *(a1 + 0x1C8) = LODWORD(v474);
  LOBYTE(v1162) = 0;
  *(a1 + 0x1E4) = data::get_bool(v308, "allowEmptyTeams", &v1162);
  LOBYTE(v1162) = 1;
  *(a1 + 0x1E5) = data::get_bool(v308, "ctaPenaltyInactive", &v1162);
  LOBYTE(v1162) = 1;
  *(a1 + 0x1E6) = data::get_bool(v308, "ctaPenaltyNoBase", &v1162);
  LOBYTE(v1162) = 1;
  *(a1 + 0x1E7) = data::get_bool(v308, "ctaPenaltyEmpty", &v1162);
  LOBYTE(v1162) = (*(a1 + 0x67C) & 4) == 0 || *(a1 + 0x678) == 0xB;
  *(a1 + 0x1A2) = data::get_bool(v308, "useFinalResults", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0x1A3) = data::get_bool(v308, "useCustomOnlineUnlocksOnly", &v1162) & ((*(a1 + 0x67C) & 4u) >> 2);
  LOBYTE(v1162) = 0;
  *(a1 + 0x19B) = data::get_bool(v308, "singleSpawnByTypeTechnics", &v1162) & ((*(a1 + 0x67C) & 4u) >> 2);
  LOBYTE(v1162) = 0;
  *(a1 + 0x19C) = data::get_bool(v308, "updateSpawnDelayOnlyForCurrentUnit", &v1162);
  if ( *(a1 + 0x18B) )
  {
    *(a1 + 0x1DC) = 0xFFFFFFFF;
    *(a1 + 0x1D4) = 0xFFFFFFFFFFFFFFFFui64;
    v475 = 0xFFFFFFFF;
  }
  else
  {
    v475 = *(a1 + 0x184);
    if ( v475 <= 0 )
    {
      LODWORD(v1162) = 1;
      *(a1 + 0x1D4) = data::set_int(qword_4AD09E8 + 0x130, "numBotRespawnsInMultiSlot", &v1162);
      LODWORD(v1162) = 3;
      *(a1 + 0x1D8) = data::set_int(qword_4AD09E8 + 0x130, "numTankBotRespawnsInMultiSlot", &v1162);
      LODWORD(v1162) = 3;
      *(a1 + 0x1DC) = data::set_int(qword_4AD09E8 + 0x130, "numShipBotRespawnsInMultiSlot", &v1162);
      v475 = *(a1 + 0x1D4);
    }
    else
    {
      *(a1 + 0x1DC) = v475;
      *(a1 + 0x1D8) = v475;
      *(a1 + 0x1D4) = v475;
    }
  }
  LODWORD(v1162) = v475;
  *(a1 + 0x1D4) = data::set_int(v308, "numBotRespawns", &v1162);
  LODWORD(v1162) = *(a1 + 0x1D8);
  *(a1 + 0x1D8) = data::set_int(v308, "numTankBotRespawns", &v1162);
  LODWORD(v1162) = *(a1 + 0x1DC);
  *(a1 + 0x1DC) = data::set_int(v308, "numShipBotRespawns", &v1162);
  LODWORD(v1162) = 0;
  LODWORD(v1162) = data::set_int(qword_4AD09E8 + 0x130, "addWaitBetweenBotRespawns", &v1162);
  *(a1 + 0x1E0) = data::set_int(v308, "addWaitBetweenBotRespawns", &v1162);
  LODWORD(v1162) = (*(a1 + 0x67C) & 4) == 0 ? 0xFFFFFFFF : 0x3C;
  *(a1 + 0x27C) = data::set_int(v308, "timeToKickAfk", &v1162);
  LODWORD(v1162) = 0xFFFFFFFF;
  *(a1 + 0x280) = data::set_int(v308, "timeToKickAfkInSession", &v1162);
  LODWORD(v1162) = *(a1 + 0x284);
  v476 = data::set_real(v308, "delaySpawnMRankPow", &v1162);
  *(a1 + 0x284) = LODWORD(v476);
  LODWORD(v1162) = *(a1 + 0x288);
  *(a1 + 0x288) = data::set_int(v308, "delayForMaxRankMinutes", &v1162);
  LODWORD(v1162) = *(a1 + 0x28C);
  *(a1 + 0x28C) = data::set_int(v308, "delayTimeRoundConstant", &v1162);
  LODWORD(v1162) = *(a1 + 0x290);
  v477 = data::set_real(v308, "gameModeCustomDmg", &v1162);
  *(a1 + 0x290) = LODWORD(v477);
  LODWORD(v1162) = *(a1 + 0x294);
  v478 = data::set_real(v308, "roguelikeLandingAwardPart_exp", &v1162);
  *(a1 + 0x294) = LODWORD(v478);
  LODWORD(v1162) = *(a1 + 0x298);
  v479 = data::set_real(v308, "roguelikeLandingAwardPart_wp", &v1162);
  *(a1 + 0x298) = LODWORD(v479);
  LODWORD(v1162) = *(a1 + 0x29C);
  v480 = data::set_real(v308, "botSurviveAmmoLostPercent", &v1162);
  *(a1 + 0x29C) = LODWORD(v480);
  LODWORD(v1162) = *(a1 + 0x2A0);
  v481 = data::set_real(v308, "botSurviveWeaponLostPercent", &v1162);
  *(a1 + 0x2A0) = LODWORD(v481);
  v1162 = &szFile;
  v482 = data::get_str(v308, "activityPreset", &v1162);
  v483 = *(a1 + 0x2A8);
  if ( v483 != v482 )
  {
    v484 = v482;
    if ( v483 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v484 && *v484 && (v485 = strlen(v484) + 1, (v486 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v485)) != 0i64) )
    {
      v487 = v486;
      memmove(v486, v484, v485);
    }
    else
    {
      v487 = 0i64;
    }
    *(a1 + 0x2A8) = v487;
  }
  LODWORD(v1162) = *(a1 + 0x2B0);
  v488 = data::set_real(v308, "maxTimeLagCompensation", &v1162);
  *(a1 + 0x2B0) = LODWORD(v488);
  v1162 = &szFile;
  v489 = data::get_str(v308, "battleAreaColorPreset", &v1162);
  v490 = *(a1 + 0x340);
  if ( v490 != v489 )
  {
    v491 = v489;
    if ( v490 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v491 && *v491 && (v492 = strlen(v491) + 1, (v493 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v492)) != 0i64) )
    {
      v494 = v493;
      memmove(v493, v491, v492);
    }
    else
    {
      v494 = 0i64;
    }
    *(a1 + 0x340) = v494;
  }
  LODWORD(v1162) = 0xBF800000;
  v495 = data::set_real(v308, "killZoneVisibilityDistance", &v1162);
  *(a1 + 0x368) = LODWORD(v495);
  LODWORD(v1162) = 0xBF800000;
  v496 = data::set_real(v308, "detectionZoneVisibilityDistance", &v1162);
  *(a1 + 0x36C) = LODWORD(v496);
  LOBYTE(v1162) = 0;
  *(a1 + 0x2B4) = data::get_bool(v308, "useCustomSuperArtillery", &v1162);
  v1162 = &szFile;
  v497 = data::get_str(v308, "customSuperArtillery", &v1162);
  v498 = *(a1 + 0x2B8);
  if ( v498 != v497 )
  {
    v499 = v497;
    if ( v498 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v499 && *v499 && (v500 = strlen(v499) + 1, (v501 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v500)) != 0i64) )
    {
      v502 = v501;
      memmove(v501, v499, v500);
    }
    else
    {
      v502 = 0i64;
    }
    *(a1 + 0x2B8) = v502;
  }
  v1162 = &szFile;
  v503 = data::get_str(v308, "customArtillery", &v1162);
  v504 = *(a1 + 0x2C0);
  if ( v504 != v503 )
  {
    v505 = v503;
    if ( v504 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v505 && *v505 && (v506 = strlen(v505) + 1, (v507 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v506)) != 0i64) )
    {
      v508 = v507;
      memmove(v507, v505, v506);
    }
    else
    {
      v508 = 0i64;
    }
    *(a1 + 0x2C0) = v508;
  }
  v1162 = &szFile;
  v509 = data::get_str(v308, "customArtilleryImage", &v1162);
  v510 = *(a1 + 0x2C8);
  if ( v510 != v509 )
  {
    v511 = v509;
    if ( v510 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v511 && *v511 && (v512 = strlen(v511) + 1, (v513 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v512)) != 0i64) )
    {
      v514 = v513;
      memmove(v513, v511, v512);
    }
    else
    {
      v514 = 0i64;
    }
    *(a1 + 0x2C8) = v514;
  }
  v1162 = &szFile;
  v515 = data::get_str(v308, "killOutOfBattleAreaUnit", &v1162);
  v516 = *(a1 + 0x2E8);
  if ( v516 != v515 )
  {
    v517 = v515;
    if ( v516 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v517 && *v517 && (v518 = strlen(v517) + 1, (v519 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v518)) != 0i64) )
    {
      v520 = v519;
      memmove(v519, v517, v518);
    }
    else
    {
      v520 = 0i64;
    }
    *(a1 + 0x2E8) = v520;
  }
  LOBYTE(v1162) = 0;
  *(a1 + 0x2D8) = data::get_bool(v308, "useDeathmatchHUD", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0x2D9) = data::get_bool(v308, "showTacticalMapCellSize", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0x2DA) = data::get_bool(v308, "hudUseModernMarkers", &v1162);
  LODWORD(v1162) = 0xFFFFFFFF;
  *(a1 + 0x2DC) = data::set_int(v308, "timeLimitWarn", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0x2E0) = data::get_bool(v308, "isRestartOptionHidden", &v1162);
  v1162 = &szFile;
  v521 = data::get_str(v308, "countryFlagTeamA", &v1162);
  v522 = *(a1 + 0x348);
  if ( v522 != v521 )
  {
    v523 = v521;
    if ( v522 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v523 && *v523 && (v524 = strlen(v523) + 1, (v525 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v524)) != 0i64) )
    {
      v526 = v525;
      memmove(v525, v523, v524);
    }
    else
    {
      v526 = 0i64;
    }
    *(a1 + 0x348) = v526;
  }
  v1162 = &szFile;
  v527 = data::get_str(v308, "countryFlagTeamB", &v1162);
  v528 = *(a1 + 0x350);
  if ( v528 != v527 )
  {
    v529 = v527;
    if ( v528 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v529 && *v529 && (v530 = strlen(v529) + 1, (v531 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v530)) != 0i64) )
    {
      v532 = v531;
      memmove(v531, v529, v530);
    }
    else
    {
      v532 = 0i64;
    }
    *(a1 + 0x350) = v532;
  }
  LOBYTE(v1162) = 0;
  *(a1 + 0x309) = data::get_bool(v308, "checkFriendlyFireAlsoFromAircrafts", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0x30A) = data::get_bool(v308, "disableFriendlyFire", &v1162);
  v1162 = &szFile;
  v533 = data::get_str(v308, "customArtillerySfxPath", &v1162);
  v534 = *(a1 + 0x358);
  if ( v534 != v533 )
  {
    v535 = v533;
    if ( v534 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v535 && *v535 && (v536 = strlen(v535) + 1, (v537 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v536)) != 0i64) )
    {
      v538 = v537;
      memmove(v537, v535, v536);
    }
    else
    {
      v538 = 0i64;
    }
    *(a1 + 0x358) = v538;
  }
  v1162 = &szFile;
  v539 = data::get_str(v308, "customArtillerySfx", &v1162);
  v540 = *(a1 + 0x360);
  if ( v540 != v539 )
  {
    v541 = v539;
    if ( v540 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v541 && *v541 && (v542 = strlen(v541) + 1, (v543 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v542)) != 0i64) )
    {
      v544 = v543;
      memmove(v543, v541, v542);
    }
    else
    {
      v544 = 0i64;
    }
    *(a1 + 0x360) = v544;
  }
  v1162 = &szFile;
  v545 = data::get_str(v308, "customHUD", &v1162);
  v546 = *(a1 + 0x2F0);
  if ( v546 != v545 )
  {
    v547 = v545;
    if ( v546 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v547 && *v547 && (v548 = strlen(v547) + 1, (v549 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v548)) != 0i64) )
    {
      v550 = v549;
      memmove(v549, v547, v548);
    }
    else
    {
      v550 = 0i64;
    }
    *(a1 + 0x2F0) = v550;
  }
  LOBYTE(v1162) = 0;
  *(a1 + 0x30B) = data::get_bool(v308, "hideUnitsBehindSmoke", &v1162);
  v551 = *(a1 + 0x358);
  if ( v551 )
  {
    if ( *v551 )
    {
      v552 = *(a1 + 0x360);
      if ( v552 )
      {
        if ( *v552 )
        {
          v553 = *(a1 + 0x2D0);
          if ( v553 )
          {
            EnterCriticalSection(&stru_4B776C8);
            *(v553 + 0x118) = 0x7FFFFFFF;
            sub_1665AB0(v553);
            (*(*off_4B678C0 + 0x40i64))(off_4B678C0, v553);
            LeaveCriticalSection(&stru_4B776C8);
          }
          EnterCriticalSection(&stru_4B776C8);
          v554 = (*(*off_4B678C0 + 0x18i64))(off_4B678C0, 0x200i64);
          memset(v554, 0, 0x200ui64);
          sub_1665C80(v554, 1);
          v554[0x46] = 0xFFFFFFFF;
          LeaveCriticalSection(&stru_4B776C8);
          *(a1 + 0x2D0) = v554;
        }
      }
    }
  }
  if ( *(a1 + 0x27C) > 0 )
  {
    *(a1 + 0x1F4) = 0;
    *(a1 + 0x18E) = 0;
  }
  if ( *(a1 + 0x19B) | *(a1 + 0x18B) )
    v555 = 0;
  else
    v555 = *(a1 + 0x184) != 1;
  LOBYTE(v1162) = v555;
  *(a1 + 0x1A7) = data::get_bool(v308, "allowSpare", &v1162);
  LOBYTE(v1162) = 1;
  *(a1 + 0x1A6) = data::get_bool(v308, "useFreeRepairs", &v1162);
  LOBYTE(v1162) = 1;
  *(a1 + 0x1A8) = data::get_bool(v308, "enableProcessTeamInjury", &v1162);
  LODWORD(v1162) = 0x10;
  *(a1 + 0x680) = data::set_int(v308, "mainPlayerType", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0x3A0) = data::get_bool(v308, "disableDrag", &v1162);
  LOBYTE(v1162) = 0;
  *(a1 + 0x3A1) = data::get_bool(v308, "disableGravity", &v1162);
  LODWORD(v1162) = 0x447A0000;
  v556 = data::set_real(v308, "tformPhysicsError", &v1162);
  *(a1 + 0x3A4) = LODWORD(v556);
  v557 = *(a1 + 0x200);
  v558 = *(a1 + 0x208);
  *(a1 + 0x200) = 0i64;
  v559 = *(a1 + 0x210);
  *(a1 + 0x210) = 0i64;
  if ( v557 )
  {
    if ( v559 )
    {
      v560 = 8 * v559;
      v561 = 0i64;
      do
      {
        if ( *(v557 + v561) )
          (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
        v561 += 8i64;
      }
      while ( v560 != v561 );
    }
    (*(*v558 + 0x40i64))(v558, v557);
  }
  v562 = *v308;
  v563 = 0xFFFFFFFF;
  if ( !*v308 )
    goto LABEL_789;
  v564 = data::get_name_id("tags", 4ui64);
  v565 = *(v562 + 0x50);
  if ( v565 )
  {
    v566 = *(v565 + 0x20);
    if ( !*(v562 + 0x20) )
    {
LABEL_786:
      if ( v566 )
      {
        v568 = data::get_name_id(*(v562 + 0x50), "tags", 4ui64, v564);
        goto LABEL_788;
      }
      goto LABEL_789;
    }
  }
  else
  {
    v566 = 0;
    if ( !*(v562 + 0x20) )
      goto LABEL_786;
  }
  v567 = data::get_name_id(v562, "tags", 4ui64, v564);
  if ( v567 < 0 )
    goto LABEL_786;
  v568 = v566 + v567;
LABEL_788:
  v563 = v568;
LABEL_789:
  v569 = *v1171;
  if ( *v1171 == 0xFFFFFFFF )
  {
    v576 = *(v308 + 7);
    v571 = 0i64;
    if ( *(v308 + 7) )
    {
      v577 = v563 + 1;
      v578 = v308[3];
      v579 = *v578;
      v580 = *(v578 + 8) - 8 * v576;
      v581 = 0;
      while ( (*(*(v579 + v580) + 8i64) & 0x3FFFFFFF) != v577 )
      {
        ++v581;
        v580 += 8i64;
        if ( v576 == v581 )
          goto LABEL_806;
      }
      if ( v581 >= v576 )
        v571 = 0i64;
      else
        v571 = *(v579 + v580);
    }
  }
  else
  {
    v570 = *(v308 + 7);
    v571 = 0i64;
    if ( v569 < (v569 + v570) )
    {
      v572 = v563 + 1;
      v573 = *(*v308 + 0x5C) + *v308 + 0x90;
      v574 = 0;
      while ( 1 )
      {
        v575 = 0x20i64 * (v569 + v574);
        if ( (*(v573 + v575 + 8) & 0x3FFFFFFF) == v572 )
          break;
        if ( v570 == ++v574 )
          goto LABEL_806;
      }
      v582 = (v575 + v573);
      v571 = 0i64;
      if ( v574 < v570 )
        v571 = v582;
    }
  }
LABEL_806:
  if ( !v571 )
    v571 = &qword_4B67850;
  LOWORD(v583) = *(v571 + 6);
  if ( v583 )
  {
    v584 = 0;
    do
    {
      if ( v584 < v583
        && (v585 = sub_1459970(v571, v584)) != 0i64
        && (v586 = v585, *v585)
        && (v587 = strlen(v585) + 1, (v588 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v587)) != 0i64) )
      {
        v589 = v588;
        memmove(v588, v586, v587);
      }
      else
      {
        v589 = 0i64;
      }
      v590 = *(a1 + 0x210);
      v591 = *(a1 + 0x214);
      if ( v591 == v590 )
      {
        if ( *(a1 + 0x214) )
        {
          if ( v591 > 0x1FF )
            v593 = ((v591 + 1) >> 1) + v591;
          else
            v593 = 2 * v591;
        }
        else
        {
          v593 = 2i64;
        }
        sub_2C8140(a1 + 0x200, v593);
        v590 = *(a1 + 0x210);
      }
      v592 = *(a1 + 0x200);
      *(a1 + 0x210) = v590 + 1;
      *(v592 + 8i64 * v590) = v589;
      ++v584;
      v583 = *(v571 + 6);
    }
    while ( v584 < v583 );
  }
  v594 = *(a1 + 0x218);
  v595 = *(a1 + 0x220);
  *(a1 + 0x218) = 0i64;
  v596 = *(a1 + 0x228);
  *(a1 + 0x228) = 0i64;
  if ( v594 )
  {
    if ( v596 )
    {
      v597 = 8 * v596;
      v598 = 0i64;
      do
      {
        if ( *(v594 + v598) )
          (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
        v598 += 8i64;
      }
      while ( v597 != v598 );
    }
    (*(*v595 + 0x40i64))(v595, v594);
  }
  v599 = *v308;
  v600 = 0xFFFFFFFF;
  if ( !*v308 )
    goto LABEL_842;
  v601 = data::get_name_id("aircrafts", 9ui64);
  v602 = *(v599 + 0x50);
  if ( v602 )
  {
    v603 = *(v602 + 0x20);
    if ( !*(v599 + 0x20) )
    {
LABEL_839:
      if ( v603 )
      {
        v605 = data::get_name_id(*(v599 + 0x50), "aircrafts", 9ui64, v601);
        goto LABEL_841;
      }
      goto LABEL_842;
    }
  }
  else
  {
    v603 = 0;
    if ( !*(v599 + 0x20) )
      goto LABEL_839;
  }
  v604 = data::get_name_id(v599, "aircrafts", 9ui64, v601);
  if ( v604 < 0 )
    goto LABEL_839;
  v605 = v603 + v604;
LABEL_841:
  v600 = v605;
LABEL_842:
  v606 = *v1171;
  if ( *v1171 == 0xFFFFFFFF )
  {
    v613 = *(v308 + 7);
    v608 = 0i64;
    if ( *(v308 + 7) )
    {
      v614 = v600 + 1;
      v615 = v308[3];
      v616 = *v615;
      v617 = *(v615 + 8) - 8 * v613;
      v618 = 0;
      while ( (*(*(v616 + v617) + 8i64) & 0x3FFFFFFF) != v614 )
      {
        ++v618;
        v617 += 8i64;
        if ( v613 == v618 )
          goto LABEL_859;
      }
      if ( v618 >= v613 )
        v608 = 0i64;
      else
        v608 = *(v616 + v617);
    }
  }
  else
  {
    v607 = *(v308 + 7);
    v608 = 0i64;
    if ( v606 < (v606 + v607) )
    {
      v609 = v600 + 1;
      v610 = *(*v308 + 0x5C) + *v308 + 0x90;
      v611 = 0;
      while ( 1 )
      {
        v612 = 0x20i64 * (v606 + v611);
        if ( (*(v610 + v612 + 8) & 0x3FFFFFFF) == v609 )
          break;
        if ( v607 == ++v611 )
          goto LABEL_859;
      }
      v619 = (v612 + v610);
      v608 = 0i64;
      if ( v611 < v607 )
        v608 = v619;
    }
  }
LABEL_859:
  if ( !v608 )
    v608 = &qword_4B67850;
  LOWORD(v620) = *(v608 + 6);
  if ( v620 )
  {
    v621 = 0;
    do
    {
      if ( v621 < v620
        && (v622 = sub_1459970(v608, v621)) != 0i64
        && (v623 = v622, *v622)
        && (v624 = strlen(v622) + 1, (v625 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v624)) != 0i64) )
      {
        v626 = v625;
        memmove(v625, v623, v624);
      }
      else
      {
        v626 = 0i64;
      }
      v627 = *(a1 + 0x228);
      v628 = *(a1 + 0x22C);
      if ( v628 == v627 )
      {
        if ( *(a1 + 0x22C) )
        {
          if ( v628 > 0x1FF )
            v630 = ((v628 + 1) >> 1) + v628;
          else
            v630 = 2 * v628;
        }
        else
        {
          v630 = 2i64;
        }
        sub_2C8140(a1 + 0x218, v630);
        v627 = *(a1 + 0x228);
      }
      v629 = *(a1 + 0x218);
      *(a1 + 0x228) = v627 + 1;
      *(v629 + 8i64 * v627) = v626;
      ++v621;
      v620 = *(v608 + 6);
    }
    while ( v621 < v620 );
  }
  v631 = *(a1 + 0x230);
  v632 = *(a1 + 0x238);
  *(a1 + 0x230) = 0i64;
  v633 = *(a1 + 0x240);
  *(a1 + 0x240) = 0i64;
  if ( v631 )
  {
    if ( v633 )
    {
      v634 = 8 * v633;
      v635 = 0i64;
      do
      {
        if ( *(v631 + v635) )
          (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
        v635 += 8i64;
      }
      while ( v634 != v635 );
    }
    (*(*v632 + 0x40i64))(v632, v631);
  }
  v636 = *v308;
  v637 = 0xFFFFFFFF;
  if ( !*v308 )
    goto LABEL_895;
  v638 = data::get_name_id("pilotName", 9ui64);
  v639 = *(v636 + 0x50);
  if ( v639 )
  {
    v640 = *(v639 + 0x20);
    if ( !*(v636 + 0x20) )
    {
LABEL_892:
      if ( v640 )
      {
        v642 = data::get_name_id(*(v636 + 0x50), "pilotName", 9ui64, v638);
        goto LABEL_894;
      }
      goto LABEL_895;
    }
  }
  else
  {
    v640 = 0;
    if ( !*(v636 + 0x20) )
      goto LABEL_892;
  }
  v641 = data::get_name_id(v636, "pilotName", 9ui64, v638);
  if ( v641 < 0 )
    goto LABEL_892;
  v642 = v640 + v641;
LABEL_894:
  v637 = v642;
LABEL_895:
  v643 = *(v308 + 6);
  if ( v643 )
  {
    v1170 = (a1 + 0x230);
    for ( j = 0i64; j < v645; ++j )
    {
      v645 = v643;
      if ( j >= v643 )
      {
        if ( v637 == 0xFFFFFFFF )
          goto LABEL_908;
      }
      else
      {
        v646 = *(v1169 + 5);
        if ( v646 == 0xFFFFFFFFi64 )
          v647 = *v1169[3];
        else
          v647 = *v1169 + v646 + 0x90;
        if ( (*(v647 + 8 * j) & 0xFFFFFF) == v637 )
        {
          v648 = sub_1459970(v1169, j);
          if ( v648
            && (v649 = v648, *v648)
            && (v650 = strlen(v648) + 1, (v651 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v650)) != 0i64) )
          {
            v652 = v651;
            memmove(v651, v649, v650);
          }
          else
          {
LABEL_908:
            v652 = 0i64;
          }
          v653 = *(a1 + 0x240);
          v654 = *(a1 + 0x244);
          if ( v654 == v653 )
          {
            if ( *(a1 + 0x244) )
            {
              if ( v654 > 0x1FF )
                v656 = ((v654 + 1) >> 1) + v654;
              else
                v656 = 2 * v654;
            }
            else
            {
              v656 = 2i64;
            }
            sub_2C8140(v1170, v656);
            v653 = *(a1 + 0x240);
          }
          v655 = *(a1 + 0x230);
          *(a1 + 0x240) = v653 + 1;
          *(v655 + 8i64 * v653) = v652;
          v643 = *(v1169 + 6);
          v645 = v643;
        }
      }
    }
  }
  v657 = v1169;
  v658 = *v1169;
  v659 = 0xFFFFFFFF;
  if ( !*v1169 )
    goto LABEL_928;
  v660 = data::get_name_id("weatherPresetBlk", 0x10ui64);
  v661 = *(v658 + 0x50);
  if ( v661 )
  {
    v662 = *(v661 + 0x20);
    if ( !*(v658 + 0x20) )
    {
LABEL_925:
      if ( v662 )
      {
        v664 = data::get_name_id(*(v658 + 0x50), "weatherPresetBlk", 0x10ui64, v660);
        goto LABEL_927;
      }
      goto LABEL_928;
    }
  }
  else
  {
    v662 = 0;
    if ( !*(v658 + 0x20) )
      goto LABEL_925;
  }
  v663 = data::get_name_id(v658, "weatherPresetBlk", 0x10ui64, v660);
  if ( v663 < 0 )
    goto LABEL_925;
  v664 = v662 + v663;
LABEL_927:
  v659 = v664;
LABEL_928:
  v665 = *v1171;
  if ( *v1171 != 0xFFFFFFFF )
  {
    v666 = *(v657 + 7);
    if ( v665 >= (v665 + v666) )
      goto LABEL_999;
    v667 = v659 + 1;
    v668 = *v1169;
    v669 = 0;
    while ( (*(*v1169 + *(*v1169 + 0x5C) + 0x90 + 0x20i64 * (v665 + v669) + 8) & 0x3FFFFFFF) != v667 )
    {
      if ( v666 == ++v669 )
        goto LABEL_999;
    }
    if ( v669 >= v666 )
      goto LABEL_999;
LABEL_944:
    v676 = data::get_name_id("weatherTypeBlk", 0xEui64);
    v677 = *(v668 + 0x50);
    if ( v677 )
      v678 = *(v677 + 0x20);
    else
      v678 = 0;
    v679 = v1169;
    if ( *(v668 + 0x20) && (v680 = data::get_name_id(v668, "weatherTypeBlk", 0xEui64, v676), v680 >= 0) )
    {
      v681 = v678 + v680;
    }
    else if ( v678 )
    {
      v681 = data::get_name_id(*(v668 + 0x50), "weatherTypeBlk", 0xEui64, v676);
    }
    else
    {
      v681 = 0xFFFFFFFF;
    }
    goto LABEL_954;
  }
  v670 = *(v657 + 7);
  if ( !*(v657 + 7) )
    goto LABEL_999;
  v671 = v659 + 1;
  v672 = v1169[3];
  v673 = *v672;
  v674 = *(v672 + 8) - 8 * v670;
  v675 = 0;
  while ( (*(*(v673 + v674) + 8i64) & 0x3FFFFFFF) != v671 )
  {
    ++v675;
    v674 += 8i64;
    if ( v670 == v675 )
      goto LABEL_999;
  }
  if ( v675 < v670 && *(v673 + v674) )
  {
    v668 = *v1169;
    if ( *v1169 )
      goto LABEL_944;
    v681 = 0xFFFFFFFF;
    v679 = v1169;
LABEL_954:
    v682 = *v1171;
    if ( *v1171 != 0xFFFFFFFF )
    {
      v683 = *(v679 + 7);
      if ( v682 >= (v682 + v683) )
        goto LABEL_999;
      v684 = v681 + 1;
      v685 = *v1169;
      v686 = 0;
      while ( (*(*v1169 + *(*v1169 + 0x5C) + 0x90 + 0x20i64 * (v682 + v686) + 8) & 0x3FFFFFFF) != v684 )
      {
        if ( v683 == ++v686 )
          goto LABEL_999;
      }
      if ( v686 >= v683 )
        goto LABEL_999;
      goto LABEL_970;
    }
    v687 = *(v679 + 7);
    if ( !*(v679 + 7) )
      goto LABEL_999;
    v688 = v681 + 1;
    v689 = v1169[3];
    v690 = *v689;
    v691 = *(v689 + 8) - 8 * v687;
    v692 = 0;
    while ( (*(*(v690 + v691) + 8i64) & 0x3FFFFFFF) != v688 )
    {
      ++v692;
      v691 += 8i64;
      if ( v687 == v692 )
        goto LABEL_999;
    }
    if ( v692 >= v687 || !*(v690 + v691) )
      goto LABEL_999;
    v685 = *v1169;
    if ( *v1169 )
    {
LABEL_970:
      v693 = data::get_name_id("environmentGlobalBlk", 0x14ui64);
      v694 = *(v685 + 0x50);
      if ( v694 )
        v695 = *(v694 + 0x20);
      else
        v695 = 0;
      v696 = v1169;
      if ( *(v685 + 0x20) && (v697 = data::get_name_id(v685, "environmentGlobalBlk", 0x14ui64, v693), v697 >= 0) )
      {
        v698 = v695 + v697;
      }
      else if ( v695 )
      {
        v698 = data::get_name_id(*(v685 + 0x50), "environmentGlobalBlk", 0x14ui64, v693);
      }
      else
      {
        v698 = 0xFFFFFFFF;
      }
    }
    else
    {
      v698 = 0xFFFFFFFF;
      v696 = v1169;
    }
    v699 = *v1171;
    if ( *v1171 != 0xFFFFFFFF )
    {
      v700 = *(v696 + 7);
      if ( v699 >= (v699 + v700) )
        goto LABEL_999;
      v701 = v698 + 1;
      v702 = *v1169;
      v703 = 0;
      while ( (*(*v1169 + *(*v1169 + 0x5C) + 0x90 + 0x20i64 * (v699 + v703) + 8) & 0x3FFFFFFF) != v701 )
      {
        if ( v700 == ++v703 )
          goto LABEL_999;
      }
      if ( v703 >= v700 )
        goto LABEL_999;
      v710 = a1 + 0x610;
      goto LABEL_997;
    }
    v704 = *(v696 + 7);
    if ( !*(v696 + 7) )
      goto LABEL_999;
    v705 = v698 + 1;
    v706 = v1169[3];
    v707 = *v706;
    v708 = *(v706 + 8) - 8 * v704;
    v709 = 0;
    while ( (*(*(v707 + v708) + 8i64) & 0x3FFFFFFF) != v705 )
    {
      ++v709;
      v708 += 8i64;
      if ( v704 == v709 )
        goto LABEL_999;
    }
    if ( v709 >= v704 || !*(v707 + v708) )
      goto LABEL_999;
    v702 = *v1169;
    v710 = a1 + 0x610;
    if ( *v1169 )
    {
LABEL_997:
      v711 = data::get_name_id("weatherPreset", 0xDui64);
      v712 = *(v702 + 0x50);
      if ( v712 )
        v713 = *(v712 + 0x20);
      else
        v713 = 0;
      if ( *(v702 + 0x20) )
      {
        v1103 = data::get_name_id(v702, "weatherPreset", 0xDui64, v711);
        if ( v1103 >= 0 )
        {
          v1104 = v713 + v1103;
          goto LABEL_1538;
        }
      }
      if ( v713 )
      {
        v1104 = data::get_name_id(*(v702 + 0x50), "weatherPreset", 0xDui64, v711);
        goto LABEL_1538;
      }
    }
    v1104 = 0xFFFFFFFF;
LABEL_1538:
    v1105 = *v1171;
    v714 = v1169;
    if ( *v1171 == 0xFFFFFFFF )
    {
      v1112 = *(v1169 + 7);
      v1107 = 0i64;
      if ( *(v1169 + 7) )
      {
        v1113 = v1104 + 1;
        v1114 = v1169[3];
        v1115 = *v1114;
        v1116 = *(v1114 + 8) - 8 * v1112;
        v1117 = 0;
        while ( (*(*(v1115 + v1116) + 8i64) & 0x3FFFFFFF) != v1113 )
        {
          ++v1117;
          v1116 += 8i64;
          if ( v1112 == v1117 )
            goto LABEL_1558;
        }
        if ( v1117 >= v1112 )
          v1107 = 0i64;
        else
          v1107 = *(v1115 + v1116);
      }
    }
    else
    {
      v1106 = *(v1169 + 7);
      v1107 = 0i64;
      if ( v1105 < (v1105 + v1106) )
      {
        v1108 = v1104 + 1;
        v1109 = *v1169 + *(*v1169 + 0x5C) + 0x90;
        v1110 = 0;
        while ( 1 )
        {
          v1111 = 0x20i64 * (v1105 + v1110);
          if ( (*(v1109 + v1111 + 8) & 0x3FFFFFFF) == v1108 )
            break;
          if ( v1106 == ++v1110 )
            goto LABEL_1558;
        }
        v1118 = (v1111 + v1109);
        v1107 = 0i64;
        if ( v1110 < v1106 )
          v1107 = v1118;
      }
    }
LABEL_1558:
    if ( !v1107 )
      v1107 = &qword_4B67850;
    v1119 = 0;
    sub_1458A90(v710, v1107, 0i64);
    v1120 = *v714;
    v1121 = 0xFFFFFFFF;
    if ( *v714 )
    {
      v1122 = data::get_name_id("weatherType", 0xBui64);
      v1123 = *(v1120 + 0x50);
      if ( v1123 )
        v1119 = *(v1123 + 0x20);
      if ( *(v1120 + 0x20) )
      {
        v1124 = data::get_name_id(v1120, "weatherType", 0xBui64, v1122);
        if ( v1124 >= 0 )
        {
          v1125 = v1119 + v1124;
          goto LABEL_1568;
        }
      }
      if ( v1119 )
      {
        v1125 = data::get_name_id(*(v1120 + 0x50), "weatherType", 0xBui64, v1122);
LABEL_1568:
        v1121 = v1125;
      }
    }
    v1126 = *v1171;
    if ( *v1171 == 0xFFFFFFFF )
    {
      v1133 = *(v714 + 7);
      v1128 = 0i64;
      if ( *(v714 + 7) )
      {
        v1134 = v1121 + 1;
        v1135 = v714[3];
        v1136 = *v1135;
        v1137 = *(v1135 + 8) - 8 * v1133;
        v1138 = 0;
        while ( (*(*(v1136 + v1137) + 8i64) & 0x3FFFFFFF) != v1134 )
        {
          ++v1138;
          v1137 += 8i64;
          if ( v1133 == v1138 )
            goto LABEL_1586;
        }
        if ( v1138 >= v1133 )
          v1128 = 0i64;
        else
          v1128 = *(v1136 + v1137);
      }
    }
    else
    {
      v1127 = *(v714 + 7);
      v1128 = 0i64;
      if ( v1126 < (v1126 + v1127) )
      {
        v1129 = v1121 + 1;
        v1130 = *v714 + *(*v714 + 0x5C) + 0x90;
        v1131 = 0;
        while ( 1 )
        {
          v1132 = 0x20i64 * (v1126 + v1131);
          if ( (*(v1130 + v1132 + 8) & 0x3FFFFFFF) == v1129 )
            break;
          if ( v1127 == ++v1131 )
            goto LABEL_1586;
        }
        v1139 = (v1132 + v1130);
        v1128 = 0i64;
        if ( v1131 < v1127 )
          v1128 = v1139;
      }
    }
LABEL_1586:
    if ( !v1128 )
      v1128 = &qword_4B67850;
    v1140 = 0;
    sub_1458A90(a1 + 0x630, v1128, 0i64);
    v1141 = *v714;
    v1142 = 0xFFFFFFFF;
    if ( *v714 )
    {
      v1143 = data::get_name_id("environmentGlobal", 0x11ui64);
      v1144 = *(v1141 + 0x50);
      if ( v1144 )
        v1140 = *(v1144 + 0x20);
      if ( *(v1141 + 0x20) )
      {
        v1145 = data::get_name_id(v1141, "environmentGlobal", 0x11ui64, v1143);
        if ( v1145 >= 0 )
        {
          v1146 = v1140 + v1145;
          goto LABEL_1596;
        }
      }
      if ( v1140 )
      {
        v1146 = data::get_name_id(*(v1141 + 0x50), "environmentGlobal", 0x11ui64, v1143);
LABEL_1596:
        v1142 = v1146;
      }
    }
    v1147 = *v1171;
    if ( *v1171 == 0xFFFFFFFF )
    {
      v1154 = *(v714 + 7);
      v1149 = 0i64;
      if ( *(v714 + 7) )
      {
        v1155 = v1142 + 1;
        v1156 = v714[3];
        v1157 = *v1156;
        v1158 = *(v1156 + 8) - 8 * v1154;
        v1159 = 0;
        while ( (*(*(v1157 + v1158) + 8i64) & 0x3FFFFFFF) != v1155 )
        {
          ++v1159;
          v1158 += 8i64;
          if ( v1154 == v1159 )
            goto LABEL_1614;
        }
        if ( v1159 >= v1154 )
          v1149 = 0i64;
        else
          v1149 = *(v1157 + v1158);
      }
    }
    else
    {
      v1148 = *(v714 + 7);
      v1149 = 0i64;
      if ( v1147 < (v1147 + v1148) )
      {
        v1150 = v1142 + 1;
        v1151 = *v714 + *(*v714 + 0x5C) + 0x90;
        v1152 = 0;
        while ( 1 )
        {
          v1153 = 0x20i64 * (v1147 + v1152);
          if ( (*(v1151 + v1153 + 8) & 0x3FFFFFFF) == v1150 )
            break;
          if ( v1148 == ++v1152 )
            goto LABEL_1614;
        }
        v1160 = (v1153 + v1151);
        v1149 = 0i64;
        if ( v1152 < v1148 )
          v1149 = v1160;
      }
    }
LABEL_1614:
    if ( !v1149 )
      v1149 = &qword_4B67850;
    sub_1458A90(a1 + 0x5F0, v1149, 0i64);
  }
  else
  {
LABEL_999:
    v714 = v1169;
    if ( v1172 && g_net )
    {
      sub_14584E0(&v1162, off_4B678B0);
      v715 = *(a1 + 0x30);
      if ( !v715 )
        v715 = &szFile;
      sub_5B88E0(v715);
      v716 = *(a1 + 0x48);
      if ( !v716 )
        v716 = &szFile;
      sub_6557D0(&v1162, v716, a1 + 0x610, a1 + 0x630, a1 + 0x5F0);
      sub_1458FF0(&v1162);
    }
  }
  v717 = *v714;
  v718 = 0xFFFFFFFF;
  if ( !*v714 )
    goto LABEL_1016;
  v719 = data::get_name_id("customWeather", 0xDui64);
  v720 = *(v717 + 0x50);
  if ( v720 )
  {
    v721 = *(v720 + 0x20);
    if ( !*(v717 + 0x20) )
    {
LABEL_1013:
      if ( v721 )
      {
        v723 = data::get_name_id(*(v717 + 0x50), "customWeather", 0xDui64, v719);
        goto LABEL_1015;
      }
      goto LABEL_1016;
    }
  }
  else
  {
    v721 = 0;
    if ( !*(v717 + 0x20) )
      goto LABEL_1013;
  }
  v722 = data::get_name_id(v717, "customWeather", 0xDui64, v719);
  if ( v722 < 0 )
    goto LABEL_1013;
  v723 = v721 + v722;
LABEL_1015:
  v718 = v723;
LABEL_1016:
  v724 = *v1171;
  if ( *v1171 == 0xFFFFFFFF )
  {
    v731 = *(v714 + 7);
    v726 = 0i64;
    if ( *(v714 + 7) )
    {
      v732 = v718 + 1;
      v733 = v714[3];
      v734 = *v733;
      v735 = *(v733 + 8) - 8 * v731;
      v736 = 0;
      while ( (*(*(v734 + v735) + 8i64) & 0x3FFFFFFF) != v732 )
      {
        ++v736;
        v735 += 8i64;
        if ( v731 == v736 )
          goto LABEL_1033;
      }
      if ( v736 >= v731 )
        v726 = 0i64;
      else
        v726 = *(v734 + v735);
    }
  }
  else
  {
    v725 = *(v714 + 7);
    v726 = 0i64;
    if ( v724 < (v724 + v725) )
    {
      v727 = v718 + 1;
      v728 = *v714 + *(*v714 + 0x5C) + 0x90;
      v729 = 0;
      while ( 1 )
      {
        v730 = 0x20i64 * (v724 + v729);
        if ( (*(v728 + v730 + 8) & 0x3FFFFFFF) == v727 )
          break;
        if ( v725 == ++v729 )
          goto LABEL_1033;
      }
      v737 = (v730 + v728);
      v726 = 0i64;
      if ( v729 < v725 )
        v726 = v737;
    }
  }
LABEL_1033:
  if ( !v726 )
    v726 = &qword_4B67850;
  v738 = 0;
  sub_1458A90(a1 + 0x650, v726, 0i64);
  v739 = *v714;
  v740 = 0xFFFFFFFF;
  if ( *v714 )
  {
    v741 = data::get_name_id("limits", 6ui64);
    v742 = *(v739 + 0x50);
    if ( v742 )
      v738 = *(v742 + 0x20);
    if ( *(v739 + 0x20) )
    {
      v743 = data::get_name_id(v739, "limits", 6ui64, v741);
      if ( v743 >= 0 )
      {
        v744 = v738 + v743;
        goto LABEL_1043;
      }
    }
    if ( v738 )
    {
      v744 = data::get_name_id(*(v739 + 0x50), "limits", 6ui64, v741);
LABEL_1043:
      v740 = v744;
    }
  }
  v745 = *v1171;
  if ( *v1171 == 0xFFFFFFFF )
  {
    v752 = *(v714 + 7);
    v747 = 0i64;
    if ( *(v714 + 7) )
    {
      v753 = v740 + 1;
      v754 = v714[3];
      v755 = *v754;
      v756 = *(v754 + 8) - 8 * v752;
      v757 = 0;
      while ( (*(*(v755 + v756) + 8i64) & 0x3FFFFFFF) != v753 )
      {
        ++v757;
        v756 += 8i64;
        if ( v752 == v757 )
          goto LABEL_1061;
      }
      if ( v757 >= v752 )
        v747 = 0i64;
      else
        v747 = *(v755 + v756);
    }
  }
  else
  {
    v746 = *(v714 + 7);
    v747 = 0i64;
    if ( v745 < (v745 + v746) )
    {
      v748 = v740 + 1;
      v749 = *v714 + *(*v714 + 0x5C) + 0x90;
      v750 = 0;
      while ( 1 )
      {
        v751 = 0x20i64 * (v745 + v750);
        if ( (*(v749 + v751 + 8) & 0x3FFFFFFF) == v748 )
          break;
        if ( v746 == ++v750 )
          goto LABEL_1061;
      }
      v758 = (v751 + v749);
      v747 = 0i64;
      if ( v750 < v746 )
        v747 = v758;
    }
  }
LABEL_1061:
  if ( !v747 )
    v747 = &qword_4B67850;
  v759 = 0;
  sub_1458A90(a1 + 0x430, v747, 0i64);
  v760 = *v714;
  v761 = 0xFFFFFFFF;
  if ( *v714 )
  {
    v762 = data::get_name_id("spawnTypes", 0xAui64);
    v763 = *(v760 + 0x50);
    if ( v763 )
      v759 = *(v763 + 0x20);
    if ( *(v760 + 0x20) )
    {
      v764 = data::get_name_id(v760, "spawnTypes", 0xAui64, v762);
      if ( v764 >= 0 )
      {
        v765 = v759 + v764;
        goto LABEL_1071;
      }
    }
    if ( v759 )
    {
      v765 = data::get_name_id(*(v760 + 0x50), "spawnTypes", 0xAui64, v762);
LABEL_1071:
      v761 = v765;
    }
  }
  v766 = *v1171;
  if ( *v1171 == 0xFFFFFFFF )
  {
    v773 = *(v714 + 7);
    v768 = 0i64;
    if ( *(v714 + 7) )
    {
      v774 = v761 + 1;
      v775 = v714[3];
      v776 = *v775;
      v777 = *(v775 + 8) - 8 * v773;
      v778 = 0;
      while ( (*(*(v776 + v777) + 8i64) & 0x3FFFFFFF) != v774 )
      {
        ++v778;
        v777 += 8i64;
        if ( v773 == v778 )
          goto LABEL_1089;
      }
      if ( v778 >= v773 )
        v768 = 0i64;
      else
        v768 = *(v776 + v777);
    }
  }
  else
  {
    v767 = *(v714 + 7);
    v768 = 0i64;
    if ( v766 < (v766 + v767) )
    {
      v769 = v761 + 1;
      v770 = *v714 + *(*v714 + 0x5C) + 0x90;
      v771 = 0;
      while ( 1 )
      {
        v772 = 0x20i64 * (v766 + v771);
        if ( (*(v770 + v772 + 8) & 0x3FFFFFFF) == v769 )
          break;
        if ( v767 == ++v771 )
          goto LABEL_1089;
      }
      v779 = (v772 + v770);
      v768 = 0i64;
      if ( v771 < v767 )
        v768 = v779;
    }
  }
LABEL_1089:
  if ( !v768 )
    v768 = &qword_4B67850;
  v780 = 0;
  sub_1458A90(a1 + 0x450, v768, 0i64);
  v781 = *v714;
  v782 = 0xFFFFFFFF;
  if ( *v714 )
  {
    v783 = data::get_name_id("customSpawnScore", 0x10ui64);
    v784 = *(v781 + 0x50);
    if ( v784 )
      v780 = *(v784 + 0x20);
    if ( *(v781 + 0x20) )
    {
      v785 = data::get_name_id(v781, "customSpawnScore", 0x10ui64, v783);
      if ( v785 >= 0 )
      {
        v786 = v780 + v785;
        goto LABEL_1099;
      }
    }
    if ( v780 )
    {
      v786 = data::get_name_id(*(v781 + 0x50), "customSpawnScore", 0x10ui64, v783);
LABEL_1099:
      v782 = v786;
    }
  }
  v787 = *v1171;
  if ( *v1171 == 0xFFFFFFFF )
  {
    v794 = *(v714 + 7);
    v789 = 0i64;
    if ( *(v714 + 7) )
    {
      v795 = v782 + 1;
      v796 = v714[3];
      v797 = *v796;
      v798 = *(v796 + 8) - 8 * v794;
      v799 = 0;
      while ( (*(*(v797 + v798) + 8i64) & 0x3FFFFFFF) != v795 )
      {
        ++v799;
        v798 += 8i64;
        if ( v794 == v799 )
          goto LABEL_1117;
      }
      if ( v799 >= v794 )
        v789 = 0i64;
      else
        v789 = *(v797 + v798);
    }
  }
  else
  {
    v788 = *(v714 + 7);
    v789 = 0i64;
    if ( v787 < (v787 + v788) )
    {
      v790 = v782 + 1;
      v791 = *v714 + *(*v714 + 0x5C) + 0x90;
      v792 = 0;
      while ( 1 )
      {
        v793 = 0x20i64 * (v787 + v792);
        if ( (*(v791 + v793 + 8) & 0x3FFFFFFF) == v790 )
          break;
        if ( v788 == ++v792 )
          goto LABEL_1117;
      }
      v800 = (v793 + v791);
      v789 = 0i64;
      if ( v792 < v788 )
        v789 = v800;
    }
  }
LABEL_1117:
  if ( !v789 )
    v789 = &qword_4B67850;
  v801 = 0;
  sub_1458A90(a1 + 0x470, v789, 0i64);
  v802 = *v714;
  v803 = 0xFFFFFFFF;
  if ( *v714 )
  {
    v804 = data::get_name_id("roguelikeModeAircrafts", 0x16ui64);
    v805 = *(v802 + 0x50);
    if ( v805 )
      v801 = *(v805 + 0x20);
    if ( *(v802 + 0x20) )
    {
      v806 = data::get_name_id(v802, "roguelikeModeAircrafts", 0x16ui64, v804);
      if ( v806 >= 0 )
      {
        v807 = v801 + v806;
        goto LABEL_1127;
      }
    }
    if ( v801 )
    {
      v807 = data::get_name_id(*(v802 + 0x50), "roguelikeModeAircrafts", 0x16ui64, v804);
LABEL_1127:
      v803 = v807;
    }
  }
  v808 = *v1171;
  if ( *v1171 == 0xFFFFFFFF )
  {
    v815 = *(v714 + 7);
    v810 = 0i64;
    if ( *(v714 + 7) )
    {
      v816 = v803 + 1;
      v817 = v714[3];
      v818 = *v817;
      v819 = *(v817 + 8) - 8 * v815;
      v820 = 0;
      while ( (*(*(v818 + v819) + 8i64) & 0x3FFFFFFF) != v816 )
      {
        ++v820;
        v819 += 8i64;
        if ( v815 == v820 )
          goto LABEL_1145;
      }
      if ( v820 >= v815 )
        v810 = 0i64;
      else
        v810 = *(v818 + v819);
    }
  }
  else
  {
    v809 = *(v714 + 7);
    v810 = 0i64;
    if ( v808 < (v808 + v809) )
    {
      v811 = v803 + 1;
      v812 = *v714 + *(*v714 + 0x5C) + 0x90;
      v813 = 0;
      while ( 1 )
      {
        v814 = 0x20i64 * (v808 + v813);
        if ( (*(v812 + v814 + 8) & 0x3FFFFFFF) == v811 )
          break;
        if ( v809 == ++v813 )
          goto LABEL_1145;
      }
      v821 = (v814 + v812);
      v810 = 0i64;
      if ( v813 < v809 )
        v810 = v821;
    }
  }
LABEL_1145:
  if ( !v810 )
    v810 = &qword_4B67850;
  v822 = 0;
  sub_1458A90(a1 + 0x490, v810, 0i64);
  v823 = *v714;
  v824 = 0xFFFFFFFF;
  if ( *v714 )
  {
    v825 = data::get_name_id("roguelikeModeActions", 0x14ui64);
    v826 = *(v823 + 0x50);
    if ( v826 )
      v822 = *(v826 + 0x20);
    if ( *(v823 + 0x20) )
    {
      v827 = data::get_name_id(v823, "roguelikeModeActions", 0x14ui64, v825);
      if ( v827 >= 0 )
      {
        v828 = v822 + v827;
        goto LABEL_1155;
      }
    }
    if ( v822 )
    {
      v828 = data::get_name_id(*(v823 + 0x50), "roguelikeModeActions", 0x14ui64, v825);
LABEL_1155:
      v824 = v828;
    }
  }
  v829 = *v1171;
  if ( *v1171 == 0xFFFFFFFF )
  {
    v836 = *(v714 + 7);
    v831 = 0i64;
    if ( *(v714 + 7) )
    {
      v837 = v824 + 1;
      v838 = v714[3];
      v839 = *v838;
      v840 = *(v838 + 8) - 8 * v836;
      v841 = 0;
      while ( (*(*(v839 + v840) + 8i64) & 0x3FFFFFFF) != v837 )
      {
        ++v841;
        v840 += 8i64;
        if ( v836 == v841 )
          goto LABEL_1173;
      }
      if ( v841 >= v836 )
        v831 = 0i64;
      else
        v831 = *(v839 + v840);
    }
  }
  else
  {
    v830 = *(v714 + 7);
    v831 = 0i64;
    if ( v829 < (v829 + v830) )
    {
      v832 = v824 + 1;
      v833 = *v714 + *(*v714 + 0x5C) + 0x90;
      v834 = 0;
      while ( 1 )
      {
        v835 = 0x20i64 * (v829 + v834);
        if ( (*(v833 + v835 + 8) & 0x3FFFFFFF) == v832 )
          break;
        if ( v830 == ++v834 )
          goto LABEL_1173;
      }
      v842 = (v835 + v833);
      v831 = 0i64;
      if ( v834 < v830 )
        v831 = v842;
    }
  }
LABEL_1173:
  if ( !v831 )
    v831 = &qword_4B67850;
  v843 = 0;
  sub_1458A90(a1 + 0x4B0, v831, 0i64);
  v844 = *v714;
  v845 = 0xFFFFFFFF;
  if ( *v714 )
  {
    v846 = data::get_name_id("customRules", 0xBui64);
    v847 = *(v844 + 0x50);
    if ( v847 )
      v843 = *(v847 + 0x20);
    if ( *(v844 + 0x20) )
    {
      v848 = data::get_name_id(v844, "customRules", 0xBui64, v846);
      if ( v848 >= 0 )
      {
        v849 = v843 + v848;
        goto LABEL_1183;
      }
    }
    if ( v843 )
    {
      v849 = data::get_name_id(*(v844 + 0x50), "customRules", 0xBui64, v846);
LABEL_1183:
      v845 = v849;
    }
  }
  v850 = *v1171;
  if ( *v1171 == 0xFFFFFFFF )
  {
    v857 = *(v714 + 7);
    v852 = 0i64;
    if ( *(v714 + 7) )
    {
      v858 = v845 + 1;
      v859 = v714[3];
      v860 = *v859;
      v861 = *(v859 + 8) - 8 * v857;
      v862 = 0;
      while ( (*(*(v860 + v861) + 8i64) & 0x3FFFFFFF) != v858 )
      {
        ++v862;
        v861 += 8i64;
        if ( v857 == v862 )
          goto LABEL_1201;
      }
      if ( v862 >= v857 )
        v852 = 0i64;
      else
        v852 = *(v860 + v861);
    }
  }
  else
  {
    v851 = *(v714 + 7);
    v852 = 0i64;
    if ( v850 < (v850 + v851) )
    {
      v853 = v845 + 1;
      v854 = *(*v714 + 0x5C) + *v714 + 0x90;
      v855 = 0;
      while ( 1 )
      {
        v856 = 0x20i64 * (v850 + v855);
        if ( (*(v854 + v856 + 8) & 0x3FFFFFFF) == v853 )
          break;
        if ( v851 == ++v855 )
          goto LABEL_1201;
      }
      v863 = (v856 + v854);
      v852 = 0i64;
      if ( v855 < v851 )
        v852 = v863;
    }
  }
LABEL_1201:
  if ( !v852 )
    v852 = &qword_4B67850;
  v864 = 0;
  v1170 = (a1 + 0x530);
  sub_1458A90(a1 + 0x530, v852, 0i64);
  v865 = *v714;
  v866 = 0xFFFFFFFF;
  if ( *v714 )
  {
    v867 = data::get_name_id("unitsParamsList", 0xFui64);
    v868 = *(v865 + 0x50);
    if ( v868 )
      v864 = *(v868 + 0x20);
    if ( *(v865 + 0x20) )
    {
      v869 = data::get_name_id(v865, "unitsParamsList", 0xFui64, v867);
      if ( v869 >= 0 )
      {
        v870 = v864 + v869;
        goto LABEL_1211;
      }
    }
    if ( v864 )
    {
      v870 = data::get_name_id(*(v865 + 0x50), "unitsParamsList", 0xFui64, v867);
LABEL_1211:
      v866 = v870;
    }
  }
  v871 = *v1171;
  if ( *v1171 == 0xFFFFFFFF )
  {
    v878 = *(v714 + 7);
    v873 = 0i64;
    if ( *(v714 + 7) )
    {
      v879 = v866 + 1;
      v880 = v714[3];
      v881 = *v880;
      v882 = *(v880 + 8) - 8 * v878;
      v883 = 0;
      while ( (*(*(v881 + v882) + 8i64) & 0x3FFFFFFF) != v879 )
      {
        ++v883;
        v882 += 8i64;
        if ( v878 == v883 )
          goto LABEL_1229;
      }
      if ( v883 >= v878 )
        v873 = 0i64;
      else
        v873 = *(v881 + v882);
    }
  }
  else
  {
    v872 = *(v714 + 7);
    v873 = 0i64;
    if ( v871 < (v871 + v872) )
    {
      v874 = v866 + 1;
      v875 = *v714 + *(*v714 + 0x5C) + 0x90;
      v876 = 0;
      while ( 1 )
      {
        v877 = 0x20i64 * (v871 + v876);
        if ( (*(v875 + v877 + 8) & 0x3FFFFFFF) == v874 )
          break;
        if ( v872 == ++v876 )
          goto LABEL_1229;
      }
      v884 = (v877 + v875);
      v873 = 0i64;
      if ( v876 < v872 )
        v873 = v884;
    }
  }
LABEL_1229:
  if ( !v873 )
    v873 = &qword_4B67850;
  sub_1458A90(a1 + 0x550, v873, 0i64);
  if ( *(a1 + 0x190) )
  {
    sub_1458EA0(a1 + 0x4D0);
    sub_1458EA0(a1 + 0x4F0);
    sub_1458EA0(a1 + 0x5D0);
    sub_1458EA0(a1 + 0x570);
    v885 = v1169;
    goto LABEL_1346;
  }
  v886 = *v1169;
  v887 = 0xFFFFFFFF;
  if ( !*v1169 )
    goto LABEL_1243;
  v888 = data::get_name_id("overrideSlotbar", 0xFui64);
  v889 = *(v886 + 0x50);
  if ( v889 )
  {
    v890 = *(v889 + 0x20);
    if ( !*(v886 + 0x20) )
    {
LABEL_1240:
      if ( v890 )
      {
        v892 = data::get_name_id(*(v886 + 0x50), "overrideSlotbar", 0xFui64, v888);
        goto LABEL_1242;
      }
      goto LABEL_1243;
    }
  }
  else
  {
    v890 = 0;
    if ( !*(v886 + 0x20) )
      goto LABEL_1240;
  }
  v891 = data::get_name_id(v886, "overrideSlotbar", 0xFui64, v888);
  if ( v891 < 0 )
    goto LABEL_1240;
  v892 = v890 + v891;
LABEL_1242:
  v887 = v892;
LABEL_1243:
  v893 = *v1171;
  if ( *v1171 == 0xFFFFFFFF )
  {
    v900 = *(v1169 + 7);
    v895 = 0i64;
    if ( *(v1169 + 7) )
    {
      v901 = v887 + 1;
      v902 = v1169[3];
      v903 = *v902;
      v904 = *(v902 + 8) - 8 * v900;
      v905 = 0;
      while ( (*(*(v903 + v904) + 8i64) & 0x3FFFFFFF) != v901 )
      {
        ++v905;
        v904 += 8i64;
        if ( v900 == v905 )
          goto LABEL_1256;
      }
      if ( v905 >= v900 )
        v895 = 0i64;
      else
        v895 = *(v903 + v904);
    }
  }
  else
  {
    v894 = *(v1169 + 7);
    v895 = 0i64;
    if ( v893 < (v893 + v894) )
    {
      v896 = v887 + 1;
      v897 = *v1169 + *(*v1169 + 0x5C) + 0x90;
      v898 = 0;
      while ( 1 )
      {
        v899 = 0x20i64 * (v893 + v898);
        if ( (*(v897 + v899 + 8) & 0x3FFFFFFF) == v896 )
          break;
        if ( v894 == ++v898 )
          goto LABEL_1256;
      }
      v906 = (v899 + v897);
      v895 = 0i64;
      if ( v898 < v894 )
        v895 = v906;
    }
  }
LABEL_1256:
  if ( !v895 )
    v895 = &qword_4B67850;
  v907 = 0;
  sub_1458A90(a1 + 0x4D0, v895, 0i64);
  v885 = v1169;
  v908 = *v1169;
  v909 = 0xFFFFFFFF;
  if ( *v1169 )
  {
    v910 = data::get_name_id("editSlotbar", 0xBui64);
    v911 = *(v908 + 0x50);
    if ( v911 )
      v907 = *(v911 + 0x20);
    if ( *(v908 + 0x20) )
    {
      v912 = data::get_name_id(v908, "editSlotbar", 0xBui64, v910);
      if ( v912 >= 0 )
      {
        v913 = v907 + v912;
        goto LABEL_1266;
      }
    }
    if ( v907 )
    {
      v913 = data::get_name_id(*(v908 + 0x50), "editSlotbar", 0xBui64, v910);
LABEL_1266:
      v909 = v913;
    }
  }
  v914 = *v1171;
  if ( *v1171 == 0xFFFFFFFF )
  {
    v921 = *(v885 + 7);
    v916 = 0i64;
    if ( *(v885 + 7) )
    {
      v922 = v909 + 1;
      v923 = v885[3];
      v924 = *v923;
      v925 = *(v923 + 8) - 8 * v921;
      v926 = 0;
      while ( (*(*(v924 + v925) + 8i64) & 0x3FFFFFFF) != v922 )
      {
        ++v926;
        v925 += 8i64;
        if ( v921 == v926 )
          goto LABEL_1287;
      }
      if ( v926 >= v921 )
        v916 = 0i64;
      else
        v916 = *(v924 + v925);
    }
  }
  else
  {
    v915 = *(v885 + 7);
    v916 = 0i64;
    if ( v914 < (v914 + v915) )
    {
      v917 = v909 + 1;
      v918 = *v885 + *(*v885 + 0x5C) + 0x90;
      v919 = 0;
      while ( 1 )
      {
        v920 = 0x20i64 * (v914 + v919);
        if ( (*(v918 + v920 + 8) & 0x3FFFFFFF) == v917 )
          break;
        if ( v915 == ++v919 )
          goto LABEL_1287;
      }
      v927 = (v920 + v918);
      v916 = 0i64;
      if ( v919 < v915 )
        v916 = v927;
    }
  }
LABEL_1287:
  if ( !v916 )
    v916 = &qword_4B67850;
  v928 = 0;
  sub_1458A90(a1 + 0x4F0, v916, 0i64);
  v929 = *v885;
  v930 = 0xFFFFFFFF;
  if ( *v885 )
  {
    v931 = data::get_name_id("aiCasualtiesMapping", 0x13ui64);
    v932 = *(v929 + 0x50);
    if ( v932 )
      v928 = *(v932 + 0x20);
    if ( *(v929 + 0x20) )
    {
      v933 = data::get_name_id(v929, "aiCasualtiesMapping", 0x13ui64, v931);
      if ( v933 >= 0 )
      {
        v934 = v928 + v933;
        goto LABEL_1297;
      }
    }
    if ( v928 )
    {
      v934 = data::get_name_id(*(v929 + 0x50), "aiCasualtiesMapping", 0x13ui64, v931);
LABEL_1297:
      v930 = v934;
    }
  }
  v935 = *v1171;
  if ( *v1171 == 0xFFFFFFFF )
  {
    v942 = *(v885 + 7);
    v937 = 0i64;
    if ( *(v885 + 7) )
    {
      v943 = v930 + 1;
      v944 = v885[3];
      v945 = *v944;
      v946 = *(v944 + 8) - 8 * v942;
      v947 = 0;
      while ( (*(*(v945 + v946) + 8i64) & 0x3FFFFFFF) != v943 )
      {
        ++v947;
        v946 += 8i64;
        if ( v942 == v947 )
          goto LABEL_1315;
      }
      if ( v947 >= v942 )
        v937 = 0i64;
      else
        v937 = *(v945 + v946);
    }
  }
  else
  {
    v936 = *(v885 + 7);
    v937 = 0i64;
    if ( v935 < (v935 + v936) )
    {
      v938 = v930 + 1;
      v939 = *v885 + *(*v885 + 0x5C) + 0x90;
      v940 = 0;
      while ( 1 )
      {
        v941 = 0x20i64 * (v935 + v940);
        if ( (*(v939 + v941 + 8) & 0x3FFFFFFF) == v938 )
          break;
        if ( v936 == ++v940 )
          goto LABEL_1315;
      }
      v948 = (v941 + v939);
      v937 = 0i64;
      if ( v940 < v936 )
        v937 = v948;
    }
  }
LABEL_1315:
  if ( !v937 )
    v937 = &qword_4B67850;
  v949 = 0;
  sub_1458A90(a1 + 0x5D0, v937, 0i64);
  v950 = *v885;
  v951 = 0xFFFFFFFF;
  if ( *v885 )
  {
    v952 = data::get_name_id("unitGroups", 0xAui64);
    v953 = *(v950 + 0x50);
    if ( v953 )
      v949 = *(v953 + 0x20);
    if ( *(v950 + 0x20) )
    {
      v954 = data::get_name_id(v950, "unitGroups", 0xAui64, v952);
      if ( v954 >= 0 )
      {
        v955 = v949 + v954;
        goto LABEL_1325;
      }
    }
    if ( v949 )
    {
      v955 = data::get_name_id(*(v950 + 0x50), "unitGroups", 0xAui64, v952);
LABEL_1325:
      v951 = v955;
    }
  }
  v956 = *v1171;
  if ( *v1171 == 0xFFFFFFFF )
  {
    v963 = *(v885 + 7);
    v958 = 0i64;
    if ( *(v885 + 7) )
    {
      v964 = v951 + 1;
      v965 = v885[3];
      v966 = *v965;
      v967 = *(v965 + 8) - 8 * v963;
      v968 = 0;
      while ( (*(*(v966 + v967) + 8i64) & 0x3FFFFFFF) != v964 )
      {
        ++v968;
        v967 += 8i64;
        if ( v963 == v968 )
          goto LABEL_1343;
      }
      if ( v968 >= v963 )
        v958 = 0i64;
      else
        v958 = *(v966 + v967);
    }
  }
  else
  {
    v957 = *(v885 + 7);
    v958 = 0i64;
    if ( v956 < (v956 + v957) )
    {
      v959 = v951 + 1;
      v960 = *v885 + *(*v885 + 0x5C) + 0x90;
      v961 = 0;
      while ( 1 )
      {
        v962 = 0x20i64 * (v956 + v961);
        if ( (*(v960 + v962 + 8) & 0x3FFFFFFF) == v959 )
          break;
        if ( v957 == ++v961 )
          goto LABEL_1343;
      }
      v969 = v962 + v960;
      v958 = 0i64;
      if ( v961 < v957 )
        v958 = v969;
    }
  }
LABEL_1343:
  v970 = &qword_4B67850;
  if ( v958 )
    v970 = v958;
  sub_1458A90(a1 + 0x570, v970, 0i64);
LABEL_1346:
  v1162 = &szFile;
  v971 = data::get_str(v885, "overrideUnit", &v1162);
  v972 = *(a1 + 0xD8);
  if ( v972 != v971 )
  {
    v973 = v971;
    if ( v972 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v973 && *v973 && (v974 = strlen(v973) + 1, (v975 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v974)) != 0i64) )
    {
      v976 = v975;
      memmove(v975, v973, v974);
    }
    else
    {
      v976 = 0i64;
    }
    *(a1 + 0xD8) = v976;
  }
  LOBYTE(v1162) = 1;
  *(a1 + 0xF0) = data::get_bool(v885, "isCustomVisualFilterAllowed", &v1162);
  v1162 = &szFile;
  v977 = data::get_str(v885, "allowedTagsPreset", &v1162);
  v978 = *(a1 + 0x128);
  if ( v978 != v977 )
  {
    v979 = v977;
    if ( v978 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v979 && *v979 && (v980 = strlen(v979) + 1, (v981 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v980)) != 0i64) )
    {
      v982 = v981;
      memmove(v981, v979, v980);
    }
    else
    {
      v982 = 0i64;
    }
    *(a1 + 0x128) = v982;
  }
  v1162 = &szFile;
  v983 = data::get_str(v885, "missionProgressType", &v1162);
  v984 = *(a1 + 0xE0);
  if ( v984 != v983 )
  {
    v985 = v983;
    if ( v984 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v985 && *v985 && (v986 = strlen(v985) + 1, (v987 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v986)) != 0i64) )
    {
      v988 = v987;
      memmove(v987, v985, v986);
    }
    else
    {
      v988 = 0i64;
    }
    *(a1 + 0xE0) = v988;
  }
  LOBYTE(v1162) = 0;
  *(a1 + 0x3A8) = data::get_bool(v885, "disableProjectileDamage", &v1162);
  v989 = *v885;
  v990 = 0xFFFFFFFF;
  if ( !*v885 )
    goto LABEL_1383;
  v991 = data::get_name_id("forbidVisualTags", 0x10ui64);
  v992 = *(v989 + 0x50);
  if ( v992 )
  {
    v993 = *(v992 + 0x20);
    if ( !*(v989 + 0x20) )
    {
LABEL_1380:
      if ( v993 )
      {
        v995 = data::get_name_id(*(v989 + 0x50), "forbidVisualTags", 0x10ui64, v991);
        goto LABEL_1382;
      }
      goto LABEL_1383;
    }
  }
  else
  {
    v993 = 0;
    if ( !*(v989 + 0x20) )
      goto LABEL_1380;
  }
  v994 = data::get_name_id(v989, "forbidVisualTags", 0x10ui64, v991);
  if ( v994 < 0 )
    goto LABEL_1380;
  v995 = v993 + v994;
LABEL_1382:
  v990 = v995;
LABEL_1383:
  v996 = *v1171;
  if ( *v1171 == 0xFFFFFFFF )
  {
    v1002 = *(v885 + 7);
    if ( !*(v885 + 7) )
      goto LABEL_1431;
    v1003 = v990 + 1;
    v1004 = v1169[3];
    v1005 = *v1004;
    v1006 = *(v1004 + 8) - 8 * v1002;
    v1007 = 0;
    while ( (*(*(v1005 + v1006) + 8i64) & 0x3FFFFFFF) != v1003 )
    {
      ++v1007;
      v1006 += 8i64;
      if ( v1002 == v1007 )
        goto LABEL_1431;
    }
    if ( v1007 >= v1002 )
      goto LABEL_1431;
    v1008 = *(v1005 + v1006);
    if ( !v1008 )
      goto LABEL_1431;
LABEL_1398:
    v1009 = *(v1008 + 0xC);
    if ( !v1009 )
      goto LABEL_1431;
    v1010 = 0i64;
    while ( 1 )
    {
      v1015 = v1009;
      if ( v1010 < v1009 )
      {
        v1016 = *(v1008 + 0x14);
        if ( v1016 == 0xFFFFFFFFi64 )
        {
          v1020 = **(v1008 + 0x18);
          if ( *(v1020 + 8 * v1010 + 3) << 0x18 == 0x9000000 && (*(v1020 + 8 * v1010 + 4) & 1) != 0 )
          {
            v1018 = *v1008;
            v1019 = **(v1008 + 0x18);
            if ( *v1008 )
            {
LABEL_1413:
              v1021 = *(v1019 + 8 * v1010) & 0xFFFFFF;
              v1022 = *(v1018 + 0x50);
              if ( v1022 )
              {
                v1023 = *(v1022 + 0x20);
                if ( v1023 > v1021 )
                {
                  v1024 = *(*(v1022 + 0x18) + 4 * v1021);
                  v1025 = *(v1022 + 0x4A);
                  v1026 = v1024 >> v1025;
                  goto LABEL_1419;
                }
              }
              else
              {
                v1023 = 0;
              }
              v1027 = v1021 - v1023;
              if ( *(v1018 + 0x20) > v1027 )
              {
                v1024 = *(*(v1018 + 0x18) + 4i64 * v1027);
                v1025 = *(v1018 + 0x4A);
                v1026 = v1024 >> v1025;
                v1022 = v1018;
LABEL_1419:
                v1028 = (*(v1022 + 0x38) + 0x10i64 * v1026);
                if ( v1026 == *(v1022 + 0x40) )
                  v1028 = (v1022 + 0x28);
                v1029 = *v1028;
                if ( v1029 )
                {
                  v1030 = ((~(0xFFFFFFFF << v1025) & v1024) + v1029);
                  if ( *v1030 )
                  {
                    v1031 = strlen(v1030) + 1;
                    v1032 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v1031);
                    if ( v1032 )
                    {
                      v1011 = v1032;
                      memmove(v1032, v1030, v1031);
                      goto LABEL_1401;
                    }
                  }
                }
              }
            }
LABEL_1400:
            v1011 = 0i64;
LABEL_1401:
            v1012 = *(a1 + 0x108);
            v1013 = *(a1 + 0x10C);
            if ( v1013 == v1012 )
            {
              if ( *(a1 + 0x10C) )
              {
                if ( v1013 > 0x1FF )
                  v1033 = ((v1013 + 1) >> 1) + v1013;
                else
                  v1033 = 2 * v1013;
              }
              else
              {
                v1033 = 2i64;
              }
              sub_2C8140(a1 + 0xF8, v1033);
              v1012 = *(a1 + 0x108);
            }
            v1014 = *(a1 + 0xF8);
            *(a1 + 0x108) = v1012 + 1;
            *(v1014 + 8i64 * v1012) = v1011;
            v1009 = *(v1008 + 0xC);
            v1015 = v1009;
          }
        }
        else
        {
          v1017 = v1016 + *v1008;
          if ( *(v1017 + 8 * v1010 + 0x93) << 0x18 == 0x9000000 && (*(v1017 + 8 * v1010 + 0x94) & 1) != 0 )
          {
            v1018 = *v1008;
            v1019 = *v1008 + v1016 + 0x90;
            if ( *v1008 )
              goto LABEL_1413;
            goto LABEL_1400;
          }
        }
      }
      if ( ++v1010 >= v1015 )
        goto LABEL_1431;
    }
  }
  v997 = *(v885 + 7);
  if ( v996 < (v996 + v997) )
  {
    v998 = v990 + 1;
    v999 = *v1169 + *(*v1169 + 0x5C) + 0x90;
    v1000 = 0;
    while ( 1 )
    {
      v1001 = 0x20i64 * (v996 + v1000);
      if ( (*(v999 + v1001 + 8) & 0x3FFFFFFF) == v998 )
        break;
      if ( v997 == ++v1000 )
        goto LABEL_1431;
    }
    if ( v1000 < v997 )
    {
      v1008 = v1001 + v999;
      goto LABEL_1398;
    }
  }
LABEL_1431:
  v1034 = v1169;
  v1035 = *v1169;
  v1036 = 0xFFFFFFFF;
  if ( !*v1169 )
    goto LABEL_1441;
  v1037 = data::get_name_id("allowedVisualTags", 0x11ui64);
  v1038 = *(v1035 + 0x50);
  if ( v1038 )
  {
    v1039 = *(v1038 + 0x20);
    if ( !*(v1035 + 0x20) )
    {
LABEL_1438:
      if ( v1039 )
      {
        v1041 = data::get_name_id(*(v1035 + 0x50), "allowedVisualTags", 0x11ui64, v1037);
        goto LABEL_1440;
      }
      goto LABEL_1441;
    }
  }
  else
  {
    v1039 = 0;
    if ( !*(v1035 + 0x20) )
      goto LABEL_1438;
  }
  v1040 = data::get_name_id(v1035, "allowedVisualTags", 0x11ui64, v1037);
  if ( v1040 < 0 )
    goto LABEL_1438;
  v1041 = v1039 + v1040;
LABEL_1440:
  v1036 = v1041;
LABEL_1441:
  v1042 = *v1171;
  if ( *v1171 == 0xFFFFFFFF )
  {
    v1048 = *(v1034 + 7);
    if ( !*(v1034 + 7) )
      goto LABEL_1489;
    v1049 = v1036 + 1;
    v1050 = v1034[3];
    v1051 = *v1050;
    v1052 = *(v1050 + 8) - 8 * v1048;
    v1053 = 0;
    while ( (*(*(v1051 + v1052) + 8i64) & 0x3FFFFFFF) != v1049 )
    {
      ++v1053;
      v1052 += 8i64;
      if ( v1048 == v1053 )
        goto LABEL_1489;
    }
    if ( v1053 >= v1048 )
      goto LABEL_1489;
    v1054 = *(v1051 + v1052);
    if ( !v1054 )
      goto LABEL_1489;
LABEL_1456:
    v1055 = *(v1054 + 0xC);
    if ( !v1055 )
      goto LABEL_1489;
    v1169 = (a1 + 0x110);
    v1056 = 0i64;
    while ( 1 )
    {
      v1061 = v1055;
      if ( v1056 < v1055 )
      {
        v1062 = *(v1054 + 0x14);
        if ( v1062 == 0xFFFFFFFFi64 )
        {
          v1066 = **(v1054 + 0x18);
          if ( *(v1066 + 8 * v1056 + 3) << 0x18 == 0x9000000 && (*(v1066 + 8 * v1056 + 4) & 1) != 0 )
          {
            v1064 = *v1054;
            v1065 = **(v1054 + 0x18);
            if ( *v1054 )
            {
LABEL_1471:
              v1067 = *(v1065 + 8 * v1056) & 0xFFFFFF;
              v1068 = *(v1064 + 0x50);
              if ( v1068 )
              {
                v1069 = *(v1068 + 0x20);
                if ( v1069 > v1067 )
                {
                  v1070 = *(*(v1068 + 0x18) + 4 * v1067);
                  v1071 = *(v1068 + 0x4A);
                  v1072 = v1070 >> v1071;
                  goto LABEL_1477;
                }
              }
              else
              {
                v1069 = 0;
              }
              v1073 = v1067 - v1069;
              if ( *(v1064 + 0x20) > v1073 )
              {
                v1070 = *(*(v1064 + 0x18) + 4i64 * v1073);
                v1071 = *(v1064 + 0x4A);
                v1072 = v1070 >> v1071;
                v1068 = v1064;
LABEL_1477:
                v1074 = (*(v1068 + 0x38) + 0x10i64 * v1072);
                if ( v1072 == *(v1068 + 0x40) )
                  v1074 = (v1068 + 0x28);
                if ( *v1074 )
                {
                  v1075 = ((~(0xFFFFFFFF << v1071) & v1070) + *v1074);
                  if ( *v1075 )
                  {
                    v1076 = strlen(v1075) + 1;
                    v1077 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v1076);
                    if ( v1077 )
                    {
                      v1057 = v1077;
                      memmove(v1077, v1075, v1076);
                      goto LABEL_1459;
                    }
                  }
                }
              }
            }
LABEL_1458:
            v1057 = 0i64;
LABEL_1459:
            v1058 = *(a1 + 0x120);
            v1059 = *(a1 + 0x124);
            if ( v1059 == v1058 )
            {
              if ( *(a1 + 0x124) )
              {
                if ( v1059 > 0x1FF )
                  v1078 = ((v1059 + 1) >> 1) + v1059;
                else
                  v1078 = 2 * v1059;
              }
              else
              {
                v1078 = 2i64;
              }
              sub_2C8140(v1169, v1078);
              v1058 = *(a1 + 0x120);
            }
            v1060 = *(a1 + 0x110);
            *(a1 + 0x120) = v1058 + 1;
            *(v1060 + 8i64 * v1058) = v1057;
            v1055 = *(v1054 + 0xC);
            v1061 = v1055;
          }
        }
        else
        {
          v1063 = v1062 + *v1054;
          if ( *(v1063 + 8 * v1056 + 0x93) << 0x18 == 0x9000000 && (*(v1063 + 8 * v1056 + 0x94) & 1) != 0 )
          {
            v1064 = *v1054;
            v1065 = *v1054 + v1062 + 0x90;
            if ( *v1054 )
              goto LABEL_1471;
            goto LABEL_1458;
          }
        }
      }
      if ( ++v1056 >= v1061 )
        goto LABEL_1489;
    }
  }
  v1043 = *(v1034 + 7);
  if ( v1042 < (v1042 + v1043) )
  {
    v1044 = v1036 + 1;
    v1045 = *v1034 + *(*v1034 + 0x5C) + 0x90;
    v1046 = 0;
    while ( 1 )
    {
      v1047 = 0x20i64 * (v1042 + v1046);
      if ( (*(v1045 + v1047 + 8) & 0x3FFFFFFF) == v1044 )
        break;
      if ( v1043 == ++v1046 )
        goto LABEL_1489;
    }
    if ( v1046 < v1043 )
    {
      v1054 = v1047 + v1045;
      goto LABEL_1456;
    }
  }
LABEL_1489:
  v1079 = 0i64;
  if ( *(a1 + 0x190) )
    v1079 = sub_72C570;
  qword_4B12198 = v1079;
  sub_1458EA0(a1 + 0x590);
  set_mission_blk(a1, a1 + 0x590);
  v1080 = a1 + 0x5B0;
  sub_1458EA0(v1080);
  if ( !*(game + 0xCE) )
  {
    v1162 = 0i64;
    v1082 = data::get_str(v1170, "customBotListFunction", &v1162);
    if ( v1082 )
    {
      v1083 = v1082;
      if ( *v1082 )
      {
        v1084 = DagorSQVM;
        v1185 = DagorSQVM;
        v1184 = &off_44A93B0;
        v1085 = *(DagorSQVM + 0x30);
        v1086 = *(DagorSQVM + 0x50);
        *(DagorSQVM + 0x50) = v1086 + 1;
        v1087 = 0x10 * v1086;
        v1088 = *(v1085 + v1087);
        v1089 = *(v1085 + v1087 + 8);
        *(v1085 + v1087) = *(v1084 + 0x68);
        if ( (*(v1085 + v1087 + 3) & 8) != 0 )
          ++*(*(v1087 + v1085 + 8) + 8i64);
        if ( (v1088 & 0x8000000) != 0 )
        {
          v1090 = v1089[1]-- == 1i64;
          if ( v1090 )
            (*(*v1089 + 8i64))(v1089);
        }
        v1186 = *(0x10i64 * *(v1185 + 0xA) + *(v1185 + 6) - 0x10);
        if ( (BYTE3(v1186) & 8) != 0 )
        {
          LOBYTE(v1161) = 1;
          v1091 = sub_28B5100(*(v1185 + 0x28) + 0x38, &v1186, &v1162, &v1177, v1161);
          ++*(v1091 + 0x10);
        }
        v1092 = *(v1084 + 0x30);
        v1093 = *(v1084 + 0x50) - 1i64;
        *(v1084 + 0x50) = v1093;
        v1093 *= 0x10i64;
        v1094 = *(v1092 + v1093 + 8);
        v1090 = (*(v1092 + v1093) & 0x8000000) == 0;
        *(v1092 + v1093) = 0i64;
        *(v1092 + v1093) = 0x1000001;
        if ( !v1090 )
        {
          v1090 = v1094[1]-- == 1i64;
          if ( v1090 )
            (*(*v1094 + 8i64))(v1094);
        }
        v1162 = v1185;
        (v1184[2])(&v1184, &v1163);
        if ( (BYTE3(v1163) & 8) != 0 )
        {
          LOBYTE(v1161) = 1;
          v1095 = sub_28B5100(*(v1162 + 0x28) + 0x38, &v1163, &v1177, v1188, v1161);
          ++*(v1095 + 0x10);
        }
        sub_4DA200(&v1184, &v1177, v1083);
        v1165 = v1179;
        if ( (BYTE3(v1179) & 8) != 0 )
        {
          LOBYTE(v1161) = 1;
          v1096 = sub_28B5100(*(v1162 + 0x28) + 0x38, &v1165, v1188, &v1189, v1161);
          ++*(v1096 + 0x10);
        }
        (*(v1177 + 0x10))(&v1177, v1188);
        v1177 = &off_44A93B0;
        if ( (BYTE3(v1179) & 8) != 0 )
          sub_28B55C0((v1178[0x28] + 0x38i64), &v1179);
        v1184 = &off_44A93B0;
        if ( (BYTE3(v1186) & 8) != 0 )
          sub_28B55C0((*(v1185 + 0x28) + 0x38i64), &v1186);
        if ( v1165 != 0x1000001 )
        {
          v1177 = v1080;
          sub_C85F90(&v1162, &v1177);
        }
        if ( v1162 )
        {
          if ( (BYTE3(v1163) & 8) != 0 )
            sub_28B55C0((*(v1162 + 0x28) + 0x38i64), &v1163);
          if ( (BYTE3(v1165) & 8) != 0 )
            sub_28B55C0((*(v1162 + 0x28) + 0x38i64), &v1165);
          v1164 = 0i64;
          LODWORD(v1163) = 0x1000001;
          BYTE4(v1163) = 0;
          *(&v1165 + 1) = 0i64;
        }
      }
    }
  }
  result = sub_1458FF0(v1190);
  if ( v1181 )
    return (*(*v1182 + 0x40i64))(v1182);
  return result;
}
