char __fastcall player_options(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  char **v5; // rsi
  const char *v6; // rcx
  const char *v7; // rdi
  int v8; // esi
  const char *view_type; // rbp
  _DWORD *v10; // rbx
  const char *v11; // rcx
  _QWORD *v12; // rsi
  __int64 v13; // rsi
  int v14; // eax
  __int64 game_; // rsi
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  const char *v19; // rcx
  const char *v20; // rdi
  char **v21; // rsi
  __int64 v22; // rdx
  __int64 UnitWeaponsInfo; // rsi
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rdi
  __int64 v27; // rbp
  __int64 v28; // rdi
  __int64 v29; // rbp
  __int64 v30; // rdi
  __int64 v31; // rbp
  __int64 v32; // rdi
  __int64 v33; // rbp
  int v34; // ebx
  unsigned int v35; // edi
  __int64 v36; // rax
  int v37; // esi
  int v38; // eax
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rbp
  bool v42; // dl
  __int64 v43; // rdx
  char *v44; // rax
  unsigned __int64 v45; // rdx
  char *v46; // rcx
  char v47; // al
  __int64 v48; // rbp
  int v49; // ebx
  unsigned int v50; // edi
  __int64 v51; // rax
  int v52; // esi
  int v53; // eax
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rbp
  bool v57; // dl
  __int64 v58; // rdx
  char *v59; // rax
  unsigned __int64 v60; // rdx
  char *v61; // rcx
  __int64 v62; // rdx
  int v63; // ebx
  __int64 v64; // rsi
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v66; // rax
  char v67; // al
  __int64 v68; // rdx
  __int64 v69; // rbp
  int v70; // ebx
  unsigned int v71; // edi
  __int64 v72; // rax
  int v73; // esi
  int v74; // eax
  int v75; // eax
  __int64 v76; // rax
  __int64 v77; // rbp
  bool v78; // dl
  __int64 v79; // rdx
  char *v80; // rax
  unsigned __int64 v81; // rdx
  char *v82; // rcx
  __int64 v83; // rbp
  int v84; // ebx
  unsigned int v85; // edi
  __int64 v86; // rax
  int v87; // esi
  int v88; // eax
  int v89; // eax
  __int64 v90; // rax
  __int64 v91; // rbp
  bool v92; // dl
  __int64 v93; // rdx
  char *v94; // rax
  unsigned __int64 v95; // rdx
  char *v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rbp
  int v99; // ebx
  unsigned int v100; // edi
  __int64 v101; // rax
  int v102; // esi
  int v103; // eax
  int v104; // eax
  __int64 v105; // rax
  __int64 v106; // rbp
  bool v107; // dl
  __int64 v108; // rdx
  char *v109; // rax
  unsigned __int64 v110; // rdx
  char *v111; // rcx
  __int64 v112; // rbp
  int v113; // ebx
  unsigned int v114; // edi
  __int64 v115; // rax
  int v116; // esi
  int v117; // eax
  int v118; // eax
  __int64 v119; // rax
  __int64 v120; // rbp
  bool v121; // dl
  __int64 v122; // rdx
  char *v123; // rax
  unsigned __int64 v124; // rdx
  char *v125; // rcx
  _QWORD *v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rbp
  unsigned int v129; // ebx
  unsigned int v130; // edi
  __int64 v131; // rax
  int v132; // esi
  __int64 v133; // rbx
  int v134; // edi
  unsigned int v135; // ebp
  __int64 v136; // rax
  int v137; // esi
  int v138; // eax
  int v139; // eax
  __int64 v140; // rax
  __int64 v141; // rdx
  bool v142; // cl
  __int64 v143; // rcx
  unsigned __int64 v144; // rbp
  _DWORD *v145; // rdx
  unsigned __int64 v146; // rbp
  char v147; // al
  int v148; // eax
  unsigned int v149; // eax
  char v150; // al
  unsigned int v151; // r8d
  unsigned int v152; // esi
  __int64 v153; // rdx
  __int64 v154; // rbp
  unsigned __int64 v155; // rax
  unsigned int v156; // edx
  __int64 v157; // rsi
  __int64 v158; // rbx
  int v159; // ebp
  unsigned int v160; // edi
  __int64 v161; // rax
  int v162; // r14d
  int v163; // eax
  int v164; // eax
  __int64 v165; // rax
  __int64 v166; // rdx
  bool v167; // cl
  __int64 v168; // rcx
  unsigned __int64 v169; // rbx
  _DWORD *v170; // rdx
  unsigned __int64 v171; // rbx
  char v172; // al
  __int64 v173; // rdi
  char v175; // [rsp+37h] [rbp-111h] BYREF
  __int64 (__fastcall **v176)(void *); // [rsp+38h] [rbp-110h] BYREF
  __int64 v177; // [rsp+40h] [rbp-108h]
  __int64 v178; // [rsp+48h] [rbp-100h]
  __int16 v179; // [rsp+50h] [rbp-F8h]
  char v180; // [rsp+52h] [rbp-F6h]
  __int128 v181; // [rsp+58h] [rbp-F0h]
  __int64 v182; // [rsp+68h] [rbp-E0h]
  __int64 v183; // [rsp+70h] [rbp-D8h]
  __int128 v184; // [rsp+78h] [rbp-D0h]
  __int128 v185; // [rsp+88h] [rbp-C0h]
  __int128 v186; // [rsp+98h] [rbp-B0h]
  __int128 v187; // [rsp+A8h] [rbp-A0h]
  __int128 v188; // [rsp+B8h] [rbp-90h]
  __int128 v189; // [rsp+C8h] [rbp-80h]
  __int128 v190; // [rsp+D8h] [rbp-70h]
  __int128 v191; // [rsp+E8h] [rbp-60h]
  __int16 v192; // [rsp+F8h] [rbp-50h]
  int v193; // [rsp+100h] [rbp-48h]

  v176 = "Both";
  v4 = data::get_str(a2, "team", &v176);
  v5 = &off_4A71AA0;
  if ( v4 )
  {
    v6 = off_4A71AA0;
    if ( off_4A71AA0 )
    {
      v7 = v4;
      v5 = &off_4A71AA0;
      while ( strcmp(v6, v7) )
      {
        v6 = v5[2];
        v5 += 2;
        if ( !v6 )
        {
          v5 = &off_4A71AA0;
          break;
        }
      }
    }
  }
  v8 = *(v5 + 2);
  if ( LocalUnit && (v8 & (*(*(LocalUnit + 0x50) + 0x30i64))(LocalUnit + 0x50)) == 0 )
    return 1;
  v176 = 0i64;
  view_type = data::get_str(a2, "currentView", &v176);
  v10 = *(game + 0x440);
  if ( view_type )
  {
    v11 = off_4A74660;
    if ( off_4A74660 )
    {
      v12 = &unk_4A74668;
      while ( strcmp(v11, view_type) )
      {
        v11 = v12[1];
        v12 += 2;
        if ( !v11 )
        {
          v12 = &unk_4A74668;
          break;
        }
      }
    }
    else
    {
      v12 = &unk_4A74668;
    }
    v13 = HIDWORD(*v12);
    sub_1113050(v10 + 0x244);
    *v10 = v13;
    v14 = strcmp(view_type, "follow_bomb");
    game_ = game;
    *(*(game + 0x440) + 0xB8i64) = v14 == 0;
    if ( !strcmp(view_type, "default") )
    {
      *(game_ + 0xE4) = 0xFFFFFFFF;
      sub_467080(*(game_ + 0x440), 0i64);
      sub_4673B0(*(game + 0x440));
    }
  }
  v176 = 0i64;
  v16 = data::get_str(a2, "currentMode", &v176);
  if ( v16 )
  {
    v19 = off_4A74710;
    if ( off_4A74710 )
    {
      v20 = v16;
      v21 = &off_4A74710;
      while ( strcmp(v19, v20) )
      {
        v19 = v21[2];
        v21 += 2;
        if ( !v19 )
        {
          v21 = &off_4A74710;
          break;
        }
      }
    }
    else
    {
      v21 = &off_4A74710;
    }
    v22 = *(v21 + 2);
    switch ( v22 )
    {
      case 1:
        goto LABEL_30;
      case 4:
        v22 = 0xFi64;
        goto LABEL_30;
      case 2:
        v22 = 9i64;
LABEL_30:
        sub_7D2650(v10 + 0x1A, v22);
        break;
    }
  }
  if ( LocalUnit )
  {
    if ( !*(LocalUnit + 0x10B0) )
    {
      LOBYTE(v176) = 0;
      if ( data::get_bool(a2, "respawnBullets", &v176) )
      {
        UnitWeaponsInfo = *(LocalUnit + 0x11D0);
        v24 = *(UnitWeaponsInfo + 0x300);
        if ( *(v24 + 8) )
        {
          v25 = 0i64;
          do
          {
            v26 = *(*v24 + 8 * v25);
            if ( !(*(*v26 + 0x108i64))(v26) )
              v26 = 0i64;
            sub_215B60(v26);
            ++v25;
            v24 = *(UnitWeaponsInfo + 0x300);
          }
          while ( v25 != *(v24 + 8) );
        }
        if ( *(v24 + 0x18) )
        {
          v27 = 0i64;
          do
          {
            v28 = *(*(v24 + 0x10) + 8 * v27);
            if ( !(*(*v28 + 0x108i64))(v28) )
              v28 = 0i64;
            sub_215B60(v28);
            ++v27;
            v24 = *(UnitWeaponsInfo + 0x300);
          }
          while ( v27 != *(v24 + 0x18) );
        }
        if ( *(v24 + 0x28) )
        {
          v29 = 0i64;
          do
          {
            v30 = *(*(v24 + 0x20) + 8 * v29);
            if ( !(*(*v30 + 0x108i64))(v30) )
              v30 = 0i64;
            sub_215B60(v30);
            ++v29;
            v24 = *(UnitWeaponsInfo + 0x300);
          }
          while ( v29 != *(v24 + 0x28) );
        }
        if ( *(v24 + 0x118) )
        {
          v31 = 0i64;
          do
          {
            v32 = *(*(v24 + 0x110) + 8 * v31);
            if ( !(*(*v32 + 0x108i64))(v32) )
              v32 = 0i64;
            sub_215B60(v32);
            ++v31;
            v24 = *(UnitWeaponsInfo + 0x300);
          }
          while ( v31 != *(v24 + 0x118) );
        }
      }
    }
  }
  v33 = *a2;
  v34 = 0xFFFFFFFF;
  if ( *a2 )
  {
    v35 = data::get_name_id("aiGunnerEnabled", 0xFui64);
    v36 = *(v33 + 0x50);
    if ( v36 )
    {
      v37 = *(v36 + 0x20);
      if ( !*(v33 + 0x20) )
        goto LABEL_61;
    }
    else
    {
      v37 = 0;
      if ( !*(v33 + 0x20) )
        goto LABEL_61;
    }
    v38 = data::get_name_id(v33, "aiGunnerEnabled", 0xFui64, v35);
    if ( v38 >= 0 )
    {
      v39 = v37 + v38;
LABEL_63:
      v34 = v39;
      goto LABEL_64;
    }
LABEL_61:
    if ( !v37 )
      goto LABEL_64;
    v39 = data::get_name_id(*(v33 + 0x50), "aiGunnerEnabled", 0xFui64, v35);
    goto LABEL_63;
  }
LABEL_64:
  v40 = *(a2 + 0x14);
  v41 = *(a2 + 0xC);
  v42 = v41 == 0 || v34 < 0;
  if ( v40 == 0xFFFFFFFFi64 )
  {
    if ( v42 )
      goto LABEL_79;
    v44 = **(a2 + 0x18);
    v46 = v44;
    while ( (*v46 & 0xFFFFFF) != v34 )
    {
      v46 += 8;
      if ( v46 >= &v44[8 * v41] )
        goto LABEL_79;
    }
  }
  else
  {
    if ( v42 )
      goto LABEL_79;
    v43 = *a2 + v40;
    v44 = (v43 + 0x90);
    v45 = v43 + 8 * v41 + 0x90;
    v46 = v44;
    while ( (*v46 & 0xFFFFFF) != v34 )
    {
      v46 += 8;
      if ( v46 >= v45 )
        goto LABEL_79;
    }
  }
  if ( ((v46 - v44) & 0x400000000i64) == 0 )
  {
    LOBYTE(v176) = 1;
    v47 = data::get_bool(a2, "aiGunnerEnabled", &v176);
    if ( LocalUnit )
    {
      if ( *(LocalUnit + 0x11D0) )
        *(*(LocalUnit + 0x11D0) + 0x274i64) = v47;
    }
  }
LABEL_79:
  v48 = *a2;
  v49 = 0xFFFFFFFF;
  if ( !*a2 )
    goto LABEL_89;
  v50 = data::get_name_id("stateAIGun", 0xAui64);
  v51 = *(v48 + 0x50);
  if ( v51 )
  {
    v52 = *(v51 + 0x20);
    if ( !*(v48 + 0x20) )
      goto LABEL_86;
  }
  else
  {
    v52 = 0;
    if ( !*(v48 + 0x20) )
      goto LABEL_86;
  }
  v53 = data::get_name_id(v48, "stateAIGun", 0xAui64, v50);
  if ( v53 >= 0 )
  {
    v54 = v52 + v53;
    goto LABEL_88;
  }
LABEL_86:
  if ( !v52 )
    goto LABEL_89;
  v54 = data::get_name_id(*(v48 + 0x50), "stateAIGun", 0xAui64, v50);
LABEL_88:
  v49 = v54;
LABEL_89:
  v55 = *(a2 + 0x14);
  v56 = *(a2 + 0xC);
  v57 = v56 == 0 || v49 < 0;
  if ( v55 == 0xFFFFFFFFi64 )
  {
    if ( v57 )
      goto LABEL_110;
    v59 = **(a2 + 0x18);
    v61 = v59;
    while ( (*v61 & 0xFFFFFF) != v49 )
    {
      v61 += 8;
      if ( v61 >= &v59[8 * v56] )
        goto LABEL_110;
    }
  }
  else
  {
    if ( v57 )
      goto LABEL_110;
    v58 = *a2 + v55;
    v59 = (v58 + 0x90);
    v60 = v58 + 8 * v56 + 0x90;
    v61 = v59;
    while ( (*v61 & 0xFFFFFF) != v49 )
    {
      v61 += 8;
      if ( v61 >= v60 )
        goto LABEL_110;
    }
  }
  if ( ((v61 - v59) & 0x400000000i64) == 0 )
  {
    LODWORD(v176) = 1;
    v63 = data::set_int(a2, "stateAIGun", &v176);
    if ( LocalUnit )
    {
      v64 = LocalUnit;
      ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
        _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v62, v17, v18);
      v66 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
      v177 = v64;
      v178 = v66;
      v179 = 0xF0D5;
      v180 = 0xFF;
      v181 = 0i64;
      v182 = 0i64;
      v183 = v66;
      v184 = 0i64;
      v185 = 0i64;
      v186 = 0i64;
      v187 = 0i64;
      v188 = 0i64;
      v189 = 0i64;
      v190 = 0i64;
      v191 = 0i64;
      v192 = 0;
      v67 = 0xFF;
      if ( g_net )
      {
        v67 = 0x7D;
        if ( !*(g_net + 0x60) )
        {
          v67 = 0xFF;
          if ( LocalPlayer )
            v67 = *(LocalPlayer + 8);
        }
      }
      v180 = v67;
      v176 = &off_44AC0E0;
      v193 = v63;
      sub_367910(&v176);
      LOBYTE(v68) = 0xFF;
      mpi::send_to(&v176, v68);
      v176 = &off_44A0560;
      if ( v181 < 0 )
        (*(*v183 + 0x40i64))(v183, v182);
    }
  }
LABEL_110:
  v69 = *a2;
  v70 = 0xFFFFFFFF;
  if ( !*a2 )
    goto LABEL_120;
  v71 = data::get_name_id("allowAutoTargeting", 0x12ui64);
  v72 = *(v69 + 0x50);
  if ( v72 )
  {
    v73 = *(v72 + 0x20);
    if ( !*(v69 + 0x20) )
      goto LABEL_117;
  }
  else
  {
    v73 = 0;
    if ( !*(v69 + 0x20) )
      goto LABEL_117;
  }
  v74 = data::get_name_id(v69, "allowAutoTargeting", 0x12ui64, v71);
  if ( v74 >= 0 )
  {
    v75 = v73 + v74;
    goto LABEL_119;
  }
LABEL_117:
  if ( !v73 )
    goto LABEL_120;
  v75 = data::get_name_id(*(v69 + 0x50), "allowAutoTargeting", 0x12ui64, v71);
LABEL_119:
  v70 = v75;
LABEL_120:
  v76 = *(a2 + 0x14);
  v77 = *(a2 + 0xC);
  v78 = v77 == 0 || v70 < 0;
  if ( v76 == 0xFFFFFFFFi64 )
  {
    if ( v78 )
      goto LABEL_134;
    v80 = **(a2 + 0x18);
    v82 = v80;
    while ( (*v82 & 0xFFFFFF) != v70 )
    {
      v82 += 8;
      if ( v82 >= &v80[8 * v77] )
        goto LABEL_134;
    }
  }
  else
  {
    if ( v78 )
      goto LABEL_134;
    v79 = *a2 + v76;
    v80 = (v79 + 0x90);
    v81 = v79 + 8 * v77 + 0x90;
    v82 = v80;
    while ( (*v82 & 0xFFFFFF) != v70 )
    {
      v82 += 8;
      if ( v82 >= v81 )
        goto LABEL_134;
    }
  }
  if ( ((v82 - v80) & 0x400000000i64) == 0 && cur_hud_crosshair )
  {
    LOBYTE(v176) = 0;
    *(cur_hud_crosshair + 0x4A38) = data::get_bool(a2, "allowAutoTargeting", &v176);
  }
LABEL_134:
  v83 = *a2;
  v84 = 0xFFFFFFFF;
  if ( !*a2 )
    goto LABEL_144;
  v85 = data::get_name_id("tankVRCamera", 0xCui64);
  v86 = *(v83 + 0x50);
  if ( v86 )
  {
    v87 = *(v86 + 0x20);
    if ( !*(v83 + 0x20) )
      goto LABEL_141;
  }
  else
  {
    v87 = 0;
    if ( !*(v83 + 0x20) )
      goto LABEL_141;
  }
  v88 = data::get_name_id(v83, "tankVRCamera", 0xCui64, v85);
  if ( v88 >= 0 )
  {
    v89 = v87 + v88;
    goto LABEL_143;
  }
LABEL_141:
  if ( !v87 )
    goto LABEL_144;
  v89 = data::get_name_id(*(v83 + 0x50), "tankVRCamera", 0xCui64, v85);
LABEL_143:
  v84 = v89;
LABEL_144:
  v90 = *(a2 + 0x14);
  v91 = *(a2 + 0xC);
  v92 = v91 == 0 || v84 < 0;
  if ( v90 == 0xFFFFFFFFi64 )
  {
    if ( v92 )
      goto LABEL_159;
    v94 = **(a2 + 0x18);
    v96 = v94;
    while ( (*v96 & 0xFFFFFF) != v84 )
    {
      v96 += 8;
      if ( v96 >= &v94[8 * v91] )
        goto LABEL_159;
    }
  }
  else
  {
    if ( v92 )
      goto LABEL_159;
    v93 = *a2 + v90;
    v94 = (v93 + 0x90);
    v95 = v93 + 8 * v91 + 0x90;
    v96 = v94;
    while ( (*v96 & 0xFFFFFF) != v84 )
    {
      v96 += 8;
      if ( v96 >= v95 )
        goto LABEL_159;
    }
  }
  if ( ((v96 - v94) & 0x400000000i64) == 0 )
  {
    LOBYTE(v176) = 0;
    if ( data::get_bool(a2, "tankVRCamera", &v176) )
    {
      LODWORD(v176) = 4;
      *(*(game + 0x440) + 0x168i64) = data::set_int(a2, "tankVRCameraGunnerId", &v176);
      sub_145C630(a2, &v176, "tankVRCameraOffset", &MATH_FLOAT_ZERO);
      v97 = *(game + 0x440);
      *(v97 + 0x174) = v177;
      *(v97 + 0x16C) = v176;
    }
    else
    {
      *(*(game + 0x440) + 0x168i64) = 0xFFFFFFFF;
    }
  }
LABEL_159:
  v98 = *a2;
  v99 = 0xFFFFFFFF;
  if ( !*a2 )
    goto LABEL_169;
  v100 = data::get_name_id("setDefaultCameraBinding", 0x17ui64);
  v101 = *(v98 + 0x50);
  if ( v101 )
  {
    v102 = *(v101 + 0x20);
    if ( !*(v98 + 0x20) )
      goto LABEL_166;
  }
  else
  {
    v102 = 0;
    if ( !*(v98 + 0x20) )
      goto LABEL_166;
  }
  v103 = data::get_name_id(v98, "setDefaultCameraBinding", 0x17ui64, v100);
  if ( v103 >= 0 )
  {
    v104 = v102 + v103;
    goto LABEL_168;
  }
LABEL_166:
  if ( !v102 )
    goto LABEL_169;
  v104 = data::get_name_id(*(v98 + 0x50), "setDefaultCameraBinding", 0x17ui64, v100);
LABEL_168:
  v99 = v104;
LABEL_169:
  v105 = *(a2 + 0x14);
  v106 = *(a2 + 0xC);
  v107 = v106 == 0 || v99 < 0;
  if ( v105 == 0xFFFFFFFFi64 )
  {
    if ( v107 )
      goto LABEL_182;
    v109 = **(a2 + 0x18);
    v111 = v109;
    while ( (*v111 & 0xFFFFFF) != v99 )
    {
      v111 += 8;
      if ( v111 >= &v109[8 * v106] )
        goto LABEL_182;
    }
  }
  else
  {
    if ( v107 )
      goto LABEL_182;
    v108 = *a2 + v105;
    v109 = (v108 + 0x90);
    v110 = v108 + 8 * v106 + 0x90;
    v111 = v109;
    while ( (*v111 & 0xFFFFFF) != v99 )
    {
      v111 += 8;
      if ( v111 >= v110 )
        goto LABEL_182;
    }
  }
  if ( ((v111 - v109) & 0x400000000i64) == 0 )
  {
    LOBYTE(v176) = 0;
    *(*(game + 0x440) + 0x168i64) = (data::get_bool(a2, "setDefaultCameraBinding", &v176) << 0x10) - 1;
  }
LABEL_182:
  v112 = *a2;
  v113 = 0xFFFFFFFF;
  if ( !*a2 )
    goto LABEL_192;
  v114 = data::get_name_id("object", 6ui64);
  v115 = *(v112 + 0x50);
  if ( v115 )
  {
    v116 = *(v115 + 0x20);
    if ( !*(v112 + 0x20) )
      goto LABEL_189;
  }
  else
  {
    v116 = 0;
    if ( !*(v112 + 0x20) )
      goto LABEL_189;
  }
  v117 = data::get_name_id(v112, "object", 6ui64, v114);
  if ( v117 >= 0 )
  {
    v118 = v116 + v117;
    goto LABEL_191;
  }
LABEL_189:
  if ( !v116 )
    goto LABEL_192;
  v118 = data::get_name_id(*(v112 + 0x50), "object", 6ui64, v114);
LABEL_191:
  v113 = v118;
LABEL_192:
  v119 = *(a2 + 0x14);
  v120 = *(a2 + 0xC);
  v121 = v120 == 0 || v113 < 0;
  if ( v119 == 0xFFFFFFFFi64 )
  {
    if ( v121 )
      goto LABEL_210;
    v123 = **(a2 + 0x18);
    v124 = &v123[8 * v120];
    v125 = v123;
    while ( (*v125 & 0xFFFFFF) != v113 )
    {
      v125 += 8;
      if ( v125 >= v124 )
        goto LABEL_210;
    }
  }
  else
  {
    if ( v121 )
      goto LABEL_210;
    v122 = *a2 + v119;
    v123 = (v122 + 0x90);
    v124 = v122 + 8 * v120 + 0x90;
    v125 = v123;
    while ( (*v125 & 0xFFFFFF) != v113 )
    {
      v125 += 8;
      if ( v125 >= v124 )
        goto LABEL_210;
    }
  }
  if ( ((v125 - v123) & 0x400000000i64) == 0 )
  {
    v126 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v126[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(v126, v124, v17, v18);
    v127 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    v176 = 0i64;
    v177 = v127;
    v178 = 0i64;
    v128 = *a2;
    v129 = 0xFFFFFFFF;
    if ( !*a2 )
    {
LABEL_242:
      sub_CD2950(&v176, a2, v129, a1, 0i64, 0i64);
      v175 = 0;
      v150 = data::get_bool(a2, "useForTriggerFiltered", &v175);
      v151 = v178;
      if ( v150 )
      {
        if ( !v178 )
        {
LABEL_285:
          if ( v176 )
            (*(*v177 + 0x40i64))(v177);
          return 1;
        }
        v152 = 0;
        do
        {
          if ( !*(a1 + 0xF8) )
            goto LABEL_253;
          v153 = *(a1 + 0xE8);
          v154 = 0i64;
          while ( *(v153 + v154) != v176[v152] )
          {
            v155 = v153 + v154 + 8;
            v154 += 8i64;
            if ( v155 >= v153 + 8 * *(a1 + 0xF8) )
              goto LABEL_253;
          }
          if ( (v154 & 0x400000000i64) != 0 )
          {
LABEL_253:
            v156 = v151 - 1;
            if ( v151 - 1 > v152 )
            {
              memmove(&v176[v152], &v176[v152 + 1], 8i64 * v151 - (8i64 * v152 + 8));
              v156 = v178 - 1;
            }
            --v152;
            LODWORD(v178) = v156;
            v151 = v156;
          }
          ++v152;
        }
        while ( v152 < v151 );
      }
      if ( v151 )
      {
        v157 = 0i64;
        while ( 1 )
        {
          v158 = *a2;
          v159 = 0xFFFFFFFF;
          if ( !*a2 )
            goto LABEL_268;
          v160 = data::get_name_id("allowBailout", 0xCui64);
          v161 = *(v158 + 0x50);
          if ( v161 )
          {
            v162 = *(v161 + 0x20);
            if ( !*(v158 + 0x20) )
              goto LABEL_265;
          }
          else
          {
            v162 = 0;
            if ( !*(v158 + 0x20) )
              goto LABEL_265;
          }
          v163 = data::get_name_id(v158, "allowBailout", 0xCui64, v160);
          if ( v163 >= 0 )
          {
            v164 = v162 + v163;
            goto LABEL_267;
          }
LABEL_265:
          if ( !v162 )
            goto LABEL_268;
          v164 = data::get_name_id(*(v158 + 0x50), "allowBailout", 0xCui64, v160);
LABEL_267:
          v159 = v164;
LABEL_268:
          v165 = *(a2 + 0x14);
          v166 = *(a2 + 0xC);
          v167 = v166 == 0 || v159 < 0;
          if ( v165 == 0xFFFFFFFFi64 )
          {
            if ( !v167 )
            {
              v168 = **(a2 + 0x18);
              v171 = v168 + 8 * v166;
              v170 = v168;
              while ( (*v170 & 0xFFFFFF) != v159 )
              {
                v170 += 2;
                if ( v170 >= v171 )
                  goto LABEL_257;
              }
              goto LABEL_279;
            }
          }
          else if ( !v167 )
          {
            v168 = *a2 + v165 + 0x90;
            v169 = v165 + *a2 + 8 * v166 + 0x90;
            v170 = v168;
            while ( (*v170 & 0xFFFFFF) != v159 )
            {
              v170 += 2;
              if ( v170 >= v169 )
                goto LABEL_257;
            }
LABEL_279:
            if ( ((v170 - v168) & 0x400000000i64) == 0 )
            {
              v172 = v165 == 0xFFFFFFFF ? sub_1461BC0(a2, "allowBailout") : sub_1461CE0(a2, "allowBailout");
              v173 = v176[v157];
              v175 = v172;
              if ( *(v173 + 0x958) != v172 )
              {
                on_reflection_var_changed(v173 + 0x938, v173, &v175);
                *(v173 + 0x958) = v175;
              }
            }
          }
LABEL_257:
          if ( ++v157 >= v178 )
            goto LABEL_285;
        }
      }
      goto LABEL_285;
    }
    v130 = data::get_name_id("object", 6ui64);
    v131 = *(v128 + 0x50);
    if ( v131 )
    {
      v132 = *(v131 + 0x20);
      if ( !*(v128 + 0x20) )
        goto LABEL_239;
    }
    else
    {
      v132 = 0;
      if ( !*(v128 + 0x20) )
        goto LABEL_239;
    }
    v148 = data::get_name_id(v128, "object", 6ui64, v130);
    if ( v148 >= 0 )
    {
      v149 = v132 + v148;
LABEL_241:
      v129 = v149;
      goto LABEL_242;
    }
LABEL_239:
    if ( !v132 )
      goto LABEL_242;
    v149 = data::get_name_id(*(v128 + 0x50), "object", 6ui64, v130);
    goto LABEL_241;
  }
LABEL_210:
  v133 = *a2;
  v134 = 0xFFFFFFFF;
  if ( !*a2 )
    goto LABEL_220;
  v135 = data::get_name_id("allowBailout", 0xCui64);
  v136 = *(v133 + 0x50);
  if ( !v136 )
  {
    v137 = 0;
    if ( !*(v133 + 0x20) )
      goto LABEL_217;
LABEL_215:
    v138 = data::get_name_id(v133, "allowBailout", 0xCui64, v135);
    if ( v138 >= 0 )
    {
      v139 = v137 + v138;
LABEL_219:
      v134 = v139;
      goto LABEL_220;
    }
    goto LABEL_217;
  }
  v137 = *(v136 + 0x20);
  if ( *(v133 + 0x20) )
    goto LABEL_215;
LABEL_217:
  if ( v137 )
  {
    v139 = data::get_name_id(*(v133 + 0x50), "allowBailout", 0xCui64, v135);
    goto LABEL_219;
  }
LABEL_220:
  v140 = *(a2 + 0x14);
  v141 = *(a2 + 0xC);
  v142 = v141 == 0 || v134 < 0;
  if ( v140 == 0xFFFFFFFFi64 )
  {
    if ( v142 )
      return 1;
    v143 = **(a2 + 0x18);
    v146 = v143 + 8 * v141;
    v145 = v143;
    while ( (*v145 & 0xFFFFFF) != v134 )
    {
      v145 += 2;
      if ( v145 >= v146 )
        return 1;
    }
  }
  else
  {
    if ( v142 )
      return 1;
    v143 = v140 + *a2 + 0x90;
    v144 = v140 + *a2 + 8 * v141 + 0x90;
    v145 = v143;
    while ( (*v145 & 0xFFFFFF) != v134 )
    {
      v145 += 2;
      if ( v145 >= v144 )
        return 1;
    }
  }
  if ( ((v145 - v143) & 0x400000000i64) == 0 )
  {
    if ( v140 == 0xFFFFFFFF )
      v147 = sub_1461BC0(a2, "allowBailout");
    else
      v147 = sub_1461CE0(a2, "allowBailout");
    byte_4A70698 = v147;
  }
  return 1;
}
