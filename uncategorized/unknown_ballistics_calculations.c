void __fastcall unknown_ballistics_calculations(__int64 a1, __int64 a2, __int64 a3, char *a4, float a5)
{
  v152 = a2;
  LocalUnit_ = LocalUnit;
  if ( !LocalUnit )
    return;
  v7 = a3;
  v149 = a1;
  if ( !g_net || *(game + 0xCD) || *(game + 0xCE) )
  {
    v9 = *(game + 0x450);
    if ( v9 && *(v9 + 0x5CA) )
      v8 = (v9 + 0x620);
    else
      v8 = (game + 0x2E0);
  }
  else
  {
    v8 = (g_net + 0x70);
  }
  v10 = *(LocalUnit + 0x99C);
  v11 = *(LocalUnit + 0x9A0);
  v12 = *(LocalUnit + 0x9A4);
  v13 = *(LocalUnit + 0x9B4);
  v14 = *(LocalUnit + 0x9B8);
  v15 = *(LocalUnit + 0x9BC);
  XPosition = *(LocalUnit + 0x9C0);
  YPosition = *(LocalUnit + 0x9C4);
  ZPosition = *(LocalUnit + 0x9C8);
  v16 = *v8;
  v17 = *a4;
  *a4 = 0;
  v18 = *(LocalUnit_ + 0x1238);
  v133 = 0.0;
  v131 = v17;
  if ( v18 )
  {
    v19 = *(LocalUnit_ + 0x1228);
    v20 = 0i64;
    while ( 1 )
    {
      v21 = *(v19 + 8 * v20);
      if ( v21 )
      {
        if ( !(*(*v21 + 8i64))(*(v19 + 8 * v20)) )
        {
          v22 = v21[7];
          if ( *(v22 + 0x18) )
          {
            v23 = *(v22 + 8);
            if ( (*(v23 + 0x90) - 3) <= 1 )
              break;
          }
        }
      }
      if ( v18 == ++v20 )
        goto LABEL_18;
    }
    *a4 = 1;
    v134 = 1 << *(v23 + 0x90);
    v133 = (*(v23 + 0x20) + *(v23 + 0xC)) * *&screenScaleFactor;
  }
  else
  {
LABEL_18:
    v134 = 0;
  }
  v24 = v149;
  *(v149 + 0x10) = 0;
  if ( *(LocalUnit_ + 0x1238) )
  {
    v25 = 0i64;
    while ( 1 )
    {
      v26 = *(*(LocalUnit_ + 0x1228) + 8 * v25);
      if ( (*(*v26 + 0x98i64))(v26, LocalUnit_ + 0x1488, a3, v186) )
        break;
      if ( ++v25 >= *(LocalUnit_ + 0x1238) )
        goto LABEL_31;
    }
    v190 = v25;
    if ( v186[0xC] )
    {
      if ( v186[0x1C] )
      {
        v27 = fsqrt(
                (*&dword_4AD1038 * *&dword_4AD1038)
              + ((*(&qword_4AD1030 + 1) * *(&qword_4AD1030 + 1)) + (*&qword_4AD1030 * *&qword_4AD1030)));
        if ( v27 > *&qword_44A0760 )
        {
          v10 = (Y / v27) * *&qword_4AD1030;
          v11 = *(&qword_4AD1030 + 1) * (Y / v27);
          v12 = *&dword_4AD1038 * (Y / v27);
        }
        v138 = v10;
        v139 = v11;
        v140 = v12;
        v28 = fsqrt((v10 * v10) + (v12 * v12));
        if ( v28 > *&qword_44A0760 )
        {
          v15 = (Y / v28) * v10;
          v13 = (Y / v28) * COERCE_FLOAT(xmmword_44801F0 ^ LODWORD(v12));
          v14 = 0.0;
        }
        v144 = v13;
        v145 = v14;
        v146 = v15;
        v141 = (v14 * v12) - (v15 * v11);
        v142 = (v10 * v15) - (v13 * v12);
        v143 = (v13 * v11) - (v14 * v10);
        v147 = qword_4AD100C;
        v148 = dword_4AD1014;
        v29 = v187;
        *(v24 + 4) = v187;
        *(v24 + 8) = (v29 * *&screenScaleFactor) * fmaxf(v188 - (v133 + v133), v189 - (v133 + v133));
        *(v24 + 0x10) = v191;
        goto LABEL_67;
      }
    }
  }
LABEL_31:
  if ( *a4 && v7 )
  {
    v30 = v16;
    v31 = (v30 * *&dword_44A9474);
    if ( *(*(game + 0x440) + 0x97Di64) )
    {
      *v24 = 1;
      goto LABEL_37;
    }
    if ( __ROR4__(0xAAAAAAAB * v31 + 0x2AAAAAA8, 2) <= 0x15555554u )
    {
      LOBYTE(v138) = 0;
      v101 = fsqrt(
               (*&dword_4AD1038 * *&dword_4AD1038)
             + ((*(&qword_4AD1030 + 1) * *(&qword_4AD1030 + 1)) + (*&qword_4AD1030 * *&qword_4AD1030)));
      v102 = 0.0;
      if ( v101 > *&epsilon_unk )
        v102 = Y / v101;
      *&v175 = *&qword_4AD1030 * v102;
      *(&v175 + 1) = *(&qword_4AD1030 + 1) * v102;
      *&v176 = *&dword_4AD1038 * v102;
      sub_1015EA0(cur_hud_crosshair, &v184, &qword_4AD100C, &v175, &v138, v181);
      v103 = LOBYTE(v138);
      *v24 = LOBYTE(v138);
      if ( v103 )
      {
LABEL_37:
        v32 = fsqrt(
                (*&dword_4AD1038 * *&dword_4AD1038)
              + ((*(&qword_4AD1030 + 1) * *(&qword_4AD1030 + 1)) + (*&qword_4AD1030 * *&qword_4AD1030)));
        if ( v32 > *&qword_44A0760 )
        {
          v10 = (Y / v32) * *&qword_4AD1030;
          v11 = *(&qword_4AD1030 + 1) * (Y / v32);
          v12 = *&dword_4AD1038 * (Y / v32);
        }
        v138 = v10;
        v139 = v11;
        v140 = v12;
        v33 = fsqrt((v10 * v10) + (v12 * v12));
        if ( v33 > *&qword_44A0760 )
        {
          v15 = (Y / v33) * v10;
          v13 = (Y / v33) * COERCE_FLOAT(xmmword_44801F0 ^ LODWORD(v12));
          v14 = 0.0;
        }
        v144 = v13;
        v145 = v14;
        v146 = v15;
        v141 = (v14 * v12) - (v15 * v11);
        v142 = (v15 * v10) - (v13 * v12);
        v143 = (v13 * v11) - (v14 * v10);
        v147 = qword_4AD100C;
        v148 = dword_4AD1014;
        if ( __ROR4__(0xAAAAAAAB * v31 + 0x2AAAAAA8, 2) <= 0x15555554u )
        {
          *(v24 + 4) = 0xBF800000BF800000ui64;
          v34 = *(game + 0x440);
          v35 = v34[0x263] - *&v148;
          v36 = v34[0x262] - *(&v147 + 1);
          v162 = v34[0x261] - *&v147;
          v161 = v36;
          v163 = v35;
          v150 = ((v35 * v35) + (v162 * v162)) + (v36 * v36);
          v37.m128_f32[0] = *&dword_449F1A0 - *&v147;
          v38 = _mm_cmple_ss(0i64, v37);
          v39 = _mm_or_ps(_mm_andnot_ps(v38, dword_449F1A0), _mm_and_ps(v38, v147));
          v40.m128_f32[0] = *&v147 + *&dword_449F1A0;
          v41 = _mm_cmple_ss(0i64, v40);
          v42 = _mm_or_ps(_mm_andnot_ps(v41, dword_449F1A4), _mm_and_ps(v41, v147));
          v43.m128_f32[0] = *&dword_449F1A0 - *&v148;
          v44 = _mm_cmple_ss(0i64, v43);
          v45 = _mm_or_ps(_mm_andnot_ps(v44, dword_449F1A0), _mm_and_ps(v44, v148));
          v46.m128_f32[0] = *&dword_449F1A0 + *&v148;
          v47 = _mm_cmple_ss(0i64, v46);
          v48 = _mm_or_ps(_mm_andnot_ps(v47, dword_449F1A4), _mm_and_ps(v47, v148));
          v49 = (v12 * dword_44A0608) + *&v148;
          v50 = (v10 * dword_44A0608) + *&v147;
          v51.m128_f32[0] = v39.m128_f32[0] - v50;
          v52 = _mm_cmple_ss(0i64, v51);
          v52.m128_i32[0] = v52.m128_i32[0] & LODWORD(v50) | _mm_andnot_ps(v52, v39).m128_u32[0];
          v39.m128_f32[0] = v50 - v42.m128_f32[0];
          v53 = _mm_cmple_ss(0i64, v39);
          v53.m128_i32[0] = v53.m128_i32[0] & LODWORD(v50) | _mm_andnot_ps(v53, v42).m128_u32[0];
          v39.m128_f32[0] = v45.m128_f32[0] - v49;
          v54 = _mm_cmple_ss(0i64, v39);
          v54.m128_i32[0] = v54.m128_i32[0] & LODWORD(v49) | _mm_andnot_ps(v54, v45).m128_u32[0];
          v39.m128_f32[0] = v49 - v48.m128_f32[0];
          v55 = _mm_cmple_ss(0i64, v39);
          v56 = *(game + 0x638);
          v173[0] = *(v56 + 0x98);
          v57 = *(v56 + 0xA0);
          v158 = COERCE_FLOAT(v55.m128_i32[0] & LODWORD(v49) | _mm_andnot_ps(v55, v48).m128_u32[0]);
          v157 = v53.m128_f32[0];
          v156 = v54.m128_f32[0];
          v173[1] = v57;
          v58 = v52.m128_f32[0];
          v160 = v133 + v133;
          v159 = v160 * v160;
          v59 = 1;
          v60 = 0i64;
          do
          {
            sub_15EA5F0(&v184, v173[v60], v58, v156, v157, v158, 1);
            while ( v185 )
            {
              if ( (*(v185 + 0xF50) & 0x7000014) == 0 && v185 - 0x108 != LocalUnit_ && *(v185 + 0xFA0) <= 1u )
              {
                v151 = *(v185 + 0x894);
                v164 = *(v185 + 0x8A0);
                v67 = *(v185 + 0x8A8);
                v68 = *(v185 + 0x8B4);
                v137 = *(v185 + 0xF0);
                v69 = *(v185 + 0xFC);
                v135 = *(v185 + 0xE8);
                v136 = *(v185 + 0xEC);
                v70 = *(v185 + 0xF8);
                v71 = *(v185 + 0xF4);
                v72 = (v69 + v137) * *&screenScaleFactor;
                v73 = (v70 + v136) * *&screenScaleFactor;
                v74 = *(v185 + 0x89C);
                v75 = (v71 + v135) * *&screenScaleFactor;
                v167 = ((((v72 * v68) + *(v185 + 0x8C0)) + (v73 * v67)) - *&v148) + (v75 * v74);
                v76 = *(v185 + 0x8A4);
                v77 = *(v185 + 0x8B0);
                v78 = ((v72 * v77) + *(v185 + 0x8BC)) + (v73 * v76);
                v79 = *(v185 + 0x8AC);
                v80 = *(v185 + 0x898);
                v81 = (v72 * v79) + *(v185 + 0x8B8);
                v166 = (v78 - *(&v147 + 1)) + (v75 * v80);
                v165 = (v81 + ((v73 * v164) + (v75 * v151))) - *&v147;
                v168 = ((v167 * v167) + (v166 * v166)) + (v165 * v165);
                v137 = v69 - v137;
                v136 = v70 - v136;
                v135 = v71 - v135;
                v82 = v76;
                v83 = v76 * v151;
                v84 = v67 * v151;
                v85 = Y
                    / ((((v77 * v164) * v74) + (((v67 * v80) * v79) + (v68 * v83)))
                     - (((v68 * v80) * v164) + (((v79 * v82) * v74) + (v77 * (v67 * v151)))));
                v86 = ((v68 * v82) - (v77 * v67)) * v85;
                v87 = ((v77 * v74) - (v68 * v80)) * v85;
                v88 = ((v67 * v80) - (v82 * v74)) * v85;
                v89 = ((v67 * v79) - (v68 * v164)) * v85;
                v90 = ((v68 * v151) - (v79 * v74)) * v85;
                v91 = ((v74 * v164) - v84) * v85;
                v92 = ((v77 * v164) - (v79 * v82)) * v85;
                v93 = fsqrt(v168);
                v94 = fmaxf(
                        COERCE_FLOAT(COERCE_UNSIGNED_INT(((((v83 - (v164 * v80)) * v85) * v146)
                                                        + ((v91 * v145) + (v88 * v144))) * v137) & xmmword_449AF40)
                      + (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                        (((((v79 * v80) - (v77 * v151)) * v85) * v146) + ((v90 * v145) + (v87 * v144)))
                                      * v136) & xmmword_449AF40)
                       + COERCE_FLOAT(COERCE_UNSIGNED_INT(((v92 * v146) + ((v89 * v145) + (v86 * v144))) * v135) & xmmword_449AF40)),
                        COERCE_FLOAT(COERCE_UNSIGNED_INT(((v143 * ((v83 - (v164 * v80)) * v85))
                                                        + ((v142 * v91) + (v141 * v88))) * v137) & xmmword_449AF40)
                      + (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                        ((v143 * (((v79 * v80) - (v77 * v151)) * v85)) + ((v142 * v90) + (v141 * v87)))
                                      * v136) & xmmword_449AF40)
                       + COERCE_FLOAT(COERCE_UNSIGNED_INT(((v143 * v92) + ((v142 * v89) + (v141 * v86))) * v135) & xmmword_449AF40)))
                    * *&screenScaleFactor;
                v95 = ((v167 * v163) + (v166 * v161)) + (v165 * v162);
                if ( (v95 * v95) > ((v168 - ((((v93 * v160) + v94) * v94) + v159)) * v150) )
                {
                  v96 = fmaxf(v93, Y);
                  *v174 = (Y / v96) * v165;
                  *&v174[1] = v166 * (Y / v96);
                  *&v174[2] = v167 * (Y / v96);
                  v170 = v93;
                  v169 = 0;
                  if ( sub_245080(&v147, v174, v65, v66, v185 + 0x13A0, xmmword_4B74130, &v170, &v169) )
                  {
                    v132 = 0;
                    v172 = v134;
                    v171 = v93;
                    v130 = 0;
                    v175 = &v172;
                    v176 = &v132;
                    v177 = &v147;
                    v178 = v174;
                    v179 = &v171;
                    v180 = &v130;
                    v182 = sub_2456B0;
                    v183 = sub_12940A0;
                    v181[0] = &v175;
                    sub_1A05FF0(&entity_manager, qword_4B55780, v181, 0i64);
                    if ( v182 )
                      v182(v181, 0i64, 0i64);
                    if ( !v130 )
                    {
                      v97 = v149;
                      *(v149 + 4) = v93;
                      *(v97 + 8) = v94;
                      break;
                    }
                  }
                }
              }
              sub_15EA890(&v184);
            }
            v98 = v184;
            if ( *(v184 + 0x20) )
            {
              v99 = TlsGetValue(*(v184 + 0x34)) + 0xFFFFFFFF;
              if ( v99 )
              {
                v61 = *(v98 + 0x34);
                v62 = v99;
              }
              else
              {
                ReleaseSRWLockShared((v98 + 0x28));
                v61 = *(v98 + 0x34);
                v62 = 0i64;
              }
              TlsSetValue(v61, v62);
            }
            v63 = *(v149 + 8);
            v60 = 1i64;
            v64 = ((v63 <= 0.0) & v59) == 0;
            v59 = 0;
          }
          while ( !v64 );
          v24 = v149;
          if ( v63 < 0.0 )
          {
            v100 = fsqrt(v150);
            *(v149 + 4) = v100;
            *(v24 + 8) = v133 * v100;
          }
        }
        goto LABEL_67;
      }
    }
    else if ( *v24 )
    {
      goto LABEL_37;
    }
  }
  *(v24 + 4) = 0xBF800000BF800000ui64;
LABEL_67:
  v104 = some_ballistics_thing(*(game + 0x630));
  v108 = v104;
  mUnit_ = 0i64;
  if ( *&mUnit && !*(*&mUnit + 0x10B0i64) )
    mUnit_ = *&mUnit;
  if ( *(v24 + 8) > 0.0 )
  {
    v110 = *(v24 + 4);
    *&v184 = (v110 * v138) + XPosition;
    *(&v184 + 1) = (v139 * v110) + YPosition;
    *&v185 = (v140 * v110) + ZPosition;
    v181[0] = 0i64;
    v111 = v152 + 0x168;
    v112 = v152 + 0x128;
    v113 = v152 + 0x168;
    if ( !*(v152 + 0x1EC) )
      v113 = v152 + 0x128;
    if ( (v104 | sub_B96E90(v106, v105, v107, v113, &v184, 0x43960000, v181, &v175)) == 1 )
    {
      v173[0] = 0i64;
      v117 = *(v24 + 8);
      *&v175 = (v117 * v141) + *&v184;
      *(&v175 + 1) = (v142 * v117) + *(&v184 + 1);
      *&v176 = (v143 * v117) + *&v185;
      if ( !*(v152 + 0x1EC) )
        v111 = v112;
      if ( (v108 | sub_B96E90(v115, v114, v116, v111, &v175, 0x43960000, v173, v174)) == 1 )
      {
        v118 = 0i64;
        v118.m128_f32[0] = fsqrt(
                             ((*(v173 + 1) - *(v181 + 1)) * (*(v173 + 1) - *(v181 + 1)))
                           + ((*v173 - *v181) * (*v173 - *v181)));
        v119 = _mm_or_ps(_mm_and_ps(xmmword_44801F0, v118), xmmword_44C0110);
        v119.m128_f32[0] = v119.m128_f32[0] + v118.m128_f32[0];
        *(v24 + 0xC) = _mm_round_ss(0i64, v119, 0xB).m128_u32[0];
      }
    }
    if ( mUnit_ != 0 && v108 )
    {
      v120 = *(mUnit_ + 0x2DD8);
      if ( v120 )
      {
        v121 = *(*(game + 0x440) + 0x480i64);
        if ( *&epsilon_unk < v121 || (v122 = 0.0, v121 < *&dword_449F1AC) )
          v122 = (((v120[1] - *v120) * v120[2]) + *v120) / v121;
        v123 = v122 * *(v24 + 0xC);
        *(v24 + 0xC) = v123;
        v124 = *(v152 + 0x20);
        if ( v124 > 0 || (v125 = 0.0, v124 < 0) )
          v125 = a5 / v124;
        *(v24 + 0xC) = v125 * v123;
      }
    }
  }
  ballistics = *(game + 0x440);
  if ( *(ballistics + 0x97D) )
  {
    *(v24 + 4) = fsqrt(
                   (((*(ballistics + 0x98C) - *(LocalUnit_ + 0x9C8)) * (*(ballistics + 0x98C) - *(LocalUnit_ + 0x9C8)))
                  + ((*(ballistics + 0x988) - *(LocalUnit_ + 0x9C4)) * (*(ballistics + 0x988) - *(LocalUnit_ + 0x9C4))))
                 + ((*(ballistics + 0x984) - *(LocalUnit_ + 0x9C0)) * (*(ballistics + 0x984) - *(LocalUnit_ + 0x9C0))));
  }
  else if ( v131 )
  {
    v128 = *(game + 0x418);
    if ( v128 )
    {
      XPosition_ = LocalUnit_ + 0x9C0;
      *(v24 + 4) = 0x461C4000;
      sub_5B53A0(
        v128,
        XPosition_,
        &qword_4AD1068,
        v24 + 4,
        0xFFFFFFFF,
        0i64,
        0i64,
        1,
        0i64,
        0i64,
        1,
        0i64,
        0i64,
        0,
        1,
        1,
        1,
        0xFFFFFFFF,
        0);
      sub_5D0400(v128, XPosition_, &qword_4AD1068, v24 + 4, 0i64, 1);
      if ( dword_44A0608 <= *(v24 + 4) )
        *(v24 + 4) = 0xBF800000;
    }
  }
  LODWORD(v185) = 0;
  v184 = 0i64;
  LOBYTE(v175) = 0;
  if ( mUnit_ != 0 && v108 )
  {
    v127 = *(mUnit_ + 0x2DD8);
    if ( v127 )
    {
      if ( sub_462330(v127, &v184, &v175) )
      {
        if ( v175 )
          *(v24 + 4) = fsqrt(
                         (((*&v185 - *(mUnit_ + 0x9C8)) * (*&v185 - *(mUnit_ + 0x9C8)))
                        + ((*(&v184 + 1) - *(mUnit_ + 0x9C4)) * (*(&v184 + 1) - *(mUnit_ + 0x9C4))))
                       + ((*&v184 - *(mUnit_ + 0x9C0)) * (*&v184 - *(mUnit_ + 0x9C0))));
      }
    }
  }
}
