__int64 __fastcall unit_restore(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  const char *v10; // rdi
  const char **v11; // rbp
  __int64 v12; // rbx
  char (__stdcall *v13)(); // rbp
  __int64 v14; // rbx
  unsigned int v15; // edi
  unsigned int v16; // r14d
  __int64 v17; // rax
  int v18; // r12d
  int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // edi
  unsigned int v22; // eax
  unsigned int v23; // r8d
  unsigned int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rbp
  unsigned int v28; // eax
  int v29; // eax
  unsigned int v30; // r14d
  int v31; // edi
  unsigned int v32; // ebx
  int v33; // ebp
  __int64 v34; // rcx
  unsigned int v35; // eax
  unsigned int v36; // edx
  unsigned int v37; // eax
  __int64 v38; // rax
  float v39; // xmm8_4
  unsigned int v40; // edi
  __int64 v41; // rax
  int v42; // ebx
  unsigned int v43; // ebp
  int v44; // eax
  unsigned int v45; // edi
  __int64 v46; // rax
  int v47; // ebx
  int v48; // eax
  unsigned int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  _QWORD *v53; // rcx
  _QWORD *v54; // rcx
  __int64 v55; // rax
  unsigned int *v56; // r12
  unsigned __int16 v57; // ax
  bool v58; // r14
  unsigned __int64 v59; // rdi
  unsigned __int64 v60; // r13
  unsigned int v61; // ebp
  char *v62; // rcx
  __int64 v63; // rax
  unsigned __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rdx
  int v67; // edx
  __int64 v68; // rbx
  __int64 v69; // rax
  unsigned int *v70; // rcx
  float v71; // xmm6_4
  float v72; // xmm9_4
  __int64 v73; // r13
  __int64 Unit; // r14
  unsigned __int8 v75; // al
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  _QWORD *v79; // rcx
  __int64 v80; // rax
  char v81; // al
  _QWORD *v82; // rcx
  __int64 v83; // rax
  char v84; // al
  float v85; // xmm0_4
  __int64 WeaponsInfo; // rax
  int v87; // ecx
  int v88; // eax
  __int64 UnitType; // rax
  int v90; // ecx
  __int64 v91; // rax
  __int64 v92; // rax
  CHAR *v93; // rcx
  __int64 v94; // rcx
  __int64 WeaponsInfo_; // rax
  float v96; // xmm0_4
  int v97; // ecx
  int v98; // eax
  __int64 _UnitType_; // rax
  int v100; // ecx
  __int64 v101; // rax
  __int64 v102; // rax
  CHAR *v103; // rcx
  _QWORD *v104; // rcx
  __int64 v105; // rax
  char v106; // al
  __int16 UnitType_; // ax
  __int64 v108; // rcx
  const char *v109; // rcx
  int v110; // eax
  char v111; // cl
  char v113; // [rsp+3Eh] [rbp-1AAh]
  char v114; // [rsp+3Fh] [rbp-1A9h]
  char v115; // [rsp+40h] [rbp-1A8h]
  char v116; // [rsp+41h] [rbp-1A7h]
  char v117; // [rsp+43h] [rbp-1A5h]
  unsigned int v118; // [rsp+44h] [rbp-1A4h]
  __int64 v119; // [rsp+48h] [rbp-1A0h] BYREF
  __int64 v120; // [rsp+50h] [rbp-198h]
  __int64 v121; // [rsp+58h] [rbp-190h]
  _QWORD *v122; // [rsp+60h] [rbp-188h]
  unsigned int v123; // [rsp+6Ch] [rbp-17Ch]
  void *Src; // [rsp+70h] [rbp-178h]
  char *Str2; // [rsp+78h] [rbp-170h]
  __int64 (__fastcall **v126)(void *); // [rsp+80h] [rbp-168h] BYREF
  const char *v127; // [rsp+88h] [rbp-160h]
  __int64 v128; // [rsp+90h] [rbp-158h]
  CHAR *v129; // [rsp+98h] [rbp-150h]
  __int128 v130; // [rsp+A0h] [rbp-148h]
  __int64 v131; // [rsp+B0h] [rbp-138h]
  __int64 v132; // [rsp+B8h] [rbp-130h]
  __int128 v133; // [rsp+C0h] [rbp-128h]
  __int128 v134; // [rsp+D0h] [rbp-118h]
  __int128 v135; // [rsp+E0h] [rbp-108h]
  __int128 v136; // [rsp+F0h] [rbp-F8h]
  __int128 v137; // [rsp+100h] [rbp-E8h]
  __int128 v138; // [rsp+110h] [rbp-D8h]
  __int128 v139; // [rsp+120h] [rbp-C8h]
  __int128 v140; // [rsp+130h] [rbp-B8h]
  __int16 v141; // [rsp+140h] [rbp-A8h]
  char v142; // [rsp+148h] [rbp-A0h]
  __int64 v143; // [rsp+158h] [rbp-90h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, a2, a3, a4);
  v8 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  v119 = 0i64;
  v120 = v8;
  v121 = 0i64;
  v126 = word_486D2A0;
  v9 = data::get_str(a2, "target_type", &v126);
  if ( v9 )
  {
    v10 = v9;
    v11 = &off_44CF850;
    v12 = 0i64;
    while ( strcmp(*v11, v10) )
    {
      ++v12;
      ++v11;
      if ( v12 == 0x31 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    LODWORD(v12) = 0;
  }
  v13 = funcs_7FF717B84E97[v12];
  v14 = *a2;
  v15 = 0xFFFFFFFF;
  if ( *a2 )
  {
    v16 = data::get_name_id("target", 6ui64);
    v17 = *(v14 + 0x50);
    if ( v17 )
    {
      v18 = *(v17 + 0x20);
      if ( !*(v14 + 0x20) )
        goto LABEL_15;
    }
    else
    {
      v18 = 0;
      if ( !*(v14 + 0x20) )
        goto LABEL_15;
    }
    v19 = data::get_name_id(v14, "target", 6ui64, v16);
    if ( v19 >= 0 )
    {
      v20 = v18 + v19;
LABEL_17:
      v15 = v20;
      goto LABEL_18;
    }
LABEL_15:
    if ( !v18 )
      goto LABEL_18;
    v20 = data::get_name_id(*(v14 + 0x50), "target", 6ui64, v16);
    goto LABEL_17;
  }
LABEL_18:
  sub_CD2950(&v119, a2, v15, a1, v13, 0i64);
  if ( v121 )
  {
    v21 = 0;
    do
    {
      if ( v13() )
      {
        v22 = v121;
      }
      else
      {
        LODWORD(v4) = v121;
        v22 = v121 - 1;
        if ( v121 - 1 > v21 )
        {
          memmove((v119 + 8i64 * v21), (v119 + 8i64 * v21 + 8), 8i64 * v121 - (8i64 * v21 + 8));
          v22 = v121 - 1;
        }
        --v21;
        LODWORD(v121) = v22;
      }
      ++v21;
    }
    while ( v21 < v22 );
  }
  sub_CD4300(&v119, a1, a2, "target");
  LOBYTE(v126) = 0;
  if ( data::get_bool(a2, "useForTriggerFiltered", &v126) )
  {
    v23 = v121;
    if ( v121 )
    {
      v24 = 0;
      do
      {
        if ( !*(a1 + 0xF8) )
          goto LABEL_37;
        v25 = *(a1 + 0xE8);
        v4 = *(v119 + 8i64 * v24);
        v26 = 0i64;
        while ( *(v25 + v26) != v4 )
        {
          v27 = v25 + v26 + 8;
          v26 += 8i64;
          if ( v27 >= v25 + 8 * *(a1 + 0xF8) )
            goto LABEL_37;
        }
        if ( (v26 & 0x400000000i64) != 0 )
        {
LABEL_37:
          v28 = v23 - 1;
          if ( v23 - 1 > v24 )
          {
            memmove((v119 + 8i64 * v24), (v119 + 8i64 * v24 + 8), 8i64 * v23 - (8i64 * v24 + 8));
            v28 = v121 - 1;
          }
          --v24;
          LODWORD(v121) = v28;
          v23 = v28;
        }
        ++v24;
      }
      while ( v24 < v23 );
    }
  }
  LODWORD(v126) = 0xFFFFFFFF;
  v29 = data::set_int(a2, "randomTargetsCount", &v126);
  if ( v29 >= 0 )
  {
    v30 = v29;
    if ( !qword_4B507E8 )
      goto LABEL_46;
    if ( !*(qword_4B507E8 + 0x60) )
      goto LABEL_45;
    dword_4A79158 = 0x41C64E6D * dword_4A79158 + 0x3039;
    LODWORD(v126) = HIWORD(dword_4A79158) & 0x7FFF;
    if ( *(a2 + 0x14) != 0xFFFFFFFF )
      sub_145E9A0(a2);
    sub_145A790(a2, "_seed", &v126);
    if ( qword_4B507E8 )
    {
LABEL_45:
      LODWORD(v126) = 0x18894;
      v31 = data::set_int(a2, "_seed", &v126);
    }
    else
    {
LABEL_46:
      dword_4A79158 = 0x41C64E6D * dword_4A79158 + 0x3039;
      v31 = HIWORD(dword_4A79158) & 0x7FFF;
    }
    v32 = v121;
    v33 = v121 - v30;
    if ( v121 > v30 && v33 > 0 )
    {
      v34 = qword_4B507E8;
      do
      {
        if ( v34 )
        {
          v31 = 0x41C64E6D * v31 + 0x3039;
          v35 = v31;
        }
        else
        {
          v35 = 0x41C64E6D * dword_4A79158 + 0x3039;
          dword_4A79158 = v35;
        }
        v36 = (HIWORD(v35) & 0x7FFFui64) % v32;
        v37 = v32 - 1;
        if ( v32 - 1 > v36 )
        {
          LODWORD(v4) = v119;
          memmove((v119 + 8i64 * v36), (v119 + 8i64 * v36 + 8), 8i64 * v32 - (8i64 * v36 + 8));
          v37 = v121 - 1;
          v34 = qword_4B507E8;
        }
        LODWORD(v121) = v37;
        v32 = v37;
        --v33;
      }
      while ( v33 );
    }
  }
  LOBYTE(v4) = 1;
  if ( !sub_D2B9A0(a1, a2, &v119, "target", unit_restore) )
  {
    if ( v121 )
    {
      v38 = 0i64;
      while ( (*(*(v119 + 8 * v38) + 0x1058i64) & 0x2000010) == 0 )
      {
        if ( ++v38 >= v121 )
          goto LABEL_61;
      }
      LODWORD(v4) = 0;
      goto LABEL_218;
    }
LABEL_61:
    LOBYTE(v126) = 0;
    v116 = data::get_bool(a2, "processingDelayed", &v126);
    LOBYTE(v126) = 0;
    v117 = data::get_bool(a2, "ressurectIfDead", &v126);
    LOBYTE(v126) = 1;
    v114 = data::get_bool(a2, "fullRestore", &v126);
    LOBYTE(v126) = 1;
    v115 = data::get_bool(a2, "ammoRestore", &v126);
    LOBYTE(v126) = 0;
    v113 = data::get_bool(a2, "partRestore", &v126);
    LODWORD(v126) = 0x3F800000;
    v39 = data::set_real(a2, "power", &v126);
    v4 = *a2;
    v118 = 0xFFFFFFFF;
    if ( !*a2 )
    {
      v43 = 0xFFFFFFFF;
      goto LABEL_83;
    }
    v40 = data::get_name_id("planePart", 9ui64);
    v41 = *(v4 + 0x50);
    if ( v41 )
    {
      v42 = *(v41 + 0x20);
      if ( !*(v4 + 0x20) )
        goto LABEL_70;
    }
    else
    {
      v42 = 0;
      if ( !*(v4 + 0x20) )
        goto LABEL_70;
    }
    v44 = data::get_name_id(v4, "planePart", 9ui64, v40);
    if ( v44 >= 0 )
    {
      v43 = v42 + v44;
      goto LABEL_73;
    }
LABEL_70:
    if ( v42 )
      v43 = data::get_name_id(*(v4 + 0x50), "planePart", 9ui64, v40);
    else
      v43 = 0xFFFFFFFF;
LABEL_73:
    v4 = *a2;
    if ( !*a2 )
      goto LABEL_83;
    v45 = data::get_name_id("tankPart", 8ui64);
    v46 = *(v4 + 0x50);
    if ( v46 )
    {
      v47 = *(v46 + 0x20);
      if ( !*(v4 + 0x20) )
        goto LABEL_80;
    }
    else
    {
      v47 = 0;
      if ( !*(v4 + 0x20) )
        goto LABEL_80;
    }
    v48 = data::get_name_id(v4, "tankPart", 8ui64, v45);
    if ( v48 >= 0 )
    {
      v49 = v47 + v48;
      goto LABEL_82;
    }
LABEL_80:
    if ( !v47 )
      goto LABEL_83;
    v49 = data::get_name_id(*(v4 + 0x50), "tankPart", 8ui64, v45);
LABEL_82:
    v118 = v49;
LABEL_83:
    v126 = 0i64;
    Str2 = data::get_str(a2, "modificationRestore", &v126);
    LODWORD(v126) = 0;
    v143 = data::set_int(a2, "modificationQuantityToRestore", &v126);
    v53 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v53[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(v53, v50, v51, v52);
    v54 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    v55 = *v54;
    v122 = v54;
    v56 = (*(v55 + 0x18))(v54, 0x30i64);
    v57 = *(a2 + 0xC);
    if ( v57 )
    {
      v123 = v43;
      v58 = v43 == 0xFFFFFFFF || v118 == 0xFFFFFFFF;
      v59 = 0i64;
      LODWORD(v60) = 0xC;
      v61 = 0;
      while ( 1 )
      {
        v64 = v57;
        if ( v59 >= v57 )
        {
          if ( !v58 )
            goto LABEL_90;
          v62 = 0i64;
        }
        else
        {
          v65 = *(a2 + 0x14);
          if ( v65 == 0xFFFFFFFFi64 )
            v66 = **(a2 + 0x18);
          else
            v66 = *a2 + v65 + 0x90;
          v67 = *(v66 + 8 * v59) & 0xFFFFFF;
          if ( v67 != v123 && v67 != v118 )
            goto LABEL_90;
          v62 = sub_1459970(a2, v59);
        }
        LODWORD(v4) = sub_7AB420(v62);
        if ( v60 == v61 )
        {
          v68 = v60;
          if ( v60 > 0x3FF )
            v60 = v60 + ((v60 + 1) >> 1);
          else
            v60 = 2i64 * v60;
          if ( v56 )
          {
            if ( v60 < 5 )
              v60 = 4i64;
            v69 = (*(*v122 + 0x38i64))(v122, v56, 4 * v60);
            v70 = v56;
            v56 = v69;
            if ( v69 )
              goto LABEL_89;
          }
          else
          {
            v70 = 0i64;
          }
          Src = v70;
          if ( v60 < 5 )
            v60 = 4i64;
          v56 = (*(*v122 + 0x18i64))(v122, 4 * v60);
          memmove(v56, Src, 4 * v68);
          if ( Src )
            (*(*v122 + 0x40i64))(v122);
        }
LABEL_89:
        v63 = v61++;
        v56[v63] = v4;
        v57 = *(a2 + 0xC);
        v64 = v57;
LABEL_90:
        if ( ++v59 >= v64 )
          goto LABEL_114;
      }
    }
    v61 = 0;
LABEL_114:
    if ( !v121 )
    {
LABEL_215:
      if ( v56 )
        (*(*v122 + 0x40i64))(v122, v56);
      LOBYTE(v4) = 1;
      goto LABEL_218;
    }
    v71 = Y;
    v72 = *&dword_44A50C0;
    v73 = 0i64;
    while ( 1 )
    {
      Unit = *(v119 + 8 * v73);
      v75 = sub_CD1F00(Unit);
      if ( (v117 | v75 ^ 1) != 1 || !v116 && (*(Unit + 0x1058) & 0x7000014) != 0 )
        goto LABEL_117;
      if ( v75 )
      {
        v79 = NtCurrentTeb()->ThreadLocalStoragePointer;
        if ( !*(v79[TlsIndex] + 1i64) )
          _dyn_tls_on_demand_init(v79, v76, v77, v78);
        v80 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
        v127 = Unit;
        v128 = v80;
        LOWORD(v129) = 0xF02F;
        BYTE2(v129) = 0xFF;
        v130 = 0i64;
        v131 = 0i64;
        v132 = v80;
        v140 = 0i64;
        v139 = 0i64;
        v138 = 0i64;
        v137 = 0i64;
        v136 = 0i64;
        v135 = 0i64;
        v134 = 0i64;
        v133 = 0i64;
        v141 = 0;
        v81 = 0xFF;
        if ( qword_4B507E8 )
        {
          v81 = 0x7D;
          if ( !*(qword_4B507E8 + 0x60) )
          {
            v81 = 0xFF;
            if ( LocalPlayer )
              v81 = *(LocalPlayer + 8);
          }
        }
        BYTE2(v129) = v81;
        v126 = &off_44ACE70;
        v142 = 0xFF;
        sub_37BC90(&v126);
LABEL_136:
        LOBYTE(v76) = 0xFF;
        sub_159F500(&v126, v76);
        v126 = &off_44A0560;
        if ( v130 < 0 )
          (*(*v132 + 0x40i64))(v132, v131);
        goto LABEL_188;
      }
      if ( v114 )
      {
        v82 = NtCurrentTeb()->ThreadLocalStoragePointer;
        if ( !*(v82[TlsIndex] + 1i64) )
          _dyn_tls_on_demand_init(v82, v76, v77, v78);
        v83 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
        v127 = Unit;
        v128 = v83;
        LOWORD(v129) = 0xF033;
        BYTE2(v129) = 0xFF;
        v130 = 0i64;
        v131 = 0i64;
        v132 = v83;
        v140 = 0i64;
        v139 = 0i64;
        v138 = 0i64;
        v137 = 0i64;
        v136 = 0i64;
        v135 = 0i64;
        v134 = 0i64;
        v133 = 0i64;
        v141 = 0;
        v84 = 0xFF;
        if ( qword_4B507E8 )
        {
          v84 = 0x7D;
          if ( !*(qword_4B507E8 + 0x60) )
          {
            v84 = 0xFF;
            if ( LocalPlayer )
              v84 = *(LocalPlayer + 8);
          }
        }
        BYTE2(v129) = v84;
        v126 = &off_44A04C0;
        goto LABEL_136;
      }
      if ( v113 )
      {
        if ( v61 )
        {
          v4 = 0i64;
          while ( 1 )
          {
            v76 = v56[v4];
            v85 = v71;
            if ( v76 >= 0 )
            {
              WeaponsInfo = *(Unit + 0x11A0);
              v85 = v71;
              if ( WeaponsInfo )
              {
                v85 = v71;
                if ( *(qword_4B12868 + 8) > v76 )
                {
                  v85 = v71;
                  if ( *(WeaponsInfo + 0x2A8) > v76 )
                  {
                    v87 = *(*(WeaponsInfo + 0x2A0) + 4 * v76);
                    v85 = v71;
                    if ( (v87 & 0x8000) == 0 )
                    {
                      v85 = v71;
                      if ( *(WeaponsInfo + 0x310) > v87 )
                      {
                        v88 = *(*(WeaponsInfo + 0x308) + 0x38i64 * v87 + 0x34);
                        v85 = v71;
                        if ( v88 != 0xFFFF )
                          v85 = v88 * v72;
                      }
                    }
                  }
                }
              }
            }
            if ( v85 >= v39 )
              goto LABEL_141;
            UnitType = *(Unit + 0x10B0);
            if ( UnitType > 0xF )
              break;
            v90 = 0x897E;
            if ( _bittest(&v90, UnitType) )
            {
              (*(*Unit + 0x590i64))(Unit);
            }
            else if ( *(Unit + 0x10B0) )
            {
              if ( UnitType != 7 )
                break;
            }
            else
            {
              sub_41C8B0(Unit, v76);
            }
LABEL_154:
            if ( *&mUnit == Unit )
            {
              v91 = *(game + 0x630);
              if ( v91 )
              {
                v92 = *(v91 + 0x3B3B0);
                if ( v92 )
                  *(*(v92 + 8) + 0x3F8i64) = 1;
              }
            }
LABEL_141:
            if ( v61 == ++v4 )
              goto LABEL_188;
          }
          v93 = *(Unit + 0x1138);
          if ( !v93 )
            v93 = &szFile;
          v127 = "doPartRestore";
          LODWORD(v126) = 1;
          v129 = v93;
          LODWORD(v128) = 1;
          *(&v130 + 1) = UnitType;
          LODWORD(v130) = 2;
          dg_debug(3u, "can't run function '%s' for unit '%s', type %u", &v126, 3);
          goto LABEL_154;
        }
        LODWORD(v94) = *(qword_4B12868 + 8);
        if ( v94 )
          break;
      }
LABEL_188:
      if ( v115 )
      {
        v104 = NtCurrentTeb()->ThreadLocalStoragePointer;
        if ( !*(v104[TlsIndex] + 1i64) )
          _dyn_tls_on_demand_init(v104, v76, v77, v78);
        v105 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
        v127 = Unit;
        v128 = v105;
        LOWORD(v129) = 0xF054;
        BYTE2(v129) = 0xFF;
        v130 = 0i64;
        v131 = 0i64;
        v132 = v105;
        v140 = 0i64;
        v139 = 0i64;
        v138 = 0i64;
        v137 = 0i64;
        v136 = 0i64;
        v135 = 0i64;
        v134 = 0i64;
        v133 = 0i64;
        v141 = 0;
        v106 = 0xFF;
        if ( qword_4B507E8 )
        {
          v106 = 0x7D;
          if ( !*(qword_4B507E8 + 0x60) )
          {
            v106 = 0xFF;
            if ( LocalPlayer )
              v106 = *(LocalPlayer + 8);
          }
        }
        BYTE2(v129) = v106;
        v126 = &off_44A04C0;
        LOBYTE(v76) = 0xFF;
        sub_159F500(&v126, v76);
        v126 = &off_44A0560;
        if ( v130 < 0 )
          (*(*v132 + 0x40i64))(v132, v131);
      }
      if ( Unit )
      {
        UnitType_ = *(Unit + 0x10B0);
        if ( UnitType_ )
          goto LABEL_201;
        v108 = *(Unit + 0x33D0);
        if ( v108 )
        {
          (*(*v108 + 0x10i64))(v108);
          UnitType_ = *(Unit + 0x10B0);
LABEL_201:
          if ( UnitType_ != 5 )
            Unit = 0i64;
          if ( Str2 && UnitType_ == 5 )
          {
            v4 = &xmmword_44CFB50;
            v109 = "ship_race_speed_boost";
            while ( strcmp(v109, Str2) )
            {
              v109 = *v4;
              v4 += 0x10i64;
              if ( !v109 )
                goto LABEL_215;
            }
            if ( !qword_4B507E8 || *(qword_4B507E8 + 0x60) )
            {
              v110 = *(Unit + 0x434C);
              v111 = *(Unit + 0x43A8);
              if ( (v111 + v143) < v110 )
                LOBYTE(v110) = v111 + v143;
              LOBYTE(v126) = v110;
              if ( v111 != v110 )
              {
                sub_158CE00(Unit + 0x4388, Unit, &v126);
                *(Unit + 0x43A8) = v126;
              }
            }
          }
        }
      }
LABEL_117:
      if ( ++v73 >= v121 )
        goto LABEL_215;
    }
    v4 = 0i64;
    while ( 1 )
    {
      WeaponsInfo_ = *(Unit + 0x11A0);
      v96 = v71;
      if ( WeaponsInfo_ )
      {
        v96 = v71;
        if ( v4 < v94 )
        {
          v96 = v71;
          if ( v4 < *(WeaponsInfo_ + 0x2A8) )
          {
            v97 = *(*(WeaponsInfo_ + 0x2A0) + 4 * v4);
            v96 = v71;
            if ( (v97 & 0x8000) == 0 )
            {
              v96 = v71;
              if ( *(WeaponsInfo_ + 0x310) > v97 )
              {
                v98 = *(*(WeaponsInfo_ + 0x308) + 0x38i64 * v97 + 0x34);
                v96 = v71;
                if ( v98 != 0xFFFF )
                  v96 = v98 * v72;
              }
            }
          }
        }
      }
      if ( v96 >= v39 )
        goto LABEL_166;
      _UnitType_ = *(Unit + 0x10B0);
      if ( _UnitType_ > 0xF )
        break;
      v100 = 0x897E;
      if ( _bittest(&v100, _UnitType_) )
      {
        (*(*Unit + 0x590i64))(Unit, v4);
      }
      else if ( *(Unit + 0x10B0) )
      {
        if ( _UnitType_ != 7 )
          break;
      }
      else
      {
        sub_41C8B0(Unit, v4);
      }
LABEL_178:
      if ( *&mUnit == Unit )
      {
        v101 = *(game + 0x630);
        if ( v101 )
        {
          v102 = *(v101 + 0x3B3B0);
          if ( v102 )
            *(*(v102 + 8) + 0x3F8i64) = 1;
        }
      }
LABEL_166:
      ++v4;
      v94 = *(qword_4B12868 + 8);
      if ( v4 == v94 )
        goto LABEL_188;
    }
    v103 = *(Unit + 0x1138);
    if ( !v103 )
      v103 = &szFile;
    v127 = "doPartRestore";
    LODWORD(v126) = 1;
    v129 = v103;
    LODWORD(v128) = 1;
    *(&v130 + 1) = _UnitType_;
    LODWORD(v130) = 2;
    dg_debug(3u, "can't run function '%s' for unit '%s', type %u", &v126, 3);
    goto LABEL_178;
  }
LABEL_218:
  if ( v119 )
    (*(*v120 + 0x40i64))(v120);
  return v4;
}
