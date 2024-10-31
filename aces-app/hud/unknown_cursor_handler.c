__int64 __fastcall unknown_cursor_handler(__int64 cursor_visuals, float *a2, float a3)
{
  result = *&mUnit;
  if ( !*&mUnit )
    return result;
  v4 = a3;
  LODWORD(ballistics_) = *(*&mUnit + 0x1058i64);
  if ( (ballistics_ & 0x7000014) == 0 )
  {
    game_ = game;
    ballistics_ = *(game + 0x440);
    v17 = *(ballistics_ + 0x3F4);
    if ( v17 == 2 )
    {
      v18 = *(ballistics_ + 0x3F0);
      if ( v18 >= *(ballistics_ + 0x278) || *(*(*(ballistics_ + 0x268) + 8 * v18) + 0x28i64) != 1 )
        goto LABEL_23;
      if ( *(*(game + 0x430) + 0x380i64)
        && LocalUnit
        && !*(LocalUnit + 0x10B0)
        && *(*(LocalUnit + 0x4160) + 0x390i64)
        && *(LocalUnit + 0x2DD8) )
      {
        goto LABEL_424;
      }
      v17 = *(ballistics_ + 0x3F4);
    }
    if ( v17 == 0x13 )
      goto LABEL_21;
    game_ = game;
LABEL_23:
    v19 = *(*(game_ + 0x440) + 0x3F4i64);
    if ( (v19 > 0x16 || (v20 = 0x410189, !_bittest(&v20, v19)))
      && !*(game_ + 0xCD)
      && *(game_ + 0xCA)
      && (*(game_ + 0xCB) & 1) != 0
      && *&mUnit
      && !*(qword_4B176E8 + 0x1E)
      && (v36 = __ROR2__(*(*&mUnit + 0x10B0i64) - 3, 1), v36 <= 6u)
      && (v37 = 0x53, _bittest(&v37, v36)) )
    {
      v38 = *(ballistics_ + 0x3F0);
      v39 = *(ballistics_ + 0x3F4);
      if ( v38 < *(ballistics_ + 0x278) )
      {
        ballistics_ = *(*(ballistics_ + 0x268) + 8 * v38);
        if ( ballistics_ )
        {
          if ( *(ballistics_ + 0x28) == 1 )
          {
LABEL_424:
            *(cursor_visuals + 0x4A70) = 5;
            goto LABEL_3;
          }
        }
      }
      if ( v39 == 0x18 )
      {
        *(cursor_visuals + 0x4A70) = 9;
        goto LABEL_3;
      }
      if ( v39 != 0x15 && v39 != 0x14 )
      {
        if ( *(*&mUnit + 0x10B0i64) == 5 )
          *(cursor_visuals + 0x4A70) = 6;
        else
          *(cursor_visuals + 0x4A70) = 4;
        goto LABEL_3;
      }
    }
    else
    {
      if ( byte_4AD1088 )
      {
        if ( byte_4AD108B || !byte_4AD108C || byte_4AD108D )
          *(cursor_visuals + 0x4A70) = 2;
        else
          *(cursor_visuals + 0x4A70) = 1;
        goto LABEL_3;
      }
      if ( byte_4AD1089 )
      {
        *(cursor_visuals + 0x4A70) = 8;
        goto LABEL_3;
      }
      result = *(game + 0x440);
      if ( *(result + 0x3F4) != 0xB )
      {
LABEL_21:
        *(cursor_visuals + 0x4A70) = 3;
        goto LABEL_3;
      }
    }
    *(cursor_visuals + 0x4A70) = 0;
  }
LABEL_3:
  v8 = *&mUnit;
  if ( !*&mUnit )
    return result;
  result = *(*&mUnit + 0x1058i64);
  if ( (result & 0x7000014) != 0 )
    return result;
  v9 = *(game + 0x440);
  v10 = 0i64;
  v11 = 0i64;
  if ( *(*&mUnit + 0x10B0i64) == 3 )
    v11 = *&mUnit;
  v1332 = v11;
  v12 = *(v9 + 0x3F4);
  v1210 = *&mUnit;
  if ( v12 <= 0x13 )
  {
    LODWORD(ballistics_) = 0x84002;
    if ( _bittest(&ballistics_, v12) )
    {
      v13 = *(*&mUnit + 0x11D8i64);
      v14 = *(*&mUnit + 0x11E0i64);
      if ( v13 == v14 )
      {
        v10 = 0i64;
      }
      else
      {
        while ( 1 )
        {
          v15 = sub_128DEA0(*v13);
          if ( v15 )
            break;
          if ( ++v13 == v14 )
          {
            v8 = v1210;
            v10 = 0i64;
            goto LABEL_36;
          }
        }
        v10 = v15;
      }
      v8 = v1210;
    }
  }
LABEL_36:
  v21 = *(v9 + 0x3F0);
  if ( v21 < *(v9 + 0x278) && (ballistics_ = *(v9 + 0x268), (v22 = *(ballistics_ + 8 * v21)) != 0) )
  {
    v23 = *(v22 + 0x28) & 0xFFFFFFFE;
    LOBYTE(v23) = v23 == 2;
    if ( v23 && byte_4AD108E )
    {
      v1279 = 0;
      LOBYTE(v23) = 1;
      v1293.m128_i32[0] = v23;
      goto LABEL_45;
    }
  }
  else
  {
    v23 = 0;
  }
  v1293.m128_i32[0] = v23;
  cursor_mode_ = *(cursor_visuals + 0x4A70);
  if ( cursor_mode_ > 7 || (LOBYTE(ballistics_) = 1, v1279 = ballistics_, v25 = 0xD0, !_bittest(&v25, cursor_mode_)) )
    v1279 = 0;
LABEL_45:
  v1292 = v9;
  *(cursor_visuals + 0x4AE1) = 1;
  v26 = *(v8 + 0x1120);
  v27 = 0;
  if ( v26 && *(v26 + 0x2D0) )
  {
    ballistics = *(game + 0x440);
    turret_ccip = *(ballistics + 0x3F0);
    if ( turret_ccip < *(ballistics + 0x278) )
      v27 = *(*(*(ballistics + 0x268) + 8 * turret_ccip) + 0x28i64);
    LOBYTE(v27) = v27 == 5;
  }
  *(cursor_visuals + 0x4F8C) = 0xBF800000;
  v30 = *(v8 + 0x11D0);
  if ( v30 && *(v30 + 0x9C) > 0.0 )
  {
    v31 = v30[0x276];
    if ( v31 == v30[0x277] && (v31 = *(v8 + 0x11D8), v31 == *(v8 + 0x11E0)) )
      v32 = 0i64;
    else
      v32 = *v31;
    v33 = sub_128DEA0(v32);
    if ( v33 )
    {
      v34 = (*(v30 + 0x9C) + *(v33 + 0x394));
      if ( !g_net || *(game + 0xCD) || *(game + 0xCE) )
      {
        v41 = *(game + 0x450);
        if ( v41 && *(v41 + 0x5CA) )
          v35 = (v41 + 0x620);
        else
          v35 = (game + 0x2E0);
      }
      else
      {
        v35 = (g_net + 0x70);
      }
      v40 = v34 - *v35;
      *(cursor_visuals + 0x4F8C) = v40;
    }
    else
    {
      v40 = *(cursor_visuals + 0x4F8C);
    }
    v42 = *(cursor_visuals + 0x4F90);
    if ( v40 > v42 )
    {
      v1320.m256i_i32[2] = 0;
      v1320.m256i_i8[0xC] = 0;
      v1320.m256i_i64[2] = 0i64;
      DWORD2(v1329) = 3;
      *&v1330 = 0i64;
      *&v1329 = v40;
      v43 = sub_180EDC0(&v1320, "timer", 0);
      v30 = &v1336;
      sub_180E3B0(&v1336, &v1329);
      v44 = *(v43 + 8);
      v45 = v1337;
      *(v43 + 8) = v1337;
      LODWORD(v1337) = v44 | v45 & 0xFFFFFF00;
      v46 = *v43;
      *v43 = v1336;
      v1336 = v46;
      LOBYTE(v46) = *(v43 + 0xC);
      *(v43 + 0xC) = BYTE4(v1337);
      BYTE4(v1337) = v46;
      sub_180E1F0(&v1336);
      sub_180E1F0(&v1329);
      send_event("showMissileSalvoTimer", &v1320, "native");
      sub_180E1F0(&v1320);
      v40 = *(cursor_visuals + 0x4F8C);
      v42 = *(cursor_visuals + 0x4F90);
    }
    if ( v40 <= 0.0 && v42 > 0.0 )
    {
      v1320.m256i_i8[8] = 0;
      v1320.m256i_i8[0xC] = 0;
      v1320.m256i_i64[2] = 0i64;
      DWORD2(v1329) = 3;
      *&v1330 = 0i64;
      *&v1329 = 0i64;
      v30 = sub_180EDC0(&v1320, "timer", 0);
      sub_180E3B0(&v1336, &v1329);
      v47 = *(v30 + 8);
      v48 = v1337;
      *(v30 + 8) = v1337;
      LODWORD(v1337) = v47 | v48 & 0xFFFFFF00;
      v49 = *v30;
      *v30 = v1336;
      v1336 = v49;
      LOBYTE(v49) = *(v30 + 0xC);
      *(v30 + 0xC) = BYTE4(v1337);
      BYTE4(v1337) = v49;
      sub_180E1F0(&v1336);
      sub_180E1F0(&v1329);
      send_event("showMissileSalvoTimer", &v1320, "native");
      sub_180E1F0(&v1320);
      v40 = *(cursor_visuals + 0x4F8C);
    }
    *(cursor_visuals + 0x4F90) = v40;
    v8 = v1210;
  }
  v50 = *(*(game + 0x440) + 0x3F4i64);
  v51 = 0xFFFFFFFF;
  v1263 = a2;
  if ( v50 > 0x16 || (LODWORD(v30) = 0x410189, !_bittest(&v30, v50)) )
  {
    if ( !*(game + 0xCD) && *(game + 0xCA) && (*(game + 0xCB) & 1) != 0 && *&mUnit && !*(qword_4B176E8 + 0x1E) )
    {
      v51 = *(*&mUnit + 0x10B0i64);
      switch ( *(*&mUnit + 0x10B0i64) )
      {
        case 0:
          break;
        case 3:
        case 5:
        case 0xB:
          goto LABEL_92;
        default:
          v51 = 2 * (v51 == 0xF) - 1;
          break;
      }
    }
  }
  if ( ((v51 != 1) & ~v27) != 0 )
    goto LABEL_164;
LABEL_92:
  v1314.m128_u64[0] = v10;
  v52 = *(game + 0x430) + 0x3D0i64;
  v53 = *(*(v8 + 0x1120) + 0x40i64);
  v54 = &szFile;
  if ( !v53 )
    v53 = &szFile;
  v1336 = &szFile;
  v55 = data::get_str(v52, v53, &v1336);
  v56 = v55;
  if ( *(cursor_visuals + 0x4B08) )
    v54 = *(cursor_visuals + 0x4AF8);
  if ( !strcmp(v54, v55) )
    goto LABEL_160;
  *(cursor_visuals + 0x1C0) = 0;
  v57 = *(v8 + 0x1120);
  v58 = *(v57 + 0x38);
  v59 = &szFile;
  if ( !v58 )
    v58 = &szFile;
  v60 = 0x811C9DC5i64;
  v61 = *v58;
  v62 = 0x811C9DC5i64;
  if ( *v58 )
  {
    v63 = (v58 + 1);
    LODWORD(v62) = 0x811C9DC5;
    do
    {
      LODWORD(v62) = v61 ^ (0x1000193 * v62);
      v61 = *v63++;
    }
    while ( v61 );
    v62 = v62;
  }
  v64 = *(cursor_visuals + 0x328);
  Str = v56;
  if ( v62 >= v64 )
    v62 = v62 % v64;
  v65 = *(cursor_visuals + 0x320);
  v66 = *(v65 + 8 * v62);
  if ( !v66 )
    goto LABEL_106;
  while ( 1 )
  {
    v75 = 0xFFFFFFFFFFFFFFFFui64;
    do
      v76 = v58[++v75] == 0;
    while ( !v76 );
    v77 = *(v66 + 0x17);
    if ( (v77 & 0x80u) == 0i64 )
      break;
    if ( v66[1] == v75 )
      goto LABEL_125;
LABEL_118:
    v66 = v66[0x10];
    if ( !v66 )
      goto LABEL_106;
  }
  if ( 0x17 - v77 != v75 )
    goto LABEL_118;
LABEL_125:
  v78 = v66;
  if ( (v77 & 0x80u) != 0i64 )
    v78 = *v66;
  if ( memcmp(v78, v58, v75) )
    goto LABEL_118;
  v82 = *(v65 + 8 * v64);
  v83 = 0i64;
  if ( v66 != v82 )
    v83 = v66 + 3;
  if ( !Str )
  {
LABEL_106:
    v67 = v1210;
    goto LABEL_107;
  }
  a2 = v1263;
  v67 = v1210;
  if ( v66 != v82 )
  {
    v84 = strlen(Str);
    v85 = data::get_name_id(Str, v84);
    LODWORD(v86) = data::get_name_id((v83 + 3), Str, v84, v85);
    if ( v86 != 0xFFFFFFFF )
    {
      v86 = v86;
      v8 = v1210;
      v74 = Str;
      v87 = cursor_visuals + 0x4AF8;
      goto LABEL_154;
    }
    v57 = *(v1210 + 0x1120);
  }
LABEL_107:
  if ( *(v57 + 0x40) )
    v59 = *(v57 + 0x40);
  v68 = *v59;
  if ( *v59 )
  {
    v69 = (v59 + 1);
    v70 = 0x811C9DC5;
    do
    {
      v70 = v68 ^ (0x1000193 * v70);
      v68 = *v69++;
    }
    while ( v68 );
    v60 = v70;
  }
  v71 = *(cursor_visuals + 0x328);
  if ( v60 >= v71 )
    v60 = v60 % v71;
  v72 = *(cursor_visuals + 0x320);
  v73 = *(v72 + 8 * v60);
  LODWORD(v30) = 0;
  if ( !v73 )
  {
    a2 = v1263;
    v8 = v67;
    v74 = Str;
LABEL_156:
    v87 = cursor_visuals + 0x4AF8;
    goto LABEL_157;
  }
  v8 = v67;
  v74 = Str;
  while ( 2 )
  {
    v79 = 0xFFFFFFFFFFFFFFFFui64;
    do
      v76 = v59[++v79] == 0;
    while ( !v76 );
    v80 = *(v73 + 0x17);
    if ( (v80 & 0x80u) == 0i64 )
    {
      if ( 0x17 - v80 == v79 )
        goto LABEL_135;
      goto LABEL_128;
    }
    if ( v73[1] != v79 )
      goto LABEL_128;
LABEL_135:
    v81 = v73;
    if ( (v80 & 0x80u) != 0i64 )
      v81 = *v73;
    if ( memcmp(v81, v59, v79) )
    {
LABEL_128:
      v73 = v73[0x10];
      if ( !v73 )
        goto LABEL_155;
      continue;
    }
    break;
  }
  if ( v73 == *(v72 + 8 * v71) )
  {
LABEL_155:
    a2 = v1263;
    goto LABEL_156;
  }
  LODWORD(v86) = sub_5F23F0(v73 + 6, Str);
  a2 = v1263;
  v87 = cursor_visuals + 0x4AF8;
  if ( v86 < 0 )
    goto LABEL_157;
  v83 = v73 + 3;
  v86 = v86;
LABEL_154:
  LODWORD(v30) = *(*v83 + 4 * v86);
LABEL_157:
  v88 = 0;
  if ( v30 > 0 )
    v88 = v30;
  *(cursor_visuals + 0x1C0) = v88;
  sub_185590(v87, v74);
LABEL_160:
  v89 = *(cursor_visuals + 0x670);
  v10 = v1314.m128_u64[0];
  if ( COERCE_FLOAT(*(HudInfo + 0x108) ^ xmmword_44801F0) < v89 )
    *(cursor_visuals + 0x670) = v89 - a3;
  v90 = *(cursor_visuals + 0x674);
  if ( v90 > 0.0 )
    *(cursor_visuals + 0x674) = v90 - a3;
LABEL_164:
  v91 = game;
  v92 = *(*(game + 0x440) + 0x3F4i64);
  if ( v92 <= 0x16 )
  {
    v93 = 0x410189;
    if ( _bittest(&v93, v92) )
      goto LABEL_166;
  }
  if ( *(game + 0xCD) )
    goto LABEL_166;
  if ( !*(game + 0xCA) )
    goto LABEL_166;
  v91 = *(game + 0xCB);
  if ( (v91 & 1) == 0 )
    goto LABEL_166;
  if ( !*&mUnit )
    goto LABEL_166;
  v91 = qword_4B176E8;
  if ( *(qword_4B176E8 + 0x1E) )
    goto LABEL_166;
  v269 = __ROR2__(*(*&mUnit + 0x10B0i64) - 3, 1);
  if ( v269 > 6u )
    goto LABEL_166;
  v91 = 0x53i64;
  if ( !_bittest(&v91, v269) )
    goto LABEL_166;
  v91 = *(cursor_visuals + 0x218);
  v270 = *(v91 + 0xE8i64 * *(cursor_visuals + 0x1C0) + 0xCA);
  *(cursor_visuals + 0x4AE1) = v270;
  if ( v270 )
    *(cursor_visuals + 0x4A90) = *(cursor_visuals + 0x4A80);
  else
    *(cursor_visuals + 0x4A80) = 0i64;
  if ( v10 )
  {
LABEL_166:
    v94 = v10 != 0i64;
    if ( v10 && byte_4AD1064 )
    {
      Unit_PositionZ = *(v10 + 0xBA);
      LODWORD(v30) = v10;
      Unit_Position = *(v10 + 0x5C);
      v1337 = 0x3F80000000000000i64;
      v1336 = 0i64;
      v1338 = *&dword_44A47B8 * qword_4AD1040;
      v1339 = *(&qword_4AD1040 + 1) * *&dword_44A47B8;
      v1340 = 0.0;
      sub_160B180(v91, v92, &v1336);
      v95 = ((*&v1336 * *&v1337) - (*(&v1337 + 1) * *(&v1336 + 1)))
          + ((*&v1336 * *&v1337) - (*(&v1337 + 1) * *(&v1336 + 1)));
      v96 = ((*&v1337 * *(&v1337 + 1)) + (*(&v1336 + 1) * *&v1336))
          + ((*&v1337 * *(&v1337 + 1)) + (*(&v1336 + 1) * *&v1336));
      v97 = (((*(&v1337 + 1) * *(&v1337 + 1)) + (*&v1336 * *&v1336))
           + ((*(&v1337 + 1) * *(&v1337 + 1)) + (*&v1336 * *&v1336)))
          + *&dword_44801E8;
      v98 = fsqrt(((v95 * v95) + (v96 * v96)) + (v97 * v97));
      v99 = 0.0;
      if ( v98 > *&dword_449F1A8 )
        v99 = Y / v98;
      *&qword_4AD1030 = v97 * v99;
      *(&qword_4AD1030 + 1) = v96 * v99;
      *&dword_4AD1038 = v95 * v99;
      v94 = 1;
    }
  }
  else
  {
    v30 = *&qword_4AD1040;
    v1320.m256i_i64[0] = *&qword_4AD1040;
    if ( (v1293.m128_i8[0] | v1279 ^ 1) == 1 )
    {
      v890 = *&dword_4AD1008 - *&dword_4AD1014;
      v891 = *(&qword_4AD1000 + 1) - *(&qword_4AD100C + 1);
      v892 = *&qword_4AD1000 - *&qword_4AD100C;
      v893 = fsqrt(((v890 * v890) + (v891 * v891)) + (v892 * v892));
      v894 = 0.0;
      if ( v893 > *&dword_449F1A8 )
        v894 = Y / v893;
      v895 = v890 * v894;
      v896 = v892 * v894;
      v897 = atan2f(v891 * v894, fsqrt((v895 * v895) + (v896 * v896)));
      atan2f(v895, v896);
      v1320.m256i_i32[0] = LODWORD(v895) ^ xmmword_44801F0;
      *&v1320.m256i_i32[1] = v897;
    }
    if ( *(v8 + 0x4E8) )
    {
      dword_4AD1020 = dword_4AD1014;
      qword_4AD1018 = qword_4AD100C;
    }
    else
    {
      sub_FE71F0(v8, &v1320, v1279);
      sub_FE77D0(v8);
      v30 = *&qword_4AD1040;
    }
    v924 = _mm_cvtsi32_si128(v30);
    v925 = _mm_cvtsi32_si128(HIDWORD(v30));
    if ( v1279 )
    {
      v926 = _mm_blend_ps(0i64, v925, 1);
      v925.m128_f32[0] = v925.m128_f32[0] * *&dword_44A4134;
      v927 = _mm_cvttps_epi32(_mm_add_ps(_mm_or_ps(_mm_and_ps(v926, xmmword_44801F0), xmmword_44A4140), _mm_blend_ps(v925, 0i64, 0xE)));
      v928 = _mm_sub_ps(v926, _mm_mul_ps(_mm_cvtepi32_ps(v927), xmmword_44AA530));
      v929 = _mm_mul_ps(v928, v928);
      v930 = _mm_add_ps(
               _mm_mul_ps(
                 _mm_add_ps(
                   _mm_mul_ps(_mm_sub_ps(xmmword_44A4190, _mm_mul_ps(v929, xmmword_44A9660)), v929),
                   xmmword_44A41B0),
                 _mm_mul_ps(v929, v928)),
               v928);
      v931 = _mm_sub_epi32(_mm_and_ps(v927, xmmword_4487E40), 0xFFFFFFFFFFFFFFFFui64);
      v932 = _mm_add_ps(
               _mm_mul_ps(
                 _mm_add_ps(
                   _mm_mul_ps(_mm_sub_ps(xmmword_44A4170, _mm_mul_ps(v929, xmmword_44A9650)), v929),
                   xmmword_44A41A0),
                 v929),
               xmmword_44A01E0);
      v933 = _mm_blendv_ps(v932, v930, _mm_cmpeq_epi32(_mm_and_si128(v931, xmmword_4487E30), 0i64));
      si128 = _mm_load_si128(&xmmword_4487F40);
      v935 = _mm_blendv_ps(_mm_xor_ps(v933, xmmword_44801F0), v933, _mm_cmpeq_epi32(_mm_and_si128(v931, si128), 0i64)).m128_f32[0];
      v936 = _mm_blend_epi16(_mm_xor_si128(v924, xmmword_44801F0), 0i64, 0xFC);
      *v924.m128i_i32 = *v924.m128i_i32 * *&dword_44A9648;
      v937 = _mm_cvttps_epi32(
               _mm_add_ps(
                 _mm_or_si128(_mm_and_si128(v936, xmmword_44801F0), xmmword_44A4140),
                 _mm_blend_ps(v924, 0i64, 0xE)));
      v938 = _mm_sub_epi32(_mm_and_ps(xmmword_4487E40, v937), 0xFFFFFFFFFFFFFFFFui64);
      v939 = _mm_sub_ps(v936, _mm_mul_ps(_mm_cvtepi32_ps(v937), xmmword_44AA530));
      v940 = _mm_mul_ps(v939, v939);
      v941 = _mm_add_ps(
               _mm_mul_ps(
                 _mm_add_ps(
                   _mm_mul_ps(_mm_sub_ps(xmmword_44A4190, _mm_mul_ps(xmmword_44A9660, v940)), v940),
                   xmmword_44A41B0),
                 _mm_mul_ps(v940, v939)),
               v939);
      v942 = _mm_load_si128(&xmmword_4487E30);
      v943 = _mm_add_ps(
               _mm_mul_ps(
                 _mm_add_ps(
                   _mm_mul_ps(_mm_sub_ps(xmmword_44A4170, _mm_mul_ps(xmmword_44A9650, v940)), v940),
                   xmmword_44A41A0),
                 v940),
               xmmword_44A01E0);
      v944 = _mm_blendv_ps(v943, v941, _mm_cmpeq_epi32(_mm_and_si128(v938, v942), 0i64));
      v945 = _mm_blendv_ps(v943, v941, _mm_cmpeq_epi32(_mm_and_ps(v937, v942), 0i64));
      v946 = _mm_blendv_ps(v932, v930, _mm_cmpeq_epi32(_mm_and_ps(v927, v942), 0i64));
      v947 = _mm_blendv_ps(_mm_xor_ps(v944, xmmword_44801F0), v944, _mm_cmpeq_epi32(_mm_and_si128(v938, si128), 0i64)).m128_f32[0]
           * v935;
      v948 = _mm_blendv_ps(_mm_xor_ps(v945, xmmword_44801F0), v945, _mm_cmpeq_epi32(_mm_and_ps(v937, si128), 0i64)).m128_f32[0]
           * v935;
      v949 = _mm_blendv_ps(_mm_xor_ps(xmmword_44801F0, v946), v946, _mm_cmpeq_epi32(_mm_and_ps(si128, v927), 0i64)).m128_f32[0];
      v950 = fsqrt((v948 * v948) + ((v949 * v949) + (v947 * v947)));
      v951 = 0.0;
      if ( v950 > *&dword_449F1A8 )
        v951 = Y / v950;
      v952 = v947 * v951;
      v953 = v949 * v951;
      v954 = &qword_4AD100C;
      if ( v1293.m128_i8[0] )
        v954 = &qword_4AD1018;
      v955 = v948 * v951;
      v956 = *v954;
      v957 = &qword_4AD100C + 1;
      if ( v1293.m128_i8[0] )
        v957 = &qword_4AD1018 + 1;
      v958 = *v957;
      v959 = &dword_4AD1014;
      if ( v1293.m128_i8[0] )
        v959 = &dword_4AD1020;
      v960 = (((*&Unit_PositionZ - *v959) * v955)
            + (((*(&Unit_Position + 1) - v958) * v953) + fmaxf(*(cursor_visuals + 0x654), *(cursor_visuals + 0x638))))
           + ((*&Unit_Position - v956) * v952);
      v961 = (*v959 - *&Unit_PositionZ) + (v955 * v960);
      v962 = (v956 - *&Unit_Position) + (v960 * v952);
      *&qword_4AD1030 = v962;
      *(&qword_4AD1030 + 1) = (v958 - *(&Unit_Position + 1)) + (v953 * v960);
      dword_4AD1038 = LODWORD(v961);
      v925.m128_i32[0] = atan2f(*(&qword_4AD1030 + 1), fsqrt((v961 * v961) + (v962 * v962)));
      atan2f(v961, v962);
      v924.m128i_i32[0] = LODWORD(v961) ^ xmmword_44801F0;
      v1320.m256i_i32[0] = LODWORD(v961) ^ xmmword_44801F0;
      v4 = a3;
    }
    else
    {
      v1320.m256i_i64[0] = v30;
    }
    v963 = *(v8 + 0x10B0);
    if ( v963 <= 0xF )
    {
      v964 = 0x897E;
      if ( _bittest(&v964, v963) )
      {
        if ( (*(*v8 + 0x270i64))(v8) )
        {
          (*(*v8 + 0x268i64))(v8, &v1336);
          Unit_PositionZ = v1337;
          Unit_Position = v1336;
          v965 = v925.m128_f32[0] + *(cursor_visuals + 0x4A84);
          *&v1320.m256i_i32[1] = v965;
          *(cursor_visuals + 0x4A88) = 0i64;
          if ( v1332 && *(v1332 + 0x31F1) && sub_3305C0() && (*(*v1332 + 0xA0i64))(v1332) && !sub_872380(v1332) )
          {
            v966 = *(v1332 + 0x3204);
            *v1320.m256i_i32 = *v924.m128i_i32 - v966;
            v967 = *(v1332 + 0x3208);
            *&v1320.m256i_i32[1] = v965 - v967;
            v968 = LODWORD(v967) ^ xmmword_44801F0;
            *(cursor_visuals + 0x4A88) = LODWORD(v966) ^ xmmword_44801F0;
            *(cursor_visuals + 0x4A8C) = v968;
          }
          v969 = _mm_cvtsi32_si128(v1320.m256i_u32[0]);
          v970 = _mm_load_si128(&xmmword_44801F0);
          v971 = _mm_blend_epi16(_mm_xor_si128(v969, v970), 0i64, 0xFC);
          *v969.m128i_i32 = *v969.m128i_i32 * *&dword_44A9648;
          v972 = _mm_cvttps_epi32(_mm_add_ps(_mm_or_si128(_mm_and_si128(v971, v970), xmmword_44A4140), _mm_blend_ps(v969, 0i64, 0xE)));
          v973 = _mm_sub_ps(v971, _mm_mul_ps(_mm_cvtepi32_ps(v972), xmmword_44AA530));
          v974 = _mm_mul_ps(v973, v973);
          v975 = _mm_add_ps(
                   _mm_mul_ps(
                     _mm_add_ps(
                       _mm_mul_ps(_mm_sub_ps(xmmword_44A4170, _mm_mul_ps(v974, xmmword_44A9650)), v974),
                       xmmword_44A41A0),
                     v974),
                   xmmword_44A01E0);
          v976 = _mm_add_ps(
                   _mm_mul_ps(
                     _mm_add_ps(
                       _mm_mul_ps(_mm_sub_ps(xmmword_44A4190, _mm_mul_ps(v974, xmmword_44A9660)), v974),
                       xmmword_44A41B0),
                     _mm_mul_ps(v974, v973)),
                   v973);
          v977 = _mm_blendv_ps(v975, v976, _mm_cmpeq_epi32(_mm_and_ps(v972, xmmword_4487E30), 0i64));
          v978 = _mm_sub_epi32(_mm_and_ps(v972, xmmword_4487E40), 0xFFFFFFFFFFFFFFFFui64);
          v979 = _mm_blendv_ps(v975, v976, _mm_cmpeq_epi32(_mm_and_si128(v978, xmmword_4487E30), 0i64));
          v980 = _mm_blendv_ps(_mm_xor_ps(v977, v970), v977, _mm_cmpeq_epi32(_mm_and_ps(v972, xmmword_4487F40), 0i64)).m128_f32[0];
          v981 = _mm_blendv_ps(
                   _mm_xor_ps(v979, v970),
                   v979,
                   _mm_cmpeq_epi32(_mm_and_si128(v978, xmmword_4487F40), 0i64)).m128_f32[0];
          v982 = _mm_cvtsi32_si128(v1320.m256i_u32[1]);
          v983 = _mm_blend_epi16(0i64, v982, 3);
          *v982.m128i_i32 = *v982.m128i_i32 * *&dword_44A4134;
          v984 = _mm_cvttps_epi32(_mm_add_ps(_mm_or_si128(_mm_and_si128(v983, v970), xmmword_44A4140), _mm_blend_ps(v982, 0i64, 0xE)));
          v985 = _mm_sub_epi32(_mm_and_ps(xmmword_4487E40, v984), xmmword_4480100);
          v986 = _mm_sub_ps(v983, _mm_mul_ps(_mm_cvtepi32_ps(v984), xmmword_44AA530));
          v987 = _mm_mul_ps(v986, v986);
          v988 = _mm_add_ps(
                   _mm_mul_ps(
                     _mm_add_ps(
                       _mm_mul_ps(_mm_sub_ps(xmmword_44A4170, _mm_mul_ps(xmmword_44A9650, v987)), v987),
                       xmmword_44A41A0),
                     v987),
                   xmmword_44A01E0);
          v989 = _mm_add_ps(
                   _mm_mul_ps(
                     _mm_add_ps(
                       _mm_mul_ps(_mm_sub_ps(xmmword_44A4190, _mm_mul_ps(xmmword_44A9660, v987)), v987),
                       xmmword_44A41B0),
                     _mm_mul_ps(v987, v986)),
                   v986);
          v990 = _mm_blendv_ps(v988, v989, _mm_cmpeq_epi32(_mm_and_ps(v984, xmmword_4487E30), 0i64));
          v991 = _mm_blendv_ps(v988, v989, _mm_cmpeq_epi32(_mm_and_si128(xmmword_4487E30, v985), 0i64));
          LODWORD(v992) = _mm_blendv_ps(
                            _mm_xor_ps(v990, v970),
                            v990,
                            _mm_cmpeq_epi32(_mm_and_ps(v984, xmmword_4487F40), 0i64)).m128_u32[0];
          *v970.m128i_i32 = _mm_blendv_ps(
                              _mm_xor_ps(v970, v991),
                              v991,
                              _mm_cmpeq_epi32(_mm_and_si128(v985, xmmword_4487F40), 0i64)).m128_f32[0];
          v993 = v980 * *v970.m128i_i32;
          v994 = *v970.m128i_i32 * v981;
          v4 = a3;
        }
        else
        {
          Unit_PositionZ = *(v8 + 0x9C8);
          Unit_Position = *(v8 + 0x9C0);
          v995 = fsqrt(
                   (*&dword_4AD1038 * *&dword_4AD1038)
                 + ((*(&qword_4AD1030 + 1) * *(&qword_4AD1030 + 1)) + (*&qword_4AD1030 * *&qword_4AD1030)));
          v996 = 0.0;
          if ( v995 > *&dword_449F1A8 )
            v996 = Y / v995;
          v993 = *&dword_4AD1038 * v996;
          v992 = *(&qword_4AD1030 + 1) * v996;
          v994 = *&qword_4AD1030 * v996;
        }
        *&qword_4AD1030 = v994;
        *(&qword_4AD1030 + 1) = v992;
        dword_4AD1038 = LODWORD(v993);
        LOWORD(v963) = *(v8 + 0x10B0);
      }
    }
    if ( v963 == 0xF )
    {
      if ( (*(*v8 + 0x270i64))(v8) )
      {
        (*(*v8 + 0x268i64))(v8, &v1336);
      }
      else
      {
        LODWORD(v1337) = *(v8 + 0x9C8);
        v1336 = *(v8 + 0x9C0);
      }
      Unit_PositionZ = v1337;
      Unit_Position = v1336;
      LOWORD(v963) = *(v8 + 0x10B0);
    }
    if ( v963 == 0xB )
    {
      v1010 = *(cursor_visuals + 0x604);
      *(cursor_visuals + 0x650) = v1010;
      v1011 = *(cursor_visuals + 0x5FC);
      *(cursor_visuals + 0x648) = v1011;
      dword_4AD0FFC = v1010;
      qword_4AD0FF4 = v1011;
      v94 = 0;
    }
    else if ( v963 == 5 )
    {
      v1005 = *(cursor_visuals + 0x4A98);
      v1006 = 0.0;
      if ( v1005 == 0.0 )
      {
        v1007 = Y;
        v1008 = 0.0;
        v1009 = 0.0;
      }
      else
      {
        cosf(*(cursor_visuals + 0x4A98));
        v1007 = v1005;
        v1009 = sinf(v1005);
        LODWORD(v1008) = LODWORD(v1005) ^ xmmword_44801F0;
      }
      v1015 = (v1008 * *&dword_4AD1038) + (*&qword_4AD1030 * v1007);
      v1016 = (*&dword_4AD1038 * v1007) + (v1009 * *&qword_4AD1030);
      v1017 = fsqrt((v1016 * v1016) + ((*(&qword_4AD1030 + 1) * *(&qword_4AD1030 + 1)) + (v1015 * v1015)));
      if ( v1017 > *&dword_449F1A8 )
        v1006 = Y / v1017;
      v1018 = v1016 * v1006;
      v1019 = *(cursor_visuals + 0x640);
      v1020 = v1015 * v1006;
      v1021 = ((v1019 - *(cursor_visuals + 0x4A80)) * (*(&qword_4AD1030 + 1) * v1006)) + *(&Unit_Position + 1);
      *&qword_4AD0FF4 = (v1019 * v1020) + *&Unit_Position;
      *(&qword_4AD0FF4 + 1) = v1021;
      *&dword_4AD0FFC = (v1018 * v1019) + *&Unit_PositionZ;
      v1022 = *(cursor_visuals + 0x644);
      v1023 = (v1018 * v1022) + *&Unit_PositionZ;
      v1024 = ((*(&qword_4AD1030 + 1) * v1006) * v1022) + *(&Unit_Position + 1);
      *(cursor_visuals + 0x648) = (v1020 * v1022) + *&Unit_Position;
      *(cursor_visuals + 0x64C) = v1024;
      *(cursor_visuals + 0x650) = v1023;
      v94 = 0;
    }
    else
    {
      v1012 = *(cursor_visuals + 0x640);
      v1013 = (*&dword_4AD1038 * v1012) + *&Unit_PositionZ;
      v1014 = (*(&qword_4AD1030 + 1) * v1012) + *(&Unit_Position + 1);
      *(cursor_visuals + 0x648) = (v1012 * *&qword_4AD1030) + *&Unit_Position;
      *(cursor_visuals + 0x64C) = v1014;
      *(cursor_visuals + 0x650) = v1013;
      dword_4AD0FFC = *(cursor_visuals + 0x650);
      qword_4AD0FF4 = *(cursor_visuals + 0x648);
      v94 = 0;
    }
  }
  v100 = 0i64;
  *(cursor_visuals + 0xACC) = fmaxf(*(cursor_visuals + 0xACC) - v4, 0.0);
  if ( *(cursor_visuals + 0x4A38) )
  {
    v101 = v4 / *(cursor_visuals + 0x4A18);
    v102 = *(cursor_visuals + 0x4A28);
    if ( v102 == *(cursor_visuals + 0x4A20) )
    {
      v104 = *(cursor_visuals + 0x4A34);
LABEL_176:
      v105 = (v101 + v101) + v104;
    }
    else
    {
      v103 = *(cursor_visuals + 0x4A30) + v101;
      *(cursor_visuals + 0x4A30) = v103;
      if ( v103 > Y )
      {
        *(cursor_visuals + 0x4A30) = 0;
        *(cursor_visuals + 0x4A20) = v102;
        v104 = 0.0;
        goto LABEL_176;
      }
      v105 = *(cursor_visuals + 0x4A34) - v101;
    }
    *(cursor_visuals + 0x4A34) = fminf(fmaxf(0.0, v105), Y);
  }
  v106 = 0i64;
  v76 = *(v8 + 0x10B0) == 0;
  v107 = v8;
  v108 = 0i64;
  v109 = v107;
  if ( v76 )
    v108 = v107;
  if ( !LocalUnit )
  {
LABEL_189:
    v112 = 0i64;
    goto LABEL_190;
  }
  if ( (*(LocalUnit + 0x1058) & 0x7000014) != 0
    || (v110 = *(cursor_visuals + 0x69C),
        LODWORD(v111) = COERCE_UNSIGNED_INT(*&dword_44801E8 + v110) & xmmword_449AF40,
        v111 <= *&dword_44A05D0)
    || v111 <= (fmaxf(COERCE_FLOAT(xmmword_449AF40 & LODWORD(v110)), Y) * *&dword_44A0308)
    || (v112 = *(LocalUnit + 0xFA0), v110 >= v112.m128_f32[0]) )
  {
    v106 = 0i64;
    goto LABEL_189;
  }
  v112.m128_f32[0] = (v112.m128_f32[0] - v110) / (Y - v110);
  if ( v112.m128_f32[0] >= Y )
  {
    v100 = *(cursor_visuals + 0x7AC);
    v100.m128_f32[0] = ((v100.m128_f32[0] - *(cursor_visuals + 0x7A8))
                      * fminf(fmaxf(0.0, *&dword_44801E8 + v112.m128_f32[0]), Y))
                     + *(cursor_visuals + 0x7A8);
    LOBYTE(v106) = 1;
  }
  else
  {
    v106 = 0i64;
  }
LABEL_190:
  v100.m128_f32[0] = (v100.m128_f32[0] * v4) + *(cursor_visuals + 0xAC0);
  v113 = Y;
  *(cursor_visuals + 0xAC0) = _mm_andnot_ps(
                                _mm_cmplt_ss(v112, LODWORD(Y)),
                                _mm_andnot_ps(_mm_cmplt_ss(LODWORD(Y), v100), v100)).m128_u32[0];
  v114 = !v94;
  v1300 = v112.m128_f32[0];
  if ( !v94 || byte_4AD1064 == 0 )
  {
    v119 = *(v107 + 0x9C0);
    v120 = *(v107 + 0x9C4);
    v121 = *(v107 + 0x9C8);
    v122 = *(v107 + 0x99C);
    v123 = *(v107 + 0x9AC);
    v1321 = *(v107 + 0x9BC);
    *&v1320.m256i_u64[2] = v123;
    *v1320.m256i_i8 = v122;
  }
  else
  {
    v115 = v10[0xBB];
    v116 = v10[0xBC];
    v117 = v10[0xBD];
    v118 = v10[0xBE];
    if ( v115 == 0.0 && v116 == 0.0 && v117 == 0.0 && v118 == 0.0 )
    {
      memset(v1320.m256i_i64 + 4, 0, 0x1C);
      LODWORD(v1321) = 0x3F800000;
      v1320.m256i_i32[4] = 0x3F800000;
      v1320.m256i_i32[0] = 0x3F800000;
    }
    else
    {
      v124 = v118 * v118;
      *v1320.m256i_i32 = (((v115 * v115) + (v118 * v118)) + ((v115 * v115) + (v118 * v118))) + *&dword_44801E8;
      *&v1320.m256i_i32[3] = ((v116 * v115) - (v118 * v117)) + ((v116 * v115) - (v118 * v117));
      v125 = v118 * v116;
      *&v1320.m256i_i32[6] = ((v118 * v116) + (v117 * v115)) + ((v118 * v116) + (v117 * v115));
      *&v1320.m256i_i32[1] = ((v118 * v117) + (v116 * v115)) + ((v118 * v117) + (v116 * v115));
      v126 = v117 * v116;
      *&v1320.m256i_i32[4] = (((v116 * v116) + (v118 * v118)) + ((v116 * v116) + (v118 * v118))) + *&dword_44801E8;
      v127 = v118 * v115;
      *&v1320.m256i_i32[7] = (v126 - v127) + (v126 - v127);
      *&v1320.m256i_i32[2] = ((v117 * v115) - v125) + ((v117 * v115) - v125);
      *&v1320.m256i_i32[5] = (v127 + v126) + (v127 + v126);
      *&v1321 = (((v117 * v117) + v124) + ((v117 * v117) + v124)) + *&dword_44801E8;
    }
    v119 = v10[0xB8];
    v120 = v10[0xB9];
    v121 = v10[0xBA];
    *(&v1321 + 3) = v121;
    *(&v1321 + 4) = *(v10 + 0x5C);
  }
  v1322 = 0i64;
  v1323 = 0.0;
  v1315 = 0i64;
  v1316 = 0.0;
  v1359 = v106;
  if ( game && (!g_net || !*(g_net + 0x60)) && LocalPlayer && (*(LocalPlayer + 0x1B8) & 0x20) != 0 )
  {
    v273 = *(*(game + 0x440) + 0x3F4i64);
    if ( v273 >= 0x17 || (LOBYTE(v30) = 1, v1301 = v30, v274 = 0x410189, !_bittest(&v274, v273)) )
    {
      LOBYTE(v273) = 1;
      v1301 = v273;
      if ( !*(game + 0xCD) )
      {
        if ( *(game + 0xCA) )
        {
          if ( (*(game + 0xCB) & 1) != 0 )
          {
            if ( *&mUnit )
            {
              if ( !*(qword_4B176E8 + 0x1E) )
              {
                LOWORD(v271) = __ROR2__(*(*&mUnit + 0x10B0i64) - 3, 1);
                if ( v271 <= 6u )
                {
                  v271 = v271;
                  v275 = 0x53;
                  if ( _bittest(&v275, v271) )
                  {
                    *(cursor_visuals + 0x5F8) = 0;
                    goto LABEL_291;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_209:
    v131 = v1292;
    v132 = *(v1292 + 0x3F4);
    if ( v132 <= 0xF && (v133 = 0xC200, _bittest(&v133, v132)) || (*(v109 + 0x1083) & 8) != 0 && v132 == 1 && v94 )
    {
      v134 = *(&qword_4AD0FF4 + 1);
      v135 = dword_4AD0FFC;
      v1221 = *&qword_4AD0FF4;
      *(cursor_visuals + 0x5FC) = qword_4AD0FF4;
      v1217 = v134;
      *(cursor_visuals + 0x600) = v134;
      v1225 = *&v135;
      *(cursor_visuals + 0x604) = *&v135;
LABEL_212:
      v1294 = dword_4492C80;
      v1327 = 0.0;
      goto LABEL_213;
    }
    if ( v132 == 1 && byte_4AD1088 )
    {
      v267 = (*&dword_4AD1038 * *&dword_4489714) + v121;
      v268 = (*(&qword_4AD1030 + 1) * *&dword_4489714) + v120;
      v1221 = (*&dword_4489714 * *&qword_4AD1030) + v119;
      *(cursor_visuals + 0x5FC) = v1221;
      v1217 = v268;
      *(cursor_visuals + 0x600) = v268;
      v1225 = v267;
      *(cursor_visuals + 0x604) = v267;
      goto LABEL_212;
    }
    v287 = 0i64;
    if ( !*(v109 + 0x10B0) )
      v287 = v109;
    v288 = game;
    v289 = *(*(game + 0x430) + 0x2C0i64);
    if ( v289 <= 0 )
      v290 = dword_4492C80;
    else
      v290 = v289;
    v1294 = v290;
    v387 = Y;
    if ( v287 )
    {
      v388 = *(*(v287 + 0x4160) + 0x504i64);
      v389 = 0i64;
      v390 = 0.0;
      if ( *&v388 != 0.0 )
      {
        cosf(*&v388);
        v387 = *&v388;
        v389 = v388;
        *&v389 = sinf(*&v388);
        LODWORD(v390) = v388 ^ xmmword_44801F0;
      }
    }
    else
    {
      v389 = 0i64;
      v390 = 0.0;
    }
    Stre = v390;
    v391 = v390 * v1294;
    v392 = *(&v1321 + 1);
    v393 = v1320.m256i_i32[0];
    v394 = *&v1320.m256i_i32[1];
    v395 = v1320.m256i_i32[3];
    v396 = *(&v1321 + 2);
    v397 = *&v1320.m256i_i32[4];
    v398 = (*&v1320.m256i_i32[4] * v391) + ((*&v1320.m256i_i32[1] * (v387 * v1294)) + *(&v1321 + 2));
    v399 = HIDWORD(v1321);
    v400 = *&v1320.m256i_i32[2];
    v1327 = v387 * v1294;
    v1282 = *&v1320.m256i_i32[5];
    v1326 = v391;
    v401 = (*&v1320.m256i_i32[5] * v391) + ((*&v1320.m256i_i32[2] * (v387 * v1294)) + *(&v1321 + 3));
    v1221 = (*&v1320.m256i_i32[3] * v391) + ((*v1320.m256i_i32 * (v387 * v1294)) + *(&v1321 + 1));
    *(cursor_visuals + 0x5FC) = v1221;
    v1217 = v398;
    *(cursor_visuals + 0x600) = v398;
    v1225 = v401;
    *(cursor_visuals + 0x604) = v401;
    if ( !v287 )
    {
LABEL_704:
      v131 = v1292;
      goto LABEL_214;
    }
    v402 = v288[0x88];
    v76 = *(v402 + 0x2A50) == 0;
    v1293.m128_i32[0] = v393;
    v1314.m128_i32[0] = v395;
    v1288 = v392;
    v1260 = v387;
    if ( !v76 )
    {
      v403 = *(v402 + 0xAF4);
      v404 = *(v402 + 0xAF8);
      v405 = *(v402 + 0xAFC);
      v406 = *(v109 + 0x99C) * v403;
      v407 = *(v109 + 0x9A0) * v403;
      v408 = (((v403 * *(v109 + 0x9A4)) + *(v402 + 0x2A74)) + ((v405 * *(v109 + 0x9BC)) + (v404 * *(v109 + 0x9B0))))
           + *(v109 + 0x9C8);
      v409 = ((v407 + *(v402 + 0x2A70)) + ((*(v109 + 0x9B8) * v405) + (*(v109 + 0x9AC) * v404))) + *(v109 + 0x9C4);
      *(cursor_visuals + 0x5FC) = ((v406 + *(v402 + 0x2A6C)) + ((*(v109 + 0x9B4) * v405) + (*(v109 + 0x9A8) * v404)))
                                + *(v109 + 0x9C0);
      *(cursor_visuals + 0x600) = v409;
      *(cursor_visuals + 0x604) = v408;
      goto LABEL_700;
    }
    if ( *(v402 + 0x2244) )
    {
      *(cursor_visuals + 0x604) = *(v402 + 0x2240);
      v628 = *(v402 + 0x2238);
    }
    else
    {
      if ( !*(v402 + 0x220C) || (v695 = v288[0x86], !*(v695 + 0x311)) || !*(v695 + 0xD7) )
      {
LABEL_700:
        v629 = *(v287 + 0x2DD8);
        if ( v629 )
        {
          v630 = *(v629 + 0x23D8);
          v131 = v1292;
          v1319 = v389;
          v1230 = v396;
          v1347.m128_i32[0] = v399;
          v631 = v397;
          v1252 = v397 * v1293.m128_f32[0];
          v1235 = v394;
          v632 = ((*&v1320.m256i_i32[7] * v1314.m128_f32[0]) * v400)
               + ((*&v1320.m256i_i32[6] * (v1282 * v394)) + (*&v1321 * (v397 * v1293.m128_f32[0])));
          v633 = (*&v1320.m256i_i32[7] * v1314.m128_f32[0]) - (*&v1320.m256i_i32[6] * v397);
          v634 = (*&v1320.m256i_i32[6] * v397) * v400;
          v635 = (*&v1320.m256i_i32[7] * v400) - (*&v1321 * v394);
          v636 = Y
               / (v632
                - (((*&v1320.m256i_i32[7] * (v1282 * v1293.m128_f32[0])) + ((*&v1321 * v394) * v1314.m128_f32[0])) + v634));
          v1212 = v631;
          v637 = (v1282 * v394) - (v400 * v631);
          v1208 = *&v1321;
          v638 = (*&v1321 * v1293.m128_f32[0]) - (*&v1320.m256i_i32[6] * v400);
          v1215 = v400;
          v639 = (v400 * v1314.m128_f32[0]) - (v1282 * v1293.m128_f32[0]);
          LODWORD(v1307) = v1320.m256i_i32[7];
          LODWORD(v1309) = v1320.m256i_i32[6];
          v640 = ((*&v1321 * v631) - (*&v1320.m256i_i32[7] * v1282)) * v636;
          v641 = v635 * v636;
          v642 = v635 * v636;
          v643 = v637 * v636;
          v644 = ((*&v1320.m256i_i32[6] * v1282) - (*&v1321 * v1314.m128_f32[0])) * v636;
          v113 = v638 * v636;
          v645 = v639 * v636;
          v646 = v633 * v636;
          v647 = ((*&v1320.m256i_i32[6] * v1235) - (*&v1320.m256i_i32[7] * v1293.m128_f32[0])) * v636;
          v648 = (v1252 - (v1235 * v1314.m128_f32[0])) * v636;
          switch ( v630 )
          {
            case 0i64:
            case 1i64:
              v649 = v288[0x88];
              if ( *(v649 + 0x220C) )
              {
                v1253 = v643;
                v650 = (*(v649 + 0x2218) * v646) + (*(v649 + 0x2214) * v644);
                v651 = v648;
                v652 = v646;
                v653 = *(v649 + 0x2210) * v640;
                v654 = v1347.m128_f32[0];
                v655 = v396;
                v656 = (v644 * v396) + ((v652 * v1347.m128_f32[0]) + (v640 * v1288));
                v657 = v1288;
                v658 = (v653 - v656) + v650;
                v659 = ((*(v649 + 0x2210) * v642) - ((v113 * v396) + ((v647 * v1347.m128_f32[0]) + (v642 * v1288))))
                     + ((*(v649 + 0x2218) * v647) + (*(v649 + 0x2214) * v113));
                v660 = ((*(v649 + 0x2210) * v1253) - ((v645 * v396) + ((v651 * v1347.m128_f32[0]) + (v1253 * v1288))))
                     + ((*(v649 + 0x2218) * v651) + (*(v649 + 0x2214) * v645));
                v113 = Y;
              }
              else
              {
                v658 = *(v288[0x93] + 0x2768i64);
                v659 = 0.0;
                v660 = 0.0;
                v113 = Y;
                v654 = v1347.m128_f32[0];
                v655 = v1230;
                v657 = v1288;
              }
              *&v886 = (*&v1319 * v659) + (v658 * v1260);
              *&v887 = (v659 * v1260) + (Stre * v658);
              *&v888 = (((*&v1309 * v660) + v657) + (v1293.m128_f32[0] * *&v886)) + (v1314.m128_f32[0] * *&v887);
              *&v889 = (((*&v1307 * v660) + v655) + (v1235 * *&v886)) + (v1212 * *&v887);
              v1322 = __PAIR64__(v887, v886);
              v1323 = v660;
              v1315 = __PAIR64__(v889, v888);
              v1316 = (((*&v1321 * v660) + v654) + (*&v886 * v1215)) + (*&v887 * v1282);
              *(cursor_visuals + 0xA84) = __PAIR64__(v889, v888);
              *(cursor_visuals + 0xA8C) = v1316;
              *(cursor_visuals + 0xABE) = 1;
              goto LABEL_214;
            case 2i64:
              v703 = v288[0x88];
              if ( !*(v703 + 0x2244) )
                goto LABEL_772;
              v697 = v1347.m128_f32[0];
              v698 = *(v703 + 0x2240) - v1347.m128_f32[0];
              v699 = v396;
              v700 = *(v703 + 0x223C) - v396;
              v701 = (v646 * v698) + (v644 * v700);
              v702 = *(v703 + 0x2238);
              goto LABEL_768;
            case 3i64:
              v696 = v288[0x88];
              if ( !*(v696 + 0x1DDC) )
                goto LABEL_772;
              v697 = v1347.m128_f32[0];
              v698 = *(v696 + 0x1DD8) - v1347.m128_f32[0];
              v699 = v396;
              v700 = *(v696 + 0x1DD4) - v396;
              v701 = (v646 * v698) + (v644 * v700);
              v702 = *(v696 + 0x1DD0);
LABEL_768:
              v704 = v702 - v1288;
              v705 = v701 + (v640 * v704);
              v706 = ((v647 * v698) + (v113 * v700)) + (v642 * v704);
              v707 = ((v698 * v648) + (v700 * v645)) + (v704 * v643);
              v708 = ((*&v1309 * v707) + (v1314.m128_f32[0] * v706)) + ((v1293.m128_f32[0] * v705) + v1288);
              v709 = ((*&v1307 * v707) + (v1212 * v706)) + ((v1235 * v705) + v699);
              *&v1322 = v705;
              v710 = (v705 * v1215) + v697;
              goto LABEL_771;
            case 4i64:
              v711 = v645;
              if ( sub_476690(v288[0x88]) )
              {
                v712 = *(game + 0x440);
                v713 = v712[0x687] - v1347.m128_f32[0];
                v714 = v712[0x686] - v396;
                v715 = v712[0x685] - v1288;
                v716 = ((v646 * v713) + (v644 * v714)) + (v640 * v715);
                v706 = ((v647 * v713) + (v113 * v714)) + (v641 * v715);
                v707 = ((v713 * v648) + (v714 * v711)) + (v715 * v643);
                v708 = ((*&v1309 * v707) + (v1314.m128_f32[0] * v706)) + ((v1293.m128_f32[0] * v716) + v1288);
                v709 = ((*&v1307 * v707) + (v1212 * v706)) + ((v1235 * v716) + v396);
                *&v1322 = v716;
                v710 = (v716 * v1215) + v1347.m128_f32[0];
LABEL_771:
                *(&v1322 + 1) = v706;
                v1323 = v707;
                v1315 = __PAIR64__(LODWORD(v709), LODWORD(v708));
                v1316 = ((v707 * v1208) + (v706 * v1282)) + v710;
                *(cursor_visuals + 0xABE) = 1;
                v113 = Y;
              }
              else
              {
LABEL_772:
                *(cursor_visuals + 0xABE) = 0;
                v113 = Y;
              }
              break;
            case 5i64:
              v113 = Y;
              if ( *(v288[0x88] + 0x2CF0i64) )
              {
                sub_FF3920(&v1320, &v1322, &v1315);
                *(cursor_visuals + 0xABE) = 1;
              }
              else
              {
                *(cursor_visuals + 0xABE) = 0;
              }
              goto LABEL_214;
            default:
              goto LABEL_214;
          }
          goto LABEL_214;
        }
        goto LABEL_704;
      }
      *(cursor_visuals + 0x604) = *(v402 + 0x2218);
      v628 = *(v402 + 0x2210);
    }
    *(cursor_visuals + 0x5FC) = v628;
    goto LABEL_700;
  }
  v128 = *(game + 0x450);
  if ( v128 )
  {
    LOBYTE(v128) = *(v128 + 0x5CA) != 0;
    v1301 = v128;
  }
  else
  {
    v1301 = 0;
  }
  v129 = *(*(game + 0x440) + 0x3F4i64);
  if ( v129 <= 0x16 )
  {
    v130 = 0x410189;
    if ( _bittest(&v130, v129) )
      goto LABEL_209;
  }
  if ( *(game + 0xCD) )
    goto LABEL_209;
  if ( !*(game + 0xCA) )
    goto LABEL_209;
  if ( (*(game + 0xCB) & 1) == 0 )
    goto LABEL_209;
  if ( !*&mUnit )
    goto LABEL_209;
  if ( *(qword_4B176E8 + 0x1E) )
    goto LABEL_209;
  LOWORD(v271) = __ROR2__(*(*&mUnit + 0x10B0i64) - 3, 1);
  if ( v271 > 6u )
    goto LABEL_209;
  v271 = v271;
  v272 = 0x53;
  if ( !_bittest(&v272, v271) )
    goto LABEL_209;
  *(cursor_visuals + 0x5F8) = 0;
  if ( !v1301 )
  {
    v1301 = 0;
    goto LABEL_784;
  }
LABEL_291:
  v276 = *(v109 + 0x10B0);
  LOBYTE(v271) = 1;
  v1301 = v271;
  if ( v276 <= 0xB )
  {
    v277 = 0x828;
    if ( _bittest(&v277, v276) )
    {
      v278 = *(game + 0x450);
      if ( v278 && *(v278 + 0x5CA) )
      {
        v279 = (v278 + 0x59C);
        v280 = (v278 + 0x5A0);
        v281 = (v278 + 0x5A4);
      }
      else
      {
        v279 = (v109 + 0x25C);
        v280 = (v109 + 0x260);
        v281 = (v109 + 0x264);
      }
      v717 = *v281;
      v718 = *v280;
      v719 = *v279;
      if ( COERCE_FLOAT(*v279 & xmmword_449AF40) >= *&dword_44AD510
        || (v720 = 0.0, COERCE_FLOAT(xmmword_449AF40 & LODWORD(v717)) >= *&dword_44AD510) )
      {
        atan2f(*v281, v719);
        LODWORD(v720) = LODWORD(v717) ^ xmmword_44801F0;
      }
      qword_4AD1040 = v720;
      *(&qword_4AD1040 + 1) = atan2f(v718, fsqrt((v717 * v717) + (v719 * v719)));
      if ( v278 && *(v278 + 0x5CA) )
      {
        v721 = (v278 + 0x580);
        v722 = (v278 + 0x584);
        v723 = (v278 + 0x588);
        v724 = v109;
      }
      else
      {
        v724 = v109;
        v721 = (v109 + 0x250);
        v722 = (v109 + 0x254);
        v723 = (v109 + 0x258);
      }
      *&v725 = v724[0x272] + *v723;
      v726 = v724[0x271] + *v722;
      *&qword_4AD100C = v724[0x270] + *v721;
      *(&qword_4AD100C + 1) = v726;
      dword_4AD1014 = v725;
    }
  }
LABEL_784:
  v727 = _mm_cvtsi32_si128(LODWORD(qword_4AD1040));
  v728 = _mm_load_si128(&xmmword_44801F0);
  v729 = _mm_blend_epi16(_mm_xor_si128(v727, v728), 0i64, 0xFC);
  *v727.m128i_i32 = *v727.m128i_i32 * *&dword_44A9648;
  v730 = _mm_cvttps_epi32(_mm_add_ps(_mm_or_si128(_mm_and_si128(v729, v728), xmmword_44A4140), _mm_blend_ps(v727, 0i64, 0xE)));
  v731 = _mm_sub_ps(v729, _mm_mul_ps(_mm_cvtepi32_ps(v730), xmmword_44AA530));
  v732 = _mm_mul_ps(v731, v731);
  v733 = _mm_add_ps(
           _mm_mul_ps(
             _mm_add_ps(
               _mm_mul_ps(_mm_sub_ps(xmmword_44A4170, _mm_mul_ps(v732, xmmword_44A9650)), v732),
               xmmword_44A41A0),
             v732),
           xmmword_44A01E0);
  v734 = _mm_add_ps(
           _mm_mul_ps(
             _mm_add_ps(
               _mm_mul_ps(_mm_sub_ps(xmmword_44A4190, _mm_mul_ps(v732, xmmword_44A9660)), v732),
               xmmword_44A41B0),
             _mm_mul_ps(v732, v731)),
           v731);
  v735 = _mm_blendv_ps(v733, v734, _mm_cmpeq_epi32(_mm_and_ps(v730, xmmword_4487E30), 0i64));
  v736 = _mm_sub_epi32(_mm_and_ps(v730, xmmword_4487E40), 0xFFFFFFFFFFFFFFFFui64);
  v737 = _mm_blendv_ps(v733, v734, _mm_cmpeq_epi32(_mm_and_si128(v736, xmmword_4487E30), 0i64));
  v749 = _mm_blendv_ps(_mm_xor_ps(v735, v728), v735, _mm_cmpeq_epi32(_mm_and_ps(v730, xmmword_4487F40), 0i64));
  *v730.m128i_i32 = _mm_blendv_ps(
                      _mm_xor_ps(v737, v728),
                      v737,
                      _mm_cmpeq_epi32(_mm_and_si128(v736, xmmword_4487F40), 0i64)).m128_f32[0];
  v738 = _mm_cvtsi32_si128(*(&qword_4AD1040 + 1));
  v739 = _mm_blend_epi16(0i64, v738, 3);
  *v738.m128i_i32 = *v738.m128i_i32 * *&dword_44A4134;
  v740 = _mm_cvttps_epi32(_mm_add_ps(_mm_or_si128(_mm_and_si128(v739, v728), xmmword_44A4140), _mm_blend_ps(v738, 0i64, 0xE)));
  v741 = _mm_sub_epi32(_mm_and_ps(xmmword_4487E40, v740), 0xFFFFFFFFFFFFFFFFui64);
  v742 = _mm_sub_ps(v739, _mm_mul_ps(_mm_cvtepi32_ps(v740), xmmword_44AA530));
  v743 = _mm_mul_ps(v742, v742);
  v744 = _mm_add_ps(
           _mm_mul_ps(
             _mm_add_ps(
               _mm_mul_ps(_mm_sub_ps(xmmword_44A4170, _mm_mul_ps(xmmword_44A9650, v743)), v743),
               xmmword_44A41A0),
             v743),
           xmmword_44A01E0);
  v745 = _mm_add_ps(
           _mm_mul_ps(
             _mm_add_ps(
               _mm_mul_ps(_mm_sub_ps(xmmword_44A4190, _mm_mul_ps(xmmword_44A9660, v743)), v743),
               xmmword_44A41B0),
             _mm_mul_ps(v743, v742)),
           v742);
  v746 = _mm_blendv_ps(v744, v745, _mm_cmpeq_epi32(_mm_and_ps(v740, xmmword_4487E30), 0i64));
  v747 = _mm_blendv_ps(v744, v745, _mm_cmpeq_epi32(_mm_and_si128(v741, xmmword_4487E30), 0i64));
  v748 = _mm_blendv_ps(_mm_xor_ps(v746, v728), v746, _mm_cmpeq_epi32(_mm_and_ps(v740, xmmword_4487F40), 0i64)).m128_f32[0];
  v750 = _mm_blendv_ps(_mm_xor_ps(v747, v728), v747, _mm_cmpeq_epi32(_mm_and_si128(v741, xmmword_4487F40), 0i64));
  v749.m128_f32[0] = v749.m128_f32[0] * v750.m128_f32[0];
  v750.m128_f32[0] = v750.m128_f32[0] * *v730.m128i_i32;
  v751 = fsqrt((v749.m128_f32[0] * v749.m128_f32[0]) + ((v748 * v748) + (v750.m128_f32[0] * v750.m128_f32[0])));
  v752 = 0.0;
  v113 = Y;
  if ( v751 > *&dword_449F1A8 )
    v752 = Y / v751;
  v749.m128_f32[0] = v749.m128_f32[0] * v752;
  v753 = v748 * v752;
  v750.m128_f32[0] = v750.m128_f32[0] * v752;
  if ( byte_4AD1064 != 0 && !v114 )
  {
    *(cursor_visuals + 0x610) = v10[0xBA];
    *(cursor_visuals + 0x608) = *(v10 + 0x5C);
    v754 = (*(cursor_visuals + 0x638) * v749.m128_f32[0]) + *(cursor_visuals + 0x610);
    v755 = (*(cursor_visuals + 0x638) * v753) + *(cursor_visuals + 0x60C);
    v1221 = (*(cursor_visuals + 0x638) * v750.m128_f32[0]) + *(cursor_visuals + 0x608);
    *(cursor_visuals + 0x5FC) = v1221;
    v1217 = v755;
    *(cursor_visuals + 0x600) = v755;
    v1225 = v754;
    *(cursor_visuals + 0x604) = v754;
    v756 = a3;
    v131 = v1292;
    goto LABEL_803;
  }
  v757 = &qword_4AD100C;
  if ( v1293.m128_i8[0] )
    v757 = &qword_4AD1018;
  v758 = &Unit_Position;
  if ( v1279 )
    v758 = v757;
  v759 = *v758;
  v760 = v758[1];
  v761 = v758[2];
  v756 = a3;
  v131 = v1292;
  if ( *&mUnit == v109 )
  {
    v762 = *(game + 0x440);
    v763 = *(v762 + 0x3F4);
    if ( v763 <= 0x18 )
    {
      v764 = 0x100F824;
      if ( _bittest(&v764, v763) )
        goto LABEL_795;
    }
    if ( *(v109 + 0x10B0) == 3 )
    {
      v1025 = *(v762 + 0x3F0);
      if ( v1025 < *(v762 + 0x278) && (v1026 = *(*(v762 + 0x268) + 8 * v1025)) != 0 )
      {
        a2 = v1263;
        v756 = a3;
        v109 = v1210;
        v131 = v1292;
        if ( *(v1026 + 0x28) == 1 || v763 == 0x15 )
          goto LABEL_795;
      }
      else
      {
        a2 = v1263;
        v756 = a3;
        v109 = v1210;
        v131 = v1292;
        if ( v763 == 0x15 )
        {
LABEL_795:
          if ( (*(*v109 + 0xA0i64))(v109) )
          {
            v765 = *(game + 0x440);
            v759 = v765[0x11D];
            v760 = v765[0x11E];
            v761 = v765[0x11F];
          }
        }
      }
    }
    else
    {
      a2 = v1263;
      v756 = a3;
      v109 = v1210;
      v131 = v1292;
    }
  }
  v766 = (((*&Unit_PositionZ - v761) * v749.m128_f32[0]) + ((*(&Unit_Position + 1) - v760) * v753))
       + ((*&Unit_Position - v759) * v750.m128_f32[0]);
  v767 = (v766 * v749.m128_f32[0]) + v761;
  v768 = (v766 * v753) + v760;
  v769 = (v766 * v750.m128_f32[0]) + v759;
  *(cursor_visuals + 0x608) = v769;
  *(cursor_visuals + 0x60C) = v768;
  *(cursor_visuals + 0x610) = v767;
  v770 = *(v131 + 0x3F0);
  if ( v770 < *(v131 + 0x278) && (v771 = *(*(v131 + 0x268) + 8 * v770)) != 0i64 && v771[0xA] == 1 )
  {
    (*(*v771 + 0x50i64))(v771, &v1336);
    v772 = (*(cursor_visuals + 0x638) * v749.m128_f32[0]) + *&v1337;
    v773 = (*(cursor_visuals + 0x638) * v753) + *(&v1336 + 1);
    *(cursor_visuals + 0x5FC) = (*(cursor_visuals + 0x638) * v750.m128_f32[0]) + *&v1336;
    *(cursor_visuals + 0x600) = v773;
    *(cursor_visuals + 0x604) = v772;
  }
  else
  {
    v774 = (*(cursor_visuals + 0x638) * v749.m128_f32[0]) + v767;
    v775 = (*(cursor_visuals + 0x638) * v753) + v768;
    *(cursor_visuals + 0x5FC) = (*(cursor_visuals + 0x638) * v750.m128_f32[0]) + v769;
    *(cursor_visuals + 0x600) = v775;
    *(cursor_visuals + 0x604) = v774;
  }
  v1221 = 0.0;
  v1217 = 0.0;
  v1225 = 0.0;
LABEL_803:
  v776 = v109;
  v777 = *(v109 + 0x10B0);
  if ( v777 > 0xF || (v778 = 0x897E, v779 = v109, !_bittest(&v778, v777)) )
    v779 = 0i64;
  v780 = game;
  *(*(game + 0x440) + 0x7C0i64) = *(cursor_visuals + 0x668);
  v781 = *(v109 + 0x10B8);
  if ( v781 )
  {
    v776 = sub_11FE900(v781);
    v780 = game;
  }
  v782 = *(v780 + 0x440);
  if ( v109 == v776
    && (v783 = *(v782 + 0x7C0)) != 0
    && (v784 = (*(*v783 + 0x188i64))(v783, v109), v785 = game, v782 = *(game + 0x440), v784) )
  {
    v786 = *(v782 + 0x7C0);
    v787 = v786[0x267];
    v788 = v786[0x268];
    v789 = v786[0x26B];
    Stri = v789 * v787;
    v1236 = v787;
    v790 = v786[0x26F];
    v791 = v786[0x26C];
    v1314.m128_f32[0] = v791 * v788;
    v792 = v788;
    v793 = v786[0x26D];
    v794 = v786[0x26A];
    v795 = v786[0x26E];
    v796 = v786[0x269];
    v1284 = v753;
    v1293 = v750;
    v1261 = v791 * v787;
    v1347.m128_f32[0] = v789 * v796;
    *&v1307 = v796 * v793;
    *&v1309 = v794 * v792;
    v797 = Y
         / ((((v795 * v794) * v796) + ((v1314.m128_f32[0] * v793) + ((v789 * v787) * v790)))
          - ((v796 * (v793 * v789)) + ((v795 * (v791 * v787)) + (v794 * (v792 * v790)))));
    v798 = ((v790 * v789) - (v795 * v791)) * v797;
    v799 = ((v796 * v795) - (v792 * v790)) * v797;
    v800 = (v1314.m128_f32[0] - (v789 * v796)) * v797;
    v801 = ((v791 * v793) - (v794 * v790)) * v797;
    v802 = ((v790 * v1236) - (v796 * v793)) * v797;
    v803 = ((v796 * v794) - v1261) * v797;
    v804 = ((v795 * v794) - (v793 * v789)) * v797;
    v805 = ((v793 * v792) - (v795 * v1236)) * v797;
    v1314 = v749;
    v806 = (Stri - (v794 * v792)) * v797;
    v807 = v786[0x270];
    v808 = *(cursor_visuals + 0x648);
    v809 = *(cursor_visuals + 0x64C);
    v810 = (*(cursor_visuals + 0x650) * v804) + ((v809 * v801) + (v798 * v808));
    v811 = (v804 * v786[0x272]) + (v798 * v807);
    v812 = v786[0x271];
    v813 = v810 - ((v801 * v812) + v811);
    v814 = (*(cursor_visuals + 0x650) * v805) + ((v802 * v809) + (v799 * v808));
    v815 = (v802 * v812) + ((v805 * v786[0x272]) + (v799 * v807));
    v816 = (v809 * v803) + (v808 * v800);
    v756 = a3;
    v817 = (*(cursor_visuals + 0x650) * v806) + v816;
    v753 = v1284;
    v818 = (v803 * v812) + ((v806 * v786[0x272]) + (v800 * v786[0x270]));
    v749.m128_i32[0] = v1314.m128_i32[0];
    *(v782 + 0x7C8) = v813;
    v113 = Y;
    *(v782 + 0x7CC) = v814 - v815;
    *(v782 + 0x7D0) = v817 - v818;
    v819 = *(v779 + 0x224);
    v820 = v819[0x8A];
    v821 = v819[0x8B];
    v822 = v819[0x8C];
    v823 = *(cursor_visuals + 0x650)
         - (((v779[0x26F] * v822) + ((v779[0x26C] * v821) + (v779[0x269] * v820))) + v779[0x272]);
    v824 = ((v779[0x26E] * v822) + ((v779[0x26B] * v821) + (v779[0x268] * v820))) + v779[0x271];
    v825 = (v822 * v779[0x26D]) + ((v821 * v779[0x26A]) + (v820 * v779[0x267]));
    if ( fsqrt(
           ((v823 * v823) + ((*(cursor_visuals + 0x64C) - v824) * (*(cursor_visuals + 0x64C) - v824)))
         + ((*(cursor_visuals + 0x648) - (v825 + v779[0x270])) * (*(cursor_visuals + 0x648) - (v825 + v779[0x270])))) > (v779[0x4A4] * v819[0x8D]) )
    {
      v782 = *(v785 + 0x440);
      goto LABEL_812;
    }
  }
  else
  {
LABEL_812:
    *(v782 + 0x7C0) = 0i64;
  }
  v826 = *(cursor_visuals + 0x654);
  v826.m128_f32[0] = fmaxf(v826.m128_f32[0], *(cursor_visuals + 0x638));
  *&v827 = (v749.m128_f32[0] * v826.m128_f32[0]) + *(cursor_visuals + 0x610);
  v828 = (v753 * v826.m128_f32[0]) + *(cursor_visuals + 0x60C);
  *&qword_4AD1000 = (v826.m128_f32[0] * v750.m128_f32[0]) + *(cursor_visuals + 0x608);
  *(&qword_4AD1000 + 1) = v828;
  dword_4AD1008 = v827;
  if ( v1301 && (*(*v779 + 0x5C8i64))(v779) )
  {
    *v826.m128_u64 = (*(*v779 + 0x5D8i64))(v779);
    v829 = v826;
    *v826.m128_u64 = (*(*v779 + 0x5D0i64))(v779);
    v829.m128_f32[0] = v829.m128_f32[0] * *&dword_44A02A0;
    v826.m128_f32[0] = v826.m128_f32[0] * *&dword_44A02A0;
    inserted = _mm_insert_ps(v826, v829, 0x1C);
    v831 = _mm_mul_ps(xmmword_44A4140, inserted);
    v832 = _mm_cvttps_epi32(
             _mm_add_ps(
               _mm_or_ps(_mm_and_ps(xmmword_44801F0, v831), xmmword_44A4140),
               _mm_mul_ps(inserted, xmmword_44A9FF0)));
    v833 = _mm_sub_epi32(_mm_and_ps(xmmword_4487E40, v832), 0xFFFFFFFFFFFFFFFFui64);
    v834 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(v832), xmmword_44A4150), v831);
    v835 = _mm_mul_ps(v834, v834);
    v836 = _mm_add_ps(
             _mm_mul_ps(
               _mm_add_ps(
                 _mm_mul_ps(_mm_add_ps(_mm_mul_ps(xmmword_44A4160, v835), xmmword_44A4170), v835),
                 xmmword_44A41A0),
               v835),
             xmmword_44A01E0);
    v837 = _mm_add_ps(
             _mm_mul_ps(
               _mm_add_ps(
                 _mm_mul_ps(_mm_add_ps(_mm_mul_ps(xmmword_44A4180, v835), xmmword_44A4190), v835),
                 xmmword_44A41B0),
               _mm_mul_ps(v835, v834)),
             v834);
    v838 = _mm_blendv_ps(v836, v837, _mm_cmpeq_epi32(_mm_and_ps(v832, xmmword_4487E30), 0i64));
    v839 = _mm_blendv_ps(v836, v837, _mm_cmpeq_epi32(_mm_and_ps(xmmword_4487E30, v833), 0i64));
    v840 = _mm_blendv_ps(
             _mm_xor_ps(v838, xmmword_44801F0),
             v838,
             _mm_cmpeq_epi32(_mm_and_ps(v832, xmmword_4487F40), 0i64));
    v841 = _mm_blendv_ps(
             _mm_xor_ps(xmmword_44801F0, v839),
             v839,
             _mm_cmpeq_epi32(_mm_and_ps(v833, xmmword_4487F40), 0i64));
    v842 = _mm_shuffle_ps(v840, v841, 0x55);
    v843 = _mm_mul_ps(
             _mm_mul_ps(_mm_shuffle_ps(v840, v841, 0), _mm_shuffle_ps(v841, v841, 0xAA)),
             _mm_shuffle_ps(v842, v842, 0xD8));
    v844 = _mm_shuffle_ps(v841, v840, 0x55);
    v845 = _mm_mul_ps(
             _mm_mul_ps(_mm_shuffle_ps(v841, v840, 0), _mm_shuffle_ps(v840, v840, 0xAA)),
             _mm_shuffle_ps(v844, v844, 0xD8));
    v846 = _mm_sub_ps(v843, v845);
    v847 = _mm_add_ps(v845, v843);
    v844.m128_f32[0] = *_mm_unpackhi_pd(v846, v846).m128d_f64;
    v843.m128_f32[0] = _mm_movehdup_ps(v847).m128_f32[0];
    v846.m128_f32[0] = _mm_shuffle_ps(v846, v846, 0xFF).m128_f32[0];
    v848 = ((v847.m128_f32[0] * v844.m128_f32[0]) - (v846.m128_f32[0] * v843.m128_f32[0]))
         + ((v847.m128_f32[0] * v844.m128_f32[0]) - (v846.m128_f32[0] * v843.m128_f32[0]));
    v849 = ((v844.m128_f32[0] * v846.m128_f32[0]) + (v843.m128_f32[0] * v847.m128_f32[0]))
         + ((v844.m128_f32[0] * v846.m128_f32[0]) + (v843.m128_f32[0] * v847.m128_f32[0]));
    v850 = (((v846.m128_f32[0] * v846.m128_f32[0]) + (v847.m128_f32[0] * v847.m128_f32[0]))
          + ((v846.m128_f32[0] * v846.m128_f32[0]) + (v847.m128_f32[0] * v847.m128_f32[0])))
         + *&dword_44801E8;
    v851 = fsqrt(((v848 * v848) + (v849 * v849)) + (v850 * v850));
    v852 = 0.0;
    if ( v851 > *&dword_449F1A8 )
      v852 = v113 / v851;
    v853 = v852 * *(cursor_visuals + 0x640);
    v854 = *(cursor_visuals + 0x614);
    v855 = *(cursor_visuals + 0x618);
    v856 = *(cursor_visuals + 0x61C);
    v857 = (v779[0x272] - v856) + (v848 * v853);
    v858 = (v779[0x271] - v855) + (v849 * v853);
    v859 = (v779[0x270] - v854) + (v853 * v850);
    v860 = v113 - expf(*&dword_44A4248 * v756);
    *(cursor_visuals + 0x614) = (v859 * v860) + v854;
    *(cursor_visuals + 0x618) = (v858 * v860) + v855;
    *(cursor_visuals + 0x61C) = (v857 * v860) + v856;
  }
  else
  {
    v861 = *(cursor_visuals + 0x614);
    v862 = *(cursor_visuals + 0x618);
    v863 = *(cursor_visuals + 0x61C);
    v864 = *&dword_4AD0FFC - v863;
    v865 = *(&qword_4AD0FF4 + 1) - v862;
    v866 = *&qword_4AD0FF4 - v861;
    v867 = expf(*&dword_44A0778 * v756);
    *(cursor_visuals + 0x614) = ((v113 - v867) * v866) + v861;
    *(cursor_visuals + 0x618) = (v865 * (v113 - v867)) + v862;
    *(cursor_visuals + 0x61C) = (v864 * (v113 - v867)) + v863;
    v860 = v113 - expf(*&dword_44A4248 * v756);
  }
  v868 = ((*(cursor_visuals + 0x628) - *(cursor_visuals + 0x634)) * v860) + *(cursor_visuals + 0x634);
  v869 = ((*(cursor_visuals + 0x624) - *(cursor_visuals + 0x630)) * v860) + *(cursor_visuals + 0x630);
  v870 = ((*(cursor_visuals + 0x620) - *(cursor_visuals + 0x62C)) * v860) + *(cursor_visuals + 0x62C);
  v871 = fsqrt((v868 * v868) + ((v869 * v869) + (v870 * v870)));
  v1327 = 0.0;
  v872 = 0.0;
  if ( v871 > *&dword_449F1A8 )
    v872 = v113 / v871;
  *(cursor_visuals + 0x62C) = v870 * v872;
  *(cursor_visuals + 0x630) = v869 * v872;
  *(cursor_visuals + 0x634) = v868 * v872;
  v1294 = dword_4492C80;
LABEL_213:
  v1326 = 0.0;
LABEL_214:
  if ( *cursor_visuals && (dword_4B19A88 & *(cursor_visuals + 4)) != 0
    || (v136 = *(*(game + 0x440) + 0x3F4i64), v136 <= 0x16) && (v137 = 0x410189, _bittest(&v137, v136))
    || *(game + 0xCD)
    || !*(game + 0xCA)
    || (*(game + 0xCB) & 1) == 0
    || !*&mUnit
    || *(qword_4B176E8 + 0x1E)
    || (v282 = __ROR2__(*(*&mUnit + 0x10B0i64) - 3, 1), v282 > 6u)
    || (v283 = 0x53, !_bittest(&v283, v282)) )
  {
    if ( byte_4AD1091
      || (cursor_mode = *(cursor_visuals + 0x4A70), cursor_mode <= 7) && (v139 = 0xB0, _bittest(&v139, cursor_mode)) )
    {
      if ( game && (!g_net || !*(g_net + 0x60)) && LocalPlayer && (*(LocalPlayer + 0x1B8) & 0x20) != 0 )
      {
        v141 = *(v109 + 0x25C);
        v142 = *(v109 + 0x260);
        v143 = *(v109 + 0x264);
      }
      else
      {
        v140 = *(game + 0x450);
        if ( v140 && *(v140 + 0x5CA) )
        {
          v141 = *(v140 + 0x59C);
          v142 = *(v140 + 0x5A0);
          v143 = *(v140 + 0x5A4);
        }
        else
        {
          v144 = LODWORD(qword_4AD1040);
          v145 = _mm_blend_ps(_mm_xor_ps(LODWORD(qword_4AD1040), xmmword_44801F0), 0i64, 0xE);
          v144.m128_f32[0] = qword_4AD1040 * *&dword_44A9648;
          v146 = _mm_cvttps_epi32(
                   _mm_add_ps(
                     _mm_or_ps(_mm_and_ps(v145, xmmword_44801F0), xmmword_44A4140),
                     _mm_blend_ps(v144, 0i64, 0xE)));
          v147 = _mm_sub_ps(v145, _mm_mul_ps(_mm_cvtepi32_ps(v146), xmmword_44AA530));
          v148 = _mm_mul_ps(v147, v147);
          v149 = _mm_add_ps(
                   _mm_mul_ps(
                     _mm_add_ps(
                       _mm_mul_ps(_mm_sub_ps(xmmword_44A4170, _mm_mul_ps(v148, xmmword_44A9650)), v148),
                       xmmword_44A41A0),
                     v148),
                   xmmword_44A01E0);
          v150 = _mm_add_ps(
                   _mm_mul_ps(
                     _mm_add_ps(
                       _mm_mul_ps(_mm_sub_ps(xmmword_44A4190, _mm_mul_ps(v148, xmmword_44A9660)), v148),
                       xmmword_44A41B0),
                     _mm_mul_ps(v148, v147)),
                   v147);
          v151 = _mm_blendv_ps(v149, v150, _mm_cmpeq_epi32(_mm_and_ps(v146, xmmword_4487E30), 0i64));
          v152 = _mm_sub_epi32(_mm_and_ps(v146, xmmword_4487E40), 0xFFFFFFFFFFFFFFFFui64);
          v153 = _mm_blendv_ps(v149, v150, _mm_cmpeq_epi32(_mm_and_si128(v152, xmmword_4487E30), 0i64));
          v150.m128_f32[0] = _mm_blendv_ps(
                               _mm_xor_ps(v151, xmmword_44801F0),
                               v151,
                               _mm_cmpeq_epi32(_mm_and_ps(v146, xmmword_4487F40), 0i64)).m128_f32[0];
          *v146.m128i_i32 = _mm_blendv_ps(
                              _mm_xor_ps(v153, xmmword_44801F0),
                              v153,
                              _mm_cmpeq_epi32(_mm_and_si128(v152, xmmword_4487F40), 0i64)).m128_f32[0];
          v154 = _mm_cvtsi32_si128(*(&qword_4AD1040 + 1));
          v155 = _mm_blend_epi16(0i64, v154, 3);
          *v154.m128i_i32 = *v154.m128i_i32 * *&dword_44A4134;
          v156 = _mm_cvttps_epi32(
                   _mm_add_ps(
                     _mm_or_si128(_mm_and_si128(v155, xmmword_44801F0), xmmword_44A4140),
                     _mm_blend_ps(v154, 0i64, 0xE)));
          v157 = _mm_sub_epi32(_mm_and_ps(xmmword_4487E40, v156), 0xFFFFFFFFFFFFFFFFui64);
          v158 = _mm_sub_ps(v155, _mm_mul_ps(_mm_cvtepi32_ps(v156), xmmword_44AA530));
          v159 = _mm_mul_ps(v158, v158);
          v160 = _mm_add_ps(
                   _mm_mul_ps(
                     _mm_add_ps(
                       _mm_mul_ps(_mm_sub_ps(xmmword_44A4170, _mm_mul_ps(xmmword_44A9650, v159)), v159),
                       xmmword_44A41A0),
                     v159),
                   xmmword_44A01E0);
          v161 = _mm_add_ps(
                   _mm_mul_ps(
                     _mm_add_ps(
                       _mm_mul_ps(_mm_sub_ps(xmmword_44A4190, _mm_mul_ps(xmmword_44A9660, v159)), v159),
                       xmmword_44A41B0),
                     _mm_mul_ps(v159, v158)),
                   v158);
          v162 = _mm_blendv_ps(v160, v161, _mm_cmpeq_epi32(_mm_and_ps(v156, xmmword_4487E30), 0i64));
          v163 = _mm_blendv_ps(v160, v161, _mm_cmpeq_epi32(_mm_and_si128(xmmword_4487E30, v157), 0i64));
          LODWORD(v142) = _mm_blendv_ps(
                            _mm_xor_ps(v162, xmmword_44801F0),
                            v162,
                            _mm_cmpeq_epi32(_mm_and_ps(v156, xmmword_4487F40), 0i64)).m128_u32[0];
          v113 = Y;
          v164 = _mm_blendv_ps(
                   _mm_xor_ps(xmmword_44801F0, v163),
                   v163,
                   _mm_cmpeq_epi32(_mm_and_si128(v157, xmmword_4487F40), 0i64)).m128_f32[0];
          v143 = v150.m128_f32[0] * v164;
          v141 = v164 * *v146.m128i_i32;
        }
      }
      v165 = (v143 * v1294) + *(&v1321 + 3);
      v166 = (v142 * v1294) + *(&v1321 + 2);

      // The Vector3 at cursor_visuals + 0x688 (x), 0x68C (y), 0x690 (z)
      // represents the cursor circle's world position determined by a raycast. 
      // The x coordinate is calculated as (v141 * v1294) + the second element of the array at v1321
      // The y and z coordinates are v166 and v165 
      *(cursor_visuals + 0x688) = (v141 * v1294) + *(&v1321 + 1);
      *(cursor_visuals + 0x68C) = v166;
      *(cursor_visuals + 0x690) = v165;
      cursor_mode = *(cursor_visuals + 0x4A70);
    }
    if ( cursor_mode == 6 )
    {
      *(cursor_visuals + 0x690) = *(cursor_visuals + 0x604);
      *(cursor_visuals + 0x688) = *(cursor_visuals + 0x5FC);
    }
    v167 = *(a2 + 0x1EC);
    v168 = a2 + 0x5A;
    v1352 = a2 + 0x5A;
    v1351 = a2 + 0x4A;
    if ( !v167 )
      v168 = a2 + 0x4A;
    if ( *(a2 + 0x316) )
    {
      v169 = a2[0xC8];
      v170 = a2[0xCB];
      v171 = a2[0xCE];
      v172 = a2[0xD1];
      v173 = a2[0xBE];
      v174 = *(a2 + 0xBD);
      v175 = a2[0xBB];
      v176 = a2[0xBC];
      v177 = v113 / (v173 - v174.m128_f32[0]);
      v178 = (a2[0xBD] * v173) * v177;
      v183 = _mm_xor_ps(v174, xmmword_44801F0);
      v183.m128_f32[0] = v183.m128_f32[0] * v177;
      v179 = a2[0xC6] * v175;
      v1245 = a2[0xC7] * v176;
      v180 = v183;
      v180.m128_f32[0] = v183.m128_f32[0] * v169;
      v1302 = v180;
      *&v1309 = a2[0xC9] * v175;
      *&v1307 = a2[0xCA] * v176;
      v181 = v183;
      v1287 = v170;
      *&v181 = v183.m128_f32[0] * v170;
      v1306 = v181;
      v1207 = a2[0xCC] * v175;
      v182 = v183;
      v1251 = v172;
      v183.m128_f32[0] = (v183.m128_f32[0] * v172) + v178;
      v1214 = a2[0xCD] * v176;
      v1259 = v171;
      *&v182 = *&v182 * v171;
      v1350 = v182;
      v1347.m128_f32[0] = v175 * a2[0xCF];
      v1229 = v176 * a2[0xD0];
    }
    else
    {
      v179 = a2[0x10 * v167 + 0x4A];
      v1245 = v168[1];
      v1302 = *(v168 + 2);
      v169 = v168[3];
      *&v1309 = v168[4];
      *&v1307 = v168[5];
      v1306 = *(v168 + 6);
      v1287 = v168[7];
      v1207 = v168[8];
      v1214 = v168[9];
      v1350 = *(v168 + 0xA);
      v1259 = v168[0xB];
      v1347.m128_f32[0] = v168[0xC];
      v1229 = v168[0xD];
      v183 = *(v168 + 0xE);
      v1251 = v168[0xF];
    }
    v184 = 0.0;
    if ( v108 )
    {
      v184 = 0.0;
      if ( (*(v108 + 0x1058) & 0x7000014) == 0 )
      {
        v185 = *(*(v108 + 0x11D0) + 0x300i64);
        v186 = *(v185 + 0x28);
        v184 = 0.0;
        if ( v186 )
        {
          v187 = *(v185 + 0x20);
          v188 = v186;
          v189 = 0.0;
          for ( i = 0i64; i != v188; ++i )
          {
            v191 = *(v187 + 8 * i);
            if ( !(*(*v191 + 0x108i64))(v191) )
              v191 = 0i64;
            v189 = v189 + *(v191[0x56] + 0x24Ci64);
          }
          v184 = v189 / v188;
          a2 = v1263;
          v109 = v1210;
          v131 = v1292;
        }
      }
    }
    v1357 = v183;
    *&v1319 = v179;
    v1205 = v169;
    v1255 = *v1320.m256i_i32;
    v1280 = *&v1320.m256i_i32[6];
    v192 = Y
         / (((COERCE_FLOAT(xmmword_44801F0 ^ COERCE_UNSIGNED_INT(*&v1320.m256i_i32[1] * *&v1321)) * *&v1320.m256i_i32[3])
           - (((*&v1320.m256i_i32[6] * *&v1320.m256i_i32[4]) * *&v1320.m256i_i32[2])
            + ((*&v1320.m256i_i32[5] * *v1320.m256i_i32) * *&v1320.m256i_i32[7])))
          + (((*&v1320.m256i_i32[7] * *&v1320.m256i_i32[3]) * *&v1320.m256i_i32[2])
           + (((*&v1320.m256i_i32[5] * *&v1320.m256i_i32[1]) * *&v1320.m256i_i32[6])
            + ((*&v1320.m256i_i32[4] * *v1320.m256i_i32) * *&v1321))));
    v1299 = *&v1320.m256i_i32[5];
    v1348.m128_i32[0] = v1320.m256i_i32[4];
    v1293.m128_i32[0] = v1321;
    v1297 = *&v1320.m256i_i32[2];
    v1314.m128_i32[0] = v1320.m256i_i32[7];
    v1296 = *&v1320.m256i_i32[3];
    v1308 = *&v1320.m256i_i32[1];
    v1232 = ((*&v1320.m256i_i32[5] * *&v1320.m256i_i32[1]) - (*&v1320.m256i_i32[2] * *&v1320.m256i_i32[4])) * v192;
    v193 = ((*&v1320.m256i_i32[2] * *&v1320.m256i_i32[3]) - (*&v1320.m256i_i32[5] * *v1320.m256i_i32)) * v192;
    v194 = ((*&v1320.m256i_i32[7] * *&v1320.m256i_i32[3]) - (*&v1320.m256i_i32[6] * *&v1320.m256i_i32[4])) * v192;
    Stra = ((*&v1320.m256i_i32[4] * *v1320.m256i_i32) - (*&v1320.m256i_i32[3] * *&v1320.m256i_i32[1])) * v192;
    v195 = *(cursor_visuals + 0x5FC);
    v196 = *(cursor_visuals + 0x600);
    v197 = *(cursor_visuals + 0x604);
    v1312 = *(&v1321 + 1);
    v1295 = ((*&v1321 * *&v1320.m256i_i32[4]) - (*&v1320.m256i_i32[7] * *&v1320.m256i_i32[5])) * v192;
    v198 = *(&v1321 + 2);
    v1356 = ((*&v1320.m256i_i32[6] * *&v1320.m256i_i32[5]) - (*&v1320.m256i_i32[3] * *&v1321)) * v192;
    v199 = ((v197 * v194) + ((v196 * v1356) + (v1295 * v195)))
         - ((v1356 * *(&v1321 + 2)) + ((v194 * *(&v1321 + 3)) + (v1295 * *(&v1321 + 1))));
    v1298 = ((*&v1320.m256i_i32[2] * *&v1320.m256i_i32[7]) - (*&v1320.m256i_i32[1] * *&v1321)) * v192;
    v1238 = ((*&v1320.m256i_i32[6] * *&v1320.m256i_i32[1]) - (*&v1320.m256i_i32[7] * *v1320.m256i_i32)) * v192;
    v1328 = ((*&v1321 * *v1320.m256i_i32) - (*&v1320.m256i_i32[2] * *&v1320.m256i_i32[6])) * v192;
    v200 = ((v197 * v1238) + ((v1328 * v196) + (v1298 * v195)))
         - ((v1328 * *(&v1321 + 2)) + ((v1238 * *(&v1321 + 3)) + (v1298 * *(&v1321 + 1))));
    v1353 = v195;
    v201 = *(&v1321 + 3);
    v1354 = v196;
    v202 = v193 * v196;
    v203 = *(&v1321 + 1);
    v1355 = v197;
    v1264 = v193;
    v204 = ((v197 * Stra) + (v202 + (v1232 * v195)))
         - ((v193 * *(&v1321 + 2)) + ((Stra * *(&v1321 + 3)) + (v1232 * *(&v1321 + 1))));
    v205 = 0.0;
    v206 = Y;
    v207 = 0.0;
    v1349 = *(&v1321 + 3);
    if ( v184 != 0.0 )
    {
      v208 = *(&v1321 + 2);
      cosf(v184);
      v206 = v184;
      v207 = sinf(v184);
      v198 = v208;
      v201 = v1349;
      v203 = v1312;
      LODWORD(v205) = LODWORD(v184) ^ xmmword_44801F0;
    }
    v209 = (v205 * v200) + (v206 * v199);
    v210 = (v206 * v200) + (v207 * v199);
    v1281 = (((v1280 * v204) + v203) + (v1255 * v209)) + (v1296 * v210);
    v211 = v1308 * v209;
    v1308 = v198;
    v1314.m128_f32[0] = (((v1314.m128_f32[0] * v204) + v198) + v211) + (v1348.m128_f32[0] * v210);
    v212 = v1314.m128_f32[0];
    v1293.m128_f32[0] = (((v1293.m128_f32[0] * v204) + v201) + (v209 * v1297)) + (v210 * v1299);
    v213 = v1293.m128_f32[0];
    *(cursor_visuals + 0x67C) = v1281;
    *(cursor_visuals + 0x680) = v212;
    *(cursor_visuals + 0x684) = v213;
    v214 = a2[0x84];
    v215 = a2[0x85];
    v216 = a2[0x86];
    v1256 = (v216 * v194) + ((v215 * v1356) + (v214 * v1295));
    v217 = a2[0x87];
    v218 = a2[0x88];
    v219 = a2[0x89];
    v1348.m128_f32[0] = (v219 * v194) + ((v218 * v1356) + (v217 * v1295));
    v220 = a2[0x8A];
    v221 = a2[0x8B];
    v222 = a2[0x8C];
    v223 = (v194 * v222) + ((v1356 * v221) + (v1295 * v220));
    v224 = (v216 * v1238) + ((v215 * v1328) + (v214 * v1298));
    v225 = (v219 * v1238) + ((v218 * v1328) + (v217 * v1298));
    v226 = (v1238 * v222) + ((v1328 * v221) + (v1298 * v220));
    v227 = (v216 * Stra) + ((v215 * v1264) + (v214 * v1232));
    v228 = (v219 * Stra) + ((v218 * v1264) + (v217 * v1232));
    v229 = (v222 * Stra) + ((v221 * v1264) + (v220 * v1232));
    v230 = v225 * v1256;
    Strb = v228 * v1256;
    v231 = (v226 * v227) - (v229 * v224);
    v232 = (v226 * v1348.m128_f32[0]) - (v223 * v225);
    v233 = Y
         / ((((v226 * v1348.m128_f32[0]) * v227) + ((v223 * (v228 * v224)) + (v229 * (v225 * v1256))))
          - ((((v229 * v224) * v1348.m128_f32[0]) + (v226 * (v228 * v1256))) + ((v223 * v225) * v227)));
    v234 = (v229 * v225) - (v226 * v228);
    v235 = (v131 + 0x590);
    v236 = (v131 + 0x484);
    v237 = (v131 + 0x590);
    if ( !*(v131 + 0x70) )
      v237 = (v131 + 0x484);
    v238 = (v228 * v224) - (v225 * v227);
    v239 = (v228 * v223) - (v229 * v1348.m128_f32[0]);
    v240 = *v237;
    v241 = v237[1];
    v242 = v237[2];
    v243 = ((v229 * v1256) - (v223 * v227)) * v233;
    v244 = ((v223 * v224) - (v226 * v1256)) * v233;
    v1298 = v234 * v233;
    v1257 = v239 * v233;
    v1328 = v232 * v233;
    v1296 = ((v232 * v233) * v242) + (((v239 * v233) * v241) + ((v234 * v233) * v240));
    v1265 = v231 * v233;
    v1295 = v243;
    v1211 = v244;
    v1297 = (v244 * v242) + ((v243 * v241) + ((v231 * v233) * v240));
    v1239 = v238 * v233;
    v1233 = ((v227 * v1348.m128_f32[0]) - Strb) * v233;
    v1348.m128_f32[0] = (v230 - (v224 * v1348.m128_f32[0])) * v233;
    v1299 = (v242 * v1348.m128_f32[0]) + ((v241 * v1233) + (v240 * (v238 * v233)));
    v245 = v1245;
    v246 = *&v1350;
    v247 = ((*&v1350 * v1225) + ((*&v1306 * v1217) + (v1302.m128_f32[0] * v1221))) + v1357.m128_f32[0];
    v248 = 0;
    v249 = v1205;
    Strc = v1281 * v1302.m128_f32[0];
    v250 = v1314.m128_f32[0] * *&v1306;
    v251 = v1293.m128_f32[0] * *&v1350;
    v252 = ((v1207 * v1225) + ((*&v1309 * v1217) + (*&v1319 * v1221))) + v1347.m128_f32[0];
    v253 = ((v1214 * v1225) + ((*&v1307 * v1217) + (v1245 * v1221))) + v1229;
    v254 = ((v1225 * v1259) + ((v1217 * v1287) + (v1221 * v1205))) + v1251;
    *(cursor_visuals + 0xA64) = v252;
    *(cursor_visuals + 0xA68) = v253;
    *(cursor_visuals + 0xA6C) = v247;
    *(cursor_visuals + 0xA70) = v254;
    if ( v247 > 0.0 && v247 < v254 )
    {
      v255 = a2[0x8A];
      v256 = a2[0x8B];
      v257 = a2[0x8C];
      v258 = v1355 - v1349;
      v259 = v1354 - v1308;
      v260 = v1353 - v1312;
      v261 = fsqrt(((v258 * v258) + ((v259 * v259) + (v260 * v260))) * ((v257 * v257) + ((v256 * v256) + (v255 * v255))));
      v262 = 0.0;
      if ( v261 > *&dword_449F1A8 )
        v262 = ((v257 * v258) + ((v256 * v259) + (v255 * v260))) / v261;
      v263 = acosf(fminf(fmaxf(v262, *&dword_44801E8), Y));
      v246 = *&v1350;
      v245 = v1245;
      if ( v263 <= *(cursor_visuals + 0x6F0) )
        goto LABEL_320;
      v264 = *(*(game + 0x440) + 0x3F4i64);
      if ( v264 <= 0x16 && (v265 = 0x410189, v266 = _bittest(&v265, v264), v131 = v1292, v266)
        || *(game + 0xCD)
        || !*(game + 0xCA)
        || (*(game + 0xCB) & 1) == 0 )
      {
        v248 = 0;
        goto LABEL_329;
      }
      v248 = 0;
      if ( *&mUnit )
      {
        if ( !*(qword_4B176E8 + 0x1E) )
        {
          v291 = __ROR2__(*(*&mUnit + 0x10B0i64) - 3, 1);
          v248 = 0;
          if ( v291 <= 6u )
          {
            v292 = 0x53;
            if ( _bittest(&v292, v291) )
            {
LABEL_320:
              v293 = Y;
              v294 = *(v131 + 0x3F4);
              if ( v294 == 5 || v294 == 2 )
              {
                v295 = v235;
                if ( !*(v131 + 0x70) )
                  v295 = v236;
                v296 = ((v295[2] * v1328) - v1296) + (((v1326 + v295[1]) * v1257) + ((v1327 + *v295) * v1298));
                v297 = ((v295[2] * v1211) - v1297) + (((v1326 + v295[1]) * v1295) + ((v1327 + *v295) * v1265));
                v298 = ((v295[2] * v1348.m128_f32[0]) - v1299)
                     + (((v1326 + v295[1]) * v1233) + ((v1327 + *v295) * v1239));
                v299 = ((a2[0xD6] * v297) + a2[0xDE]) + ((a2[0xDA] * v298) + (a2[0xD2] * v296));
                v300 = ((a2[0xDB] * v298) + ((a2[0xD7] * v297) + (a2[0xD3] * v296))) + a2[0xDF];
                v301 = ((a2[0xDC] * v298) + ((a2[0xD8] * v297) + (a2[0xD4] * v296))) + a2[0xE0];
                v302 = ((v298 * a2[0xDD]) + ((v297 * a2[0xD9]) + (v296 * a2[0xD5]))) + a2[0xE1];
                *(cursor_visuals + 0xA64) = v299;
                *(cursor_visuals + 0xA68) = v300;
                *(cursor_visuals + 0xA6C) = v301;
                v303 = COERCE_FLOAT(xmmword_449AF40 & LODWORD(v302)) <= *&dword_44A0308;
                *(cursor_visuals + 0xA70) = v302;
                if ( !v303 )
                {
                  v304 = v293 / v302;
                  v299 = v299 * v304;
                  v300 = v300 * v304;
                }
                v246 = *&v1350;
              }
              else
              {
                v299 = v252 * (Y / v254);
                v300 = (Y / v254) * v253;
              }
              v305 = (*&dword_44801CC - (v300 * *&dword_44801CC)) * *(a2 + 9);
              *(cursor_visuals + 0xA54) = ((v299 * *&dword_44801CC) + *&dword_44801CC) * *(a2 + 8);
              *(cursor_visuals + 0xA58) = v305;
              v248 = 1;
            }
          }
        }
      }
    }
LABEL_329:
    v306 = v1357.m128_f32[0];
    v307 = Strc + v1357.m128_f32[0];
    v308 = v250 + v251;
    *(cursor_visuals + 0xABC) = v248;
    v309 = game;
    if ( v108 )
    {
      v310 = a3;
      v311 = *&v1319;
      if ( (*(v108 + 0x1083) & 8) != 0 || (v312 = *(game + 0x440), !*(v312 + 0x97D)) )
      {
        v315 = 0;
      }
      else
      {
        v313 = *(v312 + 0x98C);
        v314 = v313;
        v314.m128_f32[0] = ((v313.m128_f32[0] * *&v1350) + v306)
                         + ((*(v312 + 0x988) * *&v1306) + (*(v312 + 0x984) * v1302.m128_f32[0]));
        v246 = *&v1350;
        v313.m128_f32[0] = ((v313.m128_f32[0] * v1259) + v1251)
                         + ((*(v312 + 0x988) * v1287) + (*(v312 + 0x984) * v1205));
        v315 = _mm_cvtsi128_si32(_mm_and_ps(_mm_cmplt_ps(v314, v313), _mm_cmplt_ps(0i64, v314)));
      }
    }
    else
    {
      v315 = 0;
      v310 = a3;
      v311 = *&v1319;
    }
    v316 = v307 + v308;
    *(cursor_visuals + 0xABD) = v315 & 1;
    v317 = ((v1316 * v1207) + v1347.m128_f32[0]) + ((*(&v1315 + 1) * *&v1309) + (*&v1315 * v311));
    v318 = ((v1316 * v1214) + v1229) + ((*(&v1315 + 1) * *&v1307) + (*&v1315 * v245));
    v319 = ((v246 * v1316) + v306) + ((*&v1306 * *(&v1315 + 1)) + (v1302.m128_f32[0] * *&v1315));
    v320 = ((v1316 * v1259) + v1251) + ((*(&v1315 + 1) * v1287) + (*&v1315 * v1205));
    *(cursor_visuals + 0xA74) = v317;
    *(cursor_visuals + 0xA78) = v318;
    *(cursor_visuals + 0xA7C) = v319;
    *(cursor_visuals + 0xA80) = v320;
    if ( v319 > 0.0 && v319 < v320 && *(cursor_visuals + 0xABE) )
    {
      Strd = v316;
      v321 = a2[0x8A];
      v322 = a2[0x8B];
      v323 = a2[0x8C];
      v324 = *(cursor_visuals + 0x604) - *(&v1321 + 3);
      v325 = *(cursor_visuals + 0x600) - *(&v1321 + 2);
      v326 = *(cursor_visuals + 0x5FC) - *(&v1321 + 1);
      v327 = fsqrt((((v324 * v324) + (v325 * v325)) + (v326 * v326)) * ((v323 * v323) + ((v322 * v322) + (v321 * v321))));
      v328 = 0.0;
      if ( v327 > *&dword_449F1A8 )
        v328 = (((v324 * v323) + (v325 * v322)) + (v326 * v321)) / v327;
      v329 = acosf(fminf(fmaxf(v328, *&dword_44801E8), Y));
      v249 = v1205;
      v311 = *&v1319;
      v245 = v1245;
      v316 = Strd;
      if ( v329 <= *(cursor_visuals + 0x6F0) )
        goto LABEL_436;
      v330 = *(*(v309 + 0x440) + 0x3F4i64);
      if ( v330 <= 0x16 && (v331 = 0x410189, _bittest(&v331, v330))
        || *(v309 + 0xCD)
        || !*(v309 + 0xCA)
        || (*(v309 + 0xCB) & 1) == 0 )
      {
        *(cursor_visuals + 0xABE) = 0;
        goto LABEL_345;
      }
      v410 = 0;
      if ( *&mUnit )
      {
        if ( !*(qword_4B176E8 + 0x1E) )
        {
          v411 = __ROR2__(*(*&mUnit + 0x10B0i64) - 3, 1);
          v410 = 0;
          if ( v411 <= 6u )
          {
            v412 = 0x53;
            if ( _bittest(&v412, v411) )
            {
LABEL_436:
              v413 = Y;
              v414 = *(v1292 + 0x3F4);
              if ( v414 == 5 || v414 == 2 )
              {
                if ( !*(v1292 + 0x70) )
                  v235 = v236;
                v415 = v235[2] + v1323;
                v416 = v235[1] + *(&v1322 + 1);
                v417 = *v235 + *&v1322;
                v418 = ((v1328 * v415) - v1296) + ((v1257 * v416) + (v1298 * v417));
                v419 = ((v1211 * v415) - v1297) + ((v1295 * v416) + (v1265 * v417));
                v420 = ((v415 * v1348.m128_f32[0]) - v1299) + ((v416 * v1233) + (v417 * v1239));
                v421 = ((a2[0xDB] * v420) + ((a2[0xD7] * v419) + (a2[0xD3] * v418))) + a2[0xDF];
                v422 = ((a2[0xDC] * v420) + ((a2[0xD8] * v419) + (a2[0xD4] * v418))) + a2[0xE0];
                v423 = ((a2[0xD6] * v419) + a2[0xDE]) + ((a2[0xDA] * v420) + (a2[0xD2] * v418));
                v424 = ((v420 * a2[0xDD]) + ((v419 * a2[0xD9]) + (v418 * a2[0xD5]))) + a2[0xE1];
                *(cursor_visuals + 0xA74) = v423;
                *(cursor_visuals + 0xA78) = v421;
                *(cursor_visuals + 0xA7C) = v422;
                *(cursor_visuals + 0xA80) = v424;
                if ( COERCE_FLOAT(xmmword_449AF40 & LODWORD(v424)) > *&dword_44A0308 )
                {
                  v425 = v413 / v424;
                  v423 = v423 * v425;
                  v421 = v421 * v425;
                }
              }
              else
              {
                v423 = v317 * (Y / v320);
                v421 = (Y / v320) * v318;
              }
              v426 = (*&dword_44801CC - (v421 * *&dword_44801CC)) * *(a2 + 9);
              *(cursor_visuals + 0xA5C) = ((v423 * *&dword_44801CC) + *&dword_44801CC) * *(a2 + 8);
              *(cursor_visuals + 0xA60) = v426;
              v410 = 1;
              v316 = Strd;
            }
          }
        }
      }
      *(cursor_visuals + 0xABE) = v410;
    }
    else
    {
      *(cursor_visuals + 0xABE) = 0;
    }
LABEL_345:
    v332 = 0;
    v333 = v1359;
    if ( v316 <= 0.0 )
    {
      v335 = v1292;
    }
    else
    {
      v334 = ((v249 * v1281) + v1251) + ((v1259 * v1293.m128_f32[0]) + (v1287 * v1314.m128_f32[0]));
      v335 = v1292;
      if ( v316 < v334 )
      {
        v336 = (*&dword_44801CC
              - ((((v245 * v1281) + v1229) + ((v1214 * v1293.m128_f32[0]) + (*&v1307 * v1314.m128_f32[0])))
               * (*&dword_44801CC / v334)))
             * *(a2 + 9);
        *(cursor_visuals + 0xAA8) = (((*&dword_44801CC / v334)
                                    * (((v311 * v1281) + v1347.m128_f32[0])
                                     + ((v1207 * v1293.m128_f32[0]) + (*&v1309 * v1314.m128_f32[0]))))
                                   + *&dword_44801CC)
                                  * *(a2 + 8);
        *(cursor_visuals + 0xAAC) = v336;
        v332 = 1;
      }
    }
    *(cursor_visuals + 0xABF) = v332;
    v337 = dword_44801CC;
    v338 = ((*(cursor_visuals + 0xA54) / (*(a2 + 8) * *&dword_44801CC)) + *&dword_44801E8) / a2[0xBB];
    v339 = LODWORD(Y);
    v340 = (Y - (*(cursor_visuals + 0xA58) / (*(a2 + 9) * *&dword_44801CC))) / a2[0xBC];
    v341 = a2[0xBD];
    v342 = a2[0xBE];
    *(cursor_visuals + 0xA90) = *(&v1321 + 4);
    *(cursor_visuals + 0xA98) = HIDWORD(v1321);
    *(cursor_visuals + 0xA9C) = v1320.m256i_i64[0];
    *(cursor_visuals + 0xAA4) = v1320.m256i_i32[2];
    if ( *(cursor_visuals + 0xABC) && ((v343 = *(v335 + 0x3F4), v343 > 0xF) || (v344 = 0xCA26, !_bittest(&v344, v343))) )
    {
      v348 = (((a2[0x8A] * v341) + (a2[0x84] * (v338 * v341))) + (a2[0x87] * (v340 * v341))) + a2[0x8D];
      v349 = (((a2[0x8B] * v341) + (a2[0x85] * (v338 * v341))) + (a2[0x88] * (v340 * v341))) + a2[0x8E];
      v350 = (((v341 * a2[0x8C]) + ((v338 * v341) * a2[0x86])) + ((v340 * v341) * a2[0x89])) + a2[0x8F];
      *(cursor_visuals + 0xA90) = v348;
      *(cursor_visuals + 0xA94) = v349;
      *(cursor_visuals + 0xA98) = v350;
      v351 = v340 * v342;
      v352 = v338 * v342;
      v353 = a2[0x84] * v352;
      v354 = a2[0x85] * v352;
      v355 = (((v352 * a2[0x86]) - v350) + ((v342 * a2[0x8C]) + (v351 * a2[0x89]))) + a2[0x8F];
      v356 = ((v354 - v349) + ((a2[0x8B] * v342) + (a2[0x88] * v351))) + a2[0x8E];
      v357 = ((v353 - v348) + ((a2[0x8A] * v342) + (a2[0x87] * v351))) + a2[0x8D];
      v358 = fsqrt((v355 * v355) + ((v356 * v356) + (v357 * v357)));
      v359 = 0.0;
      if ( v358 > *&dword_449F1A8 )
        v359 = v339.m128_f32[0] / v358;
      *(cursor_visuals + 0xA9C) = v357 * v359;
      *(cursor_visuals + 0xAA0) = v356 * v359;
      *(cursor_visuals + 0xAA4) = v355 * v359;
      if ( byte_4AD108B )
        goto LABEL_361;
    }
    else if ( byte_4AD108B )
    {
      goto LABEL_361;
    }
    if ( byte_4AD108C && !byte_4AD108D && byte_4AD108A && sub_B36CA0(ballistics_A68_qword).m128_f32[0] > 0.0 )
    {
      v345 = *&dword_4AD1098;
      v347 = ((*&dword_448A1D8 - v345) * (v339.m128_f32[0] - expf(*&dword_44BF7D8 * v310))) + v345;
LABEL_362:
      v361 = v347;
LABEL_363:
      dword_4AD1098 = LODWORD(v361);
      v362.m128_f32[0] = v1300;
      if ( *(cursor_visuals + 0xAF0) )
      {
        v363 = 0i64;
        v364 = 0i64;
        do
        {
          *(*(cursor_visuals + 0xAE0) + v363) = fmaxf(*(*(cursor_visuals + 0xAE0) + v363) - v310, 0.0);
          *(*(cursor_visuals + 0xAE0) + v363 + 4) = fmaxf(*(*(cursor_visuals + 0xAE0) + v363 + 4) - v310, 0.0);
          ++v364;
          v363 += 0xCi64;
        }
        while ( v364 < *(cursor_visuals + 0xAF0) );
      }
      v365 = _mm_cmplt_ss(v339, v362);
      v366 = COERCE_FLOAT(_mm_andnot_ps(v365, v339).m128_u32[0] | *(cursor_visuals + 0xAC0) & v365.m128_i32[0]) > 0.0;
      if ( !*(cursor_visuals + 0xAD5) && (v366 & v333) != 0 )
      {
        if ( v108 )
          v367 = *(v108 + 0x13F8) != 0;
        else
          v367 = 0;
        EnterCriticalSection(&stru_4B776C8);
        if ( *(*&mUnit + 0x10A8i64) <= 1u && (*(*&mUnit + 0x1058i64) & 0x7000014) == 0 )
          sub_EE9410(v367 ^ 7u, &xmmword_4514A60);
        LeaveCriticalSection(&stru_4B776C8);
        v109 = v1210;
      }
      if ( !((*(cursor_visuals + 0xAD6) != 0) | v333 ^ 1) )
        fire_event(ballistics_A68_qword + 0x5A8, "hint:gun_overheat_warning", &data::get_block_by_name, v346);
      *(cursor_visuals + 0xAD5) = v366;
      *(cursor_visuals + 0xAD6) = v333;
      v368 = HudInfo;
      if ( *(HudInfo + 0x73) != 2 || dword_4B19A88 == 0x200000 )
      {
        v369 = v109;
        if ( !*(HudInfo + 0x20) )
        {
          if ( !LocalUnit )
            goto LABEL_446;
          v380 = *(LocalUnit + 0x10B0);
          if ( v380 > 0xF )
            goto LABEL_446;
          v381 = 0x897E;
          if ( !_bittest(&v381, v380) || *(LocalUnit + 0x10A8) > 1u || !*(*(LocalUnit + 0x2280) + 0x461i64) )
            goto LABEL_446;
          v368 = HudInfo;
          if ( v380 == 5 )
          {
            if ( !*(HudInfo + 0x400) )
              goto LABEL_446;
          }
          else if ( !*(HudInfo + 0x401) )
          {
            goto LABEL_446;
          }
        }
      }
      else
      {
        v369 = v109;
      }
      if ( v368[0x28D]
        || v368[0x28E]
        && ((v376 = *(*(game + 0x440) + 0x3F4i64), v376 > 0x16) || (v377 = 0x410189, !_bittest(&v377, v376)))
        && !*(game + 0xCD)
        && *(game + 0xCA)
        && (*(game + 0xCB) & 1) != 0
        && *&mUnit
        && !*(qword_4B176E8 + 0x1E)
        && (v378 = __ROR2__(*(*&mUnit + 0x10B0i64) - 3, 1), v378 <= 6u)
        && (v379 = 0x53, _bittest(&v379, v378)) )
      {
        if ( *(*(game + 0x430) + 0x310i64) )
        {
          *(cursor_visuals + 0x4A4D) = 0i64;
          *(cursor_visuals + 0x4A48) = 0i64;
          *(cursor_visuals + 0x4A6C) = 0;
          *(cursor_visuals + 0x4A58) = 0i64;
          *(cursor_visuals + 0x4A68) = 0;
          v370 = LocalUnit;
          v371 = 0xFFFFFF;
          LOBYTE(v372) = 0xFF;
          if ( !LocalUnit || (*(LocalUnit + 0x1058) & 0x7000014) != 0 || !*(LocalUnit + 0x11D0) )
            goto LABEL_385;
          v382 = 0i64;
          if ( !*(LocalUnit + 0x10B0) )
            v382 = LocalUnit;
          v1331 = *(LocalUnit + 0x9C8);
          v383 = *(LocalUnit + 0x9A8);
          v1330 = *(LocalUnit + 0x9B8);
          v1329 = v383;
          v1311 = v1331;
          v1310 = *(&v1330 + 1);
          if ( LocalUnit
            && (*(LocalUnit + 0x1058) & 0x7000014) == 0
            && (v661 = *(*(game + 0x440) + 0x3F4i64), v661 <= 0xF)
            && (v662 = 0xC826, _bittest(&v662, v661)) )
          {
            v384 = (LocalUnit + 0x99C);
            v385 = (LocalUnit + 0x9A0);
            v386 = (LocalUnit + 0x9A4);
          }
          else
          {
            v384 = (cursor_visuals + 0xA9C);
            v385 = (cursor_visuals + 0xAA0);
            v386 = (cursor_visuals + 0xAA4);
          }
          v663 = *v386;
          v664 = *v385;
          v665 = *v384;
          if ( (*(HudInfo + 0x28D)
             || *(HudInfo + 0x28E)
             && ((v672 = *(*(game + 0x440) + 0x3F4i64), v672 > 0x16) || (v673 = 0x410189, !_bittest(&v673, v672)))
             && !*(game + 0xCD)
             && *(game + 0xCA)
             && (*(game + 0xCB) & 1) != 0
             && *&mUnit
             && !*(qword_4B176E8 + 0x1E)
             && (v917 = __ROR2__(*(*&mUnit + 0x10B0i64) - 3, 1), v917 <= 6u)
             && (v918 = 0x53, _bittest(&v918, v917)))
            && *(*(game + 0x430) + 0x310i64) )
          {
            LODWORD(v666) = sub_B36CA0(ballistics_A68_qword).m128_u32[0];
            v667 = *(*(game + 0x440) + 0x3F4i64);
            if ( (v667 > 0x16 || (v668 = 0x410189, !_bittest(&v668, v667)))
              && !*(game + 0xCD)
              && *(game + 0xCA)
              && (*(game + 0xCB) & 1) != 0
              && *&mUnit
              && !*(qword_4B176E8 + 0x1E)
              && (v884 = __ROR2__(*(*&mUnit + 0x10B0i64) - 3, 1), v884 <= 6u)
              && (v885 = 0x53, _bittest(&v885, v884)) )
            {
              if ( LocalUnit && *(LocalUnit + 0x10B0) == 5 )
              {
                v669 = (cursor_visuals + 0x6FC);
                v369 = v1210;
              }
              else
              {
                v669 = (cursor_visuals + 0x6F8);
                v369 = v1210;
              }
            }
            else
            {
              v669 = (cursor_visuals + 0x6F4);
            }
            v670 = *v669;
            v671 = 1;
          }
          else
          {
            v666 = *(cursor_visuals + 0x6E0);
            v671 = 0;
            v670 = v666;
          }
          v674 = *(game + 0x440);
          if ( *(v674 + 0xA8E) )
          {
            if ( !*(v674 + 0x8C6) )
            {
              v675 = *(*(v370 + 0x11D0) + 0x2CCi64);
              if ( v675 <= 2 )
              {
LABEL_722:
                v676 = sub_34D1C0(v370, v675, 0i64);
                goto LABEL_725;
              }
LABEL_742:
              if ( !v382 )
                goto LABEL_1201;
              v685 = 0.0;
              if ( (*(v382 + 0x1058) & 0x7000014) == 0 )
              {
                v686 = *(*(v382 + 0x11D0) + 0x300i64);
                v687 = *(v686 + 0x28);
                if ( v687 )
                {
                  v1283 = v671;
                  v688 = *(v686 + 0x20);
                  v689 = v687;
                  v690 = 0.0;
                  for ( j = 0i64; j != v689; ++j )
                  {
                    v692 = *(v688 + 8 * j);
                    if ( !(*(*v692 + 0x108i64))(v692) )
                      v692 = 0i64;
                    v690 = v690 + *(v692[0x56] + 0x24Ci64);
                  }
                  v685 = v690 / v689;
                  v369 = v1210;
                  v671 = v1283;
                }
              }
              if ( COERCE_FLOAT(LODWORD(v685) & xmmword_449AF40) < *&dword_44A0308 )
              {
LABEL_1201:
                v675 = 2;
                v676 = sub_34D240(v370, 2i64, 0i64);
                if ( v676 != 0xFFFFFFFF )
                  goto LABEL_725;
              }
              v675 = 1;
              v676 = sub_34D240(v370, 1i64, 0i64);
              if ( v676 != 0xFFFFFFFF )
                goto LABEL_725;
              v676 = sub_34D240(v370, 0i64, 0i64);
              v675 = 0;
              if ( v676 != 0xFFFFFFFF )
                goto LABEL_725;
              if ( *(v370 + 0x10B0) == 3 )
              {
                LOBYTE(v693) = 1;
                v694 = (*(*v370 + 0x278i64))(v370, v693);
              }
              else
              {
                v694 = sub_34D010(v370);
              }
              v675 = v694;
              goto LABEL_722;
            }
          }
          else if ( !*(v674 + 0x8C6) )
          {
            goto LABEL_742;
          }
          v676 = sub_34D240(v370, 2i64, 0i64);
          v675 = 3 * (v676 != 0xFFFFFFFF) - 1;
LABEL_725:
          if ( v676 != 0xFFFFFFFF && v675 != 0xFFFFFFFF )
          {
            v677 = *(*(*(*(v370 + 0x11D0) + 0x300i64) + 0x10i64 * v675) + 8i64 * v676);
            if ( !v677 || !(*(*v677 + 0x108i64))(v677) )
            {
              if ( !LocalUnit
                || (*(LocalUnit + 0x1058) & 0x7000014) != 0
                || !ballistics_A68_qword
                || (*(LocalUnit + 0x1083) & 8) == 0 )
              {
                v684 = *(*(game + 0x430) + 0x334i64);
                v371 = 0xFFFFFFFF;
                v310 = a3;
                if ( *(cursor_visuals + 0x1B8) <= v684 )
                  goto LABEL_1043;
                goto LABEL_1041;
              }
              v371 = *(*(ballistics_A68_qword + 0x1E70) + 8i64);
              v310 = a3;
LABEL_1043:
              v372 = HIBYTE(v371);
              goto LABEL_385;
            }
            v678 = **(*(v677 + 0x2B0) + (*(v677 + 0x43C) << 6) + 0x98);
            v679 = *(v678 + 8);
            if ( v679 == 0xFFFFFFFF )
              v679 = *(v678 + 4);
            if ( (v679 & 0x80000000) != 0 )
            {
              v680 = (v679 & 0x7FFFFFFF) >> 0x1B;
              if ( (v679 & 0x7FFFFFFF) >= DWORD2(xmmword_4ACF680) )
                goto LABEL_827;
              v682 = v679 & 0x7FFFFFF;
              if ( v682 >= 0x80 << v680 )
                goto LABEL_827;
              v683 = (&xmmword_4ACF620 + 8);
            }
            else
            {
              v680 = v679 >> 0x1B;
              v681 = 0x80 << (v679 >> 0x1B);
              if ( xmmword_4ACF620 <= v679 )
                goto LABEL_827;
              v682 = v679 & 0x7FFFFFF;
              if ( v682 >= v681 )
                goto LABEL_827;
              v683 = &xmmword_4ACF5C0;
            }
            v873 = *(v683 + v680);
            if ( v873 )
            {
              v874 = *(v873 + 8i64 * v682);
              v1314.m128_i8[0] = 1;
              if ( v874 )
              {
LABEL_828:
                v875 = *(v677 + 8);
                if ( v875 )
                {
                  v876 = 0i64;
                  if ( LocalUnit && !*(LocalUnit + 0x10B0) )
                    v876 = LocalUnit;
                  if ( v876 == v875 )
                    v339.m128_i32[0] = *(HudInfo + 0x2C);
                }
                v877 = **(*(v677 + 0x2B0) + (*(v677 + 0x43C) << 6) + 0x98);
                v878 = *&dword_44A0228;
                if ( v877 )
                {
                  v879 = *(v877 + 8);
                  if ( v879 == 0xFFFFFFFF )
                    v879 = *(v877 + 4);
                  if ( (v879 & 0x80000000) != 0 )
                  {
                    v880 = (v879 & 0x7FFFFFFF) >> 0x1B;
                    if ( (v879 & 0x7FFFFFFF) >= DWORD2(xmmword_4ACF680) )
                      goto LABEL_866;
                    v882 = v879 & 0x7FFFFFF;
                    if ( v882 >= 0x80 << v880 )
                      goto LABEL_866;
                    v883 = (&xmmword_4ACF620 + 8);
                  }
                  else
                  {
                    v880 = v879 >> 0x1B;
                    v881 = 0x80 << (v879 >> 0x1B);
                    if ( xmmword_4ACF620 <= v879 )
                      goto LABEL_866;
                    v882 = v879 & 0x7FFFFFF;
                    if ( v882 >= v881 )
                      goto LABEL_866;
                    v883 = &xmmword_4ACF5C0;
                  }
                  v898 = *(v883 + v880);
                  if ( !v898 || !*(v898 + 8i64 * v882) )
LABEL_866:
                    v878 = v339.m128_f32[0] * *(v877 + 0x5C);
                }
                v1289 = *(**(*(v677 + 0x2B0) + (*(v677 + 0x43C) << 6) + 0x98) + 0x5Ci64);
                v899 = *(game + 0x440);
                v900 = *(v899 + 0x620);
                v1262 = v878;
                if ( !v900 || *(v900 + 0x10A8) > 1u || (LODWORD(v899) = *(v900 + 0x1058), (v899 & 0x7000014) != 0) )
                  v900 = 0i64;
                v901 = v665;
                v902 = v664;
                v903 = v663;
                if ( byte_4AD1091 )
                {
                  v904 = *(cursor_visuals + 0x690) - v1311;
                  v905 = *(cursor_visuals + 0x68C) - *(&v1310 + 1);
                  v906 = *(cursor_visuals + 0x688) - *&v1310;
                  v907 = fsqrt(((v904 * v904) + (v905 * v905)) + (v906 * v906));
                  v908 = 0.0;
                  if ( v907 > *&dword_449F1A8 )
                    v908 = Y / v907;
                  v903 = v904 * v908;
                  v902 = v905 * v908;
                  v901 = v906 * v908;
                }
                v1285 = 1;
                LOBYTE(v899) = 1;
                if ( !byte_4B1C539 )
                {
                  v899 = *(game + 0x498);
                  v76 = *(v899 + 0x2999) == 0;
                  LOBYTE(v899) = 1;
                  if ( v76 )
                  {
                    LOBYTE(v899) = 1;
                    if ( !*(HudInfo + 0x58) )
                    {
                      v909 = *(v370 + 0x10B0);
                      if ( *(v370 + 0x10B0) )
                        LODWORD(v369) = 0;
                      else
                        LOBYTE(v369) = *(HudInfo + 0x35) != 0;
                      v1027 = 1;
                      if ( !*(HudInfo + 0x38) )
                      {
                        if ( v909 > 0xF || (v1028 = 0x897E, v266 = _bittest(&v1028, v909), v1029 = v370, !v266) )
                          v1029 = 0i64;
                        v1027 = v1029 != 0;
                      }
                      LODWORD(v899) = v369;
                      LOBYTE(v899) = (v1027 | v369) ^ 1;
                      v369 = v1210;
                    }
                  }
                }
                v1293.m128_i32[0] = v899;
                if ( !byte_4B1C538 && !*(*(game + 0x498) + 0x2998i64) && !*(HudInfo + 0x57) )
                {
                  if ( !*(v370 + 0x10B0) && (*(HudInfo + 0x35) || *(HudInfo + 0x38)) )
                    v1285 = 0;
                  else
                    v1285 = (*(*(v370 + 0x50) + 0x10i64))(v370 + 0x50) ^ 1;
                  v369 = v1210;
                }
                v1030 = 0i64;
                if ( LocalUnit && !*(LocalUnit + 0x10B0) )
                  v1030 = LocalUnit;
                if ( v1030 == v370 )
                  v1031 = *(HudInfo + 0x2D);
                else
                  v1031 = LODWORD(Y);
                v1032 = _mm_xor_ps(v1031, xmmword_44801F0);
                v1032.m128_f32[0] = v1032.m128_f32[0] * *&gamephys::gravity;
                v1033 = *(v370 + 0x10B0);
                if ( v1033 <= 0xF )
                {
                  v1034 = 0x897E;
                  if ( _bittest(&v1034, v1033) )
                  {
                    v1035 = *(v370 + 0x1EA0);
                    v1036 = (v1035 + 0x54);
                    v76 = v1035 == 0;
                    v1037 = &xmmword_4514A60;
                    if ( !v76 )
                      v1037 = v1036;
                    if ( *(v370 + 0x58) == 1 )
                      v1037 = (v370 + 0x22AC);
                    v1291 = *(v1037 + 2);
                    v1290 = *v1037;
LABEL_1011:
                    v1038 = v670 * v670;
                    v1039 = game;
                    if ( *(game + 0x330) )
                    {
                      v1347 = _mm_xor_ps(xmmword_44801F0, v1032);
                      v1254 = 0.0;
                      if ( !v1314.m128_i8[0] )
                        v1254 = Y;
                      v1309 = v370 + 0x99C;
                      v1040 = v666 * v666;
                      v1286 = v1285 ^ 1;
                      v1041 = v1293.m128_i32[0];
                      LOBYTE(v1041) = v1293.m128_i8[0] ^ 1;
                      v1293.m128_i32[0] = v1041;
                      v1307 = v678 + 0x18;
                      LODWORD(v1292) = dword_44A9F98;
                      v1042 = 0i64;
                      v1237 = 0.0;
                      v1231 = 0.0;
                      Strg = 0i64;
                      while ( 1 )
                      {
                        v1061 = *(*(v1039 + 0x320) + 8 * v1042);
                        if ( !v1061 )
                          goto LABEL_1059;
                        if ( (*(v1061 + 0x1058) & 0x7000014) != 0 )
                          goto LABEL_1059;
                        if ( !sub_326810(v1061) )
                          goto LABEL_1059;
                        if ( *(v1061 + 0x10A8) > 1u )
                          goto LABEL_1059;
                        if ( (*(v1061 + 0x1058) & 0x1000) == 0 )
                          goto LABEL_1059;
                        v1062 = *(v1061 + 0x11C8);
                        if ( v1062 )
                        {
                          if ( *(*(v1062 + 0xC0) + 0x1058i64) < 0 )
                            goto LABEL_1059;
                        }
                        if ( (*(v1061 + 0x120) & 1) == 0 && v1061 != v900 && v1061 != *(cursor_visuals + 0x4A20)
                          || ((((*(v1061 + 0x9C8) - v1311) * (*(v1061 + 0x9C8) - v1311))
                             + ((*(v1061 + 0x9C4) - *(&v1310 + 1)) * (*(v1061 + 0x9C4) - *(&v1310 + 1))))
                            + ((*(v1061 + 0x9C0) - *&v1310) * (*(v1061 + 0x9C0) - *&v1310))) > v1038 )
                        {
                          goto LABEL_1059;
                        }
                        v1312 = (((*(v1061 + 0x9C8) - v1311) * (*(v1061 + 0x9C8) - v1311))
                               + ((*(v1061 + 0x9C4) - *(&v1310 + 1)) * (*(v1061 + 0x9C4) - *(&v1310 + 1))))
                              + ((*(v1061 + 0x9C0) - *&v1310) * (*(v1061 + 0x9C0) - *&v1310));
                        sub_324710(v1061, &v1303);
                        v1067 = *(v1061 + 0x9D0);
                        LODWORD(v1319) = 0;
                        v1068 = 0.0;
                        v1069 = 0.0;
                        v1070 = 0.0;
                        if ( v1067 )
                        {
                          v1070 = v1067[0x135];
                          v1069 = v1067[0x134];
                          v1068 = v1067[0x133];
                        }
                        *&v1350 = v900;
                        v1213 = v901;
                        v1216 = v902;
                        v1209 = v903;
                        *v1358 = v1068;
                        *&v1358[1] = v1069;
                        *&v1358[2] = v1070;
                        v1357.m128_f32[0] = v1311 - *(v1061 + 0x9C8);
                        v1071 = HIDWORD(v1310);
                        v1071.m128_f32[0] = *(&v1310 + 1) - *(v1061 + 0x9C4);
                        v1348 = v1071;
                        v1258 = *&v1310 - *(v1061 + 0x9C0);
                        LODWORD(v1306) = 0;
                        v1302.m128_i32[0] = 0;
                        if ( v1314.m128_i8[0] )
                          goto LABEL_1101;
                        *&v1319 = v1061 + 0x9C0;
                        if ( sub_B96590(0) )
                          break;
                        v1336 = 0i64;
                        LODWORD(v1337) = 0;
                        if ( !v671 )
                        {
                          v1124 = fsqrt((v1305 * v1305) + ((v1304 * v1304) + (v1303 * v1303)));
                          v1125 = 0.0;
                          if ( v1124 > *&dword_449F1A8 )
                            v1125 = Y / v1124;
                          v1126 = v1125 * *(cursor_visuals + 0x6E4);
                          v1302.m128_f32[0] = (v1305 * v1126) + *(v1061 + 0x9C8);
                          *&v1127 = (v1304 * v1126) + *(v1061 + 0x9C4);
                          *&v1319 = (v1126 * v1303) + *(v1061 + 0x9C0);
                          v1336 = __PAIR64__(v1127, v1319);
                          LODWORD(v1306) = v1127;
LABEL_1092:
                          v1128 = *(v370 + 0x9C8);
                          v1129 = v1302.m128_f32[0] - v1128;
                          v1130 = *(v370 + 0x9C0);
                          v1131 = *(v370 + 0x9C4);
                          v1132 = *&v1306 - v1131;
                          v1133 = *&v1319 - v1130;
                          *&v1317 = *&v1319 - v1130;
                          *(&v1317 + 1) = *&v1306 - v1131;
                          v1318 = v1302.m128_f32[0] - v1128;
                          v1134 = *(cursor_visuals + 0x604) - v1128;
                          v1135 = *(cursor_visuals + 0x600) - v1131;
                          *&v1324 = *(cursor_visuals + 0x5FC) - v1130;
                          *(&v1324 + 1) = v1135;
                          v1325 = v1134;
                          v1136 = sub_160BE90(&v1324, &v1317);
                          v1137 = 0.0;
                          v1138 = fminf(fmaxf(v1136 + v1136, 0.0), Y);
                          v1139 = fsqrt(((v1129 * v1129) + (v1132 * v1132)) + (v1133 * v1133));
                          if ( v1139 > *&dword_449F1A8 )
                            v1137 = Y / v1139;
                          v1140 = v1137 * v1294;
                          v1141 = ((v1132 * v1140) + *(v370 + 0x9C4)) * (Y - v1138);
                          v1142 = (Y - v1138) * ((v1140 * v1133) + *(v370 + 0x9C0));
                          v1302.m128_f32[0] = (v1302.m128_f32[0] * v1138)
                                            + (((v1129 * v1140) + *(v370 + 0x9C8)) * (Y - v1138));
                          *&v1306 = (*&v1306 * v1138) + v1141;
                          *&v1319 = (*&v1319 * v1138) + v1142;
LABEL_1101:
                          if ( v671 )
                          {
                            v1146 = v1302.m128_f32[0] - v1311;
                            v1147 = *&v1306 - *(&v1310 + 1);
                            v1148 = *&v1319 - *&v1310;
                            v1149 = fsqrt(((v1146 * v1146) + (v1147 * v1147)) + (v1148 * v1148));
                            v1150 = 0.0;
                            if ( v1149 > *&dword_449F1A8 )
                              v1150 = Y / v1149;
                            v1151 = v1146 * v1150;
                            v1152 = v1147 * v1150;
                            v1153 = v1148 * v1150;
                            if ( ((v1151 * v663) + ((v1152 * v664) + (v1153 * v665))) >= *(cursor_visuals + 0x6D0) )
                              v1237 = fmaxf(
                                        v1237,
                                        COERCE_FLOAT(COERCE_UNSIGNED_INT64(sub_11F650(v1064, v1063, v1065, v1066, 0x3F800000))));
                            v1154 = (v1151 * v1209) + ((v1152 * v1216) + (v1153 * v1213));
                          }
                          else
                          {
                            v1154 = *&dword_44B59E8;
                          }
                          v1155 = fsqrt(
                                    ((v1357.m128_f32[0] * v1357.m128_f32[0]) + (v1348.m128_f32[0] * v1348.m128_f32[0]))
                                  + (v1258 * v1258));
                          v1156 = *&dword_4480A00;
                          if ( v1155 > *&dword_449F1A8 )
                            v1156 = *&dword_44801E8 / v1155;
                          v1157 = fminf(
                                    v1154,
                                    (((v1357.m128_f32[0] * v1209) + (v1348.m128_f32[0] * v1216)) + (v1258 * v1213))
                                  * v1156);
                          if ( v1157 >= *&dword_44878D0 && v1157 > *&v1292 )
                          {
                            if ( v1157 >= *(cursor_visuals + 0x6D8) )
                            {
                              v1158 = sub_11F650(v1064, v1063, v1065, v1066, 0x3F800000);
                              v1231 = *&v1158;
                              Strg = v1061;
                            }
                            *&v1292 = v1157;
                          }
                          if ( v1061 == v1350
                            || *(v370 + 0x4E8) && *(v370 + 0x10B0) == 3 && (*(v370 + 0x1081) & 0x10) == 0 )
                          {
                            *(cursor_visuals + 0x4A48) = v1319;
                            *(cursor_visuals + 0x4A4C) = v1306;
                            *(cursor_visuals + 0x4A50) = v1302.m128_i32[0];
                            *(cursor_visuals + 0x4A58) = v1254;
                            *(cursor_visuals + 0x4A54) = v1312 <= v1040;
                          }
                          if ( v1061 == *(cursor_visuals + 0x4A20) )
                          {
                            *(cursor_visuals + 0x4A5C) = v1319;
                            *(cursor_visuals + 0x4A60) = v1306;
                            *(cursor_visuals + 0x4A64) = v1302.m128_i32[0];
                            v1159 = 0.0;
                            if ( !v1314.m128_i8[0] )
                              v1159 = fminf(fmaxf(v1231 + v1231, *&dword_44878D0), Y) * *(cursor_visuals + 0x4A34);
                            *(cursor_visuals + 0x4A6C) = v1159;
                            *(cursor_visuals + 0x4A68) = v1312 <= v1040;
                          }
                          v369 = v1210;
                          goto LABEL_1058;
                        }
                        if ( *(*(game + 0x498) + 0x1C40i64) )
                        {
                          v1313 = 0.0;
                          v1112 = *(v370 + 0x9AC);
                          v1243 = *(v370 + 0x9A0);
                          v1300 = *(v370 + 0x99C);
                          v1302.m128_f32[0] = v1112 * v1300;
                          v1220 = *(v370 + 0x9BC);
                          v1113 = *(v370 + 0x9B0);
                          *&v1306 = v1113 * v1243;
                          v1114 = *(v370 + 0x9B4);
                          v1249 = *(v370 + 0x9A8);
                          v1299 = *(v370 + 0x9B8);
                          v1115 = v1299 * v1249;
                          v1116 = *(v370 + 0x9A4);
                          v1268 = ((v1299 * v1249) * v1116) + (((v1113 * v1243) * v1114) + ((v1112 * v1300) * v1220));
                          v1228 = v1113 * v1300;
                          v1224 = v1114 * v1112;
                          v1308 = v1299 * v1113;
                          v1298 = v1112 * v1116;
                          v1297 = v1113 * v1114;
                          v1296 = v1116 * v1114;
                          v1117 = v1116;
                          v1118 = v1116;
                          v1119 = v1116 * v1249;
                          v1120 = v1114 * v1243;
                          v1295 = v1249;
                          v1250 = v1249 * v1243;
                          v1121 = v1243 * v1220;
                          v1244 = Y
                                / (v1268 - ((v1117 * v1224) + ((v1299 * (v1113 * v1300)) + (v1295 * (v1243 * v1220)))));
                          *&v1306 = *&v1306 - v1298;
                          v1302.m128_f32[0] = (v1112 * v1300) - v1250;
                          v1122 = ((v1115 - v1224) * v1291)
                                + (((v1297 - (v1295 * v1220)) * *(&v1290 + 1))
                                 + (((v1220 * v1112) - (v1299 * v1113)) * *&v1290));
                          v1123 = *(v1061 + 0x1BC);
                          v1333 = v1122 * v1244;
                          v1334 = (((v1120 - (v1299 * v1300)) * v1291)
                                 + ((((v1220 * v1300) - v1296) * *(&v1290 + 1)) + (((v1118 * v1299) - v1121) * *&v1290)))
                                * v1244;
                          v1335 = ((v1302.m128_f32[0] * v1291)
                                 + (((v1119 - v1228) * *(&v1290 + 1)) + (*&v1306 * *&v1290)))
                                * v1244;
                          if ( sub_1642DB0(
                                 v1307,
                                 &v1310,
                                 &xmmword_4514A60,
                                 &v1333,
                                 v1319,
                                 &v1303,
                                 v1358,
                                 LODWORD(v1262),
                                 (v1123 + v1123) * (v1123 + v1123),
                                 v1293.m128_i8[0],
                                 v1286,
                                 0x3CA3D70A,
                                 0x42700000,
                                 5,
                                 &v1317,
                                 &v1324,
                                 &v1313) )
                          {
                            v1302.m128_f32[0] = ((v1305 - v1291) * v1313) + *(v1061 + 0x9C8);
                            *&v1306 = ((v1304 - *(&v1290 + 1)) * v1313) + *(v1061 + 0x9C4);
                            *&v1319 = ((v1303 - *&v1290) * v1313) + *(v1061 + 0x9C0);
                            LODWORD(v1336) = v1319;
                            goto LABEL_1092;
                          }
                        }
                        else
                        {
                          v1160 = fsqrt(
                                    ((v1357.m128_f32[0] * v1357.m128_f32[0]) + (v1348.m128_f32[0] * v1348.m128_f32[0]))
                                  + (v1258 * v1258));
                          v1302 = 0i64;
                          v1161 = 0.0;
                          if ( v1160 > *&dword_449F1A8 )
                            v1161 = Y / v1160;
                          v1162 = _mm_xor_ps(v1348, xmmword_44801F0);
                          v1162.m128_f32[0] = (((v1162.m128_f32[0] * v1161) * *(v370 + 0x9A0))
                                             - ((v1161 * v1258) * *(v370 + 0x99C)))
                                            - ((v1161 * v1357.m128_f32[0]) * *(v370 + 0x9A4));
                          if ( v1162.m128_f32[0] > *&v337 )
                          {
                            v1302 = LODWORD(Y);
                            if ( v1162.m128_f32[0] < Y )
                            {
                              v1163.m128_f32[0] = *&v337 - v1162.m128_f32[0];
                              v1162.m128_f32[0] = (v1162.m128_f32[0] + v1162.m128_f32[0]) + *&dword_44801E8;
                              v1302 = _mm_andnot_ps(_mm_cmple_ss(0i64, v1163), v1162);
                            }
                          }
                          v1164 = fsqrt((v1305 * v1305) + ((v1304 * v1304) + (v1303 * v1303)));
                          v1166 = sub_325030(v370);
                          v1167 = fminf(v1164, v1166);
                          LODWORD(v1168) = COERCE_UNSIGNED_INT(v1164 - v1166) & xmmword_449AF40;
                          v1169 = (v1167 - v1168) * *&v337;
                          v1170 = fsqrt(((v1305 * v1305) + (v1304 * v1304)) + (v1303 * v1303));
                          LODWORD(v1306) = 0;
                          if ( v1170 > *&dword_449F1A8 )
                            *&v1306 = Y / v1170;
                          v1171 = v1302.m128_f32[0] * v1302.m128_f32[0];
                          v1302.m128_f32[0] = v1166 + v1289;
                          v1172 = ((Y - v1171) * (v1169 + v1168)) * *&v1306;
                          *&v1317 = ((v1303 - *&v1290) * v1171) + (v1172 * v1303);
                          *(&v1317 + 1) = ((v1304 - *(&v1290 + 1)) * v1171) + (v1304 * v1172);
                          v1318 = ((v1305 - v1291) * v1171) + (v1305 * v1172);
                          if ( sub_1642CA0(&v1310, v1165, v1319, &v1317, v1293.m128_i8[0], &v1336, &v1324) )
                          {
                            v1302.m128_i32[0] = v1337;
                            LODWORD(v1306) = HIDWORD(v1336);
                            LODWORD(v1319) = v1336;
                            goto LABEL_1092;
                          }
                        }
                        v369 = v1210;
LABEL_1058:
                        v903 = v1209;
                        v902 = v1216;
                        v901 = v1213;
                        v900 = v1350;
LABEL_1059:
                        ++v1042;
                        v1039 = game;
                        if ( v1042 >= *(game + 0x330) )
                          goto LABEL_1016;
                      }
                      if ( sub_B96590(0) == 1 )
                      {
                        v1072 = *(v370 + 0x10B0);
                        if ( v1072 == 5 || v1072 == 3 )
                        {
                          LOBYTE(v1203) = 0;
                          (*(*v677 + 0x1F0i64))(v677, &v1336, v1309, 0i64, 0xFFFFFFFF, v1203);
                          v1318 = v1344;
                          v1317 = v1343;
                          v1073 = *(v370 + 0x11D0);
                          v1074 = *(v677 + 0x24);
                          v1075 = *(v1073 + 0x1A8);
                          v1313 = 0.0;
                          v1325 = 0.0;
                          v1324 = 0i64;
                          if ( *(*(game + 0x498) + 0x1C40i64) )
                          {
                            v1076 = *(v370 + 0x9AC);
                            v1240 = *(v370 + 0x9A0);
                            v1300 = *(v370 + 0x99C);
                            v1302.m128_f32[0] = v1076 * v1300;
                            v1218 = *(v370 + 0x9BC);
                            v1077 = *(v370 + 0x9B0);
                            *&v1306 = v1077 * v1240;
                            v1078 = *(v370 + 0x9B4);
                            v1246 = *(v370 + 0x9A8);
                            v1299 = *(v370 + 0x9B8);
                            v1079 = v1299 * v1246;
                            v1080 = *(v370 + 0x9A4);
                            v1266 = ((v1299 * v1246) * v1080) + (((v1077 * v1240) * v1078) + ((v1076 * v1300) * v1218));
                            v1226 = v1077 * v1300;
                            v1222 = v1078 * v1076;
                            v1308 = v1299 * v1077;
                            v1298 = v1076 * v1080;
                            v1297 = v1077 * v1078;
                            v1296 = v1080 * v1078;
                            v1081 = v1080;
                            v1082 = v1080;
                            v1083 = v1080 * v1246;
                            v1084 = v1078 * v1240;
                            v1295 = v1246;
                            v1247 = v1246 * v1240;
                            v1085 = v1240 * v1218;
                            v1241 = Y
                                  / (v1266 - ((v1081 * v1222) + ((v1299 * (v1077 * v1300)) + (v1295 * (v1240 * v1218)))));
                            *&v1306 = *&v1306 - v1298;
                            v1302.m128_f32[0] = (v1076 * v1300) - v1247;
                            v1086 = ((v1079 - v1222) * v1291)
                                  + (((v1297 - (v1295 * v1218)) * *(&v1290 + 1))
                                   + (((v1218 * v1076) - (v1299 * v1077)) * *&v1290));
                            v1087 = *(v1061 + 0x1BC);
                            *&v1336 = v1086 * v1241;
                            *(&v1336 + 1) = (((v1084 - (v1299 * v1300)) * v1291)
                                           + ((((v1218 * v1300) - v1296) * *(&v1290 + 1))
                                            + (((v1082 * v1299) - v1085) * *&v1290)))
                                          * v1241;
                            *&v1337 = ((v1302.m128_f32[0] * v1291)
                                     + (((v1083 - v1226) * *(&v1290 + 1)) + (*&v1306 * *&v1290)))
                                    * v1241;
                            if ( sub_1642DB0(
                                   v1307,
                                   &v1317,
                                   &xmmword_4514A60,
                                   &v1336,
                                   v1319,
                                   &v1303,
                                   v1358,
                                   LODWORD(v1262),
                                   (v1087 + v1087) * (v1087 + v1087),
                                   v1293.m128_i8[0],
                                   v1286,
                                   0x3CA3D70A,
                                   0x42700000,
                                   5,
                                   &v1324,
                                   &v1333,
                                   &v1313) )
                            {
LABEL_1082:
                              v1102 = ((v1305 * v1313) + *(v1061 + 0x9C8)) - v1318;
                              v1103 = ((v1304 * v1313) + *(v1061 + 0x9C4)) - *(&v1317 + 1);
                              v1104 = ((v1303 * v1313) + *(v1061 + 0x9C0)) - *&v1317;
                              v1105 = fsqrt(((v1102 * v1102) + (v1103 * v1103)) + (v1104 * v1104));
                              v1302.m128_f32[0] = (v1325 * v1105) + ((v1291 * v1313) + v1318);
                              *&v1306 = (*(&v1324 + 1) * v1105) + ((*(&v1290 + 1) * v1313) + *(&v1317 + 1));
                              *&v1319 = (v1105 * *&v1324) + ((v1313 * *&v1290) + *&v1317);
                              goto LABEL_1101;
                            }
                            v1073 = *(v370 + 0x11D0);
                          }
                          v1242 = *(v1075 + 0x68 * v1074 + 0x40);
                          v1267 = *(v1075 + 0x68 * v1074 + 0x44);
                          v1088 = *(*(v1073 + 0x80) + 0x308i64 * *(*(v677 + 0x2B0) + 0x20i64));
                          v1089 = *(v370 + 0x99C);
                          v1090 = *(v370 + 0x9A8);
                          v1302.m128_i32[0] = *(v1088 + 0xE0);
                          LODWORD(v1306) = *(v1088 + 0xE4);
                          v1091 = *(v370 + 0x9B4);
                          v1092 = *(v1088 + 0xE8);
                          *&v1336 = (v1092 * v1091) + ((*&v1306 * v1090) + (v1302.m128_f32[0] * v1089));
                          v1206 = *(v1088 + 0xEC);
                          v1248 = *(v1088 + 0xF0);
                          v1093 = *(v1088 + 0xF4);
                          *(&v1337 + 1) = (v1093 * v1091) + ((v1248 * v1090) + (v1206 * v1089));
                          v1227 = *(v1088 + 0xF8);
                          v1094 = *(v1088 + 0xFC);
                          v1095 = *(v1088 + 0x100);
                          v1340 = (v1095 * v1091) + ((v1094 * v1090) + (v1227 * v1089));
                          v1219 = *(v1088 + 0x108);
                          v1223 = *(v1088 + 0x10C);
                          v1300 = *(v1088 + 0x104);
                          *&v1343 = ((v1091 * v1223) + (v1090 * v1219)) + ((v1089 * v1300) + *(v370 + 0x9C0));
                          v1096 = *(v370 + 0x9A0);
                          v1097 = *(v370 + 0x9AC);
                          v1098 = *(v370 + 0x9B8);
                          *(&v1336 + 1) = (v1098 * v1092) + ((v1097 * *&v1306) + (v1096 * v1302.m128_f32[0]));
                          v1338 = (v1098 * v1093) + ((v1097 * v1248) + (v1096 * v1206));
                          v1341 = (v1098 * v1095) + ((v1097 * v1094) + (v1096 * v1227));
                          *(&v1343 + 1) = ((v1098 * v1223) + ((v1097 * v1219) + (v1096 * v1300))) + *(v370 + 0x9C4);
                          v1099 = *(v370 + 0x9A4);
                          v1100 = *(v370 + 0x9B0);
                          v1101 = *(v370 + 0x9BC);
                          *&v1337 = (v1092 * v1101) + ((*&v1306 * v1100) + (v1302.m128_f32[0] * v1099));
                          v1339 = (v1093 * v1101) + ((v1248 * v1100) + (v1206 * v1099));
                          v1342 = (v1095 * v1101) + ((v1094 * v1100) + (v1227 * v1099));
                          v1344 = ((v1101 * v1223) + ((v1100 * v1219) + (v1099 * v1300))) + *(v370 + 0x9C8);
                          if ( sub_2C3AE0(
                                 &v1317,
                                 &v1290,
                                 v1065,
                                 v1066,
                                 1,
                                 &v1336,
                                 v1242,
                                 v1267,
                                 v1319,
                                 &v1303,
                                 &v1313,
                                 &v1324) )
                            goto LABEL_1082;
                        }
                      }
                      *&v1336 = v1303 - *&v1290;
                      *(&v1336 + 1) = v1304 - *(&v1290 + 1);
                      *&v1337 = v1305 - v1291;
                      v1106 = *(v1061 + 0x9C8) - *(v370 + 0x9C8);
                      v1107 = *(v1061 + 0x9C4) - *(v370 + 0x9C4);
                      *&v1317 = *(v1061 + 0x9C0) - *(v370 + 0x9C0);
                      *(&v1317 + 1) = v1107;
                      v1318 = v1106;
                      v1108 = *(v1061 + 0x9D0);
                      if ( v1108 )
                      {
                        v1109 = v1108[0x135];
                        v1110 = v1108[0x134];
                        v1111 = v1108[0x133];
                      }
                      else
                      {
                        v1111 = 0.0;
                        v1110 = 0.0;
                        v1109 = 0.0;
                      }
                      v1324 = __PAIR64__(LODWORD(v1110), LODWORD(v1111));
                      v1325 = v1109;
                      sub_285700(
                        &v1333,
                        v1063,
                        &v1317,
                        &v1336,
                        &v1324,
                        &v1290,
                        LODWORD(v1289),
                        v1286,
                        v677,
                        v1293.m128_i8[0],
                        v1347.m128_i32[0],
                        0,
                        0,
                        dword_44C3938[*(v370 + 0x10B0) == 5]);
                      if ( *(v370 + 0x10B0) == 5 )
                      {
                        v1302.m128_f32[0] = v1335 + *(v370 + 0x9C8);
                        *&v1306 = v1334 + *(v370 + 0x9C4);
                        *&v1319 = v1333 + *(v370 + 0x9C0);
                      }
                      else
                      {
                        v1143 = fsqrt((v1335 * v1335) + ((v1334 * v1334) + (v1333 * v1333)));
                        v1144 = 0.0;
                        if ( v1143 > *&dword_449F1A8 )
                          v1144 = Y / v1143;
                        v1145 = v1144 * v1294;
                        v1302.m128_f32[0] = (v1335 * v1145) + *(v370 + 0x9C8);
                        *&v1306 = (v1334 * v1145) + *(v370 + 0x9C4);
                        *&v1319 = (v1145 * v1333) + *(v370 + 0x9C0);
                      }
                      goto LABEL_1101;
                    }
                    v1237 = 0.0;
                    Strg = 0i64;
LABEL_1016:
                    if ( !((*(v370 + 0x10B0) != 0) | v671 ^ 1) && *(v1039 + 0x348) )
                    {
                      v1043 = 0i64;
                      v1044 = Y;
                      v1045 = xmmword_44801F0;
                      do
                      {
                        v1046 = *(*(v1039 + 0x338) + 8 * v1043);
                        if ( (*(v1046 + 0x1058) & 0x7000014) == 0
                          && sub_326810(v1046)
                          && *(v1046 + 0x10A8) <= 1u
                          && (*(v1046 + 0x1058) & 0x1000) != 0
                          && (*(v1046 + 0x120) & 1) != 0
                          && ((((*(v1046 + 0x9C8) - v1311) * (*(v1046 + 0x9C8) - v1311))
                             + ((*(v1046 + 0x9C4) - *(&v1310 + 1)) * (*(v1046 + 0x9C4) - *(&v1310 + 1))))
                            + ((*(v1046 + 0x9C0) - *&v1310) * (*(v1046 + 0x9C0) - *&v1310))) <= v1038 )
                        {
                          v1051 = v1311 - *(v1046 + 0x9C8);
                          v1052 = *(&v1310 + 1) - *(v1046 + 0x9C4);
                          v1053 = *&v1310 - *(v1046 + 0x9C0);
                          v1054 = fsqrt(((v1051 * v1051) + (v1052 * v1052)) + (v1053 * v1053));
                          v1055 = 0.0;
                          if ( v1054 > *&dword_449F1A8 )
                            v1055 = v1044 / v1054;
                          if ( (COERCE_FLOAT(COERCE_UNSIGNED_INT((v1053 * v901) + ((v1051 * v903) + (v1052 * v902))) ^ v1045)
                              * v1055) >= *(cursor_visuals + 0x6D0) )
                            v1237 = fmaxf(
                                      v1237,
                                      COERCE_FLOAT(COERCE_UNSIGNED_INT64(sub_11F650(v1048, v1047, v1049, v1050, 0x3F800000))));
                        }
                        ++v1043;
                        v1039 = game;
                      }
                      while ( v1043 < *(game + 0x348) );
                    }
                    v310 = a3;
                    if ( *(cursor_visuals + 0x4A38) )
                    {
                      if ( *(cursor_visuals + 0x4A28) != Strg )
                        *(cursor_visuals + 0x4A30) = 0;
                      *(cursor_visuals + 0x4A28) = Strg;
                    }
                    if ( !*(v370 + 0x10B0) )
                    {
                      if ( LocalUnit
                        && (*(LocalUnit + 0x1058) & 0x7000014) == 0
                        && ballistics_A68_qword
                        && (*(LocalUnit + 0x1083) & 8) != 0 )
                      {
                        v1059 = *(*(ballistics_A68_qword + 0x1E70) + 8i64);
                      }
                      else
                      {
                        v1058 = *(*(game + 0x430) + 0x334i64);
                        v1059 = 0xFFFFFFFF;
                        if ( *(cursor_visuals + 0x1B8) > v1058 )
                        {
                          v1060 = *(cursor_visuals + 0x1A8);
                          if ( v1060 )
                            v1059 = *(v1060 + 4 * v1058);
                        }
                      }
                      v1057 = *(cursor_visuals + 0x698);
                      v371 = ((((BYTE1(v1057) - BYTE1(v1059)) * v1237) + BYTE1(v1059)) << 8) | ((((BYTE2(v1057)
                                                                                                 - BYTE2(v1059))
                                                                                                * v1237)
                                                                                               + BYTE2(v1059)) << 0x10) | ((((HIBYTE(v1057) - HIBYTE(v1059)) * v1237) + HIBYTE(v1059)) << 0x18) | (((v1057 - v1059) * v1237) + v1059);
                      v369 = v1210;
                      goto LABEL_1043;
                    }
LABEL_1038:
                    if ( LocalUnit
                      && (*(LocalUnit + 0x1058) & 0x7000014) == 0
                      && ballistics_A68_qword
                      && (*(LocalUnit + 0x1083) & 8) != 0 )
                    {
                      v371 = *(*(ballistics_A68_qword + 0x1E70) + 8i64);
                      goto LABEL_1043;
                    }
                    v684 = *(*(game + 0x430) + 0x334i64);
                    v371 = 0xFFFFFFFF;
                    if ( *(cursor_visuals + 0x1B8) > v684 )
                    {
LABEL_1041:
                      v1056 = *(cursor_visuals + 0x1A8);
                      if ( v1056 )
                        v371 = *(v1056 + 4 * v684);
                      goto LABEL_1043;
                    }
                    goto LABEL_1043;
                  }
                  if ( !*(v370 + 0x10B0) && (*(v370 + 0x1058) & 0x2000010) == 0 )
                  {
                    v1173 = *(v370 + 0x9D0);
                    v1174 = v1173[0x132];
                    *&v1175 = v1173[0x131];
                    *&v1176 = v1173[0x130];
                    v1290 = __PAIR64__(v1175, v1176);
                    v1291 = v1174;
                    goto LABEL_1011;
                  }
                }
                v1290 = 0i64;
                v1291 = 0.0;
                goto LABEL_1011;
              }
            }
LABEL_827:
            v1314.m128_i8[0] = *(v677 + 0x6F8) != 0;
            goto LABEL_828;
          }
          v371 = 0xFFFFFF;
          LOBYTE(v372) = 0xFF;
          if ( v382 )
          {
            v310 = a3;
            if ( (*(v382 + 0x1083) & 8) != 0 )
              goto LABEL_1038;
          }
          else
          {
            v310 = a3;
          }
LABEL_385:
          v373 = *(*(game + 0x440) + 0x620i64);
          if ( v373 && (*(v373 + 0x1058) & 0x20000) == 0 && *(*(*(game + 0x440) + 0x620i64) + 0x10A8i64) < 2u )
          {
            a2 = v1263;
          }
          else
          {
            a2 = v1263;
            if ( *(cursor_visuals + 0x4A20) && !sub_128DEA0(*(*(game + 0x440) + 0x630i64)) && !*(v369 + 0x4E8) )
              unknown_lock_target(*(game + 0x440), *(cursor_visuals + 0x4A20), v374, v375);
          }
          goto LABEL_452;
        }
      }
LABEL_446:
      if ( LocalUnit && (*(LocalUnit + 0x1058) & 0x7000014) == 0 && ballistics_A68_qword && (*(LocalUnit + 0x1083) & 8) != 0 )
      {
        v371 = *(*(ballistics_A68_qword + 0x1E70) + 8i64);
      }
      else
      {
        v427 = *(*(game + 0x430) + 0x334i64);
        v371 = 0xFFFFFFFF;
        if ( *(cursor_visuals + 0x1B8) > v427 )
        {
          v428 = *(cursor_visuals + 0x1A8);
          if ( v428 )
            v371 = *(v428 + 4 * v427);
        }
      }
      v372 = HIBYTE(v371);
      *(cursor_visuals + 0x4A20) = 0i64;
      *(cursor_visuals + 0x4A30) = 0i64;
      *(cursor_visuals + 0x4A48) = 0i64;
      *(cursor_visuals + 0x4A4D) = 0i64;
      *(cursor_visuals + 0x4A6C) = 0;
      *(cursor_visuals + 0x4A58) = 0i64;
      *(cursor_visuals + 0x4A68) = 0;
LABEL_452:
      v429 = sub_128DEA0(*(*(game + 0x440) + 0x630i64));
      v432 = *(v369 + 0x10B0);
      v433 = 0i64;
      if ( v432 == 5 )
        v433 = v369;
      if ( !v429
        || v432 != 5
        || (*(v429 + 0x358) & 0xFE) != 2
        || *(v429 + 0x120) != 2
        || (v430 = *(v429 + 0x668),
            ((*(v430 + 0x3AC) * *(*(game + 0x498) + 0x180i64)) * (*(v430 + 0x3AC) * *(*(game + 0x498) + 0x180i64))) < ((((*(v429 + 0x2E8) - *(v369 + 0x9C8)) * (*(v429 + 0x2E8) - *(v369 + 0x9C8))) + ((*(v429 + 0x2E4) - *(v369 + 0x9C4)) * (*(v429 + 0x2E4) - *(v369 + 0x9C4)))) + ((*(v429 + 0x2E0) - *(v369 + 0x9C0)) * (*(v429 + 0x2E0) - *(v369 + 0x9C0))))) )
      {
        *(*(game + 0x440) + 0x630i64) = 0;
      }
      if ( (*(cursor_visuals + 0x4A70) - 1) <= 1 )
      {
        if ( LocalUnit && (*(LocalUnit + 0x1058) & 0x7000014) == 0 && ballistics_A68_qword && (*(LocalUnit + 0x1083) & 8) != 0 )
        {
          v371 = *(*(ballistics_A68_qword + 0x1E70) + 8i64);
        }
        else
        {
          v434 = *(*(game + 0x430) + 0x334i64);
          v371 = 0xFFFFFFFF;
          if ( *(cursor_visuals + 0x1B8) > v434 )
          {
            v435 = *(cursor_visuals + 0x1A8);
            if ( v435 )
              v371 = *(v435 + 4 * v434);
          }
        }
        v372 = HIBYTE(v371);
      }
      v436 = 0.0;
      if ( *(cursor_visuals + 0xABF) | *(cursor_visuals + 0xABC) )
      {
        if ( v1359 )
          v436 = Y - *(cursor_visuals + 0xAC0);
        else
          v436 = 0.0;
        v372 = ((Y - v436) * v372);
      }
      *(cursor_visuals + 0x4A74) = v436;
      *(cursor_visuals + 0x6C4) = v371;
      *(cursor_visuals + 0x6C6) = BYTE2(v371);
      *(cursor_visuals + 0x6C7) = v372;
      if ( !g_net )
      {
        *(cursor_visuals + 0x4A44) = v371;
        *(cursor_visuals + 0x4A46) = BYTE2(v371);
        *(cursor_visuals + 0x4A47) = v372;
      }
      if ( (((*(v369 + 0x58) & 2) == 0) & ~v1301) == 0 )
      {
        v437 = dword_4B44B40;
        if ( !dword_4B44B40 )
        {
          v438 = sub_1623330(0i64, 0x7DE, 0, "updateGunCorrection", 0);
          v437 = v438;
          dword_4B44B40 = v438;
        }
        if ( (dword_4B70D40 & 2) != 0 )
          v439 = sub_1625CD0(v437, &v1337);
        else
          v439 = 0i64;
        v1336 = v439;
        if ( v432 == 5 )
        {
          v440 = *(v369 + 0x11D0);
          if ( v440 )
          {
            if ( *(v433 + 0x854) <= 1u && !v433[0x4E9] && *(v440 + 0x1A0) )
            {
              v441 = 0xC0i64;
              v442 = 0i64;
              while ( 1 )
              {
                v443 = *(v440 + 0x190);
                v444 = *(v443 + v441 + 4);
                if ( v444 < 0 )
                  goto LABEL_490;
                v445 = *(v440 + 0x300);
                v430 = 0x10i64 * *(v443 + v441);
                if ( *(v445 + v430 + 8) <= v444 )
                  goto LABEL_490;
                v446 = *(*(v445 + 0x10i64 * *(v443 + v441)) + 8i64 * v444);
                if ( v446 )
                {
                  if ( v446[0xEE] == 2 )
                  {
                    v76 = (*(*v446 + 0x180i64))(v446) == 0;
                    v447 = 0i64;
                    if ( !v76 )
                      v447 = v446;
                    v448 = *(v447 + 0x68);
                    if ( *(v448 + 0x17C) || *(v448 + 0x228) )
                      goto LABEL_490;
LABEL_511:
                    sub_8D6770(v433, v446);
                    goto LABEL_490;
                  }
                  v450 = *(v443 + v441 + 2);
                  if ( (*(*v433 + 0x6D0i64))(v433) == v450
                    || v433[0x3944] && v433[0x40F0] && v450 == 1 && !*(v433 + 0x1028) )
                  {
                    if ( !(*(*v446 + 0x108i64))(v446) )
                      goto LABEL_490;
                    v451 = sub_216360(**(*(v446 + 0x56) + (*(v446 + 0x43C) << 6) + 0x98));
                    if ( v451 )
                    {
                      if ( *(v451 + 0x228) || *(v451 + 0x17C) )
                        goto LABEL_490;
                    }
                    goto LABEL_511;
                  }
                }
                else
                {
                  v449 = *(v443 + v441 + 2);
                  if ( (*(*v433 + 0x6D0i64))(v433) == v449
                    || v433[0x3944] && v433[0x40F0] && v449 == 1 && !*(v433 + 0x1028) )
                  {
                    goto LABEL_490;
                  }
                }
                *(v443 + v441 + 0x140) = 0;
LABEL_490:
                ++v442;
                v441 += 0x290i64;
                if ( v442 >= *(v440 + 0x1A0) )
                {
                  v439 = v1336;
                  v369 = v1210;
                  v432 = 5;
                  break;
                }
              }
            }
          }
        }
        if ( v439 )
          sub_1625D70(v439, v1337);
        a2 = v1263;
      }
      if ( v432 != 5
        || *(cursor_visuals + 0x4A70) != 6
        || (v430 = *(*(game + 0x440) + 0x3F4i64), v430 <= 0x16) && (v452 = 0x410189, _bittest(&v452, v430))
        || *(game + 0xCD)
        || !*(game + 0xCA)
        || (*(game + 0xCB) & 1) == 0
        || !*&mUnit
        || *(qword_4B176E8 + 0x1E)
        || (v520 = __ROR2__(*(*&mUnit + 0x10B0i64) - 3, 1), v520 > 6u)
        || (v521 = 0x53, !_bittest(&v521, v520)) )
      {
LABEL_528:
        BYTE4(v1337) = 0;
        if ( !v1332 || !*(v1332 + 0x4E8) )
        {
          v457 = *(game + 0x440);
          v458 = *(v457 + 0x620);
          if ( !v458 )
          {
LABEL_690:
            LOBYTE(v430) = 1;
            sub_FDCCB0(v458, v430);
            v618 = xmmword_45149A0;
            *(cursor_visuals + 0x4D20) = xmmword_45149A0;
            v619 = *&ymmword_4514980.m256_f32[4];
            *(cursor_visuals + 0x4D10) = *&ymmword_4514980.m256_f32[4];
            v620 = *ymmword_4514980.m256_f32;
            *(cursor_visuals + 0x4D00) = *ymmword_4514980.m256_f32;
            *(cursor_visuals + 0x4D30) = 0i64;
            *(cursor_visuals + 0x4D38) = 0;
            *(cursor_visuals + 0x4D48) = 0xFFFFFFFF;
            *(cursor_visuals + 0x4DA4) = 0;
            *(cursor_visuals + 0x4D50) = 0i64;
            *(cursor_visuals + 0x4D60) = 0i64;
            *(cursor_visuals + 0x4D70) = 0i64;
            *(cursor_visuals + 0x4D80) = 0i64;
            *(cursor_visuals + 0x4D90) = 0;
            *(cursor_visuals + 0x4D98) = 0i64;
            *(cursor_visuals + 0x4D9F) = 0;
            *(cursor_visuals + 0x4CF9) = 0;
            *(cursor_visuals + 0x4CF8) = 0;
            *(cursor_visuals + 0x4DCC) = 0i64;
            *(cursor_visuals + 0x4DDC) = 0i64;
            *(cursor_visuals + 0x4DE5) = 0i64;
            *(cursor_visuals + 0x4DF8) = v620;
            *(cursor_visuals + 0x4E08) = v619;
            *(cursor_visuals + 0x4E18) = v618;
            *(cursor_visuals + 0x4E28) = 0i64;
            *(cursor_visuals + 0x4E30) = 0;
            *(cursor_visuals + 0x4E40) = 0xFFFFFFFF;
            *(cursor_visuals + 0x4E9C) = 0;
            *(cursor_visuals + 0x4E48) = 0i64;
            *(cursor_visuals + 0x4E58) = 0i64;
            *(cursor_visuals + 0x4E68) = 0i64;
            *(cursor_visuals + 0x4E78) = 0i64;
            *(cursor_visuals + 0x4E88) = 0;
            *(cursor_visuals + 0x4E97) = 0;
            *(cursor_visuals + 0x4E90) = 0i64;
            *(cursor_visuals + 0x4ED0) = v618;
            *(cursor_visuals + 0x4EC0) = v619;
            *(cursor_visuals + 0x4EB0) = v620;
            *(cursor_visuals + 0x4EE0) = 0i64;
            *(cursor_visuals + 0x4EE8) = 0;
            *(cursor_visuals + 0x4EF8) = 0xFFFFFFFF;
            *(cursor_visuals + 0x4F54) = 0;
            *(cursor_visuals + 0x4F30) = 0i64;
            *(cursor_visuals + 0x4F20) = 0i64;
            *(cursor_visuals + 0x4F10) = 0i64;
            *(cursor_visuals + 0x4F00) = 0i64;
            *(cursor_visuals + 0x4F40) = 0;
            *(cursor_visuals + 0x4F48) = 0i64;
            *(cursor_visuals + 0x4F4F) = 0;
            v621 = 0x10i64
                 * (*(cursor_visuals + 0x4F88)
                  - ((*(cursor_visuals + 0x4F88) + ((*(cursor_visuals + 0x4F88) + 1) >> 0x1F) + 1) & 0xFFFFFFFE)
                  + 1);
            *(cursor_visuals + v621 + 0x4F68) = *(cursor_visuals + 0x10i64 * *(cursor_visuals + 0x4F88) + 0x4F68);
            *(cursor_visuals + v621 + 0x4F77) = 0;
            v622 = *(game + 0x440);
            v623 = *(v622 + 0x3F0);
            if ( v623 < *(v622 + 0x278) )
            {
              v624 = *(*(v622 + 0x268) + 8 * v623);
              if ( v624 )
              {
                v625 = cursor_visuals + 0x4DCC;
                (*(*v624 + 0x50i64))(v624, &v1329);
                *(v625 + 8) = DWORD2(v1329);
                *v625 = v1329;
              }
            }
            v626 = 2 - (xmmword_4B73198 >= 3);
            v627 = &v1329;
            return sub_18D15A0(&off_4B44AF8, v626, v627, 1i64);
          }
          if ( v432 == 5 )
          {
            if ( *(v433 + 0x1B9) == 2 )
            {
              v459 = *(v433 + 0x4C3);
              v460 = *(v433 + 0x4C5);
              *&v461 = ((v458[0x26D] * v460) + (v458[0x267] * v459)) + v458[0x270];
              *&v462 = ((v458[0x26E] * v460) + (v458[0x268] * v459)) + v458[0x271];
              v463 = ((v460 * v458[0x26F]) + (v459 * v458[0x269])) + v458[0x272];
              BYTE4(v1337) = 1;
              v1336 = __PAIR64__(v462, v461);
              *&v1337 = v463;
            }
            else
            {
              v464 = *(v433 + 0xC01);
              v465 = *(v433 + 0xC02);
              v466 = *(v433 + 0xC03);
              *&v467 = ((v458[0x26D] * v466) + ((v458[0x26A] * v465) + (v458[0x267] * v464))) + v458[0x270];
              *&v468 = ((v458[0x26E] * v466) + ((v458[0x26B] * v465) + (v458[0x268] * v464))) + v458[0x271];
              v469 = ((v466 * v458[0x26F]) + ((v465 * v458[0x26C]) + (v464 * v458[0x269]))) + v458[0x272];
              BYTE4(v1337) = 1;
              v1336 = __PAIR64__(v468, v467);
              *&v1337 = v469;
            }
          }
          else
          {
            BYTE4(v1337) = 1;
            v430 = *(v458 + 0x138);
            v1336 = v430;
            *&v1337 = v458[0x272];
          }
          LODWORD(v454) = qword_4B44B80;
          qword_4B44B78 = qword_4B44B80;
          *(v457 + 0x44) = 1;
          if ( !v1332 || !*(v369 + 0x4E9) )
          {
LABEL_566:
            v498 = v1352;
            if ( !*(a2 + 0x1EC) )
              v498 = v1351;
            *(*(game + 0x440) + 0x44i64) = sub_B96E90(
                                             v454,
                                             v430,
                                             v431,
                                             v498,
                                             &v1336,
                                             0x43960000,
                                             &qword_4B44B80,
                                             &v1329);
            if ( *(v369 + 0x10B0) != 3 )
              goto LABEL_689;
LABEL_569:
            if ( !*(v369 + 0x4E8) )
            {
LABEL_689:
              v616 = dword_44AB1B4;
              v617 = HIDWORD(qword_4B44B80);
              *v617.m128i_i32 = *(&qword_4B44B80 + 1) + *&dword_44AB1B4;
              *v616.m128i_i32 = *&dword_44AB1B4 + *&qword_4B44B80;
              v430 = *(game + 0x440);
              v458 = (((_mm_cvtsi128_si32(v617) - 0x4B400000) << 0x20) | (_mm_cvtsi128_si32(v616) - 0x4B400000));
              *(v430 + 0x2C) = v458;
              goto LABEL_690;
            }
            ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
            if ( dword_4B44BBC > *(ThreadLocalStoragePointer[TlsIndex] + 4i64) )
            {
              Init_thread_header(&dword_4B44BBC);
              if ( dword_4B44BBC == 0xFFFFFFFF )
              {
                byte_4B44BB8 = 0;
                Init_thread_footer(&dword_4B44BBC);
              }
            }
            v500 = *(*(game + 0x440) + 0x9E2i64);
            v501 = dword_44AB1B4;
            v502 = HIDWORD(qword_4B44B98);
            *v502.m128i_i32 = *(&qword_4B44B98 + 1) + *&dword_44AB1B4;
            v503 = qword_4B44B98;
            *v503.m128i_i32 = *&qword_4B44B98 + *&dword_44AB1B4;
            v504 = v1352;
            if ( !*(a2 + 0x1EC) )
              v504 = v1351;
            sub_B96E90(
              cursor_visuals + 0x4E70,
              ThreadLocalStoragePointer,
              v493,
              v504,
              cursor_visuals + 0x4E70,
              0x43960000,
              &qword_4B44B98,
              &v1329);
            if ( byte_4B44BC0 != v500 )
              dword_4B44BA4 = *(cursor_visuals + 0x4AF4);
            v506 = _mm_cvtsi128_si32(v503);
            if ( byte_4B44BB8 )
            {
              v507 = HIDWORD(qword_4B44B98);
              v508 = HIDWORD(qword_4B44B98);
              v508.m128_f32[0] = *(&qword_4B44B98 + 1) + *v501.m128i_i32;
              v509 = qword_4B44B98;
              v510 = qword_4B44B98;
              v510.m128_f32[0] = *&qword_4B44B98 + *v501.m128i_i32;
              v511 = HIDWORD(qword_4B44BB0);
              v511.m128_f32[0] = *(&qword_4B44BB0 + 1) + *v501.m128i_i32;
              v512 = _mm_xor_ps(v511, v508);
              v513 = qword_4B44BB0;
              v513.m128_f32[0] = *&qword_4B44BB0 + *v501.m128i_i32;
              v514 = _mm_cvtsi128_si32(_mm_xor_ps(v513, v510)) | _mm_cvtsi128_si32(v512);
              v515 = dword_4B44BA0;
              if ( v514 && *&dword_4B44BA0 <= 0.0 && *&dword_4B44BA4 <= 0.0 )
              {
                v515 = *(cursor_visuals + 0x4AF0);
                dword_4B44BA0 = *(cursor_visuals + 0x4AF0);
              }
              byte_4B44BC0 = v500;
              *&dword_4B44BA4 = *&dword_4B44BA4 - v310;
              v516 = 0.0;
              if ( v515.m128_f32[0] >= 0.0 )
              {
                v517 = *(cursor_visuals + 0x4AF0);
                if ( v517 >= 0.0 )
                {
                  v518 = Y;
                  v519 = *(cursor_visuals + 0x4AF0);
                  v517 = 0.0;
                }
                else
                {
                  v516 = Y;
                  v518 = 0.0;
                  v519 = 0.0;
                }
                if ( v517 < v515.m128_f32[0] )
                {
                  if ( v519 <= v515.m128_f32[0] )
                  {
                    v516 = v518;
                  }
                  else
                  {
                    v582 = v519 - v517;
                    v583 = v515;
                    v583.m128_f32[0] = (v515.m128_f32[0] - v517) * (v518 - v516);
                    if ( v582 > *&dword_449F1A8 || (v584 = 0i64, v582 < *&dword_449F1AC) )
                    {
                      v583.m128_f32[0] = v583.m128_f32[0] / v582;
                      v584 = v583;
                    }
                    v585.m128_f32[0] = v517 - v515.m128_f32[0];
                    v516 = v516 + _mm_andnot_ps(_mm_cmple_ss(0i64, v585), v584).m128_f32[0];
                  }
                }
                v509 = qword_4B44B98;
                v507 = HIDWORD(qword_4B44B98);
                *&qword_4B44BA8 = (v516 * *&qword_4B44BB0) + ((Y - v516) * *&qword_4B44B98);
                *(&qword_4B44BA8 + 1) = (*(&qword_4B44BB0 + 1) * v516) + ((Y - v516) * *(&qword_4B44B98 + 1));
                v515.m128_f32[0] = v515.m128_f32[0] - v310;
                dword_4B44BA0 = v515.m128_i32[0];
              }
              if ( v515.m128_f32[0] > 0.0 )
              {
LABEL_643:
                *v509.m128i_i32 = *v509.m128i_i32 + *v501.m128i_i32;
                if ( v506 == _mm_cvtsi128_si32(v509)
                  && (*v507.m128i_i32 = *v507.m128i_i32 + *v501.m128i_i32,
                      _mm_cvtsi128_si32(v502) == _mm_cvtsi128_si32(v507)) )
                {
                  v586 = _mm_cvtsi32_si128(HIDWORD(qword_4B44BA8));
                }
                else
                {
                  qword_4B44BB0 = qword_4B44BA8;
                  dword_4B44BA0 = 0;
                  v586 = _mm_cvtsi32_si128(HIDWORD(qword_4B44BA8));
                }
                v587 = qword_4B83710;
                *&qword_4B44BA8 = *&qword_4B83710 * *&dword_44801CC;
                *v586.m128i_i32 = *v586.m128i_i32 + *v501.m128i_i32;
                *v587.m128i_i32 = (*&qword_4B83710 * *&dword_44801CC) + *v501.m128i_i32;
                v588 = (_mm_cvtsi128_si32(v587) - 0x4B400000);
                v589 = game;
                v590 = *(game + 0x440);
                *(v590 + 0x48) = v588 | ((_mm_cvtsi128_si32(v586) - 0x4B400000) << 0x20);
                if ( *&dword_4A754CC > 0.0 )
                  *&dword_4A754CC = *&dword_4A754CC - v310;
                v591 = *(v589 + 0x440);
                if ( byte_4AD168C
                  && ((v590 = *(v591 + 0x3F0), v590 >= *(v591 + 0x278))
                   || (v590 = *(*(v591 + 0x268) + 8 * v590), *(v590 + 0x28) != 1))
                  && *(v591 + 0x3F4) != 0x18
                  || (*(v591 + 0xB8)
                   || *(v591 + 0xA4) >= Y
                   || *(v591 + 0xA8) >= Y
                   || *(v591 + 0xAC) >= Y
                   || *(v591 + 0xB0) >= Y)
                  && *(v591 + 0xBC) != 0xA )
                {
                  dword_4A754CC = 0x3F800000;
                }
                LOBYTE(v1303) = 0;
                v592 = *(v589 + 0x450);
                if ( v592 )
                  v593 = *(v592 + 0x5CA) == 0;
                else
                  v593 = 1;
                if ( v593 && g_net && *(g_net + 0x60) )
                {
                  v594 = *(*(v369 + 0x3220) + 0x268i64);
                  if ( v594 < 0 || *(v591 + 0x278) <= v594 )
                    goto LABEL_673;
                  v595 = *(*(v591 + 0x268) + 8 * v594);
                  v596 = (*(*v595 + 0x10i64))(v595);
                }
                else
                {
                  v596 = *(v591 + 0x3F4);
                }
                if ( v596 == 0x18 )
                {
                  v597 = *(v369 + 0x11D0);
                  if ( *(v597 + 0x520) )
                  {
                    v598 = (v597 + 0x510);
                    goto LABEL_675;
                  }
                }
LABEL_673:
                LOBYTE(v590) = 1;
                v599 = sub_1167D60(v369, v590);
                if ( v599 < 0 )
                  goto LABEL_677;
                v597 = *(v369 + 0x11D0);
                v598 = (*(v597 + 0x300) + 0x10i64 * v599);
LABEL_675:
                v600 = **v598;
                if ( v600 )
                {
                  v601 = sub_2C53A0(v597, *(v600 + 0x24), &v1303, 0i64);
                  goto LABEL_678;
                }
LABEL_677:
                v601 = 0;
LABEL_678:
                if ( *&dword_4A754CC < 0.0 )
                {
                  v597 = *(game + 0x440);
                  if ( *(v597 + 0x620) )
                  {
                    if ( !byte_4AD5E44 )
                    {
                      if ( LOBYTE(v1303) )
                      {
                        LOBYTE(v597) = *&dword_4B44BA4 <= 0.0;
                        if ( ((*&dword_4B44BA4 <= 0.0) & v601) == 1 )
                        {
                          v602 = *(&qword_4B44B78 + 1);
                          v603 = *&qword_4B44B78;
                          v604 = *(&qword_4B44B80 + 1) - *(&qword_4B44B78 + 1);
                          v605 = *&qword_4B44B80 - *&qword_4B44B78;
                          v606 = expf(v310 * *&dword_44A0288);
                          *&qword_4B44B80 = ((Y - v606) * v605) + v603;
                          *(&qword_4B44B80 + 1) = (v604 * (Y - v606)) + v602;
                        }
                      }
                    }
                  }
                }
                v607 = v1352;
                v608 = v1352;
                v609 = v1351;
                if ( !*(a2 + 0x1EC) )
                  v608 = v1351;
                sub_B96E90(v597, v590, v505, v608, cursor_visuals + 0x4F28, 0x43960000, &v1329, &v1310);
                v611 = DWORD1(v1329);
                *v611.m128i_i32 = *(&v1329 + 1) + *v501.m128i_i32;
                v612 = _mm_cvtsi128_si32(v611);
                v613 = v1329;
                *v613.m128i_i32 = *&v1329 + *v501.m128i_i32;
                v614 = *(game + 0x440);
                v615 = ((v612 - 0x4B400000) << 0x20) | (_mm_cvtsi128_si32(v613) - 0x4B400000);
                *(v614 + 0x3C) = v615;
                if ( !*(a2 + 0x1EC) )
                  v607 = v609;
                sub_B96E90(v615, v614, v610, v607, cursor_visuals + 0x5FC, 0x43960000, &v1310, &v1290);
                *v501.m128i_i32 = *v501.m128i_i32 + *(&v1310 + 1);
                *(*(game + 0x440) + 0x34i64) = v588 | ((_mm_cvtsi128_si32(v501) - 0x4B400000) << 0x20);
                goto LABEL_689;
              }
            }
            else
            {
              byte_4B44BC0 = v500;
              *&dword_4B44BA4 = *&dword_4B44BA4 - v310;
              byte_4B44BB8 = 1;
            }
            qword_4B44BB0 = qword_4B44B98;
            v509 = _mm_cvtsi32_si128(qword_4B44B98);
            v507 = _mm_cvtsi32_si128(HIDWORD(qword_4B44B98));
            goto LABEL_643;
          }
LABEL_556:
          if ( dword_4B44B90 > *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4i64) )
          {
            Init_thread_header(&dword_4B44B90);
            if ( dword_4B44B90 == 0xFFFFFFFF )
            {
              qword_4B44B88 = 0i64;
              Init_thread_footer(&dword_4B44B90);
            }
          }
          v470 = *((*(*v369 + 0x270i64))(v369) + 0x24);
          v471 = 0.0;
          if ( v470 < 0 )
          {
            v473 = 0.0;
          }
          else
          {
            v472 = *(v369 + 0x11D0);
            v473 = 0.0;
            if ( v470 < *(v472 + 0x1A0) )
            {
              v474 = *(v472 + 0x190);
              v475 = 0x290 * v470;
              v476 = *(v474 + 0x290 * v470 + 0x80);
              v477 = LODWORD(dword_44A02E8);
              v478 = fmodf(*(v474 + 0x290 * v470 + 0x7C) - *(v474 + 0x290 * v470 + 0x58), dword_44A02E8);
              v479 = *&dword_44A46B8;
              v480.m128_f32[0] = v478 + *&dword_44A46B8;
              v481 = _mm_andnot_ps(_mm_cmple_ss(0i64, v480), v477);
              v482 = *&dword_44A46B4;
              v480.m128_f32[0] = v478 + *&dword_44A46B4;
              v483 = _mm_cmple_ss(0i64, v480);
              v484 = dword_44AA4F0;
              LODWORD(v473) = COERCE_UNSIGNED_INT(
                                COERCE_FLOAT(v483.m128_i32[0] & dword_44AA4F0 | _mm_andnot_ps(v483, v481).m128_u32[0])
                              + v478) ^ xmmword_44801F0;
              v485 = fmodf(v476 - *(v474 + v475 + 0x5C), v477.m128_f32[0]);
              v486.m128_f32[0] = v479 + v485;
              v487.m128_f32[0] = v482 + v485;
              v488 = _mm_cmple_ss(0i64, v487);
              v471 = COERCE_FLOAT(v488.m128_i32[0] & v484 | _mm_andnot_ps(
                                                              v488,
                                                              _mm_andnot_ps(_mm_cmple_ss(0i64, v486), v477)).m128_u32[0])
                   + v485;
            }
          }
          v489 = *(&qword_4B44B88 + 1);
          v490 = *&qword_4B44B88;
          v491 = v471 - *(&qword_4B44B88 + 1);
          v492 = v473 - *&qword_4B44B88;
          v494 = expf(*&dword_44A4248 * v310);
          v495 = (v491 * (Y - v494)) + v489;
          v496 = ((Y - v494) * v492) + v490;
          v497 = fminf(
                   fmaxf(
                     v495 * *&dword_4489690,
                     COERCE_FLOAT(COERCE_UNSIGNED_INT(*(a2 + 9) * *&dword_44A4984) ^ xmmword_44801F0)),
                   *(a2 + 9) * *&dword_44A4984);
          LODWORD(qword_4B44B80) = fminf(
                                     fmaxf(
                                       *&dword_4489690 * v496,
                                       COERCE_FLOAT(xmmword_44801F0 ^ COERCE_UNSIGNED_INT(*(a2 + 8) * *&dword_44A4984))),
                                     *(a2 + 8) * *&dword_44A4984);
          *(&qword_4B44B80 + 1) = v497;
          *&qword_4B44B88 = v496;
          *(&qword_4B44B88 + 1) = v495;
          if ( *(v369 + 0x10B0) != 3 )
            goto LABEL_689;
          goto LABEL_569;
        }
        if ( dword_4B44B68 > *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4i64) )
        {
          Init_thread_header(&dword_4B44B68);
          if ( dword_4B44B68 == 0xFFFFFFFF )
          {
            byte_4B44B64 = 0;
            Init_thread_footer(&dword_4B44B68);
          }
        }
        v453 = cursor_visuals + 0xA8;
        LODWORD(v430) = *(cursor_visuals + 0x4DA2);
        if ( !v430 )
          v453 = cursor_visuals + 0x78;
        v454 = (v453 + 0x4D00);
        if ( !BYTE4(v1337) )
          BYTE4(v1337) = 1;
        LODWORD(v1337) = *(v454 + 2);
        v1336 = *v454;
        v455 = 1;
        if ( !v430 )
          v455 = *(*(game + 0x440) + 0x620i64) != 0i64;
        if ( byte_4B44B6C == v455 )
        {
          LODWORD(v430) = byte_4B44B64;
          if ( byte_4B44B64 )
          {
            v337 = dword_4B44B70;
            v456 = 0.0;
            if ( *&dword_4B44B70 >= 0.0 )
            {
              if ( *&dword_4B44B70 <= 0.0 )
              {
LABEL_549:
                *&v1336 = ((Y - v456) * *&v1336) + (*&qword_4B44B58 * v456);
                *(&v1336 + 1) = (*(&v1336 + 1) * (Y - v456)) + (*(&qword_4B44B58 + 1) * v456);
                *&v1337 = (*&v1337 * (Y - v456)) + (*&dword_4B44B60 * v456);
                *&dword_4B44B70 = *&v337 - v310;
                goto LABEL_565;
              }
              if ( *&dword_4B44B70 < *&dword_44801CC )
              {
                v456 = *&dword_4B44B70 + *&dword_4B44B70;
                goto LABEL_549;
              }
LABEL_548:
              v456 = Y;
              goto LABEL_549;
            }
          }
          dword_4B44B60 = *(v454 + 2);
          v454 = *v454;
          qword_4B44B58 = v454;
          if ( byte_4B44B64 )
          {
LABEL_565:
            byte_4B44B6C = v455;
            qword_4B44B78 = qword_4B44B80;
            *(*(game + 0x440) + 0x44i64) = 1;
            if ( !*(v369 + 0x4E9) )
              goto LABEL_566;
            goto LABEL_556;
          }
        }
        else
        {
          dword_4B44B70 = 0x3F000000;
          if ( byte_4B44B64 )
            goto LABEL_548;
          LODWORD(v430) = *(v454 + 2);
          dword_4B44B60 = v430;
          v454 = *v454;
          qword_4B44B58 = v454;
        }
        byte_4B44B64 = 1;
        goto LABEL_565;
      }
      if ( dword_4B44B54 > *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4i64) )
      {
        Init_thread_header(&dword_4B44B54);
        if ( dword_4B44B54 == 0xFFFFFFFF )
        {
          dword_4B44B48 = 0;
          dword_4B44B4C = 0;
          dword_4B44B50 = 0;
          Init_thread_footer(&dword_4B44B54);
        }
      }
      v522 = game;
      if ( !*(HudInfo + 0x35) && !*(*(game + 0x430) + 0x3C9i64) )
      {
        v523 = *(v433 + 0x847);
        if ( v523 > 0.0 && sub_5655B0(game) > v523 && *(cursor_visuals + 0x3E1C) > 0 )
        {
          *(v433 + 0x847) = 0xBFF0000000000000ui64;
          *(cursor_visuals + 0x3E14) = *(cursor_visuals + 0x3E14) + *(cursor_visuals + 0x3E18);
          v524 = *(cursor_visuals + 0x3E1C);
          *(cursor_visuals + 0x3E1C) = v524 - 1;
          if ( v524 <= 1 )
            *(cursor_visuals + 0x3E14) = 0;
        }
      }
      v525 = sub_128DEA0(*(*(v522 + 0x440) + 0x630i64));
      v527 = game;
      v528 = *(game + 0x440);
      v529 = *(v528 + 0x620);
      if ( !(v529 | v525) )
        v529 = *(v528 + 0x638);
      v1234 = v525;
      LOBYTE(v526) = (v529 | v525) != 0;
      v530 = *(v528 + 0x97D);
      if ( v529 | v525 && !*(cursor_visuals + 0x3DF8) )
      {
        if ( *(cursor_visuals + 0x3E0C) <= 0.0 )
          *(cursor_visuals + 0x3E0C) = *(*(game + 0x498) + 0x1DF4i64);
        if ( *(cursor_visuals + 0x3E08) <= 0.0 )
          *(cursor_visuals + 0x3E08) = *(v527[0x93] + 0x1DF0i64);
      }
      if ( !byte_4B44B44 )
      {
        v531 = LODWORD(qword_4AD1040);
        v532 = _mm_blend_ps(_mm_xor_ps(LODWORD(qword_4AD1040), xmmword_44801F0), 0i64, 0xE);
        v531.m128_f32[0] = qword_4AD1040 * *&dword_44A9648;
        v533 = _mm_cvttps_epi32(
                 _mm_add_ps(
                   _mm_or_ps(_mm_and_ps(v532, xmmword_44801F0), xmmword_44A4140),
                   _mm_blend_ps(v531, 0i64, 0xE)));
        v534 = _mm_sub_ps(v532, _mm_mul_ps(_mm_cvtepi32_ps(v533), xmmword_44AA530));
        v535 = _mm_mul_ps(v534, v534);
        v536 = _mm_add_ps(
                 _mm_mul_ps(
                   _mm_add_ps(
                     _mm_mul_ps(_mm_sub_ps(xmmword_44A4170, _mm_mul_ps(v535, xmmword_44A9650)), v535),
                     xmmword_44A41A0),
                   v535),
                 xmmword_44A01E0);
        v537 = _mm_add_ps(
                 _mm_mul_ps(
                   _mm_add_ps(
                     _mm_mul_ps(_mm_sub_ps(xmmword_44A4190, _mm_mul_ps(v535, xmmword_44A9660)), v535),
                     xmmword_44A41B0),
                   _mm_mul_ps(v535, v534)),
                 v534);
        v538 = _mm_blendv_ps(v536, v537, _mm_cmpeq_epi32(_mm_and_ps(v533, xmmword_4487E30), 0i64));
        v539 = _mm_sub_epi32(_mm_and_ps(v533, xmmword_4487E40), 0xFFFFFFFFFFFFFFFFui64);
        v540 = _mm_blendv_ps(v536, v537, _mm_cmpeq_epi32(_mm_and_si128(v539, xmmword_4487E30), 0i64));
        v537.m128_f32[0] = _mm_blendv_ps(
                             _mm_xor_ps(v538, xmmword_44801F0),
                             v538,
                             _mm_cmpeq_epi32(_mm_and_ps(v533, xmmword_4487F40), 0i64)).m128_f32[0];
        v538.m128_f32[0] = _mm_blendv_ps(
                             _mm_xor_ps(v540, xmmword_44801F0),
                             v540,
                             _mm_cmpeq_epi32(_mm_and_si128(v539, xmmword_4487F40), 0i64)).m128_f32[0];
        v541 = _mm_cvtsi32_si128(*(&qword_4AD1040 + 1));
        v542 = _mm_blend_epi16(0i64, v541, 3);
        *v541.m128i_i32 = *v541.m128i_i32 * *&dword_44A4134;
        v543 = _mm_cvttps_epi32(
                 _mm_add_ps(
                   _mm_or_si128(_mm_and_si128(v542, xmmword_44801F0), xmmword_44A4140),
                   _mm_blend_ps(v541, 0i64, 0xE)));
        v544 = _mm_sub_epi32(_mm_and_ps(xmmword_4487E40, v543), xmmword_4480100);
        v545 = _mm_sub_ps(v542, _mm_mul_ps(_mm_cvtepi32_ps(v543), xmmword_44AA530));
        v546 = _mm_mul_ps(v545, v545);
        v547 = _mm_add_ps(
                 _mm_mul_ps(
                   _mm_add_ps(
                     _mm_mul_ps(_mm_sub_ps(xmmword_44A4170, _mm_mul_ps(xmmword_44A9650, v546)), v546),
                     xmmword_44A41A0),
                   v546),
                 xmmword_44A01E0);
        v548 = _mm_add_ps(
                 _mm_mul_ps(
                   _mm_add_ps(
                     _mm_mul_ps(_mm_sub_ps(xmmword_44A4190, _mm_mul_ps(xmmword_44A9660, v546)), v546),
                     xmmword_44A41B0),
                   _mm_mul_ps(v546, v545)),
                 v545);
        v549 = _mm_blendv_ps(v547, v548, _mm_cmpeq_epi32(_mm_and_ps(v543, xmmword_4487E30), 0i64));
        v550 = _mm_blendv_ps(v547, v548, _mm_cmpeq_epi32(_mm_and_si128(xmmword_4487E30, v544), 0i64));
        v551 = _mm_blendv_ps(
                 _mm_xor_ps(xmmword_44801F0, v550),
                 v550,
                 _mm_cmpeq_epi32(_mm_and_si128(v544, xmmword_4487F40), 0i64)).m128_f32[0];
        *&dword_4B44B48 = v551 * v538.m128_f32[0];
        dword_4B44B4C = _mm_blendv_ps(
                          _mm_xor_ps(v549, xmmword_44801F0),
                          v549,
                          _mm_cmpeq_epi32(_mm_and_ps(v543, xmmword_4487F40), 0i64)).m128_u32[0];
        *&dword_4B44B50 = v537.m128_f32[0] * v551;
        byte_4B44B44 = 1;
      }
      v552 = LODWORD(qword_4AD1040);
      v553 = _mm_blend_ps(_mm_xor_ps(LODWORD(qword_4AD1040), xmmword_44801F0), 0i64, 0xE);
      v552.m128_f32[0] = qword_4AD1040 * *&dword_44A9648;
      v554 = _mm_cvttps_epi32(_mm_add_ps(_mm_or_ps(_mm_and_ps(v553, xmmword_44801F0), xmmword_44A4140), _mm_blend_ps(v552, 0i64, 0xE)));
      v555 = _mm_sub_ps(v553, _mm_mul_ps(_mm_cvtepi32_ps(v554), xmmword_44AA530));
      v556 = _mm_mul_ps(v555, v555);
      v557 = _mm_add_ps(
               _mm_mul_ps(
                 _mm_add_ps(
                   _mm_mul_ps(_mm_sub_ps(xmmword_44A4170, _mm_mul_ps(v556, xmmword_44A9650)), v556),
                   xmmword_44A41A0),
                 v556),
               xmmword_44A01E0);
      v558 = _mm_add_ps(
               _mm_mul_ps(
                 _mm_add_ps(
                   _mm_mul_ps(_mm_sub_ps(xmmword_44A4190, _mm_mul_ps(v556, xmmword_44A9660)), v556),
                   xmmword_44A41B0),
                 _mm_mul_ps(v556, v555)),
               v555);
      v559 = _mm_blendv_ps(v557, v558, _mm_cmpeq_epi32(_mm_and_ps(v554, xmmword_4487E30), 0i64));
      v560 = _mm_sub_epi32(_mm_and_ps(v554, xmmword_4487E40), 0xFFFFFFFFFFFFFFFFui64);
      v561 = _mm_blendv_ps(v557, v558, _mm_cmpeq_epi32(_mm_and_si128(v560, xmmword_4487E30), 0i64));
      v558.m128_f32[0] = _mm_blendv_ps(
                           _mm_xor_ps(v559, xmmword_44801F0),
                           v559,
                           _mm_cmpeq_epi32(_mm_and_ps(v554, xmmword_4487F40), 0i64)).m128_f32[0];
      v559.m128_f32[0] = _mm_blendv_ps(
                           _mm_xor_ps(v561, xmmword_44801F0),
                           v561,
                           _mm_cmpeq_epi32(_mm_and_si128(v560, xmmword_4487F40), 0i64)).m128_f32[0];
      v562 = _mm_cvtsi32_si128(*(&qword_4AD1040 + 1));
      v563 = _mm_blend_epi16(0i64, v562, 3);
      *v562.m128i_i32 = *v562.m128i_i32 * *&dword_44A4134;
      v564 = _mm_cvttps_epi32(
               _mm_add_ps(
                 _mm_or_si128(_mm_and_si128(v563, xmmword_44801F0), xmmword_44A4140),
                 _mm_blend_ps(v562, 0i64, 0xE)));
      v565 = _mm_sub_epi32(_mm_and_ps(xmmword_4487E40, v564), xmmword_4480100);
      v566 = _mm_sub_ps(v563, _mm_mul_ps(_mm_cvtepi32_ps(v564), xmmword_44AA530));
      v567 = _mm_mul_ps(v566, v566);
      v568 = _mm_add_ps(
               _mm_mul_ps(
                 _mm_add_ps(
                   _mm_mul_ps(_mm_sub_ps(xmmword_44A4170, _mm_mul_ps(xmmword_44A9650, v567)), v567),
                   xmmword_44A41A0),
                 v567),
               xmmword_44A01E0);
      v569 = _mm_add_ps(
               _mm_mul_ps(
                 _mm_add_ps(
                   _mm_mul_ps(_mm_sub_ps(xmmword_44A4190, _mm_mul_ps(xmmword_44A9660, v567)), v567),
                   xmmword_44A41B0),
                 _mm_mul_ps(v567, v566)),
               v566);
      v570 = _mm_blendv_ps(v568, v569, _mm_cmpeq_epi32(_mm_and_ps(v564, xmmword_4487E30), 0i64));
      v571 = _mm_blendv_ps(v568, v569, _mm_cmpeq_epi32(_mm_and_si128(xmmword_4487E30, v565), 0i64));
      v572 = _mm_blendv_ps(
               _mm_xor_ps(xmmword_44801F0, v571),
               v571,
               _mm_cmpeq_epi32(_mm_and_si128(v565, xmmword_4487F40), 0i64)).m128_f32[0];
      v558.m128_f32[0] = v558.m128_f32[0] * v572;
      *&v573 = v572 * v559.m128_f32[0];
      *v565.m128i_i32 = _mm_blendv_ps(
                          _mm_xor_ps(v570, xmmword_44801F0),
                          v570,
                          _mm_cmpeq_epi32(_mm_and_ps(v564, xmmword_4487F40), 0i64)).m128_f32[0];
      v574 = fsqrt(
               (((v558.m128_f32[0] - *&dword_4B44B50) * (v558.m128_f32[0] - *&dword_4B44B50))
              + ((*v565.m128i_i32 - *&dword_4B44B4C) * (*v565.m128i_i32 - *&dword_4B44B4C)))
             + ((*&v573 - *&dword_4B44B48) * (*&v573 - *&dword_4B44B48)));
      dword_4B44B48 = v573;
      dword_4B44B4C = v565.m128i_i32[0];
      dword_4B44B50 = v558.m128_i32[0];
      if ( !v530 && !(v526 | (v574 < *&dword_44A0308)) )
      {
        if ( (v575 = v527[0x88], !byte_4AD168C)
          || (v576 = *(v575 + 0x3F0), v576 < *(v575 + 0x278)) && *(*(*(v575 + 0x268) + 8 * v576) + 0x28i64) == 1
          || *(v575 + 0x3F4) == 0x18 )
        {
          if ( !*(v575 + 0xB8) && *(v575 + 0xA4) < Y && *(v575 + 0xA8) < Y && *(v575 + 0xAC) < Y && *(v575 + 0xB0) < Y
            || *(v575 + 0xBC) == 0xA )
          {
            *(cursor_visuals + 0x3E0C) = *(v527[0x93] + 0x1DF4i64);
            *(cursor_visuals + 0x3E08) = *(v527[0x93] + 0x1DF0i64);
          }
        }
      }
      v577 = *(v527[0x88] + 0x620i64);
      v310 = a3;
      if ( v577 && !*(v577 + 0x10B0)
        || (v578 = v527[0x86], !*(v578 + 0x3C9))
        && *(*(v433 + 0x656) + 0x7Ci64)
        && *(v578 + 0x2F4)
        && *(HudInfo + 0x3FF)
        || byte_4B44B45 != v530 )
      {
        *(cursor_visuals + 0x3E08) = 0i64;
      }
      Strf = v529;
      v1314.m128_i8[0] = v526;
      v1293.m128_i8[0] = v530;
      v579 = 1;
      if ( *(v1210 + 0x1238) )
      {
        v580 = 0i64;
        while ( 1 )
        {
          v581 = *(*(v1210 + 0x1228) + 8 * v580);
          if ( (*(*v581 + 0x98i64))(v581, v1210 + 0x1488, v526, &v1336) )
            break;
          if ( ++v580 >= *(v1210 + 0x1238) )
            goto LABEL_901;
        }
        v1346 = v580;
        v579 = 0;
LABEL_901:
        v432 = 5;
      }
      v919 = v579 | ((LOBYTE(v1341) & 1) == 0);
      v431 = v1314.m128_u8[0];
      v920 = v919 | v1314.m128_i8[0] ^ 1;
      v921 = v920 ^ v919;
      if ( v920 )
      {
        v923 = v1293.m128_i8[0];
        v922 = v529;
      }
      else
      {
        v922 = v529;
        v923 = v1293.m128_i8[0];
        if ( v529 )
          v921 = v1345 == (*(v529 + 8) & 0x7FF);
      }
      *(cursor_visuals + 0x3E10) = v921;
      v997 = game;
      v430 = *(*(game + 0x440) + 0x620i64);
      if ( v430 && !*(v430 + 0x10B0) )
      {
        v999 = 1;
      }
      else
      {
        v998 = *(game + 0x430);
        if ( !*(v998 + 0x3C9) && *(*(v433 + 0x656) + 0x7Ci64) && *(v998 + 0x2F4) )
        {
          v430 = HudInfo;
          LOBYTE(v430) = *(HudInfo + 0x3FF) != 0;
        }
        else
        {
          v430 = 0i64;
        }
        LOBYTE(v430) = v921 | v430;
        v999 = 1;
        if ( v430 != 1 && *(cursor_visuals + 0x640) > 0.0 )
          v999 = byte_4B44B45 != v923;
      }
      v1000 = *(cursor_visuals + 0x3E0C);
      if ( v1000 > 0.0 )
      {
        v1001 = v1000 - a3;
        *(cursor_visuals + 0x3E0C) = v1001;
        if ( v1001 <= 0.0 )
          v999 = 1;
      }
      v1002 = *(cursor_visuals + 0x3E08);
      if ( v1002 > 0.0 )
      {
        if ( !v431 )
          *(cursor_visuals + 0x3DF9) = 1;
        v1003 = v1002 - a3;
        *(cursor_visuals + 0x3E08) = v1003;
        if ( v1003 <= 0.0 )
        {
          *(cursor_visuals + 0x3DF9) = 0;
          *(cursor_visuals + 0x3E08) = 0;
          if ( !v433[0x4E8] )
          {
            v1004 = v997[0x88];
            if ( *(v1004 + 0x620) )
            {
              a2 = v1263;
              v310 = a3;
              v923 = v1293.m128_i8[0];
              v922 = Strf;
            }
            else
            {
              v430 = v997[0x86];
              a2 = v1263;
              v310 = a3;
              v923 = v1293.m128_i8[0];
              v922 = Strf;
              if ( *(v430 + 0x3CA) )
              {
                need_target_for_lock(v1004 + 0x910, &xmmword_4B73A88, 1);
                v997 = game;
              }
            }
          }
        }
      }
      v1177 = v997[0x83];
      if ( !v1177 || !v999 )
      {
LABEL_1184:
        byte_4B44B45 = v923;
        v369 = v1210;
        goto LABEL_528;
      }
      LODWORD(v1329) = 0x469C4000;
      if ( *(cursor_visuals + 0x3E10) )
      {
        *&v1329 = v1342;
        goto LABEL_1150;
      }
      if ( v1234 )
      {
        LODWORD(v1329) = fsqrt(
                           (((v1234[0xBA] - *(v1210 + 0x9C8)) * (v1234[0xBA] - *(v1210 + 0x9C8)))
                          + ((v1234[0xB9] - *(v1210 + 0x9C4)) * (v1234[0xB9] - *(v1210 + 0x9C4))))
                         + ((v1234[0xB8] - *(v1210 + 0x9C0)) * (v1234[0xB8] - *(v1210 + 0x9C0))));
        goto LABEL_1150;
      }
      if ( v922 )
      {
        v1178 = Strf[0x272] - *(v1210 + 0x9C8);
        v1179 = Strf[0x271] - *(v1210 + 0x9C4);
        v1180 = Strf[0x270] - *(v1210 + 0x9C0);
      }
      else
      {
        if ( !v1293.m128_i8[0] )
        {
          sub_5B53A0(
            v1177,
            v1263 + 0x240,
            &qword_4AD1068,
            &v1329,
            0xFFFFFFFF,
            0i64,
            0i64,
            1,
            0i64,
            0i64,
            1,
            0i64,
            0i64,
            1,
            1,
            1,
            1,
            0xFFFFFFFF,
            0);
          sub_5D0400(v1177, (v1263 + 0x90), &qword_4AD1068, &v1329, 0i64, 1);
          sub_5D0740(
            v1177,
            v1263 + 0x240,
            &qword_4AD1068,
            &v1329,
            0xFFFFFFFF,
            0i64,
            0i64,
            0i64,
            0i64,
            0i64,
            0,
            v1210,
            0i64);
          if ( sub_12931E0(v1263 + 0x240, &qword_4AD1068, v1202, 1, 0) )
          {
            LODWORD(v1329) = 0x469C4000;
            goto LABEL_1149;
          }
          v1182 = fsqrt(
                    ((((v1263[0x92] - *&Unit_PositionZ) + (dword_4AD1070 * *&v1329))
                    * ((v1263[0x92] - *&Unit_PositionZ) + (dword_4AD1070 * *&v1329)))
                   + (((v1263[0x91] - *(&Unit_Position + 1)) + (*(&qword_4AD1068 + 1) * *&v1329))
                    * ((v1263[0x91] - *(&Unit_Position + 1)) + (*(&qword_4AD1068 + 1) * *&v1329))))
                  + (((v1263[0x90] - *&Unit_Position) + (*&v1329 * qword_4AD1068))
                   * ((v1263[0x90] - *&Unit_Position) + (*&v1329 * qword_4AD1068))));
LABEL_1148:
          *&v1329 = v1182;
LABEL_1149:
          v310 = a3;
LABEL_1150:
          v1183 = *(v433 + 0x1028);
          Strh = v433;
          v1184 = *(v433 + 0x23A);
          if ( *(v1184 + 0x18 * v1183 + 0x328) )
          {
            v1185 = *(v1184 + 0x18 * v1183 + 0x318);
            v1186 = 8i64 * *(v1184 + 0x18 * v1183 + 0x328);
            v1187 = 0i64;
            while ( 1 )
            {
              v1188 = *(v1185 + v1187);
              if ( v1188 && (*(*v1188 + 0x108i64))(*(v1185 + v1187)) )
              {
                v1189 = *(v1188 + 0x2B0);
                v1190 = *(v1188 + 0x43C) << 6;
                v1191 = *(v1189 + v1190 + 0xA0);
                if ( v1191 < 2 )
                  v1191 = 1;
                v430 = *(v1189 + v1190 + 0xC0) % v1191;
                v1192 = *(*(v1189 + v1190 + 0x98) + 8 * v430);
                if ( *(v1192 + 0x180) >= 0.0 )
                {
                  if ( *(v1192 + 0x6C) )
                    break;
                }
              }
              v1187 += 8i64;
              if ( v1186 == v1187 )
                goto LABEL_1160;
            }
            v1193 = 1;
          }
          else
          {
LABEL_1160:
            v1193 = 0;
            if ( !v1183 )
            {
              v433 = Strh;
              v432 = 5;
              v923 = v1293.m128_i8[0];
              v1194 = v1314.m128_i8[0];
              if ( Strh[0x3944] )
              {
                a2 = v1263;
                if ( Strh[0x40F0] )
                  v1193 = sub_8E11B0(Strh, 1i64);
              }
              else
              {
                a2 = v1263;
              }
              goto LABEL_1166;
            }
          }
          a2 = v1263;
          v433 = Strh;
          v432 = 5;
          v923 = v1293.m128_i8[0];
          v1194 = v1314.m128_i8[0];
LABEL_1166:
          if ( ((*(cursor_visuals + 0x3DF8) == 0) & v1194) != 1 || byte_4B44B45 != v923 )
          {
            v1195 = *(v433 + 0x656);
            if ( *(cursor_visuals + 0x3E10) | *(v1195 + 0x7C) )
            {
              *(cursor_visuals + 0x3E14) = 0;
              v1196 = 0;
              v1200 = 0.0;
            }
            else
            {
              v1196 = *(v1195 + 0x78);
              if ( v1196 <= 0 )
                v1196 = *(*(game + 0x498) + 0x2474i64);
              v1197 = sub_8E1010(Strh);
              v1198 = 0x41C64E6D * dword_4A79158 + 0x3039;
              v1199 = (((v1198 >> 0xF) & 0xFFFE) - 0x8000) * (v1197 * *&dword_44A0140);
              *(cursor_visuals + 0x3E14) = v1199;
              dword_4A79158 = 0x41C64E6D * v1198 + 0x3039;
              v1200 = COERCE_FLOAT(LODWORD(v1199) ^ xmmword_44801F0) / v1196;
              a2 = v1263;
              v310 = a3;
              v923 = v1293.m128_i8[0];
            }
            *(cursor_visuals + 0x3E18) = v1200;
            *(cursor_visuals + 0x3E1C) = v1196;
            *(cursor_visuals + 0x4A80) = 0;
            *(cursor_visuals + 0x3E00) = v1329;
            v433 = Strh;
            *(Strh + 0x847) = 0xBFF0000000000000ui64;
            if ( v1193 )
              sub_359F90(Strh);
          }
          v1201 = HudInfo;
          if ( !*(HudInfo + 0x35) && !*(*(game + 0x430) + 0x3C9i64) )
            *(cursor_visuals + 0x3E00) = v1329;
          if ( v1193 )
          {
            if ( v1201[0x35] || *(*(game + 0x430) + 0x3C9i64) )
            {
              sub_8E1010(v433);
              dword_4A79158 = 0x41C64E6D * dword_4A79158 + 0x3039;
              sub_8E1290(Strh);
              a2 = v1263;
              v310 = a3;
              v433 = Strh;
              v923 = v1293.m128_i8[0];
            }
            sub_359F90(v433);
          }
          *(cursor_visuals + 0x3DFA) = 0;
          *(cursor_visuals + 0x3DF8) = 0;
          *(cursor_visuals + 0x3DFC) = v1329;
          goto LABEL_1184;
        }
        v1181 = v997[0x88];
        v1178 = v1181[0x263] - *(v1210 + 0x9C8);
        v1179 = v1181[0x262] - *(v1210 + 0x9C4);
        v1180 = v1181[0x261] - *(v1210 + 0x9C0);
      }
      v1182 = fsqrt(((v1178 * v1178) + (v1179 * v1179)) + (v1180 * v1180));
      goto LABEL_1148;
    }
LABEL_361:
    v360 = *&dword_4AD1098;
    v361 = ((expf(*&dword_44A44AC * v310) + *&dword_44801E8) * v360) + v360;
    v347 = 0.0;
    if ( v361 >= 0.0 )
      goto LABEL_363;
    goto LABEL_362;
  }
  v284 = dword_4B44B38;
  if ( !dword_4B44B38 )
  {
    v285 = sub_1623330(0i64, 0x4C6, 1, "wait_targeting_precalc", 0);
    v284 = v285;
    dword_4B44B38 = v285;
  }
  if ( (dword_4B70D40 & 2) != 0 )
    v286 = sub_1625CD0(v284, &v1337);
  else
    v286 = 0i64;
  v1336 = v286;
  if ( !dword_4B44B08 )
    sub_18D1230(qword_4B84918, &dword_4B44B08, 0xFFFFFFFFi64, 0i64);
  if ( v1336 )
    sub_1625D70(v1336, v1337);
  result = sub_59B3E0(game, 0i64);
  if ( !result )
  {
    v910 = xmmword_45149A0;
    *(cursor_visuals + 0x4D20) = xmmword_45149A0;
    v911 = *&ymmword_4514980.m256_f32[4];
    *(cursor_visuals + 0x4D10) = *&ymmword_4514980.m256_f32[4];
    v912 = *ymmword_4514980.m256_f32;
    *(cursor_visuals + 0x4D00) = *ymmword_4514980.m256_f32;
    *(cursor_visuals + 0x4D30) = 0i64;
    *(cursor_visuals + 0x4D38) = 0;
    *(cursor_visuals + 0x4D48) = 0xFFFFFFFF;
    *(cursor_visuals + 0x4DA4) = 0;
    *(cursor_visuals + 0x4D50) = 0i64;
    *(cursor_visuals + 0x4D60) = 0i64;
    *(cursor_visuals + 0x4D70) = 0i64;
    *(cursor_visuals + 0x4D80) = 0i64;
    *(cursor_visuals + 0x4D90) = 0;
    *(cursor_visuals + 0x4D98) = 0i64;
    *(cursor_visuals + 0x4D9F) = 0;
    *(cursor_visuals + 0x4CF9) = 0;
    *(cursor_visuals + 0x4CF8) = 0;
    *(cursor_visuals + 0x4DCC) = 0i64;
    *(cursor_visuals + 0x4DDC) = 0i64;
    *(cursor_visuals + 0x4DE5) = 0i64;
    *(cursor_visuals + 0x4DF8) = v912;
    *(cursor_visuals + 0x4E08) = v911;
    *(cursor_visuals + 0x4E18) = v910;
    *(cursor_visuals + 0x4E28) = 0i64;
    *(cursor_visuals + 0x4E30) = 0;
    *(cursor_visuals + 0x4E40) = 0xFFFFFFFF;
    *(cursor_visuals + 0x4E9C) = 0;
    *(cursor_visuals + 0x4E48) = 0i64;
    *(cursor_visuals + 0x4E58) = 0i64;
    *(cursor_visuals + 0x4E68) = 0i64;
    *(cursor_visuals + 0x4E78) = 0i64;
    *(cursor_visuals + 0x4E88) = 0;
    *(cursor_visuals + 0x4E97) = 0;
    *(cursor_visuals + 0x4E90) = 0i64;
    *(cursor_visuals + 0x4ED0) = v910;
    *(cursor_visuals + 0x4EC0) = v911;
    *(cursor_visuals + 0x4EB0) = v912;
    *(cursor_visuals + 0x4EE0) = 0i64;
    *(cursor_visuals + 0x4EE8) = 0;
    *(cursor_visuals + 0x4EF8) = 0xFFFFFFFF;
    *(cursor_visuals + 0x4F54) = 0;
    *(cursor_visuals + 0x4F30) = 0i64;
    *(cursor_visuals + 0x4F20) = 0i64;
    *(cursor_visuals + 0x4F10) = 0i64;
    *(cursor_visuals + 0x4F00) = 0i64;
    *(cursor_visuals + 0x4F40) = 0;
    *(cursor_visuals + 0x4F48) = 0i64;
    *(cursor_visuals + 0x4F4F) = 0;
    v913 = *(game + 0x440);
    v914 = *(v913 + 0x3F0);
    if ( v914 < *(v913 + 0x278) )
    {
      v915 = *(*(v913 + 0x268) + 8 * v914);
      if ( v915 )
      {
        v916 = cursor_visuals + 0x4DCC;
        (*(*v915 + 0x50i64))(v915, &v1336);
        *(v916 + 8) = v1337;
        *v916 = v1336;
      }
    }
    v626 = 2 - (xmmword_4B73198 >= 3);
    v627 = &v1336;
    return sub_18D15A0(&off_4B44AF8, v626, v627, 1i64);
  }
  return result;
}
