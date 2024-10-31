double __fastcall airhud_update(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  v9 = v7;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, a2, a3, a4);
  if ( !*(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x130i64) )
    return *v6.m128_u64;
  if ( *(game + 0xCD) )
    return *v6.m128_u64;
  mUnit_ = *&mUnit;
  if ( !*&mUnit || *(*&mUnit + 0x10B0i64) )
    return *v6.m128_u64;
  mUnit__ = *&mUnit;
  if ( (dword_4B19A88 & 0x4000) != 0 )
  {
    v14 = 0;
  }
  else
  {
    v14 = 1;
    if ( !*(*&mUnit + 0x2DD8i64) )
      v14 = *(*(game + 0x440) + 0x3F4i64) != 0xC;
  }
  hud = *(game + 0x430);
  if ( !byte_4B1C820 )
    goto LABEL_15;
  v16 = (qword_4B1C514 >> 2) & 3;
  if ( v16 == 1 )
  {
    v17 = hud + 0xD4;
  }
  else
  {
    if ( !v16 )
    {
LABEL_15:
      v17 = hud + 0xD3;
      goto LABEL_18;
    }
    v17 = hud + 0xD5;
  }
LABEL_18:
  v18 = !v14;
  v19 = 0xFFFFFFFFFFFFFFFBui64;
  if ( v18 )
    v19 = (4 * (*v17 != 3)) | 0xFFFFFFFFFFFFFFFBui64;
  *a1 = v19;
  if ( dword_4AD08B0 > *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4i64) )
  {
    Init_thread_header(&dword_4AD08B0);
    if ( dword_4AD08B0 == 0xFFFFFFFF )
    {
      v6.m128_u64[0] = 0i64;
      xmmword_4AD0868 = 0i64;
      dword_4AD0878 = 0xFFFFFFFF;
      qword_4AD087C = 0i64;
      *(&qword_4AD087C + 5) = 0i64;
      qword_4AD088C = 0x3F8000003F800000i64;
      dword_4AD0894 = 0x3F800000;
      xmmword_4AD0898 = 0i64;
      qword_4AD08A8 = 0xFFFFFFFF00000000ui64;
      atexit(sub_3643B0);
      Init_thread_footer(&dword_4AD08B0);
    }
  }
  v20 = *(mUnit_ + 0x1120);
  v21 = &xmmword_4AD0868;
  if ( v20 )
  {
    v22 = *(mUnit_ + 0x13C);
    if ( *(v20 + 0x2C8) > v22 )
      v21 = (*(v20 + 0x2B8) + 0x48 * v22);
  }
  v23 = *(v21 + 0x10);
  if ( (v23 == 3 || !v23)
    && (v24 = *(game + 0x440), v25 = *(v24 + 0x3F0), v25 < *(v24 + 0x278))
    && (v26 = *(*(v24 + 0x268) + 8 * v25)) != 0
    && *(v26 + 0x28) == 5 )
  {
    LOBYTE(v5) = (*(mUnit_ + 0x1083) & 8) == 0;
  }
  else
  {
    v5 = 0;
  }
  if ( (*(mUnit_ + 0x1058) & 0x7000014) != 0
    || *(mUnit__ + 0x10A8) > 1u
    || ((game_optics = *(game + 0x498), !*(game_optics + 0x27ED)) || !*(*(game + 0x430) + 0xD5i64))
    && (LOBYTE(a3) = (*(mUnit__ + 0x1083) & 8) == 0, (a3 & ~v5) != 0)
    || byte_4B19A94
    && (!*(game_optics + 0x27EE) || !*(*(game + 0x430) + 0xD6i64))
    && !(v5 | ((*(mUnit__ + 0x1083) & 8) >> 3)) )
  {
    if ( !byte_4B19A60 )
    {
      v50 = gui_script_strings;
      if ( *(gui_script_strings + 0xB42) != 5 || *(gui_script_strings + 0x2D00) )
      {
        *(gui_script_strings + 0xB42) = 5;
        v50[0x2D00] = 0;
        gui_call_interop(v50 + 0x2CD8, 0i64, a3, a4);
        v50 = gui_script_strings;
      }
      if ( *(v50 + 0xAE0) != 5 || v50[0x2B78] )
      {
        *(v50 + 0xAE0) = 5;
        v50[0x2B78] = 0;
        gui_call_interop(v50 + 0x2B50, 0i64, a3, a4);
        v50 = gui_script_strings;
      }
      if ( *(v50 + 0xEA6) != 5 || v50[0x3A90] )
      {
        *(v50 + 0xEA6) = 5;
        v50[0x3A90] = 0;
        gui_call_interop(v50 + 0x3A68, 0i64, a3, a4);
        v50 = gui_script_strings;
      }
      if ( *(v50 + 0x974) != 5 || v50[0x25C8] )
      {
        *(v50 + 0x974) = 5;
        v50[0x25C8] = 0;
        gui_call_interop(v50 + 0x25A0, 0i64, a3, a4);
        v50 = gui_script_strings;
      }
      if ( *(v50 + 0x982) != 5 || v50[0x2600] )
      {
        *(v50 + 0x982) = 5;
        v50[0x2600] = 0;
        gui_call_interop(v50 + 0x25D8, 0i64, a3, a4);
        v50 = gui_script_strings;
      }
      if ( *(v50 + 0x990) != 5 || v50[0x2638] )
      {
        *(v50 + 0x990) = 5;
        v50[0x2638] = 0;
        gui_call_interop(v50 + 0x2610, 0i64, a3, a4);
        v50 = gui_script_strings;
      }
      if ( *(v50 + 0x9AC) != 5 || v50[0x26A8] )
      {
        *(v50 + 0x9AC) = 5;
        v50[0x26A8] = 0;
        gui_call_interop(v50 + 0x2680, 0i64, a3, a4);
        v50 = gui_script_strings;
      }
      if ( *(v50 + 0x99E) != 5 || v50[0x2670] )
      {
        *(v50 + 0x99E) = 5;
        v50[0x2670] = 0;
        gui_call_interop(v50 + 0x2648, 0i64, a3, a4);
        v50 = gui_script_strings;
      }
      if ( *(v50 + 0x9BA) != 5 || v50[0x26E0] )
      {
        *(v50 + 0x9BA) = 5;
        v50[0x26E0] = 0;
        gui_call_interop(v50 + 0x26B8, 0i64, a3, a4);
        v50 = gui_script_strings;
      }
      if ( *(v50 + 0x9C8) != 5 || v50[0x2718] )
      {
        *(v50 + 0x9C8) = 5;
        v50[0x2718] = 0;
        gui_call_interop(v50 + 0x26F0, 0i64, a3, a4);
        v50 = gui_script_strings;
      }
      if ( *(v50 + 0xB88) != 5 || v50[0x2E18] )
      {
        *(v50 + 0xB88) = 5;
        v50[0x2E18] = 0;
        gui_call_interop(v50 + 0x2DF0, 0i64, a3, a4);
        v50 = gui_script_strings;
      }
      if ( *(v50 + 0x10F2) != 5 || v50[0x43C0] )
      {
        *(v50 + 0x10F2) = 5;
        v50[0x43C0] = 0;
        gui_call_interop(v50 + 0x4398, 0i64, a3, a4);
        LODWORD(v50) = gui_script_strings;
      }
      gui_call_interop(v50 + 0x4788, 0i64, a3, a4);
      gui_call_interop(gui_script_strings + 0x4830, 0i64, v51, v52);
      byte_4B19A60 = 1;
    }
    return *v6.m128_u64;
  }
  byte_4B19A60 = 0;
  v28 = some_ballistics_thing(*(game + 0x630));
  v6.m128_u64[0] = 0xFFFFFFFFFFFFFFFFui64;
  v1021 = 0xFFFFFFFFFFFFFFFFui64;
  v1022 = 0xFFFFFFFFFFFFFFFFui64;
  v1023 = xmmword_44A0AF0;
  v1024 = 0xFFFFFFFFFFFFFFFFui64;
  v1027 = 0i64;
  v1028 = 0;
  v1025 = 0i64;
  v1026 = 0;
  v1029 = 0xFFFFFFFFFFFFFFFFui64;
  v1030 = 0xFFFFFFFFFFFFFFFFui64;
  v1031 = xmmword_44A0AF0;
  v1032 = 0xFFFFFFFFFFFFFFFFui64;
  v1035 = 0i64;
  v1036 = 0;
  v1033 = 0;
  v1034 = 0;
  v1037 = 0xFFFFFFFFFFFFFFFFui64;
  v1038 = 0;
  v1039 = 0;
  v1040 = 0xFFFFFFFFFFFFFFFFui64;
  v1041 = 0;
  v1042 = 0;
  v1043 = 0xFFFFFFFFFFFFFFFFui64;
  v1044 = 0;
  v1045 = 0xFFFFFFFFFFFFFFFFui64;
  v1046 = 0;
  v1047 = 0xFFFFFFFFFFFFFFFFui64;
  v1048 = 0;
  v1049 = 0xFFFFFFFFFFFFFFFFui64;
  v1050 = 0;
  v1051 = 0;
  v1052 = 0xFFFFFFFFFFFFFFFFui64;
  v1053 = 0;
  v1054 = 0;
  v1055 = 0xFFFFFFFFFFFFFFFFui64;
  v1056 = 0xFFFFFFFFFFFFFFFFui64;
  v1057 = 0i64;
  v1058 = 0;
  sub_B7AC40(mUnit__, &v1021);
  v1020 = 0x500;
  v1019 = 0x2D0;
  off_4B75408(&v1020, &v1019, 0i64, 0i64);
  off_4B75438(1i64, v1063);
  off_4B75438(2i64, v1062);
  air_movement = *(mUnit__ + 0x9D0);
  if ( !air_movement )
    return *v6.m128_u64;
  v977 = *(mUnit__ + 0x99C);
  v30 = *(mUnit__ + 0x9A0);
  v31 = *(mUnit__ + 0x9A4);
  v32 = *(mUnit__ + 0x9A8);
  v33 = *(mUnit__ + 0x9AC);
  v990 = *(mUnit__ + 0x9B0);
  v1009 = *(mUnit__ + 0x9B4);
  v34 = *(mUnit__ + 0x9B8);
  v35 = *(mUnit__ + 0x9BC);
  XPosition = *(mUnit__ + 0x9C0);
  YPosition = *(mUnit__ + 0x9C4);
  ZPosition = *(mUnit__ + 0x9C8);
  XPosition_ = *&XPosition;
  YPosition_ = YPosition;
  ZPosition_ = ZPosition;
  ZPosition_2 = ZPosition;
  v6.m128_u64[0] = 0i64;
  v1017 = 0i64;
  v1059 = 0i64;
  v39 = 0.0;
  v964 = 0.0;
  v40 = 0.0;
  if ( v28 )
  {
    v41 = sub_4612A0(*(mUnit__ + 0x2DD8), 2i64, &v1017);
    LOBYTE(v42) = 1;
    v964 = v42;
    if ( !v41 && !sub_4612A0(*(mUnit__ + 0x2DD8), 5i64, &v1017) )
      LODWORD(v964) = sub_4612A0(*(mUnit__ + 0x2DD8), 6i64, &v1017);
    LODWORD(v40) = sub_4612A0(*(mUnit__ + 0x2DD8), 9i64, &v1059);
    v39 = 0.0;
  }
  v43 = v28;
  v994 = v40;
  v44 = *(game + 0x440);
  v45 = *(v44 + 0x3F0);
  v46 = *(v44 + 0x3F4);
  if ( v45 < *(v44 + 0x278) )
    v39 = *(*(*(v44 + 0x268) + 8 * v45) + 0x28i64);
  v47 = v46 - 1;
  v965 = v43;
  air_movement_ = air_movement;
  v991 = v46;
  v1010 = v5;
  v1011 = v39;
  if ( (v46 - 1) < 0xC )
  {
    v48 = 0x909;
    if ( _bittest(&v48, v47) )
    {
      v49 = 1;
      LODWORD(v997) = 0;
      goto LABEL_97;
    }
  }
  if ( v46 != 0xE || LODWORD(v39) != 4 )
  {
    if ( v46 == 0xE && LODWORD(v39) == 5 )
    {
      LODWORD(v997) = 0;
      LOBYTE(v5) = 1;
      v970 = 0.0;
      v966 = 0.0;
      LODWORD(v992) = 0;
      v967 = 0.0;
      v49 = 0;
      goto LABEL_99;
    }
    v49 = 1;
    switch ( v46 )
    {
      case 2:
        LODWORD(v997) = 0;
        v970 = 0.0;
        v966 = 0.0;
        LODWORD(v992) = 0;
        LOBYTE(v47) = 1;
        v967 = *&v47;
        goto LABEL_98;
      case 0xB:
        LOBYTE(v47) = 1;
        v970 = *&v47;
        LODWORD(v997) = 0;
        v966 = 0.0;
        goto LABEL_53;
      case 0x13:
        LOBYTE(v47) = 1;
        LODWORD(v992) = v47;
        LODWORD(v997) = 0;
        v970 = 0.0;
        v966 = 0.0;
        goto LABEL_54;
    }
    LOBYTE(v47) = byte_4B19A94 != 0;
    LODWORD(v997) = v47;
LABEL_97:
    v970 = 0.0;
    v966 = 0.0;
    LODWORD(v992) = 0;
    v967 = 0.0;
    goto LABEL_98;
  }
  LODWORD(v997) = 0;
  LOBYTE(v47) = 1;
  v966 = *&v47;
  v970 = 0.0;
LABEL_53:
  LODWORD(v992) = 0;
LABEL_54:
  v967 = 0.0;
  v49 = 1;
LABEL_98:
  v5 = 0;
LABEL_99:
  v53 = v46 == 0xC || v46 == 1;
  LOBYTE(v1012) = v46 == 9;
  LOBYTE(v993) = v46 == 4;
  v54 = v46 == 4 || v46 == 9;
  v55 = sub_3476D0(mUnit__);
  v58 = (*(mUnit__ + 0x1080) & 0x8000000u) >> 0x1B;
  LOBYTE(v58) = v5 & v58;
  v59 = v5;
  if ( v49 )
  {
    v60 = v965;
    v61 = v992;
  }
  else
  {
    v60 = v965;
    v61 = v992;
    if ( (*(mUnit__ + 0x1080) & 0x8000000) == 0 )
      LOBYTE(v58) = (*(v55 + 0x40) & 0xFFFFFFFD) == 0 || *(v55 + 0x40) == 3;
  }
  LOBYTE(v4) = v54 || v53;
  v62 = gui_script_strings;
  v18 = *(gui_script_strings + 0x974) == 5;
  v1003 = a4;
  v1000 = a1;
  LODWORD(v992) = v58;
  if ( !v18 || *(gui_script_strings + 0x25C8) != v4 )
  {
    *(gui_script_strings + 0x974) = 5;
    v62[0x25C8] = v4;
    v63 = v59;
    gui_call_interop(v62 + 0x25A0, v4, v56, v57);
    v59 = v63;
    v62 = gui_script_strings;
  }
  v64 = v964;
  v65 = v997;
  v66 = LODWORD(v970);
  v67 = v1010;
  LOBYTE(v67) = v59 & (v1010 ^ 1);
  v18 = *(v62 + 0x982) == 5;
  v68 = LODWORD(v994);
  v1018 = v59;
  if ( !v18 || v62[0x2600] != v67 )
  {
    *(v62 + 0x982) = 5;
    v62[0x2600] = v67;
    gui_call_interop(v62 + 0x25D8, v67, v56, v57);
    v62 = gui_script_strings;
  }
  if ( *(v62 + 0x990) != 5 || v62[0x2638] != LOBYTE(v967) )
  {
    *(v62 + 0x990) = 5;
    v69 = LODWORD(v967);
    v62[0x2638] = LOBYTE(v967);
    gui_call_interop(v62 + 0x2610, v69, v56, v57);
    v62 = gui_script_strings;
  }
  if ( *(v62 + 0x99E) != 5 || v62[0x2670] != v61 )
  {
    *(v62 + 0x99E) = 5;
    v62[0x2670] = v61;
    gui_call_interop(v62 + 0x2648, v61, v56, v57);
    v62 = gui_script_strings;
  }
  if ( *(v62 + 0x9AC) != 5 || v62[0x26A8] != LOBYTE(v966) )
  {
    *(v62 + 0x9AC) = 5;
    v70 = LODWORD(v966);
    v62[0x26A8] = LOBYTE(v966);
    gui_call_interop(v62 + 0x2680, v70, v56, v57);
    v62 = gui_script_strings;
  }
  if ( *(v62 + 0x111C) != 5 || v62[0x4468] != v60 )
  {
    *(v62 + 0x111C) = 5;
    v62[0x4468] = v60;
    gui_call_interop(v62 + 0x4440, v60, v56, v57);
    v62 = gui_script_strings;
  }
  if ( *(v62 + 0x112A) != 5 || v62[0x44A0] != LOBYTE(v64) )
  {
    *(v62 + 0x112A) = 5;
    v62[0x44A0] = LOBYTE(v64);
    gui_call_interop(v62 + 0x4478, LODWORD(v64), v56, v57);
    v62 = gui_script_strings;
  }
  if ( *(v62 + 0x1138) != 5 || v62[0x44D8] != v68 )
  {
    *(v62 + 0x1138) = 5;
    v62[0x44D8] = v68;
    gui_call_interop(v62 + 0x44B0, v68, v56, v57);
    v62 = gui_script_strings;
  }
  if ( *(v62 + 0x9BA) != 5 || v62[0x26E0] != v66 )
  {
    *(v62 + 0x9BA) = 5;
    v62[0x26E0] = v66;
    gui_call_interop(v62 + 0x26B8, v66, v56, v57);
    v62 = gui_script_strings;
  }
  v71 = v991;
  if ( *(v62 + 0x9C8) != 5 || v62[0x2718] != v65 )
  {
    *(v62 + 0x9C8) = 5;
    v62[0x2718] = v65;
    gui_call_interop(v62 + 0x26F0, v65, v56, v57);
    v71 = v991;
  }
  if ( v71 > 0xC || (v72 = 0x1212, !_bittest(&v72, v71)) )
  {
    if ( ((v1010 | (v65 | LOBYTE(v64) | v68 | v67 | LOBYTE(v967) | LOBYTE(v966) | v61 | v66)) & 1) == 0 )
      return *v6.m128_u64;
  }
  v73 = gui_script_strings;
  v74 = game;
  v75 = *(game + 0x498);
  v76 = v75[0x27EF];
  if ( *(gui_script_strings + 0x119A) != 5 || *(gui_script_strings + 0x4660) != v76 )
  {
    *(gui_script_strings + 0x119A) = 5;
    v73[0x4660] = v76;
    gui_call_interop(v73 + 0x4638, *(*(v74 + 0x498) + 0x27EFi64), v56, v57);
    v73 = gui_script_strings;
    v74 = game;
    v75 = *(game + 0x498);
  }
  v77 = v1003;
  v78 = v1000;
  v79 = v75[0x27F0];
  if ( *(v73 + 0x11A8) != 5 || v73[0x4698] != v79 )
  {
    *(v73 + 0x11A8) = 5;
    v73[0x4698] = v79;
    gui_call_interop(v73 + 0x4670, *(*(v74 + 0x498) + 0x27F0i64), v56, v57);
    v73 = gui_script_strings;
    v74 = game;
    v75 = *(game + 0x498);
  }
  v80 = v75[0x27F1];
  if ( *(v73 + 0x11B6) != 5 || v73[0x46D0] != v80 )
  {
    *(v73 + 0x11B6) = 5;
    v73[0x46D0] = v80;
    gui_call_interop(v73 + 0x46A8, *(*(v74 + 0x498) + 0x27F1i64), v56, v57);
    v73 = gui_script_strings;
    v74 = game;
    v75 = *(game + 0x498);
  }
  v81 = v75[0x27F2];
  if ( *(v73 + 0x11C4) != 5 || v73[0x4708] != v81 )
  {
    *(v73 + 0x11C4) = 5;
    v73[0x4708] = v81;
    gui_call_interop(v73 + 0x46E0, *(*(v74 + 0x498) + 0x27F2i64), v56, v57);
    v73 = gui_script_strings;
    v74 = game;
    v75 = *(game + 0x498);
  }
  LODWORD(v82) = v75[0x27F3];
  if ( *(v73 + 0x11D2) != 5 || v73[0x4740] != v82 )
  {
    *(v73 + 0x11D2) = 5;
    v73[0x4740] = v82;
    gui_call_interop(v73 + 0x4718, *(*(v74 + 0x498) + 0x27F3i64), v56, v57);
    v73 = gui_script_strings;
    v74 = game;
    v75 = *(game + 0x498);
  }
  v83 = v75[0x27F4] != 0;
  v84 = *v78;
  LOBYTE(v84) = v83 & ((v84 & 4) >> 2);
  if ( *(v73 + 0x11E0) == 5 && v73[0x4778] == v84 )
  {
    if ( LOBYTE(v64) )
      goto LABEL_153;
LABEL_156:
    if ( !v68 )
      goto LABEL_159;
    goto LABEL_157;
  }
  *(v73 + 0x11E0) = 5;
  v73[0x4778] = v84;
  gui_call_interop(v73 + 0x4750, (*(*(v74 + 0x498) + 0x27F4i64) != 0) & ((*v78 & 4u) >> 2), v56, v57);
  if ( !LOBYTE(v64) )
    goto LABEL_156;
LABEL_153:
  sub_B8B560("updateMfdSightPosSize", v84, v56, v57, SBYTE12(v1017));
  if ( !v68 )
    goto LABEL_159;
LABEL_157:
  if ( *(mUnit__ + 0x2DD8) )
    sub_B8B560("updateIlsPosSize", v84, v56, v57, SBYTE12(v1059));
LABEL_159:
  v18 = *(*(*(mUnit__ + 0x11D0) + 0x300i64) + 0x38i64) == 0;
  v989 = v34;
  v988 = *&v35;
  if ( v18 || (*(mUnit__ + 0x1083) & 8) == 0 && !*(*(game + 0x498) + 0x27F1i64) || byte_4AD1088 )
  {
    v85 = gui_script_strings;
    if ( *(gui_script_strings + 0xB42) != 5 || *(gui_script_strings + 0x2D00) )
    {
      *(gui_script_strings + 0xB42) = 5;
      v85[0x2D00] = 0;
      gui_call_interop(v85 + 0x2CD8, 0i64, v56, v57);
    }
    goto LABEL_252;
  }
  v971 = 0.0;
  if ( !sub_425A90(mUnit__, 3, &v971, Str, 0) )
    goto LABEL_252;
  v86 = *(game + 0x440);
  v18 = *(v86 + 0x2770) == 0;
  v982 = v30;
  v968 = v32;
  v969 = *&XPosition;
  *&v1013 = YPosition;
  v87 = !v18 && *(v86 + 0xA8D) != 0;
  v88 = *(*(game + 0x430) + 0x2C0i64);
  if ( v88 > 0 )
    v89 = v88;
  else
    v89 = dword_4492C80;
  v90 = ((*(mUnit__ + 0x9A8) * *&Str[4]) + (*(mUnit__ + 0x99C) * *Str)) + (*(mUnit__ + 0x9B4) * *&Str[8]);
  v91 = ((*(mUnit__ + 0x9AC) * *&Str[4]) + (*(mUnit__ + 0x9A0) * *Str)) + (*(mUnit__ + 0x9B8) * *&Str[8]);
  v92 = ((*&Str[4] * *(mUnit__ + 0x9B0)) + (*Str * *(mUnit__ + 0x9A4))) + (*&Str[8] * *(mUnit__ + 0x9BC));
  if ( v87 )
  {
    v964 = v31;
    v93 = *(v86 + 0x2774);
    v94 = *(v86 + 0x2778);
    v95 = *(v86 + 0x277C);
    v96 = fsqrt((v95 * v95) + ((v94 * v94) + (v93 * v93)));
    v97 = 0.0;
    v98 = 0.0;
    if ( v96 > *&epsilon_unk )
      v98 = Y / v96;
    v99 = v95 * v98;
    v100 = v94 * v98;
    v101 = v93 * v98;
    v102 = fsqrt((v92 * v92) + ((v91 * v91) + (v90 * v90)));
    if ( v102 > *&epsilon_unk )
      v97 = Y / v102;
    v103 = v97 * v92;
    v104 = v97 * v91;
    v105 = v97 * v90;
    v106 = (v99 * v103) + ((v100 * v104) + (v101 * v105));
    v1001 = v33.m128_f32[0];
    v966 = v89;
    if ( v106 >= *&dword_44A4A68 )
    {
      v117 = (v100 * v103) - (v99 * v104);
      v118 = (v99 * v105) - (v103 * v101);
      v119 = (v101 * v104) - (v100 * v105);
      v120 = fsqrt((v106 + v106) + dword_44801E0);
      v121 = 0.0;
      if ( v120 > *&epsilon_unk )
        v121 = Y / v120;
      v122 = v120 * *&screenScaleFactor;
      v110 = v118 * v121;
      v108 = v117 * v121;
      v111 = v119 * v121;
    }
    else
    {
      if ( COERCE_FLOAT(FABSF_MASK & LODWORD(v99)) <= *&qword_44A4A70 )
      {
        v124 = fsqrt((v100 * v100) + (v101 * v101));
        v111 = 0.0;
        v125 = 0.0;
        if ( v124 > *&epsilon_unk )
          v125 = Y / v124;
        v108 = COERCE_FLOAT(LODWORD(v100) ^ SIGN_BIT_MASK) * v125;
        v110 = v101 * v125;
      }
      else
      {
        v107 = fsqrt((v99 * v99) + (v100 * v100));
        v108 = 0.0;
        v109 = 0.0;
        if ( v107 > *&epsilon_unk )
          v109 = Y / v107;
        v110 = COERCE_FLOAT(LODWORD(v99) ^ SIGN_BIT_MASK) * v109;
        v111 = v100 * v109;
      }
      v122 = 0.0;
    }
    v126 = (v111 + v111) * v108;
    v127 = (v122 + v122) * v110;
    v128 = (v111 + v111) * v110;
    v129 = v122 * (v108 + v108);
    v130 = (v111 + v111) * v122;
    v131 = ((v122 * v122) + (v122 * v122)) + *&dword_44801E8;
    v132 = (((((v111 * v111) + (v111 * v111)) + v131) * v92) + ((v126 - v127) * v90)) + ((v129 + v128) * v91);
    v133 = (v108 + v108) * v110;
    v134 = (((v128 - v129) * v92) + ((v130 + v133) * v90)) + ((((v110 * v110) + (v110 * v110)) + v131) * v91);
    v135 = (((v127 + v126) * v92) + ((v133 - v130) * v91)) + ((((v108 * v108) + (v108 * v108)) + v131) * v90);
    v136 = fsqrt((v132 * v132) + ((v134 * v134) + (v135 * v135)));
    v137 = 0.0;
    if ( v136 > *&epsilon_unk )
      v137 = Y / v136;
    v32 = v968;
    v114 = LODWORD(v1001);
    v35 = LODWORD(v988);
    v138 = v137 * v966;
    v139 = *(v86 + 0xAE8);
    v140 = v132 * v138;
    v141 = v134 * v138;
    v142 = v138 * v135;
    v31 = v964;
    v143 = (((v139 * v964) + ZPosition_) + ((*(v86 + 0xAF0) * v988) + (*(v86 + 0xAEC) * v990))) + v140;
    v30 = v982;
    YPosition = *&v1013;
    v144 = (((v139 * v982) + *&v1013) + ((*(v86 + 0xAF0) * v989) + (*(v86 + 0xAEC) * v1001))) + v141;
    *&v974 = (((v139 * v977) + v969) + ((*(v86 + 0xAF0) * v1009) + (*(v86 + 0xAEC) * v968))) + v142;
    *(&v974 + 1) = v144;
    *&v975 = v143;
    v115 = gui_script_strings;
    if ( *(gui_script_strings + 0xB50) == 1 && *(gui_script_strings + 0xB4E) == 2 )
    {
      v116 = Y;
      *&XPosition = v969;
      goto LABEL_217;
    }
    *(gui_script_strings + 0xB50) = 1;
    v115[0xB4E] = 2;
    v116 = Y;
    v123 = 2i64;
    *&XPosition = v969;
LABEL_216:
    sub_B831C0(v115 + 0x2D10, v123, v56, v57);
    goto LABEL_217;
  }
  v112 = *(mUnit__ + 0x9C4);
  v113 = *(mUnit__ + 0x9C8);
  if ( !*(v86 + 0x1DDC) || !*(v86 + 0xA8D) )
  {
    v114 = v33;
    *&v974 = (v90 * v89) + *(mUnit__ + 0x9C0);
    *(&v974 + 1) = (v91 * v89) + v112;
    *&v975 = (v92 * v89) + v113;
    v116 = *(a2 + 0x304) * dword_44A022C;
    v115 = gui_script_strings;
    if ( *(gui_script_strings + 0xB50) == 1 && !*(gui_script_strings + 0xB4E) )
      goto LABEL_199;
    *(gui_script_strings + 0xB50) = 1;
    v115[0xB4E] = 0;
    v123 = 0i64;
LABEL_215:
    v30 = v982;
    v32 = v968;
    *&XPosition = v969;
    YPosition = *&v1013;
    goto LABEL_216;
  }
  v114 = v33;
  LODWORD(v975) = *(v86 + 0x1DD8);
  v974 = *(v86 + 0x1DD0);
  v115 = gui_script_strings;
  if ( *(gui_script_strings + 0xB50) != 1 || *(gui_script_strings + 0xB4E) != 1 )
  {
    *(gui_script_strings + 0xB50) = 1;
    v115[0xB4E] = 1;
    v116 = Y;
    v123 = 1i64;
    goto LABEL_215;
  }
  v116 = Y;
LABEL_199:
  v30 = v982;
  v32 = v968;
  *&XPosition = v969;
  YPosition = *&v1013;
LABEL_217:
  *&v981 = 0i64;
  if ( ((*(mUnit__ + 0x2DD8) != 0i64) & v60) != 0 )
  {
    sub_B9FD30(a2);
    sub_B971C0(a2, &v974, &v981, 0i64);
    v146 = v145;
    sub_B9FD30(a2);
  }
  else
  {
    sub_B971C0(a2, &v974, &v981, 1i64);
    v146 = v147;
  }
  v68 = (*v78 >> 1) & v146;
  v148 = 1;
  if ( !v1041 )
    v148 = *(*(game + 0x440) + 0xA8Ei64) == 0;
  LODWORD(v82) = v148 & v68 & (sub_4253C0(mUnit__) != 0);
  LOBYTE(v68) = LOBYTE(v994);
  if ( LOBYTE(v994) )
  {
    LOBYTE(v60) = v965;
    if ( v82 )
    {
      LODWORD(v82) = sub_461D10(*(mUnit__ + 0x2DD8), a2, &v981, &v983);
      *&v981 = v983;
    }
  }
  else
  {
    LOBYTE(v60) = v965;
  }
  v150 = gui_script_strings;
  if ( *(gui_script_strings + 0xB42) != 5 || *(gui_script_strings + 0x2D00) != v82 )
  {
    *(gui_script_strings + 0xB42) = 5;
    v150[0x2D00] = v82;
    gui_call_interop(v150 + 0x2CD8, v82, v56, v57);
  }
  if ( v82 )
  {
    v151 = gui_script_strings;
    v152 = v981;
    if ( *(gui_script_strings + 0xB26) != 3 || *(gui_script_strings + 0xB24) != *&v981 )
    {
      *(gui_script_strings + 0xB26) = 3;
      *(v151 + 0xB24) = v152;
      gui_call_interop_(v151 + 0x2C68, v149, v56, v57);
      v151 = gui_script_strings;
    }
    v153 = DWORD1(v981);
    if ( *(v151 + 0xB34) != 3 || v151[0xB32] != *(&v981 + 1) )
    {
      *(v151 + 0xB34) = 3;
      *(v151 + 0xB32) = v153;
      gui_call_interop_(v151 + 0x2CA0, v149, v56, v57);
      v151 = gui_script_strings;
    }
    if ( *(v151 + 0xB5E) != 3 || v151[0xB5C] != v116 )
    {
      *(v151 + 0xB5E) = 3;
      v151[0xB5C] = v116;
      gui_call_interop_(v151 + 0x2D48, v149, v56, v57);
      v151 = gui_script_strings;
    }
    v154 = *(game + 0x498);
    v155 = v154[0x9FF];
    if ( *(v151 + 0xBDC) != 3 || v151[0xBDA] != v155 )
    {
      *(v151 + 0xBDC) = 3;
      v151[0xBDA] = v155;
      gui_call_interop_(v151 + 0x2F40, v154, v56, v57);
      v151 = gui_script_strings;
      v154 = *(game + 0x498);
    }
    v156 = v154[0xA04];
    if ( *(v151 + 0xC14) != 3 || v151[0xC12] != v156 )
    {
      *(v151 + 0xC14) = 3;
      v151[0xC12] = v156;
      gui_call_interop_(v151 + 0x3020, v154, v56, v57);
      v151 = gui_script_strings;
      v154 = *(game + 0x498);
    }
    v157 = v154[0xA08];
    if ( *(v151 + 0xC4C) != 3 || v151[0xC4A] != v157 )
    {
      *(v151 + 0xC4C) = 3;
      v151[0xC4A] = v157;
      gui_call_interop_(v151 + 0x3100, v154, v56, v57);
      v151 = gui_script_strings;
      v154 = *(game + 0x498);
    }
    v158 = v154[0xA0C];
    if ( *(v151 + 0xC84) != 3 || v151[0xC82] != v158 )
    {
      *(v151 + 0xC84) = 3;
      v151[0xC82] = v158;
      gui_call_interop_(v151 + 0x31E0, v154, v56, v57);
    }
  }
  v33 = v114;
  v34 = v989;
LABEL_252:
  if ( v60 )
  {
    v159 = *(mUnit__ + 0x2DD8);
    if ( v159 && sub_462330(v159, Str, 0i64) )
    {
      v974 = 0i64;
      sub_B9FD30(a2);
      sub_B971C0(a2, Str, &v974, 0i64);
      LODWORD(v82) = v160;
      sub_B9FD30(a2);
      if ( (v82 & v68) == 1 )
      {
        LODWORD(v82) = sub_461D10(*(mUnit__ + 0x2DD8), a2, &v974, &v981);
        v974 = v981;
      }
      v164 = gui_script_strings;
      if ( *(gui_script_strings + 0xB6C) != 5 || *(gui_script_strings + 0x2DA8) != v82 )
      {
        *(gui_script_strings + 0xB6C) = 5;
        v164[0x2DA8] = v82;
        gui_call_interop(v164 + 0x2D80, v82, v162, v163);
      }
      if ( v82 )
      {
        v165 = gui_script_strings;
        v166 = v974;
        if ( *(gui_script_strings + 0x1D32) != 3 || *(gui_script_strings + 0x1D30) != *&v974 )
        {
          *(gui_script_strings + 0x1D32) = 3;
          *(v165 + 0x1D30) = v166;
          gui_call_interop_(v165 + 0x7498, v161, v162, v163);
          v165 = gui_script_strings;
        }
        v167 = *(&v974 + 1);
LABEL_292:
        if ( *(v165 + 0x1D40) != 3 || v165[0x1D3E] != v167 )
        {
          *(v165 + 0x1D40) = 3;
          v165[0x1D3E] = v167;
          gui_call_interop_(v165 + 0x74D0, v161, v162, v163);
        }
        goto LABEL_295;
      }
      goto LABEL_295;
    }
LABEL_272:
    v172 = gui_script_strings;
    if ( *(gui_script_strings + 0xB6C) != 5 || *(gui_script_strings + 0x2DA8) )
    {
      *(gui_script_strings + 0xB6C) = 5;
      v172[0x2DA8] = 0;
      gui_call_interop(v172 + 0x2D80, 0i64, v56, v57);
    }
    goto LABEL_295;
  }
  v168 = *(game + 0x440);
  if ( !*(v168 + 0x97D) )
    goto LABEL_272;
  *&v981 = 0i64;
  LODWORD(v975) = *(v168 + 0x98C);
  v974 = *(v168 + 0x984);
  if ( !*(v168 + 0x980) || !*(mUnit__ + 0x1238) )
    goto LABEL_280;
  v169 = 0i64;
  while ( 1 )
  {
    v170 = *(*(mUnit__ + 0x1228) + 8 * v169);
    if ( (*(*v170 + 0x98i64))(v170, mUnit__ + 0x1488, v56, Str) )
      break;
    if ( ++v169 >= *(mUnit__ + 0x1238) )
      goto LABEL_280;
  }
  DWORD2(v1008) = v169;
  if ( Str[0xC] && BYTE12(v1005) )
  {
    *&v974 = (*&v1006 * *&v1005) + *Str;
    *(&v974 + 1) = (*(&v1005 + 1) * *&v1006) + *&Str[4];
    *&v975 = (*(&v1005 + 2) * *&v1006) + *&Str[8];
    v173 = gui_script_strings;
    if ( *(gui_script_strings + 0x1D08) != 5 || *(gui_script_strings + 0x7418) != 1 )
    {
      *(gui_script_strings + 0x1D08) = 5;
      v173[0x7418] = 1;
      LOBYTE(v171) = 1;
LABEL_283:
      gui_call_interop(v173 + 0x73F0, v171, v56, v57);
    }
  }
  else
  {
LABEL_280:
    v173 = gui_script_strings;
    if ( *(gui_script_strings + 0x1D08) != 5 || *(gui_script_strings + 0x7418) )
    {
      *(gui_script_strings + 0x1D08) = 5;
      v173[0x7418] = 0;
      v171 = 0i64;
      goto LABEL_283;
    }
  }
  sub_B971C0(a2, &v974, &v981, 0i64);
  LODWORD(v82) = v174;
  v175 = gui_script_strings;
  if ( *(gui_script_strings + 0xB6C) != 5 || *(gui_script_strings + 0x2DA8) != v174 )
  {
    *(gui_script_strings + 0xB6C) = 5;
    v175[0x2DA8] = v174;
    gui_call_interop(v175 + 0x2D80, v174, v162, v163);
  }
  if ( v82 )
  {
    v165 = gui_script_strings;
    v176 = v981;
    if ( *(gui_script_strings + 0x1D32) != 3 || *(gui_script_strings + 0x1D30) != *&v981 )
    {
      *(gui_script_strings + 0x1D32) = 3;
      *(v165 + 0x1D30) = v176;
      gui_call_interop_(v165 + 0x7498, v161, v162, v163);
      v165 = gui_script_strings;
    }
    v167 = *(&v981 + 1);
    goto LABEL_292;
  }
LABEL_295:
  v980 = 0;
  v6 = DWORD2(v1017);
  unknown_ballistics_calculations(v77, a2, v992, &v980, *(&v1017 + 2));
  ballistics = *(game + 0x440);
  if ( *(ballistics + 0x2BB0) || (*(mUnit__ + 0x1083) & 8) == 0 )
  {
    v180 = gui_script_strings;
    if ( *(gui_script_strings + 0xEA6) != 5 || *(gui_script_strings + 0x3A90) )
    {
      *(gui_script_strings + 0xEA6) = 5;
      v180[0x3A90] = 0;
      gui_call_interop(v180 + 0x3A68, 0i64, v177, v178);
      v180 = gui_script_strings;
    }
    if ( *(v180 + 0xEB4) != 5 || v180[0x3AC8] )
    {
      *(v180 + 0xEB4) = 5;
      v180[0x3AC8] = 0;
      gui_call_interop(v180 + 0x3AA0, 0i64, v177, v178);
    }
    goto LABEL_303;
  }
  v974 = 0i64;
  v217 = 1;
  if ( v991 != 1 && v991 != 4 && (v991 != 0xE || LODWORD(v1011) != 4 && !*(ballistics + 0x24DC)) )
    v217 = LOBYTE(v1012);
  if ( *(*(*(mUnit__ + 0x11D0) + 0x300i64) + 0x118i64) )
  {
    v218 = (*v78 >> 3) & v217;
    v219 = v218 & (sub_3E49A0(mUnit__) != 0);
    if ( (*(mUnit__ + 0x1083) & 8) == 0 )
      goto LABEL_418;
  }
  else
  {
    LOBYTE(v219) = 0;
  }
  v297 = 1;
  if ( !v1039 )
    v297 = *(*(game + 0x440) + 0xA8Ei64) == 0;
  v219 = v297 & v219;
LABEL_418:
  v298 = v77;
  v299 = v219 != 0;
  v300 = *(ballistics_A68_qword + 0x600);
  *Str = *(v300 + 0x4D3C);
  *&Str[8] = *(v300 + 0x4D44);
  *v6.m128_u64 = sub_B971C0(a2, Str, &v974, 1i64);
  v303 = v302;
  LOBYTE(v303) = v299 & v302;
  v304 = gui_script_strings;
  if ( *(gui_script_strings + 0xEA6) != 5 || *(gui_script_strings + 0x3A90) != v303 )
  {
    *(gui_script_strings + 0xEA6) = 5;
    v304[0x3A90] = v303;
    gui_call_interop(v304 + 0x3A68, v303, v177, v178);
  }
  if ( *(mUnit__ + 0x2DD8) )
    LOBYTE(v301) = *(*(game + 0x440) + 0x97Di64) != 0;
  else
    v301 = 0i64;
  v305 = *(mUnit__ + 0x11D0);
  v306 = *(v305 + 0x1A0);
  if ( !*(v305 + 0x1A0) )
    goto LABEL_973;
  v178 = *(v305 + 0x190);
  if ( v306 < 8 )
  {
    v307 = 0i64;
    goto LABEL_969;
  }
  v177 = v301;
  if ( v306 < 0x20 )
  {
    v307 = 0i64;
    goto LABEL_964;
  }
  *&v1013 = YPosition;
  v969 = *&XPosition;
  v968 = v32;
  v6 = v33;
  v307 = v306 & 0xFFFFFFE0;
  v597 = _mm_cvtsi32_si128(v301);
  v598 = _mm_shuffle_epi8(v597, 0i64);
  v599 = v178 + 0x5175;
  v600 = 0i64;
  si128 = _mm_load_si128(&xmmword_449ACE0);
  v602 = v598;
  do
  {
    v598 = _mm_blendv_epi8(
             si128,
             v598,
             _mm_cmpeq_epi8(
               _mm_insert_epi8(
                 _mm_insert_epi8(
                   _mm_insert_epi8(
                     _mm_insert_epi8(
                       _mm_insert_epi8(
                         _mm_insert_epi8(
                           _mm_insert_epi8(
                             _mm_insert_epi8(
                               _mm_insert_epi8(
                                 _mm_insert_epi8(
                                   _mm_insert_epi8(
                                     _mm_insert_epi8(
                                       _mm_insert_epi8(
                                         _mm_insert_epi8(
                                           _mm_insert_epi8(
                                             _mm_cvtsi32_si128(*(v599 + v600 - 0x4F70)),
                                             *(v599 + v600 - 0x4CE0),
                                             1),
                                           *(v599 + v600 - 0x4A50),
                                           2),
                                         *(v599 + v600 - 0x47C0),
                                         3),
                                       *(v599 + v600 - 0x4530),
                                       4),
                                     *(v599 + v600 - 0x42A0),
                                     5),
                                   *(v599 + v600 - 0x4010),
                                   6),
                                 *(v599 + v600 - 0x3D80),
                                 7),
                               *(v599 + v600 - 0x3AF0),
                               8),
                             *(v599 + v600 - 0x3860),
                             9),
                           *(v599 + v600 - 0x35D0),
                           0xA),
                         *(v599 + v600 - 0x3340),
                         0xB),
                       *(v599 + v600 - 0x30B0),
                       0xC),
                     *(v599 + v600 - 0x2E20),
                     0xD),
                   *(v599 + v600 - 0x2B90),
                   0xE),
                 *(v599 + v600 - 0x2900),
                 0xF),
               0i64));
    v602 = _mm_blendv_epi8(
             si128,
             v602,
             _mm_cmpeq_epi8(
               _mm_insert_epi8(
                 _mm_insert_epi8(
                   _mm_insert_epi8(
                     _mm_insert_epi8(
                       _mm_insert_epi8(
                         _mm_insert_epi8(
                           _mm_insert_epi8(
                             _mm_insert_epi8(
                               _mm_insert_epi8(
                                 _mm_insert_epi8(
                                   _mm_insert_epi8(
                                     _mm_insert_epi8(
                                       _mm_insert_epi8(
                                         _mm_insert_epi8(
                                           _mm_insert_epi8(
                                             _mm_cvtsi32_si128(*(v599 + v600 - 0x2670)),
                                             *(v599 + v600 - 0x23E0),
                                             1),
                                           *(v599 + v600 - 0x2150),
                                           2),
                                         *(v599 + v600 - 0x1EC0),
                                         3),
                                       *(v599 + v600 - 0x1C30),
                                       4),
                                     *(v599 + v600 - 0x19A0),
                                     5),
                                   *(v599 + v600 - 0x1710),
                                   6),
                                 *(v599 + v600 - 0x1480),
                                 7),
                               *(v599 + v600 - 0x11F0),
                               8),
                             *(v599 + v600 - 0xF60),
                             9),
                           *(v599 + v600 - 0xCD0),
                           0xA),
                         *(v599 + v600 - 0xA40),
                         0xB),
                       *(v599 + v600 - 0x7B0),
                       0xC),
                     *(v599 + v600 - 0x520),
                     0xD),
                   *(v599 + v600 - 0x290),
                   0xE),
                 *(v599 + v600),
                 0xF),
               0i64));
    v600 += 0x5200i64;
  }
  while ( 0x5200 * (v306 >> 5) != v600 );
  v603 = _mm_shuffle_epi8(v597, 0i64);
  v604 = _mm_sub_epi8(_mm_blendv_epi8(v598, v602, _mm_cmpeq_epi8(v598, v603)), v603);
  v301 = 1i64;
  if ( _mm_testz_si128(v604, v604) )
    v301 = v177;
  if ( v307 != v306 )
  {
    v298 = v1003;
    v78 = v1000;
    v32 = v968;
    *&XPosition = v969;
    YPosition = *&v1013;
    if ( (v306 & 0x18) == 0 )
    {
LABEL_969:
      v751 = v306 - v307;
      v752 = (0x290 * v307 + v178 + 0x205);
      LODWORD(v82) = 1;
      do
      {
        v301 = v301;
        if ( *v752 )
          v301 = 1i64;
        v752 += 0x290;
        --v751;
      }
      while ( v751 );
      goto LABEL_973;
    }
LABEL_964:
    v745 = v307;
    v307 = v306 & 0xFFFFFFF8;
    v746 = _mm_cvtsi32_si128(v301);
    v747 = _mm_shufflelo_epi16(_mm_unpacklo_epi8(v746, v746), 0);
    v748 = (0x290 * v745 + v178 + 0x13F5);
    v82 = (v745 - v307);
    v749 = _mm_load_si128(&xmmword_44CB6F0);
    do
    {
      v747 = _mm_blendv_epi8(
               v749,
               v747,
               _mm_cmpeq_epi8(
                 _mm_insert_epi8(
                   _mm_insert_epi8(
                     _mm_insert_epi8(
                       _mm_insert_epi8(
                         _mm_insert_epi8(
                           _mm_insert_epi8(
                             _mm_insert_epi8(_mm_cvtsi32_si128(v748[0xFFFFEE10]), v748[0xFFFFF0A0], 1),
                             v748[0xFFFFF330],
                             2),
                           v748[0xFFFFF5C0],
                           3),
                         v748[0xFFFFF850],
                         4),
                       v748[0xFFFFFAE0],
                       5),
                     v748[0xFFFFFD70],
                     6),
                   *v748,
                   7),
                 0i64));
      v748 += 0x1480;
      v82 += 2;
    }
    while ( v82 );
    v750 = _mm_cvtsi32_si128(v177);
    v6 = _mm_shufflelo_epi16(_mm_unpacklo_epi8(v750, v750), 0);
    v301 = 1i64;
    if ( v747.m128i_i64[0] == v6.m128_u64[0] )
      v301 = v177;
    if ( v307 == v306 )
      goto LABEL_973;
    goto LABEL_969;
  }
  v298 = v1003;
  v78 = v1000;
  v32 = v968;
  *&XPosition = v969;
  YPosition = *&v1013;
LABEL_973:
  v753 = gui_script_strings;
  LOBYTE(v301) = v301 & 1;
  if ( *(gui_script_strings + 0xEB4) != 5 || *(gui_script_strings + 0x3AC8) != v301 )
  {
    *(gui_script_strings + 0xEB4) = 5;
    v753[0x3AC8] = v301;
    gui_call_interop(v753 + 0x3AA0, v301, v177, v178);
    v753 = gui_script_strings;
  }
  v754 = *(*(game + 0x440) + 0x24DCi64);
  if ( *(v753 + 0xEC2) != 1 || *(v753 + 0xEC0) != v754 )
  {
    *(v753 + 0xEC2) = 1;
    *(v753 + 0xEC0) = v754;
    sub_B831C0(v753 + 0x3AD8, v754, v177, v178);
  }
  v18 = v303 == 0;
  v77 = v298;
  if ( !v18 )
  {
    v968 = v32;
    v982 = v30;
    v755 = YPosition;
    v756 = XPosition;
    v757 = v33;
    v758 = v31;
    v759 = v757;
    v760 = *(v78 + 0x1C);
    v761 = *(v78 + 0x1D);
    v762 = *(&v974 + 1) - v761;
    v763 = *&v974 - v760;
    v757.m128_f32[0] = expf(v9 * *&dword_44A0348);
    v767 = (v762 * (Y - v757.m128_f32[0])) + v761;
    v768 = ((Y - v757.m128_f32[0]) * v763) + v760;
    *(v78 + 0x1C) = v768;
    *(v78 + 0x1D) = v767;
    v769 = gui_script_strings;
    if ( *(gui_script_strings + 0xE8A) != 3 || *(gui_script_strings + 0xE88) != v768 )
    {
      *(gui_script_strings + 0xE8A) = 3;
      v769[0xE88] = v768;
      gui_call_interop_(v769 + 0x39F8, v764, v765, v766);
      v769 = gui_script_strings;
      v767 = *(v78 + 0x1D);
    }
    v31 = v758;
    XPosition = v756;
    if ( *(v769 + 0xE98) != 3 || v769[0xE96] != v767 )
    {
      *(v769 + 0xE98) = 3;
      v769[0xE96] = v767;
      gui_call_interop_(v769 + 0x3A30, v764, v765, v766);
      v769 = gui_script_strings;
    }
    v33 = v759;
    YPosition = v755;
    v32 = v968;
    v770 = *(game + 0x498);
    v771 = *(v770 + 0x2828);
    v34 = v989;
    v30 = v982;
    if ( *(v769 + 0xC68) != 3 || v769[0xC66] != v771 )
    {
      *(v769 + 0xC68) = 3;
      v769[0xC66] = v771;
      gui_call_interop_(v769 + 0x3170, v770, v765, v766);
      v769 = gui_script_strings;
      v770 = *(game + 0x498);
    }
    v6 = *(v770 + 0x2804);
    v35 = LODWORD(v988);
    if ( *(v769 + 0xBEA) != 3 || v769[0xBE8] != v6.m128_f32[0] )
    {
      *(v769 + 0xBEA) = 3;
      v769[0xBE8] = v6.m128_f32[0];
      gui_call_interop_(v769 + 0x2F78, v770, v765, v766);
    }
    v772 = sub_3E49A0(mUnit__);
    if ( v772 )
    {
      v82 = v772;
      if ( (*(*v772 + 0x108i64))(v772) )
      {
        v82 += 0x128;
        v6.m128_f32[0] = sub_1707580(v82, v773) * *&dword_4487F04;
        v774 = _mm_or_ps(_mm_and_ps(SIGN_BIT_MASK, v6), xmmword_44C0110);
        v774.m128_f32[0] = v774.m128_f32[0] + v6.m128_f32[0];
        v6 = _mm_round_ss(0i64, v774, 0xB);
        v775 = v6.m128_f32[0];
        v776 = gui_script_strings;
        if ( *(gui_script_strings + 0xAD2) != 1 || *(gui_script_strings + 0xAD0) != v775 )
        {
          *(gui_script_strings + 0xAD2) = 1;
          v776[0xAD0] = v775;
          sub_B831C0(v776 + 0x2B18, v775, v177, v178);
        }
      }
    }
  }
LABEL_303:
  v181 = *(mUnit__ + 0x11D0);
  v182 = *(v181 + 0x2CC);
  if ( (*(mUnit__ + 0x1083) & 8) != 0 )
  {
    if ( v182 == 3 )
    {
LABEL_308:
      v184 = gui_script_strings;
      v185 = v991;
      if ( *(gui_script_strings + 0x92E) == 5 && !*(gui_script_strings + 0x24B0) )
        goto LABEL_391;
      *(gui_script_strings + 0x92E) = 5;
      v184[0x24B0] = 0;
      gui_call_interop(v184 + 0x2488, 0i64, v177, v178);
      goto LABEL_390;
    }
    v183 = game;
  }
  else
  {
    v183 = game;
    if ( !*(*(game + 0x498) + 0x27F2i64) || v182 == 3 )
      goto LABEL_308;
  }
  v186 = v33;
  v187 = *(*(v183 + 0x440) + 0x2A50i64);
  v974 = 0i64;
  v188 = *(v181 + 0x268);
  v6 = sub_FE7160(cur_hud_crosshair);
  if ( (*(mUnit__ + 0x1083) & 8) == 0 )
  {
    v192 = fminf(v6.m128_f32[0], Y);
    v193 = gui_script_strings;
    if ( *(gui_script_strings + 0x94A) != 3 || *(gui_script_strings + 0x948) != v192 )
    {
      *(gui_script_strings + 0x94A) = 3;
      v193[0x948] = v192;
      gui_call_interop_(v193 + 0x24F8, v189, v190, v191);
    }
  }
  v194 = v991;
  if ( v187 )
  {
    v195 = *(game + 0x440);
    v196 = *(v195 + 0x2A60);
    v197 = *(v195 + 0x2A64);
    v198 = *(v195 + 0x2A68);
    v199 = fsqrt((v198 * v198) + ((v197 * v197) + (v196 * v196)));
    v200 = 0.0;
    v201 = 0.0;
    v202 = LOBYTE(v993);
    if ( v199 > *&epsilon_unk )
      v201 = Y / v199;
    v203 = v198 * v201;
    v204 = v197 * v201;
    v205 = v196 * v201;
    v206 = fsqrt((v31 * v31) + ((v30 * v30) + (v977 * v977)));
    if ( v206 > *&epsilon_unk )
      v200 = Y / v206;
    v207 = v200 * v31;
    v208 = v200 * v30;
    v209 = v200 * v977;
    v210 = (v203 * v207) + ((v204 * v208) + (v205 * v209));
    v969 = *&XPosition;
    *&v1013 = YPosition;
    if ( v210 >= *&dword_44A4A68 )
    {
      v211 = v31;
      v225 = (v204 * v207) - (v203 * v208);
      v226 = (v203 * v209) - (v207 * v205);
      v227 = (v205 * v208) - (v204 * v209);
      v228 = fsqrt((v210 + v210) + dword_44801E0);
      v229 = 0.0;
      if ( v228 > *&epsilon_unk )
        v229 = Y / v228;
      v230 = v228 * *&screenScaleFactor;
      v215 = v226 * v229;
      v213 = v225 * v229;
      v216 = v227 * v229;
    }
    else
    {
      v211 = v31;
      if ( COERCE_FLOAT(FABSF_MASK & LODWORD(v203)) <= *&qword_44A4A70 )
      {
        v232 = fsqrt((v204 * v204) + (v205 * v205));
        v216 = 0.0;
        v233 = 0.0;
        if ( v232 > *&epsilon_unk )
          v233 = Y / v232;
        v213 = COERCE_FLOAT(LODWORD(v204) ^ SIGN_BIT_MASK) * v233;
        v215 = v205 * v233;
      }
      else
      {
        v212 = fsqrt((v203 * v203) + (v204 * v204));
        v213 = 0.0;
        v214 = 0.0;
        if ( v212 > *&epsilon_unk )
          v214 = Y / v212;
        v215 = COERCE_FLOAT(LODWORD(v203) ^ SIGN_BIT_MASK) * v214;
        v216 = v204 * v214;
      }
      v230 = 0.0;
    }
    v234 = (v216 + v216) * v213;
    v235 = (v230 + v230) * v215;
    v236 = (v216 + v216) * v215;
    v237 = v230 * (v213 + v213);
    v238 = (v216 + v216) * v230;
    v239 = ((v230 * v230) + (v230 * v230)) + *&dword_44801E8;
    v240 = (((((v216 * v216) + (v216 * v216)) + v239) * v211) + ((v234 - v235) * v977)) + ((v237 + v236) * v30);
    v241 = (v213 + v213) * v215;
    v242 = (((v236 - v237) * v211) + ((v238 + v241) * v977)) + ((((v215 * v215) + (v215 * v215)) + v239) * v30);
    v243 = (((v235 + v234) * v211) + ((v241 - v238) * v30)) + ((((v213 * v213) + (v213 * v213)) + v239) * v977);
    v244 = fsqrt((v240 * v240) + ((v242 * v242) + (v243 * v243)));
    v6 = *(v195 + 0xAF4);
    v245 = *(v195 + 0xAF8);
    v246 = v977 * v6.m128_f32[0];
    v968 = v32 * v245;
    v247 = *(v195 + 0xAFC);
    v248 = v247 * v1009;
    v249 = v30 * v6.m128_f32[0];
    v990 = v990 * v245;
    v250 = v186;
    v251 = v245 * v186.m128_f32[0];
    v34 = v989;
    v252 = v247 * v989;
    v6.m128_f32[0] = v6.m128_f32[0] * v211;
    v35 = LODWORD(v988);
    v253 = v247 * v988;
    v254 = 0.0;
    if ( v244 > *&epsilon_unk )
      v254 = *&dword_44A9F9C / v244;
    *Str = (((v246 + v969) + v968) + v248) + (v243 * v254);
    *&Str[4] = (((v249 + *&v1013) + v251) + v252) + (v242 * v254);
    *&Str[8] = (((v6.m128_f32[0] + ZPosition_) + v990) + v253) + (v240 * v254);
    v255 = gui_script_strings;
    v33 = v250;
    if ( *(gui_script_strings + 0x93C) != 1 || *(gui_script_strings + 0x93A) != 2 )
    {
      *(gui_script_strings + 0x93C) = 1;
      v255[0x93A] = 2;
      v223 = v255 + 0x24C0;
      v224 = 2i64;
      goto LABEL_358;
    }
  }
  else
  {
    v220 = mUnit__;
    v202 = LOBYTE(v993);
    if ( *(*(mUnit__ + 0x4160) + 0x3EFi64) && (v221 = *(game + 0x440), *(v221 + 0x2244)) && *(v221 + 0xA8C) )
    {
      *&Str[8] = *(v221 + 0x2240);
      *Str = *(v221 + 0x2238);
      v222 = gui_script_strings;
      v34 = v989;
      v35 = LODWORD(v988);
      if ( *(gui_script_strings + 0x93C) != 1 || *(gui_script_strings + 0x93A) != 1 )
      {
        *(gui_script_strings + 0x93C) = 1;
        v222[0x93A] = 1;
        v223 = v222 + 0x24C0;
        v224 = 1i64;
LABEL_358:
        sub_B831C0(v223, v224, v190, v191);
        v202 = LOBYTE(v993);
        v194 = v991;
      }
    }
    else
    {
      v231 = gui_script_strings;
      if ( *(gui_script_strings + 0x93C) != 1 || *(gui_script_strings + 0x93A) )
      {
        *(gui_script_strings + 0x93C) = 1;
        v231[0x93A] = 0;
        sub_B831C0(v231 + 0x24C0, 0i64, v190, v191);
        v202 = LOBYTE(v993);
        v194 = v991;
        v220 = mUnit__;
      }
      v34 = v989;
      if ( (*(v220 + 0x1083) & 8) != 0 )
      {
        v6 = dword_44A9F9C;
        *Str = (v977 * *&dword_44A9F9C) + XPosition_;
        *&Str[4] = (v30 * *&dword_44A9F9C) + YPosition_;
        *&Str[8] = (v31 * *&dword_44A9F9C) + ZPosition_2;
      }
      else
      {
        *Str = *(cur_hud_crosshair + 0x5FC);
        *&Str[8] = *(cur_hud_crosshair + 0x604);
      }
      v35 = LODWORD(v988);
    }
  }
  v256 = 1;
  if ( v194 != 1 && v194 != 0xC )
    v256 = v202;
  v257 = (v188 & v256);
  if ( (*(mUnit__ + 0x1083) & 8) != 0 )
  {
    v258 = 1;
    if ( !HIBYTE(v1038) )
      v258 = *(*(game + 0x440) + 0xA8Ei64) == 0;
    v257 = v258 & v257;
  }
  v259 = v257 != 0;
  *v6.m128_u64 = sub_B971C0(a2, Str, &v974, 1i64);
  LODWORD(v82) = v260;
  LOBYTE(v82) = v259 & v260;
  v261 = gui_script_strings;
  if ( *(gui_script_strings + 0x92E) != 5 || *(gui_script_strings + 0x24B0) != v82 )
  {
    *(gui_script_strings + 0x92E) = 5;
    v261[0x24B0] = v82;
    gui_call_interop(v261 + 0x2488, v82, v177, v178);
  }
  v185 = v991;
  if ( v82 )
  {
    v262 = gui_script_strings;
    v263 = v974;
    if ( *(gui_script_strings + 0x912) != 3 || *(gui_script_strings + 0x910) != *&v974 )
    {
      *(gui_script_strings + 0x912) = 3;
      *(v262 + 0x910) = v263;
      gui_call_interop_(v262 + 0x2418, v182, v177, v178);
      v262 = gui_script_strings;
    }
    v264 = HIDWORD(v974);
    if ( *(v262 + 0x920) != 3 || v262[0x91E] != *(&v974 + 1) )
    {
      *(v262 + 0x920) = 3;
      *(v262 + 0x91E) = v264;
      gui_call_interop_(v262 + 0x2450, v182, v177, v178);
      v262 = gui_script_strings;
    }
    v182 = *(game + 0x498);
    v265 = *(v182 + 0x27F8);
    if ( *(v262 + 0xBCE) != 3 || v262[0xBCC] != v265 )
    {
      *(v262 + 0xBCE) = 3;
      v262[0xBCC] = v265;
      gui_call_interop_(v262 + 0x2F08, v182, v177, v178);
      v262 = gui_script_strings;
      v182 = *(game + 0x498);
    }
    v266 = *(v182 + 0x280C);
    if ( *(v262 + 0xC06) != 3 || v262[0xC04] != v266 )
    {
      *(v262 + 0xC06) = 3;
      v262[0xC04] = v266;
      gui_call_interop_(v262 + 0x2FE8, v182, v177, v178);
      v262 = gui_script_strings;
      v182 = *(game + 0x498);
    }
    v267 = *(v182 + 0x281C);
    if ( *(v262 + 0xC3E) != 3 || v262[0xC3C] != v267 )
    {
      *(v262 + 0xC3E) = 3;
      v262[0xC3C] = v267;
      gui_call_interop_(v262 + 0x30C8, v182, v177, v178);
      v262 = gui_script_strings;
      v182 = *(game + 0x498);
    }
    v185 = v991;
    v6 = *(v182 + 0x282C);
    if ( *(v262 + 0xC76) != 3 || v262[0xC74] != v6.m128_f32[0] )
    {
      *(v262 + 0xC76) = 3;
      v262[0xC74] = v6.m128_f32[0];
      gui_call_interop_(v262 + 0x31A8, v182, v177, v178);
LABEL_390:
      v185 = v991;
    }
  }
LABEL_391:
  v268 = *(mUnit__ + 0x1080);
  if ( (v268 & 0x8000000) == 0 && !*(*(game + 0x498) + 0x27EFi64)
    || !*(HudInfo + 0x2E0) && (*(*(game + 0x498) + 0x2778i64) || !*(*(mUnit__ + 0x4160) + 0x3F1i64)) )
  {
    goto LABEL_697;
  }
  v269 = v77;
  v270 = 1;
  v271 = 1;
  if ( v185 != 1 )
  {
    v271 = 1;
    if ( v185 != 0xC )
      v271 = (v268 & 0x8000000 | v185 ^ 4) == 0;
  }
  v272 = *(mUnit__ + 0x9D0);
  v273 = *(v272 + 0x43BC);
  v274 = *(v272 + 0x910) - *&v273;
  *&v998 = 0.0;
  v996 = 0;
  sub_158B5C0(v272 + 0x920, &v998, &v996);
  if ( !sub_287F50(*(mUnit__ + 0x11D0), 4i64) )
    v270 = sub_287F50(*(mUnit__ + 0x11D0), 9i64);
  v277 = v274;
  v278 = *(mUnit__ + 0x11D0);
  v279 = 0xACi64 * (v270 ^ 1u);
  if ( *(*(mUnit__ + 0x4160) + 0x3F1i64) )
  {
    v280 = LODWORD(Y);
    v977 = 0.0;
    v281 = 1;
    if ( (*(mUnit__ + 0x58) & 6) != 0 )
      goto LABEL_401;
  }
  else
  {
    v284 = v278 + 0x11A8;
    v285 = v996;
    v286 = *&v998;
    *&v273 = sub_6D4510(v278 + 0x11A8 + v279 + 0x50, v278 + 0x11A8 + v279 + 0x3C, v275, v276, v996);
    if ( *&v273 <= 0.0 )
    {
      v289 = screenScaleFactor;
    }
    else
    {
      v289 = LODWORD(Y);
      if ( *&v273 < Y )
      {
        *&v273 = (*&v273 * *&screenScaleFactor) + *&screenScaleFactor;
        v289 = v273;
      }
    }
    v290 = sub_6D4510(v284 + v279 + 0x28, v284 + v279 + 0x14, v287, v288, v285);
    v291 = Y;
    v292 = fminf(fmaxf(Y - *&v290, 0.0), Y);
    v295 = sub_6D4510(v284 + v279 + 0x94, v284 + v279 + 0x80, v293, v294, v285);
    v296 = fmaxf(fminf(fmaxf(v291 - *&v295, 0.0), v291), v292);
    v977 = 0.0;
    if ( v296 > 0.0 )
    {
      if ( v296 >= Y )
        v977 = *&dword_44A0280;
      else
        v977 = v296 * *&dword_44A0280;
    }
    v281 = 0;
    if ( v277 < *(v284 + v279 + 0x64) )
    {
      v280 = v289;
      if ( (*(mUnit__ + 0x58) & 6) != 0 )
        goto LABEL_401;
    }
    else
    {
      if ( *(v284 + v279 + 0x68) >= v277 && *(v284 + v279 + 0x6C) <= v286 && *(v284 + v279 + 0x70) >= v286 )
        v281 = COERCE_FLOAT(v285 & FABSF_MASK) <= *(v284 + v279 + 0x74);
      v280 = v289;
      if ( (*(mUnit__ + 0x58) & 6) != 0 )
      {
LABEL_401:
        v282 = *(mUnit__ + 0x2E68);
        v283 = *(v282 + 0x4568);
        if ( *(v283 + 0x2BA) || *(v283 + 0x2B8) )
          goto LABEL_442;
        goto LABEL_438;
      }
    }
  }
  if ( *(mUnit__ + 0x402C) )
  {
LABEL_442:
    v309 = 0;
    goto LABEL_443;
  }
  v282 = *(mUnit__ + 0x2E68);
LABEL_438:
  if ( *(v282 + 0x5C4C) <= *(mUnit__ + 0x53D8) )
    goto LABEL_442;
  v308 = v278 + v279 + 0x11A8;
  v309 = 0;
  if ( v277 >= *v308 && *(v308 + 4) >= v277 )
    v309 = (COERCE_FLOAT(v996 & FABSF_MASK) <= *(v308 + 0x10)) & _mm_cvtsi128_si32(_mm_and_ps(
                                                                                          _mm_cmple_ps(
                                                                                            v998,
                                                                                            *(v308 + 0xC)),
                                                                                          _mm_cmple_ps(
                                                                                            *(v308 + 8),
                                                                                            v998)));
LABEL_443:
  v310 = COERCE_FLOAT(FABSF_MASK & v280) >= *&dword_44A0308 && v281 && v271;
  LODWORD(v82) = sub_3DF3F0(mUnit__);
  LOBYTE(v82) = v310 & v309 & (v82 + sub_425520(mUnit__) != 0);
  v311 = *(game + 0x440);
  v312 = 1;
  if ( !(v1048 | v1050) )
    v312 = *(v311 + 0xA8E) == 0;
  v313 = v312 & v82;
  v984 = *(v311 + 0x1A1C);
  v983 = *(v311 + 0x1A14);
  v77 = v269;
  if ( *(*(game + 0x498) + 0x2850i64) )
  {
    v964 = *(v311 + 0x1A20);
    v966 = *(v311 + 0x1A24);
    v6 = *(v311 + 0x1A28);
  }
  else
  {
    v966 = Y;
    v964 = 0.0;
    v6 = 0i64;
  }
  v967 = v6.m128_f32[0];
  v987 = 0i64;
  *v6.m128_u64 = sub_B971C0(a2, &v983, &v987, 1i64);
  if ( (v314 & v313) != 1 )
  {
    v332 = gui_script_strings;
    if ( *(gui_script_strings + 0xB88) != 5 || *(gui_script_strings + 0x2E18) )
    {
      *(gui_script_strings + 0xB88) = 5;
      v332[0x2E18] = 0;
      gui_call_interop(v332 + 0x2DF0, 0i64, v177, v178);
    }
    goto LABEL_696;
  }
  v1013 = v280;
  v1001 = v33.m128_f32[0];
  v315 = *(mUnit__ + 0x1110);
  v316 = *(mUnit__ + 0x99C);
  v317 = *(mUnit__ + 0x9AC);
  v1006 = *(mUnit__ + 0x9BC);
  v1005 = v317;
  *Str = v316;
  v970 = fsqrt(
           (((*(a2 + 0x23C) - v984) * (*(a2 + 0x23C) - v984))
          + ((*(a2 + 0x238) - *(&v983 + 1)) * (*(a2 + 0x238) - *(&v983 + 1))))
         + ((*(a2 + 0x234) - *&v983) * (*(a2 + 0x234) - *&v983)));
  v995 = v970;
  v318 = (*Str * v966) - (*&Str[4] * v964);
  v319 = (*&Str[8] * v964) - (*Str * v967);
  v320 = (*&Str[4] * v967) - (*&Str[8] * v966);
  v321 = fsqrt(((v318 * v318) + (v320 * v320)) + (v319 * v319));
  v322 = 0.0;
  v323 = 0.0;
  if ( v321 > *&epsilon_unk )
    v323 = Y / v321;
  v324 = v318 * v323;
  v325 = v319 * v323;
  v326 = v320 * v323;
  v327 = (v325 * v964) - (v326 * v966);
  v328 = (v326 * v967) - (v324 * v964);
  v329 = (v324 * v966) - (v325 * v967);
  v330 = fsqrt((v327 * v327) + ((v328 * v328) + (v329 * v329)));
  if ( v330 > *&epsilon_unk )
    v322 = Y / v330;
  if ( *(HudInfo + 0x3D) )
  {
LABEL_454:
    v331 = Y;
    goto LABEL_493;
  }
  v333 = game;
  LODWORD(v334) = *(game + 0x348);
  v335 = *&dword_44B67C0;
  if ( v334 )
  {
    v336 = 2i64;
    do
    {
      v339 = v333[0x67];
      if ( v336 < v334 )
        _mm_prefetch(*(v339 + 8 * v336), 0);
      v337 = *(v339 + 8 * v336 - 0x10);
      if ( (*(v337 + 0x1058) & 0x7000014) == 0
        && *(v337 + 0x10A8) <= 1u
        && !sub_B8B680(v337, &v1006 + 4, *(mUnit__ + 0x1110)) )
      {
        v340 = (*(*(v337 + 0x50) + 0x30i64))(v337 + 0x50);
        if ( (dword_4B1C814 & 0x80000) != 0 || v340 != v315 || (dword_4B1C814 & 0x1000000) != 0 )
          v335 = fminf(
                   v335,
                   (((*(v337 + 0x9C8) - v984) * (*(v337 + 0x9C8) - v984))
                  + ((*(v337 + 0x9C4) - *(&v983 + 1)) * (*(v337 + 0x9C4) - *(&v983 + 1))))
                 + ((*(v337 + 0x9C0) - *&v983) * (*(v337 + 0x9C0) - *&v983)));
      }
      v333 = game;
      v334 = *(game + 0x348);
      v182 = v336 + 1;
      v338 = v336++ - 1 < v334;
    }
    while ( v338 );
  }
  if ( !*(v333[0x93] + 0x27EDi64) || !*(v333[0x86] + 0xD5i64) || !*(v333[0x88] + 0xA8Ei64) )
  {
    *&v981 = 0x900000002i64;
    DWORD2(v981) = 4;
    v341 = 2i64;
LABEL_476:
    v342 = 9;
    goto LABEL_477;
  }
  if ( !v1050 )
  {
    if ( !v1047 )
      goto LABEL_454;
    *&v981 = 0x900000001i64;
    v341 = 1i64;
    goto LABEL_476;
  }
  *&v981 = 0x400000001i64;
  v341 = 1i64;
  v342 = 4;
LABEL_477:
  v331 = Y;
  v343 = 0i64;
  v344 = 0i64;
  while ( 1 )
  {
    while ( 1 )
    {
      v182 = *(*(mUnit__ + 0x11D0) + 0x300i64);
      v345 = 0x10i64 * v342;
      v346 = *(v182 + v345 + 8);
      if ( !*(v182 + v345 + 8) )
        goto LABEL_487;
      v182 = *(v182 + v345);
      v347 = 0i64;
      while ( 1 )
      {
        v348 = *(v182 + 8 * v347);
        if ( v348 )
          break;
        if ( v346 == ++v347 )
          goto LABEL_487;
      }
      if ( v348[0xEE] == 3 )
        break;
      if ( ++v343 == v341 )
        goto LABEL_493;
      v344 = 0i64;
      v342 = *(&v981 + v343 + 1);
    }
    if ( !(*(*v348 + 0x180i64))(*(v182 + 8 * v347)) )
      v348 = 0i64;
    v344 = v348;
LABEL_487:
    if ( ++v343 == v341 )
      break;
    v342 = *(&v981 + v343 + 1);
  }
  if ( v344 )
  {
    v349 = v344[0x8E];
    v350 = sub_1711240();
    sub_168A060(&v974, v349, 0i64, v350);
    v331 = fminf(fsqrt(v335) / fmaxf(*&v975, Y), Y);
  }
LABEL_493:
  v351 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(v351[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(v351, v182, v177, v178);
  v982 = v331;
  v970 = v970 * *&dword_44CB700;
  v352 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x130i64);
  v353 = (*(*v352 + 0x10i64))(v352);
  sub_B8B6E0(&v974, v353, 0x50i64);
  v990 = *(*(game + 0x498) + 0x283Ci64);
  v354 = fsqrt((v967 * v967) + ((v966 * v966) + (v964 * v964)));
  v994 = 0.0;
  if ( v354 > *&epsilon_unk )
    v994 = Y / v354;
  v355 = v327 * v322;
  v356 = v328 * v322;
  v357 = v329 * v322;
  v358 = v990 * v970;
  v992 = a2 + 0x168;
  v997 = a2 + 0x128;
  v359 = 0i64;
  do
  {
    v360 = 0i64;
    *&v360 = (v359 * *&dword_44CB704) + *&dword_44CB708;
    v361 = v360;
    *&v361 = sinf(*&v360) * v994;
    v362 = *&v361 * v967;
    v363 = *&v361 * v966;
    *&v361 = *&v361 * v964;
    v364 = cosf(*&v360);
    v365 = (v363 + v363) * v364;
    v366 = (v362 + v362) * v363;
    v367 = v361;
    *&v367 = *&v361 + *&v361;
    v368 = v367;
    *&v368 = (*&v361 + *&v361) * v364;
    v369 = v368;
    v370 = (v362 + v362) * v364;
    v371 = ((v364 * v364) + (v364 * v364)) + *&dword_44801E8;
    *&v367 = (*&v361 + *&v361) * v363;
    *&v981 = (((((v365 + ((v362 + v362) * *&v361)) * v355) + ((*&v367 - v370) * v356))
             + ((((*&v361 * *&v361) + (*&v361 * *&v361)) + v371) * v357))
            * v358)
           + *&v983;
    *(&v981 + 1) = (((((v366 - *&v368) * v355) + ((v370 + *&v367) * v357))
                   + ((((v363 * v363) + (v363 * v363)) + v371) * v356))
                  * v358)
                 + *(&v983 + 1);
    *(&v981 + 2) = ((((((v362 * v362) + (v362 * v362)) + v371) * v355)
                   + (((*&v368 + v366) * v356) + ((((v362 + v362) * *&v361) - v365) * v357)))
                  * v358)
                 + v984;
    v372 = *(a2 + 0x1EC);
    if ( !sub_B96C20(a2, &v981, &v985, &v971) )
    {
      v376 = v992;
      if ( !v372 )
        v376 = v997;
      sub_B96E90(v374, v373, v375, v376, &v981, 0x43960000, &v971, &v985);
    }
    v971 = v971 - *&v987;
    v972 = v972 - *(&v987 + 1);
    v377 = (*(v974 + 8))(&v974);
    v378 = *v377;
    v379 = *(v377 + 4);
    v380 = *(v377 + 8);
    v381 = v975;
    if ( (v378 & 0x8000000) != 0 )
      ++v380[1];
    v382 = *(v381 + 0x30);
    v383 = *(v381 + 0x50);
    v384 = v383 + 1;
    v383 *= 0x10i64;
    *(v381 + 0x50) = v384;
    v385 = *(v382 + v383);
    v386 = *(v382 + v383 + 8);
    *(v382 + v383) = v378;
    *(v382 + v383 + 4) = v379;
    *(v382 + v383 + 8) = v380;
    if ( (v378 & 0x8000000) != 0 )
      ++v380[1];
    if ( (v385 & 0x8000000) != 0 )
    {
      v18 = v386[1]-- == 1i64;
      if ( v18 )
        (*(*v386 + 8i64))(v386);
    }
    if ( (v378 & 0x8000000) != 0 )
    {
      v18 = v380[1]-- == 1i64;
      if ( v18 )
        (*(*v380 + 8i64))(v380);
    }
    v387 = *(v975 + 0x30);
    v388 = *(v975 + 0x50);
    *(v975 + 0x50) = v388 + 1;
    v388 *= 0x10i64;
    v18 = (*(v387 + v388) & 0x8000000) == 0;
    v389 = *(v387 + v388 + 8);
    *(v387 + v388) = 0x5000002;
    *(v387 + v388 + 4) = 0;
    *(v387 + v388 + 8) = v359;
    if ( !v18 )
    {
      v18 = v389[1]-- == 1i64;
      if ( v18 )
        (*(*v389 + 8i64))(v389);
    }
    v390 = v971;
    v391 = *(v975 + 0x30);
    v392 = *(v975 + 0x50);
    *(v975 + 0x50) = v392 + 1;
    v392 *= 0x10i64;
    v393 = *(v391 + v392 + 8);
    v18 = (*(v391 + v392) & 0x8000000) == 0;
    *(v391 + v392) = 0x5000004;
    *(v391 + v392 + 4) = 0;
    *(v391 + v392 + 8) = v390;
    *(v391 + v392 + 0xC) = 0;
    if ( !v18 )
    {
      v18 = v393[1]-- == 1i64;
      if ( v18 )
        (*(*v393 + 8i64))(v393);
    }
    sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
    v394 = *(v975 + 0x30);
    v395 = *(v975 + 0x50) - 1i64;
    *(v975 + 0x50) = v395;
    v395 *= 0x10i64;
    v396 = *(v394 + v395 + 8);
    v18 = (*(v394 + v395) & 0x8000000) == 0;
    *(v394 + v395) = 0i64;
    *(v394 + v395) = 0x1000001;
    if ( !v18 )
    {
      v18 = v396[1]-- == 1i64;
      if ( v18 )
        (*(*v396 + 8i64))(v396);
    }
    v397 = (*(v974 + 8))(&v974);
    v398 = *v397;
    v399 = *(v397 + 4);
    v400 = *(v397 + 8);
    v401 = v975;
    if ( (v398 & 0x8000000) != 0 )
      ++v400[1];
    v402 = *(v401 + 0x30);
    v403 = *(v401 + 0x50);
    v404 = v403 + 1;
    v403 *= 0x10i64;
    *(v401 + 0x50) = v404;
    v405 = *(v402 + v403);
    v406 = *(v402 + v403 + 8);
    *(v402 + v403) = v398;
    *(v402 + v403 + 4) = v399;
    *(v402 + v403 + 8) = v400;
    if ( (v398 & 0x8000000) != 0 )
      ++v400[1];
    if ( (v405 & 0x8000000) != 0 )
    {
      v18 = v406[1]-- == 1i64;
      if ( v18 )
        (*(*v406 + 8i64))(v406);
    }
    v407 = v359 | 1;
    if ( (v398 & 0x8000000) != 0 )
    {
      v18 = v400[1]-- == 1i64;
      if ( v18 )
        (*(*v400 + 8i64))(v400);
    }
    v408 = *(v975 + 0x30);
    v409 = *(v975 + 0x50);
    *(v975 + 0x50) = v409 + 1;
    v409 *= 0x10i64;
    v18 = (*(v408 + v409) & 0x8000000) == 0;
    v410 = *(v408 + v409 + 8);
    *(v408 + v409) = 0x5000002;
    *(v408 + v409 + 4) = 0;
    *(v408 + v409 + 8) = v407;
    if ( !v18 )
    {
      v18 = v410[1]-- == 1i64;
      if ( v18 )
        (*(*v410 + 8i64))(v410);
    }
    v411 = v972;
    v412 = *(v975 + 0x30);
    v413 = *(v975 + 0x50);
    *(v975 + 0x50) = v413 + 1;
    v413 *= 0x10i64;
    v414 = *(v412 + v413 + 8);
    v18 = (*(v412 + v413) & 0x8000000) == 0;
    *(v412 + v413) = 0x5000004;
    *(v412 + v413 + 4) = 0;
    *(v412 + v413 + 8) = v411;
    *(v412 + v413 + 0xC) = 0;
    if ( !v18 )
    {
      v18 = v414[1]-- == 1i64;
      if ( v18 )
        (*(*v414 + 8i64))(v414);
    }
    sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
    v415 = *(v975 + 0x30);
    v416 = *(v975 + 0x50) - 1i64;
    *(v975 + 0x50) = v416;
    v416 *= 0x10i64;
    v417 = *(v415 + v416 + 8);
    v18 = (*(v415 + v416) & 0x8000000) == 0;
    *(v415 + v416) = 0i64;
    *(v415 + v416) = 0x1000001;
    if ( !v18 )
    {
      v18 = v417[1]-- == 1i64;
      if ( v18 )
        (*(*v417 + 8i64))(v417);
    }
    *&v369 = (v407 * *&dword_44CB704) + *&dword_44CB708;
    v418 = v369;
    *&v418 = sinf(*&v369) * v994;
    v419 = v418;
    *&v419 = *&v418 * v967;
    v420 = *&v418 * v966;
    *&v418 = *&v418 * v964;
    v421 = cosf(*&v369);
    v422 = (v420 + v420) * v421;
    v423 = (*&v419 + *&v419) * v420;
    v424 = (*&v418 + *&v418) * v421;
    v425 = (*&v419 + *&v419) * v421;
    v426 = ((v421 * v421) + (v421 * v421)) + *&dword_44801E8;
    v427 = (*&v418 + *&v418) * v420;
    *&v981 = (((((v422 + ((*&v419 + *&v419) * *&v418)) * v355) + ((v427 - v425) * v356))
             + ((((*&v418 * *&v418) + (*&v418 * *&v418)) + v426) * v357))
            * v358)
           + *&v983;
    *(&v981 + 1) = (((((v423 - v424) * v355) + ((v425 + v427) * v357))
                   + ((((v420 * v420) + (v420 * v420)) + v426) * v356))
                  * v358)
                 + *(&v983 + 1);
    *(&v981 + 2) = ((((((*&v419 * *&v419) + (*&v419 * *&v419)) + v426) * v355)
                   + (((v424 + v423) * v356) + ((((*&v419 + *&v419) * *&v418) - v422) * v357)))
                  * v358)
                 + v984;
    v428 = *(a2 + 0x1EC);
    if ( !sub_B96C20(a2, &v981, &v985, &v971) )
    {
      v432 = v992;
      if ( !v428 )
        v432 = v997;
      sub_B96E90(v430, v429, v431, v432, &v981, 0x43960000, &v971, &v985);
    }
    v971 = v971 - *&v987;
    v972 = v972 - *(&v987 + 1);
    v433 = (*(v974 + 8))(&v974);
    v434 = *v433;
    v435 = *(v433 + 4);
    v436 = *(v433 + 8);
    v437 = v975;
    if ( (v434 & 0x8000000) != 0 )
      ++v436[1];
    v438 = *(v437 + 0x30);
    v439 = *(v437 + 0x50);
    v440 = v439 + 1;
    v439 *= 0x10i64;
    *(v437 + 0x50) = v440;
    v441 = *(v438 + v439);
    v442 = *(v438 + v439 + 8);
    *(v438 + v439) = v434;
    *(v438 + v439 + 4) = v435;
    *(v438 + v439 + 8) = v436;
    if ( (v434 & 0x8000000) != 0 )
      ++v436[1];
    if ( (v441 & 0x8000000) != 0 )
    {
      v18 = v442[1]-- == 1i64;
      if ( v18 )
        (*(*v442 + 8i64))(v442);
    }
    if ( (v434 & 0x8000000) != 0 )
    {
      v18 = v436[1]-- == 1i64;
      if ( v18 )
        (*(*v436 + 8i64))(v436);
    }
    v443 = *(v975 + 0x30);
    v444 = *(v975 + 0x50);
    *(v975 + 0x50) = v444 + 1;
    v444 *= 0x10i64;
    v18 = (*(v443 + v444) & 0x8000000) == 0;
    v445 = *(v443 + v444 + 8);
    *(v443 + v444) = 0x5000002;
    *(v443 + v444 + 4) = 0;
    *(v443 + v444 + 8) = v359 | 2;
    if ( !v18 )
    {
      v18 = v445[1]-- == 1i64;
      if ( v18 )
        (*(*v445 + 8i64))(v445);
    }
    v446 = v971;
    v447 = *(v975 + 0x30);
    v448 = *(v975 + 0x50);
    *(v975 + 0x50) = v448 + 1;
    v448 *= 0x10i64;
    v449 = *(v447 + v448 + 8);
    v18 = (*(v447 + v448) & 0x8000000) == 0;
    *(v447 + v448) = 0x5000004;
    *(v447 + v448 + 4) = 0;
    *(v447 + v448 + 8) = v446;
    *(v447 + v448 + 0xC) = 0;
    if ( !v18 )
    {
      v18 = v449[1]-- == 1i64;
      if ( v18 )
        (*(*v449 + 8i64))(v449);
    }
    sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
    v450 = *(v975 + 0x30);
    v451 = *(v975 + 0x50) - 1i64;
    *(v975 + 0x50) = v451;
    v451 *= 0x10i64;
    v452 = *(v450 + v451 + 8);
    v18 = (*(v450 + v451) & 0x8000000) == 0;
    *(v450 + v451) = 0i64;
    *(v450 + v451) = 0x1000001;
    if ( !v18 )
    {
      v18 = v452[1]-- == 1i64;
      if ( v18 )
        (*(*v452 + 8i64))(v452);
    }
    v453 = (*(v974 + 8))(&v974);
    v454 = *v453;
    v455 = *(v453 + 4);
    v456 = *(v453 + 8);
    v457 = v975;
    if ( (v454 & 0x8000000) != 0 )
      ++v456[1];
    v458 = *(v457 + 0x30);
    v459 = *(v457 + 0x50);
    v460 = v459 + 1;
    v459 *= 0x10i64;
    *(v457 + 0x50) = v460;
    v461 = *(v458 + v459);
    v462 = *(v458 + v459 + 8);
    *(v458 + v459) = v454;
    *(v458 + v459 + 4) = v455;
    *(v458 + v459 + 8) = v456;
    if ( (v454 & 0x8000000) != 0 )
      ++v456[1];
    if ( (v461 & 0x8000000) != 0 )
    {
      v18 = v462[1]-- == 1i64;
      if ( v18 )
        (*(*v462 + 8i64))(v462);
    }
    if ( (v454 & 0x8000000) != 0 )
    {
      v18 = v456[1]-- == 1i64;
      if ( v18 )
        (*(*v456 + 8i64))(v456);
    }
    v463 = *(v975 + 0x30);
    v464 = *(v975 + 0x50);
    *(v975 + 0x50) = v464 + 1;
    v464 *= 0x10i64;
    v18 = (*(v463 + v464) & 0x8000000) == 0;
    v465 = *(v463 + v464 + 8);
    *(v463 + v464) = 0x5000002;
    *(v463 + v464 + 4) = 0;
    *(v463 + v464 + 8) = v359 | 3;
    if ( !v18 )
    {
      v18 = v465[1]-- == 1i64;
      if ( v18 )
        (*(*v465 + 8i64))(v465);
    }
    v466 = v972;
    v467 = *(v975 + 0x30);
    v468 = *(v975 + 0x50);
    *(v975 + 0x50) = v468 + 1;
    v468 *= 0x10i64;
    v469 = *(v467 + v468 + 8);
    v18 = (*(v467 + v468) & 0x8000000) == 0;
    *(v467 + v468) = 0x5000004;
    *(v467 + v468 + 4) = 0;
    *(v467 + v468 + 8) = v466;
    *(v467 + v468 + 0xC) = 0;
    if ( !v18 )
    {
      v18 = v469[1]-- == 1i64;
      if ( v18 )
        (*(*v469 + 8i64))(v469);
    }
    sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
    v470 = *(v975 + 0x30);
    v471 = *(v975 + 0x50) - 1i64;
    *(v975 + 0x50) = v471;
    v471 *= 0x10i64;
    v472 = *(v470 + v471 + 8);
    v18 = (*(v470 + v471) & 0x8000000) == 0;
    *(v470 + v471) = 0i64;
    *(v470 + v471) = 0x1000001;
    if ( !v18 )
    {
      v18 = v472[1]-- == 1i64;
      if ( v18 )
        (*(*v472 + 8i64))(v472);
    }
    v338 = v359 < 0x3C;
    v359 += 4i64;
  }
  while ( v338 );
  v1012 = v990 * (v355 * v970);
  v1011 = v990 * (v356 * v970);
  v969 = v990 * (v357 * v970);
  v993 = (v355 * v970) * (v977 * v990);
  ZPosition_ = (v356 * v970) * (v977 * v990);
  v977 = v977 * v990;
  v968 = (v357 * v970) * v977;
  v473 = 0i64;
  do
  {
    if ( v473 )
    {
      *&v419 = v473 * *&dword_44CB70C;
      v474 = v419;
      *&v474 = sinf(*&v419) * v994;
      v475 = v474;
      *&v475 = *&v474 * v967;
      v476 = *&v474 * v966;
      *&v474 = *&v474 * v964;
      v477 = cosf(*&v419);
      v478 = v475;
      *&v478 = *&v475 + *&v475;
      v479 = (*&v475 + *&v475) * *&v474;
      v480 = (v476 + v476) * v477;
      v419 = v478;
      *&v419 = (*&v475 + *&v475) * v476;
      v481 = (*&v474 + *&v474) * v477;
      *&v478 = (*&v475 + *&v475) * v477;
      v482 = ((v477 * v477) + (v477 * v477)) + *&dword_44801E8;
      v483 = (*&v474 + *&v474) * v476;
      v484 = (((((*&v475 * *&v475) + (*&v475 * *&v475)) + v482) * v355)
            + (((v481 + *&v419) * v356) + ((v479 - v480) * v357)))
           * v970;
      v485 = ((((v480 + v479) * v355) + ((v483 - *&v478) * v356))
            + ((((*&v474 * *&v474) + (*&v474 * *&v474)) + v482) * v357))
           * v970;
      *&v419 = ((((*&v419 - v481) * v355) + ((*&v478 + v483) * v357)) + ((((v476 * v476) + (v476 * v476)) + v482) * v356))
             * v970;
      *&v981 = (v485 * v990) + *&v983;
      *(&v981 + 1) = (*&v419 * v990) + *(&v983 + 1);
      *(&v981 + 2) = (v484 * v990) + v984;
      if ( !sub_B96C20(a2, &v981, &v985, &v971) )
      {
        v489 = v992;
        if ( !*(a2 + 0x1EC) )
          v489 = v997;
        sub_B96E90(v487, v486, v488, v489, &v981, 0x43960000, &v971, &v995);
      }
      v971 = v971 - *&v987;
      v972 = v972 - *(&v987 + 1);
      v490 = (*(v974 + 8))(&v974);
      v491 = *v490;
      v492 = *(v490 + 4);
      v493 = *(v490 + 8);
      v494 = v975;
      if ( (v491 & 0x8000000) != 0 )
        ++v493[1];
      v495 = *(v494 + 0x30);
      v496 = *(v494 + 0x50);
      v497 = v496 + 1;
      v496 *= 0x10i64;
      *(v494 + 0x50) = v497;
      v498 = *(v495 + v496);
      v499 = *(v495 + v496 + 8);
      *(v495 + v496) = v491;
      *(v495 + v496 + 4) = v492;
      *(v495 + v496 + 8) = v493;
      if ( (v491 & 0x8000000) != 0 )
        ++v493[1];
      if ( (v498 & 0x8000000) != 0 )
      {
        v18 = v499[1]-- == 1i64;
        if ( v18 )
          (*(*v499 + 8i64))(v499);
      }
      if ( (v491 & 0x8000000) != 0 )
      {
        v18 = v493[1]-- == 1i64;
        if ( v18 )
          (*(*v493 + 8i64))(v493);
      }
      v500 = *(v975 + 0x30);
      v501 = *(v975 + 0x50);
      *(v975 + 0x50) = v501 + 1;
      v501 *= 0x10i64;
      v18 = (*(v500 + v501) & 0x8000000) == 0;
      v502 = *(v500 + v501 + 8);
      *(v500 + v501) = 0x5000002;
      *(v500 + v501 + 4) = 0;
      *(v500 + v501 + 8) = v473 + 0x40;
      if ( !v18 )
      {
        v18 = v502[1]-- == 1i64;
        if ( v18 )
          (*(*v502 + 8i64))(v502);
      }
      v503 = v971;
      v504 = *(v975 + 0x30);
      v505 = *(v975 + 0x50);
      *(v975 + 0x50) = v505 + 1;
      v505 *= 0x10i64;
      v506 = *(v504 + v505 + 8);
      v18 = (*(v504 + v505) & 0x8000000) == 0;
      *(v504 + v505) = 0x5000004;
      *(v504 + v505 + 4) = 0;
      *(v504 + v505 + 8) = v503;
      *(v504 + v505 + 0xC) = 0;
      if ( !v18 )
      {
        v18 = v506[1]-- == 1i64;
        if ( v18 )
          (*(*v506 + 8i64))(v506);
      }
      sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
      v507 = *(v975 + 0x30);
      v508 = *(v975 + 0x50) - 1i64;
      *(v975 + 0x50) = v508;
      v508 *= 0x10i64;
      v509 = *(v507 + v508 + 8);
      v18 = (*(v507 + v508) & 0x8000000) == 0;
      *(v507 + v508) = 0i64;
      *(v507 + v508) = 0x1000001;
      if ( !v18 )
      {
        v18 = v509[1]-- == 1i64;
        if ( v18 )
          (*(*v509 + 8i64))(v509);
      }
      v510 = (*(v974 + 8))(&v974);
      v511 = *v510;
      v512 = *(v510 + 4);
      v513 = *(v510 + 8);
      v514 = v975;
      if ( (v511 & 0x8000000) != 0 )
        ++v513[1];
      v515 = *(v514 + 0x30);
      v516 = *(v514 + 0x50);
      v517 = v516 + 1;
      v516 *= 0x10i64;
      *(v514 + 0x50) = v517;
      v518 = *(v515 + v516);
      v519 = *(v515 + v516 + 8);
      *(v515 + v516) = v511;
      *(v515 + v516 + 4) = v512;
      *(v515 + v516 + 8) = v513;
      if ( (v511 & 0x8000000) != 0 )
        ++v513[1];
      if ( (v518 & 0x8000000) != 0 )
      {
        v18 = v519[1]-- == 1i64;
        if ( v18 )
          (*(*v519 + 8i64))(v519);
      }
      if ( (v511 & 0x8000000) != 0 )
      {
        v18 = v513[1]-- == 1i64;
        if ( v18 )
          (*(*v513 + 8i64))(v513);
      }
      v520 = *(v975 + 0x30);
      v521 = *(v975 + 0x50);
      *(v975 + 0x50) = v521 + 1;
      v521 *= 0x10i64;
      v18 = (*(v520 + v521) & 0x8000000) == 0;
      v522 = *(v520 + v521 + 8);
      *(v520 + v521) = 0x5000002;
      *(v520 + v521 + 4) = 0;
      *(v520 + v521 + 8) = v473 + 0x41;
      if ( !v18 )
      {
        v18 = v522[1]-- == 1i64;
        if ( v18 )
          (*(*v522 + 8i64))(v522);
      }
      v523 = v972;
      v524 = *(v975 + 0x30);
      v525 = *(v975 + 0x50);
      *(v975 + 0x50) = v525 + 1;
      v525 *= 0x10i64;
      v526 = *(v524 + v525 + 8);
      v18 = (*(v524 + v525) & 0x8000000) == 0;
      *(v524 + v525) = 0x5000004;
      *(v524 + v525 + 4) = 0;
      *(v524 + v525 + 8) = v523;
      *(v524 + v525 + 0xC) = 0;
      if ( !v18 )
      {
        v18 = v526[1]-- == 1i64;
        if ( v18 )
          (*(*v526 + 8i64))(v526);
      }
      sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
      v527 = *(v975 + 0x30);
      v528 = *(v975 + 0x50) - 1i64;
      *(v975 + 0x50) = v528;
      v528 *= 0x10i64;
      v529 = *(v527 + v528 + 8);
      v18 = (*(v527 + v528) & 0x8000000) == 0;
      *(v527 + v528) = 0i64;
      *(v527 + v528) = 0x1000001;
      if ( !v18 )
      {
        v18 = v529[1]-- == 1i64;
        if ( v18 )
          (*(*v529 + 8i64))(v529);
      }
      *&v981 = (v485 * v977) + *&v983;
      *(&v981 + 1) = (*&v419 * v977) + *(&v983 + 1);
      *(&v981 + 2) = (v484 * v977) + v984;
      if ( !sub_B96C20(a2, &v981, &v985, &v971) )
      {
        v533 = v992;
        if ( !*(a2 + 0x1EC) )
          v533 = v997;
        sub_B96E90(v531, v530, v532, v533, &v981, 0x43960000, &v971, &v995);
      }
      v971 = v971 - *&v987;
      v972 = v972 - *(&v987 + 1);
      v534 = (*(v974 + 8))(&v974);
      v535 = *v534;
      v536 = *(v534 + 4);
      v537 = *(v534 + 8);
      v538 = v975;
      if ( (v535 & 0x8000000) != 0 )
        ++v537[1];
      v539 = *(v538 + 0x30);
      v540 = *(v538 + 0x50);
      v541 = v540 + 1;
      v540 *= 0x10i64;
      *(v538 + 0x50) = v541;
      v542 = *(v539 + v540);
      v543 = *(v539 + v540 + 8);
      *(v539 + v540) = v535;
      *(v539 + v540 + 4) = v536;
      *(v539 + v540 + 8) = v537;
      if ( (v535 & 0x8000000) != 0 )
        ++v537[1];
      if ( (v542 & 0x8000000) != 0 )
      {
        v18 = v543[1]-- == 1i64;
        if ( v18 )
          (*(*v543 + 8i64))(v543);
      }
      if ( (v535 & 0x8000000) != 0 )
      {
        v18 = v537[1]-- == 1i64;
        if ( v18 )
          (*(*v537 + 8i64))(v537);
      }
      v544 = *(v975 + 0x30);
      v545 = *(v975 + 0x50);
      *(v975 + 0x50) = v545 + 1;
      v545 *= 0x10i64;
      v18 = (*(v544 + v545) & 0x8000000) == 0;
      v546 = *(v544 + v545 + 8);
      *(v544 + v545) = 0x5000002;
      *(v544 + v545 + 4) = 0;
      *(v544 + v545 + 8) = v473 + 0x42;
      if ( !v18 )
      {
        v18 = v546[1]-- == 1i64;
        if ( v18 )
          (*(*v546 + 8i64))(v546);
      }
      v547 = v971;
      v548 = *(v975 + 0x30);
      v549 = *(v975 + 0x50);
      *(v975 + 0x50) = v549 + 1;
      v549 *= 0x10i64;
      v550 = *(v548 + v549 + 8);
      v18 = (*(v548 + v549) & 0x8000000) == 0;
      *(v548 + v549) = 0x5000004;
      *(v548 + v549 + 4) = 0;
      *(v548 + v549 + 8) = v547;
      *(v548 + v549 + 0xC) = 0;
      if ( !v18 )
      {
        v18 = v550[1]-- == 1i64;
        if ( v18 )
          (*(*v550 + 8i64))(v550);
      }
      sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
      v551 = *(v975 + 0x30);
      v552 = *(v975 + 0x50) - 1i64;
      *(v975 + 0x50) = v552;
      v552 *= 0x10i64;
      v553 = *(v551 + v552 + 8);
      v18 = (*(v551 + v552) & 0x8000000) == 0;
      *(v551 + v552) = 0i64;
      *(v551 + v552) = 0x1000001;
      if ( !v18 )
      {
        v18 = v553[1]-- == 1i64;
        if ( v18 )
          (*(*v553 + 8i64))(v553);
      }
      v554 = (*(v974 + 8))(&v974);
      v555 = *v554;
      v556 = *(v554 + 4);
      v82 = *(v554 + 8);
      v557 = v975;
      if ( (v555 & 0x8000000) != 0 )
        ++*(v82 + 1);
      v558 = *(v557 + 0x30);
      v559 = *(v557 + 0x50);
      v560 = v559 + 1;
      v559 *= 0x10i64;
      *(v557 + 0x50) = v560;
      v561 = *(v558 + v559);
      v562 = *(v558 + v559 + 8);
      *(v558 + v559) = v555;
      *(v558 + v559 + 4) = v556;
      *(v558 + v559 + 8) = v82;
      if ( (v555 & 0x8000000) != 0 )
        ++*(v82 + 1);
      if ( (v561 & 0x8000000) != 0 )
      {
        v18 = v562[1]-- == 1i64;
        if ( v18 )
          (*(*v562 + 8i64))(v562);
      }
      if ( (v555 & 0x8000000) != 0 )
      {
        v18 = (*(v82 + 1))-- == 1i64;
        if ( v18 )
          (*(*v82 + 8i64))(v82);
      }
      v563 = *(v975 + 0x30);
      v564 = *(v975 + 0x50);
      *(v975 + 0x50) = v564 + 1;
      v564 *= 0x10i64;
      v18 = (*(v563 + v564) & 0x8000000) == 0;
      v565 = *(v563 + v564 + 8);
      *(v563 + v564) = 0x5000002;
      *(v563 + v564 + 4) = 0;
      *(v563 + v564 + 8) = v473 + 0x43;
      if ( !v18 )
      {
        v18 = v565[1]-- == 1i64;
        if ( v18 )
          (*(*v565 + 8i64))(v565);
      }
      v566 = v972;
      v567 = *(v975 + 0x30);
      v568 = *(v975 + 0x50);
      *(v975 + 0x50) = v568 + 1;
      v568 *= 0x10i64;
      v569 = *(v567 + v568 + 8);
      v18 = (*(v567 + v568) & 0x8000000) == 0;
      *(v567 + v568) = 0x5000004;
      *(v567 + v568 + 4) = 0;
      *(v567 + v568 + 8) = v566;
      *(v567 + v568 + 0xC) = 0;
      if ( !v18 )
      {
        v18 = v569[1]-- == 1i64;
        if ( v18 )
          (*(*v569 + 8i64))(v569);
      }
      sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
      v570 = *(v975 + 0x30);
      v571 = *(v975 + 0x50) - 1i64;
      *(v975 + 0x50) = v571;
      v571 *= 0x10i64;
      v572 = *(v570 + v571 + 8);
      v18 = (*(v570 + v571) & 0x8000000) == 0;
      *(v570 + v571) = 0i64;
      *(v570 + v571) = 0x1000001;
      if ( !v18 )
      {
        v18 = v572[1]-- == 1i64;
        if ( v18 )
          (*(*v572 + 8i64))(v572);
      }
    }
    else
    {
      v971 = *&v983 + v969;
      v972 = *(&v983 + 1) + v1011;
      v973 = v984 + v1012;
      v82 = &v985;
      sub_B971C0(a2, &v971, &v985, 1i64);
      v985 = v985 - *&v987;
      v986 = v986 - *(&v987 + 1);
      v981 = *(*(v974 + 8))(&v974);
      sub_176F230(v975, &v981);
      sub_176A100(v975, 0x40i64);
      sub_176A1B0(v975);
      sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
      sub_176D800(v975, 1i64);
      v981 = *(*(v974 + 8))(&v974);
      sub_176F230(v975, &v981);
      sub_176A100(v975, 0x41i64);
      sub_176A1B0(v975);
      sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
      sub_176D800(v975, 1i64);
      v971 = *&v983 + v968;
      v972 = *(&v983 + 1) + ZPosition_;
      v973 = v984 + v993;
      sub_B97130(a2, &v971, &v985, &v995, 1);
      v985 = v985 - *&v987;
      v986 = v986 - *(&v987 + 1);
      v981 = *(*(v974 + 8))(&v974);
      sub_176F230(v975, &v981);
      sub_176A100(v975, 0x42i64);
      sub_176A1B0(v975);
      sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
      sub_176D800(v975, 1i64);
      v981 = *(*(v974 + 8))(&v974);
      sub_176F230(v975, &v981);
      sub_176A100(v975, 0x43i64);
      sub_176A1B0(v975);
      sub_176DD00(v975, 0xFFFFFFFFFFFFFFFDui64);
      sub_176D800(v975, 1i64);
    }
    v338 = v473 < 0xC;
    v473 += 4i64;
  }
  while ( v338 );
  v1060[0] = &off_44A93B0;
  v1060[1] = v975;
  v1061 = v976;
  sub_1769E60(v975, &v1061);
  v1060[0] = &off_44A93B0;
  sub_B8B950(gui_script_strings + 0x2DB8, v1060);
  v576 = gui_script_strings;
  if ( *(gui_script_strings + 0xB88) != 5 || *(gui_script_strings + 0x2E18) != 1 )
  {
    *(gui_script_strings + 0xB88) = 5;
    v576[0x2E18] = 1;
    LOBYTE(v573) = 1;
    gui_call_interop(v576 + 0x2DF0, v573, v574, v575);
    v576 = gui_script_strings;
  }
  v77 = v1003;
  v78 = v1000;
  v33 = LODWORD(v1001);
  v34 = v989;
  v35 = LODWORD(v988);
  v577 = *&v1013;
  v578 = v982;
  v579 = v987;
  if ( *(v576 + 0xB96) != 3 || *(v576 + 0xB94) != *&v987 )
  {
    *(v576 + 0xB96) = 3;
    *(v576 + 0xB94) = v579;
    gui_call_interop_(v576 + 0x2E28, v573, v574, v575);
    v576 = gui_script_strings;
  }
  v580 = HIDWORD(v987);
  if ( *(v576 + 0xBA4) != 3 || *(v576 + 0xBA2) != *(&v987 + 1) )
  {
    *(v576 + 0xBA4) = 3;
    *(v576 + 0xBA2) = v580;
    gui_call_interop_(v576 + 0x2E60, v573, v574, v575);
    v576 = gui_script_strings;
  }
  v581 = *(game + 0x498);
  v582 = *(v581 + 0x2800) * v577;
  if ( *(v576 + 0xBB2) != 3 || *(v576 + 0xBB0) != v582 )
  {
    *(v576 + 0xBB2) = 3;
    *(v576 + 0xBB0) = v582;
    gui_call_interop_(v576 + 0x2E98, v581, v574, v575);
    v576 = gui_script_strings;
  }
  v583 = qword_4480160 - v578;
  if ( *(v576 + 0xBC0) != 4 || *(v576 + 0x5DF) != v583 )
  {
    *(v576 + 0xBC0) = 4;
    *(v576 + 0x5DF) = v583;
    sub_B83FF0(v576 + 0x2ED0);
    v576 = gui_script_strings;
  }
  v584 = *(game + 0x498);
  v585 = *(v584 + 0x2818);
  if ( *(v576 + 0xC30) != 3 || *(v576 + 0xC2E) != v585 )
  {
    *(v576 + 0xC30) = 3;
    *(v576 + 0xC2E) = v585;
    gui_call_interop_(v576 + 0x3090, v584, v574, v575);
    v576 = gui_script_strings;
    v584 = *(game + 0x498);
  }
  v586 = *(v584 + 0x2824);
  if ( *(v576 + 0xC5A) != 3 || *(v576 + 0xC58) != v586 )
  {
    *(v576 + 0xC5A) = 3;
    *(v576 + 0xC58) = v586;
    gui_call_interop_(v576 + 0x3138, v584, v574, v575);
    v576 = gui_script_strings;
    v584 = *(game + 0x498);
  }
  v6 = *(v584 + 0x2834);
  if ( *(v576 + 0xC92) != 3 || *(v576 + 0xC90) != v6.m128_f32[0] )
  {
    *(v576 + 0xC92) = 3;
    *(v576 + 0xC90) = v6.m128_i32[0];
    gui_call_interop_(v576 + 0x3218, v584, v574, v575);
  }
  *v6.m128_u64 = sub_B8BF80(&v974);
LABEL_696:
  v185 = v991;
LABEL_697:
  if ( v1018 | v1010 )
  {
    if ( byte_4B19A94 )
    {
      LODWORD(v82) = 0;
      goto LABEL_705;
    }
LABEL_703:
    LOBYTE(v82) = 1;
    if ( ballistics_A68_qword )
      sub_B836B0(ballistics_A68_qword, v182);
  }
  else
  {
    LODWORD(v82) = 0;
    if ( v185 == 0xC && (*(mUnit__ + 0x1080) & 0x8000000) != 0 && !byte_4B19A94 )
      goto LABEL_703;
  }
LABEL_705:
  v587 = gui_script_strings;
  if ( *(gui_script_strings + 0x10F2) != 5 || *(gui_script_strings + 0x43C0) != v82 )
  {
    *(gui_script_strings + 0x10F2) = 5;
    v587[0x43C0] = v82;
    gui_call_interop(v587 + 0x4398, v82, v177, v178);
  }
  v588 = mUnit__;
  v589 = *(mUnit__ + 0x1080);
  if ( (v589 & 0x8000000) != 0 || *(*(game + 0x498) + 0x27F4i64) )
  {
    if ( (*v78 & 4) == 0 )
    {
      v590 = some_ballistics_thing(*(game + 0x630));
      v591 = gui_script_strings;
      if ( v590 )
      {
        v588 = mUnit__;
        v589 = *(mUnit__ + 0x1080);
        goto LABEL_714;
      }
      if ( *(gui_script_strings + 0xAE0) == 5 && !*(gui_script_strings + 0x2B78) )
      {
        v596 = 0;
        goto LABEL_752;
      }
      *(gui_script_strings + 0xAE0) = 5;
      v591[0x2B78] = 0;
      v596 = 0;
LABEL_750:
      v594 = 0i64;
      goto LABEL_751;
    }
    v591 = gui_script_strings;
LABEL_714:
    if ( (v589 & 0x8000000) != 0 )
    {
      v594 = (v591 + 0x2B80);
      v595 = (v591 + 0x2B78);
      v596 = 1;
      if ( *(v591 + 0xAE0) != 5 || v591[0x2B78] != 1 )
        goto LABEL_743;
    }
    else
    {
      v592 = *(game + 0x498);
      if ( !*(v592 + 0x27ED) || (v593 = 1, !*(*(game + 0x430) + 0xD5i64)) )
        v593 = byte_4B19A94 && *(v592 + 0x27EE) && *(*(game + 0x430) + 0xD6i64) != 0;
      if ( *(v591 + 0xAE0) != 5 || (v596 = 1, v591[0x2B78] != v593) )
      {
        v594 = (v591 + 0x2B80);
        v595 = (v591 + 0x2B78);
        v596 = 1;
        if ( (v589 & 0x8000000) == 0 )
        {
          v177 = *(game + 0x498);
          if ( !*(v177 + 0x27ED) || !*(*(game + 0x430) + 0xD5i64) )
            v596 = byte_4B19A94 && *(v177 + 0x27EE) && *(*(game + 0x430) + 0xD6i64) != 0;
        }
LABEL_743:
        *v594 = 5;
        *v595 = v596;
        v596 = 1;
        if ( (*(v588 + 0x1083) & 8) != 0
          || (v605 = *(game + 0x498), *(v605 + 0x27ED)) && (v594 = *(game + 0x430), *(v594 + 0xD5)) )
        {
          LOBYTE(v594) = 1;
        }
        else
        {
          if ( !byte_4B19A94 || !*(v605 + 0x27EE) )
            goto LABEL_750;
          LOBYTE(v594) = *(*(game + 0x430) + 0xD6i64) != 0;
        }
LABEL_751:
        gui_call_interop(v591 + 0x2B50, v594, v177, v178);
        v591 = gui_script_strings;
      }
    }
LABEL_752:
    v606 = game;
    *v6.m128_u64 = sub_5655B0(game) * *&qword_44819B0;
    v608 = _mm_or_pd(_mm_and_pd(xmmword_44801A0, v6), xmmword_44CB6B0);
    v608.m128d_f64[0] = v608.m128d_f64[0] + *v6.m128_u64;
    *v6.m128_u64 = _mm_round_sd(0i64, v608, 0xB).m128d_f64[0] * *&qword_4487D98;
    if ( *(v591 + 0xAEE) != 4 || *(v591 + 0x576) != *v6.m128_u64 )
    {
      *(v591 + 0xAEE) = 4;
      *(v591 + 0x576) = v6.m128_u64[0];
      *v6.m128_u64 = sub_5655B0(v606) * *&qword_44819B0;
      sub_B83FF0(v591 + 0x2B88);
    }
    if ( v596 )
    {
      v609 = gui_script_strings;
      v610 = game;
      v611 = *(*(game + 0x440) + 0x97Di64);
      if ( *(gui_script_strings + 0x1CEC) != 5 || *(gui_script_strings + 0x73A8) != v611 )
      {
        *(gui_script_strings + 0x1CEC) = 5;
        v609[0x73A8] = v611;
        gui_call_interop(v609 + 0x7380, *(*(v610 + 0x440) + 0x97Di64), v177, v178);
        v609 = gui_script_strings;
      }
      v612 = 0xFFFFFFFF;
      if ( *(mUnit__ + 0x1238) )
      {
        v613 = 0i64;
        while ( 1 )
        {
          v614 = *(*(mUnit__ + 0x1228) + 8 * v613);
          v615 = (*(*v614 + 0xA0i64))(v614);
          if ( v615 != 0xFFFFFFFF )
            break;
          if ( ++v613 >= *(mUnit__ + 0x1238) )
            goto LABEL_765;
        }
        v612 = v615;
      }
LABEL_765:
      if ( *(v609 + 0x1CFA) != 5 || v609[0x73E0] != (v612 != 0xFFFFFFFF) )
      {
        v616 = mUnit__;
        v617 = 0xFFFFFFFF;
        if ( *(mUnit__ + 0x1238) )
        {
          v618 = 0i64;
          do
          {
            v619 = *(*(mUnit__ + 0x1228) + 8 * v618);
            v620 = (*(*v619 + 0xA0i64))(v619);
            if ( v620 != 0xFFFFFFFF )
              break;
            ++v618;
          }
          while ( v618 < *(mUnit__ + 0x1238) );
          v616 = mUnit__;
        }
        else
        {
          v620 = 0xFFFFFFFF;
        }
        v621 = gui_script_strings;
        *(gui_script_strings + 0x1CFA) = 5;
        v621[0x73E0] = v620 != 0xFFFFFFFF;
        if ( *(v616 + 0x1238) )
        {
          v622 = 0i64;
          do
          {
            v623 = *(*(v616 + 0x1228) + 8 * v622);
            v617 = (*(*v623 + 0xA0i64))(v623);
            if ( v617 != 0xFFFFFFFF )
              break;
            ++v622;
          }
          while ( v622 < *(v616 + 0x1238) );
          LODWORD(v621) = gui_script_strings;
        }
        LOBYTE(v607) = v617 != 0xFFFFFFFF;
        gui_call_interop(v621 + 0x73B8, v607, v177, v178);
      }
      v624 = gui_script_strings;
      v625 = v980;
      if ( *(gui_script_strings + 0x1CDE) != 5 || *(gui_script_strings + 0x7370) != v980 )
      {
        *(gui_script_strings + 0x1CDE) = 5;
        v624[0x7370] = v625;
        gui_call_interop(v624 + 0x7348, v625, v177, v178);
        v624 = gui_script_strings;
      }
      v626 = *(v77 + 0xC);
      if ( *(v624 + 0x1D16) != 3 || *(v624 + 0x1D14) != v626 )
      {
        *(v624 + 0x1D16) = 3;
        *(v624 + 0x1D14) = v626;
        gui_call_interop_(v624 + 0x7428, v625, v177, v178);
        v624 = gui_script_strings;
      }
      v627 = *(v77 + 0x10);
      if ( *(v624 + 0x1D24) != 3 || *(v624 + 0x1D22) != v627 )
      {
        *(v624 + 0x1D24) = 3;
        *(v624 + 0x1D22) = v627;
        gui_call_interop_(v624 + 0x7460, v625, v177, v178);
        v624 = gui_script_strings;
      }
      air_movement_2 = air_movement_;
      v629 = game;
      v630 = *(*(game + 0x440) + 0x97Fi64);
      if ( *(v624 + 0x109E) != 5 || v624[0x4270] != v630 )
      {
        *(v624 + 0x109E) = 5;
        v624[0x4270] = v630;
        gui_call_interop(v624 + 0x4248, *(*(v629 + 0x440) + 0x97Fi64), v177, v178);
      }
      LOBYTE(v996) = 0;
      LOBYTE(v995) = 0;
      UnitWeaponInfo = *(mUnit__ + 0x11D0);
      if ( *(mUnit__ + 0x11D8) == *(mUnit__ + 0x11E0) && *(UnitWeaponInfo + 0x13B0) == *(UnitWeaponInfo + 0x13B8) )
      {
        v632 = 0i64;
      }
      else
      {
        LOBYTE(v996) = 1;
        LOBYTE(v995) = 1;
        *Str = &mUnit__;
        *&Str[8] = &XPosition_;
        *&v1005 = &v996;
        *(&v1005 + 1) = &v995;
        sub_B8BFD0(mUnit__, Str);
        *Str = &v996;
        *&Str[8] = &v995;
        sub_B8C2B0(UnitWeaponInfo, Str);
        v632 = v996;
      }
      v633 = gui_script_strings;
      if ( *(gui_script_strings + 0x10AC) != 5 || *(gui_script_strings + 0x42A8) != v632 )
      {
        *(gui_script_strings + 0x10AC) = 5;
        v633[0x42A8] = v632;
        gui_call_interop(v633 + 0x4280, v632, v177, v178);
        v633 = gui_script_strings;
      }
      v634 = LOBYTE(v995);
      if ( *(v633 + 0x10BA) != 5 || v633[0x42E0] != LOBYTE(v995) )
      {
        *(v633 + 0x10BA) = 5;
        v633[0x42E0] = v634;
        gui_call_interop(v633 + 0x42B8, v634, v177, v178);
      }
      LODWORD(v981) = 0;
      LOBYTE(v635) = sub_B7C230(mUnit__, &v981);
      v639 = v635;
      v640 = gui_script_strings;
      v641 = *&v981;
      v642 = dword_44890B4;
      v642.m128_f32[0] = *&dword_44890B4 * *&v981;
      v643 = _mm_or_ps(_mm_and_ps(SIGN_BIT_MASK, v642), xmmword_44C0110);
      v643.m128_f32[0] = v643.m128_f32[0] + (*&dword_44890B4 * *&v981);
      LODWORD(v644) = _mm_round_ss(v643, v643, 0xB).m128_u32[0];
      if ( *(gui_script_strings + 0x840) != 3 || *(gui_script_strings + 0x83E) != v644 )
      {
        *(gui_script_strings + 0x840) = 3;
        *(v640 + 0x83E) = v644;
        gui_call_interop_(v640 + 0x20D0, v636, v637, v638);
        v640 = gui_script_strings;
      }
      if ( *(v640 + 0x8F6) != 5 || v640[0x23D0] != v639 )
      {
        *(v640 + 0x8F6) = 5;
        v640[0x23D0] = v639;
        gui_call_interop(v640 + 0x23A8, v639, v637, v638);
        v640 = gui_script_strings;
      }
      v645 = game;
      v646 = *(game + 0x498);
      if ( v641 <= *(v646 + 0x2128) )
      {
        v649 = v641 < *(v646 + 0x2124);
        v647 = v640 + 0x2410;
        v648 = v640 + 0x2408;
        if ( *(v640 + 0x904) != 5 || v640[0x2408] != v649 )
        {
LABEL_812:
          *v647 = 5;
          *v648 = v649;
          v650 = *(v645 + 0x498);
          LOBYTE(v647) = 1;
          if ( v641 <= *(v650 + 0x2128) )
            LOBYTE(v647) = v641 < *(v650 + 0x2124);
          gui_call_interop(v640 + 0x23E0, v647, v637, v638);
        }
      }
      else
      {
        v647 = v640 + 0x2410;
        v648 = v640 + 0x2408;
        v649 = 1;
        if ( *(v640 + 0x904) != 5 || v640[0x2408] != 1 )
          goto LABEL_812;
      }
      LODWORD(v983) = 0;
      v971 = 0.0;
      LODWORD(v987) = 0;
      v979 = 0;
      v978 = 0;
      sub_B7A6C0(mUnit__, &v983, &v971, &v987, &v979, &v978);
      v654 = gui_script_strings;
      v655 = v983;
      if ( *(gui_script_strings + 0x84E) != 1 || *(gui_script_strings + 0x84C) != v983 )
      {
        *(gui_script_strings + 0x84E) = 1;
        *(v654 + 0x84C) = v655;
        sub_B831C0(v654 + 0x2108, v655, v652, v653);
        v654 = gui_script_strings;
      }
      v656 = v971;
      if ( *(v654 + 0x85C) != 3 || v654[0x85A] != v971 )
      {
        *(v654 + 0x85C) = 3;
        v654[0x85A] = v656;
        gui_call_interop_(v654 + 0x2140, v651, v652, v653);
        v654 = gui_script_strings;
      }
      v657 = v979;
      if ( *(v654 + 0x86A) != 5 || *(v654 + 0x21A0) != v979 )
      {
        *(v654 + 0x86A) = 5;
        *(v654 + 0x21A0) = v657;
        gui_call_interop(v654 + 0x2178, v657, v652, v653);
        v654 = gui_script_strings;
      }
      v658 = v987;
      if ( *(v654 + 0x878) != 1 || *(v654 + 0x876) != v987 )
      {
        *(v654 + 0x878) = 1;
        *(v654 + 0x876) = v658;
        sub_B831C0(v654 + 0x21B0, v658, v652, v653);
        v654 = gui_script_strings;
      }
      v659 = v978;
      if ( *(v654 + 0x886) != 5 || *(v654 + 0x2210) != v978 )
      {
        *(v654 + 0x886) = 5;
        *(v654 + 0x2210) = v659;
        gui_call_interop(v654 + 0x21E8, v659, v652, v653);
      }
      v985 = 0.0;
      if ( (*(mUnit__ + 0x1083) & 8) != 0 )
      {
        v661 = *(air_movement_2 + 0x5C4C);
      }
      else
      {
        v660 = (((*(*(game + 0x418) + 0x1F8i64) + *(mUnit__ + 0x9C4))
               * *(qword_4AD8F98 + 0x28i64 * *(*(game + 0x430) + 0x94i64)))
              + *&screenScaleFactor);
        v661 = 0i64;
        if ( v660 > 0 )
          v661 = v660;
      }
      v662 = gui_script_strings;
      if ( *(gui_script_strings + 0xAFC) != 1 || *(gui_script_strings + 0xAFA) != v661 )
      {
        *(gui_script_strings + 0xAFC) = 1;
        *(v662 + 0xAFA) = v661;
        sub_B831C0(v662 + 0x2BC0, v661, v652, v653);
        v662 = gui_script_strings;
      }
      v663 = *(air_movement_2 + 0x988);
      if ( *(v662 + 0xB0A) != 3 || v662[0xB08] != v663 )
      {
        *(v662 + 0xB0A) = 3;
        v662[0xB08] = v663;
        gui_call_interop_(v662 + 0x2BF8, v661, v652, v653);
        v662 = gui_script_strings;
      }
      v664 = 0i64;
      v665 = v655 <= *(air_movement_2 + 0x5524);
      if ( *(v662 + 0xB18) != 5 || *(v662 + 0x2C58) != v665 )
      {
        *(v662 + 0xB18) = 5;
        *(v662 + 0x2C58) = v665;
        LOBYTE(v661) = v655 <= *(air_movement_2 + 0x5524);
        gui_call_interop(v662 + 0x2C30, v661, v652, v653);
      }
      v666 = byte_4B19A94 ^ 1u;
      v667 = v666 + 0x400;
      v668 = !((byte_4B19A94 == 0) & (*(mUnit__ + 0x1083) >> 3)) << 0xA;
      if ( ((byte_4B19A94 == 0) & (*(mUnit__ + 0x1083) >> 3)) != 0 )
        v667 = byte_4B19A94 ^ 1;
      v669 = *(air_movement_2 + 0x19EA);
      *&v670 = 0.0;
      if ( *(air_movement_2 + 0x19EA) && !byte_4B19A94 )
      {
        v671 = *(air_movement_2 + 0x57F8) != 0;
        if ( *(HudInfo + 0x27) )
          v671 = *(air_movement_2 + 0x57F8);
        v672 = gui_script_strings;
        v673 = v671 >= 2;
        if ( *(gui_script_strings + 0x894) != 5 || *(gui_script_strings + 0x2248) != v673 )
        {
          LOBYTE(v666) = v671 >= 2;
          *(gui_script_strings + 0x894) = 5;
          v672[0x2248] = v673;
          gui_call_interop(v672 + 0x2220, v666, v652, v653);
        }
        if ( v671 > 0 )
        {
          v674 = 0i64;
          *&v670 = 0.0;
          do
          {
            if ( !*(**(*(air_movement_2 + 0x3AC8) + 8 * v674 + 8) + 1i64) )
            {
              LOBYTE(air_movement_2) = _bittest(&v669, v674);
              *Str = 0;
              LODWORD(v974) = 0;
              v998 = 4;
              sub_B7A390(mUnit__, v674, &v998, &v974, Str);
              v667 |= 2 << v674;
              v670 |= 2 << v674;
              v668 |= 2 << v674;
              sub_B8C330(v998, *Str, v974, v674);
              v675 = air_movement_2;
              air_movement_2 = air_movement_;
              sub_B8C6A0("updateEngineControl", v674, v675);
            }
            ++v674;
          }
          while ( v671 != v674 );
        }
      }
      v676 = *(*(game + 0x430) + 0x1Ci64);
      if ( (v676 & 0xFFFFFFFD) == 0 || byte_4B19A94 || (*(mUnit__ + 0x1083) & 8) != 0 )
      {
        v667 |= 0x100u;
        v668 |= 0x100u;
      }
      v677 = v670;
      if ( ballistics_A68_qword )
      {
        v678 = 0;
        if ( v656 > *(ballistics_A68_qword + 0x2B4) )
          v678 = (~*(mUnit__ + 0x1080) >> 0x12) & 0x200;
        v667 |= v678;
      }
      if ( (v676 - 1) <= 1 && (*(mUnit__ + 0x1083) & 8) == 0 )
      {
        v667 |= 0x80u;
        v668 |= 0x80u;
      }
      if ( v1021 >= 0 )
      {
        sub_B8C7A0(0, v1021, v652, BYTE6(v1025), v1023, SBYTE12(v1023), v1027);
        v667 |= 0x400000u;
        v677 = v670 | 0x400000;
        sub_B8C6A0(&unk_4868746, 0i64, v1025);
        sub_B8C6A0("updateisCannonJamed", 0i64, BYTE3(v1025));
      }
      if ( (SDWORD1(v1021) & 0x80000000) == 0 )
      {
        sub_B8C7A0(1, DWORD1(v1021), v652, HIBYTE(v1025), SBYTE4(v1023), v1024, SBYTE4(v1027));
        v667 |= 0x800000u;
        v677 |= 0x800000u;
        sub_B8C6A0(&unk_4868746, 1i64, BYTE1(v1025));
        sub_B8C6A0("updateisCannonJamed", 1i64, BYTE4(v1025));
      }
      if ( (SDWORD2(v1021) & 0x80000000) == 0 )
      {
        sub_B8C7A0(2, DWORD2(v1021), v652, v1026, SBYTE8(v1023), SBYTE4(v1024), v1028);
        v667 |= 0x1000000u;
        v677 |= 0x1000000u;
        sub_B8C6A0(&unk_4868746, 2i64, BYTE2(v1025));
        sub_B8C6A0("updateisCannonJamed", 2i64, BYTE5(v1025));
      }
      if ( v1029 >= 0 )
      {
        sub_B8C8F0(0, v1029, v652, HIBYTE(v1033), v1031, SBYTE12(v1031), v1035);
        v667 |= 0x80000u;
        v677 |= 0x80000u;
        sub_B8CA40(0i64, v1033);
      }
      if ( (SDWORD1(v1029) & 0x80000000) == 0 )
      {
        sub_B8C8F0(1, DWORD1(v1029), v652, v1034, SBYTE4(v1031), v1032, SBYTE4(v1035));
        v667 |= 0x100000u;
        v677 |= 0x100000u;
        sub_B8CA40(1i64, BYTE1(v1033));
      }
      v679 = DWORD2(v1029);
      if ( (SDWORD2(v1029) & 0x80000000) == 0 )
      {
        sub_B8C8F0(2, DWORD2(v1029), v652, HIBYTE(v1034), SBYTE8(v1031), SBYTE4(v1032), v1036);
        v667 |= 0x200000u;
        v677 |= 0x200000u;
        sub_B8CA40(2i64, BYTE2(v1033));
      }
      if ( v1037 >= 0 )
      {
        v680 = 0i64;
        if ( mUnit__ == LocalUnit )
        {
          v681 = *(mUnit__ + 0x4160);
          if ( !*(v681 + 0x3F3) || (v680 = 4i64, !*(*(game + 0x440) + 0x97Di64)) )
          {
            v680 = 0i64;
            if ( *(v681 + 0x3EF) )
              v680 = 2 * *(*(game + 0x440) + 0xA8Ci64);
          }
        }
        if ( *(*(game + 0x440) + 0xA8Ei64) )
          LOBYTE(v653) = *(*(mUnit__ + 0x11D0) + 0x2CCi64) == 2 || *(*(mUnit__ + 0x11D0) + 0x2CCi64) >= 4;
        else
          v653 = 0i64;
        sub_B8CB40(v1037, v679, v680, v653);
        v667 |= 0x4000000u;
        v677 |= 0x4000000u;
        v682 = gui_script_strings;
        v683 = v1057;
        if ( *(gui_script_strings + 0xA38) != 5 || *(gui_script_strings + 0x28D8) != v1057 )
        {
          *(gui_script_strings + 0xA38) = 5;
          v682[0x28D8] = v683;
          gui_call_interop(v682 + 0x28B0, v683, v652, v653);
        }
      }
      if ( v1040 >= 0 )
      {
        v964 = *&v667;
        v684 = 0;
        if ( mUnit__ == LocalUnit )
        {
          v690 = *(mUnit__ + 0x4160);
          if ( !*(v690 + 0x3F2) || (v684 = 4, !*(*(game + 0x440) + 0x97Di64)) )
          {
            v684 = 0;
            if ( *(v690 + 0x3EE) )
              v684 = 2 * *(*(game + 0x440) + 0xA8Di64);
          }
        }
        v664 = 0i64;
        v1008 = 0i64;
        v1007 = 0i64;
        v1006 = 0i64;
        v1005 = 0i64;
        *Str = 0i64;
        v685 = sub_288270(*(mUnit__ + 0x11D0), 3i64);
        LOBYTE(v686) = 0xFF;
        if ( v685 )
        {
          v687 = v685;
          v688 = strlen(Str);
          *&Str[v688] = qword_49E7BED;
          Str[v688 + 8] = byte_49E7BF5;
          v689 = *(v687 + 0xC0) ? *(v687 + 0xB0) : &szFile;
          strcat(Str, v689);
          v691 = strlen(Str);
          *&Str[v691] = 0x6F68732F;
          *&Str[v691 + 3] = 0x74726F;
          if ( v1041 )
          {
            v693 = *(mUnit__ + 0x11D0);
            v694 = *(v693 + 0x2C8);
            v695 = *(v693 + 0x2B0);
            v696 = 3 * v694;
            v697 = *(v695 + 8 * v696 + 0x10);
            if ( *(v695 + 8 * v696 + 0x10) )
            {
              v698 = *(v695 + 8 * v696);
              v699 = 0i64;
              v686 = 0;
              do
              {
                LOBYTE(v692) = 1;
                v686 += (*(**(v698 + 8 * v699) + 0x88i64))(*(v698 + 8 * v699), v692);
                ++v699;
              }
              while ( v697 != v699 );
            }
            else
            {
              LOBYTE(v686) = 0;
            }
          }
        }
        if ( !*(HudInfo + 0x450) && *(air_movement_ + 0x568F) && sub_287F50(*(mUnit__ + 0x11D0), 3i64) )
        {
          v664 = *(air_movement_ + 0x5ADC);
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(air_movement_ + 0x12F0) - v664.m128_f32[0]) & FABSF_MASK) >= *&dword_44A49C0 )
          {
            if ( ((*(game + 0x2D8) * *&qword_44819B0) & 1) != 0 )
              v684 |= 0x20 * (v664.m128_f32[0] <= *&screenScaleFactor) + 0x20;
            v664.m128_u64[1] = v33.m128_u64[1];
          }
          else
          {
            v684 |= 8 * (v664.m128_f32[0] <= *&screenScaleFactor) + 8;
          }
        }
        sub_B8CEC0(v1040, DWORD2(v1040), v684, v1041, v1042, Str, v686, SBYTE8(v1040), SBYTE12(v1040));
        v700 = gui_script_strings;
        v701 = BYTE1(v1057);
        if ( *(gui_script_strings + 0xA54) != 5 || *(gui_script_strings + 0x2948) != BYTE1(v1057) )
        {
          *(gui_script_strings + 0xA54) = 5;
          v700[0x2948] = v701;
          gui_call_interop(v700 + 0x2920, v701, v652, v653);
        }
        v667 = LODWORD(v964) | 0x800;
        v677 |= 0x800u;
        v668 |= 0x800u;
      }
      if ( v1043 < 0 )
      {
        v967 = 0.0;
      }
      else
      {
        v664 = 0i64;
        v1008 = 0i64;
        v1007 = 0i64;
        v1006 = 0i64;
        v1005 = 0i64;
        *Str = 0i64;
        v702 = sub_288270(*(mUnit__ + 0x11D0), 7i64);
        v705 = 0xFFFFFFFF;
        if ( v702 )
        {
          v706 = v702;
          v707 = strlen(Str);
          *&Str[v707] = qword_49E7BED;
          Str[v707 + 8] = byte_49E7BF5;
          v708 = *(v706 + 0xC0) ? *(v706 + 0xB0) : &szFile;
          strcat(Str, v708);
          v709 = strlen(Str);
          *&Str[v709] = 0x6F68732F;
          *&Str[v709 + 3] = 0x74726F;
          if ( v1044 )
          {
            v711 = *(mUnit__ + 0x11D0);
            v712 = *(v711 + 0x2C8);
            v713 = *(v711 + 0x2B0);
            v714 = 3 * v712;
            v715 = *(v713 + 8 * v714 + 0x10);
            if ( *(v713 + 8 * v714 + 0x10) )
            {
              v716 = *(v713 + 8 * v714);
              v717 = 0i64;
              v705 = 0;
              do
              {
                LOBYTE(v710) = 1;
                v705 += (*(**(v716 + 8 * v717) + 0x88i64))(*(v716 + 8 * v717), v710);
                ++v717;
              }
              while ( v715 != v717 );
            }
            else
            {
              v705 = 0;
            }
          }
        }
        sub_B8D030(v1043, Str, v703, v704, v1044, Str, v705);
        v718 = gui_script_strings;
        v719 = BYTE2(v1057);
        if ( *(gui_script_strings + 0xA62) != 5 || *(gui_script_strings + 0x2980) != BYTE2(v1057) )
        {
          *(gui_script_strings + 0xA62) = 5;
          v718[0x2980] = v719;
          gui_call_interop(v718 + 0x2958, v719, v652, v653);
        }
        v667 |= 0x4000u;
        v677 |= 0x4000u;
        v668 |= 0x4000u;
        LODWORD(v967) = 0x4000;
      }
      if ( v1045 >= 0 )
      {
        v664 = 0i64;
        v1008 = 0i64;
        v1007 = 0i64;
        v1006 = 0i64;
        v1005 = 0i64;
        *Str = 0i64;
        v720 = sub_288270(*(mUnit__ + 0x11D0), 8i64);
        v722 = 0xFFFFFFFF;
        if ( v720 )
        {
          v723 = v720;
          v724 = strlen(Str);
          *&Str[v724] = qword_49E7BED;
          Str[v724 + 8] = byte_49E7BF5;
          v725 = *(v723 + 0xC0) ? *(v723 + 0xB0) : &szFile;
          strcat(Str, v725);
          v726 = strlen(Str);
          *&Str[v726] = 0x6F68732F;
          *&Str[v726 + 3] = 0x74726F;
          if ( v1046 )
          {
            v727 = *(mUnit__ + 0x11D0);
            v728 = *(v727 + 0x2C8);
            v729 = *(v727 + 0x2B0);
            v730 = 3 * v728;
            v731 = *(v729 + 8 * v730 + 0x10);
            if ( *(v729 + 8 * v730 + 0x10) )
            {
              v732 = *(v729 + 8 * v730);
              v733 = 0i64;
              v722 = 0;
              do
              {
                LOBYTE(v721) = 1;
                v722 += (*(**(v732 + 8 * v733) + 0x88i64))(*(v732 + 8 * v733), v721);
                ++v733;
              }
              while ( v731 != v733 );
            }
            else
            {
              v722 = 0;
            }
          }
        }
        sub_B8D490(v1045, v721, v1046, Str, v722);
        v734 = gui_script_strings;
        v735 = BYTE3(v1057);
        if ( *(gui_script_strings + 0xA70) != 5 || *(gui_script_strings + 0x29B8) != BYTE3(v1057) )
        {
          *(gui_script_strings + 0xA70) = 5;
          v734[0x29B8] = v735;
          gui_call_interop(v734 + 0x2990, v735, v652, v653);
        }
        v667 |= 0x8000u;
        v677 |= 0x8000u;
      }
      if ( v1047 >= 0 )
      {
        v964 = *&v667;
        v736 = 0xFFFFFFFF;
        v737 = 0xFFFFFFFF;
        if ( mUnit__ == LocalUnit )
        {
          v738 = *(mUnit__ + 0x4160);
          v739 = 0;
          if ( *(*(game + 0x498) + 0x2788i64) && *(v738 + 0x3F5) )
            v739 = 4 * (*(*(game + 0x440) + 0x97Di64) != 0);
          v737 = (2 * *(v738 + 0x3F1)) | v739;
          if ( !*(HudInfo + 0x450) )
          {
            v740 = v34;
            v741 = v33.m128_i32[0];
            if ( *(air_movement_ + 0x568F) )
            {
              v33.m128_u64[0] = v35;
              v742 = v740;
              if ( sub_287F50(*(mUnit__ + 0x11D0), 9i64) )
              {
                v743 = *(air_movement_ + 0x5ADC);
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(air_movement_ + 0x12F0) - v743) & FABSF_MASK) < *&dword_44A49C0 )
                {
                  v744 = 8 * (v743 <= *&screenScaleFactor) + 8;
                  goto LABEL_1004;
                }
                if ( ((*(game + 0x2D8) * *&qword_44819B0) & 1) != 0 )
                {
                  v744 = 0x20 * (v743 <= *&screenScaleFactor) + 0x20;
LABEL_1004:
                  v737 |= v744;
                }
              }
              v777 = v741;
              v34 = v742;
              v35 = v33.m128_u64[0];
              v33.m128_i32[0] = v777;
            }
            else
            {
              v34 = v740;
            }
          }
        }
        v664 = 0i64;
        v1008 = 0i64;
        v1007 = 0i64;
        v1006 = 0i64;
        v1005 = 0i64;
        *Str = 0i64;
        v778 = sub_288270(*(mUnit__ + 0x11D0), 9i64);
        if ( v778 )
        {
          v780 = v778;
          v781 = strlen(Str);
          *&Str[v781] = qword_49E7BED;
          Str[v781 + 8] = byte_49E7BF5;
          v782 = *(v780 + 0xC0) ? *(v780 + 0xB0) : &szFile;
          strcat(Str, v782);
          v783 = strlen(Str);
          *&Str[v783] = 0x6F68732F;
          *&Str[v783 + 3] = 0x74726F;
          if ( v1048 )
          {
            v784 = *(mUnit__ + 0x11D0);
            v785 = *(v784 + 0x2C8);
            v786 = *(v784 + 0x2B0);
            v787 = 3 * v785;
            v788 = *(v786 + 8 * v787 + 0x10);
            if ( *(v786 + 8 * v787 + 0x10) )
            {
              v789 = *(v786 + 8 * v787);
              v790 = 0i64;
              v736 = 0;
              do
              {
                LOBYTE(v779) = 1;
                v736 += (*(**(v789 + 8 * v790) + 0x88i64))(*(v789 + 8 * v790), v779);
                ++v790;
              }
              while ( v788 != v790 );
            }
            else
            {
              v736 = 0;
            }
          }
        }
        sub_B8D830(v1047, v779, v737, v1048, Str, v736);
        v791 = gui_script_strings;
        v792 = BYTE4(v1057);
        if ( *(gui_script_strings + 0xA7E) != 5 || *(gui_script_strings + 0x29F0) != BYTE4(v1057) )
        {
          *(gui_script_strings + 0xA7E) = 5;
          v791[0x29F0] = v792;
          gui_call_interop(v791 + 0x29C8, v792, v652, v653);
        }
        v667 = LODWORD(v964) | 0x10000;
        v677 |= 0x10000u;
        v668 |= 0x10000u;
      }
      if ( v1049 >= 0 )
      {
        v964 = *&v667;
        LOBYTE(v793) = 0xFF;
        v794 = 0xFFFFFFFF;
        if ( mUnit__ == LocalUnit )
        {
          v795 = *(mUnit__ + 0x4160);
          v796 = *(v795 + 0x3F5) ? 4 * (*(*(game + 0x440) + 0x97Di64) != 0) : 0;
          v794 = (2 * *(v795 + 0x3F1)) | v796;
          if ( !*(HudInfo + 0x450) )
          {
            v797 = v34;
            v798 = v33.m128_i32[0];
            if ( *(air_movement_ + 0x568F) )
            {
              v33.m128_u64[0] = v35;
              v799 = v797;
              if ( sub_287F50(*(mUnit__ + 0x11D0), 4i64) )
              {
                v800 = *(air_movement_ + 0x5ADC);
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(air_movement_ + 0x12F0) - v800) & FABSF_MASK) < *&dword_44A49C0 )
                {
                  v801 = 8 * (v800 <= *&screenScaleFactor) + 8;
                  goto LABEL_1033;
                }
                if ( ((*(game + 0x2D8) * *&qword_44819B0) & 1) != 0 )
                {
                  v801 = 0x20 * (v800 <= *&screenScaleFactor) + 0x20;
LABEL_1033:
                  v794 |= v801;
                }
              }
              v802 = v798;
              v34 = v799;
              v35 = v33.m128_u64[0];
              v33.m128_i32[0] = v802;
            }
            else
            {
              v34 = v797;
            }
          }
        }
        v664 = 0i64;
        v1008 = 0i64;
        v1007 = 0i64;
        v1006 = 0i64;
        v1005 = 0i64;
        *Str = 0i64;
        v803 = sub_288270(*(mUnit__ + 0x11D0), 4i64);
        if ( v803 )
        {
          v804 = v803;
          v805 = strlen(Str);
          *&Str[v805] = qword_49E7BED;
          Str[v805 + 8] = byte_49E7BF5;
          v806 = *(v804 + 0xC0) ? *(v804 + 0xB0) : &szFile;
          strcat(Str, v806);
          v807 = strlen(Str);
          *&Str[v807] = 0x6F68732F;
          *&Str[v807 + 3] = 0x74726F;
          if ( v1050 )
          {
            v809 = *(mUnit__ + 0x11D0);
            v810 = *(v809 + 0x2C8);
            v811 = *(v809 + 0x2B0);
            v812 = 3 * v810;
            v813 = *(v811 + 8 * v812 + 0x10);
            if ( *(v811 + 8 * v812 + 0x10) )
            {
              v814 = *(v811 + 8 * v812);
              v815 = 0i64;
              v793 = 0;
              do
              {
                LOBYTE(v808) = 1;
                v793 += (*(**(v814 + 8 * v815) + 0x88i64))(*(v814 + 8 * v815), v808);
                ++v815;
              }
              while ( v813 != v815 );
            }
            else
            {
              LOBYTE(v793) = 0;
            }
          }
        }
        sub_B8DC20(v1049, DWORD2(v1049), v794, v1050, v1051, Str, v793, SBYTE8(v1049), SBYTE12(v1049));
        v816 = gui_script_strings;
        v817 = BYTE5(v1057);
        if ( *(gui_script_strings + 0xA8C) != 5 || *(gui_script_strings + 0x2A28) != BYTE5(v1057) )
        {
          *(gui_script_strings + 0xA8C) = 5;
          v816[0x2A28] = v817;
          gui_call_interop(v816 + 0x2A00, v817, v652, v653);
        }
        v667 = LODWORD(v964) | 0x1000;
        v677 |= 0x1000u;
        v668 |= 0x1000u;
      }
      v964 = *&v667;
      if ( v1052 >= 0 )
      {
        v818 = 0;
        if ( mUnit__ == LocalUnit && !*(HudInfo + 0x450) )
        {
          v819 = v34;
          v820 = v33.m128_i32[0];
          if ( *(air_movement_ + 0x568F) )
          {
            v33.m128_u64[0] = v35;
            v821 = v819;
            if ( !sub_287F50(*(mUnit__ + 0x11D0), 6i64) )
              goto LABEL_1056;
            v822 = *(air_movement_ + 0x5ADC);
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(air_movement_ + 0x12F0) - v822) & FABSF_MASK) >= *&dword_44A49C0 )
            {
              v961 = v820;
              v34 = v821;
              v35 = v33.m128_u64[0];
              v33.m128_i32[0] = v961;
              if ( ((*(game + 0x2D8) * *&qword_44819B0) & 1) != 0 )
                v818 = 0x20 * (v822 <= *&screenScaleFactor) + 0x20;
            }
            else
            {
              v818 = 8 * (v822 <= *&screenScaleFactor) + 8;
LABEL_1056:
              v823 = v820;
              v34 = v821;
              v35 = v33.m128_u64[0];
              v33.m128_i32[0] = v823;
            }
          }
          else
          {
            v34 = v819;
          }
        }
        v664 = 0i64;
        v1008 = 0i64;
        v1007 = 0i64;
        v1006 = 0i64;
        v1005 = 0i64;
        *Str = 0i64;
        if ( sub_288270(*(mUnit__ + 0x11D0), 6i64) )
        {
          v824 = strlen(Str);
          *&Str[v824] = qword_49E7BED;
          Str[v824 + 8] = byte_49E7BF5;
          v825 = mUnit__;
          v826 = *(**(*(*(mUnit__ + 0x11D0) + 0x2B0i64) + 0x18i64 * *(*(mUnit__ + 0x11D0) + 0x2C8i64)) + 0x340i64);
          if ( *(v826 + 0xC0) )
            v827 = *(v826 + 0xB0);
          else
            v827 = &szFile;
          strcat(Str, v827);
          v829 = strlen(Str);
          *&Str[v829] = 0x6F68732F;
          *&Str[v829 + 3] = 0x74726F;
          v831 = *(v825 + 0x11D0);
          v832 = *(v831 + 0x2C8);
          v833 = *(v831 + 0x2B0);
          v834 = 3 * v832;
          v835 = *(v833 + 8 * v834 + 0x10);
          if ( *(v833 + 8 * v834 + 0x10) )
          {
            v836 = *(v833 + 8 * v834);
            v837 = 0i64;
            v828 = 0;
            do
            {
              LOBYTE(v830) = 1;
              v828 += (*(**(v836 + 8 * v837) + 0x88i64))(*(v836 + 8 * v837), v830);
              ++v837;
            }
            while ( v835 != v837 );
          }
          else
          {
            LOBYTE(v828) = 0;
          }
        }
        else
        {
          LOBYTE(v828) = 0xFF;
        }
        sub_B8DD90(v1052, DWORD2(v1052), v818, v1053, v1054, Str, v828, SBYTE8(v1052), SBYTE12(v1052));
        v838 = gui_script_strings;
        v839 = BYTE6(v1057);
        if ( *(gui_script_strings + 0xA46) != 5 || *(gui_script_strings + 0x2910) != BYTE6(v1057) )
        {
          *(gui_script_strings + 0xA46) = 5;
          v838[0x2910] = v839;
          gui_call_interop(v838 + 0x28E8, v839, v652, v653);
        }
        LODWORD(v964) |= 0x2000u;
        v677 |= 0x2000u;
        v668 |= 0x2000u;
      }
      v840 = 1;
      if ( *(mUnit__ + 0x1238) )
      {
        v841 = *(mUnit__ + 0x1228);
        v842 = 8i64 * *(mUnit__ + 0x1238);
        v843 = 0i64;
        while ( 1 )
        {
          v844 = *(v841 + v843);
          if ( v844 )
          {
            if ( (*(*v844 + 8i64))(*(v841 + v843)) == 2 && !v844[0x34] )
              break;
          }
          v843 += 8i64;
          if ( v842 == v843 )
            goto LABEL_1079;
        }
        v840 = 0;
      }
LABEL_1079:
      v845 = *(game + 0x440);
      v846 = 0;
      if ( !v840 )
        v846 = 2 * *(v845 + 0xA73);
      LODWORD(v847) = *(v845 + 0xA72) | v846;
      if ( v1055 < 0 )
      {
        v848 = v964;
      }
      else
      {
        sub_B8DF00("updateFlares", v1055, v847);
        LODWORD(v848) = LODWORD(v964) | 0x20000;
        v677 |= 0x20000u;
        v668 |= 0x20000u;
        v849 = gui_script_strings;
        v850 = HIBYTE(v1057);
        if ( *(gui_script_strings + 0xA9A) != 5 || *(gui_script_strings + 0x2A60) != HIBYTE(v1057) )
        {
          *(gui_script_strings + 0xA9A) = 5;
          v849[0x2A60] = v850;
          gui_call_interop(v849 + 0x2A38, v850, v652, v653);
        }
      }
      if ( (SDWORD2(v1055) & 0x80000000) == 0 )
      {
        sub_B8DF00("updateChaffs", DWORD2(v1055), v847);
        LODWORD(v848) |= 0x40000u;
        v677 |= 0x40000u;
        v668 |= 0x40000u;
        v851 = gui_script_strings;
        v852 = v1058;
        if ( *(gui_script_strings + 0xAA8) != 5 || *(gui_script_strings + 0x2A98) != v1058 )
        {
          *(gui_script_strings + 0xAA8) = 5;
          v851[0x2A98] = v852;
          gui_call_interop(v851 + 0x2A70, v852, v652, v653);
        }
      }
      v853 = *(mUnit__ + 0x1278);
      if ( *(mUnit__ + 0x1278) )
      {
        LODWORD(v848) |= 0x8000000u;
        v677 |= 0x8000000u;
        v668 |= 0x8000000u;
        v847 = *(mUnit__ + 0x1268);
        v854 = 0i64;
        v855 = 0;
        do
        {
          v856 = v847[v854];
          if ( v856[0x18] )
          {
            ++v855;
          }
          else if ( (*(*v856 + 0x30i64))(v856) )
          {
            v857 = 1;
            goto LABEL_1098;
          }
          ++v854;
        }
        while ( v853 != v854 );
        v857 = 3;
LABEL_1098:
        v858 = 2i64;
        if ( v855 != v853 )
          v858 = v857;
        v859 = gui_script_strings;
        if ( *(gui_script_strings + 0xAC4) != 1 || *(gui_script_strings + 0xAC2) != v858 )
        {
          *(gui_script_strings + 0xAC4) = 1;
          v859[0xAC2] = v858;
          sub_B831C0(v859 + 0x2AE0, v858, v652, v653);
        }
      }
      if ( (*(mUnit__ + 0x1083) & 8) != 0 && !byte_4B19A94 )
      {
        v860 = *(mUnit__ + 0x11D0);
        if ( *(v860 + 0x2E0) )
        {
          v861 = *(v860 + 0x2D0);
          v862 = 8i64 * *(v860 + 0x2E0);
          v863 = 0i64;
          while ( 1 )
          {
            v847 = *(v861 + v863);
            if ( v847 )
            {
              if ( (*(*v847 + 0x108i64))(*(v861 + v863)) )
              {
                v864 = v847[0x56];
                if ( v864 )
                {
                  v664 = *(v864 + 0x84);
                  if ( v664.m128_f32[0] > 0.0 )
                    break;
                }
              }
            }
            v863 += 8i64;
            if ( v862 == v863 )
              goto LABEL_1116;
          }
          v865 = v664.m128_f32[0] > *(v864 + 0x80);
          v866 = gui_script_strings;
          v867 = mUnit__;
          LODWORD(v847) = *(mUnit__ + 0x1A0);
          LOBYTE(v847) = v865 ^ v847 ^ 1;
          if ( *(gui_script_strings + 0x8E8) != 5 || *(gui_script_strings + 0x2398) != v847 )
          {
            *(gui_script_strings + 0x8E8) = 5;
            v866[0x2398] = v847;
            LOBYTE(v867) = *(v867 + 0x1A0) == v865;
            gui_call_interop(v866 + 0x2370, v867, v652, v653);
          }
          LODWORD(v848) |= 0x10000000u;
          v677 |= 0x10000000u;
        }
      }
LABEL_1116:
      v868 = HudInfo;
      *&v869 = 1.5046328e-36;
      if ( *(HudInfo + 0x1C8) )
      {
        v870 = *(mUnit__ + 0x11B0);
        if ( v870 )
        {
          v871 = *(v870 + 0xB18);
          v664 = LODWORD(Y);
          if ( Y > v871 )
          {
            v872 = 4 - (*(v870 + 0xB24) == 0);
            v873 = gui_script_strings;
            if ( *(gui_script_strings + 0xA00) != 1 || *(gui_script_strings + 0x9FE) != v872 )
            {
              *(gui_script_strings + 0xA00) = 1;
              v873[0x9FE] = v872;
              sub_B831C0(v873 + 0x27D0, v872, v652, v653);
              v873 = gui_script_strings;
            }
            v874 = (v871 * *&dword_44890B4);
            if ( v873[0xA0E] != 1 || v873[0xA0C] != v874 )
            {
              v873[0xA0E] = 1;
              v873[0xA0C] = v874;
              sub_B831C0(v873 + 0x2808, v874, v652, v653);
            }
            v985 = 9.4039548e-38;
            *&v869 = 2.4074124e-35;
            v868 = HudInfo;
          }
        }
      }
      if ( *(v868 + 0x2D4) )
      {
        if ( !byte_4B19A94 && (*(mUnit__ + 0x1083) & 8) == 0 )
        {
          v664 = *(ballistics_A68_qword + 0x56C);
          if ( v664.m128_f32[0] <= 0.0 || ((*(game + 0x2D8) * *&qword_44819B0) & 1) == 0 )
          {
            v875 = 0i64;
            if ( v868[0x78] < 2 )
              LODWORD(v847) = 0;
            else
              LOBYTE(v847) = *(v868 + 0x4C) != 0;
            LOBYTE(v875) = v664.m128_f32[0] <= 0.0;
            v876 = gui_script_strings;
            if ( *(gui_script_strings + 0x9E4) != 1 || *(gui_script_strings + 0x9E2) != v875 )
            {
              *(gui_script_strings + 0x9E4) = 1;
              v876[0x9E2] = v875;
              sub_B831C0(v876 + 0x2760, v875, v652, v653);
              v876 = gui_script_strings;
            }
            if ( v876[0x9F2] != 5 || *(v876 + 0x27C0) != v847 )
            {
              v876[0x9F2] = 5;
              *(v876 + 0x27C0) = v847;
              gui_call_interop(v876 + 0x2798, v847, v652, v653);
            }
            v985 = *&v869;
          }
        }
      }
      v964 = v848;
      v966 = *&v677;
      v877 = v668;
      sub_B7C4F0(v1000, mUnit__, &v985, v653);
      sub_B8E230(0i64);
      sub_B8E230(1i64);
      sub_B8E230(2i64);
      sub_B8E230(3i64);
      sub_B8E230(4i64);
      sub_B8E230(5i64);
      sub_B8E230(6i64);
      sub_B8E230(7i64);
      sub_B8E230(8i64);
      sub_B8E230(9i64);
      if ( (*(cur_hud_crosshair + 0x4A70) - 1) <= 1 )
      {
        v880 = *(mUnit__ + 0x11D0);
        if ( *(v880 + 0x1A0) )
        {
          v881 = (cur_hud_crosshair + 0x162D);
          v882 = 0xC0i64;
          v883 = 0i64;
          v884 = Y;
          v885 = *&dword_44A0308;
          v886 = FABSF_MASK;
          v887 = *&screenScaleFactor;
          do
          {
            v888 = *(v880 + 0x190);
            v889 = *(v888 + v882 + 4);
            if ( v889 >= 0 )
            {
              v890 = *(v880 + 0x300);
              if ( *(v890 + 0x10i64 * *(v888 + v882) + 8) > v889 )
              {
                v891 = *(*(v890 + 0x10i64 * *(v888 + v882)) + 8i64 * v889);
                if ( v891 )
                {
                  if ( (*(*v891 + 0x108i64))(v891) )
                  {
                    *v664.m128_u64 = sub_5655B0(game);
                    v664.m128_f32[0] = *v664.m128_u64;
                    v894.m128_i32[0] = *(v891 + 0x448);
                    v895 = _mm_cmplt_ss(0i64, v894);
                    LODWORD(v896) = _mm_andnot_ps(v895, v664).m128_u32[0] | v894.m128_i32[0] & v895.m128_i32[0];
                    v897.m128_i32[0] = *(v891 + 0x444);
                    v898 = _mm_cmplt_ss(0i64, v897);
                    LODWORD(v899) = _mm_andnot_ps(v898, v664).m128_u32[0] | v897.m128_i32[0] & v898.m128_i32[0];
                    v900 = *(v891 + 0x2B0);
                    v901 = *(v891 + 0x43C);
                    if ( !*(v900 + (v901 << 6) + 0xCC)
                      || (v902 = 0.0, COERCE_FLOAT(COERCE_UNSIGNED_INT(v896 - v899) & v886) > v887) )
                    {
                      v903 = sub_11F650(v901, v901 << 6, v892, v893, 0);
                      v902 = *&v903;
                      v900 = *(v891 + 0x2B0);
                      v901 = *(v891 + 0x43C);
                    }
                    v904 = v884;
                    if ( *(v900 + (v901 << 6) + 0xBC) )
                      v904 = v902;
                    if ( *(v891 + 0x505) )
                    {
                      v905 = *(v891 + 0x208);
                      if ( !v905 || (v906 = *(v891 + 0x20), v906 < 0) || (*(*v905 + 0x18i64))(v905, v906, 1i64) )
                        v904 = v884;
                    }
                    v664 = *(mUnit__ + 0x9C8);
                    v664.m128_f32[0] = v664.m128_f32[0] + *(v881 + 0xFFFFFFFB);
                    v907 = *(mUnit__ + 0x9C4) + *(v881 + 0xFFFFFFF7);
                    *Str = *(mUnit__ + 0x9C0) + *(v881 + 0xFFFFFFF3);
                    *&Str[4] = v907;
                    *&Str[8] = v664.m128_i32[0];
                    v974 = 0i64;
                    sub_B971C0(a2, Str, &v974, 0i64);
                    if ( v909 )
                    {
                      sub_1707580(v891 + 0x4A0, v908);
                      v664 = v974;
                      LOBYTE(v913) = v904 > v885;
                      if ( *v881 )
                        sub_B8E330(v911, v910, v912, v913, 1, *(v888 + v882) - 0x11);
                      else
                        sub_B8E330(v911, v910, v912, v913, 0, *(v888 + v882) - 0x11);
                    }
                    else
                    {
                      sub_B8E7C0((*(v888 + v882) - 0x11));
                    }
                  }
                }
              }
            }
            ++v883;
            v881 += 0x28;
            v882 += 0x290i64;
          }
          while ( v883 < *(v880 + 0x1A0) );
        }
      }
      v914 = gui_script_strings;
      v915 = LODWORD(v964);
      if ( *(gui_script_strings + 0x77C) != 1 || *(gui_script_strings + 0x77A) != LODWORD(v964) )
      {
        *(gui_script_strings + 0x77C) = 1;
        *(v914 + 0x77A) = v915;
        sub_B831C0(v914 + 0x1DC0, v915, v878, v879);
        v914 = gui_script_strings;
      }
      v916 = v1003;
      v917 = v967;
      v918 = LODWORD(v985);
      if ( *(v914 + 0x78A) != 1 || *(v914 + 0x788) != LODWORD(v985) )
      {
        *(v914 + 0x78A) = 1;
        *(v914 + 0x788) = v918;
        sub_B831C0(v914 + 0x1DF8, v918, v878, v879);
        v914 = gui_script_strings;
      }
      v919 = v1000;
      v920 = LODWORD(v966);
      if ( *(v914 + 0x798) != 1 || *(v914 + 0x796) != LODWORD(v966) )
      {
        *(v914 + 0x798) = 1;
        *(v914 + 0x796) = v920;
        sub_B831C0(v914 + 0x1E30, v920, v878, v879);
        v914 = gui_script_strings;
      }
      if ( *(v914 + 0x7A6) != 1 || *(v914 + 0x7A4) != 0x103 )
      {
        *(v914 + 0x7A6) = 1;
        *(v914 + 0x7A4) = 0x103;
        sub_B831C0(v914 + 0x1E68, 0x103i64, v878, v879);
        v914 = gui_script_strings;
      }
      if ( *(v914 + 0x7B4) != 1 || *(v914 + 0x7B2) != LODWORD(v917) )
      {
        *(v914 + 0x7B4) = 1;
        v914[0x7B2] = v917;
        sub_B831C0(v914 + 0x1EA0, LODWORD(v917), v878, v879);
        v914 = gui_script_strings;
      }
      if ( *(v914 + 0x7C2) != 1 || *(v914 + 0x7C0) != v877 )
      {
        *(v914 + 0x7C2) = 1;
        *(v914 + 0x7C0) = v877;
        sub_B831C0(v914 + 0x1ED8, v877, v878, v879);
        v914 = gui_script_strings;
      }
      v921 = *(v919 + 8);
      if ( *(v914 + 0x832) != 2 || *(v914 + 0x830) != v921 )
      {
        *(v914 + 0x832) = 2;
        *(v914 + 0x830) = v921;
        sub_B84B50(v914 + 0x2098, *(v919 + 8), v878, v879);
        v914 = gui_script_strings;
      }
      v922 = *(game + 0x498);
      v923 = v922[0xA02];
      if ( *(v914 + 0xBF8) != 3 || v914[0xBF6] != v923 )
      {
        *(v914 + 0xBF8) = 3;
        v914[0xBF6] = v923;
        gui_call_interop_(v914 + 0x2FB0, v922, v878, v879);
        v914 = gui_script_strings;
        v922 = *(game + 0x498);
      }
      v924 = v922[0xA05];
      if ( *(v914 + 0xC22) != 3 || v914[0xC20] != v924 )
      {
        *(v914 + 0xC22) = 3;
        v914[0xC20] = v924;
        gui_call_interop_(v914 + 0x3058, v922, v878, v879);
        v914 = gui_script_strings;
        v922 = *(game + 0x498);
      }
      v925 = v922[0xA0E];
      if ( *(v914 + 0xCA0) != 3 || v914[0xC9E] != v925 )
      {
        *(v914 + 0xCA0) = 3;
        v914[0xC9E] = v925;
        gui_call_interop_(v914 + 0x3250, v922, v878, v879);
      }
      v926 = byte_4B19A94;
      if ( byte_4B19A94 )
      {
        v927 = v919 + 0x1C;
        v928 = 0x1Di64;
        v929 = 0x1Ei64;
      }
      else if ( (*(mUnit__ + 0x1083) & 8) != 0 )
      {
        v927 = v919 + 0xC;
        v928 = 0xDi64;
        v929 = 0xEi64;
      }
      else
      {
        v927 = v919 + 0x14;
        v928 = 0x15i64;
        v929 = 0x16i64;
      }
      v930 = *v927 + ((*(v919 + v929) << 0x10) | (*(v919 + v928) << 8)) + 0x78000000;
      v931 = gui_script_strings;
      if ( *(gui_script_strings + 0x7D0) != 2 || *(gui_script_strings + 0x7CE) != v930 )
      {
        *(gui_script_strings + 0x7D0) = 2;
        v931[0x7CE] = v930;
        sub_B84B50(v931 + 0x1F10, v930, v878, v879);
        v926 = byte_4B19A94;
      }
      if ( v926 )
      {
        v932 = v919 + 0x1C;
        v933 = 0x1Di64;
        v934 = 0x1Ei64;
      }
      else if ( (*(mUnit__ + 0x1083) & 8) != 0 )
      {
        v932 = (v919 + 2);
        v933 = 0x11i64;
        v934 = 0x12i64;
      }
      else
      {
        v932 = (v919 + 3);
        v933 = 0x19i64;
        v934 = 0x1Ai64;
      }
      v935 = *v932 + ((*(v919 + v934) << 0x10) | (*(v919 + v933) << 8)) + 0x78000000;
      v936 = gui_script_strings;
      if ( *(gui_script_strings + 0x7DE) != 2 || *(gui_script_strings + 0x7DC) != v935 )
      {
        *(gui_script_strings + 0x7DE) = 2;
        v936[0x7DC] = v935;
        sub_B84B50(v936 + 0x1F48, v935, v878, v879);
        v936 = gui_script_strings;
      }
      v937 = *(v919 + 0x3C) + ((*(v919 + 0x3E) << 0x10) | (*(v919 + 0x3D) << 8)) + 0x78000000;
      if ( v936[0x824] != 2 || v936[0x822] != v937 )
      {
        v936[0x824] = 2;
        v936[0x822] = v937;
        sub_B84B50(v936 + 0x2060, v937, v878, v879);
        v936 = gui_script_strings;
      }
      v938 = 3 * ((*(mUnit__ + 0x1083) & 8) == 0);
      v939 = *(v919 + 4 * v938 + 0x24)
           + ((*(v919 + 4 * v938 + 0x26) << 0x10) | (*(v919 + 4 * v938 + 0x25) << 8))
           + 0x78000000;
      if ( v936[0x7EC] != 2 || v936[0x7EA] != v939 )
      {
        v936[0x7EC] = 2;
        v936[0x7EA] = v939;
        sub_B84B50(v936 + 0x1F80, v939, v878, v879);
        v936 = gui_script_strings;
      }
      v940 = *(v919 + 4 * v938 + 0x28)
           + ((*(v919 + 4 * v938 + 0x2A) << 0x10) | (*(v919 + 4 * v938 + 0x29) << 8))
           + 0x78000000;
      if ( v936[0x7FA] != 2 || v936[0x7F8] != v940 )
      {
        v936[0x7FA] = 2;
        v936[0x7F8] = v940;
        sub_B84B50(v936 + 0x1FB8, v940, v878, v879);
        v936 = gui_script_strings;
      }
      v941 = *(v919 + 4 * v938 + 0x2C)
           + ((*(v919 + 4 * v938 + 0x2E) << 0x10) | (*(v919 + 4 * v938 + 0x2D) << 8))
           + 0x78000000;
      if ( v936[0x808] != 2 || v936[0x806] != v941 )
      {
        v936[0x808] = 2;
        v936[0x806] = v941;
        sub_B84B50(v936 + 0x1FF0, v941, v878, v879);
      }
      v6.m128_i32[1] = HIDWORD(v35);
      v6.m128_f32[0] = acosf(fminf((*&v35 * *&v35) + (v1009 * v1009), Y));
      v943 = *&dword_44A02B0 * v6.m128_f32[0];
      if ( v34 >= 0.0 )
      {
        if ( v33.m128_f32[0] < 0.0 )
        {
          v6.m128_u64[0] = dword_44A46B8;
          v6.m128_f32[0] = *&dword_44A46B8 - v943;
          goto LABEL_1228;
        }
      }
      else
      {
        if ( v33.m128_f32[0] < 0.0 )
        {
          v943 = v943 + *&dword_44A46B8;
          goto LABEL_1229;
        }
        v6.m128_f32[0] = v6.m128_f32[0] * *&dword_44A47B8;
LABEL_1228:
        v943 = v6.m128_f32[0];
      }
LABEL_1229:
      v944 = gui_script_strings;
      if ( *(gui_script_strings + 0xED0) != 3 || (v6.m128_u64[0] = *(gui_script_strings + 0xECE), v6.m128_f32[0] != v943) )
      {
        *(gui_script_strings + 0xED0) = 3;
        v944[0xECE] = v943;
        gui_call_interop_(v944 + 0x3B10, v942, v177, v178);
      }
      v945 = *(mUnit__ + 0x11D0);
      v946 = *(v945 + 0x300);
      if ( *(v946 + 0x118) )
      {
        v947 = *(v946 + 0x110);
        v948 = 8i64 * *(v946 + 0x118);
        v949 = 0i64;
        while ( 1 )
        {
          v950 = *(v947 + v949);
          if ( (*(*v950 + 0x198i64))(v950) )
            break;
          v949 += 8i64;
          if ( v948 == v949 )
            goto LABEL_1239;
        }
        if ( v945 )
          sub_B85EC0(v950, mUnit__, a2, v965, v916);
      }
    }
  }
LABEL_1239:
  v951 = gui_script_strings;
  v952 = HudInfo;
  if ( *(HudInfo + 0x415) )
  {
    v953 = *(cur_hud_crosshair + 0x670);
    v6.m128_u64[0] = *(HudInfo + 0x108) ^ SIGN_BIT_MASK;
    if ( v6.m128_f32[0] < v953 )
    {
      v954 = *(HudInfo + 0x107);
      if ( v953 <= v954 )
      {
        v6.m128_i32[1] = 0;
        v6.m128_f32[0] = v954 - v953;
        if ( v954 <= *&epsilon_unk )
        {
          v958 = 0.0;
          if ( v954 < *&dword_449F1AC )
            v958 = v6.m128_f32[0] / v954;
          if ( *(gui_script_strings + 0x117E) == 3 && *(gui_script_strings + 0x117C) == v958 )
            goto LABEL_1260;
          v955 = gui_script_strings + 0x45F8;
          v956 = (gui_script_strings + 0x45F0);
          if ( v954 <= *&epsilon_unk )
          {
            v957 = 0;
            if ( v954 >= *&dword_449F1AC )
            {
LABEL_1256:
              *v955 = 3;
              *v956 = v957;
              if ( v952[0x415] )
              {
                v955 = cur_hud_crosshair;
                v6.m128_u64[0] = *(v952 + 0x108) ^ SIGN_BIT_MASK;
                if ( v6.m128_f32[0] < *(cur_hud_crosshair + 0x670) )
                  v6.m128_u64[0] = *(v952 + 0x107);
              }
              gui_call_interop_(v951 + 0x45C8, v955, v177, v178);
              v951 = gui_script_strings;
              goto LABEL_1260;
            }
          }
        }
        else
        {
          v955 = gui_script_strings + 0x45F8;
          v956 = (gui_script_strings + 0x45F0);
          if ( *(gui_script_strings + 0x117E) == 3 && *(gui_script_strings + 0x117C) == (v6.m128_f32[0] / v954) )
            goto LABEL_1260;
        }
        v6.m128_f32[0] = v6.m128_f32[0] / v954;
        v957 = v6.m128_i32[0];
        goto LABEL_1256;
      }
    }
  }
  v955 = gui_script_strings + 0x45F8;
  v956 = (gui_script_strings + 0x45F0);
  v957 = dword_44801E8;
  if ( *(gui_script_strings + 0x117E) != 3 )
    goto LABEL_1256;
  v6.m128_u64[0] = *(gui_script_strings + 0x117C);
  if ( v6.m128_f32[0] != *&dword_44801E8 )
    goto LABEL_1256;
LABEL_1260:
  v959 = cur_hud_crosshair;
  v960 = *(cur_hud_crosshair + 0x678);
  if ( v951[0x118C] != 5 || *(v951 + 0x4628) != v960 )
  {
    v951[0x118C] = 5;
    *(v951 + 0x4628) = v960;
    gui_call_interop(v951 + 0x4600, *(v959 + 0x678), v177, v178);
  }
  return *v6.m128_u64;
}