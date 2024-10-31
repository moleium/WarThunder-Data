char __fastcall unit_moveto(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  const char *v4; // r15
  __int64 *v5; // r13
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rbp
  unsigned int v14; // edi
  unsigned int v15; // esi
  __int64 v16; // rax
  int v17; // ebx
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // esi
  __int64 Unit; // rbx
  unsigned int v22; // eax
  unsigned int v23; // r8d
  unsigned int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rbp
  unsigned int v28; // eax
  __int64 v29; // rax
  const char *v30; // rsi
  const char **v31; // rbx
  __int64 v32; // rdi
  char (__stdcall *v33)(); // rsi
  __int64 v34; // rbp
  unsigned int v35; // edi
  unsigned int v36; // r14d
  __int64 v37; // rax
  int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // edi
  unsigned int v46; // eax
  __int64 v47; // rbp
  unsigned int v48; // edi
  unsigned int v49; // esi
  __int64 v50; // rax
  int v51; // ebx
  int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // esi
  int v55; // ecx
  char v56; // bl
  int v57; // eax
  __m128 v58; // xmm0
  const char *v59; // rax
  unsigned __int8 v60; // al
  __int64 v61; // r13
  __int64 v62; // rdi
  __int64 v63; // rbp
  float *v64; // rdi
  float v65; // xmm3_4
  float v66; // xmm2_4
  char v67; // si
  char v68; // al
  const char *v69; // rax
  const char *v70; // r14
  unsigned __int8 v71; // al
  __int64 v72; // rdi
  __int64 v73; // rbp
  __int64 v74; // rbx
  __int64 v75; // rcx
  unsigned __int8 *v76; // rbp
  unsigned int v77; // edx
  __int64 v78; // rax
  unsigned __int64 v79; // rsi
  __int64 v80; // rbx
  __int64 v81; // rdi
  const char *v82; // rcx
  __int64 v83; // r14
  __int64 v84; // rax
  float *v85; // rcx
  float v86; // xmm10_4
  const char *v87; // rax
  const char *v88; // rsi
  int v89; // eax
  const char *v90; // rax
  char **v91; // rdi
  const char *v92; // rsi
  __int128 *v93; // rdx
  float v94; // xmm15_4
  __m128 v95; // xmm13
  __int64 v96; // rdi
  __int128 v97; // xmm12
  __int128 v98; // xmm7
  __int128 v99; // xmm9
  float v100; // xmm11_4
  float v101; // xmm13_4
  __int64 v102; // rdx
  __int128 v103; // xmm8
  float v104; // xmm2_4
  float v105; // xmm1_4
  float v106; // xmm14_4
  float v107; // xmm5_4
  float v108; // xmm6_4
  float v109; // xmm4_4
  float *v110; // rbp
  float v111; // xmm10_4
  float v112; // xmm0_4
  float v113; // xmm9_4
  float v114; // xmm12_4
  float v115; // xmm7_4
  float v116; // xmm15_4
  float v117; // xmm11_4
  float v118; // xmm1_4
  float v119; // xmm0_4
  float v120; // xmm7_4
  __m128 v121; // xmm3
  float v122; // xmm6_4
  float v123; // xmm1_4
  __m128 v124; // xmm4
  float v125; // xmm1_4
  float v126; // xmm11_4
  float v127; // xmm14_4
  __m128 v128; // xmm0
  __m128 v129; // xmm1
  int v130; // ebp
  int v131; // r9d
  unsigned __int64 v132; // rdx
  unsigned __int64 v133; // rax
  bool v134; // cc
  __m128 v135; // xmm0
  __m128 v136; // xmm5
  float v137; // xmm2_4
  __m128 v138; // xmm5
  __m128 v139; // xmm2
  __int128 v140; // xmm10
  __m128 v141; // xmm14
  unsigned __int64 v142; // r13
  __int64 v143; // rbx
  __int64 v144; // rax
  __int64 Unit_; // r12
  float XPosition; // xmm1_4
  float YPosition; // xmm2_4
  float ZPosition; // xmm0_4
  float v149; // xmm15_4
  __int128 v150; // xmm8
  __m128 v151; // xmm12
  __m128 v152; // xmm10
  __int128 v153; // xmm13
  __int128 v154; // xmm14
  float v155; // xmm9_4
  float v156; // xmm3_4
  float v157; // xmm4_4
  float v158; // xmm5_4
  float v159; // xmm2_4
  float v160; // xmm6_4
  float v161; // xmm7_4
  char v162; // bl
  float v163; // xmm3_4
  float v164; // xmm4_4
  int v165; // xmm6_4
  char v166; // bl
  char v167; // al
  unsigned int UnitType; // ecx
  int v169; // eax
  __int64 v170; // rax
  __int64 v171; // rsi
  float *v172; // rcx
  float v173; // xmm0_4
  _DWORD *v174; // rax
  __int64 v175; // rax
  __int64 v176; // rcx
  __int64 v177; // rcx
  float *v178; // rax
  float v179; // xmm0_4
  float v180; // xmm1_4
  char v181; // al
  float v182; // xmm1_4
  float v183; // xmm0_4
  float v184; // xmm0_4
  bool v185; // zf
  unsigned __int64 v186; // rax
  __int64 v187; // r14
  int v188; // ebp
  unsigned int v189; // esi
  __int64 v190; // rax
  int v191; // edi
  char v192; // bl
  int v193; // r8d
  int v194; // xmm0_4
  unsigned __int16 v195; // cx
  __int64 _Unit; // r15
  bool v197; // si
  __int64 v198; // rax
  __int64 v199; // rax
  char v200; // bl
  __int64 v201; // rbx
  const char *v202; // rdi
  __int64 v203; // rax
  __int64 v204; // rcx
  __int64 v205; // rcx
  __int64 v206; // rcx
  __int64 v207; // rax
  __int64 v208; // rcx
  __int64 v209; // rdx
  __int64 v210; // r14
  __int64 air_movement; // rdx
  __int64 v212; // rax
  __int64 _Unit_; // rbp
  __int64 v214; // rcx
  __int64 v215; // rax
  const char *v216; // rsi
  __int64 v217; // rax
  __int64 v218; // rcx
  __int64 *v219; // r14
  unsigned int v220; // esi
  __int64 *v221; // rax
  __int64 v222; // rdx
  __int64 v223; // rcx
  __int64 v224; // rax
  __int64 *v225; // rcx
  int v226; // eax
  int v227; // eax
  __int64 v228; // rax
  __int64 v229; // rcx
  bool v230; // dl
  __int64 v231; // r8
  _DWORD *v232; // rdx
  unsigned __int64 v233; // rdx
  float v234; // xmm0_4
  __int64 v235; // rax
  float *v236; // rax
  float v237; // xmm0_4
  int v238; // xmm1_4
  int v239; // xmm2_4
  __int64 v240; // rcx
  __int64 v241; // rcx
  int v242; // xmm0_4
  int v243; // xmm0_4
  int v244; // xmm0_4
  __int64 v245; // rbx
  __int64 v246; // rax
  __int64 v247; // rax
  float *v248; // rax
  float *v249; // rcx
  float *v250; // rbx
  float v251; // xmm1_4
  float v252; // xmm2_4
  float v253; // xmm3_4
  __int64 v254; // rcx
  unsigned int v255; // xmm0_4
  unsigned int v256; // xmm4_4
  float v257; // xmm1_4
  char v258; // bl
  float v259; // xmm0_4
  int v260; // xmm2_4
  char v261; // al
  __int64 *v262; // rsi
  __int64 v263; // rbx
  int v264; // ebp
  unsigned int v265; // esi
  __int64 v266; // rax
  int v267; // edi
  __int64 v268; // rax
  int v269; // eax
  __int64 v270; // rax
  __int64 v271; // rcx
  bool v272; // dl
  int v273; // xmm0_4
  __int64 v274; // rbx
  char *v275; // rax
  unsigned __int64 v276; // rdx
  char *v277; // rcx
  unsigned __int64 v278; // rdx
  __int64 *v279; // rsi
  __int64 v280; // rcx
  const char *v281; // rdi
  __int64 v282; // rax
  __int64 v283; // rcx
  char v284; // al
  __int64 v285; // rax
  unsigned int v286; // eax
  int v287; // ecx
  float *v288; // rax
  float v289; // xmm1_4
  float v290; // xmm0_4
  float v291; // xmm5_4
  float v292; // xmm4_4
  float v293; // xmm6_4
  float v294; // xmm3_4
  float v295; // xmm2_4
  float v296; // xmm4_4
  float v297; // xmm5_4
  float v298; // xmm3_4
  float v299; // xmm5_4
  float v300; // xmm1_4
  float v301; // xmm6_4
  __int64 v302; // rcx
  double v303; // xmm0_8
  float v304; // xmm6_4
  __int64 v305; // r9
  int v306; // eax
  __int64 v307; // rcx
  double v308; // xmm0_8
  float v309; // xmm15_4
  float v310; // xmm15_4
  char v311; // al
  float v312; // xmm0_4
  float v313; // xmm1_4
  float v314; // xmm1_4
  float v315; // xmm0_4
  float v316; // xmm1_4
  float v317; // xmm2_4
  float v318; // xmm2_4
  __int64 v319; // rbp
  char v320; // al
  float v321; // xmm0_4
  __m128 v322; // rt1
  __m128 v323; // xmm1
  __m128 v324; // xmm0
  int v325; // eax
  int v326; // eax
  __m128 v327; // rt1
  int v328; // eax
  int v329; // eax
  char v330; // al
  char v331; // bl
  __m128 v332; // xmm1
  __m128 v333; // xmm3
  __m128 v334; // rt1
  __m128 v335; // xmm2
  __m128 v336; // xmm0
  __int64 v337; // rcx
  unsigned __int8 *v338; // rbp
  unsigned int v339; // edx
  __int64 v340; // rax
  unsigned __int64 v341; // rsi
  __int64 v342; // rdi
  __int64 v343; // rbp
  const char *v344; // rcx
  __int64 v346; // rdi
  char v347; // si
  int v348; // [rsp+20h] [rbp-2F8h]
  int v349; // [rsp+20h] [rbp-2F8h]
  const char *v350; // [rsp+38h] [rbp-2E0h]
  __int64 v351; // [rsp+40h] [rbp-2D8h]
  char v352; // [rsp+7Eh] [rbp-29Ah]
  char v353; // [rsp+7Fh] [rbp-299h]
  unsigned __int64 v354; // [rsp+80h] [rbp-298h] BYREF
  float v355; // [rsp+88h] [rbp-290h]
  char v356; // [rsp+8Eh] [rbp-28Ah]
  char v357; // [rsp+8Fh] [rbp-289h]
  unsigned __int64 v358; // [rsp+90h] [rbp-288h] BYREF
  __int64 v359; // [rsp+98h] [rbp-280h]
  int v360; // [rsp+A0h] [rbp-278h]
  const char *v361; // [rsp+A8h] [rbp-270h]
  int v362; // [rsp+B0h] [rbp-268h]
  __int64 v363; // [rsp+B8h] [rbp-260h]
  int v364; // [rsp+C4h] [rbp-254h]
  int v365; // [rsp+C8h] [rbp-250h]
  int v366; // [rsp+CCh] [rbp-24Ch]
  __int64 *v367; // [rsp+D0h] [rbp-248h]
  float v368; // [rsp+DCh] [rbp-23Ch]
  float v369; // [rsp+E0h] [rbp-238h]
  char v370; // [rsp+E4h] [rbp-234h]
  char v371; // [rsp+E5h] [rbp-233h]
  unsigned __int8 v372; // [rsp+E6h] [rbp-232h]
  char v373; // [rsp+E7h] [rbp-231h]
  unsigned __int64 v374; // [rsp+E8h] [rbp-230h] BYREF
  float v375; // [rsp+F0h] [rbp-228h]
  float *v376; // [rsp+F8h] [rbp-220h]
  unsigned __int64 v377; // [rsp+100h] [rbp-218h] BYREF
  float v378; // [rsp+108h] [rbp-210h]
  _QWORD *v379; // [rsp+110h] [rbp-208h] BYREF
  __int64 v380; // [rsp+118h] [rbp-200h]
  __int64 v381; // [rsp+120h] [rbp-1F8h]
  int v382; // [rsp+128h] [rbp-1F0h]
  float v383; // [rsp+12Ch] [rbp-1ECh]
  _QWORD *v384; // [rsp+130h] [rbp-1E8h] BYREF
  __int64 v385; // [rsp+138h] [rbp-1E0h]
  __int64 v386; // [rsp+140h] [rbp-1D8h]
  const char *v387; // [rsp+148h] [rbp-1D0h]
  float v388; // [rsp+150h] [rbp-1C8h]
  int v389; // [rsp+154h] [rbp-1C4h]
  float v390; // [rsp+158h] [rbp-1C0h]
  float v391; // [rsp+15Ch] [rbp-1BCh]
  float v392; // [rsp+160h] [rbp-1B8h] BYREF
  float v393; // [rsp+164h] [rbp-1B4h]
  float v394; // [rsp+168h] [rbp-1B0h]
  float v395; // [rsp+16Ch] [rbp-1ACh]
  float v396; // [rsp+170h] [rbp-1A8h]
  unsigned __int32 v397; // [rsp+174h] [rbp-1A4h]
  float v398; // [rsp+178h] [rbp-1A0h]
  int v399; // [rsp+17Ch] [rbp-19Ch]
  int v400; // [rsp+180h] [rbp-198h]
  char v401[4]; // [rsp+184h] [rbp-194h] BYREF
  __int64 v402; // [rsp+188h] [rbp-190h] BYREF
  __int64 v403; // [rsp+190h] [rbp-188h]
  __int64 v404; // [rsp+198h] [rbp-180h]
  __m128 v405; // [rsp+1A0h] [rbp-178h]
  __m128 v406; // [rsp+1B0h] [rbp-168h]
  __int64 v407; // [rsp+1C8h] [rbp-150h]
  float *v408; // [rsp+1D0h] [rbp-148h]
  int v409[4]; // [rsp+1D8h] [rbp-140h] BYREF
  __int64 v410; // [rsp+1E8h] [rbp-130h]
  __m128 v411; // [rsp+1F0h] [rbp-128h]
  __m128 v412; // [rsp+200h] [rbp-118h]
  __m128 v413; // [rsp+210h] [rbp-108h]
  __m128 v414; // [rsp+220h] [rbp-F8h]

  v5 = a2;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( *(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
  {
    v8 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    v379 = 0i64;
    v380 = v8;
    v381 = 0i64;
LABEL_4:
    v384 = 0i64;
    v385 = v8;
    v386 = 0i64;
    goto LABEL_5;
  }
  _dyn_tls_on_demand_init(ThreadLocalStoragePointer, a2, a3, a4);
  v12 = *(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v8 = *(v12 + 0x160);
  v379 = 0i64;
  v380 = v8;
  v381 = 0i64;
  if ( *(v12 + 1) )
    goto LABEL_4;
  _dyn_tls_on_demand_init(v12, v9, v10, v11);
  v42 = *(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v8 = *(v42 + 0x160);
  v384 = 0i64;
  v385 = v8;
  v386 = 0i64;
  if ( !*(v42 + 1) )
  {
    _dyn_tls_on_demand_init(v42, v39, v40, v41);
    v8 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  }
LABEL_5:
  v402 = 0i64;
  v403 = v8;
  v404 = 0i64;
  v13 = *v5;
  v14 = 0xFFFFFFFF;
  if ( !*v5 )
    goto LABEL_15;
  v15 = data::get_name_id("object", 6ui64);
  v16 = *(v13 + 0x50);
  if ( v16 )
  {
    v17 = *(v16 + 0x20);
    if ( !*(v13 + 0x20) )
      goto LABEL_12;
  }
  else
  {
    v17 = 0;
    if ( !*(v13 + 0x20) )
      goto LABEL_12;
  }
  v18 = data::get_name_id(v13, "object", 6ui64, v15);
  if ( v18 >= 0 )
  {
    v19 = v17 + v18;
    goto LABEL_14;
  }
LABEL_12:
  if ( !v17 )
    goto LABEL_15;
  v19 = data::get_name_id(*(v13 + 0x50), "object", 6ui64, v15);
LABEL_14:
  v14 = v19;
LABEL_15:
  sub_CD2950(&v379, v5, v14, a1, is_alive, 0i64);
  if ( v381 )
  {
    v20 = 0;
    do
    {
      Unit = v379[v20];
      if ( Unit
        && (*(Unit + 0x10B0) || *(Unit + 0x10A8) <= 1u)
        && ((*(Unit + 0x1058) & 0x20000) == 0 || (*(*(Unit + 0x50) + 0x10i64))(Unit + 0x50))
        && *(Unit + 0x10A8) <= 1u )
      {
        v22 = v381;
      }
      else
      {
        v22 = v381 - 1;
        if ( v381 - 1 > v20 )
        {
          memmove(&v379[v20], &v379[v20 + 1], 8i64 * v381 - (8i64 * v20 + 8));
          v22 = v381 - 1;
        }
        --v20;
        LODWORD(v381) = v22;
      }
      ++v20;
    }
    while ( v20 < v22 );
  }
  sub_CD4300(&v379, a1, v5, "object");
  LOBYTE(v358) = 0;
  if ( data::get_bool(v5, "useForTriggerFiltered", &v358) )
  {
    v23 = v381;
    if ( v381 )
    {
      v24 = 0;
      do
      {
        if ( !*(a1 + 0xF8) )
          goto LABEL_39;
        v25 = *(a1 + 0xE8);
        v26 = 0i64;
        while ( *(v25 + v26) != v379[v24] )
        {
          v27 = v25 + v26 + 8;
          v26 += 8i64;
          if ( v27 >= v25 + 8 * *(a1 + 0xF8) )
            goto LABEL_39;
        }
        if ( (v26 & 0x400000000i64) != 0 )
        {
LABEL_39:
          v28 = v23 - 1;
          if ( v23 - 1 > v24 )
          {
            memmove(&v379[v24], &v379[v24 + 1], 8i64 * v23 - (8i64 * v24 + 8));
            v28 = v381 - 1;
          }
          --v24;
          LODWORD(v381) = v28;
          v23 = v28;
        }
        ++v24;
      }
      while ( v24 < v23 );
    }
  }
  if ( sub_D2B9A0(a1, v5, &v379, "object", unit_moveto) || !v381 )
    goto LABEL_553;
  v358 = "isAlive";
  v29 = data::get_str(v5, "target_type", &v358);
  if ( v29 )
  {
    v30 = v29;
    v31 = &off_44CF850;
    v32 = 0i64;
    while ( strcmp(*v31, v30) )
    {
      ++v32;
      ++v31;
      if ( v32 == 0x31 )
        goto LABEL_47;
    }
  }
  else
  {
LABEL_47:
    LODWORD(v32) = 0;
  }
  v33 = funcs_7FF717B84E97[v32];
  v34 = *v5;
  v35 = 0xFFFFFFFF;
  if ( *v5 )
  {
    v36 = data::get_name_id("target", 6ui64);
    v37 = *(v34 + 0x50);
    if ( v37 )
    {
      v38 = *(v37 + 0x20);
      if ( !*(v34 + 0x20) )
        goto LABEL_57;
    }
    else
    {
      v38 = 0;
      if ( !*(v34 + 0x20) )
        goto LABEL_57;
    }
    v43 = data::get_name_id(v34, "target", 6ui64, v36);
    if ( v43 >= 0 )
    {
      v44 = v38 + v43;
LABEL_59:
      v35 = v44;
      goto LABEL_60;
    }
LABEL_57:
    if ( !v38 )
      goto LABEL_60;
    v44 = data::get_name_id(*(v34 + 0x50), "target", 6ui64, v36);
    goto LABEL_59;
  }
LABEL_60:
  sub_CD2950(&v384, v5, v35, a1, v33, 0i64);
  if ( v386 )
  {
    v45 = 0;
    do
    {
      if ( v33() )
      {
        v46 = v386;
      }
      else
      {
        v46 = v386 - 1;
        if ( v386 - 1 > v45 )
        {
          memmove(&v384[v45], &v384[v45 + 1], 8i64 * v386 - (8i64 * v45 + 8));
          v46 = v386 - 1;
        }
        --v45;
        LODWORD(v386) = v46;
      }
      ++v45;
    }
    while ( v45 < v46 );
  }
  sub_CD4300(&v384, a1, v5, "target");
  v47 = *v5;
  v48 = 0xFFFFFFFF;
  if ( !*v5 )
    goto LABEL_78;
  v49 = data::get_name_id("lookat", 6ui64);
  v50 = *(v47 + 0x50);
  if ( v50 )
  {
    v51 = *(v50 + 0x20);
    if ( !*(v47 + 0x20) )
      goto LABEL_75;
  }
  else
  {
    v51 = 0;
    if ( !*(v47 + 0x20) )
      goto LABEL_75;
  }
  v52 = data::get_name_id(v47, "lookat", 6ui64, v49);
  if ( v52 >= 0 )
  {
    v53 = v51 + v52;
LABEL_77:
    v48 = v53;
    goto LABEL_78;
  }
LABEL_75:
  if ( v51 )
  {
    v53 = data::get_name_id(*(v47 + 0x50), "lookat", 6ui64, v49);
    goto LABEL_77;
  }
LABEL_78:
  sub_CD2950(&v402, v5, v48, a1, 0i64, 0i64);
  v54 = v386;
  while ( (--v54 & 0x80000000) == 0 )
  {
    if ( (*(v384[v54] + 0x1058i64) & 0x7000014) != 0 )
    {
      v55 = v386 - 1;
      if ( v386 - 1 > v54 )
      {
        memmove(&v384[v54], &v384[v54 + 1], 8i64 * v386 - (8i64 * v54 + 8));
        v55 = v386 - 1;
      }
      LODWORD(v386) = v55;
      if ( !v55 )
        goto LABEL_553;
    }
  }
  LODWORD(v358) = 0x41200000;
  v383 = data::set_real(v5, "waypointReachedDist", &v358);
  LODWORD(v358) = 0xBF800000;
  v398 = data::set_real(v5, "trackingTime", &v358);
  LOBYTE(v358) = 0;
  v56 = data::get_bool(v5, "follow_target", &v358);
  sub_145C630(v5, &v392, "teleportOffset", &xmmword_4514A60);
  v367 = v5;
  v356 = v56;
  if ( !v386 )
  {
    v358 = &szFile;
    v59 = data::get_str(v5, "target", &v358);
    if ( !v59 )
      goto LABEL_552;
    v4 = v59;
    v60 = *v59;
    if ( v60 == 0x40 )
    {
      if ( !*(a1 + 0x50) )
      {
        v60 = 0x40;
LABEL_543:
        v337 = *(game + 0x420);
        v338 = (v4 + 1);
        v339 = 0x811C9DC5;
        do
        {
          v339 = v60 ^ (0x1000193 * v339);
          v60 = *v338++;
        }
        while ( v60 );
        v340 = v339;
        v341 = *(v337 + 0x1F8);
        if ( v339 >= v341 )
          v340 = v339 % v341;
        v342 = *(v337 + 0x1F0);
        v343 = *(v342 + 8 * v340);
        if ( v343 )
        {
          while ( 1 )
          {
            v344 = *v343;
            if ( !*v343 )
              v344 = &szFile;
            if ( !strcmp(v344, v4) )
              break;
            v343 = *(v343 + 0x10);
            if ( !v343 )
              goto LABEL_552;
          }
          if ( v343 != *(v342 + 8 * v341) )
          {
            v346 = *(v343 + 8);
            if ( v346 )
            {
              v347 = 1;
              if ( !sub_117620() && !sub_117620() )
                v347 = sub_117620();
              v368 = *&dword_44801E8;
              v382 = 0;
              v376 = (v346 + 0xE0);
              if ( !v347 || !override_assertion_handler )
                goto LABEL_102;
              v68 = override_assertion_handler(
                      0i64,
                      "..\\..\\skyquake\\prog\\mission\\actions.cpp",
                      0x98Ci64,
                      "unitMoveTo",
                      "!check_nan(*tp)",
                      0i64,
                      0i64,
                      0);
              goto LABEL_100;
            }
          }
        }
LABEL_552:
        v358 = &szFile;
        v359 = data::get_str(v5, "target", &v358);
        LODWORD(v358) = 1;
        v361 = "unitMoveTo";
        v360 = 1;
        logmessage_fmt(0x47495254u, "unknown area '%s' in action %s", &v358, 2);
        goto LABEL_553;
      }
      v61 = *(a1 + 0x40);
      v62 = 0x20i64 * *(a1 + 0x50);
      v63 = 0i64;
      while ( strcmp(*(v61 + v63), v4 + 1) )
      {
        v63 += 0x20i64;
        if ( v62 == v63 )
          goto LABEL_540;
      }
      if ( (*(v61 + v63 + 8) & 0xF) == 1 )
        v4 = *(v61 + v63 + 0x10);
LABEL_540:
      v5 = v367;
      if ( !v4 )
        goto LABEL_552;
      v60 = *v4;
    }
    if ( !v60 )
      goto LABEL_552;
    goto LABEL_543;
  }
  if ( v56 )
  {
    LODWORD(v358) = 0xBF800000;
    v368 = data::set_real(v5, "follow_radius", &v358);
    LOBYTE(v358) = 0;
    LOBYTE(v57) = data::get_bool(v5, "getToLOS", &v358);
    v366 = v57;
    v374 = 0i64;
    v375 = 0.0;
    sub_145C630(v5, &v358, "follow_offset", &v374);
    v365 = HIDWORD(v358);
    v382 = v358;
    v58 = v359;
    v364 = v359;
    v376 = 0i64;
    goto LABEL_103;
  }
  v64 = v384[v386 - 1];
  v65 = (v64[0x26E] * v394) + ((v64[0x26B] * v393) + (v64[0x268] * v392));
  v66 = (v394 * v64[0x26F]) + ((v393 * v64[0x26C]) + (v392 * v64[0x269]));
  v392 = (v64[0x26D] * v394) + ((v64[0x26A] * v393) + (v64[0x267] * v392));
  v393 = v65;
  v394 = v66;
  v67 = 1;
  if ( !sub_117620() && !sub_117620() )
    v67 = sub_117620();
  v368 = *&dword_44801E8;
  v382 = 0;
  v376 = v64 + 0x270;
  if ( v67 && override_assertion_handler )
  {
    v68 = override_assertion_handler(
            0i64,
            "..\\..\\skyquake\\prog\\mission\\actions.cpp",
            0x97Ei64,
            "unitMoveTo",
            "!check_nan(*tp)",
            0i64,
            0i64,
            0);
LABEL_100:
    if ( v68 )
      __debugbreak();
  }
LABEL_102:
  v366 = 0;
  v365 = 0;
  v58 = 0i64;
  v364 = 0;
LABEL_103:
  v358 = 0i64;
  v69 = data::get_str(v5, "lookat", &v358);
  if ( !v69 )
    goto LABEL_126;
  v70 = v69;
  v71 = *v69;
  if ( v71 != 0x40 )
  {
LABEL_115:
    if ( v71 )
      goto LABEL_116;
LABEL_126:
    v84 = 0i64;
    v83 = v376;
    goto LABEL_127;
  }
  if ( *(a1 + 0x50) )
  {
    v72 = *(a1 + 0x40);
    v73 = 0x20i64 * *(a1 + 0x50);
    v74 = 0i64;
    while ( strcmp(*(v72 + v74), v70 + 1) )
    {
      v74 += 0x20i64;
      if ( v73 == v74 )
        goto LABEL_113;
    }
    if ( (*(v72 + v74 + 8) & 0xF) == 1 )
      v70 = *(v72 + v74 + 0x10);
LABEL_113:
    if ( !v70 )
      goto LABEL_126;
    v71 = *v70;
    goto LABEL_115;
  }
  v71 = 0x40;
LABEL_116:
  v75 = *(game + 0x420);
  v76 = (v70 + 1);
  v77 = 0x811C9DC5;
  do
  {
    v77 = v71 ^ (0x1000193 * v77);
    v71 = *v76++;
  }
  while ( v71 );
  v78 = v77;
  v79 = *(v75 + 0x1F8);
  if ( v77 >= v79 )
    v78 = v77 % v79;
  v80 = *(v75 + 0x1F0);
  v81 = *(v80 + 8 * v78);
  if ( !v81 )
    goto LABEL_126;
  while ( 1 )
  {
    v82 = *v81;
    if ( !*v81 )
      v82 = &szFile;
    if ( !strcmp(v82, v70) )
      break;
    v81 = *(v81 + 0x10);
    if ( !v81 )
    {
      v83 = v376;
      v84 = 0i64;
      goto LABEL_127;
    }
  }
  v83 = v376;
  if ( v81 == *(v80 + 8 * v79) )
    v84 = 0i64;
  else
    v84 = *(v81 + 8);
LABEL_127:
  v85 = (v84 + 0xE0);
  v410 = v84;
  if ( !v84 )
    v85 = 0i64;
  v408 = v85;
  if ( !v83 && !v386 )
  {
    if ( override_assertion_handler )
    {
      v58 = 0i64;
      LODWORD(v350) = 0;
      if ( override_assertion_handler(
             0i64,
             "..\\..\\skyquake\\prog\\mission\\actions.cpp",
             0x991i64,
             "unitMoveTo",
             "targets.size() || tp",
             0i64,
             0i64,
             v350) )
        __debugbreak();
    }
  }
  LODWORD(v358) = 0x42200000;
  v86 = data::set_real(v5, "speed", &v358);
  v358 = 0i64;
  v87 = data::get_str(v5, "move_type", &v358);
  v387 = v87;
  if ( v87 )
  {
    v88 = v87;
    LOBYTE(v4) = strcmp(v87, "teleport") == 0;
    v89 = strcmp(v88, "navmesh");
    LOBYTE(v89) = v89 == 0;
    v389 = v89;
  }
  else
  {
    LODWORD(v4) = 0;
    v389 = 0;
  }
  LOBYTE(v358) = 1;
  v357 = data::get_bool(v5, "horizontalDirectionForTeleport", &v358);
  LODWORD(v358) = 0;
  v58.m128_f32[0] = data::set_real(v5, "zzAmp", &v358);
  v412 = v58;
  LODWORD(v358) = 0;
  v58.m128_f32[0] = data::set_real(v5, "zzPeriod", &v358);
  v411 = v58;
  v358 = "absolute";
  v90 = data::get_str(v5, "teleportHeightType", &v358);
  v91 = &off_44CFB00;
  if ( v90 )
  {
    v92 = v90;
    if ( strcmp("absolute", v90) )
    {
      if ( !strcmp("relative", v92) )
      {
        v91 = &off_44CFB10;
      }
      else
      {
        v91 = &off_44CFB00;
        if ( !strcmp("target", v92) )
          v91 = &off_44CFB20;
      }
    }
  }
  v399 = *(v91 + 2);
  LOBYTE(v358) = 1;
  v353 = data::get_bool(v5, "useUnitHeightForTele", &v358);
  LODWORD(v358) = 0x447A0000;
  v390 = data::set_real(v5, "teleportHeightValue", &v358);
  LOBYTE(v358) = 0;
  v352 = data::get_bool(v5, "shouldKeepFormation", &v358);
  LODWORD(v358) = 0xBF800000;
  v395 = data::set_real(v5, "recalculatePathDist", &v358);
  LOBYTE(v358) = 0;
  v373 = data::get_bool(v5, "useFormationCenter", &v358);
  v93 = &xmmword_4514A60;
  if ( v381 )
    v93 = (*v379 + 0x9C0i64);
  v94 = *v93;
  v369 = *(v93 + 2);
  v377 = 0i64;
  v378 = 0.0;
  v95 = LODWORD(Y);
  v96 = v387;
  v97 = 0i64;
  v98 = 0i64;
  v99 = 0i64;
  if ( v83 )
  {
    v406 = 0i64;
    v100 = 0.0;
    v405 = 0i64;
    if ( v381 >= 2 )
    {
      v391 = v86;
      v101 = *&dword_44801E8;
      LODWORD(v99) = 0;
      v102 = 0i64;
      LODWORD(v98) = 0;
      v103 = 0i64;
      v369 = 0.0;
      v104 = 0.0;
      v105 = 0.0;
      do
      {
        v405.m128_i32[0] = v98;
        v406.m128_i32[0] = v99;
        v106 = v105;
        v107 = v104;
        v108 = v369;
        v109 = v101;
        v110 = v379[v102];
        v111 = v110[0x272];
        v112 = v111 - v369;
        v113 = v110[0x270];
        v114 = v110[0x271];
        v115 = v114 - v104;
        v116 = v113 - v105;
        v117 = fsqrt(((v112 * v112) + (v115 * v115)) + (v116 * v116));
        if ( v101 < v117 )
        {
          v101 = 0.0;
          v105 = v110[0x270];
          v104 = v110[0x271];
          v369 = v110[0x272];
          if ( v109 >= 0.0 )
          {
            v101 = (v117 + v109) * *&screenScaleFactor;
            v118 = (v101 - v109) / v117;
            v119 = (v112 * v118) + v108;
            v120 = (v115 * v118) + v107;
            v105 = (v118 * v116) + v106;
            v104 = v120;
            v369 = v119;
          }
        }
        *&v103 = *&v103 + v113;
        v98 = v405.m128_u32[0];
        *&v98 = v405.m128_f32[0] + v114;
        v99 = v406.m128_u32[0];
        *&v99 = v406.m128_f32[0] + v111;
        ++v102;
      }
      while ( v381 != v102 );
      v121 = *(v83 + 8);
      v121.m128_f32[0] = v121.m128_f32[0] - v369;
      v94 = v105;
      v122 = *v83 - v105;
      v123 = (v121.m128_f32[0] * v121.m128_f32[0]) + (v122 * v122);
      v86 = v391;
      if ( (((*(v83 + 4) - v104) * (*(v83 + 4) - v104)) + v123) < Y )
        goto LABEL_553;
      v124 = v121;
      v97 = v103;
      v125 = fsqrt(v123);
      v126 = 0.0;
      if ( v125 > *&epsilon_unk )
        v126 = Y / v125;
      v127 = Y / v381;
      v124.m128_f32[0] = v121.m128_f32[0] * v126;
      v405 = v124;
      v128 = _mm_xor_ps(SIGN_BIT_MASK, v124);
      v406 = v128;
      *&v358 = v101;
      v5 = v367;
      v128.m128_f32[0] = data::set_real(v367, "distributionRadius", &v358);
      if ( v101 > *&epsilon_unk || (v129 = 0i64, v101 < *&dword_449F1AC) )
      {
        v128.m128_f32[0] = v128.m128_f32[0] / v101;
        v129 = v128;
      }
      *&v97 = *&v103 * v127;
      *&v98 = *&v98 * v127;
      *&v99 = *&v99 * v127;
      v100 = v126 * v122;
      v129.m128_f32[0] = fmaxf(v129.m128_f32[0], *&dword_4487E14);
      v95 = v129;
    }
  }
  else
  {
    v406 = 0i64;
    v100 = 0.0;
    v405 = 0i64;
  }
  v391 = v94;
  if ( v4 )
  {
    sub_CD80C0(unit_moveto, v5, a1);
    if ( v352 )
    {
      v130 = v381;
      if ( v381 < 2ui64 )
        goto LABEL_168;
      v131 = 0;
      v132 = v381;
      v133 = v381;
      do
      {
        v133 >>= 1;
        ++v131;
        v134 = v132 <= 3;
        v132 = v133;
      }
      while ( !v134 );
      sub_5F0860(v379, v379 + 8 * v381, sub_D2C080, v131, 1);
    }
  }
  v130 = v381;
LABEL_168:
  if ( v130 )
  {
    v135 = dword_44A02E0;
    v135.m128_f32[0] = fmaxf(*&dword_44A02E0, v395);
    v136 = _mm_cmplt_ss(0i64, LODWORD(v395));
    v137 = v86 * *&qword_44CF6B0;
    v388 = v137;
    v138 = _mm_or_ps(_mm_andnot_ps(v136, dword_44801E8), _mm_and_ps(v136, v135));
    v138.m128_f32[0] = v138.m128_f32[0] * v138.m128_f32[0];
    v413 = v138;
    v396 = v368 * v368;
    v370 = v389 | (v83 != 0);
    v397 = _mm_cmplt_ps(0i64, v412).m128_u32[0] & _mm_cmplt_ps(0i64, v411).m128_u32[0];
    v135.m128_f32[0] = v135.m128_f32[0] * v135.m128_f32[0];
    v139 = _mm_cmplt_ss(0i64, LODWORD(v395));
    v414 = _mm_or_ps(_mm_andnot_ps(v139, dword_44801E8), _mm_and_ps(v135, v139));
    v372 = v352 ^ 1;
    v371 = v352 & (v83 != 0);
    v140 = 0i64;
    v141 = LODWORD(Y);
    v142 = 0i64;
    v400 = v4;
    do
    {
      if ( v83 )
      {
        v143 = 0i64;
        v144 = v83;
      }
      else
      {
        v143 = v384[v142 % v386];
        v144 = v143 + 0x9C0;
      }
      Unit_ = v379[v142];
      XPosition = 0.0;
      YPosition = 0.0;
      ZPosition = 0.0;
      if ( v373 )
      {
        ZPosition = *(Unit_ + 0x9C8) - *&v99;
        XPosition = *(Unit_ + 0x9C0) - *&v97;
        YPosition = *(Unit_ + 0x9C4) - *&v98;
      }
      v149 = *(v144 + 4);
      if ( v83 )
      {
        if ( v130 == 1 )
        {
          v378 = *(v83 + 8);
          v377 = *v83;
          if ( !v4 )
            goto LABEL_194;
        }
        else
        {
          v163 = *(Unit_ + 0x9C0) - v391;
          v164 = *(Unit_ + 0x9C8) - v369;
          *&v165 = (((v164 * v100) + (v163 * v406.m128_f32[0])) * v95.m128_f32[0]) + *(v83 + 8);
          v377 = __PAIR64__(*(v83 + 4), (((v164 * v405.m128_f32[0]) + (v163 * v100)) * v95.m128_f32[0]) + *v83);
          v378 = *&v165;
          if ( !v4 )
          {
LABEL_194:
            if ( !Unit_ )
              goto LABEL_376;
            UnitType = *(Unit_ + 0x10B0);
            if ( UnitType > 0xF )
              goto LABEL_376;
            v169 = 0x897E;
            if ( _bittest(&v169, UnitType) )
            {
              v170 = 0i64;
              if ( UnitType == 3 )
                v170 = Unit_;
              v171 = *(Unit_ + 0x1EA0);
              if ( UnitType == 5 )
              {
                v172 = *(Unit_ + 0x32B8);
                if ( v172 )
                {
                  if ( v143 )
                  {
                    LODWORD(v358) = 0xBF800000;
                    v173 = data::set_real(v367, "shipTurnRadius", &v358);
                    if ( v173 > *&dword_44878D0 )
                      *(*(Unit_ + 0x32B8) + 0x678i64) = v173;
                    if ( v395 > *&dword_44878D0 )
                      *(*(Unit_ + 0x32B8) + 0x698i64) = v413.m128_i32[0];
                    if ( v383 > *&dword_44878D0 )
                      *(*(Unit_ + 0x32B8) + 0x6A4i64) = v383;
                    *(*(Unit_ + 0x32B8) + 0x6F0i64) = v396;
                    v174 = *(Unit_ + 0x32B8);
                    v174[0x1BE] = v382;
                    v174[0x1BF] = v365;
                    v174[0x1C0] = v364;
                    v175 = *(Unit_ + 0x32B8);
                    v176 = *(*(v175 + 0x6A8) + 0x1EB0i64);
                    if ( v176 )
                      *(v176 + 0x18) = 0xFFFFFFFF;
                    *(v175 + 0x6B0) = v143;
                  }
                  else if ( v83 )
                  {
                    v172[0x1C3] = XPosition;
                    v172[0x1C4] = YPosition;
                    v172[0x1C5] = ZPosition;
                    (*(**(Unit_ + 0x32B8) + 0x30i64))(*(Unit_ + 0x32B8), v83);
                  }
                  if ( !v171 || !*(v171 + 0x3E0) )
                    *(*(Unit_ + 0x32B8) + 0x424i64) = v388;
                  goto LABEL_376;
                }
              }
              if ( v170 )
              {
                if ( v83 )
                {
                  v177 = *(v170 + 0x3078);
                  if ( v177 )
                  {
                    (*(*v177 + 0x30i64))(v177, v83);
                    goto LABEL_376;
                  }
                }
              }
              if ( v171 )
              {
                v178 = (v171 + 0x424);
                if ( !v352 )
                  v178 = &xmmword_4514A60;
                v179 = *v178;
                v180 = v178[2];
                *(v171 + 0x422) = v352;
                *(v171 + 0x48C) = v398;
                v181 = 1;
                if ( *(v171 + 0x3E0) )
                {
                  if ( *&dword_44A01A0 > *(v171 + 0x3B8) )
                  {
                    *(v171 + 0x3E0) = 0;
                    goto LABEL_221;
                  }
                  v181 = 0;
                  if ( !v370 )
                  {
LABEL_349:
                    v241 = *(v171 + 0x490);
                    if ( v352 )
                    {
                      if ( v241 )
                      {
                        *(v171 + 0x490) = 0i64;
                        *(v171 + 0x48C) = 0;
                      }
                      *(v171 + 0x3D0) = v143;
                      *(v171 + 0x3D8) = v383;
                      *(v171 + 0x3DC) = 0;
                      if ( ((*&dword_44A01A0 > *(v171 + 0x3B8)) | v181) == 1 )
                      {
                        v242 = *(v171 + 4);
                        *(v171 + 0x3B8) = v242;
                        *(v171 + 0x3BC) = v242;
                      }
                      *(v171 + 0x378) = *(v143 + 0x9C0);
                      *(v171 + 0x37C) = *(v143 + 0x9C8);
                      *(v171 + 0x4C8) = 1;
                      *(v171 + 0x3E2) = 0;
                      *(v171 + 0x4C9) = v356;
                    }
                    else
                    {
                      if ( v241 )
                      {
                        *(v171 + 0x490) = 0i64;
                        *(v171 + 0x48C) = 0;
                      }
                      *(v171 + 0x3D0) = v143;
                      *(v171 + 0x3D8) = v368;
                      *(v171 + 0x3DC) = 0;
                      if ( ((*&dword_44A01A0 > *(v171 + 0x3B8)) | v181) == 1 )
                      {
                        v243 = *(v171 + 4);
                        *(v171 + 0x3B8) = v243;
                        *(v171 + 0x3BC) = v243;
                      }
                      *(v171 + 0x378) = *(v143 + 0x9C0);
                      *(v171 + 0x37C) = *(v143 + 0x9C8);
                      *(v171 + 0x4C8) = 0x101;
                      *(v171 + 0x3E2) = v366;
                    }
                    *(v171 + 2) = *(v171 + 1);
                    *(v171 + 1) = 2;
                    *(v171 + 0x474) = 0;
LABEL_361:
                    *(v171 + 0x44C) = 0;
                    goto LABEL_371;
                  }
                }
                else
                {
LABEL_221:
                  if ( !v370 )
                    goto LABEL_349;
                }
                if ( v83 )
                {
                  v182 = v180 + *(Unit_ + 0x9C8);
                  v183 = v179 + *(Unit_ + 0x9C0);
                  if ( *(v171 + 0x490) )
                  {
                    *(v171 + 0x490) = 0i64;
                    *(v171 + 0x48C) = 0;
                  }
                  *(v171 + 0x380) = v183;
                  *(v171 + 0x384) = v182;
                  *(v171 + 0x378) = v377;
                  *(v171 + 0x37C) = v378;
                  if ( v181 )
                  {
                    v184 = v388;
                    *(v171 + 0x3B8) = v388;
                    *(v171 + 0x3BC) = v184;
                  }
                  *(v171 + 2) = *(v171 + 1);
                  *(v171 + 1) = 2;
                  *(v171 + 0x474) = 0;
                  *(v171 + 0x3D0) = 0i64;
                  if ( !v389 )
                    goto LABEL_361;
                  v185 = qword_4B6A9F8 == 0;
                  *(v171 + 0x44C) = qword_4B6A9F8 != 0;
                  if ( v185 )
                  {
LABEL_371:
                    v246 = *(Unit_ + 0x1EB0);
                    if ( v246 )
                      *(v246 + 0x1D) = 0;
                    if ( (v397 & 1) != 0 )
                    {
                      *(v171 + 0x3C4) = v412.m128_i32[0];
                      *(v171 + 0x3C8) = v411.m128_i32[0];
                    }
                    *(v171 + 0x488) = v414.m128_i32[0];
                    goto LABEL_376;
                  }
                  *(v171 + 0x470) = v378;
                  v186 = v377;
                }
                else
                {
                  if ( *(v171 + 0x490) )
                  {
                    *(v171 + 0x490) = 0i64;
                    *(v171 + 0x48C) = 0;
                  }
                  *(v171 + 0x3D0) = v143;
                  *(v171 + 0x3D8) = v383;
                  *(v171 + 0x3DC) = 0;
                  if ( ((*&dword_44A01A0 > *(v171 + 0x3B8)) | v181) == 1 )
                  {
                    v244 = *(v171 + 4);
                    *(v171 + 0x3B8) = v244;
                    *(v171 + 0x3BC) = v244;
                  }
                  *(v171 + 0x378) = *(v143 + 0x9C0);
                  *(v171 + 0x37C) = *(v143 + 0x9C8);
                  *(v171 + 0x4C8) = 1;
                  *(v171 + 0x3E2) = 0;
                  *(v171 + 0x4C9) = v356;
                  *(v171 + 2) = *(v171 + 1);
                  *(v171 + 1) = 2;
                  *(v171 + 0x474) = 0;
                  v185 = qword_4B6A9F8 == 0;
                  *(v171 + 0x44C) = qword_4B6A9F8 != 0;
                  if ( v185 )
                    goto LABEL_371;
                  v245 = v143 + 0x9C0;
                  *(v171 + 0x470) = *(v245 + 8);
                  v186 = *v245;
                }
                *(v171 + 0x468) = v186;
                goto LABEL_371;
              }
LABEL_376:
              if ( v96 )
                sub_CD53F0(Unit_, v96);
              goto LABEL_172;
            }
            if ( *(Unit_ + 0x10B0) )
            {
              if ( UnitType == 7 )
              {
                if ( v143 )
                {
                  v193 = *(Unit_ + 0x1D30);
                  if ( (v193 & 8) == 0 )
                  {
                    v194 = *(v143 + 0x9C8);
                    v358 = *(v143 + 0x9C0);
                    LODWORD(v359) = v194;
                    sub_900D60(Unit_, &v358, (v193 & 0x10) >> 4);
                    *(Unit_ + 0x1E48) = v143;
                    *(Unit_ + 0x1E50) = LODWORD(v368);
                  }
                }
                else
                {
                  sub_900D60(Unit_, &v377, (*(Unit_ + 0x1D30) & 0x10u) >> 4);
                }
                v247 = *(Unit_ + 0x1D68);
                if ( v247 )
                  *(v247 + 0x1D) = 0;
              }
              goto LABEL_376;
            }
            v215 = *(Unit_ + 0x1E00);
            if ( v215 )
              *(v215 + 0x1D) = 0;
            if ( (*(Unit_ + 0x1058) & 0x10) != 0 )
            {
              v216 = &unk_4912A93;
              if ( !*(Unit_ + 0x10B0) )
                v216 = "flight model";
              v217 = *(Unit_ + 8);
              v359 = 0xAC3i64;
              LODWORD(v358) = 2;
              v361 = v216;
              v360 = 1;
              v363 = v217;
              v362 = 2;
              logmessage_fmt(
                0x47495254u,
                "ERROR(%d): Script access to a unit (%s) uid=%#x being loaded. Some script actions will be ignored. Eithe"
                "r ask programmers to remove this check or ask game designers to fix misison.",
                &v358,
                3);
              if ( override_assertion_handler )
              {
                v218 = *(Unit_ + 8);
                v359 = 0xAC3i64;
                LODWORD(v358) = 2;
                v361 = v216;
                v360 = 1;
                v363 = v218;
                v362 = 2;
                LODWORD(v350) = 3;
                if ( override_assertion_handler(
                       0i64,
                       "..\\..\\skyquake\\prog\\mission\\actions.cpp",
                       0x162i64,
                       "assert_unit_is_not_loading",
                       "0",
                       "ERROR(%d): Script access to a unit (%s) uid=%#x being loaded. Some script actions will be ignored"
                       ". Either ask programmers to remove this check or ask game designers to fix misison.",
                       &v358,
                       v350,
                       v351) )
                  __debugbreak();
              }
            }
            if ( (*(Unit_ + 0x1058) & 0x2000010) != 0 )
              goto LABEL_376;
            v219 = *(Unit_ + 0x33D0);
            v220 = sub_128770(v219 + 0x99, "targets");
            if ( dword_4ACF6E8 > *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4i64) )
            {
              Init_thread_header(&dword_4ACF6E8);
              if ( dword_4ACF6E8 == 0xFFFFFFFF )
              {
                qword_4ACF6D0 = 0i64;
                off_4ACF6D8 = off_4B678C0;
                qword_4ACF6E0 = 0i64;
                atexit(sub_128750);
                Init_thread_footer(&dword_4ACF6E8);
              }
            }
            v221 = (v219[0xA3] + 0x18i64 * v220);
            if ( *(v219 + 0x14A) <= v220 )
              v221 = &qword_4ACF6D0;
            v222 = *v221;
            v223 = v221[1];
            *v221 = 0i64;
            v221[2] = 0i64;
            if ( v222 )
              (*(*v223 + 0x40i64))(v223);
            v358 = 0x47C35000C7C35000i64;
            sub_145C170(v367, &v374, "altRange", &v358);
            if ( v376 )
            {
              v358 = __PAIR64__(COERCE_UNSIGNED_INT(fminf(fmaxf(*&v374, *(&v377 + 1)), *(&v374 + 1))), v377);
              *&v359 = v378;
              v224 = *v219;
              v225 = v219;
              goto LABEL_397;
            }
            if ( v143 )
            {
              v259 = fminf(fmaxf(*&v374, *(v143 + 0x9C4)), *(&v374 + 1));
              v260 = *(v143 + 0x9C8);
              LODWORD(v358) = *(v143 + 0x9C0);
              *(&v358 + 1) = v259;
              LODWORD(v359) = v260;
              v224 = *v219;
              v225 = v219;
LABEL_397:
              (*(v224 + 0x30))(v225, &v358);
            }
            (*(*v219 + 0x10))(v219);
            if ( v143 )
            {
              *(v219 + 0x195) = v382;
              *(v219 + 0x196) = v365;
              *(v219 + 0x197) = v364;
              v219[0xCC] = v374;
              v261 = 1;
            }
            else
            {
              v261 = 0;
            }
            v219[0xC9] = v143;
            *(v219 + 0x650) = v261;
            LOBYTE(v358) = 0;
            v262 = v367;
            *(v219 + 0x420) = data::get_bool(v367, "fastClimb", &v358);
            LOBYTE(v358) = 0;
            *(v219 + 0x421) = data::get_bool(v262, "destTimeMode", &v358);
            v263 = *v262;
            v264 = 0xFFFFFFFF;
            if ( *v262 )
            {
              v265 = data::get_name_id("speed", 5ui64);
              v266 = *(v263 + 0x50);
              if ( v266 )
                v267 = *(v266 + 0x20);
              else
                v267 = 0;
              if ( *(v263 + 0x20) && (v269 = data::get_name_id(v263, "speed", 5ui64, v265), v269 >= 0) )
              {
                v264 = v267 + v269;
                v96 = v387;
              }
              else
              {
                v185 = v267 == 0;
                v96 = v387;
                if ( !v185 )
                  v264 = data::get_name_id(*(v263 + 0x50), "speed", 5ui64, v265);
              }
            }
            v270 = *(v367 + 5);
            v271 = *(v367 + 6);
            v272 = v271 == 0 || v264 < 0;
            v273 = dword_44801E8;
            if ( v270 == 0xFFFFFFFFi64 )
            {
              if ( !v272 )
              {
                v275 = *v367[3];
                v278 = &v275[8 * v271];
                v277 = v275;
                while ( (*v277 & 0xFFFFFF) != v264 )
                {
                  v277 += 8;
                  if ( v277 >= v278 )
                  {
LABEL_424:
                    v273 = dword_44801E8;
                    goto LABEL_427;
                  }
                }
LABEL_425:
                v273 = LODWORD(v388);
                if ( ((v277 - v275) & 0x400000000i64) != 0 )
                  v273 = dword_44801E8;
              }
            }
            else if ( !v272 )
            {
              v274 = *v367 + v270;
              v275 = (v274 + 0x90);
              v276 = v274 + 8 * v271 + 0x90;
              v277 = (v274 + 0x90);
              while ( (*v277 & 0xFFFFFF) != v264 )
              {
                v277 += 8;
                if ( v277 >= v276 )
                  goto LABEL_424;
              }
              goto LABEL_425;
            }
LABEL_427:
            *(v219 + 0x109) = v273;
            LOBYTE(v358) = 0;
            v279 = v367;
            *(v219 + 0x668) = data::get_bool(v367, "tas", &v358);
            LOBYTE(v358) = 0;
            *(v219 + 0x669) = data::get_bool(v279, "afterburner", &v358);
            LODWORD(v358) = 0xBF800000;
            *(v219 + 0x10A) = data::set_real(v279, "destTimeOnTarget", &v358);
            v83 = v376;
            goto LABEL_376;
          }
        }
        v354 = v377;
        v355 = v378;
        v166 = 1;
        if ( !sub_117620() && !sub_117620() )
          v166 = sub_117620();
        if ( v166 && override_assertion_handler )
        {
          v167 = override_assertion_handler(
                   0i64,
                   "..\\..\\skyquake\\prog\\mission\\actions.cpp",
                   0x9DBi64,
                   "unitMoveTo",
                   "!check_nan(pt)",
                   v140,
                   *(&v140 + 1),
                   0);
          goto LABEL_251;
        }
      }
      else
      {
        if ( !v4 )
          goto LABEL_194;
        v150 = v97;
        v151 = v141;
        v152 = v95;
        v153 = v98;
        v154 = v99;
        v155 = *(v143 + 0x9C8);
        v156 = *(Unit_ + 0x9C8) - v155;
        v157 = *(v143 + 0x9C0);
        v158 = *(v143 + 0x9C4);
        v159 = *(Unit_ + 0x9C4) - v158;
        v160 = *(Unit_ + 0x9C0) - v157;
        v161 = fsqrt(((v156 * v156) + (v159 * v159)) + (v160 * v160));
        if ( v161 <= v368 || v161 <= *&dword_44A01A0 )
        {
          v354 = *(Unit_ + 0x9C0);
          v355 = *(Unit_ + 0x9C8);
          v192 = 1;
          if ( sub_117620() )
          {
            v99 = v154;
            v98 = v153;
          }
          else
          {
            v99 = v154;
            v98 = v153;
            if ( !sub_117620() )
              v192 = sub_117620();
          }
          v95 = v152;
          v140 = 0i64;
          v141 = v151;
          v97 = v150;
          if ( v192 && override_assertion_handler )
          {
            v167 = override_assertion_handler(
                     0i64,
                     "..\\..\\skyquake\\prog\\mission\\actions.cpp",
                     0x9E9i64,
                     "unitMoveTo",
                     "!check_nan(pt)",
                     0i64,
                     0i64,
                     0);
LABEL_251:
            if ( v167 )
              __debugbreak();
          }
        }
        else
        {
          *&v354 = ((v368 / v161) * v160) + v157;
          *(&v354 + 1) = (v159 * (v368 / v161)) + v158;
          v355 = (v156 * (v368 / v161)) + v155;
          v162 = 1;
          if ( sub_117620() )
          {
            v99 = v154;
            v98 = v153;
          }
          else
          {
            v99 = v154;
            v98 = v153;
            if ( !sub_117620() )
              v162 = sub_117620();
          }
          v95 = v152;
          v140 = 0i64;
          v141 = v151;
          v97 = v150;
          if ( v162 && override_assertion_handler )
          {
            v167 = override_assertion_handler(
                     0i64,
                     "..\\..\\skyquake\\prog\\mission\\actions.cpp",
                     0x9E4i64,
                     "unitMoveTo",
                     "!check_nan(pt)",
                     0i64,
                     0i64,
                     0);
            goto LABEL_251;
          }
        }
      }
      *&v354 = *&v354 + v392;
      *(&v354 + 1) = *(&v354 + 1) + v393;
      v355 = v355 + v394;
      if ( !Unit_ )
      {
        v197 = 1;
        _Unit = 0i64;
        goto LABEL_457;
      }
      v195 = *(Unit_ + 0x10B0);
      _Unit = 0i64;
      if ( !v195 )
        _Unit = Unit_;
      v197 = _Unit == 0;
      if ( !(v372 | (_Unit == 0)) )
      {
        if ( !g_net || (v198 = Unit_, *(g_net + 0x60)) )
        {
          v199 = v83;
          if ( !v83 )
            v199 = *v384 + 0x9C0i64;
          v354 = *v199;
          v355 = *(v199 + 8);
          v200 = 1;
          if ( !sub_117620() && !sub_117620() )
            v200 = sub_117620();
          if ( v200 )
          {
            if ( override_assertion_handler )
            {
              LODWORD(v350) = 0;
              if ( override_assertion_handler(
                     0i64,
                     "..\\..\\skyquake\\prog\\mission\\actions.cpp",
                     0x9F1i64,
                     "unitMoveTo",
                     "!check_nan(pt)",
                     v140,
                     *(&v140 + 1),
                     v350) )
                __debugbreak();
            }
          }
          v201 = *(_Unit + 0x9E8);
          if ( v201 )
          {
            if ( *(v201 + 0x10B0) != 9 )
              v201 = 0i64;
          }
          else
          {
            v201 = 0i64;
          }
          if ( (*(_Unit + 0x1058) & 0x10) != 0 )
          {
            v202 = &unk_4912A93;
            if ( !*(_Unit + 0x10B0) )
              v202 = "flight model";
            v203 = *(_Unit + 8);
            v359 = 0x9F5i64;
            LODWORD(v358) = 2;
            v361 = v202;
            v360 = 1;
            v363 = v203;
            v362 = 2;
            logmessage_fmt(
              0x47495254u,
              "ERROR(%d): Script access to a unit (%s) uid=%#x being loaded. Some script actions will be ignored. Either "
              "ask programmers to remove this check or ask game designers to fix misison.",
              &v358,
              3);
            if ( override_assertion_handler )
            {
              v204 = *(_Unit + 8);
              v359 = 0x9F5i64;
              LODWORD(v358) = 2;
              v361 = v202;
              v360 = 1;
              v363 = v204;
              v362 = 2;
              LODWORD(v350) = 3;
              if ( override_assertion_handler(
                     0i64,
                     "..\\..\\skyquake\\prog\\mission\\actions.cpp",
                     0x162i64,
                     "assert_unit_is_not_loading",
                     "0",
                     "ERROR(%d): Script access to a unit (%s) uid=%#x being loaded. Some script actions will be ignored. "
                     "Either ask programmers to remove this check or ask game designers to fix misison.",
                     &v358,
                     v350,
                     v351) )
                __debugbreak();
            }
          }
          if ( (*(_Unit + 0x1058) & 0x2000010) == 0 )
          {
            if ( v201 )
            {
              air_movement = *(_Unit + 0x9D0);
              if ( !*(air_movement + 0x3628) )
              {
                v96 = v387;
                if ( *(v201 + 0x1CF8) )
                {
                  v212 = 0i64;
                  while ( 1 )
                  {
                    _Unit_ = *(*(v201 + 0x1CE8) + 8 * v212);
                    if ( _Unit_ )
                    {
                      if ( !*(_Unit_ + 0x10B0) && (*(_Unit_ + 0x1058) & 0x2000010) == 0 )
                      {
                        v214 = *(_Unit_ + 0x9D0);
                        if ( v214 )
                        {
                          if ( *(v214 + 0x3628) )
                            break;
                        }
                      }
                    }
                    if ( ++v212 >= *(v201 + 0x1CF8) )
                    {
                      _Unit_ = 0i64;
                      break;
                    }
                  }
                  air_movement = *(_Unit + 0x9D0);
                }
                else
                {
                  _Unit_ = 0i64;
                }
                v248 = (air_movement + 0x3610);
                v249 = (air_movement + 0x3614);
                v250 = (air_movement + 0x3618);
                if ( _Unit_ )
                  goto LABEL_383;
                goto LABEL_445;
              }
            }
          }
          v198 = Unit_;
          v96 = v387;
          if ( v201 )
          {
            v198 = Unit_;
            if ( !*(v201 + 0x1CE0) )
            {
              v205 = *(_Unit + 0x9E8);
              v198 = Unit_;
              if ( v205 )
              {
                v198 = Unit_;
                if ( *(v205 + 0x10B0) == 9 )
                {
                  v206 = *(v205 + 0x9E8);
                  v198 = Unit_;
                  if ( v206 )
                  {
                    v198 = Unit_;
                    if ( *(v206 + 0x10B0) == 0xA )
                    {
                      v207 = *(v206 + 0x1CD8);
                      if ( !*(v206 + 0x1CD8) )
                        goto LABEL_443;
                      v208 = *(v206 + 0x1CC8);
                      v209 = 0i64;
                      while ( 1 )
                      {
                        v210 = *(v208 + 8 * v209);
                        if ( *(v210 + 0x1CE0) )
                          break;
                        if ( v207 == ++v209 )
                          goto LABEL_443;
                      }
                      if ( *(v210 + 0x1CF8) )
                      {
                        v280 = 0i64;
                        while ( 1 )
                        {
                          _Unit_ = *(*(v210 + 0x1CE8) + 8 * v280);
                          if ( _Unit_ && !*(_Unit_ + 0x10B0) )
                          {
                            if ( (*(_Unit_ + 0x1058) & 0x10) != 0 )
                            {
                              v281 = &unk_4912A93;
                              if ( !*(_Unit_ + 0x10B0) )
                                v281 = "flight model";
                              v282 = *(_Unit_ + 8);
                              v359 = 0xA0Fi64;
                              LODWORD(v358) = 2;
                              v361 = v281;
                              v360 = 1;
                              v363 = v282;
                              v362 = 2;
                              v407 = v280;
                              logmessage_fmt(
                                0x47495254u,
                                "ERROR(%d): Script access to a unit (%s) uid=%#x being loaded. Some script actions will b"
                                "e ignored. Either ask programmers to remove this check or ask game designers to fix misison.",
                                &v358,
                                3);
                              v280 = v407;
                              if ( override_assertion_handler )
                              {
                                v283 = *(_Unit_ + 8);
                                v359 = 0xA0Fi64;
                                LODWORD(v358) = 2;
                                v361 = v281;
                                v360 = 1;
                                v363 = v283;
                                v362 = 2;
                                LODWORD(v350) = 3;
                                v284 = override_assertion_handler(
                                         0i64,
                                         "..\\..\\skyquake\\prog\\mission\\actions.cpp",
                                         0x162i64,
                                         "assert_unit_is_not_loading",
                                         "0",
                                         "ERROR(%d): Script access to a unit (%s) uid=%#x being loaded. Some script actio"
                                         "ns will be ignored. Either ask programmers to remove this check or ask game des"
                                         "igners to fix misison.",
                                         &v358,
                                         v350,
                                         v351);
                                v280 = v407;
                                if ( v284 )
                                  __debugbreak();
                              }
                            }
                            v96 = v387;
                            if ( (*(_Unit_ + 0x1058) & 0x2000010) == 0 )
                            {
                              v285 = *(_Unit_ + 0x9D0);
                              if ( v285 )
                              {
                                if ( *(v285 + 0x3628) )
                                  break;
                              }
                            }
                          }
                          if ( ++v280 >= *(v210 + 0x1CF8) )
                            goto LABEL_443;
                        }
                      }
                      else
                      {
LABEL_443:
                        _Unit_ = 0i64;
                      }
                      v248 = (v201 + 0x1CC8);
                      v249 = (v201 + 0x1CCC);
                      v250 = (v201 + 0x1CD0);
                      v83 = v376;
                      if ( _Unit_ )
                      {
LABEL_383:
                        if ( v381 )
                        {
                          v251 = *v250;
                          v252 = *v249;
                          v253 = *v248;
                          v254 = 0i64;
                          while ( _Unit_ != v379[v254] )
                          {
                            if ( v381 == ++v254 )
                              goto LABEL_445;
                          }
                          *&v255 = ((*(_Unit_ + 0x9B4) * v251)
                                  + ((*(_Unit_ + 0x9A8) * v252) + (*(_Unit_ + 0x99C) * v253)))
                                 + *(_Unit_ + 0x9C0);
                          *&v256 = ((*(_Unit_ + 0x9B8) * v251)
                                  + ((*(_Unit_ + 0x9AC) * v252) + (*(_Unit_ + 0x9A0) * v253)))
                                 + *(_Unit_ + 0x9C4);
                          v257 = ((v251 * *(_Unit_ + 0x9BC)) + ((v252 * *(_Unit_ + 0x9B0)) + (v253 * *(_Unit_ + 0x9A4))))
                               + *(_Unit_ + 0x9C8);
                          v354 = __PAIR64__(v256, v255);
                          v355 = v257;
                          v258 = 1;
                          if ( !sub_117620() && !sub_117620() )
                            v258 = sub_117620();
                          if ( v258 )
                          {
                            if ( override_assertion_handler )
                            {
                              LODWORD(v350) = 0;
                              if ( override_assertion_handler(
                                     0i64,
                                     "..\\..\\skyquake\\prog\\mission\\actions.cpp",
                                     0xA22i64,
                                     "unitMoveTo",
                                     "!check_nan(pt)",
                                     v140,
                                     *(&v140 + 1),
                                     v350) )
                                __debugbreak();
                            }
                          }
                        }
                      }
LABEL_445:
                      v198 = _Unit;
                    }
                  }
                }
              }
            }
          }
        }
        v195 = *(Unit_ + 0x10B0);
        _Unit = v198;
      }
      if ( v195 <= 0xFu )
      {
        v286 = v195;
        v287 = 0x897E;
        if ( _bittest(&v287, v286) )
        {
          if ( v371 )
          {
            v288 = *(Unit_ + 0x1EA0);
            if ( v288 )
            {
              if ( v404 )
              {
                v289 = *v83;
                v290 = *(v83 + 8);
                v291 = *(*v402 + 0x9C8i64) - v290;
                v292 = *(*v402 + 0x9C0i64) - *v83;
                v293 = fsqrt((v291 * v291) + (v292 * v292));
                v294 = 0.0;
                v295 = v141.m128_f32[0];
                if ( v293 > *&qword_44A0760 )
                {
                  v295 = (v141.m128_f32[0] / v293) * v292;
                  v294 = v291 * (v141.m128_f32[0] / v293);
                }
                LODWORD(v296) = LODWORD(v294) ^ SIGN_BIT_MASK;
              }
              else
              {
                v289 = *v83;
                v290 = *(v83 + 8);
                v296 = 0.0;
                v294 = 0.0;
                v295 = v141.m128_f32[0];
              }
              v297 = v288[0x109];
              v298 = v294 * v297;
              v299 = (v297 * v295) + v289;
              v300 = v288[0x10B];
              v301 = v288[0x10A] + *(v83 + 4);
              *&v354 = (v296 * v300) + v299;
              *(&v354 + 1) = v301;
              v355 = (v300 * v295) + (v298 + v290);
            }
          }
        }
      }
LABEL_457:
      v302 = *(game + 0x418);
      v374 = v354;
      v375 = v355;
      LOBYTE(v348) = 0;
      v303 = sub_5B4DF0(v302, &v374, &v358, v401, v348, 0xFFFFFFFF, 0i64, 0x45610000, 0, 0, 1, 0i64, 0, 1, 0xBF800000);
      v304 = *&v303;
      if ( sub_117620() )
      {
        if ( override_assertion_handler )
        {
          LODWORD(v350) = 0;
          if ( override_assertion_handler(
                 0i64,
                 "..\\..\\skyquake\\prog\\mission\\actions.cpp",
                 0xA3Ai64,
                 "unitMoveTo",
                 "!check_nan(height)",
                 v140,
                 *(&v140 + 1),
                 v350) )
            __debugbreak();
        }
      }
      if ( !Unit_ || (v306 = *(Unit_ + 0x10B0), (v306 - 1) >= 8) && v306 != 0xB && v306 != 0xF )
      {
        if ( v399 )
        {
          if ( v399 != 2 )
          {
            if ( v399 != 1 )
              goto LABEL_487;
            v307 = *(game + 0x418);
            v374 = *(Unit_ + 0x9C0);
            v375 = *(Unit_ + 0x9C8);
            LOBYTE(v349) = 0;
            v308 = sub_5B4DF0(
                     v307,
                     &v374,
                     &v358,
                     v401,
                     v349,
                     0xFFFFFFFF,
                     0i64,
                     0x45610000,
                     0,
                     0,
                     1,
                     0i64,
                     0,
                     1,
                     0xBF800000);
            v309 = v390;
            if ( v353 )
              v309 = *(Unit_ + 0x9C4) - *&v308;
            v310 = v309 + v304;
            if ( sub_117620() && override_assertion_handler )
            {
              v311 = override_assertion_handler(
                       0i64,
                       "..\\..\\skyquake\\prog\\mission\\actions.cpp",
                       0xA41i64,
                       "unitMoveTo",
                       "!check_nan(height)",
                       v140,
                       *(&v140 + 1),
                       0);
              goto LABEL_484;
            }
LABEL_486:
            v304 = v310;
            goto LABEL_487;
          }
          if ( v353 )
            v310 = *(Unit_ + 0x9C4);
          else
            v310 = v149 + v390;
          if ( !sub_117620() || !override_assertion_handler )
            goto LABEL_486;
          v311 = override_assertion_handler(
                   0i64,
                   "..\\..\\skyquake\\prog\\mission\\actions.cpp",
                   0xA4Bi64,
                   "unitMoveTo",
                   "!check_nan(height)",
                   v140,
                   *(&v140 + 1),
                   0);
        }
        else
        {
          v310 = v390;
          if ( v353 )
            v310 = *(Unit_ + 0x9C4);
          if ( !sub_117620() || !override_assertion_handler )
            goto LABEL_486;
          v311 = override_assertion_handler(
                   0i64,
                   "..\\..\\skyquake\\prog\\mission\\actions.cpp",
                   0xA46i64,
                   "unitMoveTo",
                   "!check_nan(height)",
                   v140,
                   *(&v140 + 1),
                   0);
        }
LABEL_484:
        v304 = v310;
        if ( !v311 )
          goto LABEL_487;
        __debugbreak();
        goto LABEL_486;
      }
LABEL_487:
      *(&v354 + 1) = v304;
      LOBYTE(v305) = 1;
      set_unit_value(Unit_, 0i64, &v354, v305, 1);
      if ( v404 )
      {
        if ( !v357 )
        {
          v358 = 0x3F80000000000000i64;
          LODWORD(v359) = 0;
          v315 = *(*v402 + 0x9C8i64) - *(Unit_ + 0x9C8);
          v316 = *(*v402 + 0x9C0i64);
          v317 = *(*v402 + 0x9C4i64);
          goto LABEL_498;
        }
        v312 = *(*v402 + 0x9C0i64);
        v313 = *(*v402 + 0x9C8i64);
      }
      else
      {
        if ( !v410 )
          goto LABEL_494;
        if ( !v357 )
        {
          v358 = 0x3F80000000000000i64;
          LODWORD(v359) = 0;
          v315 = v408[2] - *(Unit_ + 0x9C8);
          v316 = *v408;
          v317 = v408[1];
LABEL_498:
          v318 = v317 - *(Unit_ + 0x9C4);
          *&v374 = v316 - *(Unit_ + 0x9C0);
          *(&v374 + 1) = v318;
          v375 = v315;
          sub_33AC50(Unit_, &v374, &v358);
          if ( v197 )
            goto LABEL_171;
          goto LABEL_499;
        }
        v312 = *v408;
        v313 = v408[2];
      }
      v314 = v313 - *(Unit_ + 0x9C8);
      *&v358 = v312 - *(Unit_ + 0x9C0);
      *(&v358 + 1) = v314;
      sub_339E10(Unit_, &v358);
LABEL_494:
      if ( v197 )
        goto LABEL_171;
LABEL_499:
      v319 = *(_Unit + 0x9D0);
      v320 = *(v319 + 0x568B);
      v321 = v141.m128_f32[0];
      if ( (*(_Unit + 0x1058) & 0x7000014) != 0 )
      {
        if ( v320 )
        {
          sub_159BF40(&v358, *(_Unit + 0x9D0), 0i64, 0i64);
          v322.m128_i32[0] = HIDWORD(v358);
          v323 = _mm_cmple_ss(0i64, v322);
          v322.m128_i32[0] = dword_44878D0;
          v324 = _mm_cmple_ss(v358, v322);
          LODWORD(v321) = _mm_andnot_ps(v324, LODWORD(Y)).m128_u32[0] | _mm_andnot_ps(v323, LODWORD(Y)).m128_u32[0] & v324.m128_i32[0];
        }
        *(v319 + 0x12DC) = v321;
        *(v319 + 0x1DB4) = v321;
        *(v319 + 0x5A98) = v321;
        if ( *(v319 + 0x4568) )
        {
          if ( !*(v319 + 0x568B) )
            goto LABEL_529;
          goto LABEL_504;
        }
      }
      else
      {
        if ( v320 )
        {
          sub_159BF40(&v358, *(_Unit + 0x9D0), 0i64, 0i64);
          v327.m128_i32[0] = HIDWORD(v358);
          LODWORD(v321) = _mm_cmple_ss(v141, v327).m128_u32[0] & v141.m128_i32[0] & _mm_cmple_ss(v358, v141).m128_u32[0];
        }
        *(v319 + 0x12DC) = v321;
        *(v319 + 0x1DB4) = v321;
        *(v319 + 0x5A98) = v321;
        if ( *(v319 + 0x4568) )
        {
          if ( *(v319 + 0x568B) )
          {
            v328 = (v321 * *&dword_44A0344);
            if ( v328 <= 0 )
              v328 = 0;
            if ( v328 >= 0xFF )
              LOBYTE(v328) = 0xFF;
            v329 = (v328 * *&dword_44A4410) > *&dword_4487E14;
          }
          else
          {
            v329 = 1;
          }
          if ( v329 != *(v319 + 0x4560) )
            sub_1563510(v319, 0xFFFFFFFFi64);
        }
        v330 = sub_4271B0(_Unit);
        v319 = *(_Unit + 0x9D0);
        v321 = v141.m128_f32[0];
        if ( *(v319 + 0x568B) )
        {
          v331 = v330;
          sub_159BF40(&v358, *(_Unit + 0x9D0), 0i64, 0i64);
          v332 = 0i64;
          v333 = v141;
          if ( !v331 )
            v333 = 0i64;
          v334.m128_i32[0] = HIDWORD(v358);
          v335 = _mm_cmple_ss(v333, v334);
          if ( !v331 )
            v332 = v141;
          v336 = _mm_cmple_ss(v358, v333);
          LODWORD(v321) = _mm_andnot_ps(v336, v332).m128_u32[0] | (_mm_andnot_ps(v335, v332).m128_u32[0] | v335.m128_i32[0] & v333.m128_i32[0]) & v336.m128_i32[0];
        }
        *(v319 + 0x12DC) = v321;
        *(v319 + 0x1DB4) = v321;
        *(v319 + 0x5A98) = v321;
        if ( *(v319 + 0x4568) )
        {
          if ( !*(v319 + 0x568B) )
          {
LABEL_529:
            v326 = 1;
LABEL_530:
            if ( v326 != *(v319 + 0x4560) )
              sub_1563510(v319, 0xFFFFFFFFi64);
            goto LABEL_170;
          }
LABEL_504:
          v325 = (v321 * *&dword_44A0344);
          if ( v325 <= 0 )
            v325 = 0;
          if ( v325 >= 0xFF )
            LOBYTE(v325) = 0xFF;
          v326 = (v325 * *&dword_44A4410) > *&dword_4487E14;
          goto LABEL_530;
        }
      }
LABEL_170:
      if ( (*(_Unit + 0x1058) & 0x7000014) == 0 )
      {
        v187 = *v367;
        v188 = 0xFFFFFFFF;
        if ( !*v367 )
          goto LABEL_330;
        v189 = data::get_name_id("velocity", 8ui64);
        v190 = *(v187 + 0x50);
        if ( v190 )
        {
          v191 = *(v190 + 0x20);
          if ( !*(v187 + 0x20) )
          {
LABEL_327:
            if ( v191 )
            {
              v227 = data::get_name_id(*(v187 + 0x50), "velocity", 8ui64, v189);
              goto LABEL_329;
            }
            goto LABEL_330;
          }
        }
        else
        {
          v191 = 0;
          if ( !*(v187 + 0x20) )
            goto LABEL_327;
        }
        v226 = data::get_name_id(v187, "velocity", 8ui64, v189);
        if ( v226 < 0 )
          goto LABEL_327;
        v227 = v191 + v226;
LABEL_329:
        v188 = v227;
LABEL_330:
        v228 = *(v367 + 5);
        v229 = *(v367 + 6);
        v230 = v229 == 0 || v188 < 0;
        if ( v228 != 0xFFFFFFFFi64 )
        {
          v83 = v376;
          if ( !v230 )
          {
            v231 = *v367 + v228 + 0x90;
            v232 = v231;
            while ( (*v232 & 0xFFFFFF) != v188 )
            {
              v232 += 2;
              if ( v232 >= v228 + *v367 + 8 * v229 + 0x90 )
                goto LABEL_346;
            }
            goto LABEL_341;
          }
          goto LABEL_346;
        }
        v83 = v376;
        if ( v230 )
          goto LABEL_346;
        v231 = *v367[3];
        v232 = v231;
        while ( (*v232 & 0xFFFFFF) != v188 )
        {
          v232 += 2;
          if ( v232 >= v231 + 8 * v229 )
            goto LABEL_346;
        }
LABEL_341:
        v233 = (v232 - v231) >> 3;
        if ( (v233 & 0x80000000) != 0i64 )
        {
LABEL_346:
          v237 = sub_325030(Unit_);
          v96 = v387;
        }
        else
        {
          v234 = 0.0;
          v96 = v387;
          if ( v229 > v233 )
          {
            if ( v228 == 0xFFFFFFFF )
            {
              LODWORD(v358) = 0;
              v268 = *v367[3];
              if ( *(v268 + 8i64 * v233 + 3) << 0x18 != 0x3000000 )
                goto LABEL_532;
              v236 = (v268 + 8i64 * v233 + 4);
            }
            else
            {
              LODWORD(v358) = 0;
              v235 = *v367 + v228;
              if ( *(v235 + 8i64 * v233 + 0x93) << 0x18 == 0x3000000 )
              {
                v236 = (v235 + 8i64 * v233 + 0x94);
                goto LABEL_406;
              }
LABEL_532:
              v236 = &v358;
            }
LABEL_406:
            v234 = *v236;
          }
          v237 = v234 * *&dword_44A462C;
        }
        *&v238 = *(Unit_ + 0x9A4) * v237;
        *&v239 = *(Unit_ + 0x9A0) * v237;
        v240 = *(_Unit + 0x9D0);
        *v409 = v237 * *(Unit_ + 0x99C);
        v409[1] = v239;
        v409[2] = v238;
        sub_1573580(v240, v409);
        *(_Unit + 0x2DA0) = v352;
      }
LABEL_171:
      LOBYTE(v4) = v400;
LABEL_172:
      ++v142;
      v130 = v381;
    }
    while ( v142 < v381 );
  }
LABEL_553:
  if ( v402 )
    (*(*v403 + 0x40i64))(v403);
  if ( v384 )
    (*(*v385 + 0x40i64))(v385);
  if ( v379 )
    (*(*v380 + 0x40i64))(v380);
  return 1;
}
