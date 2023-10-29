void __fastcall sub_F76B0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  __int64 v10; // r13
  __int64 i; // rbx
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v13; // rbx
  __int64 *v14; // r15
  _QWORD *v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  _QWORD *v23; // rsi
  unsigned __int64 j; // rdi
  unsigned __int64 v25; // rax
  _QWORD *v26; // rcx
  __int64 v27; // rbp
  __int64 v28; // rbx
  unsigned __int64 v29; // rdi
  unsigned int v30; // esi
  _QWORD *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // r15
  int v35; // ecx
  char *v36; // rdx
  unsigned int v37; // r8d
  _DWORD *v38; // rbp
  _QWORD *v39; // rsi
  unsigned __int64 v40; // rbx
  _QWORD *v41; // rsi
  unsigned __int64 v42; // rbx
  _QWORD *v43; // rcx
  __int64 v44; // rax
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // rsi
  __int64 v47; // rbp
  _DWORD *v48; // r13
  CHAR **v49; // r14
  CHAR *v51; // rdi
  int v52; // esi
  void *v53; // rbp
  __int64 v54; // rdi
  void *v55; // rax
  void *v56; // rbx
  unsigned int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdi
  void *v62; // rbp
  int v63; // r15d
  void *v64; // rax
  void *v65; // rsi
  unsigned int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rdi
  __int64 v72; // rdx
  __int64 v73; // rdx
  int v74; // ebp
  __int64 v75; // r9
  int *v76; // r8
  __int64 v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rcx
  int v80; // ebp
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rcx
  void *v85; // rbp
  size_t v86; // rdi
  __int64 v87; // rbx
  void *v88; // r14
  __int64 v89; // rbx
  __int64 v90; // rbx
  __int64 v91; // rbx
  __int64 v92; // rbx
  unsigned int v93; // eax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rdi
  __int64 v98; // r12
  __int64 v99; // rsi
  __int64 v100; // rbx
  const char *v101; // rcx
  float v102; // xmm8_4
  double v103; // xmm0_8
  __int64 v104; // r13
  unsigned int v105; // r15d
  const char **v106; // rsi
  __int64 v107; // rbp
  const char *v108; // rcx
  double v109; // xmm0_8
  __int64 v110; // r13
  unsigned int v111; // r15d
  const char **v112; // rsi
  __int64 v113; // rbp
  const char *v114; // rcx
  double v115; // xmm0_8
  __int64 v116; // r13
  unsigned int v117; // r15d
  const char **v118; // rsi
  __int64 v119; // rbp
  const char *v120; // rcx
  float v121; // xmm9_4
  double v122; // xmm0_8
  __int64 v123; // r13
  unsigned int v124; // r15d
  const char **v125; // rsi
  __int64 v126; // rbp
  const char *v127; // rcx
  double v128; // xmm0_8
  __int64 v129; // r13
  unsigned int v130; // r15d
  const char **v131; // rsi
  __int64 v132; // rbp
  const char *v133; // rcx
  double v134; // xmm0_8
  __int64 v135; // r15
  unsigned int v136; // r13d
  const char **v137; // rdi
  __int64 v138; // rbp
  const char *v139; // rcx
  float v140; // xmm10_4
  float v141; // xmm6_4
  float v142; // xmm7_4
  __int64 v143; // rdi
  unsigned __int64 v144; // rax
  float v145; // xmm0_4
  float v146; // xmm0_4
  __int64 v147; // rcx
  float v148; // xmm3_4
  float v149; // xmm5_4
  float v150; // xmm6_4
  float v151; // xmm1_4
  float *v152; // rcx
  unsigned __int64 v153; // rdx
  float v154; // xmm15_4
  float v155; // xmm8_4
  float v156; // xmm14_4
  float v157; // xmm11_4
  float v158; // xmm2_4
  float v159; // xmm14_4
  unsigned int v160; // r13d
  const char **v161; // rdi
  __int64 v162; // rbp
  const char *v163; // rcx
  float v164; // xmm11_4
  float v165; // xmm0_4
  float *v166; // r12
  __int64 v167; // rdi
  unsigned __int64 v168; // rax
  float v169; // xmm1_4
  float v170; // xmm1_4
  __int64 v171; // rcx
  float v172; // xmm5_4
  float v173; // xmm6_4
  float v174; // xmm3_4
  float v175; // xmm4_4
  float *v176; // rcx
  unsigned __int64 v177; // rdx
  float v178; // xmm13_4
  float v179; // xmm7_4
  float v180; // xmm10_4
  float v181; // xmm9_4
  float v182; // xmm15_4
  float v183; // xmm8_4
  float v184; // xmm9_4
  float v185; // xmm0_4
  __int64 v186; // r13
  __int64 v187; // r15
  __int64 v188; // rsi
  __int64 v189; // rdi
  const char *v190; // rcx
  bool v191; // r14
  float v192; // xmm6_4
  double v193; // xmm0_8
  __int64 v194; // rsi
  __int64 v195; // rdi
  const char *v196; // rcx
  double v197; // xmm0_8
  __int64 v198; // rsi
  __int64 v199; // rdi
  const char *v200; // rcx
  double v201; // xmm0_8
  __int64 v202; // rsi
  __int64 v203; // rdi
  const char *v204; // rcx
  double v205; // xmm0_8
  __int64 v206; // rsi
  __int64 v207; // rdi
  const char *v208; // rcx
  double v209; // xmm0_8
  __int64 v210; // rsi
  __int64 v211; // rdi
  const char *v212; // rcx
  double v213; // xmm0_8
  __int64 v214; // rsi
  __int64 v215; // rdi
  const char *v216; // rcx
  double v217; // xmm0_8
  __int64 v218; // rsi
  const char *v219; // rcx
  __int64 v220; // rbp
  __int64 v221; // rsi
  __int64 v222; // rbx
  __int64 v223; // rdi
  const char *v224; // rcx
  bool v225; // r14
  float v226; // xmm6_4
  double v227; // xmm0_8
  __int64 v228; // rbx
  __int64 v229; // rdi
  const char *v230; // rcx
  double v231; // xmm0_8
  __int64 v232; // rbx
  const char *v233; // rcx
  double v234; // xmm0_8
  __int64 v235; // rbp
  __int64 v236; // rsi
  __int64 v237; // rbx
  __int64 v238; // rdi
  const char *v239; // rcx
  bool v240; // r14
  float v241; // xmm6_4
  double v242; // xmm0_8
  __int64 v243; // rbx
  __int64 v244; // rdi
  const char *v245; // rcx
  double v246; // xmm0_8
  __int64 v247; // rbx
  const char *v248; // rcx
  double v249; // xmm0_8
  __int64 v250; // rbp
  __int64 v251; // rsi
  __int64 v252; // rbx
  __int64 v253; // rdi
  const char *v254; // rcx
  bool v255; // r14
  float v256; // xmm6_4
  double v257; // xmm0_8
  __int64 v258; // rbx
  __int64 v259; // rdi
  const char *v260; // rcx
  double v261; // xmm0_8
  __int64 v262; // rbx
  const char *v263; // rcx
  double v264; // xmm0_8
  __int64 v265; // rbp
  __int64 v266; // rsi
  __int64 v267; // rbx
  __int64 v268; // rdi
  const char *v269; // rcx
  bool v270; // r14
  float v271; // xmm6_4
  double v272; // xmm0_8
  __int64 v273; // rbx
  __int64 v274; // rdi
  const char *v275; // rcx
  double v276; // xmm0_8
  __int64 v277; // rbx
  const char *v278; // rcx
  double v279; // xmm0_8
  double v280; // xmm0_8
  __int64 v281; // rdx
  __int64 v282; // [rsp+20h] [rbp-848h]
  int v283; // [rsp+28h] [rbp-840h]
  __int64 v284; // [rsp+30h] [rbp-838h]
  __int64 v285; // [rsp+38h] [rbp-830h]
  void *v286; // [rsp+40h] [rbp-828h] BYREF
  CHAR *v287; // [rsp+48h] [rbp-820h]
  size_t v288; // [rsp+50h] [rbp-818h]
  __int64 v289; // [rsp+58h] [rbp-810h]
  void *Src; // [rsp+60h] [rbp-808h] BYREF
  __int64 v291; // [rsp+68h] [rbp-800h]
  size_t Size; // [rsp+70h] [rbp-7F8h]
  __int64 v293; // [rsp+78h] [rbp-7F0h]
  __int64 v294; // [rsp+80h] [rbp-7E8h]
  __int64 v295; // [rsp+88h] [rbp-7E0h]
  __int64 v296; // [rsp+90h] [rbp-7D8h]
  float v297; // [rsp+9Ch] [rbp-7CCh]
  float v298; // [rsp+A0h] [rbp-7C8h]
  float v299; // [rsp+A4h] [rbp-7C4h]
  float v300; // [rsp+A8h] [rbp-7C0h]
  float v301; // [rsp+ACh] [rbp-7BCh]
  float v302; // [rsp+B0h] [rbp-7B8h]
  float v303; // [rsp+B4h] [rbp-7B4h]
  __int64 v304; // [rsp+B8h] [rbp-7B0h]
  int *v305; // [rsp+C0h] [rbp-7A8h]
  __int64 v306; // [rsp+C8h] [rbp-7A0h]
  __int64 v307; // [rsp+D0h] [rbp-798h]
  float v308; // [rsp+D8h] [rbp-790h] BYREF
  float v309; // [rsp+DCh] [rbp-78Ch]
  int v310; // [rsp+E0h] [rbp-788h] BYREF
  float v311; // [rsp+E4h] [rbp-784h]
  float v312; // [rsp+E8h] [rbp-780h] BYREF
  float v313; // [rsp+ECh] [rbp-77Ch]
  __int64 (__fastcall **v314)(void *); // [rsp+F0h] [rbp-778h] BYREF
  int v315; // [rsp+FCh] [rbp-76Ch] BYREF
  int v316; // [rsp+100h] [rbp-768h] BYREF
  float v317; // [rsp+104h] [rbp-764h]
  float v318; // [rsp+108h] [rbp-760h]
  float v319; // [rsp+10Ch] [rbp-75Ch]
  int v320[2]; // [rsp+110h] [rbp-758h] BYREF
  int v321[4]; // [rsp+118h] [rbp-750h] BYREF
  __int64 v322; // [rsp+128h] [rbp-740h] BYREF
  int v323; // [rsp+130h] [rbp-738h]
  int *v324; // [rsp+138h] [rbp-730h]
  __int64 (__fastcall *v325)(); // [rsp+140h] [rbp-728h]
  __int64 v326; // [rsp+148h] [rbp-720h]
  __int64 v327; // [rsp+150h] [rbp-718h] BYREF
  int v328; // [rsp+158h] [rbp-710h]
  int *v329; // [rsp+160h] [rbp-708h]
  __int64 (__fastcall *v330)(); // [rsp+168h] [rbp-700h]
  __int64 v331; // [rsp+170h] [rbp-6F8h]
  __int64 v332; // [rsp+178h] [rbp-6F0h] BYREF
  int v333; // [rsp+180h] [rbp-6E8h]
  __int64 v334; // [rsp+188h] [rbp-6E0h]
  __int64 (__fastcall *v335)(); // [rsp+190h] [rbp-6D8h]
  __int64 v336; // [rsp+198h] [rbp-6D0h]
  __int64 v337; // [rsp+1A0h] [rbp-6C8h] BYREF
  int v338; // [rsp+1A8h] [rbp-6C0h]
  __int64 v339; // [rsp+1B0h] [rbp-6B8h]
  __int64 (__fastcall *v340)(); // [rsp+1B8h] [rbp-6B0h]
  __int64 v341; // [rsp+1C0h] [rbp-6A8h]
  __int64 v342; // [rsp+1C8h] [rbp-6A0h] BYREF
  int v343; // [rsp+1D0h] [rbp-698h]
  __int64 v344; // [rsp+1D8h] [rbp-690h]
  __int64 (__fastcall *v345)(); // [rsp+1E0h] [rbp-688h]
  __int64 v346; // [rsp+1E8h] [rbp-680h]
  __int64 v347[2]; // [rsp+1F0h] [rbp-678h] BYREF
  char v348[8]; // [rsp+200h] [rbp-668h]
  __int64 *v349; // [rsp+208h] [rbp-660h]
  __int64 v350; // [rsp+210h] [rbp-658h]
  char v351; // [rsp+218h] [rbp-650h]
  __int64 *v352; // [rsp+220h] [rbp-648h]
  __int64 v353; // [rsp+228h] [rbp-640h]
  char v354; // [rsp+230h] [rbp-638h]
  __int64 *v355; // [rsp+238h] [rbp-630h]
  __int64 v356; // [rsp+240h] [rbp-628h]
  char v357; // [rsp+248h] [rbp-620h]
  __int128 *v358; // [rsp+250h] [rbp-618h]
  __int64 v359; // [rsp+258h] [rbp-610h]
  char v360; // [rsp+260h] [rbp-608h]
  __int128 *v361; // [rsp+268h] [rbp-600h]
  __int64 v362; // [rsp+270h] [rbp-5F8h]
  char v363; // [rsp+278h] [rbp-5F0h]
  __int128 *v364; // [rsp+280h] [rbp-5E8h]
  __int64 v365; // [rsp+288h] [rbp-5E0h]
  char v366; // [rsp+290h] [rbp-5D8h]
  __int64 *v367; // [rsp+298h] [rbp-5D0h]
  __int64 v368; // [rsp+2A0h] [rbp-5C8h]
  char v369; // [rsp+2A8h] [rbp-5C0h]
  __int128 *v370; // [rsp+2B0h] [rbp-5B8h]
  __int64 v371; // [rsp+2B8h] [rbp-5B0h]
  char v372; // [rsp+2C0h] [rbp-5A8h]
  __int128 *v373; // [rsp+2C8h] [rbp-5A0h]
  __int64 v374; // [rsp+2D0h] [rbp-598h]
  char v375; // [rsp+2D8h] [rbp-590h]
  __int128 *v376; // [rsp+2E0h] [rbp-588h]
  __int64 v377; // [rsp+2E8h] [rbp-580h]
  char v378; // [rsp+2F0h] [rbp-578h]
  __int128 *v379; // [rsp+2F8h] [rbp-570h]
  __int64 v380; // [rsp+300h] [rbp-568h]
  char v381; // [rsp+308h] [rbp-560h]
  __int128 *v382; // [rsp+310h] [rbp-558h]
  __int64 v383; // [rsp+318h] [rbp-550h]
  char v384; // [rsp+320h] [rbp-548h]
  __int128 *v385; // [rsp+328h] [rbp-540h]
  __int64 v386; // [rsp+330h] [rbp-538h]
  char v387; // [rsp+338h] [rbp-530h]
  __int64 *v388; // [rsp+340h] [rbp-528h]
  __int64 v389; // [rsp+348h] [rbp-520h]
  char v390; // [rsp+350h] [rbp-518h]
  __int64 *v391; // [rsp+358h] [rbp-510h]
  __int64 v392; // [rsp+360h] [rbp-508h]
  char v393; // [rsp+368h] [rbp-500h]
  __int128 *v394; // [rsp+370h] [rbp-4F8h]
  __int64 v395; // [rsp+378h] [rbp-4F0h]
  char v396; // [rsp+380h] [rbp-4E8h]
  __int128 *v397; // [rsp+388h] [rbp-4E0h]
  __int64 v398; // [rsp+390h] [rbp-4D8h]
  char v399; // [rsp+398h] [rbp-4D0h]
  __int64 *v400; // [rsp+3A0h] [rbp-4C8h]
  __int64 v401; // [rsp+3A8h] [rbp-4C0h]
  char v402; // [rsp+3B0h] [rbp-4B8h]
  __int64 *v403; // [rsp+3B8h] [rbp-4B0h]
  __int64 v404; // [rsp+3C0h] [rbp-4A8h]
  char v405; // [rsp+3C8h] [rbp-4A0h]
  __int64 *v406; // [rsp+3D0h] [rbp-498h]
  __int64 v407; // [rsp+3D8h] [rbp-490h]
  char v408; // [rsp+3E0h] [rbp-488h]
  __int64 *v409; // [rsp+3E8h] [rbp-480h]
  __int64 v410; // [rsp+3F0h] [rbp-478h]
  char v411; // [rsp+3F8h] [rbp-470h]
  __int128 v412[2]; // [rsp+400h] [rbp-468h] BYREF
  __int64 v413; // [rsp+420h] [rbp-448h]
  __int64 v414; // [rsp+430h] [rbp-438h] BYREF
  __int128 v415; // [rsp+438h] [rbp-430h]
  __int128 v416; // [rsp+448h] [rbp-420h]
  __int64 v417; // [rsp+458h] [rbp-410h] BYREF
  __int128 v418; // [rsp+460h] [rbp-408h]
  __int128 v419; // [rsp+470h] [rbp-3F8h]
  __int64 v420; // [rsp+480h] [rbp-3E8h] BYREF
  __int128 v421; // [rsp+488h] [rbp-3E0h]
  __int128 v422; // [rsp+498h] [rbp-3D0h]
  __int64 v423; // [rsp+4A8h] [rbp-3C0h] BYREF
  __int128 v424; // [rsp+4B0h] [rbp-3B8h]
  __int128 v425; // [rsp+4C0h] [rbp-3A8h]
  __int64 v426; // [rsp+4D0h] [rbp-398h] BYREF
  __int128 v427; // [rsp+4D8h] [rbp-390h]
  __int128 v428; // [rsp+4E8h] [rbp-380h]
  __int64 v429; // [rsp+4F8h] [rbp-370h] BYREF
  int v430; // [rsp+500h] [rbp-368h]
  __int64 v431; // [rsp+508h] [rbp-360h]
  __int128 v432; // [rsp+510h] [rbp-358h]
  __int128 v433[2]; // [rsp+520h] [rbp-348h] BYREF
  __int64 v434; // [rsp+540h] [rbp-328h]
  __int128 v435[2]; // [rsp+550h] [rbp-318h] BYREF
  __int64 v436; // [rsp+570h] [rbp-2F8h]
  __int128 v437[2]; // [rsp+580h] [rbp-2E8h] BYREF
  __int64 v438; // [rsp+5A0h] [rbp-2C8h]
  __int128 v439[2]; // [rsp+5B0h] [rbp-2B8h] BYREF
  __int64 v440; // [rsp+5D0h] [rbp-298h]
  __int128 v441[2]; // [rsp+5E0h] [rbp-288h] BYREF
  __int64 v442; // [rsp+600h] [rbp-268h]
  __int128 v443[2]; // [rsp+610h] [rbp-258h] BYREF
  __int64 v444; // [rsp+630h] [rbp-238h]
  __int128 v445[5]; // [rsp+640h] [rbp-228h] BYREF
  __int128 v446[5]; // [rsp+690h] [rbp-1D8h] BYREF
  __int128 v447[5]; // [rsp+6E0h] [rbp-188h] BYREF
  __int128 v448[5]; // [rsp+730h] [rbp-138h] BYREF

  v284 = a1;
  v316 = 0;
  v315 = 0;
  v342 = 0x5500000046i64;
  v343 = 2;
  v344 = a4 + 4;
  v345 = sub_14F1260;
  v346 = 0i64;
  v337 = 0x9700000078i64;
  v338 = 2;
  v339 = a4 + 8;
  v340 = sub_FA190;
  v341 = a4 + 4;
  v332 = 0xA700000098i64;
  v333 = 2;
  v334 = a4 + 12;
  v335 = sub_FA190;
  v336 = a4 + 4;
  v429 = 0xB7000000A8i64;
  v430 = 2;
  v431 = a4 + 16;
  v432 = 0i64;
  v444 = qword_449F2B0;
  v443[1] = unk_449F2A0;
  v443[0] = xmmword_449F290;
  v442 = qword_449F2D8;
  v441[1] = unk_449F2C8;
  v441[0] = xmmword_449F2B8;
  memset(v412, 0, sizeof(v412));
  v413 = 0i64;
  *(v412 + 4) = 0x100000004i64;
  v427 = 0i64;
  v428 = 0i64;
  v426 = 0xF0000000Fi64;
  LODWORD(v427) = 1;
  v448[4] = *&off_449F320;
  v448[3] = xmmword_449F310;
  v448[2] = xmmword_449F300;
  v448[1] = unk_449F2F0;
  v448[0] = xmmword_449F2E0;
  v447[4] = *&off_449F370;
  v447[3] = xmmword_449F360;
  v447[2] = xmmword_449F350;
  v447[1] = xmmword_449F340;
  v447[0] = xmmword_449F330;
  v446[4] = *&off_449F3C0;
  v446[3] = xmmword_449F3B0;
  v446[2] = xmmword_449F3A0;
  v446[1] = xmmword_449F390;
  v446[0] = xmmword_449F380;
  v445[4] = *&off_449F410;
  v445[3] = xmmword_449F400;
  v445[2] = xmmword_449F3F0;
  v445[1] = xmmword_449F3E0;
  v445[0] = xmmword_449F3D0;
  v440 = qword_449F440;
  v439[1] = unk_449F430;
  v439[0] = xmmword_449F420;
  v438 = qword_449F468;
  v437[1] = unk_449F458;
  v437[0] = xmmword_449F448;
  v327 = 0x1BF000001BCi64;
  v328 = 2;
  v329 = &v316;
  v330 = sub_FAA20;
  v331 = 0i64;
  v322 = 0x1C3000001C0i64;
  v323 = 2;
  v324 = &v315;
  v325 = sub_FAB40;
  v326 = 0i64;
  v436 = qword_449F490;
  v435[1] = unk_449F480;
  v435[0] = xmmword_449F470;
  v434 = qword_449F4B8;
  v433[1] = unk_449F4A8;
  v433[0] = xmmword_449F498;
  v424 = 0i64;
  v425 = 0i64;
  v423 = 0x24200000233i64;
  LODWORD(v424) = 2;
  v421 = 0i64;
  v422 = 0i64;
  v420 = 0xD1000000BAi64;
  LODWORD(v421) = 2;
  v418 = 0i64;
  v419 = 0i64;
  v417 = 0xDD000000D2i64;
  LODWORD(v418) = 2;
  v415 = 0i64;
  v416 = 0i64;
  v414 = 0xE7000000DEi64;
  LODWORD(v415) = 2;
  v347[0] = &v342;
  v347[1] = 1i64;
  v348[0] = 1;
  v349 = &v337;
  v350 = 1i64;
  v351 = 1;
  v352 = &v332;
  v353 = 1i64;
  v354 = 0;
  v355 = &v429;
  v356 = 1i64;
  v357 = 1;
  v358 = v443;
  v359 = 1i64;
  v360 = 1;
  v361 = v441;
  v362 = 1i64;
  v363 = 1;
  v364 = v412;
  v365 = 1i64;
  v366 = 1;
  v367 = &v426;
  v368 = 1i64;
  v369 = 1;
  v370 = v448;
  v371 = 2i64;
  v372 = 1;
  v373 = v447;
  v374 = 2i64;
  v375 = 0;
  v376 = v446;
  v377 = 2i64;
  v378 = 1;
  v379 = v445;
  v380 = 2i64;
  v381 = 0;
  v382 = v439;
  v383 = 1i64;
  v384 = 0;
  v385 = v437;
  v386 = 1i64;
  v387 = 0;
  v388 = &v327;
  v389 = 1i64;
  v390 = 0;
  v391 = &v322;
  v392 = 1i64;
  v393 = 0;
  v394 = v435;
  v395 = 1i64;
  v396 = 0;
  v397 = v433;
  v398 = 1i64;
  v399 = 0;
  v400 = &v423;
  v401 = 1i64;
  v402 = 0;
  v403 = &v420;
  v404 = 1i64;
  v405 = 0;
  v406 = &v417;
  v407 = 1i64;
  v408 = 0;
  v409 = &v414;
  v410 = 1i64;
  v411 = 0;
  *(a4 + 104) = 0;
  *(a4 + 4) = 0i64;
  v5 = *(a3 + 8);
  if ( (*&dword_44801CC * v5) > *&dword_449F1A8 || (v6 = 0.0, (*&dword_44801CC * v5) < *&dword_449F1AC) )
    v6 = dword_44801E0 / v5;
  if ( (dword_4487E18 * v5) > *&dword_449F1A8 || (v7 = 0.0, (dword_4487E18 * v5) < *&dword_449F1AC) )
    v7 = *&dword_448938C / v5;
  v8 = *(a3 + 4);
  v285 = a4;
  v306 = a3;
  v305 = (a4 + 4);
  v304 = a2;
  if ( (*&dword_44801CC * v8) > *&dword_449F1A8 || (v9 = 0.0, (*&dword_44801CC * v8) < *&dword_449F1AC) )
    v9 = dword_44801E0 / v8;
  v10 = a5;
  *v321 = v9;
  *&v321[1] = v7;
  *&v321[2] = v6;
  for ( i = 0i64; i != 22; i = v33 + 1 )
  {
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(ThreadLocalStoragePointer, a2, a3, a4, v282, v283, v284, v285, v286);
    v296 = i;
    v13 = 3 * i;
    v14 = &v347[v13];
    v15 = NtCurrentTeb()->ThreadLocalStoragePointer;
    v16 = *(v15[TlsIndex] + 352i64);
    v17 = *(v14 + 2);
    if ( *(v14 + 2) )
    {
      v18 = (*(*v16 + 24i64))(*(v15[TlsIndex] + 352i64), 24 * v17);
      v19 = v18;
      a2 = v17 - 1;
      v20 = v17;
      if ( (v17 & 3) != 0 )
      {
        a3 = v13;
        v21 = 0i64;
        do
        {
          *v18 = 0i64;
          *(v18 + 8) = off_4B678C0;
          *(v18 + 16) = 0i64;
          v18 += 24i64;
          ++v21;
        }
        while ( (v17 & 3) != v21 );
        v20 = v17 - v21;
        v13 = a3;
      }
      if ( a2 >= 3 )
      {
        do
        {
          *v18 = 0i64;
          *(v18 + 8) = off_4B678C0;
          *(v18 + 16) = 0i64;
          *(v18 + 32) = off_4B678C0;
          *(v18 + 40) = 0i64;
          *(v18 + 56) = off_4B678C0;
          *(v18 + 64) = 0i64;
          a2 = off_4B678C0;
          *(v18 + 80) = off_4B678C0;
          *(v18 + 88) = 0i64;
          v18 += 96i64;
          v20 -= 4i64;
        }
        while ( v20 );
      }
      v22 = *(v14 + 2);
    }
    else
    {
      v22 = *(v14 + 2);
      v19 = 0i64;
    }
    v307 = v16;
    v289 = v19;
    v294 = v17;
    if ( !v22 )
    {
      v314 = &off_449F4E0;
      v30 = 0;
      goto LABEL_55;
    }
    v23 = (v19 + 8);
    for ( j = 0i64; j < v25; ++j )
    {
      v26 = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(v26[TlsIndex] + 1i64) )
        _dyn_tls_on_demand_init(v26, a2, a3, a4, v282, v283, v284, v285, v286);
      *v23 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 352i64);
      v25 = *(v14 + 2);
      v23 += 3;
    }
    v314 = &off_449F4E0;
    if ( v25 )
    {
      v295 = v13;
      v27 = 0i64;
      v28 = v19;
      v29 = 0i64;
      v30 = 0;
      do
      {
        sub_F64C0(v284, v27 + *v14, &v314, v321, v28, a5);
        v30 -= (*(v28 + 16) == 0) - 1;
        ++v29;
        v28 += 24i64;
        v27 += 40i64;
      }
      while ( v29 < *(v14 + 2) );
      v10 = a5;
      v17 = v294;
      v19 = v289;
      v13 = v295;
      if ( v30 > 1 )
      {
        v31 = NtCurrentTeb()->ThreadLocalStoragePointer;
        if ( !*(v31[TlsIndex] + 1i64) )
          _dyn_tls_on_demand_init(v31, a2, a3, a4, v282, v283, v284, v285, v286);
        v32 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 352i64);
        Src = 0i64;
        v291 = v32;
        Size = 0i64;
        v33 = v296;
        if ( v17 )
        {
          v34 = 0i64;
          v35 = 0;
          do
          {
            if ( *(v19 + 24 * v34 + 16) )
            {
              v38 = (v19 + 24 * v34 + 16);
              LODWORD(v295) = v35;
              if ( v35 )
              {
                if ( v35 >= 2 )
                  sub_1546A60(&Src, word_4A23704, 2u);
                v287 = (v34 + 1);
                LODWORD(v286) = 2;
                add_server_param(&Src, 64i64, "variant %d (", &v286, 1);
                if ( *v38 )
                {
                  v287 = **(v289 + 24 * v34);
                  LODWORD(v286) = 1;
                  add_server_param(&Src, 64i64, "\"%s\"", &v286, 1);
                  if ( *v38 >= 2u )
                  {
                    v39 = (v289 + 24 * v34);
                    v40 = 1i64;
                    do
                    {
                      sub_1546A60(&Src, word_4A23704, 2u);
                      v287 = *(*v39 + 8 * v40);
                      LODWORD(v286) = 1;
                      add_server_param(&Src, 64i64, "\"%s\"", &v286, 1);
                      ++v40;
                    }
                    while ( v40 < *v38 );
                  }
                }
                v36 = ")";
                v37 = 1;
              }
              else
              {
                v287 = (v34 + 1);
                LODWORD(v286) = 2;
                add_server_param(&Src, 64i64, "Parts from variant %d (", &v286, 1);
                if ( *v38 )
                {
                  v287 = **(v289 + 24 * v34);
                  LODWORD(v286) = 1;
                  add_server_param(&Src, 64i64, "\"%s\"", &v286, 1);
                  if ( *v38 >= 2u )
                  {
                    v41 = (v289 + 24 * v34);
                    v42 = 1i64;
                    do
                    {
                      sub_1546A60(&Src, word_4A23704, 2u);
                      v287 = *(*v41 + 8 * v42);
                      LODWORD(v286) = 1;
                      add_server_param(&Src, 64i64, "\"%s\"", &v286, 1);
                      ++v42;
                    }
                    while ( v42 < *v38 );
                  }
                }
                v36 = ") present as well as parts from ";
                v37 = 32;
              }
              sub_1546A60(&Src, v36, v37);
              v35 = v295 + 1;
              v10 = a5;
              v19 = v289;
              v17 = v294;
            }
            ++v34;
          }
          while ( v34 != v17 );
          v61 = Size;
          v62 = off_4B678C0;
          v63 = 0;
          if ( Size )
          {
            if ( Size < 0x11 )
              v61 = 16i64;
            v64 = (*(*off_4B678C0 + 24i64))(off_4B678C0, v61);
            v65 = v64;
            v33 = v296;
            if ( Size )
            {
              memmove(v64, Src, Size);
              v63 = Size;
            }
          }
          else
          {
            v65 = 0i64;
            LODWORD(v61) = 0;
            v33 = v296;
          }
        }
        else
        {
          v65 = 0i64;
          v62 = off_4B678C0;
          LODWORD(v61) = 0;
          v63 = 0;
        }
        v66 = *(v10 + 16);
        v67 = *(v10 + 20);
        if ( v67 == v66 )
        {
          if ( *(v10 + 20) )
          {
            if ( v67 > 0x7F )
              v73 = ((v67 + 1) >> 1) + v67;
            else
              v73 = 2 * v67;
          }
          else
          {
            v73 = 1i64;
          }
          sub_FBE80(v10, v73);
          v66 = *(v10 + 16);
        }
        v68 = *v10;
        *(v10 + 16) = v66 + 1;
        v69 = 32i64 * v66;
        *(v68 + v69) = 2;
        *(v68 + v69 + 8) = v65;
        *(v68 + v69 + 16) = v62;
        *(v68 + v69 + 24) = v63;
        *(v68 + v69 + 28) = v61;
        if ( Src )
          (*(*v291 + 64i64))(v291);
        v17 = v294;
        if ( v294 )
        {
LABEL_97:
          v70 = 24 * v17;
          v71 = 0i64;
          do
          {
            if ( *(v19 + v71) )
              (*(**(v19 + v71 + 8) + 64i64))(*(v19 + v71 + 8));
            v71 += 24i64;
          }
          while ( v70 != v71 );
        }
LABEL_11:
        (*(*v307 + 64i64))(v307, v19);
        continue;
      }
LABEL_55:
      if ( v30 )
        goto LABEL_83;
      goto LABEL_58;
    }
    v10 = a5;
    v17 = v294;
LABEL_58:
    if ( v348[8 * v13] )
    {
      v43 = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(v43[TlsIndex] + 1i64) )
        _dyn_tls_on_demand_init(v43, a2, a3, a4, v282, v283, v284, v285, v286);
      v44 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 352i64);
      Src = 0i64;
      v291 = v44;
      Size = 0i64;
      add_server_param(&Src, 64i64, "No parts found from all variants (", 0i64, 0);
      if ( *(v14 + 2) )
      {
        v45 = 0i64;
        do
        {
          if ( v45 )
            sub_1546A60(&Src, word_4A23704, 2u);
          v46 = v45 + 1;
          v287 = (v45 + 1);
          LODWORD(v286) = 2;
          add_server_param(&Src, 8i64, "%d: (", &v286, 1);
          v47 = *(*v14 + 40 * v45);
          if ( v47 <= *(*v14 + 40 * v45 + 4) )
          {
            v48 = (*v14 + 40 * v45);
            v49 = &off_44AEC10[v47];
            do
            {
              v51 = &szFile;
              if ( v47 <= 594 )
                v51 = *v49;
              if ( v47 != *v48 )
                sub_1546A60(&Src, word_4A23704, 2u);
              v287 = v51;
              LODWORD(v286) = 1;
              add_server_param(&Src, 64i64, "\"%s\"", &v286, 1);
              ++v49;
            }
            while ( v47++ < v48[1] );
          }
          add_server_param(&Src, 8i64, ")", 0i64, 0);
          v45 = v46;
        }
        while ( v46 < *(v14 + 2) );
      }
      v52 = 0;
      add_server_param(&Src, 8i64, ")", 0i64, 0);
      v53 = off_4B678C0;
      v54 = Size;
      if ( Size )
      {
        if ( Size < 0x11 )
          v54 = 16i64;
        v55 = (*(*off_4B678C0 + 24i64))(off_4B678C0, v54);
        v56 = v55;
        a3 = Size;
        v10 = a5;
        if ( Size )
        {
          memmove(v55, Src, Size);
          v52 = Size;
        }
      }
      else
      {
        v56 = 0i64;
        LODWORD(v54) = 0;
        v10 = a5;
      }
      v19 = v289;
      v57 = *(v10 + 16);
      v58 = *(v10 + 20);
      if ( v58 == v57 )
      {
        if ( *(v10 + 20) )
        {
          if ( v58 > 0x7F )
            v72 = ((v58 + 1) >> 1) + v58;
          else
            v72 = 2 * v58;
        }
        else
        {
          v72 = 1i64;
        }
        sub_FBE80(v10, v72);
        v57 = *(v10 + 16);
      }
      v59 = *v10;
      *(v10 + 16) = v57 + 1;
      v60 = 32i64 * v57;
      *(v59 + v60) = 2;
      *(v59 + v60 + 8) = v56;
      *(v59 + v60 + 16) = v53;
      *(v59 + v60 + 24) = v52;
      *(v59 + v60 + 28) = v54;
      a2 = Src;
      if ( Src )
        (*(*v291 + 64i64))(v291);
      v17 = v294;
    }
LABEL_83:
    v33 = v296;
    if ( v19 )
    {
      if ( v17 )
        goto LABEL_97;
      goto LABEL_11;
    }
  }
  *(v285 + 104) = !((v316 + v315 < 0) ^ __OFADD__(v316, v315) | (v316 + v315 == 0));
  *(v285 + 20) = 0i64;
  v74 = *(v285 + 8);
  v75 = v306;
  v76 = v305;
  v77 = v304;
  if ( v74 > 0 )
  {
    v78 = v285 + 20;
    if ( v74 == 1 )
    {
      a2 = 0i64;
    }
    else
    {
      a2 = 0i64;
      do
      {
        v89 = *(*(v77 + 16) + 4 * a2);
        if ( v89 >= 0 )
          *(v78 + v89) = 1;
        v90 = *(*(v77 + 16) + 4 * a2 + 4);
        if ( v90 >= 0 )
          *(v78 + v90) = 1;
        a2 += 2i64;
      }
      while ( (v74 & 0xFFFFFFFE) != a2 );
    }
    if ( (v74 & 1) != 0 )
    {
      v79 = *(*(v77 + 16) + 4 * a2);
      if ( v79 >= 0 )
        *(v78 + v79) = 1;
    }
  }
  *(v285 + 36) = 0i64;
  v80 = *(v285 + 12);
  if ( v80 > 0 )
  {
    v81 = v285 + 36;
    if ( v80 == 1 )
    {
      a2 = 0i64;
    }
    else
    {
      a2 = 0i64;
      do
      {
        v91 = *(*(v77 + 32) + 4 * a2);
        if ( v91 >= 0 )
          *(v81 + v91) = 1;
        v92 = *(*(v77 + 32) + 4 * a2 + 4);
        if ( v92 >= 0 )
          *(v81 + v92) = 1;
        a2 += 2i64;
      }
      while ( (v80 & 0xFFFFFFFE) != a2 );
    }
    if ( (v80 & 1) != 0 )
    {
      v82 = *(*(v77 + 32) + 4 * a2);
      if ( v82 >= 0 )
        *(v81 + v82) = 1;
    }
  }
  v83 = *(v75 + 12);
  v84 = *v76;
  if ( v83 > v84 )
  {
    v286 = 0i64;
    v288 = 0i64;
    v291 = v83;
    LODWORD(Src) = 2;
    v293 = v84;
    LODWORD(Size) = 2;
    v287 = off_4B678C8;
    LODWORD(v282) = 2;
    sub_1546EF0(&v286, a2, "Number of propellers = %d is GREATER than number of engines = %d", &Src, v282);
    v85 = off_4B678C0;
    v86 = v288;
    if ( v288 )
    {
      v87 = 16i64;
      if ( v288 >= 0x11 )
        v87 = v288;
      v88 = (*(*off_4B678C0 + 24i64))(off_4B678C0, v87);
      memmove(v88, v286, v86);
    }
    else
    {
      v88 = 0i64;
      LODWORD(v87) = 0;
    }
    v93 = *(v10 + 16);
    v94 = *(v10 + 20);
    if ( v94 == v93 )
    {
      if ( *(v10 + 20) )
      {
        if ( v94 > 0x7F )
          v281 = ((v94 + 1) >> 1) + v94;
        else
          v281 = 2 * v94;
      }
      else
      {
        v281 = 1i64;
      }
      sub_FBE80(v10, v281);
      v93 = *(v10 + 16);
    }
    v95 = *v10;
    *(v10 + 16) = v93 + 1;
    v96 = 32i64 * v93;
    *(v95 + v96) = 1;
    *(v95 + v96 + 8) = v88;
    *(v95 + v96 + 16) = v85;
    *(v95 + v96 + 24) = v86;
    *(v95 + v96 + 28) = v87;
    if ( v286 )
      (*(*v287 + 64i64))(v287);
  }
  Src = 1065353216;
  LODWORD(v291) = 0;
  v97 = v284;
  sub_FAC60(&v314, v284, &Src, 0, 594);
  *(v285 + 52) = *(&v314 + 1) - *&v314;
  Src = 0i64;
  LODWORD(v291) = 1065353216;
  sub_FAC60(v320, v284, &Src, 7, 12);
  *(v285 + 56) = *&v320[1] - *v320;
  Src = 0x3F80000000000000i64;
  LODWORD(v291) = 0;
  *(v285 + 60) = 0i64;
  *(v285 + 76) = 0i64;
  v98 = *(v284 + 176);
  if ( *(v284 + 176) )
  {
    v99 = *(v284 + 160);
    v100 = 0i64;
    while ( 1 )
    {
      v101 = *(v99 + 192);
      if ( !v101 )
        v101 = &szFile;
      if ( !strcmp(v101, "wing_l_dm") )
        break;
      ++v100;
      v99 += 208i64;
      if ( v98 == v100 )
        goto LABEL_156;
    }
    if ( v98 > v100 )
    {
      v103 = sub_FB630(v99, &Src);
      v102 = *&v103;
      *(v285 + 60) = LODWORD(v103);
      v97 = v284;
      LODWORD(v98) = *(v284 + 176);
      goto LABEL_157;
    }
LABEL_156:
    v102 = 0.0;
    v97 = v284;
  }
  else
  {
    v102 = 0.0;
  }
LABEL_157:
  v104 = *(v97 + 160);
  v105 = -1;
  if ( v98 )
  {
    v106 = (v104 + 192);
    v107 = 0i64;
    while ( 1 )
    {
      v108 = *v106;
      if ( !*v106 )
        v108 = &szFile;
      if ( !strcmp(v108, "wing1_l_dm") )
        break;
      ++v107;
      v106 += 26;
      if ( v98 == v107 )
        goto LABEL_165;
    }
    v105 = v107;
LABEL_165:
    v97 = v284;
  }
  if ( v98 > v105 && v104 )
  {
    v109 = sub_FB630(208i64 * v105 + v104, &Src);
    *(v285 + 64) = LODWORD(v109);
    LODWORD(v98) = *(v97 + 176);
  }
  v110 = *(v97 + 160);
  v111 = -1;
  if ( v98 )
  {
    v112 = (v110 + 192);
    v113 = 0i64;
    while ( 1 )
    {
      v114 = *v112;
      if ( !*v112 )
        v114 = &szFile;
      if ( !strcmp(v114, "wing2_l_dm") )
        break;
      ++v113;
      v112 += 26;
      if ( v98 == v113 )
        goto LABEL_177;
    }
    v111 = v113;
LABEL_177:
    v97 = v284;
  }
  if ( v98 > v111 && v110 )
  {
    v115 = sub_FB630(208i64 * v111 + v110, &Src);
    *(v285 + 68) = LODWORD(v115);
    LODWORD(v98) = *(v97 + 176);
  }
  v116 = *(v97 + 160);
  v117 = -1;
  if ( v98 )
  {
    v118 = (v116 + 192);
    v119 = 0i64;
    while ( 1 )
    {
      v120 = *v118;
      if ( !*v118 )
        v120 = &szFile;
      if ( !strcmp(v120, "wing_r_dm") )
        break;
      ++v119;
      v118 += 26;
      if ( v98 == v119 )
        goto LABEL_189;
    }
    v117 = v119;
LABEL_189:
    v97 = v284;
  }
  v121 = 0.0;
  if ( v98 > v117 && v116 )
  {
    v122 = sub_FB630(208i64 * v117 + v116, &Src);
    v121 = *&v122;
    *(v285 + 72) = LODWORD(v122);
    LODWORD(v98) = *(v97 + 176);
  }
  v123 = *(v97 + 160);
  v124 = -1;
  if ( v98 )
  {
    v125 = (v123 + 192);
    v126 = 0i64;
    while ( 1 )
    {
      v127 = *v125;
      if ( !*v125 )
        v127 = &szFile;
      if ( !strcmp(v127, "wing1_r_dm") )
        break;
      ++v126;
      v125 += 26;
      if ( v98 == v126 )
        goto LABEL_201;
    }
    v124 = v126;
LABEL_201:
    v97 = v284;
  }
  if ( v98 > v124 && v123 )
  {
    v128 = sub_FB630(208i64 * v124 + v123, &Src);
    *(v285 + 76) = LODWORD(v128);
    LODWORD(v98) = *(v97 + 176);
  }
  v129 = *(v97 + 160);
  v130 = -1;
  if ( v98 )
  {
    v131 = (v129 + 192);
    v132 = 0i64;
    while ( 1 )
    {
      v133 = *v131;
      if ( !*v131 )
        v133 = &szFile;
      if ( !strcmp(v133, "wing2_r_dm") )
        break;
      ++v132;
      v131 += 26;
      if ( v98 == v132 )
        goto LABEL_213;
    }
    v130 = v132;
LABEL_213:
    v97 = v284;
  }
  if ( v98 > v130 && v129 )
  {
    v134 = sub_FB630(208i64 * v130 + v129, &Src);
    *(v285 + 80) = LODWORD(v134);
    LODWORD(v98) = *(v97 + 176);
  }
  v135 = *(v97 + 160);
  v136 = -1;
  if ( v98 )
  {
    v137 = (v135 + 192);
    v138 = 0i64;
    while ( 1 )
    {
      v139 = *v137;
      if ( !*v137 )
        v139 = &szFile;
      if ( !strcmp(v139, "wing_l_dm") )
        break;
      ++v138;
      v137 += 26;
      if ( v98 == v138 )
        goto LABEL_225;
    }
    v136 = v138;
  }
LABEL_225:
  v140 = 0.0;
  if ( v98 <= v136 )
  {
LABEL_239:
    LODWORD(v289) = 0;
    v141 = 0.0;
    v142 = 0.0;
  }
  else
  {
    LODWORD(v289) = 0;
    v141 = 0.0;
    v142 = 0.0;
    if ( v135 )
    {
      v143 = 208i64 * v136;
      v286 = 1065353216;
      LODWORD(v287) = 0;
      sub_FB920(&v312, v135 + v143, &v286);
      v286 = 0x3F80000000000000i64;
      LODWORD(v287) = 0;
      sub_FB920(&v310, v135 + v143, &v286);
      v286 = 0i64;
      LODWORD(v287) = 1065353216;
      sub_FB920(&v308, v135 + v143, &v286);
      v144 = *(v135 + v143 + 136);
      if ( !*(v135 + v143 + 136) )
        goto LABEL_238;
      v298 = v121;
      v299 = v102;
      v145 = ((v309 - v308) * *&dword_44894DC) + v308;
      v300 = fmaxf(v308, v145);
      LODWORD(v294) = v310;
      v297 = v308;
      v146 = fminf(v145, v308);
      v147 = *(v135 + v143 + 128);
      v148 = *(v135 + v143 + 16);
      LODWORD(v296) = *(v135 + v143 + 20);
      v149 = *(v135 + v143 + 28);
      v150 = *(v135 + v143 + 40);
      v151 = *(v135 + v143 + 52);
      LODWORD(v307) = *(v135 + v143 + 32);
      LODWORD(v306) = *(v135 + v143 + 44);
      LODWORD(v305) = *(v135 + v143 + 56);
      LODWORD(v304) = *(v135 + v143 + 24);
      v303 = *(v135 + v143 + 36);
      v302 = *(v135 + v143 + 48);
      v301 = *(v135 + v143 + 60);
      v152 = (v147 + 8);
      v153 = 0i64;
      *&v289 = v311;
      LODWORD(v295) = dword_449F1B4;
      v140 = *&dword_449F1B8;
      do
      {
        v154 = *(v152 - 2);
        v155 = *(v152 - 1);
        v156 = *v152;
        v157 = ((*v152 * v150) + (v155 * v149)) + ((v154 * v148) + v151);
        if ( v157 >= v312 && v157 <= v313 )
        {
          v158 = ((v156 * *&v306) + (v155 * *&v307)) + ((v154 * *&v296) + *&v305);
          if ( v158 >= *&v294 && v158 <= *&v289 )
          {
            v159 = ((v156 * v302) + (v155 * v303)) + ((v154 * *&v304) + v301);
            if ( v159 >= v146 && v159 <= v300 )
            {
              v140 = fminf(v140, v157);
              LODWORD(v295) = fmaxf(*&v295, v157);
            }
          }
        }
        v153 += 3i64;
        v152 += 12;
      }
      while ( v153 < v144 );
      v142 = *&v295;
      v102 = v299;
      v121 = v298;
      v141 = v297;
      if ( *&v295 <= v140 )
      {
LABEL_238:
        v140 = 0.0;
        goto LABEL_239;
      }
    }
  }
  v160 = -1;
  if ( v98 )
  {
    v161 = (v135 + 192);
    v162 = 0i64;
    while ( 1 )
    {
      v163 = *v161;
      if ( !*v161 )
        v163 = &szFile;
      if ( !strcmp(v163, "wing_r_dm") )
        break;
      ++v162;
      v161 += 26;
      if ( v98 == v162 )
        goto LABEL_248;
    }
    v160 = v162;
  }
LABEL_248:
  v164 = 0.0;
  v165 = 0.0;
  if ( v98 <= v160 )
  {
    v166 = v285;
  }
  else
  {
    v166 = v285;
    if ( v135 )
    {
      v167 = 208i64 * v160;
      v286 = 1065353216;
      LODWORD(v287) = 0;
      sub_FB920(&v312, v135 + v167, &v286);
      v286 = 0x3F80000000000000i64;
      LODWORD(v287) = 0;
      sub_FB920(&v310, v135 + v167, &v286);
      v286 = 0i64;
      LODWORD(v287) = 1065353216;
      sub_FB920(&v308, v135 + v167, &v286);
      v168 = *(v135 + v167 + 136);
      if ( !*(v135 + v167 + 136) )
        goto LABEL_261;
      *&v295 = v142;
      v318 = v140;
      v297 = v141;
      v298 = v121;
      v299 = v102;
      v169 = ((v308 - v309) * *&dword_44894DC) + v309;
      v319 = fmaxf(v309, v169);
      LODWORD(v296) = v310;
      v317 = v309;
      v170 = fminf(v169, v309);
      v171 = *(v135 + v167 + 128);
      v172 = *(v135 + v167 + 16);
      LODWORD(v307) = *(v135 + v167 + 20);
      v173 = *(v135 + v167 + 28);
      v174 = *(v135 + v167 + 40);
      v175 = *(v135 + v167 + 52);
      LODWORD(v306) = *(v135 + v167 + 32);
      LODWORD(v305) = *(v135 + v167 + 44);
      LODWORD(v304) = *(v135 + v167 + 56);
      v303 = *(v135 + v167 + 24);
      v302 = *(v135 + v167 + 36);
      v301 = *(v135 + v167 + 48);
      v300 = *(v135 + v167 + 60);
      v176 = (v171 + 8);
      v177 = 0i64;
      v164 = v311;
      LODWORD(v294) = dword_449F1B4;
      v178 = *&dword_449F1B8;
      do
      {
        v179 = *(v176 - 2);
        v180 = *(v176 - 1);
        v181 = *v176;
        v182 = ((*v176 * v174) + (v180 * v173)) + ((v179 * v172) + v175);
        if ( v182 >= v312 && v182 <= v313 )
        {
          v183 = ((v181 * *&v305) + (v180 * *&v306)) + ((v179 * *&v307) + *&v304);
          if ( v183 >= *&v296 && v183 <= v311 )
          {
            v184 = ((v181 * v301) + (v180 * v302)) + ((v179 * v303) + v300);
            if ( v184 >= v170 && v184 <= v319 )
            {
              v178 = fminf(v178, v182);
              LODWORD(v294) = fmaxf(*&v294, v182);
            }
          }
        }
        v177 += 3i64;
        v176 += 12;
      }
      while ( v177 < v168 );
      v102 = v299;
      v121 = v298;
      v141 = v297;
      v140 = v318;
      v142 = *&v295;
      v165 = v317;
      if ( *&v294 <= v178 )
      {
LABEL_261:
        v164 = 0.0;
        v165 = 0.0;
      }
    }
  }
  v185 = fsqrt(
           (((v140 - v142) * (*&v289 - v164)) * ((v140 - v142) * (*&v289 - v164)))
         + (((v142 - v140) * (v141 - v165)) * ((v142 - v140) * (v141 - v165))))
       * *&dword_44801CC;
  v166[15] = v102 + v185;
  v166[18] = v185 + v121;
  v186 = *(v284 + 176);
  v187 = *(v284 + 160);
  if ( *(v284 + 176) )
  {
    v188 = 0i64;
    v189 = *(v284 + 160);
    while ( 1 )
    {
      v190 = *(v189 + 192);
      if ( !v190 )
        v190 = &szFile;
      if ( !strcmp(v190, "aileron_l_dm") )
        break;
      ++v188;
      v189 += 208i64;
      if ( v186 == v188 )
        goto LABEL_269;
    }
    if ( v186 <= v188 )
    {
      v192 = 0.0;
    }
    else
    {
      v193 = sub_FB630(v189, &Src);
      v192 = *&v193;
    }
    v191 = 0;
    if ( v186 )
    {
LABEL_275:
      v194 = 0i64;
      v195 = v187;
      while ( 1 )
      {
        v196 = *(v195 + 192);
        if ( !v196 )
          v196 = &szFile;
        if ( !strcmp(v196, "aileron1_l_dm") )
          break;
        ++v194;
        v195 += 208i64;
        if ( v186 == v194 )
          goto LABEL_283;
      }
      if ( !v191 && v186 > v194 )
      {
        v197 = sub_FB630(v195, &Src);
        v192 = v192 + *&v197;
      }
LABEL_283:
      v198 = 0i64;
      v199 = v187;
      while ( 1 )
      {
        v200 = *(v199 + 192);
        if ( !v200 )
          v200 = &szFile;
        if ( !strcmp(v200, "aileron2_l_dm") )
          break;
        ++v198;
        v199 += 208i64;
        if ( v186 == v198 )
          goto LABEL_291;
      }
      if ( !v191 && v186 > v198 )
      {
        v201 = sub_FB630(v199, &Src);
        v192 = v192 + *&v201;
      }
LABEL_291:
      v202 = 0i64;
      v203 = v187;
      while ( 1 )
      {
        v204 = *(v203 + 192);
        if ( !v204 )
          v204 = &szFile;
        if ( !strcmp(v204, "aileron3_l_dm") )
          break;
        ++v202;
        v203 += 208i64;
        if ( v186 == v202 )
          goto LABEL_299;
      }
      if ( !v191 && v186 > v202 )
      {
        v205 = sub_FB630(v203, &Src);
        v192 = v192 + *&v205;
      }
LABEL_299:
      v206 = 0i64;
      v207 = v187;
      while ( 1 )
      {
        v208 = *(v207 + 192);
        if ( !v208 )
          v208 = &szFile;
        if ( !strcmp(v208, "aileron_r_dm") )
          break;
        ++v206;
        v207 += 208i64;
        if ( v186 == v206 )
          goto LABEL_307;
      }
      if ( !v191 && v186 > v206 )
      {
        v209 = sub_FB630(v207, &Src);
        v192 = v192 + *&v209;
      }
LABEL_307:
      v210 = 0i64;
      v211 = v187;
      while ( 1 )
      {
        v212 = *(v211 + 192);
        if ( !v212 )
          v212 = &szFile;
        if ( !strcmp(v212, "aileron1_r_dm") )
          break;
        ++v210;
        v211 += 208i64;
        if ( v186 == v210 )
          goto LABEL_315;
      }
      if ( !v191 && v186 > v210 )
      {
        v213 = sub_FB630(v211, &Src);
        v192 = v192 + *&v213;
      }
LABEL_315:
      v214 = 0i64;
      v215 = v187;
      while ( 1 )
      {
        v216 = *(v215 + 192);
        if ( !v216 )
          v216 = &szFile;
        if ( !strcmp(v216, "aileron2_r_dm") )
          break;
        ++v214;
        v215 += 208i64;
        if ( v186 == v214 )
          goto LABEL_323;
      }
      if ( !v191 && v186 > v214 )
      {
        v217 = sub_FB630(v215, &Src);
        v192 = v192 + *&v217;
      }
LABEL_323:
      v218 = 0i64;
      while ( 1 )
      {
        v219 = *(v187 + 192);
        if ( !v219 )
          v219 = &szFile;
        if ( !strcmp(v219, "aileron3_r_dm") )
          break;
        ++v218;
        v187 += 208i64;
        if ( v186 == v218 )
        {
          v166 = v285;
          goto LABEL_329;
        }
      }
      v166 = v285;
      if ( !v191 && v186 > v218 )
      {
        v280 = sub_FB630(v187, &Src);
        v192 = v192 + *&v280;
      }
    }
  }
  else
  {
LABEL_269:
    v191 = v187 == 0;
    v192 = 0.0;
    if ( v186 )
      goto LABEL_275;
  }
LABEL_329:
  v166[21] = v192;
  v220 = *(v284 + 176);
  v221 = *(v284 + 160);
  if ( *(v284 + 176) )
  {
    v222 = 0i64;
    v223 = *(v284 + 160);
    while ( 1 )
    {
      v224 = *(v223 + 192);
      if ( !v224 )
        v224 = &szFile;
      if ( !strcmp(v224, "stab_dm") )
        break;
      ++v222;
      v223 += 208i64;
      if ( v220 == v222 )
        goto LABEL_335;
    }
    if ( v220 <= v222 )
    {
      v226 = 0.0;
    }
    else
    {
      v227 = sub_FB630(v223, &Src);
      v226 = *&v227;
    }
    v225 = 0;
    if ( v220 )
    {
LABEL_341:
      v228 = 0i64;
      v229 = v221;
      while ( 1 )
      {
        v230 = *(v229 + 192);
        if ( !v230 )
          v230 = &szFile;
        if ( !strcmp(v230, "stab1_dm") )
          break;
        ++v228;
        v229 += 208i64;
        if ( v220 == v228 )
          goto LABEL_349;
      }
      if ( !v225 && v220 > v228 )
      {
        v231 = sub_FB630(v229, &Src);
        v226 = v226 + *&v231;
      }
LABEL_349:
      v166 = v285;
      v232 = 0i64;
      while ( 1 )
      {
        v233 = *(v221 + 192);
        if ( !v233 )
          v233 = &szFile;
        if ( !strcmp(v233, "stab2_dm") )
          break;
        ++v232;
        v221 += 208i64;
        if ( v220 == v232 )
          goto LABEL_357;
      }
      if ( !v225 && v220 > v232 )
      {
        v234 = sub_FB630(v221, &Src);
        v226 = v226 + *&v234;
      }
    }
  }
  else
  {
LABEL_335:
    v225 = v221 == 0;
    v226 = 0.0;
    if ( v220 )
      goto LABEL_341;
  }
LABEL_357:
  v166[22] = v226;
  v235 = *(v284 + 176);
  v236 = *(v284 + 160);
  if ( *(v284 + 176) )
  {
    v237 = 0i64;
    v238 = *(v284 + 160);
    while ( 1 )
    {
      v239 = *(v238 + 192);
      if ( !v239 )
        v239 = &szFile;
      if ( !strcmp(v239, "elevator_dm") )
        break;
      ++v237;
      v238 += 208i64;
      if ( v235 == v237 )
        goto LABEL_363;
    }
    if ( v235 <= v237 )
    {
      v241 = 0.0;
    }
    else
    {
      v242 = sub_FB630(v238, &Src);
      v241 = *&v242;
    }
    v240 = 0;
    if ( v235 )
    {
LABEL_369:
      v243 = 0i64;
      v244 = v236;
      while ( 1 )
      {
        v245 = *(v244 + 192);
        if ( !v245 )
          v245 = &szFile;
        if ( !strcmp(v245, "elevator0_dm") )
          break;
        ++v243;
        v244 += 208i64;
        if ( v235 == v243 )
          goto LABEL_377;
      }
      if ( !v240 && v235 > v243 )
      {
        v246 = sub_FB630(v244, &Src);
        v241 = v241 + *&v246;
      }
LABEL_377:
      v166 = v285;
      v247 = 0i64;
      while ( 1 )
      {
        v248 = *(v236 + 192);
        if ( !v248 )
          v248 = &szFile;
        if ( !strcmp(v248, "elevator1_dm") )
          break;
        ++v247;
        v236 += 208i64;
        if ( v235 == v247 )
          goto LABEL_385;
      }
      if ( !v240 && v235 > v247 )
      {
        v249 = sub_FB630(v236, &Src);
        v241 = v241 + *&v249;
      }
    }
  }
  else
  {
LABEL_363:
    v240 = v236 == 0;
    v241 = 0.0;
    if ( v235 )
      goto LABEL_369;
  }
LABEL_385:
  v166[23] = v241;
  v286 = 0i64;
  LODWORD(v287) = 1065353216;
  v250 = *(v284 + 176);
  v251 = *(v284 + 160);
  if ( *(v284 + 176) )
  {
    v252 = 0i64;
    v253 = *(v284 + 160);
    while ( 1 )
    {
      v254 = *(v253 + 192);
      if ( !v254 )
        v254 = &szFile;
      if ( !strcmp(v254, "fin_dm") )
        break;
      ++v252;
      v253 += 208i64;
      if ( v250 == v252 )
        goto LABEL_391;
    }
    if ( v250 <= v252 )
    {
      v256 = 0.0;
    }
    else
    {
      v257 = sub_FB630(v253, &v286);
      v256 = *&v257;
    }
    v255 = 0;
    if ( v250 )
    {
LABEL_397:
      v258 = 0i64;
      v259 = v251;
      while ( 1 )
      {
        v260 = *(v259 + 192);
        if ( !v260 )
          v260 = &szFile;
        if ( !strcmp(v260, "fin1_dm") )
          break;
        ++v258;
        v259 += 208i64;
        if ( v250 == v258 )
          goto LABEL_405;
      }
      if ( !v255 && v250 > v258 )
      {
        v261 = sub_FB630(v259, &v286);
        v256 = v256 + *&v261;
      }
LABEL_405:
      v166 = v285;
      v262 = 0i64;
      while ( 1 )
      {
        v263 = *(v251 + 192);
        if ( !v263 )
          v263 = &szFile;
        if ( !strcmp(v263, "fin2_dm") )
          break;
        ++v262;
        v251 += 208i64;
        if ( v250 == v262 )
          goto LABEL_413;
      }
      if ( !v255 && v250 > v262 )
      {
        v264 = sub_FB630(v251, &v286);
        v256 = v256 + *&v264;
      }
    }
  }
  else
  {
LABEL_391:
    v255 = v251 == 0;
    v256 = 0.0;
    if ( v250 )
      goto LABEL_397;
  }
LABEL_413:
  v166[24] = v256;
  v265 = *(v284 + 176);
  v266 = *(v284 + 160);
  if ( *(v284 + 176) )
  {
    v267 = 0i64;
    v268 = *(v284 + 160);
    while ( 1 )
    {
      v269 = *(v268 + 192);
      if ( !v269 )
        v269 = &szFile;
      if ( !strcmp(v269, "rudder_dm") )
        break;
      ++v267;
      v268 += 208i64;
      if ( v265 == v267 )
        goto LABEL_419;
    }
    if ( v265 <= v267 )
    {
      v271 = 0.0;
    }
    else
    {
      v272 = sub_FB630(v268, &v286);
      v271 = *&v272;
    }
    v270 = 0;
    if ( v265 )
    {
LABEL_425:
      v273 = 0i64;
      v274 = v266;
      while ( 1 )
      {
        v275 = *(v274 + 192);
        if ( !v275 )
          v275 = &szFile;
        if ( !strcmp(v275, "rudder0_dm") )
          break;
        ++v273;
        v274 += 208i64;
        if ( v265 == v273 )
          goto LABEL_433;
      }
      if ( !v270 && v265 > v273 )
      {
        v276 = sub_FB630(v274, &v286);
        v271 = v271 + *&v276;
      }
LABEL_433:
      v166 = v285;
      v277 = 0i64;
      while ( 1 )
      {
        v278 = *(v266 + 192);
        if ( !v278 )
          v278 = &szFile;
        if ( !strcmp(v278, "rudder1_dm") )
          break;
        ++v277;
        v266 += 208i64;
        if ( v265 == v277 )
          goto LABEL_441;
      }
      if ( !v270 && v265 > v277 )
      {
        v279 = sub_FB630(v266, &v286);
        v271 = v271 + *&v279;
      }
    }
  }
  else
  {
LABEL_419:
    v270 = v266 == 0;
    v271 = 0.0;
    if ( v265 )
      goto LABEL_425;
  }
LABEL_441:
  v166[25] = v271;
}
