void __fastcall shell_info(__int64 shell_info, unsigned int a2, __int64 a3)
{
  char *v4; // rcx
  __int64 v6; // r14
  int v7; // eax
  __int64 v8; // rsi
  const char *v9; // rax
  char *v10; // rbp
  unsigned __int64 v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned __int8 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  _BYTE *v17; // rbx
  size_t v18; // rbp
  void *v19; // rax
  void *v20; // rsi
  __int64 v21; // rbp
  unsigned int v22; // r12d
  unsigned int v23; // esi
  __int64 v24; // rax
  int v25; // edi
  int v26; // eax
  unsigned int v27; // eax
  int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // rdx
  unsigned int v31; // r12d
  __int64 v32; // rbx
  unsigned int v33; // ebp
  __int64 v34; // rsi
  unsigned int v35; // eax
  unsigned int v36; // r12d
  __int64 *v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  unsigned int v40; // edi
  __int64 v41; // rbx
  unsigned int v42; // edi
  unsigned int v43; // ecx
  __int64 v44; // rbx
  unsigned int v45; // eax
  __int128 *v46; // rdx
  __int64 v47; // rcx
  int v48; // xmm0_4
  char *v49; // rax
  unsigned int v50; // ebp
  unsigned int v51; // ecx
  char *v52; // rax
  char *v53; // rax
  int v54; // eax
  double v55; // xmm0_8
  __int64 v56; // rbx
  unsigned int v57; // ebp
  unsigned int v58; // esi
  __int64 v59; // rax
  int v60; // edi
  int v61; // eax
  unsigned int v62; // eax
  int v63; // eax
  unsigned int v64; // ecx
  __int64 *v65; // r12
  unsigned int v66; // ebp
  __int64 v67; // rdx
  unsigned int v68; // ebx
  __int64 v69; // rsi
  unsigned int v70; // eax
  unsigned int v71; // ebp
  __int64 *v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdx
  unsigned int v75; // edi
  __int64 *v76; // rdx
  int v77; // eax
  int v78; // ecx
  const char *v79; // rbp
  __int64 v80; // rsi
  unsigned int v81; // ebx
  unsigned __int64 v82; // rdi
  __int64 v83; // rbx
  __int64 v84; // rax
  const char *v85; // rcx
  __int64 v86; // r15
  __int64 v87; // rax
  const char *v88; // rsi
  __int64 v89; // rbx
  unsigned __int64 v90; // rdi
  __int64 v91; // rax
  const char *v92; // rcx
  unsigned int v93; // r15d
  __int64 v94; // rdi
  __int64 v95; // rsi
  unsigned __int64 v96; // rbx
  __int64 v97; // rax
  const char *v98; // rcx
  __m128 v99; // xmm1
  __m128 v100; // xmm2
  __m128 v101; // xmm0
  int v102; // xmm0_4
  unsigned int v103; // ecx
  bool v104; // al
  unsigned int v105; // ebp
  __int128 *v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  char v109; // al
  bool v110; // cl
  __int64 v111; // rbp
  unsigned int v112; // r15d
  unsigned int v113; // esi
  __int64 v114; // rax
  int v115; // edi
  int v116; // eax
  unsigned int v117; // eax
  int v118; // edx
  unsigned int v119; // ebp
  __int64 *v120; // r8
  unsigned int v121; // r15d
  __int64 v122; // rdi
  unsigned int v123; // esi
  __int64 v124; // rax
  unsigned int v125; // edx
  unsigned int v126; // r15d
  __int64 *v127; // rax
  __int64 v128; // rbp
  __int64 v129; // rdi
  unsigned int v130; // esi
  __int64 v131; // rdi
  __int64 *v132; // rdx
  float v133; // xmm0_4
  __int64 v134; // rbp
  unsigned int v135; // ebx
  unsigned int v136; // esi
  __int64 v137; // rax
  int v138; // edi
  int v139; // eax
  unsigned int v140; // eax
  int v141; // eax
  unsigned int v142; // ecx
  unsigned int v143; // ebx
  __int64 v144; // r15
  unsigned int v145; // edx
  __int64 v146; // rdi
  unsigned int v147; // eax
  unsigned int v148; // ebx
  __int64 *v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // rdx
  unsigned int v152; // ebp
  __int64 v153; // r15
  int v154; // ecx
  __int64 v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rbx
  __int64 v158; // rax
  CHAR *v159; // rax
  CHAR *v160; // rbp
  CHAR *v161; // rsi
  __int64 v162; // rbp
  unsigned int v163; // ebx
  unsigned int v164; // esi
  __int64 v165; // rax
  int v166; // edi
  int v167; // eax
  unsigned int v168; // eax
  int v169; // ecx
  unsigned int v170; // edx
  unsigned int v171; // ebx
  __int64 v172; // rax
  unsigned int v173; // ebp
  __int64 v174; // rsi
  unsigned int v175; // eax
  unsigned int v176; // ebx
  __int64 *v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // rdx
  unsigned int v180; // ebp
  __int64 v181; // rax
  __int64 v182; // r13
  __int64 v183; // rdx
  __int64 v184; // rdx
  CHAR *v185; // [rsp+28h] [rbp-A0h] BYREF
  void *v186; // [rsp+30h] [rbp-98h]
  __int64 v187; // [rsp+38h] [rbp-90h]
  __int64 v188; // [rsp+40h] [rbp-88h]
  unsigned int v189; // [rsp+4Ch] [rbp-7Ch]
  __int64 v190[3]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v191; // [rsp+68h] [rbp-60h]

  v4 = *(a3 + 0x30);
  if ( !v4 || !*v4 )
    return;
  v189 = a2;
  v6 = *a3;
  v7 = *(shell_info + 0x150);
  if ( v7 == 0xFFFFFFFF || *(shell_info + 0x154) == 0xFFFFFFFF )
  {
    *(shell_info + 0x150) = sub_16CF170(v4);
    v8 = *(game + 0x498);
    v185 = &szFile;
    v9 = sub_1459B30(v6, "bulletType", &v185);
    if ( v9 )
    {
      v10 = v9;
      v11 = strlen(v9);
      v12 = sub_1285C0(v10, v11);
      v13 = sub_128A70(v8 + 0x3568, v10, v11, v12);
    }
    else
    {
      v13 = 0xFFFFFFFF;
    }
    *(shell_info + 0x154) = v13;
    v7 = *(shell_info + 0x150);
  }
  LODWORD(v188) = v7;
  v14 = *(a3 + 8);
  v185 = *(a3 + 0x10);
  v15 = sub_1459B30(v6, "bulletName", &v185);
  v16 = *(shell_info + 0x10);
  if ( v16 != v15 )
  {
    v17 = v15;
    if ( v16 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v17 && *v17 && (v18 = strlen(v17) + 1, (v19 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v18)) != 0i64) )
    {
      v20 = v19;
      memmove(v19, v17, v18);
    }
    else
    {
      v20 = 0i64;
    }
    *(shell_info + 0x10) = v20;
  }
  v21 = *v6;
  v22 = 0xFFFFFFFF;
  if ( *v6 )
  {
    v23 = sub_1285C0("rocket", 6ui64);
    v24 = *(v21 + 0x50);
    if ( v24 )
    {
      v25 = *(v24 + 0x20);
      if ( !*(v21 + 0x20) )
        goto LABEL_25;
    }
    else
    {
      v25 = 0;
      if ( !*(v21 + 0x20) )
        goto LABEL_25;
    }
    v26 = sub_128A70(v21, "rocket", 6ui64, v23);
    if ( v26 >= 0 )
    {
      v27 = v25 + v26;
LABEL_27:
      v22 = v27;
      goto LABEL_28;
    }
LABEL_25:
    if ( !v25 )
      goto LABEL_28;
    v27 = sub_128A70(*(v21 + 0x50), "rocket", 6ui64, v23);
    goto LABEL_27;
  }
LABEL_28:
  v28 = *(v6 + 0x10);
  if ( v28 == 0xFFFFFFFF )
  {
    v35 = *(v6 + 0xE);
    v30 = 0i64;
    if ( *(v6 + 0xE) )
    {
      v36 = v22 + 1;
      v37 = *(v6 + 0x18);
      v38 = *v37;
      v39 = *(v37 + 2) - 8 * v35;
      v40 = 0;
      while ( (*(*(v38 + v39) + 8i64) & 0x3FFFFFFF) != v36 )
      {
        ++v40;
        v39 += 8i64;
        if ( v35 == v40 )
          goto LABEL_45;
      }
      if ( v40 >= v35 )
        v30 = 0i64;
      else
        v30 = *(v38 + v39);
    }
  }
  else
  {
    v29 = *(v6 + 0xE);
    v30 = 0i64;
    if ( v28 < (v28 + v29) )
    {
      v31 = v22 + 1;
      v32 = *(*v6 + 0x5Ci64) + *v6 + 0x90i64;
      v33 = 0;
      while ( 1 )
      {
        v34 = 0x20i64 * (v28 + v33);
        if ( (*(v32 + v34 + 8) & 0x3FFFFFFF) == v31 )
          break;
        if ( v29 == ++v33 )
          goto LABEL_45;
      }
      v41 = v34 + v32;
      v30 = 0i64;
      if ( v33 < v29 )
        v30 = v41;
    }
  }
LABEL_45:
  v42 = v188;
  if ( !v30 )
    v30 = v6;
  v191 = v30;
  shell_info_alt(shell_info + 0x18, v30);
  if ( (v189 & 0x80000000) != 0 )
  {
    v43 = (v189 & 0x7FFFFFFF) >> 0x1B;
    v44 = 0i64;
    if ( (v189 & 0x7FFFFFFF) < DWORD2(xmmword_4ACF680) )
    {
      v45 = v189 & 0x7FFFFFF;
      if ( (v189 & 0x7FFFFFF) < 0x80 << v43 )
      {
        v46 = (&xmmword_4ACF620 + 8);
LABEL_54:
        v47 = *(v46 + v43);
        if ( v47 )
          v44 = *(v47 + 8i64 * v45);
        else
          v44 = 0i64;
      }
    }
  }
  else
  {
    v43 = v189 >> 0x1B;
    v44 = 0i64;
    if ( xmmword_4ACF620 > v189 )
    {
      v45 = v189 & 0x7FFFFFF;
      if ( (v189 & 0x7FFFFFF) < 0x80 << (v189 >> 0x1B) )
      {
        v46 = &xmmword_4ACF5C0;
        goto LABEL_54;
      }
    }
  }
  LOBYTE(v185) = 0;
  *(shell_info + 0x14C) = sub_145BBF0(v6, "isAam", &v185);
  if ( !v44 )
  {
    LODWORD(v185) = 0;
    *(shell_info + 0x58) = sub_145B6B0(v6, "caliber", &v185);
    goto LABEL_61;
  }
  LODWORD(v185) = *(v44 + 0x10);
  *(shell_info + 0x58) = sub_145B6B0(v6, "caliber", &v185);
  if ( !*(v44 + 0x3C0) )
  {
LABEL_61:
    v48 = 0;
    goto LABEL_62;
  }
  v48 = *(v44 + 0x3C4);
LABEL_62:
  LODWORD(v185) = v48;
  *(shell_info + 0x5C) = sub_145B6B0(v6, "speed", &v185);
  LODWORD(v185) = 0x3F800000;
  *(shell_info + 0x148) = sub_145B6B0(v6, "recoilMultiplier", &v185);
  LODWORD(v185) = *(*(game + 0x498) + 4i64 * v14 + 0x212C);
  *(shell_info + 0x60) = sub_145B6B0(v6, "speedDispersion", &v185);
  LOBYTE(v185) = 0;
  *(shell_info + 0x6C) = sub_145BBF0(v6, "explosionInAir", &v185);
  LOBYTE(v185) = 0;
  *(shell_info + 0x6D) = sub_145BBF0(v6, "selfDestructionInAir", &v185);
  v185 = 0i64;
  v49 = sub_1459B30(v6, "shotFxType", &v185);
  v50 = 0xFFFFFFFF;
  v51 = 0xFFFFFFFF;
  if ( v49 )
  {
    v51 = 0xFFFFFFFF;
    if ( *v49 )
      v51 = sub_93E610(v49);
  }
  *(shell_info + 0x74) = v51;
  v185 = 0i64;
  v52 = sub_1459B30(v6, "attachFxType", &v185);
  if ( v52 && *v52 )
    v50 = sub_93E610(v52);
  *(shell_info + 0x78) = v50;
  v185 = 0i64;
  v53 = sub_1459B30(v6, "selfDestructionFx", &v185);
  if ( !v53 || !*v53 || (v54 = sub_93E610(v53), *(shell_info + 0x70) = v54, v54 < 0) )
    *(shell_info + 0x70) = 8 - (*(shell_info + 0x6C) == 0);
  LODWORD(v185) = *(*(game + 0x498) + 0x38C8i64);
  *(shell_info + 0x13C) = sub_145B6B0(v6, "ricochetProbability", &v185);
  LODWORD(v185) = 0x461C4000;
  *(shell_info + 0x7C) = sub_145B6B0(v6, "effectiveDistance", &v185);
  LODWORD(v185) = *(*(game + 0x498) + 0x38D4i64);
  *(shell_info + 0x17C) = sub_145B6B0(v6, "ricochetTimeToLive", &v185);
  LODWORD(v185) = 0;
  *(shell_info + 0x134) = sub_145A390(v6, "bulletCount", &v185);
  LODWORD(v185) = 0xBF800000;
  *(shell_info + 0x140) = sub_145B6B0(v6, "maxDeltaAngle", &v185);
  LODWORD(v185) = 0xBF800000;
  *(shell_info + 0x144) = sub_145B6B0(v6, "maxDeltaAngleVertical", &v185);
  v55 = sub_16A0C40(v42);
  if ( v44 )
    sub_223310(shell_info + 0x80, v44 + 0xE8);
  else
    sub_7A4540(shell_info + 0x80, v6);
  v56 = *v6;
  v57 = 0xFFFFFFFF;
  if ( *v6 )
  {
    v58 = sub_1285C0("visual", 6ui64);
    v59 = *(v56 + 0x50);
    if ( v59 )
    {
      v60 = *(v59 + 0x20);
      if ( !*(v56 + 0x20) )
        goto LABEL_82;
    }
    else
    {
      v60 = 0;
      if ( !*(v56 + 0x20) )
        goto LABEL_82;
    }
    v61 = sub_128A70(v56, "visual", 6ui64, v58);
    if ( v61 >= 0 )
    {
      v62 = v60 + v61;
LABEL_84:
      v57 = v62;
      goto LABEL_85;
    }
LABEL_82:
    if ( !v60 )
      goto LABEL_85;
    v62 = sub_128A70(*(v56 + 0x50), "visual", 6ui64, v58);
    goto LABEL_84;
  }
LABEL_85:
  v63 = *(v6 + 0x10);
  if ( v63 == 0xFFFFFFFF )
  {
    v70 = *(v6 + 0xE);
    v65 = 0i64;
    if ( *(v6 + 0xE) )
    {
      v71 = v57 + 1;
      v72 = *(v6 + 0x18);
      v73 = *v72;
      v74 = *(v72 + 2) - 8 * v70;
      v75 = 0;
      while ( (*(*(v73 + v74) + 8i64) & 0x3FFFFFFF) != v71 )
      {
        ++v75;
        v74 += 8i64;
        if ( v70 == v75 )
          goto LABEL_102;
      }
      if ( v75 >= v70 )
        v65 = 0i64;
      else
        v65 = *(v73 + v74);
    }
  }
  else
  {
    v64 = *(v6 + 0xE);
    v65 = 0i64;
    if ( v63 < (v63 + v64) )
    {
      v66 = v57 + 1;
      v67 = *(*v6 + 0x5Ci64) + *v6 + 0x90i64;
      v68 = 0;
      while ( 1 )
      {
        v69 = 0x20i64 * (v63 + v68);
        if ( (*(v67 + v69 + 8) & 0x3FFFFFFF) == v66 )
          break;
        if ( v64 == ++v68 )
          goto LABEL_102;
      }
      v76 = (v69 + v67);
      v65 = 0i64;
      if ( v68 < v64 )
        v65 = v76;
    }
  }
LABEL_102:
  if ( !v65 )
    v65 = &qword_4B67850;
  v190[0] = 0x42C80000i64;
  sub_145C170(v65, &v185, "range_percent_of_ammo", v190);
  *(shell_info + 0x110) = v185;
  LODWORD(v185) = 4;
  v77 = sub_145A390(v65, "traceFreq", &v185);
  v78 = 1;
  if ( v77 >= 2 )
    v78 = v77;
  *(shell_info + 0x11C) = v78;
  *(shell_info + 0x118) = v78;
  LODWORD(v185) = 0;
  *(shell_info + 0x130) = sub_145A390(v65, "traceOffset", &v185);
  v185 = 0i64;
  v79 = sub_1459B30(v65, "tracer", &v185);
  v80 = *(*(game + 0x630) + 0x3C8B0i64);
  if ( v80 )
  {
    v81 = 0xFFFFFFFF;
    LODWORD(v82) = 0xFFFFFFFF;
    if ( v79 )
    {
      LODWORD(v82) = 0xFFFFFFFF;
      if ( *(v80 + 0x181140) )
      {
        v83 = 0x10i64;
        v82 = 0i64;
        while ( 1 )
        {
          v84 = *(v80 + 0x181130);
          v85 = &szFile;
          if ( *(v84 + v83) )
            v85 = *(v84 + v83 - 0x10);
          if ( !stricmp(v85, v79) )
            break;
          ++v82;
          v83 += 0x68i64;
          if ( v82 >= *(v80 + 0x181140) )
          {
            LODWORD(v82) = 0xFFFFFFFF;
            break;
          }
        }
        v81 = 0xFFFFFFFF;
      }
    }
    *(shell_info + 0x120) = v82;
    v86 = *(*(game + 0x630) + 0x3C8B0i64);
    v185 = 0i64;
    v87 = sub_1459B30(v65, "trail", &v185);
    if ( v87 && *(v86 + 0x181158) )
    {
      v88 = v87;
      v188 = shell_info;
      v89 = 0x10i64;
      v90 = 0i64;
      while ( 1 )
      {
        v91 = *(v86 + 0x181148);
        v92 = &szFile;
        if ( *(v91 + v89) )
          v92 = *(v91 + v89 - 0x10);
        if ( !stricmp(v92, v88) )
          break;
        ++v90;
        v89 += 0x28i64;
        if ( v90 >= *(v86 + 0x181158) )
        {
          shell_info = v188;
          v81 = 0xFFFFFFFF;
          goto LABEL_126;
        }
      }
      v81 = v90;
      shell_info = v188;
    }
LABEL_126:
    *(shell_info + 0x124) = v81;
    LOBYTE(v185) = 0;
    *(shell_info + 0x12C) = sub_145BBF0(v65, "projOff", &v185);
  }
  else
  {
    *(shell_info + 0x120) = 0xFFFFFFFFFFFFFFFFui64;
  }
  v93 = 0xFFFFFFFF;
  if ( v79 )
  {
    v94 = *(game + 0x498);
    if ( *(v94 + 0x23E0) )
    {
      v95 = 0x10i64;
      v96 = 0i64;
      while ( 1 )
      {
        v97 = *(v94 + 0x23D8);
        v98 = &szFile;
        if ( *(v97 + v95) )
          v98 = *(v97 + v95 - 0x10);
        if ( !stricmp(v98, v79) )
          break;
        ++v96;
        v95 += 0x38i64;
        if ( v96 >= *(v94 + 0x23E0) )
          goto LABEL_136;
      }
      v93 = v96;
    }
  }
LABEL_136:
  *(shell_info + 0x128) = v93;
  if ( *&v55 <= *&dword_448A1DC )
  {
    v102 = LODWORD(Y);
  }
  else if ( *&v55 >= *&dword_44A02F0 )
  {
    v102 = dword_4487F08;
  }
  else
  {
    v99 = dword_44A4444;
    v100.m128_f32[0] = *&dword_448A1DC - *&v55;
    v99.m128_f32[0] = (*&dword_44A4444 * *&v55) + *&dword_44A9030;
    v101 = _mm_cmple_ss(0i64, v100);
    v102 = _mm_andnot_ps(v101, v99).m128_u32[0] | LODWORD(Y) & v101.m128_i32[0];
  }
  LODWORD(v185) = v102;
  *(shell_info + 0x138) = sub_145B6B0(v6, "shellExplScale", &v185);
  if ( (v189 & 0x80000000) != 0 )
  {
    v103 = (v189 & 0x7FFFFFFF) >> 0x1B;
    v104 = 0;
    if ( (v189 & 0x7FFFFFFF) >= DWORD2(xmmword_4ACEF68) )
      goto LABEL_152;
    v105 = v189 & 0x7FFFFFF;
    if ( (v189 & 0x7FFFFFF) >= 0x80 << v103 )
      goto LABEL_152;
    v106 = (&xmmword_4ACEF08 + 8);
  }
  else
  {
    v103 = v189 >> 0x1B;
    v104 = 0;
    if ( xmmword_4ACEF08 <= v189 )
      goto LABEL_152;
    v105 = v189 & 0x7FFFFFF;
    if ( (v189 & 0x7FFFFFF) >= 0x80 << (v189 >> 0x1B) )
      goto LABEL_152;
    v106 = &xmmword_4ACEEA8;
  }
  v107 = *(v106 + v103);
  v104 = v107 && (v108 = *(v107 + 8i64 * v105)) != 0 && *(v108 + 4) >= *(*(game + 0x498) + 0x22F8i64);
LABEL_152:
  LOBYTE(v185) = v104;
  *(shell_info + 0x158) = sub_145BBF0(v6, "playHitEffectFromServerOnly", &v185);
  LOBYTE(v185) = 0;
  v109 = sub_145BBF0(v6, "hasProximityFuse", &v185);
  v110 = 1;
  if ( !v109 )
  {
    LODWORD(v185) = 0;
    v110 = COERCE_FLOAT(COERCE_UNSIGNED_INT(sub_145B6B0(v6, "proximityFuseRange", &v185)) & xmmword_449AF40) >= *&dword_44A0308;
  }
  *(shell_info + 0x159) = v110;
  v111 = *v6;
  v112 = 0xFFFFFFFF;
  if ( *v6 )
  {
    v113 = sub_1285C0("proximityFuse", 0xDui64);
    v114 = *(v111 + 0x50);
    if ( v114 )
    {
      v115 = *(v114 + 0x20);
      if ( !*(v111 + 0x20) )
        goto LABEL_161;
    }
    else
    {
      v115 = 0;
      if ( !*(v111 + 0x20) )
        goto LABEL_161;
    }
    v116 = sub_128A70(v111, "proximityFuse", 0xDui64, v113);
    if ( v116 >= 0 )
    {
      v117 = v115 + v116;
LABEL_163:
      v112 = v117;
      goto LABEL_164;
    }
LABEL_161:
    if ( !v115 )
      goto LABEL_164;
    v117 = sub_128A70(*(v111 + 0x50), "proximityFuse", 0xDui64, v113);
    goto LABEL_163;
  }
LABEL_164:
  v118 = *(v6 + 0x10);
  if ( v118 == 0xFFFFFFFF )
  {
    v125 = *(v6 + 0xE);
    v120 = 0i64;
    if ( *(v6 + 0xE) )
    {
      v126 = v112 + 1;
      v127 = *(v6 + 0x18);
      v128 = *v127;
      v129 = *(v127 + 2) - 8 * v125;
      v130 = 0;
      while ( (*(*(v128 + v129) + 8i64) & 0x3FFFFFFF) != v126 )
      {
        ++v130;
        v129 += 8i64;
        if ( v125 == v130 )
          goto LABEL_181;
      }
      if ( v130 >= v125 )
        v120 = 0i64;
      else
        v120 = *(v128 + v129);
    }
  }
  else
  {
    v119 = *(v6 + 0xE);
    v120 = 0i64;
    if ( v118 < (v118 + v119) )
    {
      v121 = v112 + 1;
      v122 = *v6 + *(*v6 + 0x5Ci64) + 0x90i64;
      v123 = 0;
      while ( 1 )
      {
        v124 = 0x20i64 * (v118 + v123);
        if ( (*(v122 + v124 + 8) & 0x3FFFFFFF) == v121 )
          break;
        if ( v119 == ++v123 )
          goto LABEL_181;
      }
      v131 = v124 + v122;
      v120 = 0i64;
      if ( v123 < v119 )
        v120 = v131;
    }
  }
LABEL_181:
  v132 = &qword_4B67850;
  if ( v120 )
    v132 = v120;
  sub_244590(shell_info + 0x15C, v132, v6);
  LODWORD(v185) = 0xBF800000;
  *(shell_info + 0x180) = sub_145B6B0(v6, "timeFuseDistanceError", &v185);
  LODWORD(v185) = 0;
  *(shell_info + 0x184) = sub_145B6B0(v6, "timeFuseDistanceOffset", &v185);
  LODWORD(v185) = 0xBF800000;
  v133 = sub_145B6B0(v191, "shotFreq", &v185);
  *(shell_info + 0x64) = v133;
  if ( v133 > 0.0 )
    *(shell_info + 0x68) = Y / fmaxf(v133, *&dword_44A01A0);
  LODWORD(v185) = 0xBF800000;
  *(shell_info + 0x188) = sub_145B6B0(v6, "beamPatchRadius", &v185);
  LOBYTE(v185) = 0;
  *(shell_info + 0x18C) = sub_145BBF0(v6, "doubleBullet", &v185);
  LODWORD(v185) = 0;
  *(shell_info + 0x190) = sub_145B6B0(v6, "secondBulletOffset", &v185);
  LODWORD(v185) = 0x3F800000;
  *(shell_info + 0x194) = sub_145B6B0(v6, "secondBulletSpeedScale", &v185);
  LODWORD(v185) = 0x40000000;
  *(shell_info + 0x198) = sub_145B6B0(v6, "rotationSpeed", &v185);
  v134 = *v6;
  v135 = 0xFFFFFFFF;
  if ( *v6 )
  {
    v136 = sub_1285C0("DamageParts", 0xBui64);
    v137 = *(v134 + 0x50);
    if ( v137 )
    {
      v138 = *(v137 + 0x20);
      if ( !*(v134 + 0x20) )
        goto LABEL_192;
    }
    else
    {
      v138 = 0;
      if ( !*(v134 + 0x20) )
        goto LABEL_192;
    }
    v139 = sub_128A70(v134, "DamageParts", 0xBui64, v136);
    if ( v139 >= 0 )
    {
      v140 = v138 + v139;
LABEL_194:
      v135 = v140;
      goto LABEL_195;
    }
LABEL_192:
    if ( !v138 )
      goto LABEL_195;
    v140 = sub_128A70(*(v134 + 0x50), "DamageParts", 0xBui64, v136);
    goto LABEL_194;
  }
LABEL_195:
  v141 = *(v6 + 0x10);
  if ( v141 == 0xFFFFFFFF )
  {
    v147 = *(v6 + 0xE);
    if ( *(v6 + 0xE) )
    {
      v148 = v135 + 1;
      v149 = *(v6 + 0x18);
      v150 = *v149;
      v151 = *(v149 + 2) - 8 * v147;
      v152 = 0;
      while ( (*(*(v150 + v151) + 8i64) & 0x3FFFFFFF) != v148 )
      {
        ++v152;
        v151 += 8i64;
        if ( v147 == v152 )
          goto LABEL_229;
      }
      if ( v152 < v147 )
      {
        v153 = *(v150 + v151);
        if ( v153 )
        {
LABEL_210:
          v154 = *(v153 + 0xE);
          if ( !*(v153 + 0xE) )
            goto LABEL_229;
          if ( v154 != 1 )
          {
            dg_debug(1u, "number of damage parts in projectile cannot be more than 1", 0i64, 0);
            LOWORD(v154) = *(v153 + 0xE);
          }
          v155 = *(v153 + 0x10);
          v156 = 0xFFFFFFFFi64;
          if ( v155 == 0xFFFFFFFFi64 )
          {
            if ( v154 )
            {
              v158 = *(v153 + 0x18);
              v156 = *(v158 + 8) - 8 * v154;
              v157 = *(*v158 + v156);
              goto LABEL_219;
            }
          }
          else if ( v154 )
          {
            v156 = *v153 + *(*v153 + 0x5Ci64);
            v157 = 0x20 * v155 + v156 + 0x90;
LABEL_219:
            v159 = *(shell_info + 0x10);
            v160 = &szFile;
            if ( !v159 )
              v159 = &szFile;
            v185 = 0i64;
            v187 = 0i64;
            v190[1] = v159;
            LODWORD(v190[0]) = 1;
            v186 = off_4B678C8;
            sub_1546EF0(&v185, v156, "bullet@%s", v190, 1);
            LODWORD(v190[0]) = GetCurrentThreadId();
            if ( dword_4B73E58 != LODWORD(v190[0]) )
            {
              AcquireSRWLockExclusive(&stru_4B73E50);
              dword_4B73E58 = v190[0];
            }
            ++dword_4B73E60;
            v161 = v185;
            if ( v187 )
              v160 = v185;
            *(shell_info + 0x19C) = sub_17078C0(v160, v157, "dm_part");
            if ( !--dword_4B73E60 )
            {
              dword_4B73E58 = 0;
              ReleaseSRWLockExclusive(&stru_4B73E50);
            }
            if ( v161 )
              (*(*v186 + 0x40i64))(v186, v161);
            goto LABEL_229;
          }
          v157 = 0i64;
          goto LABEL_219;
        }
      }
    }
  }
  else
  {
    v142 = *(v6 + 0xE);
    if ( v141 < (v141 + v142) )
    {
      v143 = v135 + 1;
      v144 = *v6 + *(*v6 + 0x5Ci64) + 0x90i64;
      v145 = 0;
      while ( 1 )
      {
        v146 = 0x20i64 * (v141 + v145);
        if ( (*(v144 + v146 + 8) & 0x3FFFFFFF) == v143 )
          break;
        if ( v142 == ++v145 )
          goto LABEL_229;
      }
      if ( v145 < v142 )
      {
        v153 = v146 + v144;
        goto LABEL_210;
      }
    }
  }
LABEL_229:
  v162 = *v6;
  v163 = 0xFFFFFFFF;
  if ( !*v6 )
    goto LABEL_239;
  v164 = sub_1285C0("DamageEffects", 0xDui64);
  v165 = *(v162 + 0x50);
  if ( v165 )
  {
    v166 = *(v165 + 0x20);
    if ( !*(v162 + 0x20) )
      goto LABEL_236;
  }
  else
  {
    v166 = 0;
    if ( !*(v162 + 0x20) )
      goto LABEL_236;
  }
  v167 = sub_128A70(v162, "DamageEffects", 0xDui64, v164);
  if ( v167 >= 0 )
  {
    v168 = v166 + v167;
    goto LABEL_238;
  }
LABEL_236:
  if ( !v166 )
    goto LABEL_239;
  v168 = sub_128A70(*(v162 + 0x50), "DamageEffects", 0xDui64, v164);
LABEL_238:
  v163 = v168;
LABEL_239:
  v169 = *(v6 + 0x10);
  if ( v169 == 0xFFFFFFFF )
  {
    v175 = *(v6 + 0xE);
    if ( *(v6 + 0xE) )
    {
      v176 = v163 + 1;
      v177 = *(v6 + 0x18);
      v178 = *v177;
      v179 = *(v177 + 2) - 8 * v175;
      v180 = 0;
      while ( (*(*(v178 + v179) + 8i64) & 0x3FFFFFFF) != v176 )
      {
        ++v180;
        v179 += 8i64;
        if ( v175 == v180 )
          return;
      }
      if ( v180 < v175 )
      {
        v181 = *(v178 + v179);
        if ( v181 )
          goto LABEL_254;
      }
    }
  }
  else
  {
    v170 = *(v6 + 0xE);
    if ( v169 < (v169 + v170) )
    {
      v171 = v163 + 1;
      v172 = *(*v6 + 0x5Ci64) + *v6 + 0x90i64;
      v173 = 0;
      while ( 1 )
      {
        v174 = 0x20i64 * (v169 + v173);
        if ( (*(v172 + v174 + 8) & 0x3FFFFFFF) == v171 )
          break;
        if ( v170 == ++v173 )
          return;
      }
      if ( v173 < v170 )
      {
        v181 = v174 + v172;
LABEL_254:
        if ( *(v181 + 0xE) )
        {
          v182 = shell_info + 0x1A0;
          v183 = *(v181 + 0x10);
          if ( v183 == 0xFFFFFFFFi64 )
            v184 = *(**(v181 + 0x18) + *(*(v181 + 0x18) + 8i64) - 8 * *(v181 + 0xE));
          else
            v184 = *v181 + *(*v181 + 0x5Ci64) + 0x20 * v183 + 0x90;
          sub_1547980(v182, v184, 0i64);
        }
      }
    }
  }
}
