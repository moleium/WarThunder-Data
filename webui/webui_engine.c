const char *__fastcall webui_engine(__int64 http_req, __int64 a2, double a3)
{
  void (*v4)(void); // rax
  const char *result; // rax
  _BYTE *v6; // rdi
  signed __int64 v7; // rdx
  void (*v8)(void); // rax
  __int64 v9; // rdx
  __int64 LocalUnit_; // rbx
  __int64 v11; // rbp
  __m128i v12; // xmm0
  __int64 i; // r14
  __int64 v14; // r12
  CHAR *v15; // r13
  const char *v16; // rbx
  _BYTE *v17; // rdi
  signed __int64 v18; // rdx
  const char *v19; // rbx
  _BYTE *v20; // rdi
  signed __int64 v21; // rdx
  const char *v22; // rbx
  _BYTE *v23; // rdi
  signed __int64 v24; // rdx
  const char *v25; // rbx
  _BYTE *v26; // rdi
  signed __int64 v27; // rdx
  const char *v28; // rbx
  _BYTE *v29; // rdi
  signed __int64 v30; // rdx
  const char *v31; // rbx
  _BYTE *v32; // rdi
  signed __int64 v33; // rdx
  const char *v34; // rdx
  const char *v35; // rbx
  _BYTE *v36; // rdi
  signed __int64 v37; // rdx
  CHAR *v38; // rdx
  __int64 (__fastcall **v39)(void *); // r13
  const char *v40; // rbx
  _BYTE *v41; // rdi
  signed __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  _QWORD *v46; // rcx
  __int64 v47; // rax
  const char *v48; // rdi
  const char *v49; // rcx
  int v50; // eax
  int st_mtime; // ecx
  _QWORD *v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rax
  char **v55; // rbx
  char *v56; // rax
  unsigned __int64 v57; // rdx
  unsigned int v58; // ecx
  int v59; // r12d
  char *v60; // rax
  signed int v61; // ecx
  int v62; // edx
  float v63; // xmm0_4
  const char *v64; // rbp
  const char *v65; // rdi
  const char *v66; // rax
  unsigned __int8 v67; // al
  double v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  unsigned __int64 v74; // rax
  unsigned int v75; // r15d
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v77; // rcx
  __int128 v78; // xmm8
  __int128 v79; // xmm9
  float v80; // xmm0_4
  __int64 air_movement_; // rbx
  __int128 *v82; // rdi
  float v83; // xmm10_4
  float v84; // xmm7_4
  float v85; // xmm6_4
  int v86; // eax
  unsigned __int64 v87; // rcx
  unsigned __int64 v88; // r8
  double v89; // rax
  unsigned __int64 v90; // r8
  char *v91; // r14
  __int64 j; // rdi
  double v93; // rax
  unsigned __int64 v94; // r8
  unsigned __int64 v95; // rcx
  unsigned __int64 v96; // r8
  float *v97; // rax
  int v98; // eax
  unsigned __int64 v99; // rcx
  unsigned __int64 v100; // r8
  double v101; // rax
  unsigned __int64 v102; // r8
  int v103; // edx
  char *v104; // rcx
  int v105; // eax
  unsigned __int64 v106; // rcx
  unsigned __int64 v107; // r8
  double v108; // rax
  int v109; // eax
  unsigned __int64 v110; // r8
  int v111; // eax
  unsigned __int64 v112; // rcx
  unsigned __int64 v113; // r8
  double v114; // rax
  int v115; // eax
  unsigned __int64 v116; // rcx
  unsigned __int64 v117; // r8
  double v118; // rax
  int v119; // eax
  unsigned __int64 v120; // r8
  int v121; // eax
  unsigned __int64 v122; // rcx
  unsigned __int64 v123; // r8
  double v124; // rax
  unsigned __int64 v125; // r8
  unsigned __int64 v126; // r8
  unsigned __int64 v127; // rcx
  unsigned __int64 v128; // r8
  double v129; // rax
  unsigned __int64 v130; // r8
  int v131; // eax
  unsigned __int64 v132; // rcx
  unsigned __int64 v133; // r8
  double v134; // rax
  unsigned __int64 v135; // r8
  int v136; // eax
  unsigned __int64 v137; // rcx
  unsigned __int64 v138; // r8
  double v139; // rax
  unsigned __int64 v140; // r8
  __int128 *v141; // rbp
  char v142; // di
  int v143; // xmm0_4
  __int128 *v144; // rdx
  int v145; // eax
  unsigned int v146; // ebp
  int v147; // xmm6_4
  int v148; // xmm0_4
  float v149; // xmm0_4
  float v150; // xmm6_4
  __int64 v151; // rdi
  char *v152; // rbx
  float v153; // xmm8_4
  float v154; // xmm9_4
  float v155; // xmm10_4
  float v156; // xmm11_4
  float v157; // xmm12_4
  int v158; // eax
  unsigned __int64 v159; // rcx
  unsigned __int64 v160; // r8
  double v161; // rax
  unsigned __int64 v162; // r8
  char *v163; // r14
  __int64 v164; // r12
  double v165; // rax
  unsigned __int64 v166; // r8
  unsigned __int64 v167; // rcx
  unsigned __int64 v168; // r8
  int v169; // eax
  unsigned __int64 v170; // rcx
  unsigned __int64 v171; // r8
  double v172; // rax
  unsigned __int64 v173; // r8
  __int64 v174; // rax
  int v175; // eax
  unsigned __int64 v176; // rcx
  unsigned __int64 v177; // r8
  double v178; // rax
  int v179; // eax
  unsigned __int64 v180; // r8
  int v181; // eax
  unsigned __int64 v182; // rcx
  unsigned __int64 v183; // r8
  double v184; // rax
  int v185; // eax
  unsigned __int64 v186; // rcx
  unsigned __int64 v187; // r8
  double v188; // rax
  int v189; // eax
  unsigned __int64 v190; // r8
  float v191; // xmm2_4
  int v192; // eax
  unsigned __int64 v193; // rcx
  unsigned __int64 v194; // r8
  double v195; // rax
  unsigned __int64 v196; // r8
  int v197; // eax
  unsigned __int64 v198; // rcx
  unsigned __int64 v199; // r8
  double v200; // rax
  unsigned __int64 v201; // r8
  int v202; // eax
  unsigned __int64 v203; // rcx
  unsigned __int64 v204; // r8
  double v205; // rax
  unsigned __int64 v206; // r8
  float v207; // xmm2_4
  unsigned __int64 v208; // r8
  unsigned __int64 v209; // rcx
  unsigned __int64 v210; // r8
  double v211; // rax
  unsigned __int64 v212; // r8
  int v213; // eax
  unsigned __int64 v214; // rcx
  unsigned __int64 v215; // r8
  double v216; // rax
  unsigned __int64 v217; // r8
  int v218; // eax
  unsigned __int64 v219; // rcx
  unsigned __int64 v220; // r8
  double v221; // rax
  char v222; // dl
  unsigned __int64 v223; // r8
  __int64 (__fastcall **v224)(void *); // [rsp+40h] [rbp-4B8h] BYREF
  double v225; // [rsp+48h] [rbp-4B0h]
  __int64 v226; // [rsp+50h] [rbp-4A8h]
  unsigned __int64 v227; // [rsp+58h] [rbp-4A0h]
  unsigned __int64 v228; // [rsp+60h] [rbp-498h]
  char v229; // [rsp+6Ah] [rbp-48Eh] BYREF
  char v230; // [rsp+6Bh] [rbp-48Dh] BYREF
  int v231; // [rsp+6Ch] [rbp-48Ch]
  int v232; // [rsp+70h] [rbp-488h] BYREF
  double v233; // [rsp+78h] [rbp-480h]
  int v234; // [rsp+80h] [rbp-478h]
  double v235; // [rsp+88h] [rbp-470h]
  unsigned int v236; // [rsp+9Ch] [rbp-45Ch] BYREF
  int v237[2]; // [rsp+A0h] [rbp-458h]
  float v238; // [rsp+A8h] [rbp-450h]
  float v239; // [rsp+ACh] [rbp-44Ch]
  struct _stat64i32 v240; // [rsp+B0h] [rbp-448h] BYREF
  float v241; // [rsp+E0h] [rbp-418h]
  float v242; // [rsp+E4h] [rbp-414h]
  float v243; // [rsp+ECh] [rbp-40Ch]
  __int64 air_movement; // [rsp+100h] [rbp-3F8h]
  float v245; // [rsp+10Ch] [rbp-3ECh]
  char *v246; // [rsp+110h] [rbp-3E8h]
  __int128 v247; // [rsp+118h] [rbp-3E0h] BYREF
  __int128 v248; // [rsp+128h] [rbp-3D0h]
  __int64 v249; // [rsp+138h] [rbp-3C0h]
  char v250; // [rsp+140h] [rbp-3B8h]
  __int128 *v251; // [rsp+148h] [rbp-3B0h]
  float **v252; // [rsp+150h] [rbp-3A8h]
  char *FileName[2]; // [rsp+158h] [rbp-3A0h] BYREF
  __int128 v254; // [rsp+168h] [rbp-390h]
  __int64 v255; // [rsp+178h] [rbp-380h]
  char v256; // [rsp+180h] [rbp-378h]
  __int128 *v257; // [rsp+188h] [rbp-370h]
  __int128 v258; // [rsp+190h] [rbp-368h] BYREF
  __int128 v259; // [rsp+1A0h] [rbp-358h]
  __int64 v260; // [rsp+1B0h] [rbp-348h]
  char v261; // [rsp+1B8h] [rbp-340h]
  __int128 *v262; // [rsp+1C0h] [rbp-338h]
  __int64 v263[4]; // [rsp+1C8h] [rbp-330h]
  __int128 v264; // [rsp+1E8h] [rbp-310h] BYREF
  __int128 v265; // [rsp+1F8h] [rbp-300h]
  __int64 v266; // [rsp+208h] [rbp-2F0h]
  char v267; // [rsp+210h] [rbp-2E8h]
  __int128 *v268; // [rsp+218h] [rbp-2E0h]
  char Str1[16]; // [rsp+220h] [rbp-2D8h] BYREF
  __int128 v270; // [rsp+230h] [rbp-2C8h]
  __int128 v271; // [rsp+240h] [rbp-2B8h] BYREF
  __int128 v272; // [rsp+250h] [rbp-2A8h]
  __int128 v273; // [rsp+260h] [rbp-298h] BYREF
  __int128 v274; // [rsp+270h] [rbp-288h]
  __int128 v275; // [rsp+280h] [rbp-278h] BYREF
  __int128 v276; // [rsp+290h] [rbp-268h]
  __m128i v277[2]; // [rsp+420h] [rbp-D8h] BYREF

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
  if ( !parse_command_data(v6, v7, "cmd", v277, 0x20i64) )
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
  v11 = *(LocalUnit + 0x9D0);
  if ( !v11 )
    goto LABEL_2;
  v12 = _mm_xor_si128(_mm_load_si128(v277), xmmword_44CB140);
  if ( !_mm_testz_si128(v12, v12) )
  {
    if ( !(v277[0].m128i_i64[0] ^ 0x50646C6975626572i64 | *(v277[0].m128i_i64 + 5) ^ 0x73746F6C50646Ci64) )
    {
      air_movement = *(LocalUnit + 0x9D0);
      v247 = xmmword_44CB290;
      v248 = 0i64;
      v249 = 0xFFFFFFFF00000000ui64;
      v250 = 0;
      v251 = &xmmword_4B67CC0;
      *FileName = xmmword_44CB290;
      v254 = 0i64;
      v255 = 0xFFFFFFFF00000000ui64;
      v256 = 0;
      v257 = &xmmword_4B67CC0;
      v258 = xmmword_44CB290;
      v259 = 0i64;
      v260 = 0xFFFFFFFF00000000ui64;
      v261 = 0;
      v262 = &xmmword_4B67CC0;
      v264 = xmmword_44CB290;
      v265 = 0i64;
      v266 = 0xFFFFFFFF00000000ui64;
      v267 = 0;
      v268 = &xmmword_4B67CC0;
      v237[0] = 0;
      v263[0] = &v247;
      v263[1] = FileName;
      v263[2] = &v258;
      v263[3] = &v264;
      for ( i = 0i64; i != 4; ++i )
      {
        v14 = v263[i];
        *&v240.st_dev = 0i64;
        *&v240.st_rdev = 0i64;
        *&Str1[8] = i;
        *Str1 = 2;
        *&v240.st_nlink = off_4B678C8;
        ctor_vprintf(&v240, v9, "modes.%d", Str1, 1);
        v224 = 0i64;
        v225 = *&off_4B678C8;
        v226 = 0i64;
        v15 = *&v240.st_dev;
        v246 = *&v240.st_dev;
        if ( !v240.st_rdev )
          v15 = &szFile;
        *&Str1[8] = v15;
        *Str1 = 1;
        ctor_vprintf(&v224, 0x20i64, "%s.enabled", Str1, 1);
        v16 = &szFile;
        if ( v226 )
          v16 = v224;
        v17 = *(http_req + 0x18);
        if ( v17 )
          v18 = strlen(*(http_req + 0x18));
        else
          v18 = 0i64;
        if ( parse_command_data(v17, v18, v16, Str1, 8i64) )
          *(v237 + i) = (*"true" ^ *Str1 | (aTrue_0[4] ^ Str1[4])) == 0;
        v232 = 0;
        *&Str1[8] = v15;
        *Str1 = 1;
        ctor_vprintf(&v224, 0x20i64, "%s.modeConfig", Str1, 1);
        v19 = &szFile;
        if ( v226 )
          v19 = v224;
        v20 = *(http_req + 0x18);
        if ( v20 )
          v21 = strlen(*(http_req + 0x18));
        else
          v21 = 0i64;
        if ( parse_command_data(v20, v21, v19, Str1, 0x20i64) )
          sub_1EC440(Str1, "%d");
        *(v14 + 0xC) = 3 * (v232 == 0);
        *&Str1[8] = v15;
        *Str1 = 1;
        ctor_vprintf(&v224, 0x20i64, "%s.throttle", Str1, 1);
        v22 = &szFile;
        if ( v226 )
          v22 = v224;
        v23 = *(http_req + 0x18);
        if ( v23 )
          v24 = strlen(*(http_req + 0x18));
        else
          v24 = 0i64;
        if ( parse_command_data(v23, v24, v22, Str1, 0x20i64) )
          sub_1EC440(Str1, "%f");
        *&Str1[8] = v15;
        *Str1 = 1;
        ctor_vprintf(&v224, 0x20i64, "%s.manifoldPressure", Str1, 1);
        v25 = &szFile;
        if ( v226 )
          v25 = v224;
        v26 = *(http_req + 0x18);
        if ( v26 )
          v27 = strlen(*(http_req + 0x18));
        else
          v27 = 0i64;
        if ( parse_command_data(v26, v27, v25, Str1, 0x20i64) )
          sub_1EC440(Str1, "%f");
        *(v14 + 0x14) = *(v14 + 0x14) / *&gamephys::std_temp;
        *&Str1[8] = v15;
        *Str1 = 1;
        ctor_vprintf(&v224, 0x20i64, "%s.omega", Str1, 1);
        v28 = &szFile;
        if ( v226 )
          v28 = v224;
        v29 = *(http_req + 0x18);
        if ( v29 )
          v30 = strlen(*(http_req + 0x18));
        else
          v30 = 0i64;
        if ( parse_command_data(v29, v30, v28, Str1, 0x20i64) )
          sub_1EC440(Str1, "%f");
        *&Str1[8] = v15;
        *Str1 = 1;
        ctor_vprintf(&v224, 0x20i64, "%s.mixtureAutoMode", Str1, 1);
        v31 = &szFile;
        if ( v226 )
          v31 = v224;
        v32 = *(http_req + 0x18);
        if ( v32 )
          v33 = strlen(*(http_req + 0x18));
        else
          v33 = 0i64;
        if ( parse_command_data(v32, v33, v31, Str1, 8i64) && *"true" ^ *Str1 | (aTrue_0[4] ^ Str1[4]) )
        {
          *&Str1[8] = v15;
          *Str1 = 1;
          ctor_vprintf(&v224, 0x20i64, "%s.mixture", Str1, 1);
          v34 = &szFile;
          if ( v226 )
            v34 = v224;
          sub_B0A5E0(http_req, v34);
        }
        else
        {
          *(v14 + 0xC) |= 8u;
          *(v14 + 0x20) = 0x3F800000;
        }
        *&Str1[8] = v15;
        *Str1 = 1;
        ctor_vprintf(&v224, 0x20i64, "%s.superchargerAutoMode", Str1, 1);
        v35 = &szFile;
        if ( v226 )
          v35 = v224;
        v36 = *(http_req + 0x18);
        if ( v36 )
          v37 = strlen(*(http_req + 0x18));
        else
          v37 = 0i64;
        if ( parse_command_data(v36, v37, v35, Str1, 8i64) && *"true" ^ *Str1 | (aTrue_0[4] ^ Str1[4]) )
        {
          v236 = 0;
          *&Str1[8] = v15;
          *Str1 = 1;
          ctor_vprintf(&v224, 0x20i64, "%s.superchargerGear", Str1, 1);
          v38 = &szFile;
          if ( v226 )
            v38 = v224;
          sub_B0A980(http_req, v38, &v236);
          *(v14 + 0x24) = v236 - 1;
        }
        else
        {
          *(v14 + 0xC) |= 4u;
          *(v14 + 0x24) = 0xFFFFFFFF;
        }
        *&Str1[8] = v15;
        *Str1 = 1;
        ctor_vprintf(&v224, 0x20i64, "%s.propeller", Str1, 1);
        v39 = v224;
        v40 = v224;
        if ( !v226 )
          v40 = &szFile;
        v41 = *(http_req + 0x18);
        if ( v41 )
          v42 = strlen(*(http_req + 0x18));
        else
          v42 = 0i64;
        if ( !parse_command_data(v41, v42, v40, Str1, 8i64) || !(*"true" ^ *Str1 | (aTrue_0[4] ^ Str1[4])) )
          *(v14 + 0xC) |= 0x10u;
        if ( v39 )
          (*(**&v225 + 0x40i64))(COERCE_DOUBLE(*&v225), v39);
        v9 = v246;
        if ( v246 )
          (*(**&v240.st_nlink + 0x40i64))(*&v240.st_nlink);
      }
      v236 = 0;
      sub_B0A5E0(http_req, "airspeed");
      DWORD1(v247) = _mm_cvtsi128_si32(_mm_cvtsi32_si128(v236));
      HIDWORD(FileName[0]) = DWORD1(v247);
      DWORD1(v258) = DWORD1(v247);
      DWORD1(v264) = DWORD1(v247);
      v239 = 0.0;
      v238 = 10000.0;
      v245 = 100.0;
      sub_B0A5E0(http_req, "altitude.min");
      sub_B0A5E0(http_req, "altitude.max");
      sub_B0A5E0(http_req, "altitude.step");
      v231 = 0;
      sub_B0A5E0(http_req, "altitude2");
      v230 = 1;
      sub_B0BDF0(http_req, "superchargerVarOmega", &v230);
      v229 = 1;
      sub_B0BDF0(http_req, "lossesInPower", &v229);
      v73 = *(air_movement + 0x3AC8);
      if ( *v73 > 0 )
      {
        v252 = *(v73 + 8);
        if ( !*(*v252 + 1) )
        {
          v74 = **v252;
          v75 = 0xFFFFFFFF;
          if ( v74 <= 6 )
            v75 = dword_44CB3B8[v74];
          ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
          if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
            _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v70, v71, v72);
          v77 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
          v224 = &off_44CAF30;
          v226 = v77;
          v227 = 0x10000i64;
          v228 = 0i64;
          v225 = COERCE_DOUBLE((*(*v77 + 0x18i64))(v77, 0x10000i64));
          **&v225 = 0;
          sub_B09440(&v224, "{ ");
          BYTE12(v247) |= 0x20u;
          v78 = xmmword_4518398;
          *Str1 = xmmword_4518398;
          v79 = xmmword_45183A8;
          BYTE4(FileName[1]) |= 0x20u;
          v270 = xmmword_45183A8;
          v271 = xmmword_4518398;
          v272 = xmmword_45183A8;
          BYTE12(v258) |= 0x20u;
          v273 = xmmword_4518398;
          BYTE12(v264) |= 0x20u;
          v274 = xmmword_45183A8;
          v275 = xmmword_4518398;
          v276 = xmmword_45183A8;
          sub_B09440(&v224, "\"paramVsAltitude\": [ [");
          v80 = v239;
          air_movement_ = air_movement;
          v82 = &v247;
          if ( (v238 + Y) > v239 )
          {
            v83 = Y;
            v84 = *&dword_44CAB2C;
            v85 = v239;
            while ( 1 )
            {
              if ( v85 > v80 )
                sub_B09440(&v224, word_4A23704);
              v233 = v85;
              v232 = 3;
              v86 = sub_16E07A0((*&v225 + v228), v227 - v228, "[%.1f, [", &v232, 1);
              v87 = v228 + v86;
              v228 = v87;
              v88 = v227;
              if ( v87 >= v227 - (v227 >> 2) )
              {
                v227 *= 2i64;
                v89 = COERCE_DOUBLE((*(*v226 + 0x38i64))(v226, COERCE_DOUBLE(*&v225)));
                v225 = v89;
                v88 = v227;
                v87 = v228;
              }
              else
              {
                v89 = v225;
              }
              v90 = v88 - 1;
              if ( v87 < v90 )
                v90 = v87;
              *(*&v89 + v90) = 0;
              v91 = Str1;
              for ( j = 0i64; j != 4; ++j )
              {
                v97 = v263[j];
                *v97 = v85;
                sub_15F2440(*(air_movement_ + 0x3AC8), &v232, 0, air_movement_, 1, v97, v91, &v240);
                if ( j )
                {
                  v98 = sub_16E07A0((*&v225 + v228), v227 - v228, word_4A23704, 0i64, 0);
                  v99 = v228 + v98;
                  v228 = v99;
                  v100 = v227;
                  if ( v99 >= v227 - (v227 >> 2) )
                  {
                    v227 *= 2i64;
                    v101 = COERCE_DOUBLE((*(*v226 + 0x38i64))(v226, COERCE_DOUBLE(*&v225)));
                    v225 = v101;
                    v100 = v227;
                    v99 = v228;
                  }
                  else
                  {
                    v101 = v225;
                  }
                  v102 = v100 - 1;
                  if ( v99 < v102 )
                    v102 = v99;
                  *(*&v101 + v102) = 0;
                }
                v103 = v227 - v228;
                v104 = (*&v225 + v228);
                if ( !*(v237 + j) )
                {
                  v109 = sub_16E07A0(v104, v103, "null", 0i64, 0);
                  goto LABEL_204;
                }
                v105 = sub_16E07A0(v104, v103, "[", 0i64, 0);
                v106 = v228 + v105;
                v228 = v106;
                v107 = v227;
                if ( v106 >= v227 - (v227 >> 2) )
                {
                  v227 *= 2i64;
                  v108 = COERCE_DOUBLE((*(*v226 + 0x38i64))(v226, COERCE_DOUBLE(*&v225)));
                  v225 = v108;
                  v107 = v227;
                  v106 = v228;
                }
                else
                {
                  v108 = v225;
                }
                v110 = v107 - 1;
                if ( v106 < v110 )
                  v110 = v106;
                *(*&v108 + v110) = 0;
                switch ( v75 )
                {
                  case 2u:
                    v233 = fsqrt(
                             (*&v240.st_nlink * *&v240.st_nlink)
                           + ((*&v240.st_ino * *&v240.st_ino) + (*&v240.st_dev * *&v240.st_dev)));
                    v232 = 3;
                    v115 = sub_16E07A0((*&v225 + v228), v227 - v228, "%.1f", &v232, 1);
                    v116 = v228 + v115;
                    v228 = v116;
                    v117 = v227;
                    if ( v116 >= v227 - (v227 >> 2) )
                    {
                      v227 *= 2i64;
                      v118 = COERCE_DOUBLE((*(*v226 + 0x38i64))(v226, COERCE_DOUBLE(*&v225)));
                      v225 = v118;
                      v117 = v227;
                      v116 = v228;
                    }
                    else
                    {
                      v118 = v225;
                    }
                    v125 = v117 - 1;
                    if ( v116 < v125 )
                      v125 = v116;
                    *(*&v118 + v125) = 0;
                    v233 = (*(&v240.st_mtime + 1) * v84);
                    v232 = 3;
                    v119 = sub_16E07A0((*&v225 + v228), v227 - v228, ", %.1f", &v232, 1);
                    goto LABEL_192;
                  case 1u:
                    v233 = fsqrt(
                             (*&v240.st_nlink * *&v240.st_nlink)
                           + ((*&v240.st_ino * *&v240.st_ino) + (*&v240.st_dev * *&v240.st_dev)));
                    v232 = 3;
                    v119 = sub_16E07A0((*&v225 + v228), v227 - v228, "%.1f", &v232, 1);
LABEL_192:
                    v127 = v228 + v119;
                    v228 = v127;
                    v128 = v227;
                    if ( v127 >= v227 - (v227 >> 2) )
                    {
                      v227 *= 2i64;
                      v129 = COERCE_DOUBLE((*(*v226 + 0x38i64))(v226, COERCE_DOUBLE(*&v225)));
                      v225 = v129;
                      v128 = v227;
                      v127 = v228;
                    }
                    else
                    {
                      v129 = v225;
                    }
                    v130 = v128 - 1;
                    if ( v127 < v130 )
                      v130 = v127;
                    *(*&v129 + v130) = 0;
                    v233 = v243;
                    v232 = 3;
                    v131 = sub_16E07A0((*&v225 + v228), v227 - v228, ", %.1f", &v232, 1);
                    v132 = v228 + v131;
                    v228 = v132;
                    v133 = v227;
                    if ( v132 >= v227 - (v227 >> 2) )
                    {
                      v227 *= 2i64;
                      v134 = COERCE_DOUBLE((*(*v226 + 0x38i64))(v226, COERCE_DOUBLE(*&v225)));
                      v225 = v134;
                      v133 = v227;
                      v132 = v228;
                    }
                    else
                    {
                      v134 = v225;
                    }
                    v135 = v133 - 1;
                    if ( v132 < v135 )
                      v135 = v132;
                    *(*&v134 + v135) = 0;
                    break;
                  case 0u:
                    v233 = (*(&v240.st_mtime + 1) * v84);
                    v232 = 3;
                    v111 = sub_16E07A0((*&v225 + v228), v227 - v228, "%.1f", &v232, 1);
                    v112 = v228 + v111;
                    v228 = v112;
                    v113 = v227;
                    if ( v112 >= v227 - (v227 >> 2) )
                    {
                      v227 *= 2i64;
                      v114 = COERCE_DOUBLE((*(*v226 + 0x38i64))(v226, COERCE_DOUBLE(*&v225)));
                      v225 = v114;
                      v113 = v227;
                      v112 = v228;
                    }
                    else
                    {
                      v114 = v225;
                    }
                    v120 = v113 - 1;
                    if ( v112 < v120 )
                      v120 = v112;
                    *(*&v114 + v120) = 0;
                    v233 = (*&gamephys::std_temp * *(&v240.st_ctime + 1));
                    v232 = 3;
                    v235 = (*&v240.st_ctime * *&gamephys::std_temp);
                    v234 = 3;
                    v121 = sub_16E07A0((*&v225 + v228), v227 - v228, ", %.1f, %.1f", &v232, 2);
                    v122 = v228 + v121;
                    v228 = v122;
                    v123 = v227;
                    if ( v122 >= v227 - (v227 >> 2) )
                    {
                      v227 *= 2i64;
                      v124 = COERCE_DOUBLE((*(*v226 + 0x38i64))(v226, COERCE_DOUBLE(*&v225)));
                      v225 = v124;
                      v123 = v227;
                      v122 = v228;
                    }
                    else
                    {
                      v124 = v225;
                    }
                    v126 = v123 - 1;
                    if ( v122 < v126 )
                      v126 = v122;
                    *(*&v124 + v126) = 0;
                    v233 = v242;
                    v232 = 3;
                    v235 = v241;
                    v234 = 3;
                    v119 = sub_16E07A0((*&v225 + v228), v227 - v228, ", %.1f, %.1f", &v232, 2);
                    goto LABEL_192;
                }
                v109 = sub_16E07A0((*&v225 + v228), v227 - v228, "]", 0i64, 0);
LABEL_204:
                v95 = v228 + v109;
                v228 = v95;
                v94 = v227;
                if ( v95 >= v227 - (v227 >> 2) )
                {
                  v227 *= 2i64;
                  v93 = COERCE_DOUBLE((*(*v226 + 0x38i64))(v226, COERCE_DOUBLE(*&v225)));
                  v225 = v93;
                  v94 = v227;
                  v95 = v228;
                }
                else
                {
                  v93 = v225;
                }
                v96 = v94 - 1;
                if ( v95 < v96 )
                  v96 = v95;
                *(*&v93 + v96) = 0;
                v91 += 0x20;
              }
              v136 = sub_16E07A0((*&v225 + v228), v227 - v228, "] ]", 0i64, 0);
              v137 = v228 + v136;
              v228 = v137;
              v138 = v227;
              if ( v137 >= v227 - (v227 >> 2) )
              {
                v227 *= 2i64;
                v139 = COERCE_DOUBLE((*(*v226 + 0x38i64))(v226, COERCE_DOUBLE(*&v225)));
                v225 = v139;
                v138 = v227;
                v137 = v228;
              }
              else
              {
                v139 = v225;
              }
              v140 = v138 - 1;
              if ( v137 < v140 )
                v140 = v137;
              *(*&v139 + v140) = 0;
              v80 = v239;
              if ( v85 <= v239 )
              {
                v272 = v270;
                v271 = *Str1;
                v274 = v270;
                v273 = *Str1;
                v276 = v270;
                v275 = *Str1;
              }
              v85 = v85 + v245;
              if ( v85 >= (v238 + v83) )
              {
                v82 = v263[0];
                break;
              }
            }
          }
          sub_B09440(&v224, "] ], ");
          *v82 = v231;
          v141 = v82;
          sub_15F2440(*(air_movement_ + 0x3AC8), &v232, 0, air_movement_, 1, v82, Str1, &v240);
          v142 = v230;
          if ( v230 )
            v143 = dword_44801E8;
          else
            v143 = LODWORD(v243);
          v144 = v141;
          *(v141 + 7) = v143;
          v145 = *(v141 + 3);
          *(v141 + 3) = v145 & 0xFFFFFFFD;
          v146 = 0xFFFFFFFD;
          if ( !v229 )
          {
            *(v144 + 3) = v145 & 0xFFFFFFDD;
            v146 = 0xFFFFFFDD;
          }
          *v144 = v231;
          LODWORD(FileName[0]) = v231;
          sub_15F2440(*(air_movement + 0x3AC8), &v232, 0, air_movement, 1, FileName, &v271, &v240);
          v147 = dword_44801E8;
          if ( v142 )
            v148 = dword_44801E8;
          else
            v148 = LODWORD(v243);
          HIDWORD(v254) = v148;
          HIDWORD(FileName[1]) &= v146;
          LODWORD(FileName[0]) = v231;
          LODWORD(v258) = v231;
          sub_15F2440(*(air_movement + 0x3AC8), &v232, 0, air_movement, 1, &v258, &v273, &v240);
          if ( v142 )
            v149 = *&v147;
          else
            v149 = v243;
          *(&v259 + 3) = v149;
          HIDWORD(v258) &= v146;
          LODWORD(v258) = v231;
          LODWORD(v264) = v231;
          sub_15F2440(*(air_movement + 0x3AC8), &v232, 0, air_movement, 1, &v264, &v275, &v240);
          if ( !v142 )
            *&v147 = v243;
          HIDWORD(v265) = v147;
          HIDWORD(v264) &= v146;
          LODWORD(v264) = v231;
          *Str1 = v78;
          v270 = v79;
          v272 = v79;
          v271 = v78;
          v274 = v79;
          v273 = v78;
          v275 = v78;
          v276 = v79;
          sub_B09440(&v224, "\"paramVsOmega\": [ [ ");
          v150 = (*v252)[0x48] * dword_44A05C8;
          v151 = air_movement;
          if ( v150 < ((*v252)[0x49] * *&dword_44A02C0) )
          {
            v152 = 0i64;
            v153 = *&dword_448790C;
            v154 = *&dword_44A02C0;
            v155 = *&dword_44CAB2C;
            v156 = *&dword_449F1A8;
            v157 = *&dword_449F1AC;
            do
            {
              if ( (v152 & 1) != 0 )
                sub_B09440(&v224, word_4A23704);
              v233 = v150;
              v232 = 3;
              v158 = sub_16E07A0((*&v225 + v228), v227 - v228, "[%.2f, [", &v232, 1);
              v159 = v228 + v158;
              v228 = v159;
              v160 = v227;
              v246 = v152;
              if ( v159 >= v227 - (v227 >> 2) )
              {
                v227 *= 2i64;
                v161 = COERCE_DOUBLE((*(*v226 + 0x38i64))(v226, COERCE_DOUBLE(*&v225)));
                v225 = v161;
                v160 = v227;
                v159 = v228;
              }
              else
              {
                v161 = v225;
              }
              v162 = v160 - 1;
              if ( v159 < v162 )
                v162 = v159;
              *(*&v161 + v162) = 0;
              v163 = Str1;
              v164 = 0i64;
              v152 = word_4A23704;
              do
              {
                if ( v164 )
                {
                  v169 = sub_16E07A0((*&v225 + v228), v227 - v228, word_4A23704, 0i64, 0);
                  v170 = v228 + v169;
                  v228 = v170;
                  v171 = v227;
                  if ( v170 >= v227 - (v227 >> 2) )
                  {
                    v227 *= 2i64;
                    v172 = COERCE_DOUBLE((*(*v226 + 0x38i64))(v226, COERCE_DOUBLE(*&v225)));
                    v225 = v172;
                    v171 = v227;
                    v170 = v228;
                  }
                  else
                  {
                    v172 = v225;
                  }
                  v173 = v171 - 1;
                  if ( v170 < v173 )
                    v173 = v170;
                  *(*&v172 + v173) = 0;
                }
                v174 = v263[v164];
                *(v174 + 0x18) = v150;
                sub_15F2440(*(v151 + 0x3AC8), &v232, 0, v151, 1, v174, v163, &v240);
                if ( !*(v237 + v164)
                  || *(&v240.st_mtime + 1) <= 0.0
                  && ((*&v240.st_nlink * *&v240.st_nlink)
                    + ((*&v240.st_ino * *&v240.st_ino) + (*&v240.st_dev * *&v240.st_dev))) <= 0.0 )
                {
                  v179 = sub_16E07A0((*&v225 + v228), v227 - v228, "null", 0i64, 0);
                  goto LABEL_307;
                }
                v175 = sub_16E07A0((*&v225 + v228), v227 - v228, "[", 0i64, 0);
                v176 = v228 + v175;
                v228 = v176;
                v177 = v227;
                if ( v176 >= v227 - (v227 >> 2) )
                {
                  v227 *= 2i64;
                  v178 = COERCE_DOUBLE((*(*v226 + 0x38i64))(v226, COERCE_DOUBLE(*&v225)));
                  v225 = v178;
                  v177 = v227;
                  v176 = v228;
                }
                else
                {
                  v178 = v225;
                }
                v180 = v177 - 1;
                if ( v176 < v180 )
                  v180 = v176;
                *(*&v178 + v180) = 0;
                switch ( v75 )
                {
                  case 2u:
                    v233 = fsqrt(
                             (*&v240.st_nlink * *&v240.st_nlink)
                           + ((*&v240.st_ino * *&v240.st_ino) + (*&v240.st_dev * *&v240.st_dev)));
                    v232 = 3;
                    v185 = sub_16E07A0((*&v225 + v228), v227 - v228, "%.1f", &v232, 1);
                    v186 = v228 + v185;
                    v228 = v186;
                    v187 = v227;
                    if ( v186 >= v227 - (v227 >> 2) )
                    {
                      v227 *= 2i64;
                      v188 = COERCE_DOUBLE((*(*v226 + 0x38i64))(v226, COERCE_DOUBLE(*&v225)));
                      v225 = v188;
                      v187 = v227;
                      v186 = v228;
                    }
                    else
                    {
                      v188 = v225;
                    }
                    v196 = v187 - 1;
                    if ( v186 < v196 )
                      v196 = v186;
                    *(*&v188 + v196) = 0;
                    v233 = (*(&v240.st_mtime + 1) * v155);
                    v232 = 3;
                    v197 = sub_16E07A0((*&v225 + v228), v227 - v228, ", %.1f", &v232, 1);
                    v198 = v228 + v197;
                    v228 = v198;
                    v199 = v227;
                    if ( v198 >= v227 - (v227 >> 2) )
                    {
                      v227 *= 2i64;
                      v200 = COERCE_DOUBLE((*(*v226 + 0x38i64))(v226, COERCE_DOUBLE(*&v225)));
                      v225 = v200;
                      v199 = v227;
                      v198 = v228;
                    }
                    else
                    {
                      v200 = v225;
                    }
                    v206 = v199 - 1;
                    if ( v198 < v206 )
                      v206 = v198;
                    *(*&v200 + v206) = 0;
                    if ( v156 < v243 || (v207 = 0.0, v243 < v157) )
                      v207 = (*(&v240.st_mtime + 1) * v155) / v243;
                    v233 = v207;
                    v232 = 3;
                    v189 = sub_16E07A0((*&v225 + v228), v227 - v228, ", %.1f", &v232, 1);
                    goto LABEL_295;
                  case 1u:
                    v233 = fsqrt(
                             (*&v240.st_nlink * *&v240.st_nlink)
                           + ((*&v240.st_ino * *&v240.st_ino) + (*&v240.st_dev * *&v240.st_dev)));
                    v232 = 3;
                    v189 = sub_16E07A0((*&v225 + v228), v227 - v228, "%.1f", &v232, 1);
LABEL_295:
                    v209 = v228 + v189;
                    v228 = v209;
                    v210 = v227;
                    if ( v209 >= v227 - (v227 >> 2) )
                    {
                      v227 *= 2i64;
                      v211 = COERCE_DOUBLE((*(*v226 + 0x38i64))(v226, COERCE_DOUBLE(*&v225)));
                      v225 = v211;
                      v210 = v227;
                      v209 = v228;
                    }
                    else
                    {
                      v211 = v225;
                    }
                    v212 = v210 - 1;
                    if ( v209 < v212 )
                      v212 = v209;
                    *(*&v211 + v212) = 0;
                    v233 = v243;
                    v232 = 3;
                    v213 = sub_16E07A0((*&v225 + v228), v227 - v228, ", %.1f", &v232, 1);
                    v214 = v228 + v213;
                    v228 = v214;
                    v215 = v227;
                    if ( v214 >= v227 - (v227 >> 2) )
                    {
                      v227 *= 2i64;
                      v216 = COERCE_DOUBLE((*(*v226 + 0x38i64))(v226, COERCE_DOUBLE(*&v225)));
                      v225 = v216;
                      v215 = v227;
                      v214 = v228;
                    }
                    else
                    {
                      v216 = v225;
                    }
                    v217 = v215 - 1;
                    if ( v214 < v217 )
                      v217 = v214;
                    *(*&v216 + v217) = 0;
                    break;
                  case 0u:
                    v233 = (*(&v240.st_mtime + 1) * v155);
                    v232 = 3;
                    v181 = sub_16E07A0((*&v225 + v228), v227 - v228, "%.1f", &v232, 1);
                    v182 = v228 + v181;
                    v228 = v182;
                    v183 = v227;
                    if ( v182 >= v227 - (v227 >> 2) )
                    {
                      v227 *= 2i64;
                      v184 = COERCE_DOUBLE((*(*v226 + 0x38i64))(v226, COERCE_DOUBLE(*&v225)));
                      v225 = v184;
                      v183 = v227;
                      v182 = v228;
                    }
                    else
                    {
                      v184 = v225;
                    }
                    v190 = v183 - 1;
                    if ( v182 < v190 )
                      v190 = v182;
                    *(*&v184 + v190) = 0;
                    if ( v156 < v243 || (v191 = 0.0, v243 < v157) )
                      v191 = (*(&v240.st_mtime + 1) * v155) / v243;
                    v233 = v191;
                    v232 = 3;
                    v192 = sub_16E07A0((*&v225 + v228), v227 - v228, ", %.1f", &v232, 1);
                    v193 = v228 + v192;
                    v228 = v193;
                    v194 = v227;
                    if ( v193 >= v227 - (v227 >> 2) )
                    {
                      v227 *= 2i64;
                      v195 = COERCE_DOUBLE((*(*v226 + 0x38i64))(v226, COERCE_DOUBLE(*&v225)));
                      v225 = v195;
                      v194 = v227;
                      v193 = v228;
                    }
                    else
                    {
                      v195 = v225;
                    }
                    v201 = v194 - 1;
                    if ( v193 < v201 )
                      v201 = v193;
                    *(*&v195 + v201) = 0;
                    v233 = (*&gamephys::std_temp * *(&v240.st_ctime + 1));
                    v232 = 3;
                    v235 = (*&v240.st_ctime * *&gamephys::std_temp);
                    v234 = 3;
                    v202 = sub_16E07A0((*&v225 + v228), v227 - v228, ", %.1f, %.1f", &v232, 2);
                    v203 = v228 + v202;
                    v228 = v203;
                    v204 = v227;
                    if ( v203 >= v227 - (v227 >> 2) )
                    {
                      v227 *= 2i64;
                      v205 = COERCE_DOUBLE((*(*v226 + 0x38i64))(v226, COERCE_DOUBLE(*&v225)));
                      v225 = v205;
                      v204 = v227;
                      v203 = v228;
                    }
                    else
                    {
                      v205 = v225;
                    }
                    v208 = v204 - 1;
                    if ( v203 < v208 )
                      v208 = v203;
                    *(*&v205 + v208) = 0;
                    v233 = v241;
                    v232 = 3;
                    v235 = v242;
                    v234 = 3;
                    v189 = sub_16E07A0((*&v225 + v228), v227 - v228, ", %.1f, %.1f", &v232, 2);
                    goto LABEL_295;
                }
                v179 = sub_16E07A0((*&v225 + v228), v227 - v228, "]", 0i64, 0);
LABEL_307:
                v167 = v228 + v179;
                v228 = v167;
                v166 = v227;
                if ( v167 >= v227 - (v227 >> 2) )
                {
                  v227 *= 2i64;
                  v165 = COERCE_DOUBLE((*(*v226 + 0x38i64))(v226, COERCE_DOUBLE(*&v225)));
                  v225 = v165;
                  v166 = v227;
                  v167 = v228;
                }
                else
                {
                  v165 = v225;
                }
                v168 = v166 - 1;
                if ( v167 < v168 )
                  v168 = v167;
                *(*&v165 + v168) = 0;
                ++v164;
                v163 += 0x20;
              }
              while ( v164 != 4 );
              v218 = sub_16E07A0((*&v225 + v228), v227 - v228, "] ]", 0i64, 0);
              v219 = v228 + v218;
              v228 = v219;
              v220 = v227;
              if ( v219 >= v227 - (v227 >> 2) )
              {
                v227 *= 2i64;
                v221 = COERCE_DOUBLE((*(*v226 + 0x38i64))(v226, COERCE_DOUBLE(*&v225)));
                v225 = v221;
                v220 = v227;
                v219 = v228;
              }
              else
              {
                v221 = v225;
              }
              v222 = v246;
              v223 = v220 - 1;
              if ( v219 < v223 )
                v223 = v219;
              *(*&v221 + v223) = 0;
              if ( (v222 & 1) == 0 )
              {
                v272 = v270;
                v271 = *Str1;
                v274 = v270;
                v273 = *Str1;
                v276 = v270;
                v275 = *Str1;
              }
              v150 = v150 + v153;
              LOBYTE(v152) = 1;
            }
            while ( v150 < ((*v252)[0x49] * v154) );
          }
          sub_B09440(&v224, "] ]");
          sub_B09440(&v224, "}");
          v233 = v225;
          v232 = 1;
          logmessage_fmt(3u, "%s", &v232, 1);
          sub_AF1600(http_req, *&v225, v228);
          v224 = &off_44CAF30;
          v68 = v225;
          v69 = v226;
          return (*(*v69 + 0x40i64))(v69, COERCE_DOUBLE(*&v68));
        }
      }
    }
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
  LODWORD(v258) = 0;
  if ( !sub_B0ACA0(http_req, Str1) || !sub_B09250(http_req, &v258) )
  {
LABEL_116:
    v52 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v52[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(v52, v43, v44, v45);
    v53 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    *&v240.st_dev = &off_44CAF30;
    *&v240.st_rdev = v53;
    v240.st_atime = 0x80000i64;
    v240.st_mtime = 0i64;
    *&v240.st_nlink = (*(*v53 + 0x18i64))(v53, 0x80000i64);
    **&v240.st_nlink = 0;
    sub_B09440(&v240, "{\n");
    sub_B09440(&v240, "  \"valid\": true,\n");
    sub_B094D0(LocalUnit_, &v240);
    sub_B09440(&v240, ",\n");
    v54 = *(v11 + 0x3AC8);
    if ( *v54 > 0 )
    {
      v55 = *(v54 + 8);
      v56 = *v55;
      if ( !(*v55)[1] )
      {
        v57 = *v56;
        v58 = 0xFFFFFFFF;
        if ( v57 <= 6 )
          v58 = dword_44CB3B8[v57];
        v59 = *(v56 + 0x5E);
        LODWORD(FileName[0]) = v58;
        sub_B17380(&v240, FileName);
        v60 = *v55;
        v61 = *(*v55 + 0x6F);
        if ( (*v55)[0x221] && v61 > 0 || v61 <= 0xA && (v62 = 0x510, _bittest(&v62, v61)) )
          v63 = *(v60 + 0x67) * *(v60 + 0x65);
        else
          v63 = *(v60 + 0x65);
        *&v247 = v63 * *&dword_44CB26C;
        sub_B09B80(&v240, "\"manifoldPressureMax\": %f,\n", a3);
        LODWORD(v247) = *(*v55 + 0x48);
        sub_B09B80(&v240, "\"omegaMin\": %f,\n", a3);
        LODWORD(v247) = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*(*v55 + 0x49)));
        sub_B09B80(&v240, "\"omegaMax\": %f,\n", a3);
        v64 = "true";
        v65 = "false";
        v66 = "false";
        if ( v59 > 0 )
          v66 = "true";
        *&v247 = v66;
        sub_B09AE0(&v240, "\"supercharger\": %s,\n", &v247);
        LODWORD(v247) = v59 + 1;
        sub_B0A540(&v240, "\"superchargerGearCount\": %s\n,", &v247);
        if ( !(*v55)[0x226] )
          v64 = "false";
        *&v247 = v64;
        sub_B09AE0(&v240, "\"mixtureManual\": %s\n,", &v247);
        v67 = **v55 - 2;
        if ( v67 <= 4u )
          v65 = off_44CB390[v67];
        *&v247 = v65;
        sub_B09AE0(&v240, "\"advanced\": %s\n", &v247);
        sub_B09440(&v240, "}\n");
      }
    }
    sub_AF1600(http_req, *&v240.st_nlink, v240.st_mtime);
    *&v240.st_dev = &off_44CAF30;
    v68 = *&v240.st_nlink;
    v69 = *&v240.st_rdev;
    return (*(*v69 + 0x40i64))(v69, COERCE_DOUBLE(*&v68));
  }
  v46 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(v46[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(v46, v43, v44, v45);
  v47 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  *&v247 = 0i64;
  *(&v247 + 1) = v47;
  *&v248 = 0i64;
  v48 = sub_B092C0(*(LocalUnit_ + 0x4160), &v247);
  sub_B093A0(FileName, v48);
  v49 = &szFile;
  if ( FileName[1] )
    v49 = FileName[1];
  v50 = stat64i32(v49, &v240);
  st_mtime = 0;
  if ( !v50 )
    st_mtime = v240.st_mtime;
  if ( v258 != st_mtime || strcmp(Str1, v48) )
  {
    if ( FileName[1] )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    v43 = v247;
    if ( v247 )
      (*(**(&v247 + 1) + 0x40i64))(*(&v247 + 1));
    goto LABEL_116;
  }
  result = sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  if ( FileName[1] )
    result = (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
  v68 = *&v247;
  if ( v247 )
  {
    v69 = *(&v247 + 1);
    return (*(*v69 + 0x40i64))(v69, COERCE_DOUBLE(*&v68));
  }
  return result;
}
