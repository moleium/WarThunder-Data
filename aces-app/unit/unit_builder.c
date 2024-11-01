__int64 __fastcall unit_builder(
        __int64 Unit,
        __int16 a2,
        __int64 a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        int a8,
        unsigned int a9)
{
  char v12; // r13
  __int16 v13; // r14
  __int64 v14; // rbx
  unsigned int v15; // r15d
  unsigned int v16; // r12d
  __int64 v17; // rax
  int v18; // edi
  int v19; // eax
  unsigned int v20; // eax
  __int16 v21; // r10
  unsigned int v22; // edi
  int v23; // eax
  unsigned int v24; // r9d
  __int64 *v25; // rcx
  unsigned int v26; // r15d
  __int64 v27; // rbx
  unsigned int v28; // edi
  __int64 v29; // rbp
  unsigned int v30; // eax
  unsigned int v31; // r15d
  __int64 *v32; // rbp
  __int64 v33; // rdx
  __int64 v34; // rbx
  unsigned int v35; // edi
  __int64 *v36; // rbx
  __int16 v37; // bp
  char v38; // al
  int v39; // r8d
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 *v42; // rdx
  __int128 v43; // xmm0
  __m128i si128; // xmm1
  __int128 v45; // xmm2
  void *v46; // rax
  __int128 v47; // xmm2
  __int128 v48; // xmm3
  __int128 v49; // xmm4
  void *v50; // rax
  __int128 v51; // xmm6
  _OWORD *v52; // rdi
  int v53; // r8d
  _OWORD *v54; // rax
  _OWORD *v55; // rdi
  _OWORD *v56; // rax
  _OWORD *v57; // rdi
  _OWORD *v58; // rax
  _OWORD *v59; // rdi
  _OWORD *v60; // rax
  void *v61; // rcx
  __int64 (__fastcall **v62)(void *); // rax
  __int64 v63; // rdi
  void *v64; // rbp
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 *v67; // rdx
  void *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 *v71; // rdx
  unsigned int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // rbp
  unsigned int v75; // r15d
  unsigned int v76; // r14d
  __int64 v77; // rax
  int v78; // edi
  int v79; // eax
  unsigned int v80; // eax
  int v81; // ecx
  __int64 *v82; // r8
  __int64 *v83; // r14
  unsigned int v84; // r15d
  __int64 v85; // rbp
  unsigned int v86; // edi
  __int64 v87; // rax
  unsigned int v88; // ecx
  unsigned int v89; // r15d
  __int64 *v90; // rax
  __int64 v91; // rbp
  unsigned int v92; // edi
  __int64 v93; // rbp
  char *v94; // rdi
  CHAR *v95; // rdx
  __int64 v96; // rax
  _OWORD *v97; // rbx
  bool v98; // zf
  _QWORD *v99; // r13
  _QWORD *v100; // r14
  __int64 v101; // rdi
  char *v102; // rbx
  unsigned int v103; // eax
  int v104; // eax
  char *v105; // rdi
  __int64 v106; // rax
  _QWORD *v107; // rax
  _QWORD *v108; // rax
  _QWORD *v109; // rax
  _QWORD *v110; // rax
  _QWORD *v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  _QWORD *v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rax
  _QWORD *v128; // rdx
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rax
  _QWORD *v132; // rdx
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rax
  _QWORD *v142; // rax
  _QWORD *v143; // rdx
  __int64 v144; // rax
  __int64 *v145; // r12
  unsigned int v146; // eax
  int v147; // eax
  _QWORD *v148; // r15
  __int64 v149; // rbp
  char *v150; // rdi
  __int64 v151; // rax
  unsigned int v152; // eax
  int v153; // eax
  char *v154; // rdi
  __int64 v155; // rax
  _QWORD *v156; // rdx
  unsigned int v157; // eax
  int v158; // eax
  char *v159; // rdi
  __int64 v160; // rax
  unsigned int v161; // eax
  int v162; // eax
  char *v163; // rdi
  __int64 v164; // rax
  _QWORD *v165; // rbp
  _QWORD *v166; // rdx
  unsigned int v167; // eax
  int v168; // eax
  char *v169; // rdi
  __int64 v170; // rax
  _QWORD *v171; // rdx
  unsigned int v172; // eax
  int v173; // eax
  char *v174; // rdi
  __int64 v175; // rax
  _QWORD *v176; // rdx
  unsigned int v177; // eax
  int v178; // eax
  char *v179; // rdi
  __int64 v180; // rax
  _QWORD *v181; // rdx
  unsigned int v182; // eax
  int v183; // eax
  char *v184; // rdi
  __int64 v185; // rax
  _QWORD *v186; // rdx
  unsigned int v187; // eax
  int v188; // eax
  char *v189; // rdi
  __int64 v190; // rax
  _QWORD *v191; // rdx
  unsigned int v192; // eax
  int v193; // eax
  char *v194; // rdi
  __int64 v195; // rax
  _QWORD *v196; // rdx
  unsigned int v197; // eax
  int v198; // eax
  char *v199; // rdi
  __int64 v200; // rax
  _QWORD *v201; // rdx
  unsigned int v202; // eax
  int v203; // eax
  char *v204; // rdi
  __int64 v205; // rax
  _QWORD *v206; // rdx
  unsigned int v207; // eax
  int v208; // eax
  char *v209; // rdi
  __int64 v210; // rax
  _QWORD *v211; // rdx
  unsigned int v212; // eax
  int v213; // eax
  char *v214; // rdi
  __int64 v215; // rax
  _QWORD *v216; // rdx
  unsigned int v217; // eax
  int v218; // eax
  char *v219; // rdi
  __int64 v220; // rax
  unsigned int v221; // eax
  int v222; // eax
  char *v223; // rdi
  __int64 v224; // rax
  _QWORD *v225; // rdx
  unsigned int v226; // eax
  int v227; // eax
  char *v228; // rdi
  __int64 v229; // rax
  unsigned int v230; // eax
  int v231; // eax
  char *v232; // rdi
  __int64 v233; // rax
  _QWORD *v234; // rdx
  unsigned int v235; // eax
  int v236; // eax
  char *v237; // rdi
  __int64 v238; // rax
  _QWORD *v239; // rdx
  unsigned int v240; // eax
  int v241; // eax
  char *v242; // rdi
  __int64 v243; // rax
  _QWORD *v244; // rdx
  unsigned int v245; // eax
  int v246; // eax
  char *v247; // rdi
  __int64 v248; // rax
  _QWORD *v249; // rdx
  unsigned int v250; // eax
  int v251; // eax
  char *v252; // rdi
  __int64 v253; // rax
  _QWORD *v254; // rdx
  unsigned int v255; // eax
  int v256; // eax
  char *v257; // rdi
  __int64 v258; // rax
  _QWORD *v259; // rdx
  unsigned int v260; // eax
  int v261; // eax
  __int64 v262; // rax
  const char *v263; // rbp
  __int64 v264; // r12
  unsigned int v265; // ebx
  char v266; // dl
  char *v267; // rcx
  int v268; // eax
  bool v269; // cf
  __int64 v270; // rcx
  __int64 v271; // r13
  __int64 v272; // rdi
  char v273; // bl
  const char *v274; // rdx
  bool v275; // cc
  __int64 v276; // rax
  __int64 v277; // rdi
  int *v278; // rdi
  int v279; // eax
  int v280; // ecx
  int v281; // ecx
  char v282; // al
  int v283; // ecx
  int v284; // eax
  __int64 v285; // rax
  char *v286; // rax
  int v287; // eax
  unsigned int v288; // edx
  int v289; // ecx
  int v290; // ebp
  void *v291; // rdi
  __int64 v292; // rax
  __int64 v293; // rax
  _OWORD *v294; // rdi
  _OWORD *v295; // rax
  __int64 v296; // rdi
  const char *v297; // rdx
  double v298; // xmm0_8
  const char *v299; // rdx
  double v300; // xmm0_8
  int v301; // eax
  int v303; // ecx
  unsigned __int64 v304; // rdx
  __int64 *v305; // [rsp+20h] [rbp-178h]
  __int64 v306; // [rsp+40h] [rbp-158h] BYREF
  char *v307; // [rsp+48h] [rbp-150h]
  CHAR *v308; // [rsp+50h] [rbp-148h] BYREF
  void *v309; // [rsp+58h] [rbp-140h]
  __int64 v310; // [rsp+60h] [rbp-138h]
  char *v311; // [rsp+68h] [rbp-130h]
  __int64 v312; // [rsp+70h] [rbp-128h]
  _QWORD *v313; // [rsp+78h] [rbp-120h]
  __int64 v314; // [rsp+80h] [rbp-118h]
  __int64 v315; // [rsp+88h] [rbp-110h]
  __int64 v316; // [rsp+90h] [rbp-108h]
  __int64 v317; // [rsp+98h] [rbp-100h]
  __int64 v318; // [rsp+A0h] [rbp-F8h]
  __int64 v319; // [rsp+A8h] [rbp-F0h]
  __int64 v320; // [rsp+B0h] [rbp-E8h]
  __int64 v321; // [rsp+B8h] [rbp-E0h]
  _QWORD *v322; // [rsp+C0h] [rbp-D8h]
  __int64 v323; // [rsp+C8h] [rbp-D0h]
  __int64 v324; // [rsp+D0h] [rbp-C8h]
  __int64 v325; // [rsp+D8h] [rbp-C0h]
  __int64 v326; // [rsp+E0h] [rbp-B8h]
  __int64 v327; // [rsp+E8h] [rbp-B0h]
  __int64 v328; // [rsp+F0h] [rbp-A8h]
  __int64 v329; // [rsp+F8h] [rbp-A0h]
  __int64 v330; // [rsp+100h] [rbp-98h]
  __int64 v331; // [rsp+108h] [rbp-90h]
  __int64 v332; // [rsp+110h] [rbp-88h]
  __int64 v333; // [rsp+118h] [rbp-80h]
  __int64 v334; // [rsp+120h] [rbp-78h]
  __int64 v335; // [rsp+128h] [rbp-70h]

  v311 = a3;
  LOBYTE(v308) = 1;
  v12 = data::get_bool(a6, "activeDynModelInst", &v308);
  v13 = a4 | 0x800;
  v14 = *a6;
  v15 = 0xFFFFFFFF;
  if ( *a6 )
  {
    v16 = data::get_name_id("props", 5ui64);
    v17 = *(v14 + 0x50);
    if ( v17 )
    {
      v18 = *(v17 + 0x20);
      if ( !*(v14 + 0x20) )
        goto LABEL_8;
    }
    else
    {
      v18 = 0;
      if ( !*(v14 + 0x20) )
        goto LABEL_8;
    }
    v19 = data::get_name_id(v14, "props", 5i64, v16);
    if ( v19 >= 0 )
    {
      v20 = v18 + v19;
LABEL_10:
      v15 = v20;
      goto LABEL_11;
    }
LABEL_8:
    if ( !v18 )
      goto LABEL_11;
    v20 = data::get_name_id(*(v14 + 0x50), "props", 5i64, v16);
    goto LABEL_10;
  }
LABEL_11:
  v21 = a2;
  v22 = a7;
  v23 = *(a6 + 0x10);
  if ( v23 != 0xFFFFFFFF )
  {
    v24 = *(a6 + 0xE);
    v25 = 0i64;
    if ( v23 < (v23 + v24) )
    {
      v26 = v15 + 1;
      v27 = *a6 + *(*a6 + 0x5Ci64) + 0x90i64;
      v28 = 0;
      while ( 1 )
      {
        v29 = 0x20i64 * (v23 + v28);
        if ( (*(v27 + v29 + 8) & 0x3FFFFFFF) == v26 )
          break;
        if ( v24 == ++v28 )
          goto LABEL_24;
      }
      v36 = (v29 + v27);
      v25 = 0i64;
      if ( v28 < v24 )
        v25 = v36;
LABEL_24:
      v22 = a7;
    }
    goto LABEL_25;
  }
  v30 = *(a6 + 0xE);
  v25 = 0i64;
  if ( !*(a6 + 0xE) )
  {
LABEL_25:
    v37 = v21;
    goto LABEL_26;
  }
  v31 = v15 + 1;
  v32 = *(a6 + 0x18);
  v33 = *v32;
  v34 = *(v32 + 2) - 8 * v30;
  v35 = 0;
  while ( (*(*(v33 + v34) + 8i64) & 0x3FFFFFFF) != v31 )
  {
    ++v35;
    v34 += 8i64;
    if ( v30 == v35 )
      goto LABEL_24;
  }
  v37 = v21;
  if ( v35 >= v30 )
    v25 = 0i64;
  else
    v25 = *(v33 + v34);
  v22 = a7;
LABEL_26:
  if ( !v25 )
    v25 = &data::get_block_by_name;
  LODWORD(v308) = 1;
  v38 = data::set_int(v25, "army", &v308);
  sub_317E20(Unit, v37, a8, 0, v38, v22, v13, v12);
  *Unit = &off_44C3A90;
  *(Unit + 0x50) = off_44C4360;
  *(Unit + 0x1CC8) = 0i64;
  *(Unit + 0x1CD8) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_281;
  v40 = Unit + 0x1CC8;
  v41 = *(Unit + 0x18);
  v42 = (v41 + 0x18);
  if ( !v41 )
    v42 = (Unit + 0x10);
  *v42 = v40;
  *(Unit + 0x18) = v40;
  *(Unit + 0x1CE0) = 0i64;
  *(Unit + 0x1CC8) = 0x43;
  *(Unit + 0x1CD0) = "isUnderwater";
  *(Unit + 0x1CCA) = 0x80000;
  *(Unit + 0x1CD8) = sub_36E440;
  *(Unit + 0x1CE8) = 0;
  *(Unit + 0x1CF0) = 0i64;
  *(Unit + 0x1D00) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
  {
LABEL_281:
    v309 = Unit;
    LODWORD(v308) = 5;
LABEL_282:
    LOBYTE(v39) = 1;
    log_err(
      "../../prog/gameLibs/publicInclude\\daNet/reflection.h",
      0x13F,
      v39,
      "Reflection: invalid object 0x%p",
      &v308,
      1);
  }
  *(Unit + 0x1CE0) = Unit + 0x1CF0;
  *(Unit + 0x1CF0) = 0x44;
  *(Unit + 0x1CF8) = "underwaterTime";
  *(Unit + 0x1CF4) = 0x20;
  *(Unit + 0x1D00) = sub_158E050;
  *(Unit + 0x1D10) = 0;
  *(Unit + 0x1D18) = 0i64;
  *(Unit + 0x1D08) = Unit + 0x1D18;
  *(Unit + 0x18) = Unit + 0x1D18;
  *(Unit + 0x1D30) = 0i64;
  *(Unit + 0x1D18) = 0x45;
  *(Unit + 0x1D20) = "superArtilleryCount";
  *(Unit + 0x1D1C) = 8;
  *(Unit + 0x1D28) = sub_36E2B0;
  *(Unit + 0x1D38) = 0;
  v43 = xmmword_44AD470;
  *(Unit + 0x1D40) = xmmword_44AD470;
  si128 = _mm_load_si128(&xmmword_44AEB70);
  *(Unit + 0x1D50) = si128;
  v45 = xmmword_44B1400;
  *(Unit + 0x1D60) = xmmword_44B1400;
  *(Unit + 0x1D70) = v43;
  *(Unit + 0x1D80) = si128;
  *(Unit + 0x1D90) = v45;
  *(Unit + 0x1DA0) = v43;
  *(Unit + 0x1DB0) = si128;
  *(Unit + 0x1DC0) = v45;
  *(Unit + 0x1DD0) = v43;
  *(Unit + 0x1DE0) = si128;
  *(Unit + 0x1DF0) = v45;
  *(Unit + 0x1E00) = v43;
  *(Unit + 0x1E10) = si128;
  *(Unit + 0x1E20) = v45;
  *(Unit + 0x1E30) = v43;
  *(Unit + 0x1E40) = si128;
  *(Unit + 0x1E50) = v45;
  *(Unit + 0x1E60) = v43;
  *(Unit + 0x1E70) = 0i64;
  v46 = off_4B678C0;
  *(Unit + 0x1E78) = off_4B678C0;
  *(Unit + 0x1E80) = 0i64;
  *(Unit + 0x1E90) = v46;
  *(Unit + 0x1E98) = 0i64;
  *(Unit + 0x1EA0) = a5;
  *(Unit + 0x1EA8) = 0;
  *(Unit + 0x1EB8) = 0i64;
  *(Unit + 0x1EC0) = 0;
  *(Unit + 0x1EC8) = 0i64;
  *(Unit + 0x1ED8) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_280;
  *(Unit + 0x1D30) = Unit + 0x1EC8;
  *(Unit + 0x1EC8) = 0x67;
  *(Unit + 0x1ED0) = "moveSysTraceRI";
  *(Unit + 0x1ECA) = 0x80020;
  *(Unit + 0x1ED8) = sub_36E440;
  *(Unit + 0x1EF0) = 0;
  *(Unit + 0x1EF4) = 1;
  *(Unit + 0x1F08) = xmmword_44A8DF0;
  *(Unit + 0x1F18) = xmmword_44AB0D0;
  *(Unit + 0x1F28) = xmmword_44AB0E0;
  *(Unit + 0x1F40) = 0;
  *(Unit + 0x1F44) = 0x101;
  *(Unit + 0x1F48) = 0x7F7FFFFF;
  *(Unit + 0x1F4C) = 1;
  *(Unit + 0x1F4D) = 0;
  *(Unit + 0x1F54) = 4;
  *(Unit + 0x1F58) = 0;
  *(Unit + 0x1F60) = 0i64;
  *(Unit + 0x1F68) = v46;
  *(Unit + 0x1F70) = 0i64;
  *(Unit + 0x1F78) = xmmword_44C38B0;
  *(Unit + 0x1F88) = 0;
  *(Unit + 0x1F8A) = 0;
  *(Unit + 0x1FB8) = 0;
  *(Unit + 0x1FC8) = 0i64;
  *(Unit + 0x1FD0) = 0;
  *(Unit + 0x1FD8) = 0i64;
  *(Unit + 0x1FFC) = 0x3F8000003F800000i64;
  *(Unit + 0x2010) = 0i64;
  *(Unit + 0x2004) = 0i64;
  *(Unit + 0x2020) = _mm_load_si128(&xmmword_44C38C0);
  *(Unit + 0x2030) = 0xBF800000;
  *(Unit + 0x2034) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x2044) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x2054) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x2064) = 0xBF8000003F800000ui64;
  *(Unit + 0x206C) = 0xBF800000;
  *(Unit + 0x20D0) = 0i64;
  *(Unit + 0x20E0) = v46;
  *(Unit + 0x20E8) = 0i64;
  *(Unit + 0x20F0) = 0xFFFFFFFF;
  *(Unit + 0x210C) = 0;
  *(Unit + 0x2114) = 0i64;
  *(Unit + 0x2124) = 0xFFFFFFFFBF800000ui64;
  *(Unit + 0x212C) = 0i64;
  *(Unit + 0x2134) = 0;
  *(Unit + 0x2138) = 0x3F800000;
  *(Unit + 0x213C) = 0i64;
  *(Unit + 0x2144) = 0;
  *(Unit + 0x1EE0) = Unit + 0x2140;
  *(Unit + 0x18) = Unit + 0x2140;
  *(Unit + 0x2158) = 0i64;
  *(Unit + 0x2140) = 0x46;
  *(Unit + 0x2148) = "camoGamma";
  *(Unit + 0x2144) = 0x20;
  *(Unit + 0x2150) = sub_158E050;
  *(Unit + 0x2160) = 0x3F800000;
  *(Unit + 0x2168) = 0i64;
  *(Unit + 0x2170) = v46;
  *(Unit + 0x2178) = 0i64;
  *(Unit + 0x2180) = 0x101;
  *(Unit + 0x2182) = 0;
  *(Unit + 0x2188) = 0i64;
  *(Unit + 0x2190) = v46;
  *(Unit + 0x2198) = 0i64;
  *(Unit + 0x21A8) = 0i64;
  *(Unit + 0x21B0) = v46;
  *(Unit + 0x21F8) = 0i64;
  *(Unit + 0x21E8) = 0i64;
  *(Unit + 0x21D8) = 0i64;
  *(Unit + 0x21C8) = 0i64;
  *(Unit + 0x21B8) = 0i64;
  *(Unit + 0x2208) = 0i64;
  v47 = xmmword_45149A0;
  *(Unit + 0x2230) = xmmword_45149A0;
  v48 = *&ymmword_4514980.m256_f32[4];
  *(Unit + 0x2220) = *&ymmword_4514980.m256_f32[4];
  v49 = *ymmword_4514980.m256_f32;
  *(Unit + 0x2210) = *ymmword_4514980.m256_f32;
  *(Unit + 0x2250) = 0i64;
  *(Unit + 0x2240) = 0i64;
  *(Unit + 0x2260) = 0x3F800000;
  *(Unit + 0x2268) = 0i64;
  *(Unit + 0x2270) = v46;
  *(Unit + 0x2278) = 0i64;
  *(Unit + 0x22A8) = 0i64;
  *(Unit + 0x2298) = 0i64;
  *(Unit + 0x2288) = 0i64;
  *(Unit + 0x22B8) = 0;
  *(Unit + 0x22BC) = 0i64;
  *(Unit + 0x22D0) = 0xBFF0000000000000ui64;
  *(Unit + 0x22E0) = 0;
  *(Unit + 0x22DC) = 0;
  *(Unit + 0x22D8) = 0;
  *(Unit + 0x22E4) = 0x3F800000;
  *(Unit + 0x22E8) = 0x408F380000000000i64;
  *(Unit + 0x22F0) = 0x408F380000000000i64;
  *(Unit + 0x22F8) = 0x408F380000000000i64;
  *(Unit + 0x231D) = 0i64;
  *(Unit + 0x2310) = 0i64;
  *(Unit + 0x2300) = 0i64;
  *(Unit + 0x2335) = 0i64;
  *(Unit + 0x2330) = 0i64;
  *(Unit + 0x2340) = 0xBFF0000000000000ui64;
  *(Unit + 0x2350) = 0;
  *(Unit + 0x234C) = 0;
  *(Unit + 0x2348) = 0;
  *(Unit + 0x2354) = 0x3F800000;
  *(Unit + 0x2358) = 0x408F380000000000i64;
  *(Unit + 0x2360) = 0x408F380000000000i64;
  *(Unit + 0x2368) = 0x408F380000000000i64;
  *(Unit + 0x238D) = 0i64;
  *(Unit + 0x2380) = 0i64;
  *(Unit + 0x2370) = 0i64;
  *(Unit + 0x23A5) = 0i64;
  *(Unit + 0x23A0) = 0i64;
  *(Unit + 0x23B0) = 0xBFF0000000000000ui64;
  *(Unit + 0x23C0) = 0;
  *(Unit + 0x23BC) = 0;
  *(Unit + 0x23B8) = 0;
  *(Unit + 0x23C4) = 0x3F800000;
  *(Unit + 0x23C8) = 0x408F380000000000i64;
  *(Unit + 0x23D0) = 0x408F380000000000i64;
  *(Unit + 0x23D8) = 0x408F380000000000i64;
  *(Unit + 0x23FD) = 0i64;
  *(Unit + 0x23F0) = 0i64;
  *(Unit + 0x23E0) = 0i64;
  *(Unit + 0x2415) = 0i64;
  *(Unit + 0x2410) = 0i64;
  *(Unit + 0x2420) = 0i64;
  *(Unit + 0x2438) = xmmword_44C38D0;
  *(Unit + 0x2448) = 0x7F7FFFFF;
  *(Unit + 0x246C) = 0i64;
  *(Unit + 0x245C) = 0i64;
  *(Unit + 0x244C) = 0i64;
  *(Unit + 0x247C) = 0;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_280;
  v335 = Unit + 0x1EC8;
  *(Unit + 0x2158) = Unit + 0x2460;
  *(Unit + 0x2460) = 0x6F;
  *(Unit + 0x2468) = "fullExploded";
  *(Unit + 0x2462) = 0x80020;
  *(Unit + 0x2470) = sub_36E440;
  *(Unit + 0x2480) = 0;
  *(Unit + 0x2488) = 0;
  *(Unit + 0x248C) = v49;
  *(Unit + 0x249C) = v48;
  *(Unit + 0x24AC) = v47;
  *(Unit + 0x24BC) = 1;
  *(Unit + 0x24C0) = 0i64;
  *(Unit + 0x24C8) = 0xFFFFFFFF;
  *(Unit + 0x24CC) = 0;
  *(Unit + 0x24CE) = 0x10101;
  *(Unit + 0x24D4) = 0xFFFFFFFF;
  *(Unit + 0x24D8) = 1;
  *(Unit + 0x24E0) = 0i64;
  *(Unit + 0x24F0) = 0xBF800000;
  *(Unit + 0x24F4) = 0;
  *(Unit + 0x2504) = 0;
  *(Unit + 0x2518) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x2520) = 0;
  *(Unit + 0x2524) = 0;
  *(Unit + 0x2528) = 0;
  *(Unit + 0x2548) = 0xBF800000BF800000ui64;
  *(Unit + 0x2550) = 0i64;
  v50 = off_4B678C0;
  *(Unit + 0x2558) = off_4B678C0;
  *(Unit + 0x2560) = 0i64;
  *(Unit + 0x2570) = v50;
  *(Unit + 0x2578) = 0i64;
  *(Unit + 0x2588) = v50;
  *(Unit + 0x2590) = 0i64;
  *(Unit + 0x25A0) = v50;
  *(Unit + 0x25A8) = 0i64;
  *(Unit + 0x25B0) = 0;
  *(Unit + 0x25B4) = xmmword_44C38E0;
  *(Unit + 0x25C4) = xmmword_44A01E0;
  *(Unit + 0x25D4) = 0xFFFFFFFF;
  *(Unit + 0x25E0) = 0xA;
  *(Unit + 0x25E8) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x2680) = 0i64;
  *(Unit + 0x25E4) = 0xFFFFFFFF;
  *(Unit + 0x25F8) = 0xFFFFFFFF00000000ui64;
  *(Unit + 0x2600) = 0i64;
  *(Unit + 0x2610) = 0x10;
  *(Unit + 0x261C) = 0;
  *(Unit + 0x2614) = 0i64;
  *(Unit + 0x2640) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x263C) = 0xFFFF;
  *(Unit + 0x2648) = 0;
  *(Unit + 0x265C) = 0xFFFF;
  v51 = xmmword_44A8E10;
  *(Unit + 0x2624) = xmmword_44A8E10;
  *(Unit + 0x2664) = 0xFFFFFFFFi64;
  *(Unit + 0x2660) = 0;
  *(Unit + 0x264C) = 0i64;
  *(Unit + 0x2634) = 0x7FFFFFFFFFFFFFFFi64;
  *(Unit + 0x2620) = 0;
  *(Unit + 0x266C) = 0;
  *(Unit + 0x2670) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x267C) = 0;
  *(Unit + 0x2678) = 0xFFFFFFFF;
  *(Unit + 0x2690) = 0i64;
  *(Unit + 0x2698) = 0xFFFFFFFF;
  *(Unit + 0x26A0) = 0i64;
  *(Unit + 0x2478) = Unit + 0x26A0;
  *(Unit + 0x26A0) = 0x70;
  *(Unit + 0x26A8) = "currentTriggerNo";
  *(Unit + 0x26A2) = 0x200800;
  *(Unit + 0x26B0) = sub_158DEB0;
  *(Unit + 0x26C0) = 0xFFFFFFFF;
  *(Unit + 0x26C8) = 0i64;
  *(Unit + 0x26B8) = Unit + 0x26C8;
  *(Unit + 0x18) = Unit + 0x26C8;
  *(Unit + 0x26E0) = 0i64;
  *(Unit + 0x26C8) = 0x72;
  *(Unit + 0x26D0) = "sensorsExRefl";
  *(Unit + 0x26CA) = 0x80800;
  *(Unit + 0x26D8) = sub_4C8DA0;
  *(Unit + 0x26E8) = 0xFF;
  *(Unit + 0x2700) = 0i64;
  *(Unit + 0x26F0) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_280;
  *(Unit + 0x26E0) = Unit + 0x26F0;
  *(Unit + 0x26F0) = 0x48;
  *(Unit + 0x26F8) = "scorched";
  *(Unit + 0x26F4) = 8;
  *(Unit + 0x2700) = sub_36E440;
  *(Unit + 0x2710) = 0;
  *(Unit + 0x2718) = 0i64;
  *(Unit + 0x2708) = Unit + 0x2718;
  *(Unit + 0x2718) = 0x63;
  *(Unit + 0x2720) = "deathEffectFireTotal";
  *(Unit + 0x271C) = 8;
  *(Unit + 0x2728) = sub_36E440;
  *(Unit + 0x2738) = 0;
  *(Unit + 0x2740) = 0i64;
  *(Unit + 0x2730) = Unit + 0x2740;
  *(Unit + 0x2740) = 0x61;
  *(Unit + 0x2748) = "deathEffectFireAmmo";
  *(Unit + 0x2744) = 8;
  *(Unit + 0x2750) = sub_36E440;
  *(Unit + 0x2760) = 0;
  *(Unit + 0x2768) = 0i64;
  *(Unit + 0x2758) = Unit + 0x2768;
  *(Unit + 0x2768) = 0x71;
  *(Unit + 0x2770) = "isSpawnCamper";
  *(Unit + 0x276C) = 8;
  *(Unit + 0x2778) = sub_36E440;
  *(Unit + 0x2788) = 0;
  *(Unit + 0x2790) = 0;
  *(Unit + 0x2798) = 0i64;
  *(Unit + 0x2780) = Unit + 0x2798;
  *(Unit + 0x2798) = 0x62;
  *(Unit + 0x27A0) = "deathEffectOpenHatches";
  *(Unit + 0x279A) = 0x80020;
  *(Unit + 0x27A8) = sub_36E440;
  *(Unit + 0x27B8) = 0;
  *(Unit + 0x27C0) = 0i64;
  *(Unit + 0x27B0) = Unit + 0x27C0;
  *(Unit + 0x27C0) = 0x64;
  *(Unit + 0x27C8) = "deathEffectBarrelDown";
  *(Unit + 0x27C2) = 0x80020;
  *(Unit + 0x27D0) = sub_36E440;
  *(Unit + 0x27E0) = 0;
  *(Unit + 0x27E8) = 0i64;
  *(Unit + 0x27D8) = Unit + 0x27E8;
  *(Unit + 0x27E8) = 0x65;
  *(Unit + 0x27F0) = "deathEffectCutAttaches";
  *(Unit + 0x27EA) = 0x80020;
  *(Unit + 0x27F8) = sub_36E440;
  *(Unit + 0x2808) = 0;
  *(Unit + 0x2810) = 0i64;
  *(Unit + 0x2800) = Unit + 0x2810;
  *(Unit + 0x2810) = 0x6B;
  *(Unit + 0x2818) = "dummyVarForAPS";
  *(Unit + 0x2812) = 0x200020;
  *(Unit + 0x2820) = sub_895350;
  *(Unit + 0x2838) = 0i64;
  *(Unit + 0x2828) = Unit + 0x2838;
  *(Unit + 0x2838) = 0x6D;
  *(Unit + 0x2840) = "maxSpeedMult";
  *(Unit + 0x283A) = 0x200020;
  *(Unit + 0x2848) = sub_158E050;
  *(Unit + 0x2858) = 0x3F800000;
  *(Unit + 0x2860) = 0i64;
  *(Unit + 0x2850) = Unit + 0x2860;
  *(Unit + 0x18) = Unit + 0x2860;
  *(Unit + 0x2878) = 0i64;
  *(Unit + 0x2860) = 0x6E;
  *(Unit + 0x2868) = "maxPowerMult";
  *(Unit + 0x2862) = 0x200020;
  *(Unit + 0x2870) = sub_158E050;
  *(Unit + 0x2880) = 0x3F800000;
  *(Unit + 0x2888) = 0;
  *(Unit + 0x288A) = 1;
  *(Unit + 0x2890) = 0;
  *(Unit + 0x2892) = 3;
  *(Unit + 0x2894) = xmmword_44B5970;
  *(Unit + 0x28A4) = xmmword_449AE80;
  *(Unit + 0x28B8) = Unit;
  v52 = j__malloc_base(0x48ui64);
  if ( v52 )
    goto LABEL_40;
  do
  {
    if ( !off_4B678A0 || !off_4B678A0(0x48i64) )
    {
LABEL_277:
      v309 = byte_40 + 8;
      LODWORD(v308) = 2;
      v305 = &v308;
      goto LABEL_278;
    }
    v54 = j__malloc_base(0x48ui64);
  }
  while ( !v54 );
  v52 = v54;
LABEL_40:
  _InterlockedAdd(&dword_4B6788C, (j__msize(v52) + 0xF) >> 4);
  _InterlockedIncrement(&dword_4B67890);
  v52[1] = 0i64;
  v52[2] = 0i64;
  *v52 = 0i64;
  *(v52 + 0x1F) = 0x17;
  *(v52 + 8) = 0xFFFFFFFF;
  *(v52 + 0xA) = 0x7FFFFFFF;
  *(v52 + 0x16) = 0x101;
  *(v52 + 7) = v52 + 3;
  *(v52 + 6) = v52 + 3;
  *(v52 + 8) = 0i64;
  *(Unit + 0x28C0) = v52;
  v55 = j__malloc_base(0x48ui64);
  if ( !v55 )
  {
    do
    {
      if ( !off_4B678A0 || !off_4B678A0(0x48i64) )
        goto LABEL_277;
      v56 = j__malloc_base(0x48ui64);
    }
    while ( !v56 );
    v55 = v56;
  }
  _InterlockedAdd(&dword_4B6788C, (j__msize(v55) + 0xF) >> 4);
  _InterlockedIncrement(&dword_4B67890);
  v55[1] = 0i64;
  v55[2] = 0i64;
  *v55 = 0i64;
  *(v55 + 0x1F) = 0x17;
  *(v55 + 8) = 0xFFFFFFFF;
  *(v55 + 0xA) = 0x7FFFFFFF;
  *(v55 + 0x16) = 0x101;
  *(v55 + 7) = v55 + 3;
  *(v55 + 6) = v55 + 3;
  *(v55 + 8) = 0i64;
  *(Unit + 0x28C8) = v55;
  v57 = j__malloc_base(0x48ui64);
  if ( !v57 )
  {
    do
    {
      if ( !off_4B678A0 || !off_4B678A0(0x48i64) )
        goto LABEL_277;
      v58 = j__malloc_base(0x48ui64);
    }
    while ( !v58 );
    v57 = v58;
  }
  _InterlockedAdd(&dword_4B6788C, (j__msize(v57) + 0xF) >> 4);
  _InterlockedIncrement(&dword_4B67890);
  v57[1] = 0i64;
  v57[2] = 0i64;
  *v57 = 0i64;
  *(v57 + 0x1F) = 0x17;
  *(v57 + 8) = 0xFFFFFFFF;
  *(v57 + 0xA) = 0x7FFFFFFF;
  *(v57 + 0x16) = 0x101;
  *(v57 + 7) = v57 + 3;
  *(v57 + 6) = v57 + 3;
  *(v57 + 8) = 0i64;
  *(Unit + 0x28D0) = v57;
  v59 = j__malloc_base(0x48ui64);
  if ( !v59 )
  {
    do
    {
      if ( !off_4B678A0 || !off_4B678A0(0x48i64) )
        goto LABEL_277;
      v60 = j__malloc_base(0x48ui64);
    }
    while ( !v60 );
    v59 = v60;
  }
  _InterlockedAdd(&dword_4B6788C, (j__msize(v59) + 0xF) >> 4);
  _InterlockedIncrement(&dword_4B67890);
  v59[1] = 0i64;
  v59[2] = 0i64;
  *v59 = 0i64;
  *(v59 + 0x1F) = 0x17;
  *(v59 + 8) = 0xFFFFFFFF;
  *(v59 + 0xA) = 0x7FFFFFFF;
  *(v59 + 0x16) = 0x101;
  *(v59 + 7) = v59 + 3;
  *(v59 + 6) = v59 + 3;
  *(v59 + 8) = 0i64;
  *(Unit + 0x28D8) = v59;
  *(Unit + 0x28E0) = 0;
  *(Unit + 0x28E8) = 0i64;
  *(Unit + 0x28F8) = 0i64;
  *(Unit + 0x2908) = 0i64;
  *(Unit + 0x2918) = 0i64;
  *(Unit + 0x2928) = 0i64;
  *(Unit + 0x2938) = 0i64;
  *(Unit + 0x2941) = 0i64;
  *(Unit + 0x2952) = 1;
  *(Unit + 0x2954) = dword_44A0744;
  dword_4A79158 = 0x41C64E6D * dword_4A79158 + 0x3039;
  *(Unit + 0x2964) = (HIWORD(dword_4A79158) & 0x7FFF) * *&dword_44A5C78;
  *(Unit + 0x2970) = 0x3F8000003F800000i64;
  *(Unit + 0x2978) = 0xFFFFFC18;
  *(Unit + 0x297C) = 0;
  *(Unit + 0x2980) = 0i64;
  v61 = off_4B678C0;
  *(Unit + 0x2988) = off_4B678C0;
  *(Unit + 0x2990) = 0i64;
  *(Unit + 0x29A0) = v61;
  *(Unit + 0x29A8) = 0i64;
  *(Unit + 0x29B8) = 0i64;
  *(Unit + 0x29D0) = 0xBF800000i64;
  *(Unit + 0x29D8) = 0xBF800000;
  *(Unit + 0x29DC) = 0;
  v62 = &off_44C3A00;
  *(Unit + 0x29E0) = &off_44C3A00;
  *(Unit + 0x29E8) = 0i64;
  *(Unit + 0x29F8) = v61;
  *(Unit + 0x2A00) = 0i64;
  if ( a9 )
  {
    v63 = 0x10i64;
    if ( a9 >= 0x11 )
      v63 = a9;
    v64 = (*(*v61 + 0x18i64))(v61, v63);
    memmove(v64, *(Unit + 0x29F0), *(Unit + 0x2A00));
    if ( *(Unit + 0x29F0) )
      (*(**(Unit + 0x29F8) + 0x40i64))(*(Unit + 0x29F8));
    *(Unit + 0x29F0) = v64;
    *(Unit + 0x2A04) = v63;
    v62 = *(Unit + 0x29E0);
  }
  *(Unit + 0x2A00) = a9;
  v62[1]((Unit + 0x29E0));
  *(Unit + 0x2A30) = 0i64;
  *(Unit + 0x2A20) = 0i64;
  *(Unit + 0x2A40) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_280;
  v65 = Unit + 0x2A28;
  v66 = *(Unit + 0x18);
  v67 = (v66 + 0x18);
  if ( !v66 )
    v67 = (Unit + 0x10);
  *v67 = v65;
  *(Unit + 0x18) = v65;
  *(Unit + 0x2A40) = 0i64;
  *(Unit + 0x2A28) = 0x49;
  *(Unit + 0x2A30) = "healingCrewPart";
  *(Unit + 0x2A2A) = 0x100000;
  *(Unit + 0x2A38) = sub_36E370;
  *(Unit + 0x2A48) = 0xFFFF;
  *(Unit + 0x2A50) = 0i64;
  *(Unit + 0x2A60) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_280;
  *(Unit + 0x2A40) = Unit + 0x2A50;
  *(Unit + 0x2A50) = 0x4A;
  *(Unit + 0x2A58) = "timeToHealingCrew";
  *(Unit + 0x2A54) = 0x20;
  *(Unit + 0x2A60) = sub_158E050;
  *(Unit + 0x2A70) = 0xBF800000;
  *(Unit + 0x2A78) = 0i64;
  *(Unit + 0x2A68) = Unit + 0x2A78;
  *(Unit + 0x2A78) = 0x4B;
  *(Unit + 0x2A80) = "gunnerTargetingQuality";
  *(Unit + 0x2A7C) = 0x20;
  *(Unit + 0x2A88) = sub_158E050;
  *(Unit + 0x2A98) = 0x3F800000;
  *(Unit + 0x2AA0) = 0i64;
  *(Unit + 0x2A90) = Unit + 0x2AA0;
  *(Unit + 0x2AA0) = 0x4C;
  *(Unit + 0x2AA8) = "gunnerTargetingSpeedYawMult";
  *(Unit + 0x2AA4) = 0x20;
  *(Unit + 0x2AB0) = sub_158E050;
  *(Unit + 0x2AC0) = 0x3F800000;
  *(Unit + 0x2AC8) = 0i64;
  *(Unit + 0x2AB8) = Unit + 0x2AC8;
  *(Unit + 0x2AC8) = 0x4D;
  *(Unit + 0x2AD0) = "gunnerTargetingSpeedPitchMult";
  *(Unit + 0x2ACC) = 0x20;
  *(Unit + 0x2AD8) = sub_158E050;
  *(Unit + 0x2AE8) = 0x3F800000;
  *(Unit + 0x2AF0) = 0i64;
  *(Unit + 0x2AE0) = Unit + 0x2AF0;
  *(Unit + 0x2AF0) = 0x4E;
  *(Unit + 0x2AF8) = "timeToRearmNextBullet";
  *(Unit + 0x2AF2) = 0x200020;
  *(Unit + 0x2B00) = sub_158E050;
  *(Unit + 0x2B10) = 0xBF800000;
  *(Unit + 0x2B18) = 0i64;
  *(Unit + 0x2B08) = Unit + 0x2B18;
  *(Unit + 0x2B18) = 0x4F;
  *(Unit + 0x2B20) = "timeToRearmNextSecondaryBullet";
  *(Unit + 0x2B1A) = 0x200020;
  *(Unit + 0x2B28) = sub_158E050;
  *(Unit + 0x2B38) = 0xBF800000;
  *(Unit + 0x2B40) = 0i64;
  *(Unit + 0x2B30) = Unit + 0x2B40;
  *(Unit + 0x2B40) = 0x50;
  *(Unit + 0x2B48) = "timeToRearmNextRocket";
  *(Unit + 0x2B42) = 0x200020;
  *(Unit + 0x2B50) = sub_158E050;
  *(Unit + 0x2B60) = 0xBF800000;
  *(Unit + 0x2B68) = 0i64;
  *(Unit + 0x2B58) = Unit + 0x2B68;
  *(Unit + 0x2B68) = 0x51;
  *(Unit + 0x2B70) = "timeToRearmNextSmokeGrenade";
  *(Unit + 0x2B6A) = 0x200020;
  *(Unit + 0x2B78) = sub_158E050;
  *(Unit + 0x2B88) = 0xBF800000;
  *(Unit + 0x2B90) = 0i64;
  *(Unit + 0x2B80) = Unit + 0x2B90;
  *(Unit + 0x2B90) = 0x59;
  *(Unit + 0x2B98) = "timeToRearmNextMachineGun";
  *(Unit + 0x2B92) = 0x200020;
  *(Unit + 0x2BA0) = sub_158E050;
  *(Unit + 0x2BB0) = 0xBF800000;
  *(Unit + 0x2BB8) = 0i64;
  *(Unit + 0x2BA8) = Unit + 0x2BB8;
  *(Unit + 0x18) = Unit + 0x2BB8;
  *(Unit + 0x2BD0) = 0i64;
  *(Unit + 0x2BB8) = 0x5A;
  *(Unit + 0x2BC0) = "timeToRearmNextCoaxialGun";
  *(Unit + 0x2BBA) = 0x200020;
  *(Unit + 0x2BC8) = sub_158E050;
  *(Unit + 0x2BD8) = 0xBF800000;
  *(Unit + 0x2BF0) = 0i64;
  *(Unit + 0x2BE0) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_280;
  *(Unit + 0x2BD0) = Unit + 0x2BE0;
  *(Unit + 0x2BE0) = 0x5B;
  *(Unit + 0x2BE8) = "timeToRearmNextMortar";
  *(Unit + 0x2BE2) = 0x200020;
  *(Unit + 0x2BF0) = sub_158E050;
  *(Unit + 0x2C00) = 0xBF800000;
  *(Unit + 0x2C08) = 0i64;
  *(Unit + 0x2BF8) = Unit + 0x2C08;
  *(Unit + 0x2C08) = 0x6C;
  *(Unit + 0x2C10) = "timeToRearmAPS";
  *(Unit + 0x2C0A) = 0x200020;
  *(Unit + 0x2C18) = sub_158E050;
  *(Unit + 0x2C28) = 0xBF800000;
  *(Unit + 0x2C30) = 0;
  *(Unit + 0x2C34) = 0i64;
  *(Unit + 0x2C3C) = 0;
  *(Unit + 0x2C20) = Unit + 0x2C38;
  *(Unit + 0x2C38) = 0x55;
  *(Unit + 0x2C40) = "timeToRearmNextTorpedo";
  *(Unit + 0x2C3C) = 0x20;
  *(Unit + 0x2C48) = sub_158E050;
  *(Unit + 0x2C58) = 0xBF800000;
  *(Unit + 0x2C60) = 0i64;
  *(Unit + 0x2C50) = Unit + 0x2C60;
  *(Unit + 0x2C60) = 0x56;
  *(Unit + 0x2C68) = "timeToRearmNextBomb";
  *(Unit + 0x2C64) = 0x20;
  *(Unit + 0x2C70) = sub_158E050;
  *(Unit + 0x2C80) = 0xBF800000;
  *(Unit + 0x2C88) = 0i64;
  *(Unit + 0x2C78) = Unit + 0x2C88;
  *(Unit + 0x2C88) = 0x57;
  *(Unit + 0x2C90) = "timeToRearmNextMine";
  *(Unit + 0x2C8C) = 0x20;
  *(Unit + 0x2C98) = sub_158E050;
  *(Unit + 0x2CA8) = 0xBF800000;
  *(Unit + 0x2CB0) = 0xBF800000;
  *(Unit + 0x2CB8) = 0i64;
  v68 = off_4B678C0;
  *(Unit + 0x2CC0) = off_4B678C0;
  *(Unit + 0x2CC8) = 0i64;
  *(Unit + 0x2CD0) = 0;
  *(Unit + 0x2CD4) = 0xFFFFFFFFi64;
  *(Unit + 0x2CE0) = 0i64;
  *(Unit + 0x2CA0) = Unit + 0x2CE0;
  *(Unit + 0x2CE0) = 0x66;
  *(Unit + 0x2CE8) = "isOpticRaised";
  *(Unit + 0x2CE4) = 8;
  *(Unit + 0x2CF0) = sub_36E440;
  *(Unit + 0x2D00) = 0;
  *(Unit + 0x2D08) = 0i64;
  *(Unit + 0x2D18) = 0x3F800000;
  *(Unit + 0x2D1C) = 0;
  *(Unit + 0x2D20) = 0xBF800000BF800000ui64;
  *(Unit + 0x2D28) = 0i64;
  *(Unit + 0x2CF8) = Unit + 0x2D28;
  *(Unit + 0x2D28) = 0x5F;
  *(Unit + 0x2D30) = "isEngineWorking";
  *(Unit + 0x2D2C) = 8;
  *(Unit + 0x2D38) = sub_36E440;
  *(Unit + 0x2D48) = 1;
  *(Unit + 0x2D50) = 0i64;
  *(Unit + 0x2D40) = Unit + 0x2D50;
  *(Unit + 0x2D50) = 0x60;
  *(Unit + 0x2D58) = "batteryCharge";
  *(Unit + 0x2D54) = 0x20;
  *(Unit + 0x2D60) = sub_158E050;
  *(Unit + 0x2D70) = 0x3F800000;
  *(Unit + 0x2D78) = 0;
  *(Unit + 0x2D80) = 0i64;
  *(Unit + 0x2D68) = Unit + 0x2D80;
  *(Unit + 0x18) = Unit + 0x2D80;
  *(Unit + 0x2D98) = 0i64;
  *(Unit + 0x2D80) = 0x5C;
  *(Unit + 0x2D88) = "engineBrokenCooldownTimer";
  *(Unit + 0x2D84) = 0x20;
  *(Unit + 0x2D90) = sub_158E050;
  *(Unit + 0x2DA0) = 0;
  *(Unit + 0x2DB8) = 0i64;
  *(Unit + 0x2DA8) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_280;
  *(Unit + 0x2D98) = Unit + 0x2DA8;
  *(Unit + 0x2DA8) = 0x5D;
  *(Unit + 0x2DB0) = "transmissonBrokenCooldownTimer";
  *(Unit + 0x2DAC) = 0x20;
  *(Unit + 0x2DB8) = sub_158E050;
  *(Unit + 0x2DC8) = 0;
  *(Unit + 0x2DD0) = 0i64;
  *(Unit + 0x2DC0) = Unit + 0x2DD0;
  *(Unit + 0x2DD0) = 0x68;
  *(Unit + 0x2DD8) = "stealthCharge";
  *(Unit + 0x2DD4) = 0x20;
  *(Unit + 0x2DE0) = sub_158E050;
  *(Unit + 0x2DF0) = 0x3F800000;
  *(Unit + 0x2DF8) = 0i64;
  *(Unit + 0x2DE8) = Unit + 0x2DF8;
  *(Unit + 0x2DF8) = 0x69;
  *(Unit + 0x2E00) = "stealthEnabled";
  *(Unit + 0x2DFA) = 0x80020;
  *(Unit + 0x2E08) = sub_36E440;
  *(Unit + 0x2E18) = 0;
  *(Unit + 0x2E20) = 0;
  *(Unit + 0x2E28) = 0i64;
  *(Unit + 0x2E10) = Unit + 0x2E28;
  *(Unit + 0x18) = Unit + 0x2E28;
  *(Unit + 0x2E40) = 0i64;
  *(Unit + 0x2E28) = 0x6A;
  *(Unit + 0x2E30) = "stealthAnimTimer";
  *(Unit + 0x2E2C) = 0x20;
  *(Unit + 0x2E38) = sub_158E050;
  *(Unit + 0x2E48) = 0;
  *(Unit + 0x2E60) = 0i64;
  *(Unit + 0x2E50) = 0i64;
  *(Unit + 0x2E58) = 0;
  *(Unit + 0x2E68) = v68;
  *(Unit + 0x2E70) = xmmword_44A80A0;
  *(Unit + 0x2E80) = 0x3F80000000000000i64;
  *(Unit + 0x2E88) = 0;
  *(Unit + 0x2E90) = 0i64;
  *(Unit + 0x2E98) = v68;
  *(Unit + 0x2EA0) = 0i64;
  *(Unit + 0x2EB0) = 0;
  *(Unit + 0x2EB4) = 0x3F800000;
  *(Unit + 0x2EB8) = 0;
  *(Unit + 0x2EBA) = 0;
  *(Unit + 0x2EBC) = 0x47C350003F800000i64;
  *(Unit + 0x2EC4) = 0x41700000;
  sub_14584E0(Unit + 0x2EC8, off_4B678B0);
  *(Unit + 0x2EE8) = 1;
  *(Unit + 0x2EEC) = 0xBF800000;
  *(Unit + 0x2F08) = 0i64;
  *(Unit + 0x2EF0) = 0i64;
  *(Unit + 0x2F10) = Unit + 0x2F08;
  *(Unit + 0x2F18) = 0i64;
  *(Unit + 0x2F28) = 0i64;
  *(Unit + 0x2F38) = 0i64;
  *(Unit + 0x2F48) = 0i64;
  *(Unit + 0x2F50) = 0xD0808;
  *(Unit + 0x2F58) = 0i64;
  *(Unit + 0x2F68) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
  {
LABEL_280:
    v309 = Unit;
    LODWORD(v308) = 5;
    goto LABEL_282;
  }
  v69 = Unit + 0x2F58;
  v70 = *(Unit + 0x18);
  v71 = (v70 + 0x18);
  if ( !v70 )
    v71 = (Unit + 0x10);
  *v71 = v69;
  *(Unit + 0x18) = v69;
  *(Unit + 0x2F70) = 0i64;
  *(Unit + 0x2F58) = 0x58;
  *(Unit + 0x2F60) = "playAnimId";
  *(Unit + 0x2F5A) = 0x200020;
  *(Unit + 0x2F68) = sub_158DEB0;
  *(Unit + 0x2F80) = 0x3F800000i64;
  *(Unit + 0x2F88) = 0xBF800000;
  *(Unit + 0x2F8C) = 0;
  *(Unit + 0x2F90) = 0i64;
  *(Unit + 0x2F98) = 0;
  *(Unit + 0x2F9C) = 0xBF800000;
  *(Unit + 0x2FBC) = 0x3F800000i64;
  *(Unit + 0x2FC4) = 0;
  *(Unit + 0x2FD0) = 0i64;
  *(Unit + 0x2FD8) = off_4B678C0;
  *(Unit + 0x2FE0) = 0i64;
  *(Unit + 0x2FEC) = 5;
  *(Unit + 0x2FF0) = 0;
  *(Unit + 0x2FF9) = 0i64;
  *(Unit + 0x2FF4) = 0i64;
  *(Unit + 0x3018) = 0i64;
  *(Unit + 0x3020) = 0;
  *(Unit + 0x3004) = 0i64;
  *(Unit + 0x3014) = 0;
  *(Unit + 0x302C) = 0;
  *(Unit + 0x3024) = 0i64;
  *(Unit + 0x118) = *(*(game + 0x638) + 0xA0i64) | *(Unit + 0x118) & 1i64;
  v72 = qword_4AD09E0;
  if ( HIDWORD(qword_4AD09E0) == qword_4AD09E0 )
  {
    if ( HIDWORD(qword_4AD09E0) )
    {
      if ( HIDWORD(qword_4AD09E0) > 0x1FF )
        v304 = ((HIDWORD(qword_4AD09E0) + 1) >> 1) + HIDWORD(qword_4AD09E0);
      else
        v304 = 2i64 * HIDWORD(qword_4AD09E0);
    }
    else
    {
      v304 = 2i64;
    }
    sub_FC0D0(&world_targets_list, v304);
    v72 = qword_4AD09E0;
  }
  v73 = v72 + 1;
  LODWORD(qword_4AD09E0) = v72 + 1;
  *(world_targets_list + v72) = Unit;
  v74 = *a6;
  v75 = 0xFFFFFFFF;
  if ( !*a6 )
    goto LABEL_81;
  v76 = data::get_name_id("props", 5ui64);
  v77 = *(v74 + 0x50);
  if ( v77 )
  {
    v78 = *(v77 + 0x20);
    if ( !*(v74 + 0x20) )
    {
LABEL_78:
      if ( v78 )
      {
        v80 = data::get_name_id(*(v74 + 0x50), "props", 5i64, v76);
        goto LABEL_80;
      }
      goto LABEL_81;
    }
  }
  else
  {
    v78 = 0;
    if ( !*(v74 + 0x20) )
      goto LABEL_78;
  }
  v79 = data::get_name_id(v74, "props", 5i64, v76);
  if ( v79 < 0 )
    goto LABEL_78;
  v80 = v78 + v79;
LABEL_80:
  v75 = v80;
LABEL_81:
  v81 = *(a6 + 0x10);
  if ( v81 == 0xFFFFFFFF )
  {
    v88 = *(a6 + 0xE);
    v82 = 0i64;
    v83 = &data::get_block_by_name;
    if ( !*(a6 + 0xE) )
      goto LABEL_94;
    v89 = v75 + 1;
    v90 = *(a6 + 0x18);
    v73 = *v90;
    v91 = *(v90 + 2) - 8 * v88;
    v92 = 0;
    while ( (*(*(v73 + v91) + 8i64) & 0x3FFFFFFF) != v89 )
    {
      ++v92;
      v91 += 8i64;
      if ( v88 == v92 )
        goto LABEL_94;
    }
    v269 = v92 < v88;
    v94 = v311;
    if ( v269 )
      v82 = *(v73 + v91);
    else
      v82 = 0i64;
  }
  else
  {
    v73 = *(a6 + 0xE);
    v82 = 0i64;
    v83 = &data::get_block_by_name;
    if ( v81 < v81 + v73 )
    {
      v84 = v75 + 1;
      v85 = *a6 + *(*a6 + 0x5Ci64) + 0x90i64;
      v86 = 0;
      while ( 1 )
      {
        v87 = 0x20i64 * (v81 + v86);
        if ( (*(v85 + v87 + 8) & 0x3FFFFFFF) == v84 )
          break;
        if ( v73 == ++v86 )
          goto LABEL_94;
      }
      v93 = v87 + v85;
      v82 = 0i64;
      if ( v86 < v73 )
        v82 = v93;
    }
LABEL_94:
    v94 = v311;
  }
  if ( v82 )
    v83 = v82;
  v308 = 0i64;
  v310 = 0i64;
  v307 = v94;
  LODWORD(v306) = 1;
  v309 = off_4B678C8;
  ctor_vprintf(&v308, v73, "gameData/units/%s.blk", &v306, 1);
  if ( v310 )
    v95 = v308;
  else
    v95 = &szFile;
  *(Unit + 0x280) = 0xBF800000BF800000ui64;
  v96 = sub_8303F0(v94, v95);
  *(Unit + 0x2280) = v96;
  *(Unit + 0x1120) = v96;
  sub_327900(Unit);
  dword_4A79158 = 0x41C64E6D * dword_4A79158 + 0x3039;
  *(Unit + 0x2968) = (HIWORD(dword_4A79158) & 0x7FFF) * *&dword_44A0140;
  v97 = *(Unit + 0x1E88);
  v98 = *(Unit + 0x1E98) == 0i64;
  v311 = v83;
  if ( v98 )
  {
    if ( !v97 || (v97 = (*(**(Unit + 0x1E90) + 0x38i64))(*(Unit + 0x1E90), v97, 0x24i64)) == 0i64 )
    {
      v97 = (*(**(Unit + 0x1E90) + 0x18i64))(*(Unit + 0x1E90), 0x24i64);
      memmove(v97, *(Unit + 0x1E88), 0x24i64 * *(Unit + 0x1E98));
      if ( *(Unit + 0x1E88) )
        (*(**(Unit + 0x1E90) + 0x40i64))(*(Unit + 0x1E90));
    }
    *(Unit + 0x1E88) = v97;
    *(Unit + 0x1E9C) = 1;
  }
  v99 = (Unit + 0x1D40);
  v100 = (Unit + 0x1D64);
  v317 = Unit + 0x1DB8;
  v318 = Unit + 0x1DC4;
  v319 = Unit + 0x1DD0;
  v320 = Unit + 0x1DDC;
  *(Unit + 0x1E98) = 1;
  v97[1] = 0i64;
  *v97 = 0i64;
  *(v97 + 8) = 0;
  v321 = Unit + 0x1DE8;
  *(Unit + 0x2FA4) = 0i64;
  *(Unit + 0x2FB2) = 0i64;
  v322 = (Unit + 0x1DF4);
  v316 = Unit + 0x1E00;
  v313 = (Unit + 0x1E0C);
  v314 = Unit + 0x1E18;
  v323 = Unit + 0x1E24;
  v324 = Unit + 0x1E30;
  v325 = Unit + 0x1E3C;
  v101 = Unit + 0x1E60;
  v312 = Unit + 0x1E54;
  if ( damage_model_parts )
  {
    v326 = Unit + 0x1D4C;
    v327 = Unit + 0x1D58;
    v328 = Unit + 0x1D70;
    v329 = Unit + 0x1D7C;
    v330 = Unit + 0x1D88;
    v331 = Unit + 0x1D94;
    v332 = Unit + 0x1DA0;
    v333 = Unit + 0x1DAC;
    v334 = Unit + 0x1E48;
    v315 = Unit + 0x1E60;
    v102 = damage_model_parts + 0xA0;
    v103 = data::get_name_id("body", 4ui64);
    v104 = data::get_name_id(v102, "body", 4i64, v103);
    if ( v104 < 0 )
    {
      v307 = "body";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v105 = damage_model_parts;
      v106 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v105 = damage_model_parts;
      v106 = *(damage_model_parts + 0x1E) + 0xCi64 * v104;
    }
    *(Unit + 0x1D48) = *(v106 + 8);
    *v99 = *v106;
    v146 = data::get_name_id("engine", 6ui64);
    v147 = data::get_name_id(v105 + 0xA0, "engine", 6i64, v146);
    v148 = v322;
    v149 = v326;
    if ( v147 < 0 )
    {
      v307 = "engine";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v150 = damage_model_parts;
      v151 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v150 = damage_model_parts;
      v151 = *(damage_model_parts + 0x1E) + 0xCi64 * v147;
    }
    *(v149 + 8) = *(v151 + 8);
    *v149 = *v151;
    v152 = data::get_name_id("fuel", 4ui64);
    v153 = data::get_name_id(v150 + 0xA0, "fuel", 4i64, v152);
    if ( v153 < 0 )
    {
      v307 = "fuel";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v154 = damage_model_parts;
      v155 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v154 = damage_model_parts;
      v155 = *(damage_model_parts + 0x1E) + 0xCi64 * v153;
    }
    v145 = v311;
    v156 = v327;
    *(v327 + 8) = *(v155 + 8);
    *v156 = *v155;
    v157 = data::get_name_id("transmission", 0xCui64);
    v158 = data::get_name_id(v154 + 0xA0, "transmission", 0xCi64, v157);
    if ( v158 < 0 )
    {
      v307 = "transmission";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v159 = damage_model_parts;
      v160 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v159 = damage_model_parts;
      v160 = *(damage_model_parts + 0x1E) + 0xCi64 * v158;
    }
    *(Unit + 0x1D6C) = *(v160 + 8);
    *v100 = *v160;
    v161 = data::get_name_id("shaft", 5ui64);
    v162 = data::get_name_id(v159 + 0xA0, "shaft", 5i64, v161);
    if ( v162 < 0 )
    {
      v307 = "shaft";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v163 = damage_model_parts;
      v164 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v163 = damage_model_parts;
      v164 = *(damage_model_parts + 0x1E) + 0xCi64 * v162;
    }
    v165 = v313;
    v166 = v328;
    *(v328 + 8) = *(v164 + 8);
    *v166 = *v164;
    v167 = data::get_name_id("radiator", 8ui64);
    v168 = data::get_name_id(v163 + 0xA0, "radiator", 8i64, v167);
    if ( v168 < 0 )
    {
      v307 = "radiator";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v169 = damage_model_parts;
      v170 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v169 = damage_model_parts;
      v170 = *(damage_model_parts + 0x1E) + 0xCi64 * v168;
    }
    v171 = v329;
    *(v329 + 8) = *(v170 + 8);
    *v171 = *v170;
    v172 = data::get_name_id("gun", 3ui64);
    v173 = data::get_name_id(v169 + 0xA0, "gun", 3i64, v172);
    if ( v173 < 0 )
    {
      v307 = "gun";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v174 = damage_model_parts;
      v175 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v174 = damage_model_parts;
      v175 = *(damage_model_parts + 0x1E) + 0xCi64 * v173;
    }
    v176 = v330;
    *(v330 + 8) = *(v175 + 8);
    *v176 = *v175;
    v177 = data::get_name_id("gun_barrel", 0xAui64);
    v178 = data::get_name_id(v174 + 0xA0, "gun_barrel", 0xAi64, v177);
    if ( v178 < 0 )
    {
      v307 = "gun_barrel";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v179 = damage_model_parts;
      v180 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v179 = damage_model_parts;
      v180 = *(damage_model_parts + 0x1E) + 0xCi64 * v178;
    }
    v181 = v331;
    *(v331 + 8) = *(v180 + 8);
    *v181 = *v180;
    v182 = data::get_name_id("torpedo_tube", 0xCui64);
    v183 = data::get_name_id(v179 + 0xA0, "torpedo_tube", 0xCi64, v182);
    if ( v183 < 0 )
    {
      v307 = "torpedo_tube";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v184 = damage_model_parts;
      v185 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v184 = damage_model_parts;
      v185 = *(damage_model_parts + 0x1E) + 0xCi64 * v183;
    }
    v186 = v332;
    *(v332 + 8) = *(v185 + 8);
    *v186 = *v185;
    v187 = data::get_name_id("suspension", 0xAui64);
    v188 = data::get_name_id(v184 + 0xA0, "suspension", 0xAi64, v187);
    if ( v188 < 0 )
    {
      v307 = "suspension";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v189 = damage_model_parts;
      v190 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v189 = damage_model_parts;
      v190 = *(damage_model_parts + 0x1E) + 0xCi64 * v188;
    }
    v191 = v333;
    *(v333 + 8) = *(v190 + 8);
    *v191 = *v190;
    v192 = data::get_name_id("wheel", 5ui64);
    v193 = data::get_name_id(v189 + 0xA0, "wheel", 5i64, v192);
    if ( v193 < 0 )
    {
      v307 = "wheel";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v194 = damage_model_parts;
      v195 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v194 = damage_model_parts;
      v195 = *(damage_model_parts + 0x1E) + 0xCi64 * v193;
    }
    v196 = v317;
    *(v317 + 8) = *(v195 + 8);
    *v196 = *v195;
    v197 = data::get_name_id("track", 5ui64);
    v198 = data::get_name_id(v194 + 0xA0, "track", 5i64, v197);
    if ( v198 < 0 )
    {
      v307 = "track";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v199 = damage_model_parts;
      v200 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v199 = damage_model_parts;
      v200 = *(damage_model_parts + 0x1E) + 0xCi64 * v198;
    }
    v201 = v318;
    *(v318 + 8) = *(v200 + 8);
    *v201 = *v200;
    v202 = data::get_name_id("track_left", 0xAui64);
    v203 = data::get_name_id(v199 + 0xA0, "track_left", 0xAi64, v202);
    if ( v203 < 0 )
    {
      v307 = "track_left";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v204 = damage_model_parts;
      v205 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v204 = damage_model_parts;
      v205 = *(damage_model_parts + 0x1E) + 0xCi64 * v203;
    }
    v206 = v319;
    *(v319 + 8) = *(v205 + 8);
    *v206 = *v205;
    v207 = data::get_name_id("track_right", 0xBui64);
    v208 = data::get_name_id(v204 + 0xA0, "track_right", 0xBi64, v207);
    if ( v208 < 0 )
    {
      v307 = "track_right";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v209 = damage_model_parts;
      v210 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v209 = damage_model_parts;
      v210 = *(damage_model_parts + 0x1E) + 0xCi64 * v208;
    }
    v211 = v320;
    *(v320 + 8) = *(v210 + 8);
    *v211 = *v210;
    v212 = data::get_name_id("drive_turret_h", 0xEui64);
    v213 = data::get_name_id(v209 + 0xA0, "drive_turret_h", 0xEi64, v212);
    if ( v213 < 0 )
    {
      v307 = "drive_turret_h";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v214 = damage_model_parts;
      v215 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v214 = damage_model_parts;
      v215 = *(damage_model_parts + 0x1E) + 0xCi64 * v213;
    }
    v216 = v321;
    *(v321 + 8) = *(v215 + 8);
    *v216 = *v215;
    v217 = data::get_name_id("drive_turret_v", 0xEui64);
    v218 = data::get_name_id(v214 + 0xA0, "drive_turret_v", 0xEi64, v217);
    if ( v218 < 0 )
    {
      v307 = "drive_turret_v";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v219 = damage_model_parts;
      v220 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v219 = damage_model_parts;
      v220 = *(damage_model_parts + 0x1E) + 0xCi64 * v218;
    }
    *(v148 + 2) = *(v220 + 8);
    *v148 = *v220;
    v221 = data::get_name_id("steering", 8ui64);
    v222 = data::get_name_id(v219 + 0xA0, "steering", 8i64, v221);
    if ( v222 < 0 )
    {
      v307 = "steering";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v223 = damage_model_parts;
      v224 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v223 = damage_model_parts;
      v224 = *(damage_model_parts + 0x1E) + 0xCi64 * v222;
    }
    v225 = v316;
    *(v316 + 8) = *(v224 + 8);
    *v225 = *v224;
    v226 = data::get_name_id("bridge", 6ui64);
    v227 = data::get_name_id(v223 + 0xA0, "bridge", 6i64, v226);
    if ( v227 < 0 )
    {
      v307 = "bridge";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v228 = damage_model_parts;
      v229 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v228 = damage_model_parts;
      v229 = *(damage_model_parts + 0x1E) + 0xCi64 * v227;
    }
    *(v165 + 2) = *(v229 + 8);
    *v165 = *v229;
    v230 = data::get_name_id("crew", 4ui64);
    v231 = data::get_name_id(v228 + 0xA0, "crew", 4i64, v230);
    if ( v231 < 0 )
    {
      v307 = "crew";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v232 = damage_model_parts;
      v233 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v232 = damage_model_parts;
      v233 = *(damage_model_parts + 0x1E) + 0xCi64 * v231;
    }
    v234 = v314;
    *(v314 + 8) = *(v233 + 8);
    *v234 = *v233;
    v235 = data::get_name_id("commander", 9ui64);
    v236 = data::get_name_id(v232 + 0xA0, "commander", 9i64, v235);
    if ( v236 < 0 )
    {
      v307 = "commander";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v237 = damage_model_parts;
      v238 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v237 = damage_model_parts;
      v238 = *(damage_model_parts + 0x1E) + 0xCi64 * v236;
    }
    v239 = v323;
    *(v323 + 8) = *(v238 + 8);
    *v239 = *v238;
    v240 = data::get_name_id("driver", 6ui64);
    v241 = data::get_name_id(v237 + 0xA0, "driver", 6i64, v240);
    if ( v241 < 0 )
    {
      v307 = "driver";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v242 = damage_model_parts;
      v243 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v242 = damage_model_parts;
      v243 = *(damage_model_parts + 0x1E) + 0xCi64 * v241;
    }
    v244 = v324;
    *(v324 + 8) = *(v243 + 8);
    *v244 = *v243;
    v245 = data::get_name_id("gunner", 6ui64);
    v246 = data::get_name_id(v242 + 0xA0, "gunner", 6i64, v245);
    if ( v246 < 0 )
    {
      v307 = "gunner";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v247 = damage_model_parts;
      v248 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v247 = damage_model_parts;
      v248 = *(damage_model_parts + 0x1E) + 0xCi64 * v246;
    }
    v249 = v325;
    *(v325 + 8) = *(v248 + 8);
    *v249 = *v248;
    v250 = data::get_name_id("loader", 6ui64);
    v251 = data::get_name_id(v247 + 0xA0, "loader", 6i64, v250);
    if ( v251 < 0 )
    {
      v307 = "loader";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v252 = damage_model_parts;
      v253 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v252 = damage_model_parts;
      v253 = *(damage_model_parts + 0x1E) + 0xCi64 * v251;
    }
    v254 = v334;
    *(v334 + 8) = *(v253 + 8);
    *v254 = *v253;
    v255 = data::get_name_id("machinegunner", 0xDui64);
    v256 = data::get_name_id(v252 + 0xA0, "machinegunner", 0xDi64, v255);
    if ( v256 < 0 )
    {
      v307 = "machinegunner";
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v257 = damage_model_parts;
      v258 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v257 = damage_model_parts;
      v258 = *(damage_model_parts + 0x1E) + 0xCi64 * v256;
    }
    v259 = v312;
    *(v312 + 8) = *(v258 + 8);
    *v259 = *v258;
    v260 = data::get_name_id(&qword_495B4C2, 0x12ui64);
    v261 = data::get_name_id(v257 + 0xA0, &qword_495B4C2, 0x12i64, v260);
    if ( v261 < 0 )
    {
      v307 = &qword_495B4C2;
      LODWORD(v306) = 1;
      logmessage_fmt(1u, "global damage part list: unknown kind of part %s", &v306, 1);
      v144 = *(damage_model_parts + 0x1E);
    }
    else
    {
      v144 = *(damage_model_parts + 0x1E) + 0xCi64 * v261;
    }
    v101 = v315;
  }
  else
  {
    v107 = qword_F0;
    *(Unit + 0x1D48) = *(qword_F0 + 8);
    *v99 = *v107;
    v108 = qword_F0;
    *(Unit + 0x1D54) = *(qword_F0 + 8);
    *(Unit + 0x1D4C) = *v108;
    v109 = qword_F0;
    *(Unit + 0x1D60) = *(qword_F0 + 8);
    *(Unit + 0x1D58) = *v109;
    v110 = qword_F0;
    *(Unit + 0x1D6C) = *(qword_F0 + 8);
    *v100 = *v110;
    v111 = qword_F0;
    *(Unit + 0x1D78) = *(qword_F0 + 8);
    *(Unit + 0x1D70) = *v111;
    v112 = qword_F0;
    *(Unit + 0x1D7C) = *qword_F0;
    *(Unit + 0x1D84) = *(v112 + 8);
    v113 = qword_F0;
    *(Unit + 0x1D88) = *qword_F0;
    *(Unit + 0x1D90) = *(v113 + 8);
    v114 = qword_F0;
    *(Unit + 0x1D94) = *qword_F0;
    *(Unit + 0x1D9C) = *(v114 + 8);
    v115 = qword_F0;
    *(Unit + 0x1DA8) = *(qword_F0 + 8);
    *(Unit + 0x1DA0) = *v115;
    v116 = qword_F0;
    *(Unit + 0x1DAC) = *qword_F0;
    *(Unit + 0x1DB4) = *(v116 + 8);
    v117 = qword_F0;
    v118 = v317;
    *v317 = *qword_F0;
    *(v118 + 8) = *(v117 + 8);
    v119 = qword_F0;
    v120 = v318;
    *v318 = *qword_F0;
    *(v120 + 8) = *(v119 + 8);
    v121 = qword_F0;
    v122 = v319;
    *v319 = *qword_F0;
    *(v122 + 8) = *(v121 + 8);
    v123 = qword_F0;
    v124 = v320;
    *v320 = *qword_F0;
    *(v124 + 8) = *(v123 + 8);
    v125 = qword_F0;
    v126 = v321;
    *v321 = *qword_F0;
    *(v126 + 8) = *(v125 + 8);
    v127 = qword_F0;
    v128 = v322;
    *v322 = *qword_F0;
    *(v128 + 2) = *(v127 + 8);
    v129 = qword_F0;
    v130 = v316;
    *v316 = *qword_F0;
    *(v130 + 8) = *(v129 + 8);
    v131 = qword_F0;
    v132 = v313;
    *v313 = *qword_F0;
    *(v132 + 2) = *(v131 + 8);
    v133 = qword_F0;
    v134 = v314;
    *v314 = *qword_F0;
    *(v134 + 8) = *(v133 + 8);
    v135 = qword_F0;
    v136 = v323;
    *v323 = *qword_F0;
    *(v136 + 8) = *(v135 + 8);
    v137 = qword_F0;
    v138 = v324;
    *v324 = *qword_F0;
    *(v138 + 8) = *(v137 + 8);
    v139 = qword_F0;
    v140 = v325;
    *v325 = *qword_F0;
    *(v140 + 8) = *(v139 + 8);
    v141 = qword_F0;
    *(Unit + 0x1E48) = *qword_F0;
    *(Unit + 0x1E50) = *(v141 + 8);
    v142 = qword_F0;
    v143 = v312;
    *(v312 + 8) = *(qword_F0 + 8);
    *v143 = *v142;
    v144 = qword_F0;
    v145 = v311;
  }
  *(v101 + 8) = *(v144 + 8);
  *v101 = *v144;
  **(Unit + 0x1E88) = *(Unit + 0x1D4C);
  *(*(Unit + 0x1E88) + 0xCi64) = *(Unit + 0x1D64);
  *(*(Unit + 0x1E88) + 0x18i64) = *(Unit + 0x1D70);
  *(Unit + 0x1E6C) = *(Unit + 0x1E3C);
  *(Unit + 0x1FA8) = 0i64;
  *(Unit + 0x1F8C) = xmmword_44C38F0;
  *(Unit + 0x1F9C) = 0xBF800000BF800000ui64;
  *(Unit + 0x1FA4) = 0xFFFFFFFF;
  *(Unit + 0x1FB0) = 0xBF800000BF800000ui64;
  *(Unit + 0x2110) = *(Unit + 0x10B8) != 0i64;
  v306 = 0i64;
  v262 = data::get_str(v145, "name", &v306);
  if ( v262 )
  {
    v263 = v262;
    LODWORD(v306) = 1;
    if ( data::set_int(v145, "count", &v306) == 1 )
      goto LABEL_207;
    v264 = world_instance;
    v265 = *(world_instance + 0x428);
    v266 = *v263;
    if ( *v263 )
    {
      v267 = (v263 + 1);
      v268 = 0x811C9DC5;
      do
      {
        v268 = v266 ^ (0x1000193 * v268);
        v266 = *v267++;
      }
      while ( v266 );
    }
    else
    {
      v268 = 0x811C9DC5;
    }
    v312 = *(world_instance + 0x428);
    v270 = v268 & v265;
    v271 = *(world_instance + 0x420);
    if ( *(v271 + 0x18 * v270) < 0 )
    {
LABEL_203:
      v276 = (v312 + *(v264 + 0x42D));
      v272 = v271 + 0x18 * v276;
    }
    else
    {
      v272 = v271 + 0x18 * v270;
      v273 = 0;
      while ( 1 )
      {
        v274 = *(v272 + 8);
        if ( !v274 )
          v274 = &szFile;
        if ( v263 == v274 || !strcmp(v263, v274) )
          break;
        v275 = *(v272 + 0x18) < ++v273;
        v272 += 0x18i64;
        if ( v275 )
          goto LABEL_203;
      }
      v276 = (v312 + *(v264 + 0x42D));
    }
    v145 = v311;
    if ( v272 == v271 + 0x18 * v276 || !*(v272 + 0x10) )
LABEL_207:
      sub_324B70(Unit, v263);
  }
  sub_342030(Unit + 0x50);
  if ( qword_4B50090 <= a7 )
    v277 = 0i64;
  else
    v277 = *(qword_4B50080 + a7);
  LOBYTE(v306) = 0;
  if ( data::get_bool(v145, "isDelayed", &v306)
    || v277
    && (dword_4B1C814 & 4) != 0
    && *(v277 + 0x264) == 0xFFFFFFFF
    && *(v277 + 0x268) == 0xFFFF
    && (*(v277 + 0x81) & 2) == 0
    && *(v277 + 0x1B8) >= 0 )
  {
    v278 = (Unit + 0x1058);
    if ( (*(Unit + 0x1058) & 4) == 0 )
    {
      v279 = *v278;
LABEL_222:
      v281 = v279 | 4;
      if ( v279 != (v279 | 4) )
      {
        *v278 = v281;
        if ( ((v281 ^ v279) & 0x38C5C2CE) != 0 )
          goto LABEL_224;
      }
LABEL_227:
      (*(*Unit + 0x340i64))(Unit);
    }
  }
  else
  {
    v278 = (Unit + 0x1058);
    v280 = *(Unit + 0x1058);
    if ( (v280 & 4) >> 2 == ((v280 & 4) == 0) )
    {
      v279 = *v278;
      if ( (v280 & 4) != 0 )
        goto LABEL_222;
      if ( v279 == (v279 & 0xFFFFFFFB) )
        goto LABEL_227;
      *v278 = v279 & 0xFFFFFFFB;
      if ( (v279 & 4) == 0 )
        goto LABEL_227;
LABEL_224:
      on_reflection_var_changed(Unit + 0x1030, Unit, Unit + 0x1050);
      goto LABEL_227;
    }
  }
  LOBYTE(v306) = 1;
  v282 = data::get_bool(v145, "shouldDrawSmallIndForMissTarget", &v306);
  v283 = *v278;
  if ( v282 )
  {
    v284 = v283 | 0x400000;
    if ( v283 == (v283 | 0x400000) )
      goto LABEL_235;
    *v278 = v284;
    if ( ((v284 ^ v283) & 0x38C5C2CE) == 0 )
      goto LABEL_235;
LABEL_234:
    on_reflection_var_changed(Unit + 0x1030, Unit, Unit + 0x1050);
    goto LABEL_235;
  }
  if ( v283 != (v283 & 0xFFBFFFFF) )
  {
    *v278 = v283 & 0xFFBFFFFF;
    if ( (v283 & 0x400000) != 0 )
      goto LABEL_234;
  }
LABEL_235:
  v306 = 0i64;
  v285 = data::get_str(v145, "uniqueName", &v306);
  sub_326CF0(Unit, v285);
  v306 = 0i64;
  v286 = data::get_str(v145, "attack_type", &v306);
  if ( v286 )
  {
    if ( *v286 )
    {
      v287 = sub_CD5220(v286);
      v288 = *(Unit + 0x10B0);
      if ( v288 <= 0xF )
      {
        v289 = *(&off_44CF9E0 + 4 * v287 + 3);
        v290 = 0x897E;
        if ( _bittest(&v290, v288) )
        {
          if ( v287 == 8 )
          {
            *(Unit + 0x1F45) = 1;
          }
          else if ( v287 == 7 )
          {
            *(Unit + 0x1F44) = 1;
          }
          *(Unit + 0x1F54) = v289;
        }
        else if ( v288 == 7 )
        {
          v303 = v289 - 1;
          if ( !v287 )
            v303 = 0;
          *v314 = v303;
        }
      }
    }
  }
  LOBYTE(v306) = 0;
  *(Unit + 0x1F8A) = data::get_bool(v145, "use_search_radar", &v306);
  *(Unit + 0x1EFC) = 0i64;
  *(Unit + 0x1F04) = 0;
  v291 = *(Unit + 0x2420);
  if ( v291 )
  {
    _InterlockedAdd(&dword_4B6788C, -((j__msize(*(Unit + 0x2420)) + 0xF) >> 4));
    _InterlockedDecrement(&dword_4B67890);
    free(v291);
  }
  v292 = (*(*off_4B678C0 + 0x18i64))(off_4B678C0, 0xCi64);
  *(Unit + 0x2420) = v292;
  *v292 = 0i64;
  *(v292 + 8) = 0;
  *(Unit + 0x2428) = 3;
  *(Unit + 0x2430) = 0x3E4CCCCE;
  v293 = 0i64;
  do
    *(*(Unit + 0x2420) + 4 * v293++) = 0x3D888889;
  while ( v293 < *(Unit + 0x2428) );
  *(Unit + 0x242C) = 0;
  *(Unit + 0x2508) = 0i64;
  memset((Unit + 0x22D0), 0, 0x150ui64);
  *(Unit + 0x1F38) = 0x3F800000i64;
  *(Unit + 0x29C0) = 0i64;
  *(Unit + 0x1130) = 0x3F800000;
  *(Unit + 0x1EF8) = 1;
  *(Unit + 0x1FBC) = 0;
  *(Unit + 0x2AC) = 0xFFFFFFFF;
  *(Unit + 0x2C0) = 0xFFFFFFFF00000000ui64;
  *(Unit + 0x2C8) = 0i64;
  *(Unit + 0x2D8) = 0x10;
  *(Unit + 0x2DC) = 0i64;
  *(Unit + 0x2E4) = 0;
  *(Unit + 0x308) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x304) = 0xFFFF;
  *(Unit + 0x310) = 0;
  *(Unit + 0x324) = 0xFFFF;
  *(Unit + 0x2EC) = v51;
  *(Unit + 0x32C) = 0xFFFFFFFF;
  *(Unit + 0x328) = 0;
  *(Unit + 0x314) = 0i64;
  *(Unit + 0x2FC) = 0x7FFFFFFFFFFFFFFFi64;
  *(Unit + 0x2E8) = 0;
  *(Unit + 0x330) = 0i64;
  *(Unit + 0x338) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x344) = 0;
  *(Unit + 0x340) = 0xFFFFFFFF;
  *(Unit + 0x1EA9) = 0;
  *(Unit + 0x2951) = 0;
  *(Unit + 0x1EB0) = 0i64;
  *(Unit + 0x296C) = 0xFFFFFFFF;
  *(Unit + 0x2F8E) = *(Unit + 0x10B0) != 8;
  LOBYTE(v306) = 0;
  if ( *(Unit + 0x1EE8) )
  {
    on_reflection_var_changed(v335, Unit, &v306);
    *(Unit + 0x1EE8) = v306;
  }
  v294 = j__malloc_base(0x50ui64);
  if ( !v294 )
  {
    while ( off_4B678A0 && off_4B678A0(0x50i64) )
    {
      v295 = j__malloc_base(0x50ui64);
      if ( v295 )
      {
        v294 = v295;
        goto LABEL_255;
      }
    }
    v307 = byte_40 + 0x10;
    LODWORD(v306) = 2;
    v305 = &v306;
LABEL_278:
    LOBYTE(v53) = 1;
    log_err("..\\..\\prog\\engine2\\memory\\dagmem.cpp", 0x345, v53, "Not enough memory to alloc %llu bytes", v305, 1);
  }
LABEL_255:
  _InterlockedAdd(&dword_4B6788C, (j__msize(v294) + 0xF) >> 4);
  _InterlockedIncrement(&dword_4B67890);
  v294[3] = 0i64;
  v294[2] = 0i64;
  v294[1] = 0i64;
  *v294 = 0i64;
  *(v294 + 8) = 0i64;
  *(v294 + 9) = Unit;
  *(Unit + 0x2A20) = v294;
  *(Unit + 0x20F4) = *(Unit + 0x9C0);
  *(Unit + 0x20FC) = *(Unit + 0x9C8);
  *(Unit + 0x2100) = *(Unit + 0x99C);
  *(Unit + 0x2108) = *(Unit + 0x9A4);
  *(Unit + 0x24E0) = 0i64;
  sub_834D20(Unit);
  sub_31BF00(Unit);
  *(Unit + 0x2928) = 0i64;
  v296 = world_instance + 0xD0;
  v297 = "expForAssistTime";
  if ( *(Unit + 0x10B0) == 5 )
    v297 = "expForAssistTimeShip";
  LODWORD(v306) = 0;
  v298 = data::set_real(world_instance + 0xD0, v297, &v306);
  *(Unit + 0x25D8) = LODWORD(v298);
  v299 = "expForAssistDmg";
  if ( *(Unit + 0x10B0) == 5 )
    v299 = "expForAssistDmgShip";
  LODWORD(v306) = 0;
  v300 = data::set_real(v296, v299, &v306);
  *(Unit + 0x25DC) = LODWORD(v300);
  *(Unit + 0x29E8) = Unit;
  LOBYTE(v306) = 0;
  if ( data::get_bool(a6, "cannotMove", &v306) )
  {
    v301 = *(Unit + 0x1080);
    *(Unit + 0x1080) = v301 | 0x4000000;
    if ( v301 != (v301 | 0x4000000) )
      on_reflection_var_changed(Unit + 0x1060, Unit, Unit + 0x1080);
  }
  if ( v308 )
    (*(*v309 + 0x40i64))(v309);
  return Unit;
}
