char __fastcall unit_attack_target(__int64 a1, __int64 *a2)
{
  __m128 v2; // xmm0
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // ebp
  unsigned int v12; // edi
  __int64 v13; // rax
  int v14; // esi
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // esi
  __int64 Unit; // rbx
  unsigned int v19; // eax
  __int64 *v20; // rsi
  float v21; // xmm6_4
  const char *v22; // rax
  int v23; // r13d
  char v24; // al
  unsigned int v25; // r8d
  unsigned int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rbp
  unsigned int v30; // eax
  __int64 *v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rcx
  bool v35; // zf
  __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // r14
  __int64 v39; // r13
  __int64 v40; // r12
  void *v41; // rbp
  __int64 *v42; // rax
  __int64 v43; // rsi
  __int64 v44; // r15
  __int64 v45; // rbx
  void *v46; // r12
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rbx
  __int64 v50; // rax
  unsigned __int64 v51; // r12
  __int64 v52; // rax
  unsigned __int64 v53; // rbx
  void *v54; // r15
  void *v55; // r15
  _QWORD *v56; // rcx
  __int64 v57; // rax
  __int64 *v58; // r14
  __int64 v59; // rbx
  int v60; // esi
  unsigned int v61; // edi
  __int64 v62; // rax
  int v63; // eax
  int v64; // eax
  __int64 (__fastcall *v65)(); // rsi
  unsigned int v66; // edi
  unsigned int v67; // eax
  char *v68; // rax
  float v69; // xmm8_4
  int v70; // ebp
  char v71; // bl
  int v72; // edi
  float v73; // xmm9_4
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rbx
  __int64 v78; // rdi
  int v79; // esi
  _QWORD *v80; // rcx
  __int64 v81; // rax
  __int64 *v82; // r15
  void **v83; // rdx
  _QWORD *v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rbp
  unsigned int v87; // r13d
  unsigned int v88; // edi
  __int64 v89; // rax
  int v90; // esi
  int v91; // eax
  int v92; // eax
  unsigned int v93; // eax
  unsigned int v94; // esi
  unsigned int v95; // ecx
  __int64 v96; // rbp
  unsigned int v97; // edi
  __int64 v98; // rax
  int v99; // esi
  int v100; // eax
  unsigned int v101; // eax
  _QWORD *v102; // rcx
  unsigned __int64 v103; // rax
  unsigned __int64 v104; // rbp
  __int64 v105; // rcx
  __int64 v106; // rcx
  unsigned __int64 v107; // rdx
  unsigned int v108; // eax
  __int64 v109; // rax
  __int64 v110; // rax
  const char *v111; // rax
  const char *v112; // r14
  unsigned __int8 v113; // al
  __int64 v114; // r12
  __int64 v115; // rsi
  __int64 v116; // rbx
  unsigned __int8 *v117; // rdx
  unsigned int v118; // ecx
  __int64 v119; // rax
  unsigned __int64 v120; // r12
  __int64 v121; // rbx
  __int64 v122; // rsi
  const char *v123; // rcx
  __int64 v124; // rsi
  __int64 v125; // r12
  unsigned int v126; // r8d
  unsigned int i; // esi
  _QWORD *v128; // rcx
  __int64 v129; // rdx
  __int64 v130; // rax
  unsigned __int64 v131; // rbp
  int v132; // eax
  __int64 v133; // rax
  __int64 v134; // r8
  unsigned int v135; // ebp
  unsigned int v136; // ebx
  unsigned int v137; // edi
  int v138; // esi
  __int64 v139; // rcx
  unsigned int v140; // eax
  unsigned int v141; // edx
  __int64 v142; // rcx
  int v143; // ecx
  float v144; // xmm12_4
  __m128 v145; // xmm14
  __int64 v146; // r12
  __int64 Unit_; // rbx
  unsigned int UnitType; // eax
  int v149; // ecx
  __int64 *v150; // r14
  unsigned int v151; // xmm7_4
  __int64 v152; // rax
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // r13
  unsigned int v156; // eax
  __int64 v157; // rsi
  unsigned __int64 j; // rdi
  __int64 v159; // rdx
  char v160; // al
  __int64 _Unit; // r13
  _BYTE *v162; // rax
  unsigned int v163; // r14d
  const char *v164; // rbx
  unsigned __int8 v165; // cl
  unsigned __int8 *v166; // rax
  unsigned int v167; // edx
  __int64 v168; // rax
  unsigned __int64 v169; // rdi
  __int64 v170; // rsi
  __int64 v171; // rbp
  const char *v172; // rcx
  __int64 v173; // rbx
  __int64 v174; // rbp
  __int64 v175; // r8
  __int64 v176; // r9
  unsigned __int64 v177; // rdi
  __int64 v178; // rsi
  unsigned int v179; // eax
  __int64 v180; // r14
  void *v181; // rbx
  __int64 v182; // r14
  __int64 v183; // rax
  __int64 v184; // rbp
  const char *v185; // rsi
  __int64 v186; // rax
  __int64 v187; // rcx
  __int64 v188; // rax
  char v189; // si
  __int64 v190; // r14
  unsigned __int64 *v191; // rax
  __int64 v192; // rcx
  unsigned int v193; // eax
  __int64 v194; // r13
  __int64 *v195; // rbp
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // rdi
  unsigned int v201; // ebp
  unsigned int v202; // r9d
  __int64 v203; // rax
  int v204; // ecx
  unsigned int v205; // ebx
  int v206; // eax
  unsigned int v207; // eax
  float v208; // xmm7_4
  float v209; // xmm0_4
  __int128 *v210; // rax
  int v211; // eax
  int v212; // eax
  __m128 v213; // xmm1
  const char *v214; // rax
  int v215; // esi
  int v216; // ecx
  const char *v217; // rdi
  int v218; // eax
  const char *v219; // rax
  const char *v220; // rbp
  unsigned __int8 v221; // al
  unsigned __int8 *v222; // rcx
  unsigned int v223; // edx
  __int64 v224; // rax
  unsigned __int64 v225; // rsi
  __int64 v226; // rbx
  __int64 v227; // rdi
  const char *v228; // rcx
  const char *v229; // rax
  const char *v230; // rdi
  __int64 v231; // rdx
  __int64 v232; // r8
  __int64 v233; // rsi
  __int64 v234; // rax
  void *v235; // rbp
  int v236; // edi
  __int64 *v237; // rbx
  __int64 v238; // rcx
  __int64 v239; // rax
  unsigned int v240; // ecx
  __int64 v241; // rsi
  __int64 v242; // rax
  void *v243; // rbx
  __int64 v244; // rdi
  __int64 v245; // rbp
  unsigned int v246; // ecx
  __int64 v247; // rsi
  __int64 v248; // rax
  void *v249; // rbx
  __int64 v250; // rdi
  __int64 v251; // rbp
  _QWORD *v252; // rdx
  __int64 v253; // rcx
  unsigned __int64 v254; // rdi
  __int64 v255; // rax
  unsigned int v256; // esi
  const char *v258; // rax
  const char *v259; // r14
  unsigned __int8 v260; // al
  __int64 v261; // rsi
  __int64 v262; // rbx
  __int64 v263; // rbp
  unsigned __int8 *v264; // rdx
  unsigned int v265; // ecx
  __int64 v266; // rax
  unsigned __int64 v267; // rsi
  __int64 v268; // rbp
  __int64 v269; // rdi
  const char *v270; // rcx
  const char *v271; // [rsp+38h] [rbp-290h]
  __int64 v272; // [rsp+40h] [rbp-288h]
  __int64 v273; // [rsp+48h] [rbp-280h]
  void *Src; // [rsp+50h] [rbp-278h]
  void *Srca; // [rsp+50h] [rbp-278h]
  void *Srcb; // [rsp+50h] [rbp-278h]
  char Srcc; // [rsp+50h] [rbp-278h]
  unsigned __int64 Srcd; // [rsp+50h] [rbp-278h]
  char v279; // [rsp+5Eh] [rbp-26Ah]
  char v280; // [rsp+5Fh] [rbp-269h]
  const char *v281; // [rsp+60h] [rbp-268h] BYREF
  _BYTE v282[12]; // [rsp+68h] [rbp-260h]
  int v283; // [rsp+74h] [rbp-254h]
  unsigned __int64 v284; // [rsp+78h] [rbp-250h]
  int v285; // [rsp+80h] [rbp-248h]
  __int64 v286; // [rsp+88h] [rbp-240h]
  __int64 v287; // [rsp+98h] [rbp-230h]
  __int64 v288; // [rsp+A0h] [rbp-228h]
  __int64 v289; // [rsp+A8h] [rbp-220h]
  __int64 UnitList; // [rsp+B0h] [rbp-218h] BYREF
  __int64 v291; // [rsp+B8h] [rbp-210h]
  __int64 v292; // [rsp+C0h] [rbp-208h]
  __int64 *v293; // [rsp+C8h] [rbp-200h]
  __int64 v294; // [rsp+D0h] [rbp-1F8h]
  unsigned __int64 v295; // [rsp+D8h] [rbp-1F0h]
  __int64 *v296; // [rsp+E0h] [rbp-1E8h]
  __int64 v297; // [rsp+E8h] [rbp-1E0h]
  void *v298; // [rsp+F0h] [rbp-1D8h] BYREF
  void *v299; // [rsp+F8h] [rbp-1D0h]
  __int64 v300; // [rsp+100h] [rbp-1C8h] BYREF
  void *v301; // [rsp+108h] [rbp-1C0h] BYREF
  void *v302; // [rsp+110h] [rbp-1B8h]
  __int64 v303; // [rsp+118h] [rbp-1B0h] BYREF
  void *v304; // [rsp+120h] [rbp-1A8h] BYREF
  __int64 *v305; // [rsp+128h] [rbp-1A0h]
  __int64 v306; // [rsp+130h] [rbp-198h]
  unsigned int v307; // [rsp+13Ch] [rbp-18Ch]
  __int64 v308; // [rsp+140h] [rbp-188h] BYREF
  __int64 v309; // [rsp+148h] [rbp-180h]
  __int64 v310; // [rsp+150h] [rbp-178h]
  __int64 v311; // [rsp+158h] [rbp-170h] BYREF
  unsigned __int64 v312; // [rsp+160h] [rbp-168h]
  __int64 v313; // [rsp+168h] [rbp-160h]
  __int64 v314; // [rsp+170h] [rbp-158h] BYREF
  __int64 v315; // [rsp+178h] [rbp-150h]
  __int64 v316; // [rsp+180h] [rbp-148h]
  __int64 v317; // [rsp+188h] [rbp-140h]
  __int64 v318; // [rsp+190h] [rbp-138h]
  int v319; // [rsp+19Ch] [rbp-12Ch]
  int v320; // [rsp+1A0h] [rbp-128h]
  int v321; // [rsp+1A4h] [rbp-124h]
  __int64 v322; // [rsp+1A8h] [rbp-120h] BYREF
  __int64 v323; // [rsp+1B0h] [rbp-118h]
  __int64 v324; // [rsp+1B8h] [rbp-110h]
  __int64 v325; // [rsp+1C0h] [rbp-108h] BYREF
  __int64 v326; // [rsp+1C8h] [rbp-100h] BYREF
  __int64 v327; // [rsp+1D0h] [rbp-F8h] BYREF
  __int64 v328; // [rsp+1D8h] [rbp-F0h] BYREF
  __int64 v329; // [rsp+1E0h] [rbp-E8h]
  __int64 v330; // [rsp+1E8h] [rbp-E0h]

  v4 = a1;
  sub_CD80C0(unit_attack_target, a2, a1);
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v5, v6, v7);
  v9 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  UnitList = 0i64;
  v291 = v9;
  v292 = 0i64;
  v273 = a2;
  v10 = *a2;
  v11 = 0xFFFFFFFF;
  if ( *a2 )
  {
    v12 = data::get_name_id("object", 6ui64);
    v13 = *(v10 + 0x50);
    if ( v13 )
    {
      v14 = *(v13 + 0x20);
      if ( !*(v10 + 0x20) )
        goto LABEL_10;
    }
    else
    {
      v14 = 0;
      if ( !*(v10 + 0x20) )
        goto LABEL_10;
    }
    v15 = data::get_name_id(v10, "object", 6ui64, v12);
    if ( v15 >= 0 )
    {
      v16 = v14 + v15;
LABEL_12:
      v11 = v16;
      goto LABEL_13;
    }
LABEL_10:
    if ( !v14 )
      goto LABEL_13;
    v16 = data::get_name_id(*(v10 + 0x50), "object", 6ui64, v12);
    goto LABEL_12;
  }
LABEL_13:
  sub_CD2950(&UnitList, v273, v11, v4, is_alive, 0i64);
  if ( v292 )
  {
    v17 = 0;
    do
    {
      Unit = *(UnitList + 8i64 * v17);
      if ( Unit
        && (*(Unit + 0x10B0) || *(Unit + 0x10A8) <= 1u)
        && ((*(Unit + 0x1058) & 0x20000) == 0 || (*(*(Unit + 0x50) + 0x10i64))(Unit + 0x50))
        && *(Unit + 0x10A8) <= 1u )
      {
        v19 = v292;
      }
      else
      {
        v19 = v292 - 1;
        if ( v292 - 1 > v17 )
        {
          memmove((UnitList + 8i64 * v17), (UnitList + 8i64 * v17 + 8), 8i64 * v292 - (8i64 * v17 + 8));
          v19 = v292 - 1;
        }
        --v17;
        LODWORD(v292) = v19;
      }
      ++v17;
    }
    while ( v17 < v19 );
  }
  v20 = v273;
  sub_CD4300(&UnitList, v4, v273, "object");
  LODWORD(v281) = 0xBF800000;
  v21 = data::set_real(v273, "trackingTime", &v281);
  v281 = "object";
  v22 = data::get_str(v273, "filterWhom", &v281);
  v23 = strcmp(v22, "object");
  if ( v23 )
  {
    v24 = sub_D2B9A0(v4, v273, &UnitList, "object", unit_attack_target);
  }
  else
  {
    LOBYTE(v281) = 0;
    if ( data::get_bool(v273, "useForTriggerFiltered", &v281) )
    {
      v25 = v292;
      if ( v292 )
      {
        v26 = 0;
        do
        {
          if ( !*(v4 + 0xF8) )
            goto LABEL_39;
          v27 = *(v4 + 0xE8);
          v28 = 0i64;
          while ( *(v27 + v28) != *(UnitList + 8i64 * v26) )
          {
            v29 = v27 + v28 + 8;
            v28 += 8i64;
            if ( v29 >= v27 + 8 * *(v4 + 0xF8) )
              goto LABEL_39;
          }
          if ( (v28 & 0x400000000i64) != 0 )
          {
LABEL_39:
            v30 = v25 - 1;
            if ( v25 - 1 > v26 )
            {
              memmove((UnitList + 8i64 * v26), (UnitList + 8i64 * v26 + 8), 8i64 * v25 - (8i64 * v26 + 8));
              v30 = v292 - 1;
            }
            --v26;
            LODWORD(v292) = v30;
            v25 = v30;
          }
          ++v26;
        }
        while ( v26 < v25 );
      }
    }
    v20 = v273;
    v24 = sub_D2B9A0(v4, v273, &UnitList, "object", unit_attack_target);
  }
  if ( v24 )
    goto LABEL_517;
  LOBYTE(v281) = 0;
  HIBYTE(v272) = data::get_bool(v20, "keepDeadUnitsInTargetList", &v281);
  v34 = NtCurrentTeb()->ThreadLocalStoragePointer;
  v35 = *(v34[TlsIndex] + 1i64) == 0;
  LODWORD(v288) = v23;
  if ( !v35 )
  {
    v36 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    v304 = 0i64;
    v305 = v36;
    v306 = 0i64;
LABEL_46:
    v301 = 0i64;
    v302 = v36;
    v303 = 0i64;
LABEL_47:
    v298 = 0i64;
    v299 = v36;
    v293 = &v300;
    v300 = 0i64;
    goto LABEL_48;
  }
  _dyn_tls_on_demand_init(v34, v31, v32, v33);
  v37 = *(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v36 = *(v37 + 0x160);
  v304 = 0i64;
  v305 = v36;
  v306 = 0i64;
  if ( *(v37 + 1) )
    goto LABEL_46;
  _dyn_tls_on_demand_init(v37, v31, v32, v33);
  v105 = *(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v36 = *(v105 + 0x160);
  v301 = 0i64;
  v302 = v36;
  v303 = 0i64;
  if ( *(v105 + 1) )
    goto LABEL_47;
  _dyn_tls_on_demand_init(v105, v31, v32, v33);
  v106 = *(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v36 = *(v106 + 0x160);
  v298 = 0i64;
  v299 = v36;
  v31 = &v300;
  v293 = &v300;
  v300 = 0i64;
  if ( !*(v106 + 1) )
  {
    _dyn_tls_on_demand_init(v106, &v300, v32, v33);
    v36 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  }
LABEL_48:
  v322 = 0i64;
  v323 = v36;
  v324 = 0i64;
  v35 = *(v4 + 0x20) == 0;
  v297 = v4;
  if ( !v35 )
  {
    v38 = 0i64;
    while ( 1 )
    {
      LODWORD(v324) = 0;
      sub_CD2160(&v322, *(v4 + 0x10) + (v38 << 6), v4, 0, 0i64);
      if ( v324 )
        break;
LABEL_50:
      ++v38;
      v4 = v297;
      if ( v38 >= *(v297 + 0x20) )
        goto LABEL_120;
    }
    v39 = 0i64;
    while ( 1 )
    {
      v43 = *(v322 + 8 * v39);
      if ( (*(v43 + 0x1058) & 0x7000014) != 0 )
        goto LABEL_57;
      if ( !(*(*(v43 + 0x50) + 0x18i64))(v43 + 0x50) )
      {
        if ( !g_net )
          goto LABEL_57;
        v47 = *(v43 + 0x10B8);
        if ( !v47 || (*(v47 + 0x668) - 6) > 2u )
          goto LABEL_57;
      }
      v44 = v306;
      v45 = HIDWORD(v306);
      if ( HIDWORD(v306) != v306 )
      {
        v46 = v304;
        goto LABEL_62;
      }
      if ( HIDWORD(v306) )
      {
        if ( HIDWORD(v306) > 0x1FF )
          v48 = HIDWORD(v306) + ((HIDWORD(v306) + 1) >> 1);
        else
          v48 = 2i64 * HIDWORD(v306);
      }
      else
      {
        v48 = 2i64;
      }
      Src = v304;
      if ( v304 )
      {
        if ( v48 < 3 )
          v48 = 2i64;
        v50 = *v305;
        v51 = v48;
        v296 = v305;
        v52 = (*(v50 + 0x38))(v305, v304, 8 * v48);
        v48 = v51;
        v46 = v52;
        if ( v52 )
          goto LABEL_90;
      }
      else
      {
        v296 = v305;
      }
      if ( v48 < 3 )
        v48 = 2i64;
      v295 = v48;
      v46 = (*(*v296 + 0x18))(v296, 8 * v48);
      memmove(v46, Src, 8 * v45);
      if ( Src )
        (*(*v296 + 0x40))(v296);
      LODWORD(v48) = v295;
LABEL_90:
      v304 = v46;
      HIDWORD(v306) = v48;
LABEL_62:
      LODWORD(v306) = v44 + 1;
      *(v46 + v44) = v43;
      if ( (*(*(v43 + 0x50) + 0x30i64))(v43 + 0x50) != 1 )
      {
        if ( (*(*(v43 + 0x50) + 0x30i64))(v43 + 0x50) != 2 )
          goto LABEL_57;
        v40 = HIDWORD(v300);
        if ( HIDWORD(v300) != v300 )
        {
          v41 = v298;
          LODWORD(v40) = v300;
LABEL_66:
          v42 = v293;
          goto LABEL_56;
        }
        if ( HIDWORD(v300) )
        {
          if ( HIDWORD(v300) > 0x1FF )
            v53 = HIDWORD(v300) + ((HIDWORD(v300) + 1) >> 1);
          else
            v53 = 2i64 * HIDWORD(v300);
        }
        else
        {
          v53 = 2i64;
        }
        if ( v298 )
        {
          if ( v53 < 3 )
            v53 = 2i64;
          Srcb = v299;
          v55 = v298;
          v41 = (*(*v299 + 0x38i64))(v299, v298, 8 * v53);
          if ( !v41 )
          {
LABEL_115:
            if ( v53 < 3 )
              v53 = 2i64;
            v41 = (*(*Srcb + 0x18i64))(Srcb, 8 * v53);
            memmove(v41, v55, 8 * v40);
            if ( v55 )
              (*(*Srcb + 0x40i64))(Srcb, v55);
          }
          v298 = v41;
          HIDWORD(v300) = v53;
          goto LABEL_66;
        }
        Srcb = v299;
        v55 = 0i64;
        goto LABEL_115;
      }
      v40 = HIDWORD(v303);
      if ( HIDWORD(v303) == v303 )
      {
        if ( HIDWORD(v303) )
        {
          if ( HIDWORD(v303) > 0x1FF )
            v49 = HIDWORD(v303) + ((HIDWORD(v303) + 1) >> 1);
          else
            v49 = 2i64 * HIDWORD(v303);
        }
        else
        {
          v49 = 2i64;
        }
        if ( v301 )
        {
          if ( v49 < 3 )
            v49 = 2i64;
          Srca = v302;
          v54 = v301;
          v41 = (*(*v302 + 0x38i64))(v302, v301, 8 * v49);
          if ( !v41 )
          {
LABEL_102:
            if ( v49 < 3 )
              v49 = 2i64;
            v41 = (*(*Srca + 0x18i64))(Srca, 8 * v49);
            memmove(v41, v54, 8 * v40);
            if ( v54 )
              (*(*Srca + 0x40i64))(Srca, v54);
          }
          v301 = v41;
          HIDWORD(v303) = v49;
          goto LABEL_55;
        }
        Srca = v302;
        v54 = 0i64;
        goto LABEL_102;
      }
      v41 = v301;
      LODWORD(v40) = v303;
LABEL_55:
      v42 = &v303;
LABEL_56:
      *v42 = v40 + 1;
      *(v41 + v40) = v43;
LABEL_57:
      if ( ++v39 >= v324 )
        goto LABEL_50;
    }
  }
LABEL_120:
  v56 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(v56[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(v56, v31, v32, v33);
  v57 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  v308 = 0i64;
  v309 = v57;
  v310 = 0i64;
  v58 = v273;
  v59 = *v273;
  v60 = 0;
  if ( !*v273 )
    goto LABEL_142;
  v61 = data::get_name_id("target", 6ui64);
  v62 = *(v59 + 0x50);
  if ( v62 )
    v60 = *(v62 + 0x20);
  if ( *(v59 + 0x20) && (v63 = data::get_name_id(v59, "target", 6ui64, v61), v63 >= 0) )
  {
    v64 = v60 + v63;
    if ( v64 < 0 )
    {
LABEL_142:
      Srcc = 0;
      goto LABEL_144;
    }
  }
  else
  {
    if ( !v60 )
      goto LABEL_142;
    v64 = data::get_name_id(*(v59 + 0x50), "target", 6ui64, v61);
    if ( v64 < 0 )
      goto LABEL_142;
  }
  v65 = 0i64;
  if ( !HIBYTE(v272) )
    v65 = sub_CD1D80;
  sub_CD2950(&v308, v273, v64, v4, v65, 0i64);
  if ( !HIBYTE(v272) && v310 )
  {
    v66 = 0;
    do
    {
      if ( (v65)(*(v308 + 8i64 * v66)) )
      {
        v67 = v310;
      }
      else
      {
        v67 = v310 - 1;
        if ( v310 - 1 > v66 )
        {
          memmove((v308 + 8i64 * v66), (v308 + 8i64 * v66 + 8), 8i64 * v310 - (8i64 * v66 + 8));
          v67 = v310 - 1;
        }
        --v66;
        LODWORD(v310) = v67;
      }
      ++v66;
    }
    while ( v66 < v67 );
  }
  sub_CD4300(&v308, v4, v273, "object");
  Srcc = 1;
LABEL_144:
  v281 = "attack_target";
  v68 = data::get_str(v273, "attack_type", &v281);
  LODWORD(v293) = sub_CD5220(v68);
  v321 = sub_109370(v273, "targetTypeName");
  LODWORD(v281) = 0;
  v69 = data::set_real(v273, "targetDistMax", &v281);
  LODWORD(v281) = 0;
  v320 = data::set_int(v273, "attackMissionId", &v281);
  LODWORD(v281) = 0;
  v70 = data::set_int(v273, "maxNumAttackersPerTarget", &v281);
  LOBYTE(v281) = 0;
  v71 = data::get_bool(v273, "playerAttracted", &v281);
  LODWORD(v281) = v292;
  v72 = data::set_int(v273, "playerAttractedCount", &v281);
  LODWORD(v281) = 0x3F800000;
  v73 = data::set_real(v273, "playerAttractedEffRate", &v281);
  LOBYTE(v281) = 1;
  v279 = data::get_bool(v273, "resetObjectToFollow", &v281);
  v280 = v71;
  if ( v71 )
    *(*(game + 0x638) + 0x94i64) = v72;
  v77 = v293;
  v78 = 2i64 * v293;
  v79 = (&off_44CF9E0)[v78 + 1];
  v80 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(v80[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(v80, v74, v75, v76);
  v81 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  v328 = 0i64;
  v329 = v81;
  v330 = 0i64;
  LODWORD(v295) = v70;
  v318 = v78 * 8;
  v317 = v77;
  if ( v79 == 1 )
  {
    v82 = &v308;
  }
  else if ( v79 == 2 )
  {
    v82 = &v304;
  }
  else
  {
    v83 = &v328;
    if ( v79 == 4 )
      v83 = &v298;
    v82 = &v301;
    if ( v79 != 3 )
      v82 = v83;
  }
  v84 = NtCurrentTeb()->ThreadLocalStoragePointer;
  v85 = v84[TlsIndex];
  if ( !*(v85 + 1) )
  {
    _dyn_tls_on_demand_init(v85, v84, v75, v76);
    v81 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  }
  v314 = 0i64;
  v315 = v81;
  v316 = 0i64;
  v86 = *v273;
  v87 = 0xFFFFFFFF;
  if ( *v273 )
  {
    v88 = data::get_name_id("anchorTarget", 0xCui64);
    v89 = *(v86 + 0x50);
    if ( v89 )
    {
      v90 = *(v89 + 0x20);
      if ( !*(v86 + 0x20) )
        goto LABEL_166;
    }
    else
    {
      v90 = 0;
      if ( !*(v86 + 0x20) )
        goto LABEL_166;
    }
    v91 = data::get_name_id(v86, "anchorTarget", 0xCui64, v88);
    if ( v91 >= 0 )
    {
      v92 = v90 + v91;
      if ( v92 < 0 )
        goto LABEL_176;
LABEL_168:
      sub_CD2950(&v314, v273, v92, v297, sub_FEAF0, 0i64);
      v93 = v316;
      if ( v316 )
      {
        v94 = 0;
        do
        {
          if ( *(*(v314 + 8i64 * v94) + 0x10A8i64) >= 2u )
          {
            v95 = v93 - 1;
            if ( v93 - 1 > v94 )
            {
              memmove((v314 + 8i64 * v94), (v314 + 8i64 * v94 + 8), 8i64 * v93 - (8i64 * v94 + 8));
              v95 = v316 - 1;
            }
            --v94;
            LODWORD(v316) = v95;
            v93 = v95;
          }
          ++v94;
        }
        while ( v94 < v93 );
      }
      sub_CD4300(&v314, v297, v273, "object");
LABEL_176:
      v96 = *v273;
      if ( !*v273 )
        goto LABEL_186;
      v97 = data::get_name_id("anchorArea", 0xAui64);
      v98 = *(v96 + 0x50);
      if ( v98 )
      {
        v99 = *(v98 + 0x20);
        if ( !*(v96 + 0x20) )
          goto LABEL_183;
      }
      else
      {
        v99 = 0;
        if ( !*(v96 + 0x20) )
          goto LABEL_183;
      }
      v100 = data::get_name_id(v96, "anchorArea", 0xAui64, v97);
      if ( v100 >= 0 )
      {
        v101 = v99 + v100;
LABEL_185:
        v87 = v101;
        goto LABEL_186;
      }
LABEL_183:
      if ( !v99 )
        goto LABEL_186;
      v101 = data::get_name_id(*(v96 + 0x50), "anchorArea", 0xAui64, v97);
      goto LABEL_185;
    }
LABEL_166:
    if ( !v90 )
      goto LABEL_176;
    v92 = data::get_name_id(*(v86 + 0x50), "anchorTarget", 0xCui64, v88);
    if ( v92 < 0 )
      goto LABEL_176;
    goto LABEL_168;
  }
LABEL_186:
  v289 = *(game + 0x420);
  v102 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(v102[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(v102, v84, v75, v76);
  v103 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  v311 = 0i64;
  v312 = v103;
  v313 = 0i64;
  LOWORD(v103) = *(v273 + 0xC);
  if ( v103 )
  {
    v104 = 0i64;
    do
    {
      if ( v104 < v103 )
      {
        v109 = *(v273 + 0x14);
        if ( v109 == 0xFFFFFFFFi64 )
        {
          if ( (*(**(v273 + 0x18) + 8 * v104) & 0xFFFFFF) != v87 )
            goto LABEL_196;
          v110 = **(v273 + 0x18);
        }
        else
        {
          if ( (*(v109 + *v273 + 8 * v104 + 0x90) & 0xFFFFFF) != v87 )
            goto LABEL_196;
          v110 = *v273 + v109 + 0x90;
        }
        if ( *(v110 + 8 * v104 + 3) << 0x18 == 0x1000000 )
        {
          v111 = sub_1459970(v273, v104);
          if ( v111 )
          {
            v112 = v111;
            v113 = *v111;
            if ( v113 == 0x40 )
            {
              if ( !*(v297 + 0x50) )
              {
                v113 = 0x40;
LABEL_217:
                v117 = (v112 + 1);
                v118 = 0x811C9DC5;
                do
                {
                  v118 = v113 ^ (0x1000193 * v118);
                  v113 = *v117++;
                }
                while ( v113 );
                v119 = v118;
                v120 = *(v289 + 0x1F8);
                if ( v118 >= v120 )
                  v119 = v118 % v120;
                v121 = *(v289 + 0x1F0);
                v122 = *(v121 + 8 * v119);
                if ( v122 )
                {
                  while ( 1 )
                  {
                    v123 = *v122;
                    if ( !*v122 )
                      v123 = &szFile;
                    if ( !strcmp(v123, v112) )
                      break;
                    v122 = *(v122 + 0x10);
                    if ( !v122 )
                      goto LABEL_196;
                  }
                  if ( v122 != *(v121 + 8 * v120) )
                  {
                    v124 = *(v122 + 8);
                    if ( v124 )
                    {
                      v108 = v313;
                      if ( HIDWORD(v313) == v313 )
                      {
                        if ( HIDWORD(v313) )
                        {
                          if ( HIDWORD(v313) > 0x1FF )
                            v107 = ((HIDWORD(v313) + 1) >> 1) + HIDWORD(v313);
                          else
                            v107 = 2i64 * HIDWORD(v313);
                        }
                        else
                        {
                          v107 = 2i64;
                        }
                        sub_FC0D0(&v311, v107);
                        v108 = v313;
                      }
                      LODWORD(v313) = v108 + 1;
                      *(v311 + 8i64 * v108) = v124;
                    }
                  }
                }
                goto LABEL_196;
              }
              v114 = *(v297 + 0x40);
              v115 = 0x20i64 * *(v297 + 0x50);
              v116 = 0i64;
              while ( strcmp(*(v114 + v116), v112 + 1) )
              {
                v116 += 0x20i64;
                if ( v115 == v116 )
                  goto LABEL_214;
              }
              if ( (*(v114 + v116 + 8) & 0xF) == 1 )
                v112 = *(v114 + v116 + 0x10);
LABEL_214:
              if ( !v112 )
                goto LABEL_196;
              v113 = *v112;
            }
            if ( v113 )
              goto LABEL_217;
          }
        }
      }
LABEL_196:
      ++v104;
      v58 = v273;
      v103 = *(v273 + 0xC);
    }
    while ( v104 < v103 );
  }
  sub_145C170(v58, &v327, "targetToAnchorDist", &MATH_FLOAT_ZERO);
  sub_145C170(v58, &v326, "targetToAnchorMeetDist", &MATH_FLOAT_ZERO);
  v125 = v297;
  if ( v288 )
  {
    LOBYTE(v281) = 0;
    if ( data::get_bool(v273, "useForTriggerFiltered", &v281) )
    {
      v126 = *(v82 + 4);
      if ( v126 )
      {
        for ( i = 0; i < v126; ++i )
        {
          v128 = (*v82 + 8i64 * i);
          if ( !*(v125 + 0xF8) )
            goto LABEL_246;
          v129 = *(v125 + 0xE8);
          v130 = 0i64;
          while ( *(v129 + v130) != *v128 )
          {
            v131 = v129 + v130 + 8;
            v130 += 8i64;
            if ( v131 >= v129 + 8 * *(v125 + 0xF8) )
              goto LABEL_246;
          }
          if ( (v130 & 0x400000000i64) != 0 )
          {
LABEL_246:
            v132 = v126 - 1;
            if ( v126 - 1 > i )
            {
              memmove(v128, v128 + 1, *v82 + 8i64 * v126 - (v128 + 1));
              v132 = *(v82 + 4) - 1;
            }
            --i;
            *(v82 + 4) = v132;
            v126 = v132;
          }
        }
      }
    }
  }
  LODWORD(v281) = 0xFFFFFFFF;
  LODWORD(v133) = data::set_int(v273, "randomObjectsCount", &v281);
  if ( v133 > 0 )
  {
    v135 = v133;
    LODWORD(v133) = g_net;
    if ( !g_net )
      goto LABEL_255;
    if ( !*(g_net + 0x60) )
      goto LABEL_254;
    g_rnd_seed = 0x41C64E6D * g_rnd_seed + 0x3039;
    LODWORD(v281) = HIWORD(g_rnd_seed) & 0x7FFF;
    if ( *(v273 + 0x14) != 0xFFFFFFFF )
      data::convert_to_owned(v273);
    v133 = sub_145A790(v273, "_seed", &v281);
    if ( g_net )
    {
LABEL_254:
      LODWORD(v281) = 0x18894;
      LODWORD(v133) = data::set_int(v273, "_seed", &v281);
      v136 = v133;
    }
    else
    {
LABEL_255:
      g_rnd_seed = 0x41C64E6D * g_rnd_seed + 0x3039;
      v136 = HIWORD(g_rnd_seed) & 0x7FFF;
    }
    v137 = v292;
    v138 = v292 - v135;
    if ( v292 > v135 && v138 > 0 )
    {
      v139 = g_net;
      do
      {
        if ( v139 )
        {
          v136 = 0x41C64E6D * v136 + 0x3039;
          v140 = v136;
        }
        else
        {
          v140 = 0x41C64E6D * g_rnd_seed + 0x3039;
          g_rnd_seed = v140;
        }
        v141 = (HIWORD(v140) & 0x7FFFui64) % v137;
        LODWORD(v133) = v137 - 1;
        if ( v137 - 1 > v141 )
        {
          memmove((UnitList + 8i64 * v141), (UnitList + 8i64 * v141 + 8), 8i64 * v137 - (8i64 * v141 + 8));
          LODWORD(v133) = v292 - 1;
          v139 = g_net;
        }
        LODWORD(v292) = v133;
        v137 = v133;
        --v138;
      }
      while ( v138 );
    }
  }
  v307 = 1;
  LOBYTE(v133) = 1;
  LODWORD(v296) = v133;
  if ( !Srcc || *(v82 + 4) )
    goto LABEL_267;
  if ( *(v273 + 0x14) == 0xFFFFFFFF )
    v258 = sub_14604F0(v273, "target", v134);
  else
    v258 = sub_14606A0(v273, "target", v134);
  v259 = v258;
  v287 = 0i64;
  if ( !v289 || !v258 )
    goto LABEL_268;
  v260 = *v258;
  if ( *v259 != 0x40 )
    goto LABEL_536;
  if ( *(v125 + 0x50) )
  {
    v261 = *(v125 + 0x40);
    v262 = 0x20i64 * *(v125 + 0x50);
    v263 = 0i64;
    while ( strcmp(*(v261 + v263), v259 + 1) )
    {
      v263 += 0x20i64;
      if ( v262 == v263 )
        goto LABEL_534;
    }
    if ( (*(v261 + v263 + 8) & 0xF) == 1 )
      v259 = *(v261 + v263 + 0x10);
LABEL_534:
    if ( !v259 )
      goto LABEL_267;
    v260 = *v259;
LABEL_536:
    if ( !v260 )
      goto LABEL_267;
    goto LABEL_537;
  }
  v260 = 0x40;
LABEL_537:
  v264 = (v259 + 1);
  v265 = 0x811C9DC5;
  do
  {
    v265 = v260 ^ (0x1000193 * v265);
    v260 = *v264++;
  }
  while ( v260 );
  v266 = v265;
  v267 = *(v289 + 0x1F8);
  if ( v265 >= v267 )
    v266 = v265 % v267;
  v268 = *(v289 + 0x1F0);
  v269 = *(v268 + 8 * v266);
  if ( v269 )
  {
    v287 = 0i64;
    while ( 1 )
    {
      v270 = *v269;
      if ( !*v269 )
        v270 = &szFile;
      if ( !strcmp(v270, v259) )
        break;
      v269 = *(v269 + 0x10);
      if ( !v269 )
        goto LABEL_268;
    }
    if ( v269 != *(v268 + 8 * v267) )
    {
      v287 = *(v269 + 8);
      if ( v287 )
      {
        LODWORD(v281) = 1;
        v307 = data::set_int(v273, "numShots", &v281);
        LODWORD(v296) = 0;
        goto LABEL_268;
      }
    }
  }
LABEL_267:
  v287 = 0i64;
LABEL_268:
  if ( v292 )
  {
    Srcd = 0x3C78ui64 >> v317;
    v142 = *(&off_44CF9E0 + v318 + 0xC);
    v318 = v287 + 0xE0;
    v319 = v295;
    v295 = v142;
    v143 = v142 - 1;
    if ( !v293 )
      v143 = 0;
    LODWORD(v317) = v143;
    v144 = *&dword_4487E1C;
    v145 = dword_44A0748;
    v146 = 0i64;
    while ( 1 )
    {
      Unit_ = *(UnitList + 8 * v146);
      if ( Unit_ )
        break;
LABEL_273:
      if ( ++v146 >= v292 )
        goto LABEL_501;
    }
    UnitType = *(Unit_ + 0x10B0);
    if ( UnitType > 0xF )
      goto LABEL_335;
    v149 = 0x897E;
    if ( _bittest(&v149, UnitType) )
    {
      v150 = v273;
      if ( !v296 )
      {
        v151 = *(v287 + 4i64 * (*(v287 + 0x58) == 2) + 0xEC);
        if ( (*(Unit_ + 0x1058) & 0x7000014) == 0 )
        {
          if ( (*(*Unit_ + 0x490i64))(*(UnitList + 8 * v146)) )
          {
            v152 = sub_360DF0(&entity_manager, *(Unit_ + 0x1AB4), dword_4AD080C);
            if ( v152 )
            {
              v155 = v152;
              v156 = *(v152 + 8);
              if ( v156 )
              {
                v157 = 0xC2i64;
                for ( j = 0i64; j < v156; ++j )
                {
                  if ( !*(*(*(Unit_ + 0x11D0) + 0x190i64) + v157) )
                  {
                    v281 = 0x100200A3B722Ci64;
                    *v282 = j;
                    v283 = *(v318 + 8);
                    *&v282[4] = *v318;
                    v284 = __PAIR64__(v307, v151);
                    sub_86D010(*(Unit_ + 0x1AB4), &v281, v153, v154);
                    v156 = *(v155 + 8);
                  }
                  v157 += 0x290i64;
                }
              }
            }
          }
        }
      }
      if ( v293 == 8 )
      {
        *(Unit_ + 0x1F45) = 1;
      }
      else if ( v293 > 8 )
      {
        *(Unit_ + 0x1F44) = 1;
      }
      *(Unit_ + 0x1F54) = v295;
      LOBYTE(v281) = 0;
      *(Unit_ + 0x1F58) = data::get_bool(v273, "fireRandom", &v281);
      LOBYTE(v159) = 1;
      v160 = 0;
      _Unit = Unit_;
      Unit_ = 0i64;
      if ( (Srcd & 1) == 0 )
      {
LABEL_291:
        if ( !((v293 != 0xE) | v159 ^ 1) )
        {
          v288 = v159;
          v281 = &szFile;
          v162 = data::get_str(v273, "fireZone", &v281);
          v163 = 0xFFFFFFFF;
          if ( v162 )
          {
            v164 = v162;
            v165 = *v162;
            if ( *v162 )
            {
              v166 = v162 + 1;
              v167 = 0x811C9DC5;
              do
              {
                v167 = v165 ^ (0x1000193 * v167);
                v165 = *v166++;
              }
              while ( v165 );
              v168 = v167;
              v169 = *(v289 + 0x1F8);
              if ( v167 >= v169 )
                v168 = v167 % v169;
              v170 = *(v289 + 0x1F0);
              v171 = *(v170 + 8 * v168);
              if ( v171 )
              {
                while ( 1 )
                {
                  v172 = *v171;
                  if ( !*v171 )
                    v172 = &szFile;
                  if ( !strcmp(v172, v164) )
                    break;
                  v171 = *(v171 + 0x10);
                  if ( !v171 )
                    goto LABEL_303;
                }
                if ( v171 != *(v170 + 8 * v169) )
                {
                  v188 = *(v171 + 8);
                  if ( v188 )
                    v163 = *(v188 + 0xF6);
                }
              }
            }
          }
LABEL_303:
          *(_Unit + 0x1FA4) = v163;
          LODWORD(v281) = 0x3F800000;
          *(_Unit + 0x1F90) = data::set_real(v273, "effShootingRateInZone", &v281);
          LODWORD(v281) = 0x3FC00000;
          *(_Unit + 0x1F94) = data::set_real(v273, "accuracyInZone", &v281);
          LOBYTE(v159) = v288;
        }
        goto LABEL_330;
      }
LABEL_306:
      v288 = v159;
      v173 = Unit_ + 0x1E20;
      v174 = _Unit + 0x1F60;
      if ( v160 )
        v174 = v173;
      *(v174 + 0x10) = 0;
      LOBYTE(v281) = 0;
      if ( data::get_bool(v150, "forceTarget", &v281) )
      {
        v281 = 0x1000CE78B3B28i64;
        *v282 = 0xFFFFFFFF;
        sub_86CD00(*(_Unit + 0x1AB4), &v281, v175, v176);
      }
      LOBYTE(v159) = v288;
      if ( *(v82 + 4) )
      {
        v177 = 0i64;
        do
        {
          v178 = *v82;
          v179 = *(v174 + 0x10);
          v180 = *(v174 + 0x14);
          if ( v180 == v179 )
          {
            if ( *(v174 + 0x14) )
            {
              if ( v180 > 0x1FF )
                v182 = ((v180 + 1) >> 1) + v180;
              else
                v182 = 2 * v180;
            }
            else
            {
              v182 = 2i64;
            }
            if ( !*v174 )
              goto LABEL_325;
            if ( v182 < 3 )
              v182 = 2i64;
            v181 = (*(**(v174 + 8) + 0x38i64))(*(v174 + 8), *v174, 8 * v182);
            if ( !v181 )
            {
LABEL_325:
              if ( v182 < 3 )
                v182 = 2i64;
              v181 = (*(**(v174 + 8) + 0x18i64))(*(v174 + 8), 8 * v182);
              memmove(v181, *v174, 8i64 * *(v174 + 0x10));
              if ( *v174 )
                (*(**(v174 + 8) + 0x40i64))(*(v174 + 8));
            }
            *v174 = v181;
            *(v174 + 0x14) = v182;
            v179 = *(v174 + 0x10);
            LOBYTE(v159) = v288;
          }
          else
          {
            v181 = *v174;
          }
          *(v174 + 0x10) = v179 + 1;
          *(v181 + v179) = *(v178 + 8 * v177++);
        }
        while ( v177 < *(v82 + 4) );
      }
LABEL_330:
      if ( v159 )
      {
        v183 = *(_Unit + 0x1EA0);
        if ( v183 )
        {
          if ( v21 > 0.0 && *(v82 + 4) )
          {
            *(v183 + 0x48C) = v21;
            *(*(_Unit + 0x1EA0) + 0x490i64) = **v82;
          }
        }
      }
      goto LABEL_273;
    }
    if ( UnitType == 7 )
    {
      *(Unit_ + 0x1E18) = v317;
      v160 = 1;
      _Unit = 0i64;
      v159 = 0i64;
      v150 = v273;
      if ( (Srcd & 1) == 0 )
        goto LABEL_291;
      goto LABEL_306;
    }
LABEL_335:
    if ( UnitType )
      Unit_ = 0i64;
    if ( UnitType || (Srcd & 1) == 0 || !*(v82 + 4) )
      goto LABEL_273;
    v184 = **v82;
    if ( (*(Unit_ + 0x1058) & 0x10) != 0 )
    {
      v185 = &unk_4912A93;
      if ( !*(Unit_ + 0x10B0) )
        v185 = "flight model";
      v186 = *(Unit_ + 8);
      *v282 = 0x82Ci64;
      LODWORD(v281) = 2;
      v284 = v185;
      *&v282[8] = 1;
      v286 = v186;
      v285 = 2;
      logmessage_fmt(
        0x47495254u,
        "ERROR(%d): Script access to a unit (%s) uid=%#x being loaded. Some script actions will be ignored. Either ask pr"
        "ogrammers to remove this check or ask game designers to fix misison.",
        &v281,
        3);
      if ( override_assertion_handler )
      {
        v187 = *(Unit_ + 8);
        *v282 = 0x82Ci64;
        LODWORD(v281) = 2;
        v284 = v185;
        *&v282[8] = 1;
        v286 = v187;
        v285 = 2;
        LODWORD(v271) = 3;
        if ( override_assertion_handler(
               0i64,
               "..\\..\\skyquake\\prog\\mission\\actions.cpp",
               0x162i64,
               "assert_unit_is_not_loading",
               "0",
               "ERROR(%d): Script access to a unit (%s) uid=%#x being loaded. Some script actions will be ignored. Either"
               " ask programmers to remove this check or ask game designers to fix misison.",
               &v281,
               v271,
               v272) )
          __debugbreak();
      }
    }
    if ( (*(Unit_ + 0x1058) & 0x2000010) != 0 )
      goto LABEL_273;
    LOBYTE(v281) = 0;
    v189 = data::get_bool(v273, "fireRandom", &v281);
    v190 = *(Unit_ + 0x33D0);
    if ( !*(v190 + 0x548)
      || *(*(v190 + 0x548) + 0x10A8i64) > 1u
      || (*(*(v190 + 0x548) + 0x1058i64) & 0x7000014) != 0
      || !*(v82 + 4) )
    {
      goto LABEL_352;
    }
    v252 = *v82;
    v253 = 0i64;
    while ( v252[v253] != *(v190 + 0x548) )
    {
      v254 = &v252[++v253];
      if ( v254 >= *v82 + 8 * *(v82 + 4) )
        goto LABEL_352;
    }
    if ( !(~(v253 * 8) >> 3) )
    {
LABEL_352:
      if ( v189 )
      {
        g_rnd_seed = 0x41C64E6D * g_rnd_seed + 0x3039;
        v184 = *(*v82 + 8 * ((HIWORD(g_rnd_seed) & 0x7FFFui64) % *(v82 + 4)));
      }
      (*(*v190 + 0x28i64))(v190, v184);
      *(v190 + 0x6D8) = 0i64;
      if ( !g_net || *(game + 0xCD) || *(game + 0xCE) )
      {
        v192 = *(game + 0x450);
        if ( v192 && *(v192 + 0x5CA) )
          v191 = (v192 + 0x620);
        else
          v191 = (game + 0x2E0);
      }
      else
      {
        v191 = (g_net + 0x70);
      }
      v2 = *v191;
      v2.m128_f32[0] = *v2.m128_u64;
      *(v190 + 0x6E0) = v2.m128_i32[0];
    }
    *(v190 + 0x611) = v189;
    *(v190 + 0x588) = v321;
    *(v190 + 0x58C) = v69;
    v193 = sub_128770(v190 + 0x4C8, "targets");
    if ( dword_4ACF6E8 > *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4i64) )
    {
      v256 = v193;
      Init_thread_header(&dword_4ACF6E8);
      v193 = v256;
      if ( dword_4ACF6E8 == 0xFFFFFFFF )
      {
        qword_4ACF6D0 = 0i64;
        off_4ACF6D8 = off_4B678C0;
        qword_4ACF6E0 = 0i64;
        atexit(sub_128750);
        Init_thread_footer(&dword_4ACF6E8);
        v193 = v256;
      }
    }
    v194 = 0x18i64 * v193;
    v195 = (v194 + *(v190 + 0x518));
    LODWORD(v288) = v193;
    if ( *(v190 + 0x528) <= v193 )
      v195 = &qword_4ACF6D0;
    v196 = *v195;
    v197 = v195[1];
    *v195 = 0i64;
    v195[2] = 0i64;
    if ( v196 )
      (*(*v197 + 0x40i64))(v197);
    *(v190 + 0x610) = v280;
    *(v190 + 0x61C) = v73;
    *(v190 + 0x604) = 0;
    v198 = *(v190 + 0x5E8);
    v199 = *(v190 + 0x5F0);
    *(v190 + 0x5E8) = 0i64;
    *(v190 + 0x5F8) = 0i64;
    if ( v198 )
      (*(*v199 + 0x40i64))(v199);
    v200 = *v273;
    v201 = 0xFFFFFFFF;
    if ( !*v273 )
      goto LABEL_380;
    v202 = data::get_name_id("fightInArea", 0xBui64);
    v203 = *(v200 + 0x50);
    if ( v203 )
    {
      v204 = *(v203 + 0x20);
      if ( !*(v200 + 0x20) )
      {
LABEL_377:
        if ( v204 )
        {
          v207 = data::get_name_id(*(v200 + 0x50), "fightInArea", 0xBui64, v202);
          goto LABEL_379;
        }
        goto LABEL_380;
      }
    }
    else
    {
      v204 = 0;
      if ( !*(v200 + 0x20) )
        goto LABEL_377;
    }
    LODWORD(v294) = v204;
    v205 = v202;
    v206 = data::get_name_id(v200, "fightInArea", 0xBui64, v202);
    v204 = v294;
    v202 = v205;
    if ( v206 < 0 )
      goto LABEL_377;
    v207 = v294 + v206;
LABEL_379:
    v201 = v207;
LABEL_380:
    sub_CD2950(v190 + 0x5E8, v273, v201, v297, 0i64, 0i64);
    LODWORD(v281) = 0x44FA0000;
    v208 = data::set_real(v273, "fightAreaRadius", &v281);
    *&v281 = v208 * v144;
    v209 = data::set_real(v273, "fightAreaOuterRadius", &v281);
    v210 = &MATH_FLOAT_ZERO;
    if ( *(v190 + 0x5F8) )
    {
LABEL_381:
      *(v190 + 0x5E0) = *(v210 + 2);
      *(v190 + 0x5D8) = *v210;
      *(v190 + 0x600) = v208;
      *(v190 + 0x608) = v209;
      *(v190 + 0x604) = 1;
    }
    else
    {
      v281 = &szFile;
      v219 = data::get_str(v273, "fightInArea", &v281);
      if ( v219 )
      {
        v220 = v219;
        v221 = *v219;
        if ( v221 )
        {
          v222 = (v220 + 1);
          v223 = 0x811C9DC5;
          do
          {
            v223 = v221 ^ (0x1000193 * v223);
            v221 = *v222++;
          }
          while ( v221 );
          v224 = v223;
          v225 = *(v289 + 0x1F8);
          if ( v223 >= v225 )
            v224 = v223 % v225;
          v226 = *(v289 + 0x1F0);
          v227 = *(v226 + 8 * v224);
          if ( v227 )
          {
            while ( 1 )
            {
              v228 = *v227;
              if ( !*v227 )
                v228 = &szFile;
              if ( !strcmp(v228, v220) )
                break;
              v227 = *(v227 + 0x10);
              if ( !v227 )
                goto LABEL_382;
            }
            if ( v227 != *(v226 + 8 * v225) )
            {
              v255 = *(v227 + 8);
              if ( v255 )
              {
                v210 = (v255 + 0xE0);
                goto LABEL_381;
              }
            }
          }
        }
      }
    }
LABEL_382:
    *(v190 + 0x614) = sub_109880(v273, "weaponType");
    LOBYTE(v281) = 0;
    v35 = data::get_bool(v273, "singleAttack", &v281) == 0;
    v211 = 0x3B9ACA00;
    if ( !v35 )
      v211 = 1;
    LODWORD(v281) = v211;
    v212 = data::set_int(v273, "attackNumMax", &v281);
    if ( v212 <= 0 )
      v212 = 0x3B9ACA00;
    *(v190 + 0x624) = v212;
    LODWORD(v281) = 0x4E6E6B28;
    v2.m128_f32[0] = data::set_real(v273, "attackTimeMax", &v281);
    v213 = _mm_cmplt_ss(0i64, v2);
    v2 = _mm_and_ps(v2, v213);
    *(v190 + 0x628) = _mm_andnot_ps(v213, v145).m128_u32[0] | v2.m128_i32[0];
    v281 = &szFile;
    v214 = data::get_str(v273, "fireMode", &v281);
    v215 = 0;
    v216 = 0;
    if ( v214 )
    {
      v217 = v214;
      if ( !strcmp("auto", v214) )
      {
        v216 = 0;
      }
      else if ( !strcmp("single", v217) )
      {
        v216 = 1;
      }
      else
      {
        v218 = strcmp("salvo", v217);
        v216 = 0;
        if ( !v218 )
          v216 = 2;
      }
    }
    *(v190 + 0x618) = v216;
    v281 = "single";
    v229 = data::get_str(v273, "groupAttackMode", &v281);
    if ( v229 )
    {
      v230 = v229;
      if ( !strcmp("single", v229) )
      {
        v215 = 0;
      }
      else if ( !strcmp("wing", v230) )
      {
        v215 = 1;
      }
      else
      {
        v215 = 0;
        if ( !strcmp("group", v230) )
          v215 = 2;
      }
    }
    *(v190 + 0x634) = v215;
    v325 = 0x47C35000C7C35000i64;
    sub_145C170(v273, &v281, "attackAltRange", &v325);
    *(v190 + 0x62C) = v281;
    *(v190 + 0x612) = HIBYTE(v272);
    *(v190 + 0x590) = v320;
    *(v190 + 0x594) = v319;
    v232 = v288;
    if ( *(v82 + 4) )
    {
      v233 = 0i64;
      while ( 1 )
      {
        v236 = *(*(*v82 + 8 * v233) + 8i64);
        v231 = NtCurrentTeb()->ThreadLocalStoragePointer;
        if ( dword_4ACF6E8 > *(*(v231 + 8i64 * TlsIndex) + 4i64) )
        {
          Init_thread_header(&dword_4ACF6E8);
          v232 = v288;
          if ( dword_4ACF6E8 == 0xFFFFFFFF )
          {
            qword_4ACF6D0 = 0i64;
            off_4ACF6D8 = off_4B678C0;
            qword_4ACF6E0 = 0i64;
            atexit(sub_128750);
            Init_thread_footer(&dword_4ACF6E8);
            v232 = v288;
          }
        }
        v237 = (v194 + *(v190 + 0x518));
        if ( *(v190 + 0x528) <= v232 )
          v237 = &qword_4ACF6D0;
        v234 = *(v237 + 4);
        if ( *(v237 + 4) )
          break;
        LODWORD(v234) = 0;
        v235 = *v237;
        if ( *(v237 + 5) )
          goto LABEL_415;
        v231 = 4i64;
        if ( v235 )
          goto LABEL_432;
LABEL_435:
        v294 = v231;
        v235 = (*(*v237[1] + 0x18i64))(v237[1], 4i64 * v231);
        memmove(v235, *v237, 4i64 * *(v237 + 4));
        if ( *v237 )
          (*(*v237[1] + 0x40i64))(v237[1]);
        v231 = v294;
LABEL_438:
        *v237 = v235;
        *(v237 + 5) = v231;
        LODWORD(v234) = *(v237 + 4);
        v232 = v288;
LABEL_415:
        *(v237 + 4) = v234 + 1;
        *(v235 + v234) = v236;
LABEL_416:
        if ( ++v233 >= *(v82 + 4) )
          goto LABEL_441;
      }
      v235 = *v237;
      v238 = 0i64;
      while ( *(v235 + v238) != v236 )
      {
        if ( v234 == ++v238 )
          goto LABEL_427;
      }
      if ( v238 >= 0 && v234 > v238 )
        goto LABEL_416;
LABEL_427:
      if ( *(v237 + 5) != v234 )
        goto LABEL_415;
      v231 = (2 * v234);
      if ( v234 >= 0x400 )
        v231 = v234 + ((v234 + 1) >> 1);
LABEL_432:
      if ( v231 < 5 )
        v231 = 4i64;
      v294 = v231;
      v239 = (*(*v237[1] + 0x38i64))(v237[1], v235, 4 * v231);
      v231 = v294;
      v235 = v239;
      if ( v239 )
        goto LABEL_438;
      goto LABEL_435;
    }
LABEL_441:
    v240 = v316;
    if ( v316 )
    {
      v241 = 0i64;
      while ( 1 )
      {
        v244 = *(v314 + 8 * v241);
        v242 = *(v190 + 0x5A8);
        if ( *(v190 + 0x5A8) )
          break;
        LODWORD(v242) = 0;
        v243 = *(v190 + 0x598);
        if ( *(v190 + 0x5AC) )
          goto LABEL_444;
        v245 = 2i64;
        if ( v243 )
          goto LABEL_458;
LABEL_461:
        v243 = (*(**(v190 + 0x5A0) + 0x18i64))(*(v190 + 0x5A0), 8i64 * v245, v232);
        memmove(v243, *(v190 + 0x598), 8i64 * *(v190 + 0x5A8));
        v231 = *(v190 + 0x598);
        if ( v231 )
          (*(**(v190 + 0x5A0) + 0x40i64))(*(v190 + 0x5A0));
LABEL_463:
        *(v190 + 0x598) = v243;
        *(v190 + 0x5AC) = v245;
        LODWORD(v242) = *(v190 + 0x5A8);
LABEL_444:
        *(v190 + 0x5A8) = v242 + 1;
        *(v243 + v242) = v244;
        v240 = v316;
LABEL_445:
        if ( ++v241 >= v240 )
          goto LABEL_464;
      }
      v243 = *(v190 + 0x598);
      v231 = 0i64;
      while ( *(v243 + v231) != v244 )
      {
        if ( v242 == ++v231 )
          goto LABEL_453;
      }
      if ( v231 >= 0 && v242 > v231 )
        goto LABEL_445;
LABEL_453:
      if ( *(v190 + 0x5AC) != v242 )
        goto LABEL_444;
      v245 = (2 * v242);
      if ( v242 >= 0x200 )
        v245 = v242 + ((v242 + 1) >> 1);
LABEL_458:
      if ( v245 < 3 )
        v245 = 2i64;
      v243 = (*(**(v190 + 0x5A0) + 0x38i64))(*(v190 + 0x5A0), v243, 8 * v245);
      if ( v243 )
        goto LABEL_463;
      goto LABEL_461;
    }
LABEL_464:
    v246 = v313;
    if ( !v313 )
    {
LABEL_487:
      *(v190 + 0x5C8) = v327;
      *(v190 + 0x5D0) = v326;
      (*(*v190 + 0x10i64))(v190, v231, v232);
      if ( v279 )
      {
        *(v190 + 0x648) = 0i64;
        *(v190 + 0x650) = 0;
      }
      goto LABEL_273;
    }
    v247 = 0i64;
    while ( 1 )
    {
      v250 = v311;
      v248 = *(v190 + 0x5C0);
      if ( *(v190 + 0x5C0) )
        break;
      LODWORD(v248) = 0;
      v249 = *(v190 + 0x5B0);
      if ( *(v190 + 0x5C4) )
        goto LABEL_467;
      v251 = 2i64;
      if ( v249 )
        goto LABEL_481;
LABEL_484:
      v249 = (*(**(v190 + 0x5B8) + 0x18i64))(*(v190 + 0x5B8), 8i64 * v251, v232);
      memmove(v249, *(v190 + 0x5B0), 8i64 * *(v190 + 0x5C0));
      v231 = *(v190 + 0x5B0);
      if ( v231 )
        (*(**(v190 + 0x5B8) + 0x40i64))(*(v190 + 0x5B8));
LABEL_486:
      *(v190 + 0x5B0) = v249;
      *(v190 + 0x5C4) = v251;
      LODWORD(v248) = *(v190 + 0x5C0);
LABEL_467:
      *(v190 + 0x5C0) = v248 + 1;
      *(v249 + v248) = *(v250 + 8 * v247);
      v246 = v313;
LABEL_468:
      if ( ++v247 >= v246 )
        goto LABEL_487;
    }
    v249 = *(v190 + 0x5B0);
    v231 = 0i64;
    while ( *(v249 + v231) != *(v311 + 8 * v247) )
    {
      if ( v248 == ++v231 )
        goto LABEL_476;
    }
    if ( v231 >= 0 && v248 > v231 )
      goto LABEL_468;
LABEL_476:
    if ( *(v190 + 0x5C4) != v248 )
      goto LABEL_467;
    v251 = (2 * v248);
    if ( v248 >= 0x200 )
      v251 = v248 + ((v248 + 1) >> 1);
LABEL_481:
    if ( v251 < 3 )
      v251 = 2i64;
    v249 = (*(**(v190 + 0x5B8) + 0x38i64))(*(v190 + 0x5B8), v249, 8 * v251);
    if ( v249 )
      goto LABEL_486;
    goto LABEL_484;
  }
LABEL_501:
  if ( v311 )
    (*(*v312 + 0x40i64))(v312);
  if ( v314 )
    (*(*v315 + 0x40i64))(v315);
  if ( v328 )
    (*(*v329 + 0x40i64))(v329);
  if ( v308 )
    (*(*v309 + 0x40i64))(v309);
  if ( v322 )
    (*(*v323 + 0x40i64))(v323);
  if ( v298 )
    (*(*v299 + 0x40i64))(v299);
  if ( v301 )
    (*(*v302 + 0x40i64))(v302);
  if ( v304 )
    (*(*v305 + 0x40))(v305);
LABEL_517:
  if ( UnitList )
    (*(*v291 + 0x40i64))(v291);
  return 1;
}
