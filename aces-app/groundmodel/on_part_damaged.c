void __fastcall on_part_damaged(__int64 Unit_, unsigned __int8 a2, int a3, float a4, char a5)
{
  if ( a3 < 0 )
    return;
  v6 = a2;
  Unit = Unit_;
  UnitWeaponsInfo = *(Unit_ + 0x11A0);
  if ( (a2 & (a3 == 0)) == 1 && *(Unit_ + 0x2EBA) && *(UnitWeaponsInfo + 0x298) && *(Unit_ + 0x2950) )
  {
    v67 = Unit_;
    if ( !g_net || !*(g_net + 0x60) )
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
      v24 = &MATH_FLOAT_ZERO;
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
  if ( *(damage_model_parts + 8) <= a3 )
  {
    v27 = 0i64;
  }
  else
  {
    v25 = *(damage_model_parts + 0x4A);
    v26 = (*(damage_model_parts + 7) + 0x10 * (*(*(damage_model_parts + 3) + 4i64 * a3) >> v25));
    if ( *(*(damage_model_parts + 3) + 4i64 * a3) >> v25 == *(damage_model_parts + 0x10) )
      v26 = damage_model_parts + 0x28;
    v27 = *v26 + (*(*(damage_model_parts + 3) + 4i64 * a3) & ~(0xFFFFFFFF << v25));
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
                g_rnd_seed = 0x41C64E6D * g_rnd_seed + 0x3039;
                *(*(Unit + 0x1EA0) + 0x60i64) = ((*&dword_44A5C78 * *(*(Unit + 0x1EA0) + 0xCi64))
                                               * (HIWORD(g_rnd_seed) & 0x7FFF))
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
      logmessage_fmt(3u, "Cast '%s' on '%s' of '%s'", PerformanceCount, 3);
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
        *&Rotation = (v44[0x15] + v44[0x12]) * *&screenScaleFactor;
        v47 = (v44[0x14] + v44[0x11]) * *&screenScaleFactor;
        *&v46 = (v44[0x13] + v44[0x10]) * *&screenScaleFactor;
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
        logmessage_fmt(3u, "No collision node '%s'", &v63, 1);
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
