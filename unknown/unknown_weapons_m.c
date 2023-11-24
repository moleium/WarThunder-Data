double __fastcall unknown_weapons_m(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  __m128 v5; // xmm0
  float v6; // xmm2_4
  float v8; // xmm7_4
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 mUnit_; // rsi
  bool v13; // al
  _DWORD *hud; // rcx
  unsigned int v15; // edx
  _DWORD *v16; // rcx
  bool v17; // zf
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int128 *v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 game_optics; // rcx
  bool v27; // si
  __int64 air_movement; // r15
  float v29; // xmm15_4
  float v30; // xmm9_4
  float v31; // xmm11_4
  __m128 v32; // xmm14
  float v33; // xmm12_4
  unsigned __int64 v34; // xmm13_8
  int XPosition; // xmm8_4
  float YPosition; // xmm10_4
  float ZPosition; // xmm0_4
  float v38; // ebx
  float v39; // eax
  char v40; // al
  float v41; // ecx
  unsigned __int8 v42; // dl
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rsi
  unsigned int v46; // ecx
  int v47; // edx
  char v48; // r15
  _BYTE *v49; // rcx
  bool v50; // r13
  bool v51; // bl
  __int64 v52; // rax
  __int64 v53; // r8
  int v54; // r9d
  unsigned int v55; // esi
  int v56; // edx
  unsigned __int8 v57; // r15
  char v58; // r14
  char v59; // r13
  _BYTE *v60; // rcx
  int v61; // edi
  char v62; // di
  char v63; // bl
  char v64; // bp
  char v65; // r13
  unsigned __int8 v66; // si
  unsigned int v67; // edx
  int v68; // eax
  _BYTE *v69; // rcx
  _BYTE *v70; // rdx
  char v71; // bl
  __int64 v72; // r14
  unsigned __int64 *v73; // r13
  char v74; // bl
  char v75; // bl
  char v76; // bl
  char v77; // bl
  bool v78; // bl
  int v79; // edx
  _BYTE *v80; // rcx
  __int64 v81; // r9
  __int64 v82; // rax
  bool v83; // cl
  int v84; // ebp
  float v85; // xmm15_4
  float v86; // xmm11_4
  float v87; // xmm8_4
  float v88; // xmm1_4
  float v89; // xmm3_4
  float v90; // xmm10_4
  float v91; // xmm9_4
  float v92; // xmm5_4
  float v93; // xmm0_4
  float v94; // xmm4_4
  float v95; // xmm9_4
  float v96; // xmm10_4
  float v97; // xmm3_4
  float v98; // xmm4_4
  float v99; // xmm5_4
  float v100; // xmm6_4
  float v101; // xmm0_4
  float v102; // xmm4_4
  float v103; // xmm3_4
  float v104; // xmm12_4
  float v105; // xmm0_4
  float v106; // xmm9_4
  float v107; // xmm15_4
  float v108; // xmm2_4
  float v109; // xmm0_4
  __m128 v110; // xmm12
  _DWORD *v111; // rcx
  float v112; // xmm6_4
  float v113; // xmm12_4
  float v114; // xmm9_4
  float v115; // xmm3_4
  float v116; // xmm2_4
  float v117; // xmm0_4
  float v118; // xmm2_4
  __int64 v119; // rdx
  float v120; // xmm4_4
  float v121; // xmm0_4
  float v122; // xmm14_4
  float v123; // xmm3_4
  float v124; // xmm0_4
  float v125; // xmm13_4
  float v126; // xmm5_4
  float v127; // xmm2_4
  float v128; // xmm15_4
  float v129; // xmm6_4
  float v130; // xmm0_4
  float v131; // xmm3_4
  float v132; // xmm2_4
  float v133; // xmm1_4
  float v134; // xmm1_4
  float v135; // xmm5_4
  float v136; // xmm15_4
  float v137; // xmm0_4
  float v138; // xmm1_4
  float v139; // xmm4_4
  float v140; // xmm3_4
  unsigned __int8 v141; // al
  unsigned __int8 v142; // bl
  unsigned __int8 v143; // al
  int v144; // esi
  bool v145; // al
  __int64 v146; // rdx
  int v147; // ebx
  __int64 v148; // r9
  _BYTE *v149; // rcx
  float *v150; // rcx
  int v151; // xmm1_4
  int v152; // xmm1_4
  float *v153; // rdx
  float v154; // xmm0_4
  float v155; // xmm0_4
  float v156; // xmm0_4
  float v157; // xmm0_4
  __int64 v158; // rcx
  unsigned __int8 v159; // al
  unsigned __int8 v160; // bl
  __int64 v161; // rdx
  __int64 v162; // r8
  __int64 v163; // r9
  _BYTE *v164; // rcx
  float *v165; // rcx
  int v166; // xmm1_4
  float v167; // xmm1_4
  __int64 v168; // rax
  __int64 v169; // rdi
  __int64 v170; // rcx
  _BYTE *v171; // rcx
  _BYTE *v172; // rcx
  char v173; // al
  char v174; // bl
  _BYTE *v175; // rcx
  int v176; // xmm1_4
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 ballistics; // rdx
  _BYTE *v180; // rcx
  __int64 v181; // rax
  __int64 v182; // rdx
  __int64 v183; // rcx
  _BYTE *v184; // rcx
  int v185; // ebp
  __m128 v186; // xmm13
  char v187; // bl
  char v188; // si
  __int64 v189; // rdx
  __int64 v190; // r8
  __int64 v191; // r9
  float v192; // xmm0_4
  float *v193; // rcx
  int v194; // edx
  __int64 v195; // rax
  float v196; // xmm3_4
  float v197; // xmm12_4
  float v198; // xmm0_4
  float v199; // xmm5_4
  float v200; // xmm1_4
  float v201; // xmm2_4
  char v202; // bl
  float v203; // xmm0_4
  float v204; // xmm12_4
  float v205; // xmm3_4
  float v206; // xmm2_4
  float v207; // xmm2_4
  float v208; // xmm5_4
  float v209; // xmm1_4
  float v210; // xmm7_4
  float v211; // xmm14_4
  float v212; // xmm2_4
  float v213; // xmm9_4
  float v214; // xmm1_4
  float v215; // xmm0_4
  float v216; // xmm8_4
  unsigned __int8 v217; // al
  int v218; // esi
  int v219; // ecx
  __int64 v220; // rax
  __int64 v221; // rcx
  _DWORD *v222; // rcx
  int v223; // ecx
  __int64 v224; // rdx
  float v225; // xmm9_4
  float v226; // xmm0_4
  float v227; // xmm3_4
  float v228; // xmm5_4
  float v229; // xmm1_4
  float v230; // xmm5_4
  _DWORD *v231; // rcx
  float v232; // xmm2_4
  float v233; // xmm0_4
  float v234; // xmm12_4
  float v235; // xmm3_4
  float v236; // xmm4_4
  float v237; // xmm10_4
  float v238; // xmm7_4
  float v239; // xmm5_4
  float v240; // xmm8_4
  float v241; // xmm2_4
  float v242; // xmm4_4
  float v243; // xmm3_4
  float v244; // xmm10_4
  float v245; // xmm7_4
  float v246; // xmm1_4
  float v247; // xmm5_4
  float v248; // xmm9_4
  float v249; // xmm15_4
  __m128 v250; // xmm11
  float v251; // xmm7_4
  float v252; // xmm6_4
  float v253; // xmm5_4
  float v254; // xmm2_4
  _DWORD *v255; // rcx
  char v256; // al
  int v257; // eax
  bool v258; // cl
  bool v259; // si
  char v260; // al
  char v261; // bl
  _BYTE *v262; // rcx
  float *v263; // rcx
  int v264; // xmm1_4
  int v265; // xmm1_4
  float v266; // xmm0_4
  float v267; // xmm0_4
  float v268; // xmm0_4
  int v269; // eax
  __int64 v270; // r15
  char v271; // bl
  bool v272; // r14
  __int64 v273; // rcx
  __int128 v274; // xmm0
  double v275; // xmm6_8
  int v276; // r8d
  int v277; // r9d
  float v278; // xmm8_4
  __int64 v279; // rsi
  __int64 v280; // rdi
  __int128 v281; // xmm6
  bool v282; // al
  __int64 v283; // rcx
  __int64 v284; // rdx
  __int64 v285; // rbx
  int v286; // xmm9_4
  float v287; // xmm10_4
  int v288; // r8d
  int v289; // r9d
  __int128 v290; // xmm11
  double v291; // xmm0_8
  float v292; // xmm7_4
  float v293; // xmm6_4
  int v294; // r8d
  int v295; // r9d
  double v296; // xmm0_8
  float v297; // xmm1_4
  bool v298; // al
  __int64 v299; // rsi
  bool v300; // bl
  __int64 v301; // rax
  char v302; // al
  char v303; // r14
  _BYTE *v304; // rcx
  bool v305; // dl
  __int64 v306; // rcx
  unsigned __int64 v307; // rbp
  __int64 v308; // rcx
  __int64 v309; // rcx
  char v310; // si
  bool v311; // r14
  int v312; // ebx
  char v313; // bl
  __int64 v314; // rax
  bool v315; // dl
  unsigned __int8 v316; // bl
  unsigned __int8 v317; // al
  int v318; // esi
  __int128 v319; // xmm0
  __int128 v320; // xmm1
  float v321; // xmm15_4
  float v322; // xmm0_4
  float v323; // xmm14_4
  float v324; // xmm2_4
  float v325; // xmm6_4
  float v326; // xmm1_4
  float v327; // xmm15_4
  float v328; // xmm0_4
  float v329; // xmm14_4
  float v330; // xmm9_4
  float v331; // xmm14_4
  float v332; // xmm15_4
  float v333; // xmm0_4
  float v334; // xmm7_4
  _BYTE *v335; // rcx
  _QWORD *v336; // rax
  unsigned __int64 v337; // rcx
  float v338; // xmm8_4
  unsigned __int64 v339; // rdi
  __int64 v340; // rbp
  bool v341; // cf
  __int64 v342; // rax
  int v343; // eax
  __int64 v344; // rsi
  unsigned int v345; // ecx
  __int64 v346; // rbp
  _DWORD *v347; // rax
  __int64 v348; // rbx
  __int64 v349; // rcx
  __int64 v350; // rdi
  _DWORD *v351; // rbx
  unsigned int v352; // ebx
  __int64 v353; // rax
  _QWORD *v354; // rcx
  __int64 v355; // rcx
  __int64 v356; // rax
  float v357; // xmm0_4
  float v358; // xmm9_4
  float v359; // xmm14_4
  float v360; // xmm15_4
  float v361; // xmm8_4
  unsigned __int64 v362; // r13
  __int128 v363; // xmm7
  __int128 v364; // xmm11
  float v365; // xmm12_4
  float v366; // xmm6_4
  float v367; // xmm0_4
  float v368; // xmm1_4
  float v369; // xmm2_4
  __int128 v370; // xmm5
  __int128 v371; // xmm10
  __int128 v372; // xmm7
  float v373; // xmm4_4
  float v374; // xmm0_4
  char v375; // bl
  int v376; // edx
  int v377; // ecx
  int v378; // r8d
  int v379; // r9d
  __int64 v380; // rax
  int v381; // esi
  int v382; // edx
  _QWORD *v383; // rbx
  __int64 v384; // rax
  __int64 v385; // rdi
  __int64 v386; // rbp
  __int64 v387; // rcx
  int v388; // eax
  _QWORD *v389; // rcx
  __int64 v390; // rdx
  __int64 v391; // rbp
  _QWORD *v392; // rcx
  float v393; // xmm0_4
  __int64 v394; // rdx
  __int64 v395; // rbp
  _QWORD *v396; // rcx
  __int64 v397; // rdx
  __int64 v398; // rbp
  _QWORD *v399; // rcx
  __int64 v400; // rax
  int v401; // edi
  int v402; // edx
  _QWORD *v403; // rbx
  __int64 v404; // rax
  __int64 v405; // rbp
  __int64 v406; // rsi
  __int64 v407; // rcx
  int v408; // eax
  _QWORD *v409; // rcx
  __int64 v410; // rsi
  __int64 v411; // rdx
  __int64 v412; // rbp
  _QWORD *v413; // rcx
  float v414; // xmm0_4
  __int64 v415; // rdx
  __int64 v416; // rbp
  _QWORD *v417; // rcx
  __int64 v418; // rdx
  __int64 v419; // rbp
  _QWORD *v420; // rcx
  __int128 v421; // xmm12
  __int128 v422; // xmm11
  float v423; // xmm6_4
  float v424; // xmm0_4
  float v425; // xmm1_4
  float v426; // xmm2_4
  float v427; // xmm13_4
  float v428; // xmm4_4
  float v429; // xmm0_4
  float v430; // xmm5_4
  char v431; // bl
  int v432; // edx
  int v433; // ecx
  int v434; // r8d
  int v435; // r9d
  __int64 v436; // rax
  int v437; // esi
  int v438; // edx
  _QWORD *v439; // rbx
  __int64 v440; // rax
  __int64 v441; // rbp
  __int64 v442; // rdi
  __int64 v443; // rcx
  int v444; // eax
  _QWORD *v445; // rcx
  __int64 v446; // rdx
  __int64 v447; // rbp
  _QWORD *v448; // rcx
  float v449; // xmm0_4
  __int64 v450; // rdx
  __int64 v451; // rbp
  _QWORD *v452; // rcx
  __int64 v453; // rdx
  __int64 v454; // rbp
  _QWORD *v455; // rcx
  __int64 v456; // rax
  int v457; // esi
  int v458; // edx
  _QWORD *v459; // rbx
  __int64 v460; // rax
  __int64 v461; // rbp
  __int64 v462; // rdi
  __int64 v463; // rcx
  int v464; // eax
  _QWORD *v465; // rcx
  __int64 v466; // rdx
  __int64 v467; // rbp
  _QWORD *v468; // rcx
  float v469; // xmm0_4
  __int64 v470; // rdx
  __int64 v471; // rbp
  _QWORD *v472; // rcx
  __int64 v473; // rdx
  __int64 v474; // rbp
  _QWORD *v475; // rcx
  unsigned __int64 v476; // r15
  __int128 v477; // xmm7
  __int128 v478; // xmm10
  float v479; // xmm6_4
  float v480; // xmm0_4
  __int128 v481; // xmm2
  float v482; // xmm13_4
  float v483; // xmm12_4
  float v484; // xmm1_4
  float v485; // xmm0_4
  float v486; // xmm3_4
  float v487; // xmm10_4
  float v488; // xmm12_4
  int v489; // edx
  int v490; // ecx
  int v491; // r8d
  int v492; // r9d
  __int64 v493; // rax
  int v494; // esi
  int v495; // edx
  _QWORD *v496; // rbx
  __int64 v497; // rax
  __int64 v498; // rdi
  __int64 v499; // rbp
  __int64 v500; // rcx
  int v501; // eax
  _QWORD *v502; // rcx
  __int64 v503; // rdx
  __int64 v504; // rbp
  _QWORD *v505; // rcx
  float v506; // xmm0_4
  __int64 v507; // rdx
  __int64 v508; // rbp
  _QWORD *v509; // rcx
  __int64 v510; // rdx
  __int64 v511; // rbp
  _QWORD *v512; // rcx
  __int64 v513; // rax
  int v514; // esi
  int v515; // edx
  _QWORD *v516; // rbx
  __int64 v517; // rax
  __int64 v518; // rbp
  __int64 v519; // rdi
  __int64 v520; // rcx
  int v521; // eax
  _QWORD *v522; // rcx
  __int64 v523; // rdx
  __int64 v524; // rbp
  _QWORD *v525; // rcx
  float v526; // xmm0_4
  __int64 v527; // rdx
  __int64 v528; // rbp
  _QWORD *v529; // rcx
  __int64 v530; // rdx
  __int64 v531; // rbp
  _QWORD *v532; // rcx
  int v533; // edx
  int v534; // ecx
  int v535; // r8d
  int v536; // r9d
  __int64 v537; // rax
  int v538; // esi
  int v539; // edx
  _QWORD *v540; // rbx
  __int64 v541; // rax
  __int64 v542; // rbp
  __int64 v543; // rdi
  __int64 v544; // rcx
  int v545; // eax
  _QWORD *v546; // rcx
  __int64 v547; // rdx
  __int64 v548; // rbp
  _QWORD *v549; // rcx
  float v550; // xmm0_4
  __int64 v551; // rdx
  __int64 v552; // rbp
  _QWORD *v553; // rcx
  __int64 v554; // rdx
  __int64 v555; // rbp
  _QWORD *v556; // rcx
  __int64 v557; // rax
  int v558; // esi
  int v559; // edx
  _QWORD *v560; // rbx
  __int64 v561; // rax
  __int64 v562; // rbp
  __int64 v563; // rdi
  __int64 v564; // rcx
  int v565; // eax
  _QWORD *v566; // rcx
  __int64 v567; // rdx
  __int64 v568; // rbp
  _QWORD *v569; // rcx
  float v570; // xmm0_4
  __int64 v571; // rdx
  __int64 v572; // rbp
  _QWORD *v573; // rcx
  __int64 v574; // rdx
  __int64 v575; // rbp
  _QWORD *v576; // rcx
  __int64 v577; // rdx
  __int64 v578; // r8
  __int64 v579; // r9
  _BYTE *v580; // rcx
  float v581; // xmm6_4
  float v582; // xmm7_4
  int v583; // xmm1_4
  int v584; // xmm1_4
  __int64 v585; // rdx
  float v586; // xmm0_4
  double v587; // xmm1_8
  __int64 v588; // rdx
  float v589; // xmm0_4
  float v590; // xmm0_4
  char v591; // bl
  _BYTE *v592; // rcx
  int v593; // ecx
  bool v594; // al
  char *v595; // rbp
  __int64 v596; // rdi
  char v597; // dl
  _DWORD *v598; // rdx
  bool *v599; // rbx
  bool v600; // si
  __int64 v601; // r8
  __m128i v602; // xmm8
  __m128i v603; // xmm4
  __int64 v604; // rdx
  __int64 v605; // rdi
  __m128i si128; // xmm2
  __m128i v607; // xmm6
  __m128i v608; // xmm8
  __m128i v609; // xmm4
  __int64 v610; // rbx
  __m128d v611; // xmm1
  _BYTE *v612; // rbx
  char v613; // cl
  unsigned int v614; // esi
  __int64 v615; // rbp
  __int64 v616; // rcx
  unsigned int v617; // eax
  __int64 v618; // rsi
  unsigned __int64 v619; // rdi
  __int64 v620; // rcx
  unsigned int v621; // eax
  _BYTE *v622; // rcx
  unsigned __int64 v623; // rdi
  __int64 v624; // rcx
  _BYTE *v625; // rcx
  __int64 v626; // rdx
  float v627; // xmm0_4
  float v628; // xmm0_4
  __int64 air_movement_2; // r15
  char v630; // dl
  __int64 UnitWeaponInfo; // rbx
  char v632; // dl
  _BYTE *v633; // rcx
  char v634; // dl
  __int64 v635; // rdx
  char v636; // bl
  __int64 v637; // r8
  __int64 v638; // r9
  char *v639; // rcx
  float v640; // xmm6_4
  __m128 v641; // xmm0
  __m128 v642; // xmm1
  float v643; // xmm1_4
  __int64 v644; // rdx
  _DWORD *v645; // rdx
  char *v646; // rbp
  char v647; // bl
  __int64 v648; // rdx
  __int64 v649; // r8
  _DWORD *v650; // r9
  float *v651; // rcx
  int v652; // ebp
  float v653; // xmm7_4
  bool v654; // dl
  __int64 v655; // rdx
  bool v656; // dl
  int v657; // eax
  __int64 v658; // rdx
  float *v659; // rcx
  float v660; // xmm0_4
  __m128 v661; // xmm0
  char v662; // al
  int v663; // r14d
  int v664; // r13d
  int v665; // esi
  int v666; // ebp
  int v667; // edi
  _BYTE *v668; // rcx
  char v669; // al
  __int64 v670; // rbx
  __int64 v671; // r8
  int v672; // eax
  int v673; // r15d
  unsigned int v674; // ecx
  __int64 v675; // rdx
  __int64 v676; // r8
  __int64 v677; // rax
  _BYTE *v678; // rcx
  char v679; // dl
  int v680; // r14d
  __int64 v681; // rax
  int v682; // esi
  __int64 v683; // rbp
  size_t v684; // rax
  const char *v685; // rdx
  __int64 v686; // rcx
  size_t v687; // rax
  __int64 v688; // rdx
  __int64 v689; // rax
  __int64 v690; // rcx
  __int64 v691; // rax
  __int64 v692; // rcx
  __int64 v693; // rdi
  __int64 v694; // rbx
  __int64 v695; // rbp
  _BYTE *v696; // rcx
  char v697; // dl
  __int64 v698; // rax
  int v699; // r8d
  int v700; // r9d
  unsigned int v701; // esi
  __int64 v702; // rbp
  size_t v703; // rax
  const char *v704; // rdx
  size_t v705; // rax
  __int64 v706; // rdx
  __int64 v707; // rax
  __int64 v708; // rcx
  __int64 v709; // rax
  __int64 v710; // rcx
  __int64 v711; // rdi
  __int64 v712; // rbx
  __int64 v713; // rbp
  _BYTE *v714; // rcx
  char v715; // dl
  __int64 v716; // rax
  __int64 v717; // rdx
  unsigned int v718; // esi
  __int64 v719; // rbp
  size_t v720; // rax
  const char *v721; // rdx
  size_t v722; // rax
  __int64 v723; // rax
  __int64 v724; // rcx
  __int64 v725; // rax
  __int64 v726; // rcx
  __int64 v727; // rdi
  __int64 v728; // rbx
  __int64 v729; // rbp
  _BYTE *v730; // rcx
  char v731; // dl
  unsigned int v732; // esi
  int v733; // r14d
  __int64 v734; // rbp
  int v735; // r14d
  float v736; // xmm0_4
  __int32 v737; // xmm12_4
  float v738; // xmm13_4
  float v739; // xmm0_4
  int v740; // eax
  __int64 v741; // rbx
  __m128i v742; // xmm0
  __m128i v743; // xmm1
  unsigned __int8 *v744; // rdx
  __int64 v745; // rbx
  __m128i v746; // xmm3
  __m128i v747; // xmm0
  __int64 v748; // rbp
  _BYTE *v749; // rcx
  _BYTE *v750; // rcx
  char v751; // dl
  __int64 v752; // rdx
  float v753; // xmm15_4
  int v754; // xmm11_4
  __m128 v755; // xmm0
  float v756; // xmm14_4
  __m128 v757; // xmm13
  float v758; // xmm9_4
  float v759; // xmm10_4
  float v760; // xmm6_4
  float v761; // xmm8_4
  __int64 v762; // rdx
  __int64 v763; // r8
  __int64 v764; // r9
  float v765; // xmm6_4
  float v766; // xmm1_4
  float *v767; // rcx
  __int64 v768; // rdx
  float v769; // xmm0_4
  __int64 v770; // rax
  __int64 v771; // rbx
  __int64 v772; // rdx
  __m128 v773; // xmm1
  __int64 v774; // rdx
  _DWORD *v775; // rcx
  __int32 v776; // xmm0_4
  __int64 v777; // rax
  __int64 v778; // rdx
  __int64 v779; // rbp
  size_t v780; // rax
  const char *v781; // rdx
  size_t v782; // rax
  __int64 v783; // rax
  __int64 v784; // rcx
  __int64 v785; // rax
  __int64 v786; // rcx
  __int64 v787; // rdi
  __int64 v788; // rbx
  __int64 v789; // rbp
  _BYTE *v790; // rcx
  char v791; // dl
  int v792; // esi
  int v793; // r14d
  __int64 v794; // rdx
  int v795; // r14d
  float v796; // xmm0_4
  __int32 v797; // xmm12_4
  float v798; // xmm13_4
  float v799; // xmm0_4
  int v800; // eax
  __int32 v801; // xmm0_4
  __int64 v802; // rax
  __int64 v803; // rbp
  size_t v804; // rax
  const char *v805; // rdx
  size_t v806; // rax
  __int64 v807; // rdx
  __int64 v808; // rax
  __int64 v809; // rcx
  __int64 v810; // rax
  __int64 v811; // rcx
  __int64 v812; // rdi
  __int64 v813; // rbx
  __int64 v814; // rbp
  _BYTE *v815; // rcx
  char v816; // dl
  int v817; // r14d
  float v818; // xmm0_4
  __int32 v819; // xmm12_4
  float v820; // xmm13_4
  float v821; // xmm0_4
  __int32 v822; // xmm0_4
  size_t v823; // rax
  __int64 v824; // rsi
  __int64 v825; // rax
  const char *v826; // rdx
  int v827; // esi
  size_t v828; // rax
  __int64 v829; // rdx
  __int64 v830; // rax
  __int64 v831; // rcx
  __int64 v832; // rax
  __int64 v833; // rcx
  __int64 v834; // rdi
  __int64 v835; // rbx
  __int64 v836; // rbp
  _BYTE *v837; // rcx
  char v838; // dl
  char v839; // r14
  __int64 v840; // rbp
  __int64 v841; // rdi
  __int64 v842; // rsi
  _BYTE *v843; // rbx
  __int64 v844; // rax
  int v845; // ebx
  unsigned int v846; // ebx
  float v847; // r14d
  _BYTE *v848; // rcx
  char v849; // dl
  _BYTE *v850; // rcx
  char v851; // dl
  __int64 v852; // rsi
  __int64 v853; // rbx
  __int64 v854; // rbp
  int v855; // edi
  _BYTE *v856; // rcx
  unsigned int v857; // eax
  __int64 v858; // rdx
  _DWORD *v859; // rcx
  __int64 v860; // rax
  __int64 v861; // rdi
  __int64 v862; // rsi
  __int64 v863; // rbp
  _QWORD *v864; // rbx
  __int64 v865; // rax
  _BYTE *v866; // rcx
  char v867; // bl
  int *v868; // rax
  int v869; // esi
  __int64 v870; // rcx
  float v871; // xmm6_4
  __int64 v872; // rdx
  _DWORD *v873; // rcx
  __int64 v874; // rdx
  __int64 v875; // rdx
  char v876; // bl
  _DWORD *v877; // rcx
  unsigned int v878; // r15d
  __int64 v879; // r8
  __int64 v880; // r9
  __int64 v881; // r13
  _BYTE *v882; // rbp
  __int64 v883; // rdi
  unsigned __int64 v884; // rsi
  float v885; // xmm6_4
  float v886; // xmm8_4
  int v887; // xmm9_4
  float v888; // xmm10_4
  __int64 v889; // rbx
  int v890; // eax
  __int64 v891; // rcx
  __int64 v892; // r14
  int v893; // r8d
  int v894; // r9d
  __m128 v895; // xmm2
  __m128 v896; // xmm1
  float v897; // xmm1_4
  __m128 v898; // xmm3
  __m128 v899; // xmm2
  float v900; // xmm2_4
  __int64 v901; // rax
  __int64 v902; // rcx
  float v903; // xmm3_4
  double v904; // xmm0_8
  float v905; // xmm7_4
  __int64 v906; // rcx
  __int64 v907; // rdx
  float v908; // xmm2_4
  __int64 v909; // rdx
  char v910; // al
  int v911; // edx
  int v912; // ecx
  int v913; // r8d
  int v914; // r9d
  float *v915; // rcx
  __int64 v916; // rdx
  __int64 v917; // r13
  unsigned int v918; // ebx
  __int64 v919; // rdx
  unsigned __int64 *v920; // rdi
  __int64 v921; // rdx
  int v922; // eax
  float *v923; // rdx
  float v924; // xmm0_4
  float v925; // xmm0_4
  float v926; // xmm0_4
  char v927; // al
  unsigned __int8 *v928; // rcx
  __int64 v929; // rdx
  __int64 v930; // rbp
  __int64 v931; // rdx
  _DWORD *v932; // rcx
  unsigned __int8 *v933; // rax
  __int64 v934; // rcx
  __int64 v935; // rdx
  __int64 v936; // rdx
  _DWORD *v937; // rcx
  __int64 v938; // rdx
  __int64 v939; // rsi
  __int64 v940; // rdx
  __int64 v941; // rdx
  __int64 v942; // rdx
  __int64 v943; // rdx
  float v944; // xmm1_4
  float *v945; // rcx
  __int64 v946; // r14
  __int64 v947; // rax
  __int64 v948; // rbp
  __int64 v949; // rdi
  __int64 v950; // rsi
  __int64 v951; // rbx
  _DWORD *v952; // rcx
  _BYTE *v953; // rax
  float v954; // xmm2_4
  float v955; // xmm1_4
  _DWORD *v956; // rdx
  int *v957; // rbp
  int v958; // xmm2_4
  float v959; // xmm2_4
  char v960; // dl
  __int32 v961; // xmm1_4
  __int64 mUnit__; // [rsp+50h] [rbp-498h] BYREF
  float v964; // [rsp+5Ch] [rbp-48Ch]
  unsigned __int8 v965; // [rsp+63h] [rbp-485h]
  float v966; // [rsp+64h] [rbp-484h]
  float v967; // [rsp+68h] [rbp-480h]
  float v968; // [rsp+6Ch] [rbp-47Ch]
  float v969; // [rsp+70h] [rbp-478h]
  float v970; // [rsp+74h] [rbp-474h]
  float v971; // [rsp+78h] [rbp-470h] BYREF
  float v972; // [rsp+7Ch] [rbp-46Ch]
  float v973; // [rsp+80h] [rbp-468h]
  __int64 v974; // [rsp+88h] [rbp-460h] BYREF
  __int64 v975; // [rsp+90h] [rbp-458h]
  __int128 v976; // [rsp+98h] [rbp-450h]
  float v977; // [rsp+A8h] [rbp-440h]
  bool v978; // [rsp+ADh] [rbp-43Bh] BYREF
  bool v979; // [rsp+AEh] [rbp-43Ah] BYREF
  unsigned __int8 v980; // [rsp+AFh] [rbp-439h] BYREF
  __int128 v981; // [rsp+B0h] [rbp-438h] BYREF
  float v982; // [rsp+CCh] [rbp-41Ch]
  __int64 v983; // [rsp+D0h] [rbp-418h] BYREF
  float v984; // [rsp+D8h] [rbp-410h]
  float v985; // [rsp+E0h] [rbp-408h] BYREF
  float v986; // [rsp+E4h] [rbp-404h]
  __int64 v987; // [rsp+E8h] [rbp-400h] BYREF
  float v988; // [rsp+F4h] [rbp-3F4h]
  float v989; // [rsp+F8h] [rbp-3F0h]
  float v990; // [rsp+FCh] [rbp-3ECh]
  __int64 v991; // [rsp+100h] [rbp-3E8h]
  __int64 v992; // [rsp+108h] [rbp-3E0h]
  float v993; // [rsp+110h] [rbp-3D8h]
  float v994; // [rsp+114h] [rbp-3D4h]
  float v995; // [rsp+118h] [rbp-3D0h] BYREF
  int v996; // [rsp+11Ch] [rbp-3CCh] BYREF
  __int64 v997; // [rsp+120h] [rbp-3C8h]
  unsigned int v998; // [rsp+12Ch] [rbp-3BCh] BYREF
  __int64 air_movement_; // [rsp+130h] [rbp-3B8h]
  unsigned __int64 *v1000; // [rsp+138h] [rbp-3B0h]
  float v1001; // [rsp+140h] [rbp-3A8h]
  float ZPosition_; // [rsp+144h] [rbp-3A4h]
  __int64 v1003; // [rsp+148h] [rbp-3A0h]
  char Str[16]; // [rsp+150h] [rbp-398h] BYREF
  __int128 v1005; // [rsp+160h] [rbp-388h]
  __int128 v1006; // [rsp+170h] [rbp-378h] BYREF
  __int128 v1007; // [rsp+180h] [rbp-368h]
  __int128 v1008; // [rsp+190h] [rbp-358h]
  float v1009; // [rsp+1D0h] [rbp-318h]
  int v1010; // [rsp+1D4h] [rbp-314h]
  float v1011; // [rsp+1D8h] [rbp-310h]
  float v1012; // [rsp+1DCh] [rbp-30Ch]
  __int128 v1013; // [rsp+1E0h] [rbp-308h]
  float XPosition_; // [rsp+1F0h] [rbp-2F8h] BYREF
  float YPosition_; // [rsp+1F4h] [rbp-2F4h]
  float ZPosition_2; // [rsp+1F8h] [rbp-2F0h]
  __int128 v1017; // [rsp+200h] [rbp-2E8h] BYREF
  int v1018; // [rsp+214h] [rbp-2D4h]
  int v1019; // [rsp+218h] [rbp-2D0h] BYREF
  int v1020; // [rsp+21Ch] [rbp-2CCh] BYREF
  __int128 v1021; // [rsp+220h] [rbp-2C8h] BYREF
  __int64 v1022; // [rsp+230h] [rbp-2B8h]
  __int128 v1023; // [rsp+238h] [rbp-2B0h]
  __int64 v1024; // [rsp+248h] [rbp-2A0h]
  __int64 v1025; // [rsp+250h] [rbp-298h]
  unsigned __int8 v1026; // [rsp+258h] [rbp-290h]
  __int64 v1027; // [rsp+25Ch] [rbp-28Ch]
  int v1028; // [rsp+264h] [rbp-284h]
  __int128 v1029; // [rsp+268h] [rbp-280h]
  __int64 v1030; // [rsp+278h] [rbp-270h]
  __int128 v1031; // [rsp+280h] [rbp-268h]
  __int64 v1032; // [rsp+290h] [rbp-258h]
  int v1033; // [rsp+298h] [rbp-250h]
  __int16 v1034; // [rsp+29Ch] [rbp-24Ch]
  __int64 v1035; // [rsp+2A0h] [rbp-248h]
  int v1036; // [rsp+2A8h] [rbp-240h]
  __int64 v1037; // [rsp+2ACh] [rbp-23Ch]
  __int16 v1038; // [rsp+2B4h] [rbp-234h]
  char v1039; // [rsp+2B6h] [rbp-232h]
  __int128 v1040; // [rsp+2B8h] [rbp-230h]
  unsigned __int8 v1041; // [rsp+2C8h] [rbp-220h]
  int v1042; // [rsp+2CCh] [rbp-21Ch]
  __int128 v1043; // [rsp+2D0h] [rbp-218h]
  char v1044; // [rsp+2E0h] [rbp-208h]
  __int64 v1045; // [rsp+2E4h] [rbp-204h]
  unsigned __int8 v1046; // [rsp+2ECh] [rbp-1FCh]
  __int64 v1047; // [rsp+2F0h] [rbp-1F8h]
  unsigned __int8 v1048; // [rsp+2F8h] [rbp-1F0h]
  __int128 v1049; // [rsp+2FCh] [rbp-1ECh]
  unsigned __int8 v1050; // [rsp+30Ch] [rbp-1DCh]
  int v1051; // [rsp+310h] [rbp-1D8h]
  __int128 v1052; // [rsp+314h] [rbp-1D4h]
  unsigned __int8 v1053; // [rsp+324h] [rbp-1C4h]
  int v1054; // [rsp+328h] [rbp-1C0h]
  __int128 v1055; // [rsp+32Ch] [rbp-1BCh]
  __int64 v1056; // [rsp+33Ch] [rbp-1ACh]
  __int64 v1057; // [rsp+344h] [rbp-1A4h]
  __int16 v1058; // [rsp+34Ch] [rbp-19Ch]
  __int128 v1059; // [rsp+350h] [rbp-198h] BYREF
  __int64 v1060[2]; // [rsp+360h] [rbp-188h] BYREF
  __int128 v1061; // [rsp+370h] [rbp-178h] BYREF
  char v1062[64]; // [rsp+380h] [rbp-168h] BYREF
  char v1063[64]; // [rsp+3C0h] [rbp-128h] BYREF

  v8 = v6;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, a2, a3, a4);
  if ( !*(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x130i64) )
    return *v5.m128_u64;
  if ( *(game + 0xCD) )
    return *v5.m128_u64;
  mUnit_ = *&mUnit;
  if ( !*&mUnit || *(*&mUnit + 0x10B0i64) )
    return *v5.m128_u64;
  mUnit__ = *&mUnit;
  if ( (dword_4B19A88 & 0x4000) != 0 )
  {
    v13 = 0;
  }
  else
  {
    v13 = 1;
    if ( !*(*&mUnit + 0x2DD8i64) )
      v13 = *(*(game + 0x440) + 0x3F4i64) != 0xC;
  }
  hud = *(game + 0x430);
  if ( !byte_4B1C820 )
    goto LABEL_15;
  v15 = (qword_4B1C514 >> 2) & 3;
  if ( v15 == 1 )
  {
    v16 = hud + 0xD4;
  }
  else
  {
    if ( !v15 )
    {
LABEL_15:
      v16 = hud + 0xD3;
      goto LABEL_18;
    }
    v16 = hud + 0xD5;
  }
LABEL_18:
  v17 = !v13;
  v18 = 0xFFFFFFFFFFFFFFFBui64;
  if ( v17 )
    v18 = (4 * (*v16 != 3)) | 0xFFFFFFFFFFFFFFFBui64;
  *a1 = v18;
  if ( dword_4AD08B0 > *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4i64) )
  {
    Init_thread_header(&dword_4AD08B0);
    if ( dword_4AD08B0 == 0xFFFFFFFF )
    {
      v5.m128_u64[0] = 0i64;
      xmmword_4AD0868 = 0i64;
      dword_4AD0878 = 0xFFFFFFFF;
      qword_4AD087C = 0i64;
      *(&qword_4AD087C + 5) = 0i64;
      qword_4AD088C = 0x3F8000003F800000i64;
      dword_4AD0894 = 0x3F800000;
      xmmword_4AD0898 = 0i64;
      qword_4AD08A8 = 0xFFFFFFFF00000000ui64;
      atexit(sub_3643B0);
      Init_thread_footer(&dword_4AD08B0);
    }
  }
  v19 = *(mUnit_ + 0x1120);
  v20 = &xmmword_4AD0868;
  if ( v19 )
  {
    v21 = *(mUnit_ + 0x13C);
    if ( *(v19 + 0x2C8) > v21 )
      v20 = (*(v19 + 0x2B8) + 0x48 * v21);
  }
  v22 = *(v20 + 0x10);
  if ( (v22 == 3 || !v22)
    && (v23 = *(game + 0x440), v24 = *(v23 + 0x3F0), v24 < *(v23 + 0x278))
    && (v25 = *(*(v23 + 0x268) + 8 * v24)) != 0
    && *(v25 + 0x28) == 5 )
  {
    LOBYTE(v4) = (*(mUnit_ + 0x1083) & 8) == 0;
  }
  else
  {
    v4 = 0;
  }
  if ( (*(mUnit_ + 0x1058) & 0x7000014) != 0
    || *(mUnit__ + 0x10A8) > 1u
    || ((game_optics = *(game + 0x498), !*(game_optics + 0x27ED)) || !*(*(game + 0x430) + 0xD5i64))
    && (((*(mUnit__ + 0x1083) & 8) == 0) & ~v4) != 0
    || byte_4B19A94
    && (!*(game_optics + 0x27EE) || !*(*(game + 0x430) + 0xD6i64))
    && !(v4 | ((*(mUnit__ + 0x1083) & 8) >> 3)) )
  {
    if ( !byte_4B19A60 )
    {
      v49 = qword_4B173B8;
      if ( *(qword_4B173B8 + 0xB42) != 5 || *(qword_4B173B8 + 0x2D00) )
      {
        *(qword_4B173B8 + 0xB42) = 5;
        v49[0x2D00] = 0;
        sub_224C10(v49 + 0x2CD8);
        v49 = qword_4B173B8;
      }
      if ( *(v49 + 0xAE0) != 5 || v49[0x2B78] )
      {
        *(v49 + 0xAE0) = 5;
        v49[0x2B78] = 0;
        sub_224C10(v49 + 0x2B50);
        v49 = qword_4B173B8;
      }
      if ( *(v49 + 0xEA6) != 5 || v49[0x3A90] )
      {
        *(v49 + 0xEA6) = 5;
        v49[0x3A90] = 0;
        sub_224C10(v49 + 0x3A68);
        v49 = qword_4B173B8;
      }
      if ( *(v49 + 0x974) != 5 || v49[0x25C8] )
      {
        *(v49 + 0x974) = 5;
        v49[0x25C8] = 0;
        sub_224C10(v49 + 0x25A0);
        v49 = qword_4B173B8;
      }
      if ( *(v49 + 0x982) != 5 || v49[0x2600] )
      {
        *(v49 + 0x982) = 5;
        v49[0x2600] = 0;
        sub_224C10(v49 + 0x25D8);
        v49 = qword_4B173B8;
      }
      if ( *(v49 + 0x990) != 5 || v49[0x2638] )
      {
        *(v49 + 0x990) = 5;
        v49[0x2638] = 0;
        sub_224C10(v49 + 0x2610);
        v49 = qword_4B173B8;
      }
      if ( *(v49 + 0x9AC) != 5 || v49[0x26A8] )
      {
        *(v49 + 0x9AC) = 5;
        v49[0x26A8] = 0;
        sub_224C10(v49 + 0x2680);
        v49 = qword_4B173B8;
      }
      if ( *(v49 + 0x99E) != 5 || v49[0x2670] )
      {
        *(v49 + 0x99E) = 5;
        v49[0x2670] = 0;
        sub_224C10(v49 + 0x2648);
        v49 = qword_4B173B8;
      }
      if ( *(v49 + 0x9BA) != 5 || v49[0x26E0] )
      {
        *(v49 + 0x9BA) = 5;
        v49[0x26E0] = 0;
        sub_224C10(v49 + 0x26B8);
        v49 = qword_4B173B8;
      }
      if ( *(v49 + 0x9C8) != 5 || v49[0x2718] )
      {
        *(v49 + 0x9C8) = 5;
        v49[0x2718] = 0;
        sub_224C10(v49 + 0x26F0);
        v49 = qword_4B173B8;
      }
      if ( *(v49 + 0xB88) != 5 || v49[0x2E18] )
      {
        *(v49 + 0xB88) = 5;
        v49[0x2E18] = 0;
        sub_224C10(v49 + 0x2DF0);
        v49 = qword_4B173B8;
      }
      if ( *(v49 + 0x10F2) != 5 || v49[0x43C0] )
      {
        *(v49 + 0x10F2) = 5;
        v49[0x43C0] = 0;
        sub_224C10(v49 + 0x4398);
        v49 = qword_4B173B8;
      }
      sub_224C10(v49 + 0x4788);
      sub_224C10(qword_4B173B8 + 0x4830);
      byte_4B19A60 = 1;
    }
    return *v5.m128_u64;
  }
  byte_4B19A60 = 0;
  v27 = some_ballistics_thing(*(game + 0x630));
  v5.m128_u64[0] = 0xFFFFFFFFFFFFFFFFui64;
  v1021 = 0xFFFFFFFFFFFFFFFFui64;
  v1022 = 0xFFFFFFFFFFFFFFFFui64;
  v1023 = xmmword_44A0AF0;
  v1024 = 0xFFFFFFFFFFFFFFFFui64;
  v1027 = 0i64;
  v1028 = 0;
  v1025 = 0i64;
  v1026 = 0;
  v1029 = 0xFFFFFFFFFFFFFFFFui64;
  v1030 = 0xFFFFFFFFFFFFFFFFui64;
  v1031 = xmmword_44A0AF0;
  v1032 = 0xFFFFFFFFFFFFFFFFui64;
  v1035 = 0i64;
  v1036 = 0;
  v1033 = 0;
  v1034 = 0;
  v1037 = 0xFFFFFFFFFFFFFFFFui64;
  v1038 = 0;
  v1039 = 0;
  v1040 = 0xFFFFFFFFFFFFFFFFui64;
  v1041 = 0;
  v1042 = 0;
  v1043 = 0xFFFFFFFFFFFFFFFFui64;
  v1044 = 0;
  v1045 = 0xFFFFFFFFFFFFFFFFui64;
  v1046 = 0;
  v1047 = 0xFFFFFFFFFFFFFFFFui64;
  v1048 = 0;
  v1049 = 0xFFFFFFFFFFFFFFFFui64;
  v1050 = 0;
  v1051 = 0;
  v1052 = 0xFFFFFFFFFFFFFFFFui64;
  v1053 = 0;
  v1054 = 0;
  v1055 = 0xFFFFFFFFFFFFFFFFui64;
  v1056 = 0xFFFFFFFFFFFFFFFFui64;
  v1057 = 0i64;
  v1058 = 0;
  sub_B7AC40(mUnit__, &v1021);
  v1020 = 0x500;
  v1019 = 0x2D0;
  off_4B75408(&v1020, &v1019, 0i64, 0i64);
  off_4B75438(1i64, v1063);
  off_4B75438(2i64, v1062);
  air_movement = *(mUnit__ + 0x9D0);
  if ( !air_movement )
    return *v5.m128_u64;
  v977 = *(mUnit__ + 0x99C);
  v29 = *(mUnit__ + 0x9A0);
  v30 = *(mUnit__ + 0x9A4);
  v31 = *(mUnit__ + 0x9A8);
  v32 = *(mUnit__ + 0x9AC);
  v990 = *(mUnit__ + 0x9B0);
  v1009 = *(mUnit__ + 0x9B4);
  v33 = *(mUnit__ + 0x9B8);
  v34 = *(mUnit__ + 0x9BC);
  XPosition = *(mUnit__ + 0x9C0);
  YPosition = *(mUnit__ + 0x9C4);
  ZPosition = *(mUnit__ + 0x9C8);
  XPosition_ = *&XPosition;
  YPosition_ = YPosition;
  ZPosition_ = ZPosition;
  ZPosition_2 = ZPosition;
  v5.m128_u64[0] = 0i64;
  v1017 = 0i64;
  v1059 = 0i64;
  v38 = 0.0;
  v964 = 0.0;
  v39 = 0.0;
  if ( v27 )
  {
    v40 = sub_4612A0(*(mUnit__ + 0x2DD8), 2i64, &v1017);
    LOBYTE(v41) = 1;
    v964 = v41;
    if ( !v40 && !sub_4612A0(*(mUnit__ + 0x2DD8), 5i64, &v1017) )
      LODWORD(v964) = sub_4612A0(*(mUnit__ + 0x2DD8), 6i64, &v1017);
    LODWORD(v39) = sub_4612A0(*(mUnit__ + 0x2DD8), 9i64, &v1059);
    v38 = 0.0;
  }
  v42 = v27;
  v994 = v39;
  v43 = *(game + 0x440);
  v44 = *(v43 + 0x3F0);
  v45 = *(v43 + 0x3F4);
  if ( v44 < *(v43 + 0x278) )
    v38 = *(*(*(v43 + 0x268) + 8 * v44) + 0x28i64);
  v46 = v45 - 1;
  v965 = v42;
  air_movement_ = air_movement;
  v991 = v45;
  v1010 = v4;
  v1011 = v38;
  if ( (v45 - 1) < 0xC )
  {
    v47 = 0x909;
    if ( _bittest(&v47, v46) )
    {
      v48 = 1;
      LODWORD(v997) = 0;
      goto LABEL_97;
    }
  }
  if ( v45 != 0xE || LODWORD(v38) != 4 )
  {
    if ( v45 == 0xE && LODWORD(v38) == 5 )
    {
      LODWORD(v997) = 0;
      LOBYTE(v4) = 1;
      v970 = 0.0;
      v966 = 0.0;
      LODWORD(v992) = 0;
      v967 = 0.0;
      v48 = 0;
      goto LABEL_99;
    }
    v48 = 1;
    switch ( v45 )
    {
      case 2:
        LODWORD(v997) = 0;
        v970 = 0.0;
        v966 = 0.0;
        LODWORD(v992) = 0;
        LOBYTE(v46) = 1;
        v967 = *&v46;
        goto LABEL_98;
      case 0xB:
        LOBYTE(v46) = 1;
        v970 = *&v46;
        LODWORD(v997) = 0;
        v966 = 0.0;
        goto LABEL_53;
      case 0x13:
        LOBYTE(v46) = 1;
        LODWORD(v992) = v46;
        LODWORD(v997) = 0;
        v970 = 0.0;
        v966 = 0.0;
        goto LABEL_54;
    }
    LOBYTE(v46) = byte_4B19A94 != 0;
    LODWORD(v997) = v46;
LABEL_97:
    v970 = 0.0;
    v966 = 0.0;
    LODWORD(v992) = 0;
    v967 = 0.0;
    goto LABEL_98;
  }
  LODWORD(v997) = 0;
  LOBYTE(v46) = 1;
  v966 = *&v46;
  v970 = 0.0;
LABEL_53:
  LODWORD(v992) = 0;
LABEL_54:
  v967 = 0.0;
  v48 = 1;
LABEL_98:
  v4 = 0;
LABEL_99:
  v50 = v45 == 0xC || v45 == 1;
  LOBYTE(v1012) = v45 == 9;
  LOBYTE(v993) = v45 == 4;
  v51 = v45 == 4 || v45 == 9;
  v52 = sub_3476D0(mUnit__);
  v55 = (*(mUnit__ + 0x1080) & 0x8000000u) >> 0x1B;
  LOBYTE(v55) = v4 & v55;
  v56 = v4;
  if ( v48 )
  {
    v57 = v965;
    v58 = v992;
  }
  else
  {
    v57 = v965;
    v58 = v992;
    if ( (*(mUnit__ + 0x1080) & 0x8000000) == 0 )
      LOBYTE(v55) = (*(v52 + 0x40) & 0xFFFFFFFD) == 0 || *(v52 + 0x40) == 3;
  }
  v59 = v51 || v50;
  v60 = qword_4B173B8;
  v17 = *(qword_4B173B8 + 0x974) == 5;
  v1003 = a4;
  v1000 = a1;
  LODWORD(v992) = v55;
  if ( !v17 || *(qword_4B173B8 + 0x25C8) != v59 )
  {
    *(qword_4B173B8 + 0x974) = 5;
    v60[0x25C8] = v59;
    v61 = v56;
    sub_224C10(v60 + 0x25A0);
    v56 = v61;
    v60 = qword_4B173B8;
  }
  v62 = LOBYTE(v964);
  v63 = v997;
  v64 = LOBYTE(v970);
  v65 = v56 & (v1010 ^ 1);
  v17 = *(v60 + 0x982) == 5;
  v66 = LOBYTE(v994);
  v1018 = v56;
  if ( !v17 || v60[0x2600] != v65 )
  {
    *(v60 + 0x982) = 5;
    v60[0x2600] = v65;
    sub_224C10(v60 + 0x25D8);
    v60 = qword_4B173B8;
  }
  if ( *(v60 + 0x990) != 5 || v60[0x2638] != LOBYTE(v967) )
  {
    *(v60 + 0x990) = 5;
    v60[0x2638] = LOBYTE(v967);
    sub_224C10(v60 + 0x2610);
    v60 = qword_4B173B8;
  }
  if ( *(v60 + 0x99E) != 5 || v60[0x2670] != v58 )
  {
    *(v60 + 0x99E) = 5;
    v60[0x2670] = v58;
    sub_224C10(v60 + 0x2648);
    v60 = qword_4B173B8;
  }
  if ( *(v60 + 0x9AC) != 5 || v60[0x26A8] != LOBYTE(v966) )
  {
    *(v60 + 0x9AC) = 5;
    v60[0x26A8] = LOBYTE(v966);
    sub_224C10(v60 + 0x2680);
    v60 = qword_4B173B8;
  }
  if ( *(v60 + 0x111C) != 5 || v60[0x4468] != v57 )
  {
    *(v60 + 0x111C) = 5;
    v60[0x4468] = v57;
    sub_224C10(v60 + 0x4440);
    v60 = qword_4B173B8;
  }
  if ( *(v60 + 0x112A) != 5 || v60[0x44A0] != v62 )
  {
    *(v60 + 0x112A) = 5;
    v60[0x44A0] = v62;
    sub_224C10(v60 + 0x4478);
    v60 = qword_4B173B8;
  }
  if ( *(v60 + 0x1138) != 5 || v60[0x44D8] != v66 )
  {
    *(v60 + 0x1138) = 5;
    v60[0x44D8] = v66;
    sub_224C10(v60 + 0x44B0);
    v60 = qword_4B173B8;
  }
  if ( *(v60 + 0x9BA) != 5 || v60[0x26E0] != v64 )
  {
    *(v60 + 0x9BA) = 5;
    v60[0x26E0] = v64;
    sub_224C10(v60 + 0x26B8);
    v60 = qword_4B173B8;
  }
  v67 = v991;
  if ( *(v60 + 0x9C8) != 5 || v60[0x2718] != v63 )
  {
    *(v60 + 0x9C8) = 5;
    v60[0x2718] = v63;
    sub_224C10(v60 + 0x26F0);
    v67 = v991;
  }
  if ( v67 > 0xC || (v68 = 0x1212, !_bittest(&v68, v67)) )
  {
    if ( ((v1010 | (v63 | v62 | v66 | v65 | LOBYTE(v967) | LOBYTE(v966) | v58 | v64)) & 1) == 0 )
      return *v5.m128_u64;
  }
  v69 = qword_4B173B8;
  v70 = *(game + 0x498);
  v71 = v70[0x27EF];
  if ( *(qword_4B173B8 + 0x119A) != 5 || *(qword_4B173B8 + 0x4660) != v71 )
  {
    *(qword_4B173B8 + 0x119A) = 5;
    v69[0x4660] = v71;
    sub_224C10(v69 + 0x4638);
    v69 = qword_4B173B8;
    v70 = *(game + 0x498);
  }
  v72 = v1003;
  v73 = v1000;
  v74 = v70[0x27F0];
  if ( *(v69 + 0x11A8) != 5 || v69[0x4698] != v74 )
  {
    *(v69 + 0x11A8) = 5;
    v69[0x4698] = v74;
    sub_224C10(v69 + 0x4670);
    v69 = qword_4B173B8;
    v70 = *(game + 0x498);
  }
  v75 = v70[0x27F1];
  if ( *(v69 + 0x11B6) != 5 || v69[0x46D0] != v75 )
  {
    *(v69 + 0x11B6) = 5;
    v69[0x46D0] = v75;
    sub_224C10(v69 + 0x46A8);
    v69 = qword_4B173B8;
    v70 = *(game + 0x498);
  }
  v76 = v70[0x27F2];
  if ( *(v69 + 0x11C4) != 5 || v69[0x4708] != v76 )
  {
    *(v69 + 0x11C4) = 5;
    v69[0x4708] = v76;
    sub_224C10(v69 + 0x46E0);
    v69 = qword_4B173B8;
    v70 = *(game + 0x498);
  }
  v77 = v70[0x27F3];
  if ( *(v69 + 0x11D2) != 5 || v69[0x4740] != v77 )
  {
    *(v69 + 0x11D2) = 5;
    v69[0x4740] = v77;
    sub_224C10(v69 + 0x4718);
    v69 = qword_4B173B8;
    v70 = *(game + 0x498);
  }
  v78 = v70[0x27F4] != 0;
  v79 = *v73;
  LOBYTE(v79) = v78 & ((v79 & 4) >> 2);
  if ( *(v69 + 0x11E0) == 5 && v69[0x4778] == v79 )
  {
    if ( v62 )
      goto LABEL_153;
LABEL_156:
    if ( !v66 )
      goto LABEL_159;
    goto LABEL_157;
  }
  *(v69 + 0x11E0) = 5;
  v69[0x4778] = v79;
  sub_224C10(v69 + 0x4750);
  if ( !v62 )
    goto LABEL_156;
LABEL_153:
  sub_B8B560("updateMfdSightPosSize", v79, v53, v54, SBYTE12(v1017));
  if ( !v66 )
    goto LABEL_159;
LABEL_157:
  if ( *(mUnit__ + 0x2DD8) )
    sub_B8B560("updateIlsPosSize", v79, v53, v54, SBYTE12(v1059));
LABEL_159:
  v17 = *(*(*(mUnit__ + 0x11D0) + 0x300i64) + 0x38i64) == 0;
  v989 = v33;
  v988 = *&v34;
  if ( v17 || (*(mUnit__ + 0x1083) & 8) == 0 && !*(*(game + 0x498) + 0x27F1i64) || byte_4AD1088 )
  {
    v80 = qword_4B173B8;
    if ( *(qword_4B173B8 + 0xB42) != 5 || *(qword_4B173B8 + 0x2D00) )
    {
      *(qword_4B173B8 + 0xB42) = 5;
      v80[0x2D00] = 0;
      sub_224C10(v80 + 0x2CD8);
    }
    goto LABEL_252;
  }
  v971 = 0.0;
  if ( !sub_425A90(mUnit__, 3, &v971, Str, 0) )
    goto LABEL_252;
  v82 = *(game + 0x440);
  v17 = *(v82 + 0x2770) == 0;
  v982 = v29;
  v968 = v31;
  v969 = *&XPosition;
  *&v1013 = YPosition;
  v83 = !v17 && *(v82 + 0xA8D) != 0;
  v84 = *(*(game + 0x430) + 0x2C0i64);
  if ( v84 > 0 )
    v85 = v84;
  else
    v85 = dword_4492C80;
  v86 = ((*(mUnit__ + 0x9A8) * *&Str[4]) + (*(mUnit__ + 0x99C) * *Str)) + (*(mUnit__ + 0x9B4) * *&Str[8]);
  v87 = ((*(mUnit__ + 0x9AC) * *&Str[4]) + (*(mUnit__ + 0x9A0) * *Str)) + (*(mUnit__ + 0x9B8) * *&Str[8]);
  v88 = ((*&Str[4] * *(mUnit__ + 0x9B0)) + (*Str * *(mUnit__ + 0x9A4))) + (*&Str[8] * *(mUnit__ + 0x9BC));
  if ( v83 )
  {
    v964 = v30;
    v89 = *(v82 + 0x2774);
    v90 = *(v82 + 0x2778);
    v91 = *(v82 + 0x277C);
    v92 = fsqrt((v91 * v91) + ((v90 * v90) + (v89 * v89)));
    v93 = 0.0;
    v94 = 0.0;
    if ( v92 > *&dword_449F1A8 )
      v94 = Y / v92;
    v95 = v91 * v94;
    v96 = v90 * v94;
    v97 = v89 * v94;
    v98 = fsqrt((v88 * v88) + ((v87 * v87) + (v86 * v86)));
    if ( v98 > *&dword_449F1A8 )
      v93 = Y / v98;
    v99 = v93 * v88;
    v100 = v93 * v87;
    v101 = v93 * v86;
    v102 = (v95 * v99) + ((v96 * v100) + (v97 * v101));
    v1001 = v32.m128_f32[0];
    v966 = v85;
    if ( v102 >= *&dword_44A4A68 )
    {
      v113 = (v96 * v99) - (v95 * v100);
      v114 = (v95 * v101) - (v99 * v97);
      v115 = (v97 * v100) - (v96 * v101);
      v116 = fsqrt((v102 + v102) + dword_44801E0);
      v117 = 0.0;
      if ( v116 > *&dword_449F1A8 )
        v117 = Y / v116;
      v118 = v116 * *&dword_44801CC;
      v106 = v114 * v117;
      v104 = v113 * v117;
      v107 = v115 * v117;
    }
    else
    {
      if ( COERCE_FLOAT(xmmword_449AF40 & LODWORD(v95)) <= *&qword_44A4A70 )
      {
        v120 = fsqrt((v96 * v96) + (v97 * v97));
        v107 = 0.0;
        v121 = 0.0;
        if ( v120 > *&dword_449F1A8 )
          v121 = Y / v120;
        v104 = COERCE_FLOAT(LODWORD(v96) ^ xmmword_44801F0) * v121;
        v106 = v97 * v121;
      }
      else
      {
        v103 = fsqrt((v95 * v95) + (v96 * v96));
        v104 = 0.0;
        v105 = 0.0;
        if ( v103 > *&dword_449F1A8 )
          v105 = Y / v103;
        v106 = COERCE_FLOAT(LODWORD(v95) ^ xmmword_44801F0) * v105;
        v107 = v96 * v105;
      }
      v118 = 0.0;
    }
    v122 = (v107 + v107) * v104;
    v123 = (v118 + v118) * v106;
    v124 = (v107 + v107) * v106;
    v125 = v118 * (v104 + v104);
    v126 = (v107 + v107) * v118;
    v127 = ((v118 * v118) + (v118 * v118)) + *&dword_44801E8;
    v128 = (((((v107 * v107) + (v107 * v107)) + v127) * v88) + ((v122 - v123) * v86)) + ((v125 + v124) * v87);
    v129 = (v104 + v104) * v106;
    v130 = (((v124 - v125) * v88) + ((v126 + v129) * v86)) + ((((v106 * v106) + (v106 * v106)) + v127) * v87);
    v131 = (((v123 + v122) * v88) + ((v129 - v126) * v87)) + ((((v104 * v104) + (v104 * v104)) + v127) * v86);
    v132 = fsqrt((v128 * v128) + ((v130 * v130) + (v131 * v131)));
    v133 = 0.0;
    if ( v132 > *&dword_449F1A8 )
      v133 = Y / v132;
    v31 = v968;
    v110 = LODWORD(v1001);
    v34 = LODWORD(v988);
    v134 = v133 * v966;
    v135 = *(v82 + 0xAE8);
    v136 = v128 * v134;
    v137 = v130 * v134;
    v138 = v134 * v131;
    v30 = v964;
    v139 = (((v135 * v964) + ZPosition_) + ((*(v82 + 0xAF0) * v988) + (*(v82 + 0xAEC) * v990))) + v136;
    v29 = v982;
    YPosition = *&v1013;
    v140 = (((v135 * v982) + *&v1013) + ((*(v82 + 0xAF0) * v989) + (*(v82 + 0xAEC) * v1001))) + v137;
    *&v974 = (((v135 * v977) + v969) + ((*(v82 + 0xAF0) * v1009) + (*(v82 + 0xAEC) * v968))) + v138;
    *(&v974 + 1) = v140;
    *&v975 = v139;
    v111 = qword_4B173B8;
    if ( *(qword_4B173B8 + 0xB50) == 1 && *(qword_4B173B8 + 0xB4E) == 2 )
    {
      v112 = Y;
      *&XPosition = v969;
      goto LABEL_217;
    }
    *(qword_4B173B8 + 0xB50) = 1;
    v111[0xB4E] = 2;
    v112 = Y;
    v119 = 2i64;
    *&XPosition = v969;
LABEL_216:
    sub_B831C0(v111 + 0x2D10, v119, v53, v81);
    goto LABEL_217;
  }
  v108 = *(mUnit__ + 0x9C4);
  v109 = *(mUnit__ + 0x9C8);
  if ( !*(v82 + 0x1DDC) || !*(v82 + 0xA8D) )
  {
    v110 = v32;
    *&v974 = (v86 * v85) + *(mUnit__ + 0x9C0);
    *(&v974 + 1) = (v87 * v85) + v108;
    *&v975 = (v88 * v85) + v109;
    v112 = *(a2 + 0x304) * dword_44A022C;
    v111 = qword_4B173B8;
    if ( *(qword_4B173B8 + 0xB50) == 1 && !*(qword_4B173B8 + 0xB4E) )
      goto LABEL_199;
    *(qword_4B173B8 + 0xB50) = 1;
    v111[0xB4E] = 0;
    v119 = 0i64;
LABEL_215:
    v29 = v982;
    v31 = v968;
    *&XPosition = v969;
    YPosition = *&v1013;
    goto LABEL_216;
  }
  v110 = v32;
  LODWORD(v975) = *(v82 + 0x1DD8);
  v974 = *(v82 + 0x1DD0);
  v111 = qword_4B173B8;
  if ( *(qword_4B173B8 + 0xB50) != 1 || *(qword_4B173B8 + 0xB4E) != 1 )
  {
    *(qword_4B173B8 + 0xB50) = 1;
    v111[0xB4E] = 1;
    v112 = Y;
    v119 = 1i64;
    goto LABEL_215;
  }
  v112 = Y;
LABEL_199:
  v29 = v982;
  v31 = v968;
  *&XPosition = v969;
  YPosition = *&v1013;
LABEL_217:
  *&v981 = 0i64;
  if ( ((*(mUnit__ + 0x2DD8) != 0i64) & v57) != 0 )
  {
    sub_B9FD30(a2);
    sub_B971C0(a2, &v974, &v981, 0i64);
    v142 = v141;
    sub_B9FD30(a2);
  }
  else
  {
    sub_B971C0(a2, &v974, &v981, 1i64);
    v142 = v143;
  }
  v145 = 1;
  if ( !v1041 )
    v145 = *(*(game + 0x440) + 0xA8Ei64) == 0;
  v144 = (*v73 >> 1) & v142;
  v147 = v145 & v144 & (sub_4253C0(mUnit__) != 0);
  v66 = LOBYTE(v994);
  if ( LOBYTE(v994) )
  {
    v57 = v965;
    if ( v147 )
    {
      LOBYTE(v147) = sub_461D10(*(mUnit__ + 0x2DD8), a2, &v981, &v983);
      *&v981 = v983;
    }
  }
  else
  {
    v57 = v965;
  }
  v149 = qword_4B173B8;
  if ( *(qword_4B173B8 + 0xB42) != 5 || *(qword_4B173B8 + 0x2D00) != v147 )
  {
    *(qword_4B173B8 + 0xB42) = 5;
    v149[0x2D00] = v147;
    sub_224C10(v149 + 0x2CD8);
  }
  if ( v147 )
  {
    v150 = qword_4B173B8;
    v151 = v981;
    if ( *(qword_4B173B8 + 0xB26) != 3 || *(qword_4B173B8 + 0xB24) != *&v981 )
    {
      *(qword_4B173B8 + 0xB26) = 3;
      *(v150 + 0xB24) = v151;
      sub_B82CC0(v150 + 0x2C68, v146, v53, v148);
      v150 = qword_4B173B8;
    }
    v152 = DWORD1(v981);
    if ( *(v150 + 0xB34) != 3 || v150[0xB32] != *(&v981 + 1) )
    {
      *(v150 + 0xB34) = 3;
      *(v150 + 0xB32) = v152;
      sub_B82CC0(v150 + 0x2CA0, v146, v53, v148);
      v150 = qword_4B173B8;
    }
    if ( *(v150 + 0xB5E) != 3 || v150[0xB5C] != v112 )
    {
      *(v150 + 0xB5E) = 3;
      v150[0xB5C] = v112;
      sub_B82CC0(v150 + 0x2D48, v146, v53, v148);
      v150 = qword_4B173B8;
    }
    v153 = *(game + 0x498);
    v154 = v153[0x9FF];
    if ( *(v150 + 0xBDC) != 3 || v150[0xBDA] != v154 )
    {
      *(v150 + 0xBDC) = 3;
      v150[0xBDA] = v154;
      sub_B82CC0(v150 + 0x2F40, v153, v53, v148);
      v150 = qword_4B173B8;
      v153 = *(game + 0x498);
    }
    v155 = v153[0xA04];
    if ( *(v150 + 0xC14) != 3 || v150[0xC12] != v155 )
    {
      *(v150 + 0xC14) = 3;
      v150[0xC12] = v155;
      sub_B82CC0(v150 + 0x3020, v153, v53, v148);
      v150 = qword_4B173B8;
      v153 = *(game + 0x498);
    }
    v156 = v153[0xA08];
    if ( *(v150 + 0xC4C) != 3 || v150[0xC4A] != v156 )
    {
      *(v150 + 0xC4C) = 3;
      v150[0xC4A] = v156;
      sub_B82CC0(v150 + 0x3100, v153, v53, v148);
      v150 = qword_4B173B8;
      v153 = *(game + 0x498);
    }
    v157 = v153[0xA0C];
    if ( *(v150 + 0xC84) != 3 || v150[0xC82] != v157 )
    {
      *(v150 + 0xC84) = 3;
      v150[0xC82] = v157;
      sub_B82CC0(v150 + 0x31E0, v153, v53, v148);
    }
  }
  v32 = v110;
  v33 = v989;
LABEL_252:
  if ( v57 )
  {
    v158 = *(mUnit__ + 0x2DD8);
    if ( v158 && sub_462330(v158, Str, 0i64) )
    {
      v974 = 0i64;
      sub_B9FD30(a2);
      sub_B971C0(a2, Str, &v974, 0i64);
      v160 = v159;
      sub_B9FD30(a2);
      if ( (v160 & v66) == 1 )
      {
        v160 = sub_461D10(*(mUnit__ + 0x2DD8), a2, &v974, &v981);
        v974 = v981;
      }
      v164 = qword_4B173B8;
      if ( *(qword_4B173B8 + 0xB6C) != 5 || *(qword_4B173B8 + 0x2DA8) != v160 )
      {
        *(qword_4B173B8 + 0xB6C) = 5;
        v164[0x2DA8] = v160;
        sub_224C10(v164 + 0x2D80);
      }
      if ( v160 )
      {
        v165 = qword_4B173B8;
        v166 = v974;
        if ( *(qword_4B173B8 + 0x1D32) != 3 || *(qword_4B173B8 + 0x1D30) != *&v974 )
        {
          *(qword_4B173B8 + 0x1D32) = 3;
          *(v165 + 0x1D30) = v166;
          sub_B82CC0(v165 + 0x7498, v161, v162, v163);
          v165 = qword_4B173B8;
        }
        v167 = *(&v974 + 1);
LABEL_292:
        if ( *(v165 + 0x1D40) != 3 || v165[0x1D3E] != v167 )
        {
          *(v165 + 0x1D40) = 3;
          v165[0x1D3E] = v167;
          sub_B82CC0(v165 + 0x74D0, v161, v162, v163);
        }
        goto LABEL_295;
      }
      goto LABEL_295;
    }
LABEL_272:
    v171 = qword_4B173B8;
    if ( *(qword_4B173B8 + 0xB6C) != 5 || *(qword_4B173B8 + 0x2DA8) )
    {
      *(qword_4B173B8 + 0xB6C) = 5;
      v171[0x2DA8] = 0;
      sub_224C10(v171 + 0x2D80);
    }
    goto LABEL_295;
  }
  v168 = *(game + 0x440);
  if ( !*(v168 + 0x97D) )
    goto LABEL_272;
  *&v981 = 0i64;
  LODWORD(v975) = *(v168 + 0x98C);
  v974 = *(v168 + 0x984);
  if ( !*(v168 + 0x980) || !*(mUnit__ + 0x1238) )
    goto LABEL_280;
  v169 = 0i64;
  while ( 1 )
  {
    v170 = *(*(mUnit__ + 0x1228) + 8 * v169);
    if ( (*(*v170 + 0x98i64))(v170, mUnit__ + 0x1488, v53, Str) )
      break;
    if ( ++v169 >= *(mUnit__ + 0x1238) )
      goto LABEL_280;
  }
  DWORD2(v1008) = v169;
  if ( Str[0xC] && BYTE12(v1005) )
  {
    *&v974 = (*&v1006 * *&v1005) + *Str;
    *(&v974 + 1) = (*(&v1005 + 1) * *&v1006) + *&Str[4];
    *&v975 = (*(&v1005 + 2) * *&v1006) + *&Str[8];
    v172 = qword_4B173B8;
    if ( *(qword_4B173B8 + 0x1D08) != 5 || *(qword_4B173B8 + 0x7418) != 1 )
    {
      *(qword_4B173B8 + 0x1D08) = 5;
      v172[0x7418] = 1;
LABEL_283:
      sub_224C10(v172 + 0x73F0);
    }
  }
  else
  {
LABEL_280:
    v172 = qword_4B173B8;
    if ( *(qword_4B173B8 + 0x1D08) != 5 || *(qword_4B173B8 + 0x7418) )
    {
      *(qword_4B173B8 + 0x1D08) = 5;
      v172[0x7418] = 0;
      goto LABEL_283;
    }
  }
  sub_B971C0(a2, &v974, &v981, 0i64);
  v174 = v173;
  v175 = qword_4B173B8;
  if ( *(qword_4B173B8 + 0xB6C) != 5 || *(qword_4B173B8 + 0x2DA8) != v173 )
  {
    *(qword_4B173B8 + 0xB6C) = 5;
    v175[0x2DA8] = v173;
    sub_224C10(v175 + 0x2D80);
  }
  if ( v174 )
  {
    v165 = qword_4B173B8;
    v176 = v981;
    if ( *(qword_4B173B8 + 0x1D32) != 3 || *(qword_4B173B8 + 0x1D30) != *&v981 )
    {
      *(qword_4B173B8 + 0x1D32) = 3;
      *(v165 + 0x1D30) = v176;
      sub_B82CC0(v165 + 0x7498, v161, v162, v163);
      v165 = qword_4B173B8;
    }
    v167 = *(&v981 + 1);
    goto LABEL_292;
  }
LABEL_295:
  v980 = 0;
  v5 = DWORD2(v1017);
  unknown_ballistics_calculations(v72, a2, v992, &v980, *(&v1017 + 2));
  ballistics = *(game + 0x440);
  if ( *(ballistics + 0x2BB0) || (*(mUnit__ + 0x1083) & 8) == 0 )
  {
    v180 = qword_4B173B8;
    if ( *(qword_4B173B8 + 0xEA6) != 5 || *(qword_4B173B8 + 0x3A90) )
    {
      *(qword_4B173B8 + 0xEA6) = 5;
      v180[0x3A90] = 0;
      sub_224C10(v180 + 0x3A68);
      v180 = qword_4B173B8;
    }
    if ( *(v180 + 0xEB4) != 5 || v180[0x3AC8] )
    {
      *(v180 + 0xEB4) = 5;
      v180[0x3AC8] = 0;
      sub_224C10(v180 + 0x3AA0);
    }
    goto LABEL_303;
  }
  v974 = 0i64;
  v217 = 1;
  if ( v991 != 1 && v991 != 4 && (v991 != 0xE || LODWORD(v1011) != 4 && !*(ballistics + 0x24DC)) )
    v217 = LOBYTE(v1012);
  if ( *(*(*(mUnit__ + 0x11D0) + 0x300i64) + 0x118i64) )
  {
    v218 = (*v73 >> 3) & v217;
    v219 = v218 & (sub_3E49A0(mUnit__) != 0);
    if ( (*(mUnit__ + 0x1083) & 8) == 0 )
      goto LABEL_418;
  }
  else
  {
    LOBYTE(v219) = 0;
  }
  v298 = 1;
  if ( !v1039 )
    v298 = *(*(game + 0x440) + 0xA8Ei64) == 0;
  v219 = v298 & v219;
LABEL_418:
  v299 = v72;
  v300 = v219 != 0;
  v301 = *(ballistics_A68_qword + 0x600);
  *Str = *(v301 + 0x4D3C);
  *&Str[8] = *(v301 + 0x4D44);
  *v5.m128_u64 = sub_B971C0(a2, Str, &v974, 1i64);
  v303 = v300 & v302;
  v304 = qword_4B173B8;
  if ( *(qword_4B173B8 + 0xEA6) != 5 || *(qword_4B173B8 + 0x3A90) != v303 )
  {
    *(qword_4B173B8 + 0xEA6) = 5;
    v304[0x3A90] = v303;
    sub_224C10(v304 + 0x3A68);
  }
  if ( *(mUnit__ + 0x2DD8) )
    v305 = *(*(game + 0x440) + 0x97Di64) != 0;
  else
    v305 = 0;
  v306 = *(mUnit__ + 0x11D0);
  v307 = *(v306 + 0x1A0);
  if ( !*(v306 + 0x1A0) )
    goto LABEL_964;
  v178 = *(v306 + 0x190);
  if ( v307 < 8 )
  {
    v308 = 0i64;
    goto LABEL_960;
  }
  v177 = v305;
  if ( v307 < 0x20 )
  {
    v308 = 0i64;
    goto LABEL_955;
  }
  *&v1013 = YPosition;
  v969 = *&XPosition;
  v968 = v31;
  v5 = v32;
  v308 = v307 & 0xFFFFFFE0;
  v602 = _mm_cvtsi32_si128(v305);
  v603 = _mm_shuffle_epi8(v602, 0i64);
  v604 = v178 + 0x5175;
  v605 = 0i64;
  si128 = _mm_load_si128(&xmmword_449ACE0);
  v607 = v603;
  do
  {
    v603 = _mm_blendv_epi8(
             si128,
             v603,
             _mm_cmpeq_epi8(
               _mm_insert_epi8(
                 _mm_insert_epi8(
                   _mm_insert_epi8(
                     _mm_insert_epi8(
                       _mm_insert_epi8(
                         _mm_insert_epi8(
                           _mm_insert_epi8(
                             _mm_insert_epi8(
                               _mm_insert_epi8(
                                 _mm_insert_epi8(
                                   _mm_insert_epi8(
                                     _mm_insert_epi8(
                                       _mm_insert_epi8(
                                         _mm_insert_epi8(
                                           _mm_insert_epi8(
                                             _mm_cvtsi32_si128(*(v604 + v605 - 0x4F70)),
                                             *(v604 + v605 - 0x4CE0),
                                             1),
                                           *(v604 + v605 - 0x4A50),
                                           2),
                                         *(v604 + v605 - 0x47C0),
                                         3),
                                       *(v604 + v605 - 0x4530),
                                       4),
                                     *(v604 + v605 - 0x42A0),
                                     5),
                                   *(v604 + v605 - 0x4010),
                                   6),
                                 *(v604 + v605 - 0x3D80),
                                 7),
                               *(v604 + v605 - 0x3AF0),
                               8),
                             *(v604 + v605 - 0x3860),
                             9),
                           *(v604 + v605 - 0x35D0),
                           0xA),
                         *(v604 + v605 - 0x3340),
                         0xB),
                       *(v604 + v605 - 0x30B0),
                       0xC),
                     *(v604 + v605 - 0x2E20),
                     0xD),
                   *(v604 + v605 - 0x2B90),
                   0xE),
                 *(v604 + v605 - 0x2900),
                 0xF),
               0i64));
    v607 = _mm_blendv_epi8(
             si128,
             v607,
             _mm_cmpeq_epi8(
               _mm_insert_epi8(
                 _mm_insert_epi8(
                   _mm_insert_epi8(
                     _mm_insert_epi8(
                       _mm_insert_epi8(
                         _mm_insert_epi8(
                           _mm_insert_epi8(
                             _mm_insert_epi8(
                               _mm_insert_epi8(
                                 _mm_insert_epi8(
                                   _mm_insert_epi8(
                                     _mm_insert_epi8(
                                       _mm_insert_epi8(
                                         _mm_insert_epi8(
                                           _mm_insert_epi8(
                                             _mm_cvtsi32_si128(*(v604 + v605 - 0x2670)),
                                             *(v604 + v605 - 0x23E0),
                                             1),
                                           *(v604 + v605 - 0x2150),
                                           2),
                                         *(v604 + v605 - 0x1EC0),
                                         3),
                                       *(v604 + v605 - 0x1C30),
                                       4),
                                     *(v604 + v605 - 0x19A0),
                                     5),
                                   *(v604 + v605 - 0x1710),
                                   6),
                                 *(v604 + v605 - 0x1480),
                                 7),
                               *(v604 + v605 - 0x11F0),
                               8),
                             *(v604 + v605 - 0xF60),
                             9),
                           *(v604 + v605 - 0xCD0),
                           0xA),
                         *(v604 + v605 - 0xA40),
                         0xB),
                       *(v604 + v605 - 0x7B0),
                       0xC),
                     *(v604 + v605 - 0x520),
                     0xD),
                   *(v604 + v605 - 0x290),
                   0xE),
                 *(v604 + v605),
                 0xF),
               0i64));
    v605 += 0x5200i64;
  }
  while ( 0x5200 * (v307 >> 5) != v605 );
  v608 = _mm_shuffle_epi8(v602, 0i64);
  v609 = _mm_sub_epi8(_mm_blendv_epi8(v603, v607, _mm_cmpeq_epi8(v603, v608)), v608);
  v305 = 1;
  if ( _mm_testz_si128(v609, v609) )
    v305 = v177;
  if ( v308 != v307 )
  {
    v299 = v1003;
    v73 = v1000;
    v31 = v968;
    *&XPosition = v969;
    YPosition = *&v1013;
    if ( (v307 & 0x18) == 0 )
    {
LABEL_960:
      v748 = v307 - v308;
      v749 = (0x290 * v308 + v178 + 0x205);
      do
      {
        if ( *v749 )
          v305 = 1;
        v749 += 0x290;
        --v748;
      }
      while ( v748 );
      goto LABEL_964;
    }
LABEL_955:
    v741 = v308;
    v308 = v307 & 0xFFFFFFF8;
    v742 = _mm_cvtsi32_si128(v305);
    v743 = _mm_shufflelo_epi16(_mm_unpacklo_epi8(v742, v742), 0);
    v744 = (0x290 * v741 + v178 + 0x13F5);
    v745 = v741 - v308;
    v746 = _mm_load_si128(&xmmword_44CB6F0);
    do
    {
      v743 = _mm_blendv_epi8(
               v746,
               v743,
               _mm_cmpeq_epi8(
                 _mm_insert_epi8(
                   _mm_insert_epi8(
                     _mm_insert_epi8(
                       _mm_insert_epi8(
                         _mm_insert_epi8(
                           _mm_insert_epi8(
                             _mm_insert_epi8(_mm_cvtsi32_si128(v744[0xFFFFEE10]), v744[0xFFFFF0A0], 1),
                             v744[0xFFFFF330],
                             2),
                           v744[0xFFFFF5C0],
                           3),
                         v744[0xFFFFF850],
                         4),
                       v744[0xFFFFFAE0],
                       5),
                     v744[0xFFFFFD70],
                     6),
                   *v744,
                   7),
                 0i64));
      v744 += 0x1480;
      v745 += 8i64;
    }
    while ( v745 );
    v747 = _mm_cvtsi32_si128(v177);
    v5 = _mm_shufflelo_epi16(_mm_unpacklo_epi8(v747, v747), 0);
    v305 = 1;
    if ( v743.m128i_i64[0] == v5.m128_u64[0] )
      v305 = v177;
    if ( v308 == v307 )
      goto LABEL_964;
    goto LABEL_960;
  }
  v299 = v1003;
  v73 = v1000;
  v31 = v968;
  *&XPosition = v969;
  YPosition = *&v1013;
LABEL_964:
  v750 = qword_4B173B8;
  v751 = v305;
  if ( *(qword_4B173B8 + 0xEB4) != 5 || *(qword_4B173B8 + 0x3AC8) != v751 )
  {
    *(qword_4B173B8 + 0xEB4) = 5;
    v750[0x3AC8] = v751;
    *v5.m128_u64 = sub_224C10(v750 + 0x3AA0);
    v750 = qword_4B173B8;
  }
  v752 = *(*(game + 0x440) + 0x24DCi64);
  if ( *(v750 + 0xEC2) != 1 || *(v750 + 0xEC0) != v752 )
  {
    *(v750 + 0xEC2) = 1;
    *(v750 + 0xEC0) = v752;
    sub_B831C0(v750 + 0x3AD8, v752, v177, v178);
  }
  v17 = v303 == 0;
  v72 = v299;
  if ( !v17 )
  {
    v968 = v31;
    v982 = v29;
    v753 = YPosition;
    v754 = XPosition;
    v755 = v32;
    v756 = v30;
    v757 = v755;
    v758 = *(v73 + 0x1C);
    v759 = *(v73 + 0x1D);
    v760 = *(&v974 + 1) - v759;
    v761 = *&v974 - v758;
    v755.m128_f32[0] = expf(v8 * *&dword_44A0348);
    v765 = (v760 * (Y - v755.m128_f32[0])) + v759;
    v766 = ((Y - v755.m128_f32[0]) * v761) + v758;
    *(v73 + 0x1C) = v766;
    *(v73 + 0x1D) = v765;
    v767 = qword_4B173B8;
    if ( *(qword_4B173B8 + 0xE8A) != 3 || *(qword_4B173B8 + 0xE88) != v766 )
    {
      *(qword_4B173B8 + 0xE8A) = 3;
      v767[0xE88] = v766;
      sub_B82CC0(v767 + 0x39F8, v762, v763, v764);
      v767 = qword_4B173B8;
      v765 = *(v73 + 0x1D);
    }
    v30 = v756;
    XPosition = v754;
    if ( *(v767 + 0xE98) != 3 || v767[0xE96] != v765 )
    {
      *(v767 + 0xE98) = 3;
      v767[0xE96] = v765;
      sub_B82CC0(v767 + 0x3A30, v762, v763, v764);
      v767 = qword_4B173B8;
    }
    v32 = v757;
    YPosition = v753;
    v31 = v968;
    v768 = *(game + 0x498);
    v769 = *(v768 + 0x2828);
    v33 = v989;
    v29 = v982;
    if ( *(v767 + 0xC68) != 3 || v767[0xC66] != v769 )
    {
      *(v767 + 0xC68) = 3;
      v767[0xC66] = v769;
      sub_B82CC0(v767 + 0x3170, v768, v763, v764);
      v767 = qword_4B173B8;
      v768 = *(game + 0x498);
    }
    v5 = *(v768 + 0x2804);
    v34 = LODWORD(v988);
    if ( *(v767 + 0xBEA) != 3 || v767[0xBE8] != v5.m128_f32[0] )
    {
      *(v767 + 0xBEA) = 3;
      v767[0xBE8] = v5.m128_f32[0];
      sub_B82CC0(v767 + 0x2F78, v768, v763, v764);
    }
    v770 = sub_3E49A0(mUnit__);
    if ( v770 )
    {
      v771 = v770;
      if ( (*(*v770 + 0x108i64))(v770) )
      {
        v5.m128_f32[0] = sub_1707580(v771 + 0x4A0, v772) * *&dword_4487F04;
        v773 = _mm_or_ps(_mm_and_ps(xmmword_44801F0, v5), xmmword_44C0110);
        v773.m128_f32[0] = v773.m128_f32[0] + v5.m128_f32[0];
        v5 = _mm_round_ss(0i64, v773, 0xB);
        v774 = v5.m128_f32[0];
        v775 = qword_4B173B8;
        if ( *(qword_4B173B8 + 0xAD2) != 1 || *(qword_4B173B8 + 0xAD0) != v774 )
        {
          *(qword_4B173B8 + 0xAD2) = 1;
          v775[0xAD0] = v774;
          sub_B831C0(v775 + 0x2B18, v774, v177, v178);
        }
      }
    }
  }
LABEL_303:
  v181 = *(mUnit__ + 0x11D0);
  v182 = *(v181 + 0x2CC);
  if ( (*(mUnit__ + 0x1083) & 8) != 0 )
  {
    if ( v182 == 3 )
    {
LABEL_308:
      v184 = qword_4B173B8;
      v185 = v991;
      if ( *(qword_4B173B8 + 0x92E) == 5 && !*(qword_4B173B8 + 0x24B0) )
        goto LABEL_391;
      *(qword_4B173B8 + 0x92E) = 5;
      v184[0x24B0] = 0;
      sub_224C10(v184 + 0x2488);
      goto LABEL_390;
    }
    v183 = game;
  }
  else
  {
    v183 = game;
    if ( !*(*(game + 0x498) + 0x27F2i64) || v182 == 3 )
      goto LABEL_308;
  }
  v186 = v32;
  v187 = *(*(v183 + 0x440) + 0x2A50i64);
  v974 = 0i64;
  v188 = *(v181 + 0x268);
  sub_FE7160(qword_4B44C68);
  if ( (*(mUnit__ + 0x1083) & 8) == 0 )
  {
    v192 = fminf(v5.m128_f32[0], Y);
    v193 = qword_4B173B8;
    if ( *(qword_4B173B8 + 0x94A) != 3 || *(qword_4B173B8 + 0x948) != v192 )
    {
      *(qword_4B173B8 + 0x94A) = 3;
      v193[0x948] = v192;
      sub_B82CC0(v193 + 0x24F8, v189, v190, v191);
    }
  }
  v194 = v991;
  if ( v187 )
  {
    v195 = *(game + 0x440);
    v196 = *(v195 + 0x2A60);
    v197 = *(v195 + 0x2A64);
    v198 = *(v195 + 0x2A68);
    v199 = fsqrt((v198 * v198) + ((v197 * v197) + (v196 * v196)));
    v200 = 0.0;
    v201 = 0.0;
    v202 = LOBYTE(v993);
    if ( v199 > *&dword_449F1A8 )
      v201 = Y / v199;
    v203 = v198 * v201;
    v204 = v197 * v201;
    v205 = v196 * v201;
    v206 = fsqrt((v30 * v30) + ((v29 * v29) + (v977 * v977)));
    if ( v206 > *&dword_449F1A8 )
      v200 = Y / v206;
    v207 = v200 * v30;
    v208 = v200 * v29;
    v209 = v200 * v977;
    v210 = (v203 * v207) + ((v204 * v208) + (v205 * v209));
    v969 = *&XPosition;
    *&v1013 = YPosition;
    if ( v210 >= *&dword_44A4A68 )
    {
      v211 = v30;
      v225 = (v204 * v207) - (v203 * v208);
      v226 = (v203 * v209) - (v207 * v205);
      v227 = (v205 * v208) - (v204 * v209);
      v228 = fsqrt((v210 + v210) + dword_44801E0);
      v229 = 0.0;
      if ( v228 > *&dword_449F1A8 )
        v229 = Y / v228;
      v230 = v228 * *&dword_44801CC;
      v215 = v226 * v229;
      v213 = v225 * v229;
      v216 = v227 * v229;
    }
    else
    {
      v211 = v30;
      if ( COERCE_FLOAT(xmmword_449AF40 & LODWORD(v203)) <= *&qword_44A4A70 )
      {
        v232 = fsqrt((v204 * v204) + (v205 * v205));
        v216 = 0.0;
        v233 = 0.0;
        if ( v232 > *&dword_449F1A8 )
          v233 = Y / v232;
        v213 = COERCE_FLOAT(LODWORD(v204) ^ xmmword_44801F0) * v233;
        v215 = v205 * v233;
      }
      else
      {
        v212 = fsqrt((v203 * v203) + (v204 * v204));
        v213 = 0.0;
        v214 = 0.0;
        if ( v212 > *&dword_449F1A8 )
          v214 = Y / v212;
        v215 = COERCE_FLOAT(LODWORD(v203) ^ xmmword_44801F0) * v214;
        v216 = v204 * v214;
      }
      v230 = 0.0;
    }
    v234 = (v216 + v216) * v213;
    v235 = (v230 + v230) * v215;
    v236 = (v216 + v216) * v215;
    v237 = v230 * (v213 + v213);
    v238 = (v216 + v216) * v230;
    v239 = ((v230 * v230) + (v230 * v230)) + *&dword_44801E8;
    v240 = (((((v216 * v216) + (v216 * v216)) + v239) * v211) + ((v234 - v235) * v977)) + ((v237 + v236) * v29);
    v241 = (v213 + v213) * v215;
    v242 = (((v236 - v237) * v211) + ((v238 + v241) * v977)) + ((((v215 * v215) + (v215 * v215)) + v239) * v29);
    v243 = (((v235 + v234) * v211) + ((v241 - v238) * v29)) + ((((v213 * v213) + (v213 * v213)) + v239) * v977);
    v244 = fsqrt((v240 * v240) + ((v242 * v242) + (v243 * v243)));
    v5 = *(v195 + 0xAF4);
    v245 = *(v195 + 0xAF8);
    v246 = v977 * v5.m128_f32[0];
    v968 = v31 * v245;
    v247 = *(v195 + 0xAFC);
    v248 = v247 * v1009;
    v249 = v29 * v5.m128_f32[0];
    v990 = v990 * v245;
    v250 = v186;
    v251 = v245 * v186.m128_f32[0];
    v33 = v989;
    v252 = v247 * v989;
    v5.m128_f32[0] = v5.m128_f32[0] * v211;
    v34 = LODWORD(v988);
    v253 = v247 * v988;
    v254 = 0.0;
    if ( v244 > *&dword_449F1A8 )
      v254 = *&dword_44A9F9C / v244;
    *Str = (((v246 + v969) + v968) + v248) + (v243 * v254);
    *&Str[4] = (((v249 + *&v1013) + v251) + v252) + (v242 * v254);
    *&Str[8] = (((v5.m128_f32[0] + ZPosition_) + v990) + v253) + (v240 * v254);
    v255 = qword_4B173B8;
    v32 = v250;
    if ( *(qword_4B173B8 + 0x93C) != 1 || *(qword_4B173B8 + 0x93A) != 2 )
    {
      *(qword_4B173B8 + 0x93C) = 1;
      v255[0x93A] = 2;
      v223 = v255 + 0x24C0;
      v224 = 2i64;
      goto LABEL_358;
    }
  }
  else
  {
    v220 = mUnit__;
    v202 = LOBYTE(v993);
    if ( *(*(mUnit__ + 0x4160) + 0x3EFi64) && (v221 = *(game + 0x440), *(v221 + 0x2244)) && *(v221 + 0xA8C) )
    {
      *&Str[8] = *(v221 + 0x2240);
      *Str = *(v221 + 0x2238);
      v222 = qword_4B173B8;
      v33 = v989;
      v34 = LODWORD(v988);
      if ( *(qword_4B173B8 + 0x93C) != 1 || *(qword_4B173B8 + 0x93A) != 1 )
      {
        *(qword_4B173B8 + 0x93C) = 1;
        v222[0x93A] = 1;
        v223 = v222 + 0x24C0;
        v224 = 1i64;
LABEL_358:
        sub_B831C0(v223, v224, v190, v191);
        v202 = LOBYTE(v993);
        v194 = v991;
      }
    }
    else
    {
      v231 = qword_4B173B8;
      if ( *(qword_4B173B8 + 0x93C) != 1 || *(qword_4B173B8 + 0x93A) )
      {
        *(qword_4B173B8 + 0x93C) = 1;
        v231[0x93A] = 0;
        sub_B831C0(v231 + 0x24C0, 0i64, v190, v191);
        v202 = LOBYTE(v993);
        v194 = v991;
        v220 = mUnit__;
      }
      v33 = v989;
      if ( (*(v220 + 0x1083) & 8) != 0 )
      {
        v5 = dword_44A9F9C;
        *Str = (v977 * *&dword_44A9F9C) + XPosition_;
        *&Str[4] = (v29 * *&dword_44A9F9C) + YPosition_;
        *&Str[8] = (v30 * *&dword_44A9F9C) + ZPosition_2;
      }
      else
      {
        *Str = *(qword_4B44C68 + 0x5FC);
        *&Str[8] = *(qword_4B44C68 + 0x604);
      }
      v34 = LODWORD(v988);
    }
  }
  v256 = 1;
  if ( v194 != 1 && v194 != 0xC )
    v256 = v202;
  v257 = (v188 & v256);
  if ( (*(mUnit__ + 0x1083) & 8) != 0 )
  {
    v258 = 1;
    if ( !HIBYTE(v1038) )
      v258 = *(*(game + 0x440) + 0xA8Ei64) == 0;
    v257 = v258 & v257;
  }
  v259 = v257 != 0;
  *v5.m128_u64 = sub_B971C0(a2, Str, &v974, 1i64);
  v261 = v259 & v260;
  v262 = qword_4B173B8;
  if ( *(qword_4B173B8 + 0x92E) != 5 || *(qword_4B173B8 + 0x24B0) != v261 )
  {
    *(qword_4B173B8 + 0x92E) = 5;
    v262[0x24B0] = v261;
    sub_224C10(v262 + 0x2488);
  }
  v185 = v991;
  if ( v261 )
  {
    v263 = qword_4B173B8;
    v264 = v974;
    if ( *(qword_4B173B8 + 0x912) != 3 || *(qword_4B173B8 + 0x910) != *&v974 )
    {
      *(qword_4B173B8 + 0x912) = 3;
      *(v263 + 0x910) = v264;
      sub_B82CC0(v263 + 0x2418, v182, v177, v178);
      v263 = qword_4B173B8;
    }
    v265 = HIDWORD(v974);
    if ( *(v263 + 0x920) != 3 || v263[0x91E] != *(&v974 + 1) )
    {
      *(v263 + 0x920) = 3;
      *(v263 + 0x91E) = v265;
      sub_B82CC0(v263 + 0x2450, v182, v177, v178);
      v263 = qword_4B173B8;
    }
    v182 = *(game + 0x498);
    v266 = *(v182 + 0x27F8);
    if ( *(v263 + 0xBCE) != 3 || v263[0xBCC] != v266 )
    {
      *(v263 + 0xBCE) = 3;
      v263[0xBCC] = v266;
      sub_B82CC0(v263 + 0x2F08, v182, v177, v178);
      v263 = qword_4B173B8;
      v182 = *(game + 0x498);
    }
    v267 = *(v182 + 0x280C);
    if ( *(v263 + 0xC06) != 3 || v263[0xC04] != v267 )
    {
      *(v263 + 0xC06) = 3;
      v263[0xC04] = v267;
      sub_B82CC0(v263 + 0x2FE8, v182, v177, v178);
      v263 = qword_4B173B8;
      v182 = *(game + 0x498);
    }
    v268 = *(v182 + 0x281C);
    if ( *(v263 + 0xC3E) != 3 || v263[0xC3C] != v268 )
    {
      *(v263 + 0xC3E) = 3;
      v263[0xC3C] = v268;
      sub_B82CC0(v263 + 0x30C8, v182, v177, v178);
      v263 = qword_4B173B8;
      v182 = *(game + 0x498);
    }
    v185 = v991;
    v5 = *(v182 + 0x282C);
    if ( *(v263 + 0xC76) != 3 || v263[0xC74] != v5.m128_f32[0] )
    {
      *(v263 + 0xC76) = 3;
      v263[0xC74] = v5.m128_f32[0];
      sub_B82CC0(v263 + 0x31A8, v182, v177, v178);
LABEL_390:
      v185 = v991;
    }
  }
LABEL_391:
  v269 = *(mUnit__ + 0x1080);
  if ( (v269 & 0x8000000) == 0 && !*(*(game + 0x498) + 0x27EFi64)
    || !*(HudInfo + 0x2E0) && (*(*(game + 0x498) + 0x2778i64) || !*(*(mUnit__ + 0x4160) + 0x3F1i64)) )
  {
    goto LABEL_697;
  }
  v270 = v72;
  v271 = 1;
  v272 = 1;
  if ( v185 != 1 )
  {
    v272 = 1;
    if ( v185 != 0xC )
      v272 = (v269 & 0x8000000 | v185 ^ 4) == 0;
  }
  v273 = *(mUnit__ + 0x9D0);
  v274 = *(v273 + 0x43BC);
  v275 = *(v273 + 0x910) - *&v274;
  *&v998 = 0.0;
  v996 = 0;
  sub_158B5C0(v273 + 0x920, &v998, &v996);
  if ( !sub_287F50(*(mUnit__ + 0x11D0), 4i64) )
    v271 = sub_287F50(*(mUnit__ + 0x11D0), 9i64);
  v278 = v275;
  v279 = *(mUnit__ + 0x11D0);
  v280 = 0xACi64 * (v271 ^ 1u);
  if ( *(*(mUnit__ + 0x4160) + 0x3F1i64) )
  {
    v281 = LODWORD(Y);
    v977 = 0.0;
    v282 = 1;
    if ( (*(mUnit__ + 0x58) & 6) != 0 )
      goto LABEL_401;
  }
  else
  {
    v285 = v279 + 0x11A8;
    v286 = v996;
    v287 = *&v998;
    *&v274 = sub_6D4510(v279 + 0x11A8 + v280 + 0x50, v279 + 0x11A8 + v280 + 0x3C, v276, v277, v996);
    if ( *&v274 <= 0.0 )
    {
      v290 = dword_44801CC;
    }
    else
    {
      v290 = LODWORD(Y);
      if ( *&v274 < Y )
      {
        *&v274 = (*&v274 * *&dword_44801CC) + *&dword_44801CC;
        v290 = v274;
      }
    }
    v291 = sub_6D4510(v285 + v280 + 0x28, v285 + v280 + 0x14, v288, v289, v286);
    v292 = Y;
    v293 = fminf(fmaxf(Y - *&v291, 0.0), Y);
    v296 = sub_6D4510(v285 + v280 + 0x94, v285 + v280 + 0x80, v294, v295, v286);
    v297 = fmaxf(fminf(fmaxf(v292 - *&v296, 0.0), v292), v293);
    v977 = 0.0;
    if ( v297 > 0.0 )
    {
      if ( v297 >= Y )
        v977 = *&dword_44A0280;
      else
        v977 = v297 * *&dword_44A0280;
    }
    v282 = 0;
    if ( v278 < *(v285 + v280 + 0x64) )
    {
      v281 = v290;
      if ( (*(mUnit__ + 0x58) & 6) != 0 )
        goto LABEL_401;
    }
    else
    {
      if ( *(v285 + v280 + 0x68) >= v278 && *(v285 + v280 + 0x6C) <= v287 && *(v285 + v280 + 0x70) >= v287 )
        v282 = COERCE_FLOAT(v286 & xmmword_449AF40) <= *(v285 + v280 + 0x74);
      v281 = v290;
      if ( (*(mUnit__ + 0x58) & 6) != 0 )
      {
LABEL_401:
        v283 = *(mUnit__ + 0x2E68);
        v284 = *(v283 + 0x4568);
        if ( *(v284 + 0x2BA) || *(v284 + 0x2B8) )
          goto LABEL_442;
        goto LABEL_438;
      }
    }
  }
  if ( *(mUnit__ + 0x402C) )
  {
LABEL_442:
    v310 = 0;
    goto LABEL_443;
  }
  v283 = *(mUnit__ + 0x2E68);
LABEL_438:
  if ( *(v283 + 0x5C4C) <= *(mUnit__ + 0x53D8) )
    goto LABEL_442;
  v309 = v279 + v280 + 0x11A8;
  v310 = 0;
  if ( v278 >= *v309 && *(v309 + 4) >= v278 )
    v310 = (COERCE_FLOAT(v996 & xmmword_449AF40) <= *(v309 + 0x10)) & _mm_cvtsi128_si32(_mm_and_ps(
                                                                                          _mm_cmple_ps(
                                                                                            v998,
                                                                                            *(v309 + 0xC)),
                                                                                          _mm_cmple_ps(
                                                                                            *(v309 + 8),
                                                                                            v998)));
LABEL_443:
  v311 = COERCE_FLOAT(xmmword_449AF40 & v281) >= *&dword_44A0308 && v282 && v272;
  v312 = sub_3DF3F0(mUnit__);
  v313 = v311 & v310 & (v312 + sub_425520(mUnit__) != 0);
  v314 = *(game + 0x440);
  v315 = 1;
  if ( !(v1048 | v1050) )
    v315 = *(v314 + 0xA8E) == 0;
  v316 = v315 & v313;
  v984 = *(v314 + 0x1A1C);
  v983 = *(v314 + 0x1A14);
  v72 = v270;
  if ( *(*(game + 0x498) + 0x2850i64) )
  {
    v964 = *(v314 + 0x1A20);
    v966 = *(v314 + 0x1A24);
    v5 = *(v314 + 0x1A28);
  }
  else
  {
    v966 = Y;
    v964 = 0.0;
    v5 = 0i64;
  }
  v967 = v5.m128_f32[0];
  v987 = 0i64;
  *v5.m128_u64 = sub_B971C0(a2, &v983, &v987, 1i64);
  if ( (v317 & v316) != 1 )
  {
    v335 = qword_4B173B8;
    if ( *(qword_4B173B8 + 0xB88) != 5 || *(qword_4B173B8 + 0x2E18) )
    {
      *(qword_4B173B8 + 0xB88) = 5;
      v335[0x2E18] = 0;
      sub_224C10(v335 + 0x2DF0);
    }
    goto LABEL_696;
  }
  v1013 = v281;
  v1001 = v32.m128_f32[0];
  v318 = *(mUnit__ + 0x1110);
  v319 = *(mUnit__ + 0x99C);
  v320 = *(mUnit__ + 0x9AC);
  v1006 = *(mUnit__ + 0x9BC);
  v1005 = v320;
  *Str = v319;
  v970 = fsqrt(
           (((*(a2 + 0x23C) - v984) * (*(a2 + 0x23C) - v984))
          + ((*(a2 + 0x238) - *(&v983 + 1)) * (*(a2 + 0x238) - *(&v983 + 1))))
         + ((*(a2 + 0x234) - *&v983) * (*(a2 + 0x234) - *&v983)));
  v995 = v970;
  v321 = (*Str * v966) - (*&Str[4] * v964);
  v322 = (*&Str[8] * v964) - (*Str * v967);
  v323 = (*&Str[4] * v967) - (*&Str[8] * v966);
  v324 = fsqrt(((v321 * v321) + (v323 * v323)) + (v322 * v322));
  v325 = 0.0;
  v326 = 0.0;
  if ( v324 > *&dword_449F1A8 )
    v326 = Y / v324;
  v327 = v321 * v326;
  v328 = v322 * v326;
  v329 = v323 * v326;
  v330 = (v328 * v964) - (v329 * v966);
  v331 = (v329 * v967) - (v327 * v964);
  v332 = (v327 * v966) - (v328 * v967);
  v333 = fsqrt((v330 * v330) + ((v331 * v331) + (v332 * v332)));
  if ( v333 > *&dword_449F1A8 )
    v325 = Y / v333;
  if ( *(HudInfo + 0x3D) )
  {
LABEL_454:
    v334 = Y;
    goto LABEL_493;
  }
  v336 = game;
  LODWORD(v337) = *(game + 0x348);
  v338 = *&dword_44B67C0;
  if ( v337 )
  {
    v339 = 2i64;
    do
    {
      v342 = v336[0x67];
      if ( v339 < v337 )
        _mm_prefetch(*(v342 + 8 * v339), 0);
      v340 = *(v342 + 8 * v339 - 0x10);
      if ( (*(v340 + 0x1058) & 0x7000014) == 0
        && *(v340 + 0x10A8) <= 1u
        && !sub_B8B680(v340, &v1006 + 4, *(mUnit__ + 0x1110)) )
      {
        v343 = (*(*(v340 + 0x50) + 0x30i64))(v340 + 0x50);
        if ( (dword_4B1C814 & 0x80000) != 0 || v343 != v318 || (dword_4B1C814 & 0x1000000) != 0 )
          v338 = fminf(
                   v338,
                   (((*(v340 + 0x9C8) - v984) * (*(v340 + 0x9C8) - v984))
                  + ((*(v340 + 0x9C4) - *(&v983 + 1)) * (*(v340 + 0x9C4) - *(&v983 + 1))))
                 + ((*(v340 + 0x9C0) - *&v983) * (*(v340 + 0x9C0) - *&v983)));
      }
      v336 = game;
      v337 = *(game + 0x348);
      v182 = v339 + 1;
      v341 = v339++ - 1 < v337;
    }
    while ( v341 );
  }
  if ( !*(v336[0x93] + 0x27EDi64) || !*(v336[0x86] + 0xD5i64) || !*(v336[0x88] + 0xA8Ei64) )
  {
    *&v981 = 0x900000002i64;
    DWORD2(v981) = 4;
    v344 = 2i64;
LABEL_476:
    v345 = 9;
    goto LABEL_477;
  }
  if ( !v1050 )
  {
    if ( !v1047 )
      goto LABEL_454;
    *&v981 = 0x900000001i64;
    v344 = 1i64;
    goto LABEL_476;
  }
  *&v981 = 0x400000001i64;
  v344 = 1i64;
  v345 = 4;
LABEL_477:
  v334 = Y;
  v346 = 0i64;
  v347 = 0i64;
  while ( 1 )
  {
    while ( 1 )
    {
      v182 = *(*(mUnit__ + 0x11D0) + 0x300i64);
      v348 = 0x10i64 * v345;
      v349 = *(v182 + v348 + 8);
      if ( !*(v182 + v348 + 8) )
        goto LABEL_487;
      v182 = *(v182 + v348);
      v350 = 0i64;
      while ( 1 )
      {
        v351 = *(v182 + 8 * v350);
        if ( v351 )
          break;
        if ( v349 == ++v350 )
          goto LABEL_487;
      }
      if ( v351[0xEE] == 3 )
        break;
      if ( ++v346 == v344 )
        goto LABEL_493;
      v347 = 0i64;
      v345 = *(&v981 + v346 + 1);
    }
    if ( !(*(*v351 + 0x180i64))(*(v182 + 8 * v350)) )
      v351 = 0i64;
    v347 = v351;
LABEL_487:
    if ( ++v346 == v344 )
      break;
    v345 = *(&v981 + v346 + 1);
  }
  if ( v347 )
  {
    v352 = v347[0x8E];
    v353 = sub_1711240();
    sub_168A060(&v974, v352, 0i64, v353);
    v334 = fminf(fsqrt(v338) / fmaxf(*&v975, Y), Y);
  }
LABEL_493:
  v354 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(v354[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(v354, v182, v177, v178);
  v982 = v334;
  v970 = v970 * *&dword_44CB700;
  v355 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x130i64);
  v356 = (*(*v355 + 0x10i64))(v355);
  sub_B8B6E0(&v974, v356, 0x50i64);
  v990 = *(*(game + 0x498) + 0x283Ci64);
  v357 = fsqrt((v967 * v967) + ((v966 * v966) + (v964 * v964)));
  v994 = 0.0;
  if ( v357 > *&dword_449F1A8 )
    v994 = Y / v357;
  v358 = v330 * v325;
  v359 = v331 * v325;
  v360 = v332 * v325;
  v361 = v990 * v970;
  v992 = a2 + 0x168;
  v997 = a2 + 0x128;
  v362 = 0i64;
  do
  {
    v363 = 0i64;
    *&v363 = (v362 * *&dword_44CB704) + *&dword_44CB708;
    v364 = v363;
    *&v364 = sinf(*&v363) * v994;
    v365 = *&v364 * v967;
    v366 = *&v364 * v966;
    *&v364 = *&v364 * v964;
    v367 = cosf(*&v363);
    v368 = (v366 + v366) * v367;
    v369 = (v365 + v365) * v366;
    v370 = v364;
    *&v370 = *&v364 + *&v364;
    v371 = v370;
    *&v371 = (*&v364 + *&v364) * v367;
    v372 = v371;
    v373 = (v365 + v365) * v367;
    v374 = ((v367 * v367) + (v367 * v367)) + *&dword_44801E8;
    *&v370 = (*&v364 + *&v364) * v366;
    *&v981 = (((((v368 + ((v365 + v365) * *&v364)) * v358) + ((*&v370 - v373) * v359))
             + ((((*&v364 * *&v364) + (*&v364 * *&v364)) + v374) * v360))
            * v361)
           + *&v983;
    *(&v981 + 1) = (((((v369 - *&v371) * v358) + ((v373 + *&v370) * v360))
                   + ((((v366 * v366) + (v366 * v366)) + v374) * v359))
                  * v361)
                 + *(&v983 + 1);
    *(&v981 + 2) = ((((((v365 * v365) + (v365 * v365)) + v374) * v358)
                   + (((*&v371 + v369) * v359) + ((((v365 + v365) * *&v364) - v368) * v360)))
                  * v361)
                 + v984;
    v375 = *(a2 + 0x1EC);
    if ( !sub_B96C20(a2, &v981, &v985, &v971) )
    {
      v379 = v992;
      if ( !v375 )
        v379 = v997;
      sub_B96E90(v377, v376, v378, v379, &v981, 0x43960000, &v971, &v985);
    }
    v971 = v971 - *&v987;
    v972 = v972 - *(&v987 + 1);
    v380 = (*(v974 + 8))(&v974);
    v381 = *v380;
    v382 = *(v380 + 4);
    v383 = *(v380 + 8);
    v384 = v975;
    if ( (v381 & 0x8000000) != 0 )
      ++v383[1];
    v385 = *(v384 + 0x30);
    v386 = *(v384 + 0x50);
    v387 = v386 + 1;
    v386 *= 0x10i64;
    *(v384 + 0x50) = v387;
    v388 = *(v385 + v386);
    v389 = *(v385 + v386 + 8);
    *(v385 + v386) = v381;
    *(v385 + v386 + 4) = v382;
    *(v385 + v386 + 8) = v383;
    if ( (v381 & 0x8000000) != 0 )
      ++v383[1];
    if ( (v388 & 0x8000000) != 0 )
    {
      v17 = v389[1]-- == 1i64;
      if ( v17 )
        (*(*v389 + 8i64))(v389);
    }
    if ( (v381 & 0x8000000) != 0 )
    {
      v17 = v383[1]-- == 1i64;
      if ( v17 )
        (*(*v383 + 8i64))(v383);
    }
    v390 = *(v975 + 0x30);
    v391 = *(v975 + 0x50);
    *(v975 + 0x50) = v391 + 1;
    v391 *= 0x10i64;
    v17 = (*(v390 + v391) & 0x8000000) == 0;
    v392 = *(v390 + v391 + 8);
    *(v390 + v391) = 0x5000002;
    *(v390 + v391 + 4) = 0;
    *(v390 + v391 + 8) = v362;
    if ( !v17 )
    {
      v17 = v392[1]-- == 1i64;
      if ( v17 )
        (*(*v392 + 8i64))(v392);
    }
    v393 = v971;
    v394 = *(v975 + 0x30);
    v395 = *(v975 + 0x50);
    *(v975 + 0x50) = v395 + 1;
    v395 *= 0x10i64;
    v396 = *(v394 + v395 + 8);
    v17 = (*(v394 + v395) & 0x8000000) == 0;
    *(v394 + v395) = 0x5000004;
    *(v394 + v395 + 4) = 0;
    *(v394 + v395 + 8) = v393;
    *(v394 + v395 + 0xC) = 0;
    if ( !v17 )
    {
      v17 = v396[1]-- == 1i64;
      if ( v17 )
        (*(*v396 + 8i64))(v396);
    }
    sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
    v397 = *(v975 + 0x30);
    v398 = *(v975 + 0x50) - 1i64;
    *(v975 + 0x50) = v398;
    v398 *= 0x10i64;
    v399 = *(v397 + v398 + 8);
    v17 = (*(v397 + v398) & 0x8000000) == 0;
    *(v397 + v398) = 0i64;
    *(v397 + v398) = 0x1000001;
    if ( !v17 )
    {
      v17 = v399[1]-- == 1i64;
      if ( v17 )
        (*(*v399 + 8i64))(v399);
    }
    v400 = (*(v974 + 8))(&v974);
    v401 = *v400;
    v402 = *(v400 + 4);
    v403 = *(v400 + 8);
    v404 = v975;
    if ( (v401 & 0x8000000) != 0 )
      ++v403[1];
    v405 = *(v404 + 0x30);
    v406 = *(v404 + 0x50);
    v407 = v406 + 1;
    v406 *= 0x10i64;
    *(v404 + 0x50) = v407;
    v408 = *(v405 + v406);
    v409 = *(v405 + v406 + 8);
    *(v405 + v406) = v401;
    *(v405 + v406 + 4) = v402;
    *(v405 + v406 + 8) = v403;
    if ( (v401 & 0x8000000) != 0 )
      ++v403[1];
    if ( (v408 & 0x8000000) != 0 )
    {
      v17 = v409[1]-- == 1i64;
      if ( v17 )
        (*(*v409 + 8i64))(v409);
    }
    v410 = v362 | 1;
    if ( (v401 & 0x8000000) != 0 )
    {
      v17 = v403[1]-- == 1i64;
      if ( v17 )
        (*(*v403 + 8i64))(v403);
    }
    v411 = *(v975 + 0x30);
    v412 = *(v975 + 0x50);
    *(v975 + 0x50) = v412 + 1;
    v412 *= 0x10i64;
    v17 = (*(v411 + v412) & 0x8000000) == 0;
    v413 = *(v411 + v412 + 8);
    *(v411 + v412) = 0x5000002;
    *(v411 + v412 + 4) = 0;
    *(v411 + v412 + 8) = v410;
    if ( !v17 )
    {
      v17 = v413[1]-- == 1i64;
      if ( v17 )
        (*(*v413 + 8i64))(v413);
    }
    v414 = v972;
    v415 = *(v975 + 0x30);
    v416 = *(v975 + 0x50);
    *(v975 + 0x50) = v416 + 1;
    v416 *= 0x10i64;
    v417 = *(v415 + v416 + 8);
    v17 = (*(v415 + v416) & 0x8000000) == 0;
    *(v415 + v416) = 0x5000004;
    *(v415 + v416 + 4) = 0;
    *(v415 + v416 + 8) = v414;
    *(v415 + v416 + 0xC) = 0;
    if ( !v17 )
    {
      v17 = v417[1]-- == 1i64;
      if ( v17 )
        (*(*v417 + 8i64))(v417);
    }
    sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
    v418 = *(v975 + 0x30);
    v419 = *(v975 + 0x50) - 1i64;
    *(v975 + 0x50) = v419;
    v419 *= 0x10i64;
    v420 = *(v418 + v419 + 8);
    v17 = (*(v418 + v419) & 0x8000000) == 0;
    *(v418 + v419) = 0i64;
    *(v418 + v419) = 0x1000001;
    if ( !v17 )
    {
      v17 = v420[1]-- == 1i64;
      if ( v17 )
        (*(*v420 + 8i64))(v420);
    }
    *&v372 = (v410 * *&dword_44CB704) + *&dword_44CB708;
    v421 = v372;
    *&v421 = sinf(*&v372) * v994;
    v422 = v421;
    *&v422 = *&v421 * v967;
    v423 = *&v421 * v966;
    *&v421 = *&v421 * v964;
    v424 = cosf(*&v372);
    v425 = (v423 + v423) * v424;
    v426 = (*&v422 + *&v422) * v423;
    v427 = (*&v421 + *&v421) * v424;
    v428 = (*&v422 + *&v422) * v424;
    v429 = ((v424 * v424) + (v424 * v424)) + *&dword_44801E8;
    v430 = (*&v421 + *&v421) * v423;
    *&v981 = (((((v425 + ((*&v422 + *&v422) * *&v421)) * v358) + ((v430 - v428) * v359))
             + ((((*&v421 * *&v421) + (*&v421 * *&v421)) + v429) * v360))
            * v361)
           + *&v983;
    *(&v981 + 1) = (((((v426 - v427) * v358) + ((v428 + v430) * v360))
                   + ((((v423 * v423) + (v423 * v423)) + v429) * v359))
                  * v361)
                 + *(&v983 + 1);
    *(&v981 + 2) = ((((((*&v422 * *&v422) + (*&v422 * *&v422)) + v429) * v358)
                   + (((v427 + v426) * v359) + ((((*&v422 + *&v422) * *&v421) - v425) * v360)))
                  * v361)
                 + v984;
    v431 = *(a2 + 0x1EC);
    if ( !sub_B96C20(a2, &v981, &v985, &v971) )
    {
      v435 = v992;
      if ( !v431 )
        v435 = v997;
      sub_B96E90(v433, v432, v434, v435, &v981, 0x43960000, &v971, &v985);
    }
    v971 = v971 - *&v987;
    v972 = v972 - *(&v987 + 1);
    v436 = (*(v974 + 8))(&v974);
    v437 = *v436;
    v438 = *(v436 + 4);
    v439 = *(v436 + 8);
    v440 = v975;
    if ( (v437 & 0x8000000) != 0 )
      ++v439[1];
    v441 = *(v440 + 0x30);
    v442 = *(v440 + 0x50);
    v443 = v442 + 1;
    v442 *= 0x10i64;
    *(v440 + 0x50) = v443;
    v444 = *(v441 + v442);
    v445 = *(v441 + v442 + 8);
    *(v441 + v442) = v437;
    *(v441 + v442 + 4) = v438;
    *(v441 + v442 + 8) = v439;
    if ( (v437 & 0x8000000) != 0 )
      ++v439[1];
    if ( (v444 & 0x8000000) != 0 )
    {
      v17 = v445[1]-- == 1i64;
      if ( v17 )
        (*(*v445 + 8i64))(v445);
    }
    if ( (v437 & 0x8000000) != 0 )
    {
      v17 = v439[1]-- == 1i64;
      if ( v17 )
        (*(*v439 + 8i64))(v439);
    }
    v446 = *(v975 + 0x30);
    v447 = *(v975 + 0x50);
    *(v975 + 0x50) = v447 + 1;
    v447 *= 0x10i64;
    v17 = (*(v446 + v447) & 0x8000000) == 0;
    v448 = *(v446 + v447 + 8);
    *(v446 + v447) = 0x5000002;
    *(v446 + v447 + 4) = 0;
    *(v446 + v447 + 8) = v362 | 2;
    if ( !v17 )
    {
      v17 = v448[1]-- == 1i64;
      if ( v17 )
        (*(*v448 + 8i64))(v448);
    }
    v449 = v971;
    v450 = *(v975 + 0x30);
    v451 = *(v975 + 0x50);
    *(v975 + 0x50) = v451 + 1;
    v451 *= 0x10i64;
    v452 = *(v450 + v451 + 8);
    v17 = (*(v450 + v451) & 0x8000000) == 0;
    *(v450 + v451) = 0x5000004;
    *(v450 + v451 + 4) = 0;
    *(v450 + v451 + 8) = v449;
    *(v450 + v451 + 0xC) = 0;
    if ( !v17 )
    {
      v17 = v452[1]-- == 1i64;
      if ( v17 )
        (*(*v452 + 8i64))(v452);
    }
    sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
    v453 = *(v975 + 0x30);
    v454 = *(v975 + 0x50) - 1i64;
    *(v975 + 0x50) = v454;
    v454 *= 0x10i64;
    v455 = *(v453 + v454 + 8);
    v17 = (*(v453 + v454) & 0x8000000) == 0;
    *(v453 + v454) = 0i64;
    *(v453 + v454) = 0x1000001;
    if ( !v17 )
    {
      v17 = v455[1]-- == 1i64;
      if ( v17 )
        (*(*v455 + 8i64))(v455);
    }
    v456 = (*(v974 + 8))(&v974);
    v457 = *v456;
    v458 = *(v456 + 4);
    v459 = *(v456 + 8);
    v460 = v975;
    if ( (v457 & 0x8000000) != 0 )
      ++v459[1];
    v461 = *(v460 + 0x30);
    v462 = *(v460 + 0x50);
    v463 = v462 + 1;
    v462 *= 0x10i64;
    *(v460 + 0x50) = v463;
    v464 = *(v461 + v462);
    v465 = *(v461 + v462 + 8);
    *(v461 + v462) = v457;
    *(v461 + v462 + 4) = v458;
    *(v461 + v462 + 8) = v459;
    if ( (v457 & 0x8000000) != 0 )
      ++v459[1];
    if ( (v464 & 0x8000000) != 0 )
    {
      v17 = v465[1]-- == 1i64;
      if ( v17 )
        (*(*v465 + 8i64))(v465);
    }
    if ( (v457 & 0x8000000) != 0 )
    {
      v17 = v459[1]-- == 1i64;
      if ( v17 )
        (*(*v459 + 8i64))(v459);
    }
    v466 = *(v975 + 0x30);
    v467 = *(v975 + 0x50);
    *(v975 + 0x50) = v467 + 1;
    v467 *= 0x10i64;
    v17 = (*(v466 + v467) & 0x8000000) == 0;
    v468 = *(v466 + v467 + 8);
    *(v466 + v467) = 0x5000002;
    *(v466 + v467 + 4) = 0;
    *(v466 + v467 + 8) = v362 | 3;
    if ( !v17 )
    {
      v17 = v468[1]-- == 1i64;
      if ( v17 )
        (*(*v468 + 8i64))(v468);
    }
    v469 = v972;
    v470 = *(v975 + 0x30);
    v471 = *(v975 + 0x50);
    *(v975 + 0x50) = v471 + 1;
    v471 *= 0x10i64;
    v472 = *(v470 + v471 + 8);
    v17 = (*(v470 + v471) & 0x8000000) == 0;
    *(v470 + v471) = 0x5000004;
    *(v470 + v471 + 4) = 0;
    *(v470 + v471 + 8) = v469;
    *(v470 + v471 + 0xC) = 0;
    if ( !v17 )
    {
      v17 = v472[1]-- == 1i64;
      if ( v17 )
        (*(*v472 + 8i64))(v472);
    }
    sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
    v473 = *(v975 + 0x30);
    v474 = *(v975 + 0x50) - 1i64;
    *(v975 + 0x50) = v474;
    v474 *= 0x10i64;
    v475 = *(v473 + v474 + 8);
    v17 = (*(v473 + v474) & 0x8000000) == 0;
    *(v473 + v474) = 0i64;
    *(v473 + v474) = 0x1000001;
    if ( !v17 )
    {
      v17 = v475[1]-- == 1i64;
      if ( v17 )
        (*(*v475 + 8i64))(v475);
    }
    v341 = v362 < 0x3C;
    v362 += 4i64;
  }
  while ( v341 );
  v1012 = v990 * (v358 * v970);
  v1011 = v990 * (v359 * v970);
  v969 = v990 * (v360 * v970);
  v993 = (v358 * v970) * (v977 * v990);
  ZPosition_ = (v359 * v970) * (v977 * v990);
  v977 = v977 * v990;
  v968 = (v360 * v970) * v977;
  v476 = 0i64;
  do
  {
    if ( v476 )
    {
      *&v422 = v476 * *&dword_44CB70C;
      v477 = v422;
      *&v477 = sinf(*&v422) * v994;
      v478 = v477;
      *&v478 = *&v477 * v967;
      v479 = *&v477 * v966;
      *&v477 = *&v477 * v964;
      v480 = cosf(*&v422);
      v481 = v478;
      *&v481 = *&v478 + *&v478;
      v482 = (*&v478 + *&v478) * *&v477;
      v483 = (v479 + v479) * v480;
      v422 = v481;
      *&v422 = (*&v478 + *&v478) * v479;
      v484 = (*&v477 + *&v477) * v480;
      *&v481 = (*&v478 + *&v478) * v480;
      v485 = ((v480 * v480) + (v480 * v480)) + *&dword_44801E8;
      v486 = (*&v477 + *&v477) * v479;
      v487 = (((((*&v478 * *&v478) + (*&v478 * *&v478)) + v485) * v358)
            + (((v484 + *&v422) * v359) + ((v482 - v483) * v360)))
           * v970;
      v488 = ((((v483 + v482) * v358) + ((v486 - *&v481) * v359))
            + ((((*&v477 * *&v477) + (*&v477 * *&v477)) + v485) * v360))
           * v970;
      *&v422 = ((((*&v422 - v484) * v358) + ((*&v481 + v486) * v360)) + ((((v479 * v479) + (v479 * v479)) + v485) * v359))
             * v970;
      *&v981 = (v488 * v990) + *&v983;
      *(&v981 + 1) = (*&v422 * v990) + *(&v983 + 1);
      *(&v981 + 2) = (v487 * v990) + v984;
      if ( !sub_B96C20(a2, &v981, &v985, &v971) )
      {
        v492 = v992;
        if ( !*(a2 + 0x1EC) )
          v492 = v997;
        sub_B96E90(v490, v489, v491, v492, &v981, 0x43960000, &v971, &v995);
      }
      v971 = v971 - *&v987;
      v972 = v972 - *(&v987 + 1);
      v493 = (*(v974 + 8))(&v974);
      v494 = *v493;
      v495 = *(v493 + 4);
      v496 = *(v493 + 8);
      v497 = v975;
      if ( (v494 & 0x8000000) != 0 )
        ++v496[1];
      v498 = *(v497 + 0x30);
      v499 = *(v497 + 0x50);
      v500 = v499 + 1;
      v499 *= 0x10i64;
      *(v497 + 0x50) = v500;
      v501 = *(v498 + v499);
      v502 = *(v498 + v499 + 8);
      *(v498 + v499) = v494;
      *(v498 + v499 + 4) = v495;
      *(v498 + v499 + 8) = v496;
      if ( (v494 & 0x8000000) != 0 )
        ++v496[1];
      if ( (v501 & 0x8000000) != 0 )
      {
        v17 = v502[1]-- == 1i64;
        if ( v17 )
          (*(*v502 + 8i64))(v502);
      }
      if ( (v494 & 0x8000000) != 0 )
      {
        v17 = v496[1]-- == 1i64;
        if ( v17 )
          (*(*v496 + 8i64))(v496);
      }
      v503 = *(v975 + 0x30);
      v504 = *(v975 + 0x50);
      *(v975 + 0x50) = v504 + 1;
      v504 *= 0x10i64;
      v17 = (*(v503 + v504) & 0x8000000) == 0;
      v505 = *(v503 + v504 + 8);
      *(v503 + v504) = 0x5000002;
      *(v503 + v504 + 4) = 0;
      *(v503 + v504 + 8) = v476 + 0x40;
      if ( !v17 )
      {
        v17 = v505[1]-- == 1i64;
        if ( v17 )
          (*(*v505 + 8i64))(v505);
      }
      v506 = v971;
      v507 = *(v975 + 0x30);
      v508 = *(v975 + 0x50);
      *(v975 + 0x50) = v508 + 1;
      v508 *= 0x10i64;
      v509 = *(v507 + v508 + 8);
      v17 = (*(v507 + v508) & 0x8000000) == 0;
      *(v507 + v508) = 0x5000004;
      *(v507 + v508 + 4) = 0;
      *(v507 + v508 + 8) = v506;
      *(v507 + v508 + 0xC) = 0;
      if ( !v17 )
      {
        v17 = v509[1]-- == 1i64;
        if ( v17 )
          (*(*v509 + 8i64))(v509);
      }
      sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
      v510 = *(v975 + 0x30);
      v511 = *(v975 + 0x50) - 1i64;
      *(v975 + 0x50) = v511;
      v511 *= 0x10i64;
      v512 = *(v510 + v511 + 8);
      v17 = (*(v510 + v511) & 0x8000000) == 0;
      *(v510 + v511) = 0i64;
      *(v510 + v511) = 0x1000001;
      if ( !v17 )
      {
        v17 = v512[1]-- == 1i64;
        if ( v17 )
          (*(*v512 + 8i64))(v512);
      }
      v513 = (*(v974 + 8))(&v974);
      v514 = *v513;
      v515 = *(v513 + 4);
      v516 = *(v513 + 8);
      v517 = v975;
      if ( (v514 & 0x8000000) != 0 )
        ++v516[1];
      v518 = *(v517 + 0x30);
      v519 = *(v517 + 0x50);
      v520 = v519 + 1;
      v519 *= 0x10i64;
      *(v517 + 0x50) = v520;
      v521 = *(v518 + v519);
      v522 = *(v518 + v519 + 8);
      *(v518 + v519) = v514;
      *(v518 + v519 + 4) = v515;
      *(v518 + v519 + 8) = v516;
      if ( (v514 & 0x8000000) != 0 )
        ++v516[1];
      if ( (v521 & 0x8000000) != 0 )
      {
        v17 = v522[1]-- == 1i64;
        if ( v17 )
          (*(*v522 + 8i64))(v522);
      }
      if ( (v514 & 0x8000000) != 0 )
      {
        v17 = v516[1]-- == 1i64;
        if ( v17 )
          (*(*v516 + 8i64))(v516);
      }
      v523 = *(v975 + 0x30);
      v524 = *(v975 + 0x50);
      *(v975 + 0x50) = v524 + 1;
      v524 *= 0x10i64;
      v17 = (*(v523 + v524) & 0x8000000) == 0;
      v525 = *(v523 + v524 + 8);
      *(v523 + v524) = 0x5000002;
      *(v523 + v524 + 4) = 0;
      *(v523 + v524 + 8) = v476 + 0x41;
      if ( !v17 )
      {
        v17 = v525[1]-- == 1i64;
        if ( v17 )
          (*(*v525 + 8i64))(v525);
      }
      v526 = v972;
      v527 = *(v975 + 0x30);
      v528 = *(v975 + 0x50);
      *(v975 + 0x50) = v528 + 1;
      v528 *= 0x10i64;
      v529 = *(v527 + v528 + 8);
      v17 = (*(v527 + v528) & 0x8000000) == 0;
      *(v527 + v528) = 0x5000004;
      *(v527 + v528 + 4) = 0;
      *(v527 + v528 + 8) = v526;
      *(v527 + v528 + 0xC) = 0;
      if ( !v17 )
      {
        v17 = v529[1]-- == 1i64;
        if ( v17 )
          (*(*v529 + 8i64))(v529);
      }
      sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
      v530 = *(v975 + 0x30);
      v531 = *(v975 + 0x50) - 1i64;
      *(v975 + 0x50) = v531;
      v531 *= 0x10i64;
      v532 = *(v530 + v531 + 8);
      v17 = (*(v530 + v531) & 0x8000000) == 0;
      *(v530 + v531) = 0i64;
      *(v530 + v531) = 0x1000001;
      if ( !v17 )
      {
        v17 = v532[1]-- == 1i64;
        if ( v17 )
          (*(*v532 + 8i64))(v532);
      }
      *&v981 = (v488 * v977) + *&v983;
      *(&v981 + 1) = (*&v422 * v977) + *(&v983 + 1);
      *(&v981 + 2) = (v487 * v977) + v984;
      if ( !sub_B96C20(a2, &v981, &v985, &v971) )
      {
        v536 = v992;
        if ( !*(a2 + 0x1EC) )
          v536 = v997;
        sub_B96E90(v534, v533, v535, v536, &v981, 0x43960000, &v971, &v995);
      }
      v971 = v971 - *&v987;
      v972 = v972 - *(&v987 + 1);
      v537 = (*(v974 + 8))(&v974);
      v538 = *v537;
      v539 = *(v537 + 4);
      v540 = *(v537 + 8);
      v541 = v975;
      if ( (v538 & 0x8000000) != 0 )
        ++v540[1];
      v542 = *(v541 + 0x30);
      v543 = *(v541 + 0x50);
      v544 = v543 + 1;
      v543 *= 0x10i64;
      *(v541 + 0x50) = v544;
      v545 = *(v542 + v543);
      v546 = *(v542 + v543 + 8);
      *(v542 + v543) = v538;
      *(v542 + v543 + 4) = v539;
      *(v542 + v543 + 8) = v540;
      if ( (v538 & 0x8000000) != 0 )
        ++v540[1];
      if ( (v545 & 0x8000000) != 0 )
      {
        v17 = v546[1]-- == 1i64;
        if ( v17 )
          (*(*v546 + 8i64))(v546);
      }
      if ( (v538 & 0x8000000) != 0 )
      {
        v17 = v540[1]-- == 1i64;
        if ( v17 )
          (*(*v540 + 8i64))(v540);
      }
      v547 = *(v975 + 0x30);
      v548 = *(v975 + 0x50);
      *(v975 + 0x50) = v548 + 1;
      v548 *= 0x10i64;
      v17 = (*(v547 + v548) & 0x8000000) == 0;
      v549 = *(v547 + v548 + 8);
      *(v547 + v548) = 0x5000002;
      *(v547 + v548 + 4) = 0;
      *(v547 + v548 + 8) = v476 + 0x42;
      if ( !v17 )
      {
        v17 = v549[1]-- == 1i64;
        if ( v17 )
          (*(*v549 + 8i64))(v549);
      }
      v550 = v971;
      v551 = *(v975 + 0x30);
      v552 = *(v975 + 0x50);
      *(v975 + 0x50) = v552 + 1;
      v552 *= 0x10i64;
      v553 = *(v551 + v552 + 8);
      v17 = (*(v551 + v552) & 0x8000000) == 0;
      *(v551 + v552) = 0x5000004;
      *(v551 + v552 + 4) = 0;
      *(v551 + v552 + 8) = v550;
      *(v551 + v552 + 0xC) = 0;
      if ( !v17 )
      {
        v17 = v553[1]-- == 1i64;
        if ( v17 )
          (*(*v553 + 8i64))(v553);
      }
      sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
      v554 = *(v975 + 0x30);
      v555 = *(v975 + 0x50) - 1i64;
      *(v975 + 0x50) = v555;
      v555 *= 0x10i64;
      v556 = *(v554 + v555 + 8);
      v17 = (*(v554 + v555) & 0x8000000) == 0;
      *(v554 + v555) = 0i64;
      *(v554 + v555) = 0x1000001;
      if ( !v17 )
      {
        v17 = v556[1]-- == 1i64;
        if ( v17 )
          (*(*v556 + 8i64))(v556);
      }
      v557 = (*(v974 + 8))(&v974);
      v558 = *v557;
      v559 = *(v557 + 4);
      v560 = *(v557 + 8);
      v561 = v975;
      if ( (v558 & 0x8000000) != 0 )
        ++v560[1];
      v562 = *(v561 + 0x30);
      v563 = *(v561 + 0x50);
      v564 = v563 + 1;
      v563 *= 0x10i64;
      *(v561 + 0x50) = v564;
      v565 = *(v562 + v563);
      v566 = *(v562 + v563 + 8);
      *(v562 + v563) = v558;
      *(v562 + v563 + 4) = v559;
      *(v562 + v563 + 8) = v560;
      if ( (v558 & 0x8000000) != 0 )
        ++v560[1];
      if ( (v565 & 0x8000000) != 0 )
      {
        v17 = v566[1]-- == 1i64;
        if ( v17 )
          (*(*v566 + 8i64))(v566);
      }
      if ( (v558 & 0x8000000) != 0 )
      {
        v17 = v560[1]-- == 1i64;
        if ( v17 )
          (*(*v560 + 8i64))(v560);
      }
      v567 = *(v975 + 0x30);
      v568 = *(v975 + 0x50);
      *(v975 + 0x50) = v568 + 1;
      v568 *= 0x10i64;
      v17 = (*(v567 + v568) & 0x8000000) == 0;
      v569 = *(v567 + v568 + 8);
      *(v567 + v568) = 0x5000002;
      *(v567 + v568 + 4) = 0;
      *(v567 + v568 + 8) = v476 + 0x43;
      if ( !v17 )
      {
        v17 = v569[1]-- == 1i64;
        if ( v17 )
          (*(*v569 + 8i64))(v569);
      }
      v570 = v972;
      v571 = *(v975 + 0x30);
      v572 = *(v975 + 0x50);
      *(v975 + 0x50) = v572 + 1;
      v572 *= 0x10i64;
      v573 = *(v571 + v572 + 8);
      v17 = (*(v571 + v572) & 0x8000000) == 0;
      *(v571 + v572) = 0x5000004;
      *(v571 + v572 + 4) = 0;
      *(v571 + v572 + 8) = v570;
      *(v571 + v572 + 0xC) = 0;
      if ( !v17 )
      {
        v17 = v573[1]-- == 1i64;
        if ( v17 )
          (*(*v573 + 8i64))(v573);
      }
      sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
      v574 = *(v975 + 0x30);
      v575 = *(v975 + 0x50) - 1i64;
      *(v975 + 0x50) = v575;
      v575 *= 0x10i64;
      v576 = *(v574 + v575 + 8);
      v17 = (*(v574 + v575) & 0x8000000) == 0;
      *(v574 + v575) = 0i64;
      *(v574 + v575) = 0x1000001;
      if ( !v17 )
      {
        v17 = v576[1]-- == 1i64;
        if ( v17 )
          (*(*v576 + 8i64))(v576);
      }
    }
    else
    {
      v971 = *&v983 + v969;
      v972 = *(&v983 + 1) + v1011;
      v973 = v984 + v1012;
      sub_B971C0(a2, &v971, &v985, 1i64);
      v985 = v985 - *&v987;
      v986 = v986 - *(&v987 + 1);
      v981 = *(*(v974 + 8))(&v974);
      sub_176F230(v975, &v981);
      sub_176A100(v975, 0x40i64);
      sub_176A1B0(v975);
      sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
      sub_176D800(v975, 1i64);
      v981 = *(*(v974 + 8))(&v974);
      sub_176F230(v975, &v981);
      sub_176A100(v975, 0x41i64);
      sub_176A1B0(v975);
      sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
      sub_176D800(v975, 1i64);
      v971 = *&v983 + v968;
      v972 = *(&v983 + 1) + ZPosition_;
      v973 = v984 + v993;
      sub_B97130(a2, &v971, &v985, &v995, 1);
      v985 = v985 - *&v987;
      v986 = v986 - *(&v987 + 1);
      v981 = *(*(v974 + 8))(&v974);
      sub_176F230(v975, &v981);
      sub_176A100(v975, 0x42i64);
      sub_176A1B0(v975);
      sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
      sub_176D800(v975, 1i64);
      v981 = *(*(v974 + 8))(&v974);
      sub_176F230(v975, &v981);
      sub_176A100(v975, 0x43i64);
      sub_176A1B0(v975);
      sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
      sub_176D800(v975, 1i64);
    }
    v341 = v476 < 0xC;
    v476 += 4i64;
  }
  while ( v341 );
  v1060[0] = &off_44A93B0;
  v1060[1] = v975;
  v1061 = v976;
  sub_1769E60(v975, &v1061);
  v1060[0] = &off_44A93B0;
  sub_B8B950(qword_4B173B8 + 0x2DB8, v1060);
  v580 = qword_4B173B8;
  if ( *(qword_4B173B8 + 0xB88) != 5 || *(qword_4B173B8 + 0x2E18) != 1 )
  {
    *(qword_4B173B8 + 0xB88) = 5;
    v580[0x2E18] = 1;
    sub_224C10(v580 + 0x2DF0);
    v580 = qword_4B173B8;
  }
  v72 = v1003;
  v73 = v1000;
  v32 = LODWORD(v1001);
  v33 = v989;
  v34 = LODWORD(v988);
  v581 = *&v1013;
  v582 = v982;
  v583 = v987;
  if ( *(v580 + 0xB96) != 3 || *(v580 + 0xB94) != *&v987 )
  {
    *(v580 + 0xB96) = 3;
    *(v580 + 0xB94) = v583;
    sub_B82CC0(v580 + 0x2E28, v577, v578, v579);
    v580 = qword_4B173B8;
  }
  v584 = HIDWORD(v987);
  if ( *(v580 + 0xBA4) != 3 || *(v580 + 0xBA2) != *(&v987 + 1) )
  {
    *(v580 + 0xBA4) = 3;
    *(v580 + 0xBA2) = v584;
    sub_B82CC0(v580 + 0x2E60, v577, v578, v579);
    v580 = qword_4B173B8;
  }
  v585 = *(game + 0x498);
  v586 = *(v585 + 0x2800) * v581;
  if ( *(v580 + 0xBB2) != 3 || *(v580 + 0xBB0) != v586 )
  {
    *(v580 + 0xBB2) = 3;
    *(v580 + 0xBB0) = v586;
    sub_B82CC0(v580 + 0x2E98, v585, v578, v579);
    v580 = qword_4B173B8;
  }
  v587 = qword_4480160 - v582;
  if ( *(v580 + 0xBC0) != 4 || *(v580 + 0x5DF) != v587 )
  {
    *(v580 + 0xBC0) = 4;
    *(v580 + 0x5DF) = v587;
    sub_B83FF0(v580 + 0x2ED0);
    v580 = qword_4B173B8;
  }
  v588 = *(game + 0x498);
  v589 = *(v588 + 0x2818);
  if ( *(v580 + 0xC30) != 3 || *(v580 + 0xC2E) != v589 )
  {
    *(v580 + 0xC30) = 3;
    *(v580 + 0xC2E) = v589;
    sub_B82CC0(v580 + 0x3090, v588, v578, v579);
    v580 = qword_4B173B8;
    v588 = *(game + 0x498);
  }
  v590 = *(v588 + 0x2824);
  if ( *(v580 + 0xC5A) != 3 || *(v580 + 0xC58) != v590 )
  {
    *(v580 + 0xC5A) = 3;
    *(v580 + 0xC58) = v590;
    sub_B82CC0(v580 + 0x3138, v588, v578, v579);
    v580 = qword_4B173B8;
    v588 = *(game + 0x498);
  }
  v5 = *(v588 + 0x2834);
  if ( *(v580 + 0xC92) != 3 || *(v580 + 0xC90) != v5.m128_f32[0] )
  {
    *(v580 + 0xC92) = 3;
    *(v580 + 0xC90) = v5.m128_i32[0];
    sub_B82CC0(v580 + 0x3218, v588, v578, v579);
  }
  *v5.m128_u64 = sub_B8BF80(&v974);
LABEL_696:
  v185 = v991;
LABEL_697:
  if ( v1018 | v1010 )
  {
    if ( byte_4B19A94 )
    {
      v591 = 0;
      goto LABEL_705;
    }
LABEL_703:
    v591 = 1;
    if ( ballistics_A68_qword )
      sub_B836B0(ballistics_A68_qword, v182);
  }
  else
  {
    v591 = 0;
    if ( v185 == 0xC && (*(mUnit__ + 0x1080) & 0x8000000) != 0 && !byte_4B19A94 )
      goto LABEL_703;
  }
LABEL_705:
  v592 = qword_4B173B8;
  if ( *(qword_4B173B8 + 0x10F2) != 5 || *(qword_4B173B8 + 0x43C0) != v591 )
  {
    *(qword_4B173B8 + 0x10F2) = 5;
    v592[0x43C0] = v591;
    sub_224C10(v592 + 0x4398);
  }
  v593 = *(mUnit__ + 0x1080);
  if ( (v593 & 0x8000000) != 0 || *(*(game + 0x498) + 0x27F4i64) )
  {
    if ( (*v73 & 4) == 0 )
    {
      v594 = some_ballistics_thing(*(game + 0x630));
      v595 = qword_4B173B8;
      if ( v594 )
      {
        v593 = *(mUnit__ + 0x1080);
        goto LABEL_714;
      }
      if ( *(qword_4B173B8 + 0xAE0) == 5 && !*(qword_4B173B8 + 0x2B78) )
      {
        v600 = 0;
        goto LABEL_745;
      }
      *(qword_4B173B8 + 0xAE0) = 5;
      v595[0x2B78] = 0;
      v600 = 0;
LABEL_744:
      sub_224C10(v595 + 0x2B50);
      v595 = qword_4B173B8;
      goto LABEL_745;
    }
    v595 = qword_4B173B8;
LABEL_714:
    if ( (v593 & 0x8000000) != 0 )
    {
      v598 = v595 + 0x2B80;
      v599 = (v595 + 0x2B78);
      v600 = 1;
      if ( *(v595 + 0xAE0) != 5 || v595[0x2B78] != 1 )
      {
LABEL_743:
        *v598 = 5;
        *v599 = v600;
        v600 = 1;
        goto LABEL_744;
      }
    }
    else
    {
      v596 = *(game + 0x498);
      if ( !*(v596 + 0x27ED) || (v597 = 1, !*(*(game + 0x430) + 0xD5i64)) )
        v597 = byte_4B19A94 && *(v596 + 0x27EE) && *(*(game + 0x430) + 0xD6i64) != 0;
      if ( *(v595 + 0xAE0) != 5 || (v600 = 1, v595[0x2B78] != v597) )
      {
        v598 = v595 + 0x2B80;
        v599 = (v595 + 0x2B78);
        v600 = 1;
        if ( (v593 & 0x8000000) == 0 )
        {
          v601 = *(game + 0x498);
          if ( !*(v601 + 0x27ED) || !*(*(game + 0x430) + 0xD5i64) )
            v600 = byte_4B19A94 && *(v601 + 0x27EE) && *(*(game + 0x430) + 0xD6i64) != 0;
        }
        goto LABEL_743;
      }
    }
LABEL_745:
    v610 = game;
    *v5.m128_u64 = sub_5655B0(game) * *&qword_44819B0;
    v611 = _mm_or_pd(_mm_and_pd(xmmword_44801A0, v5), xmmword_44CB6B0);
    v611.m128d_f64[0] = v611.m128d_f64[0] + *v5.m128_u64;
    *v5.m128_u64 = _mm_round_sd(0i64, v611, 0xB).m128d_f64[0] * *&qword_4487D98;
    if ( *(v595 + 0xAEE) != 4 || *(v595 + 0x576) != *v5.m128_u64 )
    {
      *(v595 + 0xAEE) = 4;
      *(v595 + 0x576) = v5.m128_u64[0];
      *v5.m128_u64 = sub_5655B0(v610) * *&qword_44819B0;
      sub_B83FF0(v595 + 0x2B88);
    }
    if ( v600 )
    {
      v612 = qword_4B173B8;
      v613 = *(*(game + 0x440) + 0x97Di64);
      if ( *(qword_4B173B8 + 0x1CEC) != 5 || *(qword_4B173B8 + 0x73A8) != v613 )
      {
        *(qword_4B173B8 + 0x1CEC) = 5;
        v612[0x73A8] = v613;
        sub_224C10(v612 + 0x7380);
        v612 = qword_4B173B8;
      }
      v614 = 0xFFFFFFFF;
      if ( *(mUnit__ + 0x1238) )
      {
        v615 = 0i64;
        while ( 1 )
        {
          v616 = *(*(mUnit__ + 0x1228) + 8 * v615);
          v617 = (*(*v616 + 0xA0i64))(v616);
          if ( v617 != 0xFFFFFFFF )
            break;
          if ( ++v615 >= *(mUnit__ + 0x1238) )
            goto LABEL_758;
        }
        v614 = v617;
      }
LABEL_758:
      if ( *(v612 + 0x1CFA) != 5 || v612[0x73E0] != (v614 != 0xFFFFFFFF) )
      {
        v618 = mUnit__;
        if ( *(mUnit__ + 0x1238) )
        {
          v619 = 0i64;
          do
          {
            v620 = *(*(mUnit__ + 0x1228) + 8 * v619);
            v621 = (*(*v620 + 0xA0i64))(v620);
            if ( v621 != 0xFFFFFFFF )
              break;
            ++v619;
          }
          while ( v619 < *(mUnit__ + 0x1238) );
          v618 = mUnit__;
        }
        else
        {
          v621 = 0xFFFFFFFF;
        }
        v622 = qword_4B173B8;
        *(qword_4B173B8 + 0x1CFA) = 5;
        v622[0x73E0] = v621 != 0xFFFFFFFF;
        if ( *(v618 + 0x1238) )
        {
          v623 = 0i64;
          do
          {
            v624 = *(*(v618 + 0x1228) + 8 * v623);
            if ( (*(*v624 + 0xA0i64))(v624) != 0xFFFFFFFF )
              break;
            ++v623;
          }
          while ( v623 < *(v618 + 0x1238) );
          v622 = qword_4B173B8;
        }
        sub_224C10(v622 + 0x73B8);
      }
      v625 = qword_4B173B8;
      v626 = v980;
      if ( *(qword_4B173B8 + 0x1CDE) != 5 || *(qword_4B173B8 + 0x7370) != v980 )
      {
        *(qword_4B173B8 + 0x1CDE) = 5;
        v625[0x7370] = v626;
        sub_224C10(v625 + 0x7348);
        v625 = qword_4B173B8;
      }
      v627 = *(v72 + 0xC);
      if ( *(v625 + 0x1D16) != 3 || *(v625 + 0x1D14) != v627 )
      {
        *(v625 + 0x1D16) = 3;
        *(v625 + 0x1D14) = v627;
        sub_B82CC0(v625 + 0x7428, v626, v177, v178);
        v625 = qword_4B173B8;
      }
      v628 = *(v72 + 0x10);
      if ( *(v625 + 0x1D24) != 3 || *(v625 + 0x1D22) != v628 )
      {
        *(v625 + 0x1D24) = 3;
        *(v625 + 0x1D22) = v628;
        sub_B82CC0(v625 + 0x7460, v626, v177, v178);
        v625 = qword_4B173B8;
      }
      air_movement_2 = air_movement_;
      v630 = *(*(game + 0x440) + 0x97Fi64);
      if ( *(v625 + 0x109E) != 5 || v625[0x4270] != v630 )
      {
        *(v625 + 0x109E) = 5;
        v625[0x4270] = v630;
        sub_224C10(v625 + 0x4248);
      }
      LOBYTE(v996) = 0;
      LOBYTE(v995) = 0;
      UnitWeaponInfo = *(mUnit__ + 0x11D0);
      if ( *(mUnit__ + 0x11D8) == *(mUnit__ + 0x11E0) && *(UnitWeaponInfo + 0x13B0) == *(UnitWeaponInfo + 0x13B8) )
      {
        v632 = 0;
      }
      else
      {
        LOBYTE(v996) = 1;
        LOBYTE(v995) = 1;
        *Str = &mUnit__;
        *&Str[8] = &XPosition_;
        *&v1005 = &v996;
        *(&v1005 + 1) = &v995;
        sub_B8BFD0(mUnit__, Str);
        *Str = &v996;
        *&Str[8] = &v995;
        sub_B8C2B0(UnitWeaponInfo, Str);
        v632 = v996;
      }
      v633 = qword_4B173B8;
      if ( *(qword_4B173B8 + 0x10AC) != 5 || *(qword_4B173B8 + 0x42A8) != v632 )
      {
        *(qword_4B173B8 + 0x10AC) = 5;
        v633[0x42A8] = v632;
        sub_224C10(v633 + 0x4280);
        v633 = qword_4B173B8;
      }
      v634 = LOBYTE(v995);
      if ( *(v633 + 0x10BA) != 5 || v633[0x42E0] != LOBYTE(v995) )
      {
        *(v633 + 0x10BA) = 5;
        v633[0x42E0] = v634;
        sub_224C10(v633 + 0x42B8);
      }
      LODWORD(v981) = 0;
      v636 = sub_B7C230(mUnit__, &v981);
      v639 = qword_4B173B8;
      v640 = *&v981;
      v641 = dword_44890B4;
      v641.m128_f32[0] = *&dword_44890B4 * *&v981;
      v642 = _mm_or_ps(_mm_and_ps(xmmword_44801F0, v641), xmmword_44C0110);
      v642.m128_f32[0] = v642.m128_f32[0] + (*&dword_44890B4 * *&v981);
      LODWORD(v643) = _mm_round_ss(v642, v642, 0xB).m128_u32[0];
      if ( *(qword_4B173B8 + 0x840) != 3 || *(qword_4B173B8 + 0x83E) != v643 )
      {
        *(qword_4B173B8 + 0x840) = 3;
        *(v639 + 0x83E) = v643;
        sub_B82CC0(v639 + 0x20D0, v635, v637, v638);
        v639 = qword_4B173B8;
      }
      if ( *(v639 + 0x8F6) != 5 || v639[0x23D0] != v636 )
      {
        *(v639 + 0x8F6) = 5;
        v639[0x23D0] = v636;
        sub_224C10(v639 + 0x23A8);
        v639 = qword_4B173B8;
      }
      v644 = *(game + 0x498);
      if ( v640 <= *(v644 + 0x2128) )
      {
        v647 = v640 < *(v644 + 0x2124);
        v645 = v639 + 0x2410;
        v646 = v639 + 0x2408;
        if ( *(v639 + 0x904) != 5 || v639[0x2408] != v647 )
        {
LABEL_805:
          *v645 = 5;
          *v646 = v647;
          sub_224C10(v639 + 0x23E0);
        }
      }
      else
      {
        v645 = v639 + 0x2410;
        v646 = v639 + 0x2408;
        v647 = 1;
        if ( *(v639 + 0x904) != 5 || v639[0x2408] != 1 )
          goto LABEL_805;
      }
      LODWORD(v983) = 0;
      v971 = 0.0;
      LODWORD(v987) = 0;
      v979 = 0;
      v978 = 0;
      sub_B7A6C0(mUnit__, &v983, &v971, &v987, &v979, &v978);
      v651 = qword_4B173B8;
      v652 = v983;
      if ( *(qword_4B173B8 + 0x84E) != 1 || *(qword_4B173B8 + 0x84C) != v983 )
      {
        *(qword_4B173B8 + 0x84E) = 1;
        *(v651 + 0x84C) = v652;
        sub_B831C0(v651 + 0x2108, v652, v649, v650);
        v651 = qword_4B173B8;
      }
      v653 = v971;
      if ( *(v651 + 0x85C) != 3 || v651[0x85A] != v971 )
      {
        *(v651 + 0x85C) = 3;
        v651[0x85A] = v653;
        sub_B82CC0(v651 + 0x2140, v648, v649, v650);
        v651 = qword_4B173B8;
      }
      v654 = v979;
      if ( *(v651 + 0x86A) != 5 || *(v651 + 0x21A0) != v979 )
      {
        *(v651 + 0x86A) = 5;
        *(v651 + 0x21A0) = v654;
        sub_224C10(v651 + 0x85E);
        v651 = qword_4B173B8;
      }
      v655 = v987;
      if ( *(v651 + 0x878) != 1 || *(v651 + 0x876) != v987 )
      {
        *(v651 + 0x878) = 1;
        *(v651 + 0x876) = v655;
        sub_B831C0(v651 + 0x21B0, v655, v649, v650);
        v651 = qword_4B173B8;
      }
      v656 = v978;
      if ( *(v651 + 0x886) != 5 || *(v651 + 0x2210) != v978 )
      {
        *(v651 + 0x886) = 5;
        *(v651 + 0x2210) = v656;
        sub_224C10(v651 + 0x87A);
      }
      v985 = 0.0;
      if ( (*(mUnit__ + 0x1083) & 8) != 0 )
      {
        v658 = *(air_movement_2 + 0x5C4C);
      }
      else
      {
        v657 = (((*(*(game + 0x418) + 0x1F8i64) + *(mUnit__ + 0x9C4))
               * *(qword_4AD8F98 + 0x28i64 * *(*(game + 0x430) + 0x94i64)))
              + *&dword_44801CC);
        v658 = 0i64;
        if ( v657 > 0 )
          v658 = v657;
      }
      v659 = qword_4B173B8;
      if ( *(qword_4B173B8 + 0xAFC) != 1 || *(qword_4B173B8 + 0xAFA) != v658 )
      {
        *(qword_4B173B8 + 0xAFC) = 1;
        *(v659 + 0xAFA) = v658;
        sub_B831C0(v659 + 0x2BC0, v658, v649, v650);
        v659 = qword_4B173B8;
      }
      v660 = *(air_movement_2 + 0x988);
      if ( *(v659 + 0xB0A) != 3 || v659[0xB08] != v660 )
      {
        *(v659 + 0xB0A) = 3;
        v659[0xB08] = v660;
        sub_B82CC0(v659 + 0x2BF8, v658, v649, v650);
        v659 = qword_4B173B8;
      }
      v661 = 0i64;
      v662 = v652 <= *(air_movement_2 + 0x5524);
      if ( *(v659 + 0xB18) != 5 || *(v659 + 0x2C58) != v662 )
      {
        *(v659 + 0xB18) = 5;
        *(v659 + 0x2C58) = v662;
        sub_224C10(v659 + 0xB0C);
      }
      v663 = (byte_4B19A94 ^ 1) + 0x400;
      v664 = !((byte_4B19A94 == 0) & (*(mUnit__ + 0x1083) >> 3)) << 0xA;
      if ( ((byte_4B19A94 == 0) & (*(mUnit__ + 0x1083) >> 3)) != 0 )
        v663 = byte_4B19A94 ^ 1;
      v665 = *(air_movement_2 + 0x19EA);
      *&v666 = 0.0;
      if ( *(air_movement_2 + 0x19EA) && !byte_4B19A94 )
      {
        v667 = *(air_movement_2 + 0x57F8) != 0;
        if ( *(HudInfo + 0x27) )
          v667 = *(air_movement_2 + 0x57F8);
        v668 = qword_4B173B8;
        v669 = v667 >= 2;
        if ( *(qword_4B173B8 + 0x894) != 5 || *(qword_4B173B8 + 0x2248) != v669 )
        {
          *(qword_4B173B8 + 0x894) = 5;
          v668[0x2248] = v669;
          sub_224C10(v668 + 0x2220);
        }
        if ( v667 > 0 )
        {
          v670 = 0i64;
          *&v666 = 0.0;
          do
          {
            if ( !*(**(*(air_movement_2 + 0x3AC8) + 8 * v670 + 8) + 1i64) )
            {
              LOBYTE(air_movement_2) = _bittest(&v665, v670);
              *Str = 0;
              LODWORD(v974) = 0;
              v998 = 4;
              sub_B7A390(mUnit__, v670, &v998, &v974, Str);
              v663 |= 2 << v670;
              v666 |= 2 << v670;
              v664 |= 2 << v670;
              sub_B8C330(v998, *Str, v974, v670);
              v671 = air_movement_2;
              air_movement_2 = air_movement_;
              sub_B8C6A0("updateEngineControl", v670, v671);
            }
            ++v670;
          }
          while ( v667 != v670 );
        }
      }
      v672 = *(*(game + 0x430) + 0x1Ci64);
      if ( (v672 & 0xFFFFFFFD) == 0 || byte_4B19A94 || (*(mUnit__ + 0x1083) & 8) != 0 )
      {
        v663 |= 0x100u;
        v664 |= 0x100u;
      }
      v673 = v666;
      if ( ballistics_A68_qword )
      {
        v674 = 0;
        if ( v653 > *(ballistics_A68_qword + 0x2B4) )
          v674 = (~*(mUnit__ + 0x1080) >> 0x12) & 0x200;
        v663 |= v674;
      }
      if ( (v672 - 1) <= 1 && (*(mUnit__ + 0x1083) & 8) == 0 )
      {
        v663 |= 0x80u;
        v664 |= 0x80u;
      }
      if ( v1021 >= 0 )
      {
        sub_B8C7A0(0, v1021, v649, BYTE6(v1025), v1023, SBYTE12(v1023), v1027);
        v663 |= 0x400000u;
        v673 = v666 | 0x400000;
        sub_B8C6A0(&unk_4868746, 0i64, v1025);
        sub_B8C6A0("updateisCannonJamed", 0i64, BYTE3(v1025));
      }
      if ( (SDWORD1(v1021) & 0x80000000) == 0 )
      {
        sub_B8C7A0(1, DWORD1(v1021), v649, HIBYTE(v1025), SBYTE4(v1023), v1024, SBYTE4(v1027));
        v663 |= 0x800000u;
        v673 |= 0x800000u;
        sub_B8C6A0(&unk_4868746, 1i64, BYTE1(v1025));
        sub_B8C6A0("updateisCannonJamed", 1i64, BYTE4(v1025));
      }
      if ( (SDWORD2(v1021) & 0x80000000) == 0 )
      {
        sub_B8C7A0(2, DWORD2(v1021), v649, v1026, SBYTE8(v1023), SBYTE4(v1024), v1028);
        v663 |= 0x1000000u;
        v673 |= 0x1000000u;
        sub_B8C6A0(&unk_4868746, 2i64, BYTE2(v1025));
        sub_B8C6A0("updateisCannonJamed", 2i64, BYTE5(v1025));
      }
      if ( v1029 >= 0 )
      {
        sub_B8C8F0(0, v1029, v649, HIBYTE(v1033), v1031, SBYTE12(v1031), v1035);
        v663 |= 0x80000u;
        v673 |= 0x80000u;
        sub_B8CA40(0i64, v1033);
      }
      if ( (SDWORD1(v1029) & 0x80000000) == 0 )
      {
        sub_B8C8F0(1, DWORD1(v1029), v649, v1034, SBYTE4(v1031), v1032, SBYTE4(v1035));
        v663 |= 0x100000u;
        v673 |= 0x100000u;
        sub_B8CA40(1i64, BYTE1(v1033));
      }
      v675 = DWORD2(v1029);
      if ( (SDWORD2(v1029) & 0x80000000) == 0 )
      {
        sub_B8C8F0(2, DWORD2(v1029), v649, HIBYTE(v1034), SBYTE8(v1031), SBYTE4(v1032), v1036);
        v663 |= 0x200000u;
        v673 |= 0x200000u;
        sub_B8CA40(2i64, BYTE2(v1033));
      }
      if ( v1037 >= 0 )
      {
        v676 = 0i64;
        if ( mUnit__ == LocalUnit )
        {
          v677 = *(mUnit__ + 0x4160);
          if ( !*(v677 + 0x3F3) || (v676 = 4i64, !*(*(game + 0x440) + 0x97Di64)) )
          {
            v676 = 0i64;
            if ( *(v677 + 0x3EF) )
              v676 = 2 * *(*(game + 0x440) + 0xA8Ci64);
          }
        }
        if ( *(*(game + 0x440) + 0xA8Ei64) )
          LOBYTE(v650) = *(*(mUnit__ + 0x11D0) + 0x2CCi64) == 2 || *(*(mUnit__ + 0x11D0) + 0x2CCi64) >= 4;
        else
          v650 = 0i64;
        sub_B8CB40(v1037, v675, v676, v650);
        v663 |= 0x4000000u;
        v673 |= 0x4000000u;
        v678 = qword_4B173B8;
        v679 = v1057;
        if ( *(qword_4B173B8 + 0xA38) != 5 || *(qword_4B173B8 + 0x28D8) != v1057 )
        {
          *(qword_4B173B8 + 0xA38) = 5;
          v678[0x28D8] = v679;
          sub_224C10(v678 + 0x28B0);
        }
      }
      if ( v1040 >= 0 )
      {
        v964 = *&v663;
        v680 = 0;
        if ( mUnit__ == LocalUnit )
        {
          v686 = *(mUnit__ + 0x4160);
          if ( !*(v686 + 0x3F2) || (v680 = 4, !*(*(game + 0x440) + 0x97Di64)) )
          {
            v680 = 0;
            if ( *(v686 + 0x3EE) )
              v680 = 2 * *(*(game + 0x440) + 0xA8Di64);
          }
        }
        v661 = 0i64;
        v1008 = 0i64;
        v1007 = 0i64;
        v1006 = 0i64;
        v1005 = 0i64;
        *Str = 0i64;
        v681 = sub_288270(*(mUnit__ + 0x11D0), 3i64);
        LOBYTE(v682) = 0xFF;
        if ( v681 )
        {
          v683 = v681;
          v684 = strlen(Str);
          *&Str[v684] = qword_49E7BED;
          Str[v684 + 8] = byte_49E7BF5;
          v685 = *(v683 + 0xC0) ? *(v683 + 0xB0) : &szFile;
          strcat(Str, v685);
          v687 = strlen(Str);
          *&Str[v687] = 0x6F68732F;
          *&Str[v687 + 3] = 0x74726F;
          if ( v1041 )
          {
            v689 = *(mUnit__ + 0x11D0);
            v690 = *(v689 + 0x2C8);
            v691 = *(v689 + 0x2B0);
            v692 = 3 * v690;
            v693 = *(v691 + 8 * v692 + 0x10);
            if ( *(v691 + 8 * v692 + 0x10) )
            {
              v694 = *(v691 + 8 * v692);
              v695 = 0i64;
              v682 = 0;
              do
              {
                LOBYTE(v688) = 1;
                v682 += (*(**(v694 + 8 * v695) + 0x88i64))(*(v694 + 8 * v695), v688);
                ++v695;
              }
              while ( v693 != v695 );
            }
            else
            {
              LOBYTE(v682) = 0;
            }
          }
        }
        if ( !*(HudInfo + 0x450) && *(air_movement_ + 0x568F) && sub_287F50(*(mUnit__ + 0x11D0), 3i64) )
        {
          v661 = *(air_movement_ + 0x5ADC);
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(air_movement_ + 0x12F0) - v661.m128_f32[0]) & xmmword_449AF40) >= *&dword_44A49C0 )
          {
            if ( ((*(game + 0x2D8) * *&qword_44819B0) & 1) != 0 )
              v680 |= 0x20 * (v661.m128_f32[0] <= *&dword_44801CC) + 0x20;
            v661.m128_u64[1] = v32.m128_u64[1];
          }
          else
          {
            v680 |= 8 * (v661.m128_f32[0] <= *&dword_44801CC) + 8;
          }
        }
        sub_B8CEC0(v1040, DWORD2(v1040), v680, v1041, v1042, Str, v682, SBYTE8(v1040), SBYTE12(v1040));
        v696 = qword_4B173B8;
        v697 = BYTE1(v1057);
        if ( *(qword_4B173B8 + 0xA54) != 5 || *(qword_4B173B8 + 0x2948) != BYTE1(v1057) )
        {
          *(qword_4B173B8 + 0xA54) = 5;
          v696[0x2948] = v697;
          sub_224C10(v696 + 0x2920);
        }
        v663 = LODWORD(v964) | 0x800;
        v673 |= 0x800u;
        v664 |= 0x800u;
      }
      if ( v1043 < 0 )
      {
        v967 = 0.0;
      }
      else
      {
        v661 = 0i64;
        v1008 = 0i64;
        v1007 = 0i64;
        v1006 = 0i64;
        v1005 = 0i64;
        *Str = 0i64;
        v698 = sub_288270(*(mUnit__ + 0x11D0), 7i64);
        v701 = 0xFFFFFFFF;
        if ( v698 )
        {
          v702 = v698;
          v703 = strlen(Str);
          *&Str[v703] = qword_49E7BED;
          Str[v703 + 8] = byte_49E7BF5;
          v704 = *(v702 + 0xC0) ? *(v702 + 0xB0) : &szFile;
          strcat(Str, v704);
          v705 = strlen(Str);
          *&Str[v705] = 0x6F68732F;
          *&Str[v705 + 3] = 0x74726F;
          if ( v1044 )
          {
            v707 = *(mUnit__ + 0x11D0);
            v708 = *(v707 + 0x2C8);
            v709 = *(v707 + 0x2B0);
            v710 = 3 * v708;
            v711 = *(v709 + 8 * v710 + 0x10);
            if ( *(v709 + 8 * v710 + 0x10) )
            {
              v712 = *(v709 + 8 * v710);
              v713 = 0i64;
              v701 = 0;
              do
              {
                LOBYTE(v706) = 1;
                v701 += (*(**(v712 + 8 * v713) + 0x88i64))(*(v712 + 8 * v713), v706);
                ++v713;
              }
              while ( v711 != v713 );
            }
            else
            {
              v701 = 0;
            }
          }
        }
        sub_B8D030(v1043, Str, v699, v700, v1044, Str, v701);
        v714 = qword_4B173B8;
        v715 = BYTE2(v1057);
        if ( *(qword_4B173B8 + 0xA62) != 5 || *(qword_4B173B8 + 0x2980) != BYTE2(v1057) )
        {
          *(qword_4B173B8 + 0xA62) = 5;
          v714[0x2980] = v715;
          sub_224C10(v714 + 0x2958);
        }
        v663 |= 0x4000u;
        v673 |= 0x4000u;
        v664 |= 0x4000u;
        LODWORD(v967) = 0x4000;
      }
      if ( v1045 >= 0 )
      {
        v661 = 0i64;
        v1008 = 0i64;
        v1007 = 0i64;
        v1006 = 0i64;
        v1005 = 0i64;
        *Str = 0i64;
        v716 = sub_288270(*(mUnit__ + 0x11D0), 8i64);
        v718 = 0xFFFFFFFF;
        if ( v716 )
        {
          v719 = v716;
          v720 = strlen(Str);
          *&Str[v720] = qword_49E7BED;
          Str[v720 + 8] = byte_49E7BF5;
          v721 = *(v719 + 0xC0) ? *(v719 + 0xB0) : &szFile;
          strcat(Str, v721);
          v722 = strlen(Str);
          *&Str[v722] = 0x6F68732F;
          *&Str[v722 + 3] = 0x74726F;
          if ( v1046 )
          {
            v723 = *(mUnit__ + 0x11D0);
            v724 = *(v723 + 0x2C8);
            v725 = *(v723 + 0x2B0);
            v726 = 3 * v724;
            v727 = *(v725 + 8 * v726 + 0x10);
            if ( *(v725 + 8 * v726 + 0x10) )
            {
              v728 = *(v725 + 8 * v726);
              v729 = 0i64;
              v718 = 0;
              do
              {
                LOBYTE(v717) = 1;
                v718 += (*(**(v728 + 8 * v729) + 0x88i64))(*(v728 + 8 * v729), v717);
                ++v729;
              }
              while ( v727 != v729 );
            }
            else
            {
              v718 = 0;
            }
          }
        }
        sub_B8D490(v1045, v717, v1046, Str, v718);
        v730 = qword_4B173B8;
        v731 = BYTE3(v1057);
        if ( *(qword_4B173B8 + 0xA70) != 5 || *(qword_4B173B8 + 0x29B8) != BYTE3(v1057) )
        {
          *(qword_4B173B8 + 0xA70) = 5;
          v730[0x29B8] = v731;
          sub_224C10(v730 + 0x2990);
        }
        v663 |= 0x8000u;
        v673 |= 0x8000u;
      }
      if ( v1047 >= 0 )
      {
        v964 = *&v663;
        v732 = 0xFFFFFFFF;
        v733 = 0xFFFFFFFF;
        if ( mUnit__ == LocalUnit )
        {
          v734 = *(mUnit__ + 0x4160);
          v735 = 0;
          if ( *(*(game + 0x498) + 0x2788i64) && *(v734 + 0x3F5) )
            v735 = 4 * (*(*(game + 0x440) + 0x97Di64) != 0);
          v733 = (2 * *(v734 + 0x3F1)) | v735;
          if ( !*(HudInfo + 0x450) )
          {
            v736 = v33;
            v737 = v32.m128_i32[0];
            if ( *(air_movement_ + 0x568F) )
            {
              v32.m128_u64[0] = v34;
              v738 = v736;
              if ( sub_287F50(*(mUnit__ + 0x11D0), 9i64) )
              {
                v739 = *(air_movement_ + 0x5ADC);
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(air_movement_ + 0x12F0) - v739) & xmmword_449AF40) < *&dword_44A49C0 )
                {
                  v740 = 8 * (v739 <= *&dword_44801CC) + 8;
                  goto LABEL_995;
                }
                if ( ((*(game + 0x2D8) * *&qword_44819B0) & 1) != 0 )
                {
                  v740 = 0x20 * (v739 <= *&dword_44801CC) + 0x20;
LABEL_995:
                  v733 |= v740;
                }
              }
              v776 = v737;
              v33 = v738;
              v34 = v32.m128_u64[0];
              v32.m128_i32[0] = v776;
            }
            else
            {
              v33 = v736;
            }
          }
        }
        v661 = 0i64;
        v1008 = 0i64;
        v1007 = 0i64;
        v1006 = 0i64;
        v1005 = 0i64;
        *Str = 0i64;
        v777 = sub_288270(*(mUnit__ + 0x11D0), 9i64);
        if ( v777 )
        {
          v779 = v777;
          v780 = strlen(Str);
          *&Str[v780] = qword_49E7BED;
          Str[v780 + 8] = byte_49E7BF5;
          v781 = *(v779 + 0xC0) ? *(v779 + 0xB0) : &szFile;
          strcat(Str, v781);
          v782 = strlen(Str);
          *&Str[v782] = 0x6F68732F;
          *&Str[v782 + 3] = 0x74726F;
          if ( v1048 )
          {
            v783 = *(mUnit__ + 0x11D0);
            v784 = *(v783 + 0x2C8);
            v785 = *(v783 + 0x2B0);
            v786 = 3 * v784;
            v787 = *(v785 + 8 * v786 + 0x10);
            if ( *(v785 + 8 * v786 + 0x10) )
            {
              v788 = *(v785 + 8 * v786);
              v789 = 0i64;
              v732 = 0;
              do
              {
                LOBYTE(v778) = 1;
                v732 += (*(**(v788 + 8 * v789) + 0x88i64))(*(v788 + 8 * v789), v778);
                ++v789;
              }
              while ( v787 != v789 );
            }
            else
            {
              v732 = 0;
            }
          }
        }
        sub_B8D830(v1047, v778, v733, v1048, Str, v732);
        v790 = qword_4B173B8;
        v791 = BYTE4(v1057);
        if ( *(qword_4B173B8 + 0xA7E) != 5 || *(qword_4B173B8 + 0x29F0) != BYTE4(v1057) )
        {
          *(qword_4B173B8 + 0xA7E) = 5;
          v790[0x29F0] = v791;
          sub_224C10(v790 + 0x29C8);
        }
        v663 = LODWORD(v964) | 0x10000;
        v673 |= 0x10000u;
        v664 |= 0x10000u;
      }
      if ( v1049 >= 0 )
      {
        v964 = *&v663;
        LOBYTE(v792) = 0xFF;
        v793 = 0xFFFFFFFF;
        if ( mUnit__ == LocalUnit )
        {
          v794 = *(mUnit__ + 0x4160);
          v795 = *(v794 + 0x3F5) ? 4 * (*(*(game + 0x440) + 0x97Di64) != 0) : 0;
          v793 = (2 * *(v794 + 0x3F1)) | v795;
          if ( !*(HudInfo + 0x450) )
          {
            v796 = v33;
            v797 = v32.m128_i32[0];
            if ( *(air_movement_ + 0x568F) )
            {
              v32.m128_u64[0] = v34;
              v798 = v796;
              if ( sub_287F50(*(mUnit__ + 0x11D0), 4i64) )
              {
                v799 = *(air_movement_ + 0x5ADC);
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(air_movement_ + 0x12F0) - v799) & xmmword_449AF40) < *&dword_44A49C0 )
                {
                  v800 = 8 * (v799 <= *&dword_44801CC) + 8;
                  goto LABEL_1024;
                }
                if ( ((*(game + 0x2D8) * *&qword_44819B0) & 1) != 0 )
                {
                  v800 = 0x20 * (v799 <= *&dword_44801CC) + 0x20;
LABEL_1024:
                  v793 |= v800;
                }
              }
              v801 = v797;
              v33 = v798;
              v34 = v32.m128_u64[0];
              v32.m128_i32[0] = v801;
            }
            else
            {
              v33 = v796;
            }
          }
        }
        v661 = 0i64;
        v1008 = 0i64;
        v1007 = 0i64;
        v1006 = 0i64;
        v1005 = 0i64;
        *Str = 0i64;
        v802 = sub_288270(*(mUnit__ + 0x11D0), 4i64);
        if ( v802 )
        {
          v803 = v802;
          v804 = strlen(Str);
          *&Str[v804] = qword_49E7BED;
          Str[v804 + 8] = byte_49E7BF5;
          v805 = *(v803 + 0xC0) ? *(v803 + 0xB0) : &szFile;
          strcat(Str, v805);
          v806 = strlen(Str);
          *&Str[v806] = 0x6F68732F;
          *&Str[v806 + 3] = 0x74726F;
          if ( v1050 )
          {
            v808 = *(mUnit__ + 0x11D0);
            v809 = *(v808 + 0x2C8);
            v810 = *(v808 + 0x2B0);
            v811 = 3 * v809;
            v812 = *(v810 + 8 * v811 + 0x10);
            if ( *(v810 + 8 * v811 + 0x10) )
            {
              v813 = *(v810 + 8 * v811);
              v814 = 0i64;
              v792 = 0;
              do
              {
                LOBYTE(v807) = 1;
                v792 += (*(**(v813 + 8 * v814) + 0x88i64))(*(v813 + 8 * v814), v807);
                ++v814;
              }
              while ( v812 != v814 );
            }
            else
            {
              LOBYTE(v792) = 0;
            }
          }
        }
        sub_B8DC20(v1049, DWORD2(v1049), v793, v1050, v1051, Str, v792, SBYTE8(v1049), SBYTE12(v1049));
        v815 = qword_4B173B8;
        v816 = BYTE5(v1057);
        if ( *(qword_4B173B8 + 0xA8C) != 5 || *(qword_4B173B8 + 0x2A28) != BYTE5(v1057) )
        {
          *(qword_4B173B8 + 0xA8C) = 5;
          v815[0x2A28] = v816;
          sub_224C10(v815 + 0x2A00);
        }
        v663 = LODWORD(v964) | 0x1000;
        v673 |= 0x1000u;
        v664 |= 0x1000u;
      }
      v964 = *&v663;
      if ( v1052 >= 0 )
      {
        v817 = 0;
        if ( mUnit__ == LocalUnit && !*(HudInfo + 0x450) )
        {
          v818 = v33;
          v819 = v32.m128_i32[0];
          if ( *(air_movement_ + 0x568F) )
          {
            v32.m128_u64[0] = v34;
            v820 = v818;
            if ( !sub_287F50(*(mUnit__ + 0x11D0), 6i64) )
              goto LABEL_1047;
            v821 = *(air_movement_ + 0x5ADC);
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(air_movement_ + 0x12F0) - v821) & xmmword_449AF40) >= *&dword_44A49C0 )
            {
              v961 = v819;
              v33 = v820;
              v34 = v32.m128_u64[0];
              v32.m128_i32[0] = v961;
              if ( ((*(game + 0x2D8) * *&qword_44819B0) & 1) != 0 )
                v817 = 0x20 * (v821 <= *&dword_44801CC) + 0x20;
            }
            else
            {
              v817 = 8 * (v821 <= *&dword_44801CC) + 8;
LABEL_1047:
              v822 = v819;
              v33 = v820;
              v34 = v32.m128_u64[0];
              v32.m128_i32[0] = v822;
            }
          }
          else
          {
            v33 = v818;
          }
        }
        v661 = 0i64;
        v1008 = 0i64;
        v1007 = 0i64;
        v1006 = 0i64;
        v1005 = 0i64;
        *Str = 0i64;
        if ( sub_288270(*(mUnit__ + 0x11D0), 6i64) )
        {
          v823 = strlen(Str);
          *&Str[v823] = qword_49E7BED;
          Str[v823 + 8] = byte_49E7BF5;
          v824 = mUnit__;
          v825 = *(**(*(*(mUnit__ + 0x11D0) + 0x2B0i64) + 0x18i64 * *(*(mUnit__ + 0x11D0) + 0x2C8i64)) + 0x340i64);
          if ( *(v825 + 0xC0) )
            v826 = *(v825 + 0xB0);
          else
            v826 = &szFile;
          strcat(Str, v826);
          v828 = strlen(Str);
          *&Str[v828] = 0x6F68732F;
          *&Str[v828 + 3] = 0x74726F;
          v830 = *(v824 + 0x11D0);
          v831 = *(v830 + 0x2C8);
          v832 = *(v830 + 0x2B0);
          v833 = 3 * v831;
          v834 = *(v832 + 8 * v833 + 0x10);
          if ( *(v832 + 8 * v833 + 0x10) )
          {
            v835 = *(v832 + 8 * v833);
            v836 = 0i64;
            v827 = 0;
            do
            {
              LOBYTE(v829) = 1;
              v827 += (*(**(v835 + 8 * v836) + 0x88i64))(*(v835 + 8 * v836), v829);
              ++v836;
            }
            while ( v834 != v836 );
          }
          else
          {
            LOBYTE(v827) = 0;
          }
        }
        else
        {
          LOBYTE(v827) = 0xFF;
        }
        sub_B8DD90(v1052, DWORD2(v1052), v817, v1053, v1054, Str, v827, SBYTE8(v1052), SBYTE12(v1052));
        v837 = qword_4B173B8;
        v838 = BYTE6(v1057);
        if ( *(qword_4B173B8 + 0xA46) != 5 || *(qword_4B173B8 + 0x2910) != BYTE6(v1057) )
        {
          *(qword_4B173B8 + 0xA46) = 5;
          v837[0x2910] = v838;
          sub_224C10(v837 + 0x28E8);
        }
        LODWORD(v964) |= 0x2000u;
        v673 |= 0x2000u;
        v664 |= 0x2000u;
      }
      v839 = 1;
      if ( *(mUnit__ + 0x1238) )
      {
        v840 = *(mUnit__ + 0x1228);
        v841 = 8i64 * *(mUnit__ + 0x1238);
        v842 = 0i64;
        while ( 1 )
        {
          v843 = *(v840 + v842);
          if ( v843 )
          {
            if ( (*(*v843 + 8i64))(*(v840 + v842)) == 2 && !v843[0x34] )
              break;
          }
          v842 += 8i64;
          if ( v841 == v842 )
            goto LABEL_1070;
        }
        v839 = 0;
      }
LABEL_1070:
      v844 = *(game + 0x440);
      v845 = 0;
      if ( !v839 )
        v845 = 2 * *(v844 + 0xA73);
      v846 = *(v844 + 0xA72) | v845;
      if ( v1055 < 0 )
      {
        v847 = v964;
      }
      else
      {
        sub_B8DF00("updateFlares", v1055, v846);
        LODWORD(v847) = LODWORD(v964) | 0x20000;
        v673 |= 0x20000u;
        v664 |= 0x20000u;
        v848 = qword_4B173B8;
        v849 = HIBYTE(v1057);
        if ( *(qword_4B173B8 + 0xA9A) != 5 || *(qword_4B173B8 + 0x2A60) != HIBYTE(v1057) )
        {
          *(qword_4B173B8 + 0xA9A) = 5;
          v848[0x2A60] = v849;
          sub_224C10(v848 + 0x2A38);
        }
      }
      if ( (SDWORD2(v1055) & 0x80000000) == 0 )
      {
        sub_B8DF00("updateChaffs", DWORD2(v1055), v846);
        LODWORD(v847) |= 0x40000u;
        v673 |= 0x40000u;
        v664 |= 0x40000u;
        v850 = qword_4B173B8;
        v851 = v1058;
        if ( *(qword_4B173B8 + 0xAA8) != 5 || *(qword_4B173B8 + 0x2A98) != v1058 )
        {
          *(qword_4B173B8 + 0xAA8) = 5;
          v850[0x2A98] = v851;
          sub_224C10(v850 + 0x2A70);
        }
      }
      v852 = *(mUnit__ + 0x1278);
      if ( *(mUnit__ + 0x1278) )
      {
        LODWORD(v847) |= 0x8000000u;
        v673 |= 0x8000000u;
        v664 |= 0x8000000u;
        v853 = *(mUnit__ + 0x1268);
        v854 = 0i64;
        v855 = 0;
        do
        {
          v856 = *(v853 + 8 * v854);
          if ( v856[0x18] )
          {
            ++v855;
          }
          else if ( (*(*v856 + 0x30i64))(v856) )
          {
            v857 = 1;
            goto LABEL_1089;
          }
          ++v854;
        }
        while ( v852 != v854 );
        v857 = 3;
LABEL_1089:
        v858 = 2i64;
        if ( v855 != v852 )
          v858 = v857;
        v859 = qword_4B173B8;
        if ( *(qword_4B173B8 + 0xAC4) != 1 || *(qword_4B173B8 + 0xAC2) != v858 )
        {
          *(qword_4B173B8 + 0xAC4) = 1;
          v859[0xAC2] = v858;
          sub_B831C0(v859 + 0x2AE0, v858, v649, v650);
        }
      }
      if ( (*(mUnit__ + 0x1083) & 8) != 0 && !byte_4B19A94 )
      {
        v860 = *(mUnit__ + 0x11D0);
        if ( *(v860 + 0x2E0) )
        {
          v861 = *(v860 + 0x2D0);
          v862 = 8i64 * *(v860 + 0x2E0);
          v863 = 0i64;
          while ( 1 )
          {
            v864 = *(v861 + v863);
            if ( v864 )
            {
              if ( (*(*v864 + 0x108i64))(*(v861 + v863)) )
              {
                v865 = v864[0x56];
                if ( v865 )
                {
                  v661 = *(v865 + 0x84);
                  if ( v661.m128_f32[0] > 0.0 )
                    break;
                }
              }
            }
            v863 += 8i64;
            if ( v862 == v863 )
              goto LABEL_1107;
          }
          v866 = qword_4B173B8;
          v867 = (v661.m128_f32[0] > *(v865 + 0x80)) ^ *(mUnit__ + 0x1A0) ^ 1;
          if ( *(qword_4B173B8 + 0x8E8) != 5 || *(qword_4B173B8 + 0x2398) != v867 )
          {
            *(qword_4B173B8 + 0x8E8) = 5;
            v866[0x2398] = v867;
            sub_224C10(v866 + 0x2370);
          }
          LODWORD(v847) |= 0x10000000u;
          v673 |= 0x10000000u;
        }
      }
LABEL_1107:
      v868 = HudInfo;
      *&v869 = 1.5046328e-36;
      if ( *(HudInfo + 0x1C8) )
      {
        v870 = *(mUnit__ + 0x11B0);
        if ( v870 )
        {
          v871 = *(v870 + 0xB18);
          v661 = LODWORD(Y);
          if ( Y > v871 )
          {
            v872 = 4 - (*(v870 + 0xB24) == 0);
            v873 = qword_4B173B8;
            if ( *(qword_4B173B8 + 0xA00) != 1 || *(qword_4B173B8 + 0x9FE) != v872 )
            {
              *(qword_4B173B8 + 0xA00) = 1;
              v873[0x9FE] = v872;
              sub_B831C0(v873 + 0x27D0, v872, v649, v650);
              v873 = qword_4B173B8;
            }
            v874 = (v871 * *&dword_44890B4);
            if ( v873[0xA0E] != 1 || v873[0xA0C] != v874 )
            {
              v873[0xA0E] = 1;
              v873[0xA0C] = v874;
              sub_B831C0(v873 + 0x2808, v874, v649, v650);
            }
            v985 = 9.4039548e-38;
            *&v869 = 2.4074124e-35;
            v868 = HudInfo;
          }
        }
      }
      if ( *(v868 + 0x2D4) )
      {
        if ( !byte_4B19A94 && (*(mUnit__ + 0x1083) & 8) == 0 )
        {
          v661 = *(ballistics_A68_qword + 0x56C);
          if ( v661.m128_f32[0] <= 0.0 || ((*(game + 0x2D8) * *&qword_44819B0) & 1) == 0 )
          {
            v875 = 0i64;
            v876 = v868[0x78] >= 2 && *(v868 + 0x4C) != 0;
            LOBYTE(v875) = v661.m128_f32[0] <= 0.0;
            v877 = qword_4B173B8;
            if ( *(qword_4B173B8 + 0x9E4) != 1 || *(qword_4B173B8 + 0x9E2) != v875 )
            {
              *(qword_4B173B8 + 0x9E4) = 1;
              v877[0x9E2] = v875;
              sub_B831C0(v877 + 0x2760, v875, v649, v650);
              v877 = qword_4B173B8;
            }
            if ( v877[0x9F2] != 5 || *(v877 + 0x27C0) != v876 )
            {
              v877[0x9F2] = 5;
              *(v877 + 0x27C0) = v876;
              sub_224C10(v877 + 0x9E6);
            }
            v985 = *&v869;
          }
        }
      }
      v964 = v847;
      v966 = *&v673;
      v878 = v664;
      sub_B7C4F0(v1000, mUnit__, &v985, v650);
      sub_B8E230(0i64);
      sub_B8E230(1i64);
      sub_B8E230(2i64);
      sub_B8E230(3i64);
      sub_B8E230(4i64);
      sub_B8E230(5i64);
      sub_B8E230(6i64);
      sub_B8E230(7i64);
      sub_B8E230(8i64);
      sub_B8E230(9i64);
      if ( (*(qword_4B44C68 + 0x4A70) - 1) <= 1 )
      {
        v881 = *(mUnit__ + 0x11D0);
        if ( *(v881 + 0x1A0) )
        {
          v882 = (qword_4B44C68 + 0x162D);
          v883 = 0xC0i64;
          v884 = 0i64;
          v885 = Y;
          v886 = *&dword_44A0308;
          v887 = xmmword_449AF40;
          v888 = *&dword_44801CC;
          do
          {
            v889 = *(v881 + 0x190);
            v890 = *(v889 + v883 + 4);
            if ( v890 >= 0 )
            {
              v891 = *(v881 + 0x300);
              if ( *(v891 + 0x10i64 * *(v889 + v883) + 8) > v890 )
              {
                v892 = *(*(v891 + 0x10i64 * *(v889 + v883)) + 8i64 * v890);
                if ( v892 )
                {
                  if ( (*(*v892 + 0x108i64))(v892) )
                  {
                    *v661.m128_u64 = sub_5655B0(game);
                    v661.m128_f32[0] = *v661.m128_u64;
                    v895.m128_i32[0] = *(v892 + 0x448);
                    v896 = _mm_cmplt_ss(0i64, v895);
                    LODWORD(v897) = _mm_andnot_ps(v896, v661).m128_u32[0] | v895.m128_i32[0] & v896.m128_i32[0];
                    v898.m128_i32[0] = *(v892 + 0x444);
                    v899 = _mm_cmplt_ss(0i64, v898);
                    LODWORD(v900) = _mm_andnot_ps(v899, v661).m128_u32[0] | v898.m128_i32[0] & v899.m128_i32[0];
                    v901 = *(v892 + 0x2B0);
                    v902 = *(v892 + 0x43C);
                    if ( !*(v901 + (v902 << 6) + 0xCC)
                      || (v903 = 0.0, COERCE_FLOAT(COERCE_UNSIGNED_INT(v897 - v900) & v887) > v888) )
                    {
                      v904 = sub_11F650(v902, v902 << 6, v893, v894, 0);
                      v903 = *&v904;
                      v901 = *(v892 + 0x2B0);
                      v902 = *(v892 + 0x43C);
                    }
                    v905 = v885;
                    if ( *(v901 + (v902 << 6) + 0xBC) )
                      v905 = v903;
                    if ( *(v892 + 0x505) )
                    {
                      v906 = *(v892 + 0x208);
                      if ( !v906 || (v907 = *(v892 + 0x20), v907 < 0) || (*(*v906 + 0x18i64))(v906, v907, 1i64) )
                        v905 = v885;
                    }
                    v661 = *(mUnit__ + 0x9C8);
                    v661.m128_f32[0] = v661.m128_f32[0] + *(v882 + 0xFFFFFFFB);
                    v908 = *(mUnit__ + 0x9C4) + *(v882 + 0xFFFFFFF7);
                    *Str = *(mUnit__ + 0x9C0) + *(v882 + 0xFFFFFFF3);
                    *&Str[4] = v908;
                    *&Str[8] = v661.m128_i32[0];
                    v974 = 0i64;
                    sub_B971C0(a2, Str, &v974, 0i64);
                    if ( v910 )
                    {
                      sub_1707580(v892 + 0x4A0, v909);
                      v661 = v974;
                      LOBYTE(v914) = v905 > v886;
                      if ( *v882 )
                        sub_B8E330(v912, v911, v913, v914, 1, *(v889 + v883) - 0x11);
                      else
                        sub_B8E330(v912, v911, v913, v914, 0, *(v889 + v883) - 0x11);
                    }
                    else
                    {
                      sub_B8E7C0((*(v889 + v883) - 0x11));
                    }
                  }
                }
              }
            }
            ++v884;
            v882 += 0x28;
            v883 += 0x290i64;
          }
          while ( v884 < *(v881 + 0x1A0) );
        }
      }
      v915 = qword_4B173B8;
      v916 = LODWORD(v964);
      if ( *(qword_4B173B8 + 0x77C) != 1 || *(qword_4B173B8 + 0x77A) != LODWORD(v964) )
      {
        *(qword_4B173B8 + 0x77C) = 1;
        *(v915 + 0x77A) = v916;
        sub_B831C0(v915 + 0x1DC0, v916, v879, v880);
        v915 = qword_4B173B8;
      }
      v917 = v1003;
      v918 = LODWORD(v967);
      v919 = LODWORD(v985);
      if ( *(v915 + 0x78A) != 1 || *(v915 + 0x788) != LODWORD(v985) )
      {
        *(v915 + 0x78A) = 1;
        *(v915 + 0x788) = v919;
        sub_B831C0(v915 + 0x1DF8, v919, v879, v880);
        v915 = qword_4B173B8;
      }
      v920 = v1000;
      v921 = LODWORD(v966);
      if ( *(v915 + 0x798) != 1 || *(v915 + 0x796) != LODWORD(v966) )
      {
        *(v915 + 0x798) = 1;
        *(v915 + 0x796) = v921;
        sub_B831C0(v915 + 0x1E30, v921, v879, v880);
        v915 = qword_4B173B8;
      }
      if ( *(v915 + 0x7A6) != 1 || *(v915 + 0x7A4) != 0x103 )
      {
        *(v915 + 0x7A6) = 1;
        *(v915 + 0x7A4) = 0x103;
        sub_B831C0(v915 + 0x1E68, 0x103i64, v879, v880);
        v915 = qword_4B173B8;
      }
      if ( *(v915 + 0x7B4) != 1 || *(v915 + 0x7B2) != v918 )
      {
        *(v915 + 0x7B4) = 1;
        *(v915 + 0x7B2) = v918;
        sub_B831C0(v915 + 0x1EA0, v918, v879, v880);
        v915 = qword_4B173B8;
      }
      if ( *(v915 + 0x7C2) != 1 || *(v915 + 0x7C0) != v878 )
      {
        *(v915 + 0x7C2) = 1;
        *(v915 + 0x7C0) = v878;
        sub_B831C0(v915 + 0x1ED8, v878, v879, v880);
        v915 = qword_4B173B8;
      }
      v922 = *(v920 + 8);
      if ( *(v915 + 0x832) != 2 || *(v915 + 0x830) != v922 )
      {
        *(v915 + 0x832) = 2;
        *(v915 + 0x830) = v922;
        sub_B84B50(v915 + 0x2098, *(v920 + 8), v879, v880);
        v915 = qword_4B173B8;
      }
      v923 = *(game + 0x498);
      v924 = v923[0xA02];
      if ( *(v915 + 0xBF8) != 3 || v915[0xBF6] != v924 )
      {
        *(v915 + 0xBF8) = 3;
        v915[0xBF6] = v924;
        sub_B82CC0(v915 + 0x2FB0, v923, v879, v880);
        v915 = qword_4B173B8;
        v923 = *(game + 0x498);
      }
      v925 = v923[0xA05];
      if ( *(v915 + 0xC22) != 3 || v915[0xC20] != v925 )
      {
        *(v915 + 0xC22) = 3;
        v915[0xC20] = v925;
        sub_B82CC0(v915 + 0x3058, v923, v879, v880);
        v915 = qword_4B173B8;
        v923 = *(game + 0x498);
      }
      v926 = v923[0xA0E];
      if ( *(v915 + 0xCA0) != 3 || v915[0xC9E] != v926 )
      {
        *(v915 + 0xCA0) = 3;
        v915[0xC9E] = v926;
        sub_B82CC0(v915 + 0x3250, v923, v879, v880);
      }
      v927 = byte_4B19A94;
      if ( byte_4B19A94 )
      {
        v928 = v920 + 0x1C;
        v929 = 0x1Di64;
        v930 = 0x1Ei64;
      }
      else if ( (*(mUnit__ + 0x1083) & 8) != 0 )
      {
        v928 = v920 + 0xC;
        v929 = 0xDi64;
        v930 = 0xEi64;
      }
      else
      {
        v928 = v920 + 0x14;
        v929 = 0x15i64;
        v930 = 0x16i64;
      }
      v931 = *v928 + ((*(v920 + v930) << 0x10) | (*(v920 + v929) << 8)) + 0x78000000;
      v932 = qword_4B173B8;
      if ( *(qword_4B173B8 + 0x7D0) != 2 || *(qword_4B173B8 + 0x7CE) != v931 )
      {
        *(qword_4B173B8 + 0x7D0) = 2;
        v932[0x7CE] = v931;
        sub_B84B50(v932 + 0x1F10, v931, v879, v880);
        v927 = byte_4B19A94;
      }
      if ( v927 )
      {
        v933 = v920 + 0x1C;
        v934 = 0x1Di64;
        v935 = 0x1Ei64;
      }
      else if ( (*(mUnit__ + 0x1083) & 8) != 0 )
      {
        v933 = (v920 + 2);
        v934 = 0x11i64;
        v935 = 0x12i64;
      }
      else
      {
        v933 = (v920 + 3);
        v934 = 0x19i64;
        v935 = 0x1Ai64;
      }
      v936 = *v933 + ((*(v920 + v935) << 0x10) | (*(v920 + v934) << 8)) + 0x78000000;
      v937 = qword_4B173B8;
      if ( *(qword_4B173B8 + 0x7DE) != 2 || *(qword_4B173B8 + 0x7DC) != v936 )
      {
        *(qword_4B173B8 + 0x7DE) = 2;
        v937[0x7DC] = v936;
        sub_B84B50(v937 + 0x1F48, v936, v879, v880);
        v937 = qword_4B173B8;
      }
      v938 = *(v920 + 0x3C) + ((*(v920 + 0x3E) << 0x10) | (*(v920 + 0x3D) << 8)) + 0x78000000;
      if ( v937[0x824] != 2 || v937[0x822] != v938 )
      {
        v937[0x824] = 2;
        v937[0x822] = v938;
        sub_B84B50(v937 + 0x2060, v938, v879, v880);
        v937 = qword_4B173B8;
      }
      v939 = 3 * ((*(mUnit__ + 0x1083) & 8) == 0);
      v940 = *(v920 + 4 * v939 + 0x24)
           + ((*(v920 + 4 * v939 + 0x26) << 0x10) | (*(v920 + 4 * v939 + 0x25) << 8))
           + 0x78000000;
      if ( v937[0x7EC] != 2 || v937[0x7EA] != v940 )
      {
        v937[0x7EC] = 2;
        v937[0x7EA] = v940;
        sub_B84B50(v937 + 0x1F80, v940, v879, v880);
        v937 = qword_4B173B8;
      }
      v941 = *(v920 + 4 * v939 + 0x28)
           + ((*(v920 + 4 * v939 + 0x2A) << 0x10) | (*(v920 + 4 * v939 + 0x29) << 8))
           + 0x78000000;
      if ( v937[0x7FA] != 2 || v937[0x7F8] != v941 )
      {
        v937[0x7FA] = 2;
        v937[0x7F8] = v941;
        sub_B84B50(v937 + 0x1FB8, v941, v879, v880);
        v937 = qword_4B173B8;
      }
      v942 = *(v920 + 4 * v939 + 0x2C)
           + ((*(v920 + 4 * v939 + 0x2E) << 0x10) | (*(v920 + 4 * v939 + 0x2D) << 8))
           + 0x78000000;
      if ( v937[0x808] != 2 || v937[0x806] != v942 )
      {
        v937[0x808] = 2;
        v937[0x806] = v942;
        sub_B84B50(v937 + 0x1FF0, v942, v879, v880);
      }
      v5.m128_i32[1] = HIDWORD(v34);
      v5.m128_f32[0] = acosf(fminf((*&v34 * *&v34) + (v1009 * v1009), Y));
      v944 = *&dword_44A02B0 * v5.m128_f32[0];
      if ( v33 >= 0.0 )
      {
        if ( v32.m128_f32[0] < 0.0 )
        {
          v5.m128_u64[0] = dword_44A46B8;
          v5.m128_f32[0] = *&dword_44A46B8 - v944;
          goto LABEL_1219;
        }
      }
      else
      {
        if ( v32.m128_f32[0] < 0.0 )
        {
          v944 = v944 + *&dword_44A46B8;
          goto LABEL_1220;
        }
        v5.m128_f32[0] = v5.m128_f32[0] * *&dword_44A47B8;
LABEL_1219:
        v944 = v5.m128_f32[0];
      }
LABEL_1220:
      v945 = qword_4B173B8;
      if ( *(qword_4B173B8 + 0xED0) != 3 || (v5.m128_u64[0] = *(qword_4B173B8 + 0xECE), v5.m128_f32[0] != v944) )
      {
        *(qword_4B173B8 + 0xED0) = 3;
        v945[0xECE] = v944;
        sub_B82CC0(v945 + 0x3B10, v943, v177, v178);
      }
      v946 = *(mUnit__ + 0x11D0);
      v947 = *(v946 + 0x300);
      if ( *(v947 + 0x118) )
      {
        v948 = *(v947 + 0x110);
        v949 = 8i64 * *(v947 + 0x118);
        v950 = 0i64;
        while ( 1 )
        {
          v951 = *(v948 + v950);
          if ( (*(*v951 + 0x198i64))(v951) )
            break;
          v950 += 8i64;
          if ( v949 == v950 )
            goto LABEL_1230;
        }
        if ( v946 )
          sub_B85EC0(v951, mUnit__, a2, v965, v917);
      }
    }
  }
LABEL_1230:
  v952 = qword_4B173B8;
  v953 = HudInfo;
  if ( *(HudInfo + 0x415) )
  {
    v954 = *(qword_4B44C68 + 0x670);
    v5.m128_u64[0] = *(HudInfo + 0x108) ^ xmmword_44801F0;
    if ( v5.m128_f32[0] < v954 )
    {
      v955 = *(HudInfo + 0x107);
      if ( v954 <= v955 )
      {
        v5.m128_i32[1] = 0;
        v5.m128_f32[0] = v955 - v954;
        if ( v955 <= *&dword_449F1A8 )
        {
          v959 = 0.0;
          if ( v955 < *&dword_449F1AC )
            v959 = v5.m128_f32[0] / v955;
          if ( *(qword_4B173B8 + 0x117E) == 3 && *(qword_4B173B8 + 0x117C) == v959 )
            goto LABEL_1251;
          v956 = qword_4B173B8 + 0x45F8;
          v957 = (qword_4B173B8 + 0x45F0);
          if ( v955 <= *&dword_449F1A8 )
          {
            v958 = 0;
            if ( v955 >= *&dword_449F1AC )
            {
LABEL_1247:
              *v956 = 3;
              *v957 = v958;
              if ( v953[0x415] )
              {
                v956 = qword_4B44C68;
                v5.m128_u64[0] = *(v953 + 0x108) ^ xmmword_44801F0;
                if ( v5.m128_f32[0] < *(qword_4B44C68 + 0x670) )
                  v5.m128_u64[0] = *(v953 + 0x107);
              }
              sub_B82CC0(v952 + 0x45C8, v956, v177, v178);
              v952 = qword_4B173B8;
              goto LABEL_1251;
            }
          }
        }
        else
        {
          v956 = qword_4B173B8 + 0x45F8;
          v957 = (qword_4B173B8 + 0x45F0);
          if ( *(qword_4B173B8 + 0x117E) == 3 && *(qword_4B173B8 + 0x117C) == (v5.m128_f32[0] / v955) )
            goto LABEL_1251;
        }
        v5.m128_f32[0] = v5.m128_f32[0] / v955;
        v958 = v5.m128_i32[0];
        goto LABEL_1247;
      }
    }
  }
  v956 = qword_4B173B8 + 0x45F8;
  v957 = (qword_4B173B8 + 0x45F0);
  v958 = dword_44801E8;
  if ( *(qword_4B173B8 + 0x117E) != 3 )
    goto LABEL_1247;
  v5.m128_u64[0] = *(qword_4B173B8 + 0x117C);
  if ( v5.m128_f32[0] != *&dword_44801E8 )
    goto LABEL_1247;
LABEL_1251:
  v960 = *(qword_4B44C68 + 0x678);
  if ( v952[0x118C] != 5 || *(v952 + 0x4628) != v960 )
  {
    v952[0x118C] = 5;
    *(v952 + 0x4628) = v960;
    *v5.m128_u64 = sub_224C10(v952 + 0x1180);
  }
  return *v5.m128_u64;
}
