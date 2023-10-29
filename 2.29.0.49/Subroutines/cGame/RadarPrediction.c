char __fastcall RadarPrediction_237DE0(__int64 BallisticComputer_1DA0, __int8 someBool, float *a3, float *a4, float TargetDistance, float a6, float a7)
{
  double *v9; // rax
  __int64 v10; // rcx
  float v11; // xmm0_4
  int v12; // er12
  float *v13; // r15
  int v14; // er13
  __int64 v15; // rbp
  __int64 v16; // rdi
  float v17; // xmm6_4
  int v18; // ebx
  float v19; // xmm5_4
  float v20; // xmm0_4
  float v21; // xmm11_4
  float v22; // xmm15_4
  float v23; // xmm1_4
  float v24; // xmm4_4
  float v25; // xmm13_4
  float v26; // xmm9_4
  float v27; // xmm7_4
  float v28; // xmm14_4
  float v29; // xmm6_4
  float v30; // xmm8_4
  float v31; // xmm10_4
  float v32; // xmm12_4
  float v33; // xmm3_4
  float v34; // xmm1_4
  float v35; // xmm5_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm5_4
  __int64 v39; // rcx
  unsigned int v40; // eax
  int v41; // edx
  __int64 v42; // rdx
  __int128 *v43; // rbp
  bool v44; // zf
  __int128 *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rcx
  char v48; // dl
  float v49; // xmm3_4
  float v50; // xmm0_4
  float v51; // xmm3_4
  float v52; // xmm4_4
  float v53; // xmm4_4
  float v54; // xmm7_4
  float v55; // xmm8_4
  float v56; // xmm14_4
  float v57; // xmm0_4
  float v58; // xmm3_4
  float v59; // xmm12_4
  float v60; // xmm15_4
  float v61; // xmm6_4
  float v62; // xmm13_4
  float v63; // xmm2_4
  float v64; // xmm9_4
  float v65; // xmm10_4
  float v66; // xmm11_4
  float v67; // xmm4_4
  float v68; // xmm1_4
  float v69; // xmm7_4
  float v70; // xmm4_4
  float v71; // xmm0_4
  float v72; // xmm7_4
  __int64 v73; // rax
  float v74; // xmm10_4
  char v75; // bp
  __int64 v76; // r13
  float v77; // xmm13_4
  float v78; // xmm11_4
  __int64 v79; // rcx
  double *v80; // rcx
  float v81; // xmm15_4
  float v82; // xmm12_4
  float v83; // xmm14_4
  unsigned int v84; // ecx
  float LocalAirVelocity_X; // xmm3_4
  int v86; // edx
  __int64 v87; // rdx
  __int128 *v88; // rbx
  __int128 *v89; // rdx
  float LocalAirVelocity_Y; // xmm1_4
  float LocalAirVelocity_Z; // xmm2_4
  float v92; // xmm1_4
  float v93; // xmm0_4
  float v94; // xmm2_4
  int v95; // edx
  __int64 v96; // rdx
  float *v97; // rbx
  float *v98; // rdx
  float v99; // xmm0_4
  __int64 v100; // rcx
  __int16 v101; // ax
  float v102; // xmm2_4
  float v103; // xmm2_4
  float v104; // xmm0_4
  float v105; // xmm1_4
  float v106; // xmm5_4
  float v107; // xmm6_4
  float v108; // xmm2_4
  float v109; // xmm1_4
  float v110; // xmm0_4
  float v111; // xmm3_4
  float v112; // xmm6_4
  float v113; // xmm2_4
  float v114; // xmm0_4
  float v115; // xmm1_4
  float v116; // xmm7_4
  float v117; // xmm0_4
  char v118; // bl
  char v119; // al
  char v120; // al
  unsigned int v121; // er8
  bool v122; // bl
  double *v123; // rax
  double *LocalPlayerAirVelocityContainer; // rax
  double *v125; // rax
  float v126; // xmm0_4
  unsigned int v127; // xmm2_4
  unsigned int v128; // xmm1_4
  bool v129; // dl
  int v130; // edx
  float Prediction_Z; // xmm0_4
  float Prediction_Y; // xmm2_4
  float Prediction_X; // xmm1_4
  float time_to_target; // xmm1_4
  float v135; // xmm1_4
  float v136; // xmm2_4
  float v137; // xmm0_4
  float v138; // xmm4_4
  __int64 v139; // rax
  char v140; // al
  float v141; // xmm6_4
  __int64 LocalPlayerUnit; // rax
  unsigned int v143; // ecx
  float v144; // xmm0_4
  int v145; // edx
  __int64 LocalPlayerGroundVelocityContainer; // rdx
  float *LocalPlayerGroundVelocity; // rbp
  float *v148; // rdx
  float v149; // xmm1_4
  float v150; // xmm2_4
  __int64 v151; // rax
  unsigned int v152; // ecx
  int v153; // edx
  __int64 v154; // rdx
  __int128 *v155; // rbp
  __int128 *v156; // rdx
  float v157; // xmm12_4
  __int64 v158; // rax
  float v159; // xmm0_4
  float v160; // xmm0_4
  float v161; // xmm1_4
  float v162; // xmm2_4
  bool v163; // al
  __int64 v164; // rcx
  bool v165; // dl
  float v166; // xmm12_4
  float v167; // xmm9_4
  __m128 v168; // xmm8
  __m128 v169; // xmm4
  float v170; // xmm11_4
  __m128 v171; // xmm10
  __m128 v172; // xmm1
  float v173; // xmm2_4
  float v174; // xmm7_4
  __m128 v175; // xmm2
  __m128 v176; // xmm1
  float v177; // xmm7_4
  __m128 v178; // xmm6
  __m128 v179; // xmm2
  float v180; // xmm7_4
  __m128 v181; // xmm1
  float v182; // xmm5_4
  float v183; // xmm12_4
  __m128 v184; // xmm3
  __m128 v185; // xmm1
  __int128 v186; // xmm0
  float v187; // xmm7_4
  __int128 v188; // xmm0
  __int128 v189; // xmm2
  __int128 v190; // xmm2
  __int128 v191; // xmm2
  __int128 v192; // xmm1
  __int128 v193; // xmm1
  __int128 v194; // xmm1
  float v195; // xmm13_4
  char v196; // bl
  __int64 v197; // rdi
  float v198; // xmm14_4
  float v199; // xmm15_4
  float v200; // xmm8_4
  float v201; // xmm5_4
  float v202; // xmm11_4
  float v203; // xmm12_4
  float v204; // xmm15_4
  float v205; // xmm14_4
  float v206; // xmm2_4
  float v207; // xmm3_4
  float v208; // xmm9_4
  float v209; // xmm10_4
  __int128 v210; // xmm6
  float v211; // xmm0_4
  float v212; // xmm1_4
  float v213; // xmm2_4
  float v214; // xmm4_4
  float v215; // xmm3_4
  float v216; // xmm2_4
  float v217; // xmm15_4
  float v218; // xmm9_4
  float v219; // xmm10_4
  float v220; // xmm1_4
  float v221; // xmm4_4
  float v222; // xmm5_4
  __m128 v223; // xmm8
  float v224; // xmm0_4
  float v225; // xmm1_4
  float v226; // xmm2_4
  float v227; // xmm3_4
  float v228; // xmm12_4
  float v229; // xmm5_4
  float v230; // xmm6_4
  float v231; // xmm0_4
  float v232; // xmm10_4
  __m128 v233; // xmm9
  __m128 v234; // xmm1
  float v235; // xmm11_4
  float v236; // xmm7_4
  __m128 v237; // xmm0
  float v238; // xmm3_4
  float v239; // xmm7_4
  float v240; // xmm5_4
  __m128 v241; // xmm6
  __m128 v242; // xmm0
  float v243; // xmm5_4
  __m128 v244; // xmm7
  __m128 v245; // xmm6
  float v246; // xmm2_4
  __m128 v247; // xmm4
  __int128 v248; // xmm11
  float v249; // xmm3_4
  float v250; // xmm7_4
  __m128 v251; // xmm15
  __m128 v252; // xmm1
  __int128 v253; // xmm0
  __int128 v254; // xmm0
  __int128 v255; // xmm2
  __int128 v256; // xmm2
  __int128 v257; // xmm2
  __int128 v258; // xmm1
  __int128 v259; // xmm1
  __int128 v260; // xmm1
  float v261; // xmm1_4
  char v262; // bl
  __int64 v263; // rdi
  float v264; // xmm13_4
  float v265; // xmm8_4
  float v266; // xmm9_4
  float v267; // xmm13_4
  float v268; // xmm0_4
  float v269; // xmm12_4
  float v270; // xmm2_4
  float v271; // xmm10_4
  float v272; // xmm14_4
  __int128 v273; // xmm4
  float v274; // xmm8_4
  float v275; // xmm15_4
  float v276; // xmm9_4
  float v277; // xmm2_4
  float v278; // xmm11_4
  float v279; // xmm2_4
  float v280; // xmm0_4
  float v281; // xmm14_4
  float v282; // xmm3_4
  float v283; // xmm9_4
  float v284; // xmm4_4
  float v285; // xmm0_4
  float v286; // xmm1_4
  float v287; // xmm2_4
  float v288; // xmm3_4
  __int64 v289; // rax
  unsigned int v290; // ecx
  float v291; // xmm8_4
  int v292; // edx
  __int64 v293; // rdx
  float *v294; // rbp
  float *v295; // rdx
  float v296; // xmm1_4
  float v297; // xmm0_4
  float v298; // xmm9_4
  float v299; // xmm10_4
  float v300; // xmm11_4
  float v301; // xmm5_4
  float v302; // xmm8_4
  float v303; // xmm12_4
  float v304; // xmm3_4
  float v305; // xmm2_4
  float v306; // xmm1_4
  float v307; // xmm4_4
  float v308; // xmm7_4
  float v309; // xmm14_4
  float v310; // xmm1_4
  float v311; // xmm3_4
  float v312; // xmm4_4
  float v313; // xmm13_4
  float v314; // xmm1_4
  float v315; // xmm2_4
  float v316; // xmm5_4
  float v317; // xmm7_4
  float v318; // xmm3_4
  float v319; // xmm4_4
  float v320; // xmm5_4
  float v321; // xmm1_4
  float v322; // xmm6_4
  float Target_position_Y_buffer; // xmm12_4
  float v324; // xmm14_4
  float v325; // xmm13_4
  float v326; // xmm15_4
  float Target_position_Z_buffer; // xmm4_4
  float v328; // xmm2_4
  float v329; // xmm5_4
  float v330; // xmm3_4
  float v331; // xmm1_4
  float v332; // xmm6_4
  float v333; // xmm15_4
  float v334; // xmm3_4
  float v335; // xmm1_4
  float v336; // xmm6_4
  float v337; // xmm15_4
  float v338; // xmm4_4
  float v339; // xmm1_4
  float v340; // xmm1_4
  float v341; // xmm7_4
  float v342; // xmm4_4
  float v343; // xmm6_4
  float v344; // xmm3_4
  float v345; // xmm2_4
  float v346; // xmm5_4
  float v347; // xmm4_4
  float v348; // xmm5_4
  __int64 v349; // rcx
  unsigned int v350; // edx
  bool v351; // bl
  double *v352; // rax
  double *v353; // rax
  float v354; // xmm0_4
  unsigned int v355; // xmm2_4
  unsigned int v356; // xmm1_4
  double *v357; // rax
  int v358; // ebp
  int v360; // [rsp+94h] [rbp-324h]
  float v361; // [rsp+94h] [rbp-324h]
  float v362; // [rsp+94h] [rbp-324h]
  float v363; // [rsp+98h] [rbp-320h]
  float v364; // [rsp+98h] [rbp-320h]
  float v365; // [rsp+98h] [rbp-320h]
  float v366; // [rsp+98h] [rbp-320h]
  float v367; // [rsp+9Ch] [rbp-31Ch]
  float v368; // [rsp+9Ch] [rbp-31Ch]
  float v369; // [rsp+9Ch] [rbp-31Ch]
  float v370; // [rsp+A0h] [rbp-318h]
  float v371; // [rsp+A0h] [rbp-318h]
  float v372; // [rsp+A4h] [rbp-314h]
  float v373; // [rsp+A4h] [rbp-314h]
  float v375; // [rsp+A8h] [rbp-310h]
  float v376; // [rsp+A8h] [rbp-310h]
  unsigned __int64 v377; // [rsp+B0h] [rbp-308h] BYREF
  float v378; // [rsp+B8h] [rbp-300h]
  unsigned __int64 v379; // [rsp+C0h] [rbp-2F8h] BYREF
  float v380; // [rsp+C8h] [rbp-2F0h]
  float v381; // [rsp+CCh] [rbp-2ECh]
  __m128 v382; // [rsp+D0h] [rbp-2E8h]
  __m128 v383; // [rsp+E0h] [rbp-2D8h]
  __m128 v384; // [rsp+F0h] [rbp-2C8h]
  float v385; // [rsp+100h] [rbp-2B8h] BYREF
  float v386; // [rsp+104h] [rbp-2B4h]
  float v387; // [rsp+108h] [rbp-2B0h]
  __m128 v388; // [rsp+110h] [rbp-2A8h]
  __m128 v389; // [rsp+120h] [rbp-298h]
  __m128 v390; // [rsp+130h] [rbp-288h]
  __int128 v391; // [rsp+140h] [rbp-278h]
  float v392; // [rsp+150h] [rbp-268h] BYREF
  __int64 v393; // [rsp+154h] [rbp-264h]
  float v394; // [rsp+15Ch] [rbp-25Ch]
  float v395; // [rsp+160h] [rbp-258h]
  float v396; // [rsp+164h] [rbp-254h]
  float v397; // [rsp+168h] [rbp-250h]
  float v398; // [rsp+16Ch] [rbp-24Ch]
  __int64 Target_position_X; // [rsp+170h] [rbp-248h] BYREF
  float Target_position_Y; // [rsp+178h] [rbp-240h]
  float Target_position_Z; // [rsp+17Ch] [rbp-23Ch]
  __m128 v402; // [rsp+190h] [rbp-228h]
  __m128 v403; // [rsp+1A0h] [rbp-218h]
  unsigned __int64 v404; // [rsp+1B0h] [rbp-208h] BYREF
  float v405; // [rsp+1B8h] [rbp-200h]
  float v406; // [rsp+1BCh] [rbp-1FCh]
  float v407; // [rsp+1C0h] [rbp-1F8h]
  float v408; // [rsp+1C4h] [rbp-1F4h]
  float v409; // [rsp+1C8h] [rbp-1F0h]
  float v410; // [rsp+1CCh] [rbp-1ECh]
  float v411; // [rsp+1D0h] [rbp-1E8h]
  float v412; // [rsp+1D4h] [rbp-1E4h]
  float v413; // [rsp+1D8h] [rbp-1E0h]
  float v414; // [rsp+1DCh] [rbp-1DCh]
  __int128 v415; // [rsp+1E0h] [rbp-1D8h]
  float v416; // [rsp+1F0h] [rbp-1C8h]
  float v417; // [rsp+1F4h] [rbp-1C4h]
  float v418; // [rsp+1F8h] [rbp-1C0h]
  float v419; // [rsp+1FCh] [rbp-1BCh] BYREF
  int v420[4]; // [rsp+200h] [rbp-1B8h] BYREF
  __int128 v421; // [rsp+210h] [rbp-1A8h]
  __int128 v422; // [rsp+220h] [rbp-198h]
  __int128 v423; // [rsp+230h] [rbp-188h]
  __int128 v424; // [rsp+240h] [rbp-178h]
  __int128 v425; // [rsp+250h] [rbp-168h]
  __int128 v426; // [rsp+260h] [rbp-158h]
  __int128 v427; // [rsp+270h] [rbp-148h]
  __int128 v428; // [rsp+280h] [rbp-138h]
  __int128 v429; // [rsp+290h] [rbp-128h]
  __int128 v430; // [rsp+2A0h] [rbp-118h]
  __int128 v431; // [rsp+2B0h] [rbp-108h]
  char v432[16]; // [rsp+2C0h] [rbp-F8h] BYREF

  v382.m128_i8[0] = someBool;
  if ( !qword_4B4B098 || *(_BYTE *)(cGame_4AD1770 + 0xCD) || *(_BYTE *)(cGame_4AD1770 + 0xCE) )
  {
    v10 = *(_QWORD *)(cGame_4AD1770 + 0x450);
    if ( v10 && *(_BYTE *)(v10 + 0x5CA) )
      v9 = (double *)(v10 + 0x620);
    else
      v9 = (double *)(cGame_4AD1770 + 736);
  }
  else
  {
    v9 = (double *)(qword_4B4B098 + 0x70);
  }
  v11 = *v9;
  v12 = (int)(float)(v11 * *(float *)&dword_44A34E4);
  v13 = *(float **)(BallisticComputer_1DA0 + 0x10);
  v14 = v12 - *(_DWORD *)(BallisticComputer_1DA0 + 0x3C8);
  *(_DWORD *)(BallisticComputer_1DA0 + 0x3C8) = v12;
  v15 = *(_QWORD *)(BallisticComputer_1DA0 + 0x3B0);
  v16 = *(_QWORD *)(BallisticComputer_1DA0 + 0x3B8);
  if ( v15 != v16 )
  {
    if ( v14 <= 0 )
    {
      do
      {
        while ( 1 )
        {
          v15 += 0x48i64;
          if ( v15 == *(_QWORD *)(BallisticComputer_1DA0 + 0x88) )
            break;
          if ( v15 == v16 )
            goto LABEL_22;
        }
        v15 = *(_QWORD *)(BallisticComputer_1DA0 + 0x80);
      }
      while ( v15 != v16 );
    }
    else
    {
      v17 = *(float *)&dword_449E2A4;
      do
      {
        v18 = v14;
        do
        {
          sub_16E2C20(v15, *(_DWORD *)(v15 + 0x10) + 1, v17);
          --v18;
        }
        while ( v18 );
        v15 += 0x48i64;
        if ( v15 == *(_QWORD *)(BallisticComputer_1DA0 + 0x88) )
          v15 = *(_QWORD *)(BallisticComputer_1DA0 + 0x80);
      }
      while ( v15 != v16 );
    }
  }
LABEL_22:
  if ( v12 - *(_DWORD *)(BallisticComputer_1DA0 + 0x3CC) > *(_DWORD *)BallisticComputer_1DA0 )
  {
    v360 = *(_DWORD *)(BallisticComputer_1DA0 + 0x48);
    v19 = v13[0x267];
    v20 = v13[0x26A];
    v21 = *(float *)(BallisticComputer_1DA0 + 0x18);
    v22 = *(float *)(BallisticComputer_1DA0 + 0x1C);
    v23 = v13[0x26D];
    v24 = *(float *)(BallisticComputer_1DA0 + 0x20);
    *(float *)&v404 = (float)(v24 * v23) + (float)((float)(v22 * v20) + (float)(v21 * v19));
    v25 = *(float *)(BallisticComputer_1DA0 + 0x24);
    v26 = *(float *)(BallisticComputer_1DA0 + 0x28);
    v27 = *(float *)(BallisticComputer_1DA0 + 0x2C);
    v406 = (float)(v27 * v23) + (float)((float)(v26 * v20) + (float)(v25 * v19));
    v28 = *(float *)(BallisticComputer_1DA0 + 0x30);
    v29 = *(float *)(BallisticComputer_1DA0 + 0x34);
    v30 = *(float *)(BallisticComputer_1DA0 + 0x38);
    v409 = (float)(v30 * v23) + (float)((float)(v29 * v20) + (float)(v28 * v19));
    v31 = *(float *)(BallisticComputer_1DA0 + 0x3C);
    v363 = *(float *)(BallisticComputer_1DA0 + 0x40);
    v32 = *(float *)(BallisticComputer_1DA0 + 0x44);
    v412 = (float)((float)(v23 * v32) + (float)(v20 * v363)) + (float)((float)(v19 * v31) + v13[0x270]);
    v33 = v13[0x268];
    v34 = v13[0x26B];
    v35 = v13[0x26E];
    *((float *)&v404 + 1) = (float)(v35 * v24) + (float)((float)(v34 * v22) + (float)(v33 * v21));
    v407 = (float)(v35 * v27) + (float)((float)(v34 * v26) + (float)(v33 * v25));
    v410 = (float)(v35 * v30) + (float)((float)(v34 * v29) + (float)(v33 * v28));
    v413 = (float)((float)(v35 * v32) + (float)((float)(v34 * v363) + (float)(v33 * v31))) + v13[0x271];
    v36 = v13[0x269];
    v37 = v13[0x26C];
    v38 = v13[0x26F];
    v405 = (float)(v24 * v38) + (float)((float)(v22 * v37) + (float)(v21 * v36));
    v408 = (float)(v27 * v38) + (float)((float)(v26 * v37) + (float)(v25 * v36));
    v411 = (float)(v30 * v38) + (float)((float)(v29 * v37) + (float)(v28 * v36));
    v414 = (float)((float)(v38 * v32) + (float)((float)(v37 * v363) + (float)(v36 * v31))) + v13[0x272];
    v39 = *(_QWORD *)(BallisticComputer_1DA0 + 0x10);
    v40 = *(unsigned __int16 *)(v39 + 0x10B0);
    if ( v40 <= 0xF )
    {
      v41 = 0x897E;
      if ( _bittest(&v41, v40) )
      {
        v42 = *(_QWORD *)(v39 + 0x1EA0);
        v43 = (__int128 *)(v42 + 0x54);
        v44 = v42 == 0;
        v45 = &xmmword_450E8F0;
        if ( !v44 )
          v45 = v43;
        if ( *(_BYTE *)(v39 + 0x58) == 1 )
          v45 = (__int128 *)(v39 + 0x22AC);
        v380 = *((float *)v45 + 2);
        v379 = *(_QWORD *)v45;
LABEL_30:
        sub_23F480(v39, (unsigned int)&v392, (unsigned int)&v404, (unsigned int)&v379, v360);
        v46 = *(_QWORD *)(BallisticComputer_1DA0 + 0x3B8) + 0x48i64;
        *(_QWORD *)(BallisticComputer_1DA0 + 0x3B8) = v46;
        v47 = *(_QWORD *)(BallisticComputer_1DA0 + 0x88);
        if ( v46 == v47 )
        {
          v46 = *(_QWORD *)(BallisticComputer_1DA0 + 0x80);
          *(_QWORD *)(BallisticComputer_1DA0 + 0x3B8) = v46;
          if ( v46 != *(_QWORD *)(BallisticComputer_1DA0 + 0x3B0) )
            goto LABEL_32;
        }
        else if ( v46 != *(_QWORD *)(BallisticComputer_1DA0 + 0x3B0) )
        {
LABEL_32:
          ++*(_QWORD *)(BallisticComputer_1DA0 + 0x3C0);
LABEL_36:
          if ( v46 == *(_QWORD *)(BallisticComputer_1DA0 + 0x80) )
            v46 = v47;
          *(_DWORD *)(v46 - 0x38) = v12;
          v48 = *(_BYTE *)(BallisticComputer_1DA0 + 0x4C);
          if ( *(_BYTE *)(BallisticComputer_1DA0 + 0x4D) )
          {
            v49 = fminf(*((float *)&v393 + 1), *(float *)&dword_4A7320C);
            v50 = (float)((float)((float)(*(float *)&dword_4A73208 * *(float *)&dword_449A354) * *(float *)&dword_4A7320C)
                        * (float)((float)((float)((float)((float)((float)((float)((float)(*(float *)&dword_449A210 * v49)
                                                                                + *(float *)&dword_449A214)
                                                                        * v49)
                                                                + *(float *)&dword_449A218)
                                                        * v49)
                                                + *(float *)&dword_449A21C)
                                        * v49)
                                + *(float *)&dword_447A1D8))
                / fmaxf(*((float *)&v393 + 1), *(float *)&dword_4A7320C);
          }
          else
          {
            v50 = *(float *)&dword_447AA00;
          }
          *(_DWORD *)(v46 - 0x38) = 0;
          *(float *)(v46 - 0x2C) = v394;
          *(_QWORD *)(v46 - 0x34) = v393;
          *(_QWORD *)(v46 - 0x28) = Target_position_X;
          *(float *)(v46 - 0x20) = Target_position_Y;
          *(float *)(v46 - 0x3C) = *(float *)&dword_4A731FC * *(float *)&aIilIii[4 * (v48 == 0) + 8];
          *(_DWORD *)(v46 - 0x40) = 0;
          *(_QWORD *)(v46 - 0x48) = 0i64;
          v51 = *(float *)(BallisticComputer_1DA0 + 0x54);
          if ( *(float *)&dword_44991A8 < v51 || (v52 = 0.0, v51 < *(float *)&dword_44991AC) )
            v52 = (float)((float)(*(float *)(BallisticComputer_1DA0 + 0x58) * *(float *)(BallisticComputer_1DA0 + 0x58))
                        * *(float *)&dword_44A3EC0)
                / v51;
          *(float *)(v46 - 0x40) = (float)(*(float *)(BallisticComputer_1DA0 + 0x5C) * v50) * v52;
          *(_DWORD *)(BallisticComputer_1DA0 + 0x3CC) = v12;
          goto LABEL_45;
        }
        *(_QWORD *)(BallisticComputer_1DA0 + 0x3B0) = v46 + 0x48;
        if ( v46 + 0x48 == v47 )
          *(_QWORD *)(BallisticComputer_1DA0 + 0x3B0) = *(_QWORD *)(BallisticComputer_1DA0 + 0x80);
        goto LABEL_36;
      }
      if ( !*(_WORD *)(v39 + 0x10B0) && (*(_DWORD *)(v39 + 0x1058) & 0x2000010) == 0 )
      {
        v125 = *(double **)(v39 + 0x9D0);
        v126 = v125[0x132];
        *(float *)&v127 = v125[0x131];
        *(float *)&v128 = v125[0x130];
        v379 = __PAIR64__(v127, v128);
        v380 = v126;
        goto LABEL_30;
      }
    }
    v379 = 0i64;
    v380 = 0.0;
    goto LABEL_30;
  }
LABEL_45:
  v53 = v13[0x267];
  v54 = v13[0x26A];
  v55 = *(float *)(BallisticComputer_1DA0 + 0x18);
  v56 = *(float *)(BallisticComputer_1DA0 + 0x1C);
  v57 = v13[0x26D];
  v58 = *(float *)(BallisticComputer_1DA0 + 0x20);
  v392 = (float)(v58 * v57) + (float)((float)(v56 * v54) + (float)(v55 * v53));
  v59 = *(float *)(BallisticComputer_1DA0 + 0x24);
  v60 = *(float *)(BallisticComputer_1DA0 + 0x28);
  v61 = *(float *)(BallisticComputer_1DA0 + 0x2C);
  v394 = (float)(v61 * v57) + (float)((float)(v60 * v54) + (float)(v59 * v53));
  v62 = *(float *)(BallisticComputer_1DA0 + 0x30);
  v63 = *(float *)(BallisticComputer_1DA0 + 0x34);
  v64 = *(float *)(BallisticComputer_1DA0 + 0x38);
  v397 = (float)(v64 * v57) + (float)((float)(v63 * v54) + (float)(v62 * v53));
  v65 = *(float *)(BallisticComputer_1DA0 + 0x3C);
  v364 = *(float *)(BallisticComputer_1DA0 + 0x40);
  v66 = *(float *)(BallisticComputer_1DA0 + 0x44);
  *((float *)&Target_position_X + 1) = (float)((float)(v57 * v66) + (float)(v54 * v364))
                                     + (float)((float)(v53 * v65) + v13[0x270]);
  v67 = v13[0x268];
  v68 = v13[0x26B];
  v69 = v13[0x26E];
  *(float *)&v393 = (float)(v69 * v58) + (float)((float)(v68 * v56) + (float)(v67 * v55));
  v395 = (float)(v69 * v61) + (float)((float)(v68 * v60) + (float)(v67 * v59));
  v398 = (float)(v69 * v64) + (float)((float)(v68 * v63) + (float)(v67 * v62));
  Target_position_Y = (float)((float)(v69 * v66) + (float)((float)(v68 * v364) + (float)(v67 * v65))) + v13[0x271];
  v70 = v13[0x269];
  v71 = v13[0x26C];
  v72 = v13[0x26F];
  *((float *)&v393 + 1) = (float)(v58 * v72) + (float)((float)(v56 * v71) + (float)(v55 * v70));
  v396 = (float)(v61 * v72) + (float)((float)(v60 * v71) + (float)(v59 * v70));
  *(float *)&Target_position_X = (float)(v64 * v72) + (float)((float)(v63 * v71) + (float)(v62 * v70));
  Target_position_Z = (float)((float)(v72 * v66) + (float)((float)(v71 * v364) + (float)(v70 * v65))) + v13[0x272];
  v73 = *(_QWORD *)(BallisticComputer_1DA0 + 0x10);// LocalOwnedUnit
                                                // 
  v74 = 0.0;
  v75 = 1;
  if ( v73 && !*(_WORD *)(v73 + 0x10B0) )
  {
    v79 = *(_QWORD *)(v73 + 0x9D0);
    if ( *(_BYTE *)(v79 + 0x57DC) || (*(_BYTE *)(v79 + 0x5C2B) & 1) != 0 )
      v80 = (double *)(v79 + 0x9B0);
    else
      v80 = (double *)(v79 + 0x5D60);
    v78 = v80[2];
    v77 = v80[1];
    v74 = *v80;
    v75 = 0;
    v76 = *(_QWORD *)(BallisticComputer_1DA0 + 0x10);
  }
  else
  {
    v76 = 0i64;
    v77 = 0.0;
    v78 = 0.0;
  }
  v81 = a6;
  v82 = TargetDistance;
  if ( *(_BYTE *)(qword_4AC8E58 + 0x2E1) || (unsigned __int16)(*(_WORD *)(v73 + 0x10B0) - 3) <= 2u )
  {
    v83 = *(float *)(BallisticComputer_1DA0 + 0x48);
    v84 = *(unsigned __int16 *)(v73 + 0x10B0);
    LocalAirVelocity_X = 0.0;
    if ( !*(_BYTE *)(*(_QWORD *)(cGame_4AD1770 + 0x498) + 0x2750i64) )
    {
      v92 = 0.0;
      v93 = 0.0;
      v94 = 0.0;
      if ( (unsigned __int16)v84 <= 0xFu )
      {
        v95 = 0x897E;
        if ( _bittest(&v95, v84) )
        {
          v96 = *(_QWORD *)(v73 + 0x1EA0);
          v97 = (float *)(v96 + 0x54);
          v44 = v96 == 0;
          v98 = (float *)&xmmword_450E8F0;
          if ( !v44 )
            v98 = v97;
          if ( *(_BYTE *)(v73 + 0x58) == 1 )
            v98 = (float *)(v73 + 0x22AC);
          v93 = *v98;
          v92 = v98[1];
          v94 = v98[2];
        }
        else
        {
          v92 = 0.0;
          v93 = 0.0;
          v94 = 0.0;
          if ( !*(_WORD *)(v73 + 0x10B0) )
          {
            v92 = 0.0;
            v93 = 0.0;
            v94 = 0.0;
            if ( (*(_DWORD *)(v73 + 0x1058) & 0x2000010) == 0 )
            {
              v123 = *(double **)(v73 + 0x9D0);
              v94 = v123[0x132];                // air velocity, again
                                                // 
              v92 = v123[0x131];
              v93 = v123[0x130];
            }
          }
        }
      }
      v99 = (float)((float)(v93 * v392) + v83)
          + (float)((float)(v94 * *((float *)&v393 + 1)) + (float)(v92 * *(float *)&v393));
      LocalAirVelocity_Y = 0.0;
      LocalAirVelocity_Z = 0.0;
      v83 = v99;
      goto LABEL_71;
    }
    if ( v84 > 0xF )
      goto LABEL_89;
    v86 = 0x897E;
    if ( _bittest(&v86, v84) )
    {
      v87 = *(_QWORD *)(v73 + 0x1EA0);
      v88 = (__int128 *)(v87 + 0x54);
      v44 = v87 == 0;
      v89 = &xmmword_450E8F0;
      if ( !v44 )
        v89 = v88;
      if ( *(_BYTE *)(v73 + 0x58) == 1 )
        v89 = (__int128 *)(v73 + 0x22AC);
      LocalAirVelocity_X = *(float *)v89;
      LocalAirVelocity_Y = *((float *)v89 + 1);
      LocalAirVelocity_Z = *((float *)v89 + 2);
      goto LABEL_71;
    }
    if ( *(_WORD *)(v73 + 0x10B0) || (*(_DWORD *)(v73 + 0x1058) & 0x2000010) != 0 )
    {
LABEL_89:
      LocalAirVelocity_Y = 0.0;
      LocalAirVelocity_Z = 0.0;
    }
    else
    {
      LocalPlayerAirVelocityContainer = *(double **)(v73 + 0x9D0);
      LocalAirVelocity_Z = LocalPlayerAirVelocityContainer[0x132];
      LocalAirVelocity_Y = LocalPlayerAirVelocityContainer[0x131];
      LocalAirVelocity_X = LocalPlayerAirVelocityContainer[0x130];
    }
LABEL_71:
    v100 = *(_QWORD *)(BallisticComputer_1DA0 + 0x10);
    v101 = *(_WORD *)(v100 + 0x10B0);
    if ( v101 )
    {
      v404 = __PAIR64__(LODWORD(LocalAirVelocity_Y), LODWORD(LocalAirVelocity_X));
      v405 = LocalAirVelocity_Z;
      v379 = 0i64;
    }
    else
    {
      v367 = LocalAirVelocity_Z;
      v383.m128_f32[0] = v83;
      v384.m128_f32[0] = v77;
      v102 = *(float *)&dword_447A1D8
           / (float)((float)((float)((float)(v398 * v394) * *((float *)&v393 + 1))
                           + (float)((float)((float)(v397 * v396) * *(float *)&v393)
                                   + (float)((float)(*(float *)&Target_position_X * v395) * v392)))
                   - (float)((float)(*((float *)&v393 + 1) * (float)(v395 * v397))
                           + (float)((float)(v394 * (float)(*(float *)&v393 * *(float *)&Target_position_X))
                                   + (float)((float)(v396 * v398) * v392))));
      v81 = a6;
      v82 = TargetDistance;
      *(float *)&v379 = (float)((float)((float)((float)((float)(v398 * v394) - (float)(v395 * v397)) * v367)
                                      + (float)((float)((float)(v397 * v396)
                                                      - (float)(v394 * *(float *)&Target_position_X))
                                              * LocalAirVelocity_Y))
                              + (float)((float)((float)(*(float *)&Target_position_X * v395) - (float)(v396 * v398))
                                      * LocalAirVelocity_X))
                      * v102;
      *((float *)&v379 + 1) = (float)((float)((float)((float)((float)(v397 * *(float *)&v393) - (float)(v398 * v392))
                                                    * v367)
                                            + (float)((float)((float)(*(float *)&Target_position_X * v392)
                                                            - (float)(*((float *)&v393 + 1) * v397))
                                                    * LocalAirVelocity_Y))
                                    + (float)((float)((float)(*((float *)&v393 + 1) * v398)
                                                    - (float)(*(float *)&v393 * *(float *)&Target_position_X))
                                            * LocalAirVelocity_X))
                            * v102;
      v404 = 0i64;
      v405 = 0.0;
    }
    v380 = 0.0;
    if ( v382.m128_i8[0] )
    {
      v103 = a3[2];
      v104 = *a3;
      v105 = a3[1];
      v106 = (float)(v103 * v82) + *(float *)(v100 + 0x9C8);
      v107 = (float)(v105 * v82) + *(float *)(v100 + 0x9C4);
      *(float *)&v377 = (float)(*a3 * v82) + *(float *)(v100 + 0x9C0);
      v108 = (float)(v103 * v81) + (float)(a4[2] * v82);
      v109 = (float)(v105 * v81) + (float)(a4[1] * v82);
      v110 = (float)(v104 * v81) + (float)(*a4 * v82);
    }
    else
    {
      v111 = *(float *)(BallisticComputer_1DA0 + 8);
      *(float *)&v377 = (float)(v392 * v111) + *((float *)&Target_position_X + 1);
      v112 = *(float *)(BallisticComputer_1DA0 + 0x3D0);
      v113 = *(float *)(BallisticComputer_1DA0 + 0x3D4);
      v114 = *(float *)(BallisticComputer_1DA0 + 0x3D8);
      v115 = (float)(v13[0x26D] * v114) + (float)((float)(v13[0x26A] * v113) + (float)(v13[0x267] * v112));
      v116 = (float)(v13[0x26E] * v114) + (float)((float)(v13[0x26B] * v113) + (float)(v13[0x268] * v112));
      v117 = (float)(v114 * v13[0x26F]) + (float)((float)(v113 * v13[0x26C]) + (float)(v112 * v13[0x269]));
      v107 = (float)(*(float *)&v393 * v111) + Target_position_Y;
      v106 = (float)(*((float *)&v393 + 1) * v111) + Target_position_Z;
      v108 = (float)((float)(v116 * v392) - (float)(v115 * *(float *)&v393)) * v111;
      v109 = (float)((float)(v115 * *((float *)&v393 + 1)) - (float)(v392 * v117)) * v111;
      v110 = (float)((float)(v117 * *(float *)&v393) - (float)(v116 * *((float *)&v393 + 1))) * v111;
    }
    *((float *)&v377 + 1) = v107;
    v378 = v106;
    v385 = v110;
    v386 = v109;
    v387 = v108;
    v118 = 1;
    if ( byte_4B16DF8 || *(_BYTE *)(*(_QWORD *)(cGame_4AD1770 + 0x498) + 0x2978i64) || *(_BYTE *)(qword_4AC8E58 + 0x57) )
    {
      v119 = 1;
    }
    else if ( !v101 && (*(_BYTE *)(qword_4AC8E58 + 0x35) || *(_BYTE *)(qword_4AC8E58 + 0x38)) )
    {
      v119 = 0;
    }
    else
    {
      v119 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v100 + 0x50) + 0x10i64))(v100 + 0x50) ^ 1;
      v100 = *(_QWORD *)(BallisticComputer_1DA0 + 0x10);
    }
    v120 = v119 ^ 1;
    if ( !byte_4B16DF9
      && !*(_BYTE *)(*(_QWORD *)(cGame_4AD1770 + 0x498) + 0x2979i64)
      && !*(_BYTE *)(qword_4AC8E58 + 0x58) )
    {
      v121 = *(unsigned __int16 *)(v100 + 0x10B0);
      if ( *(_WORD *)(v100 + 0x10B0) )
        v122 = 0;
      else
        v122 = *(_BYTE *)(qword_4AC8E58 + 0x35) != 0;
      v129 = 1;
      if ( !*(_BYTE *)(qword_4AC8E58 + 0x38) )
      {
        if ( v121 > 0xF || (v130 = 0x897E, !_bittest(&v130, v121)) )
          v100 = 0i64;
        v129 = v100 != 0;
      }
      v118 = !v129 && !v122;
    }
    LOBYTE(v73) = sub_163DBC0(
                    (int)BallisticComputer_1DA0 + 0x50,
                    (unsigned int)&Target_position_X + 4,
                    (unsigned int)&v404,
                    (unsigned int)&v379,
                    (__int64)&v377,
                    (__int64)&v385,
                    (__int64)&xmmword_450E8F0,
                    LODWORD(v83),
                    0x42C80000,
                    v118 ^ 1u,
                    v120,
                    0x3CAAAAAB,
                    0x41A00000,
                    5,
                    (__int64)v420,
                    (__int64)v432,
                    (__int64)&v419);
    *(_BYTE *)(BallisticComputer_1DA0 + 0x3EC) = v73;
    if ( (_BYTE)v73 )
    {
      Prediction_Z = (float)(v387 * v419) + v378;
      Prediction_Y = (float)(v386 * v419) + *((float *)&v377 + 1);
      Prediction_X = (float)(v419 * v385) + *(float *)&v377;
      v73 = *(_QWORD *)(BallisticComputer_1DA0 + 0x10);// result = LocalOwnedUnit
                                                // 
      if ( *(_WORD *)(v73 + 0x10B0) != 5 )      // if LocalOwnedUnit State
      {
        time_to_target = fsqrt(
                           (float)((float)((float)(Prediction_Z - Target_position_Z)
                                         * (float)(Prediction_Z - Target_position_Z))
                                 + (float)((float)(Prediction_Y - Target_position_Y)
                                         * (float)(Prediction_Y - Target_position_Y)))
                         + (float)((float)(Prediction_X - *((float *)&Target_position_X + 1))
                                 * (float)(Prediction_X - *((float *)&Target_position_X + 1))));
        Prediction_Z = (float)(*(float *)&v420[2] * time_to_target) + Target_position_Z;
        Prediction_Y = (float)(*(float *)&v420[1] * time_to_target) + Target_position_Y;
        Prediction_X = (float)(time_to_target * *(float *)v420) + *((float *)&Target_position_X + 1);
      }
      *(float *)(BallisticComputer_1DA0 + 0x3F0) = Prediction_X;
      *(float *)(BallisticComputer_1DA0 + 0x3F4) = Prediction_Y;
      *(float *)(BallisticComputer_1DA0 + 0x3F8) = Prediction_Z;
    }
    goto LABEL_110;
  }
  *(_BYTE *)(BallisticComputer_1DA0 + 0x3EC) = 0;
LABEL_110:
  if ( v75 )
    goto LABEL_225;
  v73 = *(_QWORD *)(v76 + 0x4160);
  if ( !*(_BYTE *)(v73 + 0x3ED) )
    goto LABEL_225;
  v135 = *(float *)(BallisticComputer_1DA0 + 0x3D8);
  v136 = *(float *)(BallisticComputer_1DA0 + 0x3D4);
  v137 = a7 * *(float *)(BallisticComputer_1DA0 + 4);
  *(float *)(BallisticComputer_1DA0 + 0x3D0) = (float)(v137 * (float)(v74 - *(float *)(BallisticComputer_1DA0 + 0x3D0)))
                                             + *(float *)(BallisticComputer_1DA0 + 0x3D0);
  *(float *)(BallisticComputer_1DA0 + 0x3D4) = (float)((float)(v77 - v136) * v137) + v136;
  *(float *)(BallisticComputer_1DA0 + 0x3D8) = (float)((float)(v78 - v135) * v137) + v135;
  v138 = fminf(*(float *)(BallisticComputer_1DA0 + 0x60), *(float *)(BallisticComputer_1DA0 + 0x7C));
  v139 = *(_QWORD *)(cGame_4AD1770 + 0x498);
  v44 = *(_BYTE *)(v139 + 0x2751) == 0;
  v140 = *(_BYTE *)(v139 + 0x2750);
  if ( !v44 )
  {
    v141 = *(float *)(BallisticComputer_1DA0 + 0x48);
    if ( !v140 )
    {
      v377 = 0i64;
      v378 = 0.0;
      LocalPlayerUnit = *(_QWORD *)(BallisticComputer_1DA0 + 0x10);
      v143 = *(unsigned __int16 *)(LocalPlayerUnit + 0x10B0);
      v144 = 0.0;
      if ( v143 <= 0xF )
      {
        v145 = 0x897E;
        if ( _bittest(&v145, v143) )
        {
          LocalPlayerGroundVelocityContainer = *(_QWORD *)(LocalPlayerUnit + 0x1EA0);
          LocalPlayerGroundVelocity = (float *)(LocalPlayerGroundVelocityContainer + 0x54);
          v44 = LocalPlayerGroundVelocityContainer == 0;
          v148 = (float *)&xmmword_450E8F0;
          if ( !v44 )
            v148 = LocalPlayerGroundVelocity;
          if ( *(_BYTE *)(LocalPlayerUnit + 0x58) == 1 )
            v148 = (float *)(LocalPlayerUnit + 0x22AC);
          v149 = *v148;
          v150 = v148[1];
          v144 = v148[2];
          goto LABEL_121;
        }
        if ( !*(_WORD *)(LocalPlayerUnit + 0x10B0) )
        {
          v150 = 0.0;
          v149 = 0.0;
          if ( (*(_DWORD *)(LocalPlayerUnit + 0x1058) & 0x2000010) == 0 )
          {
            v352 = *(double **)(LocalPlayerUnit + 0x9D0);
            v144 = v352[0x132];
            v150 = v352[0x131];                 // Air velocity, again
                                                // 
            v149 = v352[0x130];
          }
          goto LABEL_121;
        }
      }
      v150 = 0.0;
      v149 = 0.0;
LABEL_121:
      v141 = (float)((float)(v149 * v392) + v141)
           + (float)((float)(v144 * *((float *)&v393 + 1)) + (float)(v150 * *(float *)&v393));
      goto LABEL_131;
    }
LABEL_124:
    v151 = *(_QWORD *)(BallisticComputer_1DA0 + 0x10);
    v152 = *(unsigned __int16 *)(v151 + 0x10B0);
    if ( v152 <= 0xF )
    {
      v153 = 0x897E;
      if ( _bittest(&v153, v152) )
      {
        v154 = *(_QWORD *)(v151 + 0x1EA0);
        v155 = (__int128 *)(v154 + 0x54);
        v44 = v154 == 0;
        v156 = &xmmword_450E8F0;
        if ( !v44 )
          v156 = v155;
        if ( *(_BYTE *)(v151 + 0x58) == 1 )
          v156 = (__int128 *)(v151 + 0x22AC);
        v378 = *((float *)v156 + 2);
        v377 = *(_QWORD *)v156;
LABEL_131:
        if ( v382.m128_i8[0] )
          v157 = fminf(v82, v138);
        else
          v157 = *(float *)(BallisticComputer_1DA0 + 8);
        v158 = *(_QWORD *)(cGame_4AD1770 + 0x498);
        if ( v157 > *(float *)&dword_44991A8 || (v159 = 0.0, v157 < *(float *)&dword_44991AC) )
          v159 = (float)(*(float *)(BallisticComputer_1DA0 + 0x48) * *(float *)(v158 + 0x274C)) / v157;
        v160 = fminf(v159, *(float *)&dword_447A1D8);
        v161 = *(float *)(BallisticComputer_1DA0 + 0x3D8) * v160;
        v162 = *(float *)(BallisticComputer_1DA0 + 0x3D4) * v160;
        v385 = v160 * *(float *)(BallisticComputer_1DA0 + 0x3D0);
        v386 = v162;
        v387 = v161;
        if ( byte_4B16DF8 || *(_BYTE *)(v158 + 0x2978) || *(_BYTE *)(qword_4AC8E58 + 0x57) )
          goto LABEL_140;
        v349 = *(_QWORD *)(BallisticComputer_1DA0 + 0x10);
        if ( *(_WORD *)(v349 + 0x10B0) || !*(_BYTE *)(qword_4AC8E58 + 0x35) && !*(_BYTE *)(qword_4AC8E58 + 0x38) )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v349 + 0x50) + 0x10i64))(v349 + 0x50) )
          {
LABEL_140:
            v163 = 0;
LABEL_141:
            v417 = v157;
            v416 = v141;
            if ( byte_4B16DF9
              || (v164 = *(_QWORD *)(cGame_4AD1770 + 0x498), *(_BYTE *)(v164 + 0x2979))
              || *(_BYTE *)(qword_4AC8E58 + 0x58)
              || ((v350 = *(unsigned __int16 *)(*(_QWORD *)(BallisticComputer_1DA0 + 0x10) + 0x10B0i64),
                   !*(_WORD *)(*(_QWORD *)(BallisticComputer_1DA0 + 0x10) + 0x10B0i64)) ? (v351 = *(_BYTE *)(qword_4AC8E58 + 0x35) != 0) : (v351 = 0),
                  !*(_BYTE *)(qword_4AC8E58 + 0x38) && (v350 > 0xF || (v358 = 0x897E, !_bittest(&v358, v350))) && !v351) )
            {
              v165 = 0;
            }
            else
            {
              v165 = *(_BYTE *)(v164 + 0x2752) != 0;
            }
            v166 = *(float *)(BallisticComputer_1DA0 + 0x18);
            v365 = *(float *)(BallisticComputer_1DA0 + 0x20);
            v167 = *(float *)(BallisticComputer_1DA0 + 0x28);
            v168 = (__m128)*(unsigned int *)(BallisticComputer_1DA0 + 0x30);
            v169 = (__m128)*(unsigned int *)(BallisticComputer_1DA0 + 0x34);
            v170 = *(float *)(BallisticComputer_1DA0 + 0x38);
            v361 = *(float *)(BallisticComputer_1DA0 + 0x2C);
            v375 = *(float *)(BallisticComputer_1DA0 + 0x24);
            v171.m128_i32[0] = 0;
            v172.m128_f32[0] = (float)((float)((float)((float)(v375 * v365) * v169.m128_f32[0])
                                             + (float)((float)(v361 * *(float *)(BallisticComputer_1DA0 + 0x1C))
                                                     * v168.m128_f32[0]))
                                     + (float)((float)(v167 * v166) * v170))
                             - (float)((float)((float)(v375 * *(float *)(BallisticComputer_1DA0 + 0x1C)) * v170)
                                     + (float)((float)((float)(v361 * v166) * v169.m128_f32[0])
                                             + (float)((float)(v167 * v365) * v168.m128_f32[0])));
            if ( v172.m128_f32[0] < 0.0 )
            {
              LODWORD(v170) ^= xmmword_447A1F0;
              v169 = _mm_xor_ps(v169, (__m128)xmmword_447A1F0);
            }
            v383.m128_i32[0] = *(_DWORD *)(BallisticComputer_1DA0 + 0x1C);
            v173 = (float)(*(float *)&dword_447A1D8 + v166) - (float)(v170 + v167);
            v174 = 0.0;
            if ( v173 > 0.0 )
              v174 = fsqrt(v173) * *(float *)&dword_447A1CC;
            v175 = _mm_xor_ps(v168, (__m128)xmmword_447A1F0);
            v176 = _mm_cmplt_ss(v172, v171);
            *(float *)&v404 = v174;
            HIDWORD(v404) = LODWORD(v174) ^ xmmword_447A1F0;
            v177 = (float)(*(float *)&dword_447A1D8 + v167) - (float)(v166 + v170);
            v178 = 0i64;
            if ( v177 > 0.0 )
            {
              v178 = 0i64;
              v178.m128_f32[0] = fsqrt(v177) * *(float *)&dword_447A1CC;
            }
            v179 = _mm_and_ps(v175, v176);
            v382 = _mm_andnot_ps(v176, v168);
            v390 = _mm_xor_ps((__m128)xmmword_447A1F0, v178);
            v180 = (float)(*(float *)&dword_447A1D8 - (float)(v166 + v167)) + v170;
            v181 = 0i64;
            if ( v180 > 0.0 )
            {
              v181 = 0i64;
              v181.m128_f32[0] = fsqrt(v180) * *(float *)&dword_447A1CC;
            }
            v382 = _mm_or_ps(v382, v179);
            v391 = (__int128)v181;
            v389 = _mm_xor_ps((__m128)xmmword_447A1F0, v181);
            v182 = (float)(v170 + v167) + (float)(*(float *)&dword_447A1D8 + v166);
            v183 = 0.0;
            v184 = 0i64;
            if ( v182 > 0.0 )
            {
              v184 = 0i64;
              v184.m128_f32[0] = fsqrt(v182) * *(float *)&dword_447A1CC;
            }
            v185 = _mm_xor_ps((__m128)xmmword_447A1F0, v184);
            v186 = (__int128)v184;
            v187 = *(float *)&v391;
            *(float *)&v186 = v184.m128_f32[0] * *(float *)&v391;
            v415 = v186;
            v188 = v391;
            *(float *)&v188 = *(float *)&v391 * v185.m128_f32[0];
            v429 = v188;
            v189 = (__int128)v184;
            *(float *)&v189 = v184.m128_f32[0] * v389.m128_f32[0];
            v428 = v189;
            v190 = v391;
            *(float *)&v190 = *(float *)&v391 * v178.m128_f32[0];
            v427 = v190;
            v191 = (__int128)v184;
            *(float *)&v191 = v184.m128_f32[0] * v178.m128_f32[0];
            v426 = v191;
            v388 = v185;
            v185.m128_f32[0] = v185.m128_f32[0] * v178.m128_f32[0];
            v425 = (__int128)v185;
            v192 = (__int128)v178;
            *(float *)&v192 = v178.m128_f32[0] * v389.m128_f32[0];
            v424 = v192;
            v193 = v391;
            *(float *)&v193 = *(float *)&v391 * v390.m128_f32[0];
            v423 = v193;
            v194 = (__int128)v184;
            *(float *)&v194 = v184.m128_f32[0] * v390.m128_f32[0];
            v422 = v194;
            v195 = *(float *)&dword_449A7C4;
            v196 = 1;
            v197 = 0i64;
            v198 = 0.0;
            v199 = 0.0;
            v200 = 0.0;
            v201 = v169.m128_f32[0];
            v384 = v169;
            v402 = v178;
            v403 = v184;
            do
            {
              v368 = v199;
              v370 = v198;
              v372 = v183;
              v202 = *((float *)&v404 + v197);
              v203 = v202 * v187;
              v204 = v202 * v184.m128_f32[0];
              v205 = v202 * v388.m128_f32[0];
              v206 = v202 * v178.m128_f32[0];
              v207 = (float)((float)((float)((float)(v206 + *(float *)&v415) + (float)(v206 + *(float *)&v415))
                                   - v383.m128_f32[0])
                           * (float)((float)((float)(v206 + *(float *)&v415) + (float)(v206 + *(float *)&v415))
                                   - v383.m128_f32[0]))
                   + (float)((float)((float)((float)(v206 - *(float *)&v415) + (float)(v206 - *(float *)&v415)) - v375)
                           * (float)((float)((float)(v206 - *(float *)&v415) + (float)(v206 - *(float *)&v415)) - v375));
              v208 = (float)((float)((float)((float)(v203 - *(float *)&v426) + (float)(v203 - *(float *)&v426)) - v365)
                           * (float)((float)((float)(v203 - *(float *)&v426) + (float)(v203 - *(float *)&v426)) - v365))
                   + (float)((float)((float)((float)(v203 + *(float *)&v426) + (float)(v203 + *(float *)&v426))
                                   - v382.m128_f32[0])
                           * (float)((float)((float)(v203 + *(float *)&v426) + (float)(v203 + *(float *)&v426))
                                   - v382.m128_f32[0]));
              v209 = (float)((float)((float)((float)(v204 + *(float *)&v427) + (float)(v204 + *(float *)&v427)) - v361)
                           * (float)((float)((float)(v204 + *(float *)&v427) + (float)(v204 + *(float *)&v427)) - v361))
                   + (float)((float)((float)((float)(*(float *)&v427 - v204) + (float)(*(float *)&v427 - v204)) - v201)
                           * (float)((float)((float)(*(float *)&v427 - v204) + (float)(*(float *)&v427 - v204)) - v201));
              if ( (float)((float)(v208 + v209) + v207) < v195 )
              {
                v372 = v403.m128_f32[0];
                v370 = *(float *)&v391;
                v368 = v178.m128_f32[0];
                v200 = *((float *)&v404 + v197);
                v195 = (float)((float)((float)((float)(v203 - *(float *)&v426) + (float)(v203 - *(float *)&v426)) - v365)
                             * (float)((float)((float)(v203 - *(float *)&v426) + (float)(v203 - *(float *)&v426)) - v365))
                     + (float)((float)((float)((float)(v203 + *(float *)&v426) + (float)(v203 + *(float *)&v426))
                                     - v382.m128_f32[0])
                             * (float)((float)((float)(v203 + *(float *)&v426) + (float)(v203 + *(float *)&v426))
                                     - v382.m128_f32[0]));
              }
              v210 = v427;
              *(float *)&v210 = (float)((float)((float)(*(float *)&v427 - v205) + (float)(*(float *)&v427 - v205))
                                      - v384.m128_f32[0])
                              * (float)((float)((float)(*(float *)&v427 - v205) + (float)(*(float *)&v427 - v205))
                                      - v384.m128_f32[0]);
              *(float *)&v431 = (float)((float)((float)(v205 + *(float *)&v427) + (float)(v205 + *(float *)&v427)) - v361)
                              * (float)((float)((float)(v205 + *(float *)&v427) + (float)(v205 + *(float *)&v427)) - v361);
              v421 = v210;
              v211 = v202 * v389.m128_f32[0];
              if ( (float)((float)((float)(*(float *)&v431 + *(float *)&v210)
                                 + (float)((float)((float)((float)((float)(v203 + *(float *)&v425)
                                                                 + (float)(v203 + *(float *)&v425))
                                                         - v382.m128_f32[0])
                                                 * (float)((float)((float)(v203 + *(float *)&v425)
                                                                 + (float)(v203 + *(float *)&v425))
                                                         - v382.m128_f32[0]))
                                         + (float)((float)((float)((float)(v206 - *(float *)&v429)
                                                                 + (float)(v206 - *(float *)&v429))
                                                         - v375)
                                                 * (float)((float)((float)(v206 - *(float *)&v429)
                                                                 + (float)(v206 - *(float *)&v429))
                                                         - v375))))
                         + (float)((float)((float)((float)((float)(v203 - *(float *)&v425)
                                                         + (float)(v203 - *(float *)&v425))
                                                 - v365)
                                         * (float)((float)((float)(v203 - *(float *)&v425)
                                                         + (float)(v203 - *(float *)&v425))
                                                 - v365))
                                 + (float)((float)((float)((float)(v206 + *(float *)&v429)
                                                         + (float)(v206 + *(float *)&v429))
                                                 - v383.m128_f32[0])
                                         * (float)((float)((float)(v206 + *(float *)&v429)
                                                         + (float)(v206 + *(float *)&v429))
                                                 - v383.m128_f32[0])))) < v195 )
              {
                v372 = v388.m128_f32[0];
                v370 = *(float *)&v391;
                v368 = v402.m128_f32[0];
                v200 = v202;
                v195 = v202 * v388.m128_f32[0];
              }
              v212 = (float)((float)((float)((float)(v211 - *(float *)&v426) + (float)(v211 - *(float *)&v426)) - v365)
                           * (float)((float)((float)(v211 - *(float *)&v426) + (float)(v211 - *(float *)&v426)) - v365))
                   + (float)((float)((float)((float)(v211 + *(float *)&v426) + (float)(v211 + *(float *)&v426))
                                   - v382.m128_f32[0])
                           * (float)((float)((float)(v211 + *(float *)&v426) + (float)(v211 + *(float *)&v426))
                                   - v382.m128_f32[0]));
              v213 = (float)((float)((float)((float)((float)((float)(v206 + *(float *)&v428)
                                                           + (float)(v206 + *(float *)&v428))
                                                   - v383.m128_f32[0])
                                           * (float)((float)((float)(v206 + *(float *)&v428)
                                                           + (float)(v206 + *(float *)&v428))
                                                   - v383.m128_f32[0]))
                                   + (float)((float)((float)((float)(v206 - *(float *)&v428)
                                                           + (float)(v206 - *(float *)&v428))
                                                   - v375)
                                           * (float)((float)((float)(v206 - *(float *)&v428)
                                                           + (float)(v206 - *(float *)&v428))
                                                   - v375)))
                           + v212)
                   + (float)((float)((float)((float)((float)(v204 + *(float *)&v424) + (float)(v204 + *(float *)&v424))
                                           - v361)
                                   * (float)((float)((float)(v204 + *(float *)&v424) + (float)(v204 + *(float *)&v424))
                                           - v361))
                           + (float)((float)((float)((float)(*(float *)&v424 - v204) + (float)(*(float *)&v424 - v204))
                                           - v384.m128_f32[0])
                                   * (float)((float)((float)(*(float *)&v424 - v204) + (float)(*(float *)&v424 - v204))
                                           - v384.m128_f32[0])));
              if ( v213 < v195 )
              {
                v372 = v403.m128_f32[0];
                v370 = v389.m128_f32[0];
                v368 = v402.m128_f32[0];
                v200 = v202;
                v195 = v213;
              }
              if ( (float)((float)((float)((float)((float)((float)((float)(v205 + *(float *)&v424)
                                                                 + (float)(v205 + *(float *)&v424))
                                                         - v361)
                                                 * (float)((float)((float)(v205 + *(float *)&v424)
                                                                 + (float)(v205 + *(float *)&v424))
                                                         - v361))
                                         + (float)((float)((float)((float)(v211 - *(float *)&v425)
                                                                 + (float)(v211 - *(float *)&v425))
                                                         - v365)
                                                 * (float)((float)((float)(v211 - *(float *)&v425)
                                                                 + (float)(v211 - *(float *)&v425))
                                                         - v365)))
                                 + (float)((float)((float)((float)((float)(*(float *)&v424 - v205)
                                                                 + (float)(*(float *)&v424 - v205))
                                                         - v384.m128_f32[0])
                                                 * (float)((float)((float)(*(float *)&v424 - v205)
                                                                 + (float)(*(float *)&v424 - v205))
                                                         - v384.m128_f32[0]))
                                         + (float)((float)((float)((float)(v211 + *(float *)&v425)
                                                                 + (float)(v211 + *(float *)&v425))
                                                         - v382.m128_f32[0])
                                                 * (float)((float)((float)(v211 + *(float *)&v425)
                                                                 + (float)(v211 + *(float *)&v425))
                                                         - v382.m128_f32[0]))))
                         + v207) < v195 )
              {
                v372 = v388.m128_f32[0];
                v370 = v389.m128_f32[0];
                v368 = v402.m128_f32[0];
                v200 = v202;
                v195 = v202 * v388.m128_f32[0];
              }
              *(float *)&v430 = v195;
              v214 = v202 * v390.m128_f32[0];
              v215 = (float)((float)((float)(v202 * v390.m128_f32[0]) - *(float *)&v415)
                           + (float)((float)(v202 * v390.m128_f32[0]) - *(float *)&v415))
                   - v375;
              v216 = (float)((float)((float)((float)(v214 + *(float *)&v415) + (float)(v214 + *(float *)&v415))
                                   - v383.m128_f32[0])
                           * (float)((float)((float)(v214 + *(float *)&v415) + (float)(v214 + *(float *)&v415))
                                   - v383.m128_f32[0]))
                   + (float)(v215 * v215);
              v217 = (float)((float)((float)((float)((float)((float)(v204 + *(float *)&v423)
                                                           + (float)(v204 + *(float *)&v423))
                                                   - v361)
                                           * (float)((float)((float)(v204 + *(float *)&v423)
                                                           + (float)(v204 + *(float *)&v423))
                                                   - v361))
                                   + (float)((float)((float)((float)(v203 - *(float *)&v422)
                                                           + (float)(v203 - *(float *)&v422))
                                                   - v365)
                                           * (float)((float)((float)(v203 - *(float *)&v422)
                                                           + (float)(v203 - *(float *)&v422))
                                                   - v365)))
                           + (float)((float)((float)((float)((float)(*(float *)&v423 - v204)
                                                           + (float)(*(float *)&v423 - v204))
                                                   - v384.m128_f32[0])
                                           * (float)((float)((float)(*(float *)&v423 - v204)
                                                           + (float)(*(float *)&v423 - v204))
                                                   - v384.m128_f32[0]))
                                   + (float)((float)((float)((float)(v203 + *(float *)&v422)
                                                           + (float)(v203 + *(float *)&v422))
                                                   - v382.m128_f32[0])
                                           * (float)((float)((float)(v203 + *(float *)&v422)
                                                           + (float)(v203 + *(float *)&v422))
                                                   - v382.m128_f32[0]))))
                   + v216;
              v183 = v372;
              if ( v217 < v195 )
              {
                v183 = v403.m128_f32[0];
                v370 = *(float *)&v391;
                v368 = v390.m128_f32[0];
                v200 = v202;
                v195 = v217;
              }
              v218 = (float)(v208
                           + (float)((float)((float)((float)(v214 - *(float *)&v429) + (float)(v214 - *(float *)&v429))
                                           - v375)
                                   * (float)((float)((float)(v214 - *(float *)&v429) + (float)(v214 - *(float *)&v429))
                                           - v375)))
                   + (float)((float)((float)((float)((float)(v205 + *(float *)&v423) + (float)(v205 + *(float *)&v423))
                                           - v361)
                                   * (float)((float)((float)(v205 + *(float *)&v423) + (float)(v205 + *(float *)&v423))
                                           - v361))
                           + (float)((float)((float)((float)((float)(*(float *)&v423 - v205)
                                                           + (float)(*(float *)&v423 - v205))
                                                   - v384.m128_f32[0])
                                           * (float)((float)((float)(*(float *)&v423 - v205)
                                                           + (float)(*(float *)&v423 - v205))
                                                   - v384.m128_f32[0]))
                                   + (float)((float)((float)((float)(v214 + *(float *)&v429)
                                                           + (float)(v214 + *(float *)&v429))
                                                   - v383.m128_f32[0])
                                           * (float)((float)((float)(v214 + *(float *)&v429)
                                                           + (float)(v214 + *(float *)&v429))
                                                   - v383.m128_f32[0]))));
              v198 = v370;
              v199 = v368;
              if ( v218 < v195 )
              {
                v183 = v388.m128_f32[0];
                v198 = *(float *)&v391;
                v199 = v390.m128_f32[0];
                v200 = v202;
                v195 = v218;
              }
              v219 = (float)(v209
                           + (float)((float)((float)((float)((float)(v211 + *(float *)&v422)
                                                           + (float)(v211 + *(float *)&v422))
                                                   - v382.m128_f32[0])
                                           * (float)((float)((float)(v211 + *(float *)&v422)
                                                           + (float)(v211 + *(float *)&v422))
                                                   - v382.m128_f32[0]))
                                   + (float)((float)((float)((float)(v214 - *(float *)&v428)
                                                           + (float)(v214 - *(float *)&v428))
                                                   - v375)
                                           * (float)((float)((float)(v214 - *(float *)&v428)
                                                           + (float)(v214 - *(float *)&v428))
                                                   - v375))))
                   + (float)((float)((float)((float)((float)(v211 - *(float *)&v422) + (float)(v211 - *(float *)&v422))
                                           - v365)
                                   * (float)((float)((float)(v211 - *(float *)&v422) + (float)(v211 - *(float *)&v422))
                                           - v365))
                           + (float)((float)((float)((float)(v214 + *(float *)&v428) + (float)(v214 + *(float *)&v428))
                                           - v383.m128_f32[0])
                                   * (float)((float)((float)(v214 + *(float *)&v428) + (float)(v214 + *(float *)&v428))
                                           - v383.m128_f32[0])));
              v184.m128_i32[0] = v403.m128_i32[0];
              if ( v219 < v195 )
              {
                v183 = v403.m128_f32[0];
                v198 = v389.m128_f32[0];
                v199 = v390.m128_f32[0];
                v200 = v202;
                v195 = v219;
              }
              v220 = (float)((float)(v212 + *(float *)&v421) + *(float *)&v431) + v216;
              if ( v220 < v195 )
              {
                v183 = v388.m128_f32[0];
                v198 = v389.m128_f32[0];
                v199 = v390.m128_f32[0];
                v200 = v202;
                v195 = v220;
              }
              v197 = 1i64;
              v44 = (v196 & 1) == 0;
              v196 = 0;
              v201 = v384.m128_f32[0];
              v187 = *(float *)&v391;
              v178.m128_i32[0] = v402.m128_i32[0];
            }
            while ( !v44 );
            v221 = fsqrt(
                     (float)((float)(v183 * v183) + (float)(v198 * v198))
                   + (float)((float)(v199 * v199) + (float)(v200 * v200)));
            v222 = v200;
            v223.m128_i32[0] = 0;
            v224 = 0.0;
            v225 = 0.0;
            v226 = 0.0;
            v227 = 0.0;
            if ( v221 != 0.0 )
            {
              v224 = v222 * (float)(*(float *)&dword_447A1D8 / v221);
              v225 = v199 * (float)(*(float *)&dword_447A1D8 / v221);
              v226 = v198 * (float)(*(float *)&dword_447A1D8 / v221);
              v227 = v183 * (float)(*(float *)&dword_447A1D8 / v221);
            }
            v404 = __PAIR64__(LODWORD(v225), LODWORD(v224));
            v405 = v226;
            v406 = v227;
            v228 = v13[0x267];
            v229 = v13[0x268];
            v230 = v13[0x269];
            v231 = v13[0x26A];
            v232 = v13[0x26B];
            v233 = (__m128)*((unsigned int *)v13 + 0x26D);
            v234 = (__m128)*((unsigned int *)v13 + 0x26E);
            v235 = v13[0x26F];
            v236 = (float)((float)((float)(v231 * v230) * v234.m128_f32[0])
                         + (float)((float)(v13[0x26C] * v229) * v233.m128_f32[0]))
                 + (float)((float)(v232 * v228) * v235);
            v376 = v230;
            v384.m128_f32[0] = v13[0x26C];
            v362 = v231;
            v366 = v229;
            v237.m128_f32[0] = v236
                             - (float)((float)((float)(v231 * v229) * v235)
                                     + (float)((float)((float)(v384.m128_f32[0] * v228) * v234.m128_f32[0])
                                             + (float)((float)(v232 * v230) * v233.m128_f32[0])));
            if ( v237.m128_f32[0] < 0.0 )
            {
              LODWORD(v235) ^= xmmword_447A1F0;
              v234 = _mm_xor_ps(v234, (__m128)xmmword_447A1F0);
            }
            v383 = v234;
            v238 = v235 + v232;
            v239 = (float)(*(float *)&dword_447A1D8 + v228) - (float)(v235 + v232);
            v240 = 0.0;
            if ( v239 > 0.0 )
              v240 = fsqrt(v239) * *(float *)&dword_447A1CC;
            v241 = _mm_xor_ps((__m128)xmmword_447A1F0, v233);
            v242 = _mm_cmplt_ss(v237, v223);
            *(float *)&v379 = v240;
            HIDWORD(v379) = LODWORD(v240) ^ xmmword_447A1F0;
            v243 = (float)(*(float *)&dword_447A1D8 + v232) - (float)(v228 + v235);
            v244 = 0i64;
            if ( v243 > 0.0 )
            {
              v244 = 0i64;
              v244.m128_f32[0] = fsqrt(v243) * *(float *)&dword_447A1CC;
            }
            v245 = _mm_and_ps(v241, v242);
            v382 = _mm_andnot_ps(v242, v233);
            v388 = _mm_xor_ps((__m128)xmmword_447A1F0, v244);
            v246 = (float)(*(float *)&dword_447A1D8 - (float)(v228 + v232)) + v235;
            v247 = 0i64;
            v248 = (__int128)v244;
            if ( v246 > 0.0 )
            {
              v247 = 0i64;
              v247.m128_f32[0] = fsqrt(v246) * *(float *)&dword_447A1CC;
            }
            v382 = _mm_or_ps(v382, v245);
            v402 = _mm_xor_ps((__m128)xmmword_447A1F0, v247);
            v249 = v238 + (float)(*(float *)&dword_447A1D8 + v228);
            v250 = 0.0;
            v251 = 0i64;
            if ( v249 > 0.0 )
            {
              v251 = 0i64;
              v251.m128_f32[0] = fsqrt(v249) * *(float *)&dword_447A1CC;
            }
            v252 = _mm_xor_ps((__m128)xmmword_447A1F0, v251);
            v253 = (__int128)v251;
            *(float *)&v253 = v251.m128_f32[0] * v247.m128_f32[0];
            v429 = v253;
            v254 = (__int128)v247;
            *(float *)&v254 = v247.m128_f32[0] * v252.m128_f32[0];
            v428 = v254;
            v255 = (__int128)v251;
            *(float *)&v255 = v251.m128_f32[0] * v402.m128_f32[0];
            v427 = v255;
            v256 = (__int128)v247;
            *(float *)&v256 = v247.m128_f32[0] * *(float *)&v248;
            v426 = v256;
            v257 = (__int128)v251;
            *(float *)&v257 = v251.m128_f32[0] * *(float *)&v248;
            v425 = v257;
            v403 = v252;
            v252.m128_f32[0] = v252.m128_f32[0] * *(float *)&v248;
            v424 = (__int128)v252;
            v258 = v248;
            *(float *)&v258 = *(float *)&v248 * v402.m128_f32[0];
            v423 = v258;
            v259 = (__int128)v247;
            *(float *)&v259 = v247.m128_f32[0] * v388.m128_f32[0];
            v422 = v259;
            v260 = (__int128)v251;
            *(float *)&v260 = v251.m128_f32[0] * v388.m128_f32[0];
            v430 = v260;
            v261 = *(float *)&dword_449A7C4;
            v262 = 1;
            v263 = 0i64;
            v264 = 0.0;
            v371 = 0.0;
            v369 = 0.0;
            v389 = v247;
            v415 = v248;
            v421 = (__int128)v251;
            do
            {
              v265 = v250;
              *(float *)&v391 = v264;
              v266 = *((float *)&v379 + v263);
              v267 = v266 * v247.m128_f32[0];
              v268 = v266 * v251.m128_f32[0];
              v269 = v266 * v403.m128_f32[0];
              v270 = v266 * *(float *)&v248;
              v271 = (float)((float)((float)((float)(v270 + *(float *)&v429) + (float)(v270 + *(float *)&v429)) - v366)
                           * (float)((float)((float)(v270 + *(float *)&v429) + (float)(v270 + *(float *)&v429)) - v366))
                   + (float)((float)((float)((float)(v270 - *(float *)&v429) + (float)(v270 - *(float *)&v429)) - v362)
                           * (float)((float)((float)(v270 - *(float *)&v429) + (float)(v270 - *(float *)&v429)) - v362));
              v272 = (float)((float)((float)((float)(v267 - *(float *)&v425) + (float)(v267 - *(float *)&v425)) - v376)
                           * (float)((float)((float)(v267 - *(float *)&v425) + (float)(v267 - *(float *)&v425)) - v376))
                   + (float)((float)((float)((float)(v267 + *(float *)&v425) + (float)(v267 + *(float *)&v425))
                                   - v382.m128_f32[0])
                           * (float)((float)((float)(v267 + *(float *)&v425) + (float)(v267 + *(float *)&v425))
                                   - v382.m128_f32[0]));
              v418 = (float)((float)((float)((float)(v268 + *(float *)&v426) + (float)(v268 + *(float *)&v426))
                                   - v384.m128_f32[0])
                           * (float)((float)((float)(v268 + *(float *)&v426) + (float)(v268 + *(float *)&v426))
                                   - v384.m128_f32[0]))
                   + (float)((float)((float)((float)(*(float *)&v426 - v268) + (float)(*(float *)&v426 - v268))
                                   - v383.m128_f32[0])
                           * (float)((float)((float)(*(float *)&v426 - v268) + (float)(*(float *)&v426 - v268))
                                   - v383.m128_f32[0]));
              if ( (float)((float)(v272 + v418) + v271) < v261 )
              {
                v265 = v251.m128_f32[0];
                LODWORD(v391) = v389.m128_i32[0];
                v371 = *(float *)&v248;
                v369 = v266;
                v261 = (float)(v272 + v418) + v271;
              }
              v373 = v265;
              v273 = v426;
              *(float *)&v273 = (float)((float)((float)(*(float *)&v426 - v269) + (float)(*(float *)&v426 - v269))
                                      - v383.m128_f32[0])
                              * (float)((float)((float)(*(float *)&v426 - v269) + (float)(*(float *)&v426 - v269))
                                      - v383.m128_f32[0]);
              v274 = (float)((float)((float)(v269 + *(float *)&v426) + (float)(v269 + *(float *)&v426))
                           - v384.m128_f32[0])
                   * (float)((float)((float)(v269 + *(float *)&v426) + (float)(v269 + *(float *)&v426))
                           - v384.m128_f32[0]);
              v431 = v273;
              v275 = v266 * v402.m128_f32[0];
              if ( (float)((float)((float)(v274 + *(float *)&v273)
                                 + (float)((float)((float)((float)((float)(v267 + *(float *)&v424)
                                                                 + (float)(v267 + *(float *)&v424))
                                                         - v382.m128_f32[0])
                                                 * (float)((float)((float)(v267 + *(float *)&v424)
                                                                 + (float)(v267 + *(float *)&v424))
                                                         - v382.m128_f32[0]))
                                         + (float)((float)((float)((float)(v270 - *(float *)&v428)
                                                                 + (float)(v270 - *(float *)&v428))
                                                         - v362)
                                                 * (float)((float)((float)(v270 - *(float *)&v428)
                                                                 + (float)(v270 - *(float *)&v428))
                                                         - v362))))
                         + (float)((float)((float)((float)((float)(v267 - *(float *)&v424)
                                                         + (float)(v267 - *(float *)&v424))
                                                 - v376)
                                         * (float)((float)((float)(v267 - *(float *)&v424)
                                                         + (float)(v267 - *(float *)&v424))
                                                 - v376))
                                 + (float)((float)((float)((float)(v270 + *(float *)&v428)
                                                         + (float)(v270 + *(float *)&v428))
                                                 - v366)
                                         * (float)((float)((float)(v270 + *(float *)&v428)
                                                         + (float)(v270 + *(float *)&v428))
                                                 - v366)))) < v261 )
              {
                v373 = v403.m128_f32[0];
                LODWORD(v391) = v389.m128_i32[0];
                v371 = *(float *)&v415;
                v369 = v266;
                v261 = (float)((float)(v274 + *(float *)&v273)
                             + (float)((float)((float)((float)((float)(v267 + *(float *)&v424)
                                                             + (float)(v267 + *(float *)&v424))
                                                     - v382.m128_f32[0])
                                             * (float)((float)((float)(v267 + *(float *)&v424)
                                                             + (float)(v267 + *(float *)&v424))
                                                     - v382.m128_f32[0]))
                                     + (float)((float)((float)((float)(v270 - *(float *)&v428)
                                                             + (float)(v270 - *(float *)&v428))
                                                     - v362)
                                             * (float)((float)((float)(v270 - *(float *)&v428)
                                                             + (float)(v270 - *(float *)&v428))
                                                     - v362))))
                     + (float)((float)((float)((float)((float)(v267 - *(float *)&v424) + (float)(v267 - *(float *)&v424))
                                             - v376)
                                     * (float)((float)((float)(v267 - *(float *)&v424) + (float)(v267 - *(float *)&v424))
                                             - v376))
                             + (float)((float)((float)((float)(v270 + *(float *)&v428) + (float)(v270 + *(float *)&v428))
                                             - v366)
                                     * (float)((float)((float)(v270 + *(float *)&v428) + (float)(v270 + *(float *)&v428))
                                             - v366)));
              }
              v390.m128_f32[0] = v266;
              v276 = (float)((float)((float)((float)(v275 - *(float *)&v425) + (float)(v275 - *(float *)&v425)) - v376)
                           * (float)((float)((float)(v275 - *(float *)&v425) + (float)(v275 - *(float *)&v425)) - v376))
                   + (float)((float)((float)((float)(v275 + *(float *)&v425) + (float)(v275 + *(float *)&v425))
                                   - v382.m128_f32[0])
                           * (float)((float)((float)(v275 + *(float *)&v425) + (float)(v275 + *(float *)&v425))
                                   - v382.m128_f32[0]));
              v277 = (float)((float)((float)((float)((float)((float)(v270 + *(float *)&v427)
                                                           + (float)(v270 + *(float *)&v427))
                                                   - v366)
                                           * (float)((float)((float)(v270 + *(float *)&v427)
                                                           + (float)(v270 + *(float *)&v427))
                                                   - v366))
                                   + (float)((float)((float)((float)(v270 - *(float *)&v427)
                                                           + (float)(v270 - *(float *)&v427))
                                                   - v362)
                                           * (float)((float)((float)(v270 - *(float *)&v427)
                                                           + (float)(v270 - *(float *)&v427))
                                                   - v362)))
                           + v276)
                   + (float)((float)((float)((float)((float)(v268 + *(float *)&v423) + (float)(v268 + *(float *)&v423))
                                           - v384.m128_f32[0])
                                   * (float)((float)((float)(v268 + *(float *)&v423) + (float)(v268 + *(float *)&v423))
                                           - v384.m128_f32[0]))
                           + (float)((float)((float)((float)(*(float *)&v423 - v268) + (float)(*(float *)&v423 - v268))
                                           - v383.m128_f32[0])
                                   * (float)((float)((float)(*(float *)&v423 - v268) + (float)(*(float *)&v423 - v268))
                                           - v383.m128_f32[0])));
              if ( v277 < v261 )
              {
                v373 = *(float *)&v421;
                LODWORD(v391) = v402.m128_i32[0];
                v371 = *(float *)&v415;
                v369 = v390.m128_f32[0];
                v261 = v277;
              }
              if ( (float)((float)((float)((float)((float)((float)((float)(v269 + *(float *)&v423)
                                                                 + (float)(v269 + *(float *)&v423))
                                                         - v384.m128_f32[0])
                                                 * (float)((float)((float)(v269 + *(float *)&v423)
                                                                 + (float)(v269 + *(float *)&v423))
                                                         - v384.m128_f32[0]))
                                         + (float)((float)((float)((float)(v275 - *(float *)&v424)
                                                                 + (float)(v275 - *(float *)&v424))
                                                         - v376)
                                                 * (float)((float)((float)(v275 - *(float *)&v424)
                                                                 + (float)(v275 - *(float *)&v424))
                                                         - v376)))
                                 + (float)((float)((float)((float)((float)(*(float *)&v423 - v269)
                                                                 + (float)(*(float *)&v423 - v269))
                                                         - v383.m128_f32[0])
                                                 * (float)((float)((float)(*(float *)&v423 - v269)
                                                                 + (float)(*(float *)&v423 - v269))
                                                         - v383.m128_f32[0]))
                                         + (float)((float)((float)((float)(v275 + *(float *)&v424)
                                                                 + (float)(v275 + *(float *)&v424))
                                                         - v382.m128_f32[0])
                                                 * (float)((float)((float)(v275 + *(float *)&v424)
                                                                 + (float)(v275 + *(float *)&v424))
                                                         - v382.m128_f32[0]))))
                         + v271) < v261 )
              {
                v373 = v403.m128_f32[0];
                LODWORD(v391) = v402.m128_i32[0];
                v371 = *(float *)&v415;
                v369 = v390.m128_f32[0];
                v261 = v269;
              }
              v278 = v390.m128_f32[0] * v388.m128_f32[0];
              v279 = (float)((float)((float)((float)(v278 + *(float *)&v429) + (float)(v278 + *(float *)&v429)) - v366)
                           * (float)((float)((float)(v278 + *(float *)&v429) + (float)(v278 + *(float *)&v429)) - v366))
                   + (float)((float)((float)((float)(v278 - *(float *)&v429) + (float)(v278 - *(float *)&v429)) - v362)
                           * (float)((float)((float)(v278 - *(float *)&v429) + (float)(v278 - *(float *)&v429)) - v362));
              v280 = (float)((float)((float)((float)((float)((float)(v268 + *(float *)&v422)
                                                           + (float)(v268 + *(float *)&v422))
                                                   - v384.m128_f32[0])
                                           * (float)((float)((float)(v268 + *(float *)&v422)
                                                           + (float)(v268 + *(float *)&v422))
                                                   - v384.m128_f32[0]))
                                   + (float)((float)((float)((float)(v267 - *(float *)&v430)
                                                           + (float)(v267 - *(float *)&v430))
                                                   - v376)
                                           * (float)((float)((float)(v267 - *(float *)&v430)
                                                           + (float)(v267 - *(float *)&v430))
                                                   - v376)))
                           + (float)((float)((float)((float)((float)(*(float *)&v422 - v268)
                                                           + (float)(*(float *)&v422 - v268))
                                                   - v383.m128_f32[0])
                                           * (float)((float)((float)(*(float *)&v422 - v268)
                                                           + (float)(*(float *)&v422 - v268))
                                                   - v383.m128_f32[0]))
                                   + (float)((float)((float)((float)(v267 + *(float *)&v430)
                                                           + (float)(v267 + *(float *)&v430))
                                                   - v382.m128_f32[0])
                                           * (float)((float)((float)(v267 + *(float *)&v430)
                                                           + (float)(v267 + *(float *)&v430))
                                                   - v382.m128_f32[0]))))
                   + v279;
              v264 = *(float *)&v391;
              if ( v280 < v261 )
              {
                v373 = *(float *)&v421;
                v264 = v389.m128_f32[0];
                v371 = v388.m128_f32[0];
                v369 = v390.m128_f32[0];
                v261 = v280;
              }
              v281 = (float)(v272
                           + (float)((float)((float)((float)(v278 - *(float *)&v428) + (float)(v278 - *(float *)&v428))
                                           - v362)
                                   * (float)((float)((float)(v278 - *(float *)&v428) + (float)(v278 - *(float *)&v428))
                                           - v362)))
                   + (float)((float)((float)((float)((float)(v269 + *(float *)&v422) + (float)(v269 + *(float *)&v422))
                                           - v384.m128_f32[0])
                                   * (float)((float)((float)(v269 + *(float *)&v422) + (float)(v269 + *(float *)&v422))
                                           - v384.m128_f32[0]))
                           + (float)((float)((float)((float)((float)(*(float *)&v422 - v269)
                                                           + (float)(*(float *)&v422 - v269))
                                                   - v383.m128_f32[0])
                                           * (float)((float)((float)(*(float *)&v422 - v269)
                                                           + (float)(*(float *)&v422 - v269))
                                                   - v383.m128_f32[0]))
                                   + (float)((float)((float)((float)(v278 + *(float *)&v428)
                                                           + (float)(v278 + *(float *)&v428))
                                                   - v366)
                                           * (float)((float)((float)(v278 + *(float *)&v428)
                                                           + (float)(v278 + *(float *)&v428))
                                                   - v366))));
              v250 = v373;
              if ( v281 < v261 )
              {
                v250 = v403.m128_f32[0];
                v264 = v389.m128_f32[0];
                v371 = v388.m128_f32[0];
                v369 = v390.m128_f32[0];
                v261 = v281;
              }
              v282 = (float)(v418
                           + (float)((float)((float)((float)((float)(v275 + *(float *)&v430)
                                                           + (float)(v275 + *(float *)&v430))
                                                   - v382.m128_f32[0])
                                           * (float)((float)((float)(v275 + *(float *)&v430)
                                                           + (float)(v275 + *(float *)&v430))
                                                   - v382.m128_f32[0]))
                                   + (float)((float)((float)((float)(v278 - *(float *)&v427)
                                                           + (float)(v278 - *(float *)&v427))
                                                   - v362)
                                           * (float)((float)((float)(v278 - *(float *)&v427)
                                                           + (float)(v278 - *(float *)&v427))
                                                   - v362))))
                   + (float)((float)((float)((float)((float)(v275 - *(float *)&v430) + (float)(v275 - *(float *)&v430))
                                           - v376)
                                   * (float)((float)((float)(v275 - *(float *)&v430) + (float)(v275 - *(float *)&v430))
                                           - v376))
                           + (float)((float)((float)((float)(v278 + *(float *)&v427) + (float)(v278 + *(float *)&v427))
                                           - v366)
                                   * (float)((float)((float)(v278 + *(float *)&v427) + (float)(v278 + *(float *)&v427))
                                           - v366)));
              v251.m128_i32[0] = v421;
              if ( v282 < v261 )
              {
                v250 = *(float *)&v421;
                v264 = v402.m128_f32[0];
                v371 = v388.m128_f32[0];
                v369 = v390.m128_f32[0];
                v261 = v282;
              }
              v283 = (float)((float)(v276 + *(float *)&v431) + v274) + v279;
              if ( v283 < v261 )
              {
                v250 = v403.m128_f32[0];
                v264 = v402.m128_f32[0];
                v371 = v388.m128_f32[0];
                v369 = v390.m128_f32[0];
                v261 = v283;
              }
              v263 = 1i64;
              v44 = (v262 & 1) == 0;
              v262 = 0;
              v247.m128_i32[0] = v389.m128_i32[0];
              LODWORD(v248) = v415;
            }
            while ( !v44 );
            v284 = fsqrt(
                     (float)((float)(v250 * v250) + (float)(v264 * v264))
                   + (float)((float)(v371 * v371) + (float)(v369 * v369)));
            v285 = 0.0;
            v286 = 0.0;
            v287 = 0.0;
            v288 = 0.0;
            if ( v284 != 0.0 )
            {
              v285 = v369 * (float)(*(float *)&dword_447A1D8 / v284);
              v286 = v371 * (float)(*(float *)&dword_447A1D8 / v284);
              v287 = v264 * (float)(*(float *)&dword_447A1D8 / v284);
              v288 = v250 * (float)(*(float *)&dword_447A1D8 / v284);
            }
            v379 = __PAIR64__(LODWORD(v286), LODWORD(v285));
            v380 = v287;
            v381 = v288;
            LOBYTE(v73) = long_ass_calculations_163EA30(
                            (float *)(BallisticComputer_1DA0 + 0x50),
                            (float *)&Target_position_X + 1,
                            (float *)&v379,
                            (__int64)&v404,
                            (float *)&v377,
                            &v385,
                            v416,
                            v417,
                            v165,
                            v163,
                            0.020833334,
                            5.0,
                            (float *)(BallisticComputer_1DA0 + 0x3E0),
                            (float *)v420);
            *(_BYTE *)(BallisticComputer_1DA0 + 0x3DC) = v73;
            return v73;
          }
          v158 = *(_QWORD *)(cGame_4AD1770 + 0x498);
        }
        v163 = *(_BYTE *)(v158 + 0x2751) != 0;
        goto LABEL_141;
      }
      if ( !*(_WORD *)(v151 + 0x10B0) && (*(_DWORD *)(v151 + 0x1058) & 0x2000010) == 0 )
      {
        v353 = *(double **)(v151 + 0x9D0);
        v354 = v353[0x132];
        *(float *)&v355 = v353[0x131];
        *(float *)&v356 = v353[0x130];
        v377 = __PAIR64__(v355, v356);
        v378 = v354;
        goto LABEL_131;
      }
    }
    v377 = 0i64;
    v378 = 0.0;
    goto LABEL_131;
  }
  if ( v140 )
  {
    v141 = *(float *)(BallisticComputer_1DA0 + 0x48);
    goto LABEL_124;
  }
  v289 = *(_QWORD *)(BallisticComputer_1DA0 + 0x10);
  v290 = *(unsigned __int16 *)(v289 + 0x10B0);
  v291 = 0.0;
  if ( v290 > 0xF )
    goto LABEL_250;
  v292 = 0x897E;
  if ( _bittest(&v292, v290) )
  {
    v293 = *(_QWORD *)(v289 + 0x1EA0);
    v294 = (float *)(v293 + 0x54);
    v44 = v293 == 0;
    v295 = (float *)&xmmword_450E8F0;
    if ( !v44 )
      v295 = v294;
    if ( *(_BYTE *)(v289 + 0x58) == 1 )
      v295 = (float *)(v289 + 0x22AC);
    v296 = *v295;
    v297 = v295[1];
    v291 = v295[2];
    goto LABEL_213;
  }
  if ( *(_WORD *)(v289 + 0x10B0) )
  {
LABEL_250:
    v297 = 0.0;
    v296 = 0.0;
    goto LABEL_213;
  }
  v297 = 0.0;
  v296 = 0.0;
  if ( (*(_DWORD *)(v289 + 0x1058) & 0x2000010) == 0 )
  {
    v357 = *(double **)(v289 + 0x9D0);
    v291 = v357[0x132];
    v297 = v357[0x131];
    v296 = v357[0x130];
  }
LABEL_213:
  v298 = v392;
  v299 = *(float *)&v393;
  v300 = *((float *)&v393 + 1);
  v301 = *(float *)(BallisticComputer_1DA0 + 0x48);
  v302 = (float)((float)(v291 * *((float *)&v393 + 1)) + v301)
       + (float)((float)(v297 * *(float *)&v393) + (float)(v296 * v392));
  if ( v382.m128_i8[0] )
  {
    v303 = fminf(v82, v138);
    v304 = *(float *)(BallisticComputer_1DA0 + 0x3D0);
    v305 = *(float *)(BallisticComputer_1DA0 + 0x3D4);
    v306 = *(float *)(BallisticComputer_1DA0 + 0x3D8);
    v307 = (float)(v13[0x26D] * v306) + (float)((float)(v13[0x26A] * v305) + (float)(v13[0x267] * v304));
    v308 = (float)(v13[0x26E] * v306) + (float)((float)(v13[0x26B] * v305) + (float)(v13[0x268] * v304));
    v309 = v392 * v303;
    v310 = (float)(v306 * v13[0x26F]) + (float)((float)(v305 * v13[0x26C]) + (float)(v304 * v13[0x269]));
    v311 = (float)(v308 * v392) - (float)(v307 * *(float *)&v393);
    v312 = (float)(v307 * *((float *)&v393 + 1)) - (float)(v310 * v392);
    v313 = *(float *)&v393 * v303;
    v314 = (float)(v310 * *(float *)&v393) - (float)(v308 * *((float *)&v393 + 1));
    v315 = *((float *)&v393 + 1) * v303;
    v73 = *(_QWORD *)(cGame_4AD1770 + 0x498);
    v316 = fminf(v301 * *(float *)(v73 + 0x274C), v303);
    v317 = *((float *)&Target_position_X + 1);
    v318 = v311 * v316;
    v319 = v312 * v316;
    v320 = v316 * v314;
    v321 = (float)(*((float *)&v393 + 1) * v81) + v318;
    v322 = (float)(*(float *)&v393 * v81) + v319;
    Target_position_Y_buffer = Target_position_Y;
    v324 = v309 + *((float *)&Target_position_X + 1);
    v325 = v313 + Target_position_Y;
    v326 = (float)(v81 * v392) + v320;
    Target_position_Z_buffer = Target_position_Z;
    v328 = v315 + Target_position_Z;
    if ( v302 >= *(float *)&dword_449E6C8 )
      goto LABEL_215;
LABEL_225:
    *(_BYTE *)(BallisticComputer_1DA0 + 0x3DC) = 0;
    return v73;
  }
  v340 = *(float *)(BallisticComputer_1DA0 + 0x3D0);
  v341 = *(float *)(BallisticComputer_1DA0 + 0x3D4);
  v342 = *(float *)(BallisticComputer_1DA0 + 0x3D8);
  v343 = (float)(v13[0x26D] * v342) + (float)((float)(v13[0x26A] * v341) + (float)(v13[0x267] * v340));
  v344 = (float)(v13[0x26E] * v342) + (float)((float)(v13[0x26B] * v341) + (float)(v13[0x268] * v340));
  v345 = *(float *)(BallisticComputer_1DA0 + 8);
  v73 = *(_QWORD *)(cGame_4AD1770 + 0x498);
  v346 = fminf(v301 * *(float *)(v73 + 0x274C), v345);
  v347 = (float)(v342 * v13[0x26F]) + (float)((float)(v341 * v13[0x26C]) + (float)(v340 * v13[0x269]));
  v317 = *((float *)&Target_position_X + 1);
  Target_position_Y_buffer = Target_position_Y;
  v324 = (float)(v345 * v392) + *((float *)&Target_position_X + 1);
  v325 = (float)(v345 * *(float *)&v393) + Target_position_Y;
  v321 = (float)((float)(v344 * v392) - (float)(v343 * *(float *)&v393)) * v346;
  v322 = (float)((float)(v343 * *((float *)&v393 + 1)) - (float)(v347 * v392)) * v346;
  v348 = v346 * (float)((float)(v347 * *(float *)&v393) - (float)(v344 * *((float *)&v393 + 1)));
  Target_position_Z_buffer = Target_position_Z;
  v328 = (float)(v345 * *((float *)&v393 + 1)) + Target_position_Z;
  v326 = v348;
  if ( v302 < *(float *)&dword_449E6C8 )
    goto LABEL_225;
LABEL_215:
  LOBYTE(v73) = *(_BYTE *)(v73 + 0x2752);
  v329 = fsqrt(
           (float)((float)((float)(v328 - Target_position_Z_buffer) * (float)(v328 - Target_position_Z_buffer))
                 + (float)((float)(v325 - Target_position_Y_buffer) * (float)(v325 - Target_position_Y_buffer)))
         + (float)((float)(v324 - v317) * (float)(v324 - v317)));
  if ( v302 > *(float *)&dword_44991A8 || (v330 = 0.0, v302 < *(float *)&dword_44991AC) )
    v330 = v329 / v302;
  v331 = (float)(v321 * v330) + v328;
  v332 = (float)(v322 * v330) + v325;
  v333 = (float)(v326 * v330) + v324;
  if ( (_BYTE)v73 )
  {
    v334 = fminf(v330, *(float *)&dword_4481E1C);
    v332 = v332 + (float)((float)((float)(v334 * v334) * *(float *)&dword_447A1CC) * *(float *)&dword_4A731FC);
  }
  *(_BYTE *)(BallisticComputer_1DA0 + 0x3DC) = 1;
  v335 = v331 - Target_position_Z_buffer;
  v336 = v332 - Target_position_Y_buffer;
  v337 = v333 - v317;
  v338 = Target_position_Z_buffer - v335;
  v339 = (float)((float)((float)(v335 * v300) + (float)(v336 * v299)) + (float)(v337 * v298))
       + (float)((float)((float)(v335 * v300) + (float)(v336 * v299)) + (float)(v337 * v298));
  *(float *)(BallisticComputer_1DA0 + 0x3E0) = (float)(v317 - v337) + (float)(v339 * v298);
  *(float *)(BallisticComputer_1DA0 + 0x3E4) = (float)(v299 * v339) + (float)(Target_position_Y_buffer - v336);
  *(float *)(BallisticComputer_1DA0 + 0x3E8) = (float)(v300 * v339) + v338;
  return v73;
}