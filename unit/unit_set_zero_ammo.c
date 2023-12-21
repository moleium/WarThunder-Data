char __fastcall unitSetZeroAmmo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  const char *v9; // rsi
  const char **v10; // rbp
  __int64 v11; // rbx
  char (__stdcall *v12)(); // rsi
  __int64 v13; // rbp
  unsigned int v14; // ebx
  bool v15; // zf
  unsigned int v16; // r14d
  __int64 v17; // rax
  int v18; // r12d
  int v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // eax
  unsigned int v22; // r8d
  unsigned int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rbp
  unsigned int v27; // eax
  __int64 v28; // rax
  unsigned int v29; // r13d
  const char *v30; // rdi
  unsigned __int64 v31; // rbp
  __int64 Unit_; // rbx
  const char **v33; // rsi
  const char *v34; // rcx
  __int64 v35; // rdi
  int v36; // esi
  unsigned int v37; // ebp
  __int64 v38; // rax
  int v39; // ebx
  int v40; // eax
  int v41; // eax
  __int64 v42; // rcx
  unsigned __int64 v43; // rax
  bool v44; // dl
  __int64 v45; // rbp
  char *v46; // rcx
  unsigned __int64 v47; // rbp
  char *v48; // rdx
  unsigned __int64 v49; // r15
  __int64 v50; // rax
  __int64 v51; // rax
  char *v52; // rcx
  int v53; // eax
  int v54; // ebp
  unsigned __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // r12
  __int64 v59; // r13
  __int64 v60; // r14
  __int64 v61; // rdx
  __int64 v62; // rcx
  unsigned int v63; // eax
  __int64 v64; // rbx
  __int64 v65; // rbx
  unsigned int v66; // eax
  unsigned __int64 v67; // r14
  __int64 Unit; // rsi
  __int64 UnitWeaponsInfo; // rcx
  __int64 v70; // rbx
  __int64 v71; // rbp
  __int64 v72; // rdi
  __int64 UnitList; // [rsp+38h] [rbp-70h] BYREF
  __int64 v75; // [rsp+40h] [rbp-68h]
  __int64 v76; // [rsp+48h] [rbp-60h]
  const char *v77; // [rsp+50h] [rbp-58h] BYREF
  __int64 v78; // [rsp+58h] [rbp-50h]
  int v79; // [rsp+64h] [rbp-44h]

  v4 = a2;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, a2, a3, a4);
  v7 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  UnitList = 0i64;
  v75 = v7;
  v76 = 0i64;
  v77 = "isAlive";
  v8 = data::get_str(v4, "target_type", &v77);
  if ( v8 )
  {
    v9 = v8;
    v10 = &off_44CF850;
    v11 = 0i64;
    while ( strcmp(*v10, v9) )
    {
      ++v11;
      ++v10;
      if ( v11 == 0x31 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    LODWORD(v11) = 0;
  }
  v12 = funcs_7FF717B84E97[v11];
  v13 = *v4;
  v14 = 0xFFFFFFFF;
  v15 = *v4 == 0i64;
  v78 = v4;
  if ( !v15 )
  {
    v16 = data::get_name_id("target", 6ui64);
    v17 = *(v13 + 0x50);
    if ( v17 )
    {
      v18 = *(v17 + 0x20);
      if ( !*(v13 + 0x20) )
      {
LABEL_15:
        v15 = v18 == 0;
        v4 = v78;
        if ( !v15 )
          v14 = data::get_name_id(*(v13 + 0x50), "target", 6ui64, v16);
        goto LABEL_17;
      }
    }
    else
    {
      v18 = 0;
      if ( !*(v13 + 0x20) )
        goto LABEL_15;
    }
    v19 = data::get_name_id(v13, "target", 6ui64, v16);
    if ( v19 >= 0 )
    {
      v14 = v18 + v19;
      v4 = v78;
      goto LABEL_17;
    }
    goto LABEL_15;
  }
LABEL_17:
  sub_CD2950(&UnitList, v4, v14, a1, v12, 0i64);
  if ( v76 )
  {
    v20 = 0;
    do
    {
      if ( v12() )
      {
        v21 = v76;
      }
      else
      {
        v21 = v76 - 1;
        if ( v76 - 1 > v20 )
        {
          memmove((UnitList + 8i64 * v20), (UnitList + 8i64 * v20 + 8), 8i64 * v76 - (8i64 * v20 + 8));
          v21 = v76 - 1;
        }
        --v20;
        LODWORD(v76) = v21;
      }
      ++v20;
    }
    while ( v20 < v21 );
  }
  sub_CD4300(&UnitList, a1, v4, "object");
  LOBYTE(v77) = 0;
  if ( data::get_bool(v4, "useForTriggerFiltered", &v77) )
  {
    v22 = v76;
    if ( v76 )
    {
      v23 = 0;
      do
      {
        if ( !*(a1 + 0xF8) )
          goto LABEL_36;
        v24 = *(a1 + 0xE8);
        v25 = 0i64;
        while ( *(v24 + v25) != *(UnitList + 8i64 * v23) )
        {
          v26 = v24 + v25 + 8;
          v25 += 8i64;
          if ( v26 >= v24 + 8 * *(a1 + 0xF8) )
            goto LABEL_36;
        }
        if ( (v25 & 0x400000000i64) != 0 )
        {
LABEL_36:
          v27 = v22 - 1;
          if ( v22 - 1 > v23 )
          {
            memmove((UnitList + 8i64 * v23), (UnitList + 8i64 * v23 + 8), 8i64 * v22 - (8i64 * v23 + 8));
            v27 = v76 - 1;
          }
          --v23;
          LODWORD(v76) = v27;
          v22 = v27;
        }
        ++v23;
      }
      while ( v23 < v22 );
    }
  }
  v77 = 0i64;
  v28 = data::get_str(v4, "modificationReset", &v77);
  if ( !v28 )
  {
    v35 = *v4;
    v36 = 0xFFFFFFFF;
    if ( !*v4 )
      goto LABEL_62;
    v37 = data::get_name_id("triggerGroup", 0xCui64);
    v38 = *(v35 + 0x50);
    if ( v38 )
    {
      v39 = *(v38 + 0x20);
      if ( !*(v35 + 0x20) )
        goto LABEL_59;
    }
    else
    {
      v39 = 0;
      if ( !*(v35 + 0x20) )
        goto LABEL_59;
    }
    v40 = data::get_name_id(v35, "triggerGroup", 0xCui64, v37);
    if ( v40 >= 0 )
    {
      v41 = v39 + v40;
      goto LABEL_61;
    }
LABEL_59:
    if ( !v39 )
      goto LABEL_62;
    v41 = data::get_name_id(*(v35 + 0x50), "triggerGroup", 0xCui64, v37);
LABEL_61:
    v36 = v41;
LABEL_62:
    v42 = *(v4 + 0x14);
    v43 = *(v4 + 0xC);
    v44 = v43 == 0 || v36 < 0;
    if ( v42 == 0xFFFFFFFFi64 )
    {
      if ( v44 )
        goto LABEL_102;
      v46 = **(v4 + 0x18);
      v48 = v46;
      while ( (*v48 & 0xFFFFFF) != v36 )
      {
        v48 += 8;
        if ( v48 >= &v46[8 * v43] )
          goto LABEL_102;
      }
    }
    else
    {
      if ( v44 )
        goto LABEL_102;
      v45 = *v4 + v42;
      v46 = (v45 + 0x90);
      v47 = v45 + 8 * v43 + 0x90;
      v48 = v46;
      while ( (*v48 & 0xFFFFFF) != v36 )
      {
        v48 += 8;
        if ( v48 >= v47 )
          goto LABEL_102;
      }
    }
    if ( ((v48 - v46) & 0x400000000i64) == 0 )
    {
      if ( !v43 )
        goto LABEL_110;
      v49 = 0i64;
      v79 = v36;
      while ( 1 )
      {
        if ( v49 >= v43 )
        {
          if ( v36 == 0xFFFFFFFF )
          {
            v52 = 0i64;
            goto LABEL_85;
          }
        }
        else
        {
          v50 = *(v4 + 0x14);
          if ( v50 == 0xFFFFFFFFi64 )
            v51 = **(v4 + 0x18);
          else
            v51 = *v4 + v50 + 0x90;
          if ( (*(v51 + 8 * v49) & 0xFFFFFF) == v36 )
          {
            v52 = sub_1459970(v78, v49);
LABEL_85:
            v53 = sub_17AF860(v52);
            if ( v76 )
            {
              v54 = v53;
              v55 = 0i64;
              do
              {
                v56 = *(UnitList + 8 * v55);
                v57 = *(v56 + 0x11D0);
                if ( v57 )
                {
                  v58 = *(v57 + 0x2E0);
                  if ( *(v57 + 0x2E0) )
                  {
                    v59 = *(v57 + 0x2D0);
                    if ( v54 < 0 )
                    {
                      v65 = 0i64;
                      do
                        sub_316E50(v56, *(v59 + 8 * v65++));
                      while ( v58 != v65 );
                    }
                    else
                    {
                      v60 = 0i64;
                      do
                      {
                        v61 = *(v59 + 8 * v60);
                        v62 = *(*(v61 + 8) + 0x11D0i64);
                        v63 = 0xFFFFFFFF;
                        if ( v62 )
                        {
                          v64 = *(v61 + 0x24);
                          if ( v64 >= 0 && v64 < *(v62 + 0x1A0) )
                            v63 = *(*(v62 + 0x190) + 0x290 * v64 + 0xC2);
                        }
                        if ( v63 == v54 )
                          sub_316E50(v56, v61);
                        ++v60;
                      }
                      while ( v58 != v60 );
                    }
                  }
                }
                ++v55;
              }
              while ( v55 < v76 );
            }
          }
        }
        ++v49;
        v4 = v78;
        v43 = *(v78 + 0xC);
        v36 = v79;
        if ( v49 >= v43 )
          goto LABEL_110;
      }
    }
LABEL_102:
    v66 = v76;
    if ( v76 )
    {
      v67 = 0i64;
      do
      {
        Unit = *(UnitList + 8 * v67);
        UnitWeaponsInfo = *(Unit + 0x11D0);
        if ( UnitWeaponsInfo )
        {
          v70 = *(UnitWeaponsInfo + 0x2E0);
          if ( *(UnitWeaponsInfo + 0x2E0) )
          {
            v71 = *(UnitWeaponsInfo + 0x2D0);
            v72 = 0i64;
            do
              sub_316E50(Unit, *(v71 + 8 * v72++));
            while ( v70 != v72 );
            v66 = v76;
          }
        }
        ++v67;
      }
      while ( v67 < v66 );
    }
    goto LABEL_110;
  }
  v29 = v76;
  if ( v76 )
  {
    v30 = v28;
    v31 = 0i64;
    do
    {
      Unit_ = *(UnitList + 8 * v31);
      if ( Unit_ && *(Unit_ + 0x10B0) == 5 )
      {
        v33 = &xmmword_44CFB50;
        v34 = "ship_race_speed_boost";
        while ( strcmp(v34, v30) )
        {
          v34 = *v33;
          v33 += 2;
          if ( !v34 )
            goto LABEL_110;
        }
        if ( !qword_4B507E8 || *(qword_4B507E8 + 0x60) )
        {
          LOBYTE(v77) = 0;
          if ( *(Unit_ + 0x43A8) )
          {
            sub_158CE00(Unit_ + 0x4388, Unit_, &v77);
            *(Unit_ + 0x43A8) = v77;
            v29 = v76;
          }
        }
      }
      ++v31;
    }
    while ( v31 < v29 );
  }
LABEL_110:
  if ( UnitList )
    (*(*v75 + 0x40i64))(v75);
  return 1;
}
