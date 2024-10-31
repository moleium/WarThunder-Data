__int64 __fastcall radar_predicton(
        __int64 ballistic_computer_1e18,
        __int8 is_target_selected,
        float *adjusted_position,
        float *adjusted_velocity,
        float target_distance,
        float weighted_velocity_sum,
        float a3)
{
  v381.m128_i8[0] = is_target_selected;
  if ( !g_net || *(game + 0xCD) || *(game + 0xCE) )
  {
    v10 = *(game + 0x450);
    if ( v10 && *(v10 + 0x5CA) )
      v9 = (v10 + 0x620);
    else
      v9 = (game + 0x2E0);
  }
  else
  {
    v9 = (g_net + 0x70);
  }
  v11 = *v9;
  v12 = (v11 * *&dword_44A9474);
  v13 = *(ballistic_computer_1e18 + 0x10);
  v14 = v12 - *(ballistic_computer_1e18 + 0x3E0);
  *(ballistic_computer_1e18 + 0x3E0) = v12;
  v15 = *(ballistic_computer_1e18 + 0x3C8);
  v16 = *(ballistic_computer_1e18 + 0x3D0);
  if ( v15 != v16 )
  {
    if ( v14 <= 0 )
    {
      do
      {
        while ( 1 )
        {
          v15 += 0x48i64;
          if ( v15 == *(ballistic_computer_1e18 + 0xA0) )
            break;
          if ( v15 == v16 )
            goto LABEL_21;
        }
        v15 = *(ballistic_computer_1e18 + 0x98);
      }
      while ( v15 != v16 );
    }
    else
    {
      do
      {
        v17 = v14;
        do
        {
          sub_16E6CF0(v15, (*(v15 + 0x10) + 1));
          --v17;
        }
        while ( v17 );
        v15 += 0x48i64;
        if ( v15 == *(ballistic_computer_1e18 + 0xA0) )
          v15 = *(ballistic_computer_1e18 + 0x98);
      }
      while ( v15 != v16 );
    }
  }
LABEL_21:
  if ( v12 - *(ballistic_computer_1e18 + 0x3E4) > *ballistic_computer_1e18 )
  {
    v359 = *(ballistic_computer_1e18 + 0x48);
    v18 = v13[0x267];
    v19 = v13[0x26A];
    v20 = *(ballistic_computer_1e18 + 0x18);
    v21 = *(ballistic_computer_1e18 + 0x1C);
    v22 = v13[0x26D];
    v23 = *(ballistic_computer_1e18 + 0x20);
    *&v403 = (v23 * v22) + ((v21 * v19) + (v20 * v18));
    v24 = *(ballistic_computer_1e18 + 0x24);
    v25 = *(ballistic_computer_1e18 + 0x28);
    v26 = *(ballistic_computer_1e18 + 0x2C);
    v405 = (v26 * v22) + ((v25 * v19) + (v24 * v18));
    v27 = *(ballistic_computer_1e18 + 0x30);
    v28 = *(ballistic_computer_1e18 + 0x34);
    v29 = *(ballistic_computer_1e18 + 0x38);
    v408 = (v29 * v22) + ((v28 * v19) + (v27 * v18));
    v30 = *(ballistic_computer_1e18 + 0x3C);
    v362 = *(ballistic_computer_1e18 + 0x40);
    v31 = *(ballistic_computer_1e18 + 0x44);
    v411 = ((v22 * v31) + (v19 * v362)) + ((v18 * v30) + v13[0x270]);
    v32 = v13[0x268];
    v33 = v13[0x26B];
    v34 = v13[0x26E];
    *(&v403 + 1) = (v34 * v23) + ((v33 * v21) + (v32 * v20));
    v406 = (v34 * v26) + ((v33 * v25) + (v32 * v24));
    v409 = (v34 * v29) + ((v33 * v28) + (v32 * v27));
    v412 = ((v34 * v31) + ((v33 * v362) + (v32 * v30))) + v13[0x271];
    v35 = v13[0x269];
    v36 = v13[0x26C];
    v37 = v13[0x26F];
    v404 = (v23 * v37) + ((v21 * v36) + (v20 * v35));
    v407 = (v26 * v37) + ((v25 * v36) + (v24 * v35));
    v410 = (v29 * v37) + ((v28 * v36) + (v27 * v35));
    v413 = ((v37 * v31) + ((v36 * v362) + (v35 * v30))) + v13[0x272];
    v38 = *(ballistic_computer_1e18 + 0x10);
    v39 = *(v38 + 0x10B0);
    if ( v39 <= 0xF )
    {
      v40 = 0x897E;
      if ( _bittest(&v40, v39) )
      {
        v41 = *(v38 + 0x1EA0);
        v42 = (v41 + 0x54);
        v43 = v41 == 0;
        v44 = &xmmword_4514A60;
        if ( !v43 )
          v44 = v42;
        if ( *(v38 + 0x58) == 1 )
          v44 = (v38 + 0x22AC);
        v379 = *(v44 + 2);
        v378 = *v44;
LABEL_29:
        sub_2408D0(v38, &v391, &v403, &v378, v359);
        v45 = *(ballistic_computer_1e18 + 0x3D0) + 0x48i64;
        *(ballistic_computer_1e18 + 0x3D0) = v45;
        v46 = *(ballistic_computer_1e18 + 0xA0);
        if ( v45 == v46 )
        {
          v45 = *(ballistic_computer_1e18 + 0x98);
          *(ballistic_computer_1e18 + 0x3D0) = v45;
          if ( v45 != *(ballistic_computer_1e18 + 0x3C8) )
            goto LABEL_31;
        }
        else if ( v45 != *(ballistic_computer_1e18 + 0x3C8) )
        {
LABEL_31:
          ++*(ballistic_computer_1e18 + 0x3D8);
LABEL_35:
          if ( v45 == *(ballistic_computer_1e18 + 0x98) )
            v45 = v46;
          *(v45 - 0x38) = v12;
          v47 = *(ballistic_computer_1e18 + 0x4C);
          if ( *(ballistic_computer_1e18 + 0x4D) )
          {
            v48 = fminf(*(&v392 + 1), *&dword_4A7920C);
            v49 = (((*&gamephys::density * *&dword_44A02D4) * *&dword_4A7920C)
                 * ((((((((*&dword_44A0190 * v48) + *&dword_44A0194) * v48) + *&dword_44A0198) * v48) + *&dword_44A019C)
                   * v48)
                  + Y))
                / fmaxf(*(&v392 + 1), *&dword_4A7920C);
          }
          else
          {
            v49 = *&dword_4480A00;
          }
          *(v45 - 0x38) = 0;
          *(v45 - 0x2C) = v393;
          *(v45 - 0x34) = v392;
          *(v45 - 0x28) = v398;
          *(v45 - 0x20) = v399;
          *(v45 - 0x3C) = *&gamephys::gravity * flt_44A9E68[v47 == 0];
          *(v45 - 0x40) = 0;
          *(v45 - 0x48) = 0i64;
          v50 = *(ballistic_computer_1e18 + 0x54);
          if ( *&epsilon_unk < v50 || (v51 = 0.0, v50 < *&dword_449F1AC) )
            v51 = ((*(ballistic_computer_1e18 + 0x58) * *(ballistic_computer_1e18 + 0x58)) * *&dword_44A9E70) / v50;
          *(v45 - 0x40) = (*(ballistic_computer_1e18 + 0x5C) * v49) * v51;
          *(ballistic_computer_1e18 + 0x3E4) = v12;
          goto LABEL_44;
        }
        *(ballistic_computer_1e18 + 0x3C8) = v45 + 0x48;
        if ( v45 + 0x48 == v46 )
          *(ballistic_computer_1e18 + 0x3C8) = *(ballistic_computer_1e18 + 0x98);
        goto LABEL_35;
      }
      if ( !*(v38 + 0x10B0) && (*(v38 + 0x1058) & 0x2000010) == 0 )
      {
        _air_movement = *(v38 + 0x9D0);
        v125 = _air_movement[0x132];
        *&air_velocity_ = _air_movement[0x131];
        *&v127 = _air_movement[0x130];
        v378 = __PAIR64__(air_velocity_, v127);
        v379 = v125;
        goto LABEL_29;
      }
    }
    v378 = 0i64;
    v379 = 0.0;
    goto LABEL_29;
  }
LABEL_44:
  v52 = v13[0x267];
  v53 = v13[0x26A];
  v54 = *(ballistic_computer_1e18 + 0x18);
  v55 = *(ballistic_computer_1e18 + 0x1C);
  v56 = v13[0x26D];
  v57 = *(ballistic_computer_1e18 + 0x20);
  v391 = (v57 * v56) + ((v55 * v53) + (v54 * v52));
  v58 = *(ballistic_computer_1e18 + 0x24);
  v59 = *(ballistic_computer_1e18 + 0x28);
  v60 = *(ballistic_computer_1e18 + 0x2C);
  v393 = (v60 * v56) + ((v59 * v53) + (v58 * v52));
  v61 = *(ballistic_computer_1e18 + 0x30);
  v62 = *(ballistic_computer_1e18 + 0x34);
  v63 = *(ballistic_computer_1e18 + 0x38);
  v396 = (v63 * v56) + ((v62 * v53) + (v61 * v52));
  v64 = *(ballistic_computer_1e18 + 0x3C);
  v363 = *(ballistic_computer_1e18 + 0x40);
  v65 = *(ballistic_computer_1e18 + 0x44);
  *(&v398 + 1) = ((v56 * v65) + (v53 * v363)) + ((v52 * v64) + v13[0x270]);
  v66 = v13[0x268];
  v67 = v13[0x26B];
  v68 = v13[0x26E];
  *&v392 = (v68 * v57) + ((v67 * v55) + (v66 * v54));
  v394 = (v68 * v60) + ((v67 * v59) + (v66 * v58));
  v397 = (v68 * v63) + ((v67 * v62) + (v66 * v61));
  v399 = ((v68 * v65) + ((v67 * v363) + (v66 * v64))) + v13[0x271];
  v69 = v13[0x269];
  v70 = v13[0x26C];
  v71 = v13[0x26F];
  *(&v392 + 1) = (v57 * v71) + ((v55 * v70) + (v54 * v69));
  v395 = (v60 * v71) + ((v59 * v70) + (v58 * v69));
  *&v398 = (v63 * v71) + ((v62 * v70) + (v61 * v69));
  v400 = ((v71 * v65) + ((v70 * v363) + (v69 * v64))) + v13[0x272];
  LocalUnit = *(ballistic_computer_1e18 + 0x10);
  v73 = 0.0;
  v74 = 1;
  if ( LocalUnit && !*(LocalUnit + 0x10B0) )
  {
    air_movement = *(LocalUnit + 0x9D0);
    if ( *(air_movement + 0x57DC) || (*(air_movement + 0x5C2B) & 1) != 0 )
      v79 = (air_movement + 0x9B0);
    else
      v79 = (air_movement + 0x5D60);
    v77 = v79[2];
    v76 = v79[1];
    v73 = *v79;
    v74 = 0;
    Unit_ = *(ballistic_computer_1e18 + 0x10);
  }
  else
  {
    Unit_ = 0i64;
    v76 = 0.0;
    v77 = 0.0;
  }
  v80 = weighted_velocity_sum;
  v81 = target_distance;
  if ( *(HudInfo + 0x2E1) || (*(LocalUnit + 0x10B0) - 3) <= 2u )
  {
    v82 = *(ballistic_computer_1e18 + 0x48);
    UnitType = *(LocalUnit + 0x10B0);
    v84 = 0.0;
    if ( !*(*(game + 0x498) + 0x2770i64) )
    {
      v91 = 0.0;
      v92 = 0.0;
      air_velocity = 0.0;
      if ( UnitType <= 0xFu )
      {
        v94 = 0x897E;
        if ( _bittest(&v94, UnitType) )
        {
          v95 = *(LocalUnit + 0x1EA0);
          v96 = (v95 + 0x54);
          v43 = v95 == 0;
          v97 = &xmmword_4514A60;
          if ( !v43 )
            v97 = v96;
          if ( *(LocalUnit + 0x58) == 1 )
            v97 = (LocalUnit + 0x22AC);
          v92 = *v97;
          v91 = v97[1];
          air_velocity = v97[2];
        }
        else
        {
          v91 = 0.0;
          v92 = 0.0;
          air_velocity = 0.0;
          if ( !*(LocalUnit + 0x10B0) )
          {
            v91 = 0.0;
            v92 = 0.0;
            air_velocity = 0.0;
            if ( (*(LocalUnit + 0x1058) & 0x2000010) == 0 )
            {
              air_movement_ = *(LocalUnit + 0x9D0);
              air_velocity = air_movement_[0x132];
              v91 = air_movement_[0x131];
              v92 = air_movement_[0x130];
            }
          }
        }
      }
      v98 = ((v92 * v391) + v82) + ((air_velocity * *(&v392 + 1)) + (v91 * *&v392));
      v89 = 0.0;
      _air_velocity_ = 0.0;
      v82 = v98;
      goto LABEL_70;
    }
    if ( UnitType > 0xF )
      goto LABEL_88;
    v85 = 0x897E;
    if ( _bittest(&v85, UnitType) )
    {
      v86 = *(LocalUnit + 0x1EA0);
      v87 = (v86 + 0x54);
      v43 = v86 == 0;
      v88 = &xmmword_4514A60;
      if ( !v43 )
        v88 = v87;
      if ( *(LocalUnit + 0x58) == 1 )
        v88 = (LocalUnit + 0x22AC);
      v84 = *v88;
      v89 = *(v88 + 1);
      _air_velocity_ = *(v88 + 2);
      goto LABEL_70;
    }
    if ( *(LocalUnit + 0x10B0) || (*(LocalUnit + 0x1058) & 0x2000010) != 0 )
    {
LABEL_88:
      v89 = 0.0;
      _air_velocity_ = 0.0;
    }
    else
    {
      air_movement__ = *(LocalUnit + 0x9D0);
      _air_velocity_ = air_movement__[0x132];
      v89 = air_movement__[0x131];
      v84 = air_movement__[0x130];
    }
LABEL_70:
    v99 = *(ballistic_computer_1e18 + 0x10);
    v100 = *(v99 + 0x10B0);
    if ( v100 )
    {
      v403 = __PAIR64__(LODWORD(v89), LODWORD(v84));
      v404 = _air_velocity_;
      v378 = 0i64;
    }
    else
    {
      v366 = _air_velocity_;
      v382.m128_f32[0] = v82;
      v383.m128_f32[0] = v76;
      v101 = Y
           / ((((v397 * v393) * *(&v392 + 1)) + (((v396 * v395) * *&v392) + ((*&v398 * v394) * v391)))
            - ((*(&v392 + 1) * (v394 * v396)) + ((v393 * (*&v392 * *&v398)) + ((v395 * v397) * v391))));
      v80 = weighted_velocity_sum;
      v81 = target_distance;
      *&v378 = (((((v397 * v393) - (v394 * v396)) * v366) + (((v396 * v395) - (v393 * *&v398)) * v89))
              + (((*&v398 * v394) - (v395 * v397)) * v84))
             * v101;
      *(&v378 + 1) = (((((v396 * *&v392) - (v397 * v391)) * v366) + (((*&v398 * v391) - (*(&v392 + 1) * v396)) * v89))
                    + (((*(&v392 + 1) * v397) - (*&v392 * *&v398)) * v84))
                   * v101;
      v403 = 0i64;
      v404 = 0.0;
    }
    v379 = 0.0;
    if ( v381.m128_i8[0] )
    {
      v102 = adjusted_position[2];
      v103 = *adjusted_position;
      v104 = adjusted_position[1];
      v105 = (v102 * v81) + *(v99 + 0x9C8);
      v106 = (v104 * v81) + *(v99 + 0x9C4);
      *&v376 = (*adjusted_position * v81) + *(v99 + 0x9C0);
      v107 = (v102 * v80) + (adjusted_velocity[2] * v81);
      v108 = (v104 * v80) + (adjusted_velocity[1] * v81);
      v109 = (v103 * v80) + (*adjusted_velocity * v81);
    }
    else
    {
      v110 = *(ballistic_computer_1e18 + 8);
      *&v376 = (v391 * v110) + *(&v398 + 1);
      v111 = *(ballistic_computer_1e18 + 0x3E8);
      v112 = *(ballistic_computer_1e18 + 0x3EC);
      v113 = *(ballistic_computer_1e18 + 0x3F0);
      v114 = (v13[0x26D] * v113) + ((v13[0x26A] * v112) + (v13[0x267] * v111));
      v115 = (v13[0x26E] * v113) + ((v13[0x26B] * v112) + (v13[0x268] * v111));
      v116 = (v113 * v13[0x26F]) + ((v112 * v13[0x26C]) + (v111 * v13[0x269]));
      v106 = (*&v392 * v110) + v399;
      v105 = (*(&v392 + 1) * v110) + v400;
      v107 = ((v115 * v391) - (v114 * *&v392)) * v110;
      v108 = ((v114 * *(&v392 + 1)) - (v391 * v116)) * v110;
      v109 = ((v116 * *&v392) - (v115 * *(&v392 + 1))) * v110;
    }
    *(&v376 + 1) = v106;
    v377 = v105;
    v384 = v109;
    v385 = v108;
    v386 = v107;
    v117 = 1;
    if ( byte_4B1C538 || *(*(game + 0x498) + 0x2998i64) || *(HudInfo + 0x57) )
    {
      v118 = 1;
    }
    else if ( !v100 && (*(HudInfo + 0x35) || *(HudInfo + 0x38)) )
    {
      v118 = 0;
    }
    else
    {
      v118 = (*(*(v99 + 0x50) + 0x10i64))(v99 + 0x50) ^ 1;
      v99 = *(ballistic_computer_1e18 + 0x10);
    }
    v119 = v118 ^ 1;
    if ( !byte_4B1C539 && !*(*(game + 0x498) + 0x2999i64) && !*(HudInfo + 0x58) )
    {
      v120 = *(v99 + 0x10B0);
      if ( *(v99 + 0x10B0) )
        v121 = 0;
      else
        v121 = *(HudInfo + 0x35) != 0;
      v128 = 1;
      if ( !*(HudInfo + 0x38) )
      {
        if ( v120 > 0xF || (v129 = 0x897E, !_bittest(&v129, v120)) )
          v99 = 0i64;
        v128 = v99 != 0;
      }
      v117 = !v128 && !v121;
    }
    LocalUnit = sub_1642DB0(
                  ballistic_computer_1e18 + 0x50,
                  &v398 + 4,
                  &v403,
                  &v378,
                  &v376,
                  &v384,
                  &xmmword_4514A60,
                  LODWORD(v82),
                  0x42C80000,
                  v117 ^ 1u,
                  v119,
                  0x3CAAAAAB,
                  0x41A00000,
                  5,
                  v419,
                  v431,
                  &v418);
    *(ballistic_computer_1e18 + 0x404) = LocalUnit;
    if ( LocalUnit )
    {
      v130 = (v386 * v418) + v377;
      v131 = (v385 * v418) + *(&v376 + 1);
      v132 = (v418 * v384) + *&v376;
      LocalUnit = *(ballistic_computer_1e18 + 0x10);
      if ( *(LocalUnit + 0x10B0) != 5 )
      {
        v133 = fsqrt(
                 (((v130 - v400) * (v130 - v400)) + ((v131 - v399) * (v131 - v399)))
               + ((v132 - *(&v398 + 1)) * (v132 - *(&v398 + 1))));
        v130 = (*&v419[2] * v133) + v400;
        v131 = (*&v419[1] * v133) + v399;
        v132 = (v133 * *v419) + *(&v398 + 1);
      }
      *(ballistic_computer_1e18 + 0x408) = v132;
      *(ballistic_computer_1e18 + 0x40C) = v131;
      *(ballistic_computer_1e18 + 0x410) = v130;
    }
    goto LABEL_109;
  }
  *(ballistic_computer_1e18 + 0x404) = 0;
LABEL_109:
  if ( v74 )
    goto LABEL_224;
  LocalUnit = *(Unit_ + 0x4160);
  if ( !*(LocalUnit + 0x3ED) )
    goto LABEL_224;
  v134 = *(ballistic_computer_1e18 + 0x3F0);
  v135 = *(ballistic_computer_1e18 + 0x3EC);
  v136 = a3 * *(ballistic_computer_1e18 + 4);
  *(ballistic_computer_1e18 + 0x3E8) = (v136 * (v73 - *(ballistic_computer_1e18 + 0x3E8)))
                                     + *(ballistic_computer_1e18 + 0x3E8);
  *(ballistic_computer_1e18 + 0x3EC) = ((v76 - v135) * v136) + v135;
  *(ballistic_computer_1e18 + 0x3F0) = ((v77 - v134) * v136) + v134;
  v137 = fminf(*(ballistic_computer_1e18 + 0x60), *(ballistic_computer_1e18 + 0x90));
  v138 = *(game + 0x498);
  v43 = *(v138 + 0x2771) == 0;
  v139 = *(v138 + 0x2770);
  if ( !v43 )
  {
    v140 = *(ballistic_computer_1e18 + 0x48);
    if ( !v139 )
    {
      v376 = 0i64;
      v377 = 0.0;
      _Unit_ = *(ballistic_computer_1e18 + 0x10);
      v142 = *(_Unit_ + 0x10B0);
      _air_velocity__ = 0.0;
      if ( v142 <= 0xF )
      {
        v144 = 0x897E;
        if ( _bittest(&v144, v142) )
        {
          v145 = *(_Unit_ + 0x1EA0);
          v146 = (v145 + 0x54);
          v43 = v145 == 0;
          v147 = &xmmword_4514A60;
          if ( !v43 )
            v147 = v146;
          if ( *(_Unit_ + 0x58) == 1 )
            v147 = (_Unit_ + 0x22AC);
          v148 = *v147;
          v149 = v147[1];
          _air_velocity__ = v147[2];
          goto LABEL_120;
        }
        if ( !*(_Unit_ + 0x10B0) )
        {
          v149 = 0.0;
          v148 = 0.0;
          if ( (*(_Unit_ + 0x1058) & 0x2000010) == 0 )
          {
            __air_movement__ = *(_Unit_ + 0x9D0);
            _air_velocity__ = __air_movement__[0x132];
            v149 = __air_movement__[0x131];
            v148 = __air_movement__[0x130];
          }
          goto LABEL_120;
        }
      }
      v149 = 0.0;
      v148 = 0.0;
LABEL_120:
      v140 = ((v148 * v391) + v140) + ((_air_velocity__ * *(&v392 + 1)) + (v149 * *&v392));
      goto LABEL_130;
    }
LABEL_123:
    Unit = *(ballistic_computer_1e18 + 0x10);
    UnitType_ = *(Unit + 0x10B0);
    if ( UnitType_ <= 0xF )
    {
      v152 = 0x897E;
      if ( _bittest(&v152, UnitType_) )
      {
        v153 = *(Unit + 0x1EA0);
        v154 = (v153 + 0x54);
        v43 = v153 == 0;
        v155 = &xmmword_4514A60;
        if ( !v43 )
          v155 = v154;
        if ( *(Unit + 0x58) == 1 )
          v155 = (Unit + 0x22AC);
        v377 = *(v155 + 2);
        v376 = *v155;
LABEL_130:
        if ( v381.m128_i8[0] )
          v156 = fminf(v81, v137);
        else
          v156 = *(ballistic_computer_1e18 + 8);
        game_params = *(game + 0x498);
        if ( v156 > *&epsilon_unk || (v158 = 0.0, v156 < *&dword_449F1AC) )
          v158 = (*(ballistic_computer_1e18 + 0x48) * *(game_params + 0x276C)) / v156;
        v159 = fminf(v158, Y);
        v160 = *(ballistic_computer_1e18 + 0x3F0) * v159;
        v161 = *(ballistic_computer_1e18 + 0x3EC) * v159;
        v384 = v159 * *(ballistic_computer_1e18 + 0x3E8);
        v385 = v161;
        v386 = v160;
        if ( byte_4B1C538 || *(game_params + 0x2998) || *(HudInfo + 0x57) )
          goto LABEL_139;
        v349 = *(ballistic_computer_1e18 + 0x10);
        if ( *(v349 + 0x10B0) || !*(HudInfo + 0x35) && !*(HudInfo + 0x38) )
        {
          if ( !(*(*(v349 + 0x50) + 0x10i64))(v349 + 0x50) )
          {
LABEL_139:
            v162 = 0;
LABEL_140:
            v416 = v156;
            v415 = v140;
            v164 = !byte_4B1C539
                && (v163 = *(game + 0x498), !*(v163 + 0x2999))
                && !*(HudInfo + 0x58)
                && ((unit_p = *(*(ballistic_computer_1e18 + 0x10) + 0x10B0i64),
                     !*(*(ballistic_computer_1e18 + 0x10) + 0x10B0i64))
                  ? (v351 = *(HudInfo + 0x35) != 0)
                  : (v351 = 0),
                    *(HudInfo + 0x38) || unit_p <= 0xF && (v358 = 0x897E, _bittest(&v358, unit_p)) || v351)
                && *(v163 + 0x2772) != 0;
            v165 = *(ballistic_computer_1e18 + 0x18);
            v364 = *(ballistic_computer_1e18 + 0x20);
            v166 = *(ballistic_computer_1e18 + 0x28);
            v167 = *(ballistic_computer_1e18 + 0x30);
            v168 = *(ballistic_computer_1e18 + 0x34);
            v169 = *(ballistic_computer_1e18 + 0x38);
            v170 = *(ballistic_computer_1e18 + 0x24);
            v360 = *(ballistic_computer_1e18 + 0x2C);
            v374 = *(ballistic_computer_1e18 + 0x24);
            v170.m128_f32[0] = ((((v170.m128_f32[0] * v364) * v168.m128_f32[0])
                               + ((v360 * *(ballistic_computer_1e18 + 0x1C)) * v167.m128_f32[0]))
                              + ((v166 * v165) * v169))
                             - (((v374 * *(ballistic_computer_1e18 + 0x1C)) * v169)
                              + (((v360 * v165) * v168.m128_f32[0]) + ((v166 * v364) * v167.m128_f32[0])));
            v171.m128_i32[0] = 0;
            v172 = v170;
            if ( v170.m128_f32[0] < 0.0 )
            {
              LODWORD(v169) ^= SIGN_BIT_MASK;
              v168 = _mm_xor_ps(v168, SIGN_BIT_MASK);
            }
            v382.m128_i32[0] = *(ballistic_computer_1e18 + 0x1C);
            v173 = (Y + v165) - (v169 + v166);
            v174 = 0.0;
            if ( v173 > 0.0 )
              v174 = fsqrt(v173) * *&screenScaleFactor;
            v175 = _mm_xor_ps(v167, SIGN_BIT_MASK);
            v176 = _mm_cmplt_ss(v172, v171);
            *&v403 = v174;
            HIDWORD(v403) = LODWORD(v174) ^ SIGN_BIT_MASK;
            v177 = (Y + v166) - (v165 + v169);
            v178 = 0i64;
            if ( v177 > 0.0 )
            {
              v178 = 0i64;
              v178.m128_f32[0] = fsqrt(v177) * *&screenScaleFactor;
            }
            v179 = _mm_and_ps(v175, v176);
            v381 = _mm_andnot_ps(v176, v167);
            v389 = _mm_xor_ps(SIGN_BIT_MASK, v178);
            v180 = (Y - (v165 + v166)) + v169;
            v181 = 0i64;
            if ( v180 > 0.0 )
            {
              v181 = 0i64;
              v181.m128_f32[0] = fsqrt(v180) * *&screenScaleFactor;
            }
            v381 = _mm_or_ps(v381, v179);
            v390 = v181;
            v388 = _mm_xor_ps(SIGN_BIT_MASK, v181);
            v182 = (v169 + v166) + (Y + v165);
            v183 = 0.0;
            v184 = 0i64;
            if ( v182 > 0.0 )
            {
              v184 = 0i64;
              v184.m128_f32[0] = fsqrt(v182) * *&screenScaleFactor;
            }
            v185 = _mm_xor_ps(SIGN_BIT_MASK, v184);
            v186 = v184;
            v187 = *&v390;
            *&v186 = v184.m128_f32[0] * *&v390;
            v414 = v186;
            v188 = v390;
            *&v188 = *&v390 * v185.m128_f32[0];
            v428 = v188;
            v189 = v184;
            *&v189 = v184.m128_f32[0] * v388.m128_f32[0];
            v427 = v189;
            v190 = v390;
            *&v190 = *&v390 * v178.m128_f32[0];
            v426 = v190;
            v191 = v184;
            *&v191 = v184.m128_f32[0] * v178.m128_f32[0];
            v425 = v191;
            v387 = v185;
            v185.m128_f32[0] = v185.m128_f32[0] * v178.m128_f32[0];
            v424 = v185;
            v192 = v178;
            *&v192 = v178.m128_f32[0] * v388.m128_f32[0];
            v423 = v192;
            v193 = v390;
            *&v193 = *&v390 * v389.m128_f32[0];
            v422 = v193;
            v194 = v184;
            *&v194 = v184.m128_f32[0] * v389.m128_f32[0];
            v421 = v194;
            v195 = *&dword_44A0744;
            v196 = 1;
            v197 = 0i64;
            v198 = 0.0;
            v199 = 0.0;
            v200 = 0.0;
            v201 = v168.m128_f32[0];
            v383 = v168;
            v401 = v178;
            v402 = v184;
            do
            {
              v367 = v199;
              v369 = v198;
              v371 = v183;
              v202 = *(&v403 + v197);
              v203 = v202 * v187;
              v204 = v202 * v184.m128_f32[0];
              v205 = v202 * v387.m128_f32[0];
              v206 = v202 * v178.m128_f32[0];
              v207 = ((((v206 + *&v414) + (v206 + *&v414)) - v382.m128_f32[0])
                    * (((v206 + *&v414) + (v206 + *&v414)) - v382.m128_f32[0]))
                   + ((((v206 - *&v414) + (v206 - *&v414)) - v374) * (((v206 - *&v414) + (v206 - *&v414)) - v374));
              v208 = ((((v203 - *&v425) + (v203 - *&v425)) - v364) * (((v203 - *&v425) + (v203 - *&v425)) - v364))
                   + ((((v203 + *&v425) + (v203 + *&v425)) - v381.m128_f32[0])
                    * (((v203 + *&v425) + (v203 + *&v425)) - v381.m128_f32[0]));
              v209 = ((((v204 + *&v426) + (v204 + *&v426)) - v360) * (((v204 + *&v426) + (v204 + *&v426)) - v360))
                   + ((((*&v426 - v204) + (*&v426 - v204)) - v201) * (((*&v426 - v204) + (*&v426 - v204)) - v201));
              if ( ((v208 + v209) + v207) < v195 )
              {
                v371 = v402.m128_f32[0];
                v369 = *&v390;
                v367 = v178.m128_f32[0];
                v200 = *(&v403 + v197);
                v195 = ((((v203 - *&v425) + (v203 - *&v425)) - v364) * (((v203 - *&v425) + (v203 - *&v425)) - v364))
                     + ((((v203 + *&v425) + (v203 + *&v425)) - v381.m128_f32[0])
                      * (((v203 + *&v425) + (v203 + *&v425)) - v381.m128_f32[0]));
              }
              v210 = v426;
              *&v210 = (((*&v426 - v205) + (*&v426 - v205)) - v383.m128_f32[0])
                     * (((*&v426 - v205) + (*&v426 - v205)) - v383.m128_f32[0]);
              *&v430 = (((v205 + *&v426) + (v205 + *&v426)) - v360) * (((v205 + *&v426) + (v205 + *&v426)) - v360);
              v420 = v210;
              v211 = v202 * v388.m128_f32[0];
              if ( (((*&v430 + *&v210)
                   + (((((v203 + *&v424) + (v203 + *&v424)) - v381.m128_f32[0])
                     * (((v203 + *&v424) + (v203 + *&v424)) - v381.m128_f32[0]))
                    + ((((v206 - *&v428) + (v206 - *&v428)) - v374) * (((v206 - *&v428) + (v206 - *&v428)) - v374))))
                  + (((((v203 - *&v424) + (v203 - *&v424)) - v364) * (((v203 - *&v424) + (v203 - *&v424)) - v364))
                   + ((((v206 + *&v428) + (v206 + *&v428)) - v382.m128_f32[0])
                    * (((v206 + *&v428) + (v206 + *&v428)) - v382.m128_f32[0])))) < v195 )
              {
                v371 = v387.m128_f32[0];
                v369 = *&v390;
                v367 = v401.m128_f32[0];
                v200 = v202;
                v195 = v202 * v387.m128_f32[0];
              }
              v212 = ((((v211 - *&v425) + (v211 - *&v425)) - v364) * (((v211 - *&v425) + (v211 - *&v425)) - v364))
                   + ((((v211 + *&v425) + (v211 + *&v425)) - v381.m128_f32[0])
                    * (((v211 + *&v425) + (v211 + *&v425)) - v381.m128_f32[0]));
              v213 = ((((((v206 + *&v427) + (v206 + *&v427)) - v382.m128_f32[0])
                      * (((v206 + *&v427) + (v206 + *&v427)) - v382.m128_f32[0]))
                     + ((((v206 - *&v427) + (v206 - *&v427)) - v374) * (((v206 - *&v427) + (v206 - *&v427)) - v374)))
                    + v212)
                   + (((((v204 + *&v423) + (v204 + *&v423)) - v360) * (((v204 + *&v423) + (v204 + *&v423)) - v360))
                    + ((((*&v423 - v204) + (*&v423 - v204)) - v383.m128_f32[0])
                     * (((*&v423 - v204) + (*&v423 - v204)) - v383.m128_f32[0])));
              if ( v213 < v195 )
              {
                v371 = v402.m128_f32[0];
                v369 = v388.m128_f32[0];
                v367 = v401.m128_f32[0];
                v200 = v202;
                v195 = v213;
              }
              if ( (((((((v205 + *&v423) + (v205 + *&v423)) - v360) * (((v205 + *&v423) + (v205 + *&v423)) - v360))
                    + ((((v211 - *&v424) + (v211 - *&v424)) - v364) * (((v211 - *&v424) + (v211 - *&v424)) - v364)))
                   + (((((*&v423 - v205) + (*&v423 - v205)) - v383.m128_f32[0])
                     * (((*&v423 - v205) + (*&v423 - v205)) - v383.m128_f32[0]))
                    + ((((v211 + *&v424) + (v211 + *&v424)) - v381.m128_f32[0])
                     * (((v211 + *&v424) + (v211 + *&v424)) - v381.m128_f32[0]))))
                  + v207) < v195 )
              {
                v371 = v387.m128_f32[0];
                v369 = v388.m128_f32[0];
                v367 = v401.m128_f32[0];
                v200 = v202;
                v195 = v202 * v387.m128_f32[0];
              }
              *&v429 = v195;
              v214 = v202 * v389.m128_f32[0];
              v215 = (((v202 * v389.m128_f32[0]) - *&v414) + ((v202 * v389.m128_f32[0]) - *&v414)) - v374;
              v216 = ((((v214 + *&v414) + (v214 + *&v414)) - v382.m128_f32[0])
                    * (((v214 + *&v414) + (v214 + *&v414)) - v382.m128_f32[0]))
                   + (v215 * v215);
              v217 = ((((((v204 + *&v422) + (v204 + *&v422)) - v360) * (((v204 + *&v422) + (v204 + *&v422)) - v360))
                     + ((((v203 - *&v421) + (v203 - *&v421)) - v364) * (((v203 - *&v421) + (v203 - *&v421)) - v364)))
                    + (((((*&v422 - v204) + (*&v422 - v204)) - v383.m128_f32[0])
                      * (((*&v422 - v204) + (*&v422 - v204)) - v383.m128_f32[0]))
                     + ((((v203 + *&v421) + (v203 + *&v421)) - v381.m128_f32[0])
                      * (((v203 + *&v421) + (v203 + *&v421)) - v381.m128_f32[0]))))
                   + v216;
              v183 = v371;
              if ( v217 < v195 )
              {
                v183 = v402.m128_f32[0];
                v369 = *&v390;
                v367 = v389.m128_f32[0];
                v200 = v202;
                v195 = v217;
              }
              v218 = (v208
                    + ((((v214 - *&v428) + (v214 - *&v428)) - v374) * (((v214 - *&v428) + (v214 - *&v428)) - v374)))
                   + (((((v205 + *&v422) + (v205 + *&v422)) - v360) * (((v205 + *&v422) + (v205 + *&v422)) - v360))
                    + (((((*&v422 - v205) + (*&v422 - v205)) - v383.m128_f32[0])
                      * (((*&v422 - v205) + (*&v422 - v205)) - v383.m128_f32[0]))
                     + ((((v214 + *&v428) + (v214 + *&v428)) - v382.m128_f32[0])
                      * (((v214 + *&v428) + (v214 + *&v428)) - v382.m128_f32[0]))));
              v198 = v369;
              v199 = v367;
              if ( v218 < v195 )
              {
                v183 = v387.m128_f32[0];
                v198 = *&v390;
                v199 = v389.m128_f32[0];
                v200 = v202;
                v195 = v218;
              }
              v219 = (v209
                    + (((((v211 + *&v421) + (v211 + *&v421)) - v381.m128_f32[0])
                      * (((v211 + *&v421) + (v211 + *&v421)) - v381.m128_f32[0]))
                     + ((((v214 - *&v427) + (v214 - *&v427)) - v374) * (((v214 - *&v427) + (v214 - *&v427)) - v374))))
                   + (((((v211 - *&v421) + (v211 - *&v421)) - v364) * (((v211 - *&v421) + (v211 - *&v421)) - v364))
                    + ((((v214 + *&v427) + (v214 + *&v427)) - v382.m128_f32[0])
                     * (((v214 + *&v427) + (v214 + *&v427)) - v382.m128_f32[0])));
              v184.m128_i32[0] = v402.m128_i32[0];
              if ( v219 < v195 )
              {
                v183 = v402.m128_f32[0];
                v198 = v388.m128_f32[0];
                v199 = v389.m128_f32[0];
                v200 = v202;
                v195 = v219;
              }
              v220 = ((v212 + *&v420) + *&v430) + v216;
              if ( v220 < v195 )
              {
                v183 = v387.m128_f32[0];
                v198 = v388.m128_f32[0];
                v199 = v389.m128_f32[0];
                v200 = v202;
                v195 = v220;
              }
              v197 = 1i64;
              v43 = (v196 & 1) == 0;
              v196 = 0;
              v201 = v383.m128_f32[0];
              v187 = *&v390;
              v178.m128_i32[0] = v401.m128_i32[0];
            }
            while ( !v43 );
            v221 = fsqrt(((v183 * v183) + (v198 * v198)) + ((v199 * v199) + (v200 * v200)));
            v222 = v200;
            v223.m128_i32[0] = 0;
            v224 = 0.0;
            v225 = 0.0;
            v226 = 0.0;
            v227 = 0.0;
            if ( v221 != 0.0 )
            {
              v224 = v222 * (Y / v221);
              v225 = v199 * (Y / v221);
              v226 = v198 * (Y / v221);
              v227 = v183 * (Y / v221);
            }
            v403 = __PAIR64__(LODWORD(v225), LODWORD(v224));
            v404 = v226;
            v405 = v227;
            v228 = v13[0x267];
            v229 = v13[0x268];
            v230 = v13[0x269];
            v231 = v13[0x26A];
            v232 = v13[0x26B];
            v233 = *(v13 + 0x26D);
            v234 = *(v13 + 0x26E);
            v235 = v13[0x26F];
            v236 = LODWORD(v231);
            v236.m128_f32[0] = (((v231 * v230) * v234.m128_f32[0]) + ((v13[0x26C] * v229) * v233.m128_f32[0]))
                             + ((v232 * v228) * v235);
            v375 = v230;
            v383.m128_f32[0] = v13[0x26C];
            v361 = v231;
            v365 = v229;
            v236.m128_f32[0] = v236.m128_f32[0]
                             - (((v231 * v229) * v235)
                              + (((v383.m128_f32[0] * v228) * v234.m128_f32[0]) + ((v232 * v230) * v233.m128_f32[0])));
            v237 = v236;
            if ( v236.m128_f32[0] < 0.0 )
            {
              LODWORD(v235) ^= SIGN_BIT_MASK;
              v234 = _mm_xor_ps(v234, SIGN_BIT_MASK);
            }
            v382 = v234;
            v238 = v235 + v232;
            v239 = (Y + v228) - (v235 + v232);
            v240 = 0.0;
            if ( v239 > 0.0 )
              v240 = fsqrt(v239) * *&screenScaleFactor;
            v241 = _mm_xor_ps(SIGN_BIT_MASK, v233);
            v242 = _mm_cmplt_ss(v237, v223);
            *&v378 = v240;
            HIDWORD(v378) = LODWORD(v240) ^ SIGN_BIT_MASK;
            v243 = (Y + v232) - (v228 + v235);
            v244 = 0i64;
            if ( v243 > 0.0 )
            {
              v244 = 0i64;
              v244.m128_f32[0] = fsqrt(v243) * *&screenScaleFactor;
            }
            v245 = _mm_and_ps(v241, v242);
            v381 = _mm_andnot_ps(v242, v233);
            v387 = _mm_xor_ps(SIGN_BIT_MASK, v244);
            v246 = (Y - (v228 + v232)) + v235;
            v247 = 0i64;
            v248 = v244;
            if ( v246 > 0.0 )
            {
              v247 = 0i64;
              v247.m128_f32[0] = fsqrt(v246) * *&screenScaleFactor;
            }
            v381 = _mm_or_ps(v381, v245);
            v401 = _mm_xor_ps(SIGN_BIT_MASK, v247);
            v249 = v238 + (Y + v228);
            v250 = 0.0;
            v251 = 0i64;
            if ( v249 > 0.0 )
            {
              v251 = 0i64;
              v251.m128_f32[0] = fsqrt(v249) * *&screenScaleFactor;
            }
            v252 = _mm_xor_ps(SIGN_BIT_MASK, v251);
            v253 = v251;
            *&v253 = v251.m128_f32[0] * v247.m128_f32[0];
            v428 = v253;
            v254 = v247;
            *&v254 = v247.m128_f32[0] * v252.m128_f32[0];
            v427 = v254;
            v255 = v251;
            *&v255 = v251.m128_f32[0] * v401.m128_f32[0];
            v426 = v255;
            v256 = v247;
            *&v256 = v247.m128_f32[0] * *&v248;
            v425 = v256;
            v257 = v251;
            *&v257 = v251.m128_f32[0] * *&v248;
            v424 = v257;
            v402 = v252;
            v252.m128_f32[0] = v252.m128_f32[0] * *&v248;
            v423 = v252;
            v258 = v248;
            *&v258 = *&v248 * v401.m128_f32[0];
            v422 = v258;
            v259 = v247;
            *&v259 = v247.m128_f32[0] * v387.m128_f32[0];
            v421 = v259;
            v260 = v251;
            *&v260 = v251.m128_f32[0] * v387.m128_f32[0];
            v429 = v260;
            v261 = *&dword_44A0744;
            v262 = 1;
            v263 = 0i64;
            v264 = 0.0;
            v370 = 0.0;
            v368 = 0.0;
            v388 = v247;
            v414 = v248;
            v420 = v251;
            do
            {
              v265 = v250;
              *&v390 = v264;
              v266 = *(&v378 + v263);
              v267 = v266 * v247.m128_f32[0];
              v268 = v266 * v251.m128_f32[0];
              v269 = v266 * v402.m128_f32[0];
              v270 = v266 * *&v248;
              v271 = ((((v270 + *&v428) + (v270 + *&v428)) - v365) * (((v270 + *&v428) + (v270 + *&v428)) - v365))
                   + ((((v270 - *&v428) + (v270 - *&v428)) - v361) * (((v270 - *&v428) + (v270 - *&v428)) - v361));
              v272 = ((((v267 - *&v424) + (v267 - *&v424)) - v375) * (((v267 - *&v424) + (v267 - *&v424)) - v375))
                   + ((((v267 + *&v424) + (v267 + *&v424)) - v381.m128_f32[0])
                    * (((v267 + *&v424) + (v267 + *&v424)) - v381.m128_f32[0]));
              v417 = ((((v268 + *&v425) + (v268 + *&v425)) - v383.m128_f32[0])
                    * (((v268 + *&v425) + (v268 + *&v425)) - v383.m128_f32[0]))
                   + ((((*&v425 - v268) + (*&v425 - v268)) - v382.m128_f32[0])
                    * (((*&v425 - v268) + (*&v425 - v268)) - v382.m128_f32[0]));
              if ( ((v272 + v417) + v271) < v261 )
              {
                v265 = v251.m128_f32[0];
                LODWORD(v390) = v388.m128_i32[0];
                v370 = *&v248;
                v368 = v266;
                v261 = (v272 + v417) + v271;
              }
              v372 = v265;
              v273 = v425;
              *&v273 = (((*&v425 - v269) + (*&v425 - v269)) - v382.m128_f32[0])
                     * (((*&v425 - v269) + (*&v425 - v269)) - v382.m128_f32[0]);
              v274 = (((v269 + *&v425) + (v269 + *&v425)) - v383.m128_f32[0])
                   * (((v269 + *&v425) + (v269 + *&v425)) - v383.m128_f32[0]);
              v430 = v273;
              v275 = v266 * v401.m128_f32[0];
              if ( (((v274 + *&v273)
                   + (((((v267 + *&v423) + (v267 + *&v423)) - v381.m128_f32[0])
                     * (((v267 + *&v423) + (v267 + *&v423)) - v381.m128_f32[0]))
                    + ((((v270 - *&v427) + (v270 - *&v427)) - v361) * (((v270 - *&v427) + (v270 - *&v427)) - v361))))
                  + (((((v267 - *&v423) + (v267 - *&v423)) - v375) * (((v267 - *&v423) + (v267 - *&v423)) - v375))
                   + ((((v270 + *&v427) + (v270 + *&v427)) - v365) * (((v270 + *&v427) + (v270 + *&v427)) - v365)))) < v261 )
              {
                v372 = v402.m128_f32[0];
                LODWORD(v390) = v388.m128_i32[0];
                v370 = *&v414;
                v368 = v266;
                v261 = ((v274 + *&v273)
                      + (((((v267 + *&v423) + (v267 + *&v423)) - v381.m128_f32[0])
                        * (((v267 + *&v423) + (v267 + *&v423)) - v381.m128_f32[0]))
                       + ((((v270 - *&v427) + (v270 - *&v427)) - v361) * (((v270 - *&v427) + (v270 - *&v427)) - v361))))
                     + (((((v267 - *&v423) + (v267 - *&v423)) - v375) * (((v267 - *&v423) + (v267 - *&v423)) - v375))
                      + ((((v270 + *&v427) + (v270 + *&v427)) - v365) * (((v270 + *&v427) + (v270 + *&v427)) - v365)));
              }
              v389.m128_f32[0] = v266;
              v276 = ((((v275 - *&v424) + (v275 - *&v424)) - v375) * (((v275 - *&v424) + (v275 - *&v424)) - v375))
                   + ((((v275 + *&v424) + (v275 + *&v424)) - v381.m128_f32[0])
                    * (((v275 + *&v424) + (v275 + *&v424)) - v381.m128_f32[0]));
              v277 = ((((((v270 + *&v426) + (v270 + *&v426)) - v365) * (((v270 + *&v426) + (v270 + *&v426)) - v365))
                     + ((((v270 - *&v426) + (v270 - *&v426)) - v361) * (((v270 - *&v426) + (v270 - *&v426)) - v361)))
                    + v276)
                   + (((((v268 + *&v422) + (v268 + *&v422)) - v383.m128_f32[0])
                     * (((v268 + *&v422) + (v268 + *&v422)) - v383.m128_f32[0]))
                    + ((((*&v422 - v268) + (*&v422 - v268)) - v382.m128_f32[0])
                     * (((*&v422 - v268) + (*&v422 - v268)) - v382.m128_f32[0])));
              if ( v277 < v261 )
              {
                v372 = *&v420;
                LODWORD(v390) = v401.m128_i32[0];
                v370 = *&v414;
                v368 = v389.m128_f32[0];
                v261 = v277;
              }
              if ( (((((((v269 + *&v422) + (v269 + *&v422)) - v383.m128_f32[0])
                     * (((v269 + *&v422) + (v269 + *&v422)) - v383.m128_f32[0]))
                    + ((((v275 - *&v423) + (v275 - *&v423)) - v375) * (((v275 - *&v423) + (v275 - *&v423)) - v375)))
                   + (((((*&v422 - v269) + (*&v422 - v269)) - v382.m128_f32[0])
                     * (((*&v422 - v269) + (*&v422 - v269)) - v382.m128_f32[0]))
                    + ((((v275 + *&v423) + (v275 + *&v423)) - v381.m128_f32[0])
                     * (((v275 + *&v423) + (v275 + *&v423)) - v381.m128_f32[0]))))
                  + v271) < v261 )
              {
                v372 = v402.m128_f32[0];
                LODWORD(v390) = v401.m128_i32[0];
                v370 = *&v414;
                v368 = v389.m128_f32[0];
                v261 = v269;
              }
              v278 = v389.m128_f32[0] * v387.m128_f32[0];
              v279 = ((((v278 + *&v428) + (v278 + *&v428)) - v365) * (((v278 + *&v428) + (v278 + *&v428)) - v365))
                   + ((((v278 - *&v428) + (v278 - *&v428)) - v361) * (((v278 - *&v428) + (v278 - *&v428)) - v361));
              v280 = ((((((v268 + *&v421) + (v268 + *&v421)) - v383.m128_f32[0])
                      * (((v268 + *&v421) + (v268 + *&v421)) - v383.m128_f32[0]))
                     + ((((v267 - *&v429) + (v267 - *&v429)) - v375) * (((v267 - *&v429) + (v267 - *&v429)) - v375)))
                    + (((((*&v421 - v268) + (*&v421 - v268)) - v382.m128_f32[0])
                      * (((*&v421 - v268) + (*&v421 - v268)) - v382.m128_f32[0]))
                     + ((((v267 + *&v429) + (v267 + *&v429)) - v381.m128_f32[0])
                      * (((v267 + *&v429) + (v267 + *&v429)) - v381.m128_f32[0]))))
                   + v279;
              v264 = *&v390;
              if ( v280 < v261 )
              {
                v372 = *&v420;
                v264 = v388.m128_f32[0];
                v370 = v387.m128_f32[0];
                v368 = v389.m128_f32[0];
                v261 = v280;
              }
              v281 = (v272
                    + ((((v278 - *&v427) + (v278 - *&v427)) - v361) * (((v278 - *&v427) + (v278 - *&v427)) - v361)))
                   + (((((v269 + *&v421) + (v269 + *&v421)) - v383.m128_f32[0])
                     * (((v269 + *&v421) + (v269 + *&v421)) - v383.m128_f32[0]))
                    + (((((*&v421 - v269) + (*&v421 - v269)) - v382.m128_f32[0])
                      * (((*&v421 - v269) + (*&v421 - v269)) - v382.m128_f32[0]))
                     + ((((v278 + *&v427) + (v278 + *&v427)) - v365) * (((v278 + *&v427) + (v278 + *&v427)) - v365))));
              v250 = v372;
              if ( v281 < v261 )
              {
                v250 = v402.m128_f32[0];
                v264 = v388.m128_f32[0];
                v370 = v387.m128_f32[0];
                v368 = v389.m128_f32[0];
                v261 = v281;
              }
              v282 = (v417
                    + (((((v275 + *&v429) + (v275 + *&v429)) - v381.m128_f32[0])
                      * (((v275 + *&v429) + (v275 + *&v429)) - v381.m128_f32[0]))
                     + ((((v278 - *&v426) + (v278 - *&v426)) - v361) * (((v278 - *&v426) + (v278 - *&v426)) - v361))))
                   + (((((v275 - *&v429) + (v275 - *&v429)) - v375) * (((v275 - *&v429) + (v275 - *&v429)) - v375))
                    + ((((v278 + *&v426) + (v278 + *&v426)) - v365) * (((v278 + *&v426) + (v278 + *&v426)) - v365)));
              v251.m128_i32[0] = v420;
              if ( v282 < v261 )
              {
                v250 = *&v420;
                v264 = v401.m128_f32[0];
                v370 = v387.m128_f32[0];
                v368 = v389.m128_f32[0];
                v261 = v282;
              }
              v283 = ((v276 + *&v430) + v274) + v279;
              if ( v283 < v261 )
              {
                v250 = v402.m128_f32[0];
                v264 = v401.m128_f32[0];
                v370 = v387.m128_f32[0];
                v368 = v389.m128_f32[0];
                v261 = v283;
              }
              v263 = 1i64;
              v43 = (v262 & 1) == 0;
              v262 = 0;
              v247.m128_i32[0] = v388.m128_i32[0];
              LODWORD(v248) = v414;
            }
            while ( !v43 );
            v284 = fsqrt(((v250 * v250) + (v264 * v264)) + ((v370 * v370) + (v368 * v368)));
            v285 = 0.0;
            v286 = 0.0;
            v287 = 0.0;
            v288 = 0.0;
            if ( v284 != 0.0 )
            {
              v285 = v368 * (Y / v284);
              v286 = v370 * (Y / v284);
              v287 = v264 * (Y / v284);
              v288 = v250 * (Y / v284);
            }
            v378 = __PAIR64__(LODWORD(v286), LODWORD(v285));
            v379 = v287;
            v380 = v288;
            LocalUnit = sub_1643C20(
                          ballistic_computer_1e18 + 0x50,
                          &v398 + 4,
                          &v378,
                          &v403,
                          &v376,
                          &v384,
                          LODWORD(v415),
                          LODWORD(v416),
                          v164,
                          v162,
                          0x3CAAAAAB,
                          0x40A00000,
                          ballistic_computer_1e18 + 0x3F8,
                          v419);
            *(ballistic_computer_1e18 + 0x3F4) = LocalUnit;
            return LocalUnit;
          }
          game_params = *(game + 0x498);
        }
        v162 = *(game_params + 0x2771) != 0;
        goto LABEL_140;
      }
      if ( !*(Unit + 0x10B0) && (*(Unit + 0x1058) & 0x2000010) == 0 )
      {
        v353 = *(Unit + 0x9D0);
        v354 = v353[0x132];
        *&v355 = v353[0x131];
        *&v356 = v353[0x130];
        v376 = __PAIR64__(v355, v356);
        v377 = v354;
        goto LABEL_130;
      }
    }
    v376 = 0i64;
    v377 = 0.0;
    goto LABEL_130;
  }
  if ( v139 )
  {
    v140 = *(ballistic_computer_1e18 + 0x48);
    goto LABEL_123;
  }
  v289 = *(ballistic_computer_1e18 + 0x10);
  v290 = *(v289 + 0x10B0);
  v291 = 0.0;
  if ( v290 > 0xF )
    goto LABEL_249;
  v292 = 0x897E;
  if ( _bittest(&v292, v290) )
  {
    v293 = *(v289 + 0x1EA0);
    v294 = (v293 + 0x54);
    v43 = v293 == 0;
    v295 = &xmmword_4514A60;
    if ( !v43 )
      v295 = v294;
    if ( *(v289 + 0x58) == 1 )
      v295 = (v289 + 0x22AC);
    v296 = *v295;
    v297 = v295[1];
    v291 = v295[2];
    goto LABEL_212;
  }
  if ( *(v289 + 0x10B0) )
  {
LABEL_249:
    v297 = 0.0;
    v296 = 0.0;
    goto LABEL_212;
  }
  v297 = 0.0;
  v296 = 0.0;
  if ( (*(v289 + 0x1058) & 0x2000010) == 0 )
  {
    v357 = *(v289 + 0x9D0);
    v291 = v357[0x132];
    v297 = v357[0x131];
    v296 = v357[0x130];
  }
LABEL_212:
  v298 = v391;
  v299 = *&v392;
  v300 = *(&v392 + 1);
  v301 = *(ballistic_computer_1e18 + 0x48);
  v302 = ((v291 * *(&v392 + 1)) + v301) + ((v297 * *&v392) + (v296 * v391));
  if ( v381.m128_i8[0] )
  {
    v303 = fminf(v81, v137);
    v304 = *(ballistic_computer_1e18 + 0x3E8);
    v305 = *(ballistic_computer_1e18 + 0x3EC);
    v306 = *(ballistic_computer_1e18 + 0x3F0);
    v307 = (v13[0x26D] * v306) + ((v13[0x26A] * v305) + (v13[0x267] * v304));
    v308 = (v13[0x26E] * v306) + ((v13[0x26B] * v305) + (v13[0x268] * v304));
    v309 = v391 * v303;
    v310 = (v306 * v13[0x26F]) + ((v305 * v13[0x26C]) + (v304 * v13[0x269]));
    v311 = (v308 * v391) - (v307 * *&v392);
    v312 = (v307 * *(&v392 + 1)) - (v310 * v391);
    v313 = *&v392 * v303;
    v314 = (v310 * *&v392) - (v308 * *(&v392 + 1));
    v315 = *(&v392 + 1) * v303;
    LocalUnit = *(game + 0x498);
    v316 = fminf(v301 * *(LocalUnit + 0x276C), v303);
    v317 = *(&v398 + 1);
    v318 = v311 * v316;
    v319 = v312 * v316;
    v320 = v316 * v314;
    v321 = (*(&v392 + 1) * v80) + v318;
    v322 = (*&v392 * v80) + v319;
    v323 = v399;
    v324 = v309 + *(&v398 + 1);
    v325 = v313 + v399;
    v326 = (v80 * v391) + v320;
    v327 = v400;
    v328 = v315 + v400;
    if ( v302 >= *&dword_44A4648 )
      goto LABEL_214;
LABEL_224:
    *(ballistic_computer_1e18 + 0x3F4) = 0;
    return LocalUnit;
  }
  v340 = *(ballistic_computer_1e18 + 0x3E8);
  v341 = *(ballistic_computer_1e18 + 0x3EC);
  v342 = *(ballistic_computer_1e18 + 0x3F0);
  v343 = (v13[0x26D] * v342) + ((v13[0x26A] * v341) + (v13[0x267] * v340));
  v344 = (v13[0x26E] * v342) + ((v13[0x26B] * v341) + (v13[0x268] * v340));
  v345 = *(ballistic_computer_1e18 + 8);
  LocalUnit = *(game + 0x498);
  v346 = fminf(v301 * *(LocalUnit + 0x276C), v345);
  v347 = (v342 * v13[0x26F]) + ((v341 * v13[0x26C]) + (v340 * v13[0x269]));
  v317 = *(&v398 + 1);
  v323 = v399;
  v324 = (v345 * v391) + *(&v398 + 1);
  v325 = (v345 * *&v392) + v399;
  v321 = ((v344 * v391) - (v343 * *&v392)) * v346;
  v322 = ((v343 * *(&v392 + 1)) - (v347 * v391)) * v346;
  v348 = v346 * ((v347 * *&v392) - (v344 * *(&v392 + 1)));
  v327 = v400;
  v328 = (v345 * *(&v392 + 1)) + v400;
  v326 = v348;
  if ( v302 < *&dword_44A4648 )
    goto LABEL_224;
LABEL_214:
  LocalUnit = *(LocalUnit + 0x2772);
  v329 = fsqrt((((v328 - v327) * (v328 - v327)) + ((v325 - v323) * (v325 - v323))) + ((v324 - v317) * (v324 - v317)));
  if ( v302 > *&epsilon_unk || (v330 = 0.0, v302 < *&dword_449F1AC) )
    v330 = v329 / v302;
  v331 = (v321 * v330) + v328;
  v332 = (v322 * v330) + v325;
  v333 = (v326 * v330) + v324;
  if ( LocalUnit )
  {
    v334 = fminf(v330, *&dword_4487E1C);
    v332 = v332 + (((v334 * v334) * *&screenScaleFactor) * *&gamephys::gravity);
  }
  *(ballistic_computer_1e18 + 0x3F4) = 1;
  v335 = v331 - v327;
  v336 = v332 - v323;
  v337 = v333 - v317;
  v338 = v327 - v335;
  v339 = (((v335 * v300) + (v336 * v299)) + (v337 * v298)) + (((v335 * v300) + (v336 * v299)) + (v337 * v298));
  *(ballistic_computer_1e18 + 0x3F8) = (v317 - v337) + (v339 * v298);
  *(ballistic_computer_1e18 + 0x3FC) = (v299 * v339) + (v323 - v336);
  *(ballistic_computer_1e18 + 0x400) = (v300 * v339) + v338;
  return LocalUnit;
}