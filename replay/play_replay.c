__int64 __fastcall play_replay(_QWORD *a1)
{
  // [COLLAPSED LOCAL DECLARATIONS. PRESS KEYPAD CTRL-"+" TO EXPAND]

  v1 = a1;
  v388 = a1;
  v387 = &off_44A93B0;
  sub_176A710(a1, 0i64);
  v4 = v1[6];
  v5 = v1[0xA] - 1i64;
  v389 = *(v4 + 0x10 * v5);
  v386 = v1;
  if ( (BYTE3(v389) & 8) != 0 )
  {
    v6 = sub_28B5100(v386[0x28] + 0x38, &v389, &SystemInfo, &v396, 1);
    ++*(v6 + 0x10);
    v1 = v388;
    v4 = v388[6];
    v5 = v388[0xA] - 1i64;
  }
  v1[0xA] = v5;
  v7 = 0x10 * v5;
  v8 = *(v4 + v7 + 8);
  v9 = (*(v4 + v7) & 0x8000000) == 0;
  *(v4 + v7) = 0i64;
  *(v4 + v7) = 0x1000001;
  if ( !v9 )
  {
    v9 = v8[1]-- == 1i64;
    if ( v9 )
      (*(*v8 + 8i64))(v8);
  }
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v7, v2, v3);
  v11 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  v382 = 0i64;
  v383 = v11;
  v384 = 0i64;
  sub_4DC330(&v382);
  avprintf(&v382, 0x40i64, "/replays.wdb", 0i64, 0);
  if ( v384 )
    v12 = v382;
  else
    v12 = &szFile;
  file_ptr = df_open(v12);
  LODWORD(Src) = 0;
  if ( !file_ptr )
    goto LABEL_45;
  file_ptr_ = file_ptr;
  v17 = sub_1655D60(file_ptr);
  if ( v17 )
  {
    v18 = v17;
    if ( dword_4B1BF48 > *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4i64) )
    {
      Init_thread_header(&dword_4B1BF48);
      if ( dword_4B1BF48 == 0xFFFFFFFF )
      {
        sub_14584E0(&qword_4B1BF28, off_4B678B0);
        atexit(sub_C62670);
        Init_thread_footer(&dword_4B1BF48);
      }
    }
    *&SystemInfo.dwOemId = &off_4518CA0;
    LOBYTE(SystemInfo.dwActiveProcessorMask) = 0;
    SystemInfo.lpMinimumApplicationAddress = v18;
    SystemInfo.lpMaximumApplicationAddress = Src;
    *&SystemInfo.dwNumberOfProcessors = 0i64;
    *(qword_4B1BF28 + 0x68) |= 3u;
    v19 = sub_16053B0(&qword_4B1BF28, &SystemInfo, 0, 0, 0x80);
    lpMaximumApplicationAddress_high = HIDWORD(SystemInfo.lpMaximumApplicationAddress);
    if ( v19 )
    {
      lpMaximumApplicationAddress = SystemInfo.lpMaximumApplicationAddress;
      if ( SHIDWORD(SystemInfo.lpMaximumApplicationAddress) < 0
        || SHIDWORD(SystemInfo.lpMaximumApplicationAddress) > SLODWORD(SystemInfo.lpMaximumApplicationAddress) )
      {
        LOBYTE(SystemInfo.dwActiveProcessorMask) = 1;
        if ( SHIDWORD(SystemInfo.lpMaximumApplicationAddress) < 0 )
          goto LABEL_25;
        goto LABEL_24;
      }
      if ( HIDWORD(SystemInfo.lpMaximumApplicationAddress) == Src && !LOBYTE(SystemInfo.dwActiveProcessorMask) )
      {
        sub_1458A90(&qword_4B1BF08, &qword_4B1BF28, 0i64);
        goto LABEL_27;
      }
    }
    else
    {
      lpMaximumApplicationAddress = SystemInfo.lpMaximumApplicationAddress;
    }
    if ( SHIDWORD(SystemInfo.lpMaximumApplicationAddress) < 0 )
      goto LABEL_25;
LABEL_24:
    if ( SHIDWORD(SystemInfo.lpMaximumApplicationAddress) <= lpMaximumApplicationAddress )
    {
LABEL_26:
      v397 = Src;
      LODWORD(v396) = 2;
      *(&v398[0] + 1) = lpMaximumApplicationAddress_high;
      LODWORD(v398[0]) = 2;
      logmessage_fmt(1i64, "Error read replay database to temp datablock. file size %d, readed %d", &v396, 2i64);
LABEL_27:
      EnterCriticalSection(&stru_4B730B0);
      v22 = 1;
      v23 = &unk_4B71CE0;
      for ( i = 1i64; i != 0x81; i += 2i64 )
      {
        v25 = *(v23 + 0xFFFFFFFA);
        if ( v25 && v25 <= v18 && v23[0xFFFFFFF6] + v25 > v18 )
          break;
        v26 = *(v23 + 0xFFFFFFFF);
        if ( v26 && v26 <= v18 && *v23 + v26 > v18 )
        {
          LeaveCriticalSection(&stru_4B730B0);
          goto LABEL_38;
        }
        v22 = i < 0x7F;
        v23 += 0x14;
      }
      LeaveCriticalSection(&stru_4B730B0);
      if ( !v22 )
      {
        GetSystemInfo(&SystemInfo);
        UnmapViewOfFile((v18 & -SystemInfo.dwAllocationGranularity));
      }
      goto LABEL_38;
    }
LABEL_25:
    LOBYTE(SystemInfo.dwActiveProcessorMask) = 1;
    lpMaximumApplicationAddress_high = 0;
    goto LABEL_26;
  }
LABEL_38:
  if ( (file_ptr_ & 1) != 0 && (file_ptr_ & 0xFFFFFFFFFFFFFFFEui64) != 0 )
  {
    df_close();
  }
  else if ( fclose(file_ptr_) )
  {
    v27 = *errno();
    SystemInfo.lpMinimumApplicationAddress = file_ptr_;
    SystemInfo.dwOemId = 5;
    SystemInfo.dwActiveProcessorMask = v27;
    LODWORD(SystemInfo.lpMaximumApplicationAddress) = 2;
    logmessage_fmt(
      1i64,
      "fclose(%p) returns error %d. Probably invalid pointer, IO error (disk full?) or file is already closed",
      &SystemInfo,
      2i64);
  }
  else if ( off_4B8D6D8 )
  {
    off_4B8D6D8(file_ptr_);
  }
LABEL_45:
  v28 = v382;
  if ( v382 )
    (*(*v383 + 0x40i64))(v383);
  v29 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(v29[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(v29, v28, v14, v15);
  v30 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  v31 = word_4B1BF16;
  v32 = 0;
  if ( word_4B1BF16 )
  {
    v33 = 0x10;
    if ( word_4B1BF16 >= 0x11u )
      v33 = word_4B1BF16;
    v369 = v33;
    v34 = (*(*v30 + 0x18i64))(v30);
    memset(v34, 0, v31);
  }
  else
  {
    v34 = 0i64;
    v31 = 0;
    v369 = 0;
  }
  v382 = 0i64;
  v383 = off_4B678C8;
  v384 = 0i64;
  sub_4DC330(&v382);
  Src = 0i64;
  v380 = off_4B678C0;
  Size = 0i64;
  if ( v384 )
  {
    v35 = 0x10i64;
    if ( v384 >= 0x11 )
      v35 = v384;
    v36 = (*(*off_4B678C0 + 0x18i64))(off_4B678C0, v35);
    memmove(v36, Src, Size);
    Src = v36;
    HIDWORD(Size) = v35;
    if ( v384 )
    {
      memmove(v36, v382, v384);
      v32 = v384;
    }
  }
  LODWORD(Size) = v32;
  append_string(&Src, "/*.", 3u);
  append_string(&Src, "wrpl", 4u);
  v374 = v34;
  if ( Size )
    v37 = Src;
  else
    v37 = &szFile;
  if ( !sub_1C60480(v37, 0i64, &v396) )
  {
LABEL_111:
    v61 = v374;
    goto LABEL_120;
  }
  while ( 2 )
  {
    v41 = word_4B1BF16;
    if ( !word_4B1BF16 )
      goto LABEL_80;
    LODWORD(v385) = v31;
    v42 = 0;
    v43 = 0i64;
    v44 = 0;
    do
    {
      if ( dword_4B1BF18 == 0xFFFFFFFFi64 )
      {
        if ( v43 >= v41 )
        {
LABEL_73:
          v45 = 0i64;
          goto LABEL_74;
        }
        v45 = *(*qword_4B1BF20 + v42 + *(qword_4B1BF20 + 8) - 8 * v41);
      }
      else
      {
        if ( v43 >= v41 )
          goto LABEL_73;
        v45 = 0x20i64 * (v43 + dword_4B1BF18) + qword_4B1BF08 + *(qword_4B1BF08 + 0x5C) + 0x90;
      }
LABEL_74:
      *&SystemInfo.dwOemId = &szFile;
      v46 = data::get_str(v45, "fileName", &SystemInfo);
      SystemInfo.dwOemId = 0;
      v47 = data::set_int(v45, "fileSize", &SystemInfo);
      if ( v47 && *v46 && v47 == v400 && !strcmp(v46, Str2) )
      {
        v374[v43] = 1;
        v44 = 1;
      }
      ++v43;
      v41 = word_4B1BF16;
      v42 += 8;
    }
    while ( v43 < word_4B1BF16 );
    v9 = (v44 & 1) == 0;
    v31 = v385;
    if ( v9 )
    {
LABEL_80:
      v376 = 0i64;
      v377 = off_4B678C0;
      v378 = 0i64;
      v48 = v384;
      v49 = 0;
      if ( v384 )
      {
        if ( v384 < 0x11 )
          v48 = 0x10i64;
        v50 = (*(*off_4B678C0 + 0x18i64))(off_4B678C0, v48);
        memmove(v50, v376, v378);
        if ( v376 )
          (*(*v377 + 0x40i64))(v377);
        v376 = v50;
        HIDWORD(v378) = v48;
        if ( v384 )
        {
          memmove(v50, v382, v384);
          v49 = v384;
        }
      }
      LODWORD(v378) = v49;
      append_string(&v376, "/", 1u);
      v51 = strlen(Str2);
      append_string(&v376, Str2, v51);
      v402 |= 0x30u;
      v52 = &szFile;
      if ( v378 )
        v52 = v376;
      if ( sub_72B430(v52, &SystemInfo) <= 1 )
      {
        v53 = v31;
        if ( v369 == v31 )
        {
          if ( v31 )
          {
            if ( v31 > 0xFFF )
              v58 = v31 + ((v31 + 1) >> 1);
            else
              LODWORD(v58) = 2 * v31;
          }
          else
          {
            LODWORD(v58) = 0x10;
          }
          v369 = v58;
          if ( !v374 )
            goto LABEL_106;
          v59 = v58;
          if ( v58 < 0x11 )
            v59 = 0x10;
          v369 = v59;
          v54 = (*(*v30 + 0x38i64))(v30, v374);
          if ( !v54 )
          {
LABEL_106:
            v60 = v369;
            if ( v369 < 0x11 )
              v60 = 0x10;
            v369 = v60;
            v54 = (*(*v30 + 0x18i64))(v30);
            memmove(v54, v374, v31);
            if ( v374 )
              (*(*v30 + 0x40i64))(v30, v374);
          }
        }
        else
        {
          v54 = v374;
        }
        ++v31;
        *(v54 + v53) = 1;
        Time = v403;
        v55 = localtime64(&Time);
        v56 = add_ss_section(&qword_4B1BF08, "file");
        sub_145A110(v56, "fileName", Str2);
        assign_string_int(v56, "fileSize", v400);
        assign_string_int(v56, "ver", SystemInfo.dwPageSize);
        assign_string_int(v56, "startTime", v403);
        assign_string_int(v56, &unk_48E4CBC, (v55->tm_year + 0x76C));
        assign_string_int(v56, &unk_491E3F3, (v55->tm_mon + 1));
        assign_string_int(v56, "dt_day", v55->tm_mday);
        assign_string_int(v56, "dt_hour", v55->tm_hour);
        assign_string_int(v56, "dt_min", v55->tm_min);
        assign_string_int(v56, "dt_sec", v55->tm_sec);
        v374 = v54;
      }
      if ( v376 )
        (*(*v377 + 0x40i64))(v377);
    }
    v57 = qword_4B8B948;
    if ( qword_4B8B948 )
      *(v57 + 0x70) = timeGetTime();
    if ( sub_1C60CE0(&v396) )
      continue;
    break;
  }
  if ( v396 > 0x3F )
    goto LABEL_111;
  v62 = v397;
  v61 = v374;
  if ( v397 )
  {
    EnterCriticalSection(&stru_4B9D0F0);
    if ( v62 >= qword_4B988F0 && v62 < &stru_4B9D0F0 )
    {
      v63 = &qword_4B988F0[0x48 * (0x38E38E39 * ((v62 - qword_4B988F0) >> 6))];
      if ( *v63 >= 0 )
      {
        if ( *v63 )
          findclose(*v63);
        memset(v63, 0, 0x240ui64);
        *v63 = 0xFFFFFFFFFFFFFFFFui64;
      }
    }
    LeaveCriticalSection(&stru_4B9D0F0);
    v397 = 0i64;
  }
LABEL_120:
  for ( j = v31 - 1; j >= 0; --j )
  {
    if ( !v61[j] )
      sub_145F4D0(&qword_4B1BF08, j);
  }
  v65 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(v65[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(v65, v38, v39, v40);
  v66 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  *&SystemInfo.dwOemId = 0i64;
  SystemInfo.lpMinimumApplicationAddress = v66;
  SystemInfo.lpMaximumApplicationAddress = 0i64;
  sub_4DC330(&SystemInfo);
  avprintf(&SystemInfo, 0x40i64, "/replays.wdb", 0i64, 0);
  if ( LODWORD(SystemInfo.lpMaximumApplicationAddress) )
    v67 = *&SystemInfo.dwOemId;
  else
    v67 = &szFile;
  sub_16522E0(&qword_4B1BF08, v67);
  if ( *&SystemInfo.dwOemId )
    (*(*SystemInfo.lpMinimumApplicationAddress + 0x40i64))(SystemInfo.lpMinimumApplicationAddress);
  if ( Src )
    (*(*v380 + 0x40i64))(v380);
  v70 = v382;
  if ( v382 )
    (*(*v383 + 0x40i64))(v383);
  if ( v61 )
    (*(*v30 + 0x40i64))(v30, v61);
  v71 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(v71[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(v71, v70, v68, v69);
  v72 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  Src = 0i64;
  v380 = v72;
  Size = 0i64;
  sub_4DC330(&Src);
  v394 = off_4B678C0;
  if ( Size )
  {
    v73 = 0x10i64;
    if ( Size >= 0x11 )
      v73 = Size;
    v74 = (*(*off_4B678C0 + 0x18i64))(off_4B678C0, v73);
    v390 = v74;
    if ( Size )
      memmove(v74, Src, Size);
  }
  else
  {
    v390 = 0i64;
  }
  v75 = word_4B1BF16;
  if ( word_4B1BF16 )
  {
    v76 = 0;
    p_SystemInfo = &SystemInfo;
    do
    {
      v78 = v75;
      if ( dword_4B1BF18 == 0xFFFFFFFF )
      {
        v80 = v76 - v75;
        if ( v76 < v78 )
        {
          v79 = *(*qword_4B1BF20 + *(qword_4B1BF20 + 8) + 8 * v80);
          goto LABEL_155;
        }
      }
      else if ( v76 < v75 )
      {
        v79 = 0x20i64 * (v76 + dword_4B1BF18) + qword_4B1BF08 + *(qword_4B1BF08 + 0x5C) + 0x90;
        goto LABEL_155;
      }
      v79 = 0i64;
LABEL_155:
      *&SystemInfo.dwOemId = &szFile;
      v81 = data::get_str(v79, "fileName", p_SystemInfo);
      SystemInfo.dwOemId = 0;
      v385 = v79;
      v82 = data::set_int(v79, "ver", p_SystemInfo);
      v376 = 0i64;
      v377 = off_4B678C0;
      v378 = 0i64;
      v83 = Size;
      v84 = 0;
      v85 = 0;
      if ( Size )
      {
        if ( Size < 0x11 )
          v83 = 0x10i64;
        v86 = (*(*off_4B678C0 + 0x18i64))(off_4B678C0, v83);
        memmove(v86, v376, v378);
        if ( v376 )
          (*(*v377 + 0x40i64))(v377);
        v376 = v86;
        HIDWORD(v378) = v83;
        v85 = 0;
        if ( Size )
        {
          memmove(v86, Src, Size);
          v85 = Size;
        }
      }
      LODWORD(v378) = v85;
      append_string(&v376, "/", 1u);
      if ( v81 )
        v84 = strlen(v81);
      append_string(&v376, v81, v84);
      v87 = strrchr(v81, 0x2E);
      v375 = off_4B678C8;
      v88 = *(game + 0x450);
      v89 = 0;
      if ( v88 )
      {
        v90 = &szFile;
        if ( v378 )
          v90 = v376;
        if ( *(v88 + 0x550) )
        {
          v371 = v76;
          v91 = v82;
          v92 = 0i64;
          v93 = 0i64;
          while ( 1 )
          {
            v94 = *(*(v88 + 0x540) + v92);
            if ( !v94 )
              v94 = &szFile;
            if ( !stricmp(v94, v90) )
              break;
            ++v93;
            v92 += 0x10i64;
            if ( v93 >= *(v88 + 0x550) )
            {
              v96 = 0i64;
              v370 = 0;
              p_SystemInfo = &SystemInfo;
              goto LABEL_177;
            }
          }
          v97 = *(v88 + 0x540);
          v98 = *(v97 + v92 + 8);
          v99 = *(v97 + v92 + 0xC);
          v396 = 0i64;
          *&v398[0] = 0i64;
          *&SystemInfo.lpMinimumApplicationAddress = v98;
          SystemInfo.dwOemId = 3;
          *&SystemInfo.dwActiveProcessorMask = v99;
          LODWORD(SystemInfo.lpMaximumApplicationAddress) = 3;
          v397 = off_4B678C8;
          p_SystemInfo = &SystemInfo;
          ctor_vprintf(&v396, v95, "(FPS: %0.1f %0.1f)", &SystemInfo, 2);
          v96 = v396;
          v375 = v397;
          v370 = v398[0];
LABEL_177:
          v82 = v91;
          v76 = v371;
        }
        else
        {
          v96 = 0i64;
          v370 = 0;
          p_SystemInfo = &SystemInfo;
        }
      }
      else
      {
        v96 = 0i64;
        v370 = 0;
      }
      v100 = off_4B678C8;
      if ( v81 )
      {
        if ( *v81 )
        {
          v372 = v82;
          v101 = v76;
          v102 = strlen(v81);
          v103 = p_SystemInfo;
          v89 = v102 + 1;
          if ( v102 == 0xFFFFFFFF )
          {
            v104 = 0i64;
          }
          else
          {
            v106 = 0x10i64;
            if ( v89 >= 0x11 )
              v106 = v89;
            v104 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v106);
          }
          memmove(v104, v81, v89);
          v105 = v104;
          p_SystemInfo = v103;
          v76 = v101;
          v82 = v372;
        }
        else
        {
          v105 = 0i64;
          v89 = 0;
        }
      }
      else
      {
        v105 = 0i64;
      }
      if ( v87 )
        v105[v87 - v81] = 0;
      if ( v89 )
      {
        if ( !*v105 )
          goto LABEL_457;
        v391 = v105;
        v397 = v386;
        *(&v398[0] + 1) = 0i64;
        LODWORD(v398[0]) = 0x1000001;
        BYTE4(v398[0]) = 0;
        v396 = &off_44A93B0;
        sq_newtable(v386);
        v107 = v397;
        v108 = *(v397 + 0x30);
        v109 = *(v397 + 0x50) - 1i64;
        v398[0] = *(v108 + 0x10 * v109);
        if ( (BYTE3(v398[0]) & 8) != 0 )
        {
          v110 = sub_28B5100(*(v397 + 0x140) + 0x38, v398, p_SystemInfo, &v382, 1);
          ++*(v110 + 0x10);
          v107 = v397;
          v108 = *(v397 + 0x30);
          v109 = *(v397 + 0x50) - 1i64;
        }
        v395 = v100;
        *(v107 + 0x50) = v109;
        v111 = 0x10 * v109;
        v112 = *(v108 + v111 + 8);
        v9 = (*(v108 + v111) & 0x8000000) == 0;
        *(v108 + v111) = 0i64;
        *(v108 + v111) = 0x1000001;
        if ( !v9 )
        {
          v9 = v112[1]-- == 1i64;
          if ( v9 )
            (*(*v112 + 8i64))(v112);
        }
        v113 = v396[1](&v396);
        v114 = *v113;
        v115 = *(v113 + 4);
        v116 = *(v113 + 8);
        v117 = v397;
        v373 = v96;
        if ( v82 == 0x18B47 )
        {
          if ( (v114 & 0x8000000) != 0 )
            ++v116[1];
          v118 = *(v117 + 0x30);
          v119 = *(v117 + 0x50);
          v120 = v119 + 1;
          v119 *= 0x10i64;
          *(v117 + 0x50) = v120;
          v121 = *(v118 + v119);
          v122 = *(v118 + v119 + 8);
          *(v118 + v119) = v114;
          *(v118 + v119 + 4) = v115;
          *(v118 + v119 + 8) = v116;
          if ( (v114 & 0x8000000) != 0 )
            ++v116[1];
          if ( (v121 & 0x8000000) != 0 && (v9 = v122[1] == 1i64, --v122[1], v9) )
          {
            (*(*v122 + 8i64))(v122);
            if ( (v114 & 0x8000000) != 0 )
              goto LABEL_205;
          }
          else if ( (v114 & 0x8000000) != 0 )
          {
LABEL_205:
            v9 = v116[1]-- == 1i64;
            if ( v9 )
              (*(*v116 + 8i64))(v116);
          }
          v128 = v397;
          v129 = sq_throwerror(*(*(v397 + 0x140) + 0x30i64), "corrupted", 0xFFFFFFFFFFFFFFFFui64);
          ++v129[1];
          v130 = *(v128 + 0x30);
          v131 = *(v128 + 0x50);
          *(v128 + 0x50) = v131 + 1;
          v131 *= 0x10i64;
          v132 = *(v130 + v131 + 8);
          v133 = *(v130 + v131);
          *(v130 + v131) = 0x18000010;
          *(v130 + v131 + 4) = 0;
          *(v130 + v131 + 8) = v129;
          ++v129[1];
          if ( (v133 & 0x8000000) != 0 && (v9 = v132[1] == 1i64, --v132[1], v9) )
          {
            (*(*v132 + 8i64))(v132);
            v9 = v129[1]-- == 1i64;
            if ( v9 )
LABEL_225:
              (*(*v129 + 8i64))(v129);
          }
          else
          {
            v9 = v129[1]-- == 1i64;
            if ( v9 )
              goto LABEL_225;
          }
          v134 = *(v397 + 0x30);
          v135 = *(v397 + 0x50);
          *(v397 + 0x50) = v135 + 1;
          v135 *= 0x10i64;
          v9 = (*(v134 + v135) & 0x8000000) == 0;
          v136 = *(v134 + v135 + 8);
          *(v134 + v135) = 0x1000008;
          *(v134 + v135 + 4) = 0;
          *(v134 + v135 + 8) = 0i64;
          if ( !v9 )
          {
            v9 = v136[1]-- == 1i64;
            if ( v9 )
              (*(*v136 + 8i64))(v136);
          }
          sub_176D900(v397, 0xFFFFFFFFFFFFFFFDui64, 0i64);
          v137 = *(v397 + 0x30);
          v138 = *(v397 + 0x50) - 1i64;
          *(v397 + 0x50) = v138;
          v138 *= 0x10i64;
          v139 = *(v137 + v138 + 8);
          v9 = (*(v137 + v138) & 0x8000000) == 0;
          *(v137 + v138) = 0i64;
          *(v137 + v138) = 0x1000001;
          if ( !v9 )
          {
            v9 = v139[1]-- == 1i64;
            if ( v9 )
              (*(*v139 + 8i64))(v139);
          }
          v140 = v396[1](&v396);
          v141 = *v140;
          v142 = *(v140 + 4);
          v143 = *(v140 + 8);
          v144 = v397;
          if ( (v141 & 0x8000000) != 0 )
            ++v143[1];
          v145 = *(v144 + 0x30);
          v146 = *(v144 + 0x50);
          v147 = v146 + 1;
          v146 *= 0x10i64;
          *(v144 + 0x50) = v147;
          v148 = *(v145 + v146);
          v149 = *(v145 + v146 + 8);
          *(v145 + v146) = v141;
          *(v145 + v146 + 4) = v142;
          *(v145 + v146 + 8) = v143;
          if ( (v141 & 0x8000000) != 0 )
            ++v143[1];
          if ( (v148 & 0x8000000) != 0 && (v9 = v149[1] == 1i64, --v149[1], v9) )
          {
            (*(*v149 + 8i64))(v149);
            if ( (v141 & 0x8000000) != 0 )
              goto LABEL_239;
          }
          else if ( (v141 & 0x8000000) != 0 )
          {
LABEL_239:
            v9 = v143[1]-- == 1i64;
            if ( v9 )
              (*(*v143 + 8i64))(v143);
          }
          v172 = v397;
          v173 = sq_throwerror(*(*(v397 + 0x140) + 0x30i64), "isVersionMismatch", 0xFFFFFFFFFFFFFFFFui64);
          ++v173[1];
          v174 = *(v172 + 0x30);
          v175 = *(v172 + 0x50);
          *(v172 + 0x50) = v175 + 1;
          v175 *= 0x10i64;
          v176 = *(v174 + v175 + 8);
          v177 = *(v174 + v175);
          *(v174 + v175) = 0x18000010;
          *(v174 + v175 + 4) = 0;
          *(v174 + v175 + 8) = v173;
          ++v173[1];
          if ( (v177 & 0x8000000) != 0 && (v9 = v176[1] == 1i64, --v176[1], v9) )
          {
            (*(*v176 + 8i64))(v176);
            v9 = v173[1]-- == 1i64;
            if ( v9 )
LABEL_267:
              (*(*v173 + 8i64))(v173);
          }
          else
          {
            v9 = v173[1]-- == 1i64;
            if ( v9 )
              goto LABEL_267;
          }
          v178 = *(v397 + 0x30);
          v179 = *(v397 + 0x50);
          *(v397 + 0x50) = v179 + 1;
          v179 *= 0x10i64;
          v9 = (*(v178 + v179) & 0x8000000) == 0;
          v180 = *(v178 + v179 + 8);
          *(v178 + v179) = 0x1000008;
          *(v178 + v179 + 4) = 0;
          *(v178 + v179 + 8) = 0i64;
          if ( !v9 )
          {
            v9 = v180[1]-- == 1i64;
            if ( v9 )
              (*(*v180 + 8i64))(v180);
          }
          sub_176D900(v397, 0xFFFFFFFFFFFFFFFDui64, 0i64);
          v181 = *(v397 + 0x30);
          v182 = *(v397 + 0x50) - 1i64;
          *(v397 + 0x50) = v182;
          v182 *= 0x10i64;
          v183 = *(v181 + v182 + 8);
          v9 = (*(v181 + v182) & 0x8000000) == 0;
          *(v181 + v182) = 0i64;
          *(v181 + v182) = 0x1000001;
          v184 = v385;
          if ( !v9 )
          {
            v9 = v183[1]-- == 1i64;
            if ( v9 )
              (*(*v183 + 8i64))(v183);
          }
          memset(&SystemInfo, 0, 0x24);
          LODWORD(v382) = 0x7D0;
          HIDWORD(SystemInfo.lpMaximumApplicationAddress) = data::set_int(v184, &unk_48E4CBC, &v382) - 0x76C;
          LODWORD(v382) = 1;
          LODWORD(SystemInfo.lpMaximumApplicationAddress) = data::set_int(v184, &unk_491E3F3, &v382) - 1;
          LODWORD(v382) = 1;
          HIDWORD(SystemInfo.lpMinimumApplicationAddress) = data::set_int(v184, "dt_day", &v382);
          LODWORD(v382) = 0;
          LODWORD(SystemInfo.lpMinimumApplicationAddress) = data::set_int(v184, "dt_hour", &v382);
          LODWORD(v382) = 0;
          SystemInfo.dwPageSize = data::set_int(v184, "dt_min", &v382);
          LODWORD(v382) = 0;
          SystemInfo.dwOemId = data::set_int(v184, "dt_sec", &v382);
          v185 = mktime64(p_SystemInfo);
          sub_C5C360(&v382, v386, v185);
          v186 = v396[1](&v396);
          v187 = *v186;
          v188 = *(v186 + 4);
          v189 = *(v186 + 8);
          v190 = v397;
          if ( (v187 & 0x8000000) != 0 )
            ++v189[1];
          v191 = *(v190 + 0x30);
          v192 = *(v190 + 0x50);
          v193 = v192 + 1;
          v192 *= 0x10i64;
          *(v190 + 0x50) = v193;
          v194 = *(v191 + v192);
          v195 = *(v191 + v192 + 8);
          *(v191 + v192) = v187;
          *(v191 + v192 + 4) = v188;
          *(v191 + v192 + 8) = v189;
          if ( (v187 & 0x8000000) != 0 )
            ++v189[1];
          if ( (v194 & 0x8000000) != 0 && (v9 = v195[1] == 1i64, --v195[1], v9) )
          {
            (*(*v195 + 8i64))(v195);
            if ( (v187 & 0x8000000) != 0 )
              goto LABEL_281;
          }
          else if ( (v187 & 0x8000000) != 0 )
          {
LABEL_281:
            v9 = v189[1]-- == 1i64;
            if ( v9 )
              (*(*v189 + 8i64))(v189);
          }
          v220 = v397;
          v221 = sq_throwerror(*(*(v397 + 0x140) + 0x30i64), "dateTime", 0xFFFFFFFFFFFFFFFFui64);
          ++v221[1];
          v222 = *(v220 + 0x30);
          v223 = *(v220 + 0x50);
          *(v220 + 0x50) = v223 + 1;
          v223 *= 0x10i64;
          v224 = *(v222 + v223 + 8);
          v225 = *(v222 + v223);
          *(v222 + v223) = 0x18000010;
          *(v222 + v223 + 4) = 0;
          *(v222 + v223 + 8) = v221;
          ++v221[1];
          if ( (v225 & 0x8000000) != 0 && (v9 = v224[1] == 1i64, --v224[1], v9) )
          {
            (*(*v224 + 8i64))(v224);
            v9 = v221[1]-- == 1i64;
            if ( v9 )
LABEL_313:
              (*(*v221 + 8i64))(v221);
          }
          else
          {
            v9 = v221[1]-- == 1i64;
            if ( v9 )
              goto LABEL_313;
          }
          v226 = v397;
          (*(v382 + 2))(&v382, &Time);
          v227 = Time;
          v228 = HIDWORD(Time);
          v229 = v393;
          if ( (Time & 0x8000000) != 0 )
            ++v393[1];
          v230 = *(v226 + 0x30);
          v231 = *(v226 + 0x50);
          v232 = v231 + 1;
          v231 *= 0x10i64;
          *(v226 + 0x50) = v232;
          v233 = *(v230 + v231);
          v234 = *(v230 + v231 + 8);
          *(v230 + v231) = v227;
          *(v230 + v231 + 4) = v228;
          *(v230 + v231 + 8) = v229;
          if ( (v227 & 0x8000000) != 0 )
            ++v229[1];
          if ( (v233 & 0x8000000) != 0 && (v9 = v234[1] == 1i64, --v234[1], v9) )
          {
            (*(*v234 + 8i64))(v234);
            if ( (v227 & 0x8000000) != 0 )
              goto LABEL_321;
          }
          else if ( (v227 & 0x8000000) != 0 )
          {
LABEL_321:
            v9 = v229[1]-- == 1i64;
            if ( v9 )
              (*(*v229 + 8i64))(v229);
          }
          sub_176D900(v397, 0xFFFFFFFFFFFFFFFDui64, 0i64);
          v245 = *(v397 + 0x30);
          v246 = *(v397 + 0x50) - 1i64;
          *(v397 + 0x50) = v246;
          v246 *= 0x10i64;
          v247 = *(v245 + v246 + 8);
          v9 = (*(v245 + v246) & 0x8000000) == 0;
          *(v245 + v246) = 0i64;
          *(v245 + v246) = 0x1000001;
          if ( !v9 )
          {
            v9 = v247[1]-- == 1i64;
            if ( v9 )
              (*(*v247 + 8i64))(v247);
          }
          v382 = &off_44A93B0;
          v244 = v385;
          if ( (v384 & 0x8000000) != 0 )
            sub_28B55C0(v383[0x28] + 0x38i64, &v384);
LABEL_343:
          SystemInfo.dwOemId = 0;
          v248 = data::set_int(v244, "startTime", p_SystemInfo);
          v249 = v396[1](&v396);
          v250 = *v249;
          v251 = *(v249 + 4);
          v252 = *(v249 + 8);
          v253 = v397;
          if ( (v250 & 0x8000000) != 0 )
            ++v252[1];
          v254 = *(v253 + 0x30);
          v255 = *(v253 + 0x50);
          v256 = v255 + 1;
          v255 *= 0x10i64;
          *(v253 + 0x50) = v256;
          v257 = *(v254 + v255);
          v258 = *(v254 + v255 + 8);
          *(v254 + v255) = v250;
          *(v254 + v255 + 4) = v251;
          *(v254 + v255 + 8) = v252;
          if ( (v250 & 0x8000000) != 0 )
            ++v252[1];
          if ( (v257 & 0x8000000) != 0 && (v9 = v258[1] == 1i64, --v258[1], v9) )
          {
            (*(*v258 + 8i64))(v258);
            if ( (v250 & 0x8000000) != 0 )
              goto LABEL_350;
          }
          else if ( (v250 & 0x8000000) != 0 )
          {
LABEL_350:
            v9 = v252[1]-- == 1i64;
            if ( v9 )
              (*(*v252 + 8i64))(v252);
          }
          v259 = v397;
          v260 = sq_throwerror(*(*(v397 + 0x140) + 0x30i64), "startTime", 0xFFFFFFFFFFFFFFFFui64);
          ++v260[1];
          v261 = *(v259 + 0x30);
          v262 = *(v259 + 0x50);
          *(v259 + 0x50) = v262 + 1;
          v262 *= 0x10i64;
          v263 = *(v261 + v262 + 8);
          v264 = *(v261 + v262);
          *(v261 + v262) = 0x18000010;
          *(v261 + v262 + 4) = 0;
          *(v261 + v262 + 8) = v260;
          ++v260[1];
          if ( (v264 & 0x8000000) != 0 && (v9 = v263[1] == 1i64, --v263[1], v9) )
          {
            (*(*v263 + 8i64))(v263);
            v9 = v260[1]-- == 1i64;
            if ( v9 )
LABEL_356:
              (*(*v260 + 8i64))(v260);
          }
          else
          {
            v9 = v260[1]-- == 1i64;
            if ( v9 )
              goto LABEL_356;
          }
          v265 = *(v397 + 0x30);
          v266 = *(v397 + 0x50);
          *(v397 + 0x50) = v266 + 1;
          v266 *= 0x10i64;
          v9 = (*(v265 + v266) & 0x8000000) == 0;
          v267 = *(v265 + v266 + 8);
          *(v265 + v266) = 0x5000002;
          *(v265 + v266 + 4) = 0;
          *(v265 + v266 + 8) = v248;
          if ( !v9 )
          {
            v9 = v267[1]-- == 1i64;
            if ( v9 )
              (*(*v267 + 8i64))(v267);
          }
          sub_176D900(v397, 0xFFFFFFFFFFFFFFFDui64, 0i64);
          v268 = *(v397 + 0x30);
          v269 = *(v397 + 0x50) - 1i64;
          *(v397 + 0x50) = v269;
          v269 *= 0x10i64;
          v270 = *(v268 + v269 + 8);
          v9 = (*(v268 + v269) & 0x8000000) == 0;
          *(v268 + v269) = 0i64;
          *(v268 + v269) = 0x1000001;
          if ( !v9 )
          {
            v9 = v270[1]-- == 1i64;
            if ( v9 )
              (*(*v270 + 8i64))(v270);
          }
          v271 = v396[1](&v396);
          v272 = *v271;
          v273 = *(v271 + 4);
          v274 = *(v271 + 8);
          v275 = v397;
          if ( (v272 & 0x8000000) != 0 )
            ++v274[1];
          v276 = *(v275 + 0x30);
          v277 = *(v275 + 0x50);
          v278 = v277 + 1;
          v277 *= 0x10i64;
          *(v275 + 0x50) = v278;
          v279 = *(v276 + v277);
          v280 = *(v276 + v277 + 8);
          *(v276 + v277) = v272;
          *(v276 + v277 + 4) = v273;
          *(v276 + v277 + 8) = v274;
          if ( (v272 & 0x8000000) != 0 )
            ++v274[1];
          if ( (v279 & 0x8000000) != 0 && (v9 = v280[1] == 1i64, --v280[1], v9) )
          {
            (*(*v280 + 8i64))(v280);
            if ( (v272 & 0x8000000) != 0 )
              goto LABEL_370;
          }
          else if ( (v272 & 0x8000000) != 0 )
          {
LABEL_370:
            v9 = v274[1]-- == 1i64;
            if ( v9 )
              (*(*v274 + 8i64))(v274);
          }
          v281 = v397;
          v282 = sq_throwerror(*(*(v397 + 0x140) + 0x30i64), "name", 0xFFFFFFFFFFFFFFFFui64);
          ++v282[1];
          v283 = *(v281 + 0x30);
          v284 = *(v281 + 0x50);
          *(v281 + 0x50) = v284 + 1;
          v284 *= 0x10i64;
          v285 = *(v283 + v284 + 8);
          v286 = *(v283 + v284);
          *(v283 + v284) = 0x18000010;
          *(v283 + v284 + 4) = 0;
          *(v283 + v284 + 8) = v282;
          ++v282[1];
          if ( (v286 & 0x8000000) != 0 && (v9 = v285[1] == 1i64, --v285[1], v9) )
          {
            (*(*v285 + 8i64))(v285);
            v9 = v282[1]-- == 1i64;
            if ( v9 )
LABEL_378:
              (*(*v282 + 8i64))(v282);
          }
          else
          {
            v9 = v282[1]-- == 1i64;
            if ( v9 )
              goto LABEL_378;
          }
          v287 = v397;
          v288 = sq_throwerror(*(*(v397 + 0x140) + 0x30i64), v391, 0xFFFFFFFFFFFFFFFFui64);
          ++v288[1];
          v289 = *(v287 + 0x30);
          v290 = *(v287 + 0x50);
          *(v287 + 0x50) = v290 + 1;
          v290 *= 0x10i64;
          v291 = *(v289 + v290 + 8);
          v292 = *(v289 + v290);
          *(v289 + v290) = 0x18000010;
          *(v289 + v290 + 4) = 0;
          *(v289 + v290 + 8) = v288;
          ++v288[1];
          if ( (v292 & 0x8000000) != 0 && (v9 = v291[1] == 1i64, --v291[1], v9) )
          {
            (*(*v291 + 8i64))(v291);
            v9 = v288[1]-- == 1i64;
            if ( v9 )
LABEL_382:
              (*(*v288 + 8i64))(v288);
          }
          else
          {
            v9 = v288[1]-- == 1i64;
            if ( v9 )
              goto LABEL_382;
          }
          sub_176D900(v397, 0xFFFFFFFFFFFFFFFDui64, 0i64);
          v293 = *(v397 + 0x30);
          v294 = *(v397 + 0x50) - 1i64;
          *(v397 + 0x50) = v294;
          v294 *= 0x10i64;
          v295 = *(v293 + v294 + 8);
          v9 = (*(v293 + v294) & 0x8000000) == 0;
          *(v293 + v294) = 0i64;
          *(v293 + v294) = 0x1000001;
          if ( !v9 )
          {
            v9 = v295[1]-- == 1i64;
            if ( v9 )
              (*(*v295 + 8i64))(v295);
          }
          v296 = &szFile;
          if ( v378 )
            v296 = v376;
          v297 = v396[1](&v396);
          v298 = *v297;
          v299 = *(v297 + 4);
          v300 = *(v297 + 8);
          v301 = v397;
          if ( (v298 & 0x8000000) != 0 )
            ++v300[1];
          v302 = *(v301 + 0x30);
          v303 = *(v301 + 0x50);
          v304 = v303 + 1;
          v303 *= 0x10i64;
          *(v301 + 0x50) = v304;
          v305 = *(v302 + v303);
          v306 = *(v302 + v303 + 8);
          *(v302 + v303) = v298;
          *(v302 + v303 + 4) = v299;
          *(v302 + v303 + 8) = v300;
          if ( (v298 & 0x8000000) != 0 )
            ++v300[1];
          if ( (v305 & 0x8000000) != 0 && (v9 = v306[1] == 1i64, --v306[1], v9) )
          {
            (*(*v306 + 8i64))(v306);
            if ( (v298 & 0x8000000) != 0 )
              goto LABEL_395;
          }
          else if ( (v298 & 0x8000000) != 0 )
          {
LABEL_395:
            v9 = v300[1]-- == 1i64;
            if ( v9 )
              (*(*v300 + 8i64))(v300);
          }
          v307 = v397;
          v308 = sq_throwerror(*(*(v397 + 0x140) + 0x30i64), "path", 0xFFFFFFFFFFFFFFFFui64);
          ++v308[1];
          v309 = *(v307 + 0x30);
          v310 = *(v307 + 0x50);
          *(v307 + 0x50) = v310 + 1;
          v310 *= 0x10i64;
          v311 = *(v309 + v310 + 8);
          v312 = *(v309 + v310);
          *(v309 + v310) = 0x18000010;
          *(v309 + v310 + 4) = 0;
          *(v309 + v310 + 8) = v308;
          ++v308[1];
          if ( (v312 & 0x8000000) != 0 )
          {
            v9 = v311[1]-- == 1i64;
            if ( v9 )
              (*(*v311 + 8i64))(v311);
          }
          v9 = v308[1]-- == 1i64;
          if ( v9 )
            (*(*v308 + 8i64))(v308);
          sub_176A030(v397, v296, 0xFFFFFFFFFFFFFFFFui64);
          sub_176D900(v397, 0xFFFFFFFFFFFFFFFDui64, 0i64);
          v313 = *(v397 + 0x30);
          v314 = *(v397 + 0x50) - 1i64;
          *(v397 + 0x50) = v314;
          v314 *= 0x10i64;
          v315 = *(v313 + v314 + 8);
          v9 = (*(v313 + v314) & 0x8000000) == 0;
          *(v313 + v314) = 0i64;
          *(v313 + v314) = 0x1000001;
          if ( !v9 )
          {
            v9 = v315[1]-- == 1i64;
            if ( v9 )
              (*(*v315 + 8i64))(v315);
          }
          v316 = v373;
          if ( !v370 )
            v316 = &szFile;
          v317 = v396[1](&v396);
          v318 = *v317;
          v319 = *(v317 + 4);
          v320 = *(v317 + 8);
          v321 = v397;
          if ( (v318 & 0x8000000) != 0 )
            ++v320[1];
          v322 = *(v321 + 0x30);
          v323 = *(v321 + 0x50);
          v324 = v323 + 1;
          v323 *= 0x10i64;
          *(v321 + 0x50) = v324;
          v325 = *(v322 + v323);
          v326 = *(v322 + v323 + 8);
          *(v322 + v323) = v318;
          *(v322 + v323 + 4) = v319;
          *(v322 + v323 + 8) = v320;
          if ( (v318 & 0x8000000) != 0 )
            ++v320[1];
          if ( (v325 & 0x8000000) != 0 && (v9 = v326[1] == 1i64, --v326[1], v9) )
          {
            (*(*v326 + 8i64))(v326);
            if ( (v318 & 0x8000000) != 0 )
              goto LABEL_419;
          }
          else if ( (v318 & 0x8000000) != 0 )
          {
LABEL_419:
            v9 = v320[1]-- == 1i64;
            if ( v9 )
              (*(*v320 + 8i64))(v320);
          }
          v327 = v397;
          v328 = sq_throwerror(*(*(v397 + 0x140) + 0x30i64), "text", 0xFFFFFFFFFFFFFFFFui64);
          ++v328[1];
          v329 = *(v327 + 0x30);
          v330 = *(v327 + 0x50);
          *(v327 + 0x50) = v330 + 1;
          v330 *= 0x10i64;
          v331 = *(v329 + v330 + 8);
          v332 = *(v329 + v330);
          *(v329 + v330) = 0x18000010;
          *(v329 + v330 + 4) = 0;
          *(v329 + v330 + 8) = v328;
          ++v328[1];
          if ( (v332 & 0x8000000) != 0 && (v9 = v331[1] == 1i64, --v331[1], v9) )
          {
            (*(*v331 + 8i64))(v331);
            v9 = v328[1]-- == 1i64;
            if ( v9 )
LABEL_425:
              (*(*v328 + 8i64))(v328);
          }
          else
          {
            v9 = v328[1]-- == 1i64;
            if ( v9 )
              goto LABEL_425;
          }
          sub_176A030(v397, v316, 0xFFFFFFFFFFFFFFFFui64);
          sub_176D900(v397, 0xFFFFFFFFFFFFFFFDui64, 0i64);
          v333 = *(v397 + 0x30);
          v334 = *(v397 + 0x50) - 1i64;
          *(v397 + 0x50) = v334;
          v334 *= 0x10i64;
          v335 = *(v333 + v334 + 8);
          v9 = (*(v333 + v334) & 0x8000000) == 0;
          *(v333 + v334) = 0i64;
          *(v333 + v334) = 0x1000001;
          if ( !v9 )
          {
            v9 = v335[1]-- == 1i64;
            if ( v9 )
              (*(*v335 + 8i64))(v335);
          }
          v336 = v387[1](&v387);
          v337 = *v336;
          v338 = *(v336 + 4);
          v339 = *(v336 + 8);
          v340 = v388;
          if ( (v337 & 0x8000000) != 0 )
            ++v339[1];
          v341 = v340[6];
          v342 = v340[0xA];
          v343 = v342 + 1;
          v342 *= 0x10i64;
          v340[0xA] = v343;
          v344 = *(v341 + v342);
          v345 = *(v341 + v342 + 8);
          *(v341 + v342) = v337;
          *(v341 + v342 + 4) = v338;
          *(v341 + v342 + 8) = v339;
          if ( (v337 & 0x8000000) != 0 )
            ++v339[1];
          if ( (v344 & 0x8000000) != 0 && (v9 = v345[1] == 1i64, --v345[1], v9) )
          {
            (*(*v345 + 8i64))(v345);
            if ( (v337 & 0x8000000) != 0 )
              goto LABEL_436;
          }
          else if ( (v337 & 0x8000000) != 0 )
          {
LABEL_436:
            v9 = v339[1]-- == 1i64;
            if ( v9 )
              (*(*v339 + 8i64))(v339);
          }
          v346 = v388;
          (v396[2])(&v396, p_SystemInfo);
          dwOemId = SystemInfo.dwOemId;
          dwPageSize = SystemInfo.dwPageSize;
          lpMinimumApplicationAddress = SystemInfo.lpMinimumApplicationAddress;
          if ( (SystemInfo.dwOemId & 0x8000000) != 0 )
            ++*(SystemInfo.lpMinimumApplicationAddress + 1);
          v350 = v346[6];
          v351 = v346[0xA];
          v352 = v351 + 1;
          v351 *= 0x10i64;
          v346[0xA] = v352;
          v353 = *(v350 + v351);
          v354 = *(v350 + v351 + 8);
          *(v350 + v351) = dwOemId;
          *(v350 + v351 + 4) = dwPageSize;
          *(v350 + v351 + 8) = lpMinimumApplicationAddress;
          if ( (dwOemId & 0x8000000) != 0 )
            ++lpMinimumApplicationAddress[1];
          if ( (v353 & 0x8000000) != 0 && (v9 = v354[1] == 1i64, --v354[1], v9) )
          {
            (*(*v354 + 8i64))(v354);
            if ( (dwOemId & 0x8000000) != 0 )
              goto LABEL_448;
          }
          else if ( (dwOemId & 0x8000000) != 0 )
          {
LABEL_448:
            v9 = lpMinimumApplicationAddress[1]-- == 1i64;
            if ( v9 )
              (*(*lpMinimumApplicationAddress + 8i64))(lpMinimumApplicationAddress);
          }
          sub_176AA70(v388, 0xFFFFFFFFFFFFFFFEui64);
          v355 = v388[6];
          v356 = v388[0xA] - 1i64;
          v388[0xA] = v356;
          v356 *= 0x10i64;
          v357 = *(v355 + v356 + 8);
          v9 = (*(v355 + v356) & 0x8000000) == 0;
          *(v355 + v356) = 0i64;
          *(v355 + v356) = 0x1000001;
          v100 = v395;
          if ( !v9 )
          {
            v9 = v357[1]-- == 1i64;
            if ( v9 )
              (*(*v357 + 8i64))(v357);
          }
          v396 = &off_44A93B0;
          v96 = v373;
          if ( (BYTE3(v398[0]) & 8) != 0 )
            sub_28B55C0(*(v397 + 0x140) + 0x38i64, v398);
          v105 = v391;
LABEL_457:
          (*(*v100 + 0x40i64))(v100, v105);
          if ( !v96 )
            goto LABEL_210;
LABEL_209:
          (*(*v375 + 0x40i64))(v375, v96);
          goto LABEL_210;
        }
        if ( (v114 & 0x8000000) != 0 )
          ++v116[1];
        v123 = *(v117 + 0x30);
        v124 = *(v117 + 0x50);
        v125 = v124 + 1;
        v124 *= 0x10i64;
        *(v117 + 0x50) = v125;
        v126 = *(v123 + v124);
        v127 = *(v123 + v124 + 8);
        *(v123 + v124) = v114;
        *(v123 + v124 + 4) = v115;
        *(v123 + v124 + 8) = v116;
        if ( (v114 & 0x8000000) != 0 )
          ++v116[1];
        if ( (v126 & 0x8000000) != 0 && (v9 = v127[1] == 1i64, --v127[1], v9) )
        {
          (*(*v127 + 8i64))(v127);
          if ( (v114 & 0x8000000) != 0 )
            goto LABEL_219;
        }
        else if ( (v114 & 0x8000000) != 0 )
        {
LABEL_219:
          v9 = v116[1]-- == 1i64;
          if ( v9 )
            (*(*v116 + 8i64))(v116);
        }
        v150 = v397;
        v151 = sq_throwerror(*(*(v397 + 0x140) + 0x30i64), "corrupted", 0xFFFFFFFFFFFFFFFFui64);
        ++v151[1];
        v152 = *(v150 + 0x30);
        v153 = *(v150 + 0x50);
        *(v150 + 0x50) = v153 + 1;
        v153 *= 0x10i64;
        v154 = *(v152 + v153 + 8);
        v155 = *(v152 + v153);
        *(v152 + v153) = 0x18000010;
        *(v152 + v153 + 4) = 0;
        *(v152 + v153 + 8) = v151;
        ++v151[1];
        if ( (v155 & 0x8000000) != 0 && (v9 = v154[1] == 1i64, --v154[1], v9) )
        {
          (*(*v154 + 8i64))(v154);
          v9 = v151[1]-- == 1i64;
          if ( v9 )
LABEL_245:
            (*(*v151 + 8i64))(v151);
        }
        else
        {
          v9 = v151[1]-- == 1i64;
          if ( v9 )
            goto LABEL_245;
        }
        v156 = *(v397 + 0x30);
        v157 = *(v397 + 0x50);
        *(v397 + 0x50) = v157 + 1;
        v157 *= 0x10i64;
        v9 = (*(v156 + v157) & 0x8000000) == 0;
        v158 = *(v156 + v157 + 8);
        *(v156 + v157) = 0x1000008;
        *(v156 + v157 + 4) = 0;
        *(v156 + v157 + 8) = 0i64;
        if ( !v9 )
        {
          v9 = v158[1]-- == 1i64;
          if ( v9 )
            (*(*v158 + 8i64))(v158);
        }
        sub_176D900(v397, 0xFFFFFFFFFFFFFFFDui64, 0i64);
        v159 = *(v397 + 0x30);
        v160 = *(v397 + 0x50) - 1i64;
        *(v397 + 0x50) = v160;
        v160 *= 0x10i64;
        v161 = *(v159 + v160 + 8);
        v9 = (*(v159 + v160) & 0x8000000) == 0;
        *(v159 + v160) = 0i64;
        *(v159 + v160) = 0x1000001;
        if ( !v9 )
        {
          v9 = v161[1]-- == 1i64;
          if ( v9 )
            (*(*v161 + 8i64))(v161);
        }
        v162 = v396[1](&v396);
        v163 = *v162;
        v164 = *(v162 + 4);
        v165 = *(v162 + 8);
        v166 = v397;
        if ( (v163 & 0x8000000) != 0 )
          ++v165[1];
        v167 = *(v166 + 0x30);
        v168 = *(v166 + 0x50);
        v169 = v168 + 1;
        v168 *= 0x10i64;
        *(v166 + 0x50) = v169;
        v170 = *(v167 + v168);
        v171 = *(v167 + v168 + 8);
        *(v167 + v168) = v163;
        *(v167 + v168 + 4) = v164;
        *(v167 + v168 + 8) = v165;
        if ( (v163 & 0x8000000) != 0 )
          ++v165[1];
        if ( (v170 & 0x8000000) != 0 && (v9 = v171[1] == 1i64, --v171[1], v9) )
        {
          (*(*v171 + 8i64))(v171);
          if ( (v163 & 0x8000000) != 0 )
            goto LABEL_259;
        }
        else if ( (v163 & 0x8000000) != 0 )
        {
LABEL_259:
          v9 = v165[1]-- == 1i64;
          if ( v9 )
            (*(*v165 + 8i64))(v165);
        }
        v196 = v397;
        v197 = sq_throwerror(*(*(v397 + 0x140) + 0x30i64), "isVersionMismatch", 0xFFFFFFFFFFFFFFFFui64);
        ++v197[1];
        v198 = *(v196 + 0x30);
        v199 = *(v196 + 0x50);
        *(v196 + 0x50) = v199 + 1;
        v199 *= 0x10i64;
        v200 = *(v198 + v199 + 8);
        v201 = *(v198 + v199);
        *(v198 + v199) = 0x18000010;
        *(v198 + v199 + 4) = 0;
        *(v198 + v199 + 8) = v197;
        ++v197[1];
        if ( (v201 & 0x8000000) != 0 && (v9 = v200[1] == 1i64, --v200[1], v9) )
        {
          (*(*v200 + 8i64))(v200);
          v9 = v197[1]-- == 1i64;
          if ( v9 )
LABEL_289:
            (*(*v197 + 8i64))(v197);
        }
        else
        {
          v9 = v197[1]-- == 1i64;
          if ( v9 )
            goto LABEL_289;
        }
        v202 = *(v397 + 0x30);
        v203 = *(v397 + 0x50);
        *(v397 + 0x50) = v203 + 1;
        v203 *= 0x10i64;
        v9 = (*(v202 + v203) & 0x8000000) == 0;
        v204 = *(v202 + v203 + 8);
        *(v202 + v203) = 0x1000008;
        *(v202 + v203 + 4) = 0;
        *(v202 + v203 + 8) = 1i64;
        if ( !v9 )
        {
          v9 = v204[1]-- == 1i64;
          if ( v9 )
            (*(*v204 + 8i64))(v204);
        }
        sub_176D900(v397, 0xFFFFFFFFFFFFFFFDui64, 0i64);
        v205 = *(v397 + 0x30);
        v206 = *(v397 + 0x50) - 1i64;
        *(v397 + 0x50) = v206;
        v206 *= 0x10i64;
        v207 = *(v205 + v206 + 8);
        v9 = (*(v205 + v206) & 0x8000000) == 0;
        *(v205 + v206) = 0i64;
        *(v205 + v206) = 0x1000001;
        if ( !v9 )
        {
          v9 = v207[1]-- == 1i64;
          if ( v9 )
            (*(*v207 + 8i64))(v207);
        }
        v382 = 0i64;
        v384 = 0i64;
        SystemInfo.lpMinimumApplicationAddress = v82;
        SystemInfo.dwOemId = 2;
        SystemInfo.dwActiveProcessorMask = 0x18B47i64;
        LODWORD(SystemInfo.lpMaximumApplicationAddress) = 2;
        v383 = off_4B678C8;
        ctor_vprintf(&v382, v205, "header.version (%u) != CURRENT_VERSION (%u)", p_SystemInfo, 2);
        v208 = v382;
        v209 = v382;
        if ( !v384 )
          v209 = &szFile;
        v210 = v396[1](&v396);
        v211 = *v210;
        v212 = *(v210 + 4);
        v213 = *(v210 + 8);
        v214 = v397;
        if ( (v211 & 0x8000000) != 0 )
          ++v213[1];
        v215 = *(v214 + 0x30);
        v216 = *(v214 + 0x50);
        v217 = v216 + 1;
        v216 *= 0x10i64;
        *(v214 + 0x50) = v217;
        v218 = *(v215 + v216);
        v219 = *(v215 + v216 + 8);
        *(v215 + v216) = v211;
        *(v215 + v216 + 4) = v212;
        *(v215 + v216 + 8) = v213;
        if ( (v211 & 0x8000000) != 0 )
          ++v213[1];
        if ( (v218 & 0x8000000) != 0 && (v9 = v219[1] == 1i64, --v219[1], v9) )
        {
          (*(*v219 + 8i64))(v219);
          if ( (v211 & 0x8000000) != 0 )
            goto LABEL_305;
        }
        else if ( (v211 & 0x8000000) != 0 )
        {
LABEL_305:
          v9 = v213[1]-- == 1i64;
          if ( v9 )
            (*(*v213 + 8i64))(v213);
        }
        v235 = v397;
        v236 = sq_throwerror(*(*(v397 + 0x140) + 0x30i64), "error", 0xFFFFFFFFFFFFFFFFui64);
        ++v236[1];
        v237 = *(v235 + 0x30);
        v238 = *(v235 + 0x50);
        *(v235 + 0x50) = v238 + 1;
        v238 *= 0x10i64;
        v239 = *(v237 + v238 + 8);
        v240 = *(v237 + v238);
        *(v237 + v238) = 0x18000010;
        *(v237 + v238 + 4) = 0;
        *(v237 + v238 + 8) = v236;
        ++v236[1];
        if ( (v240 & 0x8000000) != 0 && (v9 = v239[1] == 1i64, --v239[1], v9) )
        {
          (*(*v239 + 8i64))(v239);
          v9 = v236[1]-- == 1i64;
          if ( v9 )
LABEL_329:
            (*(*v236 + 8i64))(v236);
        }
        else
        {
          v9 = v236[1]-- == 1i64;
          if ( v9 )
            goto LABEL_329;
        }
        sub_176A030(v397, v209, 0xFFFFFFFFFFFFFFFFui64);
        sub_176D900(v397, 0xFFFFFFFFFFFFFFFDui64, 0i64);
        v241 = *(v397 + 0x30);
        v242 = *(v397 + 0x50) - 1i64;
        *(v397 + 0x50) = v242;
        v242 *= 0x10i64;
        v243 = *(v241 + v242 + 8);
        v9 = (*(v241 + v242) & 0x8000000) == 0;
        *(v241 + v242) = 0i64;
        *(v241 + v242) = 0x1000001;
        if ( !v9 )
        {
          v9 = v243[1]-- == 1i64;
          if ( v9 )
            (*(*v243 + 8i64))(v243);
        }
        p_SystemInfo = &SystemInfo;
        v244 = v385;
        if ( v208 )
          (*(*v383 + 0x40i64))(v383, v208);
        goto LABEL_343;
      }
      if ( v105 )
        goto LABEL_457;
      if ( v96 )
        goto LABEL_209;
LABEL_210:
      if ( v376 )
        (*(*v377 + 0x40i64))(v377);
      ++v76;
      v75 = word_4B1BF16;
    }
    while ( v76 < word_4B1BF16 );
  }
  v358 = v389;
  v359 = DWORD1(v389);
  v360 = *(&v389 + 1);
  if ( (v389 & 0x8000000) != 0 )
    ++*(*(&v389 + 1) + 8i64);
  v361 = v386[6];
  v362 = v386[0xA];
  v363 = v362 + 1;
  v362 *= 0x10i64;
  v386[0xA] = v363;
  v364 = *(v361 + v362);
  v365 = *(v361 + v362 + 8);
  *(v361 + v362) = v358;
  *(v361 + v362 + 4) = v359;
  *(v361 + v362 + 8) = v360;
  if ( (v358 & 0x8000000) != 0 )
    ++v360[1];
  v366 = v394;
  v367 = v390;
  if ( (v364 & 0x8000000) != 0 && (v9 = v365[1] == 1i64, --v365[1], v9) )
  {
    (*(*v365 + 8i64))(v365);
    if ( (v358 & 0x8000000) != 0 )
      goto LABEL_468;
  }
  else if ( (v358 & 0x8000000) != 0 )
  {
LABEL_468:
    v9 = v360[1]-- == 1i64;
    if ( v9 )
      (*(*v360 + 8i64))(v360);
  }
  if ( v367 )
    (*(*v366 + 0x40i64))(v366, v367);
  if ( Src )
    (*(*v380 + 0x40i64))(v380);
  v387 = &off_44A93B0;
  if ( (BYTE3(v389) & 8) != 0 )
    sub_28B55C0(v388[0x28] + 0x38i64, &v389);
  return 1i64;
}
