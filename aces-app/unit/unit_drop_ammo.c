__int64 __fastcall unit_drop_ammo(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v7; // rax
  __int64 Unit; // rsi
  unsigned int v9; // ebx
  unsigned int v10; // r15d
  __int64 v11; // rax
  int v12; // ebp
  int v13; // eax
  unsigned int v14; // eax
  char v15; // al
  unsigned int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rbp
  unsigned __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rax
  char *v22; // rax
  __int64 v23; // r8
  unsigned int v24; // ecx
  __int64 UnitList; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 UnitWeaponsInfo; // r13
  int v29; // edi
  __int64 i; // r15
  __int64 v31; // rax
  unsigned __int64 v32; // r12
  double *v33; // rdx
  __int64 v34; // rdx
  unsigned int *v35; // rbp
  float v36; // xmm0_4
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // rbp
  double *v40; // rdi
  __int64 v41; // rcx
  float v42; // xmm0_4
  __int64 v43; // rdi
  unsigned __int64 v44; // rbp
  double *v45; // rdi
  __int64 v46; // rcx
  float v47; // xmm0_4
  __int64 v48; // rdi
  unsigned __int64 v49; // rbp
  double *v50; // rdi
  __int64 v51; // rcx
  float v52; // xmm0_4
  __int64 v53; // rdi
  unsigned __int64 v54; // rbp
  double *v55; // rdi
  __int64 v56; // rcx
  float v57; // xmm0_4
  __int64 v58; // rdi
  unsigned __int64 v59; // rbp
  double *v60; // rdi
  __int64 v61; // rcx
  float v62; // xmm0_4
  __int64 v63; // rdi
  unsigned __int64 v64; // rbp
  double *v65; // rdi
  __int64 v66; // rcx
  float v67; // xmm0_4
  __int64 v68; // rdi
  unsigned __int64 v69; // rbp
  double *v70; // rdi
  __int64 v71; // rcx
  float v72; // xmm0_4
  __int64 v73; // rdi
  __int64 j; // r14
  __int64 v75; // rax
  unsigned __int64 v76; // rdi
  double *v77; // rbp
  __int64 v78; // rcx
  float v79; // xmm0_4
  __int64 v80; // rbp
  int v82; // [rsp+30h] [rbp-88h]
  int v83; // [rsp+44h] [rbp-74h]
  __int64 UnitList_; // [rsp+48h] [rbp-70h] BYREF
  __int64 v85; // [rsp+50h] [rbp-68h]
  __int64 v86; // [rsp+58h] [rbp-60h]
  __int64 v87; // [rsp+60h] [rbp-58h] BYREF
  __int64 v88; // [rsp+68h] [rbp-50h]
  unsigned __int64 v89; // [rsp+70h] [rbp-48h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, a2, a3, a4);
  v7 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  UnitList_ = 0i64;
  v85 = v7;
  v86 = 0i64;
  Unit = *a2;
  v9 = 0xFFFFFFFF;
  if ( *a2 )
  {
    v10 = data::get_name_id("object", 6ui64);
    v11 = *(Unit + 0x50);
    if ( v11 )
    {
      v12 = *(v11 + 0x20);
      if ( !*(Unit + 0x20) )
        goto LABEL_10;
    }
    else
    {
      v12 = 0;
      if ( !*(Unit + 0x20) )
        goto LABEL_10;
    }
    v13 = data::get_name_id(Unit, "object", 6ui64, v10);
    if ( v13 >= 0 )
    {
      v14 = v12 + v13;
LABEL_12:
      v9 = v14;
      goto LABEL_13;
    }
LABEL_10:
    if ( !v12 )
      goto LABEL_13;
    v14 = data::get_name_id(*(Unit + 0x50), "object", 6ui64, v10);
    goto LABEL_12;
  }
LABEL_13:
  sub_CD2950(&UnitList_, a2, v9, a1, 0i64, 0i64);
  LOBYTE(v87) = 0;
  v15 = data::get_bool(a2, "useForTriggerFiltered", &v87);
  v16 = v86;
  if ( v15 )
  {
    if ( !v86 )
      goto LABEL_30;
    LODWORD(Unit) = 0;
    do
    {
      if ( !*(a1 + 0xF8) )
        goto LABEL_24;
      v17 = *(a1 + 0xE8);
      v18 = 0i64;
      while ( *(v17 + v18) != *(UnitList_ + 8i64 * Unit) )
      {
        v19 = v17 + v18 + 8;
        v18 += 8i64;
        if ( v19 >= v17 + 8 * *(a1 + 0xF8) )
          goto LABEL_24;
      }
      if ( (v18 & 0x400000000i64) != 0 )
      {
LABEL_24:
        v20 = v16 - 1;
        if ( v16 - 1 > Unit )
        {
          memmove((UnitList_ + 8i64 * Unit), (UnitList_ + 8i64 * Unit + 8), 8i64 * v16 - (8i64 * Unit + 8));
          v20 = v86 - 1;
        }
        LODWORD(Unit) = Unit - 1;
        LODWORD(v86) = v20;
        v16 = v20;
      }
      LODWORD(Unit) = Unit + 1;
    }
    while ( Unit < v16 );
  }
  if ( !v16 )
  {
LABEL_30:
    v87 = 0i64;
    v22 = data::get_str(a2, "triggerGroup", &v87);
    v24 = 0xFFFFFFFF;
    if ( v22 && *v22 )
      v24 = sub_17AF860(v22);
    LOBYTE(Unit) = 1;
    if ( v86 )
    {
      v83 = v24;
      UnitList = UnitList_;
      v26 = 0i64;
      do
      {
        Unit = *(UnitList + 8 * v26);
        UnitWeaponsInfo = *(Unit + 0x11D0);
        if ( UnitWeaponsInfo )
        {
          v89 = v26;
          if ( !*(Unit + 0x10B0) )
          {
            v38 = *(UnitWeaponsInfo + 0x300);
            if ( *(v38 + 0x38) )
            {
              v39 = 0i64;
              do
              {
                if ( !g_net || *(game + 0xCD) || *(game + 0xCE) )
                {
                  v43 = *(game + 0x450);
                  if ( v43 && *(v43 + 0x5CA) )
                    v40 = (v43 + 0x620);
                  else
                    v40 = (game + 0x2E0);
                }
                else
                {
                  v40 = (g_net + 0x70);
                }
                v41 = *(*(v38 + 0x30) + 8 * v39);
                v42 = *v40;
                LOBYTE(v82) = 0;
                (*(*v41 + 0xE0i64))(
                  v41,
                  0xFFFFFFFFi64,
                  v23,
                  UnitWeaponsInfo + 0x280,
                  *(game + 0x2EC),
                  LODWORD(v42),
                  v82);
                ++v39;
                v38 = *(UnitWeaponsInfo + 0x300);
              }
              while ( v39 < *(v38 + 0x38) );
            }
            if ( *(v38 + 0x48) )
            {
              v44 = 0i64;
              do
              {
                if ( !g_net || *(game + 0xCD) || *(game + 0xCE) )
                {
                  v48 = *(game + 0x450);
                  if ( v48 && *(v48 + 0x5CA) )
                    v45 = (v48 + 0x620);
                  else
                    v45 = (game + 0x2E0);
                }
                else
                {
                  v45 = (g_net + 0x70);
                }
                v46 = *(*(v38 + 0x40) + 8 * v44);
                v47 = *v45;
                LOBYTE(v82) = 0;
                (*(*v46 + 0xE0i64))(
                  v46,
                  0xFFFFFFFFi64,
                  v23,
                  UnitWeaponsInfo + 0x280,
                  *(game + 0x2EC),
                  LODWORD(v47),
                  v82);
                ++v44;
                v38 = *(UnitWeaponsInfo + 0x300);
              }
              while ( v44 < *(v38 + 0x48) );
            }
            if ( *(v38 + 0x58) )
            {
              v49 = 0i64;
              do
              {
                if ( !g_net || *(game + 0xCD) || *(game + 0xCE) )
                {
                  v53 = *(game + 0x450);
                  if ( v53 && *(v53 + 0x5CA) )
                    v50 = (v53 + 0x620);
                  else
                    v50 = (game + 0x2E0);
                }
                else
                {
                  v50 = (g_net + 0x70);
                }
                v51 = *(*(v38 + 0x50) + 8 * v49);
                v52 = *v50;
                LOBYTE(v82) = 0;
                (*(*v51 + 0xE0i64))(
                  v51,
                  0xFFFFFFFFi64,
                  v23,
                  UnitWeaponsInfo + 0x280,
                  *(game + 0x2EC),
                  LODWORD(v52),
                  v82);
                ++v49;
                v38 = *(UnitWeaponsInfo + 0x300);
              }
              while ( v49 < *(v38 + 0x58) );
            }
            if ( *(v38 + 0x68) )
            {
              v54 = 0i64;
              do
              {
                if ( !g_net || *(game + 0xCD) || *(game + 0xCE) )
                {
                  v58 = *(game + 0x450);
                  if ( v58 && *(v58 + 0x5CA) )
                    v55 = (v58 + 0x620);
                  else
                    v55 = (game + 0x2E0);
                }
                else
                {
                  v55 = (g_net + 0x70);
                }
                v56 = *(*(v38 + 0x60) + 8 * v54);
                v57 = *v55;
                LOBYTE(v82) = 0;
                (*(*v56 + 0xE0i64))(
                  v56,
                  0xFFFFFFFFi64,
                  v23,
                  UnitWeaponsInfo + 0x280,
                  *(game + 0x2EC),
                  LODWORD(v57),
                  v82);
                ++v54;
                v38 = *(UnitWeaponsInfo + 0x300);
              }
              while ( v54 < *(v38 + 0x68) );
            }
            if ( *(v38 + 0x78) )
            {
              v59 = 0i64;
              do
              {
                if ( !g_net || *(game + 0xCD) || *(game + 0xCE) )
                {
                  v63 = *(game + 0x450);
                  if ( v63 && *(v63 + 0x5CA) )
                    v60 = (v63 + 0x620);
                  else
                    v60 = (game + 0x2E0);
                }
                else
                {
                  v60 = (g_net + 0x70);
                }
                v61 = *(*(v38 + 0x70) + 8 * v59);
                v62 = *v60;
                LOBYTE(v82) = 0;
                (*(*v61 + 0xE0i64))(
                  v61,
                  0xFFFFFFFFi64,
                  v23,
                  UnitWeaponsInfo + 0x280,
                  *(game + 0x2EC),
                  LODWORD(v62),
                  v82);
                ++v59;
                v38 = *(UnitWeaponsInfo + 0x300);
              }
              while ( v59 < *(v38 + 0x78) );
            }
            if ( *(v38 + 0x88) )
            {
              v64 = 0i64;
              do
              {
                if ( !g_net || *(game + 0xCD) || *(game + 0xCE) )
                {
                  v68 = *(game + 0x450);
                  if ( v68 && *(v68 + 0x5CA) )
                    v65 = (v68 + 0x620);
                  else
                    v65 = (game + 0x2E0);
                }
                else
                {
                  v65 = (g_net + 0x70);
                }
                v66 = *(*(v38 + 0x80) + 8 * v64);
                v67 = *v65;
                LOBYTE(v82) = 0;
                (*(*v66 + 0xE0i64))(
                  v66,
                  0xFFFFFFFFi64,
                  v23,
                  UnitWeaponsInfo + 0x280,
                  *(game + 0x2EC),
                  LODWORD(v67),
                  v82);
                ++v64;
                v38 = *(UnitWeaponsInfo + 0x300);
              }
              while ( v64 < *(v38 + 0x88) );
            }
            if ( *(v38 + 0x98) )
            {
              v69 = 0i64;
              do
              {
                if ( !g_net || *(game + 0xCD) || *(game + 0xCE) )
                {
                  v73 = *(game + 0x450);
                  if ( v73 && *(v73 + 0x5CA) )
                    v70 = (v73 + 0x620);
                  else
                    v70 = (game + 0x2E0);
                }
                else
                {
                  v70 = (g_net + 0x70);
                }
                v71 = *(*(v38 + 0x90) + 8 * v69);
                v72 = *v70;
                LOBYTE(v82) = 0;
                (*(*v71 + 0xE0i64))(
                  v71,
                  0xFFFFFFFFi64,
                  v23,
                  UnitWeaponsInfo + 0x280,
                  *(game + 0x2EC),
                  LODWORD(v72),
                  v82);
                ++v69;
                v38 = *(UnitWeaponsInfo + 0x300);
              }
              while ( v69 < *(v38 + 0x98) );
            }
          }
          v29 = v83;
          if ( v83 >= 0 )
          {
            v88 = *(UnitWeaponsInfo + 0x2A8);
            if ( v88 > 0 )
            {
              if ( Unit )
              {
                for ( i = 0i64; i != v88; ++i )
                {
                  if ( *(*(UnitWeaponsInfo + 0x298) + 4 * i) == v83 )
                  {
                    v31 = *(UnitWeaponsInfo + 0x300);
                    if ( *(v31 + 0x10 * i + 8) )
                    {
                      v32 = 0i64;
                      do
                      {
                        if ( !g_net || *(game + 0xCD) || *(game + 0xCE) )
                        {
                          v34 = *(game + 0x450);
                          if ( v34 && *(v34 + 0x5CA) )
                            v33 = (v34 + 0x620);
                          else
                            v33 = (game + 0x2E0);
                        }
                        else
                        {
                          v33 = (g_net + 0x70);
                        }
                        v35 = *(*(v31 + 0x10 * i) + 8 * v32);
                        v36 = *v33;
                        LOBYTE(v82) = 0;
                        (*(*v35 + 0xE0i64))(
                          v35,
                          0xFFFFFFFFi64,
                          v23,
                          UnitWeaponsInfo + 0x280,
                          *(game + 0x2EC),
                          LODWORD(v36),
                          v82);
                        if ( *(Unit + 0x10B0) == 5 )
                        {
                          v37 = *(Unit + 0x32B8);
                          if ( v37 )
                            *(*(v37 + 0x568) + v35[4]) = 1;
                        }
                        ++v32;
                        v31 = *(UnitWeaponsInfo + 0x300);
                      }
                      while ( v32 < *(v31 + 0x10 * i + 8) );
                    }
                  }
                }
              }
              else
              {
                for ( j = 0i64; j != v88; ++j )
                {
                  if ( *(*(UnitWeaponsInfo + 0x298) + 4 * j) == v29 )
                  {
                    v75 = *(UnitWeaponsInfo + 0x300);
                    Unit = 0x10 * j;
                    if ( *(v75 + 0x10 * j + 8) )
                    {
                      v76 = 0i64;
                      do
                      {
                        if ( !g_net || *(game + 0xCD) || *(game + 0xCE) )
                        {
                          v80 = *(game + 0x450);
                          if ( v80 && *(v80 + 0x5CA) )
                            v77 = (v80 + 0x620);
                          else
                            v77 = (game + 0x2E0);
                        }
                        else
                        {
                          v77 = (g_net + 0x70);
                        }
                        v78 = *(*(v75 + 0x10 * j) + 8 * v76);
                        v79 = *v77;
                        LOBYTE(v82) = 0;
                        (*(*v78 + 0xE0i64))(
                          v78,
                          0xFFFFFFFFi64,
                          v23,
                          UnitWeaponsInfo + 0x280,
                          *(game + 0x2EC),
                          LODWORD(v79),
                          v82);
                        ++v76;
                        v75 = *(UnitWeaponsInfo + 0x300);
                      }
                      while ( v76 < *(v75 + Unit + 8) );
                    }
                  }
                  v29 = v83;
                }
              }
            }
          }
          UnitList = UnitList_;
          v26 = v89;
          v27 = *(UnitList_ + 8 * v89);
          if ( !*(v27 + 0x10B0) )
            *(*(v27 + 0x9D0) + 0x5ADCi64) = 0x3F800000;
        }
        ++v26;
      }
      while ( v26 < v86 );
      LOBYTE(Unit) = 1;
    }
    goto LABEL_153;
  }
  v21 = 0i64;
  while ( (*(*(UnitList_ + 8 * v21) + 0x1058i64) & 0x2000010) == 0 )
  {
    if ( ++v21 >= v86 )
      goto LABEL_30;
  }
  LODWORD(Unit) = 0;
LABEL_153:
  if ( UnitList_ )
    (*(*v85 + 0x40i64))(v85);
  return Unit;
}
