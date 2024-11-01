double __fastcall FlightModelWrap(LARGE_INTEGER Unit, LARGE_INTEGER *a2, __int64 a3, __int64 a4, char a5, char a6)
{
  v7 = *(Unit.QuadPart + 0x11A0);               // Damage Model ?
  if ( !v7 || !**(v7 + 0x90) )
    return result;
  *(Unit.QuadPart + 0x1460) = 0;
  *(Unit.QuadPart + 0x1458) &= 0x80000000;
  v12 = *(Unit.QuadPart + 0x1478);
  *(Unit.QuadPart + 0x1478) = (v12 + 1) | 0x80;
  *(Unit.QuadPart + 0x1479) = (0x7E - v12) & 0x7F;
  if ( *(Unit.QuadPart + 0x131C) != 0xFFFFFFFF )
  {
    if ( qword_4B41340 )
      sub_F56750(qword_4B41340 + 0x8000);
    *(Unit.QuadPart + 0x131C) = 0xFFFFFFFF;
  }
  *(Unit.QuadPart + 0x1AC8) = 0;
  v13 = *(Unit.QuadPart + 0x5E8);
  v14 = *(Unit.QuadPart + 0x5F0);
  *(Unit.QuadPart + 0x5E8) = 0i64;
  *(Unit.QuadPart + 0x5F8) = 0i64;
  if ( v13 )
    (*(*v14 + 0x40i64))(v14);
  PerformanceCount[0].LowPart = 0xFFFFFFFF;
  if ( *(Unit.QuadPart + 0x620) != 0xFFFFFFFF )
  {
    (on_reflection_var_changed)(Unit.QuadPart + 0x600, Unit.QuadPart, PerformanceCount);
    *(Unit.QuadPart + 0x620) = PerformanceCount[0].LowPart;
  }
  *(Unit.QuadPart + 0x628) = 0xFFFFFFFF;
  *(Unit.QuadPart + 0x13C) = 0;
  (*(*Unit.QuadPart + 0x208i64))(Unit, a2, a3, a4, a5);
  *(Unit.QuadPart + 0x1AC9) = 1;
  v18 = *(Unit.QuadPart + 0x11C8);
  if ( v18 )
    sub_4B9A30(v18, a2);
  v19 = *(Unit.QuadPart + 0x2E68);
  v20 = *(v19 + 0x57DC);
  LODWORD(v985) = *(v19 + 0x5C28) & 0x800000;
  v21 = off_4B678C8;
  v22 = *(a2->QuadPart + 0x60);
  if ( !v22 || !*v22 )
  {
    v22 = "unknown";
    if ( a2 == &data::get_block_by_name )
      v22 = "empty";
    if ( !*v22 )
      goto LABEL_25;
  }
  v23 = strrchr(v22, 0x5C);
  v24 = v23 + 1;
  if ( !v23 )
    v24 = v22;
  v25 = strrchr(v24, 0x2F);
  v26 = v25 + 1;
  if ( !v25 )
    v26 = v24;
  if ( *v26 )
  {
    v27 = strlen(v26);
    v28 = v27 + 1;
    if ( v27 == 0xFFFFFFFF )
    {
      v29 = 0i64;
    }
    else
    {
      v30 = 0x10i64;
      if ( v28 >= 0x11 )
        v30 = v28;
      v29 = (*(*v21 + 0x18i64))(v21, v30);
    }
    v960 = v29;
    memmove(v29, v26, v28);
  }
  else
  {
LABEL_25:
    v960 = 0i64;
    v28 = 0;
  }
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v15, v16, v17);
  v974 = v21;
  LOBYTE(v972) = v20;
  *v973 = a3;
  v32 = *(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  sub_14584E0(PerformanceCount, *(v32 + 0x160));
  if ( !*(v32 + 1) )
    _dyn_tls_on_demand_init(v34, v33, v35, v36);
  sub_14584E0(&v991, *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64));
  v37 = *(Unit.QuadPart + 0x4B8);
  v38 = a2;
  v959 = a2;
  if ( !v37 )
    goto LABEL_63;
  v38 = a2;
  if ( !*v37 )
    goto LABEL_63;
  v38 = a2;
  if ( !(sub_333B20)(Unit.QuadPart, a2, v37, &v991) )
    goto LABEL_63;
  v39 = v991;
  v40 = 0xFFFFFFFF;
  if ( v991 )
  {
    v41 = data::get_name_id("overrideFM", 0xAui64);
    v42 = *(v39 + 0x50);
    if ( v42 )
    {
      v43 = *(v42 + 0x20);
      if ( !*(v39 + 0x20) )
        goto LABEL_44;
    }
    else
    {
      v43 = 0;
      if ( !*(v39 + 0x20) )
        goto LABEL_44;
    }
    v44 = data::get_name_id(v39, "overrideFM", 0xAui64, v41);
    if ( v44 >= 0 )
    {
      v45 = v43 + v44;
LABEL_46:
      v40 = v45;
      goto LABEL_47;
    }
LABEL_44:
    if ( !v43 )
      goto LABEL_47;
    v45 = data::get_name_id(*(v39 + 0x50), "overrideFM", 0xAui64, v41);
    goto LABEL_46;
  }
LABEL_47:
  if ( v993 == 0xFFFFFFFF )
  {
    v38 = v959;
    if ( v992 )
    {
      v50 = v40 + 1;
      v51 = *v994;
      v52 = *(v994 + 2) - 8 * v992;
      v53 = 0;
      v54 = v959;
      while ( (*(*(v51 + v52) + 8i64) & 0x3FFFFFFF) != v50 )
      {
        ++v53;
        v52 += 8i64;
        if ( v992 == v53 )
        {
          v38 = v959;
          goto LABEL_63;
        }
      }
      v38 = v959;
      if ( v53 < v992 )
      {
        v55 = *(v51 + v52);
        v38 = v959;
        if ( v55 )
          goto LABEL_62;
      }
    }
  }
  else
  {
    v38 = v959;
    if ( v993 < v993 + v992 )
    {
      v46 = v40 + 1;
      v47 = v991 + *(v991 + 0x5C) + 0x90;
      v48 = 0;
      while ( 1 )
      {
        v49 = 0x20i64 * (v993 + v48);
        if ( (*(v47 + v49 + 8) & 0x3FFFFFFF) == v46 )
          break;
        if ( v992 == ++v48 )
        {
          v38 = v959;
          goto LABEL_63;
        }
      }
      v54 = v959;
      v38 = v959;
      if ( v48 < v992 )
      {
        v55 = (v49 + v47);
LABEL_62:
        v38 = PerformanceCount;
        data::set_from(PerformanceCount, v54, 0i64);
        v56 = sub_145DB90(PerformanceCount, "overrideFM");
        data::set_from(v56, v55, 0i64);
      }
    }
  }
LABEL_63:
  v57 = off_4B678C8;
  v58 = v28 - 5;
  v59 = v28 == 0;
  v60 = 0xFFFFFFFC;
  if ( !v59 )
    v60 = v58;
  v61 = v960;
  if ( v59 )
    v61 = &szFile;
  v62 = 0;
  if ( !v61 )
    goto LABEL_74;
  v63 = 0i64;
  if ( v60 <= 0 )
    goto LABEL_75;
  if ( !*v61 )
  {
    v62 = 0;
LABEL_74:
    v63 = 0i64;
    goto LABEL_75;
  }
  v62 = v60 + 1;
  v64 = 0x10i64;
  if ( (v60 + 1) >= 0x11 )
    v64 = v62;
  v63 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v64);
  memmove(v63, v61, v60);
  *(v63 + v60) = 0;
LABEL_75:
  v982 = v57;
  v65 = *(Unit.QuadPart + 0x5238);
  UnitWeaponInfo = *(Unit.QuadPart + 0x9D0);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(Y + v65.m128_f32[0]) & FABSF_MASK) < *&FP32_EPSILON )
    v65 = *(UnitWeaponInfo + 0x5A98);
  if ( (*(*(Unit.QuadPart + 0x50) + 0x18i64))(Unit.QuadPart + 0x50) )
  {
    v67 = *(game + 0xE0) == 0;
LABEL_81:
    v69 = v67;
    goto LABEL_82;
  }
  v68 = *(Unit.QuadPart + 0x10B8);
  if ( v68 )
  {
    v67 = *(v68 + 0x1B8) >= 0;
    goto LABEL_81;
  }
  v69 = 0;
LABEL_82:
  v70 = v63;
  if ( !v62 )
    v70 = &szFile;
  LOBYTE(v957) = v69;
  sub_157EF70(UnitWeaponInfo, v38, *(*(Unit.QuadPart + 0x11A0) + 0x58i64), v70);
  *(UnitWeaponInfo + 0x355C) = dword_4B1C448;
  if ( *(UnitWeaponInfo + 0x568B) )
  {
    sub_159BF40(v988, UnitWeaponInfo, 0i64, 0i64);
    v71.m128_i32[0] = v988[1];
    v72 = _mm_cmple_ss(v65, v71);
    v73 = _mm_andnot_ps(_mm_cmplt_ss(screenScaleFactor, v65), LODWORD(Y));
    v74 = _mm_cmple_ss(v988[0], v65);
    LODWORD(v75) = (_mm_andnot_ps(v72, v73).m128_u32[0] | v65.m128_i32[0] & v72.m128_i32[0]) & v74.m128_i32[0] | _mm_andnot_ps(v74, v73).m128_u32[0];
  }
  else
  {
    v75 = Y;
  }
  *(UnitWeaponInfo + 0x12DC) = v75;
  *(UnitWeaponInfo + 0x1DB4) = v75;
  *(UnitWeaponInfo + 0x5A98) = v75;
  if ( *(UnitWeaponInfo + 0x4568) )
  {
    if ( *(UnitWeaponInfo + 0x568B) )
    {
      v76 = 0;
      if ( (v75 * *&dword_44A0344) > 0 )
        v76 = (v75 * *&dword_44A0344);
      v77 = 0xFF;
      if ( v76 < 0xFF )
        v77 = v76;
      v78 = (v77 * *&dword_44A4410) > *&dword_4487E14;
    }
    else
    {
      v78 = 1;
    }
    if ( v78 != *(UnitWeaponInfo + 0x4560) )
      sub_1563510(UnitWeaponInfo, 0xFFFFFFFFi64);
  }
  sub_157F4A0(&Block, v38, v70);
  sub_14584E0(v988, off_4B678B0);
  if ( v980 && *Block && sub_1606B70(v988, Block, 0i64) )
  {
    sub_145C170(v959, v983, "instructorCritMult", &xmmword_4A79740);
    *(Unit.QuadPart + 0x30AC) = *&v983[0];
    LOBYTE(v983[0]) = 1;
    *(Unit.QuadPart + 0x30B4) = data::get_bool(v959, "limitOverload", v983);
    sub_145CA50(v959, v983, "instructorOverloadMult", &xmmword_4A79740 + 0xC, v957, a6);
    *(Unit.QuadPart + 0x30B8) = v983[0];
    LODWORD(v983[0]) = HIDWORD(xmmword_4A79750);
    *(Unit.QuadPart + 0x30C8) = data::set_real(v959, "overloadTimeRate", v983);
    *(Unit.QuadPart + 0x30CC) = xmmword_4A79760;
    sub_14673C0(Unit.QuadPart + 0x3000, v959, v988);
    v79 = sub_145DB90(v988, "Instructor");
    LOBYTE(v80) = 1;
    sub_182B660(Unit.QuadPart + 0x2FC0, v79, v80);
    v81 = sub_145DB90(v988, "Autopilot");
    LOBYTE(v82) = 1;
    sub_1839EE0(*(Unit.QuadPart + 0x2E70), v81, v82);
  }
  sub_1458FF0(v988);
  if ( Block )
    (*(*v979 + 0x40i64))(v979);
  *(Unit.QuadPart + 0x3190) = 0;
  v83 = *(UnitWeaponInfo + 0x3AC8);
  v84 = *v83;
  if ( *v83 > 0 )
  {
    v85 = 0;
    v86 = 0x6C;
    v87 = 0i64;
    do
    {
      v88 = ***&v83[2 * v87 + 2];
      if ( v88 <= 6 && _bittest(&v86, v88) )
      {
        v89 = v85++;
        *(Unit.QuadPart + 0x3190) = v85;
        *(Unit.QuadPart + 4 * v89 + 0x3194) = v87;
        v83 = *(UnitWeaponInfo + 0x3AC8);
        v84 = *v83;
      }
      ++v87;
    }
    while ( v87 < v84 );
  }
  v963 = Unit;
  v90 = world_instance;
  v91 = world_instance + 0x330;
  v92 = sub_145DD00(world_instance + 0x330, v70);
  v93 = *(v90 + 0x340);
  if ( v93 == 0xFFFFFFFF )
  {
    v100 = *(v90 + 0x33E);
    v95 = 0i64;
    if ( *(v90 + 0x33E) )
    {
      v101 = v92 + 1;
      v102 = *(v90 + 0x348);
      v103 = *v102;
      v104 = *(v102 + 2) - 8 * v100;
      v105 = 0;
      while ( (*(*(v103 + v104) + 8i64) & 0x3FFFFFFF) != v101 )
      {
        ++v105;
        v104 += 8i64;
        if ( v100 == v105 )
          goto LABEL_127;
      }
      if ( v105 >= v100 )
        v95 = 0i64;
      else
        v95 = *(v103 + v104);
    }
  }
  else
  {
    v94 = *(v90 + 0x33E);
    v95 = 0i64;
    if ( v93 < (v93 + v94) )
    {
      v96 = v92 + 1;
      v97 = *(*v91 + 0x5Ci64) + *v91 + 0x90i64;
      v98 = 0;
      while ( 1 )
      {
        v99 = 0x20i64 * (v93 + v98);
        if ( (*(v97 + v99 + 8) & 0x3FFFFFFF) == v96 )
          break;
        if ( v94 == ++v98 )
          goto LABEL_127;
      }
      v106 = (v99 + v97);
      v95 = 0i64;
      if ( v98 < v94 )
        v95 = v106;
    }
  }
LABEL_127:
  if ( !v95 )
    v95 = &data::get_block_by_name;
  v107 = *v95;
  v108 = 0xFFFFFFFF;
  if ( *v95 )
  {
    v109 = data::get_name_id("Shop", 4ui64);
    v110 = *(v107 + 0x50);
    if ( v110 )
    {
      v111 = *(v110 + 0x20);
      if ( !*(v107 + 0x20) )
        goto LABEL_136;
    }
    else
    {
      v111 = 0;
      if ( !*(v107 + 0x20) )
        goto LABEL_136;
    }
    v112 = data::get_name_id(v107, "Shop", 4ui64, v109);
    if ( v112 >= 0 )
    {
      v113 = v111 + v112;
LABEL_138:
      v108 = v113;
      goto LABEL_139;
    }
LABEL_136:
    if ( !v111 )
      goto LABEL_139;
    v113 = data::get_name_id(*(v107 + 0x50), "Shop", 4ui64, v109);
    goto LABEL_138;
  }
LABEL_139:
  v114 = *(v95 + 4);
  if ( v114 != 0xFFFFFFFF )
  {
    v115 = *(v95 + 7);
    if ( v114 < (v114 + v115) )
    {
      v116 = v108 + 1;
      v117 = *(*v95 + 0x5C) + *v95 + 0x90;
      v118 = 0;
      while ( 1 )
      {
        v119 = 0x20i64 * (v114 + v118);
        if ( (*(v117 + v119 + 8) & 0x3FFFFFFF) == v116 )
          break;
        if ( v115 == ++v118 )
          goto LABEL_157;
      }
      if ( v118 < v115 )
      {
        v126 = v119 + v117;
        goto LABEL_154;
      }
    }
LABEL_157:
    *(UnitWeaponInfo + 0x566C) = 0xBF800000;
    v134 = v963;
    v128 = v959;
    goto LABEL_158;
  }
  v120 = *(v95 + 7);
  if ( !*(v95 + 7) )
    goto LABEL_157;
  v121 = v108 + 1;
  v122 = v95[3];
  v123 = *v122;
  v124 = *(v122 + 8) - 8 * v120;
  v125 = 0;
  while ( (*(*(v123 + v124) + 8i64) & 0x3FFFFFFF) != v121 )
  {
    ++v125;
    v124 += 8i64;
    if ( v120 == v125 )
      goto LABEL_157;
  }
  if ( v125 >= v120 )
    goto LABEL_157;
  v126 = *(v123 + v124);
  if ( !v126 )
    goto LABEL_157;
LABEL_154:
  v988[0] = 0xBF800000;
  v127 = data::set_real(v126, "maxSpeed", v988);
  *(UnitWeaponInfo + 0x566C) = v127;
  *(UnitWeaponInfo + 0x5674) = fminf(fmaxf(v127 + *&dword_44A4248, *&dword_44A43FC * v127), *(UnitWeaponInfo + 0x5674));
  v128 = v959;
  v129 = *v959;
  v130 = 0xFFFFFFFF;
  if ( !*v959 )
  {
    v134 = v963;
    goto LABEL_1003;
  }
  v131 = data::get_name_id("tags", 4ui64);
  v132 = *(v129 + 0x50);
  if ( v132 )
    v133 = *(v132 + 0x20);
  else
    v133 = 0;
  v134 = v963;
  if ( *(v129 + 0x20) && (v717 = data::get_name_id(v129, "tags", 4ui64, v131), v717 >= 0) )
  {
    v718 = v133 + v717;
  }
  else
  {
    if ( !v133 )
      goto LABEL_1003;
    v718 = data::get_name_id(*(v129 + 0x50), "tags", 4ui64, v131);
  }
  v130 = v718;
LABEL_1003:
  v719 = *(v959 + 4);
  if ( v719 == 0xFFFFFFFF )
  {
    v725 = *(v959 + 7);
    if ( *(v959 + 7) )
    {
      v726 = v130 + 1;
      v727 = v959[3];
      v728 = *v727;
      v729 = *(v727 + 8) - 8 * v725;
      v730 = 0;
      while ( (*(*(v728 + v729) + 8i64) & 0x3FFFFFFF) != v726 )
      {
        ++v730;
        v729 += 8i64;
        if ( v725 == v730 )
          goto LABEL_158;
      }
      if ( v730 < v725 )
      {
        v731 = *(v728 + v729);
        if ( v731 )
          goto LABEL_1019;
      }
    }
  }
  else
  {
    v720 = *(v959 + 7);
    if ( v719 < (v719 + v720) )
    {
      v721 = v130 + 1;
      v722 = *v959 + *(*v959 + 0x5C) + 0x90;
      v723 = 0;
      while ( 1 )
      {
        v724 = 0x20i64 * (v719 + v723);
        if ( (*(v722 + v724 + 8) & 0x3FFFFFFF) == v721 )
          break;
        if ( v720 == ++v723 )
          goto LABEL_158;
      }
      if ( v723 < v720 )
      {
        v731 = (v724 + v722);
LABEL_1019:
        LOBYTE(v988[0]) = 0;
        data::get_bool(v731, "piston_engine", v988);
        LOBYTE(v988[0]) = 0;
        data::get_bool(v731, "jet_engine", v988);
      }
    }
  }
LABEL_158:
  if ( v63 )
    (*(*v982 + 0x40i64))(v982, v63);
  sub_1458FF0(&v991);
  sub_1458FF0(PerformanceCount);
  v137 = v960;
  if ( v960 )
    (*(*v974 + 0x40i64))(v974);
  if ( (*(v134.QuadPart + 0x58) & 4) != 0 )
  {
    v138 = *(v134.QuadPart + 0x2E68);
    LOBYTE(PerformanceCount[0].LowPart) = (0x41C64E6D
                                         * ((*(v138 + 0x910) * *&qword_44881B0) ^ (*&qword_44881B0 * *(v138 + 0x918)) ^ (*(v138 + 0x908) * *&qword_44881B0) ^ *(v138 + 0x978) ^ (*(v138 + 0x978) << 0x10) ^ 0x2C8Au)
                                         + 0x3039) >> 0x17;
    if ( *(v134.QuadPart + 0x3470) != LOBYTE(PerformanceCount[0].LowPart) )
    {
      (on_reflection_var_changed)(v134.QuadPart + 0x3450, v134.QuadPart, PerformanceCount);
      *(v134.QuadPart + 0x3470) = PerformanceCount[0].LowPart;
    }
    v139 = *(v134.QuadPart + 0x1CC8);
    off_4A796D0(PerformanceCount);
    v140 = PerformanceCount[0].QuadPart - qword_4B768B8;
    if ( PerformanceCount[0].QuadPart - qword_4B768B8 >= 0x65DD0837000i64 )
    {
      v142 = (v140 / *&qword_4A796D8);
    }
    else
    {
      v141 = 0xF4240 * v140;
      if ( (Frequency.QuadPart | v141) >> 0x20 )
        v142 = v141 / Frequency.QuadPart;
      else
        v142 = v141 / Frequency.LowPart;
    }
    v143 = (0xDF3B645A1CAC0831ui64 * v142) >> 0x40;
    *(v139 + 0x2338) = xmmword_44AD490;
    *(v139 + 0x2348) = 0xBF800000BF800000ui64;
    v144 = xmmword_45183B8;
    *(v139 + 0x88) = xmmword_45183B8;
    v145 = xmmword_45183C8;
    *(v139 + 0x98) = xmmword_45183C8;
    v146 = *(&xmmword_45183C8 + 0xC);
    *(v139 + 0xA4) = *(&xmmword_45183C8 + 0xC);
    *(v139 + 0x58) = v144;
    *(v139 + 0x68) = v145;
    *(v139 + 0x74) = v146;
    *(v139 + 0x48) = v146;
    *(v139 + 0x3C) = v145;
    *(v139 + 0x2C) = v144;
    *v139 = v144;
    *(v139 + 0x10) = v145;
    *(v139 + 0x1C) = v146;
    *(v139 + 0x84) = 0xBF800000;
    v147 = *(v134.QuadPart + 0x9D0);
    if ( v147 )
    {
      sub_389670(v139, v147, v139 + 0x2338);
      v148 = *(v139 + 0x233C) + *&dword_44801E8;
      if ( v148 <= *&epsilon_unk )
      {
        v149 = 0.0;
        if ( v148 >= *&dword_449F1AC )
          goto LABEL_176;
      }
    }
    else
    {
      v148 = *&dword_4487F04;
    }
    v149 = Y / v148;
LABEL_176:
    v150 = *(v139 + 0x2338) + *&dword_44801E8;
    if ( v150 > *&epsilon_unk || (v151 = 0.0, v150 < *&dword_449F1AC) )
      v151 = Y / v150;
    *(v139 + 0x2350) = v151;
    *(v139 + 0x2354) = v149;
    v152 = *(v139 + 0x2344);
    v153 = *&epsilon_unk;
    if ( *&epsilon_unk < v152 || (v154 = 0.0, v152 < *&dword_449F1AC) )
      v154 = Y / v152;
    v155 = *(v139 + 0x2340);
    if ( *&epsilon_unk < v155 || (v156 = 0.0, v155 < *&dword_449F1AC) )
      v156 = Y / v155;
    v157 = v143 >> 0x3F;
    v158 = v143 >> 7;
    *(v139 + 0x2358) = v156;
    *(v139 + 0x235C) = v154;
    v159 = *(v139 + 0x2348);
    if ( v153 < v159 || (v160 = 0.0, v159 < *&dword_449F1AC) )
      v160 = Y / v159;
    *(v139 + 0x2360) = v160;
    v161 = *(v139 + 0x234C);
    if ( v153 < v161 || (v162 = 0.0, v161 < *&dword_449F1AC) )
      v162 = Y / v161;
    v163 = v157 + v158;
    *(v139 + 0x2364) = v162;
    off_4A796D0(PerformanceCount);
    v164 = PerformanceCount[0].QuadPart - qword_4B768B8;
    if ( PerformanceCount[0].QuadPart - qword_4B768B8 >= 0x65DD0837000i64 )
    {
      LODWORD(v164) = (v164 / *&qword_4A796D8);
    }
    else
    {
      v164 *= 0xF4240i64;
      if ( (Frequency.QuadPart | v164) >> 0x20 )
        v164 /= Frequency.QuadPart;
      else
        LODWORD(v164) = v164 / Frequency.LowPart;
    }
    v137 = (v163 + v164 / 0x3E8);
    if ( v137 >= 0x64 )
    {
      PerformanceCount[1].QuadPart = "FlightModelWrap::DamageOffenderAnalyzer::onRespawn";
      PerformanceCount[0].LowPart = 1;
      *(&v965 + 1) = v137;
      LODWORD(v965) = 2;
      logmessage_fmt(0x2047414Cu, "WARNING: %s lag timeout %dms", PerformanceCount, 2);
    }
  }
  v165 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(v165[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(v165, v137, v135, v136);
  v166 = &v991;
  sub_14584E0(&v991, *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64));
  PerformanceCount[0].QuadPart = 0i64;
  v167 = data::get_str(v128, "damagePartsToFmPartsMapBlk", PerformanceCount);
  if ( v167 && sub_1606B70(&v991, v167, 0i64) )
    goto LABEL_202;
  v171 = *v128;
  v172 = 0xFFFFFFFF;
  if ( !*v128 )
    goto LABEL_213;
  v173 = data::get_name_id("damagePartsToFmPartsMap", 0x17ui64);
  v174 = *(v171 + 0x50);
  if ( v174 )
  {
    v175 = *(v174 + 0x20);
    if ( !*(v171 + 0x20) )
      goto LABEL_210;
  }
  else
  {
    v175 = 0;
    if ( !*(v171 + 0x20) )
      goto LABEL_210;
  }
  v176 = data::get_name_id(v171, "damagePartsToFmPartsMap", 0x17ui64, v173);
  if ( v176 >= 0 )
  {
    v177 = v175 + v176;
    goto LABEL_212;
  }
LABEL_210:
  if ( !v175 )
    goto LABEL_213;
  v177 = data::get_name_id(*(v171 + 0x50), "damagePartsToFmPartsMap", 0x17ui64, v173);
LABEL_212:
  v172 = v177;
LABEL_213:
  v178 = *(v128 + 0x10);
  if ( v178 == 0xFFFFFFFF )
  {
    v183 = *(v128 + 0xE);
    if ( *(v128 + 0xE) )
    {
      v184 = v172 + 1;
      v185 = *(v128 + 0x18);
      v186 = *v185;
      v168 = *(v185 + 2) - 8 * v183;
      v187 = 0;
      while ( (*(*(v186 + v168) + 8i64) & 0x3FFFFFFF) != v184 )
      {
        ++v187;
        v168 += 8i64;
        if ( v183 == v187 )
          goto LABEL_228;
      }
      if ( v187 < v183 )
      {
        v166 = *(v186 + v168);
        if ( v166 )
          goto LABEL_202;
      }
    }
  }
  else
  {
    v179 = *(v128 + 0xE);
    v168 = v178 + v179;
    if ( v178 < v168 )
    {
      v180 = v172 + 1;
      v181 = *v128 + *(*v128 + 0x5Ci64) + 0x90i64;
      v168 = 0i64;
      v169 = 0x3FFFFFFFi64;
      while ( 1 )
      {
        v182 = 0x20i64 * (v178 + v168);
        if ( (*(v181 + v182 + 8) & 0x3FFFFFFF) == v180 )
          break;
        v168 = (v168 + 1);
        if ( v179 == v168 )
          goto LABEL_228;
      }
      if ( v168 < v179 )
      {
        v166 = (v182 + v181);
LABEL_202:
        (sub_476E60)(v134.QuadPart + 0x2ED0, v134.QuadPart, v166);
      }
    }
  }
LABEL_228:
  v188 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(v188[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(v188, v168, v169, v170);
  v189 = v988;
  sub_14584E0(v988, *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64));
  PerformanceCount[0].QuadPart = 0i64;
  v190 = data::get_str(v128, "damagePartsToCollisionPointsMapBlk", PerformanceCount);
  if ( v190 && sub_1606B70(v988, v190, 0i64) )
    goto LABEL_232;
  v194 = *v128;
  v195 = 0xFFFFFFFF;
  if ( *v128 )
  {
    v196 = data::get_name_id("damagePartsToCollisionPointsMap", 0x1Fui64);
    v197 = *(v194 + 0x50);
    if ( v197 )
    {
      v198 = *(v197 + 0x20);
      if ( !*(v194 + 0x20) )
        goto LABEL_240;
    }
    else
    {
      v198 = 0;
      if ( !*(v194 + 0x20) )
        goto LABEL_240;
    }
    v199 = data::get_name_id(v194, "damagePartsToCollisionPointsMap", 0x1Fui64, v196);
    if ( v199 >= 0 )
    {
      v200 = v198 + v199;
LABEL_242:
      v195 = v200;
      goto LABEL_243;
    }
LABEL_240:
    if ( !v198 )
      goto LABEL_243;
    v200 = data::get_name_id(*(v194 + 0x50), "damagePartsToCollisionPointsMap", 0x1Fui64, v196);
    goto LABEL_242;
  }
LABEL_243:
  v201 = *(v128 + 0x10);
  if ( v201 == 0xFFFFFFFF )
  {
    v206 = *(v128 + 0xE);
    if ( !*(v128 + 0xE) )
      goto LABEL_258;
    v207 = v195 + 1;
    v208 = *(v128 + 0x18);
    v209 = *v208;
    v191 = *(v208 + 2) - 8 * v206;
    v210 = 0;
    while ( (*(*(v209 + v191) + 8i64) & 0x3FFFFFFF) != v207 )
    {
      ++v210;
      v191 += 8i64;
      if ( v206 == v210 )
        goto LABEL_258;
    }
    if ( v210 >= v206 )
      goto LABEL_258;
    v189 = *(v209 + v191);
    if ( !v189 )
      goto LABEL_258;
  }
  else
  {
    v202 = *(v128 + 0xE);
    v191 = v201 + v202;
    if ( v201 >= v191 )
      goto LABEL_258;
    v203 = v195 + 1;
    v204 = *v128 + *(*v128 + 0x5Ci64) + 0x90i64;
    v191 = 0i64;
    v192 = 0x3FFFFFFFi64;
    while ( 1 )
    {
      v205 = 0x20i64 * (v201 + v191);
      if ( (*(v204 + v205 + 8) & 0x3FFFFFFF) == v203 )
        break;
      v191 = (v191 + 1);
      if ( v202 == v191 )
        goto LABEL_258;
    }
    if ( v191 >= v202 )
      goto LABEL_258;
    v189 = (v205 + v204);
  }
LABEL_232:
  (sub_480AA0)(v134.QuadPart + 0x2F20, v134.QuadPart, v189);
LABEL_258:
  if ( !*(v134.QuadPart + 0x2E68) || !*(*(v134.QuadPart + 0x11A0) + 0x58i64) )
    goto LABEL_270;
  v211 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(v211[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(v211, v191, v192, v193);
  if ( *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x158i64) )
  {
    PerformanceCount[0].QuadPart = &off_44AE4A0;
    PerformanceCount[1] = v134;
    sub_3F7430(PerformanceCount);
    goto LABEL_270;
  }
  v212 = j__malloc_base(0x10ui64);
  if ( v212 )
    goto LABEL_269;
  do
  {
    if ( !off_4B678A0 || !off_4B678A0(0x10i64) )
    {
LABEL_1315:
      PerformanceCount[1].QuadPart = 0x10i64;
      goto LABEL_1316;
    }
    v214 = j__malloc_base(0x10ui64);
  }
  while ( !v214 );
  v212 = v214;
LABEL_269:
  _InterlockedAdd(&dword_4B6788C, (j__msize(v212) + 0xF) >> 4);
  _InterlockedIncrement(&dword_4B67890);
  *v212 = &off_44AE4A0;
  v212[1] = v134.QuadPart;
  add_delayed_callback(
    &controller_do_reset_input,
    v212,
    0i64,
    0i64,
    "DelayedAction @\n\t..\\..\\skyquake\\prog\\main\\flightModelWrap.cpp(11485):");
LABEL_270:
  LOBYTE(PerformanceCount[0].LowPart) = 0;
  v215 = data::get_bool(v128, "haveAirRadar", PerformanceCount);
  v216 = (v134.QuadPart + 0x1080);
  v217 = *(v134.QuadPart + 0x1080);
  if ( v215 )
    v218 = v217 | 2;
  else
    v218 = v217 & 0xFFFFFFFD;
  *v216 = v218;
  v219 = v972;
  if ( v217 != v218 )
    (on_reflection_var_changed)(v134.QuadPart + 0x1060, v134.QuadPart, v134.QuadPart + 0x1080);
  LOBYTE(PerformanceCount[0].LowPart) = 0;
  v220 = data::get_bool(v128, "haveGroundRadar", PerformanceCount);
  v222 = *v216;
  if ( v220 )
    v223 = v222 | 4;
  else
    v223 = v222 & 0xFFFFFFFB;
  *v216 = v223;
  if ( v222 != v223 )
    (on_reflection_var_changed)(v134.QuadPart + 0x1060, v134.QuadPart, v134.QuadPart + 0x1080);
  v997 = (v134.QuadPart + 0x1080);
  v224 = *(v134.QuadPart + 0x2E68);
  if ( v224 )
  {
    v225 = *(v224 + 0x4570);
    if ( v225 && *(v224 + 0x57DC) != v219 )
    {
      LOBYTE(v221) = v219 == 0;
      (*(*v225 + 0x20i64))(v225, v221);
    }
    *(v224 + 0x57DC) = v219;
    *(*(v134.QuadPart + 0x2E68) + 0x5C28i64) = v985 | *(*(v134.QuadPart + 0x2E68) + 0x5C28i64) & 0xFF7FFFFF;
    sub_159BDD0(*(v134.QuadPart + 0x2E68), 0i64);
  }
  v226 = *(v134.QuadPart + 0x1058);
  LOBYTE(v972) = 1;
  if ( (v226 & 0x100) == 0 )
    LOBYTE(v972) = *(game + 0x554) == *(v134.QuadPart + 0x1118);
  (sub_34A4F0)(v134.QuadPart, *(v134.QuadPart + 0x1118));
  v227 = *(v134.QuadPart + 0x11A8);
  if ( v227 )
  {
    LOBYTE(Block) = 0;
    v981 = 0x17;
    v228 = *(v227 + 0x28);
    for ( i = *(v227 + 0x30); v228 != i; v228 += 3 )
    {
      sub_1A96A0(&Block, ":", "");
      v230 = *(v228 + 0x17);
      v231 = *v228;
      v232 = v228 - v230 + 0x17;
      if ( (v230 & 0x80u) != 0i64 )
        v232 = *v228 + v228[1];
      if ( (v230 & 0x80u) == 0i64 )
        v231 = v228;
      sub_1A96A0(&Block, v231, v232);
    }
    sub_1A96A0(&Block, "@", "");
    sub_14584E0(PerformanceCount, off_4B678B0);
    v233 = *(v134.QuadPart + 0x11A8);
    LOBYTE(v983[0]) = 0;
    v234 = data::get_bool(v233, "upgradedVisual", v983);
    v235 = 1;
    if ( !v234 )
      v235 = *(*(v134.QuadPart + 0x6F0) + 0x1A2i64);
    *(v134.QuadPart + 0x1BD0) = v235;
    LODWORD(v983[0]) = 0x3F800000;
    *(*(v134.QuadPart + 0x2E68) + 0x5548i64) = data::set_real(v233, "damageAreaInflMult", v983);
    sub_157F570(*(v134.QuadPart + 0x2E68), v233);
    sub_1458FF0(PerformanceCount);
    if ( v981 < 0 )
    {
      v236 = Block;
      if ( Block )
      {
        _InterlockedAdd(&dword_4B6788C, -((j__msize(Block) + 0xF) >> 4));
        _InterlockedDecrement(&dword_4B67890);
        free(v236);
      }
    }
  }
  if ( *(v134.QuadPart + 0x2DD8) )
    v237 = *(*(*(v134.QuadPart + 0x11A0) + 0x110i64)
           + 0x10i64 * (*(*(*(v134.QuadPart + 0x11A0) + 0x110i64) + 0x10i64) != 0i64));
  else
    v237 = 0i64;
  (sub_34D390)(v134.QuadPart, v128, v237, v237);
  v238 = *(v134.QuadPart + 0x11D0);
  if ( *(v238 + 0x2E0) )
  {
    v239 = 0i64;
    do
    {
      v240 = *(*(v238 + 0x2D0) + 8 * v239);
      (*(*v240 + 0xB0i64))(v240);
      ++v239;
    }
    while ( v239 < *(v238 + 0x2E0) );
  }
  (sub_31BF00)(v134.QuadPart);
  v241 = *(v134.QuadPart + 0x684);
  *(v134.QuadPart + 0x2D64) = v241;
  *(v134.QuadPart + 0x2D60) = 0;
  v242 = *(game + 0x430);
  v243 = *(v242 + 0x5D0);
  if ( v243 != 2 && (v243 || (qword_4B1C514 & 0xC) == 0) )
  {
    v244 = *(v242 + 0x5D4);
    v245 = "English";
    if ( xmmword_4AD8E70 > v244 )
    {
      v246 = *(qword_4AD8E68 + 4 * v244);
      v247 = (qword_4AD8E88 + 0x10 * (v246 >> byte_4AD8E9A));
      if ( (v246 >> byte_4AD8E9A) == qword_4AD8E90 )
        v247 = &xmmword_4AD8E70 + 1;
      v248 = *v247;
      if ( *v247 )
      {
        v249 = ~(0xFFFFFFFF << byte_4AD8E9A) & v246;
        v245 = "English";
        if ( *(v248 + v249) )
          v245 = (v248 + v249);
      }
    }
    v241 = sub_F25210(v245);
    *(v134.QuadPart + 0x2D64) = v241;
  }
  dword_4A79158 = 0x41C64E6D * dword_4A79158 + 0x3039;
  v250 = 0;
  *(v134.QuadPart + 0x2D60) = (HIWORD(dword_4A79158) & 0x7FFFi64) % dword_44AE130[v241];
  v251 = *v128;
  v252 = 0xFFFFFFFF;
  if ( *v128 )
  {
    v253 = data::get_name_id("Sound", 5ui64);
    v254 = *(v251 + 0x50);
    if ( v254 )
      v250 = *(v254 + 0x20);
    if ( *(v251 + 0x20) )
    {
      v255 = data::get_name_id(v251, "Sound", 5ui64, v253);
      if ( v255 >= 0 )
      {
        v256 = v250 + v255;
        goto LABEL_323;
      }
    }
    if ( v250 )
    {
      v256 = data::get_name_id(*(v251 + 0x50), "Sound", 5ui64, v253);
LABEL_323:
      v252 = v256;
    }
  }
  v257 = *(v128 + 0x10);
  if ( v257 == 0xFFFFFFFF )
  {
    v264 = *(v128 + 0xE);
    v259 = 0i64;
    if ( *(v128 + 0xE) )
    {
      v265 = v252 + 1;
      v266 = *(v128 + 0x18);
      v267 = *v266;
      v268 = *(v266 + 2) - 8 * v264;
      v269 = 0;
      while ( (*(*(v267 + v268) + 8i64) & 0x3FFFFFFF) != v265 )
      {
        ++v269;
        v268 += 8i64;
        if ( v264 == v269 )
          goto LABEL_341;
      }
      if ( v269 >= v264 )
        v259 = 0i64;
      else
        v259 = *(v267 + v268);
    }
  }
  else
  {
    v258 = *(v128 + 0xE);
    v259 = 0i64;
    if ( v257 < (v257 + v258) )
    {
      v260 = v252 + 1;
      v261 = *(*v128 + 0x5Ci64) + *v128 + 0x90i64;
      v262 = 0;
      while ( 1 )
      {
        v263 = 0x20i64 * (v257 + v262);
        if ( (*(v261 + v263 + 8) & 0x3FFFFFFF) == v260 )
          break;
        if ( v258 == ++v262 )
          goto LABEL_341;
      }
      v270 = (v263 + v261);
      v259 = 0i64;
      if ( v262 < v258 )
        v259 = v270;
    }
  }
LABEL_341:
  if ( !v259 )
    v259 = &data::get_block_by_name;
  if ( !*(game + 0xCD) && (*(v134.QuadPart + 0x1058) & 0x100) != 0 )
  {
    LOBYTE(PerformanceCount[0].LowPart) = 1;
    if ( data::get_bool(v259, "enableRadio", PerformanceCount) )
      sub_F254A0(*(v134.QuadPart + 0x2D64));
  }
  *(v134.QuadPart + 0x14D4) = 0;
  v271 = *(world_instance + 0x330);
  v272 = 0xFFFFFFFF;
  if ( !v271 )
    goto LABEL_357;
  v273 = data::get_name_id(&unk_48DCEA0, 0xCui64);
  v274 = *(v271 + 0x50);
  if ( v274 )
  {
    v275 = *(v274 + 0x20);
    if ( !*(v271 + 0x20) )
    {
LABEL_354:
      if ( v275 )
      {
        v277 = data::get_name_id(*(v271 + 0x50), &unk_48DCEA0, 0xCui64, v273);
        goto LABEL_356;
      }
      goto LABEL_357;
    }
  }
  else
  {
    v275 = 0;
    if ( !*(v271 + 0x20) )
      goto LABEL_354;
  }
  v276 = data::get_name_id(v271, &unk_48DCEA0, 0xCui64, v273);
  if ( v276 < 0 )
    goto LABEL_354;
  v277 = v275 + v276;
LABEL_356:
  v272 = v277;
LABEL_357:
  v278 = (sub_327340)(v134.QuadPart, v272);
  v279 = 0;
  if ( v278 )
    goto LABEL_380;
  v280 = *(world_instance + 0x330);
  v281 = 0xFFFFFFFF;
  if ( !v280 )
    goto LABEL_368;
  v282 = data::get_name_id("type_bomber", 0xBui64);
  v283 = *(v280 + 0x50);
  if ( v283 )
  {
    v284 = *(v283 + 0x20);
    if ( !*(v280 + 0x20) )
    {
LABEL_365:
      if ( v284 )
      {
        v286 = data::get_name_id(*(v280 + 0x50), "type_bomber", 0xBui64, v282);
        goto LABEL_367;
      }
      goto LABEL_368;
    }
  }
  else
  {
    v284 = 0;
    if ( !*(v280 + 0x20) )
      goto LABEL_365;
  }
  v285 = data::get_name_id(v280, "type_bomber", 0xBui64, v282);
  if ( v285 < 0 )
    goto LABEL_365;
  v286 = v284 + v285;
LABEL_367:
  v281 = v286;
LABEL_368:
  v287 = (sub_327340)(v134.QuadPart, v281);
  v279 = 1;
  if ( v287 )
    goto LABEL_380;
  v288 = *(world_instance + 0x330);
  v289 = 0xFFFFFFFF;
  if ( !v288 )
    goto LABEL_379;
  v290 = data::get_name_id("type_assault", 0xCui64);
  v291 = *(v288 + 0x50);
  if ( v291 )
  {
    v292 = *(v291 + 0x20);
    if ( !*(v288 + 0x20) )
    {
LABEL_376:
      if ( v292 )
      {
        v294 = data::get_name_id(*(v288 + 0x50), "type_assault", 0xCui64, v290);
        goto LABEL_378;
      }
      goto LABEL_379;
    }
  }
  else
  {
    v292 = 0;
    if ( !*(v288 + 0x20) )
      goto LABEL_376;
  }
  v293 = data::get_name_id(v288, "type_assault", 0xCui64, v290);
  if ( v293 < 0 )
    goto LABEL_376;
  v294 = v292 + v293;
LABEL_378:
  v289 = v294;
LABEL_379:
  v295 = (sub_327340)(v134.QuadPart, v289);
  v279 = 2;
  if ( v295 )
LABEL_380:
    *(v134.QuadPart + 0x14D4) = v279;
  PerformanceCount[0].LowPart = 0x3DCCCCCD;
  *(v134.QuadPart + 0x52A0) = data::set_real(v128, "coningUp", PerformanceCount);
  PerformanceCount[0].LowPart = 0x3C23D70A;
  *(v134.QuadPart + 0x52A4) = data::set_real(v128, "coningDown", PerformanceCount);
  LOBYTE(PerformanceCount[0].LowPart) = 1;
  if ( data::get_bool(*v973, "loadSound", PerformanceCount) )
    sub_3F6210(v134.LowPart, v128, v972 & ((byte_4A7061C != 0) | a5), v972, 0);
  get_misc_str("path");
  v974 = get_misc_str("pathCommon");
  PerformanceCount[0].QuadPart = "none";
  v296 = data::get_str(v259, "voiceWarningSystem", PerformanceCount);
  *v973 = v259;
  if ( v296 )
  {
    v297 = v296;
    if ( !strcmp("rita", v296) )
    {
      v298 = 0;
    }
    else
    {
      if ( strcmp("betty", v297) )
        goto LABEL_386;
      v298 = 1;
    }
    *(v134.QuadPart + 0x3390) = v298;
    v299 = *(v134.QuadPart + 0x1058);
    v300 = *v259;
    v301 = 0xFFFFFFFF;
    if ( !*v259 )
      goto LABEL_399;
    v302 = data::get_name_id("voiceWarningSystemOverride", 0x1Aui64);
    v303 = *(v300 + 0x50);
    if ( v303 )
    {
      v304 = *(v303 + 0x20);
      if ( !*(v300 + 0x20) )
      {
LABEL_396:
        if ( v304 )
        {
          v306 = data::get_name_id(*(v300 + 0x50), "voiceWarningSystemOverride", 0x1Aui64, v302);
          goto LABEL_398;
        }
        goto LABEL_399;
      }
    }
    else
    {
      v304 = 0;
      if ( !*(v300 + 0x20) )
        goto LABEL_396;
    }
    v305 = data::get_name_id(v300, "voiceWarningSystemOverride", 0x1Aui64, v302);
    if ( v305 < 0 )
      goto LABEL_396;
    v306 = v304 + v305;
LABEL_398:
    v301 = v306;
LABEL_399:
    v259 = *v973;
    v307 = *(*v973 + 0x10i64);
    if ( v307 == 0xFFFFFFFF )
    {
      v314 = *(*v973 + 0xEi64);
      v309 = 0i64;
      if ( !*(*v973 + 0xEi64) )
        goto LABEL_412;
      v315 = v301 + 1;
      v316 = *(*v973 + 0x18i64);
      v317 = *v316;
      v318 = *(v316 + 2) - 8 * v314;
      v319 = 0;
      while ( (*(*(v317 + v318) + 8i64) & 0x3FFFFFFF) != v315 )
      {
        ++v319;
        v318 += 8i64;
        if ( v314 == v319 )
          goto LABEL_412;
      }
      v128 = v959;
      if ( v319 >= v314 )
        v309 = 0i64;
      else
        v309 = *(v317 + v318);
    }
    else
    {
      v308 = *(*v973 + 0xEi64);
      v309 = 0i64;
      if ( v307 < (v307 + v308) )
      {
        v310 = v301 + 1;
        v311 = **v973 + *(**v973 + 0x5Ci64) + 0x90i64;
        v312 = 0;
        while ( 1 )
        {
          v313 = 0x20i64 * (v307 + v312);
          if ( (*(v311 + v313 + 8) & 0x3FFFFFFF) == v310 )
            break;
          if ( v308 == ++v312 )
            goto LABEL_412;
        }
        v320 = (v313 + v311);
        v309 = 0i64;
        if ( v312 < v308 )
          v309 = v320;
      }
LABEL_412:
      v128 = v959;
    }
    v321 = (v299 >> 8) & 1;
    if ( !v309 )
      v309 = &data::get_block_by_name;
    *(v134.QuadPart + 0x3398) = sub_F2D5E0(v309, v321);
    if ( (*(v134.QuadPart + 0x1058) & 0x100) != 0 )
      (sub_F2DD50)(v134.QuadPart);
  }
  else
  {
LABEL_386:
    *(v134.QuadPart + 0x3390) = 0xFFFFFFFF;
  }
  LOBYTE(PerformanceCount[0].LowPart) = 0;
  v322 = data::get_bool(v259, "useDiveSiren", PerformanceCount);
  v323 = *(v134.QuadPart + 0x3258);
  if ( v322 )
  {
    if ( !v323 )
    {
      EnterCriticalSection(&stru_4B776C8);
      v324 = (*(*off_4B73580 + 8i64))(off_4B73580);
      v325 = &byte_4B73348;
      if ( v324 )
        v325 = v324;
      LeaveCriticalSection(&stru_4B776C8);
      v326 = "eventStukaSiren";
      if ( (*(v134.QuadPart + 0x1058) & 0x100) == 0 )
        v326 = "eventStukaSirenAi";
      get_misc_str(v326);
      sub_1665C80(v325, 1);
      *(v134.QuadPart + 0x3258) = v325;
    }
    PerformanceCount[0].LowPart = 0x42C80000;
    *(v134.QuadPart + 0x3268) = data::set_real(v259, "sirenSpeedTreshold", PerformanceCount);
  }
  else if ( v323 )
  {
    sub_1665AB0(*(v134.QuadPart + 0x3258));
    if ( v323 != &byte_4B73348 )
    {
      EnterCriticalSection(&stru_4B776C8);
      (*(*off_4B73580 + 0x10i64))(off_4B73580, v323);
      LeaveCriticalSection(&stru_4B776C8);
    }
    *(v134.QuadPart + 0x3258) = 0i64;
  }
  v327 = *(v134.QuadPart + 0x3218);
  if ( v327 )
  {
    sub_1665AB0(*(v134.QuadPart + 0x3218));
    if ( v327 != &byte_4B73348 )
    {
      EnterCriticalSection(&stru_4B776C8);
      (*(*off_4B73580 + 0x10i64))(off_4B73580, v327);
      LeaveCriticalSection(&stru_4B776C8);
    }
    *(v134.QuadPart + 0x3218) = 0i64;
  }
  PerformanceCount[0].QuadPart = &szFile;
  if ( *data::get_str(v259, "eventWreck", PerformanceCount) )
  {
    EnterCriticalSection(&stru_4B776C8);
    v328 = (*(*off_4B73580 + 8i64))(off_4B73580);
    v329 = &byte_4B73348;
    if ( v328 )
      v329 = v328;
    LeaveCriticalSection(&stru_4B776C8);
    sub_1665C80(v329, 1);
    *(v134.QuadPart + 0x3218) = v329;
  }
  v330 = *(v134.QuadPart + 0x32A0);
  if ( v330 )
  {
    sub_1665AB0(*(v134.QuadPart + 0x32A0));
    if ( v330 != &byte_4B73348 )
    {
      EnterCriticalSection(&stru_4B776C8);
      (*(*off_4B73580 + 0x10i64))(off_4B73580, v330);
      LeaveCriticalSection(&stru_4B776C8);
    }
    *(v134.QuadPart + 0x32A0) = 0i64;
  }
  *(v134.QuadPart + 0x32A8) = 0xFFFFFFFFFFFFFFFFui64;
  if ( *(*(*(v134.QuadPart + 0x2E68) + 0x4568i64) + 0x200i64) && (byte_4B9DFD1 & 1) != 0 )
  {
    EnterCriticalSection(&stru_4B776C8);
    v331 = (*(*off_4B73580 + 8i64))(off_4B73580);
    v332 = &byte_4B73348;
    if ( v331 )
      v332 = v331;
    LeaveCriticalSection(&stru_4B776C8);
    get_misc_str("eventHydroplane");
    sub_1665C80(v332, 1);
    *(v134.QuadPart + 0x32A0) = v332;
    EnterCriticalSection(&stru_4B776C8);
    *(v134.QuadPart + 0x32A8) = get_param_idx(*(v134.QuadPart + 0x32A0), "engine", 0i64);
    *(v134.QuadPart + 0x32AC) = get_param_idx(*(v134.QuadPart + 0x32A0), "distance", 0i64);
    sub_1666E50(*(v134.QuadPart + 0x32A0));
    LeaveCriticalSection(&stru_4B776C8);
  }
  (sub_EF9E20)(v134.QuadPart);
  PerformanceCount[0].LowPart = 0x3FC00000;
  *(v134.QuadPart + 0x2A20) = fminf(fmaxf(0.0, data::set_real(v128, "wepIgnitionTime", PerformanceCount)), *&dword_4487F04);
  v333 = *v128;
  v334 = 0xFFFFFFFF;
  if ( !*v128 )
    goto LABEL_456;
  v335 = data::get_name_id("propellers", 0xAui64);
  v336 = *(v333 + 0x50);
  if ( v336 )
  {
    v337 = *(v336 + 0x20);
    if ( !*(v333 + 0x20) )
    {
LABEL_453:
      if ( v337 )
      {
        v339 = data::get_name_id(*(v333 + 0x50), "propellers", 0xAui64, v335);
        goto LABEL_455;
      }
      goto LABEL_456;
    }
  }
  else
  {
    v337 = 0;
    if ( !*(v333 + 0x20) )
      goto LABEL_453;
  }
  v338 = data::get_name_id(v333, "propellers", 0xAui64, v335);
  if ( v338 < 0 )
    goto LABEL_453;
  v339 = v337 + v338;
LABEL_455:
  v334 = v339;
LABEL_456:
  v340 = *(v128 + 0x10);
  if ( v340 == 0xFFFFFFFF )
  {
    v347 = *(v128 + 0xE);
    v342 = 0i64;
    if ( *(v128 + 0xE) )
    {
      v348 = v334 + 1;
      v349 = *(v128 + 0x18);
      v350 = *v349;
      v351 = *(v349 + 2) - 8 * v347;
      v352 = 0;
      while ( (*(*(v350 + v351) + 8i64) & 0x3FFFFFFF) != v348 )
      {
        ++v352;
        v351 += 8i64;
        if ( v347 == v352 )
          goto LABEL_473;
      }
      if ( v352 >= v347 )
        v342 = 0i64;
      else
        v342 = *(v350 + v351);
    }
  }
  else
  {
    v341 = *(v128 + 0xE);
    v342 = 0i64;
    if ( v340 < (v340 + v341) )
    {
      v343 = v334 + 1;
      v344 = *(*v128 + 0x5Ci64) + *v128 + 0x90i64;
      v345 = 0;
      while ( 1 )
      {
        v346 = 0x20i64 * (v340 + v345);
        if ( (*(v344 + v346 + 8) & 0x3FFFFFFF) == v343 )
          break;
        if ( v341 == ++v345 )
          goto LABEL_473;
      }
      v353 = (v346 + v344);
      v342 = 0i64;
      if ( v345 < v341 )
        v342 = v353;
    }
  }
LABEL_473:
  v982 = (v134.QuadPart + 0x5E8);
  if ( !v342 )
    v342 = &data::get_block_by_name;
  sub_927B10(*(v134.QuadPart + 0x46E0), v342);
  sub_927B10(*(v134.QuadPart + 0x4708), v342);
  sub_927B10(*(v134.QuadPart + 0x4730), v342);
  sub_927B10(*(v134.QuadPart + 0x4758), v342);
  sub_927B10(*(v134.QuadPart + 0x4780), v342);
  sub_927B10(*(v134.QuadPart + 0x47A8), v342);
  sub_927B10(*(v134.QuadPart + 0x47D0), v342);
  sub_927B10(*(v134.QuadPart + 0x47F8), v342);
  sub_927B10(*(v134.QuadPart + 0x4820), v342);
  sub_927B10(*(v134.QuadPart + 0x4848), v342);
  sub_927B10(*(v134.QuadPart + 0x4870), v342);
  sub_927B10(*(v134.QuadPart + 0x4898), v342);
  sub_927B10(*(v134.QuadPart + 0x48C0), v342);
  sub_927B10(*(v134.QuadPart + 0x48E8), v342);
  sub_927B10(*(v134.QuadPart + 0x4910), v342);
  sub_927B10(*(v134.QuadPart + 0x4938), v342);
  v354 = (v134.QuadPart + 0x46D8);
  v355 = 0i64;
  v356 = *&dword_449CFE0;
  do
  {
    sub_17A810(v989, 0x10, "prop%d");
    v990 = 0;
    sub_17A810(v998, 0x10, "prop%dEngine");
    v999 = 0;
    PerformanceCount[0].LowPart = v355;
    PerformanceCount[0].LowPart = data::set_int(v342, v998, PerformanceCount);
    *(v354 + 0xFFFFFFFA) = data::set_int(v342, v989, PerformanceCount);
    sub_17A810(v989, 0x10, "engine%d");
    v990 = 0;
    PerformanceCount[0].LowPart = 0xFFFFFFFF;
    *(v354 + 0xFFFFFFFB) = data::set_int(v342, v989, PerformanceCount);
    sub_17A810(v989, 0x10, "angles%d");
    v990 = 0;
    Block = 0i64;
    LODWORD(v979) = 0;
    sub_145C630(v342, PerformanceCount, v989, &Block);
    v357 = *&PerformanceCount[1].LowPart * v356;
    v358 = *&PerformanceCount[0].HighPart * v356;
    v354[0xFFFFFFFC] = *&PerformanceCount[0].LowPart * v356;
    v354[0xFFFFFFFD] = v358;
    v354[0xFFFFFFFE] = v357;
    sub_17A810(v989, 0x10, "cyclic%d");
    v990 = 0;
    LOBYTE(PerformanceCount[0].LowPart) = 0;
    *(v354 + 0xFFFFFFFC) = data::get_bool(v342, v989, PerformanceCount);
    sub_17A810(v989, 0x10, "phaseShift%d");
    v990 = 0;
    PerformanceCount[0].LowPart = 0;
    *v354 = data::set_real(v342, v989, PerformanceCount) * v356;
    ++v355;
    v354 += 0xA;
  }
  while ( v355 != 0x10 );
  v359 = v963;
  *(v963.QuadPart + 0x5278) = *(*(v963.QuadPart + 0x2E68) + 0x5DE0i64) ^ SIGN_BIT_MASK;
  if ( (*(v963.QuadPart + 0x1058) & 0x100) != 0 && byte_4B822D8 )
  {
    v360 = *(v963.QuadPart + 0x11A0);
    v971 = 0i64;
    v970 = 0i64;
    v969 = 0i64;
    v968 = 0i64;
    v967 = 0i64;
    v966 = 0i64;
    v965 = 0i64;
    *&PerformanceCount[0].LowPart = 0i64;
    v361 = *(v963.QuadPart + 0x41F8);
    v362 = *(v361 + 0x17C);
    if ( v362 )
    {
      v363 = *(v361 + 0x174);
      v364 = *(v360 + 0x2A8);
      v365 = v362 - 1;
      v366 = 0xF;
      if ( v365 < 0xF )
        v366 = v365;
      v367 = (v366 + 1);
      for ( j = 0i64; v367 != j; ++j )
      {
        if ( v364 > v363 + j )
        {
          v370 = *(*(v360 + 0x2A0) + 4i64 * (v363 + j));
          if ( (v370 & 0x8000) == 0 )
          {
            v369.QuadPart = 0i64;
            if ( *(v360 + 0x310) <= v370 )
              goto LABEL_484;
            v371 = *(*(v360 + 0x308) + 0x38 * v370 + 4);
            if ( (v371 & 0x80000000) == 0i64 )
            {
              v372 = *(v360 + 0x438);
              if ( (*(v360 + 0x440) - v372) >> 6 > v371 )
              {
                v369 = *(v372 + (v371 << 6));
                goto LABEL_484;
              }
            }
          }
        }
        v369.QuadPart = 0i64;
LABEL_484:
        PerformanceCount[j] = v369;
      }
    }
    v373 = 0i64;
    LODWORD(v374) = 0;
    do
    {
      v375 = PerformanceCount[v373];
      if ( v375.QuadPart && *(v375.QuadPart + 3) != 1 )
      {
        v376 = 0x4Ci64 * v374;
        v377 = *(v375.QuadPart + 0x10);
        v378 = *(v375.QuadPart + 0x20);
        *&byte_4B77830[v376 + 0xA488] = *(v375.QuadPart + 0x30);
        *&byte_4B77830[v376 + 0xA478] = v378;
        *&byte_4B77830[v376 + 0xA468] = v377;
        *&byte_4B77830[v376 + 0xA498] = *(v375.QuadPart + 0x40);
        *&byte_4B77830[v376 + 0xA4A8] = *(v375.QuadPart + 0x50);
        *&byte_4B77830[v376 + 0xA4B0] = v373;
        LODWORD(v374) = v374 + 1;
      }
      if ( v373 > 0xE )
        break;
      ++v373;
    }
    while ( v374 < 0x10 );
    if ( v374 )
    {
      v379 = v374;
      v380 = &byte_4B77830[0x4C * v374 + 0xA468];
      v381 = 0;
      if ( v374 != 1 )
      {
        v381 = 0;
        v374 = v374;
        do
        {
          v374 >>= 1;
          ++v381;
          v382 = v379 <= 3;
          v379 = v374;
        }
        while ( !v382 );
      }
      sub_1856930(&unk_4B81C98, v380, sub_18549B0, v381, 1);
    }
    v383 = *(v963.QuadPart + 0x11A0);
    v971 = 0i64;
    v970 = 0i64;
    v969 = 0i64;
    v968 = 0i64;
    v967 = 0i64;
    v966 = 0i64;
    v965 = 0i64;
    *&PerformanceCount[0].LowPart = 0i64;
    v384 = *(v963.QuadPart + 0x41F8);
    v385 = *(v384 + 0x128);
    if ( v385 )
    {
      v386 = *(v384 + 0x120);
      v387 = *(v383 + 0x2A8);
      v388 = v385 - 1;
      v389 = 0xF;
      if ( v388 < 0xF )
        v389 = v388;
      v390 = (v389 + 1);
      for ( k = 0i64; v390 != k; ++k )
      {
        if ( v387 > v386 + k )
        {
          v393 = *(*(v383 + 0x2A0) + 4i64 * (v386 + k));
          if ( (v393 & 0x8000) == 0 )
          {
            v392.QuadPart = 0i64;
            if ( *(v383 + 0x310) <= v393 )
              goto LABEL_507;
            v394 = *(*(v383 + 0x308) + 0x38 * v393 + 4);
            if ( (v394 & 0x80000000) == 0i64 )
            {
              v395 = *(v383 + 0x438);
              if ( (*(v383 + 0x440) - v395) >> 6 > v394 )
              {
                v392 = *(v395 + (v394 << 6));
                goto LABEL_507;
              }
            }
          }
        }
        v392.QuadPart = 0i64;
LABEL_507:
        PerformanceCount[k] = v392;
      }
    }
    v396 = 0i64;
    v397 = 0;
    do
    {
      v398 = PerformanceCount[v396];
      if ( v398.QuadPart && *(v398.QuadPart + 3) != 1 )
      {
        v399 = 0x4Ci64 * v397;
        v400 = *(v398.QuadPart + 0x10);
        v401 = *(v398.QuadPart + 0x20);
        *&byte_4B77830[v399 + 0x9B08] = *(v398.QuadPart + 0x30);
        *&byte_4B77830[v399 + 0x9AF8] = v401;
        *&byte_4B77830[v399 + 0x9AE8] = v400;
        *&byte_4B77830[v399 + 0x9B18] = *(v398.QuadPart + 0x40);
        *&byte_4B77830[v399 + 0x9B28] = *(v398.QuadPart + 0x50);
        *&byte_4B77830[v399 + 0x9B30] = v396;
        ++v397;
      }
      if ( v396 > 0xE )
        break;
      ++v396;
    }
    while ( v397 < 0x10 );
    v402 = *(v963.QuadPart + 0x11A0);
    v971 = 0i64;
    v970 = 0i64;
    v969 = 0i64;
    v968 = 0i64;
    v967 = 0i64;
    v966 = 0i64;
    v965 = 0i64;
    *&PerformanceCount[0].LowPart = 0i64;
    v403 = *(v963.QuadPart + 0x41F8);
    v404 = *(v403 + 0x140);
    if ( v404 )
    {
      v405 = *(v403 + 0x138);
      v406 = *(v402 + 0x2A8);
      v407 = v404 - 1;
      v408 = 0xF;
      if ( v407 < 0xF )
        v408 = v407;
      v409 = (v408 + 1);
      for ( m = 0i64; v409 != m; ++m )
      {
        if ( v406 > v405 + m )
        {
          v412 = *(*(v402 + 0x2A0) + 4i64 * (v405 + m));
          if ( (v412 & 0x8000) == 0 )
          {
            v411.QuadPart = 0i64;
            if ( *(v402 + 0x310) <= v412 )
              goto LABEL_525;
            v413 = *(*(v402 + 0x308) + 0x38 * v412 + 4);
            if ( (v413 & 0x80000000) == 0i64 )
            {
              v414 = *(v402 + 0x438);
              if ( (*(v402 + 0x440) - v414) >> 6 > v413 )
              {
                v411 = *(v414 + (v413 << 6));
                goto LABEL_525;
              }
            }
          }
        }
        v411.QuadPart = 0i64;
LABEL_525:
        PerformanceCount[m] = v411;
      }
    }
    v415 = 0i64;
    v416 = 0;
    do
    {
      v417 = PerformanceCount[v415];
      if ( v417.QuadPart && *(v417.QuadPart + 3) != 1 )
      {
        v418 = 0x4Ci64 * v416;
        v419 = *(v417.QuadPart + 0x10);
        v420 = *(v417.QuadPart + 0x20);
        *&byte_4B77830[v418 + 0x9FC8] = *(v417.QuadPart + 0x30);
        *&byte_4B77830[v418 + 0x9FB8] = v420;
        *&byte_4B77830[v418 + 0x9FA8] = v419;
        *&byte_4B77830[v418 + 0x9FD8] = *(v417.QuadPart + 0x40);
        *&byte_4B77830[v418 + 0x9FE8] = *(v417.QuadPart + 0x50);
        *&byte_4B77830[v418 + 0x9FF0] = v415;
        ++v416;
      }
      if ( v415 > 0xE )
        break;
      ++v415;
    }
    while ( v416 < 0x10 );
    if ( v416 <= 0 )
    {
      v421 = *(v963.QuadPart + 0x2E68);
      v422 = *(v421 + 0x3AC8);
      if ( *(v422 + 0x7098) > 0 )
      {
        v423 = &unk_4B81820;
        v424 = 0i64;
        v425 = dword_4487F30;
        v426 = *&screenScaleFactor;
        v427 = SIGN_BIT_MASK;
        do
        {
          v428 = *(v422 + 8 * v424 + 0x70A0);
          v429 = *v428;
          v430 = v428[1];
          *(v423 + 0xFFFFFFF6) = v428[2];
          *(v423 + 0xFFFFFFF2) = v430;
          *(v423 + 0xFFFFFFEE) = v429;
          v431 = *(v428 + 7);
          v432 = v431[0x78];
          *&v429 = fmaxf((sinf(v431[0x7A]) * v426) * v431[0x7F], v432 * v425);
          v423[0xFFFFFFFA] = v429 ^ v427;
          v423[0xFFFFFFFB] = LODWORD(v432) ^ v427;
          v423[0xFFFFFFFC] = LODWORD(v432) ^ v427;
          v423[0xFFFFFFFD] = v429;
          *(v423 + 0xFFFFFFFE) = v432;
          *(v423 + 0xFFFFFFFF) = v432;
          *v423 = 0xFFFFFFFF;
          ++v424;
          v422 = *(v421 + 0x3AC8);
          v423 += 0x13;
        }
        while ( v424 < *(v422 + 0x7098) );
      }
    }
  }
  Block = 0i64;
  LODWORD(v979) = 0;
  sub_145C630(v959, PerformanceCount, "tpsCameraOffset", &Block);
  *(v963.QuadPart + 0x53B0) = PerformanceCount[1].LowPart;
  *(v963.QuadPart + 0x53A8) = PerformanceCount[0];
  Block = 0i64;
  LODWORD(v979) = 0;
  sub_145C630(v959, PerformanceCount, "tpsCameraTargetOffsetAtZoom", &Block);
  *(v963.QuadPart + 0x53BC) = PerformanceCount[1].LowPart;
  *(v963.QuadPart + 0x53B4) = PerformanceCount[0];
  v433 = *(HudInfo + 0x63);
  v434 = *(HudInfo + 0x60);
  v435 = *(HudInfo + 0x61);
  v436 = *(v963.QuadPart + 0x1BC);
  if ( v434 <= v435 )
  {
    v437 = *(HudInfo + 0x63);
    v433 = *(HudInfo + 0x62);
    v438 = *(HudInfo + 0x61);
    v435 = *(HudInfo + 0x60);
    if ( v434 >= v436 )
      goto LABEL_552;
  }
  else
  {
    v437 = *(HudInfo + 0x62);
    v438 = *(HudInfo + 0x60);
    if ( v435 >= v436 )
      goto LABEL_552;
  }
  if ( v438 <= v436 )
  {
    v433 = v437;
  }
  else
  {
    v439 = v438 - v435;
    v440 = *(v963.QuadPart + 0x1BC);
    v440.m128_f32[0] = (v436 - v435) * (v437 - v433);
    if ( v439 > *&epsilon_unk || (v441 = 0i64, v439 < *&dword_449F1AC) )
    {
      v440.m128_f32[0] = v440.m128_f32[0] / v439;
      v441 = v440;
    }
    v442.m128_f32[0] = v435 - v436;
    v433 = v433 + _mm_andnot_ps(_mm_cmple_ss(0i64, v442), v441).m128_f32[0];
  }
LABEL_552:
  *(v963.QuadPart + 0x1A60) = v433;
  *(v963.QuadPart + 0x3B60) = v436;
  v443 = *(v963.QuadPart + 0x53C8);
  if ( v443 )
  {
    if ( *v443 )
      (*(*v443[1] + 0x40i64))(v443[1]);
    _InterlockedAdd(&dword_4B6788C, -((j__msize(v443) + 0xF) >> 4));
    _InterlockedDecrement(&dword_4B67890);
    free(v443);
    *(v963.QuadPart + 0x53C8) = 0i64;
  }
  v444 = j__malloc_base(0x20ui64);
  if ( !v444 )
  {
    while ( off_4B678A0 && off_4B678A0(0x20i64) )
    {
      v445 = j__malloc_base(0x20ui64);
      if ( v445 )
      {
        v444 = v445;
        goto LABEL_561;
      }
    }
    PerformanceCount[1].QuadPart = 0x20i64;
    PerformanceCount[0].LowPart = 2;
    v958 = PerformanceCount;
LABEL_1317:
    LOBYTE(v213) = 1;
    log_err("..\\..\\prog\\engine2\\memory\\dagmem.cpp", 0x345, v213, "Not enough memory to alloc %llu bytes", v958, 1);
  }
LABEL_561:
  _InterlockedAdd(&dword_4B6788C, (j__msize(v444) + 0xF) >> 4);
  _InterlockedIncrement(&dword_4B67890);
  *v444 = 0i64;
  v444[1] = off_4B678C0;
  *(v444 + 1) = 0i64;
  *(v963.QuadPart + 0x53C8) = v444;
  (sub_977A00)(v444, v959, v963.QuadPart);
  PerformanceCount[0].LowPart = 0x41F00000;
  *(v963.QuadPart + 0x3B64) = data::set_real(v959, "timeOfFullRefuel", PerformanceCount);
  (sub_364D50)(v963.QuadPart, v959);
  PerformanceCount[0].LowPart = 0;
  *(v963.QuadPart + 0x4168) = data::set_real(v959, "smokeScreenPlaneMinAlt", PerformanceCount);
  PerformanceCount[0].LowPart = 0x7F7FFFFF;
  *(v963.QuadPart + 0x416C) = data::set_real(v959, "smokeScreenPlaneMaxAlt", PerformanceCount);
  v449 = *(v963.QuadPart + 0x53C0);
  if ( v449 )
  {
    sub_3A6FC0(*(v963.QuadPart + 0x53C0));
    _InterlockedAdd(&dword_4B6788C, -((j__msize(v449) + 0xF) >> 4));
    _InterlockedDecrement(&dword_4B67890);
    free(v449);
    *(v963.QuadPart + 0x53C0) = 0i64;
  }
  v450 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(v450[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(v450, v446, v447, v448);
  p_Block = &Block;
  sub_14584E0(&Block, *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64));
  PerformanceCount[0].QuadPart = 0i64;
  *&v965 = 0i64;
  *(&v983[0] + 1) = "exhaustEffects";
  LODWORD(v983[0]) = 1;
  PerformanceCount[1].QuadPart = off_4B678C8;
  ctor_vprintf(PerformanceCount, v452, "%sBlk", v983, 1);
  v453 = PerformanceCount[0];
  QuadPart = PerformanceCount[0].QuadPart;
  if ( !v965 )
    QuadPart = &szFile;
  *&v983[0] = 0i64;
  v455 = data::get_str(v959, QuadPart, v983);
  if ( !v455 || !sub_1606B70(&Block, v455, 0i64) )
  {
    v459 = *v959;
    v460 = 0xFFFFFFFF;
    if ( !*v959 )
      goto LABEL_579;
    v461 = data::get_name_id("exhaustEffects", 0xEui64);
    v462 = *(v459 + 0x50);
    if ( v462 )
    {
      v463 = *(v462 + 0x20);
      if ( !*(v459 + 0x20) )
      {
LABEL_576:
        if ( v463 )
        {
          v465 = data::get_name_id(*(v459 + 0x50), "exhaustEffects", 0xEui64, v461);
          goto LABEL_578;
        }
        goto LABEL_579;
      }
    }
    else
    {
      v463 = 0;
      if ( !*(v459 + 0x20) )
        goto LABEL_576;
    }
    v464 = data::get_name_id(v459, "exhaustEffects", 0xEui64, v461);
    if ( v464 < 0 )
      goto LABEL_576;
    v465 = v463 + v464;
LABEL_578:
    v460 = v465;
LABEL_579:
    v466 = *(v959 + 4);
    if ( v466 == 0xFFFFFFFF )
    {
      v471 = *(v959 + 7);
      p_Block = 0i64;
      if ( *(v959 + 7) )
      {
        v472 = v460 + 1;
        v473 = v959[3];
        v474 = *v473;
        v456 = *(v473 + 8) - 8 * v471;
        v475 = 0;
        while ( (*(*(v474 + v456) + 8i64) & 0x3FFFFFFF) != v472 )
        {
          ++v475;
          v456 += 8i64;
          if ( v471 == v475 )
            goto LABEL_599;
        }
        if ( v475 >= v471 )
          p_Block = 0i64;
        else
          p_Block = *(v474 + v456);
      }
    }
    else
    {
      v467 = *(v959 + 7);
      v456 = v466 + v467;
      p_Block = 0i64;
      if ( v466 < v456 )
      {
        v468 = v460 + 1;
        v456 = *(*v959 + 0x5C) + *v959 + 0x90;
        v457 = 0x3FFFFFFFi64;
        v469 = 0;
        while ( 1 )
        {
          v470 = 0x20i64 * (v466 + v469);
          if ( (*(v456 + v470 + 8) & 0x3FFFFFFF) == v468 )
            break;
          if ( v467 == ++v469 )
            goto LABEL_599;
        }
        v456 += v470;
        p_Block = 0i64;
        if ( v469 < v467 )
          p_Block = v456;
      }
    }
  }
LABEL_599:
  if ( v453.QuadPart )
    (*(*PerformanceCount[1].QuadPart + 0x40i64))(PerformanceCount[1], v453);
  v476 = &data::get_block_by_name;
  if ( !p_Block )
    goto LABEL_608;
  v477 = j__malloc_base(0x1C0ui64);
  if ( v477 )
    goto LABEL_607;
  while ( 2 )
  {
    if ( !off_4B678A0 || !off_4B678A0(0x1C0i64) )
    {
      PerformanceCount[1].QuadPart = 0x1C0i64;
LABEL_1316:
      PerformanceCount[0].LowPart = 2;
      v958 = PerformanceCount;
      goto LABEL_1317;
    }
    v478 = j__malloc_base(0x1C0ui64);
    if ( !v478 )
      continue;
    break;
  }
  v477 = v478;
LABEL_607:
  _InterlockedAdd(&dword_4B6788C, (j__msize(v477) + 0xF) >> 4);
  _InterlockedIncrement(&dword_4B67890);
  (sub_9725B0)(v477, v963.QuadPart, p_Block, v972);
  *(v963.QuadPart + 0x53C0) = v477;
LABEL_608:
  v479 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(v479[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(v479, v456, v457, v458);
  if ( *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x158i64) || !*(game + 0xCA) )
  {
    (sub_3E8550)(v963.QuadPart);
  }
  else
  {
    v483 = j__malloc_base(0x10ui64);
    if ( !v483 )
    {
      do
      {
        if ( !off_4B678A0 || !off_4B678A0(0x10i64) )
          goto LABEL_1315;
        v484 = j__malloc_base(0x10ui64);
      }
      while ( !v484 );
      v483 = v484;
    }
    _InterlockedAdd(&dword_4B6788C, (j__msize(v483) + 0xF) >> 4);
    _InterlockedIncrement(&dword_4B67890);
    *v483 = &off_44AEA00;
    v483[1] = v963.QuadPart;
    sub_1641A30(v483, 0i64, 0xAi64);
  }
  v485 = NtCurrentTeb()->ThreadLocalStoragePointer;
  v486 = *v973;
  if ( !*(v485[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(v485, v480, v481, v482);
  v487 = v983;
  sub_14584E0(v983, *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64));
  PerformanceCount[0].QuadPart = 0i64;
  v488 = data::get_str(v959, "damagePartsToWeaponsMapBlk", PerformanceCount);
  if ( v488 && sub_1606B70(v983, v488, 0i64) )
  {
LABEL_623:
    (sub_4826B0)(v963.QuadPart + 0x2F80, v963.QuadPart, v487);
    goto LABEL_649;
  }
  v489 = *v959;
  v490 = 0xFFFFFFFF;
  if ( !*v959 )
    goto LABEL_634;
  v491 = data::get_name_id("damagePartsToWeaponsMap", 0x17ui64);
  v492 = *(v489 + 0x50);
  if ( v492 )
  {
    v493 = *(v492 + 0x20);
    if ( !*(v489 + 0x20) )
    {
LABEL_631:
      if ( v493 )
      {
        v495 = data::get_name_id(*(v489 + 0x50), "damagePartsToWeaponsMap", 0x17ui64, v491);
        goto LABEL_633;
      }
      goto LABEL_634;
    }
  }
  else
  {
    v493 = 0;
    if ( !*(v489 + 0x20) )
      goto LABEL_631;
  }
  v494 = data::get_name_id(v489, "damagePartsToWeaponsMap", 0x17ui64, v491);
  if ( v494 < 0 )
    goto LABEL_631;
  v495 = v493 + v494;
LABEL_633:
  v490 = v495;
LABEL_634:
  v496 = *(v959 + 4);
  if ( v496 == 0xFFFFFFFF )
  {
    v502 = *(v959 + 7);
    if ( *(v959 + 7) )
    {
      v503 = v490 + 1;
      v504 = v959[3];
      v505 = *v504;
      v506 = *(v504 + 8) - 8 * v502;
      v507 = 0;
      while ( (*(*(v505 + v506) + 8i64) & 0x3FFFFFFF) != v503 )
      {
        ++v507;
        v506 += 8i64;
        if ( v502 == v507 )
          goto LABEL_649;
      }
      if ( v507 < v502 )
      {
        v487 = *(v505 + v506);
        if ( v487 )
          goto LABEL_623;
      }
    }
  }
  else
  {
    v497 = *(v959 + 7);
    if ( v496 < (v496 + v497) )
    {
      v498 = v490 + 1;
      v499 = *v959 + *(*v959 + 0x5C) + 0x90;
      v500 = 0;
      while ( 1 )
      {
        v501 = 0x20i64 * (v496 + v500);
        if ( (*(v499 + v501 + 8) & 0x3FFFFFFF) == v498 )
          break;
        if ( v497 == ++v500 )
          goto LABEL_649;
      }
      if ( v500 < v497 )
      {
        v487 = (v501 + v499);
        goto LABEL_623;
      }
    }
  }
LABEL_649:
  if ( *(*(game + 0x498) + 0x1E58i64) )
  {
    PerformanceCount[0].QuadPart = "default";
    v508 = data::get_str(v959, "paratrooper", PerformanceCount);
    v509 = sub_4A88C0(v508);
    *(v963.QuadPart + 0x2AFC) = v509;
    if ( v509 < 0 )
    {
      PerformanceCount[1].QuadPart = v508;
      PerformanceCount[0].LowPart = 1;
      logmessage_fmt(1u, "Paratrooper '%s' not found", PerformanceCount, 1);
    }
    v510 = *(v963.QuadPart + 0x33A8);
    v511 = *v959;
    v512 = 0xFFFFFFFF;
    if ( !*v959 )
      goto LABEL_663;
    v513 = data::get_name_id("bailout", 7ui64);
    v514 = *(v511 + 0x50);
    if ( v514 )
    {
      v515 = *(v514 + 0x20);
      if ( !*(v511 + 0x20) )
      {
LABEL_660:
        if ( v515 )
        {
          v517 = data::get_name_id(*(v511 + 0x50), "bailout", 7ui64, v513);
          goto LABEL_662;
        }
        goto LABEL_663;
      }
    }
    else
    {
      v515 = 0;
      if ( !*(v511 + 0x20) )
        goto LABEL_660;
    }
    v516 = data::get_name_id(v511, "bailout", 7ui64, v513);
    if ( v516 < 0 )
      goto LABEL_660;
    v517 = v515 + v516;
LABEL_662:
    v512 = v517;
LABEL_663:
    v518 = *(v959 + 4);
    if ( v518 == 0xFFFFFFFF )
    {
      v525 = *(v959 + 7);
      v520 = 0i64;
      if ( !*(v959 + 7) )
        goto LABEL_676;
      v526 = v512 + 1;
      v527 = v959[3];
      v528 = *v527;
      v529 = *(v527 + 8) - 8 * v525;
      v530 = 0;
      while ( (*(*(v528 + v529) + 8i64) & 0x3FFFFFFF) != v526 )
      {
        ++v530;
        v529 += 8i64;
        if ( v525 == v530 )
          goto LABEL_676;
      }
      v476 = &data::get_block_by_name;
      if ( v530 >= v525 )
        v520 = 0i64;
      else
        v520 = *(v528 + v529);
    }
    else
    {
      v519 = *(v959 + 7);
      v520 = 0i64;
      if ( v518 < (v518 + v519) )
      {
        v521 = v512 + 1;
        v522 = *v959 + *(*v959 + 0x5C) + 0x90;
        v523 = 0;
        while ( 1 )
        {
          v524 = 0x20i64 * (v518 + v523);
          if ( (*(v522 + v524 + 8) & 0x3FFFFFFF) == v521 )
            break;
          if ( v519 == ++v523 )
            goto LABEL_676;
        }
        v531 = (v524 + v522);
        v520 = 0i64;
        if ( v523 < v519 )
          v520 = v531;
      }
LABEL_676:
      v476 = &data::get_block_by_name;
    }
    if ( !v520 )
      v520 = &data::get_block_by_name;
    sub_483F40(v510, v520);
    v486 = *v973;
  }
  else
  {
    *(v963.QuadPart + 0x2AFC) = 0xFFFFFFFF;
  }
  PerformanceCount[0].LowPart = 0x3F800000;
  *(v963.QuadPart + 0x2FB0) = data::set_real(v959, "simplifiedJoyAileronMult", PerformanceCount);
  PerformanceCount[0].LowPart = 0x3F800000;
  *(v963.QuadPart + 0x2FB4) = data::set_real(v959, "simplifiedJoyElevatorMult", PerformanceCount);
  PerformanceCount[0].QuadPart = "No";
  v532 = data::get_str(v959, "autopilotImpl", PerformanceCount);
  if ( !v532 || (v533 = v532, !strcmp("No", v532)) )
  {
LABEL_684:
    *(v963.QuadPart + 0x2E78) = 0;
    LOBYTE(PerformanceCount[0].LowPart) = 0;
    if ( data::get_bool(v959, "enableAutopilot", PerformanceCount) )
      *(v963.QuadPart + 0x2E78) = 2;
  }
  else
  {
    if ( !strcmp("FBW", v533) )
    {
      v534 = 1;
    }
    else
    {
      if ( strcmp("Full", v533) )
        goto LABEL_684;
      v534 = 2;
    }
    *(v963.QuadPart + 0x2E78) = v534;
  }
  v975 = 0x4EFFFEAB4EFFFEABi64;
  sub_145C170(v959, PerformanceCount, "fullAutopilotIndSpeedTransition", &v975);
  v535 = *&PerformanceCount[0].HighPart * *&dword_44A462C;
  *(v963.QuadPart + 0x2E7C) = *&dword_44A462C * *&PerformanceCount[0].LowPart;
  *(v963.QuadPart + 0x2E80) = v535;
  v975 = 0xCEFFFEABCEFFFEABui64;
  sub_145C170(v959, PerformanceCount, "fullAutopilotVtolTransition", &v975);
  *(v963.QuadPart + 0x2E84) = PerformanceCount[0];
  *(v963.QuadPart + 0x2E8C) = 0;
  v536 = *v959;
  v537 = 0xFFFFFFFF;
  if ( !*v959 )
    goto LABEL_699;
  v538 = data::get_name_id("turbulence", 0xAui64);
  v539 = *(v536 + 0x50);
  if ( v539 )
  {
    v540 = *(v539 + 0x20);
    if ( !*(v536 + 0x20) )
    {
LABEL_696:
      if ( v540 )
      {
        v542 = data::get_name_id(*(v536 + 0x50), "turbulence", 0xAui64, v538);
        goto LABEL_698;
      }
      goto LABEL_699;
    }
  }
  else
  {
    v540 = 0;
    if ( !*(v536 + 0x20) )
      goto LABEL_696;
  }
  v541 = data::get_name_id(v536, "turbulence", 0xAui64, v538);
  if ( v541 < 0 )
    goto LABEL_696;
  v542 = v540 + v541;
LABEL_698:
  v537 = v542;
LABEL_699:
  v543 = *(v959 + 4);
  if ( v543 == 0xFFFFFFFF )
  {
    v550 = *(v959 + 7);
    v545 = 0i64;
    if ( *(v959 + 7) )
    {
      v551 = v537 + 1;
      v552 = v959[3];
      v553 = *v552;
      v554 = *(v552 + 8) - 8 * v550;
      v555 = 0;
      while ( (*(*(v553 + v554) + 8i64) & 0x3FFFFFFF) != v551 )
      {
        ++v555;
        v554 += 8i64;
        if ( v550 == v555 )
          goto LABEL_718;
      }
      if ( v555 >= v550 )
        v545 = 0i64;
      else
        v545 = *(v553 + v554);
    }
  }
  else
  {
    v544 = *(v959 + 7);
    v545 = 0i64;
    if ( v543 < (v543 + v544) )
    {
      v546 = v537 + 1;
      v547 = *v959 + *(*v959 + 0x5C) + 0x90;
      v548 = 0;
      while ( 1 )
      {
        v549 = 0x20i64 * (v543 + v548);
        if ( (*(v547 + v549 + 8) & 0x3FFFFFFF) == v546 )
          break;
        if ( v544 == ++v548 )
          goto LABEL_718;
      }
      v556 = v549 + v547;
      v545 = 0i64;
      if ( v548 < v544 )
        v545 = v556;
    }
  }
LABEL_718:
  if ( v545 )
    v476 = v545;
  *(v963.QuadPart + 0x2818) = 1;
  *(v963.QuadPart + 0x2808) = 0;
  *(v963.QuadPart + 0x27F0) = xmmword_44AD3B0;
  *(v963.QuadPart + 0x2800) = 0x4000000041700000i64;
  *(v963.QuadPart + 0x2740) = 0xBF800000;
  *(v963.QuadPart + 0x275C) = 0xBF800000;
  *(v963.QuadPart + 0x2778) = 0xBF800000;
  *(v963.QuadPart + 0x2794) = 0xBF800000;
  *(v963.QuadPart + 0x27B0) = 0xBF800000;
  *(v963.QuadPart + 0x27CC) = 0xBF800000;
  *(v963.QuadPart + 0x27E8) = 0xBF800000;
  PerformanceCount[0].LowPart = 0x42C80000;
  *(v963.QuadPart + 0x27F0) = data::set_real(v476, "segmentLength", PerformanceCount);
  PerformanceCount[0].LowPart = 0x41DE38E4;
  *(v963.QuadPart + 0x27F4) = data::set_real(v476, "startSpeed", PerformanceCount);
  PerformanceCount[0].LowPart = 0x430AE38E;
  *(v963.QuadPart + 0x27F8) = data::set_real(v476, "maxSpeed", PerformanceCount);
  PerformanceCount[0].LowPart = 0x40800000;
  *(v963.QuadPart + 0x27FC) = data::set_real(v476, "maxPower", PerformanceCount);
  PerformanceCount[0].LowPart = 0x41400000;
  *(v963.QuadPart + 0x2800) = data::set_real(v476, "initialRadius", PerformanceCount);
  PerformanceCount[0].LowPart = 0x40000000;
  *(v963.QuadPart + 0x2804) = data::set_real(v476, "radiusSpeed", PerformanceCount);
  LOBYTE(PerformanceCount[0].LowPart) = 0;
  *(v963.QuadPart + 0x1F1B) = data::get_bool(v959, "flapsIsAirbrakes", PerformanceCount);
  LOBYTE(PerformanceCount[0].LowPart) = 0;
  *(v963.QuadPart + 0x1F1C) = data::get_bool(v959, "bayDoorTextureCtrl", PerformanceCount);
  LOBYTE(PerformanceCount[0].LowPart) = 0;
  *(v963.QuadPart + 0x2AEC) = data::get_bool(v959, "jetEnginePowerFullScale", PerformanceCount);
  *(v963.QuadPart + 0x523C) = 0;
  v557 = *(v963.QuadPart + 0x32E8);
  if ( v557 )
  {
    sub_1665AB0(*(v963.QuadPart + 0x32E8));
    if ( v557 != &byte_4B73348 )
    {
      EnterCriticalSection(&stru_4B776C8);
      (*(*off_4B73580 + 0x10i64))(off_4B73580, v557);
      LeaveCriticalSection(&stru_4B776C8);
    }
    *(v963.QuadPart + 0x32E8) = 0i64;
  }
  *(v963.QuadPart + 0x524C) = 0;
  v558 = *(v963.QuadPart + 0x32F0);
  if ( v558 )
  {
    sub_1665AB0(*(v963.QuadPart + 0x32F0));
    if ( v558 != &byte_4B73348 )
    {
      EnterCriticalSection(&stru_4B776C8);
      (*(*off_4B73580 + 0x10i64))(off_4B73580, v558);
      LeaveCriticalSection(&stru_4B776C8);
    }
    *(v963.QuadPart + 0x32F0) = 0i64;
  }
  v559 = *(*(v963.QuadPart + 0x11D0) + 0x300i64);
  if ( *(v559 + 0x48) || *(v559 + 0x68) )
  {
    if ( *(*(v963.QuadPart + 0x2E68) + 0x568Fi64) )
    {
      *(v963.QuadPart + 0x523C) = 1;
      EnterCriticalSection(&stru_4B776C8);
      v560 = (*(*off_4B73580 + 8i64))(off_4B73580);
      v561 = &byte_4B73348;
      if ( v560 )
        v561 = v560;
      LeaveCriticalSection(&stru_4B776C8);
      get_misc_str("eventBombHatch");
      sub_1665C80(v561, 1);
      *(v963.QuadPart + 0x32E8) = v561;
      *(v963.QuadPart + 0x524C) = *(*(v963.QuadPart + 0x2E68) + 0x5ADCi64);
    }
    if ( !*(v963.QuadPart + 0x523C) )
    {
      EnterCriticalSection(&stru_4B776C8);
      v562 = (*(*off_4B73580 + 8i64))(off_4B73580);
      v563 = &byte_4B73348;
      if ( v562 )
        v563 = v562;
      LeaveCriticalSection(&stru_4B776C8);
      get_misc_str("eventBombDrop");
      sub_1665C80(v563, 1);
      *(v963.QuadPart + 0x32F0) = v563;
    }
  }
  v564 = *(v963.QuadPart + 0x3300);
  if ( v564 )
  {
    sub_1665AB0(*(v963.QuadPart + 0x3300));
    if ( v564 != &byte_4B73348 )
    {
      EnterCriticalSection(&stru_4B776C8);
      (*(*off_4B73580 + 0x10i64))(off_4B73580, v564);
      LeaveCriticalSection(&stru_4B776C8);
    }
    *(v963.QuadPart + 0x3300) = 0i64;
  }
  v565 = *(v963.QuadPart + 0x3308);
  if ( v565 )
  {
    sub_1665AB0(*(v963.QuadPart + 0x3308));
    if ( v565 != &byte_4B73348 )
    {
      EnterCriticalSection(&stru_4B776C8);
      (*(*off_4B73580 + 0x10i64))(off_4B73580, v565);
      LeaveCriticalSection(&stru_4B776C8);
    }
    *(v963.QuadPart + 0x3308) = 0i64;
  }
  if ( *(v963.QuadPart + 0x10B8) && *(*(v963.QuadPart + 0x2E68) + 0x568Ci64) && !byte_4B140AC )
  {
    EnterCriticalSection(&stru_4B776C8);
    v566 = (*(*off_4B73580 + 8i64))(off_4B73580);
    v567 = &byte_4B73348;
    if ( !v566 )
      v566 = &byte_4B73348;
    LeaveCriticalSection(&stru_4B776C8);
    PerformanceCount[0].QuadPart = "cockpit";
    data::get_str(v486, "cockpitOpen", PerformanceCount);
    sub_1665C80(v566, 1);
    *(v963.QuadPart + 0x3300) = v566;
    PerformanceCount[0].QuadPart = 0i64;
    v568 = data::get_str(v486, "cockpitClose", PerformanceCount);
    if ( v568 && *v568 )
    {
      EnterCriticalSection(&stru_4B776C8);
      v569 = (*(*off_4B73580 + 8i64))(off_4B73580);
      if ( v569 )
        v567 = v569;
      LeaveCriticalSection(&stru_4B776C8);
      sub_1665C80(v567, 1);
      *(v963.QuadPart + 0x3308) = v567;
    }
  }
  v570 = *(v963.QuadPart + 0x3310);
  if ( v570 )
  {
    sub_1665AB0(*(v963.QuadPart + 0x3310));
    if ( v570 != &byte_4B73348 )
    {
      EnterCriticalSection(&stru_4B776C8);
      (*(*off_4B73580 + 0x10i64))(off_4B73580, v570);
      LeaveCriticalSection(&stru_4B776C8);
    }
    *(v963.QuadPart + 0x3310) = 0i64;
  }
  PerformanceCount[0].QuadPart = 0i64;
  v571 = data::get_str(v486, "turretTurnSfxName", PerformanceCount);
  PerformanceCount[0].QuadPart = 0i64;
  if ( data::get_str(v486, "turretTurnSfxPathStudio", PerformanceCount) && v571 && *(v963.QuadPart + 0x10B8) )
  {
    EnterCriticalSection(&stru_4B776C8);
    v572 = (*(*off_4B73580 + 8i64))(off_4B73580);
    v573 = &byte_4B73348;
    if ( v572 )
      v573 = v572;
    LeaveCriticalSection(&stru_4B776C8);
    sub_1665C80(v573, 1);
    *(v963.QuadPart + 0x3310) = v573;
    sub_1666E50(v573);
    *(v963.QuadPart + 0x3364) = get_param_idx(*(v963.QuadPart + 0x3310), "velH", 0i64);
    *(v963.QuadPart + 0x3368) = get_param_idx(*(v963.QuadPart + 0x3310), "velV", 0i64);
  }
  PerformanceCount[0].QuadPart = 0i64;
  v574 = data::get_str(v486, "eventAOAAlarm", PerformanceCount);
  v575 = *(v963.QuadPart + 0x3320);
  if ( v575 )
  {
    sub_1665AB0(*(v963.QuadPart + 0x3320));
    if ( v575 != &byte_4B73348 )
    {
      EnterCriticalSection(&stru_4B776C8);
      (*(*off_4B73580 + 0x10i64))(off_4B73580, v575);
      LeaveCriticalSection(&stru_4B776C8);
    }
    *(v963.QuadPart + 0x3320) = 0i64;
  }
  if ( v574 )
  {
    EnterCriticalSection(&stru_4B776C8);
    v576 = (*(*off_4B73580 + 8i64))(off_4B73580);
    v577 = &byte_4B73348;
    if ( v576 )
      v577 = v576;
    LeaveCriticalSection(&stru_4B776C8);
    get_misc_str("pathGui");
    sub_1665C80(v577, 1);
    *(v963.QuadPart + 0x3320) = v577;
    *(v963.QuadPart + 0x3340) = get_param_idx(v577, "intense", 0i64);
    *(v963.QuadPart + 0x3344) = get_param_idx(*(v963.QuadPart + 0x3320), "speed", 0i64);
    *(v963.QuadPart + 0x3348) = get_param_idx(*(v963.QuadPart + 0x3320), "overload", 0i64);
  }
  PerformanceCount[0].QuadPart = 0i64;
  v578 = data::get_str(v486, "eventStallAlarm", PerformanceCount);
  v579 = *(v963.QuadPart + 0x3350);
  if ( v579 )
  {
    sub_1665AB0(*(v963.QuadPart + 0x3350));
    if ( v579 != &byte_4B73348 )
    {
      EnterCriticalSection(&stru_4B776C8);
      (*(*off_4B73580 + 0x10i64))(off_4B73580, v579);
      LeaveCriticalSection(&stru_4B776C8);
    }
    *(v963.QuadPart + 0x3350) = 0i64;
  }
  if ( v578 )
  {
    EnterCriticalSection(&stru_4B776C8);
    v580 = (*(*off_4B73580 + 8i64))(off_4B73580);
    v581 = &byte_4B73348;
    if ( v580 )
      v581 = v580;
    LeaveCriticalSection(&stru_4B776C8);
    get_misc_str("pathGui");
    sub_1665C80(v581, 1);
    *(v963.QuadPart + 0x3350) = v581;
    *(v963.QuadPart + 0x3358) = get_param_idx(v581, "intense", 0i64);
  }
  v582 = *(v963.QuadPart + 0x3328);
  if ( v582 )
  {
    sub_1665AB0(*(v963.QuadPart + 0x3328));
    if ( v582 != &byte_4B73348 )
    {
      EnterCriticalSection(&stru_4B776C8);
      (*(*off_4B73580 + 0x10i64))(off_4B73580, v582);
      LeaveCriticalSection(&stru_4B776C8);
    }
    *(v963.QuadPart + 0x3328) = 0i64;
  }
  PerformanceCount[0].QuadPart = 0i64;
  if ( data::get_str(v486, "eventThrustReverse", PerformanceCount) && (*(v963.QuadPart + 0x1058) & 0x100) != 0 )
  {
    EnterCriticalSection(&stru_4B776C8);
    v583 = (*(*off_4B73580 + 8i64))(off_4B73580);
    v584 = &byte_4B73348;
    if ( v583 )
      v584 = v583;
    LeaveCriticalSection(&stru_4B776C8);
    sub_1665C80(v584, 1);
    *(v963.QuadPart + 0x3328) = v584;
  }
  v585 = *(v963.QuadPart + 0x3330);
  if ( v585 )
  {
    sub_1665AB0(*(v963.QuadPart + 0x3330));
    if ( v585 != &byte_4B73348 )
    {
      EnterCriticalSection(&stru_4B776C8);
      (*(*off_4B73580 + 0x10i64))(off_4B73580, v585);
      LeaveCriticalSection(&stru_4B776C8);
    }
    *(v963.QuadPart + 0x3330) = 0i64;
  }
  PerformanceCount[0].QuadPart = 0i64;
  if ( data::get_str(v486, "nozzleMoveSfx", PerformanceCount) && (*(v963.QuadPart + 0x1058) & 0x100) != 0 )
  {
    EnterCriticalSection(&stru_4B776C8);
    v586 = (*(*off_4B73580 + 8i64))(off_4B73580);
    v587 = &byte_4B73348;
    if ( v586 )
      v587 = v586;
    LeaveCriticalSection(&stru_4B776C8);
    sub_1665C80(v587, 1);
    *(v963.QuadPart + 0x3330) = v587;
    *(v963.QuadPart + 0x335C) = get_param_idx(v587, "intensity", 0i64);
    PerformanceCount[0].LowPart = 0x3F000000;
    *(v963.QuadPart + 0x3360) = data::set_real(v486, "nozzleAngleThreshold", PerformanceCount);
  }
  v588 = *(v963.QuadPart + 0x3338);
  if ( v588 )
  {
    sub_1665AB0(*(v963.QuadPart + 0x3338));
    if ( v588 != &byte_4B73348 )
    {
      EnterCriticalSection(&stru_4B776C8);
      (*(*off_4B73580 + 0x10i64))(off_4B73580, v588);
      LeaveCriticalSection(&stru_4B776C8);
    }
    *(v963.QuadPart + 0x3338) = 0i64;
  }
  PerformanceCount[0].QuadPart = 0i64;
  if ( data::get_str(v486, "eventNozzleTurn", PerformanceCount) && (*(v963.QuadPart + 0x1058) & 0x100) != 0 )
  {
    EnterCriticalSection(&stru_4B776C8);
    v592 = (*(*off_4B73580 + 8i64))(off_4B73580);
    v593 = &byte_4B73348;
    if ( v592 )
      v593 = v592;
    LeaveCriticalSection(&stru_4B776C8);
    sub_1665C80(v593, 1);
    *(v963.QuadPart + 0x3338) = v593;
  }
  if ( *(v963.QuadPart + 0x26C0) >= 2u )
    (*(*off_4B678C0 + 0x40i64))(off_4B678C0, *(v963.QuadPart + 0x26C8));
  *(v963.QuadPart + 0x26C0) = 0;
  v594 = *v959;
  LODWORD(v595) = 0xFFFFFFFF;
  v596 = 0xFFFFFFFF;
  if ( *v959 )
  {
    v597 = data::get_name_id("engineExhaustFx", 0xFui64);
    v598 = *(v594 + 0x50);
    if ( v598 )
    {
      v599 = *(v598 + 0x20);
      if ( !*(v594 + 0x20) )
        goto LABEL_818;
LABEL_816:
      v600 = data::get_name_id(v594, "engineExhaustFx", 0xFui64, v597);
      if ( v600 >= 0 )
      {
        v596 = v599 + v600;
        goto LABEL_820;
      }
    }
    else
    {
      v599 = 0;
      if ( *(v594 + 0x20) )
        goto LABEL_816;
    }
LABEL_818:
    v596 = 0xFFFFFFFF;
    if ( v599 )
      v596 = data::get_name_id(*(v594 + 0x50), "engineExhaustFx", 0xFui64, v597);
  }
LABEL_820:
  v601 = (v963.QuadPart + 0x26C4);
  v602 = v596 + 1;
  while ( 2 )
  {
    v603 = *(v959 + 4);
    LODWORD(v595) = v595 + 1;
    if ( v603 == 0xFFFFFFFF )
    {
      v604 = *(v959 + 7);
      if ( v595 >= v604 )
        break;
      v589 = *v959[3] + *(v959[3] + 8) - 8 * v604;
      v595 = v595;
      while ( (*(*(v589 + 8 * v595) + 8i64) & 0x3FFFFFFF) != v602 )
      {
        if ( v604 == ++v595 )
          goto LABEL_858;
      }
    }
    else
    {
      LOWORD(v604) = *(v959 + 7);
      v589 = v604;
      if ( v595 + v603 >= v603 + v604 )
        break;
      while ( (*(*(*v959 + 0x5C) + *v959 + 0x90 + 0x20i64 * (v603 + v595) + 8) & 0x3FFFFFFF) != v602 )
      {
        LODWORD(v595) = v595 + 1;
        if ( v604 == v595 )
          goto LABEL_858;
      }
    }
    if ( v595 >= 0 )
    {
      if ( v603 == 0xFFFFFFFF )
      {
        if ( v595 < v604 )
        {
          v605 = *(*v959[3] + *(v959[3] + 8) + 8 * (v595 - v604));
          goto LABEL_838;
        }
      }
      else if ( v595 < v604 )
      {
        v605 = *v959 + *(*v959 + 0x5C) + 0x20i64 * (v595 + v603) + 0x90;
LABEL_838:
        v972 = v605;
        v606 = *(v359.QuadPart + 0x26C0);
        v607 = *(v359.QuadPart + 0x26C8);
        v608 = v607;
        if ( v606 < 2 )
          v608 = v601;
        *v973 = v601;
        if ( v606 )
        {
          v609 = v606 + 1;
          if ( v606 == 1 )
          {
            v610 = (*(*off_4B678C0 + 0x18i64))(off_4B678C0, 0xCi64 * v609);
            memmove(v610, v608, 0xC * v606);
            *(v359.QuadPart + 0x26C8) = v610;
            *(v359.QuadPart + 0x26C4) = v609;
            v608 = v610;
          }
          else
          {
            v611 = *v601;
            if ( v606 >= v611 )
            {
              v612 = v611 + ((v611 + 1) >> 1);
              if ( v612 <= v609 )
                LODWORD(v612) = v606 + 1;
              *(v359.QuadPart + 0x26C4) = v612;
              v608 = (*(*off_4B678C0 + 0x38i64))(off_4B678C0, v607, 0xCi64 * v612);
              *(v359.QuadPart + 0x26C8) = v608;
            }
          }
        }
        ++*(v359.QuadPart + 0x26C0);
        v613 = 3 * v606;
        *(v608 + v613 + 2) = 0;
        *(v608 + 4 * v613) = 0i64;
        PerformanceCount[0].QuadPart = 0i64;
        v614 = v972;
        v615 = data::get_str(v972, "standard", PerformanceCount);
        v616 = 0xFFFFFFFF;
        v617 = 0xFFFFFFFF;
        if ( v615 )
        {
          v617 = 0xFFFFFFFF;
          if ( *v615 )
            v617 = sub_93E610(v615);
        }
        *(v608 + v613) = v617;
        PerformanceCount[0].QuadPart = 0i64;
        v618 = data::get_str(v614, "afterburner", PerformanceCount);
        if ( v618 && *v618 )
          v616 = sub_93E610(v618);
        *(v608 + v613 + 1) = v616;
        PerformanceCount[0].QuadPart = 0i64;
        v619 = data::get_str(v614, "start", PerformanceCount);
        v620 = 0xFFFFFFFF;
        if ( v619 )
        {
          v601 = *v973;
          if ( *v619 )
            v620 = sub_93E610(v619);
        }
        else
        {
          v601 = *v973;
        }
        *(v608 + v613 + 2) = v620;
        v359 = v963;
        continue;
      }
      v605 = 0i64;
      goto LABEL_838;
    }
    break;
  }
LABEL_858:
  if ( !*(v359.QuadPart + 0x26C0) )
  {
    *(v359.QuadPart + 0x26C0) = 1;
    *(v601 + 2) = 0;
    *v601 = 0i64;
    v636 = *(*(v359.QuadPart + 0x2E68) + 0x3AC8i64);
    if ( *v636 > 0 )
    {
      v637 = *(v636 + 8);
      if ( v637 )
      {
        v638 = **v637;
        if ( v638 <= 6 && (v639 = 0x64, _bittest(&v639, v638)) )
        {
          PerformanceCount[0].QuadPart = 0i64;
          v640 = data::get_str(v959, "standardExhaustFxType", PerformanceCount);
          v641 = 0xFFFFFFFF;
          if ( v640 && *v640 )
            v641 = sub_93E610(v640);
          *v601 = v641;
          PerformanceCount[0].QuadPart = 0i64;
        }
        else
        {
          PerformanceCount[0].QuadPart = 0i64;
          v657 = data::get_str(v959, "standardExhaustFxType", PerformanceCount);
          v658 = 0xFFFFFFFF;
          if ( v657 && *v657 )
            v658 = sub_93E610(v657);
          *v601 = v658;
          PerformanceCount[0].QuadPart = "motor_exhaust";
        }
        v659 = data::get_str(v959, "afterburnerExhaustFxType", PerformanceCount);
        v660 = 0xFFFFFFFF;
        v661 = 0xFFFFFFFF;
        if ( v659 )
        {
          v661 = 0xFFFFFFFF;
          if ( *v659 )
            v661 = sub_93E610(v659);
        }
        *(v359.QuadPart + 0x26C8) = v661;
        PerformanceCount[0].QuadPart = 0i64;
        v662 = data::get_str(v959, "startExhaustFxType", PerformanceCount);
        if ( v662 && *v662 )
          v660 = sub_93E610(v662);
        *(v359.QuadPart + 0x26CC) = v660;
      }
    }
  }
  v621 = (v359.QuadPart + 0x26D0);
  PerformanceCount[0].QuadPart = v359.QuadPart + 0x26D0;
  v622 = 0i64;
  for ( n = 0x10i64; n; --n )
    *v621++ = 0;
  do
  {
    v624 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v624[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(v624, v589, v590, v591);
    v625 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    PerformanceCount[0].QuadPart = 0i64;
    PerformanceCount[1] = v625;
    *&v965 = 0i64;
    v976 = v622;
    LODWORD(v975) = 2;
    ctor_vprintf(PerformanceCount, 0x20i64, "engineExhaustFxMap%d", &v975, 1);
    v626 = PerformanceCount[0];
    v627 = PerformanceCount[0].QuadPart;
    if ( !v965 )
      v627 = &szFile;
    LODWORD(v975) = 0;
    *(v359.QuadPart + 4 * v622 + 0x26D0) = data::set_int(v959, v627, &v975);
    if ( v626.QuadPart )
      (*(*PerformanceCount[1].QuadPart + 0x40i64))(PerformanceCount[1], v626);
    ++v622;
  }
  while ( v622 != 0x10 );
  LOBYTE(PerformanceCount[0].LowPart) = 0;
  *(v359.QuadPart + 0x271C) = data::get_bool(v959, "disableExhaustFxIfContrailIsActive", PerformanceCount);
  v628 = get_misc_str("eventAirBrake");
  if ( *(v359.QuadPart + 0x10B8) && *(*(v359.QuadPart + 0x2E68) + 0x5695i64) && !*(v359.QuadPart + 0x32E0) && *v628 )
  {
    EnterCriticalSection(&stru_4B776C8);
    v629 = (*(*off_4B73580 + 8i64))(off_4B73580);
    v630 = &byte_4B73348;
    if ( v629 )
      v630 = v629;
    LeaveCriticalSection(&stru_4B776C8);
    sub_1665C80(v630, 1);
    *(v359.QuadPart + 0x32E0) = v630;
  }
  v631 = *v959;
  v632 = 0xFFFFFFFF;
  if ( !*v959 )
    goto LABEL_895;
  v633 = data::get_name_id("gearSinkRangeLR", 0xFui64);
  v634 = *(v631 + 0x50);
  if ( v634 )
  {
    v635 = *(v634 + 0x20);
    if ( !*(v631 + 0x20) )
    {
LABEL_892:
      if ( v635 )
      {
        v643 = data::get_name_id(*(v631 + 0x50), "gearSinkRangeLR", 0xFui64, v633);
        goto LABEL_894;
      }
      goto LABEL_895;
    }
  }
  else
  {
    v635 = 0;
    if ( !*(v631 + 0x20) )
      goto LABEL_892;
  }
  v642 = data::get_name_id(v631, "gearSinkRangeLR", 0xFui64, v633);
  if ( v642 < 0 )
    goto LABEL_892;
  v643 = v635 + v642;
LABEL_894:
  v632 = v643;
LABEL_895:
  v644 = *(v959 + 5);
  v645 = *(v959 + 6);
  v646 = v645 == 0 || v632 < 0;
  if ( v644 != 0xFFFFFFFFi64 )
  {
    if ( !v646 )
    {
      v647 = *v959 + v644;
      v648 = (v647 + 0x90);
      v649 = v647 + 8 * v645 + 0x90;
      v650 = (v647 + 0x90);
      while ( (*v650 & 0xFFFFFF) != v632 )
      {
        v650 += 8;
        if ( v650 >= v649 )
          goto LABEL_939;
      }
      goto LABEL_906;
    }
    goto LABEL_939;
  }
  if ( v646 )
    goto LABEL_939;
  v648 = *v959[3];
  v651 = &v648[8 * v645];
  v650 = v648;
  while ( (*v650 & 0xFFFFFF) != v632 )
  {
    v650 += 8;
    if ( v650 >= v651 )
      goto LABEL_939;
  }
LABEL_906:
  if ( ((v650 - v648) & 0x400000000i64) != 0 )
  {
LABEL_939:
    *(v359.QuadPart + 0x2E04) = 0;
  }
  else
  {
    v652 = *v959;
    v653 = 0xFFFFFFFF;
    if ( *v959 )
    {
      v654 = data::get_name_id("gearSinkRangeC", 0xEui64);
      v655 = *(v652 + 0x50);
      if ( v655 )
        v656 = *(v655 + 0x20);
      else
        v656 = 0;
      if ( *(v652 + 0x20) )
      {
        v663 = data::get_name_id(v652, "gearSinkRangeC", 0xEui64, v654);
        if ( v663 >= 0 )
        {
          v664 = v656 + v663;
          goto LABEL_928;
        }
      }
      if ( v656 )
      {
        v664 = data::get_name_id(*(v652 + 0x50), "gearSinkRangeC", 0xEui64, v654);
LABEL_928:
        v653 = v664;
      }
    }
    v665 = *(v959 + 5);
    v666 = *(v959 + 6);
    v667 = v666 == 0 || v653 < 0;
    if ( v665 == 0xFFFFFFFFi64 )
    {
      if ( v667 )
        goto LABEL_939;
      v669 = *v959[3];
      v672 = &v669[8 * v666];
      v671 = v669;
      while ( (*v671 & 0xFFFFFF) != v653 )
      {
        v671 += 8;
        if ( v671 >= v672 )
          goto LABEL_939;
      }
    }
    else
    {
      if ( v667 )
        goto LABEL_939;
      v668 = *v959 + v665;
      v669 = (v668 + 0x90);
      v670 = v668 + 8 * v666 + 0x90;
      v671 = (v668 + 0x90);
      while ( (*v671 & 0xFFFFFF) != v653 )
      {
        v671 += 8;
        if ( v671 >= v670 )
          goto LABEL_939;
      }
    }
    v716 = (v671 - v669) & 0x400000000i64;
    *(v359.QuadPart + 0x2E04) = (v716 >> 0x22) ^ 1;
    if ( !v716 )
    {
      PerformanceCount[0].LowPart = 0;
      *(v359.QuadPart + 0x2DFC) = data::set_real(v959, "gearSinkRangeLR", PerformanceCount);
      PerformanceCount[0].LowPart = 0;
      *(v359.QuadPart + 0x2E00) = data::set_real(v959, "gearSinkRangeC", PerformanceCount);
    }
  }
  PerformanceCount[0].LowPart = 0x43480000;
  *(v359.QuadPart + 0x2D10) = data::set_real(v959, "speedToRetractTurretsKMH", PerformanceCount);
  LOBYTE(PerformanceCount[0].LowPart) = 0;
  *(v359.QuadPart + 0x2B14) = data::get_bool(v959, "canTakeoffWithoutGear", PerformanceCount);
  LOBYTE(PerformanceCount[0].LowPart) = (*(v359.QuadPart + 0x1080) & 0x8000000) != 0;
  *(v359.QuadPart + 0xFF8) = data::get_bool(v959, "forceDisableGunners", PerformanceCount);
  PerformanceCount[0].LowPart = 1;
  PerformanceCount[0].LowPart = data::set_int(v959, "numJetFlamesToEngine", PerformanceCount);
  *(v359.QuadPart + 0x2AB8) = data::set_int(v959, "numJetFlamesPerNozzle", PerformanceCount);
  v673 = *(v359.QuadPart + 0x3AC0);
  v674 = *(v359.QuadPart + 0x3AC8);
  *(v359.QuadPart + 0x3AC0) = 0i64;
  v675 = *(v359.QuadPart + 0x3AD0);
  *(v359.QuadPart + 0x3AD0) = 0i64;
  if ( v673 )
  {
    if ( v675 )
    {
      v676 = 0x48 * v675;
      v677 = v673;
      do
      {
        sub_3A3F90(v677);
        v677 += 0x48i64;
        v676 -= 0x48i64;
      }
      while ( v676 );
    }
    (*(*v674 + 0x40i64))(v674, v673);
  }
  *(v359.QuadPart + 0x3B14) = 0xFFFFFFFF;
  *(v359.QuadPart + 0x3B00) = 0xFFFFFFFF;
  v678 = *(*(v359.QuadPart + 0x11D0) + 0x300i64);
  v679 = *(v678 + 0x78);
  if ( *(v678 + 0x78) )
  {
    v680 = *(v678 + 0x70);
    v681 = 0i64;
    do
    {
      v683 = *(v680 + 8 * v681);
      if ( v683 && (*(*v683 + 0x180i64))(*(v680 + 8 * v681)) )
      {
        v685 = &szFile;
        if ( *(v683 + 0x460) )
          v685 = *(v683 + 0x450);
        if ( *v685 )
        {
          v686 = *(v359.QuadPart + 0x9E0);
          if ( v686 )
          {
            sub_1802C10(v686, v685, v684, 0i64);
            v682 = v687;
            if ( *(v359.QuadPart + 0x1878) )
            {
              v688 = 0i64;
              do
              {
                sub_1802820(
                  *(*(v359.QuadPart + 0x1870) + 8 * v688),
                  v685,
                  *(*(*(v359.QuadPart + 0x11A0) + 0xA0i64) + 8 * v688),
                  *(v359.QuadPart + 0x9E0));
                ++v688;
              }
              while ( v688 < *(v359.QuadPart + 0x1878) );
            }
          }
          else
          {
            v682 = 0xFFFFFFFF;
          }
          *(v683 + 0x44C) = v682;
        }
      }
      ++v681;
    }
    while ( v681 != v679 );
  }
  v689 = *v959;
  v690 = 0xFFFFFFFF;
  if ( !*v959 )
    goto LABEL_970;
  v691 = data::get_name_id("parachutes", 0xAui64);
  v692 = *(v689 + 0x50);
  if ( v692 )
  {
    v693 = *(v692 + 0x20);
    if ( !*(v689 + 0x20) )
    {
LABEL_967:
      if ( v693 )
      {
        v695 = data::get_name_id(*(v689 + 0x50), "parachutes", 0xAui64, v691);
        goto LABEL_969;
      }
      goto LABEL_970;
    }
  }
  else
  {
    v693 = 0;
    if ( !*(v689 + 0x20) )
      goto LABEL_967;
  }
  v694 = data::get_name_id(v689, "parachutes", 0xAui64, v691);
  if ( v694 < 0 )
    goto LABEL_967;
  v695 = v693 + v694;
LABEL_969:
  v690 = v695;
LABEL_970:
  v696 = *(v959 + 4);
  if ( v696 == 0xFFFFFFFF )
  {
    v702 = *(v959 + 7);
    if ( !*(v959 + 7) )
      goto LABEL_1115;
    v703 = v690 + 1;
    v704 = v959[3];
    v705 = *v704;
    v706 = *(v704 + 8) - 8 * v702;
    v707 = 0;
    while ( (*(*(v705 + v706) + 8i64) & 0x3FFFFFFF) != v703 )
    {
      ++v707;
      v706 += 8i64;
      if ( v702 == v707 )
        goto LABEL_1115;
    }
    if ( v707 >= v702 )
      goto LABEL_1115;
    v708 = *(v705 + v706);
    if ( !v708 )
      goto LABEL_1115;
LABEL_985:
    PerformanceCount[0].QuadPart = 0x100000001i64;
    sub_145CE20(v708, &v986, "emitterRange", PerformanceCount);
    v709 = v987 - v986;
    v710 = v987 - v986 + 1;
    v711 = *(v359.QuadPart + 0x3AD0);
    v977 = v710;
    if ( v711 >= v710 )
    {
      if ( v711 != v710 )
      {
        v713 = 0x48i64 * v977;
        v714 = v713 + *(v359.QuadPart + 0x3AC0);
        v715 = 0x48 * v711 - v713;
        do
        {
          sub_3A3F90(v714);
          v714 += 0x48i64;
          v715 -= 0x48i64;
        }
        while ( v715 );
      }
    }
    else if ( *(v359.QuadPart + 0x3AD4) < v710 )
    {
      if ( v711 )
      {
        if ( v711 > 0x37 )
          v712 = ((v711 + 1) >> 1) + v711;
        else
          v712 = 2 * v711;
      }
      else
      {
        v712 = 1i64;
      }
      if ( v712 <= v977 )
        v712 = v977;
      v732 = *(v359.QuadPart + 0x3AC0);
      if ( !v732
        || (0x48 * v712) < 0x1000
        || !(*(**(v359.QuadPart + 0x3AC8) + 0x30i64))(*(v359.QuadPart + 0x3AC8), v732, 0x48 * v712) )
      {
        v733 = (*(**(v359.QuadPart + 0x3AC8) + 0x18i64))(*(v359.QuadPart + 0x3AC8), 0x48 * v712);
        v734 = *(v359.QuadPart + 0x3AC0);
        v735 = *(v359.QuadPart + 0x3AD0);
        v736 = v734 + 0x48 * v735;
        if ( *(v359.QuadPart + 0x3AD0) )
        {
          v737 = 0x48 * v735;
          v738 = 0i64;
          do
          {
            *(v733 + v738 + 0x40) = *(v734 + v738 + 0x40);
            v739 = *(v734 + v738);
            v740 = *(v734 + v738 + 0x10);
            v741 = *(v734 + v738 + 0x20);
            *(v733 + v738 + 0x30) = *(v734 + v738 + 0x30);
            *(v733 + v738 + 0x20) = v741;
            *(v733 + v738 + 0x10) = v740;
            *(v733 + v738) = v739;
            v738 += 0x48i64;
          }
          while ( v737 != v738 );
          v734 = *(v359.QuadPart + 0x3AC0);
        }
        if ( v734 != v736 )
        {
          do
          {
            sub_3A3F90(v734);
            v734 += 0x48i64;
          }
          while ( v734 != v736 );
          v736 = *(v359.QuadPart + 0x3AC0);
        }
        if ( v736 )
          (*(**(v359.QuadPart + 0x3AC8) + 0x40i64))(*(v359.QuadPart + 0x3AC8), v736);
        *(v359.QuadPart + 0x3AC0) = v733;
      }
      *(v359.QuadPart + 0x3AD4) = v712;
    }
    v742 = v977;
    *(v359.QuadPart + 0x3AD0) = v977;
    v743 = 0i64;
    memset(*(v359.QuadPart + 0x3AC0), 0, (0x48 * v742));
    PerformanceCount[0].QuadPart = 0i64;
    v744 = data::get_str(v708, "chuteModel", PerformanceCount);
    if ( v744 )
      v743 = sub_16D6220(v744);
    PerformanceCount[0].QuadPart = 0i64;
    v745 = data::get_str(v708, "chuteFlapVarName", PerformanceCount);
    if ( v745 )
    {
      v747 = v745;
      if ( *v745 )
      {
        v748 = *(v359.QuadPart + 0x9E0);
        if ( v748 )
        {
          sub_1802C10(v748, v745, v746, 0i64);
          v750 = v749;
          if ( *(v359.QuadPart + 0x1878) )
          {
            v751 = 0i64;
            do
            {
              sub_1802820(
                *(*(v359.QuadPart + 0x1870) + 8 * v751),
                v747,
                *(*(*(v359.QuadPart + 0x11A0) + 0xA0i64) + 8 * v751),
                *(v359.QuadPart + 0x9E0));
              ++v751;
            }
            while ( v751 < *(v359.QuadPart + 0x1878) );
          }
        }
        else
        {
          v750 = 0xFFFFFFFF;
        }
        *(v359.QuadPart + 0x3B00) = v750;
      }
    }
    v961 = **(*(v359.QuadPart + 0x11A0) + 0x110i64);
    v59 = *(v708 + 0x14) == 0xFFFFFFFF;
    v984 = v743;
    if ( v59 )
      v752 = sub_14604F0(v708, "emitterName", v746);
    else
      v752 = sub_14606A0(v708, "emitterName", v746);
    *v973 = v752;
    PerformanceCount[0].QuadPart = 0i64;
    v974 = data::get_str(v708, "chuteAnimVarName", PerformanceCount);
    PerformanceCount[0].QuadPart = 0i64;
    v996 = data::get_str(v708, "chuteTimeScaleParam", PerformanceCount);
    PerformanceCount[0].LowPart = 0x3DCCCCCD;
    *(v359.QuadPart + 0x3B0C) = data::set_real(v708, "chuteFallSpeed", PerformanceCount);
    v753 = v709 < 0;
    v754 = v977;
    if ( v753 )
    {
LABEL_1109:
      v811 = v984;
      if ( v984 )
      {
        EnterCriticalSection(&stru_4B73EF0);
        if ( qword_4B73EA8 )
        {
          v812 = 0i64;
          do
          {
            if ( (*(**(qword_4B73E98 + v812) + 0x38i64))(*(qword_4B73E98 + v812), v811) )
              break;
            ++v812;
          }
          while ( v812 < qword_4B73EA8 );
        }
        LeaveCriticalSection(&stru_4B73EF0);
      }
      goto LABEL_1115;
    }
    LOBYTE(v972) = v984 != 0 && v974 != 0i64;
    v755 = SIGN_BIT_MASK;
    v756 = xmmword_44A01E0;
    v757 = LODWORD(Y);
    v758 = xmmword_44A0AE0;
    v759 = unk_44A4110;
    v760 = 0i64;
    while ( 1 )
    {
      sub_17A810(PerformanceCount, 0x40, v973[0]);
      HIBYTE(v967) = 0;
      v769 = *(v961 + 8);
      if ( v769 < 0 )
        LOWORD(v769) = 0xFFFF;
      if ( v769 )
      {
        v770 = v769;
        v771 = *(v961 + 0x40);
        for ( ii = 0i64; ii != v770; ++ii )
        {
          v773 = *(v771 + 2 * ii);
          v774 = *(v771 + v773);
          v775 = *(&dword_4B71B50 + v774);
          v776 = *(&dword_4B71B50 + LOBYTE(PerformanceCount[0].LowPart));
          if ( v775 == v776 )
          {
            if ( !v774 || !LOBYTE(PerformanceCount[0].LowPart) )
            {
LABEL_1071:
              if ( ii != 0xFFFF )
              {
                v781 = *(v359.QuadPart + 0x3AC0);
                v782 = 9 * v760;
                v783 = *(v961 + 0x10);
                v784 = ii << 6;
                v785 = *(v783 + v784 + 0x10);
                v786 = *(v783 + v784 + 0x20);
                v787 = *(v783 + v784 + 0x30);
                *(v781 + 8 * v782 + 8) = _mm_insert_ps(*(v783 + v784), v785, 0x30);
                *(v781 + 8 * v782 + 0x18) = _mm_shuffle_ps(v785, v786, 0x49);
                *(v781 + 8 * v782 + 0x28) = _mm_shuffle_ps(_mm_shuffle_ps(v786, v787, 2), v787, 0x98);
              }
              break;
            }
            v777 = v771 + v773;
            v778 = 1i64;
            while ( 1 )
            {
              v779 = *(v777 + v778);
              v775 = *(&dword_4B71B50 + v779);
              v780 = *(&PerformanceCount[0].LowPart + v778);
              v776 = *(&dword_4B71B50 + v780);
              if ( v775 != v776 )
                break;
              if ( v779 )
              {
                ++v778;
                if ( v780 )
                  continue;
              }
              goto LABEL_1071;
            }
          }
          if ( v775 == v776 )
            goto LABEL_1071;
        }
      }
      v788 = *(v359.QuadPart + 0x3AC0);
      v789 = 9 * v760;
      v790 = *(v788 + 0x48 * v760 + 0x28) ^ v755;
      v791 = *(v788 + 0x48 * v760 + 0x24) ^ v755;
      *(v788 + 8 * v789 + 0x20) = *(v788 + 0x48 * v760 + 0x20) ^ v755;
      *(v788 + 8 * v789 + 0x24) = v791;
      *(v788 + 8 * v789 + 0x28) = v790;
      if ( !v972 || !*v974 )
        goto LABEL_1055;
      v792 = (*(*off_4B678C0 + 0x18i64))(off_4B678C0, 0x260i64);
      *v792 = 0i64;
      *(v792 + 0x10) = 0i64;
      *(v792 + 0x20) = 0i64;
      *(v792 + 0x30) = 0i64;
      *(v792 + 0x40) = 0i64;
      *(v792 + 0x60) = 0xFFFFFFFF;
      *(v792 + 0x50) = 0i64;
      *(v792 + 0x64) = 0i64;
      *(v792 + 0x74) = 0;
      *(v792 + 0x80) = 0i64;
      *(v792 + 0x90) = 0i64;
      v793 = off_4B678C0;
      *(v792 + 0xA0) = 0i64;
      *(v792 + 0xA8) = v793;
      *(v792 + 0xB0) = 0i64;
      *(v792 + 0xC0) = v793;
      *(v792 + 0xC8) = 0i64;
      *(v792 + 0x106) = 0x2F39;
      *(v792 + 0x108) = 0i64;
      *(v792 + 0x118) = 0;
      *(v792 + 0x140) = 0i64;
      *(v792 + 0x130) = 0i64;
      *(v792 + 0x120) = 0i64;
      *(v792 + 0x150) = 0i64;
      *(v792 + 0x158) = v793;
      *(v792 + 0xF0) = 0i64;
      *(v792 + 0x180) = 0i64;
      *(v792 + 0x170) = 0i64;
      *(v792 + 0x160) = 0i64;
      *(v792 + 0x190) = 0i64;
      *(v792 + 0xE0) = v756;
      *(v792 + 0xD0) = v756;
      *(v792 + 0xEC) = 0xFFFFFFFE;
      *(v792 + 0x104) = 0xFFFF;
      *(v792 + 0x100) = 0;
      *(v792 + 0x1D0) = 0i64;
      *(v792 + 0x1E0) = 0i64;
      *(v792 + 0x1EC) = 0i64;
      *(v792 + 0x1FC) = 0x6B81;
      *(v792 + 0x1A0) = v757;
      *(v792 + 0x1B0) = v758;
      *(v792 + 0x1C0) = v759;
      *(v792 + 0x230) = 0i64;
      *(v792 + 0x240) = 0i64;
      *(v792 + 0x250) = 0i64;
      LOBYTE(v794) = 1;
      sub_243420(v984, v792, v794, 0i64);
      *(*(v359.QuadPart + 0x3AC0) + 0x48 * v760) = v792;
      v795 = *(v359.QuadPart + 0x3AC0);
      v985 = 0x48 * v760;
      v796 = *(v795 + 0x48 * v760 + 0x38);
      if ( v796 )
      {
        v797 = v796[4];
        if ( v797 )
        {
          _InterlockedAdd(&dword_4B6788C, -((j__msize(v796[4]) + 0xF) >> 4));
          _InterlockedDecrement(&dword_4B67890);
          free(v797);
        }
        v798 = *v796;
        if ( *v796 )
        {
          _InterlockedAdd(&dword_4B6788C, -((j__msize(*v796) + 0xF) >> 4));
          _InterlockedDecrement(&dword_4B67890);
          free(v798);
        }
        _InterlockedAdd(&dword_4B6788C, -((j__msize(v796) + 0xF) >> 4));
        _InterlockedDecrement(&dword_4B67890);
        free(v796);
        *(*(v359.QuadPart + 0x3AC0) + 0x48 * v760 + 0x38) = 0i64;
        v795 = *(v359.QuadPart + 0x3AC0);
      }
      v799 = *(v795 + 0x48 * v760 + 0x40);
      if ( v799 )
      {
        v800 = *(v799 + 0x28);
        if ( v800 )
        {
          _InterlockedAdd(&dword_4B6788C, -((j__msize(*(v799 + 0x28)) + 0xF) >> 4));
          _InterlockedDecrement(&dword_4B67890);
          free(v800);
        }
        v801 = *(v799 + 0x10);
        v802 = (*(v799 + 0x18) + *(v799 + 0x1D));
        if ( v802 )
        {
          v995 = v799;
          v803 = 0x28 * v802;
          v804 = 0i64;
          do
          {
            if ( v801[v804] >= 0 )
            {
              if ( v801[v804 + 0x1F] < 0 )
              {
                v805 = *&v801[v804 + 8];
                if ( v805 )
                {
                  _InterlockedAdd(&dword_4B6788C, -((j__msize(*&v801[v804 + 8]) + 0xF) >> 4));
                  _InterlockedDecrement(&dword_4B67890);
                  free(v805);
                }
              }
              v801[v804] = 0xFF;
            }
            v804 += 0x28i64;
          }
          while ( v803 != v804 );
          v799 = v995;
          v801 = *(v995 + 0x10);
          v359 = v963;
        }
        *(v799 + 0x24) = 0;
        if ( v801 != &unk_44AACA0 && v801 )
        {
          _InterlockedAdd(&dword_4B6788C, -((j__msize(v801) + 0xF) >> 4));
          _InterlockedDecrement(&dword_4B67890);
          free(v801);
        }
        v806 = *v799;
        if ( *v799 )
        {
          _InterlockedAdd(&dword_4B6788C, -((j__msize(*v799) + 0xF) >> 4));
          _InterlockedDecrement(&dword_4B67890);
          free(v806);
        }
        _InterlockedAdd(&dword_4B6788C, -((j__msize(v799) + 0xF) >> 4));
        _InterlockedDecrement(&dword_4B67890);
        free(v799);
        *(*(v359.QuadPart + 0x3AC0) + 0x48 * v760 + 0x40) = 0i64;
        v795 = *(v359.QuadPart + 0x3AC0);
      }
      v807 = j__malloc_base(0x48ui64);
      if ( !v807 )
        break;
LABEL_1104:
      _InterlockedAdd(&dword_4B6788C, (j__msize(v807) + 0xF) >> 4);
      _InterlockedIncrement(&dword_4B67890);
      *v807 = 0i64;
      *(v807 + 2) = &unk_44AACA0;
      *(v807 + 6) = 0;
      *(v807 + 0x1D) = 3;
      *(v807 + 8) = 0x3F000000;
      *(v807 + 0x24) = 0i64;
      *(v807 + 0x34) = 0i64;
      *(v807 + 0x11) = 0;
      *(v795 + 0x48 * v760 + 0x40) = v807;
      v809 = j__malloc_base(0x30ui64);
      if ( v809 )
        goto LABEL_1054;
      do
      {
        if ( !off_4B678A0 || !off_4B678A0(0x30i64) )
        {
          v976 = 0x30i64;
          goto LABEL_1313;
        }
        v810 = j__malloc_base(0x30ui64);
      }
      while ( !v810 );
      v809 = v810;
LABEL_1054:
      _InterlockedAdd(&dword_4B6788C, (j__msize(v809) + 0xF) >> 4);
      _InterlockedIncrement(&dword_4B67890);
      v809[2] = 0i64;
      v809[1] = 0i64;
      *v809 = 0i64;
      v761 = v985;
      *(*(v359.QuadPart + 0x3AC0) + v985 + 0x38) = v809;
      sub_1802350(*(*(v359.QuadPart + 0x3AC0) + v761 + 0x38), v792, *(*(v359.QuadPart + 0x3AC0) + v761 + 0x40));
      v762 = v974;
      sub_1802C10(*(*(v359.QuadPart + 0x3AC0) + v761 + 0x40), v974, v763, 0i64);
      *(v359.QuadPart + 0x3B04) = v764;
      v765 = v996;
      sub_1802C10(*(*(v359.QuadPart + 0x3AC0) + v761 + 0x40), v996, v766, 0i64);
      *(v359.QuadPart + 0x3B08) = v767;
      sub_1802820(*(*(v359.QuadPart + 0x3AC0) + v761 + 0x38), v762, v792, *(*(v359.QuadPart + 0x3AC0) + v761 + 0x40));
      sub_1802820(*(*(v359.QuadPart + 0x3AC0) + v761 + 0x38), v765, v792, *(*(v359.QuadPart + 0x3AC0) + v761 + 0x40));
      v768 = *(v359.QuadPart + 0x3AC0);
      *(v359.QuadPart + 0x3B60) = fmaxf(
                                    fsqrt(
                                      (*(v768 + v761 + 0x34) * *(v768 + v761 + 0x34))
                                    + ((*(v768 + v761 + 0x30) * *(v768 + v761 + 0x30))
                                     + (*(v768 + v761 + 0x2C) * *(v768 + v761 + 0x2C))))
                                  + *(v792 + 0x20C),
                                    *(v359.QuadPart + 0x3B60));
      v754 = v977;
LABEL_1055:
      if ( ++v760 == v754 )
        goto LABEL_1109;
    }
    while ( off_4B678A0 && off_4B678A0(0x48i64) )
    {
      v808 = j__malloc_base(0x48ui64);
      if ( v808 )
      {
        v807 = v808;
        goto LABEL_1104;
      }
    }
    v976 = 0x48i64;
LABEL_1313:
    LODWORD(v975) = 2;
    v958 = &v975;
    goto LABEL_1317;
  }
  v697 = *(v959 + 7);
  if ( v696 < (v696 + v697) )
  {
    v698 = v690 + 1;
    v699 = *v959 + *(*v959 + 0x5C) + 0x90;
    v700 = 0;
    while ( 1 )
    {
      v701 = 0x20i64 * (v696 + v700);
      if ( (*(v699 + v701 + 8) & 0x3FFFFFFF) == v698 )
        break;
      if ( v697 == ++v700 )
        goto LABEL_1115;
    }
    if ( v700 < v697 )
    {
      v708 = v701 + v699;
      goto LABEL_985;
    }
  }
LABEL_1115:
  PerformanceCount[0].QuadPart = 0i64;
  v813 = data::get_str(v959, "weaponRetractVar", PerformanceCount);
  if ( v813 )
  {
    v815 = v813;
    if ( *v813 )
    {
      v816 = *(v359.QuadPart + 0x9E0);
      if ( v816 )
      {
        sub_1802C10(v816, v813, v814, 0i64);
        v818 = v817;
        if ( *(v359.QuadPart + 0x1878) )
        {
          v819 = 0i64;
          do
          {
            sub_1802820(
              *(*(v359.QuadPart + 0x1870) + 8 * v819),
              v815,
              *(*(*(v359.QuadPart + 0x11A0) + 0xA0i64) + 8 * v819),
              *(v359.QuadPart + 0x9E0));
            ++v819;
          }
          while ( v819 < *(v359.QuadPart + 0x1878) );
        }
      }
      else
      {
        v818 = 0xFFFFFFFF;
      }
      *(v359.QuadPart + 0x3B14) = v818;
    }
  }
  v820 = *v959;
  v821 = 0xFFFFFFFF;
  if ( !*v959 )
    goto LABEL_1134;
  v822 = data::get_name_id("nightVision", 0xBui64);
  v823 = *(v820 + 0x50);
  if ( v823 )
  {
    v824 = *(v823 + 0x20);
    if ( !*(v820 + 0x20) )
    {
LABEL_1131:
      if ( v824 )
      {
        v826 = data::get_name_id(*(v820 + 0x50), "nightVision", 0xBui64, v822);
        goto LABEL_1133;
      }
      goto LABEL_1134;
    }
  }
  else
  {
    v824 = 0;
    if ( !*(v820 + 0x20) )
      goto LABEL_1131;
  }
  v825 = data::get_name_id(v820, "nightVision", 0xBui64, v822);
  if ( v825 < 0 )
    goto LABEL_1131;
  v826 = v824 + v825;
LABEL_1133:
  v821 = v826;
LABEL_1134:
  v827 = *(v959 + 4);
  if ( v827 == 0xFFFFFFFF )
  {
    v834 = *(v959 + 7);
    v829 = 0i64;
    if ( *(v959 + 7) )
    {
      v835 = v821 + 1;
      v836 = v959[3];
      v837 = *v836;
      v838 = *(v836 + 8) - 8 * v834;
      v839 = 0;
      while ( (*(*(v837 + v838) + 8i64) & 0x3FFFFFFF) != v835 )
      {
        ++v839;
        v838 += 8i64;
        if ( v834 == v839 )
          goto LABEL_1151;
      }
      if ( v839 >= v834 )
        v829 = 0i64;
      else
        v829 = *(v837 + v838);
    }
  }
  else
  {
    v828 = *(v959 + 7);
    v829 = 0i64;
    if ( v827 < (v827 + v828) )
    {
      v830 = v821 + 1;
      v831 = *(*v959 + 0x5C) + *v959 + 0x90;
      v832 = 0;
      while ( 1 )
      {
        v833 = 0x20i64 * (v827 + v832);
        if ( (*(v831 + v833 + 8) & 0x3FFFFFFF) == v830 )
          break;
        if ( v828 == ++v832 )
          goto LABEL_1151;
      }
      v840 = v833 + v831;
      v829 = 0i64;
      if ( v832 < v828 )
        v829 = v840;
    }
  }
LABEL_1151:
  v841 = *(v359.QuadPart + 0x11A8);
  if ( !v841 )
    goto LABEL_1178;
  v842 = *v841;
  v843 = 0xFFFFFFFF;
  if ( !*v841 )
    goto LABEL_1162;
  v844 = data::get_name_id("nightVision", 0xBui64);
  v845 = *(v842 + 0x50);
  if ( v845 )
  {
    v846 = *(v845 + 0x20);
    if ( !*(v842 + 0x20) )
    {
LABEL_1159:
      if ( v846 )
      {
        v848 = data::get_name_id(*(v842 + 0x50), "nightVision", 0xBui64, v844);
        goto LABEL_1161;
      }
      goto LABEL_1162;
    }
  }
  else
  {
    v846 = 0;
    if ( !*(v842 + 0x20) )
      goto LABEL_1159;
  }
  v847 = data::get_name_id(v842, "nightVision", 0xBui64, v844);
  if ( v847 < 0 )
    goto LABEL_1159;
  v848 = v846 + v847;
LABEL_1161:
  v843 = v848;
LABEL_1162:
  v849 = *(v841 + 0x10);
  if ( v849 == 0xFFFFFFFF )
  {
    v855 = *(v841 + 0xE);
    if ( !*(v841 + 0xE) )
      goto LABEL_1178;
    v856 = v843 + 1;
    v857 = *(v841 + 0x18);
    v858 = *v857;
    v859 = *(v857 + 2) - 8 * v855;
    v860 = 0;
    while ( (*(*(v858 + v859) + 8i64) & 0x3FFFFFFF) != v856 )
    {
      ++v860;
      v859 += 8i64;
      if ( v855 == v860 )
        goto LABEL_1178;
    }
    if ( v860 >= v855 )
      goto LABEL_1178;
    v861 = *(v858 + v859);
    if ( !v861 )
      goto LABEL_1178;
LABEL_1177:
    if ( !(*(v861 + 0xE) + *(v861 + 0xC)) )
      goto LABEL_1178;
  }
  else
  {
    v850 = *(v841 + 0xE);
    if ( v849 < (v849 + v850) )
    {
      v851 = v843 + 1;
      v852 = *v841 + *(*v841 + 0x5Ci64) + 0x90i64;
      v853 = 0;
      while ( 1 )
      {
        v854 = 0x20i64 * (v849 + v853);
        if ( (*(v852 + v854 + 8) & 0x3FFFFFFF) == v851 )
          break;
        if ( v850 == ++v853 )
          goto LABEL_1178;
      }
      if ( v853 < v850 )
      {
        v861 = v854 + v852;
        goto LABEL_1177;
      }
    }
LABEL_1178:
    v861 = v829;
  }
  v862 = *(v359.QuadPart + 0x2DD8);
  if ( v862 )
  {
    if ( !*(v359.QuadPart + 0x2DC8) )
    {
      v863 = *(v862 + 0x3A00);
      if ( *(v862 + 0x3A00) )
      {
        v864 = *(v862 + 0x39F0);
        v865 = v864 + 0x90 * v863;
        v866 = 0x64;
        do
        {
          if ( *(v864 + 0x65) )
          {
            v867 = *(v864 + 0x10);
            if ( v867 )
            {
              v868 = 0;
              do
              {
                while ( 1 )
                {
                  v869 = *(*v864 + 4i64 * v868);
                  if ( v869 <= 6 )
                  {
                    if ( _bittest(&v866, v869) )
                      break;
                  }
                  if ( ++v868 >= v867 )
                    goto LABEL_1183;
                }
                *(*v864 + 4i64 * v868) = 0;
                v867 = *(v864 + 0x10);
              }
              while ( v868 < v867 );
            }
          }
LABEL_1183:
          v864 += 0x90i64;
        }
        while ( v864 != v865 );
      }
    }
  }
  if ( v861 )
  {
    v870 = v982;
    v962 = sub_3602B0("gunnerIr", v861, v982, 1, 0xE, 4, 0xFFFFFFFF);
    sub_3602B0("gunnerThermal", v861, v870, 2, 0xE, 4, 0xFFFFFFFF);
    sub_3602B0("pilotIr", v861, v870, 1, 2, 0, 0xFFFFFFFF);
    sub_3602B0("pilotThermal", v861, v870, 2, 2, 0, 0xFFFFFFFF);
    v871 = sub_3602B0("sightIr", v861, v870, 1, 0xE, 5, 0xFFFFFFFF);
    v872 = sub_3602B0("sightThermal", v861, v870, 2, 0xE, 5, 0xFFFFFFFF);
    sub_3602B0("virtualIr", v861, v870, 1, 0xC, 0, 0xFFFFFFFF);
    sub_3602B0("virtualThermal", v861, v870, 2, 0xC, 0, 0xFFFFFFFF);
    sub_3602B0("tpsThermal", v861, v870, 2, 1, 0, 0xFFFFFFFF);
    v873 = (v871 | sub_3602B0("sightTVIr", v861, v870, 1, 0xE, 5, 1)) ^ 1;
    v874 = (v872 | sub_3602B0("sightTVThermal", v861, v870, 2, 0xE, 5, 1)) ^ 1;
    sub_3602B0("sightLaserIr", v861, v870, 1, 0xE, 5, 2);
    sub_3602B0("sightLaserThermal", v861, v870, 2, 0xE, 5, 2);
    v875 = sub_3602B0("sightTPodIr", v861, v870, 1, 0xE, 5, 3);
    v876 = ~*(v359.QuadPart + 0x2DC8);
    if ( !v875 )
      v876 = 1;
    v877 = (v876 & v873);
    v878 = sub_3602B0("sightTPodThermal", v861, v870, 2, 0xE, 5, 3);
    v879 = ~*(v359.QuadPart + 0x2DC8);
    if ( v878 )
      v879 = 1;
    v880 = sub_3602B0("sightTPodIr", v861, v870, 1, 0xE, 5, 0);
    v881 = *(v359.QuadPart + 0x2DC8) ^ 1;
    if ( !v880 )
      v881 = 1;
    v882 = sub_3602B0("sightTPodThermal", v861, v870, 2, 0xE, 5, 0);
    v883 = *(v359.QuadPart + 0x2DC8) ^ 1;
    if ( v882 )
      v883 = 1;
    v884 = (v879 & v874 & v883);
    if ( (v881 & v877) != 0 )
    {
      v885 = *(v963.QuadPart + 0x2DD8);
      if ( v885 )
      {
        if ( *(v885 + 0x3A00) )
        {
          v886 = *(v885 + 0x39F0);
          v887 = v886 + 0x90i64 * *(v885 + 0x3A00);
          do
          {
            v888 = *(v886 + 0x10);
            if ( v888 )
            {
              v889 = 0;
              do
              {
                while ( *(*v886 + 4i64 * v889) != 5 )
                {
                  if ( ++v889 >= v888 )
                    goto LABEL_1205;
                }
                v890 = v888 - 1;
                if ( v888 - 1 > v889 )
                {
                  memmove((*v886 + 4i64 * v889), (*v886 + 4i64 * v889 + 4), 4i64 * v888 - (4i64 * v889 + 4));
                  v890 = *(v886 + 0x10) - 1;
                }
                *(v886 + 0x10) = v890;
                v888 = v890;
              }
              while ( v889 < v890 );
            }
LABEL_1205:
            v886 += 0x90i64;
          }
          while ( v886 != v887 );
        }
      }
    }
    v59 = v884 == 0;
    v359 = v963;
    if ( !v59 )
    {
      v891 = *(v963.QuadPart + 0x2DD8);
      if ( v891 )
      {
        if ( *(v891 + 0x3A00) )
        {
          v892 = *(v891 + 0x39F0);
          v893 = v892 + 0x90i64 * *(v891 + 0x3A00);
          do
          {
            v894 = *(v892 + 0x10);
            if ( v894 )
            {
              v895 = 0;
              do
              {
                while ( *(*v892 + 4i64 * v895) != 6 )
                {
                  if ( ++v895 >= v894 )
                    goto LABEL_1218;
                }
                v896 = v894 - 1;
                if ( v894 - 1 > v895 )
                {
                  memmove((*v892 + 4i64 * v895), (*v892 + 4i64 * v895 + 4), 4i64 * v894 - (4i64 * v895 + 4));
                  v896 = *(v892 + 0x10) - 1;
                }
                *(v892 + 0x10) = v896;
                v894 = v896;
              }
              while ( v895 < v896 );
            }
LABEL_1218:
            v892 += 0x90i64;
          }
          while ( v892 != v893 );
        }
      }
    }
    v897 = v997;
    LOBYTE(PerformanceCount[0].LowPart) = (*v997 & 0x8000000) != 0;
    if ( data::get_bool(v959, "needTpsNightVision", PerformanceCount) )
    {
      if ( (((*(v897 + 3) & 8) == 0) & ~v962) == 0 )
      {
        if ( *(HudInfo + 0x412) )
        {
          v898 = off_4A78F98();
          if ( v898 )
          {
            v899 = v898;
            v900 = *v898;
            v901 = 0xFFFFFFFF;
            if ( *v898 )
            {
              v902 = data::get_name_id("tpsNightVision", 0xEui64);
              v903 = *(v900 + 0x50);
              if ( v903 )
                v904 = *(v903 + 0x20);
              else
                v904 = 0;
              if ( *(v900 + 0x20) )
              {
                v917 = data::get_name_id(v900, "tpsNightVision", 0xEui64, v902);
                if ( v917 >= 0 )
                {
                  v918 = v904 + v917;
                  goto LABEL_1263;
                }
              }
              if ( v904 )
              {
                v918 = data::get_name_id(*(v900 + 0x50), "tpsNightVision", 0xEui64, v902);
LABEL_1263:
                v901 = v918;
              }
            }
            v919 = *(v899 + 4);
            if ( v919 != 0xFFFFFFFF )
            {
              v920 = *(v899 + 7);
              if ( v919 >= (v919 + v920) )
                goto LABEL_1305;
              v921 = v901 + 1;
              v922 = 0;
              while ( (*(*v899 + *(*v899 + 0x5C) + 0x90 + 0x20i64 * (v919 + v922) + 8) & 0x3FFFFFFF) != v921 )
              {
                if ( v920 == ++v922 )
                  goto LABEL_1305;
              }
              if ( v922 >= v920 )
                goto LABEL_1305;
LABEL_1279:
              v929 = *(v963.QuadPart + 0x5F8);
              v930 = *(v963.QuadPart + 0x5FC);
              if ( v930 == v929 )
              {
                if ( *(v963.QuadPart + 0x5FC) )
                {
                  if ( v930 > 0x2B )
                    v956 = ((v930 + 1) >> 1) + v930;
                  else
                    v956 = 2 * v930;
                }
                else
                {
                  v956 = 1i64;
                }
                sub_4385E0(v982, v956);
                v359 = v963;
                v929 = *(v963.QuadPart + 0x5F8);
              }
              *(v359.QuadPart + 0x5F8) = v929 + 1;
              v931 = *(v359.QuadPart + 0x5E8) + 0x5Ci64 * v929;
              v932 = *v899;
              v933 = 0xFFFFFFFF;
              if ( *v899 )
              {
                v934 = data::get_name_id("tpsNightVision", 0xEui64);
                v935 = *(v932 + 0x50);
                if ( v935 )
                  v936 = *(v935 + 0x20);
                else
                  v936 = 0;
                if ( *(v932 + 0x20) )
                {
                  v937 = data::get_name_id(v932, "tpsNightVision", 0xEui64, v934);
                  if ( v937 >= 0 )
                  {
                    v938 = v936 + v937;
                    goto LABEL_1289;
                  }
                }
                if ( v936 )
                {
                  v938 = data::get_name_id(*(v932 + 0x50), "tpsNightVision", 0xEui64, v934);
LABEL_1289:
                  v933 = v938;
                }
              }
              v939 = *(v899 + 4);
              if ( v939 == 0xFFFFFFFF )
              {
                v946 = *(v899 + 7);
                LODWORD(v941) = 0;
                if ( !*(v899 + 7) )
                  goto LABEL_1303;
                v947 = v933 + 1;
                v948 = v899[3];
                v949 = *v948;
                v950 = *(v948 + 8) - 8 * v946;
                v951 = 0;
                while ( (*(*(v949 + v950) + 8i64) & 0x3FFFFFFF) != v947 )
                {
                  ++v951;
                  v950 += 8i64;
                  if ( v946 == v951 )
                    goto LABEL_1303;
                }
                v359 = v963;
                if ( v951 >= v946 )
                  LODWORD(v941) = 0;
                else
                  v941 = *(v949 + v950);
              }
              else
              {
                v940 = *(v899 + 7);
                LODWORD(v941) = 0;
                if ( v939 < (v939 + v940) )
                {
                  v942 = v933 + 1;
                  v943 = *(*v899 + 0x5C) + *v899 + 0x90;
                  v944 = 0;
                  while ( 1 )
                  {
                    v945 = 0x20i64 * (v939 + v944);
                    if ( (*(v943 + v945 + 8) & 0x3FFFFFFF) == v942 )
                      break;
                    if ( v940 == ++v944 )
                      goto LABEL_1303;
                  }
                  v952 = v945 + v943;
                  LODWORD(v941) = 0;
                  if ( v944 < v940 )
                    LODWORD(v941) = v952;
                }
LABEL_1303:
                v359 = v963;
              }
              sub_360500(v931, v941, 1, 0xFFFFFFFF, 0, 0xFFFFFFFF);
              *(v359.QuadPart + 0x628) = *(v359.QuadPart + 0x5F8) - 1;
              goto LABEL_1305;
            }
            v923 = *(v899 + 7);
            if ( *(v899 + 7) )
            {
              v924 = v901 + 1;
              v925 = v899[3];
              v926 = *v925;
              v927 = *(v925 + 8) - 8 * v923;
              v928 = 0;
              while ( (*(*(v926 + v927) + 8i64) & 0x3FFFFFFF) != v924 )
              {
                ++v928;
                v927 += 8i64;
                if ( v923 == v928 )
                  goto LABEL_1305;
              }
              if ( v928 < v923 && *(v926 + v927) )
                goto LABEL_1279;
            }
          }
        }
      }
    }
  }
  else
  {
    v905 = *(v359.QuadPart + 0x2DD8);
    if ( v905 && *(v905 + 0x3A00) )
    {
      v906 = *(v905 + 0x39F0);
      v907 = v906 + 0x90i64 * *(v905 + 0x3A00);
      do
      {
        v908 = *(v906 + 0x10);
        if ( v908 )
        {
          v909 = 0;
          do
          {
            while ( *(*v906 + 4i64 * v909) != 6 )
            {
              if ( ++v909 >= v908 )
                goto LABEL_1237;
            }
            v910 = v908 - 1;
            if ( v908 - 1 > v909 )
            {
              memmove((*v906 + 4i64 * v909), (*v906 + 4i64 * v909 + 4), 4i64 * v908 - (4i64 * v909 + 4));
              v910 = *(v906 + 0x10) - 1;
            }
            *(v906 + 0x10) = v910;
            v908 = v910;
          }
          while ( v909 < v910 );
        }
LABEL_1237:
        v906 += 0x90i64;
      }
      while ( v906 != v907 );
      v911 = *(v359.QuadPart + 0x2DD8);
      if ( *(v911 + 0x3A00) )
      {
        v912 = *(v911 + 0x39F0);
        v913 = v912 + 0x90i64 * *(v911 + 0x3A00);
        do
        {
          v914 = *(v912 + 0x10);
          if ( v914 )
          {
            v915 = 0;
            do
            {
              while ( *(*v912 + 4i64 * v915) != 5 )
              {
                if ( ++v915 >= v914 )
                  goto LABEL_1248;
              }
              v916 = v914 - 1;
              if ( v914 - 1 > v915 )
              {
                memmove((*v912 + 4i64 * v915), (*v912 + 4i64 * v915 + 4), 4i64 * v914 - (4i64 * v915 + 4));
                v916 = *(v912 + 0x10) - 1;
              }
              *(v912 + 0x10) = v916;
              v914 = v916;
            }
            while ( v915 < v916 );
          }
LABEL_1248:
          v912 += 0x90i64;
        }
        while ( v912 != v913 );
      }
    }
  }
LABEL_1305:
  PerformanceCount[0].LowPart = 0x461C4000;
  *(v359.QuadPart + 0x1484) = data::set_real(v959, "detectAllyMaxDist", PerformanceCount);
  *(v359.QuadPart + 0x1028) = *(*(v359.QuadPart + 0x11D0) + 0x267i64);
  v953 = *(*(v359.QuadPart + 0x2E68) + 0x4590i64);
  v954 = fminf(fmaxf((*&dword_44A47A0 * v953) + *&dword_449F198, *&dword_44A0258), dword_4487F30)
       * *(*(v359.QuadPart + 0x4160) + 0x360i64);
  v955 = (v953 * *&dword_44A0338) + *&dword_44A02A4;
  *(v359.QuadPart + 0x2B04) = v954;
  *(v359.QuadPart + 0x2B00) = fmaxf(v955, *&dword_44A44C0);
  (sub_3F7760)(v359.QuadPart);
  sub_1458FF0(v983);
  sub_1458FF0(&Block);
  sub_1458FF0(v988);
  return sub_1458FF0(&v991);
}
