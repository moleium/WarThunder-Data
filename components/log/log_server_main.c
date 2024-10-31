__int64 __fastcall log_server_main(__int64 a1)
{
  Unit = LocalUnit;
  if ( !LocalUnit
    || *(LocalUnit + 0x10B0)
    || (*(LocalUnit + 0x1058) & 0x2000010) != 0
    || (air_movement = *(LocalUnit + 0x9D0)) == 0 )
  {
    v3 = off_4B678B0;
    v4 = (*(*off_4B678B0 + 0x18i64))(off_4B678B0, 0x112i64);
    *v4 = 0;
    v154 = COERCE_DOUBLE("200 OK");
    v152 = 1;
    v156 = 0x12i64;
    v155[0] = 2;
    v158 = "{ \"valid\": false }";
    v157 = 1;
    v5 = sub_16E07A0(v4, 3);
    v6 = 0x111i64;
    if ( v5 >= 0xCE )
    {
      v4 = (*(*v3 + 0x38i64))(v3, v4, 0x224i64);
      v6 = 0x223i64;
    }
    if ( v5 < v6 )
      v6 = v5;
    v4[v6] = 0;
    if ( *(a1 + 0x4E8) )
    {
      v7 = *(a1 + 0x4F8);
      if ( v7 )
        v7();
    }
    *(a1 + 0x4E8) = v4;
    *(a1 + 0x4F0) = v5;
    *(a1 + 0x4F8) = sub_AF0C50;
    v8 = *v3;
    v9 = v3;
    v10 = 0i64;
    return (*(v8 + 0x40))(v9, v10);
  }
  v161 = off_4B678C8;
  server = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, 0x10i64);
  v162 = 0x100000000Fi64;
  strcpy(server, "{\"valid\": true");
  v13 = *(air_movement + 0x910);
  v14 = fminf(v13, *&dword_4A7920C);
  v15 = fsqrt(
          ((((((((*&dword_44A41E4 * v14) + *&dword_44A41E8) * v14) + *&dword_44A41EC) * v14) + *&dword_44A41F0) * v14)
         + Y)
        * *&MEMORY[0x4A79204]);
  v16 = *(air_movement + 0x988) - (*(air_movement + 0xA08) + *(air_movement + 0x57C0));
  v17 = *(air_movement + 0x990) - (*(air_movement + 0xA10) + *(air_movement + 0x57C8));
  v18 = v16;
  v19 = *(air_movement + 0x980) - (*(air_movement + 0xA00) + *(air_movement + 0x57B8));
  v20 = *&dword_44890B4;
  v154 = (*(air_movement + 0xA64) * *&dword_44890B4);
  v152 = 3;
  air_movement_ = air_movement;
  (avprintf)(&server, 0x200i64, ",\n\"aileron, %%\": %.0f", v16);
  v154 = (*(air_movement + 0xA68) * v20);
  v152 = 3;
  (avprintf)(&server, 0x200i64, ",\n\"elevator, %%\": %.0f", v16);
  v154 = (*(air_movement + 0xA6C) * v20);
  v152 = 3;
  (avprintf)(&server, 0x200i64, ",\n\"rudder, %%\": %.0f", v16);
  if ( *(air_movement + 0x568E) )
  {
    v154 = (*(air_movement + 0x12EC) * *&dword_44890B4);
    v152 = 3;
    (avprintf)(&server, 0x200i64, ",\n\"flaps, %%\": %.0f", v16);
  }
  v21 = v15 * *&dword_44AD650;
  v22 = fsqrt(((v17 * v17) + (v18 * v18)) + (v19 * v19));
  if ( *(air_movement + 0x568B) )
  {
    v23 = 0;
    if ( (*(air_movement + 0x12DC) * *&dword_44A0344) > 0 )
      v23 = (*(air_movement + 0x12DC) * *&dword_44A0344);
    v24 = 0xFF;
    if ( v23 < 0xFF )
      v24 = v23;
    v154 = (v24 * *&dword_44CB138);
    v152 = 3;
    (avprintf)(&server, 0x200i64, ",\n\"gear, %%\": %.0f", v16);
  }
  v25 = v21;
  v26 = v22;
  if ( *(air_movement + 0x5695) )
  {
    v27 = 0;
    if ( (*(air_movement + 0x12E4) * *&dword_44A0344) > 0 )
      v27 = (*(air_movement + 0x12E4) * *&dword_44A0344);
    v28 = 0xFF;
    if ( v27 < 0xFF )
      v28 = v27;
    v154 = (v28 * *&dword_44CB138);
    v152 = 3;
    (avprintf)(&server, 0x200i64, ",\n\"airbrake, %%\": %.0f", v16);
  }
  v167 = a1;
  v154 = *(air_movement + 0x910);
  v152 = 3;
  (avprintf)(&server, 0x200i64, ",\n\"H, m\": %.0f", v16);
  v29 = *&qword_44B14B8 * v26;
  v154 = *&qword_44B14B8 * v26;
  v152 = 3;
  (avprintf)(&server, 0x200i64, ",\n\"TAS, km/h\": %.0f", v16);
  v30 = *(air_movement + 0x910);
  v31 = fminf(v30, *&dword_4A7920C);
  *&v32 = dword_44A0190;
  *&v32 = (((((((*&dword_44A0190 * v31) + *&dword_44A0194) * v31) + *&dword_44A0198) * v31) + *&dword_44A019C) * v31)
        + Y;
  v154 = fsqrt(((*&dword_4A7920C * *&gamephys::density) * *&v32) / (fmaxf(v30, *&dword_4A7920C) * *&dword_4A791F8))
       * v29;
  v152 = 3;
  (avprintf)(&server, 0x200i64, ",\n\"IAS, km/h\": %.0f", &v152, 1);
  v154 = v26 / v25;
  v152 = 3;
  (avprintf)(&server, 0x200i64, ",\n\"M\": %.2f", v32);
  if ( v22 > *&dword_44A0308 )
  {
    v33 = qword_4480160;
    v34 = qword_4480160 / v26;
    v35 = *(air_movement + 0x9F0) * (qword_4480160 / v26);
    v36 = *&qword_4480198;
    v37 = asin(fmin(fmax(v35, *&qword_4480198), qword_4480160));
    v154 = (v37 * *&dword_44A47B8);
    v152 = 3;
    (avprintf)(&server, 0x200i64, ",\n\"AoA, deg\": %.1f", v32);
    v38 = asin(fmin(fmax(v34 * *(air_movement + 0x9F8), v36), v33));
    v154 = (v38 * *&dword_44A02B0);
    v152 = 3;
    (avprintf)(&server, 0x200i64, ",\n\"AoS, deg\": %.1f", v32);
    v39 = v17 * (Y / v22);
    v40 = v18 * (Y / v22);
    v41 = (Y / v22) * v19;
    v42 = (Unit[0x26B] * v41) - (Unit[0x26A] * v40);
    v43 = (Unit[0x26A] * v39) - (Unit[0x26C] * v41);
    *&v34 = *(air_movement + 0x9A8);
    HIDWORD(v32) = 0;
    *&v32 = *&gamephys::gravity + *(air_movement + 0x9A0);
    v44 = *(air_movement + 0x998);
    *&v32 = *&v32 * ((v41 * v42) - (((Unit[0x26C] * v40) - (Unit[0x26B] * v39)) * v39));
    v154 = ((((v44 * ((v43 * v39) - (v42 * v40)))
            + (*&v34 * ((((Unit[0x26C] * v40) - (Unit[0x26B] * v39)) * v40) - (v43 * v41))))
           + *&v32)
          / *&gamephys::gravity);
    v152 = 3;
    LODWORD(v142) = 1;
    (avprintf)(&server, 0x200i64, ",\n\"Ny\": %.2f", &v152, v142);
  }
  v154 = *(air_movement + 0x988);
  v152 = 3;
  (avprintf)(&server, 0x200i64, ",\n\"Vy, m/s\": %.1f", v32);
  velocity = *(air_movement_ + 0x9B0);
  v154 = (velocity * *&dword_44A02B0);
  v152 = 3;
  _air_movement_ = air_movement_;
  (avprintf)(&server, 0x200i64, ",\n\"Wx, deg/s\": %.0f", v32);
  if ( *(_air_movement_ + 0x38CC) > 0 )
  {
    v48 = (_air_movement_ + 0x3654);
    v49 = 0.0;
    do
    {
      v50 = " %d";
      if ( v49 == 0.0 )
        v50 = &szFile;
      v163 = 0i64;
      v165 = 0i64;
      v154 = v49;
      v152 = 2;
      v164 = off_4B678C8;
      LODWORD(v142) = 1;
      (ctor_vprintf)(&v163, v47, v50, &v152, v142);
      v51 = v163;
      v52 = v163;
      if ( !v165 )
        *&v52 = COERCE_DOUBLE(&szFile);
      v154 = *&v52;
      v152 = 1;
      *&v156 = v48[0xFFFFFFFE];
      v155[0] = 3;
      LODWORD(v143) = 2;
      (avprintf)(&server, 0x200i64, ",\n\"Mfuel%s, kg\": %.0f", &v152, v143);
      v154 = *&v52;
      v152 = 1;
      *&v156 = *v48;
      v155[0] = 3;
      LODWORD(v144) = 2;
      (avprintf)(&server, 0x200i64, ",\n\"Mfuel0%s, kg\": %.0f", &v152, v144);
      if ( v51 )
        (*(*v164 + 0x40i64))(v164, v51);
      ++*&v49;
      _air_movement_ = air_movement_;
      v48 += 0xA;
    }
    while ( *&v49 < *(air_movement_ + 0x38CC) );
  }
  v53 = *(_air_movement_ + 0x3AC8);
  v54 = *v53;
  if ( *v53 > 0 )
  {
    v55 = Y / *&gamephys::gravity;
    v168 = _air_movement_ + 0x13B4;
    v56 = 0i64;
    v57 = &server;
    v58 = *&dword_44CAB20;
    v59 = *&dword_44AD4C4;
    v60 = *&dword_44AD5C0;
    v61 = *&epsilon_unk;
    si128 = _mm_load_si128(&xmmword_44AD4F0);
    do
    {
      v63 = *&v53[2 * v56 + 2];
      v64 = v56 + 1;
      if ( !*(*v63 + 1i64) )
      {
        v65 = (v63[0x4F] + v63[0x4E]) * v63[0x10];
        v66 = v63[0x2F];
        *&v154 = v56 + 1;
        v152 = 2;
        *&v156 = (v66 * v20);
        v155[0] = 3;
        LODWORD(v142) = 2;
        (avprintf)(v57, 0x200i64, ",\n\"throttle %d, %%\": %.0f", &v152, v142);
        v67 = *(_air_movement_ + 0x3AC8);
        v68 = *(v67 + 8 * v56 + 0xA534);
        if ( v68 >= 0 )
        {
          v69 = *(v67 + 8 * v68 + 0xA4B0);
          v70 = *(v69 + 0x38);
          if ( *(v69 + 0x38) )
          {
            if ( v70 >= 9 )
            {
              v72 = v70 & 7;
              if ( (v70 & 7) == 0 )
                v72 = 8i64;
              v71 = v70 - v72;
              v73 = (v69 + 0xC8);
              v74 = 0i64;
              v75 = _mm_load_si128(&xmmword_44AD4E0);
              v76 = _mm_load_si128(&xmmword_44AD4D0);
              do
              {
                inserted = _mm_insert_epi32(
                             _mm_insert_epi32(
                               _mm_insert_epi32(_mm_cvtsi32_si128(v73[0xFFFFFFF1]), v73[0xFFFFFFF6], 1),
                               v73[0xFFFFFFFB],
                               2),
                             *v73,
                             3);
                *(&v153 + v74) = _mm_insert_epi32(
                                   _mm_insert_epi32(
                                     _mm_insert_epi32(_mm_cvtsi32_si128(v73[0xFFFFFFDD]), v73[0xFFFFFFE2], 1),
                                     v73[0xFFFFFFE7],
                                     2),
                                   v73[0xFFFFFFEC],
                                   3);
                *&v155[v74 + 1] = inserted;
                v74 += 8i64;
                v75 = _mm_add_epi64(v75, si128);
                v76 = _mm_add_epi64(v76, si128);
                v73 += 0x28;
              }
              while ( v71 != v74 );
            }
            else
            {
              v71 = 0i64;
            }
            v78 = (v69 + 0x14 * v71 + 0x3C);
            do
            {
              *(&v153 + v71++) = *v78;
              v78 += 5;
            }
            while ( v70 != v71 );
            v79 = 1i64;
            do
            {
              v80 = *(*(*(v67 + 8i64 * *(&v152 + v79) + 0x70A0) + 0x38i64) + 0x32Ci64);
              if ( v80 )
                break;
              v81 = v70 == v79++;
            }
            while ( !v81 );
            if ( v80 )
            {
              if ( v70 >= 9 )
              {
                v83 = v70 & 7;
                if ( (v70 & 7) == 0 )
                  v83 = 8i64;
                v82 = v70 - v83;
                v84 = (v69 + 0xC8);
                v85 = 0i64;
                v86 = _mm_load_si128(&xmmword_44AD4E0);
                v87 = _mm_load_si128(&xmmword_44AD4D0);
                do
                {
                  v88 = _mm_insert_epi32(
                          _mm_insert_epi32(
                            _mm_insert_epi32(_mm_cvtsi32_si128(v84[0xFFFFFFF1]), v84[0xFFFFFFF6], 1),
                            v84[0xFFFFFFFB],
                            2),
                          *v84,
                          3);
                  *(&v153 + v85) = _mm_insert_epi32(
                                     _mm_insert_epi32(
                                       _mm_insert_epi32(_mm_cvtsi32_si128(v84[0xFFFFFFDD]), v84[0xFFFFFFE2], 1),
                                       v84[0xFFFFFFE7],
                                       2),
                                     v84[0xFFFFFFEC],
                                     3);
                  *&v155[v85 + 1] = v88;
                  v85 += 8i64;
                  v86 = _mm_add_epi64(v86, si128);
                  v87 = _mm_add_epi64(v87, si128);
                  v84 += 0x28;
                }
                while ( v82 != v85 );
              }
              else
              {
                v82 = 0i64;
              }
              v89 = (v69 + 0x14 * v82 + 0x3C);
              do
              {
                *(&v153 + v82++) = *v89;
                v89 += 5;
              }
              while ( v70 != v82 );
              if ( (v70 - 1) >= 3 )
              {
                v90 = 0.0;
                v91 = 0i64;
                do
                {
                  v90 = (((v90 + *(*(v67 + 8i64 * *(&v153 + v91) + 0x70A0) + 0x78i64))
                        + *(*(v67 + 8i64 * v155[v91 - 2] + 0x70A0) + 0x78i64))
                       + *(*(v67 + 8i64 * v155[v91 - 1] + 0x70A0) + 0x78i64))
                      + *(*(v67 + 8i64 * v155[v91] + 0x70A0) + 0x78i64);
                  v91 += 4i64;
                }
                while ( (v70 & 0xFFFFFFFC) != v91 );
              }
              else
              {
                v90 = 0.0;
                v91 = 0i64;
              }
              if ( (v70 & 3) != 0 )
              {
                v92 = (&v153 + v91);
                v93 = 0i64;
                do
                  v90 = v90 + *(*(v67 + 8i64 * v92[v93++] + 0x70A0) + 0x78i64);
                while ( (v70 & 3) != v93 );
              }
              *&v154 = v56 + 1;
              v152 = 2;
              *&v156 = ((v90 * v20) / v70);
              v155[0] = 3;
              LODWORD(v145) = 2;
              (avprintf)(v57, 0x200i64, ",\n\"RPM throttle %d, %%\": %.0f", &v152, *&v145);
              _air_movement_ = air_movement_;
            }
          }
        }
        v94 = *v63;
        if ( *(*v63 + 0x226i64) )
        {
          v95 = v63[0x31];
          *&v154 = v56 + 1;
          v152 = 2;
          *&v156 = (v95 * v20);
          v155[0] = 3;
          LODWORD(v145) = 2;
          (avprintf)(v57, 0x200i64, ",\n\"mixture %d, %%\": %.0f", &v152, *&v145);
          v94 = *v63;
        }
        if ( v94[0x223] )
        {
          v96 = v63[0x2D];
          *&v154 = v56 + 1;
          v152 = 2;
          *&v156 = (v96 * v20);
          v155[0] = 3;
          LODWORD(v145) = 2;
          (avprintf)(v57, 0x200i64, ",\n\"radiator %d, %%\": %.0f", &v152, *&v145);
          v94 = *v63;
        }
        if ( v94[0x228] )
        {
          v97 = *(v63 + 0x33) + 1i64;
          *&v154 = v56 + 1;
          v152 = 2;
          v156 = v97;
          v155[0] = 2;
          LODWORD(v145) = 2;
          (avprintf)(v57, 0x200i64, ",\n\"compressor stage %d\": %d", &v152, v145);
          v94 = *v63;
        }
        if ( v94[0x227] )
        {
          v98 = *(v63 + 0x32);
          *&v154 = v56 + 1;
          v152 = 2;
          v156 = v98;
          v155[0] = 2;
          LODWORD(v145) = 2;
          (avprintf)(v57, 0x200i64, ",\n\"magneto %d\": %s", &v152, v145);
        }
        v99 = *(_air_movement_ + 0x3AC8);
        v100 = *(v99 + 8 * v56 + 0xA534);
        if ( v100 >= 0 )
        {
          v101 = *(v99 + 8 * v100 + 0xA4B0);
          v102 = *(v101 + 0x38);
          if ( *(v101 + 0x38) )
          {
            if ( v102 >= 9 )
            {
              v104 = v102 & 7;
              if ( (v102 & 7) == 0 )
                v104 = 8i64;
              v103 = v102 - v104;
              v105 = (v101 + 0xC8);
              v106 = 0i64;
              v107 = _mm_load_si128(&xmmword_44AD4E0);
              v108 = _mm_load_si128(&xmmword_44AD4D0);
              do
              {
                v109 = _mm_insert_epi32(
                         _mm_insert_epi32(
                           _mm_insert_epi32(_mm_cvtsi32_si128(v105[0xFFFFFFF1]), v105[0xFFFFFFF6], 1),
                           v105[0xFFFFFFFB],
                           2),
                         *v105,
                         3);
                *(&v153 + v106) = _mm_insert_epi32(
                                    _mm_insert_epi32(
                                      _mm_insert_epi32(_mm_cvtsi32_si128(v105[0xFFFFFFDD]), v105[0xFFFFFFE2], 1),
                                      v105[0xFFFFFFE7],
                                      2),
                                    v105[0xFFFFFFEC],
                                    3);
                *&v155[v106 + 1] = v109;
                v106 += 8i64;
                v107 = _mm_add_epi64(v107, si128);
                v108 = _mm_add_epi64(v108, si128);
                v105 += 0x28;
              }
              while ( v103 != v106 );
            }
            else
            {
              v103 = 0i64;
            }
            v110 = (v101 + 0x14 * v103 + 0x3C);
            do
            {
              *(&v153 + v103++) = *v110;
              v110 += 5;
            }
            while ( v102 != v103 );
            v111 = 1i64;
            do
            {
              v112 = *(*(*(v99 + 8i64 * *(&v152 + v111) + 0x70A0) + 0x38i64) + 0x32Ei64);
              if ( v112 )
                break;
              v81 = v102 == v111++;
            }
            while ( !v81 );
            if ( v112 && *(v63 + 0x34) == 1 )
            {
              *&v154 = v56 + 1;
              v152 = 2;
              v156 = 1i64;
              v155[0] = 2;
              LODWORD(v145) = 2;
              (avprintf)(v57, 0x200i64, ",\n\"feathered %d\": %d", &v152, v145);
            }
          }
        }
        v113 = fmaxf(v65, 0.0);
        *&v154 = v56 + 1;
        v152 = 2;
        *&v156 = (v113 * v58);
        v155[0] = 3;
        LODWORD(v145) = 2;
        (avprintf)(v57, 0x200i64, ",\n\"power %d, hp\": %.1f", &v152, *&v145);
        v114 = v63[0x10];
        *&v154 = v56 + 1;
        v152 = 2;
        *&v156 = (v114 * v59);
        v155[0] = 3;
        LODWORD(v146) = 2;
        (avprintf)(v57, 0x200i64, ",\n\"RPM %d\": %.0f", &v152, v146);
        v115 = v63[0x51];
        *&v154 = v56 + 1;
        v152 = 2;
        *&v156 = v115;
        v155[0] = 3;
        LODWORD(v147) = 2;
        (avprintf)(v57, 0x200i64, ",\n\"manifold pressure %d, atm\": %.2f", &v152, v147);
        if ( *(*v63 + 0x214i64) )
        {
          v116 = v63[0xB2];
          *&v154 = v56 + 1;
          v152 = 2;
          *&v156 = (v116 + v60);
          v155[0] = 3;
          LODWORD(v148) = 2;
          (avprintf)(v57, 0x200i64, ",\n\"water temp %d, C\": %.0f", &v152, v148);
        }
        v117 = v63[0xB3];
        *&v154 = v56 + 1;
        v152 = 2;
        *&v156 = (v117 + v60);
        v155[0] = 3;
        LODWORD(v148) = 2;
        v118 = v57;
        (avprintf)(v57, 0x200i64, ",\n\"oil temp %d, C\": %.0f", &v152, v148);
        v122 = *(_air_movement_ + 0x3AC8);
        v123 = *(v122 + 0xA534);
        if ( v123 >= 0 && (v124 = *(v122 + 8 * v123 + 0xA4B0), v125 = *(v124 + 0x38), *(v124 + 0x38)) )
        {
          if ( v125 >= 9 )
          {
            v128 = v125 & 7;
            if ( (v125 & 7) == 0 )
              v128 = 8i64;
            v126 = v125 - v128;
            v129 = (v124 + 0xC8);
            v130 = 0i64;
            v131 = _mm_load_si128(&xmmword_44AD4E0);
            v132 = _mm_load_si128(&xmmword_44AD4D0);
            do
            {
              v133 = _mm_insert_epi32(
                       _mm_insert_epi32(
                         _mm_insert_epi32(_mm_cvtsi32_si128(v129[0xFFFFFFF1]), v129[0xFFFFFFF6], 1),
                         v129[0xFFFFFFFB],
                         2),
                       *v129,
                       3);
              *(&v153 + v130) = _mm_insert_epi32(
                                  _mm_insert_epi32(
                                    _mm_insert_epi32(_mm_cvtsi32_si128(v129[0xFFFFFFDD]), v129[0xFFFFFFE2], 1),
                                    v129[0xFFFFFFE7],
                                    2),
                                  v129[0xFFFFFFEC],
                                  3);
              *&v155[v130 + 1] = v133;
              v130 += 8i64;
              v131 = _mm_add_epi64(v131, si128);
              v132 = _mm_add_epi64(v132, si128);
              v129 += 0x28;
            }
            while ( v126 != v130 );
          }
          else
          {
            v126 = 0i64;
          }
          v134 = (v124 + 0x14 * v126 + 0x3C);
          do
          {
            *(&v153 + v126++) = *v134;
            v134 += 5;
          }
          while ( v125 != v126 );
          v152 = v125;
          v135 = *(*(v122 + 8i64 * v153 + 0x70A0) + 0x40i64);
          v164 = (v56 + 1);
          LODWORD(v163) = 2;
          v166 = (v135 * *&dword_44A02B0);
          LODWORD(v165) = 3;
          LODWORD(v149) = 2;
          v127 = v118;
          (avprintf)(v118, 0x200i64, ",\n\"pitch %d, deg\": %.1f", &v163, v149);
          v122 = *(_air_movement_ + 0x3AC8);
        }
        else
        {
          v127 = v118;
        }
        v136 = *(_air_movement_ + 0x9E8);
        sub_1563360(_air_movement_, v119, v120, v121, &xmmword_4B67A14);
        v137 = fsqrt(
                 (((*(v122 + 0xC * v56 + 0xA69C) + v63[0xA7]) * (*(v122 + 0xC * v56 + 0xA69C) + v63[0xA7]))
                + ((*(v122 + 0xC * v56 + 0xA698) + v63[0xA6]) * (*(v122 + 0xC * v56 + 0xA698) + v63[0xA6])))
               + ((*(v122 + 0xC * v56 + 0xA694) + v63[0xA5]) * (*(v122 + 0xC * v56 + 0xA694) + v63[0xA5])))
             * *&v136;
        v164 = (v56 + 1);
        LODWORD(v163) = 2;
        v166 = (v137 * v55);
        LODWORD(v165) = 3;
        LODWORD(v150) = 2;
        (avprintf)(v127, 0x200i64, ",\n\"thrust %d, kgs\": %.0f", &v163, v150);
        *&v136 = sqrt(
                   *(_air_movement_ + 0x990) * *(_air_movement_ + 0x990)
                 + *(_air_movement_ + 0x988) * *(_air_movement_ + 0x988)
                 + *(_air_movement_ + 0x980) * *(_air_movement_ + 0x980));
        v138 = 0.0;
        v139 = fmaxf(*&v136 * v137, 0.0) * v20;
        v57 = v127;
        if ( v113 > v61 )
          v138 = v139 / v113;
        v164 = (v56 + 1);
        LODWORD(v163) = 2;
        v166 = v138;
        LODWORD(v165) = 3;
        LODWORD(v151) = 2;
        (avprintf)(v127, 0x200i64, ",\n\"efficiency %d, %%\": %.0f", &v163, v151);
        v53 = *(_air_movement_ + 0x3AC8);
        v54 = *v53;
      }
      ++v56;
    }
    while ( v64 < v54 );
  }
  append_string(&server, "}", 1u);
  v140 = v162 - 1;
  if ( !v162 )
    v140 = 0;
  v141 = &szFile;
  if ( v162 )
    v141 = server;
  result = sub_AF1600(v167, v141, v140);
  v10 = server;
  if ( server )
  {
    v9 = v161;
    v8 = *v161;
    return (*(v8 + 0x40))(v9, v10);
  }
  return result;
}
