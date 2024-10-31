__int64 __fastcall scout_unit(__int64 a1, __int64 DetectorUnit, __int64 _Unit_)
{
  Unit_ = DetectorUnit;
  if ( !*(a1 + 0x18) )
  {
    response = "scouting: failed, preset enabled = false";
LABEL_50:
    LODWORD(Unit) = 0;
    logmessage_fmt(3u, response, 0i64, 0, v134);
    return Unit;
  }
  if ( !DetectorUnit )
  {
    response = "scouting: failed, detector is nullptr";
    goto LABEL_50;
  }
  UnitType = *(DetectorUnit + 0x10B0);
  if ( UnitType > 0xF || (v7 = 0x897E, !_bittest(&v7, UnitType)) || !*(DetectorUnit + 0x1EF0) )
  {
    response = "scouting: failed, unit has no ability for";
    goto LABEL_50;
  }
  Unit = _Unit_;
  if ( !g_net || *(game + 0xCD) || *(game + 0xCE) )
  {
    v11 = *(game + 0x450);
    if ( v11 && *(v11 + 0x5CA) )
      v9 = (v11 + 0x620);
    else
      v9 = (game + 0x2E0);
  }
  else
  {
    v9 = (g_net + 0x70);
  }
  v3.m128_f32[0] = *v9;
  scout_start_time = *(DetectorUnit + 0x12D8);
  scout_cooldown = *(DetectorUnit + 0x1300) + scout_start_time;
  if ( scout_cooldown >= scout_start_time )
  {
    v14 = Y;
    v15 = 0.0;
    scout_cooldown_ = *(DetectorUnit + 0x1300) + scout_start_time;
    if ( scout_start_time >= v3.m128_f32[0] )
      goto LABEL_27;
  }
  else
  {
    v14 = 0.0;
    v15 = Y;
    scout_cooldown_ = *(DetectorUnit + 0x12D8);
    scout_start_time = *(DetectorUnit + 0x1300) + scout_start_time;
    if ( scout_cooldown >= v3.m128_f32[0] )
      goto LABEL_27;
  }
  if ( scout_cooldown_ <= v3.m128_f32[0] )
  {
    v14 = v15;
  }
  else
  {
    v17 = scout_cooldown_ - scout_start_time;
    v18 = v3;
    v18.m128_f32[0] = (v3.m128_f32[0] - scout_start_time) * (v15 - v14);
    if ( v17 > *&epsilon_unk || (v19 = 0i64, v17 < *&dword_449F1AC) )
    {
      v18.m128_f32[0] = v18.m128_f32[0] / v17;
      v19 = v18;
    }
    v20.m128_f32[0] = scout_start_time - v3.m128_f32[0];
    v14 = v14 + _mm_andnot_ps(_mm_cmple_ss(0i64, v20), v19).m128_f32[0];
  }
LABEL_27:
  if ( COERCE_FLOAT(LODWORD(v14) & FABSF_MASK) >= *&dword_44A0308 )
  {
    response = "scouting: failed, timer not ready";
    goto LABEL_50;
  }
  PlayerInfo = *(DetectorUnit + 0x10B8);
  v22 = 0i64;
  if ( _Unit_ && PlayerInfo )
    v22 = sub_4BCEE0(*(_Unit_ + 0x11C8), *(PlayerInfo + 8));
  is_intersects = 0;
  hud_marker_unk = *(HudInfo + 0x73);
  if ( Unit && !v22 )
  {
    if ( !*(Unit + 0x10B8) )
    {
      UnitPositionZ = *(Unit + 0x9C8);
      UnitPositionY = *(Unit + 0x9C4) + dword_44801E0;
      LODWORD(UnitPosition) = *(Unit + 0x9C0);
      *(&UnitPosition + 1) = UnitPositionY;
      LODWORD(v153) = UnitPositionZ;
      DetectorPositionY = dword_44801E0 + *(DetectorUnit + 0x9C4);
      DetectorPositionZ = *(DetectorUnit + 0x9C8);
      DetectorPositionX = *(DetectorUnit + 0x9C0);
      DetectorPositionY_ = DetectorPositionY;
      DetectorPositionZ_ = *&DetectorPositionZ;
      is_intersects = raycast_world(&DetectorPositionX, &UnitPosition) ^ 1;
      if ( *(a1 + 0x1A) )
        goto LABEL_36;
LABEL_65:
      if ( ((is_intersects ^ 1) & (v22 == 0i64)) != 0 || v22 && hud_marker_unk == 2 && !(v22[0x14] | v22[0x12]) )
      {
        LODWORD(Unit) = 0;
        logmessage_fmt(3u, "scouting: failed - marker not visible", 0i64, 0);
        v70 = *(a1 + 0x1A);
        DetectorUnit_ = DetectorUnit;
LABEL_70:
        v72 = 0i64;
        goto LABEL_71;
      }
      goto LABEL_36;
    }
    is_intersects = 0;
  }
  if ( !*(a1 + 0x1A) )
    goto LABEL_65;
LABEL_36:
  if ( !Unit )
  {
    v62 = *(HudInfo + 0xE5);
    v63 = (qword_4AD11A0 + 0x38 * v62);
    if ( v62 >= qword_4AD11B0 )
      v63 = &unk_4AD1168;
    if ( v62 < 0 )
      v63 = &unk_4AD1168;
    if ( !g_net || *(game + 0xCD) || *(game + 0xCE) )
    {
      v73 = *(game + 0x450);
      if ( v73 && *(v73 + 0x5CA) )
        v64 = (v73 + 0x620);
      else
        v64 = (game + 0x2E0);
    }
    else
    {
      v64 = (g_net + 0x70);
    }
    v74 = v63[7];
    v75 = *v64;
    *&UnitPosition = v75;
    if ( v75 != *(DetectorUnit + 0x12D8) )
    {
      on_reflection_var_changed(DetectorUnit + 0x12B8, DetectorUnit, &UnitPosition);
      *(DetectorUnit + 0x12D8) = UnitPosition;
    }
    *&UnitPosition = v74;
    if ( v74 != *(DetectorUnit + 0x1300) )
    {
      on_reflection_var_changed(DetectorUnit + 0x12E0, DetectorUnit, &UnitPosition);
      *(DetectorUnit + 0x1300) = UnitPosition;
    }
    v76 = 0xFFFFFFFFFFFFFFFFui64;
    v77 = 0xFFFFFFFFFFFFFFFFui64;
LABEL_104:
    v86 = 0xFFFFFFFFFFFFFFFFui64;
    v87 = 0xFFFFFFFFFFFFFFFFui64;
    if ( !v22 )
    {
LABEL_112:
      v91 = 0xFFFFFFFFFFFFFFFFui64;
      v92 = 0xFFFFFFFFFFFFFFFFui64;
      if ( Unit )
      {
        v93 = sub_4BCDB0(*(Unit + 0x11C8), DetectorUnit);
        LOBYTE(v94) = 1;
        LOBYTE(v86) = sub_4BCB60(*(Unit + 0x11C8), DetectorUnit, v94);
        v95 = *(Unit + 0x10B0);
        if ( v95 > 0xF || (v96 = 0x897E, v97 = _bittest(&v96, v95), v98 = Unit, !v97) )
          v98 = 0i64;
        v92 = v98 != 0;
        v86 = v86;
        v91 = v93;
      }
      v153 = Unit != 0;
      LODWORD(UnitPosition) = 2;
      v155 = v92;
      v154 = 2;
      v157 = v86;
      v156 = 2;
      v159 = v91;
      v158 = 2;
      v161 = v87;
      v160 = 2;
      v163 = v77;
      v162 = 2;
      v165 = v76;
      v164 = 2;
      logmessage_fmt(
        3u,
        "scouting: failed - !target|!GM|cansee|isVis|far_or_not_visible|live|enemy %d.%d.%d.%d.%d.%d.%d",
        &UnitPosition,
        7);
      LODWORD(Unit) = 0;
      return Unit;
    }
    v88 = v22[0x12];
    if ( hud_marker_unk == 2 )
    {
      v89 = (v22[0x14] | v88) == 0;
    }
    else
    {
      if ( v88 )
      {
        v90 = 0;
LABEL_111:
        v87 = v90;
        goto LABEL_112;
      }
      v89 = (v22[0x15] | (v22[0x13] | v22[0x14])) == 0;
    }
    v90 = v89;
    goto LABEL_111;
  }
  UnitType_ = *(Unit + 0x10B0);
  if ( UnitType_ > 0xF )
    goto LABEL_85;
  v26 = 0x897E;
  if ( !_bittest(&v26, UnitType_) )
    goto LABEL_85;
  if ( is_intersects )
    goto LABEL_40;
  if ( !v22 )
  {
LABEL_85:
    v78 = *(HudInfo + 0xE5);
    v79 = (qword_4AD11A0 + 0x38 * v78);
    if ( v78 >= qword_4AD11B0 )
      v79 = &unk_4AD1168;
    if ( v78 < 0 )
      v79 = &unk_4AD1168;
    if ( !g_net || *(game + 0xCD) || *(game + 0xCE) )
    {
      v81 = *(game + 0x450);
      if ( v81 && *(v81 + 0x5CA) )
        v80 = (v81 + 0x620);
      else
        v80 = (game + 0x2E0);
    }
    else
    {
      v80 = (g_net + 0x70);
    }
    v82 = v79[7];
    v83 = *v80;
    *&UnitPosition = v83;
    if ( v83 != *(DetectorUnit + 0x12D8) )
    {
      on_reflection_var_changed(DetectorUnit + 0x12B8, DetectorUnit, &UnitPosition);
      *(DetectorUnit + 0x12D8) = UnitPosition;
    }
    *&UnitPosition = v82;
    if ( v82 != *(DetectorUnit + 0x1300) )
    {
      on_reflection_var_changed(DetectorUnit + 0x12E0, DetectorUnit, &UnitPosition);
      *(DetectorUnit + 0x1300) = UnitPosition;
    }
    v84 = (*(*(DetectorUnit + 0x50) + 0x30i64))(DetectorUnit + 0x50);
    v85 = (*(*(Unit + 0x50) + 0x30i64))(Unit + 0x50);
    v76 = 1i64;
    if ( (dword_4B1C814 & 0x80000) == 0 )
      v76 = (dword_4B1C814 & 0x1000000 | v84 ^ v85) != 0;
    v77 = *(Unit + 0x10A8) < 2u;
    goto LABEL_104;
  }
  v65 = v22[0x12];
  if ( hud_marker_unk == 2 )
  {
    if ( v22[0x14] | v65 )
      goto LABEL_40;
    goto LABEL_85;
  }
  if ( !v65 && !v22[0x14] && !v22[0x13] && !v22[0x15] )
    goto LABEL_85;
LABEL_40:
  if ( *(Unit + 0x10A8) > 1u )
    goto LABEL_85;
  v27 = (*(*(DetectorUnit + 0x50) + 0x30i64))(DetectorUnit + 0x50);
  v28 = (*(*(Unit + 0x50) + 0x30i64))(Unit + 0x50);
  if ( (dword_4B1C814 & 0x80000) == 0 && v28 == v27 && (dword_4B1C814 & 0x1000000) == 0 )
    goto LABEL_85;
  _UnitPositionZ = *(Unit + 0x9C8);
  _DetectorUnitZ = *(DetectorUnit + 0x9C8);
  _UnitPositionY = *(Unit + 0x9C4);
  _DetectorUnitX = *(DetectorUnit + 0x9C0);
  _DetectorUnitY = *(DetectorUnit + 0x9C4);
  _UnitPositionX = *(Unit + 0x9C0);
  UnitBBoxMinX = *(Unit + 0x1F0);
  UnitBBoxMinY = *(Unit + 0x1F8);
  UnitBBoxMaxX = *(Unit + 0x1FC);

  // Unit Rotation calculation for bounding box
  UnitBBoxMaxY = *(Unit + 0x204);
  v38 = (UnitBBoxMaxY + UnitBBoxMinY) * *&screenScaleFactor;
  v39 = (*(Unit + 0x200) + *(Unit + 0x1F4)) * *&screenScaleFactor;
  v40 = (UnitBBoxMaxX + UnitBBoxMinX) * *&screenScaleFactor;
  v41 = ((*(Unit + 0x99C) * v40) + _UnitPositionX) + ((*(Unit + 0x9B4) * v38) + (*(Unit + 0x9A8) * v39));
  DetectorPositionX = v41;
  v42 = ((*(Unit + 0x9A0) * v40) + _UnitPositionY) + ((*(Unit + 0x9B8) * v38) + (*(Unit + 0x9AC) * v39));
  DetectorPositionY_ = v42;
  *(&v134 + 1) = _DetectorUnitY;
  v43 = _UnitPositionY - _DetectorUnitY;
  v44 = _DetectorUnitX;
  v45 = fsqrt(
          (((_UnitPositionZ - _DetectorUnitZ) * (_UnitPositionZ - _DetectorUnitZ)) + (v43 * v43))
        + ((_UnitPositionX - _DetectorUnitX) * (_UnitPositionX - _DetectorUnitX)));
  v46 = ((v40 * *(Unit + 0x9A4)) + _UnitPositionZ) + ((v38 * *(Unit + 0x9BC)) + (v39 * *(Unit + 0x9B0)));
  DetectorPositionZ_ = v46;
  v150 = *(DetectorUnit + 0x99C);
  v47 = *(DetectorUnit + 0x250);
  v48 = *(DetectorUnit + 0x9A8);
  v49 = *(DetectorUnit + 0x254);
  LODWORD(v144) = *(DetectorUnit + 0x9B4);
  v50 = *(DetectorUnit + 0x258);
  v146 = *(DetectorUnit + 0x9A4);
  v51 = fmaxf(UnitBBoxMaxX - UnitBBoxMinX, UnitBBoxMaxY - UnitBBoxMinY);
  v89 = *(a1 + 0x1A) == 0;
  v52 = *(DetectorUnit + 0x9B0);
  v53 = *(DetectorUnit + 0x9BC);
  v54 = *(DetectorUnit + 0x238);
  LODWORD(v142) = *(DetectorUnit + 0x240);
  v149 = v49;
  v148 = v50;
  v147 = v47;
  if ( v89 )
  {
    DetectorPositionY_ = 0.0;
    v51 = v51 + (sinf(*(DetectorUnit + 0x26C) * *&screenScaleFactor) * v45);
    v42 = 0.0;
    v60 = 0.0;
    v58 = 0.0;
  }
  else
  {
    v145 = v45;
    v141 = v54;
    *&v134 = v44;
    v55 = *(DetectorUnit + 0x9A0) * v47;
    v56 = *(DetectorUnit + 0x9AC) * v49;
    v57 = *(DetectorUnit + 0x9B8) * v50;
    v140 = *(DetectorUnit + 0x23C);
    if ( !sub_4B2280(DetectorUnit) )
    {
      LODWORD(Unit) = 0;
      return Unit;
    }
    v58 = (v56 + v57) + (v55 + *(&v134 + 1));
    v59 = *(a1 + 0x4C);
    if ( COERCE_FLOAT(FABSF_MASK & LODWORD(v59)) >= *&dword_44A0308 )
      v51 = v51 + (v59 * v145);
    v44 = *&v134;
    v54 = v141;
    v60 = v140;
  }
  v99 = fsqrt(((*&v142 * *&v142) + (*&v54 * *&v54)) + (v60 * v60));
  v100 = 0.0;
  if ( v99 > *&epsilon_unk )
    v100 = Y / v99;
  if ( *(a1 + 0x1B) )
  {
    _game = game + 0x28;
    if ( !game )
      _game = game;
    v134 = __PAIR64__(LODWORD(v53), LODWORD(v48));
    v102 = v54;
    v103 = v44;
    v104 = v60;
    v105 = v52;
    v106 = v100;
    sub_4B2300(_game, &DetectorPositionX);
    v100 = v106;
    v52 = v105;
    v60 = v104;
    v44 = v103;
    v54 = v102;
    LODWORD(v48) = v134;
    v53 = *(&v134 + 1);
  }
  v107 = v46 - (_DetectorUnitZ + ((v53 * v148) + ((v52 * v149) + (v146 * v147))));
  v108 = v42 - v58;
  v109 = v41 - (v44 + ((*&v144 * v148) + ((v48 * v149) + (v150 * v147))));
  v110 = (((v107 * v107) + (v109 * v109)) - (v51 * v51)) + (v108 * v108);
  if ( v110 < 0.0
    || (v111 = (((v107 * *&v142) + (*&v54 * v109)) + (v108 * v60)) * v100, v111 >= 0.0) && ((v111 * v111) - v110) >= 0.0 )
  {
    _Unit = Unit_;
    v113 = *(HudInfo + 0xE5);
    v114 = (qword_4AD11A0 + 0x38 * v113);
    if ( v113 >= qword_4AD11B0 )
      v114 = &unk_4AD1168;
    if ( v113 < 0 )
      v114 = &unk_4AD1168;
    v115 = v114[6];
    v116 = sub_5655B0(game);
    sub_4B2200(_Unit, v116, v115);
    if ( *(a1 + 0x10) )
    {
      v117 = 0i64;
      while ( *(*a1 + v117 + 0xC8) != Unit )
      {
        v117 += 0xE8i64;
        if ( 0xE8i64 * *(a1 + 0x10) == v117 )
          goto LABEL_135;
      }
      response = "scouting: failed, target already scouted by someone";
      goto LABEL_50;
    }
LABEL_135:
    v118 = sub_4B2480(a1);
    *(v118 + 0x10) = _Unit;
    sub_7A6880(&UnitPosition, _Unit);
    v144 = v118 + 0x18;
    memmove((v118 + 0x18), &UnitPosition, 0xB0ui64);
    *(v118 + 0xC8) = Unit;
    *(v118 + 4) = 0;
    v119 = sub_5655B0(game);
    *v118 = v119;
    *(v118 + 8) = *(a1 + 0x20);
    UnitPosition = 0xFFFFFFFF0000002Eui64;
    sub_72CDB0(&UnitPosition);
    v142 = v118;
    v136 = v118 + 0xD0;
    v120 = HIDWORD(UnitPosition);
    if ( qword_4B50090 > HIDWORD(UnitPosition) )
    {
      v121 = _Unit + 0x50;
      do
      {
        v127 = v120;
        v128 = *(qword_4B50080 + v120);
        if ( !v128 )
          break;
        v129 = sub_11FE900(v128);
        v151 = v129;
        if ( v129 )
        {
          v130 = v129;
          v131 = (*(*v121 + 0x30i64))(v121);
          v132 = (*(*(v130 + 0x50) + 0x30i64))(v130 + 0x50);
          if ( (dword_4B1C814 & 0x80000) == 0
            && v132 == v131
            && (dword_4B1C814 & 0x1000000) == 0
            && *(v151 + 0x10A8) <= 1u
            && ((((*(Unit + 0x9C8) - *(v151 + 0x9C8)) * (*(Unit + 0x9C8) - *(v151 + 0x9C8)))
               + ((*(Unit + 0x9C4) - *(v151 + 0x9C4)) * (*(Unit + 0x9C4) - *(v151 + 0x9C4))))
              + ((*(Unit + 0x9C0) - *(v151 + 0x9C0)) * (*(Unit + 0x9C0) - *(v151 + 0x9C0)))) <= *(a1 + 0x20) )
          {
            v133 = sub_4BCEE0(*(Unit + 0x11C8), *(*(qword_4B50080 + v127) + 8i64));
            if ( *(a1 + 0x1C) || hud_marker_unk != 2 || !v133 || !(*(v133 + 0x14) | *(v133 + 0x12)) )
              sub_37A9E0(v136, &v151);
          }
        }
        sub_72CDB0(&UnitPosition);
        v120 = HIDWORD(UnitPosition);
      }
      while ( qword_4B50090 > HIDWORD(UnitPosition) );
    }
    sub_37A9E0(v136, &Unit_);
    if ( *(*(v142 + 0x10) + 0x10B8i64) )
      nullsub_3();
    if ( PlayerInfo )
      sub_6462F0(*(PlayerInfo + 0xA8), Unit, v144);
    v70 = *(a1 + 0x1A);
    DetectorUnit_ = Unit_;
    LOBYTE(Unit) = 1;
    LOBYTE(v72) = 1;
LABEL_71:
    sub_4B20B0(DetectorUnit_, v70, v72);
    return Unit;
  }
  LODWORD(Unit) = 0;
  logmessage_fmt(3u, "scouting: failed, sphere not intersected", 0i64, 0, v134);
  v122 = Unit_;
  v123 = *(HudInfo + 0xE5);
  v124 = (qword_4AD11A0 + 0x38 * v123);
  if ( v123 >= qword_4AD11B0 )
    v124 = &unk_4AD1168;
  if ( v123 < 0 )
    v124 = &unk_4AD1168;
  v125 = v124[7];
  v126 = sub_5655B0(game);
  sub_4B2200(v122, v126, v125);
  if ( !*(a1 + 0x1A) )
  {
    LODWORD(Unit) = 0;
    DetectorUnit_ = v122;
    v70 = 0i64;
    goto LABEL_70;
  }
  return Unit;
}