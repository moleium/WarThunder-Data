__int64 __fastcall unitinfo_builder(__int64 _UnitInfo_, char *a2, __int64 a3)
{
  UnitInfo_4 = _UnitInfo_;
  sub_34ED10(_UnitInfo_, a2, a3);
  LOBYTE(v363) = 0;
  *(UnitInfo_4 + 0x308) = data::get_bool(a3, "isFau", &v363);
  LOBYTE(v363) = 1;
  *(UnitInfo_4 + 0x309) = data::get_bool(a3, "orbitAvaible", &v363);
  LOBYTE(v363) = 0;
  *(UnitInfo_4 + 0x310) = data::get_bool(a3, "gunnersCanTargetGroundUnits", &v363);
  LOBYTE(v363) = 1;
  *(UnitInfo_4 + 0x311) = data::get_bool(a3, "aiGunnersEnabled", &v363);
  v363 = "fighter";
  v6 = data::get_str(a3, "fightAiBehaviour", &v363);
  if ( v6 )
  {
    v7 = v6;
    if ( !strcmp("fighter", v6) )
    {
      v8 = 0;
    }
    else if ( !strcmp("bomber", v7) )
    {
      v8 = 1;
    }
    else if ( !strcmp("assault", v7) )
    {
      v8 = 2;
    }
    else if ( !strcmp("transport", v7) )
    {
      v8 = 3;
    }
    else
    {
      v8 = (strcmp("diveBomber", v7) == 0) ^ 5;
    }
  }
  else
  {
    v8 = 5;
  }
  *(UnitInfo_4 + 0x30C) = v8;
  LOBYTE(v363) = 1;
  *(UnitInfo_4 + 0x312) = data::get_bool(a3, "isCapableToAttackTurn", &v363);
  LOBYTE(v363) = 0;
  *(UnitInfo_4 + 0x4D4) = data::get_bool(a3, "changeToExplodedOnExplode", &v363);
  v374 = a2;
  v9 = sub_34EA90(a2, a3);
  LOBYTE(v363) = 0;
  *(UnitInfo_4 + 0x374) = data::get_bool(v9, "mirror", &v363);
  v10 = *v9;
  LODWORD(v367) = 0xFFFFFFFF;
  UnitInfo_ = UnitInfo_4;
  if ( !v10 )
    goto LABEL_21;
  v11 = data::get_name_id("mirrorNode", 0xAui64);
  v12 = *(v10 + 0x50);
  if ( !v12 )
  {
    v13 = 0;
    if ( !*(v10 + 0x20) )
      goto LABEL_19;
LABEL_17:
    v14 = data::get_name_id(v10, "mirrorNode", 0xAui64, v11);
    if ( v14 >= 0 )
    {
      LODWORD(v367) = v13 + v14;
      UnitInfo_4 = UnitInfo_;
      goto LABEL_21;
    }
    goto LABEL_19;
  }
  v13 = *(v12 + 0x20);
  if ( *(v10 + 0x20) )
    goto LABEL_17;
LABEL_19:
  v15 = v13 == 0;
  UnitInfo_4 = UnitInfo_;
  if ( !v15 )
    LODWORD(v367) = data::get_name_id(*(v10 + 0x50), "mirrorNode", 0xAui64, v11);
LABEL_21:
  v16 = *(UnitInfo_4 + 0x378);
  v17 = v367;
  if ( v16 != "mirror" )
  {
    if ( v16 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    v18 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, 7i64);
    if ( v18 )
      strcpy(v18, "mirror");
    *(UnitInfo_4 + 0x378) = v18;
  }
  LOWORD(v19) = *(v9 + 0xC);
  if ( v19 )
  {
    v20 = 0i64;
    v21 = 0;
    do
    {
      if ( v20 < v19 )
      {
        v22 = *(v9 + 0x14);
        if ( v22 == 0xFFFFFFFFi64 )
        {
          if ( *(**(v9 + 0x18) + 8 * v20 + 3) << 0x18 == 0x1000000 )
          {
            v23 = **(v9 + 0x18);
            goto LABEL_35;
          }
        }
        else if ( *(v22 + *v9 + 8 * v20 + 0x93) << 0x18 == 0x1000000 )
        {
          v23 = *v9 + v22 + 0x90;
LABEL_35:
          if ( (*(v23 + 8 * v20) & 0xFFFFFF) == v17 )
          {
            v24 = sub_1459970(v9, v20);
            v25 = v21++;
            v26 = *(UnitInfo_4 + 8 * v25 + 0x378);
            if ( v26 != v24 )
            {
              v27 = v24;
              if ( v26 )
                (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
              if ( v27 && *v27 )
              {
                v28 = strlen(v27) + 1;
                v29 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v28);
                if ( v29 )
                {
                  v30 = v29;
                  memmove(v29, v27, v28);
                }
                else
                {
                  v30 = 0i64;
                }
                v17 = v367;
              }
              else
              {
                v30 = 0i64;
              }
              *(UnitInfo_ + 8 * v25 + 0x378) = v30;
              UnitInfo_4 = UnitInfo_;
            }
          }
        }
      }
      ++v20;
      v19 = *(v9 + 0xC);
    }
    while ( v20 < v19 && v21 < 3 );
  }
  LOBYTE(v363) = 0;
  *(UnitInfo_4 + 0x390) = data::get_bool(v9, "telescope", &v363);
  LODWORD(v363) = 0x3F800000;
  *(UnitInfo_4 + 0x394) = data::set_real(v9, "teleFov", &v363);
  v371 = 0x3F8000003F800000i64;
  sub_145C170(v9, &v363, "teleSize", &v371);
  *(UnitInfo_4 + 0x398) = v363;
  v371 = 0xBF800000i64;
  LODWORD(v372) = 0;
  sub_145C630(v9, &v363, "mirrorNorm", &v371);
  *(UnitInfo_4 + 0x3A8) = v364;
  *(UnitInfo_4 + 0x3A0) = v363;
  LODWORD(v363) = 0x3CF5C28F;
  *(UnitInfo_4 + 0x3AC) = data::set_real(v9, "teleScreenCapture", &v363);
  v363 = 0i64;
  v31 = data::get_str(v9, "teleReticleTex", &v363);
  v32 = *(UnitInfo_4 + 0x3B0);
  if ( v32 != v31 )
  {
    v33 = v31;
    if ( v32 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v33 && *v33 )
    {
      v34 = strlen(v33) + 1;
      v35 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v34);
      if ( v35 )
      {
        v36 = v35;
        memmove(v35, v33, v34);
      }
      else
      {
        v36 = 0i64;
      }
      UnitInfo_4 = UnitInfo_;
    }
    else
    {
      v36 = 0i64;
    }
    *(UnitInfo_4 + 0x3B0) = v36;
  }
  LODWORD(v363) = 0x3F800000;
  *(UnitInfo_4 + 0x3BC) = data::set_real(v9, "teleReticleTexScale", &v363);
  LODWORD(v363) = 0x3F800000;
  *(UnitInfo_4 + 0x3C0) = data::set_real(v9, "teleBorderTexScale", &v363);
  LODWORD(v363) = 0x42B40000;
  v37 = data::set_real(v9, "teleSightFov", &v363);
  v38 = tanf(v37 * *&dword_44A9F8C);
  v39 = Y;
  *(UnitInfo_4 + 0x3B8) = Y / v38;
  LODWORD(v363) = 0x3F800000;
  *(UnitInfo_4 + 0x3C4) = v39 / fmaxf(data::set_real(v9, "reticleTexScale", &v363), *&dword_4487E14);
  LODWORD(v363) = 0;
  *(UnitInfo_4 + 0x3D0) = data::set_real(v9, "noEffectsDist", &v363);
  v363 = 0i64;
  v40 = data::get_str(v9, "textToShowInCockpit", &v363);
  if ( v40 )
  {
    v41 = v40;
    if ( *v40 )
    {
      v42 = sub_181B2F0(v40, 0i64);
      if ( v42 )
      {
        if ( localization_table )
          v43 = (v42 & 3) != 0 ? (v42 & 0xFFFFFFFFFFFFFFFCui64) : *v42;
        else
          v43 = &szFile;
      }
      else
      {
        v43 = sub_181B8C0(v41);
      }
      v44 = *(UnitInfo_4 + 0x3C8);
      if ( v44 != v43 )
      {
        if ( v44 )
          (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
        if ( v43 && *v43 )
        {
          v45 = strlen(v43) + 1;
          v46 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v45);
          if ( v46 )
          {
            v47 = v46;
            memmove(v46, v43, v45);
          }
          else
          {
            v47 = 0i64;
          }
          UnitInfo_4 = UnitInfo_;
        }
        else
        {
          v47 = 0i64;
        }
        *(UnitInfo_4 + 0x3C8) = v47;
      }
    }
  }
  LOBYTE(v363) = 0;
  *(UnitInfo_4 + 0x501) = data::get_bool(a3, "isNuclearBomber", &v363);
  LODWORD(v363) = 0;
  *(UnitInfo_4 + 0x504) = data::set_real(v9, "staticAimPitch", &v363) * *&dword_449CFE0;
  LOBYTE(v363) = 0;
  *(UnitInfo_4 + 0x508) = data::get_bool(a3, "disableAerobaticsSmoke", &v363) ^ 1;
  v48 = *a3;
  v49 = 0xFFFFFFFF;
  if ( *a3 )
  {
    v50 = data::get_name_id("effects", 7ui64);
    v51 = *(v48 + 0x50);
    if ( v51 )
    {
      v52 = *(v51 + 0x20);
      if ( !*(v48 + 0x20) )
      {
LABEL_87:
        v15 = v52 == 0;
        UnitInfo_4 = UnitInfo_;
        if ( !v15 )
          v49 = data::get_name_id(*(v48 + 0x50), "effects", 7ui64, v50);
        goto LABEL_89;
      }
    }
    else
    {
      v52 = 0;
      if ( !*(v48 + 0x20) )
        goto LABEL_87;
    }
    v53 = data::get_name_id(v48, "effects", 7ui64, v50);
    if ( v53 >= 0 )
    {
      v49 = v52 + v53;
      UnitInfo_4 = UnitInfo_;
      goto LABEL_89;
    }
    goto LABEL_87;
  }
LABEL_89:
  v54 = *(a3 + 0x10);
  if ( v54 == 0xFFFFFFFF )
  {
    v61 = *(a3 + 0xE);
    v56 = 0i64;
    if ( *(a3 + 0xE) )
    {
      v62 = v49 + 1;
      v63 = *(a3 + 0x18);
      v64 = *v63;
      v65 = *(v63 + 2) - 8 * v61;
      v66 = 0;
      while ( (*(*(v64 + v65) + 8i64) & 0x3FFFFFFF) != v62 )
      {
        ++v66;
        v65 += 8i64;
        if ( v61 == v66 )
          goto LABEL_102;
      }
      UnitInfo_4 = UnitInfo_;
      if ( v66 >= v61 )
        v56 = 0i64;
      else
        v56 = *(v64 + v65);
    }
  }
  else
  {
    v55 = *(a3 + 0xE);
    v56 = 0i64;
    if ( v54 < (v54 + v55) )
    {
      v57 = v49 + 1;
      v58 = *(*a3 + 0x5Ci64) + *a3 + 0x90i64;
      v59 = 0;
      while ( 1 )
      {
        v60 = 0x20i64 * (v54 + v59);
        if ( (*(v58 + v60 + 8) & 0x3FFFFFFF) == v57 )
          break;
        if ( v55 == ++v59 )
          goto LABEL_102;
      }
      v67 = (v60 + v58);
      v56 = 0i64;
      if ( v59 < v55 )
        v56 = v67;
LABEL_102:
      UnitInfo_4 = UnitInfo_;
    }
  }
  if ( !v56 )
    v56 = &data::get_block_by_name;
  v363 = "water_explosion_medium";
  v68 = data::get_str(v56, "waterExplosionEffect", &v363);
  v69 = 0xFFFFFFFF;
  v70 = 0xFFFFFFFF;
  if ( v68 )
  {
    v70 = 0xFFFFFFFF;
    if ( *v68 )
      v70 = sub_93E610(v68);
  }
  *(UnitInfo_4 + 0x4D8) = v70;
  v363 = "land_explosion_plane";
  v71 = data::get_str(v56, "landExplosionEffect", &v363);
  if ( v71 && *v71 )
    v69 = sub_93E610(v71);
  *(UnitInfo_4 + 0x4DC) = v69;
  v363 = "land_crash_fire";
  v72 = data::get_str(v56, "landCrashFireEffect", &v363);
  v73 = 0xFFFFFFFF;
  v74 = 0xFFFFFFFF;
  if ( v72 )
  {
    v74 = 0xFFFFFFFF;
    if ( *v72 )
      v74 = sub_93E610(v72);
  }
  *(UnitInfo_4 + 0x4E0) = v74;
  v363 = "land_crash_fire_time_limit";
  v75 = data::get_str(v56, "landCrashShortFireEffect", &v363);
  if ( v75 && *v75 )
    v73 = sub_93E610(v75);
  *(UnitInfo_4 + 0x4E4) = v73;
  v363 = "explosion_plane";
  v76 = data::get_str(v56, "explosionEffect", &v363);
  v77 = 0xFFFFFFFF;
  v78 = 0xFFFFFFFF;
  if ( v76 )
  {
    v78 = 0xFFFFFFFF;
    if ( *v76 )
      v78 = sub_93E610(v76);
  }
  *(UnitInfo_4 + 0x4E8) = v78;
  v363 = "collision_dust_plane";
  v79 = data::get_str(v56, "collisionDustEffect", &v363);
  if ( v79 && *v79 )
    v77 = sub_93E610(v79);
  *(UnitInfo_4 + 0x4EC) = v77;
  LOBYTE(v363) = 1;
  *(UnitInfo_4 + 0x4F0) = data::get_bool(v56, "createExplosionCrater", &v363);
  v363 = "explosion_plane_pieces";
  v80 = data::get_str(v56, "explosionPiecesEffect", &v363);
  v81 = 0xFFFFFFFF;
  v82 = 0xFFFFFFFF;
  if ( v80 )
  {
    v82 = 0xFFFFFFFF;
    if ( *v80 )
      v82 = sub_93E610(v80);
  }
  *(UnitInfo_4 + 0x4F4) = v82;
  v363 = 0i64;
  v83 = data::get_str(v56, "thrustEffect", &v363);
  if ( v83 && *v83 )
    v81 = sub_93E610(v83);
  *(UnitInfo_4 + 0x4F8) = v81;
  v363 = "part_cut";
  v84 = data::get_str(v56, "cutPartEffect", &v363);
  v85 = 0xFFFFFFFF;
  v86 = 0xFFFFFFFF;
  if ( v84 )
  {
    v86 = 0xFFFFFFFF;
    if ( *v84 )
      v86 = sub_93E610(v84);
  }
  *(UnitInfo_4 + 0x4FC) = v86;
  LOBYTE(v363) = 1;
  *(UnitInfo_4 + 0x500) = data::get_bool(v56, "shouldHaveFlightModelEffectsIfDead", &v363);
  v87 = *a3;
  if ( *a3 )
  {
    v88 = data::get_name_id("helicopter", 0xAui64);
    v89 = *(v87 + 0x50);
    if ( v89 )
    {
      v90 = *(v89 + 0x20);
      if ( !*(v87 + 0x20) )
        goto LABEL_139;
    }
    else
    {
      v90 = 0;
      if ( !*(v87 + 0x20) )
        goto LABEL_139;
    }
    v91 = data::get_name_id(v87, "helicopter", 0xAui64, v88);
    if ( v91 >= 0 )
    {
      v92 = v90 + v91;
LABEL_141:
      v85 = v92;
      goto LABEL_142;
    }
LABEL_139:
    if ( !v90 )
      goto LABEL_142;
    v92 = data::get_name_id(*(v87 + 0x50), "helicopter", 0xAui64, v88);
    goto LABEL_141;
  }
LABEL_142:
  v93 = *(a3 + 0x10);
  if ( v93 != 0xFFFFFFFF )
  {
    v94 = *(a3 + 0xE);
    v95 = 0i64;
    if ( v93 < (v93 + v94) )
    {
      v96 = v85 + 1;
      v97 = *(*a3 + 0x5Ci64) + *a3 + 0x90i64;
      v98 = 0;
      while ( 1 )
      {
        v99 = 0x20i64 * (v93 + v98);
        if ( (*(v97 + v99 + 8) & 0x3FFFFFFF) == v96 )
          break;
        if ( v94 == ++v98 )
          goto LABEL_155;
      }
      v106 = (v99 + v97);
      v95 = 0i64;
      if ( v98 < v94 )
        v95 = v106;
    }
    goto LABEL_155;
  }
  v100 = *(a3 + 0xE);
  v95 = 0i64;
  if ( !*(a3 + 0xE) )
  {
LABEL_155:
    v107 = UnitInfo_;
    goto LABEL_156;
  }
  v101 = v85 + 1;
  v102 = *(a3 + 0x18);
  v103 = *v102;
  v104 = *(v102 + 2) - 8 * v100;
  v105 = 0;
  while ( (*(*(v103 + v104) + 8i64) & 0x3FFFFFFF) != v101 )
  {
    ++v105;
    v104 += 8i64;
    if ( v100 == v105 )
      goto LABEL_155;
  }
  v107 = UnitInfo_;
  if ( v105 >= v100 )
    v95 = 0i64;
  else
    v95 = *(v103 + v104);
LABEL_156:
  if ( !v95 )
    v95 = &data::get_block_by_name;
  v371 = 0x3F8000003F800000i64;
  LODWORD(v372) = 0x3F800000;
  sub_145C630(v95, &v363, "rotorBladeAnglesCoeffs", &v371);
  *(v107 + 0x354) = v364;
  *(v107 + 0x34C) = v363;
  LODWORD(v363) = 0x3C23D70A;
  *(v107 + 0x358) = data::set_real(v95, "propellerStrainCoeff", &v363);
  LOBYTE(v363) = 0;
  *(v107 + 0x35C) = data::get_bool(v95, "inclinedRotor", &v363);
  v108 = *a3;
  v109 = 0xFFFFFFFF;
  if ( *a3 )
  {
    v110 = data::get_name_id("flexWing", 8ui64);
    v111 = *(v108 + 0x50);
    if ( v111 )
    {
      v112 = *(v111 + 0x20);
      if ( !*(v108 + 0x20) )
      {
LABEL_165:
        v15 = v112 == 0;
        v107 = UnitInfo_;
        if ( !v15 )
          v109 = data::get_name_id(*(v108 + 0x50), "flexWing", 8ui64, v110);
        goto LABEL_167;
      }
    }
    else
    {
      v112 = 0;
      if ( !*(v108 + 0x20) )
        goto LABEL_165;
    }
    v113 = data::get_name_id(v108, "flexWing", 8ui64, v110);
    if ( v113 >= 0 )
    {
      v109 = v112 + v113;
      v107 = UnitInfo_;
      goto LABEL_167;
    }
    goto LABEL_165;
  }
LABEL_167:
  v114 = *(a3 + 0x10);
  if ( v114 == 0xFFFFFFFF )
  {
    v121 = *(a3 + 0xE);
    v116 = 0i64;
    if ( *(a3 + 0xE) )
    {
      v122 = v109 + 1;
      v123 = *(a3 + 0x18);
      v124 = *v123;
      v125 = *(v123 + 2) - 8 * v121;
      v126 = 0;
      while ( (*(*(v124 + v125) + 8i64) & 0x3FFFFFFF) != v122 )
      {
        ++v126;
        v125 += 8i64;
        if ( v121 == v126 )
          goto LABEL_180;
      }
      v107 = UnitInfo_;
      if ( v126 >= v121 )
        v116 = 0i64;
      else
        v116 = *(v124 + v125);
    }
  }
  else
  {
    v115 = *(a3 + 0xE);
    v116 = 0i64;
    if ( v114 < (v114 + v115) )
    {
      v117 = v109 + 1;
      v118 = *(*a3 + 0x5Ci64) + *a3 + 0x90i64;
      v119 = 0;
      while ( 1 )
      {
        v120 = 0x20i64 * (v114 + v119);
        if ( (*(v118 + v120 + 8) & 0x3FFFFFFF) == v117 )
          break;
        if ( v115 == ++v119 )
          goto LABEL_180;
      }
      v127 = (v120 + v118);
      v116 = 0i64;
      if ( v119 < v115 )
        v116 = v127;
LABEL_180:
      v107 = UnitInfo_;
    }
  }
  if ( !v116 )
    v116 = &data::get_block_by_name;
  LODWORD(v363) = 0x3F800000;
  *(v107 + 0x360) = data::set_real(v116, "wingStrainCoeff", &v363);
  LODWORD(v363) = 0x3F800000;
  *(v107 + 0x364) = data::set_real(v116, "wingOverloadCoeff", &v363);
  LODWORD(v363) = 0x3F800000;
  *(v107 + 0x368) = data::set_real(v116, "wingStaticRadius", &v363);
  LODWORD(v363) = 0x3F800000;
  *(v107 + 0x36C) = COERCE_UNSIGNED_INT(data::set_real(v116, "wingStrainLimitDown", &v363)) ^ SIGN_BIT_MASK;
  *(v107 + 0x370) = 0x3F800000;
  v129 = off_4A78F98(v128);
  v130 = *v129;
  v131 = 0xFFFFFFFF;
  if ( *v129 )
  {
    v132 = data::get_name_id("splatter", 8ui64);
    v133 = *(v130 + 0x50);
    if ( v133 )
    {
      v134 = *(v133 + 0x20);
      if ( !*(v130 + 0x20) )
        goto LABEL_190;
    }
    else
    {
      v134 = 0;
      if ( !*(v130 + 0x20) )
        goto LABEL_190;
    }
    v135 = data::get_name_id(v130, "splatter", 8ui64, v132);
    if ( v135 >= 0 )
    {
      v136 = v134 + v135;
LABEL_192:
      v131 = v136;
      goto LABEL_193;
    }
LABEL_190:
    if ( !v134 )
      goto LABEL_193;
    v136 = data::get_name_id(*(v130 + 0x50), "splatter", 8ui64, v132);
    goto LABEL_192;
  }
LABEL_193:
  v137 = *(v129 + 0x10);
  if ( v137 != 0xFFFFFFFF )
  {
    v138 = *(v129 + 0xE);
    v139 = 0i64;
    if ( v137 < (v137 + v138) )
    {
      v140 = v131 + 1;
      v141 = *(*v129 + 0x5Ci64) + *v129 + 0x90i64;
      v142 = 0;
      while ( 1 )
      {
        v143 = 0x20i64 * (v137 + v142);
        if ( (*(v141 + v143 + 8) & 0x3FFFFFFF) == v140 )
          break;
        if ( v138 == ++v142 )
          goto LABEL_206;
      }
      v150 = (v143 + v141);
      v139 = 0i64;
      if ( v142 < v138 )
        v139 = v150;
    }
    goto LABEL_206;
  }
  v144 = *(v129 + 0xE);
  v139 = 0i64;
  if ( !*(v129 + 0xE) )
  {
LABEL_206:
    v151 = UnitInfo_;
    goto LABEL_207;
  }
  v145 = v131 + 1;
  v146 = *(v129 + 0x18);
  v147 = *v146;
  v148 = *(v146 + 2) - 8 * v144;
  v149 = 0;
  while ( (*(*(v147 + v148) + 8i64) & 0x3FFFFFFF) != v145 )
  {
    ++v149;
    v148 += 8i64;
    if ( v144 == v149 )
      goto LABEL_206;
  }
  v184 = v149 < v144;
  v151 = UnitInfo_;
  if ( v184 )
    v139 = *(v147 + v148);
  else
    v139 = 0i64;
LABEL_207:
  if ( !v139 )
    v139 = &data::get_block_by_name;
  LODWORD(v363) = 0x3DCCCCCD;
  v151[0xC5] = data::set_real(v139, "levelIncreaseSpeed", &v363);
  LODWORD(v363) = 0x3F000000;
  v151[0xC6] = data::set_real(v139, "opacityIncreaseSpeed", &v363);
  LODWORD(v363) = 0x3CA3D70A;
  v151[0xC7] = data::set_real(v139, "levelDecreaseSpeed", &v363);
  LODWORD(v363) = 0x3D23D70A;
  v151[0xC8] = data::set_real(v139, "opacityDecreaseSpeed", &v363);
  LODWORD(v363) = 0x3F4CCCCD;
  v151[0xC9] = data::set_real(v139, "opacityDecreaseAfterLevel", &v363);
  LODWORD(v363) = 0x447A0000;
  v151[0xCA] = data::set_real(v139, "distance", &v363);
  LODWORD(v363) = 0x41F00000;
  v151[0xCB] = data::set_real(v139, "angleDeg", &v363) * *&dword_449CFE0;
  LODWORD(v363) = 0x41200000;
  v151[0xCC] = data::set_real(v139, "sourceMinSpeed", &v363);
  v152 = *a3;
  v153 = 0xFFFFFFFF;
  if ( *a3 )
  {
    v154 = data::get_name_id("diveBomb", 8ui64);
    v155 = *(v152 + 0x50);
    if ( v155 )
    {
      v156 = *(v155 + 0x20);
      if ( !*(v152 + 0x20) )
        goto LABEL_216;
    }
    else
    {
      v156 = 0;
      if ( !*(v152 + 0x20) )
        goto LABEL_216;
    }
    v157 = data::get_name_id(v152, "diveBomb", 8ui64, v154);
    if ( v157 >= 0 )
    {
      v158 = v156 + v157;
LABEL_218:
      v153 = v158;
      goto LABEL_219;
    }
LABEL_216:
    if ( !v156 )
      goto LABEL_219;
    v158 = data::get_name_id(*(v152 + 0x50), "diveBomb", 8ui64, v154);
    goto LABEL_218;
  }
LABEL_219:
  v159 = *(a3 + 0x10);
  if ( v159 != 0xFFFFFFFF )
  {
    v160 = *(a3 + 0xE);
    v161 = 0i64;
    if ( v159 < (v159 + v160) )
    {
      v162 = v153 + 1;
      v163 = *(*a3 + 0x5Ci64) + *a3 + 0x90i64;
      v164 = 0;
      while ( 1 )
      {
        v165 = 0x20i64 * (v159 + v164);
        if ( (*(v163 + v165 + 8) & 0x3FFFFFFF) == v162 )
          break;
        if ( v160 == ++v164 )
          goto LABEL_232;
      }
      v172 = (v165 + v163);
      v161 = 0i64;
      if ( v164 < v160 )
        v161 = v172;
    }
    goto LABEL_232;
  }
  v166 = *(a3 + 0xE);
  v161 = 0i64;
  if ( !*(a3 + 0xE) )
  {
LABEL_232:
    UnitInfo = UnitInfo_;
    goto LABEL_233;
  }
  v167 = v153 + 1;
  v168 = *(a3 + 0x18);
  v169 = *v168;
  v170 = *(v168 + 2) - 8 * v166;
  v171 = 0;
  while ( (*(*(v169 + v170) + 8i64) & 0x3FFFFFFF) != v167 )
  {
    ++v171;
    v170 += 8i64;
    if ( v166 == v171 )
      goto LABEL_232;
  }
  UnitInfo = UnitInfo_;
  if ( v171 >= v166 )
    v161 = 0i64;
  else
    v161 = *(v169 + v170);
LABEL_233:
  if ( !v161 )
    v161 = &data::get_block_by_name;
  LODWORD(v363) = 0x453B8000;
  *(UnitInfo + 0x3D4) = data::set_real(v161, "approachHeight", &v363);
  LODWORD(v363) = 0x44BB8000;
  *(UnitInfo + 0x3D8) = data::set_real(v161, "aimHeight", &v363);
  LODWORD(v363) = 0x43C80000;
  *(UnitInfo + 0x3DC) = data::set_real(v161, "dropHeight", &v363);
  LODWORD(v363) = 0x42700000;
  v174 = data::set_real(v161, "diveAngle", &v363);
  v175 = *&dword_449CFE0;
  *(UnitInfo + 0x3E8) = v174 * *&dword_449CFE0;
  LODWORD(v363) = 0x41C80000;
  v176 = data::set_real(v161, "aimAngle", &v363) * v175;
  v177 = *&dword_4480128;
  v178 = tanf(*&dword_4480128 - *(UnitInfo + 0x3E8));
  v179 = *(UnitInfo + 0x3D8);
  *(UnitInfo + 0x3E0) = v178 * v179;
  *(UnitInfo + 0x3E4) = ((*(UnitInfo + 0x3D4) - v179) * tanf(v177 - v176)) + (v178 * v179);
  LOBYTE(v363) = 0;
  *(UnitInfo + 0x3EC) = data::get_bool(a3, "bomberView", &v363);
  LOBYTE(v363) = 1;
  *(UnitInfo + 0x3ED) = data::get_bool(a3, "gyroSight", &v363);
  LOBYTE(v363) = 0;
  *(UnitInfo + 0x3EE) = data::get_bool(a3, "haveCCIPForRocket", &v363);
  LOBYTE(v363) = 0;
  *(UnitInfo + 0x3EF) = data::get_bool(a3, "haveCCIPForGun", &v363);
  LOBYTE(v363) = 0;
  *(UnitInfo + 0x3F1) = data::get_bool(a3, "haveCCIPForBombs", &v363);
  LOBYTE(v363) = 0;
  *(UnitInfo + 0x3F2) = data::get_bool(a3, "haveCCRPForRocket", &v363);
  LOBYTE(v363) = 0;
  *(UnitInfo + 0x3F3) = data::get_bool(a3, "haveCCRPForGun", &v363);
  LOBYTE(v363) = 0;
  v180 = data::get_bool(a3, "haveCCRPForTurret", &v363);
  *(UnitInfo + 0x3F4) = v180;
  LOBYTE(v363) = v180;
  *(UnitInfo + 0x3F0) = data::get_bool(a3, "haveCCIPForTurret", &v363);
  LOBYTE(v363) = 0;
  *(UnitInfo + 0x3F5) = data::get_bool(a3, "haveCCRPForBombs", &v363);
  LOBYTE(v363) = 0;
  *(UnitInfo + 0x3F6) = data::get_bool(a3, "radarCScope", &v363);
  LOBYTE(v363) = 0;
  *(UnitInfo + 0x499) = data::get_bool(a3, "isBwOpticSight", &v363);
  v181 = *(UnitInfo + 0x38);
  if ( !v181 )
    v181 = &szFile;
  if ( !strcmp("exp_assault", v181) )
  {
    v183 = 0i64;
    goto LABEL_282;
  }
  if ( !strcmp("exp_bomber", v181) )
  {
    v183 = 1i64;
    goto LABEL_282;
  }
  if ( !strcmp("exp_fighter", v181) )
  {
    v183 = 2i64;
    goto LABEL_282;
  }
  if ( !strcmp("exp_gun_boat", v181) )
  {
    v183 = 3i64;
    goto LABEL_282;
  }
  if ( !strcmp("exp_heavy_tank", v181) )
  {
    v183 = 4i64;
    goto LABEL_282;
  }
  if ( !strcmp("exp_SPAA", v181) )
  {
    v183 = 5i64;
    goto LABEL_282;
  }
  if ( !strcmp("exp_tank_destroyer", v181) )
  {
    v183 = 6i64;
    goto LABEL_282;
  }
  if ( !strcmp("exp_torpedo_boat", v181) )
  {
    v183 = 7i64;
    goto LABEL_282;
  }
  if ( !strcmp("exp_torpedo_gun_boat", v181) )
  {
    v183 = 8i64;
    goto LABEL_282;
  }
  if ( !strcmp("exp_tank", v181) )
  {
    v183 = 9i64;
    goto LABEL_282;
  }
  if ( !strcmp("exp_submarine_chaser", v181) )
  {
    v183 = 0xAi64;
    goto LABEL_282;
  }
  if ( !strcmp("exp_destroyer", v181) )
  {
    v183 = 0xBi64;
    goto LABEL_282;
  }
  if ( !strcmp("exp_naval_ferry_barge", v181) )
  {
    v183 = 0xCi64;
    goto LABEL_282;
  }
  if ( !strcmp("exp_helicopter", v181) )
  {
    v183 = 0xDi64;
    goto LABEL_282;
  }
  v182 = 0;
  if ( !strcmp("exp_cruiser", v181) )
  {
    v183 = 0xEi64;
LABEL_282:
    v182 = (&off_44AC6C0)[2 * v183 + 1];
  }
  LOBYTE(v363) = v182 == 0x8000000;
  v185 = data::get_bool(a3, "haveOpticTurret", &v363);
  LOBYTE(v186) = 0;
  if ( v185 )
    v186 = *(UnitInfo + 0x2D0);
  *(UnitInfo + 0x3F7) = v186;
  LOBYTE(v363) = v182 == 0x8000000;
  *(UnitInfo + 0x3F8) = data::get_bool(a3, "havePointOfInterestDesignator", &v363);
  LOBYTE(v363) = *(*(game + 0x498) + 0x1CF4i64);
  *(UnitInfo + 0x3F9) = data::get_bool(a3, "hasPointOfInterestMemory", &v363);
  LOBYTE(v363) = 1;
  *(UnitInfo + 0x3FA) = data::get_bool(a3, "hasMissileCommandLine", &v363);
  LOBYTE(v363) = 0;
  *(UnitInfo + 0x3FB) = data::get_bool(a3, "laserDesignator", &v363);
  LOBYTE(v363) = 0;
  *(UnitInfo + 0x3FC) = data::get_bool(a3, "hasHelmetDesignator", &v363);
  v188 = *(UnitInfo + 0x400);
  *(UnitInfo + 0x408) = v188;
  v189 = *&epsilon_unk;
  v190 = v188;
  while ( 1 )
  {
    v363 = 0i64;
    v365 = 0i64;
    v372 = (v190 - v188) >> 4;
    LODWORD(v371) = 2;
    v364 = off_4B678C8;
    ctor_vprintf(&v363, v187, "helmetDesignatorZone%d", &v371, 1);
    v191 = v363;
    v192 = v363;
    if ( !v365 )
      v192 = &szFile;
    v193 = sub_145DD00(a3, v192);
    v194 = *(a3 + 0x14);
    v195 = *(a3 + 0xC);
    v196 = v195 == 0 || v193 < 0;
    v197 = 0xFFFFFFFF;
    if ( v194 == 0xFFFFFFFFi64 )
    {
      if ( v196 )
        goto LABEL_301;
      v202 = **(a3 + 0x18);
      v203 = &v202[2 * v195];
      v201 = 0;
      while ( (*v202 & 0xFFFFFF) != v193 )
      {
        v202 += 2;
        ++v201;
        if ( v202 >= v203 )
          goto LABEL_301;
      }
    }
    else
    {
      if ( v196 )
        goto LABEL_301;
      v198 = *a3 + v194;
      v199 = (v198 + 0x90);
      v200 = v198 + 8 * v195 + 0x90;
      v201 = 0;
      while ( (*v199 & 0xFFFFFF) != v193 )
      {
        v199 += 2;
        ++v201;
        if ( v199 >= v200 )
          goto LABEL_301;
      }
    }
    v197 = v201;
LABEL_301:
    if ( v191 )
      (*(*v364 + 0x40i64))(v364, v191);
    if ( (v197 & 0x80000000) != 0 )
      break;
    v204 = *(a3 + 0xC);
    v205 = 0.0;
    if ( v197 >= v204 )
    {
      v208 = 0.0;
      v209 = 0.0;
      goto LABEL_312;
    }
    v206 = *(a3 + 0x14);
    if ( v206 == 0xFFFFFFFFi64 )
    {
      v210 = **(a3 + 0x18);
      v208 = 0.0;
      v209 = 0.0;
      if ( *(v210 + 8i64 * v197 + 3) << 0x18 != 0x5000000 )
        goto LABEL_312;
      v211 = *(v210 + 8i64 * v197 + 4) + 8 * v204;
    }
    else
    {
      v207 = *a3 + v206 + 0x90;
      v208 = 0.0;
      v209 = 0.0;
      if ( *(v207 + 8i64 * v197 + 3) << 0x18 != 0x5000000 )
        goto LABEL_312;
      v210 = *a3 + 0x90i64;
      v211 = *(v207 + 8i64 * v197 + 4);
    }
    v205 = *(v210 + v211);
    v208 = *(v210 + v211 + 4);
    v209 = *(v210 + v211 + 8);
LABEL_312:
    v212 = sinf(v209 * v175);
    v213 = sinf(v208 * v175);
    v214 = tanf(v205 * v175);
    v188 = *(UnitInfo_ + 0x400);
    v190 = *(UnitInfo_ + 0x408);
    if ( v188 == v190 )
      goto LABEL_286;
    v215 = v214 - *(v190 - 0x10);
    if ( v215 > v189 )
    {
      *(v190 - 0xC) = v39 / v215;
      v188 = *(UnitInfo_ + 0x408);
LABEL_286:
      *(UnitInfo_ + 0x408) = v188 + 0x10;
      *v188 = v214;
      *(v188 + 8) = v213;
      *(v188 + 0xC) = v212;
      *(v188 + 4) = 0;
      v188 = *(UnitInfo_ + 0x400);
      v190 = *(UnitInfo_ + 0x408);
    }
  }
  LODWORD(v363) = 0xFFFFFF0A;
  getE3dcolor(a3, &v371, "laserOpticSightColor", &v363);
  *(UnitInfo_ + 0x49C) = v371;
  LOBYTE(v363) = 1;
  *(UnitInfo_ + 0x498) = data::get_bool(a3, "laserBeamInAimLock", &v363);
  LODWORD(v363) = dword_4B74168;
  *(UnitInfo_ + 0x4A0) = data::set_real(a3, "airframeInfraRedBrightnessMult", &v363);
  LODWORD(v363) = DWORD2(xmmword_4B74150);
  *(UnitInfo_ + 0x4AC) = data::set_real(a3, "engineInfraRedBrightnessAspectMultFront", &v363);
  LODWORD(v363) = DWORD1(xmmword_4B74150);
  *(UnitInfo_ + 0x4A8) = data::set_real(a3, "engineInfraRedBrightnessAspectMultSide", &v363);
  LODWORD(v363) = xmmword_4B74150;
  *(UnitInfo_ + 0x4A4) = data::set_real(a3, "engineInfraRedBrightnessAspectMultRear", &v363);
  *(UnitInfo_ + 0x4B0) = *(&xmmword_4B74150 + 0xC);
  *(UnitInfo_ + 0x4B8) = HIDWORD(qword_4B74160);
  LODWORD(v363) = DWORD1(xmmword_4B741C8);
  *(UnitInfo_ + 0x4BC) = data::set_real(a3, "radarCrossSectionAspectMultFront", &v363);
  LODWORD(v363) = DWORD2(xmmword_4B741C8);
  *(UnitInfo_ + 0x4C0) = data::set_real(a3, "radarCrossSectionAspectMultSide", &v363);
  LODWORD(v363) = HIDWORD(xmmword_4B741C8);
  *(UnitInfo_ + 0x4C4) = data::set_real(a3, "radarCrossSectionAspectMultRear", &v363);
  LODWORD(v363) = *(*(game + 0x498) + 0x1CF8i64);
  *(UnitInfo_ + 0x4C8) = data::set_real(a3, "activeSonarReflectionMult", &v363);
  v216 = *a3;
  v217 = 0xFFFFFFFF;
  if ( !*a3 )
  {
    v220 = v374;
    v221 = &data::get_block_by_name;
    goto LABEL_326;
  }
  v218 = data::get_name_id("hook", 4ui64);
  v219 = *(v216 + 0x50);
  v220 = v374;
  v221 = &data::get_block_by_name;
  if ( v219 )
  {
    v222 = *(v219 + 0x20);
    if ( !*(v216 + 0x20) )
    {
LABEL_323:
      if ( v222 )
      {
        v224 = data::get_name_id(*(v216 + 0x50), "hook", 4ui64, v218);
        goto LABEL_325;
      }
      goto LABEL_326;
    }
  }
  else
  {
    v222 = 0;
    if ( !*(v216 + 0x20) )
      goto LABEL_323;
  }
  v223 = data::get_name_id(v216, "hook", 4ui64, v218);
  if ( v223 < 0 )
    goto LABEL_323;
  v224 = v222 + v223;
LABEL_325:
  v217 = v224;
LABEL_326:
  v225 = *(a3 + 0x10);
  if ( v225 == 0xFFFFFFFF )
  {
    v232 = *(a3 + 0xE);
    v227 = 0i64;
    if ( !*(a3 + 0xE) )
      goto LABEL_339;
    v233 = v217 + 1;
    v234 = *(a3 + 0x18);
    v235 = *v234;
    v236 = *(v234 + 2) - 8 * v232;
    v237 = 0;
    while ( (*(*(v235 + v236) + 8i64) & 0x3FFFFFFF) != v233 )
    {
      ++v237;
      v236 += 8i64;
      if ( v232 == v237 )
        goto LABEL_339;
    }
    _UnitInfo = UnitInfo_;
    if ( v237 >= v232 )
      v227 = 0i64;
    else
      v227 = *(v235 + v236);
  }
  else
  {
    v226 = *(a3 + 0xE);
    v227 = 0i64;
    if ( v225 < (v225 + v226) )
    {
      v228 = v217 + 1;
      v229 = *(*a3 + 0x5Ci64) + *a3 + 0x90i64;
      v230 = 0;
      while ( 1 )
      {
        v231 = 0x20i64 * (v225 + v230);
        if ( (*(v229 + v231 + 8) & 0x3FFFFFFF) == v228 )
          break;
        if ( v226 == ++v230 )
          goto LABEL_339;
      }
      v238 = (v231 + v229);
      v227 = 0i64;
      if ( v230 < v226 )
        v227 = v238;
    }
LABEL_339:
    _UnitInfo = UnitInfo_;
  }
  if ( !v227 )
    v227 = &data::get_block_by_name;
  LODWORD(v363) = 0x3CF5C28F;
  *(_UnitInfo + 0x334) = data::set_real(v227, "coeffHookJ", &v363);
  v371 = 0x428C0000C2200000i64;
  sub_145C170(v227, &v363, "hookDeflectionAngles", &v371);
  v240 = *(&v363 + 1) * v175;
  *(_UnitInfo + 0x338) = v175 * *&v363;
  *(_UnitInfo + 0x33C) = v240;
  v371 = 0x3F6666663E4CCCCDi64;
  sub_145C170(v227, &v363, "hookCxDiap", &v371);
  *(_UnitInfo + 0x340) = v363;
  LODWORD(v363) = 0x40800000;
  *(_UnitInfo + 0x348) = data::set_real(v227, "hookMass", &v363);
  v241 = world_instance;
  v242 = world_instance + 0x330;
  v243 = sub_145DD00((world_instance + 0x330), v220);
  v244 = *(v241 + 0x340);
  if ( v244 == 0xFFFFFFFF )
  {
    v251 = *(v241 + 0x33E);
    v246 = 0i64;
    if ( *(v241 + 0x33E) )
    {
      v252 = v243 + 1;
      v253 = *(v241 + 0x348);
      v254 = *v253;
      v255 = *(v253 + 2) - 8 * v251;
      v256 = 0;
      while ( (*(*(v254 + v255) + 8i64) & 0x3FFFFFFF) != v252 )
      {
        ++v256;
        v255 += 8i64;
        if ( v251 == v256 )
          goto LABEL_362;
      }
      if ( v256 >= v251 )
        v246 = 0i64;
      else
        v246 = *(v254 + v255);
LABEL_362:
      _UnitInfo = UnitInfo_;
    }
  }
  else
  {
    v245 = *(v241 + 0x33E);
    v246 = 0i64;
    if ( v244 < (v244 + v245) )
    {
      v247 = v243 + 1;
      v248 = *v242 + *(*v242 + 0x5Ci64) + 0x90i64;
      v249 = 0;
      while ( 1 )
      {
        v250 = 0x20i64 * (v244 + v249);
        if ( (*(v248 + v250 + 8) & 0x3FFFFFFF) == v247 )
          break;
        if ( v245 == ++v249 )
          goto LABEL_362;
      }
      v257 = (v250 + v248);
      v246 = 0i64;
      if ( v249 < v245 )
        v246 = v257;
      goto LABEL_362;
    }
  }
  if ( !v246 )
    v246 = &data::get_block_by_name;
  v258 = *v246;
  v259 = 0xFFFFFFFF;
  if ( *v246 )
  {
    v260 = data::get_name_id("Shop", 4ui64);
    v261 = *(v258 + 0x50);
    if ( v261 )
    {
      v262 = *(v261 + 0x20);
      if ( !*(v258 + 0x20) )
        goto LABEL_372;
LABEL_370:
      v263 = data::get_name_id(v258, "Shop", 4ui64, v260);
      if ( v263 >= 0 )
      {
        v259 = v262 + v263;
        _UnitInfo = UnitInfo_;
        goto LABEL_374;
      }
    }
    else
    {
      v262 = 0;
      if ( *(v258 + 0x20) )
        goto LABEL_370;
    }
LABEL_372:
    v15 = v262 == 0;
    _UnitInfo = UnitInfo_;
    if ( !v15 )
      v259 = data::get_name_id(*(v258 + 0x50), "Shop", 4ui64, v260);
  }
LABEL_374:
  v264 = *(v246 + 4);
  if ( v264 == 0xFFFFFFFF )
  {
    v271 = *(v246 + 7);
    v266 = 0i64;
    if ( *(v246 + 7) )
    {
      v272 = v259 + 1;
      v273 = v246[3];
      v274 = *v273;
      v275 = *(v273 + 8) - 8 * v271;
      v276 = 0;
      while ( (*(*(v274 + v275) + 8i64) & 0x3FFFFFFF) != v272 )
      {
        ++v276;
        v275 += 8i64;
        if ( v271 == v276 )
          goto LABEL_387;
      }
      _UnitInfo = UnitInfo_;
      if ( v276 >= v271 )
        v266 = 0i64;
      else
        v266 = *(v274 + v275);
    }
  }
  else
  {
    v265 = *(v246 + 7);
    v266 = 0i64;
    if ( v264 < (v264 + v265) )
    {
      v267 = v259 + 1;
      v268 = *v246 + *(*v246 + 0x5C) + 0x90;
      v269 = 0;
      while ( 1 )
      {
        v270 = 0x20i64 * (v264 + v269);
        if ( (*(v268 + v270 + 8) & 0x3FFFFFFF) == v267 )
          break;
        if ( v265 == ++v269 )
          goto LABEL_387;
      }
      v277 = v270 + v268;
      v266 = 0i64;
      if ( v269 < v265 )
        v266 = v277;
LABEL_387:
      _UnitInfo = UnitInfo_;
    }
  }
  if ( v266 )
    v221 = v266;
  LODWORD(v363) = 0x42C80000;
  *(_UnitInfo + 0x4CC) = data::set_real(v221, "airfieldLen", &v363);
  LODWORD(v363) = 0x42C80000;
  *(_UnitInfo + 0x4D0) = data::set_real(v221, "maxSpeed", &v363);
  LODWORD(v363) = 0x45BB8000;
  v278 = data::set_real(v221, "maxAltitude", &v363);
  v279 = 3;
  if ( ((*&dword_44A01A0 * v278) + 1) >= 4 )
    v279 = (*&dword_44A01A0 * v278) + 1;
  v280 = 0xC;
  if ( v279 < 0xC )
    v280 = v279;
  *(_UnitInfo + 0x59C) = v280;
  LODWORD(v363) = 0x43160000;
  *(_UnitInfo + 0x50C) = data::set_real(v221, "maxSpeed", &v363);
  LODWORD(v363) = 0x41600000;
  v281 = data::set_real(v221, "climbSpeed", &v363);
  *(_UnitInfo + 0x514) = v281;
  v282 = *(_UnitInfo + 0x50C);
  v283 = *&dword_44AD398 * v282;
  *(_UnitInfo + 0x510) = *&dword_44AD398 * v282;
  if ( *(_UnitInfo + 0x59C) >= 2u )
  {
    v284 = *&dword_44A0280 * v282;
    v285 = (_UnitInfo + 0x520);
    v286 = 1i64;
    v287 = dword_4492C80;
    v288 = *&dword_449F1AC;
    do
    {
      v290 = 0i64;
      v290.m128_f32[0] = v286 * v287;
      v291 = v282;
      v292 = v284;
      v293 = v278;
      v294 = 0.0;
      if ( v278 < 0.0 )
      {
        v293 = 0.0;
        v291 = v284;
        v292 = v282;
        v294 = v278;
      }
      if ( v294 < v290.m128_f32[0] )
      {
        if ( v293 <= v290.m128_f32[0] )
        {
          v292 = v291;
        }
        else
        {
          v295 = v293 - v294;
          v296 = v290;
          v296.m128_f32[0] = (v290.m128_f32[0] - v294) * (v291 - v292);
          if ( v295 > v189 || (v297 = 0i64, v295 < v288) )
          {
            v296.m128_f32[0] = v296.m128_f32[0] / v295;
            v297 = v296;
          }
          v298.m128_f32[0] = v294 - v290.m128_f32[0];
          v292 = v292 + _mm_andnot_ps(_mm_cmple_ss(0i64, v298), v297).m128_f32[0];
        }
      }
      v299 = 0.0;
      v285[0xFFFFFFFE] = v292;
      v289 = v281;
      v300 = v278;
      v301 = 0.0;
      if ( v278 < 0.0 )
      {
        v289 = 0.0;
        v299 = v281;
        v300 = 0.0;
        v301 = v278;
      }
      if ( v301 < v290.m128_f32[0] )
      {
        if ( v300 <= v290.m128_f32[0] )
        {
          v289 = v299;
        }
        else
        {
          v302 = v300 - v301;
          v303 = v290;
          v303.m128_f32[0] = (v290.m128_f32[0] - v301) * (v299 - v289);
          if ( v302 > v189 || (v304 = 0i64, v302 < v288) )
          {
            v303.m128_f32[0] = v303.m128_f32[0] / v302;
            v304 = v303;
          }
          v305.m128_f32[0] = v301 - v290.m128_f32[0];
          v289 = v289 + _mm_andnot_ps(_mm_cmple_ss(0i64, v305), v304).m128_f32[0];
        }
      }
      *v285 = v289;
      v285[0xFFFFFFFF] = v283;
      ++v286;
      v285 += 3;
    }
    while ( v286 < *(_UnitInfo + 0x59C) );
  }
  LODWORD(v363) = 0x42480000;
  *(_UnitInfo + 0x5A8) = data::set_real(v221, "turnTime", &v363);
  LODWORD(v363) = 0x42C80000;
  v306 = data::set_real(v221, "airfieldLen", &v363);
  *(_UnitInfo + 0x5A0) = v306;
  *(_UnitInfo + 0x5A4) = v306;
  v371 = 0i64;
  v373 = 0i64;
  v364 = "gameData/flightModels";
  LODWORD(v363) = 1;
  v366 = v220;
  LODWORD(v365) = 1;
  v372 = off_4B678C8;
  ctor_vprintf(&v371, v307, "%s/performance/%s.blk", &v363, 2);
  v308 = v371;
  v309 = v371;
  if ( !v373 )
    v309 = &szFile;
  result = file_exists(v309);
  if ( result )
  {
    sub_14584E0(&v363);
    if ( !sub_1606B70(&v363, v309, 0i64) )
      goto LABEL_495;
    *(UnitInfo_ + 0x59C) = 0;
    v311 = v363;
    v312 = 0xFFFFFFFF;
    if ( !v363 )
      goto LABEL_432;
    v313 = data::get_name_id("altSpecs", 8ui64);
    v314 = *(v311 + 0x50);
    if ( v314 )
    {
      v315 = *(v314 + 0x20);
      if ( !*(v311 + 0x20) )
      {
LABEL_429:
        if ( v315 )
        {
          v317 = data::get_name_id(*(v311 + 0x50), "altSpecs", 8ui64, v313);
          goto LABEL_431;
        }
        goto LABEL_432;
      }
    }
    else
    {
      v315 = 0;
      if ( !*(v311 + 0x20) )
        goto LABEL_429;
    }
    v316 = data::get_name_id(v311, "altSpecs", 8ui64, v313);
    if ( v316 < 0 )
      goto LABEL_429;
    v317 = v315 + v316;
LABEL_431:
    v312 = v317;
LABEL_432:
    if ( v365 != 0xFFFFFFFF )
    {
      if ( v365 >= (v365 + HIWORD(v364)) )
        goto LABEL_495;
      v318 = v312 + 1;
      v319 = &v363[*(v363 + 0x17) + 0x90];
      v320 = 0i64;
      while ( 1 )
      {
        v321 = 0x20i64 * (v365 + v320);
        if ( (*(v319 + v321 + 8) & 0x3FFFFFFF) == v318 )
          break;
        v320 = (v320 + 1);
        if ( HIWORD(v364) == v320 )
          goto LABEL_495;
      }
      if ( v320 >= HIWORD(v364) )
        goto LABEL_495;
      v325 = v321 + v319;
      goto LABEL_447;
    }
    if ( !HIWORD(v364) )
      goto LABEL_495;
    v322 = v312 + 1;
    v323 = *v366;
    v320 = *(v366 + 2) - 8 * HIWORD(v364);
    v324 = 0;
    while ( (*(*(v323 + v320) + 8i64) & 0x3FFFFFFF) != v322 )
    {
      ++v324;
      v320 += 8i64;
      if ( HIWORD(v364) == v324 )
        goto LABEL_495;
    }
    if ( v324 < HIWORD(v364) )
    {
      v325 = *(v323 + v320);
      if ( v325 )
      {
LABEL_447:
        v368 = 0i64;
        v370 = 0i64;
        v376 = 0i64;
        v375 = 2;
        v369 = off_4B678C8;
        ctor_vprintf(&v368, v320, "altSpecs%d", &v375, 1);
        v326 = v368;
        v327 = v368;
        if ( !v370 )
          v327 = &szFile;
        v328 = sub_145DD00(v325, v327);
        v330 = *(v325 + 0x10);
        v367 = v325;
        if ( v330 == 0xFFFFFFFF )
        {
          v336 = *(v325 + 0xE);
          v331 = 0i64;
          if ( !*(v325 + 0xE) )
            goto LABEL_462;
          v337 = v328 + 1;
          v338 = *(v325 + 0x18);
          v329 = *v338;
          v339 = *(v338 + 2) - 8 * v336;
          v340 = 0;
          while ( (*(*(v329 + v339) + 8i64) & 0x3FFFFFFF) != v337 )
          {
            ++v340;
            v339 += 8i64;
            if ( v336 == v340 )
              goto LABEL_462;
          }
          v184 = v340 < v336;
          UnitInfo_2 = UnitInfo_;
          if ( v184 )
            v331 = *(v329 + v339);
          else
            v331 = 0i64;
        }
        else
        {
          v329 = *(v325 + 0xE);
          v331 = 0i64;
          if ( v330 < v330 + v329 )
          {
            v332 = v328 + 1;
            v333 = *(*v325 + 0x5Ci64) + *v325 + 0x90i64;
            v334 = 0;
            while ( 1 )
            {
              v335 = 0x20i64 * (v330 + v334);
              if ( (*(v333 + v335 + 8) & 0x3FFFFFFF) == v332 )
                break;
              if ( v329 == ++v334 )
                goto LABEL_462;
            }
            v341 = v335 + v333;
            v331 = 0i64;
            if ( v334 < v329 )
              v331 = v341;
          }
LABEL_462:
          UnitInfo_2 = UnitInfo_;
        }
        if ( v326 )
          (*(*v369 + 0x40i64))(v369, v326);
        v374 = v308;
        if ( v331 )
        {
          *&v368 = UnitInfo_2[0x143];
          UnitInfo_2[0x143] = data::set_real(v331, "maxSpeed", &v368);
          *&v368 = UnitInfo_2[0x144];
          UnitInfo_2[0x144] = data::set_real(v331, "optSpeed", &v368);
          *&v368 = UnitInfo_2[0x145];
          UnitInfo_2[0x145] = data::set_real(v331, "maxClimb", &v368);
          *(UnitInfo_2 + 0x167) = 1;
        }
        v343 = UnitInfo_2 + 0x143;
        v344 = 1i64;
        v345 = v367;
        while ( 2 )
        {
          v368 = 0i64;
          v370 = 0i64;
          v376 = 0x3E8 * v344;
          v375 = 2;
          v369 = off_4B678C8;
          ctor_vprintf(&v368, v329, "altSpecs%d", &v375, 1);
          v347 = v368;
          v348 = v368;
          if ( !v370 )
            v348 = &szFile;
          v349 = sub_145DD00(v345, v348);
          v350 = *(v345 + 0x10);
          if ( v350 == 0xFFFFFFFF )
          {
            v355 = *(v345 + 0xE);
            if ( *(v345 + 0xE) )
            {
              v356 = v349 + 1;
              v357 = *(v345 + 0x18);
              v329 = *v357;
              v358 = *(v357 + 2) - 8 * v355;
              v359 = 0;
              while ( (*(*(v329 + v358) + 8i64) & 0x3FFFFFFF) != v356 )
              {
                ++v359;
                v358 += 8i64;
                if ( v355 == v359 )
                  goto LABEL_490;
              }
              if ( v359 < v355 )
              {
                v360 = *(v329 + v358);
                if ( !v347 )
                  goto LABEL_492;
                goto LABEL_491;
              }
            }
          }
          else
          {
            v329 = *(v345 + 0xE);
            if ( v350 < v350 + v329 )
            {
              v351 = v349 + 1;
              v352 = *(*v345 + 0x5Ci64) + *v345 + 0x90i64;
              v353 = 0;
              while ( 1 )
              {
                v354 = 0x20i64 * (v350 + v353);
                if ( (*(v352 + v354 + 8) & 0x3FFFFFFF) == v351 )
                  break;
                if ( v329 == ++v353 )
                  goto LABEL_490;
              }
              v360 = v354 + v352;
              if ( v353 >= v329 )
                v360 = 0i64;
              if ( !v347 )
              {
LABEL_492:
                v361 = &v343[3 * v344];
                if ( v360 )
                {
                  LODWORD(v368) = *v361;
                  *v361 = data::set_real(v360, "maxSpeed", &v368);
                  LODWORD(v368) = v343[3 * v344 + 1];
                  *&v343[3 * v344 + 1] = data::set_real(v360, "optSpeed", &v368);
                  LODWORD(v368) = v343[3 * v344 + 2];
                  *&v343[3 * v344 + 2] = data::set_real(v360, "maxClimb", &v368);
                  UnitInfo_3 = UnitInfo_;
                  *(UnitInfo_ + 0x59C) = v344 + 1;
                }
                else
                {
                  v361[2] = v343[3 * (v344 - 1) + 2];
                  *v361 = *&v343[3 * (v344 - 1)];
                  UnitInfo_3 = UnitInfo_;
                }
                v345 = v367;
                if ( ++v344 == 0xC )
                {
                  LODWORD(v368) = *(UnitInfo_3 + 0x5A0);
                  *(UnitInfo_3 + 0x5A0) = data::set_real(&v363, "takeoffDistance", &v368);
                  LODWORD(v368) = *(UnitInfo_3 + 0x5A4);
                  *(UnitInfo_3 + 0x5A4) = data::set_real(&v363, "landingDistance", &v368);
                  v308 = v374;
                  goto LABEL_495;
                }
                continue;
              }
LABEL_491:
              (*(*v369 + 0x40i64))(v369, v347);
              goto LABEL_492;
            }
          }
          break;
        }
LABEL_490:
        v360 = 0i64;
        if ( !v347 )
          goto LABEL_492;
        goto LABEL_491;
      }
    }
LABEL_495:
    result = sub_1458FF0(&v363);
  }
  if ( v308 )
    return (*(*v372 + 0x40i64))(v372, v308);
  return result;
}
