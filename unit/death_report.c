void __fastcall death_report(__int64 Unit, __int64 a2, __int64 a3)
{
  __m128 v3; // xmm2
  unsigned __int16 v4; // r14
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdi
  unsigned int *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  _QWORD *v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned __int64 i; // rdx
  __int64 v21; // rbx
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // r14
  __int64 v25; // rbp
  char *v26; // rbx
  unsigned __int64 v27; // rdi
  char *v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rbp
  unsigned int v33; // ecx
  float v34; // xmm0_4
  float v35; // xmm1_4
  unsigned int v36; // ecx
  float v37; // xmm3_4
  float v38; // xmm1_4
  __m128 v39; // xmm4
  __m128 v40; // xmm6
  __m128 v41; // xmm5
  __m128 v42; // xmm2
  float v43; // xmm7_4
  int v44; // eax
  __int64 v45; // rcx
  __m128 v46; // xmm3
  __m128 v47; // xmm0
  __m128 v48; // xmm3
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v50; // rcx
  unsigned __int64 v51; // rbx
  char v52; // cl
  _QWORD *v53; // rdx
  __int16 *v54; // rax
  CHAR *v55; // rcx
  const char *v56; // r14
  CHAR *v57; // rdx
  __int64 v58; // rbp
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rax
  bool v62; // bp
  unsigned int v63; // eax
  int v64; // ecx
  CHAR *v65; // rax
  CHAR *v66; // rcx
  double ZPos; // xmm0_8
  double YPos; // xmm1_8
  double XPos; // xmm2_8
  __int64 v70; // rdx
  __int64 v71; // rbp
  unsigned int v72; // edi
  char v73; // cl
  unsigned int v74; // eax
  _QWORD *v75; // rdx
  double v76; // rax
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  _QWORD *v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rcx
  unsigned __int64 v84; // rdx
  __int64 v85; // rbp
  unsigned int v86; // ebx
  unsigned int *v87; // rax
  unsigned __int64 v88; // rdi
  float v89; // xmm8_4
  float v90; // xmm9_4
  int v91; // xmm12_4
  float v92; // xmm11_4
  float v93; // xmm10_4
  __int64 v94; // r15
  __int64 v95; // r14
  __int64 v96; // r12
  unsigned __int64 v97; // r13
  __int64 v98; // rax
  __int64 v99; // rbp
  int v100; // eax
  __int64 v101; // rax
  unsigned int v102; // edx
  __int64 v103; // rax
  unsigned int v104; // edx
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rax
  bool v108; // zf
  _QWORD *v109; // r14
  const char *v110; // rax
  const char *v111; // rbx
  unsigned int v112; // eax
  void *v113; // r14
  __int64 v114; // rdx
  __int64 v115; // rax
  __int64 v116; // rcx
  unsigned int v117; // r9d
  __int64 v118; // rax
  __int64 v119; // rcx
  char v120; // bl
  int v121; // edx
  int v122; // ebx
  int v123; // eax
  _QWORD *v124; // rcx
  __int64 v125; // rax
  char v126; // al
  __int64 v127; // rcx
  __int64 v128; // rax
  float v129; // xmm0_4
  __int64 v130; // rcx
  __int64 UnitWeapons; // r13
  int v132; // ecx
  unsigned int v133; // ebx
  __int64 v134; // r12
  unsigned __int64 v135; // rbp
  unsigned __int64 v136; // r15
  float v137; // xmm1_4
  float v138; // xmm0_4
  float *v139; // rdx
  unsigned int v140; // r14d
  __int64 v141; // rcx
  int v142; // edx
  float v143; // xmm2_4
  unsigned __int64 v144; // rcx
  float v145; // xmm1_4
  float *v146; // rcx
  float v147; // xmm2_4
  float v148; // xmm7_4
  float *v149; // rax
  __int64 v150; // rbx
  int v151; // eax
  __int64 v152; // r13
  float v153; // xmm6_4
  int v154; // edi
  int v155; // eax
  unsigned int v156; // edi
  unsigned __int8 v157; // al
  __int64 v158; // rax
  float v159; // xmm0_4
  float v160; // xmm2_4
  float v161; // xmm1_4
  float v162; // xmm2_4
  __int64 v163; // [rsp+28h] [rbp-2A0h]
  char v164; // [rsp+40h] [rbp-288h]
  __int64 v165; // [rsp+40h] [rbp-288h]
  void *v166; // [rsp+48h] [rbp-280h] BYREF
  _QWORD *v167; // [rsp+50h] [rbp-278h]
  size_t Size; // [rsp+58h] [rbp-270h]
  __int64 v169; // [rsp+60h] [rbp-268h]
  __int64 v170; // [rsp+68h] [rbp-260h]
  __int64 v171; // [rsp+70h] [rbp-258h]
  __int64 v172; // [rsp+78h] [rbp-250h]
  __int128 v173; // [rsp+80h] [rbp-248h] BYREF
  __int64 v174; // [rsp+90h] [rbp-238h]
  double v175; // [rsp+98h] [rbp-230h]
  __int128 v176; // [rsp+A0h] [rbp-228h]
  __int64 v177; // [rsp+B0h] [rbp-218h]
  double v178; // [rsp+B8h] [rbp-210h]
  __int128 v179; // [rsp+C0h] [rbp-208h]
  __int128 v180; // [rsp+D0h] [rbp-1F8h]
  __int128 v181; // [rsp+E0h] [rbp-1E8h]
  __int128 v182; // [rsp+F0h] [rbp-1D8h]
  __int128 v183; // [rsp+100h] [rbp-1C8h]
  __int128 v184; // [rsp+110h] [rbp-1B8h]
  __int128 v185; // [rsp+120h] [rbp-1A8h]
  __int128 v186; // [rsp+130h] [rbp-198h]
  __int16 v187; // [rsp+140h] [rbp-188h]
  __int64 v188; // [rsp+148h] [rbp-180h]
  __int64 v189; // [rsp+150h] [rbp-178h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+158h] [rbp-170h]
  char Src[68]; // [rsp+160h] [rbp-168h] BYREF
  unsigned int v192; // [rsp+1A4h] [rbp-124h]
  unsigned int v193; // [rsp+1A8h] [rbp-120h]
  __int16 v194; // [rsp+1BCh] [rbp-10Ch]
  __int64 v195; // [rsp+1C0h] [rbp-108h]
  unsigned __int16 v196; // [rsp+1DCh] [rbp-ECh]

  v4 = a2;
  if ( *(Unit + 0x58) == 1 && (*(Unit + 0x1058) & 0x2000010) == 0 && *(Unit + 0x11A0) && !a2 && *(Unit + 0x10A8) )
  {
    LOBYTE(a2) = 1;
    LOBYTE(a3) = 1;
    sub_3A64E0(Unit, a2, a3);
    if ( !*(qword_4AD09E8 + 0x518) )
      return;
    v6 = *(qword_4AD09E8 + 0x508);
    v7 = 0x30i64 * *(qword_4AD09E8 + 0x518);
    v8 = 0i64;
    do
    {
      if ( *(v6 + v8) == Unit )
      {
        *(v6 + v8) = 0i64;
        v9 = *(v6 + v8 + 0x28);
        if ( v9 )
        {
          *(v6 + v8 + 0x28) = 0i64;
          sub_941E60(*(v9 + 1), *v9);
        }
        sub_EE9DE0(*(Unit + 8) & 0x7FF);
      }
      v8 += 0x30i64;
    }
    while ( v7 != v8 );
  }
  if ( v4 && *(Unit + 0x10A8) <= 1u && (*(Unit + 0x1058) & 0x2000010) == 0 && *(Unit + 0x11A0) )
  {
    v170 = Unit + 0x50;
    if ( *(Unit + 0x10A8) )
      goto LABEL_34;
    if ( v4 != 1 )
    {
      if ( v4 != 2 )
        goto LABEL_34;
      if ( !sub_3C8250(Unit) )
        sub_15F1770(*(*(Unit + 0x2E68) + 0x3AC8i64));
LABEL_31:
      if ( *(Unit + 0x1238) )
      {
        v13 = 0i64;
        do
        {
          v14 = *(*(Unit + 0x1228) + 8 * v13);
          LOBYTE(v10) = 1;
          (*(*v14 + 0x38i64))(v14, Unit + 0x1488, v10);
          ++v13;
        }
        while ( v13 < *(Unit + 0x1238) );
      }
LABEL_34:
      lpCriticalSection = *(game + 0x610);
      EnterCriticalSection(lpCriticalSection);
      if ( v4 >= 2u )
      {
        if ( *(Unit + 0x11C8) )
          sub_4BCF90();
        v18 = game;
        v19 = *(game + 0x330);
        if ( v19 )
        {
          for ( i = 0i64; i < v19; ++i )
          {
            v21 = *(*(v18 + 0x320) + 8 * i);
            if ( *(v21 + 0x278) == Unit )
            {
              *(v21 + 0x278) = 0i64;
              v19 = *(v18 + 0x330);
            }
          }
        }
        *(Unit + 0x1140) = 0xBF800000;
        sub_29A320(*(Unit + 0x11D0));
        if ( (*(Unit + 0x1058) & 0x100) != 0 )
        {
          v22 = ballistics_A68_qword;
          if ( ballistics_A68_qword )
          {
            *(ballistics_A68_qword + 0xA2C) = 0xBF80000000000000ui64;
            *(v22 + 0xA34) = 0;
            *(v22 + 0xA18) = 0;
            *(v22 + 0xA38) = 0xBF800000;
            *(v22 + 0xA58) = 1;
            *(v22 + 0xA1C) = 0i64;
            *(v22 + 0xA59) = 0i64;
            *(v22 + 0xA69) = 0;
            *(v22 + 0xB14) = 0;
            *(v22 + 0xA70) = 0i64;
            *(v22 + 0xA80) = 0i64;
            *(v22 + 0xA90) = 0i64;
            *(v22 + 0xAA0) = 0i64;
            *(v22 + 0xAB0) = 0i64;
            *(v22 + 0xAC0) = 0i64;
            *(v22 + 0xAD0) = 0i64;
            *(v22 + 0xAE0) = 0i64;
            *(v22 + 0xAF0) = 0i64;
            *(v22 + 0xB00) = 0i64;
          }
        }
      }
      if ( 2 - (*(Unit + 0x4E8) == 0) <= v4 && (*(Unit + 0x58) & 4) != 0 )
        sub_3F8460(Unit);
      if ( !*(Unit + 0x10B0) )
      {
        v23 = qword_4ACF738;
        if ( qword_4ACF738 )
        {
          v24 = *(game + 0x418);
          v25 = 8i64;
          v26 = qword_4ACF728;
          v27 = 0i64;
          do
          {
            if ( *&v26[v25 - 8] == Unit )
            {
              if ( *&v26[v25] >= 0 )
              {
                v28 = &v26[v25];
                sub_5B5C80(v24, v28);
                *v28 = 0xFFFFFFFF;
                v26 = qword_4ACF728;
              }
              *&v26[v25 - 8] = 0i64;
              v26 = qword_4ACF728;
              v23 = qword_4ACF738;
            }
            ++v27;
            v25 += 0x18i64;
          }
          while ( v27 < v23 );
        }
      }
      v29 = *(Unit + 0x2E68);
      v30 = *(v29 + 0x3620);
      if ( v30 )
      {
        if ( *(v30 + 0x10) )
        {
          v16 = *v30;
          v15 = 0i64;
          v31 = *v30;
          while ( *v31 != v29 + 0x3610 )
          {
            ++v31;
            v15 = (v15 + 1);
            if ( v31 >= *v30 + 8 * *(v30 + 0x10) )
              goto LABEL_70;
          }
          if ( v15 >= 0 )
          {
            v16[v15] = 0i64;
            if ( *(v30 + 0x24) == v15 )
            {
              *(v29 + 0x3628) = 0;
              if ( *(v30 + 0x10) )
              {
                v15 = *v30;
                v32 = 0i64;
                while ( !v15[v32] )
                {
                  if ( *(v30 + 0x10) == ++v32 )
                    goto LABEL_68;
                }
                *(v30 + 0x24) = v32;
                *(v15[v32] + 0x18i64) = 1;
                sub_154C5A0(v30);
              }
              else
              {
LABEL_68:
                *(v30 + 0x24) = 0xFFFFFFFF;
              }
            }
          }
        }
LABEL_70:
        *(v29 + 0x3628) = 0;
        *(v29 + 0x3620) = 0i64;
        v29 = *(Unit + 0x2E68);
      }
      v33 = 0x41C64E6D * dword_4A79158 + 0x3039;
      v34 = *&dword_44A0140;
      v35 = (HIWORD(v33) & 0x7FFF) * *&dword_44A0140;
      dword_4A79158 = 0x41C64E6D * v33 + 0x3039;
      v36 = 0x41C64E6D * dword_4A79158;
      v37 = fsqrt(v35);
      v38 = *&dword_44A0284;
      v3.m128_f32[0] = (((dword_4A79158 >> 0xF) & 0xFFFE) - 0x8000) * *&dword_44A0140;
      v39.m128_i32[0] = 0;
      v40 = LODWORD(Y);
      v41 = _mm_and_ps(_mm_cmplt_ss(0i64, v3), LODWORD(Y));
      v42 = _mm_cmplt_ss(v3, v39);
      v43 = _mm_andnot_ps(v42, v41).m128_f32[0];
      v41.m128_i32[0] = dword_44801E8;
      *(v29 + 0x57E8) = (COERCE_FLOAT(v42.m128_i32[0] & dword_44801E8 | LODWORD(v43)) * *&dword_44A0284) * v37;
      v36 += 0x3039;
      v44 = 0x41C64E6D * v36;
      v42.m128_f32[0] = (HIWORD(v36) & 0x7FFF);
      v45 = *(Unit + 0x2E68);
      v42.m128_f32[0] = fsqrt(v42.m128_f32[0] * v34);
      dword_4A79158 = v44 + 0x3039;
      v46 = 0i64;
      v46.m128_f32[0] = ((((v44 + 0x3039) >> 0xF) & 0xFFFE) - 0x8000) * v34;
      v47 = _mm_and_ps(_mm_cmplt_ss(0i64, v46), v40);
      v48 = _mm_cmplt_ss(v46, v39);
      *(v45 + 0x57EC) = (COERCE_FLOAT(v48.m128_i32[0] & v41.m128_i32[0] | _mm_andnot_ps(v48, v47).m128_u32[0]) * v38)
                      * v42.m128_f32[0];
      ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
        _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v15, v16, v17);
      if ( *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x158i64) )
        sub_3889E0(Unit + 0x33B0);
      else
        *(Unit + 0x33C8) = 1;
      v50 = *(Unit + 0x51F4);
      if ( v50 >= *(qword_4B12868 + 8) )
      {
        v54 = &word_4998F5C;
      }
      else if ( v50 < 0 || *(qword_4B12868 + 0x1C) <= v50 )
      {
        v54 = 0i64;
      }
      else
      {
        v51 = *(*(qword_4B12868 + 0xD) + 4 * v50);
        v52 = *(qword_4B12868 + 0x9A);
        v53 = (*(qword_4B12868 + 0x11) + 0x10 * (v51 >> v52));
        if ( (v51 >> v52) == *(qword_4B12868 + 0x24) )
          v53 = qword_4B12868 + 0x78;
        v54 = (*v53 + (v51 & ~(0xFFFFFFFF << v52)));
      }
      v55 = *(*(Unit + 0x4160) + 0x40i64);
      v56 = &szFile;
      if ( *&v55 == 0.0 )
        *&v55 = COERCE_DOUBLE(&szFile);
      v57 = *(Unit + 0x1138);
      if ( !v57 )
        v57 = &szFile;
      v58 = *(Unit + 0x840);
      v59 = *(Unit + 0x844);
      *(&v173 + 1) = v57;
      LODWORD(v173) = 1;
      v175 = *&v55;
      LODWORD(v174) = 1;
      *(&v176 + 1) = v54;
      LODWORD(v176) = 1;
      v178 = *&v58;
      LODWORD(v177) = 2;
      *(&v179 + 1) = v59;
      LODWORD(v179) = 2;
      dg_debug(0x20574D46u, "Aircraft %s (%s) died. Last damaged part: %s, reason = %d, reasonInner = %d", &v173, 5);
      sub_422770(Unit, Src, 0i64);
      if ( (*(Unit + 0x58) & 4) != 0 )
      {
        v60 = *(Unit + 0x1980);
        if ( (v60 != 0xFFFFFFFFFFFFFFFFui64) != (v195 != 0xFFFFFFFFFFFFFFFFui64) )
          goto LABEL_90;
        v62 = *(Unit + 0x199C) == v196;
        if ( v60 != 0xFFFFFFFFFFFFFFFFui64 )
          v62 = v60 == v195;
        if ( !v62 || *(Unit + 0x197C) != v194 )
        {
LABEL_90:
          sub_158CE00(Unit + 0x1900, Unit, Unit + 0x1920);
          memmove((Unit + 0x1920), Src, 0xB0ui64);
          v61 = *(Unit + 0x10B8);
          if ( v61 )
            *(v61 + 0x430) = v195;
        }
      }
      if ( v195 != 0xFFFFFFFFFFFFFFFFui64 && v196 != *(Unit + 8) )
      {
        v63 = *(Unit + 0x840);
        if ( v63 > 0xF || (v64 = 0xF82E, !_bittest(&v64, v63)) )
        {
          LODWORD(v173) = sub_349F00(Unit, Src);
          *(&v173 + 4) = 0xFFFF00000000i64;
          WORD6(v173) = 0;
          sub_32E060(Unit, &v173);
        }
      }
      v171 = LocalUnit;
      v65 = *(*(Unit + 0x4160) + 0x40i64);
      if ( *&v65 == 0.0 )
        *&v65 = COERCE_DOUBLE(&szFile);
      v66 = *(Unit + 0x1138);
      if ( !v66 )
        v66 = &szFile;
      *(&v173 + 1) = v66;
      LODWORD(v173) = 1;
      v175 = *&v65;
      LODWORD(v174) = 1;
      dg_debug(0x20574D46u, "Death report on %s (%s)---------------------------------->", &v173, 2);
      ZPos = *(Unit + 0x9C8);
      YPos = *(Unit + 0x9C4);
      XPos = *(Unit + 0x9C0);
      if ( (v193 & 0x80000000) != 0 )
      {
        if ( (v192 & 0x80000000) == 0 )
        {
          v70 = *(qword_4AD09E8 + 0x330);
          v56 = 0i64;
          if ( v70 )
          {
            v71 = *(v70 + 0x50);
            if ( v71 && (LODWORD(v56) = *(v71 + 0x20), v56 > v192) )
            {
              v72 = *(*(v71 + 0x18) + 4i64 * v192);
              v73 = *(v71 + 0x4A);
              v74 = v72 >> v73;
            }
            else
            {
              if ( *(v70 + 0x20) <= v192 - v56 )
              {
                v56 = 0i64;
                goto LABEL_119;
              }
              v72 = *(*(v70 + 0x18) + 4i64 * (v192 - v56));
              v73 = *(v70 + 0x4A);
              v74 = v72 >> v73;
              v71 = *(qword_4AD09E8 + 0x330);
            }
            v75 = (*(v71 + 0x38) + 0x10i64 * v74);
            if ( v74 == *(v71 + 0x40) )
              v75 = (v71 + 0x28);
            v56 = (*v75 + (v72 & ~(0xFFFFFFFF << v73)));
          }
        }
      }
      else if ( v193 > 0xF )
      {
        v56 = "<UNKNOWN>";
      }
      else
      {
        v56 = off_44A6CA0[v193];
      }
LABEL_119:
      *&v76 = *(Unit + 0x848);
      *(&v173 + 1) = v56;
      LODWORD(v173) = 1;
      v175 = v76;
      LODWORD(v174) = 2;
      *(&v176 + 1) = XPos;
      LODWORD(v176) = 3;
      v178 = YPos;
      LODWORD(v177) = 3;
      *(&v179 + 1) = ZPos;
      LODWORD(v179) = 3;
      dg_debug(0x20574D46u, "killed by: %s (uid %d), at = (%f, %f, %f)", &v173, 5);
      if ( (*(Unit + 0x1058) & 0x7000014) == 0 )
      {
        if ( **(*(Unit + 0x11A0) + 0x90i64) )
        {
          v87 = qword_4B12868;
          if ( *(qword_4B12868 + 8) )
          {
            v88 = 0i64;
            v89 = *&dword_44A50C0;
            v90 = Y;
            v91 = xmmword_449AF40;
            v92 = *&dword_44A05D0;
            v93 = *&dword_44A0308;
            do
            {
              UnitWeapons = *(Unit + 0x11A0);
              if ( v88 < *(UnitWeapons + 0x2A8) )
              {
                v132 = *(*(UnitWeapons + 0x2A0) + 4 * v88);
                LODWORD(v166) = v132;
                if ( (v132 & 0x8000) == 0 )
                {
                  v133 = *(UnitWeapons + 0x310);
                  if ( v133 > v132 )
                  {
                    v134 = *(UnitWeapons + 0x308);
                    v135 = *(v134 + 0x38i64 * v132 + 8);
                    if ( (v135 & 0x80000000) == 0i64 )
                    {
                      v136 = (*(&xmmword_4B769D8 + 1) - xmmword_4B769D8) >> 3;
                      v137 = 0.0;
                      v138 = 0.0;
                      if ( v136 > v135 )
                      {
                        v139 = *(xmmword_4B769D8 + 8 * v135);
                        v138 = 0.0;
                        if ( v139 )
                          v138 = *v139;
                      }
                      v140 = v132;
                      if ( v133 > v132 )
                      {
                        v141 = 0x38i64 * v132;
                        v142 = *(v134 + v141 + 0x34);
                        v143 = v90;
                        if ( v142 != 0xFFFF )
                          v143 = v142 * v89;
                        v144 = *(v134 + v141 + 8);
                        v145 = 0.0;
                        if ( (v144 & 0x80000000) == 0i64 && v136 > v144 )
                        {
                          v146 = *(xmmword_4B769D8 + 8 * v144);
                          if ( v146 )
                            v145 = *v146;
                        }
                        v137 = v145 * v143;
                      }
                      LODWORD(v147) = COERCE_UNSIGNED_INT(v137 - v138) & v91;
                      if ( v147 > v92
                        && v147 > (fmaxf(COERCE_FLOAT(LODWORD(v138) & v91), COERCE_FLOAT(LODWORD(v137) & v91)) * v93) )
                      {
                        v165 = xmmword_4B769D8;
                        v130 = sub_7AB3C0(v88);
                        v129 = 0.0;
                        v148 = 0.0;
                        if ( v136 > v135 )
                        {
                          v149 = *(v165 + 8 * v135);
                          v148 = 0.0;
                          if ( v149 )
                            v148 = *v149;
                        }
                        if ( v133 > v140 )
                        {
                          v150 = v130;
                          v151 = *(v134 + 0x38i64 * v140 + 0x34);
                          v152 = UnitWeapons + 0x308;
                          v153 = v90;
                          if ( v151 != 0xFFFF )
                            v153 = v151 * v89;
                          v129 = sub_17E05B0(v152, &v166) * v153;
                          v130 = v150;
                        }
                        *(&v173 + 1) = v129;
                        LODWORD(v173) = 3;
                        v175 = v148;
                        LODWORD(v174) = 3;
                        *(&v176 + 1) = v130;
                        LODWORD(v176) = 1;
                        dg_debug(0x20574D46u, "%g / %g   %s", &v173, 3);
                        v87 = qword_4B12868;
                      }
                    }
                  }
                }
              }
              ++v88;
            }
            while ( v88 < v87[8] );
          }
        }
      }
      dg_debug(0x20574D46u, "<---------------------------------------------------------", 0i64, 0);
      if ( !*(Unit + 0x1E0C) && *(Unit + 0x10A8) != 1 )
      {
        if ( (*(Unit + 0x58) & 4) != 0 )
        {
          if ( qword_4B507E8 )
          {
            v80 = NtCurrentTeb()->ThreadLocalStoragePointer;
            if ( !*(v80[TlsIndex] + 1i64) )
              _dyn_tls_on_demand_init(v80, v77, v78, v79);
            v81 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
            *&v173 = 0i64;
            *(&v173 + 1) = v81;
            v174 = 0i64;
            sub_3DE260(&v173, *(Unit + 0x1718));
            if ( *(Unit + 0x1718) )
            {
              v82 = 0x55i64;
              v83 = v173;
              v84 = 0i64;
              do
              {
                v85 = *(Unit + 0x1CC8);
                v86 = 0xFFFFFFFF;
                if ( v84 < *(v85 + 0x2378) )
                  v86 = *(*(v85 + 0x2368) + 4 * v82);
                *(v83 + 4 * v84++) = v86;
                v82 += 0x5Di64;
              }
              while ( v84 < *(Unit + 0x1718) );
            }
            sub_38C720(*(Unit + 0x1CC8), Unit);
            if ( *(Unit + 0x1718) )
            {
              v94 = 0x55i64;
              v95 = v173;
              v96 = 0i64;
              v97 = 0i64;
              v172 = v173;
              do
              {
                v98 = *(Unit + 0x1CC8);
                if ( v97 < *(v98 + 0x2378) )
                {
                  v99 = *(Unit + 0x1708);
                  v100 = *(*(v98 + 0x2368) + 4 * v94);
                  if ( v100 == 2 )
                  {
                    if ( *(v95 + 4 * v97) <= 1 && *(*(game + 0x498) + 0x1E51i64) )
                    {
                      v101 = *(Unit + 0x41F8);
                      v102 = 0xFFFFFFFF;
                      if ( *(v101 + 0x128) > 0 )
                        v102 = *(v101 + 0x120);
                      sub_3DE330(Unit, v102, v96 + v99, 0, 2);
                    }
                  }
                  else if ( v100 >= 4 && *(v95 + 4 * v97) <= 3 )
                  {
                    if ( *(*(game + 0x498) + 0x1E51i64) )
                    {
                      v103 = *(Unit + 0x41F8);
                      v104 = 0xFFFFFFFF;
                      if ( *(v103 + 0x128) > 0 )
                        v104 = *(v103 + 0x120);
                      sub_3DE330(Unit, v104, v96 + v99, 1, 2);
                    }
                    v105 = *(v99 + v96 + 0x60);
                    v106 = *(Unit + 0x3B8);
                    if ( (v105 != 0xFFFFFFFFFFFFFFFFui64) != (v106 != 0xFFFFFFFFFFFFFFFFui64)
                      || (v105 == 0xFFFFFFFFFFFFFFFFui64
                        ? (v108 = *(v99 + v96 + 0x7C) == *(Unit + 0x3D4))
                        : (v108 = v105 == v106),
                          !v108 || *(v99 + v96 + 0x5C) != *(Unit + 0x3B4)) )
                    {
                      if ( v105 == 0xFFFFFFFFFFFFFFFFui64 )
                        v107 = 0i64;
                      else
                        v107 = *(v99 + v96 + 0x20);
                      v169 = v107;
                      v164 = *(v99 + v96 + 0x30);
                      v109 = off_4B678C8;
                      v110 = sub_7A6AF0(v96 + v99, 0i64);
                      v166 = 0i64;
                      v167 = v109;
                      Size = 0i64;
                      if ( v110 )
                      {
                        v111 = v110;
                        if ( *v110 )
                        {
                          v112 = strlen(v110) + 1;
                          if ( v112 )
                          {
                            v114 = 0x10i64;
                            v189 = v112;
                            if ( v112 >= 0x11 )
                              v114 = v112;
                            v115 = *v109;
                            v188 = v114;
                            v113 = (*(v115 + 0x18))(v109);
                            memmove(v113, v166, Size);
                            if ( v166 )
                              (*(*v167 + 0x40i64))(v167);
                            v166 = v113;
                            HIDWORD(Size) = v188;
                            v112 = v189;
                          }
                          else
                          {
                            v113 = 0i64;
                          }
                          LODWORD(Size) = v112;
                          memmove(v113, v111, v112);
                        }
                      }
                      v116 = *(v99 + v96 + 0x60);
                      v117 = 0xFFFFFFFF;
                      if ( v116 == 0xFFFFFFFFFFFFFFFFui64 )
                      {
                        v95 = v172;
                        v119 = v169;
                        v120 = v164;
                      }
                      else
                      {
                        v118 = sub_1206DE0(v116);
                        v117 = 0xFFFFFFFF;
                        v95 = v172;
                        v119 = v169;
                        v120 = v164;
                        if ( v118 )
                          v117 = *(v118 + 8);
                      }
                      v121 = game + 0x28;
                      if ( !game )
                        v121 = game;
                      v163 = v119;
                      LOBYTE(v119) = 0xFF;
                      sub_431190(v119, v121, Unit, v117, &v166, v163, 0, v120);
                      if ( v166 )
                        (*(*v167 + 0x40i64))(v167);
                    }
                    v122 = *(v99 + v96 + 0x1C);
                    v123 = (*(*v170 + 0x30i64))(v170);
                    if ( (dword_4B1C814 & 0x80000) != 0 || v123 != v122 || (dword_4B1C814 & 0x1000000) != 0 )
                      sub_645EA0(*(v99 + v96 + 0x60), Unit, v96 + v99);
                  }
                }
                ++v97;
                v94 += 0x5Di64;
                v96 += 0xE0i64;
              }
              while ( v97 < *(Unit + 0x1718) );
            }
            else
            {
              v95 = v173;
            }
            if ( v95 )
              (*(**(&v173 + 1) + 0x40i64))(*(&v173 + 1), v95);
          }
          else
          {
            sub_38C720(*(Unit + 0x1CC8), Unit);
          }
        }
        v124 = NtCurrentTeb()->ThreadLocalStoragePointer;
        if ( !*(v124[TlsIndex] + 1i64) )
          _dyn_tls_on_demand_init(v124, v77, v78, v79);
        v125 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
        *(&v173 + 1) = Unit;
        v174 = v125;
        LOWORD(v175) = 0xF04B;
        v176 = 0i64;
        v177 = 0i64;
        v178 = *&v125;
        v179 = 0i64;
        v180 = 0i64;
        v181 = 0i64;
        v182 = 0i64;
        v183 = 0i64;
        v184 = 0i64;
        v185 = 0i64;
        v186 = 0i64;
        v187 = 0;
        v126 = 0xFF;
        if ( qword_4B507E8 )
        {
          v126 = 0x7D;
          if ( !*(qword_4B507E8 + 0x60) )
          {
            v126 = 0xFF;
            if ( LocalPlayer )
              v126 = *(LocalPlayer + 8);
          }
        }
        BYTE2(v175) = v126;
        *&v173 = &off_44A04C0;
        LOBYTE(v77) = 0xFF;
        sub_159F500(&v173, v77);
        *&v173 = &off_44A0560;
        if ( v176 < 0 )
          (*(**&v178 + 0x40i64))(COERCE_DOUBLE(*&v178), v177);
      }
      v127 = v171;
      if ( !v171 || *(v171 + 0x10B0) || *&dword_44A02E0 >= *(*(Unit + 0x2E68) + 0x5C4Ci64) )
        goto LABEL_238;
      v128 = *(game + 0x450);
      if ( v128 && *(v128 + 0x5CA) )
      {
        if ( *(v128 + 0x618) )
          goto LABEL_205;
      }
      else if ( qword_4B507E8 )
      {
        goto LABEL_203;
      }
      v127 = v171;
      if ( *(Unit + 0x199C) == *(v171 + 8) )
      {
LABEL_237:
        v156 = (*(Unit + 0x1058) >> 8) & 1;
        v157 = sub_340250(Unit);
        sub_3E12E0(Unit, v157, v156);
        goto LABEL_238;
      }
LABEL_203:
      if ( !v128 || !*(v128 + 0x5CA) )
      {
        if ( !qword_4B507E8 )
          goto LABEL_238;
LABEL_234:
        v154 = (*(*(v127 + 0x50) + 0x30i64))(v127 + 0x50);
        v155 = (*(*v170 + 0x30i64))(v170);
        if ( (dword_4B1C814 & 0x80000) != 0 || v155 != v154 || (dword_4B1C814 & 0x1000000) != 0 )
          goto LABEL_238;
        goto LABEL_237;
      }
LABEL_205:
      if ( !*(v128 + 0x618) )
      {
LABEL_238:
        if ( (*(Unit + 0x1058) & 0x100) != 0 && *(Unit + 0x4E8) )
        {
          v158 = game;
          v159 = *(*(game + 0x498) + 0x2980i64);
          v160 = *(game + 0x6C4);
          if ( v160 > 0.0 )
          {
            *(game + 0xF0) = 0;
            v161 = *(v158 + 0x2B4);
            if ( v160 <= v161 && v161 > *&dword_44A05D0 && v161 < v159 )
            {
              if ( v161 > *&dword_449F1A8 || (v162 = 0.0, v161 < *&dword_449F1AC) )
                v162 = Y / v161;
              *(v158 + 0x2A8) = LODWORD(v162) ^ xmmword_44801F0;
              *(v158 + 0x2A0) = 0xFF000000;
            }
          }
          *(v158 + 0x6C4) = v159;
        }
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        return;
      }
      goto LABEL_234;
    }
    if ( (*(*v170 + 0x18i64))(v170, a2, a3) )
    {
      if ( !*(game + 0xE0) )
        goto LABEL_31;
    }
    else
    {
      v11 = *(Unit + 0x10B8);
      if ( v11 && *(v11 + 0x1B8) >= 0 )
        goto LABEL_31;
    }
    if ( !sub_3C8250(Unit) )
      sub_15F1770(*(*(Unit + 0x2E68) + 0x3AC8i64));
    LOBYTE(v12) = 1;
    sub_3AF720(Unit, v12);
    goto LABEL_31;
  }
}
