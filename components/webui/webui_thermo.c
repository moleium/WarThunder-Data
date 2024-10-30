const char *__fastcall webui_thermo(__int64 http_req)
{
  void (*v2)(void); // rax
  const char *result; // rax
  _BYTE *v4; // rdi
  signed __int64 v5; // rdx
  void (*v6)(void); // rax
  __int64 v7; // rdi
  __int64 v8; // rbp
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __int64 v11; // rax
  _QWORD *v12; // r15
  int v13; // xmm0_4
  __m128i v14; // xmm1
  int v15; // xmm2_4
  unsigned int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rcx
  __int64 v22; // rax
  const char *v23; // rbx
  char *v24; // rcx
  int v25; // eax
  int st_mtime; // ecx
  _QWORD *v27; // rcx
  __int64 v28; // rcx
  _BYTE *v29; // rdx
  __int64 v30; // rcx
  int v31; // xmm0_4
  __m128i v32; // xmm1
  int v33; // xmm2_4
  unsigned int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // xmm0_4
  __m128i v39; // xmm1
  int v40; // xmm2_4
  unsigned int v41; // ecx
  __int64 v42; // rax
  int v43; // ecx
  __int64 *v44; // rax
  __int64 v45; // rdx
  int v46; // edi
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v48; // rcx
  __int64 v49; // r14
  __int64 v50; // rdi
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // r15
  _BYTE *v54; // r13
  unsigned __int64 v55; // rbx
  __int64 v56; // rdi
  float v57; // xmm0_4
  float v58; // xmm1_4
  float v59; // xmm2_4
  unsigned __int64 v60; // rbp
  unsigned __int64 v61; // rbx
  __int64 v62; // r15
  __int64 v63; // r13
  double v64; // xmm6_8
  unsigned __int64 v65; // rbx
  bool v66; // cf
  float v67; // xmm0_4
  _BYTE *v68; // rbp
  unsigned __int64 v69; // rbx
  __int64 v70; // r12
  unsigned __int64 v71; // rdi
  _BYTE *v72; // r15
  unsigned __int64 v73; // rbx
  __int64 v74; // rbp
  float *v75; // rax
  float v76; // xmm0_4
  unsigned __int64 v77; // rdi
  unsigned __int64 v78; // rbx
  unsigned __int64 v79; // r12
  __int64 v80; // r15
  unsigned __int64 v81; // rbx
  __int64 v82; // rax
  float v83; // xmm1_4
  _BYTE *v84; // rbp
  unsigned __int64 v85; // rbx
  __int64 v86; // rdi
  unsigned __int64 v87; // r13
  __int16 v88; // [rsp+28h] [rbp-3B0h]
  char v89; // [rsp+2Ah] [rbp-3AEh]
  __int64 (__fastcall **v90)(void *); // [rsp+30h] [rbp-3A8h] BYREF
  _BYTE *v91; // [rsp+38h] [rbp-3A0h]
  __int64 v92; // [rsp+40h] [rbp-398h]
  __int64 v93; // [rsp+48h] [rbp-390h]
  __int64 v94; // [rsp+50h] [rbp-388h]
  __int64 v95; // [rsp+58h] [rbp-380h]
  struct _stat64i32 v96; // [rsp+60h] [rbp-378h] BYREF
  __int128 v97; // [rsp+90h] [rbp-348h] BYREF
  __int128 v98; // [rsp+A0h] [rbp-338h] BYREF
  int v99; // [rsp+B0h] [rbp-328h] BYREF
  __int64 v100; // [rsp+B4h] [rbp-324h]
  int v101; // [rsp+BCh] [rbp-31Ch]
  int v102; // [rsp+C0h] [rbp-318h]
  unsigned int v103; // [rsp+C4h] [rbp-314h]
  int v104; // [rsp+C8h] [rbp-310h]
  int v105; // [rsp+CCh] [rbp-30Ch]
  int v106; // [rsp+D0h] [rbp-308h]
  unsigned int v107; // [rsp+D4h] [rbp-304h]
  int v108; // [rsp+D8h] [rbp-300h]
  int v109; // [rsp+DCh] [rbp-2FCh]
  int v110; // [rsp+E0h] [rbp-2F8h]
  unsigned int v111; // [rsp+E4h] [rbp-2F4h]
  int v112; // [rsp+E8h] [rbp-2F0h]
  int v113; // [rsp+ECh] [rbp-2ECh] BYREF
  int v114; // [rsp+F0h] [rbp-2E8h] BYREF
  int v115; // [rsp+F4h] [rbp-2E4h] BYREF
  __int64 (__fastcall **v116)(void *); // [rsp+F8h] [rbp-2E0h] BYREF
  char *FileName; // [rsp+100h] [rbp-2D8h]
  int v118; // [rsp+108h] [rbp-2D0h]
  __int64 v119; // [rsp+110h] [rbp-2C8h]
  __int128 *v120; // [rsp+118h] [rbp-2C0h]
  __int64 *v121; // [rsp+120h] [rbp-2B8h]
  _QWORD *v122; // [rsp+128h] [rbp-2B0h]
  __int64 v123[2]; // [rsp+130h] [rbp-2A8h] BYREF
  __int64 v124[2]; // [rsp+140h] [rbp-298h] BYREF
  __int64 v125[2]; // [rsp+150h] [rbp-288h] BYREF
  __m128i v126[2]; // [rsp+160h] [rbp-278h] BYREF
  char Str1[8]; // [rsp+180h] [rbp-258h] BYREF
  __int128 v128[2]; // [rsp+188h] [rbp-250h] BYREF
  __int64 (__fastcall **v129)(void *); // [rsp+1A8h] [rbp-230h]
  char v130[28]; // [rsp+1B0h] [rbp-228h] BYREF
  __int64 (__fastcall **v131)(void *); // [rsp+1D0h] [rbp-208h]
  char v132[28]; // [rsp+1D8h] [rbp-200h] BYREF

  if ( strcmp(*http_req, "GET") )
    goto LABEL_2;
  if ( !*(game + 0x718)
    || !*(game + 0xDC) && (!byte_4B1C820 || dword_4B1C810 != 5 && dword_4B1C810 != 2)
    || !*(*(game + 0x430) + 0x365i64) )
  {
    if ( *(http_req + 0x4E8) )
    {
      v6 = *(http_req + 0x4F8);
      if ( v6 )
        v6();
    }
    result = "HTTP/1.1 403 Forbidden\r\n\r\n";
    *(http_req + 0x4E8) = "HTTP/1.1 403 Forbidden\r\n\r\n";
    *(http_req + 0x4F0) = 0x1A;
    goto LABEL_18;
  }
  v4 = *(http_req + 0x18);
  v5 = v4 ? strlen(*(http_req + 0x18)) : 0i64;
  if ( !parse_command_data(v4, v5, "cmd", v126, 0x20i64) )
    goto LABEL_2;
  v7 = LocalUnit;
  if ( !LocalUnit )
    goto LABEL_2;
  if ( *(LocalUnit + 0x10A8) > 1u )
    goto LABEL_2;
  if ( (*(LocalUnit + 0x1058) & 0x7000014) != 0 )
    goto LABEL_2;
  if ( *(LocalUnit + 0x10B0) )
    goto LABEL_2;
  v8 = *(LocalUnit + 0x9D0);
  if ( !v8 )
    goto LABEL_2;
  v9 = _mm_xor_si128(_mm_load_si128(v126), xmmword_44CB140);
  if ( !_mm_testz_si128(v9, v9) )
  {
    v10 = _mm_or_si128(
            _mm_xor_si128(_mm_load_si128(v126), xmmword_44CB2B0),
            _mm_xor_si128(_mm_loadu_si128(&v126[0].m128i_i8[7]), xmmword_44CB2A0));
    if ( _mm_testz_si128(v10, v10) )
    {
      v97 = 0i64;
      v98 = 0i64;
      v99 = 0;
      DWORD2(v97) = 0x3F800000;
      BYTE4(v98) = 1;
      v100 = 0x3F8000003F800000i64;
      sub_B17420(http_req, &v97);
      sub_B17480(http_req, &v97 + 4);
      sub_B0A5E0(http_req, "throttle");
      sub_B0A5E0(http_req, "manifoldPressure");
      *(&v97 + 3) = *(&v97 + 3) / *&gamephys::std_temp;
      sub_B0A5E0(http_req, "omega");
      sub_B0BDF0(http_req, "restrictedMode", &v98 + 4);
      sub_B0A5E0(http_req, "liquidLevel");
      sub_B0A5E0(http_req, "engineHealth");
      v11 = *(v8 + 0x3AC8);
      if ( *v11 > 0 )
      {
        v12 = *(v11 + 8);
        if ( !*(*v12 + 1i64) )
        {
          v125[0] = &off_44CB318;
          v125[1] = &v98 + 8;
          v124[0] = &off_44CB318;
          v124[1] = &v98 + 0xC;
          v123[0] = &off_44CB318;
          v123[1] = &v99;
          v116 = &off_44CB328;
          FileName = v11;
          v118 = 0;
          v119 = v8;
          v120 = &v97;
          v89 = 0;
          v88 = 0;
          *Str1 = &off_44CB338;
          memset(v128, 0, 0x1C);
          v129 = &off_44CB338;
          memset(v130, 0, sizeof(v130));
          v131 = &off_44CB338;
          memset(v132, 0, sizeof(v132));
          v115 = 0;
          v114 = 0;
          v113 = 0;
          sub_B0A980(http_req, "altitude.argType", &v115);
          sub_B0A980(http_req, "airspeed.argType", &v114);
          sub_B0A980(http_req, "radiator.argType", &v113);
          v112 = 0;
          v111 = 0x461C4000;
          v110 = 0x44FA0000;
          v109 = 0;
          sub_B0A5E0(http_req, "altitude.min");
          sub_B0A5E0(http_req, "altitude.max");
          sub_B0A5E0(http_req, "altitude.step");
          sub_B0A5E0(http_req, "altitude.val");
          if ( v115 == 0xFFFFFFFFFFFFFFFFui64 )
          {
            DWORD2(v98) = v109;
          }
          else
          {
            v13 = v110;
            v14 = _mm_cvtsi32_si128(v111);
            v15 = v112;
            v16 = 2 - v115;
            v17 = 5 * (2i64 - v115);
            *(v128 + v17) = &v116;
            *(v128 + v17 + 1) = v125;
            *(&v128[1] + 2 * v17) = v15;
            *(&v128[1] + 2 * v17 + 1) = _mm_cvtsi128_si32(v14);
            *(&v128[1] + 2 * v17 + 2) = v13;
            *(&v88 + v16) = 1;
          }
          v108 = 0;
          v107 = 0x430AE38E;
          v106 = 0x415E38E4;
          v105 = 0x42A6AAAB;
          sub_B0A5E0(http_req, "airspeed.min");
          sub_B0A5E0(http_req, "airspeed.max");
          sub_B0A5E0(http_req, "airspeed.step");
          sub_B0A5E0(http_req, "airspeed.val");
          if ( v114 == 0xFFFFFFFFFFFFFFFFui64 )
          {
            HIDWORD(v98) = v105;
          }
          else
          {
            v31 = v106;
            v32 = _mm_cvtsi32_si128(v107);
            v33 = v108;
            v34 = 2 - v114;
            v35 = 5 * (2i64 - v114);
            *(v128 + v35) = &v116;
            *(v128 + v35 + 1) = v124;
            *(&v128[1] + 2 * v35) = v33;
            *(&v128[1] + 2 * v35 + 1) = _mm_cvtsi128_si32(v32);
            *(&v128[1] + 2 * v35 + 2) = v31;
            *(&v88 + v34) = 1;
          }
          v104 = 0;
          v103 = 0x3F800000;
          v102 = 0x3DCCCCCD;
          v101 = 0;
          sub_B0A5E0(http_req, "radiator.min");
          sub_B0A5E0(http_req, "radiator.max");
          sub_B0A5E0(http_req, "radiator.step");
          sub_B0A5E0(http_req, "radiator.val");
          if ( v113 == 0xFFFFFFFFFFFFFFFFui64 )
          {
            v99 = v101;
          }
          else
          {
            v38 = v102;
            v39 = _mm_cvtsi32_si128(v103);
            v40 = v104;
            v41 = 2 - v113;
            v42 = 5 * (2i64 - v113);
            *(v128 + v42) = &v116;
            *(v128 + v42 + 1) = v123;
            *(&v128[1] + 2 * v42) = v40;
            *(&v128[1] + 2 * v42 + 1) = _mm_cvtsi128_si32(v39);
            *(&v128[1] + 2 * v42 + 2) = v38;
            *(&v88 + v41) = 1;
          }
          v43 = 0;
          v44 = &v116;
          do
          {
            if ( *(&v88 + v43) )
            {
              if ( v44 == &v116 )
                v44 = &Str1[0x28 * v43];
              v46 = 2;
              if ( v43 >= 3 )
                v46 = v43;
              LODWORD(v45) = v43;
              while ( v46 != v45 )
              {
                v45 = (v45 + 1);
                if ( *(&v88 + v45) )
                {
                  *(v128 + 5 * v43) = &Str1[0x28 * v45];
                  goto LABEL_60;
                }
              }
            }
            v45 = v43;
LABEL_60:
            v43 = v45 + 1;
          }
          while ( v45 < 2 );
          v121 = v44;
          ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
          if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
            _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v45, v36, v37);
          v48 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
          v90 = &off_44CAF30;
          v92 = v48;
          v93 = 0x40000i64;
          v94 = 0i64;
          v91 = (*(*v48 + 0x18i64))(v48, 0x40000i64);
          *v91 = 0;
          sub_B09440(&v90, "{ ");
          v49 = v12[0x58];
          v50 = v97;
          if ( v97 )
          {
            v95 = 2i64;
            if ( v97 != 1 )
            {
LABEL_84:
              sub_B09440(&v90, "\"thermalLoads\": [ ");
              if ( *(v49 + 0xC0) )
              {
                v53 = 0x10 * v95;
                v54 = v91;
                v55 = v93;
                v56 = v94;
                v57 = *(v49 + 0xC4);
                v58 = *(v49 + 0xC8);
                v59 = *(v49 + 4 * v95 + 0x1D8) * (*(&v100 + 1) + *&qword_4480198);
                *&v96.st_nlink = (v59 + **(v49 + 0x10 * v95 + 0x108));
                v96.st_dev = 3;
                *&v96.st_atime = v57;
                v96.st_rdev = 3;
                *&v96.st_ctime = v58;
                LODWORD(v96.st_mtime) = 3;
                v60 = v56
                    + sub_16E07A0(
                        &v91[v94],
                        v93 - v94,
                        "{ \"temperature\": %f, \"thermalLoad\": %f, \"thermalRecover\": %f }",
                        &v96,
                        3);
                v94 = v60;
                if ( v60 >= v55 - (v55 >> 2) )
                {
                  v55 *= 2i64;
                  v93 = v55;
                  v54 = (*(*v92 + 0x38i64))(v92, v54, v55);
                  v91 = v54;
                }
                v61 = v55 - 1;
                if ( v60 < v61 )
                  v61 = v60;
                v54[v61] = 0;
                if ( *(v49 + 0xC0) >= 2u )
                {
                  v122 = (v49 + v53 + 0x108);
                  v62 = 0x1Ai64;
                  v63 = 0xCi64;
                  v64 = *&qword_4480198;
                  do
                  {
                    sub_B09440(&v90, word_4A23704);
                    v67 = *(v49 + 4 * v95 + 0x1D8) * (*(&v100 + 1) + v64);
                    *&v96.st_nlink = (v67 + *(*v122 + v63));
                    v96.st_dev = 3;
                    *&v96.st_atime = *(v49 + 8 * v62 - 4);
                    v96.st_rdev = 3;
                    *&v96.st_ctime = *(v49 + 8 * v62);
                    LODWORD(v96.st_mtime) = 3;
                    v68 = v91;
                    v69 = v93;
                    v70 = v94;
                    v71 = v70
                        + sub_16E07A0(
                            &v91[v94],
                            v93 - v94,
                            "{ \"temperature\": %f, \"thermalLoad\": %f, \"thermalRecover\": %f }",
                            &v96,
                            3);
                    v94 = v71;
                    if ( v71 >= v69 - (v69 >> 2) )
                    {
                      v69 *= 2i64;
                      v93 = v69;
                      v68 = (*(*v92 + 0x38i64))(v92, v68, v69);
                      v91 = v68;
                    }
                    v65 = v69 - 1;
                    if ( v71 < v65 )
                      v65 = v71;
                    v68[v65] = 0;
                    v63 += 0xCi64;
                    v66 = v62 - 0x18 < *(v49 + 0xC0);
                    ++v62;
                  }
                  while ( v66 );
                }
              }
              sub_B09440(&v90, " ], ");
              sub_B09440(&v90, "\"autoRadiatorSetPoints\": [ ");
              if ( *(v49 + 0x1E8) )
              {
                v72 = v91;
                v73 = v93;
                v74 = v94;
                v75 = *(v49 + 0x1E0);
                v76 = v75[v95 + 2];
                *&v96.st_nlink = *v75;
                v96.st_dev = 3;
                *&v96.st_atime = v76;
                v96.st_rdev = 3;
                v77 = v74 + sub_16E07A0(&v91[v94], v93 - v94, "{ \"throttle\": %f, \"temperature\": %f }", &v96, 2);
                v94 = v77;
                if ( v77 >= v73 - (v73 >> 2) )
                {
                  v73 *= 2i64;
                  v93 = v73;
                  v72 = (*(*v92 + 0x38i64))(v92, v72, v73);
                  v91 = v72;
                }
                v78 = v73 - 1;
                if ( v77 < v78 )
                  v78 = v77;
                v72[v78] = 0;
                if ( *(v49 + 0x1E8) >= 2u )
                {
                  v95 *= 4i64;
                  v79 = 1i64;
                  v80 = 0i64;
                  do
                  {
                    sub_B09440(&v90, word_4A23704);
                    v82 = *(v49 + 0x1E0);
                    v83 = *(v95 + v80 + v82 + 0x18);
                    *&v96.st_nlink = *(v82 + v80 + 0x10);
                    v96.st_dev = 3;
                    *&v96.st_atime = v83;
                    v96.st_rdev = 3;
                    v84 = v91;
                    v85 = v93;
                    v86 = v94;
                    v87 = v86 + sub_16E07A0(&v91[v94], v93 - v94, "{ \"throttle\": %f, \"temperature\": %f }", &v96, 2);
                    v94 = v87;
                    if ( v87 >= v85 - (v85 >> 2) )
                    {
                      v85 *= 2i64;
                      v93 = v85;
                      v84 = (*(*v92 + 0x38i64))(v92, v84, v85);
                      v91 = v84;
                    }
                    v81 = v85 - 1;
                    if ( v87 < v81 )
                      v81 = v87;
                    v84[v81] = 0;
                    ++v79;
                    v80 += 0x10i64;
                  }
                  while ( v79 < *(v49 + 0x1E8) );
                }
              }
              sub_B09440(&v90, " ], ");
              sub_B09440(&v90, "\"table\": ");
              (*(*v121 + 8))(v121, &v90);
              sub_B09440(&v90, "}");
              sub_AF1600(http_req, v91, v94);
              v90 = &off_44CAF30;
              v29 = v91;
              v30 = v92;
              return (*(*v30 + 0x40i64))(v30, v29);
            }
            v51 = v49 + 0x1CC;
            v52 = v49 + 0x1BC;
          }
          else
          {
            if ( **v12 > 1u || !*(*v12 + 0x214i64) )
            {
              sub_B09440(&v90, &unk_4A2308C);
              v95 = 0i64;
              goto LABEL_84;
            }
            v51 = v49 + 0x1C8;
            v52 = v49 + 0x1B8;
          }
          sub_B111F0(&v90, v52, v51);
          v95 = v50;
          goto LABEL_84;
        }
      }
    }
LABEL_2:
    if ( *(http_req + 0x4E8) )
    {
      v2 = *(http_req + 0x4F8);
      if ( v2 )
        v2();
    }
    result = "HTTP/1.1 400 Bad Request\r\n\r\n";
    *(http_req + 0x4E8) = "HTTP/1.1 400 Bad Request\r\n\r\n";
    *(http_req + 0x4F0) = 0x1C;
LABEL_18:
    *(http_req + 0x4F8) = 0i64;
    return result;
  }
  LODWORD(v90) = 0;
  if ( !sub_B0ACA0(http_req, Str1) || !sub_B09250(http_req, &v90) )
  {
LABEL_47:
    v27 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v27[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(v27, v18, v19, v20);
    v28 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    *&v96.st_dev = &off_44CAF30;
    *&v96.st_rdev = v28;
    v96.st_atime = 0x80000i64;
    v96.st_mtime = 0i64;
    *&v96.st_nlink = (*(*v28 + 0x18i64))(v28, 0x80000i64);
    **&v96.st_nlink = 0;
    sub_B09440(&v96, "{\n");
    sub_B09440(&v96, "  \"valid\": true,\n");
    sub_B094D0(v7, &v96);
    sub_B09440(&v96, "\n}\n");
    sub_AF1600(http_req, *&v96.st_nlink, v96.st_mtime);
    *&v96.st_dev = &off_44CAF30;
    v29 = *&v96.st_nlink;
    v30 = *&v96.st_rdev;
    return (*(*v30 + 0x40i64))(v30, v29);
  }
  v21 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(v21[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(v21, v18, v19, v20);
  v22 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  *&v97 = 0i64;
  *(&v97 + 1) = v22;
  *&v98 = 0i64;
  v23 = sub_B092C0(*(v7 + 0x4160), &v97);
  sub_B093A0(&v116, v23);
  v24 = &szFile;
  if ( FileName )
    v24 = FileName;
  v25 = stat64i32(v24, &v96);
  st_mtime = 0;
  if ( !v25 )
    st_mtime = v96.st_mtime;
  if ( v90 != st_mtime || strcmp(Str1, v23) )
  {
    if ( FileName )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    v18 = v97;
    if ( v97 )
      (*(**(&v97 + 1) + 0x40i64))(*(&v97 + 1));
    goto LABEL_47;
  }
  result = sub_AF1600(http_req, "{\"result\": \"OK\"}", 0x10i64);
  if ( FileName )
    result = (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
  v29 = v97;
  if ( v97 )
  {
    v30 = *(&v97 + 1);
    return (*(*v30 + 0x40i64))(v30, v29);
  }
  return result;
}
