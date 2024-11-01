__int64 __fastcall start_play(__int64 a1, char *a2, unsigned int a3)
{
  v4 = a2;
  v6 = off_4A78F90(a1, a2);
  v7 = *v6;
  v8 = 0xFFFFFFFF;
  if ( *v6 )
  {
    v9 = data::get_name_id("debug", 5ui64);
    v10 = *(v7 + 0x50);
    if ( v10 )
    {
      v11 = *(v10 + 0x20);
      if ( !*(v7 + 0x20) )
        goto LABEL_8;
    }
    else
    {
      v11 = 0;
      if ( !*(v7 + 0x20) )
        goto LABEL_8;
    }
    v12 = data::get_name_id(v7, "debug", 5ui64, v9);
    if ( v12 >= 0 )
    {
      v13 = v11 + v12;
LABEL_10:
      v8 = v13;
      goto LABEL_11;
    }
LABEL_8:
    if ( !v11 )
      goto LABEL_11;
    v13 = data::get_name_id(*(v7 + 0x50), "debug", 5ui64, v9);
    goto LABEL_10;
  }
LABEL_11:
  v14 = *(v6 + 0x10);
  if ( v14 == 0xFFFFFFFF )
  {
    v21 = *(v6 + 0xE);
    v16 = 0i64;
    if ( *(v6 + 0xE) )
    {
      v22 = v8 + 1;
      v23 = *(v6 + 0x18);
      v24 = *v23;
      v25 = *(v23 + 2) - 8 * v21;
      v26 = 0;
      while ( (*(*(v24 + v25) + 8i64) & 0x3FFFFFFF) != v22 )
      {
        ++v26;
        v25 += 8i64;
        if ( v21 == v26 )
          goto LABEL_28;
      }
      if ( v26 >= v21 )
        v16 = 0i64;
      else
        v16 = *(v24 + v25);
    }
  }
  else
  {
    v15 = *(v6 + 0xE);
    v16 = 0i64;
    if ( v14 < (v14 + v15) )
    {
      v17 = v8 + 1;
      v18 = *v6 + *(*v6 + 0x5Ci64) + 0x90i64;
      v19 = 0;
      while ( 1 )
      {
        v20 = 0x20i64 * (v14 + v19);
        if ( (*(v18 + v20 + 8) & 0x3FFFFFFF) == v17 )
          break;
        if ( v15 == ++v19 )
          goto LABEL_28;
      }
      v27 = v20 + v18;
      v16 = 0i64;
      if ( v19 < v15 )
        v16 = v27;
    }
  }
LABEL_28:
  v28 = &data::get_block_by_name;
  if ( v16 )
    v28 = v16;
  LOBYTE(v110) = 0;
  if ( data::get_bool(v28, "replayExportUnitPos", &v110) )
  {
    v29 = *(a1 + 0x5E8);
    if ( !v29 || !*v29 )
    {
      v100 = a3;
      v30 = 0i64;
      Time = unknown_libname_80(0i64);
      v31 = localtime64(&Time);
      v101[0] = 0i64;
      v101[1] = off_4B678C8;
      *&v102 = 0i64;
      sub_4DC330(v101);
      tm_mon = v31->tm_mon;
      tm_year = v31->tm_year;
      if ( v4 )
      {
        v30 = v4;
        if ( *v4 )
        {
          v35 = strrchr(v4, 0x5C);
          v36 = v35 + 1;
          if ( !v35 )
            v36 = v4;
          v37 = strrchr(v36, 0x2F);
          v30 = (v37 + 1);
          if ( !v37 )
            v30 = v36;
        }
      }
      Source = v4;
      v38 = tm_mon + 1;
      v39 = tm_year + 0x76C;
      v40 = &szFile;
      v41 = &szFile;
      if ( v102 )
        v41 = v101[0];
      Src = 0i64;
      v98 = 0i64;
      v111 = v41;
      v110 = 1;
      v113 = v30;
      v112 = 1;
      v115 = v39;
      v114 = 2;
      v117 = v38;
      v116 = 2;
      tm_mday = v31->tm_mday;
      v118 = 2;
      tm_hour = v31->tm_hour;
      v120 = 2;
      tm_min = v31->tm_min;
      v122 = 2;
      tm_sec = v31->tm_sec;
      v124 = 2;
      v97 = off_4B678C8;
      ctor_vprintf(&Src, v32, "%s/%s_conv_%04d.%02d.%02d_%02d.%02d.%02d", &v110, 8);
      v42 = Src;
      if ( v98 )
        v40 = Src;
      v43 = *(a1 + 0x5D0);
      v44 = *(a1 + 0x5D8);
      if ( v43 != v44 )
      {
        do
        {
          v45 = *v43;
          if ( *v43 )
          {
            if ( (v45 & 1) != 0 && (v45 & 0xFFFFFFFFFFFFFFFEui64) != 0 )
            {
              df_close(v45 & 0xFFFFFFFFFFFFFFFEui64);
            }
            else if ( fclose(*v43) )
            {
              v46 = *errno();
              v111 = v45;
              v110 = 5;
              v113 = v46;
              v112 = 2;
              logmessage_fmt(
                1u,
                "fclose(%p) returns error %d. Probably invalid pointer, IO error (disk full?) or file is already closed",
                &v110,
                2);
            }
            else if ( dag_on_file_close )
            {
              dag_on_file_close(v45);
            }
          }
          ++v43;
        }
        while ( v43 != v44 );
        v43 = *(a1 + 0x5D0);
      }
      *(a1 + 0x5D8) = v43;
      v4 = Source;
      if ( *(a1 + 0x5E8) )
        (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
      *(a1 + 0x5E8) = 0i64;
      if ( v40 )
      {
        if ( *v40 && (v47 = strlen(v40) + 1, (v48 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v47)) != 0i64) )
        {
          v49 = v48;
          memmove(v48, v40, v47);
        }
        else
        {
          v49 = 0i64;
        }
        *(a1 + 0x5E8) = v49;
      }
      make_dir(v40);
      if ( v42 )
        (*(*v97 + 0x40i64))(v97, v42);
      a3 = v100;
      if ( v101[0] )
        (*(*v101[1] + 0x40i64))(v101[1]);
    }
  }
  if ( *(a1 + 0x568) )
  {
    if ( *(a1 + 0x5CA) )
      goto LABEL_90;
    goto LABEL_81;
  }
  v50 = j__malloc_base(8ui64);
  if ( !v50 )
  {
    do
    {
      if ( !off_4B678A0 || !off_4B678A0(8i64) )
      {
        v111 = &word_8;
        v110 = 2;
        LOBYTE(v51) = 1;
        log_err(
          "..\\..\\prog\\engine2\\memory\\dagmem.cpp",
          0x345,
          v51,
          "Not enough memory to alloc %llu bytes",
          &v110,
          1);
      }
      v52 = j__malloc_base(8ui64);
    }
    while ( !v52 );
    v50 = v52;
  }
  _InterlockedAdd(&dword_4B6788C, (j__msize(v50) + 0xF) >> 4);
  _InterlockedIncrement(&dword_4B67890);
  *v50 = 0i64;
  v53 = qword_4B12200;
  if ( HIDWORD(qword_4B12210) > 1 )
  {
    *qword_4B12200 = &off_4B12218;
    *(v53 + 8) = &off_4B196C0;
  }
  else
  {
    if ( qword_4B12200 )
      (*(*off_4B12208 + 0x40i64))(off_4B12208, qword_4B12200);
    v54 = (*(*off_4B12208 + 0x18i64))(off_4B12208, 0x10i64);
    *v54 = &off_4B12218;
    v54[1] = &off_4B196C0;
    qword_4B12200 = v54;
    HIDWORD(qword_4B12210) = 2;
  }
  LODWORD(qword_4B12210) = 2;
  *v50 = &off_4B121F8;
  (*(off_4B121F8 + 5))();
  *(a1 + 0x568) = v50;
  if ( !*(a1 + 0x5CA) )
  {
LABEL_81:
    *(a1 + 0x504) = a3;
    v55 = *(a1 + 0x6D0);
    if ( v55 != v4 )
    {
      if ( v55 )
        (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
      if ( v4 && *v4 && (v56 = strlen(v4) + 1, (v57 = (*(*off_4B678C8 + 0x18i64))(off_4B678C8, v56)) != 0i64) )
      {
        v58 = v57;
        memmove(v57, v4, v56);
      }
      else
      {
        v58 = 0i64;
      }
      *(a1 + 0x6D0) = v58;
    }
  }
LABEL_90:
  if ( v4[strlen(v4) - 1] != 0x2F )
    return sub_10F9310(a1, v4, a3);
  sub_17A810(&v110, 0x410, "%s%s");
  v126 = 0;
  result = sub_10FA790(a1, &v110);
  if ( result )
  {
    Source = v4;
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v60, v61, v62);
    v64 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    v65 = (*(*v64 + 0x18i64))(v64, 0x4000i64);
    v66 = 0x4000;
    v67 = (*(**(a1 + 0x4E8) + 0x18i64))(*(a1 + 0x4E8), v65, 0x4000i64);
    if ( v67 >= 0x4000 )
    {
      do
      {
        v66 *= 2;
        v65 = (*(*v64 + 0x38i64))(v64, v65, v66);
        v68 = v66 - v67;
        v69 = (*(**(a1 + 0x4E8) + 0x18i64))(*(a1 + 0x4E8), &v65[v67], (v66 - v67));
        v67 += v69;
      }
      while ( v69 >= v68 );
    }
    v70 = *(a1 + 0x4E8);
    if ( v70 )
    {
      (**v70)(v70, 1i64);
      *(a1 + 0x4E8) = 0i64;
    }
    LOBYTE(v97) = 0;
    BYTE4(v97) = 0;
    v98 = 0i64;
    *v103 = 0i64;
    v102 = 0i64;
    *v101 = 0i64;
    LOBYTE(v104) = 0;
    v105 = 0x17;
    LOBYTE(Block) = 0;
    v107 = 0x117;
    v108 = 0;
    v71 = sub_18F4BC0(v101, v65, v65 + v67, &Src, 0);
    if ( (v107 & 0x80u) != 0 )
    {
      v72 = Block;
      if ( Block )
      {
        _InterlockedAdd(&dword_4B6788C, -((j__msize(Block) + 0xF) >> 4));
        _InterlockedDecrement(&dword_4B67890);
        free(v72);
      }
    }
    if ( v105 < 0 )
    {
      v73 = v104;
      if ( v104 )
      {
        _InterlockedAdd(&dword_4B6788C, -((j__msize(v104) + 0xF) >> 4));
        _InterlockedDecrement(&dword_4B67890);
        free(v73);
      }
    }
    v74 = *(&v102 + 1);
    v75 = v103[0];
    if ( *(&v102 + 1) == v103[0] )
    {
      if ( !v103[0] )
      {
LABEL_107:
        v76 = v101[0];
        if ( v101[0] )
        {
          _InterlockedAdd(&dword_4B6788C, -((j__msize(v101[0]) + 0xF) >> 4));
          _InterlockedDecrement(&dword_4B67890);
          free(v76);
        }
        (*(*v64 + 0x40i64))(v64, v65);
        if ( v71 )
        {
          LOBYTE(v77) = 1;
          v78 = sub_180EDC0(&Src, off_4B47EC0, v77);
          v79 = 0;
          v80 = sub_180EDC0(v78, "version", 0i64);
          v82 = Source;
          switch ( v80[8] )
          {
            case 1u:
            case 2u:
              v79 = *v80;
              if ( *v80 == 0x18B47 )
                goto LABEL_122;
              goto LABEL_125;
            case 3u:
              v79 = *v80;
              if ( v79 != 0x18B47 )
                goto LABEL_125;
LABEL_122:
              LOBYTE(v81) = 1;
              v85 = sub_180EDC0(&Src, off_4B47EC0, v81);
              LOBYTE(v86) = 1;
              v87 = sub_180EDC0(v85, off_4B47EB8, v86);
              switch ( v87[8] )
              {
                case 1u:
                case 2u:
                  v91 = *v87;
                  goto LABEL_135;
                case 3u:
                  v91 = *v87;
                  goto LABEL_135;
                case 5u:
                  v91 = *v87;
LABEL_135:
                  if ( !v91 )
                    goto LABEL_136;
                  goto LABEL_137;
                default:
LABEL_136:
                  LOBYTE(v89) = 1;
                  sub_180EDC0(&Src, off_4B47EB0, v89);
LABEL_137:
                  v93 = NtCurrentTeb()->ThreadLocalStoragePointer;
                  if ( !*(v93[TlsIndex] + 1i64) )
                    _dyn_tls_on_demand_init(v93, v88, v89, v90);
                  v94 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
                  v101[0] = 0i64;
                  v101[1] = v94;
                  *&v102 = 0i64;
                  sub_10F7680(v82);
                  if ( v102 )
                    v95 = v101[0];
                  else
                    v95 = &szFile;
                  sub_10F9310(a1, v95, a3);
                  if ( v101[0] )
                    (*(*v101[1] + 0x40i64))(v101[1]);
                  break;
              }
              return sub_180E1F0(&Src);
            case 5u:
              v79 = *v80;
              goto LABEL_125;
            default:
LABEL_125:
              v101[1] = "startPlayMeta";
              LODWORD(v101[0]) = 1;
              *(&v102 + 1) = v79;
              LODWORD(v102) = 2;
              v103[1] = &loc_18B43 + 4;
              LODWORD(v103[0]) = 2;
              v84 = "%s incompatible replay protocol %d (expected %d)";
              goto LABEL_126;
          }
        }
        v101[1] = "startPlayMeta";
        LODWORD(v101[0]) = 1;
        *(&v102 + 1) = 0x400i64;
        LODWORD(v102) = 2;
        v103[1] = v65;
        LODWORD(v103[0]) = 1;
        v84 = "%s can't parse json:\n%.*s";
LABEL_126:
        logmessage_fmt(0x4C504552u, v84, v101, 3);
        v92 = *(a1 + 0x670);
        if ( v92 )
        {
          (**v92)(v92, 1i64);
          *(a1 + 0x670) = 0i64;
        }
        if ( *(a1 + 0x6C8) )
          (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
        *(a1 + 0x6C8) = 0i64;
        return sub_180E1F0(&Src);
      }
    }
    else
    {
      do
      {
        if ( *(v74 + 0x2F) < 0 )
        {
          v83 = *(v74 + 0x18);
          if ( v83 )
          {
            _InterlockedAdd(&dword_4B6788C, -((j__msize(*(v74 + 0x18)) + 0xF) >> 4));
            _InterlockedDecrement(&dword_4B67890);
            free(v83);
          }
        }
        v74 += 0x38i64;
      }
      while ( v74 != v75 );
      v75 = *(&v102 + 1);
      if ( !*(&v102 + 1) )
        goto LABEL_107;
    }
    _InterlockedAdd(&dword_4B6788C, -((j__msize(v75) + 0xF) >> 4));
    _InterlockedDecrement(&dword_4B67890);
    free(v75);
    goto LABEL_107;
  }
  return result;
}
