char *__fastcall log_autopilot(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, a2, a3, a4);
  v8 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  String = 0i64;
  v101 = v8;
  v102 = 0i64;
  v9 = "AIM";
  if ( !*(a1 + 0x488) )
    v9 = "SEPARATE";
  v104 = *&v9;
  v103[0] = 1;
  avprintf(&String, 0x20i64, "AUTOPILOT: %s\n\n", v103, 1);
  avprintf(&String, 0x10i64, "Ailerons\n", 0i64, 0);
  if ( *(a1 + 0x488) )
  {
    v10 = *(a1 + 0x5D8) * *&dword_44A02B0;
    v11 = *(a1 + 0x5D4) * *&dword_44A02B0;
    v12 = *(a1 + 0x5C8) * *&dword_44A02B0;
    v13 = *(a1 + 0x5D0) * *&dword_44A02B0;
    v14 = *(a1 + 0x5B0) * *&dword_44A02B0;
    v15 = *(a1 + 0x5B8) * *&dword_44A02B0;
    v16 = *(a2 + 0x938);
    v17 = *(a1 + 0x610) * *&dword_44A02B0;
    v18 = *(a1 + 0x5BC) * *&dword_44A02B0;
    v19 = *(a1 + 0x5C4);
    v20 = *(a2 + 0x9B0);
    v104 = (*&dword_44A02B0 * *(a1 + 0x60C));
    v103[0] = 3;
    v106 = (v20 * *&dword_44A02B0);
    v105 = 3;
    v108 = (v19 * *&dword_44A02B0);
    v107 = 3;
    v110 = v18;
    v109 = 3;
    v112 = v17;
    v111 = 3;
    v114 = v16;
    v113 = 3;
    v116 = v15;
    v115 = 3;
    v118 = v14;
    v117 = 3;
    v120 = v13;
    v119 = 3;
    v122 = v12;
    v121 = 3;
    v124 = v11;
    v123 = 3;
    v126 = v10;
    v125 = 3;
    avprintf(
      &String,
      0x100i64,
      "rate: %6.2f - %6.2f', R=%6.2f', I=%6.2f', angle: %6.2f - %6.2f', R=%6.2f', I=%6.2f', drift: R=%6.2f', I=%6.2f', ro"
      "ll neutral=%6.2f', roll req=%6.2f'",
      v103,
      0xC);
    goto LABEL_10;
  }
  v21 = *(a1 + 0x48C);
  if ( v21 == 5 )
  {
    v22 = *(a1 + 0x4E4) * *&dword_44A02B0;
    v104 = (*&dword_44A02B0 * *(a1 + 0x4EC));
    v103[0] = 3;
    v106 = v22;
    v105 = 3;
    v98 = 2;
    v23 = "auto rate R=%6.2f', I=%6.2f'";
LABEL_9:
    avprintf(&String, 0x40i64, v23, v103, v98);
    goto LABEL_10;
  }
  if ( v21 > 0 )
  {
    v44 = *&dword_44A02B0;
    v45 = *(a1 + 0x4A8);
    v46 = *(a1 + 0x4B0);
    v47 = *(a2 + 0x9B0);
    v104 = (*(a1 + 0x60C) * *&dword_44A02B0);
    v103[0] = 3;
    v106 = (v47 * *&dword_44A02B0);
    v105 = 3;
    v108 = (v46 * *&dword_44A02B0);
    v107 = 3;
    v110 = (v45 * *&dword_44A02B0);
    v109 = 3;
    avprintf(&String, 0x40i64, "rate: %6.2f - %6.2f', R=%6.2f', I=%6.2f'", v103, 4);
    if ( *(a1 + 0x48C) >= 2 )
    {
      v48 = *(a1 + 0x4B4);
      v49 = *(a1 + 0x4BC) * v44;
      v50 = *(a2 + 0x938);
      v104 = (v44 * *(a1 + 0x610));
      v103[0] = 3;
      v106 = v50;
      v105 = 3;
      v108 = v49;
      v107 = 3;
      v110 = (v48 * v44);
      v109 = 3;
      avprintf(&String, 0x40i64, ",  angle: %6.2f - %6.2f', R=%6.2f', I=%6.2f'", v103, 4);
      if ( *(a1 + 0x48C) >= 3 )
      {
        v51 = *(a2 + 0x928);
        v52 = *(a2 + 0x920);
        v53 = v52 * v51;
        v54 = *(a2 + 0x92C);
        v55 = v52 * v54;
        v56 = *(a2 + 0x924) * v54;
        v57 = (((v54 * v54) + (v51 * v51)) + ((v54 * v54) + (v51 * v51))) + *&dword_44801E8;
        v58 = ((*(a2 + 0x924) * v51) - v55) + ((*(a2 + 0x924) * v51) - v55);
        v59 = v56 + v53;
        v60 = *(a2 + 0x980);
        v61 = v59 + v59;
        v62 = *(a2 + 0x988);
        v63 = v62 * v58;
        v64 = (v58 * v58) + (v61 * v61);
        v65 = *(a2 + 0x990);
        v66 = fsqrt((v57 * v57) + v64);
        v67 = (v65 * v57) + (v63 + (v60 * v61));
        v68 = v66 <= *&epsilon_unk ? *&dword_4480A00 : *&dword_44801E8 / v66;
        v104 = *(a1 + 0x614);
        v103[0] = 3;
        v106 = (v68 * v67);
        v105 = 3;
        v108 = *(a1 + 0x4C8);
        v107 = 3;
        v110 = *(a1 + 0x4C0);
        v109 = 3;
        avprintf(&String, 0x40i64, ",  vel : %6.2f - %6.2f m/s, R=%6.2fm/s, I=%6.2fm/s", v103, 4);
        if ( *(a1 + 0x48C) >= 4 )
        {
          v104 = *(a1 + 0x618);
          v103[0] = 3;
          v106 = *(a1 + 0x4E0);
          v105 = 3;
          v108 = *(a1 + 0x4D8);
          v107 = 3;
          v110 = *(a1 + 0x4D4);
          v109 = 3;
          v98 = 4;
          v23 = ",  pos : %6.2fm, R=%6.2fm, I=%6.2fm, t=%4.1fs";
          goto LABEL_9;
        }
      }
    }
  }
LABEL_10:
  avprintf(&String, 4i64, &word_4A30321[1], 0i64, 0);
  avprintf(&String, 0x10i64, "Elevator\n", 0i64, 0);
  if ( *(a1 + 0x488) )
  {
    v24 = *(a1 + 0x5DC);
    v25 = *(a1 + 0x5E4);
    LODWORD(v26) = *(a2 + 0x934) ^ SIGN_BIT_MASK;
    v27 = *(a1 + 0x63C) * *&dword_44A02B0;
    v28 = *(a1 + 0x5E8) * *&dword_44A02B0;
    v29 = *(a1 + 0x5F0) * *&dword_44A02B0;
    v30 = *(a2 + 0x9C0);
    v104 = (*&dword_44A02B0 * *(a1 + 0x638));
    v103[0] = 3;
    v106 = (v30 * *&dword_44A47B8);
    v105 = 3;
    v108 = v29;
    v107 = 3;
    v110 = v28;
    v109 = 3;
    v112 = v27;
    v111 = 3;
    v114 = v26;
    v113 = 3;
    v116 = (v25 * *&dword_44A02B0);
    v115 = 3;
    v118 = (v24 * *&dword_44A02B0);
    v117 = 3;
    v99 = 8;
    v31 = "rate: %6.2f - %6.2f', R=%6.2f', I=%6.2f', angle: %6.2f - %6.2f', R=%6.2f', I=%6.2f'";
    v32 = 0x100i64;
LABEL_12:
    avprintf(&String, v32, v31, v103, v99);
    goto LABEL_13;
  }
  v40 = *(a1 + 0x490);
  if ( v40 < 5 )
  {
    if ( v40 > 0 )
    {
      v69 = *&dword_44A02B0;
      v70 = *(a1 + 0x4F0) * *&dword_44A02B0;
      v71 = *(a1 + 0x4F8) * *&dword_44A02B0;
      v72 = *(a2 + 0x9C0);
      if ( *(a1 + 0x648) )
      {
        v73 = *(a1 + 0x65C);
        v74 = *(a1 + 0x64C);
        v104 = (*(a1 + 0x638) * *&dword_44A02B0);
        v103[0] = 3;
        v106 = (v74 * *&dword_44A02B0);
        v105 = 3;
        v108 = (v73 * *&dword_44A02B0);
        v107 = 3;
        v110 = (v72 * *&dword_44A47B8);
        v109 = 3;
        v112 = *(a1 + 0x660);
        v111 = 3;
        v114 = *(a1 + 0x650);
        v113 = 3;
        v116 = *(a1 + 0x654);
        v115 = 3;
        v118 = *(a1 + 0x658);
        v117 = 3;
        v120 = v71;
        v119 = 3;
        v122 = v70;
        v121 = 3;
        avprintf(
          &String,
          0x40i64,
          "Rate + Limiters                     Rate_Req,byG,Out,Wz//kAoA,kG= %6.2f' / %6.2f / %6.2f / %6.2f' // %6.2f / %"
          "6.2f ,   Ny,NyLim= %6.2f / %6.2f,  R=%6.2f', I=%6.2f'",
          v103,
          0xA);
      }
      else
      {
        v104 = (*(a1 + 0x638) * *&dword_44A02B0);
        v103[0] = 3;
        v106 = (v72 * *&dword_44A47B8);
        v105 = 3;
        v108 = v71;
        v107 = 3;
        v110 = v70;
        v109 = 3;
        avprintf(&String, 0x40i64, "rate: %6.2f - %6.2f', R=%6.2f', I=%6.2f'", v103, 4);
      }
      if ( *(a1 + 0x490) >= 2 )
      {
        v83 = *(a1 + 0x4FC);
        v84 = *(a1 + 0x504) * v69;
        LODWORD(v85) = *(a2 + 0x934) ^ SIGN_BIT_MASK;
        v104 = (v69 * *(a1 + 0x63C));
        v103[0] = 3;
        v106 = v85;
        v105 = 3;
        v108 = v84;
        v107 = 3;
        v110 = (v83 * v69);
        v109 = 3;
        avprintf(&String, 0x40i64, ",  angle: %6.2f - %6.2f', R=%6.2f', I=%6.2f'", v103, 4);
        if ( *(a1 + 0x490) >= 3 )
        {
          v86 = *(a2 + 0x928);
          v87 = *(a2 + 0x920);
          v88 = *(a2 + 0x924);
          v89 = *(a2 + 0x92C);
          v90 = ((v87 * v86) - (v89 * v88)) + ((v87 * v86) - (v89 * v88));
          v91 = ((v86 * v89) + (v88 * v87)) + ((v86 * v89) + (v88 * v87));
          v92 = (((v89 * v89) + (v87 * v87)) + ((v89 * v89) + (v87 * v87))) + *&dword_44801E8;
          v93 = fsqrt(((v90 * v90) + (v91 * v91)) + (v92 * v92));
          v94 = 0.0;
          if ( v93 > *&epsilon_unk )
            v94 = Y / v93;
          v95 = *(a2 + 0x990);
          v96 = *(a2 + 0x988);
          v97 = *(a2 + 0x980);
          v104 = COERCE_FLOAT(*(a1 + 0x640) ^ SIGN_BIT_MASK);
          v103[0] = 3;
          v106 = ((((v90 * v95) + (v91 * v96)) + (v92 * v97)) * v94);
          v105 = 3;
          v108 = *(a1 + 0x510);
          v107 = 3;
          v110 = *(a1 + 0x508);
          v109 = 3;
          avprintf(&String, 0x40i64, ",  vel : %6.2f - %6.2f m/s, R=%6.2fm/s, I=%6.2fm/s", v103, 4);
          if ( *(a1 + 0x490) >= 4 )
          {
            v104 = *(a1 + 0x644);
            v103[0] = 3;
            v106 = *(a1 + 0x528);
            v105 = 3;
            v108 = *(a1 + 0x520);
            v107 = 3;
            v110 = *(a1 + 0x51C);
            v109 = 3;
            v99 = 4;
            v31 = ",  pos : %6.2fm, R=%6.2fm, I=%6.2fm, t=%4.1fs";
            goto LABEL_29;
          }
        }
      }
    }
  }
  else
  {
    v41 = *(a1 + 0x53C) * *&dword_44A02B0;
    v104 = (*&dword_44A02B0 * *(a1 + 0x544));
    v103[0] = 3;
    v106 = v41;
    v105 = 3;
    avprintf(&String, 0x40i64, "AoA R=%6.2f', I=%6.2f'", v103, 2);
    if ( *(a1 + 0x490) >= 6 )
    {
      v104 = *(a1 + 0x534);
      v103[0] = 3;
      v106 = *(a1 + 0x52C);
      v105 = 3;
      v99 = 2;
      v31 = ", Ny  R=%6.2fG, I=%6.2fG";
LABEL_29:
      v32 = 0x40i64;
      goto LABEL_12;
    }
  }
LABEL_13:
  avprintf(&String, 4i64, &word_4A30321[1], 0i64, 0);
  avprintf(&String, 0x10i64, "Rudders\n", 0i64, 0);
  if ( *(a1 + 0x488) )
  {
    v33 = *(a1 + 0x600) * *&dword_44A02B0;
    v34 = *(a1 + 0x608) * *&dword_44A02B0;
    v35 = *(a2 + 0x9B8);
    v104 = (*&dword_44A02B0 * *(a1 + 0x670));
    v103[0] = 3;
    v106 = (v35 * *&dword_44A47B8);
    v105 = 3;
    v108 = v34;
    v107 = 3;
    v110 = v33;
    v109 = 3;
    avprintf(&String, 0x40i64, "rate: %6.2f - %6.2f', R=%6.2f', I=%6.2f'", v103, 4);
  }
  else
  {
    v42 = *(a1 + 0x494);
    if ( v42 < 4 )
    {
      if ( v42 >= 2 )
      {
        v75 = *&dword_44A02B0;
        v76 = *(a1 + 0x550);
        v77 = *(a1 + 0x558);
        v78 = *(a2 + 0x9B8);
        v104 = (*(a1 + 0x670) * *&dword_44A02B0);
        v103[0] = 3;
        v106 = (v78 * *&dword_44A47B8);
        v105 = 3;
        v108 = (v77 * *&dword_44A02B0);
        v107 = 3;
        v110 = (v76 * *&dword_44A02B0);
        v109 = 3;
        avprintf(&String, 0x40i64, "rate: %6.2f - %6.2f', R=%6.2f', I=%6.2f'", v103, 4);
        if ( *(a1 + 0x494) >= 3 )
        {
          v79 = *(a1 + 0x55C) * v75;
          v80 = *(a1 + 0x564) * v75;
          v81 = *(a1 + 0x56C) * v75;
          v82 = fmodf(COERCE_FLOAT(*(a2 + 0x930) ^ SIGN_BIT_MASK), dword_44A02E8);
          v104 = (v75 * *(a1 + 0x674));
          v103[0] = 3;
          v106 = v82;
          v105 = 3;
          v108 = v81;
          v107 = 3;
          v110 = v80;
          v109 = 3;
          v112 = v79;
          v111 = 3;
          v114 = *(a1 + 0x560);
          v113 = 3;
          avprintf(
            &String,
            0x40i64,
            ", angle: %6.2f - %6.2f', R=%6.2f', I=%6.2f', hdg=%6.2f', t=%4.1fs",
            v103,
            6);
        }
      }
    }
    else
    {
      v43 = *(a1 + 0x57C) * *&dword_44A02B0;
      v104 = (*&dword_44A02B0 * *(a1 + 0x584));
      v103[0] = 3;
      v106 = v43;
      v105 = 3;
      avprintf(&String, 0x40i64, "AoS R=%6.2f', I=%6.2f'", v103, 2);
      if ( *(a1 + 0x494) >= 5 )
      {
        v104 = *(a1 + 0x578);
        v103[0] = 3;
        v106 = *(a1 + 0x570);
        v105 = 3;
        avprintf(&String, 0x40i64, ", Nz  R=%6.2fG, I=%6.2fG", v103, 2);
      }
    }
  }
  avprintf(&String, 4i64, &word_4A30321[1], 0i64, 0);
  avprintf(&String, 0x10i64, "Throttle\n", 0i64, 0);
  if ( *(a1 + 0x498) >= 2 )
  {
    v104 = *(a1 + 0x680);
    v103[0] = 3;
    v106 = *(a2 + 0x988);
    v105 = 3;
    v108 = *(a1 + 0x590);
    v107 = 3;
    v110 = *(a1 + 0x588);
    v109 = 3;
    avprintf(&String, 0x40i64, "Vy:  %6.2f - %6.2fm, R=%6.2fm, I=%6.2fm", v103, 4);
    if ( *(a1 + 0x498) >= 3 )
    {
      v104 = *(a1 + 0x684);
      v103[0] = 3;
      v106 = *(a2 + 0x910);
      v105 = 3;
      v108 = *(a1 + 0x5A4);
      v107 = 3;
      v110 = *(a1 + 0x59C);
      v109 = 3;
      v112 = *(a1 + 0x594);
      v111 = 3;
      v114 = *(a1 + 0x598);
      v113 = 3;
      avprintf(&String, 0x40i64, ", H:   %6.2f - %6.2fm, R=%6.2fm', I=%6.2fm', H=%6.1fm, t=%4.1fs", v103, 6);
    }
  }
  avprintf(&String, 4i64, &word_4A30321[1], 0i64, 0);
  v36 = String;
  v37 = &szFile;
  if ( v102 )
    v37 = String;
  result = strtok(v37, &word_4A30321[1]);
  if ( result )
  {
    v39 = 0x73;
    do
    {
      v128 = 0xC8000000;
      v127 = 0xFFFFFFFF;
      v103[0] = 0xA;
      v103[1] = v39;
      (*(*a3 + 8i64))(a3, v103, 0xFFFFFFFFi64, result, 0xFFFFFFFF, &v127, &v128, 0x3F800000);
      result = strtok(0i64, &word_4A30321[1]);
      v39 += 0xF;
    }
    while ( result );
  }
  if ( v36 )
    return (*(*v101 + 0x40i64))(v101, v36);
  return result;
}
