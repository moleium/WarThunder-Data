__int64 __fastcall unit_damage(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, a2, a3, a4);
  v9 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  v118 = 0i64;
  v119 = v9;
  v120 = 0i64;
  *v127 = "isAlive";
  v10 = data::get_str(a2, "target_type", v127);
  if ( v10 )
  {
    v11 = v10;
    v12 = &off_44CF850;
    v13 = 0i64;
    while ( strcmp(*v12, v11) )
    {
      ++v13;
      ++v12;
      if ( v13 == 0x31 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    LODWORD(v13) = 0;
  }
  v14 = funcs_7FF717B84E97[v13];
  v15 = *a2;
  v16 = 0xFFFFFFFF;
  if ( *a2 )
  {
    v4 = data::get_name_id("target", 6ui64);
    v17 = *(v15 + 0x50);
    if ( v17 )
    {
      v18 = *(v17 + 0x20);
      if ( !*(v15 + 0x20) )
        goto LABEL_15;
    }
    else
    {
      v18 = 0;
      if ( !*(v15 + 0x20) )
        goto LABEL_15;
    }
    v19 = data::get_name_id(v15, "target", 6ui64, v4);
    if ( v19 >= 0 )
    {
      v20 = v18 + v19;
LABEL_17:
      v16 = v20;
      goto LABEL_18;
    }
LABEL_15:
    if ( !v18 )
      goto LABEL_18;
    v20 = data::get_name_id(*(v15 + 0x50), "target", 6ui64, v4);
    goto LABEL_17;
  }
LABEL_18:
  sub_CD2950(&v118, a2, v16, a1, v14, 0i64);
  if ( v120 )
  {
    v21 = 0;
    do
    {
      if ( (v14)(*(v118 + 8i64 * v21)) )
      {
        v22 = v120;
      }
      else
      {
        v22 = v120 - 1;
        if ( v120 - 1 > v21 )
        {
          memmove((v118 + 8i64 * v21), (v118 + 8i64 * v21 + 8), 8i64 * v120 - (8i64 * v21 + 8));
          v22 = v120 - 1;
        }
        --v21;
        LODWORD(v120) = v22;
      }
      ++v21;
    }
    while ( v21 < v22 );
  }
  sub_CD4300(&v118, a1, a2, "object");
  v127[0] = 0;
  if ( data::get_bool(a2, "useForTriggerFiltered", v127) )
  {
    v23 = v120;
    if ( v120 )
    {
      v24 = 0;
      do
      {
        if ( !*(a1 + 0xF8) )
          goto LABEL_37;
        v25 = *(a1 + 0xE8);
        v26 = 0i64;
        while ( *(v25 + v26) != *(v118 + 8i64 * v24) )
        {
          v27 = v25 + v26 + 8;
          v26 += 8i64;
          if ( v27 >= v25 + 8 * *(a1 + 0xF8) )
            goto LABEL_37;
        }
        if ( (v26 & 0x400000000i64) != 0 )
        {
LABEL_37:
          v28 = v23 - 1;
          if ( v23 - 1 > v24 )
          {
            memmove((v118 + 8i64 * v24), (v118 + 8i64 * v24 + 8), 8i64 * v23 - (8i64 * v24 + 8));
            v28 = v120 - 1;
          }
          --v24;
          LODWORD(v120) = v28;
          v23 = v28;
        }
        ++v24;
      }
      while ( v24 < v23 );
    }
  }
  LOBYTE(v4) = 1;
  if ( !sub_D2B9A0(a1, a2, &v118, "target", unit_damage) )
  {
    *v127 = 0xFFFFFFFF;
    v29 = data::set_int(a2, "randomTargetsCount", v127);
    if ( v29 >= 0 )
    {
      v30 = 0x41C64E6D * dword_4A79158 + 0x3039;
      dword_4A79158 = v30;
      v31 = v120;
      v32 = v120 - v29;
      if ( v120 > v29 && v32 > 0 )
      {
        v33 = HIWORD(v30) & 0x7FFF;
        v34 = g_net;
        do
        {
          if ( v34 )
          {
            v33 = 0x41C64E6D * v33 + 0x3039;
            v35 = v33;
          }
          else
          {
            v35 = 0x41C64E6D * dword_4A79158 + 0x3039;
            dword_4A79158 = v35;
          }
          v36 = (HIWORD(v35) & 0x7FFFui64) % v31;
          v37 = v31 - 1;
          if ( v31 - 1 > v36 )
          {
            memmove((v118 + 8i64 * v36), (v118 + 8i64 * v36 + 8), 8i64 * v31 - (8i64 * v36 + 8));
            v37 = v120 - 1;
            v34 = g_net;
          }
          LODWORD(v120) = v37;
          v31 = v37;
          --v32;
        }
        while ( v32 );
      }
    }
    *v127 = 0i64;
    v38 = data::get_str(a2, "partName", v127);
    *v127 = 0;
    v39 = data::set_int(a2, "part", v127);
    *v127 = 0;
    v5.m128_f32[0] = data::set_real(a2, "power", v127);
    if ( v5.m128_f32[0] >= *&dword_44A4648 )
    {
      if ( v120 )
      {
        v40 = v5.m128_f32[0];
        v41 = v5;
        v42.m128_f32[0] = *&dword_44801E8 + v5.m128_f32[0];
        v41.m128_f32[0] = fmaxf(v5.m128_f32[0], 0.0) * *&dword_44890B8;
        v43 = _mm_cmple_ss(0i64, v42);
        v44 = _mm_or_ps(_mm_and_ps(v43, dword_44890B8), _mm_andnot_ps(v43, v41));
        v125 = _mm_round_ss(v44, v44, 0xA).m128_f32[0];
        v45 = 0i64;
        do
        {
          if ( (*(*(v118 + 8 * v45) + 0x1058i64) & 0x2000010) != 0 )
          {
            v4 = 0;
            goto LABEL_167;
          }
          ++v45;
        }
        while ( v45 < v120 );
        v121 = a2;
        v46 = *&qword_44809E0;
        v47 = xmmword_44A8E10;
        v48 = *&dword_44AD758;
        v124 = 0i64;
        v117 = v39;
        while ( 1 )
        {
          v49 = *(v118 + 8 * v124);
          v50 = *(v49 + 0x1138);
          if ( !v50 )
            v50 = &szFile;
          *&v127[8] = v50;
          *v127 = 1;
          logmessage_fmt(0x47495254u, "unitDamage action for unit %s", v127, 1);
          v4 = 0x41C64E6D * dword_4A79158 + 0x3039;
          dword_4A79158 = v4;
          v54 = v39;
          if ( v38 )
          {
            if ( !*v38
              || (v55 = damage_model_parts + 0x50,
                  v56 = strlen(v38),
                  v57 = data::get_name_id(v38, v56),
                  v54 = data::get_name_id(v55, v38, v56, v57),
                  (v54 & 0x80000000) != 0) )
            {
              v54 = v39;
            }
          }
          v58 = *(v49 + 0x10B0);
          if ( v58 > 0xF )
            goto LABEL_57;
          v4 = HIWORD(v4) & 0x7FFF;
          v59 = 0x897E;
          if ( _bittest(&v59, v58) )
            break;
          if ( !*(v49 + 0x10B0) )
          {
            v127[0] = 0xA;
            v145 = 0i64;
            memset(&v127[4], 0xFF, 0x14);
            v128 = 0xFFFFFFFF00000000i64;
            v129 = 0i64;
            v130 = 0x10;
            v131[8] = 0;
            *v131 = 0i64;
            v136 = 0xFFFFFFFFFFFFFFFFui64;
            v135 = 0xFFFF;
            v137 = 0;
            v139 = 0xFFFF;
            v133 = v47;
            v140 = 0xFFFFFFFF00000000ui64;
            v138 = 0i64;
            v134 = 0x7FFFFFFFFFFFFFFFi64;
            v132 = 0;
            v141 = 0i64;
            v142 = 0xFFFFFFFFFFFFFFFFui64;
            v144 = 0;
            v143 = 0xFFFFFFFF;
            v83 = *(v49 + 0x11A0);
            if ( *(v83 + 0x2A8) <= v54 )
            {
              v85 = *(*(game + 0x498) + 0x3770i64);
              v86 = 0.0;
              v84 = 0xFFFFFFFF;
            }
            else
            {
              v51 = v54;
              v84 = *(*(v83 + 0x2A0) + 4i64 * v54);
              v85 = *(*(game + 0x498) + 0x3770i64);
              v86 = 0.0;
              if ( (v84 & 0x8000) == 0 )
              {
                v87 = v121;
                if ( *(v83 + 0x310) > v84 )
                {
                  v88 = *(*(v83 + 0x308) + 0x38i64 * v84 + 8);
                  if ( (v88 & 0x80000000) == 0i64 )
                  {
                    v51 = (*(&xmmword_4B769D8 + 1) - xmmword_4B769D8) >> 3;
                    if ( v51 > v88 )
                    {
                      v89 = *(xmmword_4B769D8 + 8 * v88);
                      if ( v89 )
                        v86 = *v89 * v48;
                    }
                  }
                }
                goto LABEL_148;
              }
            }
            v87 = v121;
LABEL_148:
            v109 = NtCurrentTeb()->ThreadLocalStoragePointer;
            if ( !*(v109[TlsIndex] + 1i64) )
              _dyn_tls_on_demand_init(v109, v51, v52, v53);
            LODWORD(v147) = dword_4A796F8;
            v150 = 0xFFFFFFFF;
            v146 = &off_44AC990;
            v151 = 0;
            v156 = 0i64;
            v155 = 0i64;
            v157 = 0x3F8000003F800000i64;
            v158 = 0x1003F800000i64;
            v159 = 0xBF800000;
            BYTE4(v147) = 4;
            v149 = 0xFFFFFFFFFFFFFFFFui64;
            v148 = *(v49 + 8) & 0x7FF;
            v152 = v84;
            v153 = v86 * v40;
            v154 = v85;
            v160 = v4;
            sub_7BA4A0(v49, v127, &v146, 0xFFFFFFFFi64);
            LOBYTE(v146) = 0;
            if ( data::get_bool(v87, "doExplosion", &v146) )
            {
              v146 = 0i64;
              LODWORD(v147) = 0;
              *v122 = 0x3F80000000000000i64;
              v123 = 0.0;
              sub_339C60(v49, 0, 0xFFFFFFFF, v122, v49 + 0x9C0, &v146);
            }
            v39 = v117;
            goto LABEL_57;
          }
          if ( v58 == 7 )
          {
            v73 = *(v49 + 0x1D10);
            if ( (v54 & 0x80000000) != 0 )
            {
              if ( *(v49 + 0x1D10) )
              {
                v110 = 0;
                do
                  sub_8F8A40(v49, v110++);
                while ( v110 < *(v49 + 0x1D10) );
              }
            }
            else if ( v54 >= v73 )
            {
              v112 = *(v49 + 0x1138);
              if ( !v112 )
                v112 = &szFile;
              *&v127[8] = v54;
              *v127 = 2;
              v128 = "unitDamage";
              *&v127[0x10] = 1;
              *(&v129 + 1) = v112;
              LODWORD(v129) = 1;
              *&v131[4] = v73;
              v130 = 2;
              logmessage_fmt(0x47495254u, "invalid part index %d in %s for InfantryTroop '%s', units = %d", v127, 4);
            }
            else
            {
              sub_8F8A40(v49, v54);
            }
          }
LABEL_57:
          if ( ++v124 >= v120 )
          {
            LOBYTE(v4) = 1;
            goto LABEL_167;
          }
        }
        v127[0] = 0;
        v60 = v121;
        if ( data::get_bool(v121, "useEffect", v127) )
        {
          *v161 = v49;
          v4 = v54;
          sub_145C170(v60, &v146, "radiusOffset", &MATH_FLOAT_ZERO);
          sub_145C630(v60, v127, "offset", &MATH_FLOAT_ZERO);
          sub_145C170(v60, v122, "delay", &MATH_FLOAT_ZERO);
          v116 = 1;
          v64 = data::set_int(v60, "countEffects", &v116);
          LOBYTE(v116) = 0;
          v49 = *v161;
          LOBYTE(v65) = data::get_bool(v60, "doExplosion", &v116);
          sub_85A340(v49, v54, v125, v65, v64, v122, v127, &v146);
LABEL_126:
          if ( *(v49 + 0x10B0) == 5 )
          {
            v98 = *(v49 + 0x11A0);
            v99 = 0xFFFFFFFF;
            if ( *(v98 + 0x2A8) > v54 )
              v99 = *(*(v98 + 0x2A0) + 4i64 * v54);
            v116 = v99;
            v100 = sub_11EF6E0(*(v49 + 0x1AB4));
            v101 = v121;
            if ( v100 )
            {
              *v127 = 0;
              if ( data::set_real(v121, "setFlood", v127) != 0.0 )
              {
                v127[0] = 0xA;
                memset(&v127[4], 0xFF, 0x14);
                v128 = 0xFFFFFFFF00000000i64;
                HIDWORD(v133) = 0x7FFFFFFF;
                HIDWORD(v134) = 0x7FFFFFFF;
                LODWORD(v140) = 0;
                v145 = 0i64;
                sub_7A5AD0(v127, v49, 0, 0xFFFFFFFF, 0i64);
                v146 = *(v49 + 0x9B4);
                LODWORD(v147) = *(v49 + 0x9BC);
                *v122 = *&v146 + *(v49 + 0x9C0);
                *&v122[1] = *(&v146 + 1) + *(v49 + 0x9C4);
                v123 = *&v147 + *(v49 + 0x9C8);
                sub_8CC530(v49, v102, v116, v122, &v146, v127);
              }
            }
            v127[0] = 0;
            if ( data::get_bool(v101, "setOnFire", v127) )
            {
              v127[0] = 0xA;
              memset(&v127[4], 0xFF, 0x14);
              v128 = 0xFFFFFFFF00000000i64;
              HIDWORD(v133) = 0x7FFFFFFF;
              HIDWORD(v134) = 0x7FFFFFFF;
              LODWORD(v140) = 0;
              v145 = 0i64;
              sub_7A5AD0(v127, v49, 0, 0xFFFFFFFF, 0i64);
              *v122 = 0i64;
              v123 = 0.0;
              v126 = dword_4A79158;
              LOWORD(Src) = 0xFFFF;
              LOWORD(v114) = 0xFFFF;
              sub_8DAD60(v49, &v116, 0xFFFFFFFFi64, v127, v114, Src, 2, v122, &v126, 0xFFFFFFFF);
              LOBYTE(v146) = 0;
              if ( data::get_bool(v101, "hideFireFx", &v146) )
              {
                v103 = j__malloc_base(0x18ui64);
                if ( !v103 )
                {
                  do
                  {
                    if ( !off_4B678A0 || !off_4B678A0(0x18i64) )
                    {
                      v147 = 0x18i64;
                      LODWORD(v146) = 2;
                      LOBYTE(v104) = 1;
                      log_err(
                        "..\\..\\prog\\engine2\\memory\\dagmem.cpp",
                        0x345,
                        v104,
                        "Not enough memory to alloc %llu bytes",
                        &v146,
                        1);
                    }
                    v105 = j__malloc_base(0x18ui64);
                  }
                  while ( !v105 );
                  v103 = v105;
                }
                _InterlockedAdd(&dword_4B6788C, (j__msize(v103) + 0xF) >> 4);
                _InterlockedIncrement(&dword_4B67890);
                v106 = sub_32BE90(v49, 0i64);
                if ( !g_net || *(game + 0xCD) || *(game + 0xCE) )
                {
                  v108 = *(game + 0x450);
                  if ( v108 && *(v108 + 0x5CA) )
                    v107 = (v108 + 0x620);
                  else
                    v107 = (game + 0x2E0);
                }
                else
                {
                  v107 = (g_net + 0x70);
                }
                v111 = *v107 + v46;
                *v103 = &off_44CFAE0;
                v103[1] = v106;
                *(v103 + 2) = v111;
                add_delayed_callback(
                  &controller_do_reset_input,
                  v103,
                  0i64,
                  0i64,
                  "DelayedAction @\n\t..\\..\\skyquake\\prog\\mission\\actions.cpp(1495):");
              }
            }
          }
          goto LABEL_57;
        }
        if ( v58 == 3 )
        {
          v127[0] = 0;
          v66 = v121;
          if ( data::get_bool(v121, "fireAmmo", v127) )
          {
            LOWORD(v67) = 2;
            sub_33BF50(v49, v67);
            v4 = *(v49 + 0x1AB4);
            if ( v4 )
            {
              v68 = dword_4B69F08;
              v69 = &stru_4B6A570;
              if ( !dword_4B69F08 )
                v69 = 0i64;
              if ( dword_4B69F08 )
                EnterCriticalSection(v69);
              ++dword_4B6A568;
              v70 = dword_4B6A53C - *qword_4B6A548;
              if ( dword_4B6A53C > v70 )
                v70 = dword_4B6A53C;
              if ( v70 + 0x10 >= 0x10001 && !sub_111050(&unk_4B6A538, 0x10i64) )
                sub_110E90(&unk_4B6A538);
              v71 = dword_4B6A53C;
              v72 = qword_4B6A540;
              dword_4B6A53C += 0x10;
              *(qword_4B6A540 + v71) = v4;
              *(v72 + v71 + 4) = 0x1000C33C990D6i64;
              *(v72 + v71 + 0xC) = 0x3F800000;
              v39 = v117;
              if ( v68 )
                LeaveCriticalSection(v69);
            }
            goto LABEL_126;
          }
          v127[0] = 0;
          if ( data::get_bool(v66, "explodeAmmo", v127) )
          {
            LOWORD(v61) = 2;
            sub_33BF50(v49, v61);
            v74 = *(v49 + 0x1AB4);
            if ( v74 )
            {
              v75 = dword_4B69F08;
              v76 = &stru_4B6A570;
              if ( !dword_4B69F08 )
                v76 = 0i64;
              if ( dword_4B69F08 )
                EnterCriticalSection(v76);
              ++dword_4B6A568;
              v77 = dword_4B6A53C - *qword_4B6A548;
              if ( dword_4B6A53C > v77 )
                v77 = dword_4B6A53C;
              if ( v77 + 0x18 >= 0x10001 && !sub_111050(&unk_4B6A538, 0x18i64) )
                sub_110E90(&unk_4B6A538);
              v78 = dword_4B6A53C;
              v79 = qword_4B6A540;
              dword_4B6A53C += 0x18;
              *(qword_4B6A540 + v78) = v74;
              *(v79 + v78 + 4) = 0x10014838D7C84i64;
              *(v79 + v78 + 0xC) = 0x3F800000;
              *(v79 + v78 + 0x10) = v4;
              *(v79 + v78 + 0x14) = 0;
              *(v79 + v78 + 0x15) = *v127;
              *(v79 + v78 + 0x17) = v127[2];
              if ( v75 )
                LeaveCriticalSection(v76);
            }
            v39 = v117;
            goto LABEL_126;
          }
        }
        v80 = 0x41C64E6D * dword_4A79158 + 0x3039;
        dword_4A79158 = v80;
        v127[0] = 0xA;
        v145 = 0i64;
        memset(&v127[4], 0xFF, 0x14);
        v128 = 0xFFFFFFFF00000000i64;
        v129 = 0i64;
        v130 = 0x10;
        v131[8] = 0;
        *v131 = 0i64;
        v136 = 0xFFFFFFFFFFFFFFFFui64;
        v135 = 0xFFFF;
        v137 = 0;
        v139 = 0xFFFF;
        v133 = v47;
        v140 = 0xFFFFFFFF00000000ui64;
        v138 = 0i64;
        v134 = 0x7FFFFFFFFFFFFFFFi64;
        v132 = 0;
        v141 = 0i64;
        v142 = 0xFFFFFFFFFFFFFFFFui64;
        v144 = 0;
        v143 = 0xFFFFFFFF;
        v81 = *(v49 + 0x11A0);
        v4 = 0xFFFFFFFF;
        if ( *(v81 + 0x2A8) > v54 )
          v4 = *(*(v81 + 0x2A0) + 4i64 * v54);
        if ( (*(v49 + 0x1058) & 0x200) == 0 )
        {
          if ( !g_net )
          {
            (*(*(v49 + 0x50) + 0x18i64))(v49 + 0x50);
            goto LABEL_113;
          }
          if ( !*(g_net + 0x60) || (v82 = *(v49 + 0x10B8)) == 0 || !*(v82 + 0xE98) )
          {
LABEL_113:
            if ( !(*(*(v49 + 0x50) + 0x20i64))(v49 + 0x50) )
              goto LABEL_115;
          }
        }
        if ( *(v49 + 0x1020) != 0xFFFF )
        {
LABEL_124:
          LOBYTE(v146) = 0;
          if ( data::get_bool(v121, "doExplosion", &v146) )
            sub_842800(v49, v54, v127);
          goto LABEL_126;
        }
LABEL_115:
        v90 = HIWORD(v80);
        v91 = 0.0;
        if ( (v4 & 0x8000) == 0 )
        {
          v92 = *(v49 + 0x11A0);
          if ( *(v92 + 0x310) > v4 )
          {
            v93 = *(*(v92 + 0x308) + 0x38i64 * v4 + 8);
            if ( (v93 & 0x80000000) == 0i64 )
            {
              v61 = (*(&xmmword_4B769D8 + 1) - xmmword_4B769D8) >> 3;
              if ( v61 > v93 )
              {
                v94 = *(xmmword_4B769D8 + 8 * v93);
                if ( v94 )
                  v91 = *v94 * v48;
              }
            }
          }
        }
        v95 = v90 & 0x7FFF;
        v96 = *(*(game + 0x498) + 0x3770i64);
        v97 = NtCurrentTeb()->ThreadLocalStoragePointer;
        if ( !*(v97[TlsIndex] + 1i64) )
          _dyn_tls_on_demand_init(v97, v61, v62, v63);
        LODWORD(v147) = dword_4A796F8;
        v150 = 0xFFFFFFFF;
        v146 = &off_44AC990;
        v151 = 0;
        v156 = 0i64;
        v155 = 0i64;
        v157 = 0x3F8000003F800000i64;
        v158 = 0x1003F800000i64;
        v159 = 0xBF800000;
        BYTE4(v147) = 4;
        v149 = 0xFFFFFFFFFFFFFFFFui64;
        v148 = *(v49 + 8) & 0x7FF;
        v152 = v4;
        v153 = v91 * v40;
        v154 = v96;
        v160 = v95;
        sub_7BA4A0(v49, v127, &v146, 0xFFFFFFFFi64);
        v39 = v117;
        goto LABEL_124;
      }
    }
  }
LABEL_167:
  if ( v118 )
    (*(*v119 + 0x40i64))(v119);
  return v4;
}
