__int64 __fastcall register_replay_sq_module(__int64 a1)
{
  _QWORD *v1; // rdi
  char v3; // cl
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  bool v7; // zf
  _QWORD *v8; // r13
  char *v9; // r15
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rbp
  _QWORD *v15; // rcx
  int *v16; // r14
  unsigned int v17; // r12d
  __int64 v18; // rax
  int v19; // edi
  int v20; // edx
  _QWORD *v21; // rsi
  _QWORD *v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rbp
  __int64 v25; // rcx
  int v26; // eax
  _QWORD *v27; // rcx
  _QWORD *v28; // rdi
  _QWORD *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  int v33; // ebp
  __int64 v34; // rdx
  __int64 v35; // rbp
  _QWORD *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rbp
  _QWORD *v39; // rcx
  __int64 v40; // rax
  int v41; // edi
  int v42; // edx
  _QWORD *v43; // rsi
  _QWORD *v44; // rax
  __int64 v45; // rbp
  __int64 v46; // rbx
  __int64 v47; // rcx
  int v48; // eax
  _QWORD *v49; // rcx
  _QWORD *v50; // rdi
  _QWORD *v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rdx
  _QWORD *v54; // rcx
  int v55; // ebp
  __int64 v56; // rdx
  __int64 v57; // rbp
  _QWORD *v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rbp
  _QWORD *v61; // rcx
  bool v62; // cf
  _QWORD *v63; // r12
  __int64 v64; // r13
  __int64 v65; // r14
  __int64 v66; // r8
  _QWORD *v67; // rcx
  int v68; // edi
  int v69; // eax
  _QWORD *v70; // rsi
  __int64 v71; // rbp
  __int64 v72; // rbx
  __int64 v73; // rdx
  int v74; // edx
  _QWORD *v75; // rcx
  __int64 *v76; // rsi
  __int64 v77; // rdx
  __int64 v78; // rbp
  _QWORD *v79; // rcx
  int v80; // eax
  __int64 v81; // rdx
  int v82; // eax
  int v83; // r15d
  __int64 v84; // rax
  int v85; // esi
  int v86; // edx
  _QWORD *v87; // rdi
  _QWORD *v88; // rax
  __int64 v89; // rbx
  __int64 v90; // rbp
  __int64 v91; // rcx
  int v92; // eax
  _QWORD *v93; // rcx
  unsigned int v94; // r15d
  _QWORD *v95; // rdi
  _QWORD *v96; // rsi
  __int64 v97; // rax
  __int64 v98; // rdx
  _QWORD *v99; // rcx
  int v100; // ebp
  __int64 v101; // rdx
  __int64 v102; // rbp
  _QWORD *v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rbp
  _QWORD *v106; // rcx
  __int64 v107; // rax
  int v108; // edi
  int v109; // edx
  _QWORD *v110; // rsi
  _QWORD *v111; // rax
  __int64 v112; // rbp
  __int64 v113; // rbx
  __int64 v114; // rcx
  int v115; // eax
  _QWORD *v116; // rcx
  _QWORD *v117; // rdi
  _QWORD *v118; // rsi
  __int64 v119; // rax
  __int64 v120; // rdx
  _QWORD *v121; // rcx
  int v122; // ebp
  _QWORD *v123; // rbx
  _QWORD *v124; // rsi
  __int64 v125; // rax
  __int64 v126; // rdx
  _QWORD *v127; // rcx
  int v128; // ebp
  __int64 v129; // rdx
  __int64 v130; // rbp
  _QWORD *v131; // rcx
  __int64 v132; // rax
  int v133; // edi
  int v134; // edx
  _QWORD *v135; // rsi
  _QWORD *v136; // rax
  __int64 v137; // rbp
  __int64 v138; // rbx
  __int64 v139; // rcx
  int v140; // eax
  _QWORD *v141; // rcx
  _QWORD *v142; // rdi
  _QWORD *v143; // rsi
  __int64 v144; // rax
  __int64 v145; // rdx
  _QWORD *v146; // rcx
  int v147; // ebp
  __int64 v148; // rdx
  __int64 v149; // rbp
  __int64 v150; // rbx
  _QWORD *v151; // rcx
  __int64 v152; // rdx
  __int64 v153; // rbp
  _QWORD *v154; // rcx
  __int64 v155; // rax
  int v156; // edi
  int v157; // edx
  _QWORD *v158; // rsi
  _QWORD *v159; // rax
  __int64 v160; // rbp
  __int64 v161; // rbx
  __int64 v162; // rcx
  int v163; // eax
  _QWORD *v164; // rcx
  _QWORD *v165; // rdi
  _QWORD *v166; // rsi
  __int64 v167; // rax
  __int64 v168; // rdx
  _QWORD *v169; // rcx
  int v170; // ebp
  __int64 v171; // rdx
  __int64 v172; // rbp
  __int64 v173; // rbx
  _QWORD *v174; // rcx
  __int64 v175; // rdx
  __int64 v176; // rbp
  _QWORD *v177; // rcx
  __int64 v178; // rax
  int v179; // edi
  int v180; // edx
  _QWORD *v181; // rsi
  _QWORD *v182; // rax
  __int64 v183; // rbp
  __int64 v184; // rbx
  __int64 v185; // rcx
  int v186; // eax
  _QWORD *v187; // rcx
  _QWORD *v188; // rdi
  _QWORD *v189; // rsi
  __int64 v190; // rax
  __int64 v191; // rdx
  _QWORD *v192; // rcx
  int v193; // ebp
  __int64 v194; // rdx
  __int64 v195; // rbp
  __int64 v196; // rbx
  _QWORD *v197; // rcx
  __int64 v198; // rdx
  __int64 v199; // rbp
  _QWORD *v200; // rcx
  __int64 v201; // rax
  int v202; // edi
  int v203; // edx
  _QWORD *v204; // rsi
  _QWORD *v205; // rax
  __int64 v206; // rbp
  __int64 v207; // rbx
  __int64 v208; // rcx
  int v209; // eax
  _QWORD *v210; // rcx
  _QWORD *v211; // rdi
  _QWORD *v212; // rsi
  __int64 v213; // rax
  __int64 v214; // rdx
  _QWORD *v215; // rcx
  int v216; // ebp
  __int64 v217; // rdx
  __int64 v218; // rbp
  __int64 v219; // rbx
  _QWORD *v220; // rcx
  __int64 v221; // rdx
  __int64 v222; // rbp
  _QWORD *v223; // rcx
  __int64 v224; // rax
  int v225; // edi
  int v226; // edx
  _QWORD *v227; // rsi
  _QWORD *v228; // rax
  __int64 v229; // rbp
  __int64 v230; // rbx
  __int64 v231; // rcx
  int v232; // eax
  _QWORD *v233; // rcx
  _QWORD *v234; // rdi
  _QWORD *v235; // rsi
  __int64 v236; // rax
  __int64 v237; // rdx
  _QWORD *v238; // rcx
  int v239; // ebp
  _QWORD *v240; // rbx
  _QWORD *v241; // rsi
  __int64 v242; // rax
  __int64 v243; // rdx
  _QWORD *v244; // rcx
  int v245; // ebp
  __int64 v246; // rdx
  __int64 v247; // rbp
  _QWORD *v248; // rcx
  __int64 v249; // rax
  int v250; // edi
  int v251; // edx
  _QWORD *v252; // rsi
  _QWORD *v253; // rax
  __int64 v254; // rbp
  __int64 v255; // rbx
  __int64 v256; // rcx
  int v257; // eax
  _QWORD *v258; // rcx
  _QWORD *v259; // rdi
  _QWORD *v260; // rsi
  __int64 v261; // rax
  __int64 v262; // rdx
  _QWORD *v263; // rcx
  int v264; // ebp
  _QWORD *v265; // rbx
  _QWORD *v266; // rsi
  __int64 v267; // rax
  __int64 v268; // rdx
  _QWORD *v269; // rcx
  int v270; // ebp
  __int64 v271; // rdx
  __int64 v272; // rbp
  _QWORD *v273; // rcx
  __int64 v274; // rax
  int v275; // edi
  int v276; // edx
  _QWORD *v277; // rsi
  _QWORD *v278; // rax
  __int64 v279; // rbp
  __int64 v280; // rbx
  __int64 v281; // rcx
  int v282; // eax
  _QWORD *v283; // rcx
  _QWORD *v284; // rdi
  _QWORD *v285; // rsi
  __int64 v286; // rax
  __int64 v287; // rdx
  _QWORD *v288; // rcx
  int v289; // ebp
  __int64 v290; // rdx
  __int64 v291; // rbp
  __int64 v292; // rbx
  _QWORD *v293; // rcx
  __int64 v294; // rdx
  __int64 v295; // rbp
  _QWORD *v296; // rcx
  __int64 v297; // rax
  int v298; // edi
  int v299; // edx
  _QWORD *v300; // rsi
  _QWORD *v301; // rax
  __int64 v302; // rbp
  __int64 v303; // rbx
  __int64 v304; // rcx
  int v305; // eax
  _QWORD *v306; // rcx
  _QWORD *v307; // rdi
  _QWORD *v308; // rsi
  __int64 v309; // rax
  __int64 v310; // rdx
  _QWORD *v311; // rcx
  int v312; // ebp
  __int64 v313; // rdx
  __int64 v314; // rbp
  __int64 v315; // rbx
  _QWORD *v316; // rcx
  __int64 v317; // rdx
  __int64 v318; // rbp
  _QWORD *v319; // rcx
  __int64 v320; // rax
  int v321; // edi
  int v322; // edx
  _QWORD *v323; // rsi
  _QWORD *v324; // rax
  __int64 v325; // rbp
  __int64 v326; // rbx
  __int64 v327; // rcx
  int v328; // eax
  _QWORD *v329; // rcx
  _QWORD *v330; // rdi
  _QWORD *v331; // rsi
  __int64 v332; // rax
  __int64 v333; // rdx
  _QWORD *v334; // rcx
  int v335; // ebp
  __int64 v336; // rdx
  __int64 v337; // rbp
  __int64 v338; // rbx
  _QWORD *v339; // rcx
  __int64 v340; // rdx
  __int64 v341; // rbp
  _QWORD *v342; // rcx
  __int64 v343; // rax
  int v344; // edi
  int v345; // edx
  _QWORD *v346; // rsi
  _QWORD *v347; // rax
  __int64 v348; // rbp
  __int64 v349; // rbx
  __int64 v350; // rcx
  int v351; // eax
  _QWORD *v352; // rcx
  _QWORD *v353; // rdi
  _QWORD *v354; // rsi
  __int64 v355; // rax
  __int64 v356; // rdx
  _QWORD *v357; // rcx
  int v358; // ebp
  _QWORD *v359; // rbp
  int v360; // edi
  int v361; // r8d
  _QWORD *v362; // rsi
  __int64 v363; // rbx
  __int64 v364; // rax
  __int64 v365; // rcx
  int v366; // edx
  _QWORD *v367; // rcx
  __int64 v368; // rdx
  __int64 v369; // rbp
  _QWORD *v370; // rcx
  __int64 v371; // r12
  __int64 v372; // rax
  int v373; // ebp
  int v374; // edx
  _QWORD *v375; // rsi
  _QWORD *v376; // rax
  __int64 v377; // rbx
  __int64 v378; // rdi
  __int64 v379; // rcx
  int v380; // eax
  _QWORD *v381; // rcx
  _QWORD *v382; // rdi
  _QWORD *v383; // rsi
  __int64 v384; // rax
  __int64 v385; // rdx
  _QWORD *v386; // rcx
  int v387; // ebp
  __int64 v388; // rdx
  __int64 v389; // rbp
  _QWORD *v390; // rcx
  __int64 v391; // rdx
  __int64 v392; // rbp
  _QWORD *v393; // rcx
  __int64 v394; // rax
  int v395; // edi
  int v396; // edx
  _QWORD *v397; // rsi
  _QWORD *v398; // rax
  __int64 v399; // rbp
  __int64 v400; // rbx
  __int64 v401; // rcx
  int v402; // eax
  _QWORD *v403; // rcx
  _QWORD *v404; // rdi
  _QWORD *v405; // rsi
  __int64 v406; // rax
  __int64 v407; // rdx
  _QWORD *v408; // rcx
  int v409; // ebp
  _QWORD *v410; // rbx
  _QWORD *v411; // rsi
  __int64 v412; // rax
  __int64 v413; // rdx
  _QWORD *v414; // rcx
  int v415; // ebp
  __int64 v416; // rdx
  __int64 v417; // rbp
  _QWORD *v418; // rcx
  __int64 v419; // rax
  int v420; // edi
  int v421; // edx
  _QWORD *v422; // rsi
  _QWORD *v423; // rax
  __int64 v424; // rbp
  __int64 v425; // rbx
  __int64 v426; // rcx
  int v427; // eax
  _QWORD *v428; // rcx
  _QWORD *v429; // rdi
  _QWORD *v430; // rsi
  __int64 v431; // rax
  __int64 v432; // rdx
  _QWORD *v433; // rcx
  int v434; // ebp
  _QWORD *v435; // rdi
  _QWORD *v436; // rsi
  __int64 v437; // rax
  __int64 v438; // rdx
  _QWORD *v439; // rcx
  int v440; // ebp
  char v441; // di
  __int64 v442; // rdx
  __int64 v443; // rbp
  _QWORD *v444; // rcx
  __int64 v445; // rax
  int v446; // edi
  int v447; // edx
  _QWORD *v448; // rsi
  _QWORD *v449; // rax
  __int64 v450; // rbp
  __int64 v451; // rbx
  __int64 v452; // rcx
  int v453; // eax
  _QWORD *v454; // rcx
  _QWORD *v455; // rdi
  _QWORD *v456; // rsi
  __int64 v457; // rax
  __int64 v458; // rdx
  _QWORD *v459; // rcx
  int v460; // ebp
  _QWORD *v461; // rsi
  __int64 v462; // rdx
  __int64 v463; // rbp
  _QWORD *v464; // rcx
  int v465; // edi
  int v466; // eax
  _QWORD *v467; // rsi
  __int64 v468; // rbp
  __int64 v469; // rbx
  __int64 v470; // rcx
  int v471; // edx
  _QWORD *v472; // rcx
  __int64 (__fastcall **v473)(void *); // [rsp+28h] [rbp-5E0h] BYREF
  _QWORD *v474; // [rsp+30h] [rbp-5D8h]
  __int128 v475; // [rsp+38h] [rbp-5D0h] BYREF
  int v476; // [rsp+4Ch] [rbp-5BCh]
  __int64 (__fastcall **v477)(void *); // [rsp+50h] [rbp-5B8h] BYREF
  _QWORD *v478; // [rsp+58h] [rbp-5B0h]
  char v479[16]; // [rsp+60h] [rbp-5A8h] BYREF
  __int64 *v480; // [rsp+70h] [rbp-598h]
  __int64 v481; // [rsp+78h] [rbp-590h]
  int v482[2]; // [rsp+80h] [rbp-588h] BYREF
  _QWORD *v483; // [rsp+88h] [rbp-580h]
  int v484[2]; // [rsp+90h] [rbp-578h] BYREF
  _QWORD *v485; // [rsp+98h] [rbp-570h]
  char v486[56]; // [rsp+A0h] [rbp-568h] BYREF
  int v487[4]; // [rsp+D8h] [rbp-530h] BYREF
  __int64 v488; // [rsp+E8h] [rbp-520h]
  char *Str1; // [rsp+F0h] [rbp-518h]
  int v490[2]; // [rsp+100h] [rbp-508h] BYREF
  _QWORD *v491; // [rsp+108h] [rbp-500h]
  int v492; // [rsp+3B0h] [rbp-258h]

  v3 = sub_525920(a1, 2i64);
  result = 0xFFFFFFFFFFFFFFFFui64;
  if ( !v3 )
    return result;
  v5 = 0x10i64 * *(a1 + 0x50) + *(a1 + 0x30) - 0x10;
  if ( *v5 == 0x1A000080 )
  {
    v1 = ((*(v5 + 8) + 0x57i64) & 0xFFFFFFFFFFFFFFF8ui64);
  }
  else
  {
    v6 = sub_28A4B60(a1, v5);
    ++*(v6 + 8);
    sub_28A49E0(a1, "wrong argument type, expected '%s' got '%.50s'", "userdata", (v6 + 0x38));
    v7 = (*(v6 + 8))-- == 1i64;
    if ( v7 )
      (*(*v6 + 8i64))(v6);
  }
  sub_525C30(v487, a1, 2i64);
  v8 = *v1;
  v9 = Str1;
  v474 = v8;
  *(&v475 + 1) = 0i64;
  LODWORD(v475) = 0x1000001;
  BYTE4(v475) = 0;
  v473 = &off_44A93B0;
  sq_newtable(v8);
  v10 = v8;
  v11 = v8[6];
  v12 = v8[0xA] - 1i64;
  v475 = *(v11 + 0x10 * v12);
  v481 = a1;
  if ( (BYTE3(v475) & 8) != 0 )
  {
    v13 = sub_28B5100(v474[0x28] + 0x38, &v475, v490, v484, 1);
    ++*(v13 + 0x10);
    v10 = v474;
    v11 = v474[6];
    v12 = v474[0xA] - 1i64;
  }
  v10[0xA] = v12;
  v14 = 0x10 * v12;
  v15 = *(v11 + v14 + 8);
  v7 = (*(v11 + v14) & 0x8000000) == 0;
  *(v11 + v14) = 0i64;
  *(v11 + v14) = 0x1000001;
  if ( !v7 )
  {
    v7 = v15[1]-- == 1i64;
    if ( v7 )
      (*(*v15 + 8i64))(v15);
  }
  v492 = 0xFFFFFFFF;
  v16 = v490;
  v17 = sub_72B430(v9, v490);
  v18 = v473[1](&v473);
  v19 = *v18;
  v20 = *(v18 + 4);
  v21 = *(v18 + 8);
  v22 = v474;
  if ( (v19 & 0x8000000) != 0 )
    ++v21[1];
  v23 = v22[6];
  v24 = v22[0xA];
  v25 = v24 + 1;
  v24 *= 0x10i64;
  v22[0xA] = v25;
  v26 = *(v23 + v24);
  v27 = *(v23 + v24 + 8);
  *(v23 + v24) = v19;
  *(v23 + v24 + 4) = v20;
  *(v23 + v24 + 8) = v21;
  if ( (v19 & 0x8000000) != 0 )
    ++v21[1];
  if ( (v26 & 0x8000000) != 0 )
  {
    v7 = v27[1]-- == 1i64;
    if ( v7 )
      (*(*v27 + 8i64))(v27);
  }
  if ( (v19 & 0x8000000) != 0 )
  {
    v7 = v21[1]-- == 1i64;
    if ( v7 )
      (*(*v21 + 8i64))(v21);
  }
  v28 = v474;
  v29 = sq_pushstring(*(v474[0x28] + 0x30i64), "corrupted", 0xFFFFFFFFFFFFFFFFui64);
  ++v29[1];
  v30 = v28[6];
  v31 = v28[0xA];
  v28[0xA] = v31 + 1;
  v31 *= 0x10i64;
  v32 = *(v30 + v31 + 8);
  v33 = *(v30 + v31);
  *(v30 + v31) = 0x18000010;
  *(v30 + v31 + 4) = 0;
  *(v30 + v31 + 8) = v29;
  ++v29[1];
  if ( (v33 & 0x8000000) != 0 )
  {
    v7 = v32[1]-- == 1i64;
    if ( v7 )
    {
      (*(*v32 + 8i64))(v32);
      v7 = v29[1]-- == 1i64;
      if ( !v7 )
        goto LABEL_25;
      goto LABEL_24;
    }
  }
  v7 = v29[1]-- == 1i64;
  if ( v7 )
LABEL_24:
    (*(*v29 + 8i64))(v29);
LABEL_25:
  v34 = v474[6];
  v35 = v474[0xA];
  v474[0xA] = v35 + 1;
  v35 *= 0x10i64;
  v7 = (*(v34 + v35) & 0x8000000) == 0;
  v36 = *(v34 + v35 + 8);
  *(v34 + v35) = 0x1000008;
  *(v34 + v35 + 4) = 0;
  *(v34 + v35 + 8) = v17 != 0;
  if ( !v7 )
  {
    v7 = v36[1]-- == 1i64;
    if ( v7 )
      (*(*v36 + 8i64))(v36);
  }
  sub_176D900(v474, 0xFFFFFFFFFFFFFFFDui64, 0i64);
  v37 = v474[6];
  v38 = v474[0xA] - 1i64;
  v474[0xA] = v38;
  v38 *= 0x10i64;
  v39 = *(v37 + v38 + 8);
  v7 = (*(v37 + v38) & 0x8000000) == 0;
  *(v37 + v38) = 0i64;
  *(v37 + v38) = 0x1000001;
  if ( !v7 )
  {
    v7 = v39[1]-- == 1i64;
    if ( v7 )
      (*(*v39 + 8i64))(v39);
  }
  v40 = v473[1](&v473);
  v41 = *v40;
  v42 = *(v40 + 4);
  v43 = *(v40 + 8);
  v44 = v474;
  if ( (v41 & 0x8000000) != 0 )
    ++v43[1];
  v45 = v44[6];
  v46 = v44[0xA];
  v47 = v46 + 1;
  v46 *= 0x10i64;
  v44[0xA] = v47;
  v48 = *(v45 + v46);
  v49 = *(v45 + v46 + 8);
  *(v45 + v46) = v41;
  *(v45 + v46 + 4) = v42;
  *(v45 + v46 + 8) = v43;
  if ( (v41 & 0x8000000) != 0 )
    ++v43[1];
  if ( (v48 & 0x8000000) != 0 )
  {
    v7 = v49[1]-- == 1i64;
    if ( v7 )
      (*(*v49 + 8i64))(v49);
  }
  if ( (v41 & 0x8000000) != 0 )
  {
    v7 = v43[1]-- == 1i64;
    if ( v7 )
      (*(*v43 + 8i64))(v43);
  }
  v50 = v474;
  v51 = sq_pushstring(*(v474[0x28] + 0x30i64), "isVersionMismatch", 0xFFFFFFFFFFFFFFFFui64);
  ++v51[1];
  v52 = v50[6];
  v53 = v50[0xA];
  v50[0xA] = v53 + 1;
  v53 *= 0x10i64;
  v54 = *(v52 + v53 + 8);
  v55 = *(v52 + v53);
  *(v52 + v53) = 0x18000010;
  *(v52 + v53 + 4) = 0;
  *(v52 + v53 + 8) = v51;
  ++v51[1];
  if ( (v55 & 0x8000000) != 0 )
  {
    v7 = v54[1]-- == 1i64;
    if ( v7 )
    {
      (*(*v54 + 8i64))(v54);
      v7 = v51[1]-- == 1i64;
      if ( !v7 )
        goto LABEL_45;
      goto LABEL_44;
    }
  }
  v7 = v51[1]-- == 1i64;
  if ( v7 )
LABEL_44:
    (*(*v51 + 8i64))(v51);
LABEL_45:
  v56 = v474[6];
  v57 = v474[0xA];
  v474[0xA] = v57 + 1;
  v57 *= 0x10i64;
  v7 = (*(v56 + v57) & 0x8000000) == 0;
  v58 = *(v56 + v57 + 8);
  *(v56 + v57) = 0x1000008;
  *(v56 + v57 + 4) = 0;
  *(v56 + v57 + 8) = v17 == 1;
  if ( !v7 )
  {
    v7 = v58[1]-- == 1i64;
    if ( v7 )
      (*(*v58 + 8i64))(v58);
  }
  sub_176D900(v474, 0xFFFFFFFFFFFFFFFDui64, 0i64);
  v59 = v474[6];
  v60 = v474[0xA] - 1i64;
  v474[0xA] = v60;
  v60 *= 0x10i64;
  v61 = *(v59 + v60 + 8);
  v7 = (*(v59 + v60) & 0x8000000) == 0;
  *(v59 + v60) = 0i64;
  *(v59 + v60) = 0x1000001;
  if ( !v7 )
  {
    v7 = v61[1]-- == 1i64;
    if ( v7 )
      (*(*v61 + 8i64))(v61);
  }
  v62 = v17 < 2;
  v63 = v8;
  v64 = v481;
  if ( v62 )
  {
LABEL_54:
    sub_AC6E10(&v477, v63);
    (v477[2])(&v477, v484);
    v67 = v478;
    v68 = v484[0];
    v69 = v484[1];
    v70 = v485;
    if ( (v484[0] & 0x8000000) != 0 )
      ++v485[1];
    v71 = v67[6];
    v72 = v67[0xA];
    v73 = v72 + 1;
    v72 *= 0x10i64;
    v67[0xA] = v73;
    v74 = *(v71 + v72);
    v75 = *(v71 + v72 + 8);
    *(v71 + v72) = v68;
    *(v71 + v72 + 4) = v69;
    *(v71 + v72 + 8) = v70;
    if ( (v68 & 0x8000000) != 0 )
      ++v70[1];
    if ( (v74 & 0x8000000) != 0 )
    {
      v7 = v75[1]-- == 1i64;
      if ( v7 )
        (*(*v75 + 8i64))(v75);
    }
    if ( (v68 & 0x8000000) != 0 )
    {
      v7 = v70[1]-- == 1i64;
      if ( v7 )
        (*(*v70 + 8i64))(v70);
    }
    LOBYTE(v66) = 1;
    v76 = sub_5266E0(v478, 0xFFFFFFFFFFFFFFFFui64, v66);
    v77 = v478[6];
    v78 = v478[0xA] - 1i64;
    v478[0xA] = v78;
    v78 *= 0x10i64;
    v79 = *(v77 + v78 + 8);
    v7 = (*(v77 + v78) & 0x8000000) == 0;
    *(v77 + v78) = 0i64;
    *(v77 + v78) = 0x1000001;
    if ( !v7 )
    {
      v7 = v79[1]-- == 1i64;
      if ( v7 )
        (*(*v79 + 8i64))(v79);
    }
    v80 = sub_72B1D0(v9);
    v480 = v76;
    if ( v80 )
    {
      if ( *(v16 + 0x171) && (v81 = *(game + 0x450), v82 = *(v81 + 0x646), v82 + *(v81 + 0x644)) )
      {
        LOBYTE(v82) = 1;
        v476 = v82;
        sub_1458A90(v76, (v81 + 0x638), 0i64);
      }
      else
      {
        v476 = 0;
      }
    }
    else
    {
      v476 = 1;
    }
    v83 = v16[0xAC];
    v84 = v473[1](&v473);
    v85 = *v84;
    v86 = *(v84 + 4);
    v87 = *(v84 + 8);
    v88 = v474;
    if ( (v85 & 0x8000000) != 0 )
      ++v87[1];
    v89 = v88[6];
    v90 = v88[0xA];
    v91 = v90 + 1;
    v90 *= 0x10i64;
    v88[0xA] = v91;
    v92 = *(v89 + v90);
    v93 = *(v89 + v90 + 8);
    *(v89 + v90) = v85;
    *(v89 + v90 + 4) = v86;
    *(v89 + v90 + 8) = v87;
    if ( (v85 & 0x8000000) != 0 )
      ++v87[1];
    if ( (v92 & 0x8000000) != 0 )
    {
      v7 = v93[1]-- == 1i64;
      if ( v7 )
        (*(*v93 + 8i64))(v93);
    }
    if ( (v85 & 0x8000000) != 0 )
    {
      v7 = v87[1]-- == 1i64;
      if ( v7 )
        (*(*v87 + 8i64))(v87);
    }
    v94 = v83 & 3;
    v95 = v474;
    v96 = sq_pushstring(*(v474[0x28] + 0x30i64), "difficulty", 0xFFFFFFFFFFFFFFFFui64);
    ++v96[1];
    v97 = v95[6];
    v98 = v95[0xA];
    v95[0xA] = v98 + 1;
    v98 *= 0x10i64;
    v99 = *(v97 + v98 + 8);
    v100 = *(v97 + v98);
    *(v97 + v98) = 0x18000010;
    *(v97 + v98 + 4) = 0;
    *(v97 + v98 + 8) = v96;
    ++v96[1];
    if ( (v100 & 0x8000000) != 0 && (v7 = v99[1] == 1i64, --v99[1], v7) )
    {
      (*(*v99 + 8i64))(v99);
      v7 = v96[1]-- == 1i64;
      if ( !v7 )
        goto LABEL_91;
    }
    else
    {
      v7 = v96[1]-- == 1i64;
      if ( !v7 )
      {
LABEL_91:
        v101 = v474[6];
        v102 = v474[0xA];
        v474[0xA] = v102 + 1;
        v102 *= 0x10i64;
        v7 = (*(v101 + v102) & 0x8000000) == 0;
        v103 = *(v101 + v102 + 8);
        *(v101 + v102) = 0x5000002;
        *(v101 + v102 + 4) = 0;
        *(v101 + v102 + 8) = v94;
        if ( !v7 )
        {
          v7 = v103[1]-- == 1i64;
          if ( v7 )
            (*(*v103 + 8i64))(v103);
        }
        sub_176D900(v474, 0xFFFFFFFFFFFFFFFDui64, 0i64);
        v104 = v474[6];
        v105 = v474[0xA] - 1i64;
        v474[0xA] = v105;
        v105 *= 0x10i64;
        v106 = *(v104 + v105 + 8);
        v7 = (*(v104 + v105) & 0x8000000) == 0;
        *(v104 + v105) = 0i64;
        *(v104 + v105) = 0x1000001;
        if ( !v7 )
        {
          v7 = v106[1]-- == 1i64;
          if ( v7 )
            (*(*v106 + 8i64))(v106);
        }
        v107 = v473[1](&v473);
        v108 = *v107;
        v109 = *(v107 + 4);
        v110 = *(v107 + 8);
        v111 = v474;
        if ( (v108 & 0x8000000) != 0 )
          ++v110[1];
        v112 = v111[6];
        v113 = v111[0xA];
        v114 = v113 + 1;
        v113 *= 0x10i64;
        v111[0xA] = v114;
        v115 = *(v112 + v113);
        v116 = *(v112 + v113 + 8);
        *(v112 + v113) = v108;
        *(v112 + v113 + 4) = v109;
        *(v112 + v113 + 8) = v110;
        if ( (v108 & 0x8000000) != 0 )
          ++v110[1];
        if ( (v115 & 0x8000000) != 0 )
        {
          v7 = v116[1]-- == 1i64;
          if ( v7 )
            (*(*v116 + 8i64))(v116);
        }
        if ( (v108 & 0x8000000) != 0 )
        {
          v7 = v110[1]-- == 1i64;
          if ( v7 )
            (*(*v110 + 8i64))(v110);
        }
        v117 = v474;
        v118 = sq_pushstring(*(v474[0x28] + 0x30i64), "environment", 0xFFFFFFFFFFFFFFFFui64);
        ++v118[1];
        v119 = v117[6];
        v120 = v117[0xA];
        v117[0xA] = v120 + 1;
        v120 *= 0x10i64;
        v121 = *(v119 + v120 + 8);
        v122 = *(v119 + v120);
        *(v119 + v120) = 0x18000010;
        *(v119 + v120 + 4) = 0;
        *(v119 + v120 + 8) = v118;
        ++v118[1];
        if ( (v122 & 0x8000000) != 0 )
        {
          v7 = v121[1]-- == 1i64;
          if ( v7 )
            (*(*v121 + 8i64))(v121);
        }
        v7 = v118[1]-- == 1i64;
        if ( v7 )
          (*(*v118 + 8i64))(v118);
        v123 = v474;
        v124 = sq_pushstring(*(v474[0x28] + 0x30i64), v16 + 0x83, 0xFFFFFFFFFFFFFFFFui64);
        ++v124[1];
        v125 = v123[6];
        v126 = v123[0xA];
        v123[0xA] = v126 + 1;
        v126 *= 0x10i64;
        v127 = *(v125 + v126 + 8);
        v128 = *(v125 + v126);
        *(v125 + v126) = 0x18000010;
        *(v125 + v126 + 4) = 0;
        *(v125 + v126 + 8) = v124;
        ++v124[1];
        if ( (v128 & 0x8000000) != 0 && (v7 = v127[1] == 1i64, --v127[1], v7) )
        {
          (*(*v127 + 8i64))(v127);
          v7 = v124[1]-- == 1i64;
          if ( !v7 )
            goto LABEL_116;
        }
        else
        {
          v7 = v124[1]-- == 1i64;
          if ( !v7 )
          {
LABEL_116:
            sub_176D900(v474, 0xFFFFFFFFFFFFFFFDui64, 0i64);
            v129 = v474[6];
            v130 = v474[0xA] - 1i64;
            v474[0xA] = v130;
            v130 *= 0x10i64;
            v131 = *(v129 + v130 + 8);
            v7 = (*(v129 + v130) & 0x8000000) == 0;
            *(v129 + v130) = 0i64;
            *(v129 + v130) = 0x1000001;
            if ( !v7 )
            {
              v7 = v131[1]-- == 1i64;
              if ( v7 )
                (*(*v131 + 8i64))(v131);
            }
            v132 = v473[1](&v473);
            v133 = *v132;
            v134 = *(v132 + 4);
            v135 = *(v132 + 8);
            v136 = v474;
            if ( (v133 & 0x8000000) != 0 )
              ++v135[1];
            v137 = v136[6];
            v138 = v136[0xA];
            v139 = v138 + 1;
            v138 *= 0x10i64;
            v136[0xA] = v139;
            v140 = *(v137 + v138);
            v141 = *(v137 + v138 + 8);
            *(v137 + v138) = v133;
            *(v137 + v138 + 4) = v134;
            *(v137 + v138 + 8) = v135;
            if ( (v133 & 0x8000000) != 0 )
              ++v135[1];
            if ( (v140 & 0x8000000) != 0 )
            {
              v7 = v141[1]-- == 1i64;
              if ( v7 )
                (*(*v141 + 8i64))(v141);
            }
            if ( (v133 & 0x8000000) != 0 )
            {
              v7 = v135[1]-- == 1i64;
              if ( v7 )
                (*(*v135 + 8i64))(v135);
            }
            v142 = v474;
            v143 = sq_pushstring(*(v474[0x28] + 0x30i64), "isLimitedAmmo", 0xFFFFFFFFFFFFFFFFui64);
            ++v143[1];
            v144 = v142[6];
            v145 = v142[0xA];
            v142[0xA] = v145 + 1;
            v145 *= 0x10i64;
            v146 = *(v144 + v145 + 8);
            v147 = *(v144 + v145);
            *(v144 + v145) = 0x18000010;
            *(v144 + v145 + 4) = 0;
            *(v144 + v145 + 8) = v143;
            ++v143[1];
            if ( (v147 & 0x8000000) != 0 && (v7 = v146[1] == 1i64, --v146[1], v7) )
            {
              (*(*v146 + 8i64))(v146);
              v7 = v143[1]-- == 1i64;
              if ( !v7 )
                goto LABEL_133;
            }
            else
            {
              v7 = v143[1]-- == 1i64;
              if ( !v7 )
              {
LABEL_133:
                v148 = *(v16 + 0x3B1);
                v149 = v474[6];
                v150 = v474[0xA];
                v474[0xA] = v150 + 1;
                v150 *= 0x10i64;
                v7 = (*(v149 + v150) & 0x8000000) == 0;
                v151 = *(v149 + v150 + 8);
                *(v149 + v150) = 0x1000008;
                *(v149 + v150 + 4) = 0;
                *(v149 + v150 + 8) = v148;
                if ( !v7 )
                {
                  v7 = v151[1]-- == 1i64;
                  if ( v7 )
                    (*(*v151 + 8i64))(v151);
                }
                sub_176D900(v474, 0xFFFFFFFFFFFFFFFDui64, 0i64);
                v152 = v474[6];
                v153 = v474[0xA] - 1i64;
                v474[0xA] = v153;
                v153 *= 0x10i64;
                v154 = *(v152 + v153 + 8);
                v7 = (*(v152 + v153) & 0x8000000) == 0;
                *(v152 + v153) = 0i64;
                *(v152 + v153) = 0x1000001;
                if ( !v7 )
                {
                  v7 = v154[1]-- == 1i64;
                  if ( v7 )
                    (*(*v154 + 8i64))(v154);
                }
                v155 = v473[1](&v473);
                v156 = *v155;
                v157 = *(v155 + 4);
                v158 = *(v155 + 8);
                v159 = v474;
                if ( (v156 & 0x8000000) != 0 )
                  ++v158[1];
                v160 = v159[6];
                v161 = v159[0xA];
                v162 = v161 + 1;
                v161 *= 0x10i64;
                v159[0xA] = v162;
                v163 = *(v160 + v161);
                v164 = *(v160 + v161 + 8);
                *(v160 + v161) = v156;
                *(v160 + v161 + 4) = v157;
                *(v160 + v161 + 8) = v158;
                if ( (v156 & 0x8000000) != 0 )
                  ++v158[1];
                if ( (v163 & 0x8000000) != 0 )
                {
                  v7 = v164[1]-- == 1i64;
                  if ( v7 )
                    (*(*v164 + 8i64))(v164);
                }
                if ( (v156 & 0x8000000) != 0 )
                {
                  v7 = v158[1]-- == 1i64;
                  if ( v7 )
                    (*(*v158 + 8i64))(v158);
                }
                v165 = v474;
                v166 = sq_pushstring(*(v474[0x28] + 0x30i64), "isLimitedFuel", 0xFFFFFFFFFFFFFFFFui64);
                ++v166[1];
                v167 = v165[6];
                v168 = v165[0xA];
                v165[0xA] = v168 + 1;
                v168 *= 0x10i64;
                v169 = *(v167 + v168 + 8);
                v170 = *(v167 + v168);
                *(v167 + v168) = 0x18000010;
                *(v167 + v168 + 4) = 0;
                *(v167 + v168 + 8) = v166;
                ++v166[1];
                if ( (v170 & 0x8000000) != 0 && (v7 = v169[1] == 1i64, --v169[1], v7) )
                {
                  (*(*v169 + 8i64))(v169);
                  v7 = v166[1]-- == 1i64;
                  if ( !v7 )
                    goto LABEL_153;
                }
                else
                {
                  v7 = v166[1]-- == 1i64;
                  if ( !v7 )
                  {
LABEL_153:
                    v171 = *(v16 + 0x3B2);
                    v172 = v474[6];
                    v173 = v474[0xA];
                    v474[0xA] = v173 + 1;
                    v173 *= 0x10i64;
                    v7 = (*(v172 + v173) & 0x8000000) == 0;
                    v174 = *(v172 + v173 + 8);
                    *(v172 + v173) = 0x1000008;
                    *(v172 + v173 + 4) = 0;
                    *(v172 + v173 + 8) = v171;
                    if ( !v7 )
                    {
                      v7 = v174[1]-- == 1i64;
                      if ( v7 )
                        (*(*v174 + 8i64))(v174);
                    }
                    sub_176D900(v474, 0xFFFFFFFFFFFFFFFDui64, 0i64);
                    v175 = v474[6];
                    v176 = v474[0xA] - 1i64;
                    v474[0xA] = v176;
                    v176 *= 0x10i64;
                    v177 = *(v175 + v176 + 8);
                    v7 = (*(v175 + v176) & 0x8000000) == 0;
                    *(v175 + v176) = 0i64;
                    *(v175 + v176) = 0x1000001;
                    if ( !v7 )
                    {
                      v7 = v177[1]-- == 1i64;
                      if ( v7 )
                        (*(*v177 + 8i64))(v177);
                    }
                    v178 = v473[1](&v473);
                    v179 = *v178;
                    v180 = *(v178 + 4);
                    v181 = *(v178 + 8);
                    v182 = v474;
                    if ( (v179 & 0x8000000) != 0 )
                      ++v181[1];
                    v183 = v182[6];
                    v184 = v182[0xA];
                    v185 = v184 + 1;
                    v184 *= 0x10i64;
                    v182[0xA] = v185;
                    v186 = *(v183 + v184);
                    v187 = *(v183 + v184 + 8);
                    *(v183 + v184) = v179;
                    *(v183 + v184 + 4) = v180;
                    *(v183 + v184 + 8) = v181;
                    if ( (v179 & 0x8000000) != 0 )
                      ++v181[1];
                    if ( (v186 & 0x8000000) != 0 )
                    {
                      v7 = v187[1]-- == 1i64;
                      if ( v7 )
                        (*(*v187 + 8i64))(v187);
                    }
                    if ( (v179 & 0x8000000) != 0 )
                    {
                      v7 = v181[1]-- == 1i64;
                      if ( v7 )
                        (*(*v181 + 8i64))(v181);
                    }
                    v188 = v474;
                    v189 = sq_pushstring(*(v474[0x28] + 0x30i64), "isWorldWar", 0xFFFFFFFFFFFFFFFFui64);
                    ++v189[1];
                    v190 = v188[6];
                    v191 = v188[0xA];
                    v188[0xA] = v191 + 1;
                    v191 *= 0x10i64;
                    v192 = *(v190 + v191 + 8);
                    v193 = *(v190 + v191);
                    *(v190 + v191) = 0x18000010;
                    *(v190 + v191 + 4) = 0;
                    *(v190 + v191 + 8) = v189;
                    ++v189[1];
                    if ( (v193 & 0x8000000) != 0 && (v7 = v192[1] == 1i64, --v192[1], v7) )
                    {
                      (*(*v192 + 8i64))(v192);
                      v7 = v189[1]-- == 1i64;
                      if ( !v7 )
                        goto LABEL_173;
                    }
                    else
                    {
                      v7 = v189[1]-- == 1i64;
                      if ( !v7 )
                      {
LABEL_173:
                        v194 = *(v16 + 0x307);
                        v195 = v474[6];
                        v196 = v474[0xA];
                        v474[0xA] = v196 + 1;
                        v196 *= 0x10i64;
                        v7 = (*(v195 + v196) & 0x8000000) == 0;
                        v197 = *(v195 + v196 + 8);
                        *(v195 + v196) = 0x1000008;
                        *(v195 + v196 + 4) = 0;
                        *(v195 + v196 + 8) = v194;
                        if ( !v7 )
                        {
                          v7 = v197[1]-- == 1i64;
                          if ( v7 )
                            (*(*v197 + 8i64))(v197);
                        }
                        sub_176D900(v474, 0xFFFFFFFFFFFFFFFDui64, 0i64);
                        v198 = v474[6];
                        v199 = v474[0xA] - 1i64;
                        v474[0xA] = v199;
                        v199 *= 0x10i64;
                        v200 = *(v198 + v199 + 8);
                        v7 = (*(v198 + v199) & 0x8000000) == 0;
                        *(v198 + v199) = 0i64;
                        *(v198 + v199) = 0x1000001;
                        if ( !v7 )
                        {
                          v7 = v200[1]-- == 1i64;
                          if ( v7 )
                            (*(*v200 + 8i64))(v200);
                        }
                        v201 = v473[1](&v473);
                        v202 = *v201;
                        v203 = *(v201 + 4);
                        v204 = *(v201 + 8);
                        v205 = v474;
                        if ( (v202 & 0x8000000) != 0 )
                          ++v204[1];
                        v206 = v205[6];
                        v207 = v205[0xA];
                        v208 = v207 + 1;
                        v207 *= 0x10i64;
                        v205[0xA] = v208;
                        v209 = *(v206 + v207);
                        v210 = *(v206 + v207 + 8);
                        *(v206 + v207) = v202;
                        *(v206 + v207 + 4) = v203;
                        *(v206 + v207 + 8) = v204;
                        if ( (v202 & 0x8000000) != 0 )
                          ++v204[1];
                        if ( (v209 & 0x8000000) != 0 )
                        {
                          v7 = v210[1]-- == 1i64;
                          if ( v7 )
                            (*(*v210 + 8i64))(v210);
                        }
                        if ( (v202 & 0x8000000) != 0 )
                        {
                          v7 = v204[1]-- == 1i64;
                          if ( v7 )
                            (*(*v204 + 8i64))(v204);
                        }
                        v211 = v474;
                        v212 = sq_pushstring(*(v474[0x28] + 0x30i64), "maxRespawns", 0xFFFFFFFFFFFFFFFFui64);
                        ++v212[1];
                        v213 = v211[6];
                        v214 = v211[0xA];
                        v211[0xA] = v214 + 1;
                        v214 *= 0x10i64;
                        v215 = *(v213 + v214 + 8);
                        v216 = *(v213 + v214);
                        *(v213 + v214) = 0x18000010;
                        *(v213 + v214 + 4) = 0;
                        *(v213 + v214 + 8) = v212;
                        ++v212[1];
                        if ( (v216 & 0x8000000) != 0 && (v7 = v215[1] == 1i64, --v215[1], v7) )
                        {
                          (*(*v215 + 8i64))(v215);
                          v7 = v212[1]-- == 1i64;
                          if ( !v7 )
                            goto LABEL_193;
                        }
                        else
                        {
                          v7 = v212[1]-- == 1i64;
                          if ( !v7 )
                          {
LABEL_193:
                            v217 = *(v16 + 0x303);
                            v218 = v474[6];
                            v219 = v474[0xA];
                            v474[0xA] = v219 + 1;
                            v219 *= 0x10i64;
                            v7 = (*(v218 + v219) & 0x8000000) == 0;
                            v220 = *(v218 + v219 + 8);
                            *(v218 + v219) = 0x5000002;
                            *(v218 + v219 + 4) = 0;
                            *(v218 + v219 + 8) = v217;
                            if ( !v7 )
                            {
                              v7 = v220[1]-- == 1i64;
                              if ( v7 )
                                (*(*v220 + 8i64))(v220);
                            }
                            sub_176D900(v474, 0xFFFFFFFFFFFFFFFDui64, 0i64);
                            v221 = v474[6];
                            v222 = v474[0xA] - 1i64;
                            v474[0xA] = v222;
                            v222 *= 0x10i64;
                            v223 = *(v221 + v222 + 8);
                            v7 = (*(v221 + v222) & 0x8000000) == 0;
                            *(v221 + v222) = 0i64;
                            *(v221 + v222) = 0x1000001;
                            if ( !v7 )
                            {
                              v7 = v223[1]-- == 1i64;
                              if ( v7 )
                                (*(*v223 + 8i64))(v223);
                            }
                            v224 = v473[1](&v473);
                            v225 = *v224;
                            v226 = *(v224 + 4);
                            v227 = *(v224 + 8);
                            v228 = v474;
                            if ( (v225 & 0x8000000) != 0 )
                              ++v227[1];
                            v229 = v228[6];
                            v230 = v228[0xA];
                            v231 = v230 + 1;
                            v230 *= 0x10i64;
                            v228[0xA] = v231;
                            v232 = *(v229 + v230);
                            v233 = *(v229 + v230 + 8);
                            *(v229 + v230) = v225;
                            *(v229 + v230 + 4) = v226;
                            *(v229 + v230 + 8) = v227;
                            if ( (v225 & 0x8000000) != 0 )
                              ++v227[1];
                            if ( (v232 & 0x8000000) != 0 )
                            {
                              v7 = v233[1]-- == 1i64;
                              if ( v7 )
                                (*(*v233 + 8i64))(v233);
                            }
                            if ( (v225 & 0x8000000) != 0 )
                            {
                              v7 = v227[1]-- == 1i64;
                              if ( v7 )
                                (*(*v227 + 8i64))(v227);
                            }
                            v234 = v474;
                            v235 = sq_pushstring(*(v474[0x28] + 0x30i64), "weather", 0xFFFFFFFFFFFFFFFFui64);
                            ++v235[1];
                            v236 = v234[6];
                            v237 = v234[0xA];
                            v234[0xA] = v237 + 1;
                            v237 *= 0x10i64;
                            v238 = *(v236 + v237 + 8);
                            v239 = *(v236 + v237);
                            *(v236 + v237) = 0x18000010;
                            *(v236 + v237 + 4) = 0;
                            *(v236 + v237 + 8) = v235;
                            ++v235[1];
                            if ( (v239 & 0x8000000) != 0 )
                            {
                              v7 = v238[1]-- == 1i64;
                              if ( v7 )
                                (*(*v238 + 8i64))(v238);
                            }
                            v7 = v235[1]-- == 1i64;
                            if ( v7 )
                              (*(*v235 + 8i64))(v235);
                            v240 = v474;
                            v241 = sq_pushstring(*(v474[0x28] + 0x30i64), v16 + 0xA3, 0xFFFFFFFFFFFFFFFFui64);
                            ++v241[1];
                            v242 = v240[6];
                            v243 = v240[0xA];
                            v240[0xA] = v243 + 1;
                            v243 *= 0x10i64;
                            v244 = *(v242 + v243 + 8);
                            v245 = *(v242 + v243);
                            *(v242 + v243) = 0x18000010;
                            *(v242 + v243 + 4) = 0;
                            *(v242 + v243 + 8) = v241;
                            ++v241[1];
                            if ( (v245 & 0x8000000) != 0 && (v7 = v244[1] == 1i64, --v244[1], v7) )
                            {
                              (*(*v244 + 8i64))(v244);
                              v7 = v241[1]-- == 1i64;
                              if ( !v7 )
                                goto LABEL_218;
                            }
                            else
                            {
                              v7 = v241[1]-- == 1i64;
                              if ( !v7 )
                              {
LABEL_218:
                                sub_176D900(v474, 0xFFFFFFFFFFFFFFFDui64, 0i64);
                                v246 = v474[6];
                                v247 = v474[0xA] - 1i64;
                                v474[0xA] = v247;
                                v247 *= 0x10i64;
                                v248 = *(v246 + v247 + 8);
                                v7 = (*(v246 + v247) & 0x8000000) == 0;
                                *(v246 + v247) = 0i64;
                                *(v246 + v247) = 0x1000001;
                                if ( !v7 )
                                {
                                  v7 = v248[1]-- == 1i64;
                                  if ( v7 )
                                    (*(*v248 + 8i64))(v248);
                                }
                                v249 = v473[1](&v473);
                                v250 = *v249;
                                v251 = *(v249 + 4);
                                v252 = *(v249 + 8);
                                v253 = v474;
                                if ( (v250 & 0x8000000) != 0 )
                                  ++v252[1];
                                v254 = v253[6];
                                v255 = v253[0xA];
                                v256 = v255 + 1;
                                v255 *= 0x10i64;
                                v253[0xA] = v256;
                                v257 = *(v254 + v255);
                                v258 = *(v254 + v255 + 8);
                                *(v254 + v255) = v250;
                                *(v254 + v255 + 4) = v251;
                                *(v254 + v255 + 8) = v252;
                                if ( (v250 & 0x8000000) != 0 )
                                  ++v252[1];
                                if ( (v257 & 0x8000000) != 0 )
                                {
                                  v7 = v258[1]-- == 1i64;
                                  if ( v7 )
                                    (*(*v258 + 8i64))(v258);
                                }
                                if ( (v250 & 0x8000000) != 0 )
                                {
                                  v7 = v252[1]-- == 1i64;
                                  if ( v7 )
                                    (*(*v252 + 8i64))(v252);
                                }
                                v259 = v474;
                                v260 = sq_pushstring(*(v474[0x28] + 0x30i64), "missionName", 0xFFFFFFFFFFFFFFFFui64);
                                ++v260[1];
                                v261 = v259[6];
                                v262 = v259[0xA];
                                v259[0xA] = v262 + 1;
                                v262 *= 0x10i64;
                                v263 = *(v261 + v262 + 8);
                                v264 = *(v261 + v262);
                                *(v261 + v262) = 0x18000010;
                                *(v261 + v262 + 4) = 0;
                                *(v261 + v262 + 8) = v260;
                                ++v260[1];
                                if ( (v264 & 0x8000000) != 0 )
                                {
                                  v7 = v263[1]-- == 1i64;
                                  if ( v7 )
                                    (*(*v263 + 8i64))(v263);
                                }
                                v7 = v260[1]-- == 1i64;
                                if ( v7 )
                                  (*(*v260 + 8i64))(v260);
                                v265 = v474;
                                v266 = sq_pushstring(*(v474[0x28] + 0x30i64), v16 + 0x63, 0xFFFFFFFFFFFFFFFFui64);
                                ++v266[1];
                                v267 = v265[6];
                                v268 = v265[0xA];
                                v265[0xA] = v268 + 1;
                                v268 *= 0x10i64;
                                v269 = *(v267 + v268 + 8);
                                v270 = *(v267 + v268);
                                *(v267 + v268) = 0x18000010;
                                *(v267 + v268 + 4) = 0;
                                *(v267 + v268 + 8) = v266;
                                ++v266[1];
                                if ( (v270 & 0x8000000) != 0 && (v7 = v269[1] == 1i64, --v269[1], v7) )
                                {
                                  (*(*v269 + 8i64))(v269);
                                  v7 = v266[1]-- == 1i64;
                                  if ( !v7 )
                                    goto LABEL_240;
                                }
                                else
                                {
                                  v7 = v266[1]-- == 1i64;
                                  if ( !v7 )
                                  {
LABEL_240:
                                    sub_176D900(v474, 0xFFFFFFFFFFFFFFFDui64, 0i64);
                                    v271 = v474[6];
                                    v272 = v474[0xA] - 1i64;
                                    v474[0xA] = v272;
                                    v272 *= 0x10i64;
                                    v273 = *(v271 + v272 + 8);
                                    v7 = (*(v271 + v272) & 0x8000000) == 0;
                                    *(v271 + v272) = 0i64;
                                    *(v271 + v272) = 0x1000001;
                                    if ( !v7 )
                                    {
                                      v7 = v273[1]-- == 1i64;
                                      if ( v7 )
                                        (*(*v273 + 8i64))(v273);
                                    }
                                    v274 = v473[1](&v473);
                                    v275 = *v274;
                                    v276 = *(v274 + 4);
                                    v277 = *(v274 + 8);
                                    v278 = v474;
                                    if ( (v275 & 0x8000000) != 0 )
                                      ++v277[1];
                                    v279 = v278[6];
                                    v280 = v278[0xA];
                                    v281 = v280 + 1;
                                    v280 *= 0x10i64;
                                    v278[0xA] = v281;
                                    v282 = *(v279 + v280);
                                    v283 = *(v279 + v280 + 8);
                                    *(v279 + v280) = v275;
                                    *(v279 + v280 + 4) = v276;
                                    *(v279 + v280 + 8) = v277;
                                    if ( (v275 & 0x8000000) != 0 )
                                      ++v277[1];
                                    if ( (v282 & 0x8000000) != 0 )
                                    {
                                      v7 = v283[1]-- == 1i64;
                                      if ( v7 )
                                        (*(*v283 + 8i64))(v283);
                                    }
                                    if ( (v275 & 0x8000000) != 0 )
                                    {
                                      v7 = v277[1]-- == 1i64;
                                      if ( v7 )
                                        (*(*v277 + 8i64))(v277);
                                    }
                                    v284 = v474;
                                    v285 = sq_pushstring(
                                             *(v474[0x28] + 0x30i64),
                                             "multiplayerGame",
                                             0xFFFFFFFFFFFFFFFFui64);
                                    ++v285[1];
                                    v286 = v284[6];
                                    v287 = v284[0xA];
                                    v284[0xA] = v287 + 1;
                                    v287 *= 0x10i64;
                                    v288 = *(v286 + v287 + 8);
                                    v289 = *(v286 + v287);
                                    *(v286 + v287) = 0x18000010;
                                    *(v286 + v287 + 4) = 0;
                                    *(v286 + v287 + 8) = v285;
                                    ++v285[1];
                                    if ( (v289 & 0x8000000) != 0 && (v7 = v288[1] == 1i64, --v288[1], v7) )
                                    {
                                      (*(*v288 + 8i64))(v288);
                                      v7 = v285[1]-- == 1i64;
                                      if ( !v7 )
                                        goto LABEL_257;
                                    }
                                    else
                                    {
                                      v7 = v285[1]-- == 1i64;
                                      if ( !v7 )
                                      {
LABEL_257:
                                        v290 = *(v16 + 0x3B3);
                                        v291 = v474[6];
                                        v292 = v474[0xA];
                                        v474[0xA] = v292 + 1;
                                        v292 *= 0x10i64;
                                        v7 = (*(v291 + v292) & 0x8000000) == 0;
                                        v293 = *(v291 + v292 + 8);
                                        *(v291 + v292) = 0x1000008;
                                        *(v291 + v292 + 4) = 0;
                                        *(v291 + v292 + 8) = v290;
                                        if ( !v7 )
                                        {
                                          v7 = v293[1]-- == 1i64;
                                          if ( v7 )
                                            (*(*v293 + 8i64))(v293);
                                        }
                                        sub_176D900(v474, 0xFFFFFFFFFFFFFFFDui64, 0i64);
                                        v294 = v474[6];
                                        v295 = v474[0xA] - 1i64;
                                        v474[0xA] = v295;
                                        v295 *= 0x10i64;
                                        v296 = *(v294 + v295 + 8);
                                        v7 = (*(v294 + v295) & 0x8000000) == 0;
                                        *(v294 + v295) = 0i64;
                                        *(v294 + v295) = 0x1000001;
                                        if ( !v7 )
                                        {
                                          v7 = v296[1]-- == 1i64;
                                          if ( v7 )
                                            (*(*v296 + 8i64))(v296);
                                        }
                                        v297 = v473[1](&v473);
                                        v298 = *v297;
                                        v299 = *(v297 + 4);
                                        v300 = *(v297 + 8);
                                        v301 = v474;
                                        if ( (v298 & 0x8000000) != 0 )
                                          ++v300[1];
                                        v302 = v301[6];
                                        v303 = v301[0xA];
                                        v304 = v303 + 1;
                                        v303 *= 0x10i64;
                                        v301[0xA] = v304;
                                        v305 = *(v302 + v303);
                                        v306 = *(v302 + v303 + 8);
                                        *(v302 + v303) = v298;
                                        *(v302 + v303 + 4) = v299;
                                        *(v302 + v303 + 8) = v300;
                                        if ( (v298 & 0x8000000) != 0 )
                                          ++v300[1];
                                        if ( (v305 & 0x8000000) != 0 )
                                        {
                                          v7 = v306[1]-- == 1i64;
                                          if ( v7 )
                                            (*(*v306 + 8i64))(v306);
                                        }
                                        if ( (v298 & 0x8000000) != 0 )
                                        {
                                          v7 = v300[1]-- == 1i64;
                                          if ( v7 )
                                            (*(*v300 + 8i64))(v300);
                                        }
                                        v307 = v474;
                                        v308 = sq_pushstring(
                                                 *(v474[0x28] + 0x30i64),
                                                 "gameMode",
                                                 0xFFFFFFFFFFFFFFFFui64);
                                        ++v308[1];
                                        v309 = v307[6];
                                        v310 = v307[0xA];
                                        v307[0xA] = v310 + 1;
                                        v310 *= 0x10i64;
                                        v311 = *(v309 + v310 + 8);
                                        v312 = *(v309 + v310);
                                        *(v309 + v310) = 0x18000010;
                                        *(v309 + v310 + 4) = 0;
                                        *(v309 + v310 + 8) = v308;
                                        ++v308[1];
                                        if ( (v312 & 0x8000000) != 0 && (v7 = v311[1] == 1i64, --v311[1], v7) )
                                        {
                                          (*(*v311 + 8i64))(v311);
                                          v7 = v308[1]-- == 1i64;
                                          if ( !v7 )
                                            goto LABEL_277;
                                        }
                                        else
                                        {
                                          v7 = v308[1]-- == 1i64;
                                          if ( !v7 )
                                          {
LABEL_277:
                                            v313 = v16[0xF0];
                                            v314 = v474[6];
                                            v315 = v474[0xA];
                                            v474[0xA] = v315 + 1;
                                            v315 *= 0x10i64;
                                            v7 = (*(v314 + v315) & 0x8000000) == 0;
                                            v316 = *(v314 + v315 + 8);
                                            *(v314 + v315) = 0x5000002;
                                            *(v314 + v315 + 4) = 0;
                                            *(v314 + v315 + 8) = v313;
                                            if ( !v7 )
                                            {
                                              v7 = v316[1]-- == 1i64;
                                              if ( v7 )
                                                (*(*v316 + 8i64))(v316);
                                            }
                                            sub_176D900(v474, 0xFFFFFFFFFFFFFFFDui64, 0i64);
                                            v317 = v474[6];
                                            v318 = v474[0xA] - 1i64;
                                            v474[0xA] = v318;
                                            v318 *= 0x10i64;
                                            v319 = *(v317 + v318 + 8);
                                            v7 = (*(v317 + v318) & 0x8000000) == 0;
                                            *(v317 + v318) = 0i64;
                                            *(v317 + v318) = 0x1000001;
                                            if ( !v7 )
                                            {
                                              v7 = v319[1]-- == 1i64;
                                              if ( v7 )
                                                (*(*v319 + 8i64))(v319);
                                            }
                                            v320 = v473[1](&v473);
                                            v321 = *v320;
                                            v322 = *(v320 + 4);
                                            v323 = *(v320 + 8);
                                            v324 = v474;
                                            if ( (v321 & 0x8000000) != 0 )
                                              ++v323[1];
                                            v325 = v324[6];
                                            v326 = v324[0xA];
                                            v327 = v326 + 1;
                                            v326 *= 0x10i64;
                                            v324[0xA] = v327;
                                            v328 = *(v325 + v326);
                                            v329 = *(v325 + v326 + 8);
                                            *(v325 + v326) = v321;
                                            *(v325 + v326 + 4) = v322;
                                            *(v325 + v326 + 8) = v323;
                                            if ( (v321 & 0x8000000) != 0 )
                                              ++v323[1];
                                            if ( (v328 & 0x8000000) != 0 )
                                            {
                                              v7 = v329[1]-- == 1i64;
                                              if ( v7 )
                                                (*(*v329 + 8i64))(v329);
                                            }
                                            if ( (v321 & 0x8000000) != 0 )
                                            {
                                              v7 = v323[1]-- == 1i64;
                                              if ( v7 )
                                                (*(*v323 + 8i64))(v323);
                                            }
                                            v330 = v474;
                                            v331 = sq_pushstring(
                                                     *(v474[0x28] + 0x30i64),
                                                     "gameType",
                                                     0xFFFFFFFFFFFFFFFFui64);
                                            ++v331[1];
                                            v332 = v330[6];
                                            v333 = v330[0xA];
                                            v330[0xA] = v333 + 1;
                                            v333 *= 0x10i64;
                                            v334 = *(v332 + v333 + 8);
                                            v335 = *(v332 + v333);
                                            *(v332 + v333) = 0x18000010;
                                            *(v332 + v333 + 4) = 0;
                                            *(v332 + v333 + 8) = v331;
                                            ++v331[1];
                                            if ( (v335 & 0x8000000) != 0 && (v7 = v334[1] == 1i64, --v334[1], v7) )
                                            {
                                              (*(*v334 + 8i64))(v334);
                                              v7 = v331[1]-- == 1i64;
                                              if ( !v7 )
                                                goto LABEL_297;
                                            }
                                            else
                                            {
                                              v7 = v331[1]-- == 1i64;
                                              if ( !v7 )
                                              {
LABEL_297:
                                                v336 = v16[0xE6];
                                                v337 = v474[6];
                                                v338 = v474[0xA];
                                                v474[0xA] = v338 + 1;
                                                v338 *= 0x10i64;
                                                v7 = (*(v337 + v338) & 0x8000000) == 0;
                                                v339 = *(v337 + v338 + 8);
                                                *(v337 + v338) = 0x5000002;
                                                *(v337 + v338 + 4) = 0;
                                                *(v337 + v338 + 8) = v336;
                                                if ( !v7 )
                                                {
                                                  v7 = v339[1]-- == 1i64;
                                                  if ( v7 )
                                                    (*(*v339 + 8i64))(v339);
                                                }
                                                sub_176D900(v474, 0xFFFFFFFFFFFFFFFDui64, 0i64);
                                                v340 = v474[6];
                                                v341 = v474[0xA] - 1i64;
                                                v474[0xA] = v341;
                                                v341 *= 0x10i64;
                                                v342 = *(v340 + v341 + 8);
                                                v7 = (*(v340 + v341) & 0x8000000) == 0;
                                                *(v340 + v341) = 0i64;
                                                *(v340 + v341) = 0x1000001;
                                                if ( !v7 )
                                                {
                                                  v7 = v342[1]-- == 1i64;
                                                  if ( v7 )
                                                    (*(*v342 + 8i64))(v342);
                                                }
                                                sub_C5C360(v484, v63, v16[0xE2]);
                                                v343 = v473[1](&v473);
                                                v344 = *v343;
                                                v345 = *(v343 + 4);
                                                v346 = *(v343 + 8);
                                                v347 = v474;
                                                if ( (v344 & 0x8000000) != 0 )
                                                  ++v346[1];
                                                v348 = v347[6];
                                                v349 = v347[0xA];
                                                v350 = v349 + 1;
                                                v349 *= 0x10i64;
                                                v347[0xA] = v350;
                                                v351 = *(v348 + v349);
                                                v352 = *(v348 + v349 + 8);
                                                *(v348 + v349) = v344;
                                                *(v348 + v349 + 4) = v345;
                                                *(v348 + v349 + 8) = v346;
                                                if ( (v344 & 0x8000000) != 0 )
                                                  ++v346[1];
                                                if ( (v351 & 0x8000000) != 0 )
                                                {
                                                  v7 = v352[1]-- == 1i64;
                                                  if ( v7 )
                                                    (*(*v352 + 8i64))(v352);
                                                }
                                                if ( (v344 & 0x8000000) != 0 )
                                                {
                                                  v7 = v346[1]-- == 1i64;
                                                  if ( v7 )
                                                    (*(*v346 + 8i64))(v346);
                                                }
                                                v353 = v474;
                                                v354 = sq_pushstring(
                                                         *(v474[0x28] + 0x30i64),
                                                         "dateTime",
                                                         0xFFFFFFFFFFFFFFFFui64);
                                                ++v354[1];
                                                v355 = v353[6];
                                                v356 = v353[0xA];
                                                v353[0xA] = v356 + 1;
                                                v356 *= 0x10i64;
                                                v357 = *(v355 + v356 + 8);
                                                v358 = *(v355 + v356);
                                                *(v355 + v356) = 0x18000010;
                                                *(v355 + v356 + 4) = 0;
                                                *(v355 + v356 + 8) = v354;
                                                ++v354[1];
                                                if ( (v358 & 0x8000000) != 0 && (v7 = v357[1] == 1i64, --v357[1], v7) )
                                                {
                                                  (*(*v357 + 8i64))(v357);
                                                  v7 = v354[1]-- == 1i64;
                                                  if ( !v7 )
                                                  {
LABEL_317:
                                                    v359 = v474;
                                                    (*(*v484 + 0x10i64))(v484, v482);
                                                    v360 = v482[0];
                                                    v361 = v482[1];
                                                    v362 = v483;
                                                    if ( (v482[0] & 0x8000000) != 0 )
                                                      ++v483[1];
                                                    v363 = v359[6];
                                                    v364 = v359[0xA];
                                                    v365 = v364 + 1;
                                                    v364 *= 0x10i64;
                                                    v359[0xA] = v365;
                                                    v366 = *(v363 + v364);
                                                    v367 = *(v363 + v364 + 8);
                                                    *(v363 + v364) = v360;
                                                    *(v363 + v364 + 4) = v361;
                                                    *(v363 + v364 + 8) = v362;
                                                    if ( (v360 & 0x8000000) != 0 )
                                                      ++v362[1];
                                                    if ( (v366 & 0x8000000) != 0 )
                                                    {
                                                      v7 = v367[1]-- == 1i64;
                                                      if ( v7 )
                                                        (*(*v367 + 8i64))(v367);
                                                    }
                                                    if ( (v360 & 0x8000000) != 0 )
                                                    {
                                                      v7 = v362[1]-- == 1i64;
                                                      if ( v7 )
                                                        (*(*v362 + 8i64))(v362);
                                                    }
                                                    sub_176D900(v474, 0xFFFFFFFFFFFFFFFDui64, 0i64);
                                                    v368 = v474[6];
                                                    v369 = v474[0xA] - 1i64;
                                                    v474[0xA] = v369;
                                                    v369 *= 0x10i64;
                                                    v370 = *(v368 + v369 + 8);
                                                    v7 = (*(v368 + v369) & 0x8000000) == 0;
                                                    *(v368 + v369) = 0i64;
                                                    *(v368 + v369) = 0x1000001;
                                                    if ( !v7 )
                                                    {
                                                      v7 = v370[1]-- == 1i64;
                                                      if ( v7 )
                                                        (*(*v370 + 8i64))(v370);
                                                    }
                                                    *v484 = &off_44A93B0;
                                                    if ( (v486[3] & 8) != 0 )
                                                      sub_28B55C0((v485[0x28] + 0x38i64), v486);
                                                    v371 = v16[0xE2];
                                                    v372 = v473[1](&v473);
                                                    v373 = *v372;
                                                    v374 = *(v372 + 4);
                                                    v375 = *(v372 + 8);
                                                    v376 = v474;
                                                    if ( (v373 & 0x8000000) != 0 )
                                                      ++v375[1];
                                                    v377 = v376[6];
                                                    v378 = v376[0xA];
                                                    v379 = v378 + 1;
                                                    v378 *= 0x10i64;
                                                    v376[0xA] = v379;
                                                    v380 = *(v377 + v378);
                                                    v381 = *(v377 + v378 + 8);
                                                    *(v377 + v378) = v373;
                                                    *(v377 + v378 + 4) = v374;
                                                    *(v377 + v378 + 8) = v375;
                                                    if ( (v373 & 0x8000000) != 0 )
                                                      ++v375[1];
                                                    if ( (v380 & 0x8000000) != 0 )
                                                    {
                                                      v7 = v381[1]-- == 1i64;
                                                      if ( v7 )
                                                        (*(*v381 + 8i64))(v381);
                                                    }
                                                    if ( (v373 & 0x8000000) != 0 )
                                                    {
                                                      v7 = v375[1]-- == 1i64;
                                                      if ( v7 )
                                                        (*(*v375 + 8i64))(v375);
                                                    }
                                                    v382 = v474;
                                                    v383 = sq_pushstring(
                                                             *(v474[0x28] + 0x30i64),
                                                             "startTime",
                                                             0xFFFFFFFFFFFFFFFFui64);
                                                    ++v383[1];
                                                    v384 = v382[6];
                                                    v385 = v382[0xA];
                                                    v382[0xA] = v385 + 1;
                                                    v385 *= 0x10i64;
                                                    v386 = *(v384 + v385 + 8);
                                                    v387 = *(v384 + v385);
                                                    *(v384 + v385) = 0x18000010;
                                                    *(v384 + v385 + 4) = 0;
                                                    *(v384 + v385 + 8) = v383;
                                                    ++v383[1];
                                                    if ( (v387 & 0x8000000) != 0
                                                      && (v7 = v386[1] == 1i64, --v386[1], v7) )
                                                    {
                                                      (*(*v386 + 8i64))(v386);
                                                      v7 = v383[1]-- == 1i64;
                                                      if ( !v7 )
                                                        goto LABEL_346;
                                                    }
                                                    else
                                                    {
                                                      v7 = v383[1]-- == 1i64;
                                                      if ( !v7 )
                                                      {
LABEL_346:
                                                        v388 = v474[6];
                                                        v389 = v474[0xA];
                                                        v474[0xA] = v389 + 1;
                                                        v389 *= 0x10i64;
                                                        v7 = (*(v388 + v389) & 0x8000000) == 0;
                                                        v390 = *(v388 + v389 + 8);
                                                        *(v388 + v389) = 0x5000002;
                                                        *(v388 + v389 + 4) = 0;
                                                        *(v388 + v389 + 8) = v371;
                                                        if ( !v7 )
                                                        {
                                                          v7 = v390[1]-- == 1i64;
                                                          if ( v7 )
                                                            (*(*v390 + 8i64))(v390);
                                                        }
                                                        sub_176D900(v474, 0xFFFFFFFFFFFFFFFDui64, 0i64);
                                                        v391 = v474[6];
                                                        v392 = v474[0xA] - 1i64;
                                                        v474[0xA] = v392;
                                                        v392 *= 0x10i64;
                                                        v393 = *(v391 + v392 + 8);
                                                        v7 = (*(v391 + v392) & 0x8000000) == 0;
                                                        *(v391 + v392) = 0i64;
                                                        *(v391 + v392) = 0x1000001;
                                                        if ( !v7 )
                                                        {
                                                          v7 = v393[1]-- == 1i64;
                                                          if ( v7 )
                                                            (*(*v393 + 8i64))(v393);
                                                        }
                                                        v394 = v473[1](&v473);
                                                        v395 = *v394;
                                                        v396 = *(v394 + 4);
                                                        v397 = *(v394 + 8);
                                                        v398 = v474;
                                                        if ( (v395 & 0x8000000) != 0 )
                                                          ++v397[1];
                                                        v399 = v398[6];
                                                        v400 = v398[0xA];
                                                        v401 = v400 + 1;
                                                        v400 *= 0x10i64;
                                                        v398[0xA] = v401;
                                                        v402 = *(v399 + v400);
                                                        v403 = *(v399 + v400 + 8);
                                                        *(v399 + v400) = v395;
                                                        *(v399 + v400 + 4) = v396;
                                                        *(v399 + v400 + 8) = v397;
                                                        if ( (v395 & 0x8000000) != 0 )
                                                          ++v397[1];
                                                        if ( (v402 & 0x8000000) != 0 )
                                                        {
                                                          v7 = v403[1]-- == 1i64;
                                                          if ( v7 )
                                                            (*(*v403 + 8i64))(v403);
                                                        }
                                                        if ( (v395 & 0x8000000) != 0 )
                                                        {
                                                          v7 = v397[1]-- == 1i64;
                                                          if ( v7 )
                                                            (*(*v397 + 8i64))(v397);
                                                        }
                                                        v404 = v474;
                                                        v405 = sq_pushstring(
                                                                 *(v474[0x28] + 0x30i64),
                                                                 "locName",
                                                                 0xFFFFFFFFFFFFFFFFui64);
                                                        ++v405[1];
                                                        v406 = v404[6];
                                                        v407 = v404[0xA];
                                                        v404[0xA] = v407 + 1;
                                                        v407 *= 0x10i64;
                                                        v408 = *(v406 + v407 + 8);
                                                        v409 = *(v406 + v407);
                                                        *(v406 + v407) = 0x18000010;
                                                        *(v406 + v407 + 4) = 0;
                                                        *(v406 + v407 + 8) = v405;
                                                        ++v405[1];
                                                        if ( (v409 & 0x8000000) != 0 )
                                                        {
                                                          v7 = v408[1]-- == 1i64;
                                                          if ( v7 )
                                                            (*(*v408 + 8i64))(v408);
                                                        }
                                                        v7 = v405[1]-- == 1i64;
                                                        if ( v7 )
                                                          (*(*v405 + 8i64))(v405);
                                                        v410 = v474;
                                                        v411 = sq_pushstring(
                                                                 *(v474[0x28] + 0x30i64),
                                                                 v16 + 0xC2,
                                                                 0xFFFFFFFFFFFFFFFFui64);
                                                        ++v411[1];
                                                        v412 = v410[6];
                                                        v413 = v410[0xA];
                                                        v410[0xA] = v413 + 1;
                                                        v413 *= 0x10i64;
                                                        v414 = *(v412 + v413 + 8);
                                                        v415 = *(v412 + v413);
                                                        *(v412 + v413) = 0x18000010;
                                                        *(v412 + v413 + 4) = 0;
                                                        *(v412 + v413 + 8) = v411;
                                                        ++v411[1];
                                                        if ( (v415 & 0x8000000) != 0
                                                          && (v7 = v414[1] == 1i64, --v414[1], v7) )
                                                        {
                                                          (*(*v414 + 8i64))(v414);
                                                          v7 = v411[1]-- == 1i64;
                                                          if ( !v7 )
                                                            goto LABEL_371;
                                                        }
                                                        else
                                                        {
                                                          v7 = v411[1]-- == 1i64;
                                                          if ( !v7 )
                                                          {
LABEL_371:
                                                            sub_176D900(v474, 0xFFFFFFFFFFFFFFFDui64, 0i64);
                                                            v416 = v474[6];
                                                            v417 = v474[0xA] - 1i64;
                                                            v474[0xA] = v417;
                                                            v417 *= 0x10i64;
                                                            v418 = *(v416 + v417 + 8);
                                                            v7 = (*(v416 + v417) & 0x8000000) == 0;
                                                            *(v416 + v417) = 0i64;
                                                            *(v416 + v417) = 0x1000001;
                                                            if ( !v7 )
                                                            {
                                                              v7 = v418[1]-- == 1i64;
                                                              if ( v7 )
                                                                (*(*v418 + 8i64))(v418);
                                                            }
                                                            sub_17A810(v484, 0x40, "%llx");
                                                            v486[0x2F] = 0;
                                                            v419 = v473[1](&v473);
                                                            v420 = *v419;
                                                            v421 = *(v419 + 4);
                                                            v422 = *(v419 + 8);
                                                            v423 = v474;
                                                            if ( (v420 & 0x8000000) != 0 )
                                                              ++v422[1];
                                                            v424 = v423[6];
                                                            v425 = v423[0xA];
                                                            v426 = v425 + 1;
                                                            v425 *= 0x10i64;
                                                            v423[0xA] = v426;
                                                            v427 = *(v424 + v425);
                                                            v428 = *(v424 + v425 + 8);
                                                            *(v424 + v425) = v420;
                                                            *(v424 + v425 + 4) = v421;
                                                            *(v424 + v425 + 8) = v422;
                                                            if ( (v420 & 0x8000000) != 0 )
                                                              ++v422[1];
                                                            if ( (v427 & 0x8000000) != 0 )
                                                            {
                                                              v7 = v428[1]-- == 1i64;
                                                              if ( v7 )
                                                                (*(*v428 + 8i64))(v428);
                                                            }
                                                            if ( (v420 & 0x8000000) != 0 )
                                                            {
                                                              v7 = v422[1]-- == 1i64;
                                                              if ( v7 )
                                                                (*(*v422 + 8i64))(v422);
                                                            }
                                                            v429 = v474;
                                                            v430 = sq_pushstring(
                                                                     *(v474[0x28] + 0x30i64),
                                                                     "sessionId",
                                                                     0xFFFFFFFFFFFFFFFFui64);
                                                            ++v430[1];
                                                            v431 = v429[6];
                                                            v432 = v429[0xA];
                                                            v429[0xA] = v432 + 1;
                                                            v432 *= 0x10i64;
                                                            v433 = *(v431 + v432 + 8);
                                                            v434 = *(v431 + v432);
                                                            *(v431 + v432) = 0x18000010;
                                                            *(v431 + v432 + 4) = 0;
                                                            *(v431 + v432 + 8) = v430;
                                                            ++v430[1];
                                                            if ( (v434 & 0x8000000) != 0
                                                              && (v7 = v433[1] == 1i64, --v433[1], v7) )
                                                            {
                                                              (*(*v433 + 8i64))(v433);
                                                              v7 = v430[1]-- == 1i64;
                                                              if ( !v7 )
                                                              {
LABEL_388:
                                                                v435 = v474;
                                                                v436 = sq_pushstring(
                                                                         *(v474[0x28] + 0x30i64),
                                                                         v484,
                                                                         0xFFFFFFFFFFFFFFFFui64);
                                                                ++v436[1];
                                                                v437 = v435[6];
                                                                v438 = v435[0xA];
                                                                v435[0xA] = v438 + 1;
                                                                v438 *= 0x10i64;
                                                                v439 = *(v437 + v438 + 8);
                                                                v440 = *(v437 + v438);
                                                                *(v437 + v438) = 0x18000010;
                                                                *(v437 + v438 + 4) = 0;
                                                                *(v437 + v438 + 8) = v436;
                                                                ++v436[1];
                                                                if ( (v440 & 0x8000000) != 0 )
                                                                {
                                                                  v7 = v439[1]-- == 1i64;
                                                                  if ( v7 )
                                                                    (*(*v439 + 8i64))(v439);
                                                                }
                                                                v7 = v436[1]-- == 1i64;
                                                                v441 = v476;
                                                                if ( v7 )
                                                                  (*(*v436 + 8i64))(v436);
                                                                sub_176D900(v474, 0xFFFFFFFFFFFFFFFDui64, 0i64);
                                                                v442 = v474[6];
                                                                v443 = v474[0xA] - 1i64;
                                                                v474[0xA] = v443;
                                                                v443 *= 0x10i64;
                                                                v444 = *(v442 + v443 + 8);
                                                                v7 = (*(v442 + v443) & 0x8000000) == 0;
                                                                *(v442 + v443) = 0i64;
                                                                *(v442 + v443) = 0x1000001;
                                                                if ( !v7 )
                                                                {
                                                                  v7 = v444[1]-- == 1i64;
                                                                  if ( v7 )
                                                                    (*(*v444 + 8i64))(v444);
                                                                }
                                                                if ( v441 )
                                                                {
                                                                  v445 = v473[1](&v473);
                                                                  v446 = *v445;
                                                                  v447 = *(v445 + 4);
                                                                  v448 = *(v445 + 8);
                                                                  v449 = v474;
                                                                  if ( (v446 & 0x8000000) != 0 )
                                                                    ++v448[1];
                                                                  v450 = v449[6];
                                                                  v451 = v449[0xA];
                                                                  v452 = v451 + 1;
                                                                  v451 *= 0x10i64;
                                                                  v449[0xA] = v452;
                                                                  v453 = *(v450 + v451);
                                                                  v454 = *(v450 + v451 + 8);
                                                                  *(v450 + v451) = v446;
                                                                  *(v450 + v451 + 4) = v447;
                                                                  *(v450 + v451 + 8) = v448;
                                                                  if ( (v446 & 0x8000000) != 0 )
                                                                    ++v448[1];
                                                                  if ( (v453 & 0x8000000) != 0 )
                                                                  {
                                                                    v7 = v454[1]-- == 1i64;
                                                                    if ( v7 )
                                                                      (*(*v454 + 8i64))(v454);
                                                                  }
                                                                  if ( (v446 & 0x8000000) != 0 )
                                                                  {
                                                                    v7 = v448[1]-- == 1i64;
                                                                    if ( v7 )
                                                                      (*(*v448 + 8i64))(v448);
                                                                  }
                                                                  v455 = v474;
                                                                  v456 = sq_pushstring(
                                                                           *(v474[0x28] + 0x30i64),
                                                                           "comments",
                                                                           0xFFFFFFFFFFFFFFFFui64);
                                                                  ++v456[1];
                                                                  v457 = v455[6];
                                                                  v458 = v455[0xA];
                                                                  v455[0xA] = v458 + 1;
                                                                  v458 *= 0x10i64;
                                                                  v459 = *(v457 + v458 + 8);
                                                                  v460 = *(v457 + v458);
                                                                  *(v457 + v458) = 0x18000010;
                                                                  *(v457 + v458 + 4) = 0;
                                                                  *(v457 + v458 + 8) = v456;
                                                                  ++v456[1];
                                                                  if ( (v460 & 0x8000000) != 0 )
                                                                  {
                                                                    v7 = v459[1]-- == 1i64;
                                                                    if ( v7 )
                                                                      (*(*v459 + 8i64))(v459);
                                                                  }
                                                                  v7 = v456[1]-- == 1i64;
                                                                  if ( v7 )
                                                                    (*(*v456 + 8i64))(v456);
                                                                  v461 = v474;
                                                                  if ( sub_4DA8D0(v474) )
                                                                    sub_4DAB40(v461, v480);
                                                                  sub_176D900(v474, 0xFFFFFFFFFFFFFFFDui64, 0i64);
                                                                  v462 = v474[6];
                                                                  v463 = v474[0xA] - 1i64;
                                                                  v474[0xA] = v463;
                                                                  v463 *= 0x10i64;
                                                                  v464 = *(v462 + v463 + 8);
                                                                  v7 = (*(v462 + v463) & 0x8000000) == 0;
                                                                  *(v462 + v463) = 0i64;
                                                                  *(v462 + v463) = 0x1000001;
                                                                  if ( !v7 )
                                                                  {
                                                                    v7 = v464[1]-- == 1i64;
                                                                    if ( v7 )
                                                                      (*(*v464 + 8i64))(v464);
                                                                  }
                                                                }
                                                                v477 = &off_44A93B0;
                                                                if ( (v479[3] & 8) != 0 )
                                                                  sub_28B55C0((v478[0x28] + 0x38i64), v479);
                                                                goto LABEL_419;
                                                              }
                                                            }
                                                            else
                                                            {
                                                              v7 = v430[1]-- == 1i64;
                                                              if ( !v7 )
                                                                goto LABEL_388;
                                                            }
                                                            (*(*v430 + 8i64))(v430);
                                                            goto LABEL_388;
                                                          }
                                                        }
                                                        (*(*v411 + 8i64))(v411);
                                                        goto LABEL_371;
                                                      }
                                                    }
                                                    (*(*v383 + 8i64))(v383);
                                                    goto LABEL_346;
                                                  }
                                                }
                                                else
                                                {
                                                  v7 = v354[1]-- == 1i64;
                                                  if ( !v7 )
                                                    goto LABEL_317;
                                                }
                                                (*(*v354 + 8i64))(v354);
                                                goto LABEL_317;
                                              }
                                            }
                                            (*(*v331 + 8i64))(v331);
                                            goto LABEL_297;
                                          }
                                        }
                                        (*(*v308 + 8i64))(v308);
                                        goto LABEL_277;
                                      }
                                    }
                                    (*(*v285 + 8i64))(v285);
                                    goto LABEL_257;
                                  }
                                }
                                (*(*v266 + 8i64))(v266);
                                goto LABEL_240;
                              }
                            }
                            (*(*v241 + 8i64))(v241);
                            goto LABEL_218;
                          }
                        }
                        (*(*v212 + 8i64))(v212);
                        goto LABEL_193;
                      }
                    }
                    (*(*v189 + 8i64))(v189);
                    goto LABEL_173;
                  }
                }
                (*(*v166 + 8i64))(v166);
                goto LABEL_153;
              }
            }
            (*(*v143 + 8i64))(v143);
            goto LABEL_133;
          }
        }
        (*(*v124 + 8i64))(v124);
        goto LABEL_116;
      }
    }
    (*(*v96 + 8i64))(v96);
    goto LABEL_91;
  }
  v65 = *(game + 0x450);
  if ( *(v65 + 0x5CA) )
  {
    v16 = (v65 + 0x10);
    goto LABEL_54;
  }
LABEL_419:
  (v473[2])(&v473, v490);
  v465 = v490[0];
  v466 = v490[1];
  v467 = v491;
  if ( (v490[0] & 0x8000000) != 0 )
    ++v491[1];
  v468 = *(v64 + 0x30);
  v469 = *(v64 + 0x50);
  v470 = v469 + 1;
  v469 *= 0x10i64;
  *(v64 + 0x50) = v470;
  v471 = *(v468 + v469);
  v472 = *(v468 + v469 + 8);
  *(v468 + v469) = v465;
  *(v468 + v469 + 4) = v466;
  *(v468 + v469 + 8) = v467;
  if ( (v465 & 0x8000000) != 0 )
    ++v467[1];
  if ( (v471 & 0x8000000) != 0 )
  {
    v7 = v472[1]-- == 1i64;
    if ( v7 )
      (*(*v472 + 8i64))(v472);
  }
  if ( (v465 & 0x8000000) != 0 )
  {
    v7 = v467[1]-- == 1i64;
    if ( v7 )
      (*(*v467 + 8i64))(v467);
  }
  v473 = &off_44A93B0;
  if ( (BYTE3(v475) & 8) != 0 )
    sub_28B55C0((v474[0x28] + 0x38i64), &v475);
  if ( v488 && v487[0] != 0x1000001 && (v487[0] & 0x8000000) != 0 )
    sub_28B55C0((*(v488 + 0x140) + 0x38i64), v487);
  return 1i64;
}
