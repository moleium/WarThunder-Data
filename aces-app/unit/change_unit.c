__int64 __fastcall change_unit(__int64 a1)
{
  result = byte_4B73208;
  if ( (byte_4B73208 & 1) != 0 )
    return result;
  result = game;
  if ( *(game + 0x6D1) )
    return result;
  result = *(*(a1 + 0x18) + 0x1058i64);
  if ( (result & 0x7000014) == 0 )
    return result;
  v3 = (a1 + 0x18);
  v4 = __rdtsc();
  while ( _InterlockedCompareExchange(&dword_4AD0FE8, 1, 0) )
  {
    Sleep(1u);
    result = byte_4B73208;
    if ( (byte_4B73208 & 1) == 0 )
    {
      result = game;
      if ( !*(game + 0x6D1) )
        continue;
    }
    return result;
  }
  v5 = __rdtsc() - v4;
  if ( HIDWORD(v5) )
    v6 = v5 / dword_4A79A64;
  else
    LODWORD(v6) = v5 / dword_4A79A64;
  if ( v6 >= 0x3E8 )
  {
    v273 = v6 / 0x3E8ui64;
    v272 = 2;
    logmessage_fmt(3u, "AsyncChangeUnitJob::doJob(): waiting for other job took %i", &v272, 1);
  }
  v7 = *v3;
  v8 = *(*v3 + 8) & 0x7FF;
  v273 = "doJob";
  v272 = 1;
  v275 = v7;
  v274 = 5;
  v277 = v8;
  v276 = 2;
  logmessage_fmt(3u, "%s(%p:%d) start", &v272, 3);
  if ( *(game + 0xCD) && *(game + 0x4C8) )
    sub_12627A0();
  sub_489140(&v272, *(*(a1 + 0x18) + 0x6F0i64));
  sub_1606B70(a1 + 0x20, a1 + 0x80, 0i64);
  v260 = 0i64;
  v9 = data::get_str(a1 + 0x20, "subclass", &v260);
  if ( v9 )
  {
    v10 = v9;
    if ( !strcmp(v9, "walker") )
    {
      v11 = 0xB;
    }
    else
    {
      if ( strcmp(v10, "human") )
        goto LABEL_24;
      v11 = 0xF;
    }
    *(a1 + 0x186) = v11;
  }
LABEL_24:
  v191 = (a1 + 0x18);
  *(a1 + 0x40) = 0;
  add_delayed_callback(
    &qword_4B71860,
    0,
    sub_490B70,
    a1,
    "DelayedActionCB @\n\t..\\..\\skyquake\\prog\\main\\changeUnit.cpp(1023):");
  v12 = *(game + 0x5E8);
  if ( *v12 )
    memset(*(v12 + 8), 0, 4i64 * (*(v12 + 4) + 1));
  *v12 = 0;
  v13 = *(v12 + 0x28);
  if ( v13 )
  {
    *(v12 + 0x28) = 0i64;
    _InterlockedAdd(&dword_4B6788C, -((j__msize(v13) + 0xF) >> 4));
    _InterlockedDecrement(&dword_4B67890);
    free(v13);
  }
  *(v12 + 0x30) = 0i64;
  if ( *(v12 + 0x40) )
  {
    v14 = *(v12 + 0x38);
    v15 = 0x10i64 * *(v12 + 0x40);
    v16 = 0i64;
    do
    {
      v17 = *(v14 + v16);
      if ( v17 )
      {
        *(v14 + v16) = 0i64;
        _InterlockedAdd(&dword_4B6788C, -((j__msize(v17) + 0xF) >> 4));
        _InterlockedDecrement(&dword_4B67890);
        free(v17);
      }
      v16 += 0x10i64;
    }
    while ( v15 != v16 );
  }
  *(v12 + 0x40) = 0;
  *(v12 + 0x20) = 0;
  v18 = v278;
  v19 = &szFile;
  if ( !v278 )
    v18 = &szFile;
  v21 = strchr(v18, 0x2F);
  v22 = "structures";
  switch ( *(a1 + 0x186) )
  {
    case 3:
    case 0xB:
    case 0xF:
      v22 = "tankModels";
      if ( !*(a1 + 0x188) )
        v22 = "tracked_vehicles";
      break;
    case 8:
      break;
    default:
      v22 = "ships";
      break;
  }
  v199 = 0i64;
  v201 = 0i64;
  v261 = v22;
  LODWORD(v260) = 1;
  v264 = v18;
  v262 = 1;
  v200 = off_4B678C8;
  ctor_vprintf(&v199, v20, "%s/%s", &v260, 2);
  *v204 = a1 + 0x20;
  if ( v21 )
  {
    v25 = off_4B678C8;
    v26 = v278;
    if ( !v278 )
      v26 = &szFile;
    if ( *v26 )
    {
      v27 = strlen(v26);
      v28 = v27 + 1;
      if ( v27 == 0xFFFFFFFF )
      {
        v29 = 0i64;
        LODWORD(v30) = 0;
      }
      else
      {
        v30 = 0x10i64;
        if ( v28 >= 0x11 )
          v30 = v28;
        v29 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v30);
      }
      memmove(v29, v26, v28);
    }
    else
    {
      v29 = 0i64;
      v28 = 0;
      LODWORD(v30) = 0;
    }
    v31 = v199;
    v32 = v200;
    v199 = v29;
    v200 = v25;
    v201 = __PAIR64__(v30, v28);
    if ( v31 )
      (*(*v32 + 0x40i64))(v32);
  }
  if ( *(a1 + 0x186) )
  {
    LOBYTE(v23) = 1;
    v33 = (a1 + 0x18);
    if ( (v284 & 1) == 0 )
      LOBYTE(v23) = *(game + 0x554) == *(*v191 + 0x1118i64);
    v34 = v279;
    if ( !v279 )
      v34 = &szFile;
    if ( v201 )
      v19 = v199;
    sub_D547A0(v19, v34, v23);
  }
  else
  {
    LOBYTE(v24) = 1;
    v33 = (a1 + 0x18);
    if ( (v284 & 1) == 0 )
      LOBYTE(v24) = *(game + 0x554) == *(*v191 + 0x1118i64);
    v35 = v280;
    if ( !v280 )
      v35 = &szFile;
    v36 = v279;
    if ( !v279 )
      v36 = &szFile;
    v37 = v278;
    if ( !v278 )
      v37 = &szFile;
    sub_D59840(v37, v36, v35, v24);
  }
  sub_4E9D50(v282);
  while ( !*(a1 + 0x40) )
    Sleep(5u);
  if ( v291 )
  {
    (*(**v33 + 0x1E8i64))(*v33);
    v38 = *(*v33 + 0x234);
    if ( v38 )
    {
      sub_68EFC0(*(*v33 + 0x234), 0i64);
      *(v38 + 0x78) = 0;
    }
    if ( off_4A6C560 )
      off_4A6C560();
  }
  if ( (v284 & 1) != 0 )
  {
    v39 = *(*(game + 0x630) + 0xAD0i64);
    if ( !v39 || (*v39 = 0xBF800000, v39[0x16] = 2, (v284 & 1) != 0) )
    {
      off_4B75240();
      logmessage_fmt(3u, "discarded all managed textures! long frame may follow", 0i64, 0);
    }
  }
  v40 = *(game + 0x5E8);
  if ( *(v40 + 0x20) )
  {
    logmessage_fmt(0x20505041u, "preload_all_required_res start", 0i64, 0);
    off_4B75170(0xDi64, 0i64, 0i64, 0i64);
    byte_4A70251 = 0;
    sub_16D7CC0(v40, 0i64);
    sub_16D89F0();
    logmessage_fmt(0x20505041u, "preload_all_required_res ok", 0i64, 0);
    off_4B75170(0xEi64, 0i64, 0i64, 0i64);
  }
  sub_14584E0(v253, off_4B678B0);
  v44 = *(a1 + 0x18);
  v45 = *(v44 + 0x99C);
  v46 = *(v44 + 0x9AC);
  v217 = *(v44 + 0x9BC);
  v216 = v46;
  v215 = v45;
  if ( *(a1 + 0x184) )
  {
    if ( !v291 )
    {
      v47 = *(v44 + 0x858);
      if ( v47 == 5 || v47 == 3 )
      {
        ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
        if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
          _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v41, v42, v43);
        sub_14584E0(Block, *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64));
        sub_145D840(Block, "unitTm", *v33 + 0x99C);
        v49 = *(*(v44 + 0x450) + 0x318i64);
        v50 = &szFile;
        if ( !v49 )
          v49 = &szFile;
        data::set_str(Block, "unitClass", v49);
        sub_145A750(Block, "id", v293);
        sub_145A750(Block, "playerNo", 0xFFFFFFFFi64);
        sub_145A750(Block, "flags", *(*v33 + 0x416));
        sub_145BE20(Block, "isPhysPredictionEnabled", *(*(game + 0x548) + 0x11Bi64));
        v51 = *(*v33 + 0x97);
        if ( !v51 )
          v51 = &szFile;
        data::set_str(Block, "weapons", v51);
        v52 = sub_145DB90(v253, "props");
        *&v224 = sub_5655B0(game);
        sub_490CD0(&v260, *v33 + 0x1138, &v224);
        if ( v262 )
          v50 = v260;
        data::set_str(v52, "name", v50);
        if ( v260 )
          (*(*v261 + 0x40i64))(v261);
        v53 = (*(*(*v33 + 0xA) + 0x30i64))(*v33 + 0x50);
        sub_145A750(v52, "army", v53);
        sub_489140(&v260, *(*v33 + 0xDE));
        v54 = v269;
        v55 = v270;
        while ( v54 != v55 )
        {
          if ( *v54 )
            (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
          *v54 = 0i64;
          *(v54 + 8) = 0;
          v54 += 0x10i64;
        }
        v218[0] = 0i64;
        *&v224 = v44;
        *(&v224 + 1) = Block;
        v225 = &v260;
        v226 = v218;
        v227 = (a1 + 0x4C);
        *(a1 + 0x4C) = 0;
        add_delayed_callback(
          &qword_4B71860,
          0,
          sub_490D50,
          &v224,
          "DelayedActionCB @\n\t..\\..\\skyquake\\prog\\main\\changeUnit.cpp(1111):");
        while ( !*(a1 + 0x4C) )
          Sleep(5u);
        v33 = (a1 + 0x18);
        if ( v218[0] )
        {
          v64 = *(*(v218[0] + 0x2280) + 0x318i64);
          v65 = &szFile;
          if ( !v64 )
            v64 = &szFile;
          v211[0] = v64;
          sub_4910E0(&v219, 0x104i64, "gameData/units/%s.blk", v211);
          v69 = NtCurrentTeb()->ThreadLocalStoragePointer;
          if ( !*(v69[TlsIndex] + 1i64) )
            _dyn_tls_on_demand_init(v69, v66, v67, v68);
          v70 = v211;
          sub_14584E0(v211, *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64));
          if ( !sub_A60A60(qword_4B176E8) )
          {
            if ( v221 )
              v65 = v219;
            sub_1606B70(v211, v65, 0i64);
          }
          if ( sub_A60A60(qword_4B176E8) )
          {
            if ( v221 )
              v71 = v219;
            else
              v71 = &szFile;
            v70 = sub_564630(game, v71, 0i64);
          }
          (*(*v44 + 0x870i64))(v44, v218[0], Block, v70);
          v72 = (a1 + 0x50);
          v256[0] = v218;
          v256[1] = v70;
          v256[2] = a1 + 0x50;
          *(a1 + 0x50) = 0;
          add_delayed_callback(
            &qword_4B71860,
            0,
            sub_491140,
            v256,
            "DelayedActionCB @\n\t..\\..\\skyquake\\prog\\main\\changeUnit.cpp(1124):");
          if ( !*(a1 + 0x50) )
          {
            do
              Sleep(5u);
            while ( !*v72 );
          }
          if ( !(*(*v218[0] + 0x490i64))(v218[0]) )
          {
            v73 = 0xC8;
            do
            {
              Sleep(5u);
              if ( (*(*v218[0] + 0x490i64))(v218[0]) )
                break;
            }
            while ( v73-- > 2 );
          }
          v75 = v218[0];
          if ( *(v218[0] + 0x2560) )
          {
            v76 = 4i64;
            v77 = 0i64;
            do
            {
              if ( v77 >= *(v44 + 0x958) )
                break;
              *(*(v75 + 0x2550) + v76) = *(*(v44 + 0x4AA) + v76);
              ++v77;
              v75 = v218[0];
              v76 += 0x78i64;
            }
            while ( v77 < *(v218[0] + 0x2560) );
          }
          *v72 = 0;
          add_delayed_callback(
            &qword_4B71860,
            0,
            sub_4914B0,
            v256,
            "DelayedActionCB @\n\t..\\..\\skyquake\\prog\\main\\changeUnit.cpp(1134):");
          while ( !*v72 )
            Sleep(5u);
          sub_1458FF0(v211);
          if ( v219 )
            (*(*v220 + 0x40))(v220);
        }
        sub_40E180(&v260);
        sub_1458FF0(Block);
      }
    }
    if ( (v284 & 0x80u) == 0 )
    {
      v211[0] = *(a1 + 0x18);
      v213 = a1 + 0x44;
      v214 = *(a1 + 0x186);
      v78 = *(v211[0] + 8);
      v202 = *(v211[0] + 0x1118);
      v203 = (*(*(v211[0] + 0x50) + 0x30i64))(v211[0] + 0x50);
      v79 = *(a1 + 0x18);
      v80 = *(v79 + 0x227);
      v81 = &szFile;
      if ( !v80 )
        v80 = &szFile;
      v205 = 0i64;
      v206 = off_4B678C8;
      v207 = 0i64;
      if ( *v80 )
      {
        v82 = strlen(v80);
        v83 = v82 + 1;
        if ( v82 == 0xFFFFFFFF )
        {
          v84 = 0i64;
        }
        else
        {
          v86 = 0x10i64;
          if ( v83 >= 0x11 )
            v86 = v83;
          v84 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v86);
          v205 = v84;
          HIDWORD(v207) = v86;
          v33 = (a1 + 0x18);
        }
        LODWORD(v207) = v83;
        memmove(v84, v80, v83);
        v79 = *v33;
      }
      v87 = (v284 >> 2) & 4;
      v88 = *(v79 + 0x416) & 0x7000112;
      sub_324710(*v33, &v209);
      if ( !*(*v33 + 0x858) )
      {
        v89 = *(*v33 + 0x13A);
        *&v90 = v89[0x132];
        *&v91 = v89[0x131];
        *&v92 = v89[0x130];
        v209 = __PAIR64__(v91, v92);
        v210 = v90;
      }
      v93 = v78 & 0x7FF;
      v94 = v87 | v88;
      v240 = 0xBF800000;
      v245 = 0;
      *v246 = 0i64;
      *&v246[8] = 0x3F800000;
      v248 = 0x100;
      sub_14584E0(v249, off_4B678B0);
      *&v224 = 0i64;
      *(&v224 + 1) = &szFile;
      v225 = &szFile;
      v226 = &szFile;
      v227 = &szFile;
      v228 = &szFile;
      v229 = &szFile;
      v230 = &szFile;
      v231 = &szFile;
      v232 = &szFile;
      v233 = 0xFFFFFFFF3F800000ui64;
      v244 = 1;
      v247 = 0i64;
      LOBYTE(v248) = 0;
      v236 = 0;
      if ( *(a1 + 0x186) )
      {
        sub_145D840(v253, "unitTm", &v215);
        if ( v201 )
          v81 = v199;
        data::set_str(v253, "unitClass", v81);
        sub_145A750(v253, "id", v93);
        sub_145A750(v253, "playerNo", v202);
        sub_145A750(v253, "flags", v94);
        sub_145BE20(v253, "isPhysPredictionEnabled", *(*(game + 0x548) + 0x11Bi64));
        if ( v279 && *v279 )
          data::set_str(v253, "weapons", v279);
        v95 = v253;
        v96 = sub_145DB90(v253, "props");
        v97 = v96;
        v58 = *v204;
        if ( v207 )
          v98 = v205;
        else
          v98 = &szFile;
        data::set_str(v96, "name", v98);
        sub_145A750(v97, "army", v203);
        v103 = v280;
        if ( v280 && *v280 )
          data::set_str(v97, "skin", v280);
        LOBYTE(v103) = 1;
        sub_145BE20(v97, "targetAir", v103);
        LOBYTE(v104) = 1;
        sub_145BE20(v97, "targetGnd", v104);
        sub_145B830(v97, "accuracy");
        sub_145B830(v97, "effShootingRate");
        sub_145B830(v97, "stealthRadius");
        v105 = sub_48AC20(*v33);
        data::set_str(v97, "attack_type", v105);
        v106 = *v33;
        if ( *v33 && (v107 = *(v106 + 0x858), v107 <= 0xF) && (v108 = 0x897E, _bittest(&v108, v107)) )
        {
          sub_145BE20(v97, &aUseSearch, *(v106 + 0x1F8A));
          if ( !*(*v33 + 0x217) )
            sub_145B830(v97, "aiReloadMult");
        }
        else
        {
          sub_145BE20(v97, &aUseSearch, 0i64);
        }
      }
      else
      {
        v99 = v278;
        v100 = v279;
        if ( !v278 )
          v99 = &szFile;
        *(&v224 + 1) = v99;
        v101 = &szFile;
        if ( v207 )
          v101 = v205;
        if ( !v279 )
          v100 = &szFile;
        *&v224 = v101;
        v225 = v100;
        v102 = v280;
        if ( !v280 )
          v102 = &szFile;
        v226 = v102;
        v233 = __PAIR64__(v93, v286);
        v234 = v202;
        v235 = v203;
        v236 = v94;
        v237 = 0;
        v58 = *v204;
        v238 = *v204;
        v239 = 0i64;
        v241 = 0;
        v242 = v284 & 1;
        v243 = (v284 & 2) != 0;
        v244 = 0;
        v245 = v288;
        *v246 = v287;
        *&v246[4] = v289;
        sub_1458A90(v249, v283, 0i64);
        v95 = &v224;
      }
      v109 = (a1 + 0x44);
      v212 = v95;
      v260 = 0i64;
      v110 = data::get_str(v58, "trailerModelName", &v260);
      v208 = v110;
      v192 = 0i64;
      if ( v110 && *v110 && *(*(*v33 + 0xDE) + 0x1A8i64) >= 0 )
      {
        sub_4910E0(&v250, 0x104i64, "gameData/units/%s.blk", &v208);
        v114 = NtCurrentTeb()->ThreadLocalStoragePointer;
        if ( !*(v114[TlsIndex] + 1i64) )
          _dyn_tls_on_demand_init(v114, v111, v112, v113);
        v115 = v256;
        sub_14584E0(v256, *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64));
        if ( !sub_A60A60(qword_4B176E8) )
        {
          if ( v252 )
            v116 = v250;
          else
            v116 = &szFile;
          sub_1606B70(v256, v116, 0i64);
        }
        if ( sub_A60A60(qword_4B176E8) )
        {
          if ( v252 )
            v117 = v250;
          else
            v117 = &szFile;
          v115 = sub_564630(game, v117, 0i64);
        }
        sub_1458770(v218, v253);
        sub_145A750(v218, "playerNo", 0xFFFFFFFFi64);
        data::set_str(v218, "unitClass", v208);
        LODWORD(v260) = sub_5655B0(game);
        sub_491AE0(&v257, &v205, &v260);
        v118 = sub_18A6B0(v218, "props");
        if ( v259 )
          v119 = v257;
        else
          v119 = &szFile;
        data::set_str(v118, "name", v119);
        sub_488BA0(&v260);
        sub_48B790(v115, v218, &qword_4AD9050, &v260);
        sub_277B70(v267, v208);
        v120 = *(*(a1 + 0x18) + 0x6F0i64);
        v271 = *(v120 + 0x1A8);
        sub_48D1B0(v268, v120 + 0x60);
        v219 = 0i64;
        v220 = v218;
        v221 = &v260;
        v222 = &v192;
        v223 = a1 + 0x4C;
        *(a1 + 0x4C) = 0;
        add_delayed_callback(
          &qword_4B71860,
          0,
          sub_491B70,
          &v219,
          "DelayedActionCB @\n\t..\\..\\skyquake\\prog\\main\\changeUnit.cpp(1248):");
        while ( !*(a1 + 0x4C) )
          Sleep(5u);
        if ( *(game + 0x67F) )
        {
          *Block = v215;
          v195 = v217;
          v194 = v216;
          v196 = *(&v217 + 1) - (*&dword_448790C * *&v215);
          v197 = *(&v217 + 2) - (*(&v215 + 1) * *&dword_448790C);
          v198 = *(&v217 + 3) - (*(&v215 + 2) * *&dword_448790C);
          sub_11389F0(v192, v115, v218, Block, 0, 0);
          if ( (*(*(*v33 + 0xA) + 0x18i64))(*v33 + 0x50) )
          {
            v121 = v192;
            v122 = sub_2DAFD0(v115, "sound");
            sub_F04350(v122, v121);
          }
        }
        v123 = (a1 + 0x50);
        Block[0] = &v192;
        Block[1] = v115;
        *&v194 = a1 + 0x50;
        *(a1 + 0x50) = 0;
        add_delayed_callback(
          &qword_4B71860,
          0,
          sub_491140,
          Block,
          "DelayedActionCB @\n\t..\\..\\skyquake\\prog\\main\\changeUnit.cpp(1262):");
        if ( !*(a1 + 0x50) )
        {
          do
            Sleep(5u);
          while ( !*v123 );
        }
        *v123 = 0;
        add_delayed_callback(
          &qword_4B71860,
          0,
          sub_4914B0,
          Block,
          "DelayedActionCB @\n\t..\\..\\skyquake\\prog\\main\\changeUnit.cpp(1266):");
        v109 = (a1 + 0x44);
        while ( !*v123 )
          Sleep(5u);
        sub_40E180(&v260);
        if ( v257 )
          (*(*v258 + 0x40i64))(v258);
        sub_1458FF0(v218);
        sub_1458FF0(v256);
        if ( v250 )
          (*(*v251 + 0x40i64))(v251);
      }
      v124 = *v33;
      if ( ((*v33)[0x58] & 4) == 0 )
      {
        *(v124 + 0x60) = v292;
        v124 = *v33;
      }
      v125 = (*(*(v124 + 0xA) + 0x60i64))(v124 + 0x50);
      *v109 = 0;
      add_delayed_callback(
        &qword_4B71860,
        0,
        sub_491E70,
        v211,
        "DelayedActionCB @\n\t..\\..\\skyquake\\prog\\main\\changeUnit.cpp(1280):");
      while ( !*v109 )
        Sleep(5u);
      if ( !v214 && v211[0] && !*(v211[0] + 0x10B0) )
        sub_393840(v211[0], v212);
      *(*v33 + 0x60) = v125;
      if ( ((*v33)[0x58] & 4) == 0 )
        sub_36A6D0(*(*v33 + 0xDE) + 0x1B0i64, v294);
      if ( !*(a1 + 0x186) )
      {
        v126 = *v33;
        v127 = 0i64;
        if ( *v33 && !*(v126 + 0x858) )
          v127 = *v33;
        v128 = (*(*(v126 + 0xA) + 0x18i64))(v126 + 0x50);
        LOBYTE(v130) = 1;
        if ( !v128 )
          LOBYTE(v130) = *(game + 0x554) == *(*v33 + 0x88C);
        LOBYTE(v129) = v130 & v243;
        sub_3F6210(v127, v58, v129, v130, 0);
        v131 = *(game + 0x450);
        if ( v131 && *(v131 + 0x5CA) )
        {
          *(v127 + 0xEDC) = HIDWORD(v217);
          *(v127 + 0x76D) = *(&v217 + 4);
        }
        sub_3A3D50(v127);
        v132 = *(*v33 + 0x13A);
        v295[2] = v217;
        v295[1] = v216;
        v295[0] = v215;
        sub_1573320(v132, v295);
        v255 = v210;
        v254 = v209;
        sub_1573580(v132, &v254);
      }
      v133 = v192;
      if ( v192 )
      {
        v134 = *v33;
        if ( *v33 )
        {
          if ( *(v134 + 0x858) == 3 )
          {
            *(v134 + 0x735) = v192;
            *(v133 + 0x39B0) = v134;
            LODWORD(v260) = *(v133 + 8) & 0x7FF;
            if ( *(v134 + 0xE76) != v260 )
            {
              on_reflection_var_changed(v134 + 0x39B8, v134, &v260);
              *(v134 + 0xE76) = v260;
              v133 = v192;
            }
            sub_342030(v133 + 0x50);
            v135 = *(v133 + 0x39B0);
            if ( v135 )
              *(v133 + 0x58) = *(v135 + 0x58);
            *(v192 + 0x39E0) = *(v134 + 4) & 0x7FF;
          }
        }
      }
      sub_1458FF0(v249);
      if ( v205 )
        (*(*v206 + 0x40i64))(v206);
LABEL_254:
      v136 = *v33;
      v137 = *(*v33 + 0x858);
      if ( v137 <= 0xF )
      {
        v138 = 0x8028;
        if ( _bittest(&v138, v137) )
        {
          LOBYTE(v62) = (v284 & 0x100) == 0;
          assign_char_property(v253, "loadSound", v62);
          LOBYTE(v188) = 0;
          LOBYTE(Strb) = 0;
          (*(**v33 + 0x200i64))(*v33, v58, v253, &v215, Strb, v188);
          v136 = *v33;
        }
      }
      v139 = v280;
      v140 = &szFile;
      if ( !v280 )
        v139 = &szFile;
      sub_346720(v136, v58, &v281, v285, v139);
      v141 = v280;
      if ( !v280 )
        v141 = &szFile;
      sub_3470E0(*v33, v58, v282, v141);
      if ( !byte_4B8DA08 || (byte_4B8DA68 & 1) == 0 )
        sub_16F8F20(0i64);
      if ( !off_4B75178(0i64) )
        sub_578750(0i64, *(game + 0x6A4));
      v142 = **(*(*v33 + 0x234) + 0x90i64);
      if ( v142 )
        sub_694D40(*(v142 + 8), *(game + 0x608));
      v143 = *(game + 0x5E8);
      if ( *v143 )
        memset(*(v143 + 8), 0, 4i64 * (*(v143 + 4) + 1));
      *v143 = 0;
      v144 = *(v143 + 0x28);
      if ( v144 )
      {
        *(v143 + 0x28) = 0i64;
        sub_1464430(v144);
      }
      *(v143 + 0x30) = 0i64;
      if ( *(v143 + 0x40) )
      {
        v145 = *(v143 + 0x38);
        v146 = 0x10i64 * *(v143 + 0x40);
        v147 = 0i64;
        do
        {
          v148 = *(v145 + v147);
          if ( v148 )
          {
            *(v145 + v147) = 0i64;
            _InterlockedAdd(&dword_4B6788C, -((j__msize(v148) + 0xF) >> 4));
            _InterlockedDecrement(&dword_4B67890);
            free(v148);
          }
          v147 += 0x10i64;
        }
        while ( v146 != v147 );
      }
      *(v143 + 0x40) = 0;
      *(v143 + 0x20) = 0;
      EnterCriticalSection(&stru_4B73F30);
      if ( *(&xmmword_4B73E68 + 1) )
        (*(*off_4B73E78 + 0x40i64))(off_4B73E78);
      xmmword_4B73E68 = 0i64;
      LODWORD(qword_4B73E90) = 0;
      LeaveCriticalSection(&stru_4B73F30);
      if ( off_4A6C560 )
        off_4A6C560();
      if ( v290 )
      {
        v149 = *v191;
        if ( *v191 )
        {
          if ( !*(v149 + 0x10B0) )
            sub_3A3D50(v149);
        }
      }
      v150 = *v191;
      v151 = *(*v191 + 0x11A0i64);
      if ( *(v151 + 0x98) )
      {
        sub_1664BC0(**(v151 + 0x90));
        v150 = *(a1 + 0x18);
      }
      if ( *&mUnit == v150 )
        sub_60F090();
      if ( !g_net || !*(g_net + 0x60) )
      {
        v152 = LocalPlayer;
        if ( LocalPlayer )
        {
          v153 = *(LocalPlayer + 0x208);
          v154 = (*(*(*v191 + 0x50i64) + 0x30i64))(*v191 + 0x50i64);
          if ( (dword_4B1C814 & 0x80000) == 0
            && v154 == v153
            && (dword_4B1C814 & 0x1000000) == 0
            && *(*v191 + 0x10B8i64) != v152 )
          {
            v261 = *(*v191 + 0x1138i64);
            LODWORD(v260) = 1;
            logmessage_fmt(3u, "setActiveDynModelInst for ally unit <%s>", &v260, 1);
            LOBYTE(v155) = 1;
            sub_321D50(*v191, v155);
          }
        }
      }
      if ( (v284 & 1) != 0 )
      {
        if ( byte_4B8DA08 && (byte_4B8DA68 & 1) != 0 )
          sub_16F1680(2i64);
        sub_16F8F20(0x100i64);
      }
      else
      {
        sub_16F9760();
      }
      if ( g_net && !*(g_net + 0x60) || (v157 = *(game + 0x450)) != 0 && *(v157 + 0x5CA) )
      {
        LOBYTE(v156) = 1;
        v158 = sub_57B0C0(*(*v191 + 8i64) & 0x7FF, v58, v156);
        add_delayed_callback(
          &qword_4B71860,
          v158,
          0,
          0,
          "DelayedAction @\n\t..\\..\\skyquake\\prog\\main\\changeUnit.cpp(1435):");
      }
      else
      {
        v159 = *(a1 + 0x186);
        if ( v159 == 5 || v159 == 3 )
        {
          if ( sub_18A790(v58, "simpleUnitSubsystems", 0xFFFFFFFFi64) )
          {
            LOBYTE(v260) = 0;
            data::get_bool(v58, "simpleUnitSubsystems", &v260);
          }
          else if ( !sub_48D0C0(v58, "tank_crew") )
          {
            sub_48D0C0(v58, "crewLayout");
          }
        }
        v260 = 0i64;
        v160 = data::get_str(v58, "additionalEcsTemplate", &v260);
        v161 = sub_360F50(v58, *(a1 + 0x186));
        v260 = &szFile;
        v162 = data::get_str(v58, "ecsTemplate", &v260);
        sub_361330(&v260, *(a1 + 0x186), v162, v161, v160);
        v163 = v263;
        if ( (v263 & 0x80u) == 0 )
          v164 = (0x17i64 - v263);
        else
          v164 = v261;
        if ( v164 )
        {
          v224 = 0i64;
          v225 = 0i64;
          if ( *(a1 + 0x68) )
          {
            sub_4930A0(&v224);
            if ( *(a1 + 0x68) )
            {
              v165 = 0i64;
              do
              {
                ++*(a1 + 0x70);
                v166 = (*(a1 + 0x60) + 0x18 * v165);
                LOBYTE(Block[0]) = 0;
                BYTE7(v194) = 0x17;
                v167 = *(v166 + 0x17);
                v168 = v166 - v167 + 0x17;
                if ( (v167 & 0x80u) != 0i64 )
                  v168 = *v166 + v166[1];
                if ( (v167 & 0x80u) != 0i64 )
                  v166 = *v166;
                v169 = v168 - v166;
                if ( v169 < 0x18 )
                {
                  LOBYTE(v173) = 0x17 - v169;
                  BYTE7(v194) = 0x17 - v169;
                  v170 = Block[0];
                }
                else
                {
                  v170 = j__malloc_base(v169 + 1);
                  if ( !v170 )
                  {
                    do
                    {
                      if ( !off_4B678A0 || !off_4B678A0(v169 + 1) )
                      {
                        v211[1] = v169 + 1;
                        LODWORD(v211[0]) = 2;
                        LOBYTE(v171) = 1;
                        log_err(
                          "..\\..\\prog\\engine2\\memory\\dagmem.cpp",
                          0x345,
                          v171,
                          "Not enough memory to alloc %llu bytes",
                          v211,
                          1);
                      }
                      v172 = j__malloc_base(v169 + 1);
                    }
                    while ( !v172 );
                    v170 = v172;
                  }
                  _InterlockedAdd(&dword_4B6788C, (j__msize(v170) + 0xF) >> 4);
                  _InterlockedIncrement(&dword_4B67890);
                  Block[0] = v170;
                  *&v194 = v169 | 0x8000000000000000ui64;
                  Block[1] = v169;
                  v173 = (v169 | 0x8000000000000000ui64) >> 0x38;
                }
                if ( (v173 & 0x80u) == 0i64 )
                  v170 = Block;
                memmove(v170, v166, v169);
                v174 = &Block[2] - BYTE7(v194) + 7;
                if ( (SBYTE7(v194) & 0x80u) != 0 )
                  v174 = Block[1] + Block[0];
                *v174 = 0;
                v175 = *(&v224 + 1);
                if ( *(&v224 + 1) < v225 )
                {
                  *(&v224 + 1) += 0x18i64;
                  *v175 = 0;
                  *(v175 + 0x17) = 0x17;
                  *(v175 + 0x10) = v194;
                  *v175 = *Block;
                }
                else
                {
                  sub_2F0AB0(&v224, Block);
                  if ( (SBYTE7(v194) & 0x80u) != 0 && Block[0] )
                    sub_1464430(Block[0]);
                }
                ++v165;
              }
              while ( v165 < *(a1 + 0x68) );
            }
          }
          v176 = sub_1464470(0xA0ui64);
          v177 = *(a1 + 0x18);
          v178 = *(v177 + 0x1138);
          if ( !v178 )
            v178 = &szFile;
          v179 = *(game + 0xCD);
          v180 = *(v177 + 0x10B0);
          LOBYTE(v181) = (*(*(v177 + 0x50) + 0x60i64))(v177 + 0x50);
          if ( *(a1 + 0x186) )
          {
            v182 = &v260;
            if ( v201 )
              v140 = v199;
          }
          else
          {
            v140 = &szFile;
            if ( v278 )
              v140 = v278;
            v182 = &v260;
          }
          v181 = v181;
          if ( (v263 & 0x80u) != 0 )
            v182 = v260;
          LOBYTE(v190) = v179;
          sub_57AB60(
            v176,
            v182,
            *(*v191 + 8i64) & 0x7FF,
            *(*v191 + 0x1118i64),
            v140,
            v181,
            v180,
            v190,
            v178,
            a1 + 0x78,
            a1 + 0x7C,
            &v224);
          add_delayed_callback(
            &qword_4B71860,
            v176,
            0,
            0,
            "DelayedAction @\n\t..\\..\\skyquake\\prog\\main\\changeUnit.cpp(1431):");
          sub_492980(&v224);
          v163 = v263;
        }
        if ( v163 < 0 && v260 )
          sub_1464430(v260);
      }
      v183 = *(a1 + 0x18);
      v184 = *(v183 + 8) & 0x7FF;
      v261 = "doJob";
      LODWORD(v260) = 1;
      v264 = v183;
      v262 = 5;
      v266 = v184;
      v265 = 2;
      logmessage_fmt(3u, "%s(%p:%d) end", &v260, 3);
      *(a1 + 0x18A) = 1;
      goto LABEL_358;
    }
    v63 = *v33;
  }
  else
  {
    if ( (v284 & 0x80u) == 0 )
    {
      if ( (v44[0x58] & 4) == 0 )
      {
        *(v44 + 0x60) = v292;
        sub_36A6D0(*(*v33 + 0xDE) + 0x1B0i64, v294);
        v44 = *v33;
      }
      v56 = v278;
      if ( !v278 )
        v56 = &szFile;
      (*(*v44 + 0x48i64))(v44, v56, a1 + 0x80);
      v57 = 0i64;
      if ( v280 && *v280 )
        v57 = v280;
      v58 = *v204;
      v59 = v278;
      v60 = v279;
      if ( !v279 )
        v60 = &szFile;
      if ( !v278 )
        v59 = &szFile;
      LOBYTE(Str) = v284 & 1;
      (*(**v33 + 0x1F0i64))(*v33, v59, *v204, v60, Str, (v284 & 2) >> 1, v57, 1, v284 & 1);
      v260 = *(a1 + 0x18);
      v261 = v58;
      v264 = a1 + 0x48;
      LOWORD(v265) = *(a1 + 0x186);
      *(a1 + 0x48) = 0;
      add_delayed_callback(
        &qword_4B71860,
        0,
        sub_492870,
        &v260,
        "DelayedActionCB @\n\t..\\..\\skyquake\\prog\\main\\changeUnit.cpp(1347):");
      while ( !*(a1 + 0x48) )
        Sleep(5u);
      LOBYTE(v61) = 1;
      assign_char_property(v253, "loadSound", v61);
      LOBYTE(v189) = v284 & 1;
      LOBYTE(Stra) = (v284 & 2) >> 1;
      (*(**v33 + 0x200i64))(*v33, v58, v253, &v215, Stra, v189);
      (*(**v33 + 0xE0i64))(*v33);
      goto LABEL_254;
    }
    v63 = v44;
  }
  LOBYTE(v41) = 1;
  sub_3227C0(v63, v41);
  v85 = *(*v33 + 4) & 0x7FF;
  v261 = *v33;
  LODWORD(v260) = 5;
  v264 = v85;
  v262 = 2;
  logmessage_fmt(3u, "change unit (%p:%d) skip by DEAD_COPY_ONLY flag", &v260, 2);
LABEL_358:
  sub_1458FF0(v253);
  if ( v199 )
    (*(*v200 + 0x40i64))(v200);
  return sub_40E180(&v272);
}
