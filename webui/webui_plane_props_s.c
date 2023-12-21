const char *__fastcall webui_plane_props_s(__int64 http_req, __int64 a2, double a3)
{
  void (*v4)(void); // rax
  const char *result; // rax
  _BYTE *v6; // rdi
  signed __int64 v7; // rdx
  void (*v8)(void); // rax
  __int64 v9; // rdx
  __int64 LocalUnit_; // rbx
  __int64 air_movement; // rbp
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
  __int64 v81; // rbx
  __int128 *v82; // rdi
  float v83; // xmm10_4
  float v84; // xmm7_4
  float v85; // xmm6_4
  unsigned __int64 v86; // rcx
  unsigned __int64 v87; // r8
  double v88; // rax
  unsigned __int64 v89; // r8
  char *v90; // r14
  __int64 j; // rdi
  double v92; // rax
  unsigned __int64 v93; // r8
  unsigned __int64 v94; // rcx
  unsigned __int64 v95; // r8
  float *v96; // rax
  unsigned __int64 v97; // rcx
  unsigned __int64 v98; // r8
  double v99; // rax
  unsigned __int64 v100; // r8
  int v101; // ecx
  unsigned __int64 v102; // rcx
  unsigned __int64 v103; // r8
  double v104; // rax
  int v105; // eax
  unsigned __int64 v106; // r8
  unsigned __int64 v107; // rcx
  unsigned __int64 v108; // r8
  double v109; // rax
  unsigned __int64 v110; // rcx
  unsigned __int64 v111; // r8
  double v112; // rax
  int v113; // eax
  unsigned __int64 v114; // r8
  unsigned __int64 v115; // rcx
  unsigned __int64 v116; // r8
  double v117; // rax
  unsigned __int64 v118; // r8
  unsigned __int64 v119; // r8
  unsigned __int64 v120; // rcx
  unsigned __int64 v121; // r8
  double v122; // rax
  unsigned __int64 v123; // r8
  unsigned __int64 v124; // rcx
  unsigned __int64 v125; // r8
  double v126; // rax
  unsigned __int64 v127; // r8
  unsigned __int64 v128; // rcx
  unsigned __int64 v129; // r8
  double v130; // rax
  unsigned __int64 v131; // r8
  __int128 *v132; // rbp
  char v133; // di
  int v134; // xmm0_4
  __int128 *v135; // rdx
  int v136; // eax
  unsigned int v137; // ebp
  int v138; // xmm6_4
  int v139; // xmm0_4
  float v140; // xmm0_4
  float v141; // xmm6_4
  __int64 v142; // rdi
  char *v143; // rbx
  float v144; // xmm8_4
  float v145; // xmm9_4
  float v146; // xmm10_4
  float v147; // xmm11_4
  float v148; // xmm12_4
  unsigned __int64 v149; // rcx
  unsigned __int64 v150; // r8
  double v151; // rax
  unsigned __int64 v152; // r8
  char *v153; // r14
  __int64 v154; // r12
  double v155; // rax
  unsigned __int64 v156; // r8
  unsigned __int64 v157; // rcx
  unsigned __int64 v158; // r8
  unsigned __int64 v159; // rcx
  unsigned __int64 v160; // r8
  double v161; // rax
  unsigned __int64 v162; // r8
  __int64 v163; // rax
  unsigned __int64 v164; // rcx
  unsigned __int64 v165; // r8
  double v166; // rax
  unsigned __int64 v167; // r8
  unsigned __int64 v168; // rcx
  unsigned __int64 v169; // r8
  double v170; // rax
  unsigned __int64 v171; // rcx
  unsigned __int64 v172; // r8
  double v173; // rax
  int v174; // eax
  unsigned __int64 v175; // r8
  float v176; // xmm2_4
  unsigned __int64 v177; // rcx
  unsigned __int64 v178; // r8
  double v179; // rax
  unsigned __int64 v180; // r8
  unsigned __int64 v181; // rcx
  unsigned __int64 v182; // r8
  double v183; // rax
  unsigned __int64 v184; // r8
  unsigned __int64 v185; // rcx
  unsigned __int64 v186; // r8
  double v187; // rax
  unsigned __int64 v188; // r8
  float v189; // xmm2_4
  unsigned __int64 v190; // r8
  unsigned __int64 v191; // rcx
  unsigned __int64 v192; // r8
  double v193; // rax
  unsigned __int64 v194; // r8
  unsigned __int64 v195; // rcx
  unsigned __int64 v196; // r8
  double v197; // rax
  unsigned __int64 v198; // r8
  unsigned __int64 v199; // rcx
  unsigned __int64 v200; // r8
  double v201; // rax
  char v202; // dl
  unsigned __int64 v203; // r8
  __int64 (__fastcall **v204)(void *); // [rsp+40h] [rbp-4B8h] BYREF
  double v205; // [rsp+48h] [rbp-4B0h]
  __int64 v206; // [rsp+50h] [rbp-4A8h]
  unsigned __int64 v207; // [rsp+58h] [rbp-4A0h]
  unsigned __int64 v208; // [rsp+60h] [rbp-498h]
  char v209; // [rsp+6Ah] [rbp-48Eh] BYREF
  char v210; // [rsp+6Bh] [rbp-48Dh] BYREF
  int v211; // [rsp+6Ch] [rbp-48Ch]
  int v212; // [rsp+70h] [rbp-488h] BYREF
  double v213; // [rsp+78h] [rbp-480h]
  int v214; // [rsp+80h] [rbp-478h]
  double v215; // [rsp+88h] [rbp-470h]
  unsigned int v216; // [rsp+9Ch] [rbp-45Ch] BYREF
  int v217[2]; // [rsp+A0h] [rbp-458h]
  float v218; // [rsp+A8h] [rbp-450h]
  float v219; // [rsp+ACh] [rbp-44Ch]
  struct _stat64i32 v220; // [rsp+B0h] [rbp-448h] BYREF
  float v221; // [rsp+E0h] [rbp-418h]
  float v222; // [rsp+E4h] [rbp-414h]
  float v223; // [rsp+ECh] [rbp-40Ch]
  __int64 air_movement_; // [rsp+100h] [rbp-3F8h]
  float v225; // [rsp+10Ch] [rbp-3ECh]
  char *v226; // [rsp+110h] [rbp-3E8h]
  __int128 v227; // [rsp+118h] [rbp-3E0h] BYREF
  __int128 v228; // [rsp+128h] [rbp-3D0h]
  __int64 v229; // [rsp+138h] [rbp-3C0h]
  char v230; // [rsp+140h] [rbp-3B8h]
  __int128 *v231; // [rsp+148h] [rbp-3B0h]
  float **v232; // [rsp+150h] [rbp-3A8h]
  char *FileName[2]; // [rsp+158h] [rbp-3A0h] BYREF
  __int128 v234; // [rsp+168h] [rbp-390h]
  __int64 v235; // [rsp+178h] [rbp-380h]
  char v236; // [rsp+180h] [rbp-378h]
  __int128 *v237; // [rsp+188h] [rbp-370h]
  __int128 v238; // [rsp+190h] [rbp-368h] BYREF
  __int128 v239; // [rsp+1A0h] [rbp-358h]
  __int64 v240; // [rsp+1B0h] [rbp-348h]
  char v241; // [rsp+1B8h] [rbp-340h]
  __int128 *v242; // [rsp+1C0h] [rbp-338h]
  __int64 v243[4]; // [rsp+1C8h] [rbp-330h]
  __int128 v244; // [rsp+1E8h] [rbp-310h] BYREF
  __int128 v245; // [rsp+1F8h] [rbp-300h]
  __int64 v246; // [rsp+208h] [rbp-2F0h]
  char v247; // [rsp+210h] [rbp-2E8h]
  __int128 *v248; // [rsp+218h] [rbp-2E0h]
  char Str1[16]; // [rsp+220h] [rbp-2D8h] BYREF
  __int128 v250; // [rsp+230h] [rbp-2C8h]
  __int128 v251; // [rsp+240h] [rbp-2B8h] BYREF
  __int128 v252; // [rsp+250h] [rbp-2A8h]
  __int128 v253; // [rsp+260h] [rbp-298h] BYREF
  __int128 v254; // [rsp+270h] [rbp-288h]
  __int128 v255; // [rsp+280h] [rbp-278h] BYREF
  __int128 v256; // [rsp+290h] [rbp-268h]
  __m128i v257[2]; // [rsp+420h] [rbp-D8h] BYREF

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
  if ( !parse_command_data(v6, v7, "cmd", v257, 0x20i64) )
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
  v12 = _mm_xor_si128(_mm_load_si128(v257), xmmword_44CB140);
  if ( !_mm_testz_si128(v12, v12) )
  {
    if ( !(v257[0].m128i_i64[0] ^ 0x50646C6975626572i64 | *(v257[0].m128i_i64 + 5) ^ 0x73746F6C50646Ci64) )
    {
      air_movement_ = *(LocalUnit + 0x9D0);
      v227 = xmmword_44CB290;
      v228 = 0i64;
      v229 = 0xFFFFFFFF00000000ui64;
      v230 = 0;
      v231 = &xmmword_4B67CC0;
      *FileName = xmmword_44CB290;
      v234 = 0i64;
      v235 = 0xFFFFFFFF00000000ui64;
      v236 = 0;
      v237 = &xmmword_4B67CC0;
      v238 = xmmword_44CB290;
      v239 = 0i64;
      v240 = 0xFFFFFFFF00000000ui64;
      v241 = 0;
      v242 = &xmmword_4B67CC0;
      v244 = xmmword_44CB290;
      v245 = 0i64;
      v246 = 0xFFFFFFFF00000000ui64;
      v247 = 0;
      v248 = &xmmword_4B67CC0;
      v217[0] = 0;
      v243[0] = &v227;
      v243[1] = FileName;
      v243[2] = &v238;
      v243[3] = &v244;
      for ( i = 0i64; i != 4; ++i )
      {
        v14 = v243[i];
        *&v220.st_dev = 0i64;
        *&v220.st_rdev = 0i64;
        *&Str1[8] = i;
        *Str1 = 2;
        *&v220.st_nlink = off_4B678C8;
        ctor_vprintf(&v220, v9, "modes.%d", Str1, 1);
        v204 = 0i64;
        v205 = *&off_4B678C8;
        v206 = 0i64;
        v15 = *&v220.st_dev;
        v226 = *&v220.st_dev;
        if ( !v220.st_rdev )
          v15 = &szFile;
        *&Str1[8] = v15;
        *Str1 = 1;
        ctor_vprintf(&v204, 0x20i64, "%s.enabled", Str1, 1);
        v16 = &szFile;
        if ( v206 )
          v16 = v204;
        v17 = *(http_req + 0x18);
        if ( v17 )
          v18 = strlen(*(http_req + 0x18));
        else
          v18 = 0i64;
        if ( parse_command_data(v17, v18, v16, Str1, 8i64) )
          *(v217 + i) = (*"true" ^ *Str1 | (aTrue_0[4] ^ Str1[4])) == 0;
        v212 = 0;
        *&Str1[8] = v15;
        *Str1 = 1;
        ctor_vprintf(&v204, 0x20i64, "%s.modeConfig", Str1, 1);
        v19 = &szFile;
        if ( v206 )
          v19 = v204;
        v20 = *(http_req + 0x18);
        if ( v20 )
          v21 = strlen(*(http_req + 0x18));
        else
          v21 = 0i64;
        if ( parse_command_data(v20, v21, v19, Str1, 0x20i64) )
          sub_1EC440(Str1, "%d");
        *(v14 + 0xC) = 3 * (v212 == 0);
        *&Str1[8] = v15;
        *Str1 = 1;
        ctor_vprintf(&v204, 0x20i64, "%s.throttle", Str1, 1);
        v22 = &szFile;
        if ( v206 )
          v22 = v204;
        v23 = *(http_req + 0x18);
        if ( v23 )
          v24 = strlen(*(http_req + 0x18));
        else
          v24 = 0i64;
        if ( parse_command_data(v23, v24, v22, Str1, 0x20i64) )
          sub_1EC440(Str1, "%f");
        *&Str1[8] = v15;
        *Str1 = 1;
        ctor_vprintf(&v204, 0x20i64, "%s.manifoldPressure", Str1, 1);
        v25 = &szFile;
        if ( v206 )
          v25 = v204;
        v26 = *(http_req + 0x18);
        if ( v26 )
          v27 = strlen(*(http_req + 0x18));
        else
          v27 = 0i64;
        if ( parse_command_data(v26, v27, v25, Str1, 0x20i64) )
          sub_1EC440(Str1, "%f");
        *(v14 + 0x14) = *(v14 + 0x14) / *&qword_4A791F0;
        *&Str1[8] = v15;
        *Str1 = 1;
        ctor_vprintf(&v204, 0x20i64, "%s.omega", Str1, 1);
        v28 = &szFile;
        if ( v206 )
          v28 = v204;
        v29 = *(http_req + 0x18);
        if ( v29 )
          v30 = strlen(*(http_req + 0x18));
        else
          v30 = 0i64;
        if ( parse_command_data(v29, v30, v28, Str1, 0x20i64) )
          sub_1EC440(Str1, "%f");
        *&Str1[8] = v15;
        *Str1 = 1;
        ctor_vprintf(&v204, 0x20i64, "%s.mixtureAutoMode", Str1, 1);
        v31 = &szFile;
        if ( v206 )
          v31 = v204;
        v32 = *(http_req + 0x18);
        if ( v32 )
          v33 = strlen(*(http_req + 0x18));
        else
          v33 = 0i64;
        if ( parse_command_data(v32, v33, v31, Str1, 8i64) && *"true" ^ *Str1 | (aTrue_0[4] ^ Str1[4]) )
        {
          *&Str1[8] = v15;
          *Str1 = 1;
          ctor_vprintf(&v204, 0x20i64, "%s.mixture", Str1, 1);
          v34 = &szFile;
          if ( v206 )
            v34 = v204;
          sub_B0A5E0(http_req, v34);
        }
        else
        {
          *(v14 + 0xC) |= 8u;
          *(v14 + 0x20) = 0x3F800000;
        }
        *&Str1[8] = v15;
        *Str1 = 1;
        ctor_vprintf(&v204, 0x20i64, "%s.superchargerAutoMode", Str1, 1);
        v35 = &szFile;
        if ( v206 )
          v35 = v204;
        v36 = *(http_req + 0x18);
        if ( v36 )
          v37 = strlen(*(http_req + 0x18));
        else
          v37 = 0i64;
        if ( parse_command_data(v36, v37, v35, Str1, 8i64) && *"true" ^ *Str1 | (aTrue_0[4] ^ Str1[4]) )
        {
          v216 = 0;
          *&Str1[8] = v15;
          *Str1 = 1;
          ctor_vprintf(&v204, 0x20i64, "%s.superchargerGear", Str1, 1);
          v38 = &szFile;
          if ( v206 )
            v38 = v204;
          sub_B0A980(http_req, v38, &v216);
          *(v14 + 0x24) = v216 - 1;
        }
        else
        {
          *(v14 + 0xC) |= 4u;
          *(v14 + 0x24) = 0xFFFFFFFF;
        }
        *&Str1[8] = v15;
        *Str1 = 1;
        ctor_vprintf(&v204, 0x20i64, "%s.propeller", Str1, 1);
        v39 = v204;
        v40 = v204;
        if ( !v206 )
          v40 = &szFile;
        v41 = *(http_req + 0x18);
        if ( v41 )
          v42 = strlen(*(http_req + 0x18));
        else
          v42 = 0i64;
        if ( !parse_command_data(v41, v42, v40, Str1, 8i64) || !(*"true" ^ *Str1 | (aTrue_0[4] ^ Str1[4])) )
          *(v14 + 0xC) |= 0x10u;
        if ( v39 )
          (*(**&v205 + 0x40i64))(COERCE_DOUBLE(*&v205), v39);
        v9 = v226;
        if ( v226 )
          (*(**&v220.st_nlink + 0x40i64))(*&v220.st_nlink);
      }
      v216 = 0;
      sub_B0A5E0(http_req, "airspeed");
      DWORD1(v227) = _mm_cvtsi128_si32(_mm_cvtsi32_si128(v216));
      HIDWORD(FileName[0]) = DWORD1(v227);
      DWORD1(v238) = DWORD1(v227);
      DWORD1(v244) = DWORD1(v227);
      v219 = 0.0;
      v218 = 10000.0;
      v225 = 100.0;
      sub_B0A5E0(http_req, "altitude.min");
      sub_B0A5E0(http_req, "altitude.max");
      sub_B0A5E0(http_req, "altitude.step");
      v211 = 0;
      sub_B0A5E0(http_req, "altitude2");
      v210 = 1;
      sub_B0BDF0(http_req, "superchargerVarOmega", &v210);
      v209 = 1;
      sub_B0BDF0(http_req, "lossesInPower", &v209);
      v73 = *(air_movement_ + 0x3AC8);
      if ( *v73 > 0 )
      {
        v232 = *(v73 + 8);
        if ( !*(*v232 + 1) )
        {
          v74 = **v232;
          v75 = 0xFFFFFFFF;
          if ( v74 <= 6 )
            v75 = dword_44CB3B8[v74];
          ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
          if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
            _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v70, v71, v72);
          v77 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
          v204 = &off_44CAF30;
          v206 = v77;
          v207 = 0x10000i64;
          v208 = 0i64;
          v205 = COERCE_DOUBLE((*(*v77 + 0x18i64))(v77, 0x10000i64));
          **&v205 = 0;
          sub_B09440(&v204, "{ ");
          BYTE12(v227) |= 0x20u;
          v78 = xmmword_4518398;
          *Str1 = xmmword_4518398;
          v79 = xmmword_45183A8;
          BYTE4(FileName[1]) |= 0x20u;
          v250 = xmmword_45183A8;
          v251 = xmmword_4518398;
          v252 = xmmword_45183A8;
          BYTE12(v238) |= 0x20u;
          v253 = xmmword_4518398;
          BYTE12(v244) |= 0x20u;
          v254 = xmmword_45183A8;
          v255 = xmmword_4518398;
          v256 = xmmword_45183A8;
          sub_B09440(&v204, "\"paramVsAltitude\": [ [");
          v80 = v219;
          v81 = air_movement_;
          v82 = &v227;
          if ( (v218 + Y) > v219 )
          {
            v83 = Y;
            v84 = *&dword_44CAB2C;
            v85 = v219;
            while ( 1 )
            {
              if ( v85 > v80 )
                sub_B09440(&v204, word_4A23704);
              v213 = v85;
              v212 = 3;
              v86 = v208 + sub_16E07A0(LODWORD(v205) + v208, 1);
              v208 = v86;
              v87 = v207;
              if ( v86 >= v207 - (v207 >> 2) )
              {
                v207 *= 2i64;
                v88 = COERCE_DOUBLE((*(*v206 + 0x38i64))(v206, COERCE_DOUBLE(*&v205)));
                v205 = v88;
                v87 = v207;
                v86 = v208;
              }
              else
              {
                v88 = v205;
              }
              v89 = v87 - 1;
              if ( v86 < v89 )
                v89 = v86;
              *(*&v88 + v89) = 0;
              v90 = Str1;
              for ( j = 0i64; j != 4; ++j )
              {
                v96 = v243[j];
                *v96 = v85;
                sub_15F2440(*(v81 + 0x3AC8), &v212, 0, v81, 1, v96, v90, &v220);
                if ( j )
                {
                  v97 = v208 + sub_16E07A0(LODWORD(v205) + v208, 0);
                  v208 = v97;
                  v98 = v207;
                  if ( v97 >= v207 - (v207 >> 2) )
                  {
                    v207 *= 2i64;
                    v99 = COERCE_DOUBLE((*(*v206 + 0x38i64))(v206, COERCE_DOUBLE(*&v205)));
                    v205 = v99;
                    v98 = v207;
                    v97 = v208;
                  }
                  else
                  {
                    v99 = v205;
                  }
                  v100 = v98 - 1;
                  if ( v97 < v100 )
                    v100 = v97;
                  *(*&v99 + v100) = 0;
                }
                v101 = LODWORD(v205) + v208;
                if ( !*(v217 + j) )
                {
                  v105 = sub_16E07A0(v101, 0);
                  goto LABEL_204;
                }
                v102 = v208 + sub_16E07A0(v101, 0);
                v208 = v102;
                v103 = v207;
                if ( v102 >= v207 - (v207 >> 2) )
                {
                  v207 *= 2i64;
                  v104 = COERCE_DOUBLE((*(*v206 + 0x38i64))(v206, COERCE_DOUBLE(*&v205)));
                  v205 = v104;
                  v103 = v207;
                  v102 = v208;
                }
                else
                {
                  v104 = v205;
                }
                v106 = v103 - 1;
                if ( v102 < v106 )
                  v106 = v102;
                *(*&v104 + v106) = 0;
                switch ( v75 )
                {
                  case 2u:
                    v213 = fsqrt(
                             (*&v220.st_nlink * *&v220.st_nlink)
                           + ((*&v220.st_ino * *&v220.st_ino) + (*&v220.st_dev * *&v220.st_dev)));
                    v212 = 3;
                    v110 = v208 + sub_16E07A0(LODWORD(v205) + v208, 1);
                    v208 = v110;
                    v111 = v207;
                    if ( v110 >= v207 - (v207 >> 2) )
                    {
                      v207 *= 2i64;
                      v112 = COERCE_DOUBLE((*(*v206 + 0x38i64))(v206, COERCE_DOUBLE(*&v205)));
                      v205 = v112;
                      v111 = v207;
                      v110 = v208;
                    }
                    else
                    {
                      v112 = v205;
                    }
                    v118 = v111 - 1;
                    if ( v110 < v118 )
                      v118 = v110;
                    *(*&v112 + v118) = 0;
                    v213 = (*(&v220.st_mtime + 1) * v84);
                    v212 = 3;
                    v113 = sub_16E07A0(LODWORD(v205) + v208, 1);
                    goto LABEL_192;
                  case 1u:
                    v213 = fsqrt(
                             (*&v220.st_nlink * *&v220.st_nlink)
                           + ((*&v220.st_ino * *&v220.st_ino) + (*&v220.st_dev * *&v220.st_dev)));
                    v212 = 3;
                    v113 = sub_16E07A0(LODWORD(v205) + v208, 1);
LABEL_192:
                    v120 = v208 + v113;
                    v208 = v120;
                    v121 = v207;
                    if ( v120 >= v207 - (v207 >> 2) )
                    {
                      v207 *= 2i64;
                      v122 = COERCE_DOUBLE((*(*v206 + 0x38i64))(v206, COERCE_DOUBLE(*&v205)));
                      v205 = v122;
                      v121 = v207;
                      v120 = v208;
                    }
                    else
                    {
                      v122 = v205;
                    }
                    v123 = v121 - 1;
                    if ( v120 < v123 )
                      v123 = v120;
                    *(*&v122 + v123) = 0;
                    v213 = v223;
                    v212 = 3;
                    v124 = v208 + sub_16E07A0(LODWORD(v205) + v208, 1);
                    v208 = v124;
                    v125 = v207;
                    if ( v124 >= v207 - (v207 >> 2) )
                    {
                      v207 *= 2i64;
                      v126 = COERCE_DOUBLE((*(*v206 + 0x38i64))(v206, COERCE_DOUBLE(*&v205)));
                      v205 = v126;
                      v125 = v207;
                      v124 = v208;
                    }
                    else
                    {
                      v126 = v205;
                    }
                    v127 = v125 - 1;
                    if ( v124 < v127 )
                      v127 = v124;
                    *(*&v126 + v127) = 0;
                    break;
                  case 0u:
                    v213 = (*(&v220.st_mtime + 1) * v84);
                    v212 = 3;
                    v107 = v208 + sub_16E07A0(LODWORD(v205) + v208, 1);
                    v208 = v107;
                    v108 = v207;
                    if ( v107 >= v207 - (v207 >> 2) )
                    {
                      v207 *= 2i64;
                      v109 = COERCE_DOUBLE((*(*v206 + 0x38i64))(v206, COERCE_DOUBLE(*&v205)));
                      v205 = v109;
                      v108 = v207;
                      v107 = v208;
                    }
                    else
                    {
                      v109 = v205;
                    }
                    v114 = v108 - 1;
                    if ( v107 < v114 )
                      v114 = v107;
                    *(*&v109 + v114) = 0;
                    v213 = (*&qword_4A791F0 * *(&v220.st_ctime + 1));
                    v212 = 3;
                    v215 = (*&v220.st_ctime * *&qword_4A791F0);
                    v214 = 3;
                    v115 = v208 + sub_16E07A0(LODWORD(v205) + v208, 2);
                    v208 = v115;
                    v116 = v207;
                    if ( v115 >= v207 - (v207 >> 2) )
                    {
                      v207 *= 2i64;
                      v117 = COERCE_DOUBLE((*(*v206 + 0x38i64))(v206, COERCE_DOUBLE(*&v205)));
                      v205 = v117;
                      v116 = v207;
                      v115 = v208;
                    }
                    else
                    {
                      v117 = v205;
                    }
                    v119 = v116 - 1;
                    if ( v115 < v119 )
                      v119 = v115;
                    *(*&v117 + v119) = 0;
                    v213 = v222;
                    v212 = 3;
                    v215 = v221;
                    v214 = 3;
                    v113 = sub_16E07A0(LODWORD(v205) + v208, 2);
                    goto LABEL_192;
                }
                v105 = sub_16E07A0(LODWORD(v205) + v208, 0);
LABEL_204:
                v94 = v208 + v105;
                v208 = v94;
                v93 = v207;
                if ( v94 >= v207 - (v207 >> 2) )
                {
                  v207 *= 2i64;
                  v92 = COERCE_DOUBLE((*(*v206 + 0x38i64))(v206, COERCE_DOUBLE(*&v205)));
                  v205 = v92;
                  v93 = v207;
                  v94 = v208;
                }
                else
                {
                  v92 = v205;
                }
                v95 = v93 - 1;
                if ( v94 < v95 )
                  v95 = v94;
                *(*&v92 + v95) = 0;
                v90 += 0x20;
              }
              v128 = v208 + sub_16E07A0(LODWORD(v205) + v208, 0);
              v208 = v128;
              v129 = v207;
              if ( v128 >= v207 - (v207 >> 2) )
              {
                v207 *= 2i64;
                v130 = COERCE_DOUBLE((*(*v206 + 0x38i64))(v206, COERCE_DOUBLE(*&v205)));
                v205 = v130;
                v129 = v207;
                v128 = v208;
              }
              else
              {
                v130 = v205;
              }
              v131 = v129 - 1;
              if ( v128 < v131 )
                v131 = v128;
              *(*&v130 + v131) = 0;
              v80 = v219;
              if ( v85 <= v219 )
              {
                v252 = v250;
                v251 = *Str1;
                v254 = v250;
                v253 = *Str1;
                v256 = v250;
                v255 = *Str1;
              }
              v85 = v85 + v225;
              if ( v85 >= (v218 + v83) )
              {
                v82 = v243[0];
                break;
              }
            }
          }
          sub_B09440(&v204, "] ], ");
          *v82 = v211;
          v132 = v82;
          sub_15F2440(*(v81 + 0x3AC8), &v212, 0, v81, 1, v82, Str1, &v220);
          v133 = v210;
          if ( v210 )
            v134 = dword_44801E8;
          else
            v134 = LODWORD(v223);
          v135 = v132;
          *(v132 + 7) = v134;
          v136 = *(v132 + 3);
          *(v132 + 3) = v136 & 0xFFFFFFFD;
          v137 = 0xFFFFFFFD;
          if ( !v209 )
          {
            *(v135 + 3) = v136 & 0xFFFFFFDD;
            v137 = 0xFFFFFFDD;
          }
          *v135 = v211;
          LODWORD(FileName[0]) = v211;
          sub_15F2440(*(air_movement_ + 0x3AC8), &v212, 0, air_movement_, 1, FileName, &v251, &v220);
          v138 = dword_44801E8;
          if ( v133 )
            v139 = dword_44801E8;
          else
            v139 = LODWORD(v223);
          HIDWORD(v234) = v139;
          HIDWORD(FileName[1]) &= v137;
          LODWORD(FileName[0]) = v211;
          LODWORD(v238) = v211;
          sub_15F2440(*(air_movement_ + 0x3AC8), &v212, 0, air_movement_, 1, &v238, &v253, &v220);
          if ( v133 )
            v140 = *&v138;
          else
            v140 = v223;
          *(&v239 + 3) = v140;
          HIDWORD(v238) &= v137;
          LODWORD(v238) = v211;
          LODWORD(v244) = v211;
          sub_15F2440(*(air_movement_ + 0x3AC8), &v212, 0, air_movement_, 1, &v244, &v255, &v220);
          if ( !v133 )
            *&v138 = v223;
          HIDWORD(v245) = v138;
          HIDWORD(v244) &= v137;
          LODWORD(v244) = v211;
          *Str1 = v78;
          v250 = v79;
          v252 = v79;
          v251 = v78;
          v254 = v79;
          v253 = v78;
          v255 = v78;
          v256 = v79;
          sub_B09440(&v204, "\"paramVsOmega\": [ [ ");
          v141 = (*v232)[0x48] * dword_44A05C8;
          v142 = air_movement_;
          if ( v141 < ((*v232)[0x49] * *&dword_44A02C0) )
          {
            v143 = 0i64;
            v144 = *&dword_448790C;
            v145 = *&dword_44A02C0;
            v146 = *&dword_44CAB2C;
            v147 = *&dword_449F1A8;
            v148 = *&dword_449F1AC;
            do
            {
              if ( (v143 & 1) != 0 )
                sub_B09440(&v204, word_4A23704);
              v213 = v141;
              v212 = 3;
              v149 = v208 + sub_16E07A0(LODWORD(v205) + v208, 1);
              v208 = v149;
              v150 = v207;
              v226 = v143;
              if ( v149 >= v207 - (v207 >> 2) )
              {
                v207 *= 2i64;
                v151 = COERCE_DOUBLE((*(*v206 + 0x38i64))(v206, COERCE_DOUBLE(*&v205)));
                v205 = v151;
                v150 = v207;
                v149 = v208;
              }
              else
              {
                v151 = v205;
              }
              v152 = v150 - 1;
              if ( v149 < v152 )
                v152 = v149;
              *(*&v151 + v152) = 0;
              v153 = Str1;
              v154 = 0i64;
              v143 = word_4A23704;
              do
              {
                if ( v154 )
                {
                  v159 = v208 + sub_16E07A0(LODWORD(v205) + v208, 0);
                  v208 = v159;
                  v160 = v207;
                  if ( v159 >= v207 - (v207 >> 2) )
                  {
                    v207 *= 2i64;
                    v161 = COERCE_DOUBLE((*(*v206 + 0x38i64))(v206, COERCE_DOUBLE(*&v205)));
                    v205 = v161;
                    v160 = v207;
                    v159 = v208;
                  }
                  else
                  {
                    v161 = v205;
                  }
                  v162 = v160 - 1;
                  if ( v159 < v162 )
                    v162 = v159;
                  *(*&v161 + v162) = 0;
                }
                v163 = v243[v154];
                *(v163 + 0x18) = v141;
                sub_15F2440(*(v142 + 0x3AC8), &v212, 0, v142, 1, v163, v153, &v220);
                if ( *(v217 + v154)
                  && (*(&v220.st_mtime + 1) > 0.0
                   || ((*&v220.st_nlink * *&v220.st_nlink)
                     + ((*&v220.st_ino * *&v220.st_ino) + (*&v220.st_dev * *&v220.st_dev))) > 0.0) )
                {
                  v164 = v208 + sub_16E07A0(LODWORD(v205) + v208, 0);
                  v208 = v164;
                  v165 = v207;
                  if ( v164 >= v207 - (v207 >> 2) )
                  {
                    v207 *= 2i64;
                    v166 = COERCE_DOUBLE((*(*v206 + 0x38i64))(v206, COERCE_DOUBLE(*&v205)));
                    v205 = v166;
                    v165 = v207;
                    v164 = v208;
                  }
                  else
                  {
                    v166 = v205;
                  }
                  v167 = v165 - 1;
                  if ( v164 < v167 )
                    v167 = v164;
                  *(*&v166 + v167) = 0;
                  if ( v75 == 2 )
                  {
                    v213 = fsqrt(
                             (*&v220.st_nlink * *&v220.st_nlink)
                           + ((*&v220.st_ino * *&v220.st_ino) + (*&v220.st_dev * *&v220.st_dev)));
                    v212 = 3;
                    v171 = v208 + sub_16E07A0(LODWORD(v205) + v208, 1);
                    v208 = v171;
                    v172 = v207;
                    if ( v171 >= v207 - (v207 >> 2) )
                    {
                      v207 *= 2i64;
                      v173 = COERCE_DOUBLE((*(*v206 + 0x38i64))(v206, COERCE_DOUBLE(*&v205)));
                      v205 = v173;
                      v172 = v207;
                      v171 = v208;
                    }
                    else
                    {
                      v173 = v205;
                    }
                    v180 = v172 - 1;
                    if ( v171 < v180 )
                      v180 = v171;
                    *(*&v173 + v180) = 0;
                    v213 = (*(&v220.st_mtime + 1) * v146);
                    v212 = 3;
                    v181 = v208 + sub_16E07A0(LODWORD(v205) + v208, 1);
                    v208 = v181;
                    v182 = v207;
                    if ( v181 >= v207 - (v207 >> 2) )
                    {
                      v207 *= 2i64;
                      v183 = COERCE_DOUBLE((*(*v206 + 0x38i64))(v206, COERCE_DOUBLE(*&v205)));
                      v205 = v183;
                      v182 = v207;
                      v181 = v208;
                    }
                    else
                    {
                      v183 = v205;
                    }
                    v188 = v182 - 1;
                    if ( v181 < v188 )
                      v188 = v181;
                    *(*&v183 + v188) = 0;
                    if ( v147 < v223 || (v189 = 0.0, v223 < v148) )
                      v189 = (*(&v220.st_mtime + 1) * v146) / v223;
                    v213 = v189;
                    v212 = 3;
                    v174 = sub_16E07A0(LODWORD(v205) + v208, 1);
                  }
                  else if ( v75 == 1 )
                  {
                    v213 = fsqrt(
                             (*&v220.st_nlink * *&v220.st_nlink)
                           + ((*&v220.st_ino * *&v220.st_ino) + (*&v220.st_dev * *&v220.st_dev)));
                    v212 = 3;
                    v174 = sub_16E07A0(LODWORD(v205) + v208, 1);
                  }
                  else
                  {
                    if ( v75 )
                      goto LABEL_306;
                    v213 = (*(&v220.st_mtime + 1) * v146);
                    v212 = 3;
                    v168 = v208 + sub_16E07A0(LODWORD(v205) + v208, 1);
                    v208 = v168;
                    v169 = v207;
                    if ( v168 >= v207 - (v207 >> 2) )
                    {
                      v207 *= 2i64;
                      v170 = COERCE_DOUBLE((*(*v206 + 0x38i64))(v206, COERCE_DOUBLE(*&v205)));
                      v205 = v170;
                      v169 = v207;
                      v168 = v208;
                    }
                    else
                    {
                      v170 = v205;
                    }
                    v175 = v169 - 1;
                    if ( v168 < v175 )
                      v175 = v168;
                    *(*&v170 + v175) = 0;
                    if ( v147 < v223 || (v176 = 0.0, v223 < v148) )
                      v176 = (*(&v220.st_mtime + 1) * v146) / v223;
                    v213 = v176;
                    v212 = 3;
                    v177 = v208 + sub_16E07A0(LODWORD(v205) + v208, 1);
                    v208 = v177;
                    v178 = v207;
                    if ( v177 >= v207 - (v207 >> 2) )
                    {
                      v207 *= 2i64;
                      v179 = COERCE_DOUBLE((*(*v206 + 0x38i64))(v206, COERCE_DOUBLE(*&v205)));
                      v205 = v179;
                      v178 = v207;
                      v177 = v208;
                    }
                    else
                    {
                      v179 = v205;
                    }
                    v184 = v178 - 1;
                    if ( v177 < v184 )
                      v184 = v177;
                    *(*&v179 + v184) = 0;
                    v213 = (*&qword_4A791F0 * *(&v220.st_ctime + 1));
                    v212 = 3;
                    v215 = (*&v220.st_ctime * *&qword_4A791F0);
                    v214 = 3;
                    v185 = v208 + sub_16E07A0(LODWORD(v205) + v208, 2);
                    v208 = v185;
                    v186 = v207;
                    if ( v185 >= v207 - (v207 >> 2) )
                    {
                      v207 *= 2i64;
                      v187 = COERCE_DOUBLE((*(*v206 + 0x38i64))(v206, COERCE_DOUBLE(*&v205)));
                      v205 = v187;
                      v186 = v207;
                      v185 = v208;
                    }
                    else
                    {
                      v187 = v205;
                    }
                    v190 = v186 - 1;
                    if ( v185 < v190 )
                      v190 = v185;
                    *(*&v187 + v190) = 0;
                    v213 = v221;
                    v212 = 3;
                    v215 = v222;
                    v214 = 3;
                    v174 = sub_16E07A0(LODWORD(v205) + v208, 2);
                  }
                  v191 = v208 + v174;
                  v208 = v191;
                  v192 = v207;
                  if ( v191 >= v207 - (v207 >> 2) )
                  {
                    v207 *= 2i64;
                    v193 = COERCE_DOUBLE((*(*v206 + 0x38i64))(v206, COERCE_DOUBLE(*&v205)));
                    v205 = v193;
                    v192 = v207;
                    v191 = v208;
                  }
                  else
                  {
                    v193 = v205;
                  }
                  v194 = v192 - 1;
                  if ( v191 < v194 )
                    v194 = v191;
                  *(*&v193 + v194) = 0;
                  v213 = v223;
                  v212 = 3;
                  v195 = v208 + sub_16E07A0(LODWORD(v205) + v208, 1);
                  v208 = v195;
                  v196 = v207;
                  if ( v195 >= v207 - (v207 >> 2) )
                  {
                    v207 *= 2i64;
                    v197 = COERCE_DOUBLE((*(*v206 + 0x38i64))(v206, COERCE_DOUBLE(*&v205)));
                    v205 = v197;
                    v196 = v207;
                    v195 = v208;
                  }
                  else
                  {
                    v197 = v205;
                  }
                  v198 = v196 - 1;
                  if ( v195 < v198 )
                    v198 = v195;
                  *(*&v197 + v198) = 0;
                }
LABEL_306:
                v157 = v208 + sub_16E07A0(LODWORD(v205) + v208, 0);
                v208 = v157;
                v156 = v207;
                if ( v157 >= v207 - (v207 >> 2) )
                {
                  v207 *= 2i64;
                  v155 = COERCE_DOUBLE((*(*v206 + 0x38i64))(v206, COERCE_DOUBLE(*&v205)));
                  v205 = v155;
                  v156 = v207;
                  v157 = v208;
                }
                else
                {
                  v155 = v205;
                }
                v158 = v156 - 1;
                if ( v157 < v158 )
                  v158 = v157;
                *(*&v155 + v158) = 0;
                ++v154;
                v153 += 0x20;
              }
              while ( v154 != 4 );
              v199 = v208 + sub_16E07A0(LODWORD(v205) + v208, 0);
              v208 = v199;
              v200 = v207;
              if ( v199 >= v207 - (v207 >> 2) )
              {
                v207 *= 2i64;
                v201 = COERCE_DOUBLE((*(*v206 + 0x38i64))(v206, COERCE_DOUBLE(*&v205)));
                v205 = v201;
                v200 = v207;
                v199 = v208;
              }
              else
              {
                v201 = v205;
              }
              v202 = v226;
              v203 = v200 - 1;
              if ( v199 < v203 )
                v203 = v199;
              *(*&v201 + v203) = 0;
              if ( (v202 & 1) == 0 )
              {
                v252 = v250;
                v251 = *Str1;
                v254 = v250;
                v253 = *Str1;
                v256 = v250;
                v255 = *Str1;
              }
              v141 = v141 + v144;
              LOBYTE(v143) = 1;
            }
            while ( v141 < ((*v232)[0x49] * v145) );
          }
          sub_B09440(&v204, "] ]");
          sub_B09440(&v204, "}");
          v213 = v205;
          v212 = 1;
          logmessage_fmt(3u, "%s", &v212, 1);
          sub_AF1600(http_req, *&v205, v208);
          v204 = &off_44CAF30;
          v68 = v205;
          v69 = v206;
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
  LODWORD(v238) = 0;
  if ( !sub_B0ACA0(http_req, Str1) || !sub_B09250(http_req, &v238) )
  {
LABEL_116:
    v52 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v52[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(v52, v43, v44, v45);
    v53 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    *&v220.st_dev = &off_44CAF30;
    *&v220.st_rdev = v53;
    v220.st_atime = 0x80000i64;
    v220.st_mtime = 0i64;
    *&v220.st_nlink = (*(*v53 + 0x18i64))(v53, 0x80000i64);
    **&v220.st_nlink = 0;
    sub_B09440(&v220, "{\n");
    sub_B09440(&v220, "  \"valid\": true,\n");
    sub_B094D0(LocalUnit_, &v220);
    sub_B09440(&v220, ",\n");
    v54 = *(air_movement + 0x3AC8);
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
        sub_B17380(&v220, FileName);
        v60 = *v55;
        v61 = *(*v55 + 0x6F);
        if ( (*v55)[0x221] && v61 > 0 || v61 <= 0xA && (v62 = 0x510, _bittest(&v62, v61)) )
          v63 = *(v60 + 0x67) * *(v60 + 0x65);
        else
          v63 = *(v60 + 0x65);
        *&v227 = v63 * *&dword_44CB26C;
        sub_B09B80(&v220, "\"manifoldPressureMax\": %f,\n", a3);
        LODWORD(v227) = *(*v55 + 0x48);
        sub_B09B80(&v220, "\"omegaMin\": %f,\n", a3);
        LODWORD(v227) = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*(*v55 + 0x49)));
        sub_B09B80(&v220, "\"omegaMax\": %f,\n", a3);
        v64 = "true";
        v65 = "false";
        v66 = "false";
        if ( v59 > 0 )
          v66 = "true";
        *&v227 = v66;
        sub_B09AE0(&v220, "\"supercharger\": %s,\n", &v227);
        LODWORD(v227) = v59 + 1;
        sub_B0A540(&v220, "\"superchargerGearCount\": %s\n,", &v227);
        if ( !(*v55)[0x226] )
          v64 = "false";
        *&v227 = v64;
        sub_B09AE0(&v220, "\"mixtureManual\": %s\n,", &v227);
        v67 = **v55 - 2;
        if ( v67 <= 4u )
          v65 = off_44CB390[v67];
        *&v227 = v65;
        sub_B09AE0(&v220, "\"advanced\": %s\n", &v227);
        sub_B09440(&v220, "}\n");
      }
    }
    sub_AF1600(http_req, *&v220.st_nlink, v220.st_mtime);
    *&v220.st_dev = &off_44CAF30;
    v68 = *&v220.st_nlink;
    v69 = *&v220.st_rdev;
    return (*(*v69 + 0x40i64))(v69, COERCE_DOUBLE(*&v68));
  }
  v46 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(v46[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(v46, v43, v44, v45);
  v47 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  *&v227 = 0i64;
  *(&v227 + 1) = v47;
  *&v228 = 0i64;
  v48 = sub_B092C0(*(LocalUnit_ + 0x4160), &v227);
  sub_B093A0(FileName, v48);
  v49 = &szFile;
  if ( FileName[1] )
    v49 = FileName[1];
  v50 = stat64i32(v49, &v220);
  st_mtime = 0;
  if ( !v50 )
    st_mtime = v220.st_mtime;
  if ( v238 != st_mtime || strcmp(Str1, v48) )
  {
    if ( FileName[1] )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    v43 = v227;
    if ( v227 )
      (*(**(&v227 + 1) + 0x40i64))(*(&v227 + 1));
    goto LABEL_116;
  }
  result = sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  if ( FileName[1] )
    result = (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
  v68 = *&v227;
  if ( v227 )
  {
    v69 = *(&v227 + 1);
    return (*(*v69 + 0x40i64))(v69, COERCE_DOUBLE(*&v68));
  }
  return result;
}
