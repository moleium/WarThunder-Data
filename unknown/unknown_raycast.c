void __fastcall unknown_raycast(__int64 Unit_, unsigned __int8 a2, int a3, float a4, char a5)
{
  unsigned __int8 v6; // r14
  __int64 Unit; // rdi
  __int64 UnitWeaponsInfo; // r13
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // ebp
  unsigned int v13; // ecx
  __int64 *v14; // rax
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rax
  unsigned int UnitType; // ecx
  int v20; // edx
  __int64 v21; // rdx
  __int128 *v22; // rbp
  bool v23; // zf
  __int128 *v24; // rdx
  char v25; // cl
  _QWORD *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  int v30; // ecx
  __m128 v31; // xmm1
  __m128 v32; // xmm2
  __m128 v33; // xmm3
  __m128 v34; // xmm4
  __m128 v35; // xmm1
  __int64 v36; // rdx
  LONGLONG v37; // rax
  int v38; // ebp
  unsigned int v39; // ecx
  __int64 v40; // rax
  void *v41; // rbx
  CHAR *v42; // rsi
  __int64 v43; // rbx
  float *v44; // rax
  __int128 Rotation; // xmm0
  __int128 v46; // xmm1
  float v47; // xmm2_4
  __int64 UnitWeaponsInfo_; // rbx
  DWORD v49; // eax
  __int64 v50; // rax
  __int64 i; // rcx
  unsigned __int64 v52; // rbp
  _BYTE *ground_movement; // rax
  char v54; // cl
  double *air_movement; // rcx
  float v56; // xmm0_4
  unsigned int v57; // xmm2_4
  unsigned int v58; // xmm1_4
  unsigned int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rsi
  __int128 v63; // [rsp+60h] [rbp-118h] BYREF
  __int128 v64; // [rsp+70h] [rbp-108h]
  __int128 v65; // [rsp+80h] [rbp-F8h] BYREF
  int v66; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v67; // [rsp+98h] [rbp-E0h]
  LARGE_INTEGER PerformanceCount[2]; // [rsp+A0h] [rbp-D8h] BYREF
  __m128 v69; // [rsp+B0h] [rbp-C8h]
  __m128 v70; // [rsp+C0h] [rbp-B8h]
  char v71; // [rsp+11Fh] [rbp-59h]

  if ( a3 < 0 )
    return;
  v6 = a2;
  Unit = Unit_;
  UnitWeaponsInfo = *(Unit_ + 0x11A0);
  if ( (a2 & (a3 == 0)) == 1 && *(Unit_ + 0x2EBA) && *(UnitWeaponsInfo + 0x298) && *(Unit_ + 0x2950) )
  {
    v67 = Unit_;
    if ( !qword_4B507E8 || !*(qword_4B507E8 + 0x60) )
    {
      sub_6AD1D0(UnitWeaponsInfo, Unit_ + 0x2EC8);
      UnitWeaponsInfo = *(Unit + 0x11A0);
    }
    if ( **(UnitWeaponsInfo + 0x90) )
    {
      v9 = *(UnitWeaponsInfo + 0x468);
      if ( *(v9 + 8) > 0 )
      {
        v10 = 0i64;
        do
        {
          v11 = **(UnitWeaponsInfo + 0x90);
          if ( v11 )
          {
            v12 = *(*(v9 + 0x10) + 2 * v10);
            v13 = *(v11 + 0x18);
            if ( v13 > v12 )
              *(*(v11 + 0x10) + 0x78 * v13 + 4i64 * *(*(v9 + 0x10) + 2 * v10)) = 0;
            v14 = *(UnitWeaponsInfo + 0x150);
            if ( v14 && *(v14 + 4) )
            {
              v15 = *v14;
              v16 = 8i64 * *(v14 + 4);
              v17 = 0i64;
              do
              {
                sub_4F1B90(*(v15 + v17), 0i64, v12);
                v17 += 8i64;
              }
              while ( v16 != v17 );
            }
          }
          ++v10;
        }
        while ( v10 < *(v9 + 8) );
      }
    }
    Unit = v67;
    v6 = a2;
    if ( *(v67 + 0x25D4) != 0xFFFFFFFF )
    {
      v28 = *(game + 0x5B0);
      v29 = *(v28 + 0x38) + 0x10;
      *(v28 + 0x38) = v29;
      v30 = *(Unit + 0x25D4);
      if ( v30 >= 0 && *(&xmmword_4B82810 + 2) >= v30 )
      {
        v31 = *(Unit + 0x9AC);
        v32 = *(Unit + 0x9BC);
        v33 = _mm_shuffle_ps(*(Unit + 0x99C), v31, 0x34);
        v34 = _mm_shuffle_ps(*(Unit + 0x99C), v31, 0xD6);
        v35 = _mm_shuffle_ps(v31, v32, 0x9E);
        *&PerformanceCount[0].LowPart = _mm_shuffle_ps(*(Unit + 0x99C), v35, 0x8C);
        v69 = _mm_shuffle_ps(v33, v35, 0xDD);
        v70 = _mm_shuffle_ps(v34, v32, 0xC8);
        sub_1860230(v30, 0, PerformanceCount, 1, 0x7FFF, v29, 0, 0i64);
      }
    }
    goto LABEL_68;
  }
  if ( (a2 & (a3 == 0)) != 0 && *(*(UnitWeaponsInfo + 0xE0) + 8i64 * *(UnitWeaponsInfo + 0x50)) && *(Unit_ + 0x2950) )
  {
    PerformanceCount[0].QuadPart = 0x3F80000000000000i64;
    PerformanceCount[1].LowPart = 0;
    v66 = 0xFFFFFFFF;
    v18 = *(Unit_ + 0x2280) + 0x428i64;
    UnitType = *(Unit_ + 0x10B0);
    if ( UnitType > 0xF )
      goto LABEL_54;
    v20 = 0x897E;
    if ( _bittest(&v20, UnitType) )
    {
      v21 = *(Unit + 0x1EA0);
      v22 = (v21 + 0x54);
      v23 = v21 == 0;
      v24 = &xmmword_4514A60;
      if ( !v23 )
        v24 = v22;
      if ( *(Unit + 0x58) == 1 )
        v24 = (Unit + 0x22AC);
      DWORD2(v63) = *(v24 + 2);
      *&v63 = *v24;
      goto LABEL_31;
    }
    if ( UnitType || (*(Unit + 0x1058) & 0x2000010) != 0 )
    {
LABEL_54:
      *&v63 = 0i64;
      DWORD2(v63) = 0;
    }
    else
    {
      air_movement = *(Unit + 0x9D0);
      v56 = air_movement[0x132];
      *&v57 = air_movement[0x131];
      *&v58 = air_movement[0x130];
      *&v63 = __PAIR64__(v57, v58);
      *(&v63 + 2) = v56;
    }
LABEL_31:
    sub_6945B0(UnitWeaponsInfo, Unit + 0x99C, &v63, 1, 0, 0, 0, v18, &v66, PerformanceCount);
    goto LABEL_68;
  }
  if ( !*(*(UnitWeaponsInfo + 0x90) + 8i64) || !a2 )
    goto LABEL_68;
  if ( *(qword_4B12868 + 8) <= a3 )
  {
    v27 = 0i64;
  }
  else
  {
    v25 = *(qword_4B12868 + 0x4A);
    v26 = (*(qword_4B12868 + 7) + 0x10 * (*(*(qword_4B12868 + 3) + 4i64 * a3) >> v25));
    if ( *(*(qword_4B12868 + 3) + 4i64 * a3) >> v25 == *(qword_4B12868 + 0x10) )
      v26 = qword_4B12868 + 0x28;
    v27 = *v26 + (*(*(qword_4B12868 + 3) + 4i64 * a3) & ~(0xFFFFFFFF << v25));
  }
  if ( sub_6926A0(UnitWeaponsInfo, v27, 0i64) <= 0.0 )
  {
LABEL_68:
    if ( v6 )
    {
      UnitWeaponsInfo_ = *(Unit + 0x11A0);
      v49 = 0xFFFFFFFF;
      if ( *(UnitWeaponsInfo_ + 0x2A8) > a3 )
        v49 = *(*(UnitWeaponsInfo_ + 0x2A0) + 4i64 * a3);
      PerformanceCount[0].LowPart = v49;
      if ( !*(HudInfo + 0x440)
        && (v49 & 0x8000) == 0
        && (*(*(UnitWeaponsInfo_ + 0x588) + 0x58i64) & 4) != 0
        && *(*(UnitWeaponsInfo_ + 0x308) + 0x38i64 * v49 + 0x34) )
      {
        sub_69EB90(UnitWeaponsInfo_, PerformanceCount);
        *(UnitWeaponsInfo_ + 0x590) = 1;
      }
      if ( *(Unit + 0x2990) )
      {
        v50 = *(Unit + 0x2980);
        for ( i = 0i64; *(v50 + i) != a3; i += 4i64 )
        {
          v52 = v50 + i + 4;
          if ( v52 >= v50 + 4 * *(Unit + 0x2990) )
            return;
        }
        if ( (i & 0x200000000i64) == 0 )
        {
          ground_movement = *(Unit + 0x1EA0);
          if ( ground_movement )
          {
            v54 = ground_movement[1];
            if ( v54 )
            {
              if ( !ground_movement[0x4CB] )
              {
                ground_movement[2] = v54;
                ground_movement[1] = 0;
                ground_movement[0x474] = 0;
                *(*(Unit + 0x1EA0) + 0x49i64) = 1;
                dword_4A79158 = 0x41C64E6D * dword_4A79158 + 0x3039;
                *(*(Unit + 0x1EA0) + 0x60i64) = ((*&dword_44A5C78 * *(*(Unit + 0x1EA0) + 0xCi64))
                                               * (HIWORD(dword_4A79158) & 0x7FFF))
                                              - *(*(Unit + 0x1EA0) + 0xCi64);
              }
            }
          }
        }
      }
    }
    return;
  }
  if ( !*(Unit + 0x20E8) )
  {
LABEL_48:
    if ( a5 )
    {
      off_4A796D0(PerformanceCount);
      v37 = PerformanceCount[0].QuadPart - qword_4B768B8;
      if ( PerformanceCount[0].QuadPart - qword_4B768B8 > 0x65DD0836FFFi64 )
      {
        LODWORD(v37) = (v37 / *&qword_4A796D8);
      }
      else
      {
        v37 *= 0xF4240i64;
        if ( (Frequency.QuadPart | v37) >> 0x20 )
          v37 /= Frequency.QuadPart;
        else
          LODWORD(v37) = v37 / Frequency.LowPart;
      }
      v38 = *(*(Unit + 0x2280) + 0x3ACi64) + v37 / 0x3E8 + (a4 * dword_4492C80);
      v39 = *(Unit + 0x20E8);
      v40 = *(Unit + 0x20EC);
      if ( v40 == v39 )
      {
        if ( *(Unit + 0x20EC) )
        {
          if ( v40 > 0x1FF )
            v59 = ((v40 + 1) >> 1) + v40;
          else
            v59 = 2 * v40;
        }
        else
        {
          v59 = 2;
        }
        v60 = *(Unit + 0x20D8);
        if ( !v60 )
          goto LABEL_97;
        v61 = 2i64;
        if ( v59 >= 3 )
          v61 = v59;
        v41 = (*(**(Unit + 0x20E0) + 0x38i64))(*(Unit + 0x20E0), v60, 8 * v61);
        v59 = v61;
        if ( !v41 )
        {
LABEL_97:
          v61 = 2i64;
          if ( v59 >= 3 )
            v61 = v59;
          v41 = (*(**(Unit + 0x20E0) + 0x18i64))(*(Unit + 0x20E0), 8 * v61);
          memmove(v41, *(Unit + 0x20D8), 8i64 * *(Unit + 0x20E8));
          if ( *(Unit + 0x20D8) )
            (*(**(Unit + 0x20E0) + 0x40i64))(*(Unit + 0x20E0));
        }
        *(Unit + 0x20D8) = v41;
        *(Unit + 0x20EC) = v61;
        v39 = *(Unit + 0x20E8);
      }
      else
      {
        v41 = *(Unit + 0x20D8);
      }
      *(Unit + 0x20E8) = v39 + 1;
      *(v41 + 4 * v39) = a3;
      *(v41 + 2 * v39 + 1) = v38;
    }
    if ( *(*(Unit + 0x11A0) + 0x58i64) && *(*(Unit + 0x2280) + 0x433i64) && *(Unit + 0x1058) >= 0 )
    {
      v42 = &szFile;
      if ( *(*(Unit + 0x2280) + 0x318i64) )
        v42 = *(*(Unit + 0x2280) + 0x318i64);
      v43 = sub_365AE0(Unit, a3);
      PerformanceCount[1].QuadPart = sub_93E870(*(*(Unit + 0x2280) + 0x36Ci64));
      PerformanceCount[0].LowPart = 1;
      v69.m128_u64[1] = v43;
      v69.m128_i32[0] = 1;
      v70.m128_u64[1] = v42;
      v70.m128_i32[0] = 1;
      dg_debug(3u, "Cast '%s' on '%s' of '%s'", PerformanceCount, 3);
      sub_365AE0(Unit, a3);
      sub_17A810(PerformanceCount, 0x80, "%s_dm");
      v71 = 0;
      v44 = sub_14B44E0(*(*(Unit + 0x11A0) + 0x58i64), PerformanceCount);
      if ( v44 )
      {
        Rotation = *(Unit + 0x99C);
        v46 = *(Unit + 0x9AC);
        v65 = *(Unit + 0x9BC);
        v64 = v46;
        v63 = Rotation;
        *&Rotation = (v44[0x15] + v44[0x12]) * *&dword_44801CC;
        v47 = (v44[0x14] + v44[0x11]) * *&dword_44801CC;
        *&v46 = (v44[0x13] + v44[0x10]) * *&dword_44801CC;
        *(&v65 + 1) = ((*(&v64 + 2) * *&Rotation) + (*(&v63 + 3) * v47)) + ((*&v63 * *&v46) + *(&v65 + 1));
        *(&v65 + 2) = ((*(&v64 + 3) * *&Rotation) + (*&v64 * v47)) + ((*(&v63 + 1) * *&v46) + *(&v65 + 2));
        *(&v65 + 3) = ((*&Rotation * *&v65) + (v47 * *(&v64 + 1))) + ((*&v46 * *(&v63 + 2)) + *(&v65 + 3));
        sub_93DDB0(*(*(Unit + 0x2280) + 0x36Ci64), &ymmword_4514980, &v63, 0, 1, 0i64, 0x3F800000);
        sub_EEB270(&v65 + 4, 4i64, 2i64);
      }
      else
      {
        *(&v63 + 1) = PerformanceCount;
        LODWORD(v63) = 1;
        dg_debug(3u, "No collision node '%s'", &v63, 1);
      }
    }
    goto LABEL_68;
  }
  v36 = 0i64;
  while ( *(*(Unit + 0x20D8) + 8 * v36) != a3 )
  {
    if ( *(Unit + 0x20E8) == ++v36 )
      goto LABEL_48;
  }
}
