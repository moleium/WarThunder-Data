void __fastcall unit_shooting(__int64 Unit, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edx
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 UnitWeaponInfo; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 UnitWeaponInfo_; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rbx
  char *v28; // rdx
  int v29; // r15d
  int v30; // r12d
  int v31; // r14d
  int v32; // r13d
  unsigned __int64 v33; // rcx
  int v34; // edx
  char v35; // bp
  float v36; // xmm0_4
  int v37; // eax
  __int64 ballistics_; // rbx
  _DWORD *v39; // rcx
  unsigned int v40; // edi
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rdx
  unsigned int v44; // eax
  int v45; // ecx
  __int64 v46; // rax
  __int64 *v47; // rax
  __int64 v48; // r12
  __int64 v49; // rbx
  __int64 v50; // rbp
  char v51; // di
  char v52; // r14
  int v53; // r15d
  __int64 v54; // rdi
  float v55; // xmm2_4
  float v56; // xmm0_4
  float v57; // xmm1_4
  float v58; // xmm3_4
  float v59; // xmm4_4
  float v60; // xmm1_4
  float v61; // xmm0_4
  float v62; // xmm3_4
  float v63; // xmm10_4
  float v64; // xmm3_4
  float v65; // xmm0_4
  float v66; // xmm4_4
  __int64 v67; // r14
  __int64 v68; // r15
  unsigned __int8 v69; // bp
  __int64 v70; // rax
  __int64 v71; // rbx
  unsigned int v72; // eax
  int v73; // ecx
  double v74; // xmm6_8
  double v75; // xmm0_8
  __int64 v76; // rax
  float v77; // xmm6_4
  char v78; // al
  unsigned int v79; // ebx
  __int64 v80; // rax
  float v81; // xmm1_4
  unsigned int v82; // eax
  int v83; // ecx
  __int64 v84; // r15
  __int64 v85; // rbp
  __int64 v86; // rbx
  __int64 v87; // rax
  __int64 v88; // rax
  unsigned int v89; // eax
  __int64 v90; // rcx
  __int64 v91; // rcx
  unsigned int v92; // eax
  int v93; // edx
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rbx
  __int64 v97; // rax
  __int64 v98; // rax
  int v99; // eax
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rbx
  __int64 v103; // rdx
  __int64 v104; // rbp
  __int64 v105; // rax
  __int64 v106; // r9
  __int64 v107; // rdi
  __int64 v108; // rax
  __int64 v109; // rax
  bool v110; // al
  bool v111; // dl
  __int64 v112; // rdx
  __int64 v113; // rbx
  __int64 v114; // r9
  __int64 v115; // rax
  __int64 v116; // rcx
  unsigned int *v117; // rbx
  int v118; // edx
  __int64 v119; // rcx
  char *v120; // rdx
  __int64 v121; // rdx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rax
  __int64 v125; // rax
  __int128 v126; // xmm6
  __int128 v127; // xmm7
  __int64 v128; // rcx
  int v129; // eax
  int v130; // ecx
  __int64 v131; // rax
  bool v132; // al
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rcx
  __int64 v136; // rax
  __int64 v137; // r8
  __int64 v138; // rcx
  __int64 v139; // rax
  bool v140; // bl
  __int64 v141; // rax
  __int64 v142; // rbx
  __int64 v143; // rax
  float v144; // xmm0_4
  float v145; // xmm1_4
  float v146; // xmm9_4
  float v147; // xmm2_4
  float v148; // xmm1_4
  float v149; // xmm4_4
  __int64 v150; // rax
  __int64 v151; // r15
  char v152; // bl
  __int64 v153; // r8
  __int64 *v154; // r13
  __int16 v155; // bp
  __int64 v156; // r14
  __int64 v157; // rcx
  float v158; // xmm0_4
  double v159; // xmm0_8
  __int64 v160; // r9
  __int16 v161; // r12
  __int64 v162; // rbx
  unsigned int v163; // eax
  int v164; // ecx
  __int64 v165; // rdx
  char *v166; // r9
  __int64 v167; // rcx
  _DWORD *v168; // rax
  float v169; // xmm8_4
  int v170; // xmm0_4
  int v171; // xmm2_4
  int v172; // xmm3_4
  float v173; // xmm3_4
  float v174; // xmm2_4
  float v175; // xmm6_4
  float v176; // xmm7_4
  float v177; // xmm1_4
  float v178; // xmm4_4
  float v179; // xmm0_4
  float v180; // xmm5_4
  float v181; // xmm3_4
  float v182; // xmm0_4
  float v183; // xmm2_4
  float v184; // xmm4_4
  float v185; // xmm4_4
  float v186; // xmm1_4
  float v187; // xmm0_4
  float v188; // xmm2_4
  float v189; // xmm1_4
  __int64 v190; // rcx
  int v191; // eax
  __int64 v192; // rcx
  __int64 v193; // rcx
  __int64 v194; // rax
  int v195; // r8d
  int v196; // r9d
  __int64 v197; // rax
  __int64 v198; // rax
  __int64 v199; // rdx
  __int64 v200; // rax
  float v201; // xmm2_4
  float v202; // xmm0_4
  float v203; // xmm1_4
  float v204; // xmm4_4
  float v205; // xmm1_4
  float v206; // xmm0_4
  float v207; // xmm3_4
  char *v208; // r8
  char *v209; // rdx
  __int64 v210; // rax
  _DWORD *v211; // rax
  __int64 v212; // rcx
  __int64 v213; // rcx
  __int64 v214; // rdi
  __int64 v215; // rcx
  __int64 v216; // rbp
  unsigned __int16 v217; // bp
  int v218; // ebx
  __int64 v219; // rax
  float v220; // xmm1_4
  __int64 v221; // rax
  float v222; // xmm1_4
  __int64 v223; // rax
  __int64 v224; // rax
  __int64 v225; // rcx
  float v226; // xmm8_4
  unsigned int v227; // ebp
  unsigned int v228; // ebp
  int v229; // ebx
  float v230; // xmm9_4
  float v231; // xmm10_4
  unsigned int v232; // eax
  float v233; // xmm6_4
  float v234; // xmm11_4
  float v235; // xmm7_4
  unsigned int v236; // xmm0_4
  __int64 v237; // r8
  unsigned int v238; // xmm1_4
  float v239; // xmm0_4
  unsigned __int64 v240; // rdx
  int v241; // ecx
  __int64 v242; // rax
  __int64 v243; // rdx
  __int64 v244; // rbx
  __int64 v245; // r14
  __int64 v246; // rax
  unsigned int v247; // edx
  int v248; // ecx
  bool v249; // bp
  __int64 v250; // rbx
  float v251; // xmm0_4
  __int64 v252; // rax
  __int64 v253; // rcx
  int v254; // esi
  int v255; // eax
  double v256; // xmm0_8
  __int64 v257; // rcx
  float v258; // xmm1_4
  float v259; // xmm1_4
  float v260; // xmm0_4
  float v261; // xmm6_4
  float v262; // xmm10_4
  float v263; // xmm9_4
  float v264; // xmm8_4
  float v265; // xmm11_4
  float v266; // xmm12_4
  float v267; // xmm1_4
  float v268; // xmm4_4
  float v269; // xmm2_4
  float v270; // xmm0_4
  float v271; // xmm5_4
  float v272; // xmm0_4
  float v273; // xmm3_4
  __int64 v274; // rcx
  __int64 v275; // rax
  unsigned int v276; // eax
  int v277; // edx
  int v278; // eax
  __int64 v279; // rcx
  __int64 v280; // rcx
  __int64 v281; // rax
  float v282; // xmm0_4
  __m128d v283; // xmm1
  __int64 v284; // rdx
  unsigned int v285; // eax
  int v286; // ecx
  __int64 game_; // rax
  __int64 ballistics; // rcx
  unsigned int v289; // edi
  __int64 v290; // r12
  __int64 v291; // rbx
  __int64 v292; // rbp
  __int64 v293; // rdi
  __int64 v294; // r12
  __int64 v295; // rbx
  __int64 v296; // rbp
  __int64 v297; // rdi
  int v298; // ebx
  int v299; // eax
  char *v300; // rdx
  __int64 v301; // rax
  char v302; // cl
  float v303; // xmm0_4
  __int64 v304; // rdx
  float v305; // xmm2_4
  float v306; // xmm4_4
  float v307; // xmm7_4
  float v308; // xmm2_4
  int v309; // ecx
  char v310; // al
  float v311; // xmm0_4
  float v312; // xmm1_4
  float v313; // xmm2_4
  float v314; // xmm2_4
  float v315; // xmm3_4
  float v316; // xmm0_4
  unsigned int v317; // eax
  unsigned int v318; // edx
  float v319; // xmm0_4
  unsigned int v320; // xmm2_4
  unsigned int v321; // xmm3_4
  __int64 v322; // rbx
  int v323; // r9d
  unsigned int v324; // eax
  double v325; // xmm6_8
  char v326; // [rsp+85h] [rbp-343h] BYREF
  char v327; // [rsp+86h] [rbp-342h] BYREF
  unsigned __int8 v328; // [rsp+87h] [rbp-341h] BYREF
  __int64 v329; // [rsp+88h] [rbp-340h] BYREF
  int v330; // [rsp+90h] [rbp-338h]
  int v331; // [rsp+98h] [rbp-330h] BYREF
  unsigned __int16 v332; // [rsp+9Eh] [rbp-32Ah] BYREF
  __m256 v333; // [rsp+A0h] [rbp-328h] BYREF
  __m128i v334; // [rsp+C0h] [rbp-308h]
  int v335; // [rsp+DCh] [rbp-2ECh]
  char v336[16]; // [rsp+E0h] [rbp-2E8h] BYREF
  __m256i v337; // [rsp+F0h] [rbp-2D8h] BYREF
  float v338; // [rsp+110h] [rbp-2B8h]
  __int64 v339; // [rsp+114h] [rbp-2B4h]
  __int64 v340; // [rsp+11Ch] [rbp-2ACh]
  __int128 v341; // [rsp+128h] [rbp-2A0h]
  char v342; // [rsp+138h] [rbp-290h]
  __int64 v343; // [rsp+13Ch] [rbp-28Ch]
  char v344; // [rsp+1B0h] [rbp-218h]
  int v345; // [rsp+1B4h] [rbp-214h]
  __int128 v346; // [rsp+1B8h] [rbp-210h]
  __int64 v347; // [rsp+290h] [rbp-138h] BYREF
  int v348; // [rsp+298h] [rbp-130h]
  __int64 v349; // [rsp+2A0h] [rbp-128h] BYREF
  int v350; // [rsp+2A8h] [rbp-120h]
  __int128 v351; // [rsp+2B0h] [rbp-118h] BYREF
  __m256i v352; // [rsp+2C0h] [rbp-108h] BYREF
  float v353; // [rsp+2E0h] [rbp-E8h]
  __int64 v354; // [rsp+2E4h] [rbp-E4h]
  int v355; // [rsp+2ECh] [rbp-DCh]
  __int128 v356[2]; // [rsp+2F0h] [rbp-D8h] BYREF

  v4 = *(a2 + 0x18);
  if ( v4 <= 0xD0AC )
  {
    if ( *(a2 + 0x18) <= 0xB0C5u )
    {
      if ( *(a2 + 0x18) > 0xB06Du )
      {
        if ( v4 == 0xB06E )
        {
          v16 = *(Unit + 0x11A0);
          if ( v16 )
          {
            if ( *(v16 + 0x78) )
            {
              v17 = *(a2 + 0xC8);
              if ( *(v16 + 0x2A8) > v17 )
              {
                v18 = *(*(v16 + 0x2A0) + 4 * v17);
                if ( (v18 & 0x8000) == 0 && *(v16 + 0x4C0) > v18 )
                  *(*(v16 + 0x4B8) + 4 * v18) = *(a2 + 0xCC);
              }
            }
          }
        }
        else if ( v4 == 0xB0C5 )
        {
          sub_33C2C0(Unit, *(a2 + 0xC8), *(a2 + 0xC9));
        }
      }
      else if ( v4 == 0xB062 )
      {
        v13 = *(Unit + 0x10B8);
        if ( v13 && (*(v13 + 0x4F8) - 6 < 3 || (*(v13 + 0x1B8) & 0x20) != 0) )
          sub_472C50(v13, *(a2 + 0xC8));
      }
      else if ( v4 == 0xB063 )
      {
        *(Unit + 0x998) = *(a2 + 0xC8);
      }
    }
    else if ( *(a2 + 0x18) <= 0xD00Eu )
    {
      if ( v4 == 0xB0C6 )
      {
        v14 = *(a2 + 0xC8);
        if ( v14 && (*(*v14 + 0x188i64))(v14, Unit) )
        {
          v15 = *(game + 0x5D0);
          if ( sub_4E0C80(v15, Unit) )
          {
            sub_4E0CE0(v15, Unit);
            v15 = *(game + 0x5D0);
          }
          sub_4E0420(v15, Unit, *(a2 + 0xC8), *(Unit + 0x1120) + 0x228, a2 + 0xD0);
          sub_366190(Unit);
        }
      }
      else if ( v4 == 0xB0E5 )
      {
        *(Unit + 0x1479) = *(a2 + 0xC8);
      }
    }
    else
    {
      switch ( v4 )
      {
        case 0xD00Fu:
          sub_3470E0(Unit, 0i64, a2 + 0xC8, 0i64);
          break;
        case 0xD046u:
          if ( (*(Unit + 0x1058) & 0x7000014) == 0 )
          {
            v7 = *(a2 + 0xC8);
            v8 = *(Unit + 0x11D0);
            if ( *(v8 + 0x310) > v7 )
            {
              v9 = *(a2 + 0xCA);
              v10 = *(v8 + 0x300);
              v11 = 0x10i64 * v7;
              if ( *(v10 + v11 + 8) > v9 )
              {
                v12 = *(*(v10 + v11) + 8i64 * v9);
                if ( v12 )
                  (*(*v12 + 0xB8i64))(v12);
              }
            }
          }
          break;
        case 0xD089u:
          (*(*Unit + 0x410i64))(Unit, a2 + 0xC8, *(a2 + 0xE8), 0i64);
          break;
      }
    }
    return;
  }
  switch ( *(a2 + 0x18) )
  {
    case 0xF011:
      v5 = *(a2 + 0xC8);
      v6 = *(Unit + 0x11A0);
      if ( *(v6 + 0x310) > v5 )
        (*(*Unit + 0x440i64))(Unit, *(*(v6 + 0x308) + 0x38i64 * v5 + 0xC), a2 + 0xD0);
      return;
    case 0xF012:
    case 0xF013:
    case 0xF014:
    case 0xF015:
    case 0xF016:
    case 0xF017:
    case 0xF018:
    case 0xF019:
    case 0xF01A:
    case 0xF01B:
    case 0xF01C:
    case 0xF01D:
    case 0xF01E:
    case 0xF01F:
    case 0xF020:
    case 0xF021:
    case 0xF022:
    case 0xF023:
    case 0xF024:
    case 0xF025:
    case 0xF028:
    case 0xF029:
    case 0xF02A:
    case 0xF02B:
    case 0xF02C:
    case 0xF02D:
    case 0xF02E:
    case 0xF031:
    case 0xF032:
    case 0xF034:
    case 0xF035:
    case 0xF036:
    case 0xF037:
    case 0xF039:
    case 0xF03A:
    case 0xF03B:
    case 0xF03C:
    case 0xF03D:
    case 0xF03E:
    case 0xF03F:
    case 0xF040:
    case 0xF041:
    case 0xF042:
    case 0xF043:
    case 0xF044:
    case 0xF045:
    case 0xF046:
    case 0xF047:
    case 0xF048:
    case 0xF049:
    case 0xF04A:
    case 0xF04C:
    case 0xF04E:
    case 0xF04F:
    case 0xF051:
    case 0xF052:
    case 0xF055:
    case 0xF056:
    case 0xF057:
    case 0xF058:
    case 0xF059:
    case 0xF05A:
    case 0xF05B:
    case 0xF05C:
    case 0xF05D:
    case 0xF05E:
    case 0xF05F:
    case 0xF060:
    case 0xF061:
    case 0xF062:
    case 0xF063:
    case 0xF064:
    case 0xF065:
    case 0xF066:
    case 0xF067:
    case 0xF068:
    case 0xF069:
    case 0xF06A:
    case 0xF06B:
    case 0xF06C:
    case 0xF06D:
    case 0xF06E:
    case 0xF06F:
    case 0xF070:
    case 0xF072:
    case 0xF073:
    case 0xF074:
    case 0xF075:
    case 0xF076:
    case 0xF077:
    case 0xF078:
    case 0xF079:
    case 0xF07A:
    case 0xF07B:
    case 0xF07C:
    case 0xF07D:
    case 0xF07E:
    case 0xF080:
    case 0xF081:
    case 0xF082:
    case 0xF083:
    case 0xF084:
    case 0xF085:
    case 0xF086:
    case 0xF087:
    case 0xF088:
    case 0xF089:
    case 0xF08A:
    case 0xF08B:
    case 0xF08C:
    case 0xF08D:
    case 0xF08E:
    case 0xF090:
    case 0xF091:
    case 0xF092:
    case 0xF093:
    case 0xF094:
    case 0xF095:
    case 0xF096:
    case 0xF097:
    case 0xF098:
    case 0xF099:
    case 0xF09A:
    case 0xF09B:
    case 0xF09C:
    case 0xF09D:
    case 0xF09E:
    case 0xF09F:
    case 0xF0A0:
    case 0xF0A1:
    case 0xF0A2:
    case 0xF0A3:
    case 0xF0A4:
    case 0xF0A8:
    case 0xF0A9:
    case 0xF0AA:
    case 0xF0AB:
    case 0xF0AC:
    case 0xF0AD:
    case 0xF0AE:
    case 0xF0AF:
    case 0xF0B0:
    case 0xF0B2:
    case 0xF0B3:
    case 0xF0B4:
    case 0xF0B5:
    case 0xF0B6:
    case 0xF0B7:
    case 0xF0B8:
    case 0xF0B9:
    case 0xF0BA:
    case 0xF0BE:
    case 0xF0BF:
    case 0xF0C0:
    case 0xF0C1:
    case 0xF0C3:
    case 0xF0C4:
    case 0xF0C5:
    case 0xF0C6:
    case 0xF0C7:
    case 0xF0C8:
    case 0xF0C9:
    case 0xF0CB:
    case 0xF0CD:
    case 0xF0CE:
    case 0xF0CF:
    case 0xF0D0:
    case 0xF0D1:
    case 0xF0D2:
    case 0xF0D3:
    case 0xF0D4:
    case 0xF0D6:
    case 0xF0D7:
    case 0xF0D8:
    case 0xF0D9:
    case 0xF0DA:
    case 0xF0DB:
    case 0xF0DC:
    case 0xF0DD:
    case 0xF0DE:
    case 0xF0DF:
    case 0xF0E0:
    case 0xF0E1:
    case 0xF0E2:
    case 0xF0E4:
    case 0xF0E5:
    case 0xF0E6:
    case 0xF0E7:
    case 0xF0E8:
    case 0xF0EA:
    case 0xF0EB:
    case 0xF0EC:
    case 0xF0EE:
    case 0xF0EF:
    case 0xF0F1:
    case 0xF0F2:
    case 0xF0F3:
    case 0xF0F4:
    case 0xF0F5:
    case 0xF0F7:
    case 0xF0F8:
    case 0xF0FA:
    case 0xF0FB:
    case 0xF0FC:
    case 0xF0FE:
    case 0xF0FF:
    case 0xF100:
    case 0xF102:
    case 0xF103:
    case 0xF104:
    case 0xF105:
    case 0xF106:
    case 0xF107:
    case 0xF108:
    case 0xF109:
    case 0xF10B:
    case 0xF10C:
    case 0xF10D:
    case 0xF10E:
    case 0xF10F:
    case 0xF110:
    case 0xF111:
    case 0xF112:
    case 0xF113:
    case 0xF114:
    case 0xF115:
    case 0xF116:
    case 0xF118:
    case 0xF119:
    case 0xF11A:
    case 0xF11B:
    case 0xF11C:
    case 0xF11D:
    case 0xF11F:
    case 0xF121:
    case 0xF122:
    case 0xF123:
    case 0xF124:
    case 0xF125:
    case 0xF126:
    case 0xF12A:
    case 0xF12B:
    case 0xF12C:
    case 0xF12D:
    case 0xF12E:
    case 0xF12F:
    case 0xF132:
    case 0xF136:
    case 0xF137:
    case 0xF138:
    case 0xF139:
    case 0xF13A:
    case 0xF13B:
    case 0xF13D:
    case 0xF13E:
    case 0xF13F:
    case 0xF141:
    case 0xF142:
    case 0xF143:
    case 0xF145:
    case 0xF146:
    case 0xF148:
    case 0xF149:
      return;
    case 0xF026:
      UnitWeaponInfo = *(Unit + 0x11D0);
      if ( UnitWeaponInfo )
      {
        v20 = *(a2 + 0xC8);
        if ( v20 < *(UnitWeaponInfo + 0x1A0) )
        {
          v21 = *(UnitWeaponInfo + 0x190);
          v22 = 0x290 * v20;
          *(v21 + v22 + 0x48) = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*(a2 + 0xCC)));
          *(v21 + v22 + 0x50) = *(a2 + 0xD0);
          if ( *(a2 + 0xD0) )
            *(v21 + v22 + 0x1F0) = 0;
        }
      }
      return;
    case 0xF027:
      UnitWeaponInfo_ = *(Unit + 0x11D0);
      if ( UnitWeaponInfo_ )
      {
        v24 = *(a2 + 0xC8);
        if ( v24 < *(UnitWeaponInfo_ + 0x1A0) )
        {
          v25 = *(UnitWeaponInfo_ + 0x190);
          v26 = 0x290 * v24;
          *(v25 + v26 + 0x4C) = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*(a2 + 0xCC)));
          *(v25 + v26 + 0x51) = *(a2 + 0xD0);
          if ( *(a2 + 0xD0) )
            *(v25 + v26 + 0x1F4) = 0;
        }
      }
      return;
    case 0xF02F:
      if ( (*(Unit + 0x1058) & 0x2000010) != 0 )
        return;
      if ( !*(Unit + 0x10B8) )
        goto LABEL_485;
      v27 = Unit + 0x50;
      if ( (*(*(Unit + 0x50) + 0x10i64))(Unit + 0x50) && (dword_4B1C814 & 4) != 0 )
      {
        if ( *(*(Unit + 0x10B8) + 0x4F8i64) != 8 )
          return;
      }
      else if ( !*(Unit + 0x10B8) )
      {
        goto LABEL_485;
      }
      if ( (*(*v27 + 0x10i64))(Unit + 0x50) && g_net && (dword_4B1C810 - 3) >= 2 )
      {
        sub_A63E80(*(*(Unit + 0x10B8) + 8i64), 6i64);
        LOBYTE(v304) = 1;
        sub_3227C0(Unit, v304);
        return;
      }
LABEL_485:
      v340 = 0i64;
      memset(&v337, 0, sizeof(v337));
      v338 = 0.0;
      v339 = 0x3F800000i64;
      v341 = 0i64;
      v342 = 0;
      v343 = 0xFFFFFFFFFFFFFFFFui64;
      if ( *(Unit + 0x10B8) )
        (*(*(Unit + 0x50) + 0x10i64))(Unit + 0x50);
      if ( *(Unit + 0x1828) )
      {
        sub_3421C0(Unit, *(Unit + 0x1830), *(Unit + 0x1838), *(Unit + 0x183C), 1, 0, &v337, 0);
      }
      else
      {
        v289 = *(a2 + 0xC8);
        if ( *(Unit + 0x10B8) && (*(*(Unit + 0x50) + 0x10i64))(Unit + 0x50) )
          v289 = *(*(Unit + 0x10B8) + 0xC50i64);
        (*(*Unit + 0xD0i64))(Unit, v289, &v337);
      }
      if ( !HIBYTE(v341) )
        sub_3384C0(Unit, &v337);
      return;
    case 0xF030:
      if ( (*(Unit + 0x1058) & 0x2000010) != 0 )
      {
        v28 = "ERROR! UNIT_RESPAWN missed: isLoading = true";
LABEL_61:
        logmessage_fmt(3u, v28, 0i64, 0);
        return;
      }
      if ( *(Unit + 0x10B0) != 0xD )
      {
        v150 = *(Unit + 0x11A0);
        if ( !v150 )
        {
          v28 = "ERROR! UNIT_RESPAWN missed: getVisual() = NULL";
          goto LABEL_61;
        }
        if ( !**(v150 + 0x90) )
        {
          v337.m256i_i64[1] = *(Unit + 0x11A0);
          v337.m256i_i32[0] = 5;
          v300 = "ERROR! UNIT_RESPAWN missed: visual = %p, visualCreated = false";
          goto LABEL_543;
        }
      }
      v151 = Unit + 0x50;
      v152 = *(a2 + 0xF4) & 0xF;
      *(Unit + 0x60) = v152 | (*(*(Unit + 0x50) + 0x60i64))(Unit + 0x50) & 0xF0;
      *(Unit + 0x10C8) = *(a2 + 0xF8);
      *(Unit + 0x10CC) = *(a2 + 0xFC);
      v154 = (a2 + 0xCC);
      *(Unit + 0x10D8) = *(a2 + 0xD4);
      *(Unit + 0x10D0) = *(a2 + 0xCC);
      v155 = *(Unit + 0x10B0);
      v156 = 0i64;
      if ( v155 == 3 )
        v156 = Unit;
      if ( v155 == 3 && *(Unit + 0x10A8) >= 2u )
      {
        LOBYTE(v153) = 1;
        sub_11554D0(v156, &v337, v153);
        sub_842800(v156, 0xFFFFFFFFi64, &v337);
      }
      v157 = *(game + 0x418);
      v158 = *(a2 + 0xC8);
      v349 = *v154;
      v350 = *(a2 + 0xD4);
      v159 = sub_5B4DF0(
               v157,
               &v349,
               v336,
               &v331,
               1,
               ((v158 * *&dword_44A9474) + *&dword_44801CC),
               0i64,
               0x45610000,
               0,
               1,
               1,
               0i64,
               0,
               1,
               0xBF800000);
      sub_37A430(
        *(Unit + 8),
        *&v159,
        *(a2 + 0xD0),
        *(a2 + 0xCC),
        COERCE__INT64(*(a2 + 0xD0)),
        COERCE__INT64(*(a2 + 0xD4)));
      v161 = *(Unit + 0x10B0);
      v162 = 0i64;
      if ( !v161 )
        v162 = Unit;
      if ( !v161 )
        sub_3F83D0(v162);
      if ( (*(Unit + 0x58) & 4) == 0
        && *(Unit + 0x10B8)
        && !(*(*v151 + 0x18i64))(Unit + 0x50)
        && (v163 = *(Unit + 0x10B0), v163 <= 0xF)
        && (v164 = 0x897E, _bittest(&v164, v163))
        && sub_326810(Unit) )
      {
        v330 = 0;
        v329 = 0i64;
        LOBYTE(v165) = 1;
        sub_4BD180(*(Unit + 0x11C8), v165);
      }
      else
      {
        v330 = *(a2 + 0xD4);
        v329 = *v154;
      }
      LOBYTE(v160) = 1;
      set_unit_value(Unit, 0i64, &v329, v160, 1);
      if ( *&mUnit == Unit || (*(*v151 + 0x18i64))(Unit + 0x50) )
      {
        v210 = *(game + 0x630);
        if ( v210 )
        {
          v211 = *(v210 + 0xAD0);
          if ( v211 )
          {
            *v211 = 0xBF800000;
            v211[0x16] = 2;
          }
        }
      }
      v333.m256_f32[2] = 0.0;
      *v333.m256_f32 = 0i64;
      *&v333.m256_f32[3] = 0x3F800000ui64;
      sub_158B1F0(&v333, a2 + 0xD8);
      v212 = *(Unit + 0x9D8);
      if ( v212 )
      {
        if ( *(Unit + 0x10B0) == 0xF )
        {
          sub_14B110(&v333, &v337);
          LODWORD(v340) = v330;
          v339 = v329;
          v213 = *(Unit + 0x9D8);
          v352 = v337;
          v353 = v338;
          v354 = v329;
          v355 = v330;
          (*(*v213 + 0xF8i64))(v213, &v352);
        }
        else
        {
          *(v356 + 0xC) = *&v333.m256_f32[3];
          v356[0] = *v333.m256_f32;
          (*(*v212 + 0xE8i64))(v212, v356);
          (*(**(Unit + 0x9D8) + 0xF0i64))(*(Unit + 0x9D8));
          v274 = *(Unit + 0x9D8);
          v348 = *(a2 + 0xF0);
          v347 = *(a2 + 0xE8);
          (*(*v274 + 0x108i64))(v274, &v347);
        }
      }
      else
      {
        sub_14B110(&v333, &v337);
        sub_33AC50(Unit, &v337, &v337.m256i_u64[1] + 4);
      }
      sub_3253C0(Unit);
      if ( v155 == 3 && *(v156 + 0x1EA0) )
      {
        sub_14B110(&v333, &v337);
        v275 = *(v156 + 0x1EA0);
        *(v275 + 0x5C) = *(a2 + 0xF0);
        *(v275 + 0x54) = *(a2 + 0xE8);
      }
      if ( *(Unit + 0x9D8) )
      {
        if ( v161 )
        {
          if ( *(Unit + 0x10B0) == 5 && (*(*v151 + 0x18i64))(Unit + 0x50) )
            sub_89AB50(Unit);
        }
        else
        {
          sub_3A9B50(v162, *(a2 + 0xF5), *(a2 + 0xF6));
        }
        v282 = (*(**(Unit + 0x9D8) + 0x150i64))(*(Unit + 0x9D8));
        v283 = *(a2 + 0xC8);
        v283.m128d_f64[0] = *v283.m128d_f64 / v282;
        *v283.m128d_f64 = _mm_round_sd(v283, v283, 9).m128d_f64[0] * v282;
        (*(**(Unit + 0x9D8) + 0x110i64))(*(Unit + 0x9D8), ((*v283.m128d_f64 / v282) + *&dword_44801CC));
        (*(**(Unit + 0x9D8) + 0x118i64))(*(Unit + 0x9D8));
        if ( v161 )
        {
          sub_14B110(&v333, Unit + 0x99C);
          *(Unit + 0x9C8) = v330;
          *(Unit + 0x9C0) = v329;
        }
        else
        {
          LOBYTE(v284) = 1;
          sub_3D2200(v162, v284);
        }
      }
      (*(*Unit + 0x438i64))(Unit, *(Unit + 0x10B8));
      if ( v161 )
      {
        v285 = *(Unit + 0x10B0);
        if ( v285 <= 0xF )
        {
          v286 = 0x897E;
          if ( _bittest(&v286, v285) )
            sub_854910(Unit);
        }
      }
      else
      {
        sub_3AF7A0(v162);
      }
      if ( (*(*v151 + 0x18i64))(Unit + 0x50) )
      {
        game_ = game;
        ballistics = *(game + 0x440);
        if ( ballistics )
        {
          *(ballistics + 0x162) = 1;
          sub_468440(*(game_ + 0x440));
        }
      }
      return;
    case 0xF033:
      (*(*(Unit + 0x50) + 0x98i64))(Unit + 0x50);
      return;
    case 0xF038:
      v331 = 0xFFFFFFFF;
      WORD2(v329) = 0;
      LODWORD(v329) = 0;
      sub_FF060(a2 + 0x20, &v326, 8i64);
      v335 = v326;
      sub_FF060(a2 + 0x20, &v326, 8i64);
      v29 = v326;
      sub_FF060(a2 + 0x20, &v326, 8i64);
      v30 = v326;
      sub_FF060(a2 + 0x20, &v326, 8i64);
      v31 = v326;
      sub_FF060(a2 + 0x20, &v329, 0x30i64);
      sub_17AC910(a2 + 0x20, v336, 0i64);
      sub_FF060(a2 + 0x20, &v327, 8i64);
      sub_FF060(a2 + 0x20, &v332, 0x10i64);
      v32 = v332;
      v33 = *(a2 + 0x28);
      if ( v33 + 1 <= (*(a2 + 0x20) & 0x7FFFFFFFu)
        && (v34 = *(*(a2 + 0x30) + (v33 >> 3)) << (v33 & 7), *(a2 + 0x28) = v33 + 1, (v34 & 0x80u) == 0) )
      {
        v35 = 0;
      }
      else
      {
        sub_FF060(a2 + 0x20, &v331, 0x20i64);
        v35 = 1;
      }
      sub_FF060(a2 + 0x20, &v328, 8i64);
      v36 = v328 * *&qword_44ACA28;
      *(Unit + 0x270) = v36;
      v37 = v327;
      ballistics_ = *(game + 0x440);
      if ( *(ballistics_ + 0x278) > v327 )
      {
        if ( *(Unit + 0x268) != v327 )
        {
          if ( v327 < 0 )
          {
            v41 = 0xFFFFFFFFi64;
            v40 = 0;
          }
          else
          {
            v39 = *(*(ballistics_ + 0x268) + 8i64 * v327);
            v40 = v39[0xA];
            v41 = (*(*v39 + 0x10i64))(v39);
          }
          (*(*Unit + 0x418i64))(Unit, v41, v40);
          v37 = v327;
        }
        *(Unit + 0x268) = v37;
        v256 = *&qword_44ACA30;
        if ( v37 >= 0 && *(ballistics_ + 0x278) > v37 )
        {
          v257 = *(*(ballistics_ + 0x268) + 8i64 * v37);
          v256 = dbl_44ACA40[(*(*v257 + 0x10i64))(v257) == 3];
        }
        v258 = v329 * v256;
        v333.m256_f32[0] = v258;
        v259 = SWORD1(v329) * v256;
        v333.m256_f32[1] = v259;
        v260 = SWORD2(v329) * v256;
        v333.m256_f32[2] = v260;
        if ( !sub_16BE10(&v333) && !sub_16BE10(v336) )
        {
          v261 = v32 * *&qword_44ACA20;
          if ( !sub_117620() )
          {
            v262 = v335 * *&qword_44ACA18;
            v263 = v29 * *&qword_44ACA18;
            v264 = v30 * *&qword_44ACA18;
            v265 = v31 * *&qword_44ACA18;
            v266 = fsqrt(((v265 * v265) + (v264 * v264)) + ((v263 * v263) + (v262 * v262)));
            v267 = 0.0;
            v268 = 0.0;
            v269 = 0.0;
            v270 = 0.0;
            v271 = 0.0;
            if ( v266 != 0.0 )
            {
              v271 = v265 * (Y / v266);
              v270 = v264 * (Y / v266);
              v269 = v263 * (Y / v266);
              v268 = (Y / v266) * v262;
            }
            if ( v268 == 0.0 && v269 == 0.0 && v270 == 0.0 && v271 == 0.0 )
            {
              v272 = Y;
              v273 = 0.0;
            }
            else
            {
              v273 = ((v271 * v269) + (v270 * v268)) + ((v271 * v269) + (v270 * v268));
              v305 = ((v269 * v270) - (v271 * v268)) + ((v269 * v270) - (v271 * v268));
              v272 = (((v270 * v270) + (v271 * v271)) + ((v270 * v270) + (v271 * v271))) + *&dword_44801E8;
              v267 = v305;
            }
            v306 = fsqrt((v272 * v272) + ((v267 * v267) + (v273 * v273)));
            v307 = 0.0;
            v308 = 0.0;
            if ( v306 > *&dword_449F1A8 )
              v308 = Y / v306;
            *(Unit + 0x238) = v273 * v308;
            *(Unit + 0x23C) = v267 * v308;
            *(Unit + 0x240) = v272 * v308;
            *(Unit + 0x250) = *v333.m256_f32;
            *(Unit + 0x258) = v333.m256_f32[2];
            sub_34E580(Unit, &v333, Unit + 0x244);
            *(Unit + 0x26C) = fminf(fmaxf(*&dword_44801CC, v261), *&dword_4487F04);
            *(Unit + 0x28E) = v35;
            v309 = v331;
            *(Unit + 0x290) = v331;
            v310 = *(Unit + 0x268);
            v311 = 0.0;
            v312 = 0.0;
            v313 = 0.0;
            if ( v266 != 0.0 )
            {
              v307 = v262 * (Y / v266);
              v311 = v263 * (Y / v266);
              v312 = v264 * (Y / v266);
              v313 = v265 * (Y / v266);
            }
            v337.m256i_i64[0] = __PAIR64__(LODWORD(v311), LODWORD(v307));
            v337.m256i_i64[1] = __PAIR64__(LODWORD(v313), LODWORD(v312));
            sub_37A4D0(Unit, &v337, &v333, v336, v310, LODWORD(v261), v35, v309);
          }
        }
      }
      return;
    case 0xF04B:
      if ( (*(Unit + 0x1058) & 0x2000010) == 0 )
      {
        sub_5822E0(game, Unit, 0i64);
        LOBYTE(v42) = 1;
        sub_3443C0(Unit, v43, v42);
        v44 = *(Unit + 0x10B0);
        if ( v44 <= 0xF )
        {
          v45 = 0x897E;
          if ( _bittest(&v45, v44) )
            sub_83A5C0(Unit, *(*(game + 0x498) + 0x2288i64));
        }
        if ( qword_4B77488 && (*(*(Unit + 0x50) + 0x18i64))(Unit + 0x50) )
          sub_18293F0(qword_4B77488, "death", 0xFFFFFFFFi64, 0xFFFFFFFFi64);
      }
      return;
    case 0xF04D:
      if ( !*(Unit + 0x10B0) )
        sub_3EDD30(Unit, *(a2 + 0xC8), *(a2 + 0xCC), a2 + 0xD0, a2 + 0xDC, a2 + 0xE8);
      return;
    case 0xF050:
      (*(*Unit + 0x230i64))(Unit);
      return;
    case 0xF053:
      if ( *(a2 + 0x1A) == 0xFF )
        sub_37A690(Unit);
      return;
    case 0xF054:
      (*(*Unit + 0xD8i64))(Unit);
      return;
    case 0xF071:
      v46 = *(Unit + 0x11D0);
      if ( !v46 )
      {
        v166 = "0";
        if ( !byte_4B1C820 )
        {
LABEL_333:
          v208 = v166;
LABEL_334:
          v209 = "1";
          if ( !v46 )
            v209 = "0";
          log_failed_gun_reload(*(Unit + 8) & 0x7FF, v209, v208, v166);
          return;
        }
        if ( !byte_4B1C313 )
        {
          v208 = "1";
          goto LABEL_334;
        }
LABEL_282:
        v166 = "1";
        goto LABEL_333;
      }
      if ( !byte_4B1C820 )
      {
        v166 = "0";
        goto LABEL_333;
      }
      if ( byte_4B1C313 )
        goto LABEL_282;
      v47 = *(v46 + 0x300);
      v48 = *(v47 + 2);
      if ( *(v47 + 2) )
      {
        v49 = *v47;
        v50 = 0i64;
        v51 = 1;
        v52 = 1;
        v53 = 0;
        do
        {
          if ( (*(**(v49 + 8 * v50) + 0x108i64))(*(v49 + 8 * v50)) )
          {
            v54 = *(v49 + 8 * v50);
            if ( !(*(*v54 + 0x108i64))(v54) )
              v54 = 0i64;
            if ( *(*(v54 + 0x2B0) + 0x88i64) != *(v54 + 0x1F4) || *(v54 + 0x505) )
            {
              *(v54 + 0x1F7) = 1;
              ++v53;
              v52 = 0;
            }
            v51 = 0;
          }
          ++v50;
        }
        while ( v48 != v50 );
        v47 = *(*(Unit + 0x11D0) + 0x300i64);
      }
      else
      {
        v52 = 1;
        v53 = 0;
        v51 = 1;
      }
      v290 = *(v47 + 6);
      if ( *(v47 + 6) )
      {
        v291 = v47[2];
        v292 = 0i64;
        do
        {
          if ( (*(**(v291 + 8 * v292) + 0x108i64))(*(v291 + 8 * v292)) )
          {
            v293 = *(v291 + 8 * v292);
            if ( !(*(*v293 + 0x108i64))(v293) )
              v293 = 0i64;
            if ( *(*(v293 + 0x2B0) + 0x88i64) != *(v293 + 0x1F4) || *(v293 + 0x505) )
            {
              *(v293 + 0x1F7) = 1;
              ++v53;
              v52 = 0;
            }
            v51 = 0;
          }
          ++v292;
        }
        while ( v290 != v292 );
        v47 = *(*(Unit + 0x11D0) + 0x300i64);
      }
      v294 = *(v47 + 0xA);
      if ( *(v47 + 0xA) )
      {
        v295 = v47[4];
        v296 = 0i64;
        do
        {
          if ( (*(**(v295 + 8 * v296) + 0x108i64))(*(v295 + 8 * v296)) )
          {
            v297 = *(v295 + 8 * v296);
            if ( !(*(*v297 + 0x108i64))(v297) )
              v297 = 0i64;
            if ( *(*(v297 + 0x2B0) + 0x88i64) != *(v297 + 0x1F4) || *(v297 + 0x505) )
            {
              *(v297 + 0x1F7) = 1;
              ++v53;
              v52 = 0;
            }
            v51 = 0;
          }
          ++v296;
        }
        while ( v294 != v296 );
      }
      v298 = *(Unit + 0x16C);
      v299 = sub_5655B0(game);
      if ( v298 != v299 )
      {
        *(Unit + 0x16C) = v299;
        if ( (v51 & 1) != 0 )
        {
          v337.m256i_i64[1] = *(Unit + 8) & 0x7FF;
          v337.m256i_i32[0] = 2;
          v300 = "GUNS: unit %d reload request ignored, no guns found";
        }
        else
        {
          if ( (v52 & 1) == 0 )
          {
            v337.m256i_i64[1] = *(Unit + 8) & 0x7FF;
            v337.m256i_i32[0] = 2;
            v337.m256i_i64[3] = v53;
            v337.m256i_i32[4] = 2;
            logmessage_fmt(3u, "GUNS: unit %d reload request prcessed, %d guns are marked for rearming", &v337, 2);
            return;
          }
          v337.m256i_i64[1] = *(Unit + 8) & 0x7FF;
          v337.m256i_i32[0] = 2;
          v300 = "GUNS: unit %d reload request ignored, all guns are full and not jammed";
        }
LABEL_543:
        logmessage_fmt(3u, v300, &v337, 1);
      }
      return;
    case 0xF07F:
      if ( !sub_16BE10(a2 + 0xD0) && !sub_117620() )
      {
        v55 = *(a2 + 0xD0);
        v56 = *(a2 + 0xD4);
        v57 = *(a2 + 0xD8);
        v58 = (v57 * v57) + ((v56 * v56) + (v55 * v55));
        if ( v58 >= *&dword_44A01A0 )
        {
          v59 = fsqrt(v58);
          if ( v59 <= *&qword_44A0760 )
          {
            v61 = 0.0;
            v62 = Y;
            v60 = 0.0;
          }
          else
          {
            v60 = v57 * (Y / v59);
            v61 = v56 * (Y / v59);
            v62 = (Y / v59) * v55;
          }
          *(Unit + 0x238) = v62;
          *(Unit + 0x23C) = v61;
          *(Unit + 0x240) = v60;
          *(Unit + 0x26C) = fminf(fmaxf(*(a2 + 0xDC), *&dword_44801CC), *&dword_4487F04);
          v281 = *(a2 + 0xC8);
          *(Unit + 0x278) = v281;
          if ( v281 )
          {
            if ( *(v281 + 0x10A8) >= 2u )
              *(Unit + 0x278) = 0i64;
          }
        }
      }
      return;
    case 0xF08F:
      v63 = *(a2 + 0xD4);
      v64 = *(a2 + 0xD8);
      v65 = *(a2 + 0xDC);
      v66 = *(a2 + 0xE0);
      if ( v63 == 0.0 && v64 == 0.0 && v65 == 0.0 && v66 == 0.0 )
      {
        memset(v337.m256i_i64 + 4, 0, 0x1C);
        v338 = 1.0;
        v337.m256i_i32[4] = 0x3F800000;
        v337.m256i_i32[0] = 0x3F800000;
      }
      else
      {
        v146 = v66 * v66;
        *v337.m256i_i32 = (((v63 * v63) + (v66 * v66)) + ((v63 * v63) + (v66 * v66))) + *&dword_44801E8;
        *&v337.m256i_i32[3] = ((v64 * v63) - (v66 * v65)) + ((v64 * v63) - (v66 * v65));
        v147 = v66 * v64;
        *&v337.m256i_i32[6] = ((v66 * v64) + (v65 * v63)) + ((v66 * v64) + (v65 * v63));
        *&v337.m256i_i32[1] = ((v66 * v65) + (v64 * v63)) + ((v66 * v65) + (v64 * v63));
        v148 = v65 * v64;
        *&v337.m256i_i32[4] = (((v64 * v64) + (v66 * v66)) + ((v64 * v64) + (v66 * v66))) + *&dword_44801E8;
        v149 = v66 * v63;
        *&v337.m256i_i32[7] = (v148 - v149) + (v148 - v149);
        *&v337.m256i_i32[2] = ((v65 * v63) - v147) + ((v65 * v63) - v147);
        *&v337.m256i_i32[5] = (v149 + v148) + (v149 + v148);
        v338 = (((v65 * v65) + v146) + ((v65 * v65) + v146)) + *&dword_44801E8;
      }
      LODWORD(v340) = *(a2 + 0xD0);
      v339 = *(a2 + 0xC8);
      if ( *(a2 + 0xE4) >= 0 )
        sub_340E80(Unit, &v337);
      return;
    case 0xF0A5:
      v67 = *(Unit + 0x10B8);
      v68 = sub_348390(Unit);
      v69 = sub_348530(Unit, v68, a2 + 0xC8);
      if ( !v67
        || (v70 = sub_11FE900(v67)) == 0
        || (v71 = v70, v72 = *(v70 + 0x10B0), v72 > 0xF)
        || (v73 = 0x897E, !_bittest(&v73, v72)) )
      {
        v71 = 0i64;
      }
      if ( !v68 )
        return;
      if ( *(Unit + 0x10A8) > 1u )
        return;
      if ( *(v68 + 0x10A8) > 1u )
        return;
      v74 = *(Unit + 0x1800);
      v75 = sub_5655B0(game);
      if ( v75 <= v74 || (sub_31FD00(Unit) & v69) != 1 )
        return;
      v76 = *(game + 0x420);
      if ( !*(v76 + 0x3B0) )
        goto LABEL_122;
      v77 = *(v76 + 0xA0);
      v75 = sub_5655B0(game);
      if ( v71 )
      {
        if ( v75 > v77 )
        {
          v78 = *(v71 + 0x1D38);
          if ( v78 )
          {
            v337.m256i_i8[0] = v78 - 1;
            on_reflection_var_changed(v71 + 0x1D18, v71, &v337);
            *(v71 + 0x1D38) = v337.m256i_i8[0];
LABEL_122:
            v79 = 0x41C64E6D * dword_4A79158 + 0x3039;
            dword_4A79158 = v79;
            sub_348400(Unit, v68, a2 + 0xC8);
            v80 = *(Unit + 0x11B0);
            if ( v80 && *(v80 + 0xDB4) == 1 )
              v81 = *(v80 + 0xC80);
            else
              v81 = Y;
            if ( *(*(game + 0x420) + 0x3B0i64) )
            {
              v314 = 0.0;
              v315 = 0.0;
              v316 = 0.0;
            }
            else
            {
              v317 = 0x41C64E6D * (HIWORD(v79) & 0x7FFF) + 0x3039;
              v318 = 0x41C64E6D * v317 + 0x3039;
              v319 = (*&v75 * *&dword_44A0140) * v81;
              v314 = (((v317 >> 0xF) & 0xFFFE) - 0x8000) * v319;
              v315 = (((v318 >> 0xF) & 0xFFFE) - 0x8000) * v319;
              v316 = v319 * ((((0x41C64E6D * v318 + 0x3039) >> 0xF) & 0xFFFE) - 0x8000);
            }
            *&v320 = v314 + *(a2 + 0xD0);
            *&v321 = v315 + *(a2 + 0xCC);
            *v337.m256i_i32 = v316 + *(a2 + 0xC8);
            *(v337.m256i_i64 + 4) = __PAIR64__(v320, v321);
            if ( v67 )
              v322 = *(v67 + 0xA8);
            else
              v322 = 0xFFFFFFFFFFFFFFFFui64;
            sub_5655B0(game);
            dword_4A79158 = 0x41C64E6D * dword_4A79158 + 0x3039;
            sub_37A820(v68, &v337, HIWORD(dword_4A79158) & 0x7FFF, v323, v322);
            if ( (*(Unit + 0x58) & 4) != 0 && v67 && *(Unit + 0x13DC) )
            {
              v324 = sub_1205530(v67);
              sub_1205600(v67, v324);
            }
            v325 = sub_5655B0(game);
            *v333.m256_f32 = sub_348A90(Unit) + v325;
            sub_37A9A0(Unit + 0x17E0, &v333);
          }
        }
      }
      return;
    case 0xF0A6:
      v82 = *(Unit + 0x10B0);
      if ( v82 > 0xF )
        return;
      v83 = 0x897E;
      if ( !_bittest(&v83, v82) )
        return;
      v84 = ballistics_A68_qword;
      v85 = *(a2 + 0xE0);
      v86 = sub_1206DE0(v85);
      if ( ((!g_net || !*(g_net + 0x60)) && LocalPlayer && (*(LocalPlayer + 0x1B8) & 0x20) != 0
         || (v87 = *(game + 0x450)) != 0 && *(v87 + 0x5CA))
        && v84
        && v86 )
      {
        sub_C090F0(v84 + 0x2C0, a2 + 0xC8, v85);
      }
      else if ( !v86 )
      {
        goto LABEL_375;
      }
      v141 = sub_11FE900(v86);
      if ( v141 )
      {
        v142 = v141;
        if ( *(v141 + 0x11B0) )
        {
          if ( *(*(game + 0x498) + 0x1FA7i64) && (*(*(v141 + 0x50) + 0x20i64))(v141 + 0x50) )
            sub_34C220(v142);
          v143 = *(v142 + 0x11B0);
          v144 = Y;
          if ( *(v143 + 0xDB4) == 1 )
            v145 = *(v143 + 0xC84);
          else
            v145 = Y;
          *(Unit + 0x25C4) = v145;
          v219 = *(v142 + 0x11B0);
          if ( *(v219 + 0xDB4) == 1 )
            v220 = *(v219 + 0xC88);
          else
            v220 = v144;
          *(Unit + 0x25C8) = v220;
          v221 = *(v142 + 0x11B0);
          if ( *(v221 + 0xDB4) == 1 )
            v222 = *(v221 + 0xC8C);
          else
            v222 = v144;
          *(Unit + 0x25CC) = v222;
          v223 = *(v142 + 0x11B0);
          if ( *(v223 + 0xDB4) == 1 )
            v144 = *(v223 + 0xC90);
          *(Unit + 0x25D0) = v144;
        }
      }
LABEL_375:
      v224 = game;
      if ( *(*(game + 0x420) + 0x3B0i64) )
      {
        v225 = *(Unit + 0x2280);
        v226 = (*(v225 + 0x3D8) * *(v225 + 0x3E4)) + *(v225 + 0x3FC);
        v227 = 0x41C64E6D * dword_4A79158 + 0x3039;
        dword_4A79158 = v227;
        if ( *(v225 + 0x3F8) > 0 )
        {
          v228 = HIWORD(v227) & 0x7FFF;
          v229 = 0;
          v230 = *&dword_44A0140;
          v231 = *&dword_44A5C74;
          do
          {
            if ( g_net && *(g_net + 0x60) )
              break;
            v232 = 0x41C64E6D * v228 + 0x3039;
            v228 = 0x41C64E6D * v232 + 0x3039;
            v233 = (HIWORD(v228) & 0x7FFF) * v231;
            v234 = fsqrt((HIWORD(v232) & 0x7FFF) * v230) * *(v225 + 0x404);
            v235 = cosf(v233) * v234;
            *&v236 = (sinf(v233) * v234) + *(a2 + 0xD0);
            v237 = *(a2 + 0xD4);
            v238 = *(a2 + 0xCC);
            *v337.m256i_i32 = v235 + *(a2 + 0xC8);
            *(v337.m256i_i64 + 4) = __PAIR64__(v236, v238);
            (*(*Unit + 0x6B8i64))(Unit, &v337, v237);
            ++v229;
            v225 = *(Unit + 0x2280);
          }
          while ( v229 < *(v225 + 0x3F8) );
          v224 = game;
        }
        if ( *(v224 + 0x348) )
        {
          v239 = *(v225 + 0x404) * *(v225 + 0x404);
          v240 = 0i64;
          v241 = 0;
          do
          {
            v242 = *(*(v224 + 0x338) + 8 * v240);
            if ( *(v242 + 0x10A8) <= 1u && (*(v242 + 0x1058) & 0x7000014) == 0 && *(v242 + 0x10B0) == 3 )
              v241 += ((((*(v242 + 0x9C8) - *(a2 + 0xD0)) * (*(v242 + 0x9C8) - *(a2 + 0xD0)))
                      + ((*(v242 + 0x9C4) - *(a2 + 0xCC)) * (*(v242 + 0x9C4) - *(a2 + 0xCC))))
                     + ((*(v242 + 0x9C0) - *(a2 + 0xC8)) * (*(v242 + 0x9C0) - *(a2 + 0xC8)))) <= v239;
            ++v240;
            v224 = game;
          }
          while ( v240 < *(game + 0x348) );
        }
        else
        {
          v241 = 0;
        }
        *(*(v224 + 0x420) + 0xC4i64) = *(Unit + 8) & 0x7FF;
        *(*(v224 + 0x420) + 0xB4i64) = *(*(Unit + 0x2280) + 0x404i64);
        v243 = *(v224 + 0x420);
        *(v243 + 0xB0) = *(a2 + 0xD0);
        *(v243 + 0xA8) = *(a2 + 0xC8);
        *(*(v224 + 0x420) + 0xB8i64) = *(*(Unit + 0x2280) + 0x3E0i64) + *(a2 + 0xD8);
        *(*(v224 + 0x420) + 0xBCi64) = ((v241 * *(*(Unit + 0x2280) + 0x400i64))
                                      + ((*(*(Unit + 0x2280) + 0x3F8i64) * v226) + *(*(Unit + 0x2280) + 0x3E0i64)))
                                     + *(*(Unit + 0x2280) + 0x408i64);
        *(*(v224 + 0x420) + 0xC0i64) = (*(*(Unit + 0x2280) + 0x3F8i64) * v226)
                                     + (*(*(Unit + 0x2280) + 0x3E0i64) + *(a2 + 0xD8));
        v244 = *(v224 + 0x420);
        *v337.m256i_i32 = *(v244 + 0xBC) + *(a2 + 0xD8);
        if ( *v337.m256i_i32 != *(v244 + 0xA0) )
        {
          on_reflection_var_changed(v244 + 0x80, v244, &v337);
          *(v244 + 0xA0) = v337.m256i_i32[0];
        }
      }
      else
      {
        (*(*Unit + 0x6B8i64))(Unit, a2 + 0xC8, *(a2 + 0xD4));
      }
      v245 = LocalUnit;
      if ( !LocalUnit )
        goto LABEL_414;
      v246 = *(LocalUnit + 0x10B8);
      if ( v246 )
        v247 = *(v246 + 0x750);
      else
        v247 = 0xFFFFFFFF;
      v248 = *(LocalUnit + 0x10B0);
      v249 = ((v248 - 3) & 0xFFFD) == 0;
      if ( *(game + 0x360) > v247 )
      {
        v250 = *(game + 0x350);
        if ( v250 )
        {
          if ( *(v250 + 8i64 * v247) == Unit && !byte_4B1C310 )
          {
            sub_F142D0(LocalUnit, a2 + 0xC8);
            if ( qword_4B1C468 )
            {
              *v337.m256i_i8 = 0i64;
              sub_1667750(qword_4B1C468, &v337, 0, 0, 0i64);
            }
            else
            {
              sub_EEAD00(Unit, 9, &ymmword_4514980, 0, 0, 0, 5, 0, 0);
            }
            *(v245 + 0x1808) = 1;
LABEL_415:
            sub_F035F0(*(Unit + 8) & 0x7FF, a2 + 0xC8);
            if ( v249 )
            {
              if ( ballistics_A68_qword )
              {
                v254 = (*(*(Unit + 0x50) + 0x30i64))(Unit + 0x50);
                v255 = (*(*(v245 + 0x50) + 0x30i64))(v245 + 0x50);
                if ( (dword_4B1C814 & 0x80000) == 0
                  && v255 == v254
                  && (dword_4B1C814 & 0x1000000) == 0
                  && *(qword_4B1BC60 + 0x3B0C) > 0.0
                  && ((((*(v245 + 0x9C8) - *(a2 + 0xD0)) * (*(v245 + 0x9C8) - *(a2 + 0xD0)))
                     + ((*(v245 + 0x9C4) - *(a2 + 0xCC)) * (*(v245 + 0x9C4) - *(a2 + 0xCC))))
                    + ((*(v245 + 0x9C0) - *(a2 + 0xC8)) * (*(v245 + 0x9C0) - *(a2 + 0xC8)))) < *(qword_4B1BC60 + 0x3B10) )
                {
                  sub_C39ED0(qword_4B1BC60, 8i64, a2 + 0xC8);
                }
              }
            }
            return;
          }
        }
      }
      if ( v248 != 5 && v248 != 3 )
      {
LABEL_414:
        v249 = 0;
        goto LABEL_415;
      }
      v249 = 1;
      if ( *(LocalUnit + 0x10A8) > 1u )
        goto LABEL_415;
      v251 = (((*(LocalUnit + 0x9C8) - *(a2 + 0xD0)) * (*(LocalUnit + 0x9C8) - *(a2 + 0xD0)))
            + ((*(LocalUnit + 0x9C4) - *(a2 + 0xCC)) * (*(LocalUnit + 0x9C4) - *(a2 + 0xCC))))
           + ((*(LocalUnit + 0x9C0) - *(a2 + 0xC8)) * (*(LocalUnit + 0x9C0) - *(a2 + 0xC8)));
      if ( v251 >= *&dword_44A4620 )
      {
        v252 = *(game + 0x420);
        if ( !*(v252 + 0x3B0) || v251 >= *(v252 + 0xB4) )
          goto LABEL_415;
      }
      v253 = *(LocalUnit + 0x1890);
      if ( v253 )
        unknown_p_commands(v253, v253 + 0x40, "artShootingWarning", 0i64);
      if ( qword_4B1C468 )
      {
        *v337.m256i_i8 = 0i64;
        sub_1667750(qword_4B1C468, &v337, 0, 0, 0i64);
      }
      else
      {
        sub_EEAD00(Unit, 9, &ymmword_4514980, 0, 0, 0, 5, 0, 0);
      }
      if ( !v84 )
        goto LABEL_415;
      v301 = *(game + 0x420);
      v302 = *(v84 + 0xA63);
      if ( *(v301 + 0x3B0) )
      {
        if ( !v302 )
        {
          v303 = *(v301 + 0xBC);
          if ( v303 <= 0.0 )
          {
            if ( (qword_4B1C514 & 0xC) != 0 )
              v303 = *&dword_44801E8;
            else
              v303 = *(v84 + 0xB10);
          }
          goto LABEL_557;
        }
      }
      else if ( !v302 )
      {
        v303 = *&dword_4489388;
LABEL_557:
        *(v84 + 0xA98) = v303;
      }
      *(v84 + 0xA63) = 1;
      goto LABEL_415;
    case 0xF0A7:
      v88 = *(Unit + 0x10B8);
      if ( v88 )
      {
        v89 = *(v88 + 0x750);
        if ( *(game + 0x360) > v89 )
        {
          v90 = *(game + 0x350);
          if ( v90 )
          {
            v91 = *(v90 + 8i64 * v89);
            if ( v91 )
            {
              v92 = *(v91 + 0x10B0);
              if ( v92 <= 0xF )
              {
                v93 = 0x897E;
                if ( _bittest(&v93, v92) )
                {
                  if ( *(a2 + 0xC8) )
                  {
                    *(v91 + 0x1F70) = 0;
                    sub_37A9E0(v91 + 0x1F60, a2 + 0xC8);
                  }
                }
              }
            }
          }
        }
      }
      return;
    case 0xF0B1:
      v94 = *(Unit + 0x11D0);
      if ( v94 )
      {
        v95 = *(a2 + 0xC8);
        if ( *(v94 + 0x2E0) > v95 )
        {
          v96 = *(*(v94 + 0x2D0) + 8 * v95);
          if ( v96 )
          {
            if ( (*(*v96 + 0x108i64))(v96) )
              sub_359BB0(Unit, v96, *(a2 + 0xC9), *(a2 + 0xCA), 1);
          }
        }
      }
      return;
    case 0xF0BB:
      if ( (*(Unit + 0x58) & 4) != 0 )
      {
        memset(&v337, 0, 0x18);
        v337.m256i_i64[3] = off_4B678D0;
        sub_1805A40(Unit + 0xE10, &v337);
        v97 = sub_7A9230(Unit + 0xAB0);
        sub_37AA50(*(a2 + 0x1A), Unit, v97, &v337);
        if ( v337.m256i_i32[0] < 0 )
          (*(*v337.m256i_i64[3] + 0x40i64))(v337.m256i_i64[3], v337.m256i_i64[2]);
      }
      return;
    case 0xF0BC:
      sub_7A7DD0(Unit + 0xAB0);
      if ( sub_7A7E40(Unit + 0xAB0, a2 + 0xD0) )
      {
        v98 = *(a2 + 0xC8);
        if ( v98 )
        {
          v99 = *(v98 + 8) & 0x7FF;
          *(Unit + 0xEC0) = 4;
          *(Unit + 0xEC4) = v99;
          *(Unit + 0xEC8) = 0xFFFFFFFFFFFFFFFFui64;
        }
      }
      return;
    case 0xF0BD:
      v100 = *(Unit + 0x11D0);
      v101 = *(a2 + 0xC8);
      if ( *(v100 + 0x2E0) <= v101 )
        return;
      v102 = *(*(v100 + 0x2D0) + 8 * v101);
      if ( !v102 )
        return;
      if ( (*(*v102 + 0x108i64))(v102) )
      {
        v104 = *(v102 + 0x2B0);
        if ( *(v104 + 0x90) <= *(a2 + 0xC9) )
          return;
        LOBYTE(v103) = 1;
        if ( !sub_2156D0(v102, v103) )
        {
          *(v102 + 0x506) = 1;
          v105 = *(v102 + 8);
          if ( !v105 || *(v105 + 0x58) != 1 )
            *(v102 + 0x444) = 0;
        }
        *(v104 + (*(a2 + 0xC9) << 6) + 0xBC) = *(a2 + 0xCC);
      }
      else
      {
        (*(*v102 + 0xA0i64))(v102, *(a2 + 0xCC));
      }
      sub_1FDCC0(v102);
      v337.m256i_i64[0] = 0x1000C5F5446EAi64;
      v337.m256i_i8[8] = 0;
      sub_220F60(*(Unit + 0x1AB4), &v337);
      return;
    case 0xF0C2:
      sub_37AC40(&v337);
      if ( !sub_1807B80(&v337.m256i_u64[2], a2 + 0xD0) )
        goto LABEL_462;
      v107 = *(a2 + 0xC8);
      if ( game && (v108 = *(game + 0x440)) != 0 && *(v108 + 4) >= 0
        || sub_B96690()
        || (v109 = *(game + 0x450)) != 0 && *(v109 + 0x5CA) )
      {
        if ( v107 != *&mUnit )
        {
LABEL_172:
          v110 = 0;
          v111 = 0;
          goto LABEL_358;
        }
        v111 = **(game + 0x108) == 2;
        v110 = 0;
      }
      else
      {
        if ( !LocalUnit || *(LocalUnit + 0x10A8) > 1u )
          goto LABEL_172;
        v110 = v107 == LocalUnit;
        v111 = 0;
      }
LABEL_358:
      v216 = *(game + 0x430);
      if ( !*(v216 + 0x35E) )
        goto LABEL_458;
      if ( !*(v216 + 0x361) )
        goto LABEL_458;
      v217 = __ROR2__(*(Unit + 0x10B0) - 3, 1);
      if ( v217 > 6u )
        goto LABEL_458;
      v218 = 0x53;
      if ( !_bittest(&v218, v217) )
        goto LABEL_458;
      if ( v111 )
      {
        if ( !v107 )
          goto LABEL_458;
      }
      else if ( v107 == 0 || !v110 )
      {
        goto LABEL_458;
      }
      v276 = *(v107 + 0x10B0);
      if ( v276 <= 0xF )
      {
        v277 = 0x8829;
        if ( _bittest(&v277, v276) )
        {
          v278 = *(v107 + 8) & 0x7FF;
          v344 = 4;
          v345 = v278;
          v346 = 0xFFFFFFFFFFFFFFFFui64;
          v279 = *(*(game + 0x630) + 0x3B3B0i64);
          if ( v279 )
          {
            v351 = 0i64;
            sub_969DF0(v279, Unit, &v337, 0, 1, &v351, 0);
          }
        }
      }
LABEL_458:
      v280 = ballistics_A68_qword;
      if ( ballistics_A68_qword )
      {
        if ( !v337.m256i_i8[0x10] )
        {
          fire_event(ballistics_A68_qword + 0x5A8, "hint:change_shell_type:show", &data::get_block_by_name, v106);
          v280 = ballistics_A68_qword;
        }
        sub_B7F880(v280, Unit, &v337);
        sub_B7FC10(ballistics_A68_qword, Unit, &v337);
      }
LABEL_462:
      sub_366AE0(&v337.m256i_u64[2]);
      return;
    case 0xF0CA:
      if ( (*(Unit + 0x1058) & 0x7000014) == 0 && *(Unit + 0x10A8) <= 1u )
      {
        v112 = *(a2 + 0xC8);
        if ( v112 )
          sub_31FB30(Unit, v112, *(a2 + 0xD0));
      }
      return;
    case 0xF0CC:
      if ( *(a2 + 0xF8) )
        v113 = sub_128DEA0(*(a2 + 0xFC));
      else
        v113 = 0i64;
      v167 = game;
      *(*(game + 0x440) + 0x59Ci64) = *(a2 + 0xC8);
      *(*(v167 + 0x440) + 0x5ACi64) = *(a2 + 0xF8);
      *(*(v167 + 0x440) + 0x5B0i64) = *(a2 + 0xFC);
      v168 = *(v167 + 0x440);
      v169 = 0.0;
      v170 = 0;
      v171 = 0;
      v172 = 0;
      if ( *(a2 + 0xF8) )
      {
        v170 = *(a2 + 0xD8);
        v171 = *(a2 + 0xDC);
        v172 = *(a2 + 0xE0);
      }
      v168[0x16D] = v170;
      v168[0x16E] = v171;
      v168[0x16F] = v172;
      v173 = *(a2 + 0xC8);
      v174 = *(a2 + 0xCC);
      v175 = *(a2 + 0xD0);
      v176 = *(a2 + 0xD4);
      v177 = fsqrt(((v176 * v176) + (v175 * v175)) + ((v174 * v174) + (v173 * v173)));
      v178 = 0.0;
      v179 = 0.0;
      v180 = 0.0;
      if ( v177 != 0.0 )
      {
        v169 = v173 * (Y / v177);
        v178 = v174 * (Y / v177);
        v179 = v175 * (Y / v177);
        v180 = v176 * (Y / v177);
      }
      v181 = 0.0;
      if ( v169 == 0.0 && v178 == 0.0 && v179 == 0.0 && v180 == 0.0 )
      {
        v182 = Y;
        v183 = 0.0;
      }
      else
      {
        v183 = ((v180 * v178) + (v179 * v169)) + ((v180 * v178) + (v179 * v169));
        v184 = ((v178 * v179) - (v180 * v169)) + ((v178 * v179) - (v180 * v169));
        v182 = (((v179 * v179) + (v180 * v180)) + ((v179 * v179) + (v180 * v180))) + *&dword_44801E8;
        v181 = v184;
      }
      v185 = fsqrt((v182 * v182) + ((v181 * v181) + (v183 * v183)));
      v186 = 0.0;
      if ( v185 > *&dword_449F1A8 )
        v186 = Y / v185;
      *(Unit + 0x238) = v183 * v186;
      *(Unit + 0x23C) = v181 * v186;
      *(Unit + 0x240) = v182 * v186;
      if ( v113 )
      {
        sub_5655B0(v167);
        sub_234B80(v113 + 0x130, &v337);
        v187 = (*&v337.m256i_i32[2] + *(a2 + 0xE0)) - *(Unit + 0x9C8);
        v188 = (*&v337.m256i_i32[1] + *(a2 + 0xDC)) - *(Unit + 0x9C4);
        v189 = (*v337.m256i_i32 + *(a2 + 0xD8)) - *(Unit + 0x9C0);
      }
      else
      {
        v189 = *(a2 + 0xD8);
        v188 = *(a2 + 0xDC);
        v187 = *(a2 + 0xE0);
      }
      *(Unit + 0x250) = v189;
      *(Unit + 0x254) = v188;
      *(Unit + 0x258) = v187;
      sub_34E580(Unit, a2 + 0xD8, Unit + 0x244);
      *(Unit + 0x268) = *(a2 + 0xF0);
      *(Unit + 0x26C) = fminf(fmaxf(*(a2 + 0xF4), *&dword_4487E14), *&dword_44890B4);
      v201 = *(a2 + 0xE4);
      v202 = *(a2 + 0xE8);
      v203 = *(a2 + 0xEC);
      v204 = fsqrt((v203 * v203) + ((v202 * v202) + (v201 * v201)));
      if ( v204 <= *&qword_44A0760 )
      {
        v206 = 0.0;
        v207 = Y;
        v205 = 0.0;
      }
      else
      {
        v205 = v203 * (Y / v204);
        v206 = v202 * (Y / v204);
        v207 = (Y / v204) * v201;
      }
      *(Unit + 0x25C) = v207;
      *(Unit + 0x260) = v206;
      *(Unit + 0x264) = v205;
      return;
    case 0xF0D5:
      if ( (*(Unit + 0x1058) & 0x2000010) == 0 && *(HudInfo + 0x25) && !*(Unit + 0xFF8) )
        sub_37AE90(Unit + 0xFD0, a2 + 0xC8);
      return;
    case 0xF0E3:
      *v333.m256_f32 = a2;
      if ( *(Unit + 0x58) == 3 && (*(Unit + 0x1058) & 0x2000010) == 0 )
      {
        (*(*(Unit + 0x50) + 0x70i64))(Unit + 0x50, *(*v333.m256_f32 + 0xC8i64));
        v337.m256i_i64[0] = &v333;
        v337.m256i_i64[1] = Unit;
        sub_37AD90(Unit, &v337);
      }
      return;
    case 0xF0E9:
      if ( !g_net || !*(g_net + 0x60) )
        sub_35BCC0(Unit, a2 + 0xC8);
      return;
    case 0xF0ED:
      if ( (*(*(Unit + 0x50) + 0x18i64))(Unit + 0x50) )
        sub_EEAD00(Unit, 0x1C, &ymmword_4514980, 0, 0, 0, 5, 0, 0);
      return;
    case 0xF0F0:
      sub_359DA0(Unit);
      return;
    case 0xF0F6:
      if ( (*(*(Unit + 0x50) + 0x18i64))(Unit + 0x50) )
      {
        v115 = game;
        v116 = *(game + 0x430);
        if ( *(a2 + 0xC8) )
          ++*(v116 + 0x39438);
        else
          ++*(v116 + 0x39434);
        if ( *(a2 + 0xC9) )
        {
          v214 = *(v115 + 0x440);
          v215 = *(v214 + 0x628);
          if ( v215 )
            sub_F10F10(v215, Unit);
          *(v214 + 0x628) = 0i64;
        }
        else if ( ballistics_A68_qword )
        {
          v119 = ballistics_A68_qword + 0x5A8;
          v120 = "hint:must_see_scouting_target";
          goto LABEL_354;
        }
      }
      return;
    case 0xF0F9:
      (*(*Unit + 0xE0i64))(Unit);
      return;
    case 0xF0FD:
      sub_35F8A0(Unit, *(a2 + 0xC8));
      return;
    case 0xF101:
      if ( (*(Unit + 0x1058) & 0x7000014) == 0 && *(Unit + 0x10A8) <= 1u )
        sub_31FC10(Unit, *(a2 + 0xC8), *(a2 + 0xD0));
      return;
    case 0xF10A:
      v117 = (a2 + 0xC8);
      v118 = *(a2 + 0xC8);
      if ( v118 == 0xFFFFFFFF )
      {
        v337.m256i_i32[0] = 0xFFFFFFFF;
        if ( *(Unit + 0x620) != 0xFFFFFFFF )
        {
          on_reflection_var_changed(Unit + 0x600, Unit, &v337);
          *(Unit + 0x620) = v337.m256i_i32[0];
        }
      }
      else if ( v118 >= 0 && v118 < *(Unit + 0x5F8) && sub_33D440(Unit, v118, 1, 0xFFFFFFFF, 0xFFFFFFFF) )
      {
        sub_37AED0(Unit + 0x600, a2 + 0xC8);
      }
      v190 = *(a2 + 0xCC);
      v191 = *(Unit + 0x5F8);
      if ( v190 >= 0 && v190 < v191 )
      {
        *(*(Unit + 0x5E8) + 0x5C * v190 + 0x58) = 0;
        v191 = *(Unit + 0x5F8);
      }
      v192 = *v117;
      if ( v192 >= 0 && v192 < v191 )
        *(*(Unit + 0x5E8) + 0x5C * v192 + 0x58) = 1;
      return;
    case 0xF117:
      sub_328CF0(Unit, a2 + 0xC8, *(a2 + 0x178), 7u);
      return;
    case 0xF11E:
      if ( *(a2 + 0xD4) )
      {
        sub_37AF10(Unit + 0x720, a2 + 0xD4);
      }
      else
      {
        v193 = *(Unit + 0x10B8);
        if ( v193 )
        {
          v194 = sub_11FE900(v193);
          if ( v194 )
          {
            v195 = *(a2 + 0xCC);
            if ( v195 >= 0 && v195 < *(v194 + 0x13B0) )
            {
              v196 = *(a2 + 0xD0);
              if ( v196 < *(v194 + 0x13C8) )
                sub_31FF60(v194, *(a2 + 0xC8), v195, v196, *(a2 + 0xD5));
            }
          }
        }
      }
      return;
    case 0xF120:
      if ( ballistics_A68_qword && (*(*(Unit + 0x50) + 0x18i64))(Unit + 0x50) )
      {
        v119 = ballistics_A68_qword + 0x5A8;
        v120 = "hint:friendly_fire_warning";
LABEL_354:
        fire_event(v119, v120, &data::get_block_by_name, v114);
      }
      return;
    case 0xF127:
      if ( (*(Unit + 0x1058) & 0x7000014) == 0 && *(Unit + 0x10A8) <= 1u )
      {
        v121 = *(a2 + 0xC8);
        if ( v121 )
          sub_349420(Unit, v121, *(a2 + 0xD0));
      }
      return;
    case 0xF128:
      if ( (*(Unit + 0x1058) & 0x7000014) == 0 && *(Unit + 0x10A8) <= 1u )
        sub_349500(Unit, *(a2 + 0xC8), *(a2 + 0xD0));
      return;
    case 0xF129:
      (*(*Unit + 0x380i64))(Unit, *(a2 + 0xC8), *(a2 + 0xD0));
      v124 = *(a2 + 0xD0);
      if ( v124 >= 0 && v124 < *(Unit + 0x13C8) && *(Unit + 0x13B0) )
      {
        *(*(Unit + 0x13B8) + 0x1C * v124 + 0x18) = 0;
        v125 = *(*(Unit + 0x13B8) + 0x1Ci64 * *(a2 + 0xD0) + 0x10);
        v334 = _mm_loadu_si128(&xmmword_45149A0);
        v126 = *&ymmword_4514980.m256_f32[4];
        v333 = ymmword_4514980;
        v127 = *ymmword_4514980.m256_f32;
        if ( v125 != 0xFFFFFFFFi64 )
        {
          v128 = *(*(*(Unit + 0x11D0) + 0x190i64) + 0x290 * v125 + 8);
          if ( v128 )
          {
            LOBYTE(v123) = 1;
            (*(*v128 + 0x1F0i64))(v128, &v333, Unit + 0x99C, v123, 0xFFFFFFFF, 0);
          }
        }
        v129 = (*(*(Unit + 0x50) + 0x18i64))(Unit + 0x50);
        v130 = *(*(Unit + 0x13A0) + 0x40i64);
        v338 = *&xmmword_45149A0;
        *&v337.m256i_u64[2] = v126;
        *v337.m256i_i8 = v127;
        v339 = *(v334.m128i_i64 + 4);
        LODWORD(v340) = v334.m128i_i32[3];
        sub_93DDB0(v130, &v337, &ymmword_4514980, v129, 1, 0i64, 0x3F800000);
      }
      if ( *(a2 + 0xC8) )
      {
        v131 = *(a2 + 0xCC);
        if ( v131 >= *(Unit + 0x13B0) )
          goto LABEL_318;
        *(*(Unit + 0x13A0) + 0x60 * v131 + 0x48) = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*(HudInfo + 0x10A)));
        v132 = *(a2 + 0xC8) == 0;
      }
      else
      {
        v132 = 1;
      }
      if ( v132 )
      {
        if ( g_net )
        {
          v197 = *(Unit + 0x10B8);
          if ( v197 )
          {
            if ( (*(v197 + 0x81) & 2) != 0 )
              *(*(game + 0x440) + 0x162i64) = 1;
          }
        }
      }
LABEL_318:
      if ( (*(Unit + 0x58) & 2) != 0 )
      {
        v198 = *(Unit + 0x10B8);
        if ( v198 )
        {
          v199 = *(v198 + 2i64 * *(a2 + 0xCC) + 0x2C0);
          if ( v199 != 0xFFFF )
          {
            LOBYTE(v122) = 1;
            v200 = sub_56C320(game, v199, v122);
            if ( v200 )
            {
              if ( *(Unit + 0x10B0) != 3 || *(v200 + 0x10A8) > 1u || (*(v200 + 0x1058) & 0x7000014) != 0 || *(a2 + 0xC8) )
                *(v200 + 0x74C) = *(a2 + 0xC8);
            }
          }
        }
      }
      return;
    case 0xF130:
      sub_364560(Unit);
      return;
    case 0xF131:
      *(Unit + 0x6E4) = *(a2 + 0xC8);
      return;
    case 0xF133:
      sub_365670(Unit, a2 + 0xC8, *(a2 + 0x178), *(a2 + 0x179), *(a2 + 0x17C));
      return;
    case 0xF134:
      v133 = *(Unit + 0x10B8);
      if ( v133 )
      {
        v134 = sub_11FE900(v133);
        if ( v134 )
          sub_363120(v134, *(a2 + 0xC8));
      }
      return;
    case 0xF135:
      v135 = *(Unit + 0x10B8);
      if ( v135 )
      {
        v136 = sub_11FE900(v135);
        if ( v136 )
          sub_363620(v136, *(a2 + 0xC8), *(a2 + 0xCC), *(a2 + 0xD0));
      }
      return;
    case 0xF13C:
      sub_328CF0(Unit, a2 + 0xC8, *(a2 + 0x178), *(a2 + 0x179));
      return;
    case 0xF140:
      sub_321210(Unit, *(a2 + 0xC8), *(a2 + 0xCC));
      return;
    case 0xF144:
      LOWORD(v333.m256_f32[0]) = *(a2 + 0xC8);
      BYTE2(v333.m256_f32[0]) = *(a2 + 0xCA);
      sub_17ABF30(&v333, &v337);
      sub_365BA0(Unit, *(a2 + 0xCB), &v337);
      return;
    case 0xF147:
      sub_35E1A0(Unit, a2 + 0xC8, *(a2 + 0xD4), a2 + 0xD8);
      if ( (*(*(Unit + 0x50) + 0x18i64))(Unit + 0x50) && !*(Unit + 0x10B0) )
        sub_EE9790(0x1Bi64, 0i64, v137);
      return;
    case 0xF14A:
      v138 = *(Unit + 0x10B8);
      if ( v138 )
      {
        v139 = sub_11FE900(v138);
        if ( v139 )
          sub_363E20(v139, *(a2 + 0xC8), *(a2 + 0xCC));
      }
      return;
    case 0xF14B:
      sub_366340(Unit, *(a2 + 0xC8), *(a2 + 0xC9), *(a2 + 0xCA), *(a2 + 0xCC), *(a2 + 0xD0));
      return;
    default:
      if ( v4 == 0xD0AD )
      {
        v140 = (*(Unit + 0x1058) & 0x7000014) != 0;
        sub_3272E0(Unit, 0x1000000i64, *(a2 + 0xC8));
        if ( v140 != ((*(Unit + 0x1058) & 0x7000014) != 0) )
          (*(*Unit + 0x340i64))(Unit);
      }
      else if ( v4 == 0xD0FE )
      {
        sub_7B3830(
          Unit,
          *(a2 + 0xC8),
          a2 + 0xCC,
          a2 + 0xD8,
          *(a2 + 0xE4),
          a2 + 0xE8,
          _mm_cvtsi128_si32(_mm_cvtsi32_si128(*(a2 + 0xF4))),
          a2 + 0xF8,
          a2 + 0x130);
      }
      return;
  }
}
