void __fastcall log_mission_completion(__int64 a1, int a2)
{
  __m128 v2; // xmm1
  int v5; // eax
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // eax
  __m128 v14; // xmm8
  float v15; // xmm11_4
  float v16; // xmm10_4
  float v17; // xmm9_4
  unsigned int v18; // ecx
  float v19; // xmm6_4
  int v20; // edx
  __int64 v21; // rdx
  float *v22; // rbp
  bool v23; // zf
  float *v24; // rdx
  float v25; // xmm13_4
  float v26; // xmm12_4
  unsigned int *v27; // rbp
  unsigned int v28; // edx
  unsigned int *v29; // rbp
  __int64 v30; // rdx
  int v31; // ebp
  int v32; // edi
  char v33; // di
  char v34; // bp
  int v35; // eax
  int v36; // r12d
  int i; // esi
  char v38; // al
  char v39; // bl
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // r12
  CHAR *v43; // rbp
  CHAR *v44; // rbx
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v46; // rax
  unsigned int v47; // eax
  int v48; // ecx
  float v49; // xmm7_4
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // ebp
  __int64 v53; // rsi
  const char *v54; // rax
  __int64 v55; // rax
  int v56; // eax
  int v57; // r10d
  CHAR *v58; // rdx
  CHAR *v59; // r8
  __m128 v60; // xmm0
  __m128 v61; // xmm0
  float v62; // xmm7_4
  float v63; // xmm1_4
  float v64; // xmm0_4
  float v65; // xmm0_4
  float v66; // xmm1_4
  __int64 v67; // rax
  float v68; // xmm2_4
  float v69; // xmm2_4
  unsigned int *v70; // rcx
  __int64 v71; // rbx
  __int64 v72; // rdx
  float *v73; // rcx
  char v74; // si
  char v75; // bp
  int v76; // esi
  int v77; // eax
  float *v78; // rsi
  float *v79; // rsi
  __int64 v80; // rax
  __m128 v81; // xmm0
  __int64 v82; // rcx
  float v83; // xmm1_4
  float v84; // xmm6_4
  __m128 v85; // rt1
  __m128 v86; // xmm2
  __m128 v87; // xmm2
  int v88; // ecx
  int v89; // eax
  _QWORD *v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rsi
  __int64 v93; // rcx
  __int64 v94; // rsi
  CHAR *v95; // r8
  __int64 v96; // rax
  int v97; // esi
  int v98; // eax
  bool v99; // cl
  __int64 v100; // rdx
  float v101; // xmm0_4
  __int64 v102; // rdi
  __int64 v103; // rsi
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  float v107; // xmm6_4
  _QWORD *v108; // rcx
  __int64 v109; // rax
  int v110; // edi
  unsigned int v111; // eax
  __int64 v112; // r8
  unsigned __int8 v113; // bl
  __int64 v114; // rsi
  int v115; // ebp
  int v116; // r8d
  unsigned int v117; // eax
  __int64 v118; // r12
  CHAR *v119; // rdx
  CHAR *v120; // rdi
  _QWORD *v121; // rcx
  int v122; // esi
  int v123; // [rsp+20h] [rbp-1428h]
  int v124; // [rsp+94h] [rbp-13B4h]
  __int64 v125; // [rsp+98h] [rbp-13B0h] BYREF
  int v126; // [rsp+A4h] [rbp-13A4h]
  CHAR *v127; // [rsp+A8h] [rbp-13A0h] BYREF
  __int64 v128; // [rsp+B0h] [rbp-1398h]
  __int64 v129; // [rsp+B8h] [rbp-1390h]
  __int64 v130; // [rsp+C0h] [rbp-1388h] BYREF
  __int64 v131; // [rsp+C8h] [rbp-1380h]
  int v132; // [rsp+D0h] [rbp-1378h]
  __int64 v133; // [rsp+D8h] [rbp-1370h]
  int v134; // [rsp+E0h] [rbp-1368h]
  __int64 v135; // [rsp+E8h] [rbp-1360h]
  unsigned int v136; // [rsp+F4h] [rbp-1354h]
  __int64 v137; // [rsp+F8h] [rbp-1350h]
  char v138[3056]; // [rsp+100h] [rbp-1348h] BYREF
  __int64 v139; // [rsp+CF0h] [rbp-758h]
  __int128 v140; // [rsp+D0Ch] [rbp-73Ch]
  __int128 v141; // [rsp+D1Ch] [rbp-72Ch]
  __int128 v142; // [rsp+D2Ch] [rbp-71Ch]
  __int128 v143; // [rsp+D3Ch] [rbp-70Ch]
  __int128 v144; // [rsp+D4Ch] [rbp-6FCh]
  __int128 v145; // [rsp+D5Ch] [rbp-6ECh]
  __int128 v146; // [rsp+D6Ch] [rbp-6DCh]
  __int128 v147; // [rsp+D7Ch] [rbp-6CCh]
  __int128 v148; // [rsp+D8Ch] [rbp-6BCh]
  __int128 v149; // [rsp+D9Ch] [rbp-6ACh]
  __int128 v150; // [rsp+DACh] [rbp-69Ch]
  __int128 v151; // [rsp+DBCh] [rbp-68Ch]
  __int128 v152; // [rsp+DCCh] [rbp-67Ch]
  char v153; // [rsp+DDCh] [rbp-66Ch]
  __int128 v154; // [rsp+DE0h] [rbp-668h]
  __int128 v155; // [rsp+DF0h] [rbp-658h]
  __int128 v156; // [rsp+E00h] [rbp-648h]
  __int128 v157; // [rsp+E10h] [rbp-638h]
  char v158[1368]; // [rsp+E20h] [rbp-628h] BYREF
  int v159; // [rsp+1378h] [rbp-D0h]

  if ( byte_4B19A94 )
    return;
  v5 = *(*(game + 0x440) + 0x3F4i64);
  if ( v5 == 0x17 )
  {
    if ( *(*(game + 0x498) + 0x2378i64) )
      return;
  }
  v6 = LocalUnit;
  if ( !LocalUnit || (*(LocalUnit + 0x1058) & 0x7000014) != 0 || *(LocalUnit + 0x10A8) > 1u )
    return;
  v7 = *(game + 0x420);
  v125 = *(a1 + 8i64 * (v5 == 9) + 0x14);
  v139 = 0i64;
  v154 = 0i64;
  v155 = 0i64;
  v156 = 0i64;
  v157 = 0i64;
  memset(v158, 0, 0x15);
  memset(&v158[0x18], 0, 0x55);
  memset(&v158[0x70], 0, 0x55);
  memset(&v158[0xC8], 0, 0x55);
  memset(&v158[0x120], 0, 0x55);
  memset(&v158[0x178], 0, 0x55);
  memset(&v158[0x1D0], 0, 0x55);
  memset(&v158[0x228], 0, 0x55);
  memset(&v158[0x280], 0, 0x55);
  memset(&v158[0x2D8], 0, 0x55);
  memset(&v158[0x330], 0, 0x55);
  memset(&v158[0x388], 0, 0x55);
  memset(&v158[0x3E0], 0, 0x55);
  memset(&v158[0x438], 0, 0x55);
  memset(&v158[0x490], 0, 0x55);
  memset(&v158[0x4E8], 0, 0x70);
  v159 = 0;
  v8 = 0i64;
  memset(v138, 0, 0xBEDui64);
  v140 = 0i64;
  v141 = 0i64;
  v142 = 0i64;
  v143 = 0i64;
  v144 = 0i64;
  v145 = 0i64;
  v146 = 0i64;
  v147 = 0i64;
  v148 = 0i64;
  v149 = 0i64;
  v150 = 0i64;
  v151 = 0i64;
  v152 = 0i64;
  v153 = 0;
  v11 = *(LocalUnit + 0x10B0);
  if ( !*(LocalUnit + 0x10B0) )
    v8 = LocalUnit;
  if ( v11 <= 0xF && (v12 = 0x897E, _bittest(&v12, v11)) )
  {
    sub_866000(LocalUnit, v138);
  }
  else if ( !v11 )
  {
    sub_3AD9A0(v8, v138);
  }
  v124 = *(a1 + 0x10);
  LOBYTE(v13) = 0;
  v14 = dword_44801CC;
  if ( *&dword_44801CC > *(a1 + 0x7C) )
    LOBYTE(v13) = HIBYTE(*(a1 + 0x10));
  v15 = *(v6 + 0x99C);
  v16 = *(v6 + 0x9A0);
  v17 = *(v6 + 0x9A4);
  v18 = *(v6 + 0x10B0);
  v19 = 0.0;
  if ( v18 > 0xF )
    goto LABEL_66;
  v20 = 0x897E;
  if ( _bittest(&v20, v18) )
  {
    v21 = *(v6 + 0x1EA0);
    v22 = (v21 + 0x54);
    v23 = v21 == 0;
    v24 = &xmmword_4514A60;
    if ( !v23 )
      v24 = v22;
    if ( *(v6 + 0x58) == 1 )
      v24 = (v6 + 0x22AC);
    v25 = *v24;
    v26 = v24[1];
    v19 = v24[2];
    goto LABEL_22;
  }
  if ( *(v6 + 0x10B0) )
  {
LABEL_66:
    v26 = 0.0;
    v25 = 0.0;
    goto LABEL_22;
  }
  v26 = 0.0;
  v25 = 0.0;
  if ( (*(v6 + 0x1058) & 0x2000010) == 0 )
  {
    v50 = *(v6 + 0x9D0);
    v19 = *(v50 + 0x990);
    v2 = *(v50 + 0x988);
    v26 = *v2.m128_u64;
    v25 = *(v50 + 0x980);
  }
LABEL_22:
  v27 = *(game + 0x430);
  if ( !byte_4B1C820 )
  {
LABEL_25:
    v29 = v27 + 0xD3;
    goto LABEL_28;
  }
  v28 = (qword_4B1C514 >> 2) & 3;
  if ( v28 == 1 )
  {
    v29 = v27 + 0xD4;
  }
  else
  {
    if ( !v28 )
      goto LABEL_25;
    v29 = v27 + 0xD5;
  }
LABEL_28:
  v137 = v7;
  v30 = *v29;
  v31 = 1;
  if ( v30 )
    v31 = v30;
  v32 = ((qword_4B1C514 & 0xC) == 8) + 1;
  if ( !byte_4B1C820 )
    v32 = v31;
  if ( v30 )
    v32 = v31;
  v13 = v13;
  v126 = v13;
  v136 = v32;
  if ( v32 == 3 )
  {
    v33 = 0;
    v34 = 0;
  }
  else
  {
    v35 = v13 << 0x18;
    v36 = v35 | v124 & 0xFFFFFF;
    if ( v32 == 1 )
    {
      v34 = 0;
      v33 = 0;
      for ( i = 0; i != 0x14; ++i )
      {
        v38 = sub_C01460(a1, a2, i, &v125, v36);
        v34 = v38 | v34 & 1;
        v33 = v38 & (i == 0xB) | v33 & 1;
      }
    }
    else
    {
      v33 = 0;
      v39 = sub_C01460(a1, a2, 0, &v125, v35 | v124 & 0xFFFFFFu);
      v34 = v39 | sub_C01460(a1, a2, 1, &v125, v36);
    }
  }
  if ( *(v6 + 0x10A8) <= 1u && *(v6 + 0x28D) && *(qword_4ACEE78 + 0x75) )
  {
    v40 = sub_BC2D50(0x13i64);
    sub_C01740(a1, a2, v40, &v125, *(a1 + 0x10));
    v34 = 1;
  }
  v41 = game;
  v42 = v137;
  if ( *(game + 0x584) > 0.0 && *(v6 + 0x10A8) <= 1u && !*(qword_4B19AA0 + 0x587) )
  {
    v43 = *(*(game + 0x420) + 0x250i64);
    v44 = &szFile;
    if ( !v43 )
      v43 = &szFile;
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v30, v9, v10);
    v46 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    v127 = 0i64;
    v128 = v46;
    v129 = 0i64;
    if ( *v43 )
      goto LABEL_74;
    v47 = *(v6 + 0x10B0);
    if ( v47 > 0xF )
      goto LABEL_70;
    v48 = 0x897E;
    if ( !_bittest(&v48, v47) )
      goto LABEL_70;
    v49 = *(v6 + 0x288);
    if ( v49 <= 0.0 )
      goto LABEL_70;
    if ( v47 == 0xF )
    {
      if ( v49 != *(*(game + 0x498) + 0x1F20i64) )
        goto LABEL_68;
    }
    else
    {
      if ( v47 != 5 )
      {
        if ( v47 != 3 || v49 == *(*(game + 0x498) + 0x1F1Ci64) )
          goto LABEL_70;
LABEL_68:
        v51 = sub_BC2D50(0x19Ci64);
        v52 = (v49 + *&dword_44801CC);
        v53 = v51;
        v131 = sub_BC2D50(0x12 - (*(v6 + 0x28C) == 0));
        LODWORD(v130) = 1;
        v133 = v52;
        v132 = 2;
        v135 = v53;
        v134 = 1;
        sub_1546EF0(&v127, 0x80i64, "%s %d%s", &v130, 3);
LABEL_71:
        if ( v129 )
          LODWORD(v44) = v127;
        LODWORD(v43) = v44;
LABEL_74:
        sub_C01740(a1, a2, v43, &v125, (v126 << 0x18) | v124 & 0xFFFFFF);
        if ( v127 )
          (*(*v128 + 0x40i64))(v128);
        v34 = 1;
        v41 = game;
        goto LABEL_77;
      }
      if ( v49 != *(*(game + 0x498) + 0x1F28i64) )
        goto LABEL_68;
    }
LABEL_70:
    v54 = sub_BC2D50(0x10i64);
    sub_185590(&v127, v54);
    goto LABEL_71;
  }
LABEL_77:
  v55 = *(*(v41 + 0x420) + 0x400i64);
  if ( v55 && *(v55 + 0x1C0) > 0.0 )
  {
    v56 = sub_BC2D50(0xFi64);
    sub_C01740(a1, a2, v56, &v125, (v126 << 0x18) | v124 & 0xFFFFFF);
    v34 = 1;
  }
  if ( *(a1 + 0x88) > 0.0 )
  {
    if ( *(a1 + 0xA8) )
      v57 = (v126 << 0x18) | v124 & 0xFFFFFF;
    else
      v57 = *(a1 + 0x10);
    v58 = &szFile;
    v59 = &szFile;
    if ( *(a1 + 0xA0) )
      v59 = *(a1 + 0x90);
    v60 = v125;
    v60.m128_f32[0] = *&v125 + v14.m128_f32[0];
    v2 = _mm_round_ss(0i64, v60, 9);
    LODWORD(v125) = v2.m128_i32[0];
    v61 = HIDWORD(v125);
    v61.m128_f32[0] = *(&v125 + 1) + v14.m128_f32[0];
    LODWORD(v62) = _mm_round_ss(0i64, v61, 9).m128_u32[0];
    v130 = 0i64;
    LODWORD(v131) = 0;
    if ( *(a1 + 0x60) )
      v58 = *(a1 + 0x60);
    sub_BA0310(
      a2,
      v58,
      v59,
      *(a1 + 0xC),
      v57,
      v59,
      0xFFFFFFFF,
      0,
      *(a1 + 0x4C),
      *(a1 + 0x50),
      *(a1 + 0x54),
      *(a1 + 0x58),
      v58,
      0xBF800000,
      0xFFFFFFFF,
      1,
      &v130,
      0i64);
    *(&v125 + 1) = v62 + *(a1 + 0x40);
  }
  if ( !*(qword_4ACEE78 + 0x297) || *(v6 + 0x10B0) || *(v6 + 0x10A8) > 1u )
  {
LABEL_155:
    v99 = 0;
    if ( (dword_4B1C814 & 2) != 0 && qword_4B507E8 )
      v99 = *(qword_4B507E8 + 0x60) == 0;
    v100 = *(v42 + 0xD8);
    if ( v100 != 2 )
    {
      v100 = *(v42 + 0xD8);
      if ( v100 != 3 )
        goto LABEL_166;
    }
    if ( *(a1 + 0x68) )
      goto LABEL_166;
    LOBYTE(v100) = ((dword_4B1C814 & 4) >> 2) | (byte_4B1D300 == 0);
    if ( v100 | v99 )
      goto LABEL_166;
    v101 = *(a1 + 0x80);
    v2 = 0i64;
    if ( v101 < 0.0 )
    {
      *(a1 + 0x80) = 0;
      *(a1 + 0x84) = 0;
      v101 = 0.0;
    }
    if ( v101 <= *(a1 + 0x74) )
    {
      v121 = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(v121[TlsIndex] + 1i64) )
        _dyn_tls_on_demand_init(v121, v100, v9, v10);
      sub_14584E0(&v130, *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64));
      v2 = *(a1 + 0x80);
      v2.m128_f32[0] = (v2.m128_f32[0] * *&dword_448790C) / *(a1 + 0x74);
      v122 = (*&dword_448790C - v2.m128_f32[0]);
      if ( v122 > 0 && dword_4A70D70 != v122 )
      {
        sub_145A8E0(&v130, "count", v122);
        sub_B27BC0(qword_4B19AA0 + 0x5A8, "hint:mission_complete:show", &v130);
        dword_4A70D70 = v122;
        byte_4B1AB40 = 1;
      }
      sub_1458FF0(&v130);
      if ( !v34 )
        goto LABEL_173;
    }
    else
    {
LABEL_166:
      if ( qword_4B19AA0 && (byte_4B1AB40 & 1) != 0 )
      {
        sub_B27BC0(qword_4B19AA0 + 0x5A8, "hint:mission_complete:hide", &qword_4B67850);
        byte_4B1AB40 = 0;
      }
      if ( !v34 )
        goto LABEL_173;
    }
    if ( *(a1 + 0x69) )
    {
      if ( v33 )
        sub_EECEF0();
      else
        sub_EECDD0();
    }
LABEL_173:
    v102 = qword_4B19AA0;
    if ( *(qword_4B19AA0 + 0x431) )
    {
      v103 = game;
      v107 = sub_5655B0(game);
      *(v102 + 0x424) = *(*(v103 + 0x498) + 0x1D60i64) + v107;
      v108 = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(v108[TlsIndex] + 1i64) )
        _dyn_tls_on_demand_init(v108, v104, v105, v106);
      v109 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
      v127 = 0i64;
      v128 = v109;
      v129 = 0i64;
      v110 = *(v42 + 0x330);
      v111 = (*(*(v6 + 0x50) + 0x30i64))(v6 + 0x50);
      LOBYTE(v112) = 1;
      v113 = (*(*(v42 + 0x50) + 0x18i64))(v42 + 0x50, v6 + 0x9C0, v112, v111, v110, 0);
      v114 = sub_BC2D50(0x19Ci64);
      v115 = (*(v42 + 0x308) - v107);
      v131 = sub_BC2D50(v113 + 0x14);
      LODWORD(v130) = 1;
      v133 = v115;
      v132 = 2;
      v135 = v114;
      v134 = 1;
      add_server_param(&v127, 0x200i64, "%s %i%s", &v130, 3);
      v117 = 0xFFFFFFFF;
      if ( v113 )
        v117 = 0xFFFF0000;
      v118 = v127;
      v119 = v127;
      if ( !v129 )
        v119 = &szFile;
      v14.m128_f32[0] = v14.m128_f32[0] + *&v125;
      LODWORD(v125) = _mm_round_ss(v2, v14, 9).m128_u32[0];
      v130 = 0i64;
      LODWORD(v131) = 0;
      v120 = *(a1 + 0x60);
      if ( !v120 )
        v120 = &szFile;
      sub_BA0310(
        a2,
        v119,
        v116,
        *(a1 + 0xC),
        v117,
        v119,
        0xFFFFFFFF,
        0,
        *(a1 + 0x4C),
        *(a1 + 0x50),
        *(a1 + 0x54),
        *(a1 + 0x58),
        v120,
        0xBF800000,
        0xFFFFFFFF,
        1,
        &v130,
        0i64);
      if ( v118 )
        (*(*v128 + 0x40i64))(v128, v118);
    }
    return;
  }
  v63 = fsqrt(((v19 * v19) + (v26 * v26)) + (v25 * v25));
  v64 = 0.0;
  if ( v63 > *&dword_449F1A8 )
    v64 = Y / v63;
  v65 = acosf(fminf(fmaxf((((v19 * v17) + (v26 * v16)) + (v25 * v15)) * v64, *&dword_44801E8), Y));
  if ( *a1 && (dword_4B19A88 & *(a1 + 4)) != 0 )
  {
    v66 = *(a1 + 0x30);
    v67 = *(v6 + 0x9D0);
    v68 = *(v67 + 0x5524);
    *(a1 + 0x34) = v68;
    if ( *(v67 + 0x12EC) > *&qword_44CE4E8 )
      *(a1 + 0x34) = v68 + *&dword_44A0268;
    if ( *(v67 + 0x43A4) )
      v69 = *(v67 + 0x5C4C);
    else
      v69 = *&dword_44A4258 + v66;
    v70 = *(v67 + 0x3AC8);
    v9 = *v70;
    if ( v9 <= 0 )
    {
      v10 = 0i64;
      v72 = v136;
    }
    else
    {
      if ( v9 == 1 )
      {
        v71 = 0i64;
        v10 = 0i64;
      }
      else
      {
        v71 = 0i64;
        v10 = 0i64;
        do
        {
          v78 = *&v70[2 * v71 + 2];
          if ( *(*v78 + 0x22Ci64) && v14.m128_f32[0] < v78[0xC] )
            LOBYTE(v10) = 1;
          v79 = *&v70[2 * v71 + 4];
          if ( *(*v79 + 0x22Ci64) && v14.m128_f32[0] < v79[0xC] )
            LOBYTE(v10) = 1;
          v71 += 2i64;
        }
        while ( (v9 & 0xFFFFFFFE) != v71 );
      }
      v72 = v136;
      if ( (v9 & 1) != 0 )
      {
        v73 = *&v70[2 * v71 + 2];
        if ( *(*v73 + 0x22Ci64) )
        {
          if ( v14.m128_f32[0] < v73[0xC] )
            LOBYTE(v10) = 1;
        }
      }
    }
    v74 = *(*(game + 0x440) + 0xAB8i64);
    if ( v72 == 1 && v69 >= v66 && v65 > *&dword_44AD570 && !v10 )
    {
      if ( sub_325030(v6) > *(a1 + 0x34) )
      {
        v72 = 1i64;
      }
      else
      {
        v72 = 1i64;
        if ( (v74 & 1) == 0 )
        {
          v75 = v74;
          v76 = (v126 << 0x18) | v124 & 0xFFFFFF;
          v77 = sub_BC2D50(0i64);
          v123 = v76;
          v74 = v75;
          sub_C01740(a1, a2, v77, &v125, v123);
          v72 = 1i64;
          v34 = 1;
        }
      }
    }
    v80 = 0i64;
    if ( !*(v6 + 0x10B0) )
      v80 = v6;
    v81 = 0i64;
    if ( !*(v80 + 0x10B0) )
    {
      v82 = *(v80 + 0x9D0);
      v83 = *(v82 + 0x9E8);
      if ( v83 > *&dword_44AB1C0 )
      {
        v81 = *(v82 + 0xA90);
        v81.m128_f32[0] = *v81.m128_u64;
      }
    }
    v84 = *(v80 + 0x3104);
    if ( *&dword_4487E14 > v84 )
    {
      v85.m128_i32[0] = *(a1 + 0x38);
      v86 = _mm_cmplt_ss(v81, v85);
      v81 = _mm_or_ps(_mm_andnot_ps(v86, v81), _mm_and_ps(_mm_andnot_ps(_mm_cmplt_ss(*(a1 + 0x3C), v81), v81), v86));
    }
    v2 = 0i64;
    v87 = _mm_cmplt_ss(v81, 0i64);
    v88 = (COERCE_FLOAT(dword_44A02D4 & v87.m128_i32[0] | _mm_andnot_ps(
                                                            v87,
                                                            _mm_and_ps(dword_44801CC, _mm_cmplt_ss(0i64, v81))).m128_u32[0])
         + v81.m128_f32[0]);
    v89 = *(a1 + 0x6C);
    if ( v89 == v88 )
    {
      *(a1 + 0x70) = 0x3E4CCCCD;
    }
    else
    {
      if ( *(a1 + 0x70) > 0.0 )
        goto LABEL_137;
      *(a1 + 0x70) = 0x3E4CCCCD;
      *(a1 + 0x6C) = v88;
    }
    v89 = v88;
LABEL_137:
    if ( v72 == 1 && v89 )
    {
      v90 = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(v90[TlsIndex] + 1i64) )
        _dyn_tls_on_demand_init(v90, v72, v9, v10);
      v91 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
      v127 = 0i64;
      v128 = v91;
      v129 = 0i64;
      if ( (v74 & 1) == 0 )
      {
        v92 = sub_BC2D50(0xBi64);
        if ( v84 >= *&dword_4487E14 )
          v93 = 0xAi64;
        else
          v93 = 9i64;
        v131 = sub_BC2D50(v93);
        LODWORD(v130) = 1;
        v133 = *(a1 + 0x6C);
        v132 = 2;
        v135 = v92;
        v134 = 1;
        add_server_param(&v127, 0x200i64, "%s %i%s", &v130, 3);
        v94 = v127;
        v95 = &szFile;
        if ( v129 )
          LODWORD(v95) = v127;
        sub_C01740(a1, a2, v95, &v125, (v126 << 0x18) | v124 & 0xFFFFFF);
        v34 = 1;
        if ( v94 )
          (*(*v128 + 0x40i64))(v128, v94);
      }
    }
    v96 = *(v6 + 0x11B0);
    if ( v96 && *(v96 + 0xB24) )
    {
      v97 = (v126 << 0x18) | v124 & 0xFFFFFF;
      v98 = sub_BC2D50(0x1C2i64);
      sub_C01740(a1, a2, v98, &v125, v97);
      if ( !*(a1 + 0x164) )
        sub_B27BC0(qword_4B19AA0 + 0x5A8, "hint:pilot_lose_control:show", &qword_4B67850);
      *(a1 + 0x164) = 1;
      v34 = 1;
    }
    else
    {
      *(a1 + 0x164) = 0;
    }
    goto LABEL_155;
  }
}
