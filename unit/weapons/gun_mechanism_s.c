__int64 __fastcall gun_mechanism_s(
        __int64 a1,
        float *a2,
        float *a3,
        float a4,
        float a5,
        float a6,
        char a7,
        float a8,
        unsigned __int8 a9,
        char a10,
        unsigned int *a11)
{
  __int64 v15; // rax
  __int64 v16; // r12
  char v17; // si
  float v18; // xmm7_4
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // bl
  __int64 v22; // rdi
  float v23; // xmm0_4
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int8 v27; // bp
  unsigned __int64 v28; // rdx
  unsigned int v29; // eax
  int v30; // ecx
  unsigned int v31; // ebx
  __int64 v32; // rdx
  int v33; // r14d
  char v34; // bl
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v36; // rax
  char v37; // al
  __int64 v38; // rdx
  __int64 v39; // r8
  unsigned int v40; // edi
  char v41; // al
  __int64 v42; // rcx
  char v43; // al
  char v44; // cl
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  int v48; // ecx
  __int64 v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rcx
  int v52; // ebp
  __int64 v53; // rax
  __int64 v54; // r9
  __int64 v55; // r8
  __int64 v56; // rdi
  int *v57; // rbp
  int v58; // eax
  int v59; // eax
  int v60; // ecx
  __int64 v61; // rcx
  int *v62; // rdx
  int v63; // edx
  int v64; // eax
  __int64 v65; // rsi
  char v66; // r12
  char v67; // r13
  bool v68; // cc
  __int64 v69; // rcx
  unsigned __int64 v70; // rbx
  int *v71; // rdx
  int v72; // edx
  int v73; // eax
  char v74; // r14
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rcx
  unsigned __int64 v78; // rbp
  unsigned int v79; // ebx
  int v80; // ebx
  __int64 v81; // rdx
  int v82; // r9d
  int v83; // ecx
  unsigned int *v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rax
  unsigned __int8 v87; // al
  __int64 v88; // rbx
  unsigned int v89; // r12d
  _QWORD *v90; // rdi
  int v91; // r8d
  _QWORD *v92; // rax
  int v93; // eax
  __int128 v94; // xmm0
  __int128 v95; // xmm1
  __int64 v96; // rcx
  unsigned __int64 v97; // rbp
  unsigned int v98; // ebx
  __int64 v99; // rsi
  __int64 v100; // r14
  unsigned __int64 v101; // rbx
  int *v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rbp
  int v105; // ecx
  unsigned __int64 v106; // rbx
  int v107; // ecx
  __int64 v108; // rax
  int v109; // eax
  int v110; // edx
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // r9
  __int64 v114; // rbp
  char v115; // al
  __int64 v116; // rdx
  float v117; // xmm7_4
  float v118; // xmm6_4
  __int64 v119; // r8
  double v120; // xmm0_8
  __int64 v121; // rax
  float *v122; // rax
  char v123; // al
  int v124; // edx
  __int64 v125; // rax
  __int64 v126; // rbx
  __int64 v127; // rcx
  __int64 v128; // rdi
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rcx
  __int64 v133; // rcx
  unsigned __int64 v134; // rbp
  unsigned int v135; // ebx
  __int64 v136; // rcx
  unsigned int v137; // eax
  unsigned int v138; // ecx
  unsigned __int64 v139; // rdx
  __int64 v140; // rdi
  unsigned int v141; // eax
  __int64 v142; // rcx
  __int64 result; // rax
  __int64 v144; // rsi
  int v145; // xmm0_4
  int v146; // eax
  __int64 v147; // rcx
  int v148; // xmm0_4
  __int64 v149; // rax
  int v150; // r8d
  __int64 Unit; // rax
  __int64 v152; // r12
  float v153; // xmm4_4
  float v154; // xmm3_4
  float v155; // xmm8_4
  float v156; // xmm0_4
  float v157; // xmm2_4
  float v158; // xmm8_4
  float v159; // xmm2_4
  float v160; // xmm0_4
  float v161; // xmm4_4
  float v162; // xmm6_4
  float v163; // xmm3_4
  float v164; // xmm8_4
  float v165; // xmm2_4
  float v166; // xmm0_4
  float v167; // xmm5_4
  float v168; // xmm7_4
  float v169; // xmm3_4
  float v170; // xmm4_4
  float v171; // xmm5_4
  float v172; // xmm4_4
  float v173; // xmm7_4
  float v174; // xmm3_4
  float v175; // xmm5_4
  float v176; // xmm4_4
  float v177; // xmm6_4
  float v178; // xmm4_4
  float v179; // xmm3_4
  float v180; // xmm1_4
  float v181; // xmm0_4
  __int64 v182; // rcx
  float v183; // xmm2_4
  float v184; // xmm0_4
  __int64 UnitWeaponInfo; // rdx
  __int64 v186; // rbp
  int v187; // edx
  __int64 v188; // rbp
  __int64 v189; // rcx
  float v190; // xmm2_4
  __int64 v191; // rdx
  float v192; // xmm5_4
  float v193; // xmm1_4
  float v194; // xmm3_4
  float v195; // xmm6_4
  float v196; // xmm4_4
  float v197; // xmm4_4
  __m128 v198; // xmm5
  __m128 v199; // xmm6
  __m128 v200; // xmm3
  float v201; // xmm3_4
  __int64 v202; // r8
  float v203; // xmm0_4
  int v204; // ecx
  __int64 v205; // rbp
  __m128 v206; // xmm0
  __m128 v207; // xmm2
  __m128 v208; // xmm1
  float v209; // xmm2_4
  float v210; // xmm1_4
  float v211; // xmm0_4
  __int64 v212; // rax
  float v213; // xmm3_4
  __int64 v214; // rcx
  __int64 v215; // rax
  float v216; // xmm4_4
  unsigned int v217; // edx
  unsigned int v218; // ecx
  unsigned int v219; // ebp
  unsigned int v220; // edx
  __int128 *v221; // rbp
  __int64 v222; // rcx
  unsigned int v223; // eax
  float v224; // xmm5_4
  float v225; // xmm3_4
  int v226; // eax
  __m128 v227; // xmm0
  __m128 v228; // xmm1
  __m128 v229; // xmm2
  int v230; // xmm2_4
  __int64 v231; // rdx
  float v232; // xmm8_4
  float v233; // xmm14_4
  float v234; // xmm9_4
  float *v235; // rax
  float v236; // xmm15_4
  float v237; // xmm7_4
  float v238; // xmm10_4
  float v239; // xmm12_4
  float v240; // xmm6_4
  __m128 v241; // xmm0
  float v242; // xmm2_4
  float v243; // xmm1_4
  float v244; // xmm11_4
  float v245; // xmm1_4
  __m128 v246; // xmm3
  __m128 v247; // xmm2
  __m128 v248; // xmm6
  float v249; // xmm7_4
  float v250; // xmm11_4
  float v251; // xmm12_4
  float v252; // xmm7_4
  __int64 v253; // rax
  float v254; // xmm1_4
  float v255; // xmm15_4
  float v256; // xmm6_4
  float v257; // xmm13_4
  float v258; // xmm14_4
  float v259; // xmm2_4
  float v260; // xmm9_4
  float v261; // xmm3_4
  float v262; // xmm10_4
  float v263; // xmm8_4
  float v264; // xmm14_4
  float v265; // xmm4_4
  float v266; // xmm5_4
  float v267; // xmm10_4
  float v268; // xmm2_4
  float v269; // xmm11_4
  float v270; // xmm1_4
  float v271; // xmm15_4
  float v272; // xmm14_4
  float *v273; // rax
  float v274; // xmm3_4
  float v275; // xmm2_4
  float v276; // xmm6_4
  float v277; // xmm0_4
  float v278; // xmm4_4
  __int64 v279; // rax
  float v280; // xmm15_4
  float v281; // xmm6_4
  float v282; // xmm9_4
  float v283; // xmm13_4
  float v284; // xmm14_4
  float v285; // xmm1_4
  float v286; // xmm0_4
  float v287; // xmm10_4
  float v288; // xmm12_4
  __int64 v289; // rax
  float v290; // xmm3_4
  double v291; // xmm6_8
  double v292; // xmm5_8
  double v293; // xmm2_8
  double v294; // xmm4_8
  double v295; // xmm1_8
  double v296; // xmm6_8
  double v297; // xmm5_8
  double v298; // xmm2_8
  float v299; // xmm0_4
  float v300; // xmm1_4
  float v301; // xmm2_4
  unsigned int v302; // eax
  unsigned int v303; // ecx
  unsigned int v304; // edx
  unsigned int v305; // eax
  __int128 *v306; // rdx
  __int64 v307; // rcx
  __int64 v308; // rcx
  __int64 v309; // rax
  int v310; // r8d
  float v311; // xmm2_4
  __m128 v312; // xmm0
  __m128 v313; // xmm1
  __m128 v314; // xmm2
  unsigned int v315; // eax
  __m128 v316; // xmm1
  __m128 v317; // rt1
  float v318; // xmm9_4
  unsigned int v319; // eax
  char v320; // r13
  float v321; // xmm10_4
  int v322; // esi
  float v323; // xmm9_4
  int v324; // edx
  bool v325; // di
  __int64 v326; // rax
  __int64 v327; // rax
  int v328; // r8d
  __int64 v329; // rcx
  char v330; // di
  __int64 v331; // rax
  int v332; // ecx
  __int64 v333; // rsi
  float v334; // xmm8_4
  float v335; // xmm6_4
  __int64 i; // r13
  __int64 v337; // rcx
  unsigned __int64 v338; // rbp
  _QWORD *v339; // rdi
  __int64 v340; // rcx
  __int64 v341; // rcx
  int v342; // r8d
  __int64 v343; // rdi
  __int64 v344; // rcx
  __int64 **v345; // rbx
  __int64 v346; // rbp
  __int64 v347; // rbp
  __int64 v348; // rax
  __int64 v349; // rcx
  float v350; // xmm8_4
  float v351; // xmm0_4
  float v352; // xmm1_4
  __m128 v353; // xmm0
  float v354; // xmm1_4
  float v355; // xmm2_4
  float v356; // xmm3_4
  float v357; // xmm2_4
  __m128 v358; // xmm4
  __m128 v359; // xmm3
  __m128 v360; // xmm1
  char v361; // r8
  int v362; // ebx
  __int64 v363; // r9
  __int64 v364; // rcx
  __int16 v365; // dx
  __int64 v366; // rax
  int v367; // ebp
  float v368; // xmm0_4
  bool v369; // bp
  int v370; // r12d
  __int64 v371; // rdx
  __int64 v372; // rax
  __int64 v373; // rbx
  unsigned int v374; // eax
  int v375; // ecx
  __int64 v376; // rax
  int v377; // edi
  __int64 v378; // rcx
  char v379; // al
  __int64 v380; // rcx
  int v381; // ecx
  float v382; // xmm1_4
  int v383; // ecx
  float v384; // xmm0_4
  float v385; // xmm0_4
  __int64 v386; // rax
  __int64 v387; // rcx
  __m128 v388; // xmm1
  int v389; // eax
  unsigned __int64 v390; // rcx
  int v391; // edi
  float v392; // xmm6_4
  __int64 v393; // rax
  float v394; // xmm3_4
  float v395; // xmm6_4
  int v396; // xmm3_4
  int v397; // xmm4_4
  float v398; // xmm3_4
  __int64 v399; // rax
  __int64 v400; // rdx
  int v401; // ecx
  float v402; // [rsp+48h] [rbp-290h]
  float v403; // [rsp+48h] [rbp-290h]
  float v404; // [rsp+48h] [rbp-290h]
  float v405; // [rsp+4Ch] [rbp-28Ch]
  bool v406; // [rsp+4Ch] [rbp-28Ch]
  float v407; // [rsp+50h] [rbp-288h] BYREF
  float v408; // [rsp+54h] [rbp-284h]
  float v409; // [rsp+58h] [rbp-280h]
  float v410; // [rsp+60h] [rbp-278h]
  float v411; // [rsp+64h] [rbp-274h]
  unsigned int *v412; // [rsp+68h] [rbp-270h] BYREF
  float v413; // [rsp+70h] [rbp-268h]
  int v414; // [rsp+74h] [rbp-264h]
  int v415; // [rsp+78h] [rbp-260h]
  float v416; // [rsp+7Ch] [rbp-25Ch]
  float v417; // [rsp+80h] [rbp-258h]
  float v418; // [rsp+84h] [rbp-254h]
  float v419; // [rsp+88h] [rbp-250h]
  float v420; // [rsp+8Ch] [rbp-24Ch]
  float v421; // [rsp+90h] [rbp-248h]
  float v422; // [rsp+94h] [rbp-244h]
  float v423; // [rsp+98h] [rbp-240h]
  float v424; // [rsp+9Ch] [rbp-23Ch]
  float v425; // [rsp+A0h] [rbp-238h]
  float v426; // [rsp+A4h] [rbp-234h]
  __int64 v427; // [rsp+A8h] [rbp-230h]
  __int64 v428; // [rsp+B0h] [rbp-228h]
  __int64 v429; // [rsp+B8h] [rbp-220h]
  int v430[4]; // [rsp+C0h] [rbp-218h] BYREF
  int v431[4]; // [rsp+D0h] [rbp-208h] BYREF
  __int128 v432; // [rsp+E0h] [rbp-1F8h] BYREF
  __int128 v433; // [rsp+F0h] [rbp-1E8h]
  __int128 v434; // [rsp+100h] [rbp-1D8h]
  __int64 v435; // [rsp+110h] [rbp-1C8h]
  __int64 v436; // [rsp+118h] [rbp-1C0h]
  __int128 v437; // [rsp+120h] [rbp-1B8h]
  __int128 v438; // [rsp+130h] [rbp-1A8h]
  __int128 v439; // [rsp+140h] [rbp-198h]
  __int128 v440; // [rsp+150h] [rbp-188h]
  __int128 v441; // [rsp+160h] [rbp-178h]
  __int128 v442; // [rsp+170h] [rbp-168h]
  __int128 v443; // [rsp+180h] [rbp-158h]
  __int128 v444; // [rsp+190h] [rbp-148h]
  __int16 v445; // [rsp+1A0h] [rbp-138h]
  char v446; // [rsp+1A8h] [rbp-130h]
  unsigned __int8 v447; // [rsp+1A9h] [rbp-12Fh]
  char v448; // [rsp+1AAh] [rbp-12Eh]
  __int64 v449[2]; // [rsp+1B8h] [rbp-120h] BYREF
  char v450; // [rsp+1C8h] [rbp-110h]
  __int64 v451; // [rsp+1D0h] [rbp-108h] BYREF
  int v452; // [rsp+1D8h] [rbp-100h]
  __int64 v453; // [rsp+1E0h] [rbp-F8h] BYREF
  int v454; // [rsp+1E8h] [rbp-F0h]

  v15 = *(a1 + 8);
  v16 = 0i64;
  if ( v15 && !*(v15 + 0x10B0) )
    v16 = *(a1 + 8);
  v17 = a10;
  v18 = a5;
  if ( *(a1 + 0x690) )
  {
    sub_220AD0(a1, a2);
LABEL_6:
    v21 = 0;
    goto LABEL_7;
  }
  if ( *(a1 + 0x6F8) )
  {
    v77 = *(a1 + 0x2B0);
    v78 = *(a1 + 0x43C) << 6;
    v79 = 1;
    if ( *(v77 + v78 + 0xA0) >= 2 )
      v79 = *(v77 + v78 + 0xA0);
    v80 = *(*(*(v77 + v78 + 0x98) + 8i64 * (*(v77 + v78 + 0xC0) % v79)) + 0x150i64);
    sub_1FAEC0(a1, &v432, a2, 1, 0, 0);
    sub_7C2D90(&v432, v80, *(a1 + 0x6FC), *(a1 + 0x700), *(a1 + 0x704), *(a1 + 8));
    v83 = *(*(a1 + 0x2B0) + 0x24i64);
    if ( v83 >= 0 )
    {
      v412 = 0i64;
      LOBYTE(v82) = *&qword_4AE58C0 == *(a1 + 8);
      sub_93DDB0(v83, &v432, &ymmword_4514980, v82, 0, &v412, 0x3F800000);
      v84 = v412;
      if ( v412 )
      {
        v412 = 0i64;
        sub_941BA0(*(v84 + 1), *v84);
      }
    }
    LOBYTE(v81) = 1;
    sub_21C600(a1, v81);
    v85 = *(a1 + 8);
    if ( v85 )
    {
      if ( (*(*(v85 + 0x50) + 0x18i64))(v85 + 0x50) )
      {
        v86 = *(a1 + 0x2B0);
        if ( *(v86 + 0x50) >= 0 && *(v86 + (*(a1 + 0x43C) << 6) + 0xCC) <= 1 )
          *(a1 + 0x684) = 1;
      }
    }
    goto LABEL_6;
  }
  if ( v15 && *(v15 + 0x1058) < 0 )
  {
    v21 = 0;
    sub_217180(a1, 0, 0, 0xFFFFFFFF, 1);
    goto LABEL_7;
  }
  sub_1FDA20(a1);
  sub_1FAEC0(a1, &v432, a2, 1, v93, 0);
  v428 = a1 + 0x654;
  v94 = v432;
  v95 = v433;
  *(a1 + 0x674) = v434;
  *(a1 + 0x664) = v95;
  *(a1 + 0x654) = v94;
  v96 = *(a1 + 0x2B0);
  v97 = *(a1 + 0x43C) << 6;
  v98 = 1;
  if ( *(v96 + v97 + 0xA0) >= 2 )
    v98 = *(v96 + v97 + 0xA0);
  v99 = *(v96 + v97 + 0xC0) % v98;
  v100 = *(*(v96 + v97 + 0x98) + 8 * v99);
  if ( *(game + 0x67D) )
  {
    LODWORD(v412) = *(v100 + 0x58);
    v101 = *(*(*(v96 + v97 + 0x98) + 8 * v99) + 0x150i64);
    if ( (*(&xmmword_4B73B80 + 1) - xmmword_4B73B80) >> 3 <= v101 )
      v102 = 0i64;
    else
      v102 = *(xmmword_4B73B80 + 8i64 * v101);
    if ( (*(&xmmword_4B747B8 + 1) - xmmword_4B747B8) >> 3 > v101 && (v147 = *(xmmword_4B747B8 + 8i64 * v101)) != 0 )
    {
      v148 = *(v147 + 4);
    }
    else if ( v102 )
    {
      v148 = *v102;
    }
    else
    {
      v148 = 0;
    }
    HIDWORD(v412) = v148;
    v149 = sub_1711240();
    sub_168A060(&v432, v101, 0i64, v149);
    v414 = v433;
    v413 = *(&v432 + 1);
    v415 = 0x447A0000;
    v453 = *v428;
    v454 = *(v428 + 8);
    v451 = *(a1 + 0x678);
    v452 = *(a1 + 0x680);
    sub_1718990(&v451, &v453, v150, &v412, 0xBF800000);
  }
  v427 = v16;
  Unit = *(a1 + 8);
  v152 = 0i64;
  if ( Unit && !*(Unit + 0x10B0) )
    v152 = *(a1 + 8);
  if ( *(a1 + 0x420)
    && COERCE_FLOAT(*(*(a1 + 0x2B0) + 0x24Ci64) & xmmword_449AF40) < *&dword_44A0308
    && COERCE_FLOAT(*(*(v152 + 0x4160) + 0x504i64) & xmmword_449AF40) < *&dword_44A0308 )
  {
    v153 = *(a1 + 0x424);
    v154 = *(a1 + 0x428);
    v155 = *(a1 + 0x42C);
    v156 = ((a2[6] * v155) + ((a2[3] * v154) + (*a2 * v153))) + a2[9];
    v157 = ((a2[7] * v155) + ((a2[4] * v154) + (a2[1] * v153))) + a2[0xA];
    v158 = (((v155 * a2[8]) + ((v154 * a2[5]) + (v153 * a2[2]))) + a2[0xB]) - *(a1 + 0x680);
    v159 = v157 - *(a1 + 0x67C);
    v160 = v156 - *(a1 + 0x678);
    v161 = fsqrt(((v158 * v158) + (v159 * v159)) + (v160 * v160));
    v162 = 0.0;
    v163 = 0.0;
    if ( v161 > *&dword_449F1A8 )
      v163 = Y / v161;
    v164 = v158 * v163;
    v165 = v159 * v163;
    v166 = v160 * v163;
    *(a1 + 0x654) = v166;
    *(a1 + 0x658) = v165;
    *(a1 + 0x65C) = v164;
    v167 = *(a1 + 0x66C);
    v168 = *(a1 + 0x670);
    v169 = (v166 * v168) - (v165 * v167);
    v170 = *(a1 + 0x674);
    v171 = (v167 * v164) - (v166 * v170);
    v172 = (v170 * v165) - (v168 * v164);
    v173 = fsqrt((v169 * v169) + ((v171 * v171) + (v172 * v172)));
    if ( v173 > *&dword_449F1A8 )
      v162 = Y / v173;
    v174 = COERCE_FLOAT(LODWORD(v166) ^ xmmword_44801F0) * v162;
    v175 = COERCE_FLOAT(LODWORD(v171) ^ xmmword_44801F0) * v162;
    v176 = COERCE_FLOAT(LODWORD(v172) ^ xmmword_44801F0) * v162;
    *(a1 + 0x660) = v176;
    *(a1 + 0x664) = v175;
    *(a1 + 0x668) = v174;
    v177 = (v175 * v166) - (v176 * v165);
    v178 = (v176 * v164) - (v166 * v174);
    v179 = (v174 * v165) - (v175 * v164);
    v180 = fsqrt((v177 * v177) + ((v178 * v178) + (v179 * v179)));
    v181 = 0.0;
    if ( v180 > *&dword_449F1A8 )
      v181 = Y / v180;
    *(a1 + 0x66C) = v179 * v181;
    *(a1 + 0x670) = v178 * v181;
    *(a1 + 0x674) = v177 * v181;
  }
  v182 = *(Unit + 0x11B0);
  v183 = 0.0;
  v184 = 0.0;
  if ( v182 )
  {
    UnitWeaponInfo = *(Unit + 0x11D0);
    v184 = 0.0;
    if ( UnitWeaponInfo )
    {
      v186 = *(a1 + 0x24);
      v184 = 0.0;
      if ( v186 >= 0 )
      {
        v184 = 0.0;
        if ( v186 < *(UnitWeaponInfo + 0x1A0) )
        {
          v187 = *(*(UnitWeaponInfo + 0x190) + 0x290 * v186 + 0xC2);
          if ( v187 == 3 )
          {
            v184 = 0.0;
            if ( *(a1 + 0x50C) )
              v184 = *(v182 + 0xCA8);
          }
          else
          {
            v184 = 0.0;
            if ( v187 == 1 )
            {
              v184 = 0.0;
              if ( *(a1 + 0x50C) )
                v184 = *(v182 + 0xCAC);
            }
          }
        }
      }
    }
  }
  v432 = xmmword_44A9010;
  LODWORD(v433) = 0;
  v188 = *(a1 + 0x4F0);
  if ( *(a1 + 0x4F0) )
  {
    v189 = *(a1 + 0x4E0);
    v190 = *(a1 + 0x4F8);
    v191 = 0i64;
    while ( 1 )
    {
      v192 = *(v189 + 8 * v191);
      if ( v190 < v192 )
        break;
      if ( v188 == ++v191 )
      {
        v183 = *(v189 + 8i64 * (v188 - 1) + 4);
        goto LABEL_259;
      }
    }
    v193 = 0.0;
    v194 = 0.0;
    if ( v191 )
      v194 = *(v189 + 8i64 * (v191 - 1));
    if ( v194 <= v192 )
    {
      v195 = Y;
      v196 = *(v189 + 8 * v191);
    }
    else
    {
      v193 = Y;
      v195 = 0.0;
      v196 = v194;
      v194 = *(v189 + 8 * v191);
    }
    if ( v194 < v190 )
    {
      if ( v196 <= v190 )
      {
        v193 = v195;
      }
      else
      {
        v197 = v196 - v194;
        v198 = *(a1 + 0x4F8);
        v198.m128_f32[0] = (v190 - v194) * (v195 - v193);
        if ( v197 > *&dword_449F1A8 || (v199 = 0i64, v197 < *&dword_449F1AC) )
        {
          v198.m128_f32[0] = v198.m128_f32[0] / v197;
          v199 = v198;
        }
        v200.m128_f32[0] = v194 - v190;
        v193 = v193 + _mm_andnot_ps(_mm_cmple_ss(0i64, v200), v199).m128_f32[0];
      }
    }
    if ( v191 )
      v201 = *(v189 + 8i64 * (v191 - 1) + 4);
    else
      v201 = 0.0;
    v183 = ((*(v189 + 8 * v191 + 4) - v201) * v193) + v201;
  }
LABEL_259:
  v429 = v99;
  v202 = *(a1 + 0x2B0);
  v203 = ((v184 + Y) + v183) * *(v202 + 0x218);
  *&v432 = v203;
  v204 = *(Unit + 0x10B0);
  if ( *(a1 + 0x212) )
  {
    v205 = 0x34Ci64;
    if ( v204 == 5 )
      v205 = 0x3ECi64;
    *&v432 = v203 * *(qword_4ACEE78 + v205);
  }
  if ( v204 )
  {
    if ( v204 == 3 )
    {
      v206 = *(qword_4ACEE78 + 0x1E);
      v207.m128_i32[0] = *(qword_4ACEE78 + 0x1F);
    }
    else
    {
      v206 = *(qword_4ACEE78 + 0x1A);
      v207.m128_i32[0] = *(qword_4ACEE78 + 0x1B);
    }
  }
  else
  {
    v206 = *(qword_4ACEE78 + 0x1C);
    v207.m128_i32[0] = *(qword_4ACEE78 + 0x1D);
  }
  v208 = _mm_cmplt_ss(0i64, v207);
  *(&v432 + 1) = v206.m128_f32[0] * *(Unit + 0x17D8);
  *(&v432 + 2) = COERCE_FLOAT(_mm_andnot_ps(v208, v206).m128_u32[0] | v207.m128_i32[0] & v208.m128_i32[0])
               * *(Unit + 0x17DC);
  HIDWORD(v432) = *(a1 + 0x510);
  LODWORD(v433) = HIDWORD(v432);
  sub_1729110(&v412, &v432, v202 + 0x70, v100 + 0x140, v428, a11, 0);
  v209 = *&v412;
  v210 = *(&v412 + 1);
  v211 = v413;
  v212 = *(a1 + 8);
  v213 = Y;
  if ( v212 )
  {
    v214 = 0i64;
    if ( LocalUnit && !*(LocalUnit + 0x10B0) )
      v214 = LocalUnit;
    if ( v214 == v212 )
      v213 = *(qword_4ACEE78 + 0x2C);
  }
  v215 = **(*(a1 + 0x2B0) + (*(a1 + 0x43C) << 6) + 0x98);
  v216 = *&dword_44A0228;
  if ( v215 )
  {
    v217 = *(v215 + 8);
    if ( v217 == 0xFFFFFFFF )
      v217 = *(v215 + 4);
    if ( (v217 & 0x80000000) != 0 )
    {
      v218 = (v217 & 0x7FFFFFFF) >> 0x1B;
      if ( (v217 & 0x7FFFFFFF) >= DWORD2(xmmword_4ACF680) )
        goto LABEL_286;
      v220 = v217 & 0x7FFFFFF;
      if ( v220 >= 0x80 << v218 )
        goto LABEL_286;
      v221 = (&xmmword_4ACF620 + 8);
    }
    else
    {
      v218 = v217 >> 0x1B;
      v219 = 0x80 << (v217 >> 0x1B);
      if ( xmmword_4ACF620 <= v217 )
        goto LABEL_286;
      v220 = v217 & 0x7FFFFFF;
      if ( v220 >= v219 )
        goto LABEL_286;
      v221 = &xmmword_4ACF5C0;
    }
    v222 = *(v221 + v218);
    if ( !v222 || !*(v222 + 8i64 * v220) )
LABEL_286:
      v216 = v213 * *(v215 + 0x5C);
  }
  v223 = 0x41C64E6D * *a11 + 0x3039;
  *a11 = v223;
  v224 = Y;
  if ( *(a1 + 0x212) )
    v224 = *(qword_4ACEE78 + 0xD4);
  v225 = ((((*(v100 + 0x60) * *&dword_44A0140) * (((v223 >> 0xF) & 0xFFFE) - 0x8000)) + Y) * v216) * v224;
  v407 = v225 * v209;
  v408 = v210 * v225;
  v409 = v211 * v225;
  v425 = *(a1 + 0xBC);
  v424 = *(a1 + 0xC0);
  v416 = *(a1 + 0xC4);
  if ( (*(*(*(a1 + 8) + 0x50i64) + 0x18i64))(*(a1 + 8) + 0x50i64) )
  {
    v226 = *(*(a1 + 8) + 0x10B0i64);
    if ( v226 != 3 && v226 != 5 )
    {
      v227 = *(v100 + 0x1C);
      if ( *&dword_44A9020 >= v227.m128_f32[0] )
      {
        v230 = dword_44A0258;
      }
      else if ( v227.m128_f32[0] >= *&dword_44A0284 )
      {
        v230 = LODWORD(dword_44A05C8);
      }
      else
      {
        v228.m128_f32[0] = *&dword_44A9020 - v227.m128_f32[0];
        v227.m128_f32[0] = (v227.m128_f32[0] * *&dword_44A9024) + *&dword_44A9028;
        v229 = _mm_cmple_ss(0i64, v228);
        v230 = _mm_andnot_ps(v229, v227).m128_u32[0] | dword_44A0258 & v229.m128_i32[0];
      }
      v231 = 0x20i64;
      if ( v416 > *&dword_44A0788 || (v231 = 0x21i64, v416 < *&dword_449F198) )
      {
        if ( COERCE_FLOAT(xmmword_449AF40 & v230) >= *&dword_44A0308 )
          sub_5303A0(&stru_4AD5EE0, v231);
      }
    }
  }
  v232 = fsqrt((v409 * v409) + ((v408 * v408) + (v407 * v407)));
  v233 = 0.0;
  if ( v232 > *&dword_449F1A8 )
    v233 = Y / v232;
  v426 = a4;
  if ( a6 > *&dword_449F1A8 || (v234 = 0.0, a6 < *&dword_449F1AC) )
    v234 = Y / a6;
  v411 = *(v100 + 0x1C);
  v235 = *(a1 + 0x2B0);
  v236 = v235[0x9A];
  v237 = v235[0x9D];
  v241 = *(v100 + 0x148);
  v402 = *(v100 + 0x148);
  v238 = v235[0xA0];
  v239 = v235[0x9F];
  v240 = v235[0x9E];
  v241.m128_f32[0] = sub_325030(*(a1 + 8));
  if ( v237 <= v240 )
  {
    v242 = v238;
    v238 = v239;
    v243 = v240;
    v240 = v237;
  }
  else
  {
    v242 = v239;
    v243 = v237;
  }
  if ( v240 >= v241.m128_f32[0] )
  {
    v244 = v409;
  }
  else
  {
    v244 = v409;
    if ( v243 <= v241.m128_f32[0] )
    {
      v238 = v242;
    }
    else
    {
      v245 = v243 - v240;
      v246 = v241;
      v246.m128_f32[0] = (v241.m128_f32[0] - v240) * (v242 - v238);
      if ( v245 > *&dword_449F1A8 || (v247 = 0i64, v245 < *&dword_449F1AC) )
      {
        v246.m128_f32[0] = v246.m128_f32[0] / v245;
        v247 = v246;
      }
      v248.m128_f32[0] = v240 - v241.m128_f32[0];
      v238 = v238 + _mm_andnot_ps(_mm_cmple_ss(0i64, v248), v247).m128_f32[0];
    }
  }
  v249 = ((((((*&dword_44A0774 - v232) * v411) * v233) * v234) * v236) * v402) * v238;
  v250 = v244 * v249;
  v251 = v408 * v249;
  v252 = v249 * v407;
  if ( v152 )
  {
    v253 = *(a1 + 8);
    if ( !*(v253 + 0x10B0) )
    {
      if ( *(a1 + 0x420) )
      {
        v254 = a2[4];
        v255 = a2[1];
        v256 = v254 * *a2;
        v422 = *a2;
        v257 = a2[8];
        v258 = a2[5];
        v423 = v258 * v255;
        v259 = a2[6];
        v403 = a2[3];
        v260 = a2[7];
        v261 = v260 * v403;
        v262 = a2[2];
        v421 = ((v260 * v403) * v262) + (((v258 * v255) * v259) + (v256 * v257));
        v420 = v258 * v422;
        v410 = v259 * v254;
        v263 = v257 * v254;
        v419 = v260 * v258;
        v418 = v254 * v262;
        v264 = v258 * v259;
        v417 = v262 * v259;
        v265 = v262;
        v266 = v262;
        v267 = v262 * v403;
        v268 = v259 * v255;
        v411 = v251;
        v405 = v250;
        v269 = v403;
        v404 = v403 * v255;
        v270 = v255 * v257;
        v271 = Y / (v421 - ((v265 * v410) + ((v260 * v420) + (v269 * (v255 * v257)))));
        v272 = v264 - (v269 * v257);
        v250 = v405;
        v273 = *(v253 + 0x9D0);
        v274 = ((((v261 - v410) * v405) + (v272 * v251)) + ((v263 - v419) * v252)) * v271;
        v275 = ((((v268 - (v260 * v422)) * v405) + (((v257 * v422) - v417) * v251)) + (((v266 * v260) - v270) * v252))
             * v271;
        v276 = ((((v256 - v404) * v405) + ((v267 - v420) * v251)) + ((v423 - v418) * v252)) * v271;
        v273[0x286] = v273[0x286] + v274;
        v273[0x287] = v273[0x287] + v275;
        v273[0x288] = v273[0x288] + v276;
        v277 = (v274 * v424) - (v275 * v425);
        v278 = (v276 * v425) - (v274 * v416);
        v273[0x289] = ((v275 * v416) - (v276 * v424)) + v273[0x289];
        v273[0x28A] = v278 + v273[0x28A];
        v273[0x28B] = v277 + v273[0x28B];
      }
    }
  }
  if ( (*(*(*(a1 + 8) + 0x50i64) + 0x10i64))(*(a1 + 8) + 0x50i64) )
  {
    v279 = *(a1 + 8);
    if ( *(v279 + 0x10B0) == 3 )
    {
      v280 = a2[1];
      v281 = a2[4];
      v282 = v281 * *a2;
      v422 = *a2;
      v283 = a2[8];
      v284 = a2[5];
      v423 = v284 * v280;
      v285 = a2[6];
      v286 = a2[3];
      v419 = a2[7];
      v287 = a2[2];
      v410 = v285 * v281;
      v421 = v419 * v284;
      v420 = v281 * v287;
      v418 = v287 * v285;
      v411 = v251;
      v417 = v286 * v280;
      v288 = Y
           / ((((v419 * v286) * v287) + (((v284 * v280) * v285) + (v282 * v283)))
            - ((v287 * (v285 * v281)) + ((v419 * (v284 * v422)) + (v286 * (v280 * v283)))));
      v289 = *(v279 + 0x3030);
      v290 = (((((v419 * v286) - (v285 * v281)) * v250) + (((v284 * v285) - (v286 * v283)) * v411))
            + (((v283 * v281) - (v419 * v284)) * v252))
           * v288;
      v291 = v416;
      v292 = v424;
      v293 = v425;
      v294 = (((((v282 - (v286 * v280)) * v250) + (((v287 * v286) - (v284 * v422)) * v411))
             + (((v284 * v280) - v420) * v252))
            * v288);
      v295 = ((((((v285 * v280) - (v419 * v422)) * v250) + (((v283 * v422) - (v287 * v285)) * v411))
             + (((v287 * v419) - (v280 * v283)) * v252))
            * v288);
      *(v289 + 0x1590) = *(v289 + 0x1590) + v290;
      *(v289 + 0x1598) = *(v289 + 0x1598) + v295;
      *(v289 + 0x15A0) = *(v289 + 0x15A0) + v294;
      v296 = v291 - *(v289 + 0x4F58);
      v297 = v292 - *(v289 + 0x4F54);
      v298 = v293 - *(v289 + 0x4F50);
      *(v289 + 0x15A8) = *(v289 + 0x15A8) - v296 * v295 + v297 * v294;
      *(v289 + 0x15B0) = v290 * v296 + *(v289 + 0x15B0) - v298 * v294;
      *(v289 + 0x15B8) = v298 * v295 - v297 * v290 + *(v289 + 0x15B8);
      *(v289 + 0x15C0) = 0i64;
      *(v289 + 0x2881) = 0;
    }
  }
  if ( !a10 )
  {
    v21 = 0;
    v17 = 0;
    v16 = v427;
    a4 = v426;
    v18 = a5;
    goto LABEL_7;
  }
  v299 = v407 + *a3;
  v407 = v299;
  v300 = v408 + a3[1];
  v408 = v300;
  v301 = v409 + a3[2];
  v409 = v301;
  a4 = v426;
  v18 = a5;
  if ( *(*(a1 + 0x2B0) + 0x2Ci64) <= 0.0 )
    *(a1 + 0x3BC) = 0;
  v302 = *(v100 + 8);
  if ( v302 == 0xFFFFFFFF )
    v302 = *(v100 + 4);
  if ( (v302 & 0x80000000) != 0 )
  {
    v303 = (v302 & 0x7FFFFFFF) >> 0x1B;
    if ( (v302 & 0x7FFFFFFF) >= DWORD2(xmmword_4ACF680) )
      goto LABEL_348;
    v305 = v302 & 0x7FFFFFF;
    if ( v305 >= 0x80 << v303 )
      goto LABEL_348;
    v306 = (&xmmword_4ACF620 + 8);
  }
  else
  {
    v303 = v302 >> 0x1B;
    v304 = 0x80 << (v302 >> 0x1B);
    if ( xmmword_4ACF620 <= v302 )
      goto LABEL_348;
    v305 = v302 & 0x7FFFFFF;
    if ( v305 >= v304 )
      goto LABEL_348;
    v306 = &xmmword_4ACF5C0;
  }
  v307 = *(v306 + v303);
  if ( !v307 )
  {
LABEL_348:
    v311 = ((v301 * v301) + (v300 * v300)) + (v299 * v299);
    v312 = *(v100 + 0x28);
    v312.m128_f32[0] = v312.m128_f32[0] / (fsqrt(v311) + *&dword_44A01A0);
    if ( *(v100 + 0x6C) )
    {
      v313.m128_i32[0] = *(a1 + 0x430);
      v314 = _mm_cmple_ss(0i64, v313);
      v314.m128_i32[0] = _mm_andnot_ps(v314, v312).m128_u32[0] | v313.m128_i32[0] & v314.m128_i32[0];
      v315 = 0x41C64E6D * *a11 + 0x3039;
      *a11 = v315;
      v316 = 0i64;
      v316.m128_f32[0] = (HIWORD(v315) & 0x7FFF) * *&dword_44A8734;
      v317.m128_i32[0] = *(a1 + 0x430);
      v318 = _mm_andnot_ps(_mm_cmple_ss(0i64, v317), v316).m128_f32[0] + fminf(v314.m128_f32[0], v312.m128_f32[0]);
    }
    else
    {
      v319 = 0x41C64E6D * *a11 + 0x3039;
      *a11 = v319;
      v318 = ((HIWORD(v319) & 0x7FFF) * *&dword_44A8734) + v312.m128_f32[0];
    }
    v320 = a10;
    if ( *(a1 + 0x212) )
      v321 = *(qword_4ACEE78 + 0xD5);
    else
      v321 = Y;
    v322 = v429;
    v323 = v318 + a5;
    sub_2163F0(a1, &v412, v429, a1 + 0x678, &v407, LODWORD(v321), LODWORD(v323), LODWORD(a5), *(a1 + 0x518));
    if ( v415 || (v326 = *(v412 + 0x2B)) == 0 )
    {
      v325 = 0;
      if ( !v152 )
        goto LABEL_361;
    }
    else
    {
      v325 = *(v326 + 0x18C) != 0;
      if ( !v152 )
        goto LABEL_361;
    }
    if ( !*(*(a1 + 0x2B0) + 9i64) )
      sub_EFCF70(*(a1 + 0x1C), v152);
LABEL_361:
    v327 = *(a1 + 0x2B0);
    if ( !*(v327 + 0x19) && !*(v327 + 0x18) )
    {
      v328 = v428;
      if ( !*(a1 + 0x198) )
        v328 = 0;
      LOBYTE(v324) = 1;
      sub_217180(a1, v324, v328, *(v100 + 0x74), 1);
    }
    v329 = *(a1 + 8);
    v16 = v427;
    if ( !*(v329 + 0x10B0) )
      ++*(a1 + 0x648);
    if ( v415 )
      goto LABEL_466;
    v406 = v325;
    v330 = a7;
    *(a1 + 0x248) = fminf(*(*(game + 0x498) + 0x26B8i64) + *(a1 + 0x248), *(*(game + 0x498) + 0x26B4i64));
    if ( (*(*(v329 + 0x50) + 0x18i64))(v329 + 0x50) )
    {
      v331 = *(a1 + 8);
      v332 = *(v331 + 0x10B0);
      if ( v332 == 5 || v332 == 3 )
      {
        v333 = *(*(v331 + 0x11D0) + 0x2A8i64);
        v334 = 0.0;
        v335 = 0.0;
        if ( v333 > 0 )
        {
          for ( i = 0i64; i != v333; ++i )
          {
            v337 = *(*(v331 + 0x11D0) + 0x300i64);
            if ( *(v337 + 0x10 * i + 8) )
            {
              v338 = 0i64;
              do
              {
                v340 = *(v337 + 0x10 * i);
                v339 = *(v340 + 8 * v338);
                if ( v339 )
                {
                  if ( !(*(*v339 + 0x108i64))(*(v340 + 8 * v338)) )
                    v339 = 0i64;
                  v331 = *(a1 + 8);
                }
                else
                {
                  v339 = 0i64;
                }
                ++v338;
                v337 = *(*(v331 + 0x11D0) + 0x300i64);
              }
              while ( v338 < *(v337 + 0x10 * i + 8) );
              if ( v339 )
              {
                v341 = v339[0x56];
                if ( v341 )
                {
                  v342 = *(v341 + 0x90);
                  if ( v342 )
                  {
                    if ( v342 == 1 )
                    {
                      v343 = 0i64;
                    }
                    else
                    {
                      v345 = (v341 + 0xD8);
                      v343 = 0i64;
                      do
                      {
                        v346 = *v345[0xFFFFFFF8];
                        if ( v346 && v335 < (*(v346 + 0x5C) * *(v346 + 0x1C)) )
                          v335 = *(v346 + 0x5C) * *(v346 + 0x1C);
                        v347 = **v345;
                        if ( v347 && v335 < (*(v347 + 0x5C) * *(v347 + 0x1C)) )
                          v335 = *(v347 + 0x5C) * *(v347 + 0x1C);
                        v343 += 2i64;
                        v345 += 0x10;
                      }
                      while ( (v342 & 0xFFFFFFFE) != v343 );
                    }
                    if ( (v342 & 1) != 0 )
                    {
                      v344 = **(v341 + 0x98 + (v343 << 6));
                      if ( v344 )
                      {
                        if ( v335 < (*(v344 + 0x5C) * *(v344 + 0x1C)) )
                          v335 = *(v344 + 0x5C) * *(v344 + 0x1C);
                      }
                    }
                  }
                }
              }
            }
          }
          LOWORD(v332) = *(v331 + 0x10B0);
          v330 = a7;
        }
        v348 = *(game + 0x430);
        v320 = a10;
        v322 = v429;
        if ( v332 != 5 )
        {
          v334 = 0.0;
          if ( *(v348 + 0x1F4) )
            v334 = *&dword_44801CC;
        }
        if ( v415 )
          v349 = 0i64;
        else
          v349 = v412;
        v350 = v334 + *(v348 + 0x1F0);
        v351 = *(*(v349 + 0x158) + 0x1Ci64);
        v352 = (((*(v349 + 0x250) * v351) * (*(v349 + 0x250) * v351))
              + ((*(v349 + 0x24C) * v351) * (*(v349 + 0x24C) * v351)))
             + ((v351 * *(v349 + 0x248)) * (v351 * *(v349 + 0x248)));
        v353 = 0i64;
        v353.m128_f32[0] = fsqrt(v352);
        v354 = 0.0;
        if ( v335 >= 0.0 )
        {
          v356 = Y;
          v355 = v335;
        }
        else
        {
          v355 = 0.0;
          v356 = v350;
          v350 = Y;
          v354 = v335;
        }
        if ( v354 < v353.m128_f32[0] )
        {
          if ( v355 <= v353.m128_f32[0] )
          {
            v350 = v356;
          }
          else
          {
            v357 = v355 - v354;
            v358 = v353;
            v358.m128_f32[0] = (v353.m128_f32[0] - v354) * (v356 - v350);
            if ( v357 > *&dword_449F1A8 || (v359 = 0i64, v357 < *&dword_449F1AC) )
            {
              v358.m128_f32[0] = v358.m128_f32[0] / v357;
              v359 = v358;
            }
            v360.m128_f32[0] = v354 - v353.m128_f32[0];
            v350 = v350 + _mm_andnot_ps(_mm_cmple_ss(0i64, v360), v359).m128_f32[0];
          }
        }
        if ( COERCE_FLOAT(xmmword_449AF40 & LODWORD(v350)) >= *&dword_44A0308 )
          sub_5303A0(&stru_4AD5EE0, 0x25i64);
      }
    }
    *(a1 + 0x458) = a5;
    v361 = v415;
    v362 = 0;
    v363 = v412;
    v364 = 0i64;
    if ( !v415 )
      v364 = v412;
    *(v364 + 0x1F) = v330;
    *(v364 + 0x100) = *(v364 + 0x100) & 0xFFF7F7FF | (*(a1 + 0x50C) << 0x13) | 0x800;
    *(v364 + 0x2AC) = *(a1 + 0x434);
    v365 = *(a1 + 0x1F4);
    v366 = *(a1 + 0x2B0);
    v369 = 0;
    if ( v365 > 0 )
    {
      v367 = *(v366 + 0x88);
      if ( v367 > 0 )
      {
        v368 = (v365 * *&dword_44890B4) / v367;
        if ( v368 > (*(v100 + 0x110) + *&dword_44A01A0) || v368 < (*(v100 + 0x114) + *&dword_44A49A4) )
          v369 = 1;
      }
    }
    v370 = *(v100 + 0x118);
    v371 = ((*(v100 + 0x130) + *(v366 + (*(a1 + 0x43C) << 6) + 0xC0)) >> 0x1F);
    LODWORD(v371) = (*(v100 + 0x130) + *(v366 + (*(a1 + 0x43C) << 6) + 0xC0)) % v370;
    if ( v369 || v371 )
    {
LABEL_455:
      v391 = v362 + 0x1000000;
      v392 = 0.0;
      if ( v321 != 0.0 )
        v391 = v362;
      v393 = 0i64;
      if ( !v361 )
        v393 = v363;
      *(v393 + 0x100) |= v391;
      sub_1288BB0(&v412, v371);
      v16 = v427;
      if ( v406 )
      {
        v394 = fsqrt((v409 * v409) + ((v408 * v408) + (v407 * v407)));
        if ( v394 > *&dword_449F1A8 )
          v392 = Y / v394;
        v395 = v392 * *(v100 + 0x190);
        *&v396 = (v395 * v409) + *(a1 + 0x680);
        *&v397 = (v395 * v408) + *(a1 + 0x67C);
        *v431 = (v395 * v407) + *(a1 + 0x678);
        v431[1] = v397;
        v431[2] = v396;
        v398 = *(v100 + 0x194);
        *v430 = v398 * v407;
        *&v430[1] = v408 * v398;
        *&v430[2] = v409 * v398;
        sub_2163F0(a1, v449, v322, v431, v430, LODWORD(v321), LODWORD(v323), LODWORD(a5), *(a1 + 0x518));
        if ( !v450 )
        {
          v399 = v449[0];
          *(v449[0] + 0x1F) = a7;
          v400 = *(v399 + 0x100) & 0xFFF7F7FF;
          v401 = v400 | (*(a1 + 0x50C) << 0x13) | 0x800;
          *(v399 + 0x100) = v401;
          *(v399 + 0x2AC) = *(a1 + 0x434);
          *(v399 + 0x100) = v391 | v401;
          sub_1288BB0(v449, v400);
        }
        sub_174DD20(v449);
      }
      (*(**(a1 + 8) + 0x250i64))(*(a1 + 8), a1);
LABEL_466:
      sub_174DD20(&v412);
      v21 = 0;
      v17 = v320;
      goto LABEL_7;
    }
    v372 = sub_2101B0();
    if ( !v372 || (v373 = v372, v374 = *(v372 + 0x10B0), v374 > 0xF) || (v375 = 0x897E, !_bittest(&v375, v374)) )
      v373 = 0i64;
    v376 = game;
    v377 = 1;
    if ( *(game + 0x4CC) )
    {
      v378 = *(a1 + 8);
      if ( v378 )
      {
        v379 = (*(*(v378 + 0x50) + 0x18i64))(v378 + 0x50);
        if ( v373 && !v379 )
        {
          v376 = game;
LABEL_439:
          v380 = *(v376 + 0x638);
          if ( *&dword_448790C < *(v380 + 0x18) )
          {
            v381 = *(v380 + 0x1C);
            if ( v381 > 0 )
            {
              v382 = fmaxf(*&dword_448790C / v381, Y);
              v383 = *(*(v373 + 0x11D0) + 0x290i64);
              if ( v383 > 0 || (v384 = 0.0, v383 < 0) )
                v384 = v382 / v383;
              v385 = v384 * *(a1 + 0x368);
              v386 = *(*(v376 + 0x630) + 0x3C8B0i64);
              if ( v386 )
              {
                v387 = *(v100 + 0x124);
                if ( v387 == 0xFFFFFFFFi64 || *&dword_44801CC > *(*(v386 + 0x181148) + 0x28 * v387 + 0x1C) )
                  v385 = v385 * *&dword_44894DC;
              }
              if ( v385 > *&dword_449F1A8 || (v388 = 0i64, v385 < *&dword_449F1AC) )
              {
                v388 = LODWORD(Y);
                v388.m128_f32[0] = Y / v385;
              }
              v389 = _mm_round_ss(0i64, v388, 0xA).m128_f32[0];
              if ( v370 > v389 )
                v389 = v370;
              v377 = (v370 + v389 - 1) / v370;
            }
          }
        }
      }
      else if ( v373 )
      {
        goto LABEL_439;
      }
    }
    v390 = *(a1 + 0x43C) << 6;
    v371 = ((*(v100 + 0x130) + *(*(a1 + 0x2B0) + v390 + 0xC0)) >> 0x1F);
    LODWORD(v371) = (*(v100 + 0x130) + *(*(a1 + 0x2B0) + v390 + 0xC0)) % (v370 * v377);
    v362 = ((v371 != 0) << 9) | 0x100;
    v361 = v415;
    v363 = v412;
    goto LABEL_455;
  }
  if ( !*(v307 + 8i64 * v305) )
  {
    v299 = v407;
    v300 = v408;
    v301 = v409;
    goto LABEL_348;
  }
  v308 = *(a1 + 8);
  if ( v308 )
  {
    if ( (*(*(v308 + 0x50) + 0x18i64))(v308 + 0x50) )
    {
      v309 = *(a1 + 0x2B0);
      if ( *(v309 + 0x50) >= 0 && *(v309 + (*(a1 + 0x43C) << 6) + 0xCC) <= 1 )
        *(a1 + 0x684) = 1;
    }
  }
  v310 = v428;
  if ( !*(a1 + 0x198) )
    v310 = 0;
  v21 = 1;
  LOBYTE(v306) = 1;
  sub_217180(a1, v306, v310, *(v100 + 0x74), 0);
  v17 = a10;
  v16 = v427;
LABEL_7:
  v22 = *(a1 + 8);
  if ( (*(v22 + 0x58) & 4) != 0 )
  {
    v23 = *(*(a1 + 0x2B0) + 0x2C0i64);
    if ( v23 > 0.0 )
    {
      *&v432 = 0x1000C91D5149Fi64;
      *(&v432 + 2) = v23;
      v24 = *(v22 + 0x1AB4);
      v25 = *(v22 + 0x1AB4) & 0x3FFFFF;
      if ( v25 < dword_4B69EF8
        && v25 < dword_4B69EE0
        && *(qword_4B69ED8 + 8 * v25 + 3) == (v24 >> 0x16)
        && *(qword_4B69ED8 + 8 * v25) != 0xFFFF )
      {
        sub_169AE50(&unk_4B69E58, v24, &v432);
      }
      v22 = *(a1 + 8);
    }
  }
  if ( !v21 && *(a1 + 0x368) > Y && v17 && v22 )
  {
    v26 = *(a1 + 0x2B0);
    v27 = *(a1 + 0x43C);
    v28 = v27 << 6;
    v29 = *(v26 + v28 + 0xC0);
    v30 = *(v26 + v28 + 0xA0);
    v31 = 1;
    if ( v30 >= 2 )
      v31 = v30;
    v32 = v29 % v31;
    v33 = v29 % v31;
    v34 = *(a1 + 0x1C);
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v32, v19, v20);
    v36 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    *(&v432 + 1) = v22;
    *&v433 = v36;
    WORD4(v433) = 0xF0B1;
    BYTE10(v433) = 0xFF;
    v434 = 0i64;
    v435 = 0i64;
    v436 = v36;
    v437 = 0i64;
    v438 = 0i64;
    v439 = 0i64;
    v440 = 0i64;
    v441 = 0i64;
    v442 = 0i64;
    v443 = 0i64;
    v444 = 0i64;
    v445 = 0;
    v37 = 0xFF;
    if ( qword_4B507E8 )
    {
      v37 = 0x7D;
      if ( !*(qword_4B507E8 + 0x60) )
      {
        v37 = 0xFF;
        if ( qword_4B50098 )
          v37 = *(qword_4B50098 + 8);
      }
    }
    BYTE10(v433) = v37;
    *&v432 = &off_44A92F0;
    v446 = v34;
    v447 = v27;
    v448 = v33;
    sub_224950(&v432);
    LOBYTE(v38) = 0xFF;
    sub_159F500(&v432, v38);
    *&v432 = &off_44A0560;
    if ( v434 < 0 )
      (*(*v436 + 0x40i64))(v436, v435);
    v22 = *(a1 + 8);
  }
  if ( (*(*(v22 + 0x50) + 0x18i64))(v22 + 0x50) )
    *(a1 + 0x460) = v18;
  *(a1 + 0x378) = a4;
  *(a1 + 0x448) = a4;
  ++*(*(a1 + 0x2B0) + (*(a1 + 0x43C) << 6) + 0xC0);
  v40 = a9;
  v41 = *(a1 + 0x3A0);
  if ( v41 > 0 )
  {
    v42 = *(a1 + 0x2B0);
    if ( !*(v42 + 0x250) )
    {
      v43 = v41 - *(v42 + 0x8C);
      v44 = 0;
      if ( v43 > 0 )
        v44 = v43;
      *(a1 + 0x3A0) = v44;
    }
  }
  v45 = *(a1 + 8);
  if ( *(v45 + 0x58) == 1 )
  {
    v46 = *(game + 0x450);
    if ( !v46 || !*(v46 + 0x5CA) )
      goto LABEL_146;
  }
  v47 = *(a1 + 0x2B0);
  if ( !*(v47 + 0xB) )
    goto LABEL_44;
  v48 = *(v45 + 0x10B0);
  if ( !*(v45 + 0x10B0) )
  {
    v103 = *(a1 + 0x2B8);
    if ( v103 < 0 )
    {
      if ( !*(a1 + 0x21C) )
        goto LABEL_114;
    }
    else
    {
      v104 = *(v45 + 0x11A0);
      if ( *(v104 + 0x2A8) <= v103 )
        goto LABEL_114;
      v105 = *(*(v104 + 0x2A0) + 4 * v103);
      if ( (v105 & 0x8000u) != 0 )
        goto LABEL_114;
      v106 = v105 >> 1;
      if ( *(v104 + 0x4E0) <= v106 || ((*(*(v104 + 0x4D8) + v106) >> ((4 * v105) & 4)) & 0xE) == 0 )
        goto LABEL_114;
    }
    if ( !byte_4B1C313 )
    {
LABEL_202:
      LODWORD(v57) = 0;
      if ( !*(v47 + 0x250) )
      {
        v146 = *(v47 + 0x88) - *(v47 + 0x8C);
        if ( v146 <= 0 )
          LOWORD(v146) = 0;
        *(a1 + 0x1F4) = v146;
      }
      goto LABEL_147;
    }
LABEL_146:
    LODWORD(v57) = 0;
    goto LABEL_147;
  }
  if ( v48 == 5 || v48 == 3 )
  {
LABEL_44:
    v49 = *(a1 + 0x43C);
    v50 = v47 + 0x98;
    if ( v17 )
    {
      v51 = *(a1 + 0x208);
      if ( v51 )
      {
        v52 = *(v47 + 0x8C);
        if ( *(v50 + (v49 << 6) + 0x24) < v52 )
          v52 = *(v50 + (v49 << 6) + 0x24);
        v53 = *(v45 + 0x11D0);
        v54 = 0xFFFFFFFFi64;
        if ( v53 )
        {
          v55 = *(a1 + 0x24);
          if ( v55 >= 0 && v55 < *(v53 + 0x1A0) )
            v54 = *(*(v53 + 0x190) + 0x290 * v55 + 0xC2);
        }
        (*(*v51 + 8i64))(v51, *(v50 + (v49 << 6) + 0x10), *(a1 + 0x10), v54, v52);
      }
    }
    v56 = v49 << 6;
    v57 = (v50 + v56 + 0x24);
    v58 = *v57;
    if ( *v57 < 0 )
    {
      if ( !(*(*(*(a1 + 8) + 0x50i64) + 0x10i64))(*(a1 + 8) + 0x50i64) )
        goto LABEL_64;
      v58 = *v57;
    }
    v59 = v58 - *(*(a1 + 0x2B0) + 0x8Ci64);
    v60 = 0;
    if ( v59 > 0 )
      v60 = v59;
    *v57 = v60;
    v61 = *(a1 + 0x2B0);
    v57 = (*(a1 + 0x43C) << 6);
    v62 = (v57 + v61 + 0xB8);
    if ( !*(v57 + v61 + 0xA0) )
      v62 = (v61 + 0x88);
    v63 = *v62;
    v64 = v63 - *(v57 + v61 + 0xBC);
    if ( v63 <= 0 )
      v64 = *(v57 + v61 + 0xBC);
    if ( !(v64 % *(v57 + v61 + 0xCC)) )
      *(v50 + v56 + 0x38) = 0;
LABEL_64:
    v65 = v16;
    v66 = *(a1 + 0x43C);
    v67 = *(a1 + 0x43D);
    v68 = *(v50 + v56 + 0x34) < 2;
    v40 = a9;
    if ( !v68 )
    {
      LOBYTE(v57) = 1;
      if ( !a9 )
      {
        v69 = *(a1 + 0x2B0);
        v70 = *(a1 + 0x43C) << 6;
        v71 = (v69 + v70 + 0xB8);
        if ( !*(v69 + v70 + 0xA0) )
          v71 = (v69 + 0x88);
        v72 = *v71;
        v73 = v72 - *(v69 + v70 + 0xBC);
        if ( v72 <= 0 )
          v73 = *(v69 + v70 + 0xBC);
        if ( v73 % *(v69 + v70 + 0xCC) )
        {
          v74 = 1;
          if ( v66 == v67 )
            goto LABEL_133;
          LODWORD(v57) = 0;
          v40 = 0;
          if ( *(v69 + 0x2A0) )
            goto LABEL_135;
        }
      }
      v75 = *(a1 + 8);
      if ( v75 )
      {
        if ( (*(*(v75 + 0x50) + 0x18i64))(v75 + 0x50) )
        {
          v76 = *(a1 + 0x2B0);
          if ( *(v76 + 0x50) >= 0 && *(v76 + (*(a1 + 0x43C) << 6) + 0xCC) >= 2 )
            *(a1 + 0x684) = 1;
        }
      }
      v40 = v57;
    }
    if ( v66 == v67 )
    {
      v74 = 1;
      LODWORD(v57) = 0;
      goto LABEL_135;
    }
    if ( !*(*(a1 + 0x2B0) + 0x2A0i64) )
      goto LABEL_95;
    v74 = 1;
    if ( v40 )
    {
      LOBYTE(v40) = 1;
LABEL_95:
      v87 = *(a1 + 0x43D);
      *(a1 + 0x43C) = v87;
      v88 = **(*(a1 + 0x2B0) + (v87 << 6) + 0x98);
      LOBYTE(v57) = 1;
      if ( v88 )
      {
        v89 = v40;
        v90 = j__malloc_base(0x10ui64);
        if ( !v90 )
        {
          do
          {
            if ( !off_4B678A0 || !off_4B678A0(0x10i64) )
            {
              *(&v432 + 1) = 0x10i64;
              LODWORD(v432) = 2;
              LOBYTE(v91) = 1;
              log_err(
                "..\\..\\prog\\engine2\\memory\\dagmem.cpp",
                0x345,
                v91,
                "Not enough memory to alloc %llu bytes",
                &v432,
                1);
            }
            v92 = j__malloc_base(0x10ui64);
          }
          while ( !v92 );
          v90 = v92;
        }
        _InterlockedAdd(&dword_4B6788C, (j__msize(v90) + 0xF) >> 4);
        _InterlockedIncrement(&dword_4B67890);
        *v90 = &off_44A9350;
        v90[1] = v88;
        v74 = 0;
        sub_1641100(&qword_4B71860, v90, 0i64, 0i64, "DelayedAction @\n\t..\\..\\skyquake\\prog\\weapon\\gun.cpp(457):");
        v40 = v89;
      }
      else
      {
        v74 = 0;
      }
LABEL_135:
      *(a1 + 0x686) = 1;
      v115 = (*(*(*(a1 + 8) + 0x50i64) + 0x18i64))(*(a1 + 8) + 0x50i64);
      if ( v74 )
      {
        v16 = v65;
      }
      else
      {
        v16 = v65;
        if ( v115 )
        {
          v17 = a10;
          if ( qword_4B44C68 && LocalUnit && *(qword_4B44C68 + 0x4A84) != 0.0 && *(LocalUnit + 0x10B0) == 3 )
            sub_11177A0(*(game + 0x440) + 0x910i64, v116, 0i64);
          goto LABEL_147;
        }
      }
      v17 = a10;
      goto LABEL_147;
    }
LABEL_133:
    LODWORD(v57) = 0;
    v40 = 0;
    goto LABEL_135;
  }
LABEL_114:
  if ( *(v47 + 0xC) && (*(*(v45 + 0x50) + 0x10i64))(v45 + 0x50) )
  {
    v107 = *(*(a1 + 0x2B0) + (*(a1 + 0x43C) << 6) + 0xBC);
    if ( v107 <= 0 )
      goto LABEL_117;
  }
  else
  {
    v107 = *(a1 + 0x1F4);
    if ( v107 <= 0 )
    {
LABEL_117:
      LODWORD(v57) = 0;
      if ( v107 || byte_4B1C313 )
        goto LABEL_147;
      v47 = *(a1 + 0x2B0);
      goto LABEL_202;
    }
  }
  v108 = *(a1 + 0x2B0);
  LODWORD(v57) = 0;
  if ( !*(v108 + 0x250) )
  {
    v109 = *(v108 + 0x8C);
    v110 = v107 - v109;
    if ( v107 < v109 )
      v109 = v107;
    if ( v110 <= 0 )
      LOWORD(v110) = 0;
    *(a1 + 0x1F4) = v110;
    if ( v17 )
    {
      v111 = *(a1 + 0x208);
      if ( v111 )
      {
        v112 = *(*(a1 + 8) + 0x11D0i64);
        v113 = 0xFFFFFFFFi64;
        if ( v112 )
        {
          v114 = *(a1 + 0x24);
          if ( v114 >= 0 && v114 < *(v112 + 0x1A0) )
            v113 = *(*(v112 + 0x190) + 0x290 * v114 + 0xC2);
        }
        (*(*v111 + 8i64))(v111, *(a1 + 0x20), *(a1 + 0x10), v113, v109);
      }
      goto LABEL_146;
    }
  }
LABEL_147:
  if ( *(*(a1 + 0x2B0) + (*(a1 + 0x43C) << 6) + 0xCC) >= 2 )
    v117 = Y;
  else
    v117 = a8;
  if ( v57 | v40 )
    v117 = a8;
  v118 = sub_215F90(a1, v40, v39, v57) * v117;
  v120 = sub_1198FB0(*(*(a1 + 8) + 0x1AB4i64), *(a1 + 0x10), v119);
  *(a1 + 0x444) = (*&v120 * v118) + *(a1 + 0x444);
  v121 = *(a1 + 0x2B0);
  if ( v121 )
  {
    v122 = *(v121 + 0x2D0);
    if ( v122 )
      *(a1 + 0x500) = fminf(*v122 + *(a1 + 0x500), Y);
  }
  sub_1FDCC0(a1);
  *&v432 = 0x1000C5F5446EAi64;
  BYTE8(v432) = 0;
  sub_220F60(*(*(a1 + 8) + 0x1AB4i64), &v432);
  if ( v57 | v40 )
  {
    if ( *(*(a1 + 0x2B0) + 0xCi64) )
      v123 = (*(*(*(a1 + 8) + 0x50i64) + 0x10i64))(*(a1 + 8) + 0x50i64);
    else
      v123 = 0;
    *(a1 + 0x1F7) = v123;
    *(a1 + 0x3A2) = 0;
    *(a1 + 0x528) = 1;
  }
  if ( v16 && (*(v16 + 0x1058) & 0x100) != 0 && v17 )
  {
    v124 = 0x41C64E6D * dword_4A79158 + 0x3039;
    v125 = game;
    dword_4A79158 = v124;
    v126 = qword_4B19AA0;
    if ( qword_4B19AA0 )
    {
      v127 = *(game + 0x440);
      v128 = *(v127 + 0x3F0);
      if ( v128 < *(v127 + 0x278) )
      {
        v129 = *(*(v127 + 0x268) + 8 * v128);
        if ( v129 )
        {
          if ( *&qword_4AE58C0 )
          {
            (*(*v129 + 0xB8i64))(v129, 0x400i64);
            v125 = game;
            v124 = dword_4A79158;
            v126 = qword_4B19AA0;
          }
        }
      }
    }
    else
    {
      v126 = 0i64;
    }
    dword_4A79158 = 0x41C64E6D * v124 + 0x3039;
    if ( v126 )
    {
      v130 = *(v125 + 0x440);
      v131 = *(v130 + 0x3F0);
      if ( v131 < *(v130 + 0x278) )
      {
        v132 = *(*(v130 + 0x268) + 8 * v131);
        if ( v132 )
        {
          if ( *&qword_4AE58C0 )
            (*(*v132 + 0xB8i64))(v132, 0x200000i64);
        }
      }
    }
  }
  v133 = *(a1 + 0x2B0);
  v134 = *(a1 + 0x43C) << 6;
  v135 = 1;
  if ( *(v133 + v134 + 0xA0) >= 2 )
    v135 = *(v133 + v134 + 0xA0);
  v136 = *(*(v133 + v134 + 0x98) + 8i64 * (*(v133 + v134 + 0xC0) % v135));
  v137 = *(v136 + 8);
  if ( v137 == 0xFFFFFFFF )
    v137 = *(v136 + 4);
  if ( (v137 & 0x80000000) != 0 )
  {
    v138 = (v137 & 0x7FFFFFFF) >> 0x1B;
    v139 = (0x80 << v138);
    v140 = 0i64;
    if ( (v137 & 0x7FFFFFFF) < DWORD2(xmmword_4ACEF68) )
    {
      v141 = v137 & 0x7FFFFFF;
      if ( v141 < v139 )
      {
        v139 = &xmmword_4ACEF08 + 8;
LABEL_185:
        v142 = *(v139 + 8i64 * v138);
        if ( v142 )
          v140 = *(v142 + 8i64 * v141);
        else
          v140 = 0i64;
      }
    }
  }
  else
  {
    v138 = v137 >> 0x1B;
    v139 = (0x80 << (v137 >> 0x1B));
    v140 = 0i64;
    if ( xmmword_4ACEF08 > v137 )
    {
      v141 = v137 & 0x7FFFFFF;
      if ( v141 < v139 )
      {
        v139 = &xmmword_4ACEEA8;
        goto LABEL_185;
      }
    }
  }
  result = *(game + 0x498);
  if ( *(result + 0x1FA5) )
  {
    result = (*(*(*(a1 + 8) + 0x50i64) + 0x20i64))(*(a1 + 8) + 0x50i64, v139);
    if ( v140 )
    {
      if ( v17 )
      {
        if ( result )
        {
          result = game;
          if ( *(v140 + 4) >= *(*(game + 0x498) + 0x1FA0i64) )
          {
            v144 = *(a1 + 8);
            result = *(*(game + 0x420) + 0x908i64);
            if ( *(result + 0x197) )
              v145 = 0;
            else
              v145 = dword_44801E8;
            *(v144 + 0xFA4) = v145;
            if ( (*(v144 + 0x58) & 4) != 0 && (*(v144 + 0x10B8) || *(v144 + 0x74C)) )
            {
              LOBYTE(v432) = 0;
              if ( *(v144 + 0xFC8) )
              {
                sub_158CE00(v144 + 0xFA8, v144, &v432);
                result = v432;
                *(v144 + 0xFC8) = v432;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
