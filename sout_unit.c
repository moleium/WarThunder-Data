__int64 __fastcall scout_unit(__int64 a1, __int64 DetectorUnit, __int64 a3)
{
  __m128 v3; // xmm2
  unsigned int UnitType; // eax
  int v7; // ecx
  __int64 Unit; // rsi
  double *v9; // rax
  char *response; // rdx
  __int64 v11; // rcx
  float v12; // xmm1_4
  float v13; // xmm5_4
  float v14; // xmm0_4
  float v15; // xmm4_4
  float v16; // xmm3_4
  float v17; // xmm3_4
  __m128 v18; // xmm5
  __m128 v19; // xmm4
  __m128 v20; // xmm1
  __int64 PlayerInfo; // r13
  _BYTE *v22; // r14
  unsigned __int8 v23; // al
  int hud_marker_unk; // r12d
  unsigned int UnitType_; // ecx
  int v26; // edx
  int v27; // ebp
  int v28; // eax
  float _UnitPositionZ; // xmm8_4
  float _UnitPositionY; // xmm9_4
  float _DetectorUnitX; // xmm15_4
  float _DetectorUnitY; // xmm14_4
  float _UnitPositionX; // xmm13_4
  float UnitBBoxMinX; // xmm12_4
  float UnitBBoxMinY; // xmm5_4
  float UnitBBoxMaxX; // xmm10_4
  float UnitBBoxMaxY; // xmm1_4
  float v38; // xmm4_4
  float v39; // xmm0_4
  float v40; // xmm7_4
  float v41; // xmm11_4
  float v42; // xmm6_4
  float v43; // xmm9_4
  float v44; // xmm14_4
  float v45; // xmm9_4
  float v46; // xmm7_4
  float v47; // xmm4_4
  float v48; // xmm15_4
  float v49; // xmm2_4
  float v50; // xmm3_4
  float v51; // xmm10_4
  float v52; // xmm12_4
  float v53; // xmm13_4
  int v54; // xmm8_4
  float v55; // xmm8_4
  float v56; // xmm9_4
  float v57; // xmm14_4
  float v58; // xmm9_4
  float v59; // xmm0_4
  float v60; // xmm4_4
  __int64 v62; // rcx
  float *v63; // rax
  double *v64; // rcx
  unsigned __int8 v65; // al
  int UnitPositionZ; // xmm1_4
  float UnitPositionY; // xmm3_4
  float DetectorPositionY; // xmm2_4
  int DetectorPositionZ; // xmm1_4
  __int64 v70; // rdx
  __int64 DetectorUnit_; // rcx
  __int64 v72; // r8
  __int64 v73; // rdx
  float v74; // xmm6_4
  float v75; // xmm0_4
  __int64 v76; // r15
  unsigned __int64 v77; // r13
  __int64 v78; // rcx
  float *v79; // rax
  double *v80; // rcx
  __int64 v81; // rdx
  float v82; // xmm6_4
  float v83; // xmm0_4
  int v84; // edi
  int v85; // eax
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rbp
  unsigned __int8 v88; // cl
  bool v89; // zf
  bool v90; // cl
  unsigned __int64 v91; // rdx
  unsigned __int64 v92; // rcx
  unsigned __int8 v93; // di
  __int64 v94; // r8
  unsigned int v95; // ecx
  int v96; // edx
  unsigned __int8 v97; // cf
  __int64 v98; // rdx
  float v99; // xmm0_4
  float v100; // xmm5_4
  __int64 v101; // rcx
  int v102; // xmm15_4
  float v103; // xmm8_4
  float v104; // xmm14_4
  float v105; // xmm13_4
  float v106; // xmm12_4
  float v107; // xmm7_4
  float v108; // xmm6_4
  float v109; // xmm11_4
  float v110; // xmm0_4
  float v111; // xmm7_4
  __int64 _Unit; // rbx
  __int64 v113; // rdx
  __int64 v114; // rbp
  float v115; // xmm0_4
  unsigned int v116; // eax
  __int64 v117; // rbx
  __int64 v118; // rbx
  __int64 v119; // r15
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rbp
  int v123; // r14d
  int v124; // eax
  __int64 v125; // rax
  unsigned __int64 v126; // [rsp+20h] [rbp-1F8h]
  float v127; // [rsp+28h] [rbp-1F0h]
  __int64 _DetectorUnitZ; // [rsp+28h] [rbp-1F0h]
  float DetectorPositionX; // [rsp+30h] [rbp-1E8h] BYREF
  float DetectorPositionY_; // [rsp+34h] [rbp-1E4h]
  float DetectorPositionZ_; // [rsp+38h] [rbp-1E0h]
  float v132; // [rsp+40h] [rbp-1D8h]
  int v133; // [rsp+44h] [rbp-1D4h]
  __int64 v134; // [rsp+48h] [rbp-1D0h]
  __int64 Unit_; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 v136; // [rsp+58h] [rbp-1C0h]
  float v137; // [rsp+60h] [rbp-1B8h]
  float v138; // [rsp+64h] [rbp-1B4h]
  float v139; // [rsp+68h] [rbp-1B0h]
  float v140; // [rsp+6Ch] [rbp-1ACh]
  float v141; // [rsp+70h] [rbp-1A8h]
  float v142; // [rsp+74h] [rbp-1A4h]
  __int64 v143; // [rsp+78h] [rbp-1A0h] BYREF
  __int64 UnitPosition; // [rsp+80h] [rbp-198h] BYREF
  _BOOL8 v145; // [rsp+88h] [rbp-190h]
  int v146; // [rsp+90h] [rbp-188h]
  unsigned __int64 v147; // [rsp+98h] [rbp-180h]
  int v148; // [rsp+A0h] [rbp-178h]
  unsigned __int64 v149; // [rsp+A8h] [rbp-170h]
  int v150; // [rsp+B0h] [rbp-168h]
  unsigned __int64 v151; // [rsp+B8h] [rbp-160h]
  int v152; // [rsp+C0h] [rbp-158h]
  unsigned __int64 v153; // [rsp+C8h] [rbp-150h]
  int v154; // [rsp+D0h] [rbp-148h]
  unsigned __int64 v155; // [rsp+D8h] [rbp-140h]
  int v156; // [rsp+E0h] [rbp-138h]
  __int64 v157; // [rsp+E8h] [rbp-130h]

  Unit_ = DetectorUnit;
  if ( !*(a1 + 0x18) )
  {
    response = "scouting: failed, preset enabled = false";
LABEL_50:
    LODWORD(Unit) = 0;
    dg_debug(3u, response, 0i64, 0, v126);
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
  Unit = a3;
  if ( !qword_4B507E8 || *(game + 0xCD) || *(game + 0xCE) )
  {
    v11 = *(game + 0x450);
    if ( v11 && *(v11 + 0x5CA) )
      v9 = (v11 + 0x620);
    else
      v9 = (game + 0x2E0);
  }
  else
  {
    v9 = (qword_4B507E8 + 0x70);
  }
  v3.m128_f32[0] = *v9;
  v12 = *(DetectorUnit + 0x12D8);
  v13 = *(DetectorUnit + 0x1300) + v12;
  if ( v13 >= v12 )
  {
    v14 = Y;
    v15 = 0.0;
    v16 = *(DetectorUnit + 0x1300) + v12;
    if ( v12 >= v3.m128_f32[0] )
      goto LABEL_27;
  }
  else
  {
    v14 = 0.0;
    v15 = Y;
    v16 = *(DetectorUnit + 0x12D8);
    v12 = *(DetectorUnit + 0x1300) + v12;
    if ( v13 >= v3.m128_f32[0] )
      goto LABEL_27;
  }
  if ( v16 <= v3.m128_f32[0] )
  {
    v14 = v15;
  }
  else
  {
    v17 = v16 - v12;
    v18 = v3;
    v18.m128_f32[0] = (v3.m128_f32[0] - v12) * (v15 - v14);
    if ( v17 > *&dword_449F1A8 || (v19 = 0i64, v17 < *&dword_449F1AC) )
    {
      v18.m128_f32[0] = v18.m128_f32[0] / v17;
      v19 = v18;
    }
    v20.m128_f32[0] = v12 - v3.m128_f32[0];
    v14 = v14 + _mm_andnot_ps(_mm_cmple_ss(0i64, v20), v19).m128_f32[0];
  }
LABEL_27:
  if ( COERCE_FLOAT(LODWORD(v14) & xmmword_449AF40) >= *&dword_44A0308 )
  {
    response = "scouting: failed, timer not ready";
    goto LABEL_50;
  }
  PlayerInfo = *(DetectorUnit + 0x10B8);
  v22 = 0i64;
  if ( a3 && PlayerInfo )
    v22 = sub_4BCEE0(*(a3 + 0x11C8), *(PlayerInfo + 8));
  v23 = 0;
  hud_marker_unk = *(HudInfo + 0x73);
  if ( Unit && !v22 )
  {
    if ( !*(Unit + 0x10B8) )
    {
      UnitPositionZ = *(Unit + 0x9C8);
      UnitPositionY = *(Unit + 0x9C4) + dword_44801E0;
      LODWORD(UnitPosition) = *(Unit + 0x9C0);
      *(&UnitPosition + 1) = UnitPositionY;
      LODWORD(v145) = UnitPositionZ;
      DetectorPositionY = dword_44801E0 + *(DetectorUnit + 0x9C4);
      DetectorPositionZ = *(DetectorUnit + 0x9C8);
      DetectorPositionX = *(DetectorUnit + 0x9C0);
      DetectorPositionY_ = DetectorPositionY;
      DetectorPositionZ_ = *&DetectorPositionZ;
      v23 = sub_8465F0(&DetectorPositionX, &UnitPosition) ^ 1;
      if ( *(a1 + 0x1A) )
        goto LABEL_36;
      goto LABEL_65;
    }
    v23 = 0;
  }
  if ( *(a1 + 0x1A) )
    goto LABEL_36;
LABEL_65:
  if ( ((v23 ^ 1) & (v22 == 0i64)) != 0 || v22 && hud_marker_unk == 2 && !(v22[0x14] | v22[0x12]) )
  {
    LODWORD(Unit) = 0;
    dg_debug(3u, "scouting: failed - marker not visible", 0i64, 0);
    v70 = *(a1 + 0x1A);
    DetectorUnit_ = DetectorUnit;
    goto LABEL_70;
  }
LABEL_36:
  if ( Unit )
  {
    UnitType_ = *(Unit + 0x10B0);
    if ( UnitType_ <= 0xF )
    {
      v26 = 0x897E;
      if ( _bittest(&v26, UnitType_) )
      {
        if ( v23 )
          goto LABEL_40;
        if ( v22 )
        {
          v65 = v22[0x12];
          if ( hud_marker_unk == 2 )
          {
            if ( v22[0x14] | v65 )
              goto LABEL_40;
          }
          else if ( v65 || v22[0x14] || v22[0x13] || v22[0x15] )
          {
LABEL_40:
            if ( *(Unit + 0x10A8) <= 1u )
            {
              v27 = (*(*(DetectorUnit + 0x50) + 0x30i64))(DetectorUnit + 0x50);
              v28 = (*(*(Unit + 0x50) + 0x30i64))(Unit + 0x50);
              if ( (dword_4B1C814 & 0x80000) != 0 || v28 != v27 || (dword_4B1C814 & 0x1000000) != 0 )
              {
                _UnitPositionZ = *(Unit + 0x9C8);
                v127 = *(DetectorUnit + 0x9C8);
                _UnitPositionY = *(Unit + 0x9C4);
                _DetectorUnitX = *(DetectorUnit + 0x9C0);
                _DetectorUnitY = *(DetectorUnit + 0x9C4);
                _UnitPositionX = *(Unit + 0x9C0);
                UnitBBoxMinX = *(Unit + 0x1F0);
                UnitBBoxMinY = *(Unit + 0x1F8);
                UnitBBoxMaxX = *(Unit + 0x1FC);

                // Unit Rotation calculation for bounding box
                UnitBBoxMaxY = *(Unit + 0x204);
                v38 = (UnitBBoxMaxY + UnitBBoxMinY) * *&dword_44801CC;
                v39 = (*(Unit + 0x200) + *(Unit + 0x1F4)) * *&dword_44801CC;
                v40 = (UnitBBoxMaxX + UnitBBoxMinX) * *&dword_44801CC;
                v41 = ((*(Unit + 0x99C) * v40) + _UnitPositionX) + ((*(Unit + 0x9B4) * v38) + (*(Unit + 0x9A8) * v39));
                DetectorPositionX = v41;
                v42 = ((*(Unit + 0x9A0) * v40) + _UnitPositionY) + ((*(Unit + 0x9B8) * v38) + (*(Unit + 0x9AC) * v39));
                DetectorPositionY_ = v42;
                *(&v126 + 1) = _DetectorUnitY;
                v43 = _UnitPositionY - _DetectorUnitY;
                v44 = _DetectorUnitX;
                v45 = fsqrt(
                        (((_UnitPositionZ - v127) * (_UnitPositionZ - v127)) + (v43 * v43))
                      + ((_UnitPositionX - _DetectorUnitX) * (_UnitPositionX - _DetectorUnitX)));
                v46 = ((v40 * *(Unit + 0x9A4)) + _UnitPositionZ) + ((v38 * *(Unit + 0x9BC)) + (v39 * *(Unit + 0x9B0)));
                DetectorPositionZ_ = v46;
                v142 = *(DetectorUnit + 0x99C);
                v47 = *(DetectorUnit + 0x250);
                v48 = *(DetectorUnit + 0x9A8);
                v49 = *(DetectorUnit + 0x254);
                LODWORD(v136) = *(DetectorUnit + 0x9B4);
                v50 = *(DetectorUnit + 0x258);
                v138 = *(DetectorUnit + 0x9A4);
                v51 = fmaxf(UnitBBoxMaxX - UnitBBoxMinX, UnitBBoxMaxY - UnitBBoxMinY);
                v89 = *(a1 + 0x1A) == 0;
                v52 = *(DetectorUnit + 0x9B0);
                v53 = *(DetectorUnit + 0x9BC);
                v54 = *(DetectorUnit + 0x238);
                LODWORD(v134) = *(DetectorUnit + 0x240);
                v141 = v49;
                v140 = v50;
                v139 = v47;
                if ( v89 )
                {
                  DetectorPositionY_ = 0.0;
                  v51 = v51 + (sinf(*(DetectorUnit + 0x26C) * *&dword_44801CC) * v45);
                  v42 = 0.0;
                  v60 = 0.0;
                  v58 = 0.0;
                }
                else
                {
                  v137 = v45;
                  v133 = v54;
                  *&v126 = v44;
                  v55 = *(DetectorUnit + 0x9A0) * v47;
                  v56 = *(DetectorUnit + 0x9AC) * v49;
                  v57 = *(DetectorUnit + 0x9B8) * v50;
                  v132 = *(DetectorUnit + 0x23C);
                  if ( !sub_4B2280(DetectorUnit) )
                  {
                    LODWORD(Unit) = 0;
                    return Unit;
                  }
                  v58 = (v56 + v57) + (v55 + *(&v126 + 1));
                  v59 = *(a1 + 0x4C);
                  if ( COERCE_FLOAT(xmmword_449AF40 & LODWORD(v59)) >= *&dword_44A0308 )
                    v51 = v51 + (v59 * v137);
                  v44 = *&v126;
                  v54 = v133;
                  v60 = v132;
                }
                v99 = fsqrt(((*&v134 * *&v134) + (*&v54 * *&v54)) + (v60 * v60));
                v100 = 0.0;
                if ( v99 > *&dword_449F1A8 )
                  v100 = Y / v99;
                if ( *(a1 + 0x1B) )
                {
                  v101 = game + 0x28;
                  if ( !game )
                    v101 = game;
                  v126 = __PAIR64__(LODWORD(v53), LODWORD(v48));
                  v102 = v54;
                  v103 = v44;
                  v104 = v60;
                  v105 = v52;
                  v106 = v100;
                  sub_4B2300(v101, &DetectorPositionX);
                  v100 = v106;
                  v52 = v105;
                  v60 = v104;
                  v44 = v103;
                  v54 = v102;
                  LODWORD(v48) = v126;
                  v53 = *(&v126 + 1);
                }
                v107 = v46 - (v127 + ((v53 * v140) + ((v52 * v141) + (v138 * v139))));
                v108 = v42 - v58;
                v109 = v41 - (v44 + ((*&v136 * v140) + ((v48 * v141) + (v142 * v139))));
                v110 = (((v107 * v107) + (v109 * v109)) - (v51 * v51)) + (v108 * v108);
                if ( v110 < 0.0
                  || (v111 = (((v107 * *&v134) + (*&v54 * v109)) + (v108 * v60)) * v100, v111 >= 0.0)
                  && ((v111 * v111) - v110) >= 0.0 )
                {
                  _Unit = Unit_;
                  sub_5655B0(game);
                  sub_4B2200(_Unit);
                  if ( *(a1 + 0x10) )
                  {
                    v113 = 0i64;
                    while ( *(*a1 + v113 + 0xC8) != Unit )
                    {
                      v113 += 0xE8i64;
                      if ( 0xE8i64 * *(a1 + 0x10) == v113 )
                        goto LABEL_131;
                    }
                    response = "scouting: failed, target already scouted by someone";
                    goto LABEL_50;
                  }
LABEL_131:
                  v114 = sub_4B2480(a1);
                  *(v114 + 0x10) = _Unit;
                  sub_7A6880(&UnitPosition, _Unit);
                  v136 = v114 + 0x18;
                  memmove((v114 + 0x18), &UnitPosition, 0xB0ui64);
                  *(v114 + 0xC8) = Unit;
                  *(v114 + 4) = 0;
                  v115 = sub_5655B0(game);
                  *v114 = v115;
                  *(v114 + 8) = *(a1 + 0x20);
                  UnitPosition = 0xFFFFFFFF0000002Eui64;
                  sub_72CDB0(&UnitPosition);
                  v134 = v114;
                  _DetectorUnitZ = v114 + 0xD0;
                  v116 = HIDWORD(UnitPosition);
                  if ( qword_4B50090 > HIDWORD(UnitPosition) )
                  {
                    v117 = _Unit + 0x50;
                    do
                    {
                      v119 = v116;
                      v120 = *(qword_4B50080 + v116);
                      if ( !v120 )
                        break;
                      v121 = sub_11FE900(v120);
                      v143 = v121;
                      if ( v121 )
                      {
                        v122 = v121;
                        v123 = (*(*v117 + 0x30i64))(v117);
                        v124 = (*(*(v122 + 0x50) + 0x30i64))(v122 + 0x50);
                        if ( (dword_4B1C814 & 0x80000) == 0
                          && v124 == v123
                          && (dword_4B1C814 & 0x1000000) == 0
                          && *(v143 + 0x10A8) <= 1u
                          && ((((*(Unit + 0x9C8) - *(v143 + 0x9C8)) * (*(Unit + 0x9C8) - *(v143 + 0x9C8)))
                             + ((*(Unit + 0x9C4) - *(v143 + 0x9C4)) * (*(Unit + 0x9C4) - *(v143 + 0x9C4))))
                            + ((*(Unit + 0x9C0) - *(v143 + 0x9C0)) * (*(Unit + 0x9C0) - *(v143 + 0x9C0)))) <= *(a1 + 0x20) )
                        {
                          v125 = sub_4BCEE0(*(Unit + 0x11C8), *(*(qword_4B50080 + v119) + 8i64));
                          if ( *(a1 + 0x1C) || hud_marker_unk != 2 || !v125 || !(*(v125 + 0x14) | *(v125 + 0x12)) )
                            sub_37A9E0(_DetectorUnitZ, &v143);
                        }
                      }
                      sub_72CDB0(&UnitPosition);
                      v116 = HIDWORD(UnitPosition);
                    }
                    while ( qword_4B50090 > HIDWORD(UnitPosition) );
                  }
                  sub_37A9E0(_DetectorUnitZ, &Unit_);
                  if ( *(*(v134 + 0x10) + 0x10B8i64) )
                    nullsub_3();
                  if ( PlayerInfo )
                    sub_6462F0(*(PlayerInfo + 0xA8), Unit, v136);
                  v70 = *(a1 + 0x1A);
                  DetectorUnit_ = Unit_;
                  LOBYTE(Unit) = 1;
                  LOBYTE(v72) = 1;
LABEL_71:
                  sub_4B20B0(DetectorUnit_, v70, v72);
                  return Unit;
                }
                LODWORD(Unit) = 0;
                dg_debug(3u, "scouting: failed, sphere not intersected", 0i64, 0, v126);
                v118 = Unit_;
                sub_5655B0(game);
                sub_4B2200(v118);
                if ( *(a1 + 0x1A) )
                  return Unit;
                LODWORD(Unit) = 0;
                DetectorUnit_ = v118;
                v70 = 0i64;
LABEL_70:
                v72 = 0i64;
                goto LABEL_71;
              }
            }
          }
        }
      }
    }
    v78 = *(HudInfo + 0xE5);
    v79 = (qword_4AD11A0 + 0x38 * v78);
    if ( v78 >= qword_4AD11B0 )
      v79 = &unk_4AD1168;
    if ( v78 < 0 )
      v79 = &unk_4AD1168;
    if ( !qword_4B507E8 || *(game + 0xCD) || *(game + 0xCE) )
    {
      v81 = *(game + 0x450);
      if ( v81 && *(v81 + 0x5CA) )
        v80 = (v81 + 0x620);
      else
        v80 = (game + 0x2E0);
    }
    else
    {
      v80 = (qword_4B507E8 + 0x70);
    }
    v82 = v79[7];
    v83 = *v80;
    *&UnitPosition = v83;
    if ( v83 != *(DetectorUnit + 0x12D8) )
    {
      sub_158CE00(DetectorUnit + 0x12B8, DetectorUnit, &UnitPosition);
      *(DetectorUnit + 0x12D8) = UnitPosition;
    }
    *&UnitPosition = v82;
    if ( v82 != *(DetectorUnit + 0x1300) )
    {
      sub_158CE00(DetectorUnit + 0x12E0, DetectorUnit, &UnitPosition);
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
  v62 = *(HudInfo + 0xE5);
  v63 = (qword_4AD11A0 + 0x38 * v62);
  if ( v62 >= qword_4AD11B0 )
    v63 = &unk_4AD1168;
  if ( v62 < 0 )
    v63 = &unk_4AD1168;
  if ( !qword_4B507E8 || *(game + 0xCD) || *(game + 0xCE) )
  {
    v73 = *(game + 0x450);
    if ( v73 && *(v73 + 0x5CA) )
      v64 = (v73 + 0x620);
    else
      v64 = (game + 0x2E0);
  }
  else
  {
    v64 = (qword_4B507E8 + 0x70);
  }
  v74 = v63[7];
  v75 = *v64;
  *&UnitPosition = v75;
  if ( v75 != *(DetectorUnit + 0x12D8) )
  {
    sub_158CE00(DetectorUnit + 0x12B8, DetectorUnit, &UnitPosition);
    *(DetectorUnit + 0x12D8) = UnitPosition;
  }
  *&UnitPosition = v74;
  if ( v74 != *(DetectorUnit + 0x1300) )
  {
    sub_158CE00(DetectorUnit + 0x12E0, DetectorUnit, &UnitPosition);
    *(DetectorUnit + 0x1300) = UnitPosition;
  }
  v76 = 0xFFFFFFFFFFFFFFFFui64;
  v77 = 0xFFFFFFFFFFFFFFFFui64;
LABEL_104:
  v86 = 0xFFFFFFFFFFFFFFFFui64;
  v87 = 0xFFFFFFFFFFFFFFFFui64;
  if ( v22 )
  {
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
  v145 = Unit != 0;
  LODWORD(UnitPosition) = 2;
  v147 = v92;
  v146 = 2;
  v149 = v86;
  v148 = 2;
  v151 = v91;
  v150 = 2;
  v153 = v87;
  v152 = 2;
  v155 = v77;
  v154 = 2;
  v157 = v76;
  v156 = 2;
  dg_debug(
    3u,
    "scouting: failed - !target|!GM|cansee|isVis|far_or_not_visible|live|enemy %d.%d.%d.%d.%d.%d.%d",
    &UnitPosition,
    7);
  LODWORD(Unit) = 0;
  return Unit;
}
