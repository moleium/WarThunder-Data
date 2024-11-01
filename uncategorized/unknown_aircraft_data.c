// local variable allocation has failed, the output may be wrong!
const char *__fastcall unknown_aircraft_data(__int64 http_req, __int64 a2, double a3)
{
  void (*v4)(void); // rax
  const char *result; // rax
  _BYTE *v6; // rdi
  signed __int64 v7; // rdx
  void (*v8)(void); // rax
  __int64 Unit; // rbx
  __int64 air_movement; // r13
  CHAR *v11; // rax
  CHAR *v12; // rbp
  __int64 v13; // r14
  CHAR *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rcx
  char *v19; // rax
  __int64 v20; // rax
  CHAR *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v26; // rax
  char *v27; // rax
  CHAR *v28; // rbx
  __int64 v29; // rdi
  char **v30; // rcx
  __m128i v31; // xmm0
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rdi
  int v36; // r9d
  float v37; // xmm6_4
  float v38; // xmm12_4
  float v39; // xmm0_4
  float v40; // xmm3_4
  float v41; // xmm6_4
  float v42; // xmm12_4
  float v43; // xmm5_4
  __int64 v44; // rax
  CHAR *v45; // rbp
  char *v46; // rdi
  const char *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rax
  CHAR *v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  _QWORD *v54; // rcx
  __int64 v55; // rax
  __int64 *v56; // rbx
  const char *v57; // rdx
  CHAR *v58; // rdx
  const char *v59; // rdx
  const char *v60; // rdx
  CHAR *v61; // rdx
  char *v62; // rdx
  CHAR *v63; // rdx
  CHAR *v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  _QWORD *v68; // rcx
  __int64 v69; // rax
  const char *v70; // rdi
  const char *v71; // rcx
  int v72; // eax
  int st_mtime; // ecx
  _QWORD *v74; // rcx
  __int64 v75; // r14
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rax
  __int64 v82; // rbp
  __int64 v83; // r12
  char *v84; // rax
  __int64 v85; // r13
  __int64 v86; // rbp
  char *v87; // rdi
  int v88; // eax
  float v89; // edi
  const char *v90; // rbp
  __int64 v91; // r12
  const char *v92; // rbp
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // r12
  _QWORD *v97; // rcx
  __int64 v98; // rax
  unsigned __int16 v99; // ax
  __int64 v100; // rbp
  __int64 i; // rdi
  __int64 v102; // rax
  __int64 v103; // rcx
  unsigned int v104; // ebp
  __int64 v105; // rdi
  __int64 v106; // rbp
  const char *v107; // rdi
  __int64 v108; // rcx
  CHAR *v109; // rdx
  float v110; // xmm0_4
  float v111; // xmm6_4
  __int64 v112; // rbx
  float v113; // xmm1_4
  float v114; // xmm6_4
  float v115; // xmm7_4
  __int64 *v116; // rbp
  __int64 v117; // rax
  __int64 *v118; // rbx
  __int64 v119; // rax
  signed int v120; // ecx
  int v121; // edx
  float v122; // xmm0_4
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // rbp
  __int64 v127; // rcx
  float v128; // xmm0_4
  __int64 v129; // rbp
  unsigned int v130; // r14d
  __int64 v131; // rax
  __int64 v132; // r8
  _QWORD *v133; // rdi
  int v134; // edx
  _QWORD *v135; // rcx
  float v136; // xmm0_4
  __int64 v137; // rdx
  __int64 v138; // rdx
  float v139; // xmm0_4
  int v140; // ebp
  __int64 v141; // rdx
  int *v142; // rdi
  __m128i si128; // xmm0
  __m128i v144; // xmm1
  __int64 v145; // rdx
  __m128i inserted; // xmm4
  _DWORD *v147; // rdx
  const char *v148; // rax
  _dev_t v149; // eax
  const char *v150; // rcx
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r13
  _QWORD *v154; // rdi
  __int64 v155; // rbx
  int v156; // ecx
  _QWORD *v157; // rax
  bool v158; // r14
  bool v159; // cl
  __int64 v160; // rax
  double v161; // xmm0_8
  unsigned int v162; // xmm6_4
  __int64 v163; // rax
  double v164; // xmm0_8
  __int64 v165; // rax
  double v166; // xmm0_8
  unsigned int v167; // xmm6_4
  __int64 v168; // rax
  double v169; // xmm0_8
  _QWORD *v170; // rax
  _QWORD *v171; // rax
  _QWORD *v172; // rdi
  __int64 v173; // rbx
  int v174; // ecx
  _QWORD *v175; // rax
  bool v176; // r14
  bool v177; // cl
  __int64 v178; // rax
  double v179; // xmm0_8
  unsigned int v180; // xmm6_4
  __int64 v181; // rax
  double v182; // xmm0_8
  __int64 v183; // rax
  double v184; // xmm0_8
  unsigned int v185; // xmm6_4
  __int64 v186; // rax
  double v187; // xmm0_8
  _QWORD *v188; // rax
  _QWORD *v189; // rax
  _QWORD *v190; // rdi
  __int64 v191; // rbx
  int v192; // ecx
  _QWORD *v193; // rax
  bool v194; // r14
  bool v195; // cl
  __int64 v196; // rax
  double v197; // xmm0_8
  unsigned int v198; // xmm6_4
  __int64 v199; // rax
  double v200; // xmm0_8
  __int64 v201; // rax
  double v202; // xmm0_8
  unsigned int v203; // xmm6_4
  __int64 v204; // rax
  double v205; // xmm0_8
  _QWORD *v206; // rax
  _QWORD *v207; // rax
  _QWORD *v208; // rdi
  __int64 v209; // rbx
  int v210; // ecx
  _QWORD *v211; // rax
  bool v212; // r14
  bool v213; // cl
  __int64 v214; // rax
  double v215; // xmm0_8
  unsigned int v216; // xmm6_4
  __int64 v217; // rax
  double v218; // xmm0_8
  __int64 v219; // rax
  double v220; // xmm0_8
  unsigned int v221; // xmm6_4
  __int64 v222; // rax
  double v223; // xmm0_8
  _QWORD *v224; // rax
  _QWORD *v225; // rax
  __int64 v226; // r13
  _QWORD *v227; // rdi
  __int64 v228; // rbx
  int v229; // ecx
  _QWORD *v230; // rax
  bool v231; // r14
  bool v232; // cl
  __int64 v233; // rax
  double v234; // xmm0_8
  unsigned int v235; // xmm6_4
  __int64 v236; // rax
  double v237; // xmm0_8
  __int64 v238; // rax
  double v239; // xmm0_8
  unsigned int v240; // xmm6_4
  __int64 v241; // rax
  double v242; // xmm0_8
  _QWORD *v243; // rax
  _QWORD *v244; // rax
  __m128i v245; // xmm1
  _DWORD *air_movement_; // rdi
  int v247; // ebp
  __int64 v248; // rdx
  __m128i v249; // xmm0
  __m128i v250; // xmm0
  __m128i v251; // xmm0
  __m128i v252; // xmm0
  __m128i v253; // xmm0
  __m128i v254; // xmm0
  __m128i v255; // xmm0
  __m128i v256; // xmm0
  __m128i v257; // xmm0
  _DWORD *v258; // rbx
  _DWORD *v259; // rcx
  __int64 v260; // rdx
  _DWORD *v261; // rbx
  _DWORD *v262; // rax
  __int64 v263; // rcx
  _QWORD *v264; // rcx
  __int64 v265; // rcx
  double *v266; // r14
  float air_velocity_x; // xmm7_4
  float air_velocity_y; // xmm6_4
  float air_velocity_z; // xmm10_4
  __m128 air_velocity_magnitude; // xmm9
  float v271; // xmm0_4
  double v272; // xmm2_8
  float v273; // xmm8_4
  float v274; // xmm0_4
  float v275; // xmm0_4
  float v276; // xmm1_4
  float v277; // xmm0_4
  float v278; // xmm7_4
  float v279; // xmm6_4
  float v280; // xmm0_4
  __int64 v281; // rdi
  __int64 v282; // r9
  __int64 v283; // r8
  __int64 v284; // r9
  __int64 v285; // rax
  char v286; // cl
  unsigned __int8 v287; // bl
  unsigned int v288; // ecx
  __int64 v289; // rdx
  float v290; // xmm2_4
  float v291; // xmm1_4
  float v292; // xmm3_4
  float v293; // xmm0_4
  float v294; // xmm1_4
  __m128i v295; // xmm2
  float v296; // xmm5_4
  float v297; // xmm5_4
  float v298; // xmm3_4
  float v299; // xmm3_4
  float v300; // xmm0_4
  float v301; // xmm1_4
  float v302; // xmm7_4
  float v303; // xmm10_4
  float v304; // xmm0_4
  float v305; // xmm0_4
  __int64 v306; // rax
  int v307; // ecx
  unsigned __int8 v308; // al
  int v309; // ecx
  unsigned __int8 v310; // al
  __int64 v311; // rax
  unsigned __int8 **v312; // rbp
  __int64 v313; // rax
  unsigned int v314; // r15d
  int v315; // eax
  float v316; // xmm6_4
  unsigned int v317; // ecx
  float v318; // xmm6_4
  int v319; // eax
  int v320; // edx
  int v321; // r8d
  int v322; // r9d
  __int64 v323; // xmm0_8
  __int64 v324; // rax
  __int64 v325; // rax
  __int64 v326; // rcx
  __int64 v327; // r8
  __int64 v328; // rbx
  __int64 v329; // rcx
  _QWORD *v330; // rcx
  __int64 v331; // rcx
  __int64 v332; // rdi
  __int64 v333; // rcx
  __int64 v334; // rdx
  int *v335; // rdi
  __m128i v336; // xmm0
  __m128i v337; // xmm1
  unsigned __int64 v338; // rdx
  __m128i v339; // xmm4
  _DWORD *v340; // rdx
  int v341; // eax
  float v342; // xmm0_4
  __int64 v343; // rax
  float v344; // xmm0_4
  float v345; // xmm0_4
  float v346; // xmm0_4
  float v347; // xmm2_4
  __int64 v348; // rcx
  __int64 v349; // rdx
  __int64 v350; // r8
  __int64 v351; // r9
  _QWORD *v352; // rcx
  __int64 v353; // rcx
  int *v354; // rcx
  int v355; // eax
  __int64 v356; // rbx
  int v357; // xmm6_4
  __int64 v358; // rdi
  float v359; // xmm0_4
  float v360; // xmm0_4
  int *v361; // rax
  float v362; // xmm6_4
  __int64 v363; // rdi
  __int64 v364; // rbx
  float v365; // xmm0_4
  __int64 v366; // rdx
  float v367; // xmm6_4
  __int64 v368; // rdx
  __int64 v369; // r8
  __int64 v370; // r9
  _QWORD *v371; // rcx
  __int64 v372; // rcx
  int v373; // edx
  int v374; // r8d
  int v375; // r9d
  int v376; // edi
  char *v377; // rdi
  int v378; // edx
  int v379; // r8d
  int v380; // r9d
  char *v381; // rcx
  int v382; // edi
  float v383; // xmm0_4
  float v384; // xmm2_4
  int v385; // edi
  int v386; // edi
  __int64 v387; // r8
  __int64 v388; // r9
  __int64 v389; // rcx
  __int64 v390; // rdx
  __m128i v391; // xmm0
  __m128i v392; // xmm1
  double v393; // xmm2_8
  _QWORD *v394; // rcx
  __int64 v395; // rcx
  __int64 v396; // rdi
  __int64 v397; // rdx
  __int64 v398; // r8
  __int64 v399; // r9
  _QWORD *v400; // rcx
  __int64 v401; // rcx
  int v402; // edx
  int v403; // r8d
  int v404; // r9d
  int v405; // edi
  int v406; // edx
  int v407; // r8d
  int v408; // r9d
  __int64 v409; // rdx
  __int64 v410; // r8
  __int64 v411; // r9
  _QWORD *v412; // rcx
  __int64 v413; // rcx
  int v414; // edx
  int v415; // r8d
  int v416; // r9d
  int v417; // ebx
  int v418; // edx
  int v419; // r8d
  int v420; // r9d
  int v421; // edx
  int v422; // r8d
  int v423; // edx
  int v424; // r8d
  int v425; // r9d
  __int64 v426; // rdx
  __int64 v427; // rcx
  __int64 j; // rdi
  __m128i v429; // xmm0
  __int64 v430; // rdi
  __int64 v431; // rbx
  __int64 v432; // rbp
  __m128i v433; // xmm0
  const char *v434; // rdx
  __int64 v435; // rdx
  __int64 v436; // r8
  __int64 v437; // r9
  _QWORD *v438; // rcx
  __int64 v439; // rcx
  int v440; // r8d
  const char *v441; // rdx
  CHAR *v442; // rdx
  const char *v443; // rdx
  const char *v444; // rdx
  bool v445; // r12
  unsigned int v446; // ebx
  int v447; // ebp
  __int64 v448; // rdi
  int v449; // r8d
  int v450; // r9d
  int v451; // edx
  int v452; // r8d
  int v453; // edx
  int v454; // r8d
  __int64 v455; // rdi
  int v456; // edx
  int v457; // r8d
  int v458; // r9d
  int v459; // edx
  int v460; // r8d
  __int64 v461; // rdx
  __int64 v462; // r8
  __int64 v463; // r9
  _QWORD *v464; // rcx
  __int64 v465; // rcx
  int v466; // edx
  int v467; // r8d
  int v468; // r9d
  int v469; // ebx
  int v470; // edx
  int v471; // r8d
  int v472; // r9d
  int v473; // edx
  int v474; // r8d
  int v475; // edx
  int v476; // r8d
  int v477; // r9d
  __m128i v478; // xmm1
  double v479; // xmm2_8
  float v480; // xmm7_4
  __int64 v481; // rbx
  double v482; // xmm6_8
  char v483; // bl
  int v484; // r8d
  int v485; // r9d
  int v486; // r8d
  int v487; // r9d
  char v488; // r14
  double v489; // xmm2_8
  char v490; // bl
  int v491; // edx
  int v492; // r8d
  int v493; // r9d
  int v494; // r8d
  int v495; // edx
  int v496; // r8d
  int v497; // r9d
  float v498; // xmm7_4
  __int64 v499; // rbx
  float v500; // xmm6_4
  int v501; // r9d
  char v502; // r12
  char v503; // bl
  int v504; // r9d
  __int64 v505; // rdx
  __int64 v506; // rcx
  __int64 v507; // rdx
  __int64 v508; // rcx
  __m128i v509; // xmm1
  __int64 v510; // rbx
  double v511; // xmm6_8
  char v512; // al
  char v513; // r14
  int v514; // r8d
  int v515; // r9d
  char v516; // al
  char v517; // bl
  float v518; // xmm6_4
  float v519; // xmm0_4
  unsigned int v520; // r12d
  unsigned int v521; // ebp
  __int64 v522; // rbx
  float v523; // xmm13_4
  float v524; // xmm8_4
  float v525; // xmm12_4
  float v526; // xmm14_4
  float v527; // xmm7_4
  unsigned int v528; // r15d
  float v529; // xmm15_4
  float v530; // xmm2_4
  unsigned int v531; // ecx
  int v532; // ecx
  int v533; // eax
  __int64 v534; // rcx
  float *v535; // rdx
  bool v536; // cf
  __int64 v537; // r8
  double v538; // xmm0_8
  int v539; // r8d
  int v540; // r9d
  float v541; // xmm1_4
  float v542; // xmm0_4
  float v543; // xmm2_4
  __int64 v544; // rax
  float v545; // xmm1_4
  float v546; // xmm8_4
  float v547; // xmm7_4
  __int64 v548; // rdi
  float v549; // xmm6_4
  double v550; // xmm0_8
  int v551; // r9d
  double v552; // xmm0_8
  float v553; // xmm1_4
  unsigned __int64 v554; // rax
  float *v555; // rcx
  float v556; // xmm6_4
  unsigned int v557; // edi
  unsigned int v558; // r12d
  __int64 v559; // rbx
  float v560; // xmm10_4
  float v561; // xmm13_4
  float v562; // xmm11_4
  float v563; // xmm15_4
  unsigned int v564; // r15d
  float v565; // xmm7_4
  float v566; // xmm14_4
  float v567; // xmm2_4
  unsigned int v568; // ecx
  int v569; // ecx
  int v570; // eax
  __int64 v571; // rcx
  float *v572; // rdx
  __int64 v573; // r8
  double v574; // xmm0_8
  int v575; // r8d
  int v576; // r9d
  float v577; // xmm1_4
  float v578; // xmm0_4
  float v579; // xmm2_4
  __int64 v580; // rax
  float v581; // xmm1_4
  float v582; // xmm1_4
  unsigned __int64 v583; // rax
  float *v584; // rcx
  int v585; // [rsp+20h] [rbp-5D78h]
  int v586; // [rsp+20h] [rbp-5D78h]
  int v587; // [rsp+20h] [rbp-5D78h]
  int v588; // [rsp+20h] [rbp-5D78h]
  int v589; // [rsp+28h] [rbp-5D70h]
  int v590; // [rsp+28h] [rbp-5D70h]
  int v591; // [rsp+28h] [rbp-5D70h]
  unsigned __int8 v592; // [rsp+6Eh] [rbp-5D2Ah] BYREF
  char v593; // [rsp+6Fh] [rbp-5D29h] BYREF
  float v594; // [rsp+70h] [rbp-5D28h] BYREF
  float v595; // [rsp+78h] [rbp-5D20h] BYREF
  float v596; // [rsp+7Ch] [rbp-5D1Ch] BYREF
  float v597; // [rsp+80h] [rbp-5D18h] BYREF
  float v598; // [rsp+84h] [rbp-5D14h] BYREF
  int v599[2]; // [rsp+88h] [rbp-5D10h] BYREF
  float v600; // [rsp+94h] [rbp-5D04h] BYREF
  __int64 *v601; // [rsp+98h] [rbp-5D00h]
  __int128 v602; // [rsp+A0h] [rbp-5CF8h] BYREF
  _BYTE v603[28]; // [rsp+B0h] [rbp-5CE8h]
  __int128 Block[3]; // [rsp+D0h] [rbp-5CC8h] BYREF
  _BYTE v605[40]; // [rsp+100h] [rbp-5C98h] BYREF
  __int128 v606; // [rsp+128h] [rbp-5C70h] BYREF
  __int64 v607; // [rsp+138h] [rbp-5C60h]
  __m128i v608; // [rsp+140h] [rbp-5C58h] BYREF
  __m128i v609; // [rsp+150h] [rbp-5C48h] BYREF
  float v610; // [rsp+16Ch] [rbp-5C2Ch]
  __int128 v611; // [rsp+170h] [rbp-5C28h] BYREF
  int v612; // [rsp+180h] [rbp-5C18h]
  __int64 v613; // [rsp+198h] [rbp-5C00h]
  float v614; // [rsp+1A4h] [rbp-5BF4h]
  float v615; // [rsp+1A8h] [rbp-5BF0h] BYREF
  float v616; // [rsp+1ACh] [rbp-5BECh] BYREF
  int v617[4]; // [rsp+1B0h] [rbp-5BE8h] BYREF
  __int64 v618; // [rsp+1C0h] [rbp-5BD8h] BYREF
  int v619; // [rsp+1C8h] [rbp-5BD0h]
  __int64 v620; // [rsp+1D0h] [rbp-5BC8h] BYREF
  float v621; // [rsp+1D8h] [rbp-5BC0h]
  int v622[3]; // [rsp+1E0h] [rbp-5BB8h] BYREF
  __int64 v623; // [rsp+1ECh] [rbp-5BACh]
  int v624; // [rsp+1F4h] [rbp-5BA4h]
  float v625; // [rsp+1F8h] [rbp-5BA0h]
  int v626; // [rsp+1FCh] [rbp-5B9Ch]
  int v627; // [rsp+200h] [rbp-5B98h]
  __int64 v628; // [rsp+204h] [rbp-5B94h]
  int v629; // [rsp+20Ch] [rbp-5B8Ch]
  __int64 v630[2]; // [rsp+210h] [rbp-5B88h] BYREF
  __int64 v631[2]; // [rsp+220h] [rbp-5B78h] BYREF
  __int64 v632[2]; // [rsp+230h] [rbp-5B68h] BYREF
  __int64 v633[2]; // [rsp+240h] [rbp-5B58h] BYREF
  __int64 v634[2]; // [rsp+250h] [rbp-5B48h] BYREF
  __int64 v635[2]; // [rsp+260h] [rbp-5B38h] BYREF
  __int64 v636[2]; // [rsp+270h] [rbp-5B28h] BYREF
  __int64 v637[2]; // [rsp+280h] [rbp-5B18h] BYREF
  __int64 v638[2]; // [rsp+290h] [rbp-5B08h] BYREF
  __int64 v639[2]; // [rsp+2A0h] [rbp-5AF8h] BYREF
  __int64 v640[2]; // [rsp+2B0h] [rbp-5AE8h] BYREF
  __int64 v641[2]; // [rsp+2C0h] [rbp-5AD8h] BYREF
  __int128 v642; // [rsp+2D0h] [rbp-5AC8h] BYREF
  __int128 v643; // [rsp+2E0h] [rbp-5AB8h] BYREF
  char v644[16]; // [rsp+2F0h] [rbp-5AA8h] BYREF
  char v645[16]; // [rsp+300h] [rbp-5A98h] BYREF
  __int128 v646[2]; // [rsp+310h] [rbp-5A88h] BYREF
  _BYTE v647[64]; // [rsp+330h] [rbp-5A68h] BYREF
  _BYTE v648[64]; // [rsp+370h] [rbp-5A28h] BYREF
  _QWORD v649[14]; // [rsp+3B0h] [rbp-59E8h] BYREF
  int v650; // [rsp+420h] [rbp-5978h]
  int v651; // [rsp+4B0h] [rbp-58E8h]
  int v652; // [rsp+510h] [rbp-5888h]
  char v653[16]; // [rsp+F30h] [rbp-4E68h] BYREF
  char v654[16]; // [rsp+F40h] [rbp-4E58h] BYREF
  char v655[16]; // [rsp+F50h] [rbp-4E48h] BYREF
  char v656[16]; // [rsp+F60h] [rbp-4E38h] BYREF
  char v657[16]; // [rsp+F70h] [rbp-4E28h] BYREF
  char v658[16]; // [rsp+F80h] [rbp-4E18h] BYREF
  char *FileName[2]; // [rsp+F90h] [rbp-4E08h] BYREF
  __m256 v660; // [rsp+FA0h] [rbp-4DF8h] BYREF
  __int128 v661; // [rsp+FC0h] [rbp-4DD8h]
  _BYTE v662[64]; // [rsp+FD0h] [rbp-4DC8h] BYREF
  _QWORD v663[32]; // [rsp+1010h] [rbp-4D88h] BYREF
  int v664; // [rsp+1110h] [rbp-4C88h]
  int v665; // [rsp+1170h] [rbp-4C28h]
  _QWORD Str1[9]; // [rsp+1B90h] [rbp-4208h] BYREF
  char v667; // [rsp+1BD8h] [rbp-41C0h]
  __int64 v668; // [rsp+1BDCh] [rbp-41BCh]
  struct _stat64i32 v669; // [rsp+3C20h] [rbp-2178h] BYREF
  char v670; // [rsp+3C50h] [rbp-2148h]
  char v671; // [rsp+3C67h] [rbp-2131h]
  char v672; // [rsp+3C90h] [rbp-2108h]
  __int16 v673; // [rsp+3CA7h] [rbp-20F1h]
  char v674; // [rsp+3CA9h] [rbp-20EFh]

  if ( strcmp(*http_req, "GET") )
    goto LABEL_2;
  if ( !*(game + 0x718)
    || !*(game + 0xDC) && (!byte_4B1C820 || dword_4B1C810 != 5 && dword_4B1C810 != 2)
    || !*(*(game + 0x430) + 0x365i64) )
  {
    if ( *(http_req + 0x4E8) )
    {
      v8 = *(http_req + 0x4F8);
      if ( v8 )
        v8();
    }
    result = "HTTP/1.1 403 Forbidden\r\n\r\n";
    *(http_req + 0x4E8) = "HTTP/1.1 403 Forbidden\r\n\r\n";
    *(http_req + 0x4F0) = 0x1A;
    goto LABEL_18;
  }
  v6 = *(http_req + 0x18);
  v7 = v6 ? strlen(*(http_req + 0x18)) : 0i64;
  if ( !parse_command_data(v6, v7, "cmd", &v608, 0x20i64) )
    goto LABEL_2;
  Unit = LocalUnit;
  if ( !LocalUnit )
    goto LABEL_2;
  if ( *(LocalUnit + 0x10A8) > 1u )
    goto LABEL_2;
  if ( (*(LocalUnit + 0x1058) & 0x7000014) != 0 )
    goto LABEL_2;
  if ( *(LocalUnit + 0x10B0) )
    goto LABEL_2;
  air_movement = *(LocalUnit + 0x9D0);
  if ( !air_movement )
    goto LABEL_2;
  if ( !(v608.m128i_i64[0] ^ 0x657053646C697562i64 | *(v608.m128i_i64 + 3) ^ 0x7363657053646Ci64) )
  {
    sub_FBDF0(Str1);
    sub_14584E0(&v669, off_4B678B0);
    sub_1542B10(Str1, air_movement, &v669);
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v22, v23, v24);
    v26 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    *v647 = 0i64;
    *&v647[8] = v26;
    *&v647[0x10] = 0i64;
    v27 = *(*(Unit + 0x4160) + 0x10i64);
    v28 = &szFile;
    if ( !v27 )
      v27 = &szFile;
    FileName[1] = v27;
    LODWORD(FileName[0]) = 1;
    ctor_vprintf(v647, 0x80i64, "newFM/specs_%s.blk", FileName, 1);
    v29 = *v647;
    if ( *&v647[0x10] )
      v28 = *v647;
    sub_1651010(&v669, v28);
    if ( v29 )
      (*(**&v647[8] + 0x40i64))(*&v647[8], v29);
    v30 = &v669;
LABEL_59:
    sub_1458FF0(v30);
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  if ( v608.m128i_i64[0] == 0x4D46656772656Di64 )
  {
    *v647 = 0i64;
    *&v647[8] = off_4B678C8;
    *&v647[0x10] = 0i64;
    v11 = *(*(LocalUnit + 0x4160) + 0x10i64);
    v12 = &szFile;
    if ( !v11 )
      v11 = &szFile;
    Str1[1] = v11;
    LODWORD(Str1[0]) = 1;
    ctor_vprintf(v647, 0x80i64, "currentFM/%s.blk", Str1, 1);
    sub_14584E0(Str1, off_4B678B0);
    sub_14584E0(&v669, off_4B678B0);
    v13 = *v647;
    v14 = *v647;
    if ( !*&v647[0x10] )
      v14 = &szFile;
    if ( sub_1606B70(Str1, v14, 0i64) )
    {
      v18 = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(v18[TlsIndex] + 1i64) )
        _dyn_tls_on_demand_init(v18, v15, v16, v17);
      v19 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
      FileName[0] = 0i64;
      FileName[1] = v19;
      *v660.m256_f32 = 0i64;
      v20 = sub_B0A470(*(Unit + 0x4160), FileName);
      if ( v20 && sub_1606B70(&v669, v20, 0i64) )
      {
        sub_B0D2D0(Str1, &v669, &v602);
        v21 = *(*(Unit + 0x4160) + 0x10i64);
        if ( !v21 )
          v21 = &szFile;
        *v605 = v21;
        sub_4910E0(&v602, 0x80i64, "mergeFM/%s.blk", v605);
        if ( !sub_17B0470("mergeFM") )
          sub_17B01A0("mergeFM");
        if ( *v603 )
          v12 = v602;
        sub_1651010(Str1, v12);
        if ( v602 )
          (*(**(&v602 + 1) + 0x40i64))(*(&v602 + 1));
      }
      if ( FileName[0] )
        (*(*FileName[1] + 0x40i64))(FileName[1]);
    }
    sub_1458FF0(&v669);
    sub_1458FF0(Str1);
    if ( v13 )
      (*(**&v647[8] + 0x40i64))(*&v647[8], v13);
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  if ( !(v608.m128i_i64[0] ^ 0x4D4664616F6C6E75i64 | v608.m128i_u8[8]) )
  {
    if ( !sub_17B0470("currentFM") )
      sub_17B01A0("currentFM");
    v44 = *(Unit + 0x4160);
    v45 = *(v44 + 0x10);
    v46 = &szFile;
    if ( !v45 )
      v45 = &szFile;
    v47 = *(v44 + 0x18);
    if ( !v47 )
      v47 = &szFile;
    sub_1458620(Str1, v47, off_4B678B0);
    sub_157F4A0(v647, Str1, v45);
    if ( *&v647[0x10] )
      v46 = *v647;
    FileName[0] = sub_17B0B30(v46);
    sub_4910E0(&v669, 0x100i64, "currentFM/%s", FileName);
    if ( *v647 )
      (*(**&v647[8] + 0x40i64))(*&v647[8]);
    sub_1458FF0(Str1);
    sub_14584E0(Str1, off_4B678B0);
    sub_1577510(air_movement, Str1, 0i64, *(*(Unit + 0x11A0) + 0x58i64));
    v48 = sub_145DB90(Str1, "Instructor");
    sub_182B660(Unit + 0x2FC0, v48, 0i64);
    v49 = sub_145DB90(Str1, "Autopilot");
    sub_1839EE0(*(Unit + 0x2E70), v49, 0i64);
    if ( v669.st_rdev )
      v50 = *&v669.st_dev;
    else
      v50 = &szFile;
    sub_1651010(Str1, v50);
    sub_1458FF0(Str1);
    if ( *&v669.st_dev )
      (*(**&v669.st_nlink + 0x40i64))(*&v669.st_nlink);
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  if ( !(v608.m128i_i64[0] ^ 0x736150646C697562i64 | *(v608.m128i_i64 + 6) ^ 0x74726F70737361i64) )
  {
    sub_14584E0(FileName, off_4B678B0);
    LODWORD(v606) = 0;
    if ( sub_B09200(http_req, "unitSystem", v647) && sub_B0A5E0(http_req, "mass") && sub_B0A930(http_req, Str1) )
    {
      v54 = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(v54[TlsIndex] + 1i64) )
        _dyn_tls_on_demand_init(v54, v51, v52, v53);
      v55 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
      *&v602 = 0i64;
      *(&v602 + 1) = v55;
      *v603 = 0i64;
      v613 = sub_B0A470(*(Unit + 0x4160), &v602);
      if ( v613 && sub_1606B70(FileName, v613, 0i64) )
      {
        sub_145F7B0(FileName, "Passport");
        v56 = sub_145DB90(FileName, "Passport");
        data::set_str(v56, "unitSystem", v647);
        sub_145B830(v56, "mass");
        v599[0] = 1;
        sub_B0A980(http_req, "maxSpeedSpeedType", v599);
        data::set_str(v56, "maxSpeedSpeedType", (&off_4A791A0)[v599[0]]);
        v595 = 0.0;
        sub_B0A980(http_req, "climbSpeedCount", &v595);
        v601 = v56;
        sub_145A750(v56, "climbSpeedNum", LODWORD(v595));
        v594 = 0.0;
        if ( v595 != 0.0 )
        {
          do
          {
            v596 = 0.0;
            v597 = 0.0;
            v598 = 0.0;
            v600 = 0.0;
            sub_5AF370(&v669, 0x10i64, "alt%d", &v594);
            sub_5AF370(v605, 0x10i64, "speedType%d", &v594);
            sub_5AF370(Block, 0x10i64, "speedMax%d", &v594);
            sub_5AF370(&v611, 0x10i64, "speedWEP%d", &v594);
            v57 = &szFile;
            if ( v669.st_rdev )
              v57 = *&v669.st_dev;
            if ( sub_B0A5E0(http_req, v57) )
            {
              v58 = &szFile;
              if ( *&v605[0x10] )
                v58 = *v605;
              if ( sub_B0A980(http_req, v58, &v596) )
              {
                v59 = &szFile;
                if ( LODWORD(Block[1]) )
                  v59 = *&Block[0];
                if ( sub_B0A5E0(http_req, v59) )
                {
                  v60 = &szFile;
                  if ( v612 )
                    v60 = v611;
                  if ( sub_B0A5E0(http_req, v60) )
                  {
                    v61 = &szFile;
                    if ( v669.st_rdev )
                      v61 = *&v669.st_dev;
                    sub_145B830(v601, v61);
                    v62 = &szFile;
                    if ( *&v605[0x10] )
                      v62 = *v605;
                    data::set_str(v601, v62, (&off_4A791A0)[SLODWORD(v596)]);
                    v63 = &szFile;
                    if ( LODWORD(Block[1]) )
                      v63 = *&Block[0];
                    sub_145B830(v601, v63);
                    v64 = &szFile;
                    if ( v612 )
                      v64 = v611;
                    sub_145B830(v601, v64);
                  }
                }
              }
            }
            if ( v611 )
              (*(**(&v611 + 1) + 0x40i64))(*(&v611 + 1));
            if ( *&Block[0] )
              (*(**(&Block[0] + 1) + 0x40i64))(*(&Block[0] + 1));
            if ( *v605 )
              (*(**&v605[8] + 0x40i64))(*&v605[8]);
            if ( *&v669.st_dev )
              (*(**&v669.st_nlink + 0x40i64))(*&v669.st_nlink);
            ++LODWORD(v594);
          }
          while ( LODWORD(v594) < LODWORD(v595) );
        }
        LODWORD(v611) = 0;
        sub_B0A980(http_req, "turnTimeFlaps", &v611);
        sub_145A750(v601, "turnTimeFlaps", v611);
        v605[8] = 0;
        v605[0xC] = 0;
        *&v605[0x10] = 0i64;
        memset(&v669, 0, sizeof(v669));
        v670 = 0;
        v671 = 0x17;
        v672 = 0;
        v673 = 0x117;
        v674 = 0;
        sub_B0A9F0(Block, Str1);
        sub_18F4A70(&v669, Block, v605, 0i64);
        if ( (SBYTE7(Block[1]) & 0x80u) != 0 && *&Block[0] )
          sub_1464430(*&Block[0]);
        v153 = add_ss_section(v601, &unk_4898FAD);
        v154 = 0i64;
        v155 = sub_180EDC0(v605, "stall", 0i64);
        v156 = *(v155 + 8);
        v157 = *v155;
        v158 = (v156 & 0xFE) != 6 || *v155 == 0i64;
        if ( !v158 )
          v154 = v157[1];
        while ( 1 )
        {
          v159 = (v156 & 0xFE) != 6 || v157 == 0i64;
          if ( v158 )
          {
            if ( v159 )
              goto LABEL_254;
          }
          else
          {
            if ( v159 )
              v157 = 0i64;
            if ( v154 == v157 )
            {
LABEL_254:
              v172 = 0i64;
              v173 = sub_180EDC0(v605, "maxSpeed", 0i64);
              v174 = *(v173 + 8);
              v175 = *v173;
              v176 = (v174 & 0xFE) != 6 || *v173 == 0i64;
              if ( !v176 )
                v172 = v175[1];
              while ( 1 )
              {
                v177 = (v174 & 0xFE) != 6 || v175 == 0i64;
                if ( v176 )
                {
                  if ( v177 )
                    goto LABEL_275;
                }
                else
                {
                  if ( v177 )
                    v175 = 0i64;
                  if ( v172 == v175 )
                  {
LABEL_275:
                    v190 = 0i64;
                    v191 = sub_180EDC0(v605, "minClimbTime", 0i64);
                    v192 = *(v191 + 8);
                    v193 = *v191;
                    v194 = (v192 & 0xFE) != 6 || *v191 == 0i64;
                    if ( !v194 )
                      v190 = v193[1];
                    while ( 1 )
                    {
                      v195 = (v192 & 0xFE) != 6 || v193 == 0i64;
                      if ( v194 )
                      {
                        if ( v195 )
                          goto LABEL_296;
                      }
                      else
                      {
                        if ( v195 )
                          v193 = 0i64;
                        if ( v190 == v193 )
                        {
LABEL_296:
                          v208 = 0i64;
                          v209 = sub_180EDC0(v605, "minTurnTime", 0i64);
                          v210 = *(v209 + 8);
                          v211 = *v209;
                          v212 = (v210 & 0xFE) != 6 || *v209 == 0i64;
                          if ( !v212 )
                            v208 = v211[1];
                          while ( 1 )
                          {
                            v213 = (v210 & 0xFE) != 6 || v211 == 0i64;
                            if ( v212 )
                            {
                              if ( v213 )
                                goto LABEL_317;
                            }
                            else
                            {
                              if ( v213 )
                                v211 = 0i64;
                              if ( v208 == v211 )
                              {
LABEL_317:
                                v226 = add_ss_section(v601, "IAS");
                                v227 = 0i64;
                                v228 = sub_180EDC0(v605, "maxRollRate", 0i64);
                                v229 = *(v228 + 8);
                                v230 = *v228;
                                v231 = (v229 & 0xFE) != 6 || *v228 == 0i64;
                                if ( !v231 )
                                  v227 = v230[1];
                                while ( 1 )
                                {
                                  v232 = (v229 & 0xFE) != 6 || v230 == 0i64;
                                  if ( v231 )
                                  {
                                    if ( v232 )
                                      goto LABEL_338;
                                  }
                                  else
                                  {
                                    if ( v232 )
                                      v230 = 0i64;
                                    if ( v227 == v230 )
                                    {
LABEL_338:
                                      sub_1651010(FileName, v613);
                                      sub_B0AB40(&v669);
                                      sub_180E1F0(v605);
                                      goto LABEL_339;
                                    }
                                  }
                                  if ( *(sub_180ED20(v227 + 6, 1i64) + 8) )
                                  {
                                    v233 = sub_180ED20(v227 + 6, 1i64);
                                    v234 = sub_180EA50(v233);
                                    v235 = LODWORD(v234);
                                    v236 = sub_180ED20(v227 + 6, 0i64);
                                    v237 = sub_180EA50(v236);
                                    *&Block[0] = __PAIR64__(v235, LODWORD(v237));
                                    sub_145C4C0(v226, "maxRollRateLeft", Block);
                                  }
                                  if ( *(sub_180ED20(v227 + 6, 2i64) + 8) )
                                  {
                                    v238 = sub_180ED20(v227 + 6, 2i64);
                                    v239 = sub_180EA50(v238);
                                    v240 = LODWORD(v239);
                                    v241 = sub_180ED20(v227 + 6, 0i64);
                                    v242 = sub_180EA50(v241);
                                    *&Block[0] = __PAIR64__(v240, LODWORD(v242));
                                    sub_145C4C0(v226, "maxRollRateRight", Block);
                                  }
                                  v243 = *v227;
                                  if ( *v227 )
                                  {
                                    do
                                    {
                                      v227 = v243;
                                      v243 = v243[1];
                                    }
                                    while ( v243 );
                                  }
                                  else
                                  {
                                    do
                                    {
                                      v244 = v227;
                                      v227 = v227[2];
                                    }
                                    while ( v244 == *v227 );
                                    if ( *v244 == v227 )
                                      v227 = v244;
                                  }
                                  v229 = *(v228 + 8);
                                  v230 = *v228;
                                }
                              }
                            }
                            if ( *(sub_180ED20(v208 + 6, 1i64) + 8) )
                            {
                              v214 = sub_180ED20(v208 + 6, 1i64);
                              v215 = sub_180EA50(v214);
                              v216 = LODWORD(v215);
                              v217 = sub_180ED20(v208 + 6, 0i64);
                              v218 = sub_180EA50(v217);
                              *&Block[0] = __PAIR64__(v216, LODWORD(v218));
                              sub_145C4C0(v153, "minTurnTimeNom", Block);
                            }
                            if ( *(sub_180ED20(v208 + 6, 2i64) + 8) )
                            {
                              v219 = sub_180ED20(v208 + 6, 2i64);
                              v220 = sub_180EA50(v219);
                              v221 = LODWORD(v220);
                              v222 = sub_180ED20(v208 + 6, 0i64);
                              v223 = sub_180EA50(v222);
                              *&Block[0] = __PAIR64__(v221, LODWORD(v223));
                              sub_145C4C0(v153, "minTurnTimeWep", Block);
                            }
                            v224 = *v208;
                            if ( *v208 )
                            {
                              do
                              {
                                v208 = v224;
                                v224 = v224[1];
                              }
                              while ( v224 );
                            }
                            else
                            {
                              do
                              {
                                v225 = v208;
                                v208 = v208[2];
                              }
                              while ( v225 == *v208 );
                              if ( *v225 == v208 )
                                v208 = v225;
                            }
                            v210 = *(v209 + 8);
                            v211 = *v209;
                          }
                        }
                      }
                      if ( *(sub_180ED20(v190 + 6, 1i64) + 8) )
                      {
                        v196 = sub_180ED20(v190 + 6, 1i64);
                        v197 = sub_180EA50(v196);
                        v198 = LODWORD(v197);
                        v199 = sub_180ED20(v190 + 6, 0i64);
                        v200 = sub_180EA50(v199);
                        *&Block[0] = __PAIR64__(v198, LODWORD(v200));
                        sub_145C4C0(v153, "minClimbTimeNom", Block);
                      }
                      if ( *(sub_180ED20(v190 + 6, 2i64) + 8) )
                      {
                        v201 = sub_180ED20(v190 + 6, 2i64);
                        v202 = sub_180EA50(v201);
                        v203 = LODWORD(v202);
                        v204 = sub_180ED20(v190 + 6, 0i64);
                        v205 = sub_180EA50(v204);
                        *&Block[0] = __PAIR64__(v203, LODWORD(v205));
                        sub_145C4C0(v153, "minClimbTimeWep", Block);
                      }
                      v206 = *v190;
                      if ( *v190 )
                      {
                        do
                        {
                          v190 = v206;
                          v206 = v206[1];
                        }
                        while ( v206 );
                      }
                      else
                      {
                        do
                        {
                          v207 = v190;
                          v190 = v190[2];
                        }
                        while ( v207 == *v190 );
                        if ( *v207 == v190 )
                          v190 = v207;
                      }
                      v192 = *(v191 + 8);
                      v193 = *v191;
                    }
                  }
                }
                if ( *(sub_180ED20(v172 + 6, 1i64) + 8) )
                {
                  v178 = sub_180ED20(v172 + 6, 1i64);
                  v179 = sub_180EA50(v178);
                  v180 = LODWORD(v179);
                  v181 = sub_180ED20(v172 + 6, 0i64);
                  v182 = sub_180EA50(v181);
                  *&Block[0] = __PAIR64__(v180, LODWORD(v182));
                  sub_145C4C0(v153, "maxSpeedNom", Block);
                }
                if ( *(sub_180ED20(v172 + 6, 2i64) + 8) )
                {
                  v183 = sub_180ED20(v172 + 6, 2i64);
                  v184 = sub_180EA50(v183);
                  v185 = LODWORD(v184);
                  v186 = sub_180ED20(v172 + 6, 0i64);
                  v187 = sub_180EA50(v186);
                  *&Block[0] = __PAIR64__(v185, LODWORD(v187));
                  sub_145C4C0(v153, "maxSpeedWep", Block);
                }
                v188 = *v172;
                if ( *v172 )
                {
                  do
                  {
                    v172 = v188;
                    v188 = v188[1];
                  }
                  while ( v188 );
                }
                else
                {
                  do
                  {
                    v189 = v172;
                    v172 = v172[2];
                  }
                  while ( v189 == *v172 );
                  if ( *v189 == v172 )
                    v172 = v189;
                }
                v174 = *(v173 + 8);
                v175 = *v173;
              }
            }
          }
          if ( *(sub_180ED20(v154 + 6, 1i64) + 8) )
          {
            v160 = sub_180ED20(v154 + 6, 1i64);
            v161 = sub_180EA50(v160);
            v162 = LODWORD(v161);
            v163 = sub_180ED20(v154 + 6, 0i64);
            v164 = sub_180EA50(v163);
            *&Block[0] = __PAIR64__(v162, LODWORD(v164));
            sub_145C4C0(v153, "stallSpeed", Block);
          }
          if ( *(sub_180ED20(v154 + 6, 2i64) + 8) )
          {
            v165 = sub_180ED20(v154 + 6, 2i64);
            v166 = sub_180EA50(v165);
            v167 = LODWORD(v166);
            v168 = sub_180ED20(v154 + 6, 0i64);
            v169 = sub_180EA50(v168);
            *&Block[0] = __PAIR64__(v167, LODWORD(v169));
            sub_145C4C0(v153, "stallSpeedLanding", Block);
          }
          v170 = *v154;
          if ( *v154 )
          {
            do
            {
              v154 = v170;
              v170 = v170[1];
            }
            while ( v170 );
          }
          else
          {
            do
            {
              v171 = v154;
              v154 = v154[2];
            }
            while ( v171 == *v154 );
            if ( *v171 == v154 )
              v154 = v171;
          }
          v156 = *(v155 + 8);
          v157 = *v155;
        }
      }
LABEL_339:
      if ( v602 )
        (*(**(&v602 + 1) + 0x40i64))(*(&v602 + 1));
    }
    v30 = FileName;
    goto LABEL_59;
  }
  v31 = _mm_xor_si128(_mm_load_si128(&v608), xmmword_44CB140);
  if ( _mm_testz_si128(v31, v31) )
  {
    v601 = *(LocalUnit + 0x9D0);
    LODWORD(Block[0]) = 0;
    if ( sub_B0ACA0(http_req, Str1) && sub_B09250(http_req, Block) )
    {
      v68 = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(v68[TlsIndex] + 1i64) )
        _dyn_tls_on_demand_init(v68, v65, v66, v67);
      v69 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
      *v647 = 0i64;
      *&v647[8] = v69;
      *&v647[0x10] = 0i64;
      v70 = sub_B092C0(*(Unit + 0x4160), v647);
      sub_B093A0(FileName, v70);
      v71 = &szFile;
      if ( FileName[1] )
        v71 = FileName[1];
      v72 = stat64i32(v71, &v669);
      st_mtime = 0;
      if ( !v72 )
        st_mtime = v669.st_mtime;
      if ( LODWORD(Block[0]) == st_mtime && !strcmp(Str1, v70) )
      {
        result = sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
        if ( FileName[1] )
          result = (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
        goto LABEL_369;
      }
      if ( FileName[1] )
        (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
      v65 = *v647;
      if ( *v647 )
        (*(**&v647[8] + 0x40i64))(*&v647[8]);
    }
    v74 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v74[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(v74, v65, v66, v67);
    v75 = *(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
    v76 = *(v75 + 0x160);
    *v647 = &off_44CAF30;
    *&v647[0x10] = v76;
    *&v647[0x18] = 0x4000i64;
    *&v647[0x20] = 0i64;
    *&v647[8] = (*(*v76 + 0x18i64))(v76, 0x4000i64);
    **&v647[8] = 0;
    sub_B09440(v647, "{\n");
    sub_B09440(v647, "  \"valid\": true,\n");
    sub_B094D0(Unit, v647);
    sub_B09440(v647, ",\n");
    sub_B09440(v647, "  \"mass\": {\n");
    sub_B09B80(v647, "    \"maxFuel\": %f,\n", a3);
    *&v669.st_dev = *(v601 + 0xD8D) - *(v601 + 0xD93);
    sub_B09B80(v647, "    \"noFuel\": %f,\n", a3);
    v669.st_dev = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*(v601 + 0xD8D)));
    sub_B09B80(v647, "    \"total\": %f\n", a3);
    sub_B09440(v647, "  },\n");
    v81 = *(*(Unit + 0x11A0) + 0x58i64);
    v82 = *(v81 + 0xB0);
    v83 = *(v81 + 0xA0);
    if ( !*(v75 + 1) )
      _dyn_tls_on_demand_init(v78, v77, v79, v80);
    v84 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    FileName[0] = 0i64;
    FileName[1] = v84;
    *v660.m256_f32 = 0i64;
    if ( v82 )
    {
      v85 = 0xD0 * v82;
      v86 = 0i64;
      do
      {
        v87 = *(v83 + v86 + 0xC0);
        if ( !v87 )
          v87 = &szFile;
        v88 = sub_7AB420(v87);
        if ( v88 >= 0 )
        {
          *&v669.st_dev = v87;
          *&v669.st_nlink = v88;
          sub_B0ACF0(FileName, &v669);
        }
        v86 += 0xD0i64;
      }
      while ( v85 != v86 );
      v89 = v660.m256_f32[0];
    }
    else
    {
      v89 = 0.0;
    }
    sub_B0AD60(FileName, &v669);
    sub_B09440(v647, "  \"dmParts\": [\n");
    if ( v89 != 0.0 )
    {
      v90 = FileName[0];
      sub_B09440(v647, "    {\n");
      sub_B09AE0(v647, "    \"name\": \"%s\",\n", v90);
      sub_B0A540(v647, "    \"id\": %d\n", v90 + 8);
      sub_B09440(v647, "    }");
      if ( LODWORD(v89) != 1 )
      {
        v91 = LODWORD(v89) - 1i64;
        v92 = v90 + 0x18;
        do
        {
          sub_B09440(v647, ",\n");
          sub_B09440(v647, "    {\n");
          sub_B09AE0(v647, "    \"name\": \"%s\",\n", v92 + 0xFFFFFFF8);
          sub_B0A540(v647, "    \"id\": %d\n", v92);
          sub_B09440(v647, "    }");
          v92 += 0x10;
          --v91;
        }
        while ( v91 );
      }
    }
    sub_B09440(v647, &word_4A30321[1]);
    sub_B09440(v647, "  ],\n");
    v96 = **(*(Unit + 0x11A0) + 0x110i64);
    v97 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v97[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(v97, v93, v94, v95);
    v98 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    *&v602 = 0i64;
    *(&v602 + 1) = v98;
    *v603 = 0i64;
    v99 = 0xFFFF;
    if ( *(v96 + 8) >= 0 )
      v99 = *(v96 + 8);
    if ( v99 )
    {
      v100 = v99;
      for ( i = 0i64; i != v100; ++i )
      {
        v102 = *(v96 + 0x40);
        v103 = *(v102 + 2 * i);
        if ( *(v102 + v103) )
        {
          *&v669.st_dev = v103 + v102;
          *&v669.st_nlink = i;
          sub_B0ACF0(&v602, &v669);
        }
      }
      v104 = *v603;
    }
    else
    {
      v104 = 0;
    }
    sub_B0ADB0(&v602, &v669);
    sub_B09440(v647, "  \"skeletonNodes\": [\n");
    if ( v104 )
    {
      v105 = v602;
      sub_B09AE0(v647, "    \"%s\"", v602);
      if ( v104 != 1 )
      {
        v106 = v104 - 1i64;
        v107 = (v105 + 0x10);
        do
        {
          sub_B09440(v647, ",\n");
          sub_B09AE0(v647, "    \"%s\"", v107);
          v107 += 0x10;
          --v106;
        }
        while ( v106 );
      }
    }
    sub_B09440(v647, &word_4A30321[1]);
    sub_B09440(v647, "  ],\n");
    v108 = *(game + 0x720);
    if ( v108 )
    {
      if ( *(v108 + 0x88) )
        v109 = *(v108 + 0x78);
      else
        v109 = &szFile;
      sub_4E3940(v108, v109, Unit);
    }
    v116 = v601;
    v117 = v601[0x759];
    if ( *v117 > 0 )
    {
      v118 = *(v117 + 8);
      if ( v118 )
      {
        sub_B09440(v647, "  \"engine\": {\n");
        v669.st_dev = *(*v118 + 0x178) + 1;
        sub_B0A540(v647, "    \"compressorStageCount\": %d,\n", &v669);
        v669.st_dev = 0x4745E680;
        sub_B09B80(v647, "    \"minManifoldPressure\": %f,\n", a3);
        v119 = *v118;
        v120 = *(*v118 + 0x1BC);
        if ( *(*v118 + 0x221) && v120 > 0 || v120 <= 0xA && (v121 = 0x510, _bittest(&v121, v120)) )
          v122 = *(v119 + 0x19C) * *(v119 + 0x194);
        else
          v122 = *(v119 + 0x194);
        *&v669.st_dev = v122 * *&dword_44CB26C;
        sub_B09B80(v647, "    \"maxManifoldPressure\": %f,\n", a3);
        v669.st_dev = *(*v118 + 0x120);
        sub_B09B80(v647, "    \"minOmega\": %f,\n", a3);
        v669.st_dev = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*(*v118 + 0x124)));
        sub_B09B80(v647, "    \"maxOmega\": %f,\n", a3);
        v123 = v601[0x759];
        v124 = *(v123 + 0xA534);
        if ( v124 >= 0 )
        {
          v125 = *(v123 + 8 * v124 + 0xA4B0);
          v126 = *(v125 + 0x38);
          if ( *(v125 + 0x38) )
          {
            if ( v126 >= 9 )
            {
              v141 = 8i64;
              if ( (v126 & 7) != 0 )
                v141 = v126 & 7;
              v127 = v126 - v141;
              v142 = (v125 + 0xC8);
              si128 = _mm_load_si128(&xmmword_44AD4D0);
              v144 = _mm_load_si128(&xmmword_44AD4E0);
              v145 = 0i64;
              *&a3 = _mm_load_si128(&xmmword_44AD4F0);
              do
              {
                inserted = _mm_insert_epi32(
                             _mm_insert_epi32(
                               _mm_insert_epi32(_mm_cvtsi32_si128(v142[0xFFFFFFF1]), v142[0xFFFFFFF6], 1),
                               v142[0xFFFFFFFB],
                               2),
                             *v142,
                             3);
                *(&v669.st_ino + 2 * v145) = _mm_insert_epi32(
                                               _mm_insert_epi32(
                                                 _mm_insert_epi32(
                                                   _mm_cvtsi32_si128(v142[0xFFFFFFDD]),
                                                   v142[0xFFFFFFE2],
                                                   1),
                                                 v142[0xFFFFFFE7],
                                                 2),
                                               v142[0xFFFFFFEC],
                                               3);
                *(&v669.st_size + v145) = inserted;
                v145 += 8i64;
                v144 = _mm_add_epi64(v144, *&a3);
                si128 = _mm_add_epi64(si128, *&a3);
                v142 += 0x28;
              }
              while ( v127 != v145 );
            }
            else
            {
              v127 = 0i64;
            }
            v147 = (v125 + 0x14 * v127 + 0x3C);
            do
            {
              *(&v669.st_ino + v127++) = *v147;
              v147 += 5;
            }
            while ( v126 != v127 );
            sub_B09B80(v647, "    \"minPitch\": %f,\n", a3);
            sub_B09B80(v647, "    \"maxPitch\": %f,\n", a3);
          }
        }
        if ( *(*v118 + 0x223) )
        {
          v148 = "true";
        }
        else
        {
          v148 = "true";
          if ( !*(*v118 + 0x224) )
            v148 = "false";
        }
        *v605 = v148;
        sub_B09AE0(v647, "    \"coolerControl\": %f\n", a3);
        sub_B09440(v647, "  },\n");
        v116 = v601;
      }
    }
    if ( *(v116 + 0x568E) )
      v149 = 2 - (*(v116 + 0x53F8) == 0);
    else
      v149 = 0;
    v669.st_dev = v149;
    sub_B0A540(v647, "  \"flapsControl\": %d,\n", &v669);
    v150 = "true";
    if ( !*(v116 + 0x568B) )
      v150 = "false";
    *&v669.st_dev = v150;
    sub_B09AE0(v647, "  \"gearControl\": %s\n", &v669);
    if ( byte_4B82158 )
      sub_B0AE00(v647);
    sub_B09440(v647, &word_4A30321[1]);
    sub_B09440(v647, "}\n");
    sub_AF1600(http_req, *&v647[8], *&v647[0x20]);
    if ( v602 )
      (*(**(&v602 + 1) + 0x40i64))(*(&v602 + 1));
    if ( FileName[0] )
      (*(*FileName[1] + 0x40i64))(FileName[1]);
    *v647 = &off_44CAF30;
    v151 = *&v647[8];
    v152 = *&v647[0x10];
    return (*(*v152 + 0x40i64))(v152, v151);
  }
  result = set_fm_commands(http_req, http_req, v608.m128i_i8, LocalUnit, *(LocalUnit + 0x9D0));
  if ( result )
    return result;
  if ( !(v608.m128i_i64[0] ^ 0x7A696C6962617473i64 | v608.m128i_u16[4] ^ 0x65i64) )
  {
    sub_324710(Unit, Str1);
    v110 = *(Unit + 0x99C);
    v111 = *(Unit + 0x9A4);
    v112 = Unit + 0x9C0;
    v113 = fsqrt((v111 * v111) + (v110 * v110));
    if ( v113 <= *&qword_44A0760 )
    {
      v114 = 0.0;
      v115 = Y;
    }
    else
    {
      v114 = v111 * (Y / v113);
      v115 = (Y / v113) * v110;
    }
    *v622 = v115;
    v622[1] = 0;
    *&v622[2] = v114;
    v623 = 0x3F80000000000000i64;
    v624 = 0;
    v625 = v114;
    v626 = 0;
    v627 = SIGN_BIT_MASK ^ LODWORD(v115);
    v628 = *v112;
    v629 = *(v112 + 8);
    sub_1573320(air_movement, v622);
    v128 = fsqrt((*&Str1[1] * *&Str1[1]) + ((*(Str1 + 1) * *(Str1 + 1)) + (*Str1 * *Str1)));
    Str1[0] = COERCE_UNSIGNED_INT(v128 * v115);
    *&Str1[1] = v114 * v128;
    v620 = Str1[0];
    v621 = v114 * v128;
    sub_1573580(air_movement, &v620);
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  if ( v608.m128i_i64[0] == 0x66666F656B6174i64 )
  {
    LOBYTE(v33) = 1;
    v34 = sub_5EF690(*(game + 0x410), Unit, 0i64, v33);
    if ( v34 )
    {
      v35 = *(Unit + 0x9D0);
      sub_5E8940(v34, Str1, *(v35 + 0x978));
      v37 = *(&Str1[2] + 1) - *&Str1[1];
      v38 = *&Str1[2] - *(Str1 + 1);
      v39 = *(&Str1[1] + 1) - *Str1;
      v40 = fsqrt(((v37 * v37) + (v38 * v38)) + (v39 * v39));
      if ( v40 <= *&qword_44A0760 )
      {
        v42 = 0.0;
        v43 = Y;
        v41 = 0.0;
      }
      else
      {
        v41 = v37 * (Y / v40);
        v42 = v38 * (Y / v40);
        v43 = (Y / v40) * v39;
      }
      *&v669.st_dev = v43;
      *&v669.st_ino = v42;
      *&v669.st_nlink = v41;
      *&v669.st_gid = COERCE_FLOAT(SIGN_BIT_MASK ^ LODWORD(v43)) * v42;
      *&v669.st_rdev = (v41 * v41) + (v43 * v43);
      *&v669.st_size = COERCE_FLOAT(LODWORD(v42) ^ SIGN_BIT_MASK) * v41;
      v669.st_atime = LODWORD(v41) | 0x8000000000000000ui64;
      LODWORD(v669.st_mtime) = SIGN_BIT_MASK ^ LODWORD(v43);
      *(&v669.st_mtime + 1) = (*&dword_4489714 * *&v669.st_gid)
                            + ((*&dword_44CB284 * v43) + ((*(&Str1[1] + 1) + *Str1) * *&screenScaleFactor));
      *&v669.st_ctime = (*&v669.st_rdev * *&dword_4489714)
                      + ((v42 * *&dword_44CB284) + ((*&Str1[2] + *(Str1 + 1)) * *&screenScaleFactor));
      *(&v669.st_ctime + 1) = (*&v669.st_size * *&dword_4489714)
                            + ((v41 * *&dword_44CB284) + ((*(&Str1[2] + 1) + *&Str1[1]) * *&screenScaleFactor));
      LOBYTE(v36) = 1;
      sub_3C8B60(Unit, 0, &v669.st_mtime + 4, v36, 1);
      *&v647[0x14] = 0i64;
      *&v647[8] = 0;
      *v647 = 0i64;
      *&v647[0xC] = 0x3F800000i64;
      sub_25BDE0(v647, &v669);
      *(v646 + 0xC) = *&v647[0xC];
      v646[0] = *v647;
      sub_1572FC0(v35, v646);
      sub_15731B0(v35);
      v136 = *(v35 + 0x5674) * dword_44A02DC;
      *v617 = v136 * *&v669.st_dev;
      *&v617[1] = *&v669.st_ino * v136;
      *&v617[2] = *&v669.st_nlink * v136;
      sub_1573580(v35, v617);
      sub_159C1B0(v35);
      *(*(game + 0x440) + 0x7FCi64) = 0;
      v139 = sub_159AD90(v35, v137, 0i64);
      *(v35 + 0x12EC) = v139;
      *(v35 + 0x1DC4) = v139;
      *(v35 + 0x5AA4) = v139;
      v140 = *(v35 + 0x57F8);
      if ( v140 )
      {
        if ( v140 == 1 )
        {
          v138 = 0i64;
        }
        else
        {
          v258 = (v35 + 0x13C0);
          v138 = 0i64;
          v259 = (v35 + 0x57FC);
          do
          {
            *v259 = 0x3F800000;
            v258[0x2B6] = 0x3F800000;
            *v258 = 0x3F800000;
            v259[0xA] = 0x3F800000;
            v258[0x2C5] = 0x3F800000;
            v258[0xF] = 0x3F800000;
            v138 += 2i64;
            v259 += 0x14;
            v258 += 0x1E;
          }
          while ( (v140 & 0xFFFFFFFE) != v138 );
        }
        if ( (v140 & 1) != 0 )
        {
          *(v35 + 0x57FC + 0x28 * v138) = 0x3F800000;
          v138 *= 0x3Ci64;
          *(v35 + 0x1E8C + v138 + 0xC) = 0x3F800000;
          *(v35 + 0x13B4 + v138 + 0xC) = 0x3F800000;
        }
      }
      *(v35 + 0x12F8) = 0;
      *(v35 + 0x1DD0) = 0;
      *(v35 + 0x5A9C) = 0;
      *(*(game + 0x440) + 0x814i64) = 0x3F800000;
      dword_4AD2F00 = 0x3F800000;
      dword_4AD2F0C = 0x3F800000;
      dword_4AD4590 = 0x3F800000;
      dword_4AD459C = 0x3F800000;
      LOBYTE(v138) = 1;
      sub_159BDD0(v35, v138);
      if ( Str1[4] )
        sub_1464430(Str1[4]);
    }
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  if ( !(*"land" ^ v608.m128i_i32[0] | (aLand[4] ^ v608.m128i_i8[4])) )
  {
    v129 = *(game + 0x410);
    if ( *(v129 + 0x10) )
    {
      v130 = 0;
      LOBYTE(v33) = 1;
      v131 = sub_5EF690(*(game + 0x410), Unit, 0i64, v33);
      if ( v131 )
      {
        v132 = *(v129 + 0x10);
        v133 = *v129;
        if ( *(v129 + 0x10) )
        {
          v134 = 1;
          v135 = *v129;
          while ( *v135 != v131 )
          {
            ++v135;
            ++v134;
            if ( v135 >= &v133[v132] )
              goto LABEL_383;
          }
          v130 = v134;
        }
LABEL_383:
        v260 = v130 % v132;
      }
      else
      {
        v133 = *v129;
        v260 = 0i64;
      }
      v281 = v133[v260];
      sub_159C1B0(*(Unit + 0x9D0));
      *(&Str1[5] + 4) = 0i64;
      memset(Str1, 0, 0x24);
      *(&Str1[4] + 4) = 0x3F800000i64;
      *&Str1[7] = 0i64;
      v667 = 0;
      v668 = 0xFFFFFFFFFFFFFFFFui64;
      LOBYTE(v282) = 1;
      sub_5E7190(v281, Unit, Str1, v282);
    }
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  if ( !(v608.m128i_i64[0] ^ 0x476E4F7075746573i64 | *(v608.m128i_i64 + 6) ^ 0x646E756F72476Ei64) )
  {
    v245 = _mm_cvtsi32_si128(*(Unit + 0x9C8));
    Str1[0] = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*(Unit + 0x9C0))) | 0xC47A000000000000ui64;
    LODWORD(Str1[1]) = _mm_cvtsi128_si32(v245);
    LOBYTE(v33) = 1;
    sub_3C8B60(Unit, 0, Str1, v33, 1);
    sub_4271B0(Unit);
    air_movement_ = *(Unit + 0x9D0);
    sub_15731B0(air_movement_);
    v619 = 0;
    v618 = 0i64;
    sub_1573580(air_movement_, &v618);
    v247 = air_movement_[0x15FE];
    if ( v247 )
    {
      if ( v247 == 1 )
      {
        v248 = 0i64;
      }
      else
      {
        v261 = air_movement_ + 0x4F0;
        v248 = 0i64;
        v262 = air_movement_ + 0x15FF;
        do
        {
          *v262 = 0;
          v261[0x2B6] = 0;
          *v261 = 0;
          v262[0xA] = 0;
          v261[0x2C5] = 0;
          v261[0xF] = 0;
          v248 += 2i64;
          v262 += 0x14;
          v261 += 0x1E;
        }
        while ( (v247 & 0xFFFFFFFE) != v248 );
      }
      if ( (v247 & 1) != 0 )
      {
        air_movement_[0xA * v248 + 0x15FF] = 0;
        v263 = 0xF * v248;
        air_movement_[v263 + 0x7A6] = 0;
        air_movement_[v263 + 0x4F0] = 0;
      }
    }
    *(*(game + 0x440) + 0x814i64) = 0;
    dword_4AD2F00 = 0;
    dword_4AD2F0C = 0;
    dword_4AD4590 = 0;
    dword_4AD459C = 0;
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  if ( v608.m128i_i64[0] == 0x4D544153746573i64 )
  {
    gamephys::temperature = gamephys::std_temp;
    *&gamephys::density = (*&gamephys::std_temp * *&gamephys::unk) / *(&gamephys::std_temp + 1);
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  if ( !(v608.m128i_i64[0] ^ 0x6174536D46746567i64 | *(v608.m128i_i64 + 3) ^ 0x65746174536D46i64) )
  {
    v264 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v264[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(
        v264,
        v608.m128i_i64[0] ^ 0x476E4F7075746573i64 | *(v608.m128i_i64 + 6) ^ 0x646E756F72476Ei64,
        v32,
        v33);
    v265 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    *&v669.st_dev = &off_44CAF30;
    *&v669.st_rdev = v265;
    v669.st_atime = 0x4000i64;
    v669.st_mtime = 0i64;
    *&v669.st_nlink = (*(*v265 + 0x18i64))(v265, 0x4000i64);
    **&v669.st_nlink = 0;
    sub_B09440(&v669, "{\n");
    sub_B09440(&v669, "\"valid\": true,\n");
    Str1[0] = sub_5655B0(game);
    sub_B0BD50(&v669, "\"time\": %f,\n", a3);
    sub_B09440(&v669, "\"values\": [\n");
    Str1[0] = sub_5655B0(game);
    sub_B0BD50(&v669, "%f,\n", a3);
    v266 = (air_movement + 0x910);
    sub_B0BD50(&v669, "%f,\n", a3);

    // calculate the air velocity vector components
    air_velocity_x = *(air_movement + 0x990) - (*(air_movement + 0xA10) + *(air_movement + 0x57C8));
    air_velocity_y = *(air_movement + 0x988) - (*(air_movement + 0xA08) + *(air_movement + 0x57C0));
    air_velocity_z = *(air_movement + 0x980) - (*(air_movement + 0xA00) + *(air_movement + 0x57B8));
    air_velocity_magnitude.m128_f32[0] = fsqrt(
                                           ((air_velocity_x * air_velocity_x) + (air_velocity_y * air_velocity_y))
                                         + (air_velocity_z * air_velocity_z));
    *v647 = air_velocity_magnitude.m128_i32[0];
    sub_B09B80(&v669, "%f,\n", v647);
    v271 = *(air_movement + 0x910);
    HIDWORD(v272) = HIDWORD(*(air_movement + 0x910));
    *&v272 = fminf(v271, *&dword_4A7920C);
    v273 = Y;
    *FileName = fsqrt(
                  ((*&dword_4A7920C * *&gamephys::density)
                 * ((((((((*&dword_44A0190 * *&v272) + *&dword_44A0194) * *&v272) + *&dword_44A0198) * *&v272)
                    + *&dword_44A019C)
                   * *&v272)
                  + Y))
                / (fmaxf(v271, *&dword_4A7920C) * *&dword_4A791F8))
              * air_velocity_magnitude.m128_f32[0];
    sub_B09B80(&v669, "%f,\n", FileName);
    v274 = *(air_movement + 0x910);
    v275 = fminf(v274, *&dword_4A7920C);
    v276 = ((((((((*&dword_44A41E4 * v275) + *&dword_44A41E8) * v275) + *&dword_44A41EC) * v275) + *&dword_44A41F0)
           * v275)
          + v273)
         * *(&gamephys::temperature + 1);
    v277 = 1.0 / fsqrt(v276);
    *&v602 = (((v277 * *&dword_44A02D4) * (((v276 * v277) * v277) + *&dword_44A02D0)) * *&dword_44A41F4)
           * air_velocity_magnitude.m128_f32[0];
    sub_B09B80(&v669, "%f,\n", v272);
    sub_B0BD50(&v669, "%f,\n", v272);
    if ( air_velocity_magnitude.m128_f32[0] <= *&FP32_EPSILON )
    {
      v280 = *(Unit + 0x99C);
      v279 = *(Unit + 0x9A0);
      v278 = *(Unit + 0x9A4);
    }
    else
    {
      v278 = air_velocity_x * (v273 / air_velocity_magnitude.m128_f32[0]);
      v279 = air_velocity_y * (v273 / air_velocity_magnitude.m128_f32[0]);
      v280 = (v273 / air_velocity_magnitude.m128_f32[0]) * air_velocity_z;
    }
    v290 = (*(Unit + 0x9AC) * v280) - (*(Unit + 0x9A8) * v279);
    v291 = (*(Unit + 0x9A8) * v278) - (*(Unit + 0x9B0) * v280);
    v292 = (((*(Unit + 0x9B0) * v279) - (*(Unit + 0x9AC) * v278)) * v279) - (v291 * v280);
    v293 = (v280 * v290) - (((*(Unit + 0x9B0) * v279) - (*(Unit + 0x9AC) * v278)) * v278);
    v294 = (v291 * v278) - (v290 * v279);
    v295.m128i_i64[0] = gamephys::gravity;
    v296 = *(air_movement + 0x9A8);
    v297 = v296 * v292;
    v298 = *&gamephys::gravity + *(air_movement + 0x9A0);
    v299 = v298 * v293;
    v300 = *(air_movement + 0x998);
    *v605 = (((v300 * v294) + v297) + v299) / *&gamephys::gravity;
    sub_B09B80(&v669, "%f,\n", v605);
    sub_B0BD50(&v669, "%f,\n", *v295.m128i_i64);
    v301 = *(air_movement + 0x9F0);
    v302 = *&epsilon_unk;
    v303 = *&dword_44801E8;
    LODWORD(Block[0]) = COERCE_UNSIGNED_INT(
                          asinf(
                            fminf(
                              fmaxf(
                                COERCE_FLOAT(_mm_cmplt_ss(epsilon_unk, air_velocity_magnitude).m128_u32[0] & COERCE_UNSIGNED_INT(v301 * (v273 / air_velocity_magnitude.m128_f32[0]))),
                                *&dword_44801E8),
                              v273))) ^ SIGN_BIT_MASK;
    sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
    if ( air_velocity_magnitude.m128_f32[0] > v302 )
    {
      v305 = *(air_movement + 0x9F8);
      v304 = v305 * (v273 / air_velocity_magnitude.m128_f32[0]);
    }
    else
    {
      v304 = 0.0;
    }
    LODWORD(v611) = asinf(fminf(fmaxf(v304, v303), v273));
    sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
    sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
    sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
    sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
    if ( *(air_movement + 0x568E) )
    {
      LODWORD(Str1[0]) = *(air_movement + 0x12EC);
      sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
    }
    else
    {
      sub_B09440(&v669, "null,\n");
    }
    if ( *(air_movement + 0x568B) )
    {
      v307 = 0;
      if ( (*(air_movement + 0x12DC) * *&dword_44A0344) > 0 )
        v307 = (*(air_movement + 0x12DC) * *&dword_44A0344);
      v308 = 0xFF;
      if ( v307 < 0xFF )
        v308 = v307;
      *Str1 = v308 * *&dword_44A4410;
      sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
    }
    else
    {
      sub_B09440(&v669, "null,\n");
    }
    if ( *(air_movement + 0x5695) )
    {
      v309 = 0;
      if ( (*(air_movement + 0x12E4) * *&dword_44A0344) > 0 )
        v309 = (*(air_movement + 0x12E4) * *&dword_44A0344);
      v310 = 0xFF;
      if ( v309 < 0xFF )
        v310 = v309;
      *Str1 = v310 * *&dword_44A4410;
      sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
    }
    else
    {
      sub_B09440(&v669, "null,\n");
    }
    v311 = *(air_movement + 0x3AC8);
    if ( *v311 <= 0 )
      goto LABEL_466;
    v312 = *(v311 + 8);
    LODWORD(Str1[0]) = *(v312 + 0x2F);
    sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
    LODWORD(Str1[0]) = *(v312 + 0x33) + 1;
    sub_B0A540(&v669, "%f,\n", *v295.m128i_i64);
    if ( (*v312)[0x223] || (*v312)[0x22A] )
    {
      LODWORD(Str1[0]) = *(v312 + 0x2D);
      sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
    }
    else
    {
      sub_B09440(&v669, "null,\n");
    }
    v313 = *v312;
    if ( !(*v312)[0x225] && (*(v313 + 0x224) || *(v313 + 0x22B)) )
    {
      LODWORD(Str1[0]) = *(v312 + 0x2E);
      sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
    }
    else
    {
      sub_B09440(&v669, "null,\n");
    }
    if ( (*v312)[0x226] )
    {
      LODWORD(Str1[0]) = *(v312 + 0x2D);
      sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
    }
    else
    {
      sub_B09440(&v669, "null,\n");
    }
    v314 = **v312;
    if ( v314 <= 5 && (v315 = 0x23, _bittest(&v315, v314)) )
    {
      v316 = *&dword_44CB26C;
      *Str1 = *(v312 + 0x50) * *&dword_44CB26C;
      sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
      *Str1 = v316 * *(v312 + 0x51);
      sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
    }
    else
    {
      sub_B09440(&v669, &unk_4A2DBCC);
    }
    LODWORD(Str1[0]) = *(v312 + 0x10);
    sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
    v317 = **v312;
    if ( v317 >= 2 )
    {
      if ( v317 != 5 )
        goto LABEL_435;
    }
    else if ( *(*v312 + 0x5D) != 3 )
    {
LABEL_435:
      sub_B09440(&v669, "null,\n");
      goto LABEL_438;
    }
    LODWORD(Str1[0]) = *(v312 + 0x17);
    sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
LABEL_438:
    LODWORD(Str1[0]) = *(v312 + 0xB);
    sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
    v318 = fmaxf(0.0, (*(v312 + 0x4F) + *(v312 + 0x4E)) * *(v312 + 0x10));
    *&v606 = v318;
    if ( v314 <= 5 && (v319 = 0x23, _bittest(&v319, v314)) )
      sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
    else
      sub_B09440(&v669, "null,\n");
    v323 = *(air_movement + 0x9E8);
    sub_1563360(air_movement, v320, v321, v322, &xmmword_4B67A14);
    v324 = *(air_movement + 0x3AC8);
    v295.m128i_i64[0] = *(v324 + 0xA694);
    *v295.m128i_i32 = ((*v295.m128i_i32 + *(v312 + 0xA5)) * *&v323) * ((*v295.m128i_i32 + *(v312 + 0xA5)) * *&v323);
    LODWORD(Str1[0]) = fsqrt(
                         ((((*(v324 + 0xA69C) + *(v312 + 0xA7)) * *&v323)
                         * ((*(v324 + 0xA69C) + *(v312 + 0xA7)) * *&v323))
                        + (((*(v324 + 0xA698) + *(v312 + 0xA6)) * *&v323)
                         * ((*(v324 + 0xA698) + *(v312 + 0xA6)) * *&v323)))
                       + *v295.m128i_i32);
    sub_B09B80(&v669, "%f,\n", Str1);
    v325 = *(air_movement + 0x3AC8);
    v326 = *(v325 + 0xA534);
    if ( v326 >= 0 && (v327 = *(v325 + 8 * v326 + 0xA4B0), v328 = *(v327 + 0x38), *(v327 + 0x38)) )
    {
      if ( v328 >= 9 )
      {
        v334 = 8i64;
        if ( (v328 & 7) != 0 )
          v334 = v328 & 7;
        v329 = v328 - v334;
        v335 = (v327 + 0xC8);
        v336 = _mm_load_si128(&xmmword_44AD4D0);
        v337 = _mm_load_si128(&xmmword_44AD4E0);
        v338 = 0i64;
        v295 = _mm_load_si128(&xmmword_44AD4F0);
        do
        {
          v339 = _mm_insert_epi32(
                   _mm_insert_epi32(
                     _mm_insert_epi32(_mm_cvtsi32_si128(v335[0xFFFFFFF1]), v335[0xFFFFFFF6], 1),
                     v335[0xFFFFFFFB],
                     2),
                   *v335,
                   3);
          *(&Str1[v338 / 2] + 4) = _mm_insert_epi32(
                                     _mm_insert_epi32(
                                       _mm_insert_epi32(_mm_cvtsi32_si128(v335[0xFFFFFFDD]), v335[0xFFFFFFE2], 1),
                                       v335[0xFFFFFFE7],
                                       2),
                                     v335[0xFFFFFFEC],
                                     3);
          *(&Str1[v338 / 2 + 2] + 4) = v339;
          v338 += 8i64;
          v337 = _mm_add_epi64(v337, v295);
          v336 = _mm_add_epi64(v336, v295);
          v335 += 0x28;
        }
        while ( v329 != v338 );
      }
      else
      {
        v329 = 0i64;
      }
      v340 = (v327 + 0x14 * v329 + 0x3C);
      do
      {
        *(Str1 + ++v329) = *v340;
        v340 += 5;
      }
      while ( v328 != v329 );
      v599[0] = *(*(v325 + 8i64 * HIDWORD(Str1[0]) + 0x70A0) + 0x40i64);
      sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
    }
    else
    {
      sub_B09440(&v669, "null,\n");
    }
    if ( v314 <= 5u && (v341 = 0x23, _bittest(&v341, v314)) )
    {
      v342 = 0.0;
      if ( v318 > *&epsilon_unk )
      {
        v343 = *(air_movement + 0x3AC8);
        v295.m128i_i64[0] = *(v343 + 0xA698);
        *v295.m128i_i32 = (*v295.m128i_i32 * *v295.m128i_i32) + (*(v343 + 0xA694) * *(v343 + 0xA694));
        v342 = fmaxf(
                 fsqrt((*(v343 + 0xA69C) * *(v343 + 0xA69C)) + *v295.m128i_i32) * air_velocity_magnitude.m128_f32[0],
                 0.0)
             / v318;
      }
      *v599 = v342;
      sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
    }
    else
    {
      sub_B09440(&v669, "null,\n");
    }
    v599[0] = *(v312 + 0xB2);
    sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
    v599[0] = *(v312 + 0xB3);
    sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
LABEL_466:
    v344 = *v266;
    v345 = fminf(v344, *&dword_4A7920C);
    *Str1 = ((((((((*&dword_44A41E4 * v345) + *&dword_44A41E8) * v345) + *&dword_44A41EC) * v345) + *&dword_44A41F0)
            * v345)
           + v273)
          * *(&gamephys::temperature + 1);
    sub_B09B80(&v669, "%f,\n", *v295.m128i_i64);
    v346 = *v266;
    v347 = fminf(v346, *&dword_4A7920C);
    *Str1 = ((*&dword_4A7920C * *&gamephys::temperature)
           * ((((((((*&dword_44CB270 * v347) + *&dword_44CB274) * v347) + *&dword_44CB278) * v347) + *&dword_44CB27C)
             * v347)
            + v273))
          / fmaxf(v346, *&dword_4A7920C);
    sub_B09B80(&v669, "%f\n", Str1);
    sub_B09440(&v669, "]\n");
    sub_B09440(&v669, "}\n");
LABEL_467:
    v332 = *&v669.st_nlink;
    sub_AF1600(http_req, *&v669.st_nlink, v669.st_mtime);
    v333 = *&v669.st_rdev;
    return (*(*v333 + 0x40i64))(v333, v332);
  }
  v249 = _mm_or_si128(
           _mm_xor_si128(_mm_load_si128(&v608), xmmword_44CB160),
           _mm_xor_si128(_mm_loadu_si128(&v608.m128i_i8[5]), xmmword_44CB150));
  if ( _mm_testz_si128(v249, v249) )
  {
    *v647 = 0;
    LOBYTE(FileName[0]) = 0;
    if ( !sub_B0A980(http_req, "flagNum", v647) )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    if ( !sub_B0BDF0(http_req, "value", FileName) )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    v285 = *(game + 0x720);
    if ( !v285 )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    v286 = *(v285 + 0x6C);
    v287 = v286 & ~(1 << v647[0]);
    v288 = ((1 << v647[0]) | v286);
    v289 = v287;
    if ( LOBYTE(FileName[0]) )
      v289 = v288;
    *(v285 + 0x6C) = v289;
LABEL_449:
    v330 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v330[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(v330, v289, v283, v284);
    v331 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    Str1[0] = &off_44CAF30;
    Str1[2] = v331;
    Str1[3] = 0x20i64;
    Str1[4] = 0i64;
    Str1[1] = (*(*v331 + 0x18i64))(v331, 0x20i64);
    *Str1[1] = 0;
    *&v669.st_dev = sub_5655B0(game);
    sub_B0BD50(Str1, "{ \"time\": %f }", a3);
    v332 = Str1[1];
    sub_AF1600(http_req, Str1[1], Str1[4]);
    v333 = Str1[2];
    return (*(*v333 + 0x40i64))(v333, v332);
  }
  v250 = _mm_or_si128(
           _mm_xor_si128(_mm_load_si128(&v608), xmmword_44CB180),
           _mm_xor_si128(_mm_loadu_si128(&v608.m128i_i8[0xA]), xmmword_44CB170));
  if ( _mm_testz_si128(v250, v250) )
  {
    *v647 = 0xFFFFFFFF;
    if ( !sub_B0A980(http_req, "id", v647) )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    v306 = *(game + 0x720);
    if ( !v306 )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    *(v306 + 0x70) = *v647;
    goto LABEL_449;
  }
  v251 = _mm_or_si128(
           _mm_xor_si128(_mm_load_si128(&v608), xmmword_44CB1A0),
           _mm_xor_si128(_mm_loadl_epi64(&v609), xmmword_44CB190));
  if ( _mm_testz_si128(v251, v251) )
  {
    *v647 = 0xFFFFFFFF;
    if ( !sub_B0A980(http_req, "id", v647) )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    dword_4A79158 = 0x41C64E6D * dword_4A79158 + 0x3039;
    sub_3E8390(Unit, *v647, HIWORD(dword_4A79158) & 0x7FFF, 0i64);
    goto LABEL_449;
  }
  v252 = _mm_or_si128(
           _mm_xor_si128(_mm_load_si128(&v608), xmmword_44CB1B0),
           _mm_xor_si128(_mm_loadl_epi64(&v609), xmmword_44CB190));
  if ( _mm_testz_si128(v252, v252) )
  {
    *v647 = 0xFFFFFFFF;
    LODWORD(FileName[0]) = 0;
    if ( !sub_B0A980(http_req, "id", v647) || !sub_B0A8C0(http_req, FileName) )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    goto LABEL_449;
  }
  v253 = _mm_or_si128(
           _mm_xor_si128(_mm_load_si128(&v608), xmmword_44CB1D0),
           _mm_xor_si128(_mm_loadu_si128(&v608.m128i_i8[0xE]), xmmword_44CB1C0));
  if ( _mm_testz_si128(v253, v253) )
  {
    if ( !sub_B0BE60(http_req, Str1) )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    v348 = *(game + 0x720);
    if ( !v348 )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    sub_4E3940(v348, Str1, Unit);
    v352 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v352[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(v352, v349, v350, v351);
    v353 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    *&v669.st_dev = &off_44CAF30;
    *&v669.st_rdev = v353;
    v669.st_atime = 0x20i64;
    v669.st_mtime = 0i64;
    *&v669.st_nlink = (*(*v353 + 0x18i64))(v353, 0x20i64);
    **&v669.st_nlink = 0;
    *v647 = sub_5655B0(game);
    sub_B0BD50(&v669, "{ \"time\": %f }", a3);
    goto LABEL_467;
  }
  if ( !(*"repair" ^ v608.m128i_i32[0] | *"air" ^ *(v608.m128i_i32 + 3)) )
  {
    sub_3DFC50(Unit);
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  if ( !(*"rearm" ^ v608.m128i_i32[0] | (*"m" ^ v608.m128i_i16[2])) )
  {
    sub_37A690(Unit);
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  v254 = _mm_or_si128(
           _mm_xor_si128(_mm_load_si128(&v608), xmmword_44CB1F0),
           _mm_xor_si128(_mm_loadu_si128(&v608.m128i_i8[7]), xmmword_44CB1E0));
  if ( _mm_testz_si128(v254, v254) )
  {
    v354 = *(air_movement + 0x3AC8);
    v355 = *v354;
    if ( *v354 > 0 )
    {
      v356 = 0i64;
      v357 = FABSF_MASK;
      do
      {
        v358 = *&v354[2 * v356 + 2];
        if ( !*(*v358 + 1i64) )
        {
          Str1[0] = 0x100000000i64;
          LODWORD(Str1[1]) = *(v358 + 0xBC);
          HIDWORD(Str1[1]) = *(v358 + 0x144);
          LODWORD(Str1[2]) = *(v358 + 0x40);
          BYTE4(Str1[2]) = 0;
          v359 = *(air_movement + 0x910);
          *&Str1[3] = v359;
          v360 = *(air_movement + 0x9E8);
          HIDWORD(Str1[3]) = LODWORD(v360) & v357;
          LODWORD(Str1[4]) = *(v358 + 0xB4);
          HIDWORD(Str1[4]) = *(v358 + 0x9C);
          LODWORD(Str1[5]) = *(v358 + 0x70);
          *(v358 + 0x2C8) = sub_15F2660(v354, v356, air_movement, Str1);
          LODWORD(Str1[0]) = 1;
          HIDWORD(Str1[4]) = *(v358 + 0x94);
          *(v358 + 0x2CC) = sub_15F2660(*(air_movement + 0x3AC8), v356, air_movement, Str1);
          v354 = *(air_movement + 0x3AC8);
          v355 = *v354;
        }
        ++v356;
      }
      while ( v356 < v355 );
    }
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  if ( !(v608.m128i_i64[0] ^ 0x746165687265766Fi64 | v608.m128i_u32[2] ^ 0x776F4Ei64) )
  {
    v361 = *(air_movement + 0x3AC8);
    if ( *v361 > 0 )
    {
      v362 = *&dword_44CB268;
      v363 = 0i64;
      do
      {
        v364 = *&v361[2 * v363 + 2];
        if ( !*(*v364 + 1i64) )
        {
          if ( *(*v364 + 0x214i64) )
            v365 = sub_1638430(v364);
          else
            v365 = sub_1638740(v364);
          if ( v365 < v362 )
            sub_1638070(v364, 0i64);
          if ( sub_16385C0(v364) < v362 )
          {
            LOBYTE(v366) = 1;
            sub_1638070(v364, v366);
          }
        }
        ++v363;
        v361 = *(air_movement + 0x3AC8);
      }
      while ( v363 < *v361 );
    }
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  if ( !(v608.m128i_i64[0] ^ 0x655468636E75616Ci64 | *(v608.m128i_i64 + 3) ^ 0x7473655468636Ei64) )
  {
    v593 = 0;
    if ( !sub_B0BDF0(http_req, "flightTest", &v593) || !sub_B09200(http_req, "test", &v611) )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    v592 = 1;
    sub_B0BDF0(http_req, "repair", &v592);
    v367 = *(air_movement + 0x364C) / *(air_movement + 0x3654);
    if ( !(*"stall" ^ v611 | (*"l" ^ WORD2(v611))) )
    {
      if ( !sub_B0BEB0(http_req, v605, Block, &v606) )
        return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
      v400 = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(v400[TlsIndex] + 1i64) )
        _dyn_tls_on_demand_init(v400, v397, v398, v399);
      v401 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
      *&v602 = &off_44CAF30;
      *v603 = v401;
      *&v603[8] = 0x1000i64;
      *&v603[0x10] = 0i64;
      *(&v602 + 1) = (*(*v401 + 0x18i64))(v401, 0x1000i64);
      **(&v602 + 1) = 0;
      sub_B09440(&v602, "[");
      if ( !v593 )
      {
        if ( v592 )
          sub_3DFC50(Unit);
        v599[0] = 0xBF800000;
        v595 = -1.0;
        v594 = -1.0;
        v596 = -1.0;
        v597 = -1.0;
        v598 = -1.0;
        v600 = *v605;
        v478 = _mm_loadu_si128((&xmmword_45183C8 + 0xC));
        *(&Str1[3] + 4) = v478;
        v479 = *&xmmword_45183C8;
        *&Str1[2] = xmmword_45183C8;
        *Str1 = xmmword_45183B8;
        *(&v669.st_atime + 4) = v478;
        *&v669.st_rdev = xmmword_45183C8;
        *&v669.st_dev = xmmword_45183B8;
        *&v647[0x1C] = v478;
        *&v647[0x10] = xmmword_45183C8;
        *v647 = xmmword_45183B8;
        *&v660.m256_f32[3] = v478;
        *v660.m256_f32 = xmmword_45183C8;
        *FileName = xmmword_45183B8;
        if ( *v605 <= *Block )
        {
          v480 = dword_44A02DC;
          do
          {
            v481 = qword_4B8B948;
            if ( qword_4B8B948 )
              *(v481 + 0x70) = timeGetTime();
            *&v482 = LODWORD(v600);
            if ( v600 > *v605 )
              sub_B09440(&v602, ",\n");
            LOBYTE(v589) = 0;
            v483 = sub_161BE70(
                     air_movement,
                     &xmmword_4B67A14,
                     &xmmword_4B67CA0,
                     v404,
                     0x3F800000,
                     v589,
                     0,
                     0x40400000,
                     0,
                     &v594,
                     &v597,
                     Str1);
            if ( v483 )
            {
              if ( !LOBYTE(v669.st_nlink) )
              {
                *(&v669.st_atime + 4) = *(&Str1[3] + 4);
                *&v669.st_rdev = _mm_load_si128(&Str1[2]);
                *&v669.st_dev = *Str1;
              }
              if ( !v647[8] )
              {
                *&v647[0x1C] = *(&Str1[3] + 4);
                *&v647[0x10] = _mm_load_si128(&Str1[2]);
                *v647 = *Str1;
              }
              LOBYTE(v586) = 0;
              v479 = v482;
              sub_161CA40(air_movement, &xmmword_4B67A14, v484, v485, v586, 0, 0, v597 * v480, 0, v599, &v669);
            }
            LOBYTE(v590) = 0;
            v488 = sub_161BE70(
                     air_movement,
                     &xmmword_4B67A14,
                     &xmmword_4B67CA0,
                     v485,
                     0x3F800000,
                     v590,
                     0,
                     0x40400000,
                     0,
                     &v596,
                     &v598,
                     v647);
            if ( v488 )
            {
              if ( !LOBYTE(FileName[1]) )
              {
                *&v660.m256_f32[3] = *&v647[0x1C];
                *v660.m256_f32 = _mm_load_si128(&v647[0x10]);
                *FileName = *v647;
              }
              LOBYTE(v587) = 0;
              v479 = v482;
              sub_161CA40(
                air_movement,
                &xmmword_4B67A14,
                v486,
                v487,
                v587,
                0x3F800000,
                0x3F800000,
                v598 * v480,
                0,
                &v595,
                FileName);
            }
            sub_B09B80(&v602, "[%f, ", v479);
            if ( v483 )
              sub_B09B80(&v602, "%f, ", v479);
            else
              sub_B09440(&v602, "null, ");
            if ( v488 )
              sub_B09B80(&v602, "%f]", v479);
            else
              sub_B09440(&v602, "null]");
            v600 = *&v482 + *&v606;
          }
          while ( (*&v482 + *&v606) <= *Block );
        }
        goto LABEL_775;
      }
      *v647 = air_movement;
      *&v647[8] = v367;
      v405 = (v592 << 6) | 0x1BF;
      *&v647[0x18] = v405;
      *&v647[0x1C] = v367;
      *&v647[0x20] = 0;
      *&v647[0x10] = &off_4587520;
      memset(&v648[4], 0, 0x34);
      memset(v649 + 4, 0, 0x30);
      memset(&v649[7] + 4, 0, 0x28);
      *&v647[0x28] = 0i64;
      *&v647[0x38] = 0x3CA3D70A40A00000i64;
      *v648 = 0x4E6E6B28;
      *&v648[8] = 0x424000003ECCCCCDi64;
      *&v648[0x18] = 0x3E4CCCCD;
      *&v648[0x20] = 0x4E6E6B28;
      *&v648[0x2C] = 0x42400000;
      *&v648[0x38] = 0x3DA3D70A3F000000i64;
      LODWORD(v649[0]) = 0x4E6E6B28;
      v649[1] = 0x424000003CA3D70Ai64;
      v649[3] = 0x4240000040800000i64;
      v649[5] = 0x3F8000003E4CCCCDi64;
      *(&v649[6] + 4) = 0x424000003CA3D70Ai64;
      *(&v649[8] + 4) = 0x3F8000003E99999Ai64;
      *&v647[0x24] = 0x43960000;
      LODWORD(v649[0xD]) = 1;
      v641[0] = Str1;
      v641[1] = 0x100i64;
      sub_B0C000(v645, v402, v403, v404, v647, v641);
      FileName[0] = air_movement;
      *&FileName[1] = v367;
      LODWORD(v660.m256_f32[2]) = v405;
      *&v660.m256_f32[3] = LODWORD(v367);
      *v660.m256_f32 = &off_4587520;
      *&v660.m256_f32[6] = 0x3F8000003F800000i64;
      *&v661 = 0i64;
      memset(&v662[4], 0, 0x34);
      memset(v663 + 4, 0, 0x30);
      memset(&v663[7] + 4, 0, 0x28);
      *(&v661 + 1) = 0x3CA3D70A40A00000i64;
      *v662 = 0x4E6E6B28;
      *&v662[8] = 0x424000003ECCCCCDi64;
      *&v662[0x18] = 0x3E4CCCCD;
      *&v662[0x20] = 0x4E6E6B28;
      *&v662[0x2C] = 0x42400000;
      *&v662[0x38] = 0x3DA3D70A3F000000i64;
      LODWORD(v663[0]) = 0x4E6E6B28;
      v663[1] = 0x424000003CA3D70Ai64;
      v663[3] = 0x4240000040800000i64;
      v663[5] = 0x3F8000003E4CCCCDi64;
      *(&v663[6] + 4) = 0x424000003CA3D70Ai64;
      *(&v663[8] + 4) = 0x3F8000003E99999Ai64;
      v660.m256_f32[5] = 300.0;
      LODWORD(v663[0xD]) = 1;
      v640[0] = &v669;
      v640[1] = 0x100i64;
      v377 = v658;
      sub_B0C000(v658, v406, v407, v408, FileName, v640);
      v381 = v645;
      goto LABEL_543;
    }
    if ( *"maxSpeed" ^ v611 | (aMaxspeed[8] ^ BYTE8(v611)) )
    {
      if ( !(v611 ^ 0x626D696C436E696Di64 | *(&v611 + 5) ^ 0x656D6954626D69i64) )
      {
        if ( !sub_B0BEB0(http_req, &v595, &v594, &v596) )
          return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
        v438 = NtCurrentTeb()->ThreadLocalStoragePointer;
        if ( !*(v438[TlsIndex] + 1i64) )
          _dyn_tls_on_demand_init(v438, v435, v436, v437);
        v439 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
        *&v602 = &off_44CAF30;
        *v603 = v439;
        *&v603[8] = 0x1000i64;
        *&v603[0x10] = 0i64;
        *(&v602 + 1) = (*(*v439 + 0x18i64))(v439, 0x1000i64);
        **(&v602 + 1) = 0;
        sub_B09440(&v602, "[");
        v597 = 0.0;
        if ( sub_B0A980(http_req, "speedCount", &v597) )
        {
          *&Block[0] = 0i64;
          *(&Block[0] + 1) = off_4B678C0;
          *&Block[1] = 0i64;
          *&v606 = 0i64;
          *(&v606 + 1) = off_4B678C0;
          v607 = 0i64;
          v598 = 0.0;
          if ( v597 != 0.0 )
          {
            do
            {
              sub_5AF370(Str1, 8i64, "alt%d", &v598);
              v441 = &szFile;
              if ( LODWORD(Str1[2]) )
                v441 = Str1[0];
              if ( sub_B0A5E0(http_req, v441) )
              {
                sub_5AF370(&v669, 0x10i64, "speedType%d", &v598);
                v442 = &szFile;
                if ( v669.st_rdev )
                  v442 = *&v669.st_dev;
                if ( sub_B0A980(http_req, v442, &v605[4]) )
                {
                  sub_5AF370(v647, 0x10i64, "speedMax%d", &v598);
                  v443 = &szFile;
                  if ( *&v647[0x10] )
                    v443 = *v647;
                  if ( sub_B0A5E0(http_req, v443) )
                  {
                    sub_5AF370(FileName, 0x10i64, "speedWEP%d", &v598);
                    v444 = &szFile;
                    if ( LODWORD(v660.m256_f32[0]) )
                      v444 = FileName[0];
                    v445 = sub_B0A5E0(http_req, v444);
                    if ( FileName[0] )
                      (*(*FileName[1] + 0x40i64))(FileName[1]);
                  }
                  else
                  {
                    v445 = 0;
                  }
                  if ( *v647 )
                    (*(**&v647[8] + 0x40i64))(*&v647[8]);
                }
                else
                {
                  v445 = 0;
                }
                if ( *&v669.st_dev )
                  (*(**&v669.st_nlink + 0x40i64))(*&v669.st_nlink);
              }
              else
              {
                v445 = 0;
              }
              if ( Str1[0] )
                (*(*Str1[1] + 0x40i64))(Str1[1]);
              if ( v445 )
              {
                v599[0] = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*v605));
                v599[1] = *&v605[4];
                sub_B0C610(Block, v605);
                sub_B0C610(&v606, v599);
              }
              ++LODWORD(v598);
            }
            while ( LODWORD(v598) < LODWORD(v597) );
          }
          if ( v593 )
          {
            memset(&v605[4], 0, 0x20);
            *v605 = 0xFFFFFFFF;
            *&v605[0xC] = 0x3F800000;
            v490 = v592;
            sub_1543D60(Str1, air_movement, v440, v605, Block, v592);
            v637[0] = v647;
            v637[1] = 0x100i64;
            sub_B0C680(v656, v491, v492, v493, Str1, v637);
            *&v605[4] = 1;
            sub_1543D60(&v669, air_movement, v494, v605, &v606, v490);
            v636[0] = FileName;
            v636[1] = 0x100i64;
            sub_B0C680(v657, v495, v496, v497, &v669, v636);
            sub_B0C160(v656, v657, &v602);
            sub_B0C890(&v669);
            sub_B0C890(Str1);
          }
          else
          {
            if ( v592 )
              sub_3DFC50(Unit);
            v518 = v595;
            *(&Str1[3] + 4) = *(&xmmword_45183C8 + 0xC);
            *&Str1[2] = xmmword_45183C8;
            *Str1 = xmmword_45183B8;
            v519 = v594;
            v520 = 0;
            if ( (Y + v594) > v595 )
            {
              v601 = (air_movement + 0x51B0);
              v521 = Block[1];
              v522 = *&Block[0];
              v613 = *&Block[0] - 0xCi64;
              v523 = *&dword_4489714;
              v520 = 0;
              v524 = Y;
              v525 = dword_44A0608;
              v526 = 0.0;
              v527 = *&dword_4489714;
              v528 = 0;
              v529 = 0.0;
              while ( 1 )
              {
                v531 = v528 + 1;
                if ( v521 > v528 + 1 )
                  v531 = v521;
                v532 = v531 - 1;
                while ( v532 != v528 )
                {
                  v533 = v528++;
                  if ( v527 <= *(v522 + 0xCi64 * v533) )
                    goto LABEL_704;
                }
                v533 = v532;
LABEL_704:
                v534 = v533 & (v533 >> 0x1F);
                v535 = (v613 + 0xCi64 * v533);
                while ( v533 > 0 )
                {
                  v528 = v533;
                  v536 = v527 < *v535;
                  --v533;
                  v535 += 0xFFFFFFFD;
                  if ( !v536 )
                    goto LABEL_709;
                }
                v528 = v534;
LABEL_709:
                v537 = v521 ? *(v522 + 0xCi64 * v528 + 4) : 0i64;
                v538 = sub_154D270(v534, v535, v537);
                sub_B0C8E0(v601, &v669);
                v669.st_dev = 0;
                LOBYTE(v585) = 0;
                if ( !sub_161C890(
                        air_movement,
                        &xmmword_4B67A14,
                        v539,
                        v540,
                        v585,
                        *&v669.st_ino,
                        0x3F800000,
                        LODWORD(v538),
                        0,
                        &v669,
                        Str1) )
                  break;
                v541 = v527 - v526;
                v542 = (v527 - v526) / *&v669.st_dev;
                if ( v527 > v518 )
                {
                  if ( v541 > *&epsilon_unk || (v543 = 0.0, v541 < *&dword_449F1AC) )
                    v543 = (v518 - v526) / v541;
                  v544 = v520++;
                  v544 *= 3i64;
                  v529 = v529 + (v543 * v542);
                  *&v647[4 * v544] = v518;
                  *&v647[4 * v544 + 8] = v529;
                  v647[4 * v544 + 4] = 1;
                  v518 = v518 + v596;
                }
                v545 = v525;
                if ( !v521 || (v545 = *(v522 + 0xCi64 * v528) - v527, v530 = v523, v545 > *&dword_44878D0) )
                  v530 = fminf(v545 + v524, v523);
                v529 = v529 + v542;
                v519 = v594;
                v526 = v527;
                v527 = v530 + v527;
                if ( v518 >= (v594 + v524) )
                  goto LABEL_731;
              }
              v519 = v594;
            }
LABEL_731:
            if ( v518 <= v519 && v520 <= 0xFF )
            {
              v553 = v596;
              v554 = v520;
              v555 = &v647[0xC * v520 + 4];
              do
              {
                v555[0xFFFFFFFF] = v518;
                *v555 = 0;
                v518 = v518 + v553;
                if ( v518 > v519 )
                  break;
                v555 += 3;
                v536 = v554++ < 0xFF;
              }
              while ( v536 );
            }
            v556 = v595;
            *(&v669.st_atime + 4) = *(&xmmword_45183C8 + 0xC);
            *&v669.st_rdev = xmmword_45183C8;
            *&v669.st_dev = xmmword_45183B8;
            v557 = 0;
            if ( (Y + v519) > v595 )
            {
              v601 = (air_movement + 0x51B0);
              v558 = v607;
              v559 = v606;
              v613 = v606 - 0xC;
              v560 = *&dword_4489714;
              v557 = 0;
              v561 = Y;
              v562 = dword_44A0608;
              v563 = 0.0;
              v564 = 0;
              v565 = *&dword_4489714;
              v566 = 0.0;
              while ( 1 )
              {
                v568 = v564 + 1;
                if ( v558 > v564 + 1 )
                  v568 = v558;
                v569 = v568 - 1;
                while ( v569 != v564 )
                {
                  v570 = v564++;
                  if ( v565 <= *(v559 + 0xCi64 * v570) )
                    goto LABEL_747;
                }
                v570 = v569;
LABEL_747:
                v571 = v570 & (v570 >> 0x1F);
                v572 = (v613 + 0xCi64 * v570);
                while ( v570 > 0 )
                {
                  v564 = v570;
                  v536 = v565 < *v572;
                  --v570;
                  v572 += 0xFFFFFFFD;
                  if ( !v536 )
                    goto LABEL_752;
                }
                v564 = v571;
LABEL_752:
                if ( LODWORD(Block[1]) )
                {
                  v571 = 3i64 * v564;
                  v573 = *(*&Block[0] + 0xCi64 * v564 + 4);
                }
                else
                {
                  v573 = 0i64;
                }
                v574 = sub_154D270(v571, v572, v573);
                sub_B0C8E0(v601, v605);
                *v605 = 0;
                LOBYTE(v585) = 1;
                if ( !sub_161C890(
                        air_movement,
                        &xmmword_4B67A14,
                        v575,
                        v576,
                        v585,
                        *&v605[4],
                        0x3F800000,
                        LODWORD(v574),
                        0,
                        v605,
                        &v669) )
                  break;
                v577 = v565 - v563;
                v578 = (v565 - v563) / *v605;
                if ( v565 > v556 )
                {
                  if ( v577 > *&epsilon_unk || (v579 = 0.0, v577 < *&dword_449F1AC) )
                    v579 = (v556 - v563) / v577;
                  v580 = v557++;
                  v580 *= 3i64;
                  v566 = v566 + (v579 * v578);
                  *(FileName + v580) = v556;
                  *(&FileName[1] + v580) = v566;
                  *(FileName + 4 * v580 + 4) = 1;
                  v556 = v556 + v596;
                }
                v581 = v562;
                if ( !v558 || (v581 = *(v559 + 0xCi64 * v564) - v565, v567 = v560, v581 > *&dword_44878D0) )
                  v567 = fminf(v581 + v561, v560);
                v566 = v566 + v578;
                v519 = v594;
                v563 = v565;
                v565 = v567 + v565;
                if ( v556 >= (v594 + v561) )
                  goto LABEL_765;
              }
              v519 = v594;
            }
LABEL_765:
            if ( v556 <= v519 && v557 <= 0xFF )
            {
              v582 = v596;
              v583 = v557;
              v584 = FileName + 3 * v557 + 1;
              do
              {
                v557 = v583 + 1;
                v584[0xFFFFFFFF] = v556;
                *v584 = 0;
                v556 = v556 + v582;
                if ( v556 > v519 )
                  break;
                v584 += 3;
                v536 = v583++ < 0xFF;
              }
              while ( v536 );
            }
            v635[0] = FileName;
            v635[1] = v557;
            v634[0] = v647;
            v634[1] = v557;
            sub_B0C160(v634, v635, &v602);
          }
          if ( v606 )
            (*(**(&v606 + 1) + 0x40i64))(*(&v606 + 1));
          if ( *&Block[0] )
            (*(**(&Block[0] + 1) + 0x40i64))(*(&Block[0] + 1));
        }
        goto LABEL_775;
      }
      if ( !(v611 ^ 0x546E7275546E696Di64 | DWORD2(v611) ^ 0x656D69i64) )
      {
        if ( !sub_B0BEB0(http_req, v599, &v595, &v594) )
          return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
        v596 = 0.0;
        sub_B0A980(http_req, "flaps", &v596);
        sub_B0C9F0(http_req, Block);
        v464 = NtCurrentTeb()->ThreadLocalStoragePointer;
        if ( !*(v464[TlsIndex] + 1i64) )
          _dyn_tls_on_demand_init(v464, v461, v462, v463);
        v465 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
        *&v602 = &off_44CAF30;
        *v603 = v465;
        *&v603[8] = 0x1000i64;
        *&v603[0x10] = 0i64;
        *(&v602 + 1) = (*(*v465 + 0x18i64))(v465, 0x1000i64);
        **(&v602 + 1) = 0;
        sub_B09440(&v602, "[");
        if ( v593 )
        {
          memset(&v605[4], 0, 0x20);
          *v605 = 0xFFFFFFFF;
          LODWORD(v606) = *(air_movement + 8i64 * LODWORD(v596) + 0x53EC);
          *(&v606 + 4) = 0i64;
          HIDWORD(v606) = 0;
          *v647 = air_movement;
          *&v647[8] = v367;
          v469 = (v592 << 6) | 0x1BF;
          sub_222DA50(&v647[0x10], v466, v467, 0, v605, &v606, v469);
          v652 = 1;
          v633[0] = Str1;
          v633[1] = 0x100i64;
          sub_B0CA40(v654, v470, v471, v472, v647, v633);
          *&v605[4] = 1;
          FileName[0] = air_movement;
          *&FileName[1] = v367;
          sub_222DA50(&v660, v473, v474, 0, v605, &v606, v469);
          v665 = 1;
          v632[0] = &v669;
          v632[1] = 0x100i64;
          sub_B0CA40(v655, v475, v476, v477, FileName, v632);
          sub_B0C160(v654, v655, &v602);
        }
        else
        {
          if ( v592 )
            sub_3DFC50(Unit);
          *v647 = v599[0];
          LODWORD(FileName[0]) = 0xBF800000;
          *v605 = 0xBF800000;
          v509 = _mm_loadu_si128((&xmmword_45183C8 + 0xC));
          *(&Str1[3] + 4) = v509;
          *&Str1[2] = xmmword_45183C8;
          *Str1 = xmmword_45183B8;
          *(&v669.st_atime + 4) = v509;
          *&v669.st_rdev = xmmword_45183C8;
          *&v669.st_dev = xmmword_45183B8;
          if ( *v599 <= v595 )
          {
            do
            {
              v510 = qword_4B8B948;
              if ( qword_4B8B948 )
                *(v510 + 0x70) = timeGetTime();
              *&v511 = *v647;
              LOBYTE(v585) = 0;
              sub_1622C60(air_movement, &xmmword_4B67A14, v467, v468, v585, 0, &xmmword_4B67CA0, &v606, FileName, Str1);
              v513 = v512;
              LOBYTE(v588) = 1;
              sub_1622C60(air_movement, &xmmword_4B67A14, v514, v515, v588, 0, &xmmword_4B67CA0, &v597, v605, &v669);
              v517 = v516;
              if ( *&v511 > *v599 )
                sub_B09440(&v602, ",\n");
              sub_B09B80(&v602, "[%f, ", v511);
              if ( v513 )
                sub_B09B80(&v602, "%f, ", v511);
              else
                sub_B09440(&v602, "null, ");
              if ( v517 )
                sub_B09B80(&v602, "%f]", v511);
              else
                sub_B09440(&v602, "null]");
              *v647 = *&v511 + v594;
            }
            while ( (*&v511 + v594) <= v595 );
          }
        }
        goto LABEL_775;
      }
      if ( v611 ^ 0x526C6C6F5278616Di64 | DWORD2(v611) ^ 0x657461i64 || !sub_B0CBA0(http_req, v605, Block, &v606) )
        return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
      v371 = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(v371[TlsIndex] + 1i64) )
        _dyn_tls_on_demand_init(v371, v368, v369, v370);
      v372 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
      *&v602 = &off_44CAF30;
      *v603 = v372;
      *&v603[8] = 0x1000i64;
      *&v603[0x10] = 0i64;
      *(&v602 + 1) = (*(*v372 + 0x18i64))(v372, 0x1000i64);
      **(&v602 + 1) = 0;
      sub_B09440(&v602, "[");
      if ( !v593 )
      {
        LODWORD(Str1[0]) = 0;
        v669.st_dev = 0;
        if ( v592 )
          sub_3DFC50(Unit);
        *v647 = *v605;
        if ( *v605 <= *Block )
        {
          v546 = *&dword_44A02A0;
          v547 = *&dword_449CFE0;
          do
          {
            v548 = qword_4B8B948;
            if ( qword_4B8B948 )
              *(v548 + 0x70) = timeGetTime();
            v549 = *v647;
            v550 = sub_161F560(air_movement, &xmmword_4B67A14, 0, v375, 0x447A0000, 0, Str1);
            *FileName = *&v550 * v546;
            v552 = sub_161F560(air_movement, &xmmword_4B67A14, 0, v551, 0x447A0000, 1, &v669);
            *v599 = *&v552 * v547;
            if ( v549 > *v605 )
              sub_B09440(&v602, ",\n");
            sub_B09B80(&v602, "[%f, ", a3);
            sub_B09B80(&v602, "%f, ", a3);
            sub_B09B80(&v602, "%f]", a3);
            *v647 = v549 + *&v606;
          }
          while ( (v549 + *&v606) <= *Block );
        }
        goto LABEL_775;
      }
      *v647 = air_movement;
      *&v647[8] = v367;
      v376 = (v592 << 6) | 0x1BF;
      *&v647[0x18] = v376;
      *&v647[0x1C] = v367;
      *&v647[0x20] = 0x447A0000;
      *&v647[0x10] = &off_45875B0;
      *&v647[0x28] = 0;
      *&v647[0x2C] = 1;
      *&v647[0x30] = 0i64;
      memset(&v648[0xC], 0, 0x34);
      memset(&v649[1] + 4, 0, 0x30);
      memset(&v649[8] + 4, 0, 0x15);
      *v648 = 0x3CA3D70A40A00000i64;
      *&v648[8] = 0x4E6E6B28;
      *&v648[0x10] = 0x424000003ECCCCCDi64;
      *&v648[0x20] = 0x3E4CCCCD;
      *&v648[0x28] = 0x4E6E6B28;
      *&v648[0x34] = 0x42400000;
      v649[0] = 0x3DA3D70A3F000000i64;
      LODWORD(v649[1]) = 0x4E6E6B28;
      v649[2] = 0x424000003CA3D70Ai64;
      v649[4] = 0x4240000040800000i64;
      v649[6] = 0x3F8000003E4CCCCDi64;
      *(&v649[7] + 4) = 0x424000003CA3D70Ai64;
      *(&v649[9] + 4) = 0x3F8000003E99999Ai64;
      memset(&v649[0xB] + 4, 0, 0x14);
      *&v647[0x24] = 0x42C80000;
      v650 = 1;
      v631[0] = Str1;
      v631[1] = 0x100i64;
      sub_B0CCF0(v644, v373, v374, v375, v647, v631);
      FileName[0] = air_movement;
      *&FileName[1] = v367;
      *&v660.m256_f32[2] = __PAIR64__(LODWORD(v367), v376);
      v660.m256_f32[4] = 1000.0;
      *v660.m256_f32 = &off_45875B0;
      LOWORD(v660.m256_f32[7]) = 0x101;
      v661 = 0i64;
      memset(&v662[0xC], 0, 0x34);
      memset(&v663[1] + 4, 0, 0x30);
      memset(&v663[8] + 4, 0, 0x15);
      *v662 = 0x3CA3D70A40A00000i64;
      *&v662[8] = 0x4E6E6B28;
      *&v662[0x10] = 0x424000003ECCCCCDi64;
      *&v662[0x20] = 0x3E4CCCCD;
      *&v662[0x28] = 0x4E6E6B28;
      *&v662[0x34] = 0x42400000;
      v663[0] = 0x3DA3D70A3F000000i64;
      LODWORD(v663[1]) = 0x4E6E6B28;
      v663[2] = 0x424000003CA3D70Ai64;
      v663[4] = 0x4240000040800000i64;
      v663[6] = 0x3F8000003E4CCCCDi64;
      *(&v663[7] + 4) = 0x424000003CA3D70Ai64;
      *(&v663[9] + 4) = 0x3F8000003E99999Ai64;
      *(&v663[0xB] + 4) = 0i64;
      *(&v663[0xD] + 4) = 0x100000000i64;
      *&v660.m256_f32[5] = 0x42C80000i64;
      v630[0] = &v669;
      v630[1] = 0x100i64;
      v377 = v653;
      sub_B0CCF0(v653, v378, v379, v380, FileName, v630);
      v381 = v644;
LABEL_543:
      sub_B0C160(v381, v377, &v602);
LABEL_775:
      sub_B09440(&v602, "]");
      v332 = *(&v602 + 1);
      sub_AF1600(http_req, *(&v602 + 1), *&v603[0x10]);
      v333 = *v603;
      return (*(*v333 + 0x40i64))(v333, v332);
    }
    if ( !sub_B0BEB0(http_req, v599, &v595, &v594) )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    v596 = 0.0;
    sub_B0A980(http_req, "speedType", &v596);
    memset(Block + 4, 0, 0x20);
    LODWORD(Block[0]) = 0xFFFFFFFF;
    v412 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v412[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(v412, v409, v410, v411);
    v413 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    *v605 = &off_44CAF30;
    *&v605[0x10] = v413;
    *&v605[0x18] = 0x1000i64;
    *&v605[0x20] = 0i64;
    *&v605[8] = (*(*v413 + 0x18i64))(v413, 0x1000i64);
    **&v605[8] = 0;
    sub_B09440(v605, "[");
    if ( v593 )
    {
      *v647 = air_movement;
      *&v647[8] = v367;
      v417 = (v592 << 6) | 0x1BF;
      sub_222BD20(&v647[0x10], v414, v415, Block, &xmmword_44A9E50, v417);
      v651 = 1;
      v639[0] = Str1;
      v639[1] = 0x100i64;
      sub_B0C4B0(&v602, v418, v419, v420, v647, v639);
      DWORD1(Block[0]) = 1;
      FileName[0] = air_movement;
      *&FileName[1] = v367;
      sub_222BD20(&v660, v421, v422, Block, &xmmword_44A9E50, v417);
      v664 = 1;
      v638[0] = &v669;
      v638[1] = 0x100i64;
      sub_B0C4B0(&v606, v423, v424, v425, FileName, v638);
      for ( j = 8i64; j != 0xC08; j += 0xCi64 )
      {
        v429 = _mm_cvtsi32_si128(*(Str1 + j));
        *v429.m128i_i32 = sub_154D350(v427, v426, LODWORD(v596));
        *(Str1 + j) = _mm_cvtsi128_si32(v429);
      }
      if ( DWORD2(v606) )
      {
        v430 = v606;
        v431 = 0xCi64 * DWORD2(v606);
        v432 = 0i64;
        do
        {
          v433 = _mm_cvtsi32_si128(*(v430 + v432 + 8));
          *v433.m128i_i32 = sub_154D350(v427, v426, LODWORD(v596));
          *(v430 + v432 + 8) = _mm_cvtsi128_si32(v433);
          v432 += 0xCi64;
        }
        while ( v431 != v432 );
      }
      v643 = v606;
      v642 = v602;
      sub_B0C160(&v642, &v643, v605);
    }
    else
    {
      if ( v592 )
        sub_3DFC50(Unit);
      LODWORD(v606) = 0xBF800000;
      v597 = -1.0;
      v598 = -1.0;
      v600 = -1.0;
      v616 = -1.0;
      v615 = -1.0;
      v610 = *v599;
      *(&v669.st_atime + 4) = *(&xmmword_45183C8 + 0xC);
      v489 = *&xmmword_45183C8;
      *&v669.st_rdev = xmmword_45183C8;
      *&v669.st_dev = xmmword_45183B8;
      *&v647[0x1C] = *(&xmmword_45183C8 + 0xC);
      *&v647[0x10] = xmmword_45183C8;
      *v647 = xmmword_45183B8;
      *&v660.m256_f32[3] = *(&xmmword_45183C8 + 0xC);
      *v660.m256_f32 = xmmword_45183C8;
      *FileName = xmmword_45183B8;
      *&v603[0xC] = *(&xmmword_45183C8 + 0xC);
      *v603 = xmmword_45183C8;
      v602 = xmmword_45183B8;
      if ( *v599 <= v595 )
      {
        v498 = *&dword_4489388;
        do
        {
          v499 = qword_4B8B948;
          if ( qword_4B8B948 )
            *(v499 + 0x70) = timeGetTime();
          v500 = v610;
          if ( v610 > *v599 )
            sub_B09440(v605, ",\n");
          LOBYTE(v589) = 0;
          v502 = sub_161BE70(
                   air_movement,
                   &xmmword_4B67A14,
                   &xmmword_4B67CA0,
                   v416,
                   0x3F800000,
                   v589,
                   0,
                   0x40400000,
                   0,
                   &v598,
                   &v616,
                   &v669);
          if ( v502 )
          {
            if ( !v647[8] )
            {
              *&v647[0x1C] = *(&v669.st_atime + 4);
              *&v647[0x10] = *&v669.st_rdev;
              *v647 = *&v669.st_dev;
            }
            if ( !LOBYTE(FileName[1]) )
            {
              *&v660.m256_f32[3] = *(&v669.st_atime + 4);
              *v660.m256_f32 = *&v669.st_rdev;
              *FileName = *&v669.st_dev;
            }
            LOBYTE(v591) = 0;
            sub_161CEE0(
              air_movement,
              &xmmword_4B67A14,
              &xmmword_4B67CA0,
              v501,
              0x3F800000,
              v591,
              0,
              v616 + v498,
              0,
              &v606,
              Str1,
              v647);
          }
          LOBYTE(v591) = 1;
          v503 = sub_161BE70(
                   air_movement,
                   &xmmword_4B67A14,
                   &xmmword_4B67CA0,
                   v501,
                   0x3F8CCCCD,
                   v591,
                   0,
                   0x40400000,
                   0,
                   &v600,
                   &v615,
                   FileName);
          if ( v503 )
          {
            if ( !BYTE8(v602) )
            {
              *&v603[0xC] = *&v660.m256_f32[3];
              *v603 = *v660.m256_f32;
              v602 = *FileName;
            }
            LOBYTE(v589) = 1;
            sub_161CEE0(
              air_movement,
              &xmmword_4B67A14,
              &xmmword_4B67CA0,
              v504,
              0x3F8CCCCD,
              v589,
              0,
              v615 + v498,
              0,
              &v597,
              Str1,
              &v602);
          }
          sub_B09B80(v605, "[%f, ", v489);
          if ( v502 )
          {
            v614 = sub_154D350(v506, v505, LODWORD(v596));
            sub_B09B80(v605, "%f, ", v489);
          }
          else
          {
            sub_B09440(v605, "null, ");
          }
          if ( v503 )
          {
            v614 = sub_154D350(v508, v507, LODWORD(v596));
            sub_B09B80(v605, "%f]", v489);
          }
          else
          {
            sub_B09440(v605, "null]");
          }
          v610 = v500 + v594;
        }
        while ( (v500 + v594) <= v595 );
      }
    }
    sub_B09440(v605, "]");
    v332 = *&v605[8];
    sub_AF1600(http_req, *&v605[8], *&v605[0x20]);
    v333 = *&v605[0x10];
    return (*(*v333 + 0x40i64))(v333, v332);
  }
  v255 = _mm_or_si128(
           _mm_xor_si128(_mm_load_si128(&v608), xmmword_44CB210),
           _mm_xor_si128(_mm_loadu_si128(&v608.m128i_i8[3]), xmmword_44CB200));
  if ( !_mm_testz_si128(v255, v255) )
  {
    v256 = _mm_or_si128(
             _mm_xor_si128(_mm_load_si128(&v608), xmmword_44CB230),
             _mm_xor_si128(_mm_loadu_si128(&v608.m128i_i8[6]), xmmword_44CB220));
    if ( _mm_testz_si128(v256, v256) )
    {
      if ( sub_B0BDF0(http_req, "enabled", Str1)
        && sub_B0A5E0(http_req, "airspeed")
        && sub_B0BDF0(http_req, "yawLocked", &Str1[1])
        && sub_B0BDF0(http_req, "pitchLocked", &Str1[1] + 1)
        && sub_B0BDF0(http_req, "rollLocked", &Str1[1] + 2)
        && sub_B0BDF0(http_req, "elevatorLocked", &Str1[4] + 4)
        && sub_B0BDF0(http_req, "rudderLocked", &Str1[4] + 5)
        && sub_B0A5E0(http_req, "aoa")
        && sub_B0A5E0(http_req, "aos")
        && sub_B0A5E0(http_req, "roll")
        && sub_B0A5E0(http_req, "yawFakeRate")
        && sub_B0A5E0(http_req, "pitchFakeRate")
        && sub_B0A5E0(http_req, "rollFakeRate")
        && sub_B0A5E0(http_req, "elevatorFakeRate")
        && sub_B0A5E0(http_req, "rudderFakeRate") )
      {
        v389 = *(game + 0x440);
        v390 = LOBYTE(Str1[0]);
        if ( LOBYTE(Str1[0]) != *(v389 + 0xAB8) )
        {
          v390 = LocalUnit;
          if ( LocalUnit )
          {
            if ( !*(LocalUnit + 0x10B0) )
            {
              v390 = *(LocalUnit + 0x9D0);
              if ( v390 )
              {
                *(v389 + 0xBB8) = *(v390 + 0x918);
                *(v389 + 0xBA8) = _mm_loadu_si128((v390 + 0x908));
              }
            }
          }
        }
        v391 = _mm_loadu_si128(Str1);
        v392 = _mm_loadu_si128(&Str1[2]);
        v393 = *&Str1[4];
        *(v389 + 0xAD8) = *&Str1[4];
        *(v389 + 0xAC8) = v392;
        *(v389 + 0xAB8) = v391;
        v394 = NtCurrentTeb()->ThreadLocalStoragePointer;
        if ( !*(v394[TlsIndex] + 1i64) )
          _dyn_tls_on_demand_init(v394, v390, v387, v388);
        v395 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
        *&v669.st_dev = &off_44CAF30;
        *&v669.st_rdev = v395;
        v669.st_atime = 0x20i64;
        v669.st_mtime = 0i64;
        *&v669.st_nlink = (*(*v395 + 0x18i64))(v395, 0x20i64);
        **&v669.st_nlink = 0;
        *v647 = sub_5655B0(game);
        sub_B0BD50(&v669, "{ \"time\": %f }", v393);
        v396 = *&v669.st_nlink;
        sub_AF1600(http_req, *&v669.st_nlink, v669.st_mtime);
        (*(**&v669.st_rdev + 0x40i64))(*&v669.st_rdev, v396);
      }
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    }
    if ( !(v608.m128i_i64[1] ^ 0x74736554656D6954i64 | v608.m128i_i64[0] ^ 0x6C616552706F7473i64 | v609.m128i_u8[0]) )
    {
      sub_15879D0(air_movement, 0i64);
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    }
    v257 = _mm_or_si128(
             _mm_xor_si128(_mm_load_si128(&v608), xmmword_44CB250),
             _mm_xor_si128(_mm_loadu_si128(&v608.m128i_i8[5]), xmmword_44CB240));
    if ( _mm_testz_si128(v257, v257) )
      return sub_B0CF10(air_movement, http_req);
LABEL_2:
    if ( *(http_req + 0x4E8) )
    {
      v4 = *(http_req + 0x4F8);
      if ( v4 )
        v4();
    }
    result = "HTTP/1.1 400 Bad Request\r\n\r\n";
    *(http_req + 0x4E8) = "HTTP/1.1 400 Bad Request\r\n\r\n";
    *(http_req + 0x4F0) = 0x1C;
LABEL_18:
    *(http_req + 0x4F8) = 0i64;
    return result;
  }
  if ( !sub_B09200(http_req, "test", &v669) )
    goto LABEL_2;
  LOBYTE(v606) = 1;
  sub_B0BDF0(http_req, "repair", &v606);
  v382 = v606;
  *v605 = 0;
  sub_B0A980(http_req, "flaps", v605);
  LOBYTE(v599[0]) = 0;
  sub_B0BDF0(http_req, "gear", v599);
  LOBYTE(v595) = 0;
  sub_B0BDF0(http_req, "cockpitDoor", &v595);
  LODWORD(FileName[0]) = *(air_movement + 8i64 * *v605 + 0x53EC);
  v383 = 0.0;
  v384 = 0.0;
  if ( LOBYTE(v599[0]) )
    v384 = Y;
  v385 = v382 << 6;
  *(FileName + 1) = v384;
  LODWORD(FileName[1]) = 0;
  if ( LOBYTE(v595) )
    v383 = Y;
  v386 = v385 | 0x3BF;
  *(&FileName[1] + 1) = v383;
  memset(Str1 + 4, 0, 0x20);
  LODWORD(Str1[0]) = 0xFFFFFFFF;
  LOBYTE(v594) = 1;
  sub_B0BDF0(http_req, "engineAutoMode", &v594);
  if ( LOBYTE(v594) )
    goto LABEL_594;
  sub_B0CE50(http_req, Str1 + 4);
  if ( HIDWORD(Str1[0]) == 3 )
  {
    sub_B0A5E0(http_req, "manifoldPressure");
    *(&Str1[2] + 1) = *(&Str1[2] + 1) * *&dword_44CB260;
  }
  else if ( HIDWORD(Str1[0]) == 2 )
  {
    sub_B0A5E0(http_req, "throttle");
  }
  sub_B0CEB0(http_req, &Str1[1]);
  switch ( LODWORD(Str1[1]) )
  {
    case 3:
      v434 = "pitchControl";
      goto LABEL_592;
    case 2:
      v434 = "pitch";
      goto LABEL_592;
    case 1:
      v434 = "omega";
LABEL_592:
      sub_B0A5E0(http_req, v434);
      break;
  }
  sub_B0A980(http_req, "compressorStage", Str1);
  sub_B0A5E0(http_req, "cooler");
LABEL_594:
  LOBYTE(v596) = 0;
  sub_B0BDF0(http_req, "fast", &v596);
  v446 = LOBYTE(v596);
  v447 = v386 | 0x400;
  if ( !LOBYTE(v596) )
    v447 = v386;
  if ( !(*"stall" ^ v669.st_dev | (*"l" ^ v669.st_ino)) )
  {
    *v647 = 0;
    if ( !sub_B0A5E0(http_req, "alt") )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    v448 = sub_1464470(0xD8ui64);
    sub_222A520(v448, v451, v452, FileName, v447);
    goto LABEL_616;
  }
  if ( !(*"maxSpeed" ^ *&v669.st_dev | (aMaxspeed[8] ^ LOBYTE(v669.st_nlink))) )
  {
    *v647 = 0;
    if ( !sub_B0A5E0(http_req, "alt") )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    v448 = sub_1464470(0x170ui64);
    sub_222BD20(v448, v453, v454, Str1, FileName, v447);
    goto LABEL_616;
  }
  if ( *&v669.st_dev ^ 0x626D696C436E696Di64 | *(&v669.st_ino + 1) ^ 0x656D6954626D69i64 )
  {
    if ( *&v669.st_dev ^ 0x546E7275546E696Di64 | *&v669.st_nlink ^ 0x656D69i64 )
    {
      if ( *&v669.st_dev ^ 0x526C6C6F5278616Di64 | *&v669.st_nlink ^ 0x657461i64 )
        goto LABEL_2;
      LOBYTE(Block[0]) = 0;
      *v647 = 0;
      LODWORD(v602) = 0;
      if ( !sub_B0A5E0(http_req, "alt") || !sub_B0BDF0(http_req, "IAS", Block) || !sub_B0A5E0(http_req, "speed") )
        return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
      LOBYTE(v611) = 1;
      sub_B0BDF0(http_req, "right", &v611);
      v448 = sub_1464470(0xE0ui64);
      sub_222F3B0(v448, &xmmword_44A9E50, v449, v450, Block[0], v611, &xmmword_44A9E50, v447);
    }
    else
    {
      *v647 = 0;
      if ( !sub_B0A5E0(http_req, "alt") )
        return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
      LOBYTE(v602) = 1;
      sub_B0BDF0(http_req, "right", &v602);
      v448 = sub_1464470(0x1D0ui64);
      sub_222DA50(v448, v459, v460, v602, Str1, FileName, v447);
    }
LABEL_616:
    sub_222FC50(air_movement, v448, v446);
    return sub_B0CF10(air_movement, http_req);
  }
  LODWORD(Block[0]) = 0;
  LODWORD(v611) = 0;
  *&v602 = 0i64;
  DWORD2(v602) = 0;
  if ( !sub_B0A5E0(http_req, "alt")
    || !sub_B0A5E0(http_req, "startAlt")
    || !sub_B0A980(http_req, "speedType", &v602 + 4)
    || !sub_B0A5E0(http_req, "speed") )
  {
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  *v647 = 0i64;
  *&v647[8] = off_4B678C0;
  *&v647[0x10] = 0i64;
  sub_B0C610(v647, &v602);
  v455 = sub_1464470(0x1D8ui64);
  sub_222C8D0(v455, v456, v457, v458, v647, Str1, FileName, v447);
  sub_222FC50(air_movement, v455, v446);
  result = sub_B0CF10(air_movement, http_req);
LABEL_369:
  v151 = *v647;
  if ( *v647 )
  {
    v152 = *&v647[8];
    return (*(*v152 + 0x40i64))(v152, v151);
  }
  return result;
}
