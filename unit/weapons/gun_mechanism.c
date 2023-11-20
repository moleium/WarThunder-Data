void __fastcall gun_mechanism(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float *a4,
        __int64 a5,
        __int64 a6,
        float a7,
        unsigned __int8 a8,
        float a9,
        unsigned int *a10,
        char a11,
        int a12)
{
  unsigned int v12; // r12d
  __int64 v14; // r15
  char v16; // bl
  float v17; // xmm6_4
  int v18; // xmm9_4
  __int64 v19; // rdx
  __int64 Unit; // rcx
  __int64 v21; // rcx
  unsigned int *v22; // rax
  bool v23; // al
  float v24; // xmm1_4
  float v25; // xmm1_4
  __int64 v26; // r8
  __int64 v27; // r9
  float v28; // xmm0_4
  unsigned int v29; // ecx
  unsigned int v30; // esi
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  int v33; // ebp
  float v34; // xmm1_4
  float v35; // xmm1_4
  __int64 v36; // rax
  __int64 v37; // r8
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned int v40; // ebp
  unsigned int v41; // ecx
  unsigned int v42; // esi
  bool v43; // di
  unsigned int v44; // ebp
  __int128 *v45; // rdi
  __int64 v46; // rcx
  unsigned int v47; // ebp
  __int64 v48; // rcx
  unsigned int v49; // edi
  unsigned __int64 v50; // rbp
  int *v51; // rdx
  int v52; // edx
  int v53; // eax
  int v54; // edx
  _DWORD *v55; // r15
  unsigned int v56; // eax
  int v57; // ecx
  _DWORD *v58; // rdi
  char v59; // si
  _WORD *v60; // rax
  char v61; // bl
  unsigned __int8 v62; // al
  __int64 v63; // rdx
  int v64; // r13d
  unsigned int v65; // eax
  int v66; // ecx
  __int64 v67; // rbx
  __int64 v68; // rax
  __int64 v69; // rsi
  int v70; // edi
  __int64 v71; // rcx
  __int64 v72; // rax
  float v73; // xmm0_4
  float v74; // xmm3_4
  float v75; // xmm2_4
  float v76; // xmm5_4
  float v77; // xmm4_4
  float v78; // xmm4_4
  __m128 v79; // xmm6
  __m128 v80; // xmm5
  __m128 v81; // xmm3
  char v82; // al
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rax
  unsigned int v86; // edx
  char v87; // al
  char *v88; // rbx
  char v89; // cl
  __int64 v90; // rcx
  __int64 v91; // rax
  unsigned int v92; // ecx
  char v93; // al
  __int64 v94; // rcx
  unsigned __int64 v95; // rbp
  int *v96; // rdx
  int v97; // edx
  unsigned int v98; // ebx
  int v99; // eax
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rcx
  unsigned int v103; // eax
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rax
  unsigned __int8 v107; // al
  __int64 v108; // rbp
  _QWORD *v109; // rdi
  int v110; // r8d
  _QWORD *v111; // rax
  double v112; // xmm0_8
  float v113; // xmm7_4
  __int64 v114; // r8
  char v115; // al
  char v116; // r12
  float v117; // xmm1_4
  __int64 v118; // rcx
  __int64 v119; // rcx
  unsigned __int64 v120; // rdi
  __int64 v121; // rsi
  float v122; // xmm0_4
  __int64 v123; // rcx
  unsigned int v124; // eax
  __int64 v125; // rax
  char v126; // al
  float v127; // xmm0_4
  unsigned int v128; // ecx
  float v129; // xmm5_4
  float v130; // xmm1_4
  float v131; // xmm0_4
  float v132; // xmm4_4
  float v133; // xmm3_4
  __int64 v134; // rcx
  unsigned int v135; // edx
  __int64 v136; // rax
  int v137; // ebp
  __int64 v138; // rdi
  int v139; // eax
  __int64 v140; // rbp
  unsigned int v141; // edx
  __int64 v142; // rbx
  bool v143; // al
  float v144; // xmm3_4
  __m128 v145; // xmm5
  __m128 v146; // xmm4
  __m128 v147; // xmm1
  char v148; // bp
  __int64 v149; // rbx
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rcx
  float v153; // xmm0_4
  __int64 v154; // rax
  float v155; // xmm0_4
  float v156; // xmm2_4
  float v157; // xmm3_4
  float v158; // xmm1_4
  float v159; // xmm0_4
  bool v160; // al
  float v161; // xmm1_4
  float v162; // xmm3_4
  float v163; // xmm2_4
  float v164; // xmm1_4
  float v165; // xmm3_4
  float v166; // xmm2_4
  __int64 v167; // rax
  __int64 v168; // rax
  unsigned int *v169; // rbp
  float v170; // xmm1_4
  float v171; // xmm2_4
  float v172; // xmm0_4
  __int64 v173; // rcx
  int v174; // ecx
  unsigned __int64 v175; // rbp
  __int64 v176; // rcx
  __int64 v177; // rbx
  int v178; // ecx
  unsigned __int64 v179; // rdi
  bool v180; // zf
  __int64 v181; // rdx
  __int64 v182; // rcx
  int v183; // ecx
  unsigned __int64 v184; // r9
  bool v185; // zf
  bool v186; // cl
  int v187; // eax
  __int64 v188; // rcx
  __int64 v189; // rax
  __int64 v190; // rdx
  __int64 v191; // rbp
  bool v192; // cl
  __int64 v193; // rcx
  int v194; // eax
  char v195; // al
  float v196; // xmm1_4
  float v197; // xmm4_4
  float v198; // xmm11_4
  float v199; // xmm7_4
  float v200; // xmm0_4
  float v201; // xmm3_4
  float v202; // xmm14_4
  float v203; // xmm10_4
  float v204; // xmm6_4
  float v205; // xmm15_4
  float v206; // xmm5_4
  float v207; // xmm13_4
  float v208; // xmm4_4
  float v209; // xmm2_4
  float v210; // xmm1_4
  float v211; // xmm4_4
  float v212; // xmm0_4
  float v213; // xmm7_4
  __int64 v214; // rax
  __int64 v215; // rcx
  __int64 v216; // rcx
  __int64 v217; // rbp
  int v218; // ecx
  unsigned __int64 v219; // rbx
  __int64 v220; // rcx
  int v221; // ecx
  unsigned __int64 v222; // rsi
  float v223; // xmm4_4
  float v224; // xmm11_4
  float v225; // xmm7_4
  float v226; // xmm0_4
  float v227; // xmm3_4
  float v228; // xmm14_4
  float v229; // xmm10_4
  float v230; // xmm6_4
  float v231; // xmm15_4
  float v232; // xmm5_4
  float v233; // xmm13_4
  float v234; // xmm4_4
  float v235; // xmm2_4
  float v236; // xmm1_4
  float v237; // xmm4_4
  float v238; // xmm0_4
  float v239; // xmm7_4
  int v240; // eax
  int v241; // esi
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v243; // rax
  _QWORD *Unit_; // [rsp+60h] [rbp-1D8h]
  float v245; // [rsp+68h] [rbp-1D0h]
  float v246; // [rsp+68h] [rbp-1D0h]
  float v247; // [rsp+6Ch] [rbp-1CCh]
  float v248; // [rsp+6Ch] [rbp-1CCh]
  __int64 v249; // [rsp+70h] [rbp-1C8h]
  float v250; // [rsp+70h] [rbp-1C8h]
  float v251; // [rsp+70h] [rbp-1C8h]
  float v252; // [rsp+7Ch] [rbp-1BCh]
  float v253; // [rsp+7Ch] [rbp-1BCh]
  float *v254; // [rsp+80h] [rbp-1B8h]
  __int64 v256[2]; // [rsp+90h] [rbp-1A8h] BYREF
  __int64 Src; // [rsp+A0h] [rbp-198h] BYREF
  __int64 v258; // [rsp+A8h] [rbp-190h] BYREF
  float v259; // [rsp+B0h] [rbp-188h]
  float v260; // [rsp+B4h] [rbp-184h]
  float v261; // [rsp+B8h] [rbp-180h]
  float v262; // [rsp+BCh] [rbp-17Ch]
  float v263; // [rsp+C0h] [rbp-178h]
  float v264; // [rsp+C4h] [rbp-174h] BYREF
  float v265; // [rsp+C8h] [rbp-170h]
  float v266; // [rsp+CCh] [rbp-16Ch]

  v14 = a3;
  v16 = a11;
  v17 = a9;
  if ( !*(a1 + 0x421) && !a11 )
    return;
  *(a1 + 0x64C) = *(a1 + 0x64C) - a7;
  if ( *(a1 + 0x687) )
    *(a1 + 0x686) = 0;
  v18 = a12;
  sub_201E70(a3, a1 + 0x46C);
  Unit = *(a1 + 8);
  if ( *(Unit + 0x10B0) == 5 && *(a1 + 0x212) && *(a1 + 0x368) > Y )
    *&v18 = *&v18 * *(HudInfo + 0xFA);
  Unit_ = (a1 + 8);
  if ( v16
    && *(a1 + 0x3F0) >= 0
    && !*(a1 + 0x3BC)
    && *(Unit + 0x10A8) <= 1u
    && *(a1 + 0x2B0)
    && ((*(*(Unit + 0x50) + 0x18i64))(Unit + 0x50) || Y > *(a1 + 0x364) && *(*Unit_ + 0x10B0i64) != 5) )
  {
    v28 = *(a1 + 0x378);
    if ( v28 != 0.0 && (v17 - v28) > (*(a1 + 0x408) + *(a1 + 0x404)) )
    {
      v29 = *(a1 + 0x3D8);
      if ( v29 )
      {
        v30 = 0;
        if ( v29 != 1 )
        {
          v31 = *(a1 + 0x2B0);
          v32 = *(a1 + 0x43C) << 6;
          v33 = *(v31 + v32 + 0xCC);
          if ( v33 < 2 )
          {
            sub_1FDA20(a1);
            v241 = 1;
            if ( v240 >= 2 )
              v241 = v240;
            v30 = v241 - 1;
            if ( v30 >= *(a1 + 0x3D8) )
              goto LABEL_450;
          }
          else
          {
            v19 = (*(v31 + 0x98 + v32 + 0x24) + 1) % v33 % v29;
            v30 = v19;
          }
        }
        ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
        if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
          _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v19, v26, v27);
        if ( *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x158i64) )
        {
          sub_21B370(a1, v30);
        }
        else
        {
          v243 = sub_1464470(0x18ui64);
          *v243 = &off_44A9370;
          *(v243 + 8) = a1;
          *(v243 + 0x10) = v30;
          add_delayed_callback(
            &qword_4B71860,
            v243,
            0i64,
            0i64,
            "DelayedAction @\n\t..\\..\\skyquake\\prog\\weapon\\gun.cpp(1027):");
        }
LABEL_450:
        *(a1 + 0x3BC) = 1;
      }
    }
  }
  *(a1 + 0x5F4) = v17;
  if ( *(a1 + 0x5F0) > 0.0 && *(a1 + 0x5EC) < v17 )
  {
    *(a1 + 0x5F0) = 0xBF800000;
    sub_21C600(a1, 0i64);
    v21 = *(a1 + 0x6A8);
    if ( v21 )
    {
      if ( !*(v21 + 0x10) )
      {
        *(v21 + 0x11) = 1;
        if ( (((*(v21 + 0x30) * *(v21 + 0x30)) + (*(v21 + 0x2C) * *(v21 + 0x2C))) + (*(v21 + 0x28) * *(v21 + 0x28))) >= *&dword_44A0308 )
        {
          *(v21 + 0x28) = 0i64;
          *(v21 + 0x30) = 0;
          sub_16E7120();
        }
      }
    }
    *(a1 + 0x6A8) = 0i64;
    v22 = *(a1 + 0x6F0);
    if ( v22 )
    {
      *(a1 + 0x6F0) = 0i64;
      sub_941E60(*(v22 + 1), *v22);
    }
  }
  v23 = 1;
  if ( *(*Unit_ + 0x10B0i64) == 5 )
  {
LABEL_26:
    if ( !v16 )
      goto LABEL_46;
    goto LABEL_27;
  }
  if ( sub_325180(*Unit_, v19) >= Y )
  {
    v23 = 0;
    goto LABEL_26;
  }
  if ( *(*Unit_ + 0x1AB0i64) )
  {
    v23 = 0;
    if ( !v16 )
      goto LABEL_46;
  }
  else
  {
    v23 = *(HudInfo + 0x1B) != 0 && *(*Unit_ + 0x1BECi64) == 0 || *(*Unit_ + 0x1A50i64) != 0;
    if ( !v16 )
      goto LABEL_46;
  }
LABEL_27:
  v24 = *(a1 + 0x1D0);
  if ( v24 >= 0.0 )
  {
    if ( v23 )
      v25 = v24 - a7;
    else
      v25 = *(HudInfo + 0xE1);
    *(a1 + 0x1D0) = v25;
  }
  v34 = *(a1 + 0x1D4);
  if ( v34 >= 0.0 )
  {
    if ( v23 )
      v35 = v34 - a7;
    else
      v35 = *(HudInfo + 0xE2);
    *(a1 + 0x1D4) = v35;
  }
LABEL_46:
  v36 = *(a1 + 0x2B0);
  v37 = *(a1 + 0x43C);
  v38 = v37 << 6;
  v39 = **(v36 + v38 + 0x98);
  if ( !v39 )
    goto LABEL_58;
  v40 = *(v39 + 8);
  if ( v40 == 0xFFFFFFFF )
    v40 = *(v39 + 4);
  if ( (v40 & 0x80000000) != 0 )
  {
    v41 = (v40 & 0x7FFFFFFF) >> 0x1B;
    v43 = 0;
    if ( (v40 & 0x7FFFFFFF) < DWORD2(xmmword_4ACF680) )
    {
      v44 = v40 & 0x7FFFFFF;
      if ( v44 < 0x80 << v41 )
      {
        v45 = (&xmmword_4ACF620 + 8);
LABEL_56:
        v46 = *(v45 + v41);
        if ( v46 )
        {
          v43 = *(v46 + 8i64 * v44) != 0i64;
          v37 = *(a1 + 0x43C);
          goto LABEL_59;
        }
LABEL_58:
        v43 = 0;
      }
    }
  }
  else
  {
    v41 = v40 >> 0x1B;
    v42 = 0x80 << (v40 >> 0x1B);
    v43 = 0;
    if ( xmmword_4ACF620 > v40 )
    {
      v44 = v40 & 0x7FFFFFF;
      if ( v44 < v42 )
      {
        v45 = &xmmword_4ACF5C0;
        goto LABEL_56;
      }
    }
  }
LABEL_59:
  v47 = 0;
  if ( !v43 && *(v36 + 0x98 + v38 + 0x34) >= 2 && v37 != *(a1 + 0x43D) )
    LOBYTE(v47) = *(*(a1 + 0x2B0) + (*(a1 + 0x43D) << 6) + 0xD0) == 0;
  LOBYTE(v12) = 1;
  if ( *(*(a1 + 0x2B0) + (*(a1 + 0x43C) << 6) + 0xCC) >= 2 )
  {
    if ( *(a1 + 0x43C) != *(a1 + 0x43D) )
      goto LABEL_70;
    v48 = *(a1 + 0x2B0);
    v49 = v47;
    v50 = *(a1 + 0x43C) << 6;
    v51 = (v48 + v50 + 0xB8);
    if ( !*(v48 + v50 + 0xA0) )
      v51 = (v48 + 0x88);
    v52 = *v51;
    v53 = v52 - *(v48 + v50 + 0xBC);
    if ( v52 <= 0 )
      v53 = *(v48 + v50 + 0xBC);
    v54 = v53 % *(v48 + v50 + 0xCC);
    v47 = v49;
    if ( v54 )
LABEL_70:
      v12 = v47;
  }
  if ( !a11 )
  {
    v59 = 0;
    goto LABEL_167;
  }
  v249 = v14;
  v55 = *Unit_;
  v254 = a4;
  if ( *Unit_ )
  {
    v56 = v55[0x42C] - 1;
    if ( (*(v55 + 0x858) - 1) > 0xEu || (v57 = 0x44BF, !_bittest(&v57, v56)) )
    {
      v58 = 0i64;
LABEL_84:
      sub_1198160(v55[0x6AD], *(a1 + 0x10));
      v55 = v58;
      goto LABEL_85;
    }
    v60 = (&unk_44A9450 + 2 * v56);
  }
  else
  {
    v60 = &loc_10B0;
  }
  v58 = *Unit_;
  if ( *v60 != 3 )
    goto LABEL_84;
  v61 = sub_1197FC0(v55[0x6AD], *(a1 + 0x10), v37);
  v62 = sub_1198160(*(*(a1 + 8) + 0x1AB4i64), *(a1 + 0x10));
  if ( v61 )
  {
    v64 = v62 ^ 1;
    v37 = *Unit_;
    goto LABEL_98;
  }
LABEL_85:
  v37 = *Unit_;
  v65 = *(*Unit_ + 0x10B0i64);
  v64 = 0;
  if ( v65 <= 0xF )
  {
    v66 = 0x897E;
    if ( _bittest(&v66, v65) )
    {
      if ( *(v37 + 0x2114) && !*(v37 + 0x1AB1) && *(v37 + 0x1E80) )
      {
        v63 = *(v37 + 0x1E70);
        v67 = *(v37 + 0x11A0);
        v68 = 0i64;
        v64 = 0;
        do
        {
          v69 = *(v63 + 4 * v68);
          if ( *(v37 + 0x1E48) <= v69 && *(v37 + 0x1E4C) >= v69 )
          {
            LOWORD(v70) = 0xFFFF;
            if ( *(v67 + 0x2A8) > v69 )
              v70 = *(*(v67 + 0x2A0) + 4 * v69);
            if ( *(v67 + 0x310) > v70 )
              v64 -= (*(*(v67 + 0x308) + 0x38i64 * v70 + 0x34) == 0) - 1;
          }
          ++v68;
        }
        while ( *(v37 + 0x1E80) != v68 );
      }
    }
  }
LABEL_98:
  v71 = *(v37 + 0x11D0);
  if ( v71 )
  {
    v63 = *(a1 + 0x24);
    v72 = 0i64;
    if ( *(v71 + 0x1A0) > v63 )
      v72 = *(v71 + 0x190) + 0x290 * v63;
  }
  else
  {
    v72 = 0i64;
  }
  v256[0] = a1;
  v256[1] = &a9;
  v73 = *(a1 + 0x444);
  if ( !v72 )
    goto LABEL_462;
  if ( v73 <= a9 )
    goto LABEL_462;
  if ( !*(v72 + 0xA5) )
    goto LABEL_462;
  if ( (_mm_cvtsi128_si32(_mm_and_ps(
                            _mm_cmplt_ps(_mm_and_ps(*(v72 + 0x38), xmmword_449AF40), dword_44A01A0),
                            _mm_cmplt_ps(_mm_and_ps(*(v72 + 0x3C), xmmword_449AF40), dword_44A01A0))) & 1) != 0 )
    goto LABEL_462;
  if ( ((v12 ^ 1) & 1) != 0 )
    goto LABEL_462;
  v74 = *(a1 + 0x448);
  if ( v73 <= v74 )
    goto LABEL_462;
  if ( v74 <= v73 )
  {
    v75 = Y;
    v76 = 0.0;
    v77 = *(a1 + 0x444);
  }
  else
  {
    v75 = 0.0;
    v76 = Y;
    v77 = *(a1 + 0x448);
    v74 = *(a1 + 0x444);
  }
  if ( v74 < a9 )
  {
    if ( v77 <= a9 )
    {
      v75 = v76;
    }
    else
    {
      v78 = v77 - v74;
      v79 = LODWORD(a9);
      v79.m128_f32[0] = (a9 - v74) * (v76 - v75);
      if ( v78 > *&dword_449F1A8 || (v80 = 0i64, v78 < *&dword_449F1AC) )
      {
        v79.m128_f32[0] = v79.m128_f32[0] / v78;
        v80 = v79;
      }
      v81.m128_f32[0] = v74 - a9;
      v75 = v75 + _mm_andnot_ps(_mm_cmple_ss(0i64, v81), v80).m128_f32[0];
    }
  }
  v59 = 1;
  if ( v75 <= *&dword_44801CC )
  {
LABEL_462:
    if ( !v64 && v73 > a9 )
    {
      LOBYTE(v63) = 1;
      v82 = sub_1FC7A0(a1, v63);
      if ( v55 )
      {
        if ( !v82 && v55[0x845] )
        {
          if ( sub_21C900(v256) )
          {
            *(a1 + 0x444) = 0;
            *(a1 + 0x448) = a9;
            *(a1 + 0x686) = 1;
          }
          goto LABEL_134;
        }
      }
    }
    if ( *(a1 + 0x444) <= a9 )
    {
LABEL_134:
      v59 = 0;
      goto LABEL_135;
    }
    v59 = 0;
    if ( v64 <= 0 && *(a1 + 0x68C) > 0 )
      v59 = sub_21C900(v256);
  }
LABEL_135:
  *(a1 + 0x68C) = v64;
  v83 = *(a1 + 8);
  a4 = v254;
  v14 = v249;
  if ( (*(v83 + 0x58) & 4) == 0 )
    goto LABEL_149;
  v84 = *(v83 + 0x11A0);
  if ( !v84 )
  {
    v88 = (a1 + 0x688);
    goto LABEL_145;
  }
  v85 = *(a1 + 0x1DC);
  v86 = 0xFFFFFFFF;
  if ( *(v84 + 0x2A8) > v85 )
    v86 = *(*(v84 + 0x2A0) + 4 * v85);
  LODWORD(Src) = v86;
  v87 = sub_6ADC90(v84, &Src);
  v88 = (a1 + 0x688);
  if ( v87 && !*(a1 + 0x688) && !*(a1 + 0x558) )
  {
    v181 = *Unit_;
    if ( *(*Unit_ + 0x2C8i64) )
      memmove(&Src, (v181 + 0x2A8), 0xB0ui64);
    else
      sub_7A6880(&Src, v181);
    memmove((a1 + 0x538), &Src, 0xB0ui64);
    v89 = 1;
    goto LABEL_148;
  }
  v89 = 1;
  if ( !v87 )
  {
LABEL_145:
    if ( *(a1 + 0x558) )
    {
      *(a1 + 0x53C) = 0xFFFFFFFF;
      *(a1 + 0x550) = 0xFFFFFFFF00000000ui64;
      *(a1 + 0x558) = 0i64;
      *(a1 + 0x568) = 0x10;
      *(a1 + 0x56C) = 0i64;
      *(a1 + 0x574) = 0;
      *(a1 + 0x598) = 0xFFFFFFFFFFFFFFFFui64;
      *(a1 + 0x594) = 0xFFFF;
      *(a1 + 0x5A0) = 0;
      *(a1 + 0x5B4) = 0xFFFF;
      *(a1 + 0x588) = 0x7FFFFFFF;
      *(a1 + 0x5B8) = 0xFFFFFFFF00000000ui64;
      *(a1 + 0x5A4) = 0i64;
      *(a1 + 0x58C) = 0x7FFFFFFFFFFFFFFFi64;
      *(a1 + 0x578) = xmmword_44A9000;
      *(a1 + 0x5C0) = 0i64;
      *(a1 + 0x5C8) = 0xFFFFFFFFFFFFFFFFui64;
      *(a1 + 0x5D4) = 0;
      *(a1 + 0x5D0) = 0xFFFFFFFF;
    }
    v89 = 0;
  }
LABEL_148:
  *v88 = v89;
LABEL_149:
  *(a1 + 0x248) = fmaxf(0.0, (*(*(game + 0x498) + 0x26BCi64) * a7) + *(a1 + 0x248));
  if ( *(a1 + 0x506)
    && *(*Unit_ + 0x58i64) != 1
    && (*(a1 + 0x1D0) <= 0.0 && *(HudInfo + 0x346) != 0 && *(a1 + 0x214) != 0 || !*(a1 + 0x212)) )
  {
    if ( !*(HudInfo + 0x347) && *(a1 + 0x1D4) <= 0.0
      || (v90 = *(a1 + 0x1DC), v90 < 0)
      || (v91 = *(*Unit_ + 0x11A0i64)) == 0
      || *(v91 + 0x2A8) <= v90
      || (v63 = *(v91 + 0x2A0), v92 = *(v63 + 4 * v90), *(v91 + 0x310) <= v92)
      || *(*(v91 + 0x308) + 0x38i64 * v92 + 0x34) )
    {
      LOBYTE(v63) = 1;
      if ( sub_1FC7A0(a1, v63) )
      {
        *(a1 + 0x506) = 0;
        v93 = v59;
        v59 = 1;
        if ( *(a1 + 0x378) <= 0.0 )
          v59 = v93;
        if ( *(a1 + 0x444) > 0.0 )
          v59 = v93;
      }
    }
  }
  if ( (v47 & 1) != 0 )
    v59 = 1;
LABEL_167:
  v94 = *(a1 + 0x2B0);
  v95 = *(a1 + 0x43C) << 6;
  v96 = (v94 + v95 + 0xB8);
  if ( !*(v94 + v95 + 0xA0) )
    v96 = (v94 + 0x88);
  v97 = *v96;
  v98 = *(v94 + v95 + 0xBC);
  v99 = v97 - v98;
  if ( v97 <= 0 )
    v99 = *(v94 + v95 + 0xBC);
  v100 = (v99 >> 0x1F);
  LODWORD(v100) = v99 % *(v94 + v95 + 0xCC);
  LOBYTE(v98) = v100 == 0;
  if ( *(v94 + 0x2A0) )
  {
    if ( !*(v94 + 0xB) )
      goto LABEL_176;
  }
  else
  {
    LOBYTE(v98) = *(a1 + 0x43C) != *(a1 + 0x43D);
    if ( !*(*(a1 + 0x2B0) + 0xBi64) )
      goto LABEL_176;
  }
  if ( *(*Unit_ + 0x10B0i64) != 3 )
    goto LABEL_218;
LABEL_176:
  LOBYTE(v100) = *(HudInfo + 0x346) != 0 && *(a1 + 0x214) != 0;
  if ( ((*(a1 + 0x1D0) <= 0.0) & v100) == 0 && *(a1 + 0x212) )
    goto LABEL_218;
  if ( *(HudInfo + 0x347) || *(a1 + 0x1D4) > 0.0 )
  {
    v101 = *(a1 + 0x1DC);
    if ( v101 >= 0 )
    {
      v102 = *(*Unit_ + 0x11A0i64);
      if ( v102 )
      {
        if ( *(v102 + 0x2A8) > v101 )
        {
          v100 = *(v102 + 0x2A0);
          v103 = *(v100 + 4 * v101);
          if ( *(v102 + 0x310) > v103 && !*(*(v102 + 0x308) + 0x38i64 * v103 + 0x34) )
            goto LABEL_218;
        }
      }
    }
  }
  LOBYTE(v100) = 1;
  if ( (v98 & sub_1FC7A0(a1, v100)) != 1 )
    goto LABEL_218;
  v104 = *Unit_;
  if ( *Unit_ && !*(v104 + 0x10B0) )
  {
    v173 = *(a1 + 0x2B8);
    if ( v173 < 0 )
    {
      if ( *(a1 + 0x21C) )
        goto LABEL_197;
    }
    else
    {
      v100 = *(v104 + 0x11A0);
      if ( *(v100 + 0x2A8) > v173 )
      {
        v174 = *(*(v100 + 0x2A0) + 4 * v173);
        if ( (v174 & 0x8000u) == 0 )
        {
          v175 = v174 >> 1;
          if ( *(v100 + 0x4E0) > v175 )
          {
            v100 = *(*(v100 + 0x4D8) + v175);
            LOBYTE(v100) = v100 >> ((4 * v174) & 4);
            if ( (v100 & 0xE) != 0 )
              goto LABEL_197;
          }
        }
      }
    }
  }
  v105 = *(a1 + 0x2B0);
  if ( *(v105 + 0xB) )
  {
    if ( !*(v105 + 0xC) || !(*(*(v104 + 0x50) + 0x10i64))(v104 + 0x50) )
    {
      if ( !*(a1 + 0x1F4) )
        goto LABEL_197;
LABEL_195:
      if ( a9 >= *(a1 + 0x444) || !*(a1 + 0x5E8) )
        goto LABEL_218;
      goto LABEL_197;
    }
    v105 = *(a1 + 0x2B0);
  }
  if ( *(v105 + (*(a1 + 0x43C) << 6) + 0xBC) )
    goto LABEL_195;
LABEL_197:
  if ( *(*Unit_ + 0x58i64) != 1 && *(*(a1 + 0x2B0) + (*(a1 + 0x43D) << 6) + 0xBC) )
  {
    if ( *Unit_ )
    {
      if ( (*(*(*Unit_ + 0x50i64) + 0x18i64))(*Unit_ + 0x50i64) )
      {
        v106 = *(a1 + 0x2B0);
        if ( *(v106 + 0x50) >= 0 && *(v106 + (*(a1 + 0x43C) << 6) + 0xCC) >= 2 )
          *(a1 + 0x684) = 1;
      }
    }
    sub_217180(a1, 0, 0, 0xFFFFFFFF, 1);
    v59 = 1;
  }
  v107 = *(a1 + 0x43D);
  *(a1 + 0x43C) = v107;
  v108 = **(*(a1 + 0x2B0) + (v107 << 6) + 0x98);
  if ( v108 )
  {
    v109 = j__malloc_base(0x10ui64);
    if ( !v109 )
    {
      do
      {
        if ( !off_4B678A0 || !off_4B678A0(0x10i64) )
        {
          v258 = 0x10i64;
          LODWORD(Src) = 2;
          LOBYTE(v110) = 1;
          log_err(
            "..\\..\\prog\\engine2\\memory\\dagmem.cpp",
            0x345,
            v110,
            "Not enough memory to alloc %llu bytes",
            &Src,
            1);
        }
        v111 = j__malloc_base(0x10ui64);
      }
      while ( !v111 );
      v109 = v111;
    }
    _InterlockedAdd(&dword_4B6788C, (j__msize(v109) + 0xF) >> 4);
    _InterlockedIncrement(&dword_4B67890);
    *v109 = &off_44A9350;
    v109[1] = v108;
    add_delayed_callback(&qword_4B71860, v109, 0i64, 0i64, "DelayedAction @\n\t..\\..\\skyquake\\prog\\weapon\\gun.cpp(457):");
  }
  *(a1 + 0x686) = 1;
  if ( (*(*(*(a1 + 8) + 0x50i64) + 0x18i64))(*(a1 + 8) + 0x50i64)
    && qword_4B44C68
    && LocalUnit
    && *(qword_4B44C68 + 0x4A84) != 0.0
    && *(LocalUnit + 0x10B0) == 3 )
  {
    sub_11177A0(*(game + 0x440) + 0x910i64, v100, 0i64);
  }
LABEL_218:
  *(a1 + 0x441) = 0;
  if ( v59 )
  {
    LOBYTE(v12) = (*(a1 + 0x505) != 0) | v12;
    v112 = sub_1198FB0(*(*(a1 + 8) + 0x1AB4i64), *(a1 + 0x10), v37);
    v113 = a9;
    LOBYTE(v12) = v12 & 1;
    *(a1 + 0x444) = ((*&v112 * *&v18) * sub_215F90(a1, v12, v114, v98)) + v113;
    *(a1 + 0x441) = 1;
    *(a1 + 0x448) = a9;
    *(a1 + 0x686) = 1;
    if ( *(*(a1 + 0x2B0) + 0xCi64) )
      v115 = (*(*(*Unit_ + 0x50i64) + 0x10i64))(*Unit_ + 0x50i64);
    else
      v115 = 0;
    v116 = a11;
    *(a1 + 0x1F7) = v115;
    *(a1 + 0x3A2) = 0;
  }
  else
  {
    v116 = a11;
    if ( *(a1 + 0x44C) > a9 )
    {
      *(a1 + 0x444) = *(a1 + 0x444) + a7;
      *(a1 + 0x448) = *(a1 + 0x448) + a7;
    }
  }
  if ( !(*(a1 + 0x51C) | *(a1 + 0x3A2)) )
  {
    v117 = *(*(a1 + 0x2B0) + 0x298i64);
    if ( v117 > 0.0 )
    {
      *(a1 + 0x520) = fmaxf(*(a1 + 0x520) - (v117 * a7), 0.0);
      v118 = *(a1 + 0x720);
      if ( v118 && *(v118 + 0x13C) )
        sub_1667EE0(v118);
      v119 = *(a1 + 0x728);
      if ( v119 && *(v119 + 0x13C) )
        sub_1667EE0(v119);
      v120 = *(a1 + 0x1C);
      if ( v120 <= 0xFF )
      {
        v121 = *(*(a1 + 8) + 8i64) & 0x7FF;
        if ( qword_4B1E618 > v121 )
        {
          EnterCriticalSection(&stru_4B1E318);
          *(qword_4B1E608 + 0x118 * v121 + 8 * (v120 >> 6) + 0x68) &= __ROL8__(0xFFFFFFFFFFFFFFFEui64, v120);
          LeaveCriticalSection(&stru_4B1E318);
        }
      }
    }
  }
  *(a1 + 0x51C) = 0;
  if ( !*(a1 + 0x506) )
  {
    v134 = *Unit_;
    if ( *Unit_ )
    {
      v135 = *(v134 + 0x10B0);
      v136 = 0i64;
      if ( v135 == 5 )
        v136 = *Unit_;
      if ( v135 <= 0xF && (v137 = 0x897E, v138 = *Unit_, _bittest(&v137, v135)) )
      {
        if ( v136 )
        {
LABEL_268:
          v139 = *(v136 + 0x40A0);
          v140 = *(v134 + 0x11D0);
          v141 = 0xFFFFFFFF;
          if ( v140 )
          {
            v142 = *(a1 + 0x24);
            if ( v142 >= 0 && v142 < *(v140 + 0x1A0) )
              v141 = *(*(v140 + 0x190) + 0x290 * v142 + 0xC2);
          }
          v143 = v139 == v141;
          if ( !v138 )
            goto LABEL_281;
LABEL_367:
          v148 = 1;
          if ( *(v138 + 0x2D70) <= 0.0 && *(a1 + 0x231) )
          {
            v100 = *(a1 + 0x2B0) + 0x54i64;
            v148 = 1;
            goto LABEL_283;
          }
LABEL_282:
          v100 = *(a1 + 0x2B0) + 0x50i64;
LABEL_283:
          v149 = *v100;
          if ( !v116 || !v143 || v149 < 0 )
          {
            if ( v149 < 0 )
LABEL_292:
              *(a1 + 0x684) = 0;
LABEL_293:
            if ( !*(a1 + 0x685) )
              goto LABEL_237;
            v100 = *(a1 + 0x2B0);
            if ( *(v100 + 0x50) < 0 )
              goto LABEL_237;
            v151 = *Unit_;
            if ( !*Unit_ || *(v151 + 0x10B0) )
            {
              if ( *(a1 + 0x505) )
                goto LABEL_237;
              goto LABEL_383;
            }
            v176 = *(a1 + 0x2B8);
            if ( v176 < 0 )
            {
              v180 = *(a1 + 0x21C) == 0;
            }
            else
            {
              v177 = *(v151 + 0x11A0);
              if ( *(v177 + 0x2A8) <= v176
                || (v178 = *(*(v177 + 0x2A0) + 4 * v176), (v178 & 0x8000u) != 0)
                || (v179 = v178 >> 1, *(v177 + 0x4E0) <= v179) )
              {
                v186 = 0;
                goto LABEL_380;
              }
              v180 = ((*(*(v177 + 0x4D8) + v179) >> ((4 * v178) & 4)) & 0xE) == 0;
            }
            v186 = !v180;
LABEL_380:
            if ( v186 || *(a1 + 0x505) )
              goto LABEL_237;
            v216 = *(a1 + 0x2B8);
            if ( v216 < 0 )
            {
              if ( *(a1 + 0x21C) )
                goto LABEL_237;
            }
            else
            {
              v217 = *(v151 + 0x11A0);
              if ( *(v217 + 0x2A8) > v216 )
              {
                v218 = *(*(v217 + 0x2A0) + 4 * v216);
                if ( (v218 & 0x8000u) == 0 )
                {
                  v219 = v218 >> 1;
                  if ( *(v217 + 0x4E0) > v219 && ((*(*(v217 + 0x4D8) + v219) >> ((4 * v218) & 4)) & 0xE) != 0 )
                    goto LABEL_237;
                }
              }
            }
LABEL_383:
            if ( *(v100 + 0xB) )
            {
              if ( !*(v100 + 0xC) || !(*(*(v151 + 0x50) + 0x10i64))(v151 + 0x50) )
              {
                v187 = *(a1 + 0x1F4);
                goto LABEL_389;
              }
              v100 = *(a1 + 0x2B0);
            }
            v187 = *(v100 + (*(a1 + 0x43C) << 6) + 0xBC);
LABEL_389:
            if ( v187 && a9 > *(a1 + 0x444) )
            {
              v188 = *Unit_;
              if ( *Unit_ && *(v188 + 0x10B0) == 3 )
              {
                v189 = *(v188 + 0x11D0);
                v190 = 0xFFFFFFFFi64;
                if ( v189 )
                {
                  v191 = *(a1 + 0x24);
                  if ( v191 >= 0 && v191 < *(v189 + 0x1A0) )
                    v190 = *(*(v189 + 0x190) + 0x290 * v191 + 0xC2);
                }
                sub_1168540(v188, v190);
              }
              *(a1 + 0x685) = 0;
            }
            goto LABEL_237;
          }
          if ( !(*(*(v134 + 0x50) + 0x18i64))(v134 + 0x50, v100, v37) )
            goto LABEL_293;
          v150 = *Unit_;
          if ( !*Unit_ || (v100 = *(v150 + 0x10B0), v100) )
          {
            if ( *(a1 + 0x505) )
              goto LABEL_293;
            goto LABEL_407;
          }
          v182 = *(a1 + 0x2B8);
          if ( v182 < 0 )
          {
            v185 = *(a1 + 0x21C) == 0;
          }
          else
          {
            v37 = *(v150 + 0x11A0);
            if ( *(v37 + 0x2A8) <= v182
              || (v183 = *(*(v37 + 0x2A0) + 4 * v182), (v183 & 0x8000u) != 0)
              || (v184 = v183 >> 1, *(v37 + 0x4E0) <= v184) )
            {
              v192 = 0;
              goto LABEL_404;
            }
            v37 = *(*(v37 + 0x4D8) + v184);
            LOBYTE(v37) = v37 >> ((4 * v183) & 4);
            v185 = (v37 & 0xE) == 0;
          }
          v192 = !v185;
LABEL_404:
          if ( v192 || *(a1 + 0x505) )
            goto LABEL_293;
          v220 = *(a1 + 0x2B8);
          if ( v220 < 0 )
          {
            if ( *(a1 + 0x21C) )
              goto LABEL_293;
          }
          else
          {
            v100 = *(v150 + 0x11A0);
            if ( *(v100 + 0x2A8) > v220 )
            {
              v221 = *(*(v100 + 0x2A0) + 4 * v220);
              if ( (v221 & 0x8000u) == 0 )
              {
                v222 = v221 >> 1;
                if ( *(v100 + 0x4E0) > v222 )
                {
                  v100 = *(*(v100 + 0x4D8) + v222);
                  LOBYTE(v100) = v100 >> ((4 * v221) & 4);
                  if ( (v100 & 0xE) != 0 )
                    goto LABEL_293;
                }
              }
            }
          }
LABEL_407:
          v193 = *(a1 + 0x2B0);
          if ( *(v193 + 0xB) )
          {
            if ( !*(v193 + 0xC) || !(*(*(v150 + 0x50) + 0x10i64))(v150 + 0x50) )
            {
              v194 = *(a1 + 0x1F4);
LABEL_413:
              if ( !v194 )
                goto LABEL_293;
              v195 = *(a1 + 0x685);
              if ( *(a1 + 0x684) )
              {
                if ( !v195 )
                {
                  *(a1 + 0x685) = 1;
                  (*(**(a1 + 8) + 0x248i64))(*(a1 + 8));
                }
                if ( a9 > *(a1 + 0x448) )
                {
                  v196 = qword_4B1E5C8 <= v149 ? Y : *(qword_4B1E5B8 + v149);
                  if ( a9 > (*(a1 + 0x444) - v196) )
                  {
                    v223 = *(a1 + 0x46C);
                    v253 = *(a1 + 0x98);
                    v224 = *(a1 + 0x9C);
                    v225 = *(a1 + 0x478);
                    v226 = *(a1 + 0x484);
                    v227 = *(a1 + 0xA0);
                    *&Src = (v227 * v226) + ((v224 * v225) + (v253 * v223));
                    v228 = *(a1 + 0xA4);
                    v229 = *(a1 + 0xA8);
                    v230 = *(a1 + 0xAC);
                    *(&v258 + 1) = (v230 * v226) + ((v229 * v225) + (v228 * v223));
                    v231 = *(a1 + 0xB0);
                    v232 = *(a1 + 0xB4);
                    v233 = *(a1 + 0xB8);
                    v261 = (v233 * v226) + ((v232 * v225) + (v231 * v223));
                    v251 = *(a1 + 0xBC);
                    v246 = *(a1 + 0xC0);
                    v248 = *(a1 + 0xC4);
                    v264 = ((v226 * v248) + (v225 * v246)) + ((v223 * v251) + *(a1 + 0x490));
                    v234 = *(a1 + 0x470);
                    v235 = *(a1 + 0x47C);
                    v236 = *(a1 + 0x488);
                    *(&Src + 1) = (v236 * v227) + ((v235 * v224) + (v234 * v253));
                    v259 = (v236 * v230) + ((v235 * v229) + (v234 * v228));
                    v262 = (v236 * v233) + ((v235 * v232) + (v234 * v231));
                    v265 = ((v236 * v248) + ((v235 * v246) + (v234 * v251))) + *(a1 + 0x494);
                    v237 = *(a1 + 0x474);
                    v238 = *(a1 + 0x480);
                    v239 = *(a1 + 0x48C);
                    *&v258 = (v227 * v239) + ((v224 * v238) + (v253 * v237));
                    v260 = (v230 * v239) + ((v229 * v238) + (v228 * v237));
                    v263 = (v233 * v239) + ((v232 * v238) + (v231 * v237));
                    v266 = ((v239 * v248) + ((v238 * v246) + (v237 * v251))) + *(a1 + 0x498);
                    sub_EEC0E0(v149, &v264);
                    goto LABEL_292;
                  }
                }
              }
              else
              {
                if ( v195 )
                {
                  v197 = *(a1 + 0x46C);
                  v252 = *(a1 + 0x98);
                  v198 = *(a1 + 0x9C);
                  v199 = *(a1 + 0x478);
                  v200 = *(a1 + 0x484);
                  v201 = *(a1 + 0xA0);
                  *&Src = (v201 * v200) + ((v198 * v199) + (v252 * v197));
                  v202 = *(a1 + 0xA4);
                  v203 = *(a1 + 0xA8);
                  v204 = *(a1 + 0xAC);
                  *(&v258 + 1) = (v204 * v200) + ((v203 * v199) + (v202 * v197));
                  v205 = *(a1 + 0xB0);
                  v206 = *(a1 + 0xB4);
                  v207 = *(a1 + 0xB8);
                  v261 = (v207 * v200) + ((v206 * v199) + (v205 * v197));
                  v250 = *(a1 + 0xBC);
                  v245 = *(a1 + 0xC0);
                  v247 = *(a1 + 0xC4);
                  v264 = ((v200 * v247) + (v199 * v245)) + ((v197 * v250) + *(a1 + 0x490));
                  v208 = *(a1 + 0x470);
                  v209 = *(a1 + 0x47C);
                  v210 = *(a1 + 0x488);
                  *(&Src + 1) = (v210 * v201) + ((v209 * v198) + (v208 * v252));
                  v259 = (v210 * v204) + ((v209 * v203) + (v208 * v202));
                  v262 = (v210 * v207) + ((v209 * v206) + (v208 * v205));
                  v265 = ((v210 * v247) + ((v209 * v245) + (v208 * v250))) + *(a1 + 0x494);
                  v211 = *(a1 + 0x474);
                  v212 = *(a1 + 0x480);
                  v213 = *(a1 + 0x48C);
                  *&v258 = (v201 * v213) + ((v198 * v212) + (v252 * v211));
                  v260 = (v204 * v213) + ((v203 * v212) + (v202 * v211));
                  v263 = (v207 * v213) + ((v206 * v212) + (v205 * v211));
                  v266 = ((v213 * v247) + ((v212 * v245) + (v211 * v250))) + *(a1 + 0x498);
                  sub_EEC130(v149, &v264);
                }
                if ( !((*(a1 + 0x231) == 0) | v148 ^ 1) && *(v138 + 0x2D70) <= 0.0 )
                {
                  v214 = *(*(a1 + 0x2B0) + 0x50i64);
                  if ( qword_4B1E5B0 > v214 )
                  {
                    v215 = *(qword_4B1E5A0 + v214);
                    if ( v215 )
                    {
                      LOBYTE(v100) = 1;
                      sub_1667DF0(v215, v100);
                    }
                  }
                }
              }
              goto LABEL_293;
            }
            v193 = *(a1 + 0x2B0);
          }
          v194 = *(v193 + (*(a1 + 0x43C) << 6) + 0xBC);
          goto LABEL_413;
        }
      }
      else
      {
        v138 = 0i64;
        if ( v136 )
          goto LABEL_268;
      }
      v143 = 1;
      if ( v138 )
        goto LABEL_367;
    }
    else
    {
      v143 = 1;
    }
LABEL_281:
    v148 = 0;
    v138 = 0i64;
    goto LABEL_282;
  }
LABEL_237:
  v122 = *(a1 + 0x460);
  if ( v122 > 0.0 && v122 < a9 )
  {
    if ( dword_4ACFD8C > *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4i64) )
    {
      Init_thread_header(&dword_4ACFD8C);
      if ( dword_4ACFD8C == 0xFFFFFFFF )
      {
        dword_4ACFD88 = sub_1749370("ShootPrimary");
        Init_thread_footer(&dword_4ACFD8C);
      }
    }
    v100 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( dword_4ACFD94 > *(*(v100 + 8i64 * TlsIndex) + 4i64) )
    {
      Init_thread_header(&dword_4ACFD94);
      if ( dword_4ACFD94 == 0xFFFFFFFF )
      {
        dword_4ACFD90 = sub_1749370("ShootSecondary");
        Init_thread_footer(&dword_4ACFD94);
      }
    }
    if ( !*(a1 + 0x50C) )
    {
      (*(*(*Unit_ + 0x50i64) + 0x18i64))(*Unit_ + 0x50i64, v100, v37);
      v123 = dword_4B74CA8;
      if ( !dword_4B74CA8 )
      {
        v124 = sub_1623330(0, 0x2F, 0, "playHapticPattern", 0);
        v123 = v124;
        dword_4B74CA8 = v124;
      }
      if ( (dword_4B70D40 & 2) != 0 )
      {
        v125 = sub_1625CD0(v123, &v258);
        Src = v125;
        if ( v125 )
          sub_1625D70(v125, v258);
      }
    }
    *(a1 + 0x460) = 0xBF800000;
  }
  *(a1 + 0x528) = 0;
  v126 = *(a1 + 0x3A2);
  if ( v116 )
  {
    if ( !v126 )
    {
      if ( *(a1 + 0x505) )
      {
        if ( *(a1 + 0x1F7) )
        {
          v127 = *(a1 + 0x444);
          if ( v127 > 0.0 && v127 <= a9 && (*(*Unit_ + 0x58i64) & 4) != 0 )
          {
            v128 = *(*Unit_ + 0x10B0i64);
            if ( v128 <= 0xF )
            {
              v100 = 0x897Ei64;
              if ( _bittest(&v100, v128) )
              {
                *(a1 + 0x505) = 0;
                *(a1 + 0x1F7) = 0;
              }
            }
          }
        }
      }
    }
  }
  v129 = *(a1 + 0x444);
  v130 = *(a1 + 0x448);
  if ( v129 > v130 )
  {
    if ( v130 <= v129 )
    {
      v131 = Y;
      v132 = 0.0;
      v133 = *(a1 + 0x444);
      if ( v130 >= a9 )
        goto LABEL_300;
    }
    else
    {
      v131 = 0.0;
      v132 = Y;
      v133 = *(a1 + 0x448);
      v130 = *(a1 + 0x444);
      if ( v129 >= a9 )
        goto LABEL_300;
    }
    if ( v133 <= a9 )
    {
      v131 = v132;
    }
    else
    {
      v144 = v133 - v130;
      v145 = LODWORD(a9);
      v145.m128_f32[0] = (a9 - v130) * (v132 - v131);
      if ( v144 > *&dword_449F1A8 || (v146 = 0i64, v144 < *&dword_449F1AC) )
      {
        v145.m128_f32[0] = v145.m128_f32[0] / v144;
        v146 = v145;
      }
      v147.m128_f32[0] = v130 - a9;
      v131 = v131 + _mm_andnot_ps(_mm_cmple_ss(0i64, v147), v146).m128_f32[0];
    }
LABEL_300:
    if ( v131 != 0.0 )
      goto LABEL_302;
  }
  v152 = *(a1 + 0x2B0);
  v100 = *(a1 + 0x43C) << 6;
  if ( !*(v152 + v100 + 0xD0) )
  {
    *(v152 + v100 + 0xD0) = 1;
    if ( !*(a1 + 0x3A2) )
      goto LABEL_316;
    goto LABEL_305;
  }
LABEL_302:
  if ( !v126 )
    goto LABEL_316;
LABEL_305:
  if ( *(a1 + 0x505)
    && (!*(*(a1 + 0x2B0) + 0xCi64)
     || *(a1 + 0x444) > a9
     || !(*(*(*Unit_ + 0x50i64) + 0x10i64))(*Unit_ + 0x50i64, v100, v37)) )
  {
LABEL_316:
    if ( *(a1 + 0x43E) )
      sub_217180(a1, 0, 0, 0xFFFFFFFF, 1);
    v159 = a9;
    v160 = *(a1 + 0x1F7) == 0 && a9 < *(a1 + 0x444);
    if ( !*(a1 + 0x4C0) )
    {
LABEL_327:
      if ( !*(a1 + 0x4F0) )
      {
LABEL_336:
        v167 = *(a1 + 0x2B0);
        if ( v167 )
        {
          v168 = *(v167 + 0x2D0);
          if ( v168 )
          {
            if ( v159 > (*(v168 + 8) + *(a1 + 0x378)) )
              *(a1 + 0x500) = fmaxf(0.0, *(a1 + 0x500) - (a7 * *(v168 + 4)));
          }
        }
        return;
      }
      if ( v160 )
      {
        if ( !*(a1 + 0x4D8) )
        {
          v166 = (*(a1 + 0x4D0) * a7) + *(a1 + 0x4F8);
          goto LABEL_335;
        }
        v164 = *(a1 + 0x4F8);
        v165 = *(*(a1 + 0x4E0) + 8i64 * *(a1 + 0x4F0) - 8);
        if ( v164 <= v165 )
        {
          v166 = fminf((*(a1 + 0x4D0) * a7) + v164, v165);
LABEL_335:
          *(a1 + 0x4F8) = v166;
          goto LABEL_336;
        }
      }
      else
      {
        v164 = *(a1 + 0x4F8);
      }
      v166 = fmaxf(0.0, v164 - (*(a1 + 0x4D4) * a7));
      goto LABEL_335;
    }
    if ( v160 )
    {
      if ( !*(a1 + 0x4A8) )
      {
        v163 = (*(a1 + 0x4A0) * a7) + *(a1 + 0x4C8);
        goto LABEL_326;
      }
      v161 = *(a1 + 0x4C8);
      v162 = *(*(a1 + 0x4B0) + 8i64 * *(a1 + 0x4C0) - 8);
      if ( v161 <= v162 )
      {
        v163 = fminf((*(a1 + 0x4A0) * a7) + v161, v162);
LABEL_326:
        *(a1 + 0x4C8) = v163;
        goto LABEL_327;
      }
    }
    else
    {
      v161 = *(a1 + 0x4C8);
    }
    v163 = fmaxf(0.0, v161 - (*(a1 + 0x4A4) * a7));
    goto LABEL_326;
  }
  v153 = Y;
  if ( *(a1 + 0x360) )
  {
    v154 = *(a1 + 0x2B0);
    if ( v154 )
      v153 = *(v154 + 0x84) / *(v154 + 0x80);
  }
  v155 = v153 * a7;
  if ( *(a1 + 0x4C0) )
  {
    if ( *(a1 + 0x4A8) )
    {
      v156 = *(a1 + 0x4C8);
      v157 = *(*(a1 + 0x4B0) + 8i64 * *(a1 + 0x4C0) - 8);
      if ( v156 <= v157 )
        v158 = fminf((*(a1 + 0x4A0) * v155) + v156, v157);
      else
        v158 = fmaxf(0.0, v156 - (*(a1 + 0x4A4) * v155));
    }
    else
    {
      v158 = (*(a1 + 0x4A0) * v155) + *(a1 + 0x4C8);
    }
    *(a1 + 0x4C8) = v158;
  }
  v169 = a10;
  if ( *(a1 + 0x4F0) )
  {
    if ( *(a1 + 0x4D8) )
    {
      v170 = *(a1 + 0x4F8);
      v171 = *(*(a1 + 0x4E0) + 8i64 * *(a1 + 0x4F0) - 8);
      if ( v170 <= v171 )
        v172 = fminf((v155 * *(a1 + 0x4D0)) + v170, v171);
      else
        v172 = fmaxf(0.0, v170 - (v155 * *(a1 + 0x4D4)));
    }
    else
    {
      v172 = (v155 * *(a1 + 0x4D0)) + *(a1 + 0x4F8);
    }
    *(a1 + 0x4F8) = v172;
  }
  sub_21CB00(a1, a2, v14, a4, a5, a6, a7, a8, a9, v169, v116, v18);
}
