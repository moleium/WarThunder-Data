// local variable allocation has failed, the output may be wrong!
const char *__fastcall unknown_aircraft_data(__int64 http_req, __int64 a2, double a3)
{
  void (*v4)(void); // rax
  const char *result; // rax
  _BYTE *v6; // rdi
  signed __int64 v7; // rdx
  void (*v8)(void); // rax
  __int64 LocalUnit_; // rbx
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
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  _QWORD *v60; // rcx
  __int64 v61; // rax
  const char *v62; // rdi
  const char *v63; // rcx
  int v64; // eax
  int st_mtime; // ecx
  _QWORD *v66; // rcx
  __int64 v67; // r14
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rbp
  __int64 v75; // r12
  char *v76; // rax
  __int64 v77; // r13
  __int64 v78; // rbp
  char *v79; // rdi
  int v80; // eax
  float v81; // edi
  const char *v82; // rbp
  __int64 v83; // r12
  const char *v84; // rbp
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // r12
  _QWORD *v89; // rcx
  __int64 v90; // rax
  unsigned __int16 v91; // ax
  __int64 v92; // rbp
  __int64 i; // rdi
  __int64 v94; // rax
  __int64 v95; // rcx
  unsigned int v96; // ebp
  __int64 v97; // rdi
  __int64 v98; // rbp
  const char *v99; // rdi
  __int64 v100; // rcx
  CHAR *v101; // rdx
  float v102; // xmm0_4
  float v103; // xmm6_4
  __int64 v104; // rbx
  float v105; // xmm1_4
  float v106; // xmm6_4
  float v107; // xmm7_4
  __int64 *v108; // rbp
  __int64 v109; // rax
  __int64 *v110; // rbx
  __int64 v111; // rax
  signed int v112; // ecx
  int v113; // edx
  float v114; // xmm0_4
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // rbp
  __int64 v119; // rcx
  float v120; // xmm0_4
  __int64 v121; // rbp
  unsigned int v122; // r14d
  __int64 v123; // rax
  __int64 v124; // r8
  _QWORD *v125; // rdi
  int v126; // edx
  _QWORD *v127; // rcx
  float v128; // xmm0_4
  __int64 v129; // rdx
  __int64 v130; // rdx
  float v131; // xmm0_4
  int v132; // ebp
  __int64 v133; // rdx
  int *v134; // rdi
  __m128i si128; // xmm0
  __m128i v136; // xmm1
  __int64 v137; // rdx
  __m128i inserted; // xmm4
  _DWORD *v139; // rdx
  const char *v140; // rax
  _dev_t v141; // eax
  const char *v142; // rcx
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r13
  _QWORD *v146; // rdi
  __int64 v147; // rbx
  int v148; // ecx
  _QWORD *v149; // rax
  bool v150; // r14
  bool v151; // cl
  __int64 v152; // rax
  double v153; // xmm0_8
  unsigned int v154; // xmm6_4
  __int64 v155; // rax
  double v156; // xmm0_8
  __int64 v157; // rax
  double v158; // xmm0_8
  unsigned int v159; // xmm6_4
  __int64 v160; // rax
  double v161; // xmm0_8
  _QWORD *v162; // rax
  _QWORD *v163; // rax
  _QWORD *v164; // rdi
  __int64 v165; // rbx
  int v166; // ecx
  _QWORD *v167; // rax
  bool v168; // r14
  bool v169; // cl
  __int64 v170; // rax
  double v171; // xmm0_8
  unsigned int v172; // xmm6_4
  __int64 v173; // rax
  double v174; // xmm0_8
  __int64 v175; // rax
  double v176; // xmm0_8
  unsigned int v177; // xmm6_4
  __int64 v178; // rax
  double v179; // xmm0_8
  _QWORD *v180; // rax
  _QWORD *v181; // rax
  _QWORD *v182; // rdi
  __int64 v183; // rbx
  int v184; // ecx
  _QWORD *v185; // rax
  bool v186; // r14
  bool v187; // cl
  __int64 v188; // rax
  double v189; // xmm0_8
  unsigned int v190; // xmm6_4
  __int64 v191; // rax
  double v192; // xmm0_8
  __int64 v193; // rax
  double v194; // xmm0_8
  unsigned int v195; // xmm6_4
  __int64 v196; // rax
  double v197; // xmm0_8
  _QWORD *v198; // rax
  _QWORD *v199; // rax
  _QWORD *v200; // rdi
  __int64 v201; // rbx
  int v202; // ecx
  _QWORD *v203; // rax
  bool v204; // r14
  bool v205; // cl
  __int64 v206; // rax
  double v207; // xmm0_8
  unsigned int v208; // xmm6_4
  __int64 v209; // rax
  double v210; // xmm0_8
  __int64 v211; // rax
  double v212; // xmm0_8
  unsigned int v213; // xmm6_4
  __int64 v214; // rax
  double v215; // xmm0_8
  _QWORD *v216; // rax
  _QWORD *v217; // rax
  __int64 v218; // r13
  _QWORD *v219; // rdi
  __int64 v220; // rbx
  int v221; // ecx
  _QWORD *v222; // rax
  bool v223; // r14
  bool v224; // cl
  __int64 v225; // rax
  double v226; // xmm0_8
  unsigned int v227; // xmm6_4
  __int64 v228; // rax
  double v229; // xmm0_8
  __int64 v230; // rax
  double v231; // xmm0_8
  unsigned int v232; // xmm6_4
  __int64 v233; // rax
  double v234; // xmm0_8
  _QWORD *v235; // rax
  _QWORD *v236; // rax
  __m128i v237; // xmm1
  _DWORD *v238; // rdi
  int v239; // ebp
  __int64 v240; // rdx
  __m128i v241; // xmm0
  __m128i v242; // xmm0
  __m128i v243; // xmm0
  __m128i v244; // xmm0
  __m128i v245; // xmm0
  __m128i v246; // xmm0
  __m128i v247; // xmm0
  __m128i v248; // xmm0
  __m128i v249; // xmm0
  _DWORD *v250; // rbx
  _DWORD *v251; // rcx
  __int64 v252; // rdx
  _DWORD *v253; // rbx
  _DWORD *v254; // rax
  __int64 v255; // rcx
  _QWORD *v256; // rcx
  __int64 v257; // rcx
  double *v258; // r14
  float v259; // xmm7_4
  float v260; // xmm6_4
  float v261; // xmm10_4
  __m128 v262; // xmm9
  float v263; // xmm0_4
  double v264; // xmm2_8
  float v265; // xmm8_4
  float v266; // xmm0_4
  float v267; // xmm0_4
  float v268; // xmm1_4
  float v269; // xmm0_4
  float v270; // xmm7_4
  float v271; // xmm6_4
  float v272; // xmm0_4
  __int64 v273; // rdi
  __int64 v274; // r9
  __int64 v275; // r8
  __int64 v276; // r9
  __int64 v277; // rax
  char v278; // cl
  unsigned __int8 v279; // bl
  unsigned int v280; // ecx
  __int64 v281; // rdx
  float v282; // xmm2_4
  float v283; // xmm1_4
  float v284; // xmm3_4
  float v285; // xmm0_4
  float v286; // xmm1_4
  __m128i v287; // xmm2
  float v288; // xmm5_4
  float v289; // xmm5_4
  float v290; // xmm3_4
  float v291; // xmm3_4
  float v292; // xmm0_4
  float v293; // xmm1_4
  float v294; // xmm7_4
  float v295; // xmm10_4
  float v296; // xmm0_4
  float v297; // xmm0_4
  __int64 v298; // rax
  int v299; // ecx
  unsigned __int8 v300; // al
  int v301; // ecx
  unsigned __int8 v302; // al
  __int64 v303; // rax
  unsigned __int8 **v304; // rbp
  __int64 v305; // rax
  unsigned int v306; // r15d
  int v307; // eax
  float v308; // xmm6_4
  unsigned int v309; // ecx
  float v310; // xmm6_4
  int v311; // eax
  int v312; // edx
  int v313; // r8d
  int v314; // r9d
  __int64 v315; // xmm0_8
  __int64 v316; // rax
  __int64 v317; // rax
  __int64 v318; // rcx
  __int64 v319; // r8
  __int64 v320; // rbx
  __int64 v321; // rcx
  _QWORD *v322; // rcx
  __int64 v323; // rcx
  __int64 v324; // rdi
  __int64 v325; // rcx
  __int64 v326; // rdx
  int *v327; // rdi
  __m128i v328; // xmm0
  __m128i v329; // xmm1
  unsigned __int64 v330; // rdx
  __m128i v331; // xmm4
  _DWORD *v332; // rdx
  int v333; // eax
  float v334; // xmm0_4
  __int64 v335; // rax
  float v336; // xmm0_4
  float v337; // xmm0_4
  float v338; // xmm0_4
  float v339; // xmm2_4
  __int64 v340; // rcx
  __int64 v341; // rdx
  __int64 v342; // r8
  __int64 v343; // r9
  _QWORD *v344; // rcx
  __int64 v345; // rcx
  int *v346; // rcx
  int v347; // eax
  __int64 v348; // rbx
  int v349; // xmm6_4
  __int64 v350; // rdi
  float v351; // xmm0_4
  float v352; // xmm0_4
  int *v353; // rax
  float v354; // xmm6_4
  __int64 v355; // rdi
  __int64 v356; // rbx
  float v357; // xmm0_4
  __int64 v358; // rdx
  float v359; // xmm6_4
  __int64 v360; // rdx
  __int64 v361; // r8
  __int64 v362; // r9
  _QWORD *v363; // rcx
  __int64 v364; // rcx
  int v365; // edx
  int v366; // r8d
  int v367; // r9d
  int v368; // edi
  char *v369; // rdi
  int v370; // edx
  int v371; // r8d
  int v372; // r9d
  char *v373; // rcx
  int v374; // edi
  float v375; // xmm0_4
  float v376; // xmm2_4
  int v377; // edi
  int v378; // edi
  __int64 v379; // r8
  __int64 v380; // r9
  __int64 v381; // rcx
  __int64 v382; // rdx
  __m128i v383; // xmm0
  __m128i v384; // xmm1
  double v385; // xmm2_8
  _QWORD *v386; // rcx
  __int64 v387; // rcx
  __int64 v388; // rdi
  __int64 v389; // rdx
  __int64 v390; // r8
  __int64 v391; // r9
  _QWORD *v392; // rcx
  __int64 v393; // rcx
  int v394; // edx
  int v395; // r8d
  int v396; // r9d
  int v397; // edi
  int v398; // edx
  int v399; // r8d
  int v400; // r9d
  __int64 v401; // rdx
  __int64 v402; // r8
  __int64 v403; // r9
  _QWORD *v404; // rcx
  __int64 v405; // rcx
  int v406; // edx
  int v407; // r8d
  int v408; // r9d
  int v409; // ebx
  int v410; // edx
  int v411; // r8d
  int v412; // r9d
  int v413; // edx
  int v414; // r8d
  int v415; // edx
  int v416; // r8d
  int v417; // r9d
  __int64 v418; // rdx
  __int64 v419; // rcx
  __int64 j; // rdi
  __m128i v421; // xmm0
  __int64 v422; // rdi
  __int64 v423; // rbx
  __int64 v424; // rbp
  __m128i v425; // xmm0
  const char *v426; // rdx
  __int64 v427; // rdx
  __int64 v428; // r8
  __int64 v429; // r9
  _QWORD *v430; // rcx
  __int64 v431; // rcx
  int v432; // r8d
  const char *v433; // rdx
  const char *v434; // rdx
  const char *v435; // rdx
  const char *v436; // rdx
  bool v437; // r12
  unsigned int v438; // ebx
  int v439; // ebp
  __int64 v440; // rdi
  int v441; // r8d
  int v442; // r9d
  int v443; // edx
  int v444; // r8d
  int v445; // edx
  int v446; // r8d
  __int64 v447; // rdi
  int v448; // edx
  int v449; // r8d
  int v450; // r9d
  int v451; // edx
  int v452; // r8d
  __int64 v453; // rdx
  __int64 v454; // r8
  __int64 v455; // r9
  _QWORD *v456; // rcx
  __int64 v457; // rcx
  int v458; // edx
  int v459; // r8d
  int v460; // r9d
  int v461; // ebx
  int v462; // edx
  int v463; // r8d
  int v464; // r9d
  int v465; // edx
  int v466; // r8d
  int v467; // edx
  int v468; // r8d
  int v469; // r9d
  __m128i v470; // xmm1
  double v471; // xmm2_8
  float v472; // xmm7_4
  __int64 v473; // rbx
  double v474; // xmm6_8
  char v475; // bl
  int v476; // r8d
  int v477; // r9d
  int v478; // r8d
  int v479; // r9d
  char v480; // r14
  double v481; // xmm2_8
  char v482; // bl
  int v483; // edx
  int v484; // r8d
  int v485; // r9d
  int v486; // r8d
  int v487; // edx
  int v488; // r8d
  int v489; // r9d
  float v490; // xmm7_4
  __int64 v491; // rbx
  float v492; // xmm6_4
  int v493; // r9d
  char v494; // r12
  char v495; // bl
  int v496; // r9d
  __int64 v497; // rdx
  __int64 v498; // rcx
  __int64 v499; // rdx
  __int64 v500; // rcx
  __m128i v501; // xmm1
  __int64 v502; // rbx
  double v503; // xmm6_8
  char v504; // al
  char v505; // r14
  int v506; // r8d
  int v507; // r9d
  char v508; // al
  char v509; // bl
  float v510; // xmm6_4
  float v511; // xmm0_4
  unsigned int v512; // r12d
  unsigned int v513; // ebp
  __int64 v514; // rbx
  float v515; // xmm13_4
  float v516; // xmm8_4
  float v517; // xmm12_4
  float v518; // xmm14_4
  float v519; // xmm7_4
  unsigned int v520; // r15d
  float v521; // xmm15_4
  float v522; // xmm2_4
  unsigned int v523; // ecx
  int v524; // ecx
  int v525; // eax
  __int64 v526; // rcx
  float *v527; // rdx
  bool v528; // cf
  __int64 v529; // r8
  double v530; // xmm0_8
  int v531; // r8d
  int v532; // r9d
  float v533; // xmm1_4
  float v534; // xmm0_4
  float v535; // xmm2_4
  __int64 v536; // rax
  float v537; // xmm1_4
  float v538; // xmm8_4
  float v539; // xmm7_4
  __int64 v540; // rdi
  float v541; // xmm6_4
  double v542; // xmm0_8
  int v543; // r9d
  double v544; // xmm0_8
  float v545; // xmm1_4
  unsigned __int64 v546; // rax
  float *v547; // rcx
  float v548; // xmm6_4
  unsigned int v549; // edi
  unsigned int v550; // r12d
  __int64 v551; // rbx
  float v552; // xmm10_4
  float v553; // xmm13_4
  float v554; // xmm11_4
  float v555; // xmm15_4
  unsigned int v556; // r15d
  float v557; // xmm7_4
  float v558; // xmm14_4
  float v559; // xmm2_4
  unsigned int v560; // ecx
  int v561; // ecx
  int v562; // eax
  __int64 v563; // rcx
  float *v564; // rdx
  __int64 v565; // r8
  double v566; // xmm0_8
  int v567; // r8d
  int v568; // r9d
  float v569; // xmm1_4
  float v570; // xmm0_4
  float v571; // xmm2_4
  __int64 v572; // rax
  float v573; // xmm1_4
  float v574; // xmm1_4
  unsigned __int64 v575; // rax
  float *v576; // rcx
  int v577; // [rsp+20h] [rbp-5D78h]
  int v578; // [rsp+20h] [rbp-5D78h]
  int v579; // [rsp+20h] [rbp-5D78h]
  int v580; // [rsp+20h] [rbp-5D78h]
  int v581; // [rsp+28h] [rbp-5D70h]
  int v582; // [rsp+28h] [rbp-5D70h]
  int v583; // [rsp+28h] [rbp-5D70h]
  char v584; // [rsp+6Eh] [rbp-5D2Ah] BYREF
  bool v585; // [rsp+6Fh] [rbp-5D29h] BYREF
  float v586; // [rsp+70h] [rbp-5D28h] BYREF
  float v587; // [rsp+78h] [rbp-5D20h] BYREF
  float v588; // [rsp+7Ch] [rbp-5D1Ch] BYREF
  float v589; // [rsp+80h] [rbp-5D18h] BYREF
  float v590; // [rsp+84h] [rbp-5D14h] BYREF
  int v591[2]; // [rsp+88h] [rbp-5D10h] BYREF
  float v592; // [rsp+94h] [rbp-5D04h] BYREF
  __int64 *v593; // [rsp+98h] [rbp-5D00h]
  __int128 v594; // [rsp+A0h] [rbp-5CF8h] BYREF
  _BYTE v595[28]; // [rsp+B0h] [rbp-5CE8h]
  __int128 Block[3]; // [rsp+D0h] [rbp-5CC8h] BYREF
  _BYTE v597[40]; // [rsp+100h] [rbp-5C98h] BYREF
  __int128 v598; // [rsp+128h] [rbp-5C70h] BYREF
  __int64 v599; // [rsp+138h] [rbp-5C60h]
  __m128i v600; // [rsp+140h] [rbp-5C58h] BYREF
  __m128i v601; // [rsp+150h] [rbp-5C48h] BYREF
  float v602; // [rsp+16Ch] [rbp-5C2Ch]
  _BYTE v603[13]; // [rsp+170h] [rbp-5C28h] BYREF
  __int64 v604; // [rsp+198h] [rbp-5C00h]
  float v605; // [rsp+1A4h] [rbp-5BF4h]
  float v606; // [rsp+1A8h] [rbp-5BF0h] BYREF
  float v607; // [rsp+1ACh] [rbp-5BECh] BYREF
  int v608[4]; // [rsp+1B0h] [rbp-5BE8h] BYREF
  __int64 v609; // [rsp+1C0h] [rbp-5BD8h] BYREF
  int v610; // [rsp+1C8h] [rbp-5BD0h]
  __int64 v611; // [rsp+1D0h] [rbp-5BC8h] BYREF
  float v612; // [rsp+1D8h] [rbp-5BC0h]
  int v613[3]; // [rsp+1E0h] [rbp-5BB8h] BYREF
  __int64 v614; // [rsp+1ECh] [rbp-5BACh]
  int v615; // [rsp+1F4h] [rbp-5BA4h]
  float v616; // [rsp+1F8h] [rbp-5BA0h]
  int v617; // [rsp+1FCh] [rbp-5B9Ch]
  int v618; // [rsp+200h] [rbp-5B98h]
  __int64 v619; // [rsp+204h] [rbp-5B94h]
  int v620; // [rsp+20Ch] [rbp-5B8Ch]
  __int64 v621[2]; // [rsp+210h] [rbp-5B88h] BYREF
  __int64 v622[2]; // [rsp+220h] [rbp-5B78h] BYREF
  __int64 v623[2]; // [rsp+230h] [rbp-5B68h] BYREF
  __int64 v624[2]; // [rsp+240h] [rbp-5B58h] BYREF
  __int64 v625[2]; // [rsp+250h] [rbp-5B48h] BYREF
  __int64 v626[2]; // [rsp+260h] [rbp-5B38h] BYREF
  __int64 v627[2]; // [rsp+270h] [rbp-5B28h] BYREF
  __int64 v628[2]; // [rsp+280h] [rbp-5B18h] BYREF
  __int64 v629[2]; // [rsp+290h] [rbp-5B08h] BYREF
  __int64 v630[2]; // [rsp+2A0h] [rbp-5AF8h] BYREF
  __int64 v631[2]; // [rsp+2B0h] [rbp-5AE8h] BYREF
  __int64 v632[2]; // [rsp+2C0h] [rbp-5AD8h] BYREF
  __int128 v633; // [rsp+2D0h] [rbp-5AC8h] BYREF
  __int128 v634; // [rsp+2E0h] [rbp-5AB8h] BYREF
  char v635[16]; // [rsp+2F0h] [rbp-5AA8h] BYREF
  char v636[16]; // [rsp+300h] [rbp-5A98h] BYREF
  __int128 v637[2]; // [rsp+310h] [rbp-5A88h] BYREF
  _BYTE v638[64]; // [rsp+330h] [rbp-5A68h] BYREF
  _BYTE v639[64]; // [rsp+370h] [rbp-5A28h] BYREF
  _QWORD v640[14]; // [rsp+3B0h] [rbp-59E8h] BYREF
  int v641; // [rsp+420h] [rbp-5978h]
  int v642; // [rsp+4B0h] [rbp-58E8h]
  int v643; // [rsp+510h] [rbp-5888h]
  char v644[16]; // [rsp+F30h] [rbp-4E68h] BYREF
  char v645[16]; // [rsp+F40h] [rbp-4E58h] BYREF
  char v646[16]; // [rsp+F50h] [rbp-4E48h] BYREF
  char v647[16]; // [rsp+F60h] [rbp-4E38h] BYREF
  char v648[16]; // [rsp+F70h] [rbp-4E28h] BYREF
  char v649[16]; // [rsp+F80h] [rbp-4E18h] BYREF
  char *FileName[2]; // [rsp+F90h] [rbp-4E08h] BYREF
  __m256 v651; // [rsp+FA0h] [rbp-4DF8h] BYREF
  __int128 v652; // [rsp+FC0h] [rbp-4DD8h]
  _BYTE v653[64]; // [rsp+FD0h] [rbp-4DC8h] BYREF
  _QWORD v654[32]; // [rsp+1010h] [rbp-4D88h] BYREF
  int v655; // [rsp+1110h] [rbp-4C88h]
  int v656; // [rsp+1170h] [rbp-4C28h]
  _QWORD Str1[9]; // [rsp+1B90h] [rbp-4208h] BYREF
  char v658; // [rsp+1BD8h] [rbp-41C0h]
  __int64 v659; // [rsp+1BDCh] [rbp-41BCh]
  struct _stat64i32 v660; // [rsp+3C20h] [rbp-2178h] BYREF
  char v661; // [rsp+3C50h] [rbp-2148h]
  char v662; // [rsp+3C67h] [rbp-2131h]
  char v663; // [rsp+3C90h] [rbp-2108h]
  __int16 v664; // [rsp+3CA7h] [rbp-20F1h]
  char v665; // [rsp+3CA9h] [rbp-20EFh]

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
  if ( !parse_command_data(v6, v7, "cmd", &v600, 0x20i64) )
    goto LABEL_2;
  LocalUnit_ = LocalUnit;
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
  if ( !(v600.m128i_i64[0] ^ 0x657053646C697562i64 | *(v600.m128i_i64 + 3) ^ 0x7363657053646Ci64) )
  {
    sub_FBDF0(Str1);
    sub_14584E0(&v660, off_4B678B0);
    sub_1542B10(Str1, air_movement, &v660);
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v22, v23, v24);
    v26 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    *v638 = 0i64;
    *&v638[8] = v26;
    *&v638[0x10] = 0i64;
    v27 = *(*(LocalUnit_ + 0x4160) + 0x10i64);
    v28 = &szFile;
    if ( !v27 )
      v27 = &szFile;
    FileName[1] = v27;
    LODWORD(FileName[0]) = 1;
    sub_1546EF0(v638, 0x80i64, "newFM/specs_%s.blk", FileName, 1);
    v29 = *v638;
    if ( *&v638[0x10] )
      v28 = *v638;
    sub_1651010(&v660, v28);
    if ( v29 )
      (*(**&v638[8] + 0x40i64))(*&v638[8], v29);
    v30 = &v660;
LABEL_59:
    sub_1458FF0(v30);
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  if ( v600.m128i_i64[0] == 0x4D46656772656Di64 )
  {
    *v638 = 0i64;
    *&v638[8] = off_4B678C8;
    *&v638[0x10] = 0i64;
    v11 = *(*(LocalUnit + 0x4160) + 0x10i64);
    v12 = &szFile;
    if ( !v11 )
      v11 = &szFile;
    Str1[1] = v11;
    LODWORD(Str1[0]) = 1;
    sub_1546EF0(v638, 0x80i64, "currentFM/%s.blk", Str1, 1);
    sub_14584E0(Str1, off_4B678B0);
    sub_14584E0(&v660, off_4B678B0);
    v13 = *v638;
    v14 = *v638;
    if ( !*&v638[0x10] )
      v14 = &szFile;
    if ( sub_1606B70(Str1, v14, 0i64) )
    {
      v18 = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(v18[TlsIndex] + 1i64) )
        _dyn_tls_on_demand_init(v18, v15, v16, v17);
      v19 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
      FileName[0] = 0i64;
      FileName[1] = v19;
      *v651.m256_f32 = 0i64;
      v20 = sub_B0A470(*(LocalUnit_ + 0x4160), FileName);
      if ( v20 && sub_1606B70(&v660, v20, 0i64) )
      {
        sub_B0D2D0(Str1, &v660, &v594);
        v21 = *(*(LocalUnit_ + 0x4160) + 0x10i64);
        if ( !v21 )
          v21 = &szFile;
        *v597 = v21;
        sub_4910E0(&v594, 0x80i64, "mergeFM/%s.blk", v597);
        if ( !sub_17B0470("mergeFM") )
          sub_17B01A0("mergeFM");
        if ( *v595 )
          v12 = v594;
        sub_1651010(Str1, v12);
        if ( v594 )
          (*(**(&v594 + 1) + 0x40i64))(*(&v594 + 1));
      }
      if ( FileName[0] )
        (*(*FileName[1] + 0x40i64))(FileName[1]);
    }
    sub_1458FF0(&v660);
    sub_1458FF0(Str1);
    if ( v13 )
      (*(**&v638[8] + 0x40i64))(*&v638[8], v13);
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  if ( !(v600.m128i_i64[0] ^ 0x4D4664616F6C6E75i64 | v600.m128i_u8[8]) )
  {
    if ( !sub_17B0470("currentFM") )
      sub_17B01A0("currentFM");
    v44 = *(LocalUnit_ + 0x4160);
    v45 = *(v44 + 0x10);
    v46 = &szFile;
    if ( !v45 )
      v45 = &szFile;
    v47 = *(v44 + 0x18);
    if ( !v47 )
      v47 = &szFile;
    sub_1458620(Str1, v47, off_4B678B0);
    sub_157F4A0(v638, Str1, v45);
    if ( *&v638[0x10] )
      v46 = *v638;
    FileName[0] = sub_17B0B30(v46);
    sub_4910E0(&v660, 0x100i64, "currentFM/%s", FileName);
    if ( *v638 )
      (*(**&v638[8] + 0x40i64))(*&v638[8]);
    sub_1458FF0(Str1);
    sub_14584E0(Str1, off_4B678B0);
    sub_1577510(air_movement, Str1, 0i64, *(*(LocalUnit_ + 0x11A0) + 0x58i64));
    v48 = sub_145DB90(Str1, "Instructor");
    sub_182B660(LocalUnit_ + 0x2FC0, v48, 0i64);
    v49 = sub_145DB90(Str1, "Autopilot");
    sub_1839EE0(*(LocalUnit_ + 0x2E70), v49, 0i64);
    if ( v660.st_rdev )
      v50 = *&v660.st_dev;
    else
      v50 = &szFile;
    sub_1651010(Str1, v50);
    sub_1458FF0(Str1);
    if ( *&v660.st_dev )
      (*(**&v660.st_nlink + 0x40i64))(*&v660.st_nlink);
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  if ( !(v600.m128i_i64[0] ^ 0x736150646C697562i64 | *(v600.m128i_i64 + 6) ^ 0x74726F70737361i64) )
  {
    sub_14584E0(FileName, off_4B678B0);
    LODWORD(v598) = 0;
    if ( sub_B09200(http_req, "unitSystem", v638) && sub_B0A5E0(http_req, "mass") && sub_B0A930(http_req, Str1) )
    {
      v54 = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(v54[TlsIndex] + 1i64) )
        _dyn_tls_on_demand_init(v54, v51, v52, v53);
      v55 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
      *&v594 = 0i64;
      *(&v594 + 1) = v55;
      *v595 = 0i64;
      v604 = sub_B0A470(*(LocalUnit_ + 0x4160), &v594);
      if ( v604 && sub_1606B70(FileName, v604, 0i64) )
      {
        sub_145F7B0(FileName, "Passport");
        v56 = sub_145DB90(FileName, "Passport");
        sub_145A060(v56, "unitSystem", v638);
        sub_145B830(v56, "mass");
        v591[0] = 1;
        sub_B0A980(http_req, "maxSpeedSpeedType");
        sub_145A060(v56, "maxSpeedSpeedType", *(&off_4A791A0 + 1));
        v587 = 0.0;
        sub_B0A980(http_req, "climbSpeedCount");
        v593 = v56;
        sub_145A750(v56, "climbSpeedNum", 0i64);
        v586 = 0.0;
        *v603 = 0;
        sub_B0A980(http_req, "turnTimeFlaps");
        sub_145A750(v593, "turnTimeFlaps", *v603);
        v597[8] = 0;
        v597[0xC] = 0;
        *&v597[0x10] = 0i64;
        memset(&v660, 0, sizeof(v660));
        v661 = 0;
        v662 = 0x17;
        v663 = 0;
        v664 = 0x117;
        v665 = 0;
        sub_B0A9F0(Block, Str1);
        sub_18F4A70(&v660, Block, v597, 0i64);
        if ( (SBYTE7(Block[1]) & 0x80u) != 0 && *&Block[0] )
          sub_1464430(*&Block[0]);
        v145 = sub_145DDB0(v593, &unk_4898FAD);
        v146 = 0i64;
        v147 = sub_180EDC0(v597, "stall", 0i64);
        v148 = *(v147 + 8);
        v149 = *v147;
        v150 = (v148 & 0xFE) != 6 || *v147 == 0i64;
        if ( !v150 )
          v146 = v149[1];
        while ( 1 )
        {
          v151 = (v148 & 0xFE) != 6 || v149 == 0i64;
          if ( v150 )
          {
            if ( v151 )
              goto LABEL_223;
          }
          else
          {
            if ( v151 )
              v149 = 0i64;
            if ( v146 == v149 )
            {
LABEL_223:
              v164 = 0i64;
              v165 = sub_180EDC0(v597, "maxSpeed", 0i64);
              v166 = *(v165 + 8);
              v167 = *v165;
              v168 = (v166 & 0xFE) != 6 || *v165 == 0i64;
              if ( !v168 )
                v164 = v167[1];
              while ( 1 )
              {
                v169 = (v166 & 0xFE) != 6 || v167 == 0i64;
                if ( v168 )
                {
                  if ( v169 )
                    goto LABEL_244;
                }
                else
                {
                  if ( v169 )
                    v167 = 0i64;
                  if ( v164 == v167 )
                  {
LABEL_244:
                    v182 = 0i64;
                    v183 = sub_180EDC0(v597, "minClimbTime", 0i64);
                    v184 = *(v183 + 8);
                    v185 = *v183;
                    v186 = (v184 & 0xFE) != 6 || *v183 == 0i64;
                    if ( !v186 )
                      v182 = v185[1];
                    while ( 1 )
                    {
                      v187 = (v184 & 0xFE) != 6 || v185 == 0i64;
                      if ( v186 )
                      {
                        if ( v187 )
                          goto LABEL_265;
                      }
                      else
                      {
                        if ( v187 )
                          v185 = 0i64;
                        if ( v182 == v185 )
                        {
LABEL_265:
                          v200 = 0i64;
                          v201 = sub_180EDC0(v597, "minTurnTime", 0i64);
                          v202 = *(v201 + 8);
                          v203 = *v201;
                          v204 = (v202 & 0xFE) != 6 || *v201 == 0i64;
                          if ( !v204 )
                            v200 = v203[1];
                          while ( 1 )
                          {
                            v205 = (v202 & 0xFE) != 6 || v203 == 0i64;
                            if ( v204 )
                            {
                              if ( v205 )
                                goto LABEL_286;
                            }
                            else
                            {
                              if ( v205 )
                                v203 = 0i64;
                              if ( v200 == v203 )
                              {
LABEL_286:
                                v218 = sub_145DDB0(v593, "IAS");
                                v219 = 0i64;
                                v220 = sub_180EDC0(v597, "maxRollRate", 0i64);
                                v221 = *(v220 + 8);
                                v222 = *v220;
                                v223 = (v221 & 0xFE) != 6 || *v220 == 0i64;
                                if ( !v223 )
                                  v219 = v222[1];
                                while ( 1 )
                                {
                                  v224 = (v221 & 0xFE) != 6 || v222 == 0i64;
                                  if ( v223 )
                                  {
                                    if ( v224 )
                                      goto LABEL_307;
                                  }
                                  else
                                  {
                                    if ( v224 )
                                      v222 = 0i64;
                                    if ( v219 == v222 )
                                    {
LABEL_307:
                                      sub_1651010(FileName, v604);
                                      sub_B0AB40(&v660);
                                      sub_180E1F0(v597);
                                      goto LABEL_308;
                                    }
                                  }
                                  if ( *(sub_180ED20(v219 + 6, 1i64) + 8) )
                                  {
                                    v225 = sub_180ED20(v219 + 6, 1i64);
                                    v226 = sub_180EA50(v225);
                                    v227 = LODWORD(v226);
                                    v228 = sub_180ED20(v219 + 6, 0i64);
                                    v229 = sub_180EA50(v228);
                                    *&Block[0] = __PAIR64__(v227, LODWORD(v229));
                                    sub_145C4C0(v218, "maxRollRateLeft", Block);
                                  }
                                  if ( *(sub_180ED20(v219 + 6, 2i64) + 8) )
                                  {
                                    v230 = sub_180ED20(v219 + 6, 2i64);
                                    v231 = sub_180EA50(v230);
                                    v232 = LODWORD(v231);
                                    v233 = sub_180ED20(v219 + 6, 0i64);
                                    v234 = sub_180EA50(v233);
                                    *&Block[0] = __PAIR64__(v232, LODWORD(v234));
                                    sub_145C4C0(v218, "maxRollRateRight", Block);
                                  }
                                  v235 = *v219;
                                  if ( *v219 )
                                  {
                                    do
                                    {
                                      v219 = v235;
                                      v235 = v235[1];
                                    }
                                    while ( v235 );
                                  }
                                  else
                                  {
                                    do
                                    {
                                      v236 = v219;
                                      v219 = v219[2];
                                    }
                                    while ( v236 == *v219 );
                                    if ( *v236 == v219 )
                                      v219 = v236;
                                  }
                                  v221 = *(v220 + 8);
                                  v222 = *v220;
                                }
                              }
                            }
                            if ( *(sub_180ED20(v200 + 6, 1i64) + 8) )
                            {
                              v206 = sub_180ED20(v200 + 6, 1i64);
                              v207 = sub_180EA50(v206);
                              v208 = LODWORD(v207);
                              v209 = sub_180ED20(v200 + 6, 0i64);
                              v210 = sub_180EA50(v209);
                              *&Block[0] = __PAIR64__(v208, LODWORD(v210));
                              sub_145C4C0(v145, "minTurnTimeNom", Block);
                            }
                            if ( *(sub_180ED20(v200 + 6, 2i64) + 8) )
                            {
                              v211 = sub_180ED20(v200 + 6, 2i64);
                              v212 = sub_180EA50(v211);
                              v213 = LODWORD(v212);
                              v214 = sub_180ED20(v200 + 6, 0i64);
                              v215 = sub_180EA50(v214);
                              *&Block[0] = __PAIR64__(v213, LODWORD(v215));
                              sub_145C4C0(v145, "minTurnTimeWep", Block);
                            }
                            v216 = *v200;
                            if ( *v200 )
                            {
                              do
                              {
                                v200 = v216;
                                v216 = v216[1];
                              }
                              while ( v216 );
                            }
                            else
                            {
                              do
                              {
                                v217 = v200;
                                v200 = v200[2];
                              }
                              while ( v217 == *v200 );
                              if ( *v217 == v200 )
                                v200 = v217;
                            }
                            v202 = *(v201 + 8);
                            v203 = *v201;
                          }
                        }
                      }
                      if ( *(sub_180ED20(v182 + 6, 1i64) + 8) )
                      {
                        v188 = sub_180ED20(v182 + 6, 1i64);
                        v189 = sub_180EA50(v188);
                        v190 = LODWORD(v189);
                        v191 = sub_180ED20(v182 + 6, 0i64);
                        v192 = sub_180EA50(v191);
                        *&Block[0] = __PAIR64__(v190, LODWORD(v192));
                        sub_145C4C0(v145, "minClimbTimeNom", Block);
                      }
                      if ( *(sub_180ED20(v182 + 6, 2i64) + 8) )
                      {
                        v193 = sub_180ED20(v182 + 6, 2i64);
                        v194 = sub_180EA50(v193);
                        v195 = LODWORD(v194);
                        v196 = sub_180ED20(v182 + 6, 0i64);
                        v197 = sub_180EA50(v196);
                        *&Block[0] = __PAIR64__(v195, LODWORD(v197));
                        sub_145C4C0(v145, "minClimbTimeWep", Block);
                      }
                      v198 = *v182;
                      if ( *v182 )
                      {
                        do
                        {
                          v182 = v198;
                          v198 = v198[1];
                        }
                        while ( v198 );
                      }
                      else
                      {
                        do
                        {
                          v199 = v182;
                          v182 = v182[2];
                        }
                        while ( v199 == *v182 );
                        if ( *v199 == v182 )
                          v182 = v199;
                      }
                      v184 = *(v183 + 8);
                      v185 = *v183;
                    }
                  }
                }
                if ( *(sub_180ED20(v164 + 6, 1i64) + 8) )
                {
                  v170 = sub_180ED20(v164 + 6, 1i64);
                  v171 = sub_180EA50(v170);
                  v172 = LODWORD(v171);
                  v173 = sub_180ED20(v164 + 6, 0i64);
                  v174 = sub_180EA50(v173);
                  *&Block[0] = __PAIR64__(v172, LODWORD(v174));
                  sub_145C4C0(v145, "maxSpeedNom", Block);
                }
                if ( *(sub_180ED20(v164 + 6, 2i64) + 8) )
                {
                  v175 = sub_180ED20(v164 + 6, 2i64);
                  v176 = sub_180EA50(v175);
                  v177 = LODWORD(v176);
                  v178 = sub_180ED20(v164 + 6, 0i64);
                  v179 = sub_180EA50(v178);
                  *&Block[0] = __PAIR64__(v177, LODWORD(v179));
                  sub_145C4C0(v145, "maxSpeedWep", Block);
                }
                v180 = *v164;
                if ( *v164 )
                {
                  do
                  {
                    v164 = v180;
                    v180 = v180[1];
                  }
                  while ( v180 );
                }
                else
                {
                  do
                  {
                    v181 = v164;
                    v164 = v164[2];
                  }
                  while ( v181 == *v164 );
                  if ( *v181 == v164 )
                    v164 = v181;
                }
                v166 = *(v165 + 8);
                v167 = *v165;
              }
            }
          }
          if ( *(sub_180ED20(v146 + 6, 1i64) + 8) )
          {
            v152 = sub_180ED20(v146 + 6, 1i64);
            v153 = sub_180EA50(v152);
            v154 = LODWORD(v153);
            v155 = sub_180ED20(v146 + 6, 0i64);
            v156 = sub_180EA50(v155);
            *&Block[0] = __PAIR64__(v154, LODWORD(v156));
            sub_145C4C0(v145, "stallSpeed", Block);
          }
          if ( *(sub_180ED20(v146 + 6, 2i64) + 8) )
          {
            v157 = sub_180ED20(v146 + 6, 2i64);
            v158 = sub_180EA50(v157);
            v159 = LODWORD(v158);
            v160 = sub_180ED20(v146 + 6, 0i64);
            v161 = sub_180EA50(v160);
            *&Block[0] = __PAIR64__(v159, LODWORD(v161));
            sub_145C4C0(v145, "stallSpeedLanding", Block);
          }
          v162 = *v146;
          if ( *v146 )
          {
            do
            {
              v146 = v162;
              v162 = v162[1];
            }
            while ( v162 );
          }
          else
          {
            do
            {
              v163 = v146;
              v146 = v146[2];
            }
            while ( v163 == *v146 );
            if ( *v163 == v146 )
              v146 = v163;
          }
          v148 = *(v147 + 8);
          v149 = *v147;
        }
      }
LABEL_308:
      if ( v594 )
        (*(**(&v594 + 1) + 0x40i64))(*(&v594 + 1));
    }
    v30 = FileName;
    goto LABEL_59;
  }
  v31 = _mm_xor_si128(_mm_load_si128(&v600), xmmword_44CB140);
  if ( _mm_testz_si128(v31, v31) )
  {
    v593 = *(LocalUnit + 0x9D0);
    LODWORD(Block[0]) = 0;
    if ( sub_B0ACA0(http_req, Str1) && sub_B09250(http_req) )
    {
      v60 = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(v60[TlsIndex] + 1i64) )
        _dyn_tls_on_demand_init(v60, v57, v58, v59);
      v61 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
      *v638 = 0i64;
      *&v638[8] = v61;
      *&v638[0x10] = 0i64;
      v62 = sub_B092C0(*(LocalUnit_ + 0x4160), v638);
      sub_B093A0(FileName, v62);
      v63 = &szFile;
      if ( FileName[1] )
        v63 = FileName[1];
      v64 = stat64i32(v63, &v660);
      st_mtime = 0;
      if ( !v64 )
        st_mtime = v660.st_mtime;
      if ( LODWORD(Block[0]) == st_mtime && !strcmp(Str1, v62) )
      {
        result = sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
        if ( FileName[1] )
          result = (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
        goto LABEL_338;
      }
      if ( FileName[1] )
        (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
      v57 = *v638;
      if ( *v638 )
        (*(**&v638[8] + 0x40i64))(*&v638[8]);
    }
    v66 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v66[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(v66, v57, v58, v59);
    v67 = *(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
    v68 = *(v67 + 0x160);
    *v638 = &off_44CAF30;
    *&v638[0x10] = v68;
    *&v638[0x18] = 0x4000i64;
    *&v638[0x20] = 0i64;
    *&v638[8] = (*(*v68 + 0x18i64))(v68, 0x4000i64);
    **&v638[8] = 0;
    sub_B09440(v638, "{\n");
    sub_B09440(v638, "  \"valid\": true,\n");
    sub_B094D0(LocalUnit_, v638);
    sub_B09440(v638, ",\n");
    sub_B09440(v638, "  \"mass\": {\n");
    sub_B09B80(v638, "    \"maxFuel\": %f,\n", a3);
    *&v660.st_dev = *(v593 + 0xD8D) - *(v593 + 0xD93);
    sub_B09B80(v638, "    \"noFuel\": %f,\n", a3);
    v660.st_dev = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*(v593 + 0xD8D)));
    sub_B09B80(v638, "    \"total\": %f\n", a3);
    sub_B09440(v638, "  },\n");
    v73 = *(*(LocalUnit_ + 0x11A0) + 0x58i64);
    v74 = *(v73 + 0xB0);
    v75 = *(v73 + 0xA0);
    if ( !*(v67 + 1) )
      _dyn_tls_on_demand_init(v70, v69, v71, v72);
    v76 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    FileName[0] = 0i64;
    FileName[1] = v76;
    *v651.m256_f32 = 0i64;
    if ( v74 )
    {
      v77 = 0xD0 * v74;
      v78 = 0i64;
      do
      {
        v79 = *(v75 + v78 + 0xC0);
        if ( !v79 )
          v79 = &szFile;
        v80 = sub_7AB420(v79);
        if ( v80 >= 0 )
        {
          *&v660.st_dev = v79;
          *&v660.st_nlink = v80;
          sub_B0ACF0(FileName, &v660);
        }
        v78 += 0xD0i64;
      }
      while ( v77 != v78 );
      v81 = v651.m256_f32[0];
    }
    else
    {
      v81 = 0.0;
    }
    sub_B0AD60(FileName, &v660);
    sub_B09440(v638, "  \"dmParts\": [\n");
    if ( v81 != 0.0 )
    {
      v82 = FileName[0];
      sub_B09440(v638, "    {\n");
      sub_B09AE0(v638, "    \"name\": \"%s\",\n", v82);
      sub_B0A540(v638, "    \"id\": %d\n", v82 + 8);
      sub_B09440(v638, "    }");
      if ( LODWORD(v81) != 1 )
      {
        v83 = LODWORD(v81) - 1i64;
        v84 = v82 + 0x18;
        do
        {
          sub_B09440(v638, ",\n");
          sub_B09440(v638, "    {\n");
          sub_B09AE0(v638, "    \"name\": \"%s\",\n", v84 + 0xFFFFFFF8);
          sub_B0A540(v638, "    \"id\": %d\n", v84);
          sub_B09440(v638, "    }");
          v84 += 0x10;
          --v83;
        }
        while ( v83 );
      }
    }
    sub_B09440(v638, &word_4A30321[1]);
    sub_B09440(v638, "  ],\n");
    v88 = **(*(LocalUnit_ + 0x11A0) + 0x110i64);
    v89 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v89[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(v89, v85, v86, v87);
    v90 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    *&v594 = 0i64;
    *(&v594 + 1) = v90;
    *v595 = 0i64;
    v91 = 0xFFFF;
    if ( *(v88 + 8) >= 0 )
      v91 = *(v88 + 8);
    if ( v91 )
    {
      v92 = v91;
      for ( i = 0i64; i != v92; ++i )
      {
        v94 = *(v88 + 0x40);
        v95 = *(v94 + 2 * i);
        if ( *(v94 + v95) )
        {
          *&v660.st_dev = v95 + v94;
          *&v660.st_nlink = i;
          sub_B0ACF0(&v594, &v660);
        }
      }
      v96 = *v595;
    }
    else
    {
      v96 = 0;
    }
    sub_B0ADB0(&v594, &v660);
    sub_B09440(v638, "  \"skeletonNodes\": [\n");
    if ( v96 )
    {
      v97 = v594;
      sub_B09AE0(v638, "    \"%s\"", v594);
      if ( v96 != 1 )
      {
        v98 = v96 - 1i64;
        v99 = (v97 + 0x10);
        do
        {
          sub_B09440(v638, ",\n");
          sub_B09AE0(v638, "    \"%s\"", v99);
          v99 += 0x10;
          --v98;
        }
        while ( v98 );
      }
    }
    sub_B09440(v638, &word_4A30321[1]);
    sub_B09440(v638, "  ],\n");
    v100 = *(game + 0x720);
    if ( v100 )
    {
      if ( *(v100 + 0x88) )
        v101 = *(v100 + 0x78);
      else
        v101 = &szFile;
      sub_4E3940(v100, v101, LocalUnit_);
    }
    v108 = v593;
    v109 = v593[0x759];
    if ( *v109 > 0 )
    {
      v110 = *(v109 + 8);
      if ( v110 )
      {
        sub_B09440(v638, "  \"engine\": {\n");
        v660.st_dev = *(*v110 + 0x178) + 1;
        sub_B0A540(v638, "    \"compressorStageCount\": %d,\n", &v660);
        v660.st_dev = 0x4745E680;
        sub_B09B80(v638, "    \"minManifoldPressure\": %f,\n", a3);
        v111 = *v110;
        v112 = *(*v110 + 0x1BC);
        if ( *(*v110 + 0x221) && v112 > 0 || v112 <= 0xA && (v113 = 0x510, _bittest(&v113, v112)) )
          v114 = *(v111 + 0x19C) * *(v111 + 0x194);
        else
          v114 = *(v111 + 0x194);
        *&v660.st_dev = v114 * *&dword_44CB26C;
        sub_B09B80(v638, "    \"maxManifoldPressure\": %f,\n", a3);
        v660.st_dev = *(*v110 + 0x120);
        sub_B09B80(v638, "    \"minOmega\": %f,\n", a3);
        v660.st_dev = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*(*v110 + 0x124)));
        sub_B09B80(v638, "    \"maxOmega\": %f,\n", a3);
        v115 = v593[0x759];
        v116 = *(v115 + 0xA534);
        if ( v116 >= 0 )
        {
          v117 = *(v115 + 8 * v116 + 0xA4B0);
          v118 = *(v117 + 0x38);
          if ( *(v117 + 0x38) )
          {
            if ( v118 >= 9 )
            {
              v133 = 8i64;
              if ( (v118 & 7) != 0 )
                v133 = v118 & 7;
              v119 = v118 - v133;
              v134 = (v117 + 0xC8);
              si128 = _mm_load_si128(&xmmword_44AD4D0);
              v136 = _mm_load_si128(&xmmword_44AD4E0);
              v137 = 0i64;
              *&a3 = _mm_load_si128(&xmmword_44AD4F0);
              do
              {
                inserted = _mm_insert_epi32(
                             _mm_insert_epi32(
                               _mm_insert_epi32(_mm_cvtsi32_si128(v134[0xFFFFFFF1]), v134[0xFFFFFFF6], 1),
                               v134[0xFFFFFFFB],
                               2),
                             *v134,
                             3);
                *(&v660.st_ino + 2 * v137) = _mm_insert_epi32(
                                               _mm_insert_epi32(
                                                 _mm_insert_epi32(
                                                   _mm_cvtsi32_si128(v134[0xFFFFFFDD]),
                                                   v134[0xFFFFFFE2],
                                                   1),
                                                 v134[0xFFFFFFE7],
                                                 2),
                                               v134[0xFFFFFFEC],
                                               3);
                *(&v660.st_size + v137) = inserted;
                v137 += 8i64;
                v136 = _mm_add_epi64(v136, *&a3);
                si128 = _mm_add_epi64(si128, *&a3);
                v134 += 0x28;
              }
              while ( v119 != v137 );
            }
            else
            {
              v119 = 0i64;
            }
            v139 = (v117 + 0x14 * v119 + 0x3C);
            do
            {
              *(&v660.st_ino + v119++) = *v139;
              v139 += 5;
            }
            while ( v118 != v119 );
            sub_B09B80(v638, "    \"minPitch\": %f,\n", a3);
            sub_B09B80(v638, "    \"maxPitch\": %f,\n", a3);
          }
        }
        if ( *(*v110 + 0x223) )
        {
          v140 = "true";
        }
        else
        {
          v140 = "true";
          if ( !*(*v110 + 0x224) )
            v140 = "false";
        }
        *v597 = v140;
        sub_B09AE0(v638, "    \"coolerControl\": %f\n", a3);
        sub_B09440(v638, "  },\n");
        v108 = v593;
      }
    }
    if ( *(v108 + 0x568E) )
      v141 = 2 - (*(v108 + 0x53F8) == 0);
    else
      v141 = 0;
    v660.st_dev = v141;
    sub_B0A540(v638, "  \"flapsControl\": %d,\n", &v660);
    v142 = "true";
    if ( !*(v108 + 0x568B) )
      v142 = "false";
    *&v660.st_dev = v142;
    sub_B09AE0(v638, "  \"gearControl\": %s\n", &v660);
    if ( byte_4B82158 )
      sub_B0AE00(v638);
    sub_B09440(v638, &word_4A30321[1]);
    sub_B09440(v638, "}\n");
    sub_AF1600(http_req, *&v638[8], *&v638[0x20]);
    if ( v594 )
      (*(**(&v594 + 1) + 0x40i64))(*(&v594 + 1));
    if ( FileName[0] )
      (*(*FileName[1] + 0x40i64))(FileName[1]);
    *v638 = &off_44CAF30;
    v143 = *&v638[8];
    v144 = *&v638[0x10];
    return (*(*v144 + 0x40i64))(v144, v143);
  }
  result = set_fm_commands(http_req, http_req, v600.m128i_i8, LocalUnit, *(LocalUnit + 0x9D0));
  if ( result )
    return result;
  if ( !(v600.m128i_i64[0] ^ 0x7A696C6962617473i64 | v600.m128i_u16[4] ^ 0x65i64) )
  {
    sub_324710(LocalUnit_, Str1);
    v102 = *(LocalUnit_ + 0x99C);
    v103 = *(LocalUnit_ + 0x9A4);
    v104 = LocalUnit_ + 0x9C0;
    v105 = fsqrt((v103 * v103) + (v102 * v102));
    if ( v105 <= *&qword_44A0760 )
    {
      v106 = 0.0;
      v107 = Y;
    }
    else
    {
      v106 = v103 * (Y / v105);
      v107 = (Y / v105) * v102;
    }
    *v613 = v107;
    v613[1] = 0;
    *&v613[2] = v106;
    v614 = 0x3F80000000000000i64;
    v615 = 0;
    v616 = v106;
    v617 = 0;
    v618 = xmmword_44801F0 ^ LODWORD(v107);
    v619 = *v104;
    v620 = *(v104 + 8);
    sub_1573320(air_movement, v613);
    v120 = fsqrt((*&Str1[1] * *&Str1[1]) + ((*(Str1 + 1) * *(Str1 + 1)) + (*Str1 * *Str1)));
    Str1[0] = COERCE_UNSIGNED_INT(v120 * v107);
    *&Str1[1] = v106 * v120;
    v611 = Str1[0];
    v612 = v106 * v120;
    sub_1573580(air_movement, &v611);
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  if ( v600.m128i_i64[0] == 0x66666F656B6174i64 )
  {
    LOBYTE(v33) = 1;
    v34 = sub_5EF690(*(game + 0x410), LocalUnit_, 0i64, v33);
    if ( v34 )
    {
      v35 = *(LocalUnit_ + 0x9D0);
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
      *&v660.st_dev = v43;
      *&v660.st_ino = v42;
      *&v660.st_nlink = v41;
      *&v660.st_gid = COERCE_FLOAT(xmmword_44801F0 ^ LODWORD(v43)) * v42;
      *&v660.st_rdev = (v41 * v41) + (v43 * v43);
      *&v660.st_size = COERCE_FLOAT(LODWORD(v42) ^ xmmword_44801F0) * v41;
      v660.st_atime = LODWORD(v41) | 0x8000000000000000ui64;
      LODWORD(v660.st_mtime) = xmmword_44801F0 ^ LODWORD(v43);
      *(&v660.st_mtime + 1) = (*&dword_4489714 * *&v660.st_gid)
                            + ((*&dword_44CB284 * v43) + ((*(&Str1[1] + 1) + *Str1) * *&dword_44801CC));
      *&v660.st_ctime = (*&v660.st_rdev * *&dword_4489714)
                      + ((v42 * *&dword_44CB284) + ((*&Str1[2] + *(Str1 + 1)) * *&dword_44801CC));
      *(&v660.st_ctime + 1) = (*&v660.st_size * *&dword_4489714)
                            + ((v41 * *&dword_44CB284) + ((*(&Str1[2] + 1) + *&Str1[1]) * *&dword_44801CC));
      LOBYTE(v36) = 1;
      sub_3C8B60(LocalUnit_, 0, &v660.st_mtime + 4, v36, 1);
      *&v638[0x14] = 0i64;
      *&v638[8] = 0;
      *v638 = 0i64;
      *&v638[0xC] = 0x3F800000i64;
      sub_25BDE0(v638, &v660);
      *(v637 + 0xC) = *&v638[0xC];
      v637[0] = *v638;
      sub_1572FC0(v35, v637);
      sub_15731B0(v35);
      v128 = *(v35 + 0x5674) * dword_44A02DC;
      *v608 = v128 * *&v660.st_dev;
      *&v608[1] = *&v660.st_ino * v128;
      *&v608[2] = *&v660.st_nlink * v128;
      sub_1573580(v35, v608);
      sub_159C1B0(v35);
      *(*(game + 0x440) + 0x7FCi64) = 0;
      v131 = sub_159AD90(v35, v129, 0i64);
      *(v35 + 0x12EC) = v131;
      *(v35 + 0x1DC4) = v131;
      *(v35 + 0x5AA4) = v131;
      v132 = *(v35 + 0x57F8);
      if ( v132 )
      {
        if ( v132 == 1 )
        {
          v130 = 0i64;
        }
        else
        {
          v250 = (v35 + 0x13C0);
          v130 = 0i64;
          v251 = (v35 + 0x57FC);
          do
          {
            *v251 = 0x3F800000;
            v250[0x2B6] = 0x3F800000;
            *v250 = 0x3F800000;
            v251[0xA] = 0x3F800000;
            v250[0x2C5] = 0x3F800000;
            v250[0xF] = 0x3F800000;
            v130 += 2i64;
            v251 += 0x14;
            v250 += 0x1E;
          }
          while ( (v132 & 0xFFFFFFFE) != v130 );
        }
        if ( (v132 & 1) != 0 )
        {
          *(v35 + 0x57FC + 0x28 * v130) = 0x3F800000;
          v130 *= 0x3Ci64;
          *(v35 + 0x1E8C + v130 + 0xC) = 0x3F800000;
          *(v35 + 0x13B4 + v130 + 0xC) = 0x3F800000;
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
      LOBYTE(v130) = 1;
      sub_159BDD0(v35, v130);
      if ( Str1[4] )
        sub_1464430(Str1[4]);
    }
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  if ( !(*"land" ^ v600.m128i_i32[0] | (aLand[4] ^ v600.m128i_i8[4])) )
  {
    v121 = *(game + 0x410);
    if ( *(v121 + 0x10) )
    {
      v122 = 0;
      LOBYTE(v33) = 1;
      v123 = sub_5EF690(*(game + 0x410), LocalUnit_, 0i64, v33);
      if ( v123 )
      {
        v124 = *(v121 + 0x10);
        v125 = *v121;
        if ( *(v121 + 0x10) )
        {
          v126 = 1;
          v127 = *v121;
          while ( *v127 != v123 )
          {
            ++v127;
            ++v126;
            if ( v127 >= &v125[v124] )
              goto LABEL_352;
          }
          v122 = v126;
        }
LABEL_352:
        v252 = v122 % v124;
      }
      else
      {
        v125 = *v121;
        v252 = 0i64;
      }
      v273 = v125[v252];
      sub_159C1B0(*(LocalUnit_ + 0x9D0));
      *(&Str1[5] + 4) = 0i64;
      memset(Str1, 0, 0x24);
      *(&Str1[4] + 4) = 0x3F800000i64;
      *&Str1[7] = 0i64;
      v658 = 0;
      v659 = 0xFFFFFFFFFFFFFFFFui64;
      LOBYTE(v274) = 1;
      sub_5E7190(v273, LocalUnit_, Str1, v274);
    }
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  if ( !(v600.m128i_i64[0] ^ 0x476E4F7075746573i64 | *(v600.m128i_i64 + 6) ^ 0x646E756F72476Ei64) )
  {
    v237 = _mm_cvtsi32_si128(*(LocalUnit_ + 0x9C8));
    Str1[0] = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*(LocalUnit_ + 0x9C0))) | 0xC47A000000000000ui64;
    LODWORD(Str1[1]) = _mm_cvtsi128_si32(v237);
    LOBYTE(v33) = 1;
    sub_3C8B60(LocalUnit_, 0, Str1, v33, 1);
    sub_4271B0(LocalUnit_);
    v238 = *(LocalUnit_ + 0x9D0);
    sub_15731B0(v238);
    v610 = 0;
    v609 = 0i64;
    sub_1573580(v238, &v609);
    v239 = v238[0x15FE];
    if ( v239 )
    {
      if ( v239 == 1 )
      {
        v240 = 0i64;
      }
      else
      {
        v253 = v238 + 0x4F0;
        v240 = 0i64;
        v254 = v238 + 0x15FF;
        do
        {
          *v254 = 0;
          v253[0x2B6] = 0;
          *v253 = 0;
          v254[0xA] = 0;
          v253[0x2C5] = 0;
          v253[0xF] = 0;
          v240 += 2i64;
          v254 += 0x14;
          v253 += 0x1E;
        }
        while ( (v239 & 0xFFFFFFFE) != v240 );
      }
      if ( (v239 & 1) != 0 )
      {
        v238[0xA * v240 + 0x15FF] = 0;
        v255 = 0xF * v240;
        v238[v255 + 0x7A6] = 0;
        v238[v255 + 0x4F0] = 0;
      }
    }
    *(*(game + 0x440) + 0x814i64) = 0;
    dword_4AD2F00 = 0;
    dword_4AD2F0C = 0;
    dword_4AD4590 = 0;
    dword_4AD459C = 0;
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  if ( v600.m128i_i64[0] == 0x4D544153746573i64 )
  {
    globalTemperatureVar2 = qword_4A791F0;
    *&globalTemperature = (*&qword_4A791F0 * *&globalTemperatureVar3) / *(&qword_4A791F0 + 1);
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  if ( !(v600.m128i_i64[0] ^ 0x6174536D46746567i64 | *(v600.m128i_i64 + 3) ^ 0x65746174536D46i64) )
  {
    v256 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v256[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(
        v256,
        v600.m128i_i64[0] ^ 0x476E4F7075746573i64 | *(v600.m128i_i64 + 6) ^ 0x646E756F72476Ei64,
        v32,
        v33);
    v257 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    *&v660.st_dev = &off_44CAF30;
    *&v660.st_rdev = v257;
    v660.st_atime = 0x4000i64;
    v660.st_mtime = 0i64;
    *&v660.st_nlink = (*(*v257 + 0x18i64))(v257, 0x4000i64);
    **&v660.st_nlink = 0;
    sub_B09440(&v660, "{\n");
    sub_B09440(&v660, "\"valid\": true,\n");
    Str1[0] = sub_5655B0(game);
    sub_B0BD50(&v660, "\"time\": %f,\n", a3);
    sub_B09440(&v660, "\"values\": [\n");
    Str1[0] = sub_5655B0(game);
    sub_B0BD50(&v660, "%f,\n", a3);
    v258 = (air_movement + 0x910);
    sub_B0BD50(&v660, "%f,\n", a3);
    v259 = *(air_movement + 0x990) - (*(air_movement + 0xA10) + *(air_movement + 0x57C8));
    v260 = *(air_movement + 0x988) - (*(air_movement + 0xA08) + *(air_movement + 0x57C0));
    v261 = *(air_movement + 0x980) - (*(air_movement + 0xA00) + *(air_movement + 0x57B8));
    v262.m128_f32[0] = fsqrt(((v259 * v259) + (v260 * v260)) + (v261 * v261));
    *v638 = v262.m128_i32[0];
    sub_B09B80(&v660, "%f,\n", v638);
    v263 = *(air_movement + 0x910);
    HIDWORD(v264) = HIDWORD(*(air_movement + 0x910));
    *&v264 = fminf(v263, *&dword_4A7920C);
    v265 = Y;
    *FileName = fsqrt(
                  ((*&dword_4A7920C * *&globalTemperature)
                 * ((((((((*&dword_44A0190 * *&v264) + *&dword_44A0194) * *&v264) + *&dword_44A0198) * *&v264)
                    + *&dword_44A019C)
                   * *&v264)
                  + Y))
                / (fmaxf(v263, *&dword_4A7920C) * *&dword_4A791F8))
              * v262.m128_f32[0];
    sub_B09B80(&v660, "%f,\n", FileName);
    v266 = *(air_movement + 0x910);
    v267 = fminf(v266, *&dword_4A7920C);
    v268 = ((((((((*&dword_44A41E4 * v267) + *&dword_44A41E8) * v267) + *&dword_44A41EC) * v267) + *&dword_44A41F0)
           * v267)
          + v265)
         * *(&globalTemperatureVar2 + 1);
    v269 = 1.0 / fsqrt(v268);
    *&v594 = (((v269 * *&dword_44A02D4) * (((v268 * v269) * v269) + *&dword_44A02D0)) * *&dword_44A41F4)
           * v262.m128_f32[0];
    sub_B09B80(&v660, "%f,\n", v264);
    sub_B0BD50(&v660, "%f,\n", v264);
    if ( v262.m128_f32[0] <= *&dword_44A0308 )
    {
      v272 = *(LocalUnit_ + 0x99C);
      v271 = *(LocalUnit_ + 0x9A0);
      v270 = *(LocalUnit_ + 0x9A4);
    }
    else
    {
      v270 = v259 * (v265 / v262.m128_f32[0]);
      v271 = v260 * (v265 / v262.m128_f32[0]);
      v272 = (v265 / v262.m128_f32[0]) * v261;
    }
    v282 = (*(LocalUnit_ + 0x9AC) * v272) - (*(LocalUnit_ + 0x9A8) * v271);
    v283 = (*(LocalUnit_ + 0x9A8) * v270) - (*(LocalUnit_ + 0x9B0) * v272);
    v284 = (((*(LocalUnit_ + 0x9B0) * v271) - (*(LocalUnit_ + 0x9AC) * v270)) * v271) - (v283 * v272);
    v285 = (v272 * v282) - (((*(LocalUnit_ + 0x9B0) * v271) - (*(LocalUnit_ + 0x9AC) * v270)) * v270);
    v286 = (v283 * v270) - (v282 * v271);
    v287.m128i_i64[0] = dword_4A791FC;
    v288 = *(air_movement + 0x9A8);
    v289 = v288 * v284;
    v290 = *&dword_4A791FC + *(air_movement + 0x9A0);
    v291 = v290 * v285;
    v292 = *(air_movement + 0x998);
    *v597 = (((v292 * v286) + v289) + v291) / *&dword_4A791FC;
    sub_B09B80(&v660, "%f,\n", v597);
    sub_B0BD50(&v660, "%f,\n", *v287.m128i_i64);
    v293 = *(air_movement + 0x9F0);
    v294 = *&dword_449F1A8;
    v295 = *&dword_44801E8;
    LODWORD(Block[0]) = COERCE_UNSIGNED_INT(
                          asinf(
                            fminf(
                              fmaxf(
                                COERCE_FLOAT(_mm_cmplt_ss(dword_449F1A8, v262).m128_u32[0] & COERCE_UNSIGNED_INT(
                                                                                               v293
                                                                                             * (v265 / v262.m128_f32[0]))),
                                *&dword_44801E8),
                              v265))) ^ xmmword_44801F0;
    sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
    if ( v262.m128_f32[0] > v294 )
    {
      v297 = *(air_movement + 0x9F8);
      v296 = v297 * (v265 / v262.m128_f32[0]);
    }
    else
    {
      v296 = 0.0;
    }
    *v603 = asinf(fminf(fmaxf(v296, v295), v265));
    sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
    sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
    sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
    sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
    if ( *(air_movement + 0x568E) )
    {
      LODWORD(Str1[0]) = *(air_movement + 0x12EC);
      sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
    }
    else
    {
      sub_B09440(&v660, "null,\n");
    }
    if ( *(air_movement + 0x568B) )
    {
      v299 = 0;
      if ( (*(air_movement + 0x12DC) * *&dword_44A0344) > 0 )
        v299 = (*(air_movement + 0x12DC) * *&dword_44A0344);
      v300 = 0xFF;
      if ( v299 < 0xFF )
        v300 = v299;
      *Str1 = v300 * *&dword_44A4410;
      sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
    }
    else
    {
      sub_B09440(&v660, "null,\n");
    }
    if ( *(air_movement + 0x5695) )
    {
      v301 = 0;
      if ( (*(air_movement + 0x12E4) * *&dword_44A0344) > 0 )
        v301 = (*(air_movement + 0x12E4) * *&dword_44A0344);
      v302 = 0xFF;
      if ( v301 < 0xFF )
        v302 = v301;
      *Str1 = v302 * *&dword_44A4410;
      sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
    }
    else
    {
      sub_B09440(&v660, "null,\n");
    }
    v303 = *(air_movement + 0x3AC8);
    if ( *v303 <= 0 )
      goto LABEL_435;
    v304 = *(v303 + 8);
    LODWORD(Str1[0]) = *(v304 + 0x2F);
    sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
    LODWORD(Str1[0]) = *(v304 + 0x33) + 1;
    sub_B0A540(&v660, "%f,\n", *v287.m128i_i64);
    if ( (*v304)[0x223] || (*v304)[0x22A] )
    {
      LODWORD(Str1[0]) = *(v304 + 0x2D);
      sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
    }
    else
    {
      sub_B09440(&v660, "null,\n");
    }
    v305 = *v304;
    if ( !(*v304)[0x225] && (*(v305 + 0x224) || *(v305 + 0x22B)) )
    {
      LODWORD(Str1[0]) = *(v304 + 0x2E);
      sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
    }
    else
    {
      sub_B09440(&v660, "null,\n");
    }
    if ( (*v304)[0x226] )
    {
      LODWORD(Str1[0]) = *(v304 + 0x2D);
      sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
    }
    else
    {
      sub_B09440(&v660, "null,\n");
    }
    v306 = **v304;
    if ( v306 <= 5 && (v307 = 0x23, _bittest(&v307, v306)) )
    {
      v308 = *&dword_44CB26C;
      *Str1 = *(v304 + 0x50) * *&dword_44CB26C;
      sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
      *Str1 = v308 * *(v304 + 0x51);
      sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
    }
    else
    {
      sub_B09440(&v660, &unk_4A2DBCC);
    }
    LODWORD(Str1[0]) = *(v304 + 0x10);
    sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
    v309 = **v304;
    if ( v309 >= 2 )
    {
      if ( v309 != 5 )
        goto LABEL_404;
    }
    else if ( *(*v304 + 0x5D) != 3 )
    {
LABEL_404:
      sub_B09440(&v660, "null,\n");
      goto LABEL_407;
    }
    LODWORD(Str1[0]) = *(v304 + 0x17);
    sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
LABEL_407:
    LODWORD(Str1[0]) = *(v304 + 0xB);
    sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
    v310 = fmaxf(0.0, (*(v304 + 0x4F) + *(v304 + 0x4E)) * *(v304 + 0x10));
    *&v598 = v310;
    if ( v306 <= 5 && (v311 = 0x23, _bittest(&v311, v306)) )
      sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
    else
      sub_B09440(&v660, "null,\n");
    v315 = *(air_movement + 0x9E8);
    sub_1563360(air_movement, v312, v313, v314, &xmmword_4B67A14);
    v316 = *(air_movement + 0x3AC8);
    v287.m128i_i64[0] = *(v316 + 0xA694);
    *v287.m128i_i32 = ((*v287.m128i_i32 + *(v304 + 0xA5)) * *&v315) * ((*v287.m128i_i32 + *(v304 + 0xA5)) * *&v315);
    LODWORD(Str1[0]) = fsqrt(
                         ((((*(v316 + 0xA69C) + *(v304 + 0xA7)) * *&v315)
                         * ((*(v316 + 0xA69C) + *(v304 + 0xA7)) * *&v315))
                        + (((*(v316 + 0xA698) + *(v304 + 0xA6)) * *&v315)
                         * ((*(v316 + 0xA698) + *(v304 + 0xA6)) * *&v315)))
                       + *v287.m128i_i32);
    sub_B09B80(&v660, "%f,\n", Str1);
    v317 = *(air_movement + 0x3AC8);
    v318 = *(v317 + 0xA534);
    if ( v318 >= 0 && (v319 = *(v317 + 8 * v318 + 0xA4B0), v320 = *(v319 + 0x38), *(v319 + 0x38)) )
    {
      if ( v320 >= 9 )
      {
        v326 = 8i64;
        if ( (v320 & 7) != 0 )
          v326 = v320 & 7;
        v321 = v320 - v326;
        v327 = (v319 + 0xC8);
        v328 = _mm_load_si128(&xmmword_44AD4D0);
        v329 = _mm_load_si128(&xmmword_44AD4E0);
        v330 = 0i64;
        v287 = _mm_load_si128(&xmmword_44AD4F0);
        do
        {
          v331 = _mm_insert_epi32(
                   _mm_insert_epi32(
                     _mm_insert_epi32(_mm_cvtsi32_si128(v327[0xFFFFFFF1]), v327[0xFFFFFFF6], 1),
                     v327[0xFFFFFFFB],
                     2),
                   *v327,
                   3);
          *(&Str1[v330 / 2] + 4) = _mm_insert_epi32(
                                     _mm_insert_epi32(
                                       _mm_insert_epi32(_mm_cvtsi32_si128(v327[0xFFFFFFDD]), v327[0xFFFFFFE2], 1),
                                       v327[0xFFFFFFE7],
                                       2),
                                     v327[0xFFFFFFEC],
                                     3);
          *(&Str1[v330 / 2 + 2] + 4) = v331;
          v330 += 8i64;
          v329 = _mm_add_epi64(v329, v287);
          v328 = _mm_add_epi64(v328, v287);
          v327 += 0x28;
        }
        while ( v321 != v330 );
      }
      else
      {
        v321 = 0i64;
      }
      v332 = (v319 + 0x14 * v321 + 0x3C);
      do
      {
        *(Str1 + ++v321) = *v332;
        v332 += 5;
      }
      while ( v320 != v321 );
      v591[0] = *(*(v317 + 8i64 * HIDWORD(Str1[0]) + 0x70A0) + 0x40i64);
      sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
    }
    else
    {
      sub_B09440(&v660, "null,\n");
    }
    if ( v306 <= 5u && (v333 = 0x23, _bittest(&v333, v306)) )
    {
      v334 = 0.0;
      if ( v310 > *&dword_449F1A8 )
      {
        v335 = *(air_movement + 0x3AC8);
        v287.m128i_i64[0] = *(v335 + 0xA698);
        *v287.m128i_i32 = (*v287.m128i_i32 * *v287.m128i_i32) + (*(v335 + 0xA694) * *(v335 + 0xA694));
        v334 = fmaxf(fsqrt((*(v335 + 0xA69C) * *(v335 + 0xA69C)) + *v287.m128i_i32) * v262.m128_f32[0], 0.0) / v310;
      }
      *v591 = v334;
      sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
    }
    else
    {
      sub_B09440(&v660, "null,\n");
    }
    v591[0] = *(v304 + 0xB2);
    sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
    v591[0] = *(v304 + 0xB3);
    sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
LABEL_435:
    v336 = *v258;
    v337 = fminf(v336, *&dword_4A7920C);
    *Str1 = ((((((((*&dword_44A41E4 * v337) + *&dword_44A41E8) * v337) + *&dword_44A41EC) * v337) + *&dword_44A41F0)
            * v337)
           + v265)
          * *(&globalTemperatureVar2 + 1);
    sub_B09B80(&v660, "%f,\n", *v287.m128i_i64);
    v338 = *v258;
    v339 = fminf(v338, *&dword_4A7920C);
    *Str1 = ((*&dword_4A7920C * *&globalTemperatureVar2)
           * ((((((((*&dword_44CB270 * v339) + *&dword_44CB274) * v339) + *&dword_44CB278) * v339) + *&dword_44CB27C)
             * v339)
            + v265))
          / fmaxf(v338, *&dword_4A7920C);
    sub_B09B80(&v660, "%f\n", Str1);
    sub_B09440(&v660, "]\n");
    sub_B09440(&v660, "}\n");
LABEL_436:
    v324 = *&v660.st_nlink;
    sub_AF1600(http_req, *&v660.st_nlink, v660.st_mtime);
    v325 = *&v660.st_rdev;
    return (*(*v325 + 0x40i64))(v325, v324);
  }
  v241 = _mm_or_si128(
           _mm_xor_si128(_mm_load_si128(&v600), xmmword_44CB160),
           _mm_xor_si128(_mm_loadu_si128(&v600.m128i_i8[5]), xmmword_44CB150));
  if ( _mm_testz_si128(v241, v241) )
  {
    *v638 = 0;
    LOBYTE(FileName[0]) = 0;
    if ( !sub_B0A980(http_req, "flagNum") )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    if ( !sub_B0BDF0(http_req, "value", FileName) )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    v277 = *(game + 0x720);
    if ( !v277 )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    v278 = *(v277 + 0x6C);
    v279 = v278 & ~(1 << v638[0]);
    v280 = ((1 << v638[0]) | v278);
    v281 = v279;
    if ( LOBYTE(FileName[0]) )
      v281 = v280;
    *(v277 + 0x6C) = v281;
LABEL_418:
    v322 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v322[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(v322, v281, v275, v276);
    v323 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    Str1[0] = &off_44CAF30;
    Str1[2] = v323;
    Str1[3] = 0x20i64;
    Str1[4] = 0i64;
    Str1[1] = (*(*v323 + 0x18i64))(v323, 0x20i64);
    *Str1[1] = 0;
    *&v660.st_dev = sub_5655B0(game);
    sub_B0BD50(Str1, "{ \"time\": %f }", a3);
    v324 = Str1[1];
    sub_AF1600(http_req, Str1[1], Str1[4]);
    v325 = Str1[2];
    return (*(*v325 + 0x40i64))(v325, v324);
  }
  v242 = _mm_or_si128(
           _mm_xor_si128(_mm_load_si128(&v600), xmmword_44CB180),
           _mm_xor_si128(_mm_loadu_si128(&v600.m128i_i8[0xA]), xmmword_44CB170));
  if ( _mm_testz_si128(v242, v242) )
  {
    *v638 = 0xFFFFFFFF;
    if ( !sub_B0A980(http_req, "id") )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    v298 = *(game + 0x720);
    if ( !v298 )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    *(v298 + 0x70) = *v638;
    goto LABEL_418;
  }
  v243 = _mm_or_si128(
           _mm_xor_si128(_mm_load_si128(&v600), xmmword_44CB1A0),
           _mm_xor_si128(_mm_loadl_epi64(&v601), xmmword_44CB190));
  if ( _mm_testz_si128(v243, v243) )
  {
    *v638 = 0xFFFFFFFF;
    if ( !sub_B0A980(http_req, "id") )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    dword_4A79158 = 0x41C64E6D * dword_4A79158 + 0x3039;
    sub_3E8390(LocalUnit_, *v638, HIWORD(dword_4A79158) & 0x7FFF, 0i64);
    goto LABEL_418;
  }
  v244 = _mm_or_si128(
           _mm_xor_si128(_mm_load_si128(&v600), xmmword_44CB1B0),
           _mm_xor_si128(_mm_loadl_epi64(&v601), xmmword_44CB190));
  if ( _mm_testz_si128(v244, v244) )
  {
    *v638 = 0xFFFFFFFF;
    LODWORD(FileName[0]) = 0;
    if ( !sub_B0A980(http_req, "id") || !sub_B0A8C0(http_req) )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    goto LABEL_418;
  }
  v245 = _mm_or_si128(
           _mm_xor_si128(_mm_load_si128(&v600), xmmword_44CB1D0),
           _mm_xor_si128(_mm_loadu_si128(&v600.m128i_i8[0xE]), xmmword_44CB1C0));
  if ( _mm_testz_si128(v245, v245) )
  {
    if ( !sub_B0BE60(http_req, Str1) )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    v340 = *(game + 0x720);
    if ( !v340 )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    sub_4E3940(v340, Str1, LocalUnit_);
    v344 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v344[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(v344, v341, v342, v343);
    v345 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    *&v660.st_dev = &off_44CAF30;
    *&v660.st_rdev = v345;
    v660.st_atime = 0x20i64;
    v660.st_mtime = 0i64;
    *&v660.st_nlink = (*(*v345 + 0x18i64))(v345, 0x20i64);
    **&v660.st_nlink = 0;
    *v638 = sub_5655B0(game);
    sub_B0BD50(&v660, "{ \"time\": %f }", a3);
    goto LABEL_436;
  }
  if ( !(*"repair" ^ v600.m128i_i32[0] | *"air" ^ *(v600.m128i_i32 + 3)) )
  {
    sub_3DFC50(LocalUnit_);
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  if ( !(*"rearm" ^ v600.m128i_i32[0] | (*"m" ^ v600.m128i_i16[2])) )
  {
    sub_37A690(LocalUnit_);
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  v246 = _mm_or_si128(
           _mm_xor_si128(_mm_load_si128(&v600), xmmword_44CB1F0),
           _mm_xor_si128(_mm_loadu_si128(&v600.m128i_i8[7]), xmmword_44CB1E0));
  if ( _mm_testz_si128(v246, v246) )
  {
    v346 = *(air_movement + 0x3AC8);
    v347 = *v346;
    if ( *v346 > 0 )
    {
      v348 = 0i64;
      v349 = xmmword_449AF40;
      do
      {
        v350 = *&v346[2 * v348 + 2];
        if ( !*(*v350 + 1i64) )
        {
          Str1[0] = 0x100000000i64;
          LODWORD(Str1[1]) = *(v350 + 0xBC);
          HIDWORD(Str1[1]) = *(v350 + 0x144);
          LODWORD(Str1[2]) = *(v350 + 0x40);
          BYTE4(Str1[2]) = 0;
          v351 = *(air_movement + 0x910);
          *&Str1[3] = v351;
          v352 = *(air_movement + 0x9E8);
          HIDWORD(Str1[3]) = LODWORD(v352) & v349;
          LODWORD(Str1[4]) = *(v350 + 0xB4);
          HIDWORD(Str1[4]) = *(v350 + 0x9C);
          LODWORD(Str1[5]) = *(v350 + 0x70);
          *(v350 + 0x2C8) = sub_15F2660(v346, v348, air_movement, Str1);
          LODWORD(Str1[0]) = 1;
          HIDWORD(Str1[4]) = *(v350 + 0x94);
          *(v350 + 0x2CC) = sub_15F2660(*(air_movement + 0x3AC8), v348, air_movement, Str1);
          v346 = *(air_movement + 0x3AC8);
          v347 = *v346;
        }
        ++v348;
      }
      while ( v348 < v347 );
    }
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  if ( !(v600.m128i_i64[0] ^ 0x746165687265766Fi64 | v600.m128i_u32[2] ^ 0x776F4Ei64) )
  {
    v353 = *(air_movement + 0x3AC8);
    if ( *v353 > 0 )
    {
      v354 = *&dword_44CB268;
      v355 = 0i64;
      do
      {
        v356 = *&v353[2 * v355 + 2];
        if ( !*(*v356 + 1i64) )
        {
          if ( *(*v356 + 0x214i64) )
            v357 = sub_1638430(v356);
          else
            v357 = sub_1638740(v356);
          if ( v357 < v354 )
            sub_1638070(v356, 0i64);
          if ( sub_16385C0(v356) < v354 )
          {
            LOBYTE(v358) = 1;
            sub_1638070(v356, v358);
          }
        }
        ++v355;
        v353 = *(air_movement + 0x3AC8);
      }
      while ( v355 < *v353 );
    }
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  if ( !(v600.m128i_i64[0] ^ 0x655468636E75616Ci64 | *(v600.m128i_i64 + 3) ^ 0x7473655468636Ei64) )
  {
    v585 = 0;
    if ( !sub_B0BDF0(http_req, "flightTest", &v585) || !sub_B09200(http_req, "test", v603) )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    v584 = 1;
    sub_B0BDF0(http_req, "repair", &v584);
    v359 = *(air_movement + 0x364C) / *(air_movement + 0x3654);
    if ( !(*"stall" ^ *v603 | (*"l" ^ *&v603[4])) )
    {
      if ( !process_altitude_data(http_req, v597, Block, &v598) )
        return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
      v392 = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(v392[TlsIndex] + 1i64) )
        _dyn_tls_on_demand_init(v392, v389, v390, v391);
      v393 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
      *&v594 = &off_44CAF30;
      *v595 = v393;
      *&v595[8] = 0x1000i64;
      *&v595[0x10] = 0i64;
      *(&v594 + 1) = (*(*v393 + 0x18i64))(v393, 0x1000i64);
      **(&v594 + 1) = 0;
      sub_B09440(&v594, "[");
      if ( !v585 )
      {
        if ( v584 )
          sub_3DFC50(LocalUnit_);
        v591[0] = 0xBF800000;
        v587 = -1.0;
        v586 = -1.0;
        v588 = -1.0;
        v589 = -1.0;
        v590 = -1.0;
        v592 = *v597;
        v470 = _mm_loadu_si128((&xmmword_45183C8 + 0xC));
        *(&Str1[3] + 4) = v470;
        v471 = *&xmmword_45183C8;
        *&Str1[2] = xmmword_45183C8;
        *Str1 = xmmword_45183B8;
        *(&v660.st_atime + 4) = v470;
        *&v660.st_rdev = xmmword_45183C8;
        *&v660.st_dev = xmmword_45183B8;
        *&v638[0x1C] = v470;
        *&v638[0x10] = xmmword_45183C8;
        *v638 = xmmword_45183B8;
        *&v651.m256_f32[3] = v470;
        *v651.m256_f32 = xmmword_45183C8;
        *FileName = xmmword_45183B8;
        if ( *v597 <= *Block )
        {
          v472 = dword_44A02DC;
          do
          {
            v473 = qword_4B8B948;
            if ( qword_4B8B948 )
              *(v473 + 0x70) = timeGetTime();
            *&v474 = LODWORD(v592);
            if ( v592 > *v597 )
              sub_B09440(&v594, ",\n");
            LOBYTE(v581) = 0;
            v475 = sub_161BE70(
                     air_movement,
                     &xmmword_4B67A14,
                     &xmmword_4B67CA0,
                     v396,
                     0x3F800000,
                     v581,
                     0,
                     0x40400000,
                     0,
                     &v586,
                     &v589,
                     Str1);
            if ( v475 )
            {
              if ( !LOBYTE(v660.st_nlink) )
              {
                *(&v660.st_atime + 4) = *(&Str1[3] + 4);
                *&v660.st_rdev = _mm_load_si128(&Str1[2]);
                *&v660.st_dev = *Str1;
              }
              if ( !v638[8] )
              {
                *&v638[0x1C] = *(&Str1[3] + 4);
                *&v638[0x10] = _mm_load_si128(&Str1[2]);
                *v638 = *Str1;
              }
              LOBYTE(v578) = 0;
              v471 = v474;
              sub_161CA40(air_movement, &xmmword_4B67A14, v476, v477, v578, 0, 0, v589 * v472, 0, v591, &v660);
            }
            LOBYTE(v582) = 0;
            v480 = sub_161BE70(
                     air_movement,
                     &xmmword_4B67A14,
                     &xmmword_4B67CA0,
                     v477,
                     0x3F800000,
                     v582,
                     0,
                     0x40400000,
                     0,
                     &v588,
                     &v590,
                     v638);
            if ( v480 )
            {
              if ( !LOBYTE(FileName[1]) )
              {
                *&v651.m256_f32[3] = *&v638[0x1C];
                *v651.m256_f32 = _mm_load_si128(&v638[0x10]);
                *FileName = *v638;
              }
              LOBYTE(v579) = 0;
              v471 = v474;
              sub_161CA40(
                air_movement,
                &xmmword_4B67A14,
                v478,
                v479,
                v579,
                0x3F800000,
                0x3F800000,
                v590 * v472,
                0,
                &v587,
                FileName);
            }
            sub_B09B80(&v594, "[%f, ", v471);
            if ( v475 )
              sub_B09B80(&v594, "%f, ", v471);
            else
              sub_B09440(&v594, "null, ");
            if ( v480 )
              sub_B09B80(&v594, "%f]", v471);
            else
              sub_B09440(&v594, "null]");
            v592 = *&v474 + *&v598;
          }
          while ( (*&v474 + *&v598) <= *Block );
        }
        goto LABEL_744;
      }
      *v638 = air_movement;
      *&v638[8] = v359;
      v397 = (v584 << 6) | 0x1BF;
      *&v638[0x18] = v397;
      *&v638[0x1C] = v359;
      *&v638[0x20] = 0;
      *&v638[0x10] = &off_4587520;
      memset(&v639[4], 0, 0x34);
      memset(v640 + 4, 0, 0x30);
      memset(&v640[7] + 4, 0, 0x28);
      *&v638[0x28] = 0i64;
      *&v638[0x38] = 0x3CA3D70A40A00000i64;
      *v639 = 0x4E6E6B28;
      *&v639[8] = 0x424000003ECCCCCDi64;
      *&v639[0x18] = 0x3E4CCCCD;
      *&v639[0x20] = 0x4E6E6B28;
      *&v639[0x2C] = 0x42400000;
      *&v639[0x38] = 0x3DA3D70A3F000000i64;
      LODWORD(v640[0]) = 0x4E6E6B28;
      v640[1] = 0x424000003CA3D70Ai64;
      v640[3] = 0x4240000040800000i64;
      v640[5] = 0x3F8000003E4CCCCDi64;
      *(&v640[6] + 4) = 0x424000003CA3D70Ai64;
      *(&v640[8] + 4) = 0x3F8000003E99999Ai64;
      *&v638[0x24] = 0x43960000;
      LODWORD(v640[0xD]) = 1;
      v632[0] = Str1;
      v632[1] = 0x100i64;
      sub_B0C000(v636, v394, v395, v396, v638, v632);
      FileName[0] = air_movement;
      *&FileName[1] = v359;
      LODWORD(v651.m256_f32[2]) = v397;
      *&v651.m256_f32[3] = LODWORD(v359);
      *v651.m256_f32 = &off_4587520;
      *&v651.m256_f32[6] = 0x3F8000003F800000i64;
      *&v652 = 0i64;
      memset(&v653[4], 0, 0x34);
      memset(v654 + 4, 0, 0x30);
      memset(&v654[7] + 4, 0, 0x28);
      *(&v652 + 1) = 0x3CA3D70A40A00000i64;
      *v653 = 0x4E6E6B28;
      *&v653[8] = 0x424000003ECCCCCDi64;
      *&v653[0x18] = 0x3E4CCCCD;
      *&v653[0x20] = 0x4E6E6B28;
      *&v653[0x2C] = 0x42400000;
      *&v653[0x38] = 0x3DA3D70A3F000000i64;
      LODWORD(v654[0]) = 0x4E6E6B28;
      v654[1] = 0x424000003CA3D70Ai64;
      v654[3] = 0x4240000040800000i64;
      v654[5] = 0x3F8000003E4CCCCDi64;
      *(&v654[6] + 4) = 0x424000003CA3D70Ai64;
      *(&v654[8] + 4) = 0x3F8000003E99999Ai64;
      v651.m256_f32[5] = 300.0;
      LODWORD(v654[0xD]) = 1;
      v631[0] = &v660;
      v631[1] = 0x100i64;
      v369 = v649;
      sub_B0C000(v649, v398, v399, v400, FileName, v631);
      v373 = v636;
      goto LABEL_512;
    }
    if ( *"maxSpeed" ^ *v603 | (aMaxspeed[8] ^ v603[8]) )
    {
      if ( !(*v603 ^ 0x626D696C436E696Di64 | *&v603[5] ^ 0x656D6954626D69i64) )
      {
        if ( !process_altitude_data(http_req, &v587, &v586, &v588) )
          return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
        v430 = NtCurrentTeb()->ThreadLocalStoragePointer;
        if ( !*(v430[TlsIndex] + 1i64) )
          _dyn_tls_on_demand_init(v430, v427, v428, v429);
        v431 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
        *&v594 = &off_44CAF30;
        *v595 = v431;
        *&v595[8] = 0x1000i64;
        *&v595[0x10] = 0i64;
        *(&v594 + 1) = (*(*v431 + 0x18i64))(v431, 0x1000i64);
        **(&v594 + 1) = 0;
        sub_B09440(&v594, "[");
        v589 = 0.0;
        if ( sub_B0A980(http_req, "speedCount") )
        {
          *&Block[0] = 0i64;
          *(&Block[0] + 1) = off_4B678C0;
          *&Block[1] = 0i64;
          *&v598 = 0i64;
          *(&v598 + 1) = off_4B678C0;
          v599 = 0i64;
          v590 = 0.0;
          if ( v589 != 0.0 )
          {
            do
            {
              sub_5AF370(Str1, 8i64, "alt%d", &v590);
              v433 = &szFile;
              if ( LODWORD(Str1[2]) )
                v433 = Str1[0];
              if ( sub_B0A5E0(http_req, v433) )
              {
                sub_5AF370(&v660, 0x10i64, "speedType%d", &v590);
                v434 = &szFile;
                if ( v660.st_rdev )
                  v434 = *&v660.st_dev;
                if ( sub_B0A980(http_req, v434) )
                {
                  sub_5AF370(v638, 0x10i64, "speedMax%d", &v590);
                  v435 = &szFile;
                  if ( *&v638[0x10] )
                    v435 = *v638;
                  if ( sub_B0A5E0(http_req, v435) )
                  {
                    sub_5AF370(FileName, 0x10i64, "speedWEP%d", &v590);
                    v436 = &szFile;
                    if ( LODWORD(v651.m256_f32[0]) )
                      v436 = FileName[0];
                    v437 = sub_B0A5E0(http_req, v436);
                    if ( FileName[0] )
                      (*(*FileName[1] + 0x40i64))(FileName[1]);
                  }
                  else
                  {
                    v437 = 0;
                  }
                  if ( *v638 )
                    (*(**&v638[8] + 0x40i64))(*&v638[8]);
                }
                else
                {
                  v437 = 0;
                }
                if ( *&v660.st_dev )
                  (*(**&v660.st_nlink + 0x40i64))(*&v660.st_nlink);
              }
              else
              {
                v437 = 0;
              }
              if ( Str1[0] )
                (*(*Str1[1] + 0x40i64))(Str1[1]);
              if ( v437 )
              {
                v591[0] = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*v597));
                v591[1] = *&v597[4];
                sub_B0C610(Block, v597);
                sub_B0C610(&v598, v591);
              }
              ++LODWORD(v590);
            }
            while ( LODWORD(v590) < LODWORD(v589) );
          }
          if ( v585 )
          {
            memset(&v597[4], 0, 0x20);
            *v597 = 0xFFFFFFFF;
            *&v597[0xC] = 0x3F800000;
            v482 = v584;
            sub_1543D60(Str1, air_movement, v432, v597, Block, v584);
            v628[0] = v638;
            v628[1] = 0x100i64;
            sub_B0C680(v647, v483, v484, v485, Str1, v628);
            *&v597[4] = 1;
            sub_1543D60(&v660, air_movement, v486, v597, &v598, v482);
            v627[0] = FileName;
            v627[1] = 0x100i64;
            sub_B0C680(v648, v487, v488, v489, &v660, v627);
            sub_B0C160(v647, v648, &v594);
            sub_B0C890(&v660);
            sub_B0C890(Str1);
          }
          else
          {
            if ( v584 )
              sub_3DFC50(LocalUnit_);
            v510 = v587;
            *(&Str1[3] + 4) = *(&xmmword_45183C8 + 0xC);
            *&Str1[2] = xmmword_45183C8;
            *Str1 = xmmword_45183B8;
            v511 = v586;
            v512 = 0;
            if ( (Y + v586) > v587 )
            {
              v593 = (air_movement + 0x51B0);
              v513 = Block[1];
              v514 = *&Block[0];
              v604 = *&Block[0] - 0xCi64;
              v515 = *&dword_4489714;
              v512 = 0;
              v516 = Y;
              v517 = dword_44A0608;
              v518 = 0.0;
              v519 = *&dword_4489714;
              v520 = 0;
              v521 = 0.0;
              while ( 1 )
              {
                v523 = v520 + 1;
                if ( v513 > v520 + 1 )
                  v523 = v513;
                v524 = v523 - 1;
                while ( v524 != v520 )
                {
                  v525 = v520++;
                  if ( v519 <= *(v514 + 0xCi64 * v525) )
                    goto LABEL_673;
                }
                v525 = v524;
LABEL_673:
                v526 = v525 & (v525 >> 0x1F);
                v527 = (v604 + 0xCi64 * v525);
                while ( v525 > 0 )
                {
                  v520 = v525;
                  v528 = v519 < *v527;
                  --v525;
                  v527 += 0xFFFFFFFD;
                  if ( !v528 )
                    goto LABEL_678;
                }
                v520 = v526;
LABEL_678:
                v529 = v513 ? *(v514 + 0xCi64 * v520 + 4) : 0i64;
                v530 = sub_154D270(v526, v527, v529);
                sub_B0C8E0(v593, &v660);
                v660.st_dev = 0;
                LOBYTE(v577) = 0;
                if ( !sub_161C890(
                        air_movement,
                        &xmmword_4B67A14,
                        v531,
                        v532,
                        v577,
                        *&v660.st_ino,
                        0x3F800000,
                        LODWORD(v530),
                        0,
                        &v660,
                        Str1) )
                  break;
                v533 = v519 - v518;
                v534 = (v519 - v518) / *&v660.st_dev;
                if ( v519 > v510 )
                {
                  if ( v533 > *&dword_449F1A8 || (v535 = 0.0, v533 < *&dword_449F1AC) )
                    v535 = (v510 - v518) / v533;
                  v536 = v512++;
                  v536 *= 3i64;
                  v521 = v521 + (v535 * v534);
                  *&v638[4 * v536] = v510;
                  *&v638[4 * v536 + 8] = v521;
                  v638[4 * v536 + 4] = 1;
                  v510 = v510 + v588;
                }
                v537 = v517;
                if ( !v513 || (v537 = *(v514 + 0xCi64 * v520) - v519, v522 = v515, v537 > *&dword_44878D0) )
                  v522 = fminf(v537 + v516, v515);
                v521 = v521 + v534;
                v511 = v586;
                v518 = v519;
                v519 = v522 + v519;
                if ( v510 >= (v586 + v516) )
                  goto LABEL_700;
              }
              v511 = v586;
            }
LABEL_700:
            if ( v510 <= v511 && v512 <= 0xFF )
            {
              v545 = v588;
              v546 = v512;
              v547 = &v638[0xC * v512 + 4];
              do
              {
                v547[0xFFFFFFFF] = v510;
                *v547 = 0;
                v510 = v510 + v545;
                if ( v510 > v511 )
                  break;
                v547 += 3;
                v528 = v546++ < 0xFF;
              }
              while ( v528 );
            }
            v548 = v587;
            *(&v660.st_atime + 4) = *(&xmmword_45183C8 + 0xC);
            *&v660.st_rdev = xmmword_45183C8;
            *&v660.st_dev = xmmword_45183B8;
            v549 = 0;
            if ( (Y + v511) > v587 )
            {
              v593 = (air_movement + 0x51B0);
              v550 = v599;
              v551 = v598;
              v604 = v598 - 0xC;
              v552 = *&dword_4489714;
              v549 = 0;
              v553 = Y;
              v554 = dword_44A0608;
              v555 = 0.0;
              v556 = 0;
              v557 = *&dword_4489714;
              v558 = 0.0;
              while ( 1 )
              {
                v560 = v556 + 1;
                if ( v550 > v556 + 1 )
                  v560 = v550;
                v561 = v560 - 1;
                while ( v561 != v556 )
                {
                  v562 = v556++;
                  if ( v557 <= *(v551 + 0xCi64 * v562) )
                    goto LABEL_716;
                }
                v562 = v561;
LABEL_716:
                v563 = v562 & (v562 >> 0x1F);
                v564 = (v604 + 0xCi64 * v562);
                while ( v562 > 0 )
                {
                  v556 = v562;
                  v528 = v557 < *v564;
                  --v562;
                  v564 += 0xFFFFFFFD;
                  if ( !v528 )
                    goto LABEL_721;
                }
                v556 = v563;
LABEL_721:
                if ( LODWORD(Block[1]) )
                {
                  v563 = 3i64 * v556;
                  v565 = *(*&Block[0] + 0xCi64 * v556 + 4);
                }
                else
                {
                  v565 = 0i64;
                }
                v566 = sub_154D270(v563, v564, v565);
                sub_B0C8E0(v593, v597);
                *v597 = 0;
                LOBYTE(v577) = 1;
                if ( !sub_161C890(
                        air_movement,
                        &xmmword_4B67A14,
                        v567,
                        v568,
                        v577,
                        *&v597[4],
                        0x3F800000,
                        LODWORD(v566),
                        0,
                        v597,
                        &v660) )
                  break;
                v569 = v557 - v555;
                v570 = (v557 - v555) / *v597;
                if ( v557 > v548 )
                {
                  if ( v569 > *&dword_449F1A8 || (v571 = 0.0, v569 < *&dword_449F1AC) )
                    v571 = (v548 - v555) / v569;
                  v572 = v549++;
                  v572 *= 3i64;
                  v558 = v558 + (v571 * v570);
                  *(FileName + v572) = v548;
                  *(&FileName[1] + v572) = v558;
                  *(FileName + 4 * v572 + 4) = 1;
                  v548 = v548 + v588;
                }
                v573 = v554;
                if ( !v550 || (v573 = *(v551 + 0xCi64 * v556) - v557, v559 = v552, v573 > *&dword_44878D0) )
                  v559 = fminf(v573 + v553, v552);
                v558 = v558 + v570;
                v511 = v586;
                v555 = v557;
                v557 = v559 + v557;
                if ( v548 >= (v586 + v553) )
                  goto LABEL_734;
              }
              v511 = v586;
            }
LABEL_734:
            if ( v548 <= v511 && v549 <= 0xFF )
            {
              v574 = v588;
              v575 = v549;
              v576 = FileName + 3 * v549 + 1;
              do
              {
                v549 = v575 + 1;
                v576[0xFFFFFFFF] = v548;
                *v576 = 0;
                v548 = v548 + v574;
                if ( v548 > v511 )
                  break;
                v576 += 3;
                v528 = v575++ < 0xFF;
              }
              while ( v528 );
            }
            v626[0] = FileName;
            v626[1] = v549;
            v625[0] = v638;
            v625[1] = v549;
            sub_B0C160(v625, v626, &v594);
          }
          if ( v598 )
            (*(**(&v598 + 1) + 0x40i64))(*(&v598 + 1));
          if ( *&Block[0] )
            (*(**(&Block[0] + 1) + 0x40i64))(*(&Block[0] + 1));
        }
        goto LABEL_744;
      }
      if ( !(*v603 ^ 0x546E7275546E696Di64 | *&v603[8] ^ 0x656D69i64) )
      {
        if ( !process_altitude_data(http_req, v591, &v587, &v586) )
          return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
        v588 = 0.0;
        sub_B0A980(http_req, "flaps");
        sub_B0C9F0(http_req, Block);
        v456 = NtCurrentTeb()->ThreadLocalStoragePointer;
        if ( !*(v456[TlsIndex] + 1i64) )
          _dyn_tls_on_demand_init(v456, v453, v454, v455);
        v457 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
        *&v594 = &off_44CAF30;
        *v595 = v457;
        *&v595[8] = 0x1000i64;
        *&v595[0x10] = 0i64;
        *(&v594 + 1) = (*(*v457 + 0x18i64))(v457, 0x1000i64);
        **(&v594 + 1) = 0;
        sub_B09440(&v594, "[");
        if ( v585 )
        {
          memset(&v597[4], 0, 0x20);
          *v597 = 0xFFFFFFFF;
          LODWORD(v598) = *(air_movement + 8i64 * LODWORD(v588) + 0x53EC);
          *(&v598 + 4) = 0i64;
          HIDWORD(v598) = 0;
          *v638 = air_movement;
          *&v638[8] = v359;
          v461 = (v584 << 6) | 0x1BF;
          sub_222DA50(&v638[0x10], v458, v459, 0, v597, &v598, v461);
          v643 = 1;
          v624[0] = Str1;
          v624[1] = 0x100i64;
          sub_B0CA40(v645, v462, v463, v464, v638, v624);
          *&v597[4] = 1;
          FileName[0] = air_movement;
          *&FileName[1] = v359;
          sub_222DA50(&v651, v465, v466, 0, v597, &v598, v461);
          v656 = 1;
          v623[0] = &v660;
          v623[1] = 0x100i64;
          sub_B0CA40(v646, v467, v468, v469, FileName, v623);
          sub_B0C160(v645, v646, &v594);
        }
        else
        {
          if ( v584 )
            sub_3DFC50(LocalUnit_);
          *v638 = v591[0];
          LODWORD(FileName[0]) = 0xBF800000;
          *v597 = 0xBF800000;
          v501 = _mm_loadu_si128((&xmmword_45183C8 + 0xC));
          *(&Str1[3] + 4) = v501;
          *&Str1[2] = xmmword_45183C8;
          *Str1 = xmmword_45183B8;
          *(&v660.st_atime + 4) = v501;
          *&v660.st_rdev = xmmword_45183C8;
          *&v660.st_dev = xmmword_45183B8;
          if ( *v591 <= v587 )
          {
            do
            {
              v502 = qword_4B8B948;
              if ( qword_4B8B948 )
                *(v502 + 0x70) = timeGetTime();
              *&v503 = *v638;
              LOBYTE(v577) = 0;
              sub_1622C60(air_movement, &xmmword_4B67A14, v459, v460, v577, 0, &xmmword_4B67CA0, &v598, FileName, Str1);
              v505 = v504;
              LOBYTE(v580) = 1;
              sub_1622C60(air_movement, &xmmword_4B67A14, v506, v507, v580, 0, &xmmword_4B67CA0, &v589, v597, &v660);
              v509 = v508;
              if ( *&v503 > *v591 )
                sub_B09440(&v594, ",\n");
              sub_B09B80(&v594, "[%f, ", v503);
              if ( v505 )
                sub_B09B80(&v594, "%f, ", v503);
              else
                sub_B09440(&v594, "null, ");
              if ( v509 )
                sub_B09B80(&v594, "%f]", v503);
              else
                sub_B09440(&v594, "null]");
              *v638 = *&v503 + v586;
            }
            while ( (*&v503 + v586) <= v587 );
          }
        }
        goto LABEL_744;
      }
      if ( *v603 ^ 0x526C6C6F5278616Di64 | *&v603[8] ^ 0x657461i64 || !sub_B0CBA0(http_req, v597, Block, &v598) )
        return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
      v363 = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(v363[TlsIndex] + 1i64) )
        _dyn_tls_on_demand_init(v363, v360, v361, v362);
      v364 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
      *&v594 = &off_44CAF30;
      *v595 = v364;
      *&v595[8] = 0x1000i64;
      *&v595[0x10] = 0i64;
      *(&v594 + 1) = (*(*v364 + 0x18i64))(v364, 0x1000i64);
      **(&v594 + 1) = 0;
      sub_B09440(&v594, "[");
      if ( !v585 )
      {
        LODWORD(Str1[0]) = 0;
        v660.st_dev = 0;
        if ( v584 )
          sub_3DFC50(LocalUnit_);
        *v638 = *v597;
        if ( *v597 <= *Block )
        {
          v538 = *&dword_44A02A0;
          v539 = *&dword_449CFE0;
          do
          {
            v540 = qword_4B8B948;
            if ( qword_4B8B948 )
              *(v540 + 0x70) = timeGetTime();
            v541 = *v638;
            v542 = sub_161F560(air_movement, &xmmword_4B67A14, 0, v367, 0x447A0000, 0, Str1);
            *FileName = *&v542 * v538;
            v544 = sub_161F560(air_movement, &xmmword_4B67A14, 0, v543, 0x447A0000, 1, &v660);
            *v591 = *&v544 * v539;
            if ( v541 > *v597 )
              sub_B09440(&v594, ",\n");
            sub_B09B80(&v594, "[%f, ", a3);
            sub_B09B80(&v594, "%f, ", a3);
            sub_B09B80(&v594, "%f]", a3);
            *v638 = v541 + *&v598;
          }
          while ( (v541 + *&v598) <= *Block );
        }
        goto LABEL_744;
      }
      *v638 = air_movement;
      *&v638[8] = v359;
      v368 = (v584 << 6) | 0x1BF;
      *&v638[0x18] = v368;
      *&v638[0x1C] = v359;
      *&v638[0x20] = 0x447A0000;
      *&v638[0x10] = &off_45875B0;
      *&v638[0x28] = 0;
      *&v638[0x2C] = 1;
      *&v638[0x30] = 0i64;
      memset(&v639[0xC], 0, 0x34);
      memset(&v640[1] + 4, 0, 0x30);
      memset(&v640[8] + 4, 0, 0x15);
      *v639 = 0x3CA3D70A40A00000i64;
      *&v639[8] = 0x4E6E6B28;
      *&v639[0x10] = 0x424000003ECCCCCDi64;
      *&v639[0x20] = 0x3E4CCCCD;
      *&v639[0x28] = 0x4E6E6B28;
      *&v639[0x34] = 0x42400000;
      v640[0] = 0x3DA3D70A3F000000i64;
      LODWORD(v640[1]) = 0x4E6E6B28;
      v640[2] = 0x424000003CA3D70Ai64;
      v640[4] = 0x4240000040800000i64;
      v640[6] = 0x3F8000003E4CCCCDi64;
      *(&v640[7] + 4) = 0x424000003CA3D70Ai64;
      *(&v640[9] + 4) = 0x3F8000003E99999Ai64;
      memset(&v640[0xB] + 4, 0, 0x14);
      *&v638[0x24] = 0x42C80000;
      v641 = 1;
      v622[0] = Str1;
      v622[1] = 0x100i64;
      sub_B0CCF0(v635, v365, v366, v367, v638, v622);
      FileName[0] = air_movement;
      *&FileName[1] = v359;
      *&v651.m256_f32[2] = __PAIR64__(LODWORD(v359), v368);
      v651.m256_f32[4] = 1000.0;
      *v651.m256_f32 = &off_45875B0;
      LOWORD(v651.m256_f32[7]) = 0x101;
      v652 = 0i64;
      memset(&v653[0xC], 0, 0x34);
      memset(&v654[1] + 4, 0, 0x30);
      memset(&v654[8] + 4, 0, 0x15);
      *v653 = 0x3CA3D70A40A00000i64;
      *&v653[8] = 0x4E6E6B28;
      *&v653[0x10] = 0x424000003ECCCCCDi64;
      *&v653[0x20] = 0x3E4CCCCD;
      *&v653[0x28] = 0x4E6E6B28;
      *&v653[0x34] = 0x42400000;
      v654[0] = 0x3DA3D70A3F000000i64;
      LODWORD(v654[1]) = 0x4E6E6B28;
      v654[2] = 0x424000003CA3D70Ai64;
      v654[4] = 0x4240000040800000i64;
      v654[6] = 0x3F8000003E4CCCCDi64;
      *(&v654[7] + 4) = 0x424000003CA3D70Ai64;
      *(&v654[9] + 4) = 0x3F8000003E99999Ai64;
      *(&v654[0xB] + 4) = 0i64;
      *(&v654[0xD] + 4) = 0x100000000i64;
      *&v651.m256_f32[5] = 0x42C80000i64;
      v621[0] = &v660;
      v621[1] = 0x100i64;
      v369 = v644;
      sub_B0CCF0(v644, v370, v371, v372, FileName, v621);
      v373 = v635;
LABEL_512:
      sub_B0C160(v373, v369, &v594);
LABEL_744:
      sub_B09440(&v594, "]");
      v324 = *(&v594 + 1);
      sub_AF1600(http_req, *(&v594 + 1), *&v595[0x10]);
      v325 = *v595;
      return (*(*v325 + 0x40i64))(v325, v324);
    }
    if ( !process_altitude_data(http_req, v591, &v587, &v586) )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    v588 = 0.0;
    sub_B0A980(http_req, "speedType");
    memset(Block + 4, 0, 0x20);
    LODWORD(Block[0]) = 0xFFFFFFFF;
    v404 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v404[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(v404, v401, v402, v403);
    v405 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    *v597 = &off_44CAF30;
    *&v597[0x10] = v405;
    *&v597[0x18] = 0x1000i64;
    *&v597[0x20] = 0i64;
    *&v597[8] = (*(*v405 + 0x18i64))(v405, 0x1000i64);
    **&v597[8] = 0;
    sub_B09440(v597, "[");
    if ( v585 )
    {
      *v638 = air_movement;
      *&v638[8] = v359;
      v409 = (v584 << 6) | 0x1BF;
      sub_222BD20(&v638[0x10], v406, v407, Block, &xmmword_44A9E50, v409);
      v642 = 1;
      v630[0] = Str1;
      v630[1] = 0x100i64;
      sub_B0C4B0(&v594, v410, v411, v412, v638, v630);
      DWORD1(Block[0]) = 1;
      FileName[0] = air_movement;
      *&FileName[1] = v359;
      sub_222BD20(&v651, v413, v414, Block, &xmmword_44A9E50, v409);
      v655 = 1;
      v629[0] = &v660;
      v629[1] = 0x100i64;
      sub_B0C4B0(&v598, v415, v416, v417, FileName, v629);
      for ( j = 8i64; j != 0xC08; j += 0xCi64 )
      {
        v421 = _mm_cvtsi32_si128(*(Str1 + j));
        *v421.m128i_i32 = sub_154D350(v419, v418, LODWORD(v588));
        *(Str1 + j) = _mm_cvtsi128_si32(v421);
      }
      if ( DWORD2(v598) )
      {
        v422 = v598;
        v423 = 0xCi64 * DWORD2(v598);
        v424 = 0i64;
        do
        {
          v425 = _mm_cvtsi32_si128(*(v422 + v424 + 8));
          *v425.m128i_i32 = sub_154D350(v419, v418, LODWORD(v588));
          *(v422 + v424 + 8) = _mm_cvtsi128_si32(v425);
          v424 += 0xCi64;
        }
        while ( v423 != v424 );
      }
      v634 = v598;
      v633 = v594;
      sub_B0C160(&v633, &v634, v597);
    }
    else
    {
      if ( v584 )
        sub_3DFC50(LocalUnit_);
      LODWORD(v598) = 0xBF800000;
      v589 = -1.0;
      v590 = -1.0;
      v592 = -1.0;
      v607 = -1.0;
      v606 = -1.0;
      v602 = *v591;
      *(&v660.st_atime + 4) = *(&xmmword_45183C8 + 0xC);
      v481 = *&xmmword_45183C8;
      *&v660.st_rdev = xmmword_45183C8;
      *&v660.st_dev = xmmword_45183B8;
      *&v638[0x1C] = *(&xmmword_45183C8 + 0xC);
      *&v638[0x10] = xmmword_45183C8;
      *v638 = xmmword_45183B8;
      *&v651.m256_f32[3] = *(&xmmword_45183C8 + 0xC);
      *v651.m256_f32 = xmmword_45183C8;
      *FileName = xmmword_45183B8;
      *&v595[0xC] = *(&xmmword_45183C8 + 0xC);
      *v595 = xmmword_45183C8;
      v594 = xmmword_45183B8;
      if ( *v591 <= v587 )
      {
        v490 = *&dword_4489388;
        do
        {
          v491 = qword_4B8B948;
          if ( qword_4B8B948 )
            *(v491 + 0x70) = timeGetTime();
          v492 = v602;
          if ( v602 > *v591 )
            sub_B09440(v597, ",\n");
          LOBYTE(v581) = 0;
          v494 = sub_161BE70(
                   air_movement,
                   &xmmword_4B67A14,
                   &xmmword_4B67CA0,
                   v408,
                   0x3F800000,
                   v581,
                   0,
                   0x40400000,
                   0,
                   &v590,
                   &v607,
                   &v660);
          if ( v494 )
          {
            if ( !v638[8] )
            {
              *&v638[0x1C] = *(&v660.st_atime + 4);
              *&v638[0x10] = *&v660.st_rdev;
              *v638 = *&v660.st_dev;
            }
            if ( !LOBYTE(FileName[1]) )
            {
              *&v651.m256_f32[3] = *(&v660.st_atime + 4);
              *v651.m256_f32 = *&v660.st_rdev;
              *FileName = *&v660.st_dev;
            }
            LOBYTE(v583) = 0;
            sub_161CEE0(
              air_movement,
              &xmmword_4B67A14,
              &xmmword_4B67CA0,
              v493,
              0x3F800000,
              v583,
              0,
              v607 + v490,
              0,
              &v598,
              Str1,
              v638);
          }
          LOBYTE(v583) = 1;
          v495 = sub_161BE70(
                   air_movement,
                   &xmmword_4B67A14,
                   &xmmword_4B67CA0,
                   v493,
                   0x3F8CCCCD,
                   v583,
                   0,
                   0x40400000,
                   0,
                   &v592,
                   &v606,
                   FileName);
          if ( v495 )
          {
            if ( !BYTE8(v594) )
            {
              *&v595[0xC] = *&v651.m256_f32[3];
              *v595 = *v651.m256_f32;
              v594 = *FileName;
            }
            LOBYTE(v581) = 1;
            sub_161CEE0(
              air_movement,
              &xmmword_4B67A14,
              &xmmword_4B67CA0,
              v496,
              0x3F8CCCCD,
              v581,
              0,
              v606 + v490,
              0,
              &v589,
              Str1,
              &v594);
          }
          sub_B09B80(v597, "[%f, ", v481);
          if ( v494 )
          {
            v605 = sub_154D350(v498, v497, LODWORD(v588));
            sub_B09B80(v597, "%f, ", v481);
          }
          else
          {
            sub_B09440(v597, "null, ");
          }
          if ( v495 )
          {
            v605 = sub_154D350(v500, v499, LODWORD(v588));
            sub_B09B80(v597, "%f]", v481);
          }
          else
          {
            sub_B09440(v597, "null]");
          }
          v602 = v492 + v586;
        }
        while ( (v492 + v586) <= v587 );
      }
    }
    sub_B09440(v597, "]");
    v324 = *&v597[8];
    sub_AF1600(http_req, *&v597[8], *&v597[0x20]);
    v325 = *&v597[0x10];
    return (*(*v325 + 0x40i64))(v325, v324);
  }
  v247 = _mm_or_si128(
           _mm_xor_si128(_mm_load_si128(&v600), xmmword_44CB210),
           _mm_xor_si128(_mm_loadu_si128(&v600.m128i_i8[3]), xmmword_44CB200));
  if ( !_mm_testz_si128(v247, v247) )
  {
    v248 = _mm_or_si128(
             _mm_xor_si128(_mm_load_si128(&v600), xmmword_44CB230),
             _mm_xor_si128(_mm_loadu_si128(&v600.m128i_i8[6]), xmmword_44CB220));
    if ( _mm_testz_si128(v248, v248) )
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
        v381 = *(game + 0x440);
        v382 = LOBYTE(Str1[0]);
        if ( LOBYTE(Str1[0]) != *(v381 + 0xAB8) )
        {
          v382 = LocalUnit;
          if ( LocalUnit )
          {
            if ( !*(LocalUnit + 0x10B0) )
            {
              v382 = *(LocalUnit + 0x9D0);
              if ( v382 )
              {
                *(v381 + 0xBB8) = *(v382 + 0x918);
                *(v381 + 0xBA8) = _mm_loadu_si128((v382 + 0x908));
              }
            }
          }
        }
        v383 = _mm_loadu_si128(Str1);
        v384 = _mm_loadu_si128(&Str1[2]);
        v385 = *&Str1[4];
        *(v381 + 0xAD8) = *&Str1[4];
        *(v381 + 0xAC8) = v384;
        *(v381 + 0xAB8) = v383;
        v386 = NtCurrentTeb()->ThreadLocalStoragePointer;
        if ( !*(v386[TlsIndex] + 1i64) )
          _dyn_tls_on_demand_init(v386, v382, v379, v380);
        v387 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
        *&v660.st_dev = &off_44CAF30;
        *&v660.st_rdev = v387;
        v660.st_atime = 0x20i64;
        v660.st_mtime = 0i64;
        *&v660.st_nlink = (*(*v387 + 0x18i64))(v387, 0x20i64);
        **&v660.st_nlink = 0;
        *v638 = sub_5655B0(game);
        sub_B0BD50(&v660, "{ \"time\": %f }", v385);
        v388 = *&v660.st_nlink;
        sub_AF1600(http_req, *&v660.st_nlink, v660.st_mtime);
        (*(**&v660.st_rdev + 0x40i64))(*&v660.st_rdev, v388);
      }
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    }
    if ( !(v600.m128i_i64[1] ^ 0x74736554656D6954i64 | v600.m128i_i64[0] ^ 0x6C616552706F7473i64 | v601.m128i_u8[0]) )
    {
      sub_15879D0(air_movement, 0i64);
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    }
    v249 = _mm_or_si128(
             _mm_xor_si128(_mm_load_si128(&v600), xmmword_44CB250),
             _mm_xor_si128(_mm_loadu_si128(&v600.m128i_i8[5]), xmmword_44CB240));
    if ( _mm_testz_si128(v249, v249) )
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
  if ( !sub_B09200(http_req, "test", &v660) )
    goto LABEL_2;
  LOBYTE(v598) = 1;
  sub_B0BDF0(http_req, "repair", &v598);
  v374 = v598;
  *v597 = 0;
  sub_B0A980(http_req, "flaps");
  LOBYTE(v591[0]) = 0;
  sub_B0BDF0(http_req, "gear", v591);
  LOBYTE(v587) = 0;
  sub_B0BDF0(http_req, "cockpitDoor", &v587);
  LODWORD(FileName[0]) = *(air_movement + 8i64 * *v597 + 0x53EC);
  v375 = 0.0;
  v376 = 0.0;
  if ( LOBYTE(v591[0]) )
    v376 = Y;
  v377 = v374 << 6;
  *(FileName + 1) = v376;
  LODWORD(FileName[1]) = 0;
  if ( LOBYTE(v587) )
    v375 = Y;
  v378 = v377 | 0x3BF;
  *(&FileName[1] + 1) = v375;
  memset(Str1 + 4, 0, 0x20);
  LODWORD(Str1[0]) = 0xFFFFFFFF;
  LOBYTE(v586) = 1;
  sub_B0BDF0(http_req, "engineAutoMode", &v586);
  if ( LOBYTE(v586) )
    goto LABEL_563;
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
      v426 = "pitchControl";
      goto LABEL_561;
    case 2:
      v426 = "pitch";
      goto LABEL_561;
    case 1:
      v426 = "omega";
LABEL_561:
      sub_B0A5E0(http_req, v426);
      break;
  }
  sub_B0A980(http_req, "compressorStage");
  sub_B0A5E0(http_req, "cooler");
LABEL_563:
  LOBYTE(v588) = 0;
  sub_B0BDF0(http_req, "fast", &v588);
  v438 = LOBYTE(v588);
  v439 = v378 | 0x400;
  if ( !LOBYTE(v588) )
    v439 = v378;
  if ( !(*"stall" ^ v660.st_dev | (*"l" ^ v660.st_ino)) )
  {
    *v638 = 0;
    if ( !sub_B0A5E0(http_req, "alt") )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    v440 = sub_1464470(0xD8ui64);
    sub_222A520(v440, v443, v444, FileName, v439);
    goto LABEL_585;
  }
  if ( !(*"maxSpeed" ^ *&v660.st_dev | (aMaxspeed[8] ^ LOBYTE(v660.st_nlink))) )
  {
    *v638 = 0;
    if ( !sub_B0A5E0(http_req, "alt") )
      return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
    v440 = sub_1464470(0x170ui64);
    sub_222BD20(v440, v445, v446, Str1, FileName, v439);
    goto LABEL_585;
  }
  if ( *&v660.st_dev ^ 0x626D696C436E696Di64 | *(&v660.st_ino + 1) ^ 0x656D6954626D69i64 )
  {
    if ( *&v660.st_dev ^ 0x546E7275546E696Di64 | *&v660.st_nlink ^ 0x656D69i64 )
    {
      if ( *&v660.st_dev ^ 0x526C6C6F5278616Di64 | *&v660.st_nlink ^ 0x657461i64 )
        goto LABEL_2;
      LOBYTE(Block[0]) = 0;
      *v638 = 0;
      LODWORD(v594) = 0;
      if ( !sub_B0A5E0(http_req, "alt") || !sub_B0BDF0(http_req, "IAS", Block) || !sub_B0A5E0(http_req, "speed") )
        return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
      v603[0] = 1;
      sub_B0BDF0(http_req, "right", v603);
      v440 = sub_1464470(0xE0ui64);
      sub_222F3B0(v440, &xmmword_44A9E50, v441, v442, Block[0], v603[0], &xmmword_44A9E50, v439);
    }
    else
    {
      *v638 = 0;
      if ( !sub_B0A5E0(http_req, "alt") )
        return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
      LOBYTE(v594) = 1;
      sub_B0BDF0(http_req, "right", &v594);
      v440 = sub_1464470(0x1D0ui64);
      sub_222DA50(v440, v451, v452, v594, Str1, FileName, v439);
    }
LABEL_585:
    sub_222FC50(air_movement, v440, v438);
    return sub_B0CF10(air_movement, http_req);
  }
  LODWORD(Block[0]) = 0;
  *v603 = 0;
  *&v594 = 0i64;
  DWORD2(v594) = 0;
  if ( !sub_B0A5E0(http_req, "alt")
    || !sub_B0A5E0(http_req, "startAlt")
    || !sub_B0A980(http_req, "speedType")
    || !sub_B0A5E0(http_req, "speed") )
  {
    return sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  }
  *v638 = 0i64;
  *&v638[8] = off_4B678C0;
  *&v638[0x10] = 0i64;
  sub_B0C610(v638, &v594);
  v447 = sub_1464470(0x1D8ui64);
  sub_222C8D0(v447, v448, v449, v450, v638, Str1, FileName, v439);
  sub_222FC50(air_movement, v447, v438);
  result = sub_B0CF10(air_movement, http_req);
LABEL_338:
  v143 = *v638;
  if ( *v638 )
  {
    v144 = *&v638[8];
    return (*(*v144 + 0x40i64))(v144, v143);
  }
  return result;
}
