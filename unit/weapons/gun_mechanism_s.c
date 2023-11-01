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
  __int64 v123; // r8
  __int64 v124; // r9
  char v125; // al
  int v126; // edx
  __int64 v127; // rax
  __int64 v128; // rbx
  __int64 ballistics; // rcx
  __int64 v130; // rdi
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rcx
  __int64 v135; // rcx
  unsigned __int64 v136; // rbp
  unsigned int v137; // ebx
  __int64 v138; // rcx
  unsigned int v139; // eax
  unsigned int v140; // ecx
  unsigned __int64 v141; // rdx
  __int64 v142; // rdi
  unsigned int v143; // eax
  __int64 v144; // rcx
  __int64 result; // rax
  __int64 v146; // rsi
  int v147; // xmm0_4
  int v148; // eax
  __int64 v149; // rcx
  int v150; // xmm0_4
  __int64 v151; // rax
  int v152; // r8d
  __int64 Unit; // rax
  __int64 v154; // r12
  float v155; // xmm4_4
  float v156; // xmm3_4
  float v157; // xmm8_4
  float v158; // xmm0_4
  float v159; // xmm2_4
  float v160; // xmm8_4
  float v161; // xmm2_4
  float v162; // xmm0_4
  float v163; // xmm4_4
  float v164; // xmm6_4
  float v165; // xmm3_4
  float v166; // xmm8_4
  float v167; // xmm2_4
  float v168; // xmm0_4
  float v169; // xmm5_4
  float v170; // xmm7_4
  float v171; // xmm3_4
  float v172; // xmm4_4
  float v173; // xmm5_4
  float v174; // xmm4_4
  float v175; // xmm7_4
  float v176; // xmm3_4
  float v177; // xmm5_4
  float v178; // xmm4_4
  float v179; // xmm6_4
  float v180; // xmm4_4
  float v181; // xmm3_4
  float v182; // xmm1_4
  float v183; // xmm0_4
  __int64 v184; // rcx
  float v185; // xmm2_4
  float v186; // xmm0_4
  __int64 UnitWeaponInfo; // rdx
  __int64 v188; // rbp
  int v189; // edx
  __int64 v190; // rbp
  __int64 v191; // rcx
  float v192; // xmm2_4
  __int64 v193; // rdx
  float v194; // xmm5_4
  float v195; // xmm1_4
  float v196; // xmm3_4
  float v197; // xmm6_4
  float v198; // xmm4_4
  float v199; // xmm4_4
  __m128 v200; // xmm5
  __m128 v201; // xmm6
  __m128 v202; // xmm3
  float v203; // xmm3_4
  __int64 v204; // r8
  float v205; // xmm0_4
  int v206; // ecx
  __int64 v207; // rbp
  __m128 v208; // xmm0
  __m128 v209; // xmm2
  __m128 v210; // xmm1
  float v211; // xmm2_4
  float v212; // xmm1_4
  float v213; // xmm0_4
  __int64 v214; // rax
  float v215; // xmm3_4
  __int64 v216; // rcx
  __int64 v217; // rax
  float v218; // xmm4_4
  unsigned int v219; // edx
  unsigned int v220; // ecx
  unsigned int v221; // ebp
  unsigned int v222; // edx
  __int128 *v223; // rbp
  __int64 v224; // rcx
  unsigned int v225; // eax
  float v226; // xmm5_4
  float v227; // xmm3_4
  int v228; // eax
  __m128 v229; // xmm0
  __m128 v230; // xmm1
  __m128 v231; // xmm2
  int v232; // xmm2_4
  __int64 v233; // rdx
  float v234; // xmm8_4
  float v235; // xmm14_4
  float v236; // xmm9_4
  float *v237; // rax
  float v238; // xmm15_4
  float v239; // xmm7_4
  float v240; // xmm10_4
  float v241; // xmm12_4
  float v242; // xmm6_4
  __m128 v243; // xmm0
  float v244; // xmm2_4
  float v245; // xmm1_4
  float v246; // xmm11_4
  float v247; // xmm1_4
  __m128 v248; // xmm3
  __m128 v249; // xmm2
  __m128 v250; // xmm6
  float v251; // xmm7_4
  float v252; // xmm11_4
  float v253; // xmm12_4
  float v254; // xmm7_4
  __int64 v255; // rax
  float v256; // xmm1_4
  float v257; // xmm15_4
  float v258; // xmm6_4
  float v259; // xmm13_4
  float v260; // xmm14_4
  float v261; // xmm2_4
  float v262; // xmm9_4
  float v263; // xmm3_4
  float v264; // xmm10_4
  float v265; // xmm8_4
  float v266; // xmm14_4
  float v267; // xmm4_4
  float v268; // xmm5_4
  float v269; // xmm10_4
  float v270; // xmm2_4
  float v271; // xmm11_4
  float v272; // xmm1_4
  float v273; // xmm15_4
  float v274; // xmm14_4
  float *v275; // rax
  float v276; // xmm3_4
  float v277; // xmm2_4
  float v278; // xmm6_4
  float v279; // xmm0_4
  float v280; // xmm4_4
  __int64 v281; // rax
  float v282; // xmm15_4
  float v283; // xmm6_4
  float v284; // xmm9_4
  float v285; // xmm13_4
  float v286; // xmm14_4
  float v287; // xmm1_4
  float v288; // xmm0_4
  float v289; // xmm10_4
  float v290; // xmm12_4
  __int64 v291; // rax
  float v292; // xmm3_4
  double v293; // xmm6_8
  double v294; // xmm5_8
  double v295; // xmm2_8
  double v296; // xmm4_8
  double v297; // xmm1_8
  double v298; // xmm6_8
  double v299; // xmm5_8
  double v300; // xmm2_8
  float v301; // xmm0_4
  float v302; // xmm1_4
  float v303; // xmm2_4
  unsigned int v304; // eax
  unsigned int v305; // ecx
  unsigned int v306; // edx
  unsigned int v307; // eax
  __int128 *v308; // rdx
  __int64 v309; // rcx
  __int64 v310; // rcx
  __int64 v311; // rax
  int v312; // r8d
  float v313; // xmm2_4
  __m128 v314; // xmm0
  __m128 v315; // xmm1
  __m128 v316; // xmm2
  unsigned int v317; // eax
  __m128 v318; // xmm1
  __m128 v319; // rt1
  float v320; // xmm9_4
  unsigned int v321; // eax
  char v322; // r13
  float v323; // xmm10_4
  int v324; // esi
  float v325; // xmm9_4
  int v326; // edx
  bool v327; // di
  __int64 v328; // rax
  __int64 v329; // rax
  int v330; // r8d
  __int64 v331; // rcx
  char v332; // di
  __int64 v333; // rax
  int v334; // ecx
  __int64 v335; // rsi
  float v336; // xmm8_4
  float v337; // xmm6_4
  __int64 i; // r13
  __int64 v339; // rcx
  unsigned __int64 v340; // rbp
  _QWORD *v341; // rdi
  __int64 v342; // rcx
  __int64 v343; // rcx
  int v344; // r8d
  __int64 v345; // rdi
  __int64 v346; // rcx
  __int64 **v347; // rbx
  __int64 v348; // rbp
  __int64 v349; // rbp
  __int64 v350; // rax
  __int64 v351; // rcx
  float v352; // xmm8_4
  float v353; // xmm0_4
  float v354; // xmm1_4
  __m128 v355; // xmm0
  float v356; // xmm1_4
  float v357; // xmm2_4
  float v358; // xmm3_4
  float v359; // xmm2_4
  __m128 v360; // xmm4
  __m128 v361; // xmm3
  __m128 v362; // xmm1
  char v363; // r8
  int v364; // ebx
  __int64 v365; // r9
  __int64 v366; // rcx
  __int16 v367; // dx
  __int64 v368; // rax
  int v369; // ebp
  float v370; // xmm0_4
  bool v371; // bp
  int v372; // r12d
  __int64 v373; // rdx
  __int64 v374; // rax
  __int64 v375; // rbx
  unsigned int v376; // eax
  int v377; // ecx
  __int64 v378; // rax
  int v379; // edi
  __int64 v380; // rcx
  char v381; // al
  __int64 v382; // rcx
  int v383; // ecx
  float v384; // xmm1_4
  int v385; // ecx
  float v386; // xmm0_4
  float v387; // xmm0_4
  __int64 v388; // rax
  __int64 v389; // rcx
  __m128 v390; // xmm1
  int v391; // eax
  unsigned __int64 v392; // rcx
  int v393; // edi
  float v394; // xmm6_4
  __int64 v395; // rax
  float v396; // xmm3_4
  float v397; // xmm6_4
  int v398; // xmm3_4
  int v399; // xmm4_4
  float v400; // xmm3_4
  __int64 v401; // rax
  __int64 v402; // rdx
  int v403; // ecx
  float v404; // [rsp+48h] [rbp-290h]
  float v405; // [rsp+48h] [rbp-290h]
  float v406; // [rsp+48h] [rbp-290h]
  float v407; // [rsp+4Ch] [rbp-28Ch]
  bool v408; // [rsp+4Ch] [rbp-28Ch]
  float v409; // [rsp+50h] [rbp-288h] BYREF
  float v410; // [rsp+54h] [rbp-284h]
  float v411; // [rsp+58h] [rbp-280h]
  float v412; // [rsp+60h] [rbp-278h]
  float v413; // [rsp+64h] [rbp-274h]
  unsigned int *v414; // [rsp+68h] [rbp-270h] BYREF
  float v415; // [rsp+70h] [rbp-268h]
  int v416; // [rsp+74h] [rbp-264h]
  int v417; // [rsp+78h] [rbp-260h]
  float v418; // [rsp+7Ch] [rbp-25Ch]
  float v419; // [rsp+80h] [rbp-258h]
  float v420; // [rsp+84h] [rbp-254h]
  float v421; // [rsp+88h] [rbp-250h]
  float v422; // [rsp+8Ch] [rbp-24Ch]
  float v423; // [rsp+90h] [rbp-248h]
  float v424; // [rsp+94h] [rbp-244h]
  float v425; // [rsp+98h] [rbp-240h]
  float v426; // [rsp+9Ch] [rbp-23Ch]
  float v427; // [rsp+A0h] [rbp-238h]
  float v428; // [rsp+A4h] [rbp-234h]
  __int64 v429; // [rsp+A8h] [rbp-230h]
  __int64 v430; // [rsp+B0h] [rbp-228h]
  __int64 v431; // [rsp+B8h] [rbp-220h]
  int v432[4]; // [rsp+C0h] [rbp-218h] BYREF
  int v433[4]; // [rsp+D0h] [rbp-208h] BYREF
  __int128 v434; // [rsp+E0h] [rbp-1F8h] BYREF
  __int128 v435; // [rsp+F0h] [rbp-1E8h]
  __int128 v436; // [rsp+100h] [rbp-1D8h]
  __int64 v437; // [rsp+110h] [rbp-1C8h]
  __int64 v438; // [rsp+118h] [rbp-1C0h]
  __int128 v439; // [rsp+120h] [rbp-1B8h]
  __int128 v440; // [rsp+130h] [rbp-1A8h]
  __int128 v441; // [rsp+140h] [rbp-198h]
  __int128 v442; // [rsp+150h] [rbp-188h]
  __int128 v443; // [rsp+160h] [rbp-178h]
  __int128 v444; // [rsp+170h] [rbp-168h]
  __int128 v445; // [rsp+180h] [rbp-158h]
  __int128 v446; // [rsp+190h] [rbp-148h]
  __int16 v447; // [rsp+1A0h] [rbp-138h]
  char v448; // [rsp+1A8h] [rbp-130h]
  unsigned __int8 v449; // [rsp+1A9h] [rbp-12Fh]
  char v450; // [rsp+1AAh] [rbp-12Eh]
  __int64 v451[2]; // [rsp+1B8h] [rbp-120h] BYREF
  char v452; // [rsp+1C8h] [rbp-110h]
  __int64 v453; // [rsp+1D0h] [rbp-108h] BYREF
  int v454; // [rsp+1D8h] [rbp-100h]
  __int64 v455; // [rsp+1E0h] [rbp-F8h] BYREF
  int v456; // [rsp+1E8h] [rbp-F0h]

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
    sub_1FAEC0(a1, &v434, a2, 1, 0, 0);
    sub_7C2D90(&v434, v80, *(a1 + 0x6FC), *(a1 + 0x700), *(a1 + 0x704), *(a1 + 8));
    v83 = *(*(a1 + 0x2B0) + 0x24i64);
    if ( v83 >= 0 )
    {
      v414 = 0i64;
      LOBYTE(v82) = *&mUnit == *(a1 + 8);
      sub_93DDB0(v83, &v434, &ymmword_4514980, v82, 0, &v414, 0x3F800000);
      v84 = v414;
      if ( v414 )
      {
        v414 = 0i64;
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
  sub_1FAEC0(a1, &v434, a2, 1, v93, 0);
  v430 = a1 + 0x654;
  v94 = v434;
  v95 = v435;
  *(a1 + 0x674) = v436;
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
    LODWORD(v414) = *(v100 + 0x58);
    v101 = *(*(*(v96 + v97 + 0x98) + 8 * v99) + 0x150i64);
    if ( (*(&xmmword_4B73B80 + 1) - xmmword_4B73B80) >> 3 <= v101 )
      v102 = 0i64;
    else
      v102 = *(xmmword_4B73B80 + 8i64 * v101);
    if ( (*(&xmmword_4B747B8 + 1) - xmmword_4B747B8) >> 3 > v101 && (v149 = *(xmmword_4B747B8 + 8i64 * v101)) != 0 )
    {
      v150 = *(v149 + 4);
    }
    else if ( v102 )
    {
      v150 = *v102;
    }
    else
    {
      v150 = 0;
    }
    HIDWORD(v414) = v150;
    v151 = sub_1711240();
    sub_168A060(&v434, v101, 0i64, v151);
    v416 = v435;
    v415 = *(&v434 + 1);
    v417 = 0x447A0000;
    v455 = *v430;
    v456 = *(v430 + 8);
    v453 = *(a1 + 0x678);
    v454 = *(a1 + 0x680);
    sub_1718990(&v453, &v455, v152, &v414, 0xBF800000);
  }
  v429 = v16;
  Unit = *(a1 + 8);
  v154 = 0i64;
  if ( Unit && !*(Unit + 0x10B0) )
    v154 = *(a1 + 8);
  if ( *(a1 + 0x420)
    && COERCE_FLOAT(*(*(a1 + 0x2B0) + 0x24Ci64) & xmmword_449AF40) < *&dword_44A0308
    && COERCE_FLOAT(*(*(v154 + 0x4160) + 0x504i64) & xmmword_449AF40) < *&dword_44A0308 )
  {
    v155 = *(a1 + 0x424);
    v156 = *(a1 + 0x428);
    v157 = *(a1 + 0x42C);
    v158 = ((a2[6] * v157) + ((a2[3] * v156) + (*a2 * v155))) + a2[9];
    v159 = ((a2[7] * v157) + ((a2[4] * v156) + (a2[1] * v155))) + a2[0xA];
    v160 = (((v157 * a2[8]) + ((v156 * a2[5]) + (v155 * a2[2]))) + a2[0xB]) - *(a1 + 0x680);
    v161 = v159 - *(a1 + 0x67C);
    v162 = v158 - *(a1 + 0x678);
    v163 = fsqrt(((v160 * v160) + (v161 * v161)) + (v162 * v162));
    v164 = 0.0;
    v165 = 0.0;
    if ( v163 > *&dword_449F1A8 )
      v165 = Y / v163;
    v166 = v160 * v165;
    v167 = v161 * v165;
    v168 = v162 * v165;
    *(a1 + 0x654) = v168;
    *(a1 + 0x658) = v167;
    *(a1 + 0x65C) = v166;
    v169 = *(a1 + 0x66C);
    v170 = *(a1 + 0x670);
    v171 = (v168 * v170) - (v167 * v169);
    v172 = *(a1 + 0x674);
    v173 = (v169 * v166) - (v168 * v172);
    v174 = (v172 * v167) - (v170 * v166);
    v175 = fsqrt((v171 * v171) + ((v173 * v173) + (v174 * v174)));
    if ( v175 > *&dword_449F1A8 )
      v164 = Y / v175;
    v176 = COERCE_FLOAT(LODWORD(v168) ^ xmmword_44801F0) * v164;
    v177 = COERCE_FLOAT(LODWORD(v173) ^ xmmword_44801F0) * v164;
    v178 = COERCE_FLOAT(LODWORD(v174) ^ xmmword_44801F0) * v164;
    *(a1 + 0x660) = v178;
    *(a1 + 0x664) = v177;
    *(a1 + 0x668) = v176;
    v179 = (v177 * v168) - (v178 * v167);
    v180 = (v178 * v166) - (v168 * v176);
    v181 = (v176 * v167) - (v177 * v166);
    v182 = fsqrt((v179 * v179) + ((v180 * v180) + (v181 * v181)));
    v183 = 0.0;
    if ( v182 > *&dword_449F1A8 )
      v183 = Y / v182;
    *(a1 + 0x66C) = v181 * v183;
    *(a1 + 0x670) = v180 * v183;
    *(a1 + 0x674) = v179 * v183;
  }
  v184 = *(Unit + 0x11B0);
  v185 = 0.0;
  v186 = 0.0;
  if ( v184 )
  {
    UnitWeaponInfo = *(Unit + 0x11D0);
    v186 = 0.0;
    if ( UnitWeaponInfo )
    {
      v188 = *(a1 + 0x24);
      v186 = 0.0;
      if ( v188 >= 0 )
      {
        v186 = 0.0;
        if ( v188 < *(UnitWeaponInfo + 0x1A0) )
        {
          v189 = *(*(UnitWeaponInfo + 0x190) + 0x290 * v188 + 0xC2);
          if ( v189 == 3 )
          {
            v186 = 0.0;
            if ( *(a1 + 0x50C) )
              v186 = *(v184 + 0xCA8);
          }
          else
          {
            v186 = 0.0;
            if ( v189 == 1 )
            {
              v186 = 0.0;
              if ( *(a1 + 0x50C) )
                v186 = *(v184 + 0xCAC);
            }
          }
        }
      }
    }
  }
  v434 = xmmword_44A9010;
  LODWORD(v435) = 0;
  v190 = *(a1 + 0x4F0);
  if ( *(a1 + 0x4F0) )
  {
    v191 = *(a1 + 0x4E0);
    v192 = *(a1 + 0x4F8);
    v193 = 0i64;
    while ( 1 )
    {
      v194 = *(v191 + 8 * v193);
      if ( v192 < v194 )
        break;
      if ( v190 == ++v193 )
      {
        v185 = *(v191 + 8i64 * (v190 - 1) + 4);
        goto LABEL_259;
      }
    }
    v195 = 0.0;
    v196 = 0.0;
    if ( v193 )
      v196 = *(v191 + 8i64 * (v193 - 1));
    if ( v196 <= v194 )
    {
      v197 = Y;
      v198 = *(v191 + 8 * v193);
    }
    else
    {
      v195 = Y;
      v197 = 0.0;
      v198 = v196;
      v196 = *(v191 + 8 * v193);
    }
    if ( v196 < v192 )
    {
      if ( v198 <= v192 )
      {
        v195 = v197;
      }
      else
      {
        v199 = v198 - v196;
        v200 = *(a1 + 0x4F8);
        v200.m128_f32[0] = (v192 - v196) * (v197 - v195);
        if ( v199 > *&dword_449F1A8 || (v201 = 0i64, v199 < *&dword_449F1AC) )
        {
          v200.m128_f32[0] = v200.m128_f32[0] / v199;
          v201 = v200;
        }
        v202.m128_f32[0] = v196 - v192;
        v195 = v195 + _mm_andnot_ps(_mm_cmple_ss(0i64, v202), v201).m128_f32[0];
      }
    }
    if ( v193 )
      v203 = *(v191 + 8i64 * (v193 - 1) + 4);
    else
      v203 = 0.0;
    v185 = ((*(v191 + 8 * v193 + 4) - v203) * v195) + v203;
  }
LABEL_259:
  v431 = v99;
  v204 = *(a1 + 0x2B0);
  v205 = ((v186 + Y) + v185) * *(v204 + 0x218);
  *&v434 = v205;
  v206 = *(Unit + 0x10B0);
  if ( *(a1 + 0x212) )
  {
    v207 = 0x34Ci64;
    if ( v206 == 5 )
      v207 = 0x3ECi64;
    *&v434 = v205 * *(qword_4ACEE78 + v207);
  }
  if ( v206 )
  {
    if ( v206 == 3 )
    {
      v208 = *(qword_4ACEE78 + 0x1E);
      v209.m128_i32[0] = *(qword_4ACEE78 + 0x1F);
    }
    else
    {
      v208 = *(qword_4ACEE78 + 0x1A);
      v209.m128_i32[0] = *(qword_4ACEE78 + 0x1B);
    }
  }
  else
  {
    v208 = *(qword_4ACEE78 + 0x1C);
    v209.m128_i32[0] = *(qword_4ACEE78 + 0x1D);
  }
  v210 = _mm_cmplt_ss(0i64, v209);
  *(&v434 + 1) = v208.m128_f32[0] * *(Unit + 0x17D8);
  *(&v434 + 2) = COERCE_FLOAT(_mm_andnot_ps(v210, v208).m128_u32[0] | v209.m128_i32[0] & v210.m128_i32[0])
               * *(Unit + 0x17DC);
  HIDWORD(v434) = *(a1 + 0x510);
  LODWORD(v435) = HIDWORD(v434);
  sub_1729110(&v414, &v434, v204 + 0x70, v100 + 0x140, v430, a11, 0);
  v211 = *&v414;
  v212 = *(&v414 + 1);
  v213 = v415;
  v214 = *(a1 + 8);
  v215 = Y;
  if ( v214 )
  {
    v216 = 0i64;
    if ( LocalUnit && !*(LocalUnit + 0x10B0) )
      v216 = LocalUnit;
    if ( v216 == v214 )
      v215 = *(qword_4ACEE78 + 0x2C);
  }
  v217 = **(*(a1 + 0x2B0) + (*(a1 + 0x43C) << 6) + 0x98);
  v218 = *&dword_44A0228;
  if ( v217 )
  {
    v219 = *(v217 + 8);
    if ( v219 == 0xFFFFFFFF )
      v219 = *(v217 + 4);
    if ( (v219 & 0x80000000) != 0 )
    {
      v220 = (v219 & 0x7FFFFFFF) >> 0x1B;
      if ( (v219 & 0x7FFFFFFF) >= DWORD2(xmmword_4ACF680) )
        goto LABEL_286;
      v222 = v219 & 0x7FFFFFF;
      if ( v222 >= 0x80 << v220 )
        goto LABEL_286;
      v223 = (&xmmword_4ACF620 + 8);
    }
    else
    {
      v220 = v219 >> 0x1B;
      v221 = 0x80 << (v219 >> 0x1B);
      if ( xmmword_4ACF620 <= v219 )
        goto LABEL_286;
      v222 = v219 & 0x7FFFFFF;
      if ( v222 >= v221 )
        goto LABEL_286;
      v223 = &xmmword_4ACF5C0;
    }
    v224 = *(v223 + v220);
    if ( !v224 || !*(v224 + 8i64 * v222) )
LABEL_286:
      v218 = v215 * *(v217 + 0x5C);
  }
  v225 = 0x41C64E6D * *a11 + 0x3039;
  *a11 = v225;
  v226 = Y;
  if ( *(a1 + 0x212) )
    v226 = *(qword_4ACEE78 + 0xD4);
  v227 = ((((*(v100 + 0x60) * *&dword_44A0140) * (((v225 >> 0xF) & 0xFFFE) - 0x8000)) + Y) * v218) * v226;
  v409 = v227 * v211;
  v410 = v212 * v227;
  v411 = v213 * v227;
  v427 = *(a1 + 0xBC);
  v426 = *(a1 + 0xC0);
  v418 = *(a1 + 0xC4);
  if ( (*(*(*(a1 + 8) + 0x50i64) + 0x18i64))(*(a1 + 8) + 0x50i64) )
  {
    v228 = *(*(a1 + 8) + 0x10B0i64);
    if ( v228 != 3 && v228 != 5 )
    {
      v229 = *(v100 + 0x1C);
      if ( *&dword_44A9020 >= v229.m128_f32[0] )
      {
        v232 = dword_44A0258;
      }
      else if ( v229.m128_f32[0] >= *&dword_44A0284 )
      {
        v232 = LODWORD(dword_44A05C8);
      }
      else
      {
        v230.m128_f32[0] = *&dword_44A9020 - v229.m128_f32[0];
        v229.m128_f32[0] = (v229.m128_f32[0] * *&dword_44A9024) + *&dword_44A9028;
        v231 = _mm_cmple_ss(0i64, v230);
        v232 = _mm_andnot_ps(v231, v229).m128_u32[0] | dword_44A0258 & v231.m128_i32[0];
      }
      v233 = 0x20i64;
      if ( v418 > *&dword_44A0788 || (v233 = 0x21i64, v418 < *&dword_449F198) )
      {
        if ( COERCE_FLOAT(xmmword_449AF40 & v232) >= *&dword_44A0308 )
          sub_5303A0(&stru_4AD5EE0, v233);
      }
    }
  }
  v234 = fsqrt((v411 * v411) + ((v410 * v410) + (v409 * v409)));
  v235 = 0.0;
  if ( v234 > *&dword_449F1A8 )
    v235 = Y / v234;
  v428 = a4;
  if ( a6 > *&dword_449F1A8 || (v236 = 0.0, a6 < *&dword_449F1AC) )
    v236 = Y / a6;
  v413 = *(v100 + 0x1C);
  v237 = *(a1 + 0x2B0);
  v238 = v237[0x9A];
  v239 = v237[0x9D];
  v243 = *(v100 + 0x148);
  v404 = *(v100 + 0x148);
  v240 = v237[0xA0];
  v241 = v237[0x9F];
  v242 = v237[0x9E];
  v243.m128_f32[0] = sub_325030(*(a1 + 8));
  if ( v239 <= v242 )
  {
    v244 = v240;
    v240 = v241;
    v245 = v242;
    v242 = v239;
  }
  else
  {
    v244 = v241;
    v245 = v239;
  }
  if ( v242 >= v243.m128_f32[0] )
  {
    v246 = v411;
  }
  else
  {
    v246 = v411;
    if ( v245 <= v243.m128_f32[0] )
    {
      v240 = v244;
    }
    else
    {
      v247 = v245 - v242;
      v248 = v243;
      v248.m128_f32[0] = (v243.m128_f32[0] - v242) * (v244 - v240);
      if ( v247 > *&dword_449F1A8 || (v249 = 0i64, v247 < *&dword_449F1AC) )
      {
        v248.m128_f32[0] = v248.m128_f32[0] / v247;
        v249 = v248;
      }
      v250.m128_f32[0] = v242 - v243.m128_f32[0];
      v240 = v240 + _mm_andnot_ps(_mm_cmple_ss(0i64, v250), v249).m128_f32[0];
    }
  }
  v251 = ((((((*&dword_44A0774 - v234) * v413) * v235) * v236) * v238) * v404) * v240;
  v252 = v246 * v251;
  v253 = v410 * v251;
  v254 = v251 * v409;
  if ( v154 )
  {
    v255 = *(a1 + 8);
    if ( !*(v255 + 0x10B0) )
    {
      if ( *(a1 + 0x420) )
      {
        v256 = a2[4];
        v257 = a2[1];
        v258 = v256 * *a2;
        v424 = *a2;
        v259 = a2[8];
        v260 = a2[5];
        v425 = v260 * v257;
        v261 = a2[6];
        v405 = a2[3];
        v262 = a2[7];
        v263 = v262 * v405;
        v264 = a2[2];
        v423 = ((v262 * v405) * v264) + (((v260 * v257) * v261) + (v258 * v259));
        v422 = v260 * v424;
        v412 = v261 * v256;
        v265 = v259 * v256;
        v421 = v262 * v260;
        v420 = v256 * v264;
        v266 = v260 * v261;
        v419 = v264 * v261;
        v267 = v264;
        v268 = v264;
        v269 = v264 * v405;
        v270 = v261 * v257;
        v413 = v253;
        v407 = v252;
        v271 = v405;
        v406 = v405 * v257;
        v272 = v257 * v259;
        v273 = Y / (v423 - ((v267 * v412) + ((v262 * v422) + (v271 * (v257 * v259)))));
        v274 = v266 - (v271 * v259);
        v252 = v407;
        v275 = *(v255 + 0x9D0);
        v276 = ((((v263 - v412) * v407) + (v274 * v253)) + ((v265 - v421) * v254)) * v273;
        v277 = ((((v270 - (v262 * v424)) * v407) + (((v259 * v424) - v419) * v253)) + (((v268 * v262) - v272) * v254))
             * v273;
        v278 = ((((v258 - v406) * v407) + ((v269 - v422) * v253)) + ((v425 - v420) * v254)) * v273;
        v275[0x286] = v275[0x286] + v276;
        v275[0x287] = v275[0x287] + v277;
        v275[0x288] = v275[0x288] + v278;
        v279 = (v276 * v426) - (v277 * v427);
        v280 = (v278 * v427) - (v276 * v418);
        v275[0x289] = ((v277 * v418) - (v278 * v426)) + v275[0x289];
        v275[0x28A] = v280 + v275[0x28A];
        v275[0x28B] = v279 + v275[0x28B];
      }
    }
  }
  if ( (*(*(*(a1 + 8) + 0x50i64) + 0x10i64))(*(a1 + 8) + 0x50i64) )
  {
    v281 = *(a1 + 8);
    if ( *(v281 + 0x10B0) == 3 )
    {
      v282 = a2[1];
      v283 = a2[4];
      v284 = v283 * *a2;
      v424 = *a2;
      v285 = a2[8];
      v286 = a2[5];
      v425 = v286 * v282;
      v287 = a2[6];
      v288 = a2[3];
      v421 = a2[7];
      v289 = a2[2];
      v412 = v287 * v283;
      v423 = v421 * v286;
      v422 = v283 * v289;
      v420 = v289 * v287;
      v413 = v253;
      v419 = v288 * v282;
      v290 = Y
           / ((((v421 * v288) * v289) + (((v286 * v282) * v287) + (v284 * v285)))
            - ((v289 * (v287 * v283)) + ((v421 * (v286 * v424)) + (v288 * (v282 * v285)))));
      v291 = *(v281 + 0x3030);
      v292 = (((((v421 * v288) - (v287 * v283)) * v252) + (((v286 * v287) - (v288 * v285)) * v413))
            + (((v285 * v283) - (v421 * v286)) * v254))
           * v290;
      v293 = v418;
      v294 = v426;
      v295 = v427;
      v296 = (((((v284 - (v288 * v282)) * v252) + (((v289 * v288) - (v286 * v424)) * v413))
             + (((v286 * v282) - v422) * v254))
            * v290);
      v297 = ((((((v287 * v282) - (v421 * v424)) * v252) + (((v285 * v424) - (v289 * v287)) * v413))
             + (((v289 * v421) - (v282 * v285)) * v254))
            * v290);
      *(v291 + 0x1590) = *(v291 + 0x1590) + v292;
      *(v291 + 0x1598) = *(v291 + 0x1598) + v297;
      *(v291 + 0x15A0) = *(v291 + 0x15A0) + v296;
      v298 = v293 - *(v291 + 0x4F58);
      v299 = v294 - *(v291 + 0x4F54);
      v300 = v295 - *(v291 + 0x4F50);
      *(v291 + 0x15A8) = *(v291 + 0x15A8) - v298 * v297 + v299 * v296;
      *(v291 + 0x15B0) = v292 * v298 + *(v291 + 0x15B0) - v300 * v296;
      *(v291 + 0x15B8) = v300 * v297 - v299 * v292 + *(v291 + 0x15B8);
      *(v291 + 0x15C0) = 0i64;
      *(v291 + 0x2881) = 0;
    }
  }
  if ( !a10 )
  {
    v21 = 0;
    v17 = 0;
    v16 = v429;
    a4 = v428;
    v18 = a5;
    goto LABEL_7;
  }
  v301 = v409 + *a3;
  v409 = v301;
  v302 = v410 + a3[1];
  v410 = v302;
  v303 = v411 + a3[2];
  v411 = v303;
  a4 = v428;
  v18 = a5;
  if ( *(*(a1 + 0x2B0) + 0x2Ci64) <= 0.0 )
    *(a1 + 0x3BC) = 0;
  v304 = *(v100 + 8);
  if ( v304 == 0xFFFFFFFF )
    v304 = *(v100 + 4);
  if ( (v304 & 0x80000000) != 0 )
  {
    v305 = (v304 & 0x7FFFFFFF) >> 0x1B;
    if ( (v304 & 0x7FFFFFFF) >= DWORD2(xmmword_4ACF680) )
      goto LABEL_348;
    v307 = v304 & 0x7FFFFFF;
    if ( v307 >= 0x80 << v305 )
      goto LABEL_348;
    v308 = (&xmmword_4ACF620 + 8);
  }
  else
  {
    v305 = v304 >> 0x1B;
    v306 = 0x80 << (v304 >> 0x1B);
    if ( xmmword_4ACF620 <= v304 )
      goto LABEL_348;
    v307 = v304 & 0x7FFFFFF;
    if ( v307 >= v306 )
      goto LABEL_348;
    v308 = &xmmword_4ACF5C0;
  }
  v309 = *(v308 + v305);
  if ( !v309 )
  {
LABEL_348:
    v313 = ((v303 * v303) + (v302 * v302)) + (v301 * v301);
    v314 = *(v100 + 0x28);
    v314.m128_f32[0] = v314.m128_f32[0] / (fsqrt(v313) + *&dword_44A01A0);
    if ( *(v100 + 0x6C) )
    {
      v315.m128_i32[0] = *(a1 + 0x430);
      v316 = _mm_cmple_ss(0i64, v315);
      v316.m128_i32[0] = _mm_andnot_ps(v316, v314).m128_u32[0] | v315.m128_i32[0] & v316.m128_i32[0];
      v317 = 0x41C64E6D * *a11 + 0x3039;
      *a11 = v317;
      v318 = 0i64;
      v318.m128_f32[0] = (HIWORD(v317) & 0x7FFF) * *&dword_44A8734;
      v319.m128_i32[0] = *(a1 + 0x430);
      v320 = _mm_andnot_ps(_mm_cmple_ss(0i64, v319), v318).m128_f32[0] + fminf(v316.m128_f32[0], v314.m128_f32[0]);
    }
    else
    {
      v321 = 0x41C64E6D * *a11 + 0x3039;
      *a11 = v321;
      v320 = ((HIWORD(v321) & 0x7FFF) * *&dword_44A8734) + v314.m128_f32[0];
    }
    v322 = a10;
    if ( *(a1 + 0x212) )
      v323 = *(qword_4ACEE78 + 0xD5);
    else
      v323 = Y;
    v324 = v431;
    v325 = v320 + a5;
    sub_2163F0(a1, &v414, v431, a1 + 0x678, &v409, LODWORD(v323), LODWORD(v325), LODWORD(a5), *(a1 + 0x518));
    if ( v417 || (v328 = *(v414 + 0x2B)) == 0 )
    {
      v327 = 0;
      if ( !v154 )
        goto LABEL_361;
    }
    else
    {
      v327 = *(v328 + 0x18C) != 0;
      if ( !v154 )
        goto LABEL_361;
    }
    if ( !*(*(a1 + 0x2B0) + 9i64) )
      sub_EFCF70(*(a1 + 0x1C), v154);
LABEL_361:
    v329 = *(a1 + 0x2B0);
    if ( !*(v329 + 0x19) && !*(v329 + 0x18) )
    {
      v330 = v430;
      if ( !*(a1 + 0x198) )
        v330 = 0;
      LOBYTE(v326) = 1;
      sub_217180(a1, v326, v330, *(v100 + 0x74), 1);
    }
    v331 = *(a1 + 8);
    v16 = v429;
    if ( !*(v331 + 0x10B0) )
      ++*(a1 + 0x648);
    if ( v417 )
      goto LABEL_466;
    v408 = v327;
    v332 = a7;
    *(a1 + 0x248) = fminf(*(*(game + 0x498) + 0x26B8i64) + *(a1 + 0x248), *(*(game + 0x498) + 0x26B4i64));
    if ( (*(*(v331 + 0x50) + 0x18i64))(v331 + 0x50) )
    {
      v333 = *(a1 + 8);
      v334 = *(v333 + 0x10B0);
      if ( v334 == 5 || v334 == 3 )
      {
        v335 = *(*(v333 + 0x11D0) + 0x2A8i64);
        v336 = 0.0;
        v337 = 0.0;
        if ( v335 > 0 )
        {
          for ( i = 0i64; i != v335; ++i )
          {
            v339 = *(*(v333 + 0x11D0) + 0x300i64);
            if ( *(v339 + 0x10 * i + 8) )
            {
              v340 = 0i64;
              do
              {
                v342 = *(v339 + 0x10 * i);
                v341 = *(v342 + 8 * v340);
                if ( v341 )
                {
                  if ( !(*(*v341 + 0x108i64))(*(v342 + 8 * v340)) )
                    v341 = 0i64;
                  v333 = *(a1 + 8);
                }
                else
                {
                  v341 = 0i64;
                }
                ++v340;
                v339 = *(*(v333 + 0x11D0) + 0x300i64);
              }
              while ( v340 < *(v339 + 0x10 * i + 8) );
              if ( v341 )
              {
                v343 = v341[0x56];
                if ( v343 )
                {
                  v344 = *(v343 + 0x90);
                  if ( v344 )
                  {
                    if ( v344 == 1 )
                    {
                      v345 = 0i64;
                    }
                    else
                    {
                      v347 = (v343 + 0xD8);
                      v345 = 0i64;
                      do
                      {
                        v348 = *v347[0xFFFFFFF8];
                        if ( v348 && v337 < (*(v348 + 0x5C) * *(v348 + 0x1C)) )
                          v337 = *(v348 + 0x5C) * *(v348 + 0x1C);
                        v349 = **v347;
                        if ( v349 && v337 < (*(v349 + 0x5C) * *(v349 + 0x1C)) )
                          v337 = *(v349 + 0x5C) * *(v349 + 0x1C);
                        v345 += 2i64;
                        v347 += 0x10;
                      }
                      while ( (v344 & 0xFFFFFFFE) != v345 );
                    }
                    if ( (v344 & 1) != 0 )
                    {
                      v346 = **(v343 + 0x98 + (v345 << 6));
                      if ( v346 )
                      {
                        if ( v337 < (*(v346 + 0x5C) * *(v346 + 0x1C)) )
                          v337 = *(v346 + 0x5C) * *(v346 + 0x1C);
                      }
                    }
                  }
                }
              }
            }
          }
          LOWORD(v334) = *(v333 + 0x10B0);
          v332 = a7;
        }
        v350 = *(game + 0x430);
        v322 = a10;
        v324 = v431;
        if ( v334 != 5 )
        {
          v336 = 0.0;
          if ( *(v350 + 0x1F4) )
            v336 = *&dword_44801CC;
        }
        if ( v417 )
          v351 = 0i64;
        else
          v351 = v414;
        v352 = v336 + *(v350 + 0x1F0);
        v353 = *(*(v351 + 0x158) + 0x1Ci64);
        v354 = (((*(v351 + 0x250) * v353) * (*(v351 + 0x250) * v353))
              + ((*(v351 + 0x24C) * v353) * (*(v351 + 0x24C) * v353)))
             + ((v353 * *(v351 + 0x248)) * (v353 * *(v351 + 0x248)));
        v355 = 0i64;
        v355.m128_f32[0] = fsqrt(v354);
        v356 = 0.0;
        if ( v337 >= 0.0 )
        {
          v358 = Y;
          v357 = v337;
        }
        else
        {
          v357 = 0.0;
          v358 = v352;
          v352 = Y;
          v356 = v337;
        }
        if ( v356 < v355.m128_f32[0] )
        {
          if ( v357 <= v355.m128_f32[0] )
          {
            v352 = v358;
          }
          else
          {
            v359 = v357 - v356;
            v360 = v355;
            v360.m128_f32[0] = (v355.m128_f32[0] - v356) * (v358 - v352);
            if ( v359 > *&dword_449F1A8 || (v361 = 0i64, v359 < *&dword_449F1AC) )
            {
              v360.m128_f32[0] = v360.m128_f32[0] / v359;
              v361 = v360;
            }
            v362.m128_f32[0] = v356 - v355.m128_f32[0];
            v352 = v352 + _mm_andnot_ps(_mm_cmple_ss(0i64, v362), v361).m128_f32[0];
          }
        }
        if ( COERCE_FLOAT(xmmword_449AF40 & LODWORD(v352)) >= *&dword_44A0308 )
          sub_5303A0(&stru_4AD5EE0, 0x25i64);
      }
    }
    *(a1 + 0x458) = a5;
    v363 = v417;
    v364 = 0;
    v365 = v414;
    v366 = 0i64;
    if ( !v417 )
      v366 = v414;
    *(v366 + 0x1F) = v332;
    *(v366 + 0x100) = *(v366 + 0x100) & 0xFFF7F7FF | (*(a1 + 0x50C) << 0x13) | 0x800;
    *(v366 + 0x2AC) = *(a1 + 0x434);
    v367 = *(a1 + 0x1F4);
    v368 = *(a1 + 0x2B0);
    v371 = 0;
    if ( v367 > 0 )
    {
      v369 = *(v368 + 0x88);
      if ( v369 > 0 )
      {
        v370 = (v367 * *&dword_44890B4) / v369;
        if ( v370 > (*(v100 + 0x110) + *&dword_44A01A0) || v370 < (*(v100 + 0x114) + *&dword_44A49A4) )
          v371 = 1;
      }
    }
    v372 = *(v100 + 0x118);
    v373 = ((*(v100 + 0x130) + *(v368 + (*(a1 + 0x43C) << 6) + 0xC0)) >> 0x1F);
    LODWORD(v373) = (*(v100 + 0x130) + *(v368 + (*(a1 + 0x43C) << 6) + 0xC0)) % v372;
    if ( v371 || v373 )
    {
LABEL_455:
      v393 = v364 + 0x1000000;
      v394 = 0.0;
      if ( v323 != 0.0 )
        v393 = v364;
      v395 = 0i64;
      if ( !v363 )
        v395 = v365;
      *(v395 + 0x100) |= v393;
      sub_1288BB0(&v414, v373);
      v16 = v429;
      if ( v408 )
      {
        v396 = fsqrt((v411 * v411) + ((v410 * v410) + (v409 * v409)));
        if ( v396 > *&dword_449F1A8 )
          v394 = Y / v396;
        v397 = v394 * *(v100 + 0x190);
        *&v398 = (v397 * v411) + *(a1 + 0x680);
        *&v399 = (v397 * v410) + *(a1 + 0x67C);
        *v433 = (v397 * v409) + *(a1 + 0x678);
        v433[1] = v399;
        v433[2] = v398;
        v400 = *(v100 + 0x194);
        *v432 = v400 * v409;
        *&v432[1] = v410 * v400;
        *&v432[2] = v411 * v400;
        sub_2163F0(a1, v451, v324, v433, v432, LODWORD(v323), LODWORD(v325), LODWORD(a5), *(a1 + 0x518));
        if ( !v452 )
        {
          v401 = v451[0];
          *(v451[0] + 0x1F) = a7;
          v402 = *(v401 + 0x100) & 0xFFF7F7FF;
          v403 = v402 | (*(a1 + 0x50C) << 0x13) | 0x800;
          *(v401 + 0x100) = v403;
          *(v401 + 0x2AC) = *(a1 + 0x434);
          *(v401 + 0x100) = v393 | v403;
          sub_1288BB0(v451, v402);
        }
        sub_174DD20(v451);
      }
      (*(**(a1 + 8) + 0x250i64))(*(a1 + 8), a1);
LABEL_466:
      sub_174DD20(&v414);
      v21 = 0;
      v17 = v322;
      goto LABEL_7;
    }
    v374 = sub_2101B0(v366);
    if ( !v374 || (v375 = v374, v376 = *(v374 + 0x10B0), v376 > 0xF) || (v377 = 0x897E, !_bittest(&v377, v376)) )
      v375 = 0i64;
    v378 = game;
    v379 = 1;
    if ( *(game + 0x4CC) )
    {
      v380 = *(a1 + 8);
      if ( v380 )
      {
        v381 = (*(*(v380 + 0x50) + 0x18i64))(v380 + 0x50);
        if ( v375 && !v381 )
        {
          v378 = game;
LABEL_439:
          v382 = *(v378 + 0x638);
          if ( *&dword_448790C < *(v382 + 0x18) )
          {
            v383 = *(v382 + 0x1C);
            if ( v383 > 0 )
            {
              v384 = fmaxf(*&dword_448790C / v383, Y);
              v385 = *(*(v375 + 0x11D0) + 0x290i64);
              if ( v385 > 0 || (v386 = 0.0, v385 < 0) )
                v386 = v384 / v385;
              v387 = v386 * *(a1 + 0x368);
              v388 = *(*(v378 + 0x630) + 0x3C8B0i64);
              if ( v388 )
              {
                v389 = *(v100 + 0x124);
                if ( v389 == 0xFFFFFFFFi64 || *&dword_44801CC > *(*(v388 + 0x181148) + 0x28 * v389 + 0x1C) )
                  v387 = v387 * *&dword_44894DC;
              }
              if ( v387 > *&dword_449F1A8 || (v390 = 0i64, v387 < *&dword_449F1AC) )
              {
                v390 = LODWORD(Y);
                v390.m128_f32[0] = Y / v387;
              }
              v391 = _mm_round_ss(0i64, v390, 0xA).m128_f32[0];
              if ( v372 > v391 )
                v391 = v372;
              v379 = (v372 + v391 - 1) / v372;
            }
          }
        }
      }
      else if ( v375 )
      {
        goto LABEL_439;
      }
    }
    v392 = *(a1 + 0x43C) << 6;
    v373 = ((*(v100 + 0x130) + *(*(a1 + 0x2B0) + v392 + 0xC0)) >> 0x1F);
    LODWORD(v373) = (*(v100 + 0x130) + *(*(a1 + 0x2B0) + v392 + 0xC0)) % (v372 * v379);
    v364 = ((v373 != 0) << 9) | 0x100;
    v363 = v417;
    v365 = v414;
    goto LABEL_455;
  }
  if ( !*(v309 + 8i64 * v307) )
  {
    v301 = v409;
    v302 = v410;
    v303 = v411;
    goto LABEL_348;
  }
  v310 = *(a1 + 8);
  if ( v310 )
  {
    if ( (*(*(v310 + 0x50) + 0x18i64))(v310 + 0x50) )
    {
      v311 = *(a1 + 0x2B0);
      if ( *(v311 + 0x50) >= 0 && *(v311 + (*(a1 + 0x43C) << 6) + 0xCC) <= 1 )
        *(a1 + 0x684) = 1;
    }
  }
  v312 = v430;
  if ( !*(a1 + 0x198) )
    v312 = 0;
  v21 = 1;
  LOBYTE(v308) = 1;
  sub_217180(a1, v308, v312, *(v100 + 0x74), 0);
  v17 = a10;
  v16 = v429;
LABEL_7:
  v22 = *(a1 + 8);
  if ( (*(v22 + 0x58) & 4) != 0 )
  {
    v23 = *(*(a1 + 0x2B0) + 0x2C0i64);
    if ( v23 > 0.0 )
    {
      *&v434 = 0x1000C91D5149Fi64;
      *(&v434 + 2) = v23;
      v24 = *(v22 + 0x1AB4);
      v25 = *(v22 + 0x1AB4) & 0x3FFFFF;
      if ( v25 < dword_4B69EF8
        && v25 < dword_4B69EE0
        && *(qword_4B69ED8 + 8 * v25 + 3) == (v24 >> 0x16)
        && *(qword_4B69ED8 + 8 * v25) != 0xFFFF )
      {
        sub_169AE50(&unk_4B69E58, v24, &v434);
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
    *(&v434 + 1) = v22;
    *&v435 = v36;
    WORD4(v435) = 0xF0B1;
    BYTE10(v435) = 0xFF;
    v436 = 0i64;
    v437 = 0i64;
    v438 = v36;
    v439 = 0i64;
    v440 = 0i64;
    v441 = 0i64;
    v442 = 0i64;
    v443 = 0i64;
    v444 = 0i64;
    v445 = 0i64;
    v446 = 0i64;
    v447 = 0;
    v37 = 0xFF;
    if ( qword_4B507E8 )
    {
      v37 = 0x7D;
      if ( !*(qword_4B507E8 + 0x60) )
      {
        v37 = 0xFF;
        if ( LocalPlayer )
          v37 = *(LocalPlayer + 8);
      }
    }
    BYTE10(v435) = v37;
    *&v434 = &off_44A92F0;
    v448 = v34;
    v449 = v27;
    v450 = v33;
    sub_224950(&v434);
    LOBYTE(v38) = 0xFF;
    sub_159F500(&v434, v38);
    *&v434 = &off_44A0560;
    if ( v436 < 0 )
      (*(*v438 + 0x40i64))(v438, v437);
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
        v148 = *(v47 + 0x88) - *(v47 + 0x8C);
        if ( v148 <= 0 )
          LOWORD(v148) = 0;
        *(a1 + 0x1F4) = v148;
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
              *(&v434 + 1) = 0x10i64;
              LODWORD(v434) = 2;
              LOBYTE(v91) = 1;
              log_err(
                "..\\..\\prog\\engine2\\memory\\dagmem.cpp",
                0x345,
                v91,
                "Not enough memory to alloc %llu bytes",
                &v434,
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
  *&v434 = 0x1000C5F5446EAi64;
  BYTE8(v434) = 0;
  sub_220F60(*(*(a1 + 8) + 0x1AB4i64), &v434, v123, v124);
  if ( v57 | v40 )
  {
    if ( *(*(a1 + 0x2B0) + 0xCi64) )
      v125 = (*(*(*(a1 + 8) + 0x50i64) + 0x10i64))(*(a1 + 8) + 0x50i64);
    else
      v125 = 0;
    *(a1 + 0x1F7) = v125;
    *(a1 + 0x3A2) = 0;
    *(a1 + 0x528) = 1;
  }
  if ( v16 && (*(v16 + 0x1058) & 0x100) != 0 && v17 )
  {
    v126 = 0x41C64E6D * dword_4A79158 + 0x3039;
    v127 = game;
    dword_4A79158 = v126;
    v128 = qword_4B19AA0;
    if ( qword_4B19AA0 )
    {
      ballistics = *(game + 0x440);
      v130 = *(ballistics + 0x3F0);
      if ( v130 < *(ballistics + 0x278) )
      {
        v131 = *(*(ballistics + 0x268) + 8 * v130);
        if ( v131 )
        {
          if ( *&mUnit )
          {
            (*(*v131 + 0xB8i64))(v131, 0x400i64);
            v127 = game;
            v126 = dword_4A79158;
            v128 = qword_4B19AA0;
          }
        }
      }
    }
    else
    {
      v128 = 0i64;
    }
    dword_4A79158 = 0x41C64E6D * v126 + 0x3039;
    if ( v128 )
    {
      v132 = *(v127 + 0x440);
      v133 = *(v132 + 0x3F0);
      if ( v133 < *(v132 + 0x278) )
      {
        v134 = *(*(v132 + 0x268) + 8 * v133);
        if ( v134 )
        {
          if ( *&mUnit )
            (*(*v134 + 0xB8i64))(v134, 0x200000i64);
        }
      }
    }
  }
  v135 = *(a1 + 0x2B0);
  v136 = *(a1 + 0x43C) << 6;
  v137 = 1;
  if ( *(v135 + v136 + 0xA0) >= 2 )
    v137 = *(v135 + v136 + 0xA0);
  v138 = *(*(v135 + v136 + 0x98) + 8i64 * (*(v135 + v136 + 0xC0) % v137));
  v139 = *(v138 + 8);
  if ( v139 == 0xFFFFFFFF )
    v139 = *(v138 + 4);
  if ( (v139 & 0x80000000) != 0 )
  {
    v140 = (v139 & 0x7FFFFFFF) >> 0x1B;
    v141 = (0x80 << v140);
    v142 = 0i64;
    if ( (v139 & 0x7FFFFFFF) < DWORD2(xmmword_4ACEF68) )
    {
      v143 = v139 & 0x7FFFFFF;
      if ( v143 < v141 )
      {
        v141 = &xmmword_4ACEF08 + 8;
LABEL_185:
        v144 = *(v141 + 8i64 * v140);
        if ( v144 )
          v142 = *(v144 + 8i64 * v143);
        else
          v142 = 0i64;
      }
    }
  }
  else
  {
    v140 = v139 >> 0x1B;
    v141 = (0x80 << (v139 >> 0x1B));
    v142 = 0i64;
    if ( xmmword_4ACEF08 > v139 )
    {
      v143 = v139 & 0x7FFFFFF;
      if ( v143 < v141 )
      {
        v141 = &xmmword_4ACEEA8;
        goto LABEL_185;
      }
    }
  }
  result = *(game + 0x498);
  if ( *(result + 0x1FA5) )
  {
    result = (*(*(*(a1 + 8) + 0x50i64) + 0x20i64))(*(a1 + 8) + 0x50i64, v141);
    if ( v142 )
    {
      if ( v17 )
      {
        if ( result )
        {
          result = game;
          if ( *(v142 + 4) >= *(*(game + 0x498) + 0x1FA0i64) )
          {
            v146 = *(a1 + 8);
            result = *(*(game + 0x420) + 0x908i64);
            if ( *(result + 0x197) )
              v147 = 0;
            else
              v147 = dword_44801E8;
            *(v146 + 0xFA4) = v147;
            if ( (*(v146 + 0x58) & 4) != 0 && (*(v146 + 0x10B8) || *(v146 + 0x74C)) )
            {
              LOBYTE(v434) = 0;
              if ( *(v146 + 0xFC8) )
              {
                sub_158CE00(v146 + 0xFA8, v146, &v434);
                result = v434;
                *(v146 + 0xFC8) = v434;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
