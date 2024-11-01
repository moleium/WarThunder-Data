void __fastcall tickWeapon(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float *a4,
        __int64 a5,
        __int64 a6,
        float a7,
        unsigned __int8 a8,
        float a9,
        unsigned int *a10,
        char a11,
        int a12)
{

  v14 = a3;
  v16 = a11;
  v17 = a9;
  if ( !*(a1 + 0x421) && !a11 )
    return;
  *(a1 + 0x64C) = *(a1 + 0x64C) - a7;
  if ( *(a1 + 0x687) )
    *(a1 + 0x686) = 0;
  v18 = a12;
  sub_201E70(a3, a1 + 0x46C);
  Unit = *(a1 + 8);
  if ( *(Unit + 0x10B0) == 5 && *(a1 + 0x212) && *(a1 + 0x368) > Y )
    *&v18 = *&v18 * *(HudInfo + 0xFA);
  Unit_ = (a1 + 8);
  if ( v16
    && *(a1 + 0x3F0) >= 0
    && !*(a1 + 0x3BC)
    && *(Unit + 0x10A8) <= 1u
    && *(a1 + 0x2B0)
    && ((*(*(Unit + 0x50) + 0x18i64))(Unit + 0x50) || Y > *(a1 + 0x364) && *(*Unit_ + 0x10B0i64) != 5) )
  {
    v28 = *(a1 + 0x378);
    if ( v28 != 0.0 && (v17 - v28) > (*(a1 + 0x408) + *(a1 + 0x404)) )
    {
      v29 = *(a1 + 0x3D8);
      if ( v29 )
      {
        v30 = 0;
        if ( v29 != 1 )
        {
          v31 = *(a1 + 0x2B0);
          v32 = *(a1 + 0x43C) << 6;
          v33 = *(v31 + v32 + 0xCC);
          if ( v33 < 2 )
          {
            sub_1FDA20(a1);
            v240 = 1;
            if ( v239 >= 2 )
              v240 = v239;
            v30 = v240 - 1;
            if ( v30 >= *(a1 + 0x3D8) )
              goto LABEL_450;
          }
          else
          {
            v19 = (*(v31 + 0x98 + v32 + 0x24) + 1) % v33 % v29;
            v30 = v19;
          }
        }
        ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
        if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
          _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v19, v26, v27);
        if ( *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x158i64) )
        {
          sub_21B370(a1, v30);
        }
        else
        {
          v242 = sub_1464470(0x18ui64);
          *v242 = &off_44A9370;
          v242[1] = a1;
          *(v242 + 4) = v30;
          add_delayed_callback(
            &controller_do_reset_input,
            v242,
            0i64,
            0i64,
            "DelayedAction @\n\t..\\..\\skyquake\\prog\\weapon\\gun.cpp(1027):");
        }
LABEL_450:
        *(a1 + 0x3BC) = 1;
      }
    }
  }
  *(a1 + 0x5F4) = v17;
  if ( *(a1 + 0x5F0) > 0.0 && *(a1 + 0x5EC) < v17 )
  {
    *(a1 + 0x5F0) = 0xBF800000;
    sub_21C600(a1, 0i64);
    v21 = *(a1 + 0x6A8);
    if ( v21 )
    {
      if ( !*(v21 + 0x10) )
      {
        *(v21 + 0x11) = 1;
        if ( (((*(v21 + 0x30) * *(v21 + 0x30)) + (*(v21 + 0x2C) * *(v21 + 0x2C))) + (*(v21 + 0x28) * *(v21 + 0x28))) >= *&FP32_EPSILON )
        {
          *(v21 + 0x28) = 0i64;
          *(v21 + 0x30) = 0;
          sub_16E7120();
        }
      }
    }
    *(a1 + 0x6A8) = 0i64;
    v22 = *(a1 + 0x6F0);
    if ( v22 )
    {
      *(a1 + 0x6F0) = 0i64;
      sub_941E60(*(v22 + 1), *v22);
    }
  }
  v23 = 1;
  if ( *(*Unit_ + 0x10B0i64) == 5 )
  {
LABEL_26:
    if ( !v16 )
      goto LABEL_46;
    goto LABEL_27;
  }
  if ( sub_325180(*Unit_, v19) >= Y )
  {
    v23 = 0;
    goto LABEL_26;
  }
  if ( *(*Unit_ + 0x1AB0i64) )
  {
    v23 = 0;
    if ( !v16 )
      goto LABEL_46;
  }
  else
  {
    v23 = *(HudInfo + 0x1B) != 0 && *(*Unit_ + 0x1BECi64) == 0 || *(*Unit_ + 0x1A50i64) != 0;
    if ( !v16 )
      goto LABEL_46;
  }
LABEL_27:
  v24 = *(a1 + 0x1D0);
  if ( v24 >= 0.0 )
  {
    if ( v23 )
      v25 = v24 - a7;
    else
      v25 = *(HudInfo + 0xE1);
    *(a1 + 0x1D0) = v25;
  }
  v34 = *(a1 + 0x1D4);
  if ( v34 >= 0.0 )
  {
    if ( v23 )
      v35 = v34 - a7;
    else
      v35 = *(HudInfo + 0xE2);
    *(a1 + 0x1D4) = v35;
  }
LABEL_46:
  v36 = *(a1 + 0x2B0);
  v37 = *(a1 + 0x43C);
  v38 = v37 << 6;
  v39 = **(v36 + v38 + 0x98);
  if ( !v39 )
    goto LABEL_58;
  v40 = *(v39 + 8);
  if ( v40 == 0xFFFFFFFF )
    v40 = *(v39 + 4);
  if ( (v40 & 0x80000000) != 0 )
  {
    v41 = (v40 & 0x7FFFFFFF) >> 0x1B;
    v43 = 0;
    if ( (v40 & 0x7FFFFFFF) < DWORD2(xmmword_4ACF680) )
    {
      v44 = v40 & 0x7FFFFFF;
      if ( v44 < 0x80 << v41 )
      {
        v45 = (&xmmword_4ACF620 + 8);
LABEL_56:
        v46 = *(v45 + v41);
        if ( v46 )
        {
          v43 = *(v46 + 8i64 * v44) != 0i64;
          v37 = *(a1 + 0x43C);
          goto LABEL_59;
        }
LABEL_58:
        v43 = 0;
      }
    }
  }
  else
  {
    v41 = v40 >> 0x1B;
    v42 = 0x80 << (v40 >> 0x1B);
    v43 = 0;
    if ( xmmword_4ACF620 > v40 )
    {
      v44 = v40 & 0x7FFFFFF;
      if ( v44 < v42 )
      {
        v45 = &xmmword_4ACF5C0;
        goto LABEL_56;
      }
    }
  }
LABEL_59:
  v47 = 0;
  if ( !v43 && *(v36 + 0x98 + v38 + 0x34) >= 2 && v37 != *(a1 + 0x43D) )
    LOBYTE(v47) = *(*(a1 + 0x2B0) + (*(a1 + 0x43D) << 6) + 0xD0) == 0;
  LOBYTE(v12) = 1;
  if ( *(*(a1 + 0x2B0) + (*(a1 + 0x43C) << 6) + 0xCC) >= 2 )
  {
    if ( *(a1 + 0x43C) != *(a1 + 0x43D) )
      goto LABEL_70;
    v48 = *(a1 + 0x2B0);
    v49 = v47;
    v50 = *(a1 + 0x43C) << 6;
    v51 = (v48 + v50 + 0xB8);
    if ( !*(v48 + v50 + 0xA0) )
      v51 = (v48 + 0x88);
    v52 = *v51;
    v53 = v52 - *(v48 + v50 + 0xBC);
    if ( v52 <= 0 )
      v53 = *(v48 + v50 + 0xBC);
    v54 = v53 % *(v48 + v50 + 0xCC);
    v47 = v49;
    if ( v54 )
LABEL_70:
      v12 = v47;
  }
  if ( !a11 )
  {
    v59 = 0;
    goto LABEL_167;
  }
  v248 = v14;
  v55 = *Unit_;
  v253 = a4;
  if ( *Unit_ )
  {
    v56 = v55[0x42C] - 1;
    if ( (*(v55 + 0x858) - 1) > 0xEu || (v57 = 0x44BF, !_bittest(&v57, v56)) )
    {
      v58 = 0i64;
LABEL_84:
      sub_1198160(v55[0x6AD], *(a1 + 0x10));
      v55 = v58;
      goto LABEL_85;
    }
    v60 = (&unk_44A9450 + 2 * v56);
  }
  else
  {
    v60 = &loc_10B0;
  }
  v58 = *Unit_;
  if ( *v60 != 3 )
    goto LABEL_84;
  v61 = sub_1197FC0(v55[0x6AD], *(a1 + 0x10), v37);
  v62 = sub_1198160(*(*(a1 + 8) + 0x1AB4i64), *(a1 + 0x10));
  if ( v61 )
  {
    v64 = v62 ^ 1;
    v37 = *Unit_;
    goto LABEL_98;
  }
LABEL_85:
  v37 = *Unit_;
  v65 = *(*Unit_ + 0x10B0i64);
  v64 = 0;
  if ( v65 <= 0xF )
  {
    v66 = 0x897E;
    if ( _bittest(&v66, v65) )
    {
      if ( *(v37 + 0x2114) && !*(v37 + 0x1AB1) && *(v37 + 0x1E80) )
      {
        v63 = *(v37 + 0x1E70);
        v67 = *(v37 + 0x11A0);
        v68 = 0i64;
        v64 = 0;
        do
        {
          v69 = *(v63 + 4 * v68);
          if ( *(v37 + 0x1E48) <= v69 && *(v37 + 0x1E4C) >= v69 )
          {
            LOWORD(v70) = 0xFFFF;
            if ( *(v67 + 0x2A8) > v69 )
              v70 = *(*(v67 + 0x2A0) + 4 * v69);
            if ( *(v67 + 0x310) > v70 )
              v64 -= (*(*(v67 + 0x308) + 0x38i64 * v70 + 0x34) == 0) - 1;
          }
          ++v68;
        }
        while ( *(v37 + 0x1E80) != v68 );
      }
    }
  }
LABEL_98:
  v71 = *(v37 + 0x11D0);
  if ( v71 )
  {
    v63 = *(a1 + 0x24);
    v72 = 0i64;
    if ( *(v71 + 0x1A0) > v63 )
      v72 = *(v71 + 0x190) + 0x290 * v63;
  }
  else
  {
    v72 = 0i64;
  }
  v255[0] = a1;
  v255[1] = &a9;
  v73 = *(a1 + 0x444);
  if ( !v72 )
    goto LABEL_462;
  if ( v73 <= a9 )
    goto LABEL_462;
  if ( !*(v72 + 0xA5) )
    goto LABEL_462;
  if ( (_mm_cvtsi128_si32(_mm_and_ps(
                            _mm_cmplt_ps(_mm_and_ps(*(v72 + 0x38), FABSF_MASK), dword_44A01A0),
                            _mm_cmplt_ps(_mm_and_ps(*(v72 + 0x3C), FABSF_MASK), dword_44A01A0))) & 1) != 0 )
    goto LABEL_462;
  if ( ((v12 ^ 1) & 1) != 0 )
    goto LABEL_462;
  v74 = *(a1 + 0x448);
  if ( v73 <= v74 )
    goto LABEL_462;
  if ( v74 <= v73 )
  {
    v75 = Y;
    v76 = 0.0;
    v77 = *(a1 + 0x444);
  }
  else
  {
    v75 = 0.0;
    v76 = Y;
    v77 = *(a1 + 0x448);
    v74 = *(a1 + 0x444);
  }
  if ( v74 < a9 )
  {
    if ( v77 <= a9 )
    {
      v75 = v76;
    }
    else
    {
      v78 = v77 - v74;
      v79 = LODWORD(a9);
      v79.m128_f32[0] = (a9 - v74) * (v76 - v75);
      if ( v78 > *&epsilon_unk || (v80 = 0i64, v78 < *&dword_449F1AC) )
      {
        v79.m128_f32[0] = v79.m128_f32[0] / v78;
        v80 = v79;
      }
      v81.m128_f32[0] = v74 - a9;
      v75 = v75 + _mm_andnot_ps(_mm_cmple_ss(0i64, v81), v80).m128_f32[0];
    }
  }
  v59 = 1;
  if ( v75 <= *&screenScaleFactor )
  {
LABEL_462:
    if ( !v64 && v73 > a9 )
    {
      LOBYTE(v63) = 1;
      v82 = sub_1FC7A0(a1, v63);
      if ( v55 )
      {
        if ( !v82 && v55[0x845] )
        {
          if ( sub_21C900(v255) )
          {
            *(a1 + 0x444) = 0;
            *(a1 + 0x448) = a9;
            *(a1 + 0x686) = 1;
          }
          goto LABEL_134;
        }
      }
    }
    if ( *(a1 + 0x444) <= a9 )
    {
LABEL_134:
      v59 = 0;
      goto LABEL_135;
    }
    v59 = 0;
    if ( v64 <= 0 && *(a1 + 0x68C) > 0 )
      v59 = sub_21C900(v255);
  }
LABEL_135:
  *(a1 + 0x68C) = v64;
  v83 = *(a1 + 8);
  a4 = v253;
  v14 = v248;
  if ( (*(v83 + 0x58) & 4) == 0 )
    goto LABEL_149;
  v84 = *(v83 + 0x11A0);
  if ( !v84 )
  {
    v88 = (a1 + 0x688);
    goto LABEL_145;
  }
  v85 = *(a1 + 0x1DC);
  v86 = 0xFFFFFFFF;
  if ( *(v84 + 0x2A8) > v85 )
    v86 = *(*(v84 + 0x2A0) + 4 * v85);
  LODWORD(Src) = v86;
  v87 = sub_6ADC90(v84, &Src);
  v88 = (a1 + 0x688);
  if ( v87 && !*(a1 + 0x688) && !*(a1 + 0x558) )
  {
    v180 = *Unit_;
    if ( *(*Unit_ + 0x2C8i64) )
      memmove(&Src, (v180 + 0x2A8), 0xB0ui64);
    else
      sub_7A6880(&Src, v180);
    memmove((a1 + 0x538), &Src, 0xB0ui64);
    v89 = 1;
    goto LABEL_148;
  }
  v89 = 1;
  if ( !v87 )
  {
LABEL_145:
    if ( *(a1 + 0x558) )
    {
      *(a1 + 0x53C) = 0xFFFFFFFF;
      *(a1 + 0x550) = 0xFFFFFFFF00000000ui64;
      *(a1 + 0x558) = 0i64;
      *(a1 + 0x568) = 0x10;
      *(a1 + 0x56C) = 0i64;
      *(a1 + 0x574) = 0;
      *(a1 + 0x598) = 0xFFFFFFFFFFFFFFFFui64;
      *(a1 + 0x594) = 0xFFFF;
      *(a1 + 0x5A0) = 0;
      *(a1 + 0x5B4) = 0xFFFF;
      *(a1 + 0x588) = 0x7FFFFFFF;
      *(a1 + 0x5B8) = 0xFFFFFFFF00000000ui64;
      *(a1 + 0x5A4) = 0i64;
      *(a1 + 0x58C) = 0x7FFFFFFFFFFFFFFFi64;
      *(a1 + 0x578) = xmmword_44A9000;
      *(a1 + 0x5C0) = 0i64;
      *(a1 + 0x5C8) = 0xFFFFFFFFFFFFFFFFui64;
      *(a1 + 0x5D4) = 0;
      *(a1 + 0x5D0) = 0xFFFFFFFF;
    }
    v89 = 0;
  }
LABEL_148:
  *v88 = v89;
LABEL_149:
  *(a1 + 0x248) = fmaxf(0.0, (*(*(game + 0x498) + 0x26BCi64) * a7) + *(a1 + 0x248));
  if ( *(a1 + 0x506)
    && *(*Unit_ + 0x58i64) != 1
    && (*(a1 + 0x1D0) <= 0.0 && *(HudInfo + 0x346) != 0 && *(a1 + 0x214) != 0 || !*(a1 + 0x212)) )
  {
    if ( !*(HudInfo + 0x347) && *(a1 + 0x1D4) <= 0.0
      || (v90 = *(a1 + 0x1DC), v90 < 0)
      || (v91 = *(*Unit_ + 0x11A0i64)) == 0
      || *(v91 + 0x2A8) <= v90
      || (v63 = *(v91 + 0x2A0), v92 = *(v63 + 4 * v90), *(v91 + 0x310) <= v92)
      || *(*(v91 + 0x308) + 0x38i64 * v92 + 0x34) )
    {
      LOBYTE(v63) = 1;
      if ( sub_1FC7A0(a1, v63) )
      {
        *(a1 + 0x506) = 0;
        v93 = v59;
        v59 = 1;
        if ( *(a1 + 0x378) <= 0.0 )
          v59 = v93;
        if ( *(a1 + 0x444) > 0.0 )
          v59 = v93;
      }
    }
  }
  if ( (v47 & 1) != 0 )
    v59 = 1;
LABEL_167:
  v94 = *(a1 + 0x2B0);
  v95 = *(a1 + 0x43C) << 6;
  v96 = (v94 + v95 + 0xB8);
  if ( !*(v94 + v95 + 0xA0) )
    v96 = (v94 + 0x88);
  v97 = *v96;
  v98 = *(v94 + v95 + 0xBC);
  v99 = v97 - v98;
  if ( v97 <= 0 )
    v99 = *(v94 + v95 + 0xBC);
  v100 = (v99 >> 0x1F);
  LODWORD(v100) = v99 % *(v94 + v95 + 0xCC);
  LOBYTE(v98) = v100 == 0;
  if ( *(v94 + 0x2A0) )
  {
    if ( !*(v94 + 0xB) )
      goto LABEL_176;
  }
  else
  {
    LOBYTE(v98) = *(a1 + 0x43C) != *(a1 + 0x43D);
    if ( !*(*(a1 + 0x2B0) + 0xBi64) )
      goto LABEL_176;
  }
  if ( *(*Unit_ + 0x10B0i64) != 3 )
    goto LABEL_218;
LABEL_176:
  LOBYTE(v100) = *(HudInfo + 0x346) != 0 && *(a1 + 0x214) != 0;
  if ( ((*(a1 + 0x1D0) <= 0.0) & v100) == 0 && *(a1 + 0x212) )
    goto LABEL_218;
  if ( *(HudInfo + 0x347) || *(a1 + 0x1D4) > 0.0 )
  {
    v101 = *(a1 + 0x1DC);
    if ( v101 >= 0 )
    {
      v102 = *(*Unit_ + 0x11A0i64);
      if ( v102 )
      {
        if ( *(v102 + 0x2A8) > v101 )
        {
          v100 = *(v102 + 0x2A0);
          v103 = *(v100 + 4 * v101);
          if ( *(v102 + 0x310) > v103 && !*(*(v102 + 0x308) + 0x38i64 * v103 + 0x34) )
            goto LABEL_218;
        }
      }
    }
  }
  LOBYTE(v100) = 1;
  if ( (v98 & sub_1FC7A0(a1, v100)) != 1 )
    goto LABEL_218;
  v104 = *Unit_;
  if ( *Unit_ && !*(v104 + 0x10B0) )
  {
    v172 = *(a1 + 0x2B8);
    if ( v172 < 0 )
    {
      if ( *(a1 + 0x21C) )
        goto LABEL_197;
    }
    else
    {
      v100 = *(v104 + 0x11A0);
      if ( *(v100 + 0x2A8) > v172 )
      {
        v173 = *(*(v100 + 0x2A0) + 4 * v172);
        if ( (v173 & 0x8000u) == 0 )
        {
          v174 = v173 >> 1;
          if ( *(v100 + 0x4E0) > v174 )
          {
            v100 = *(*(v100 + 0x4D8) + v174);
            LOBYTE(v100) = v100 >> ((4 * v173) & 4);
            if ( (v100 & 0xE) != 0 )
              goto LABEL_197;
          }
        }
      }
    }
  }
  v105 = *(a1 + 0x2B0);
  if ( *(v105 + 0xB) )
  {
    if ( !*(v105 + 0xC) || !(*(*(v104 + 0x50) + 0x10i64))(v104 + 0x50) )
    {
      if ( !*(a1 + 0x1F4) )
        goto LABEL_197;
LABEL_195:
      if ( a9 >= *(a1 + 0x444) || !*(a1 + 0x5E8) )
        goto LABEL_218;
      goto LABEL_197;
    }
    v105 = *(a1 + 0x2B0);
  }
  if ( *(v105 + (*(a1 + 0x43C) << 6) + 0xBC) )
    goto LABEL_195;
LABEL_197:
  if ( *(*Unit_ + 0x58i64) != 1 && *(*(a1 + 0x2B0) + (*(a1 + 0x43D) << 6) + 0xBC) )
  {
    if ( *Unit_ )
    {
      if ( (*(*(*Unit_ + 0x50i64) + 0x18i64))(*Unit_ + 0x50i64) )
      {
        v106 = *(a1 + 0x2B0);
        if ( *(v106 + 0x50) >= 0 && *(v106 + (*(a1 + 0x43C) << 6) + 0xCC) >= 2 )
          *(a1 + 0x684) = 1;
      }
    }
    sub_217180(a1, 0, 0, 0xFFFFFFFF, 1);
    v59 = 1;
  }
  v107 = *(a1 + 0x43D);
  *(a1 + 0x43C) = v107;
  v108 = **(*(a1 + 0x2B0) + (v107 << 6) + 0x98);
  if ( v108 )
  {
    v109 = j__malloc_base(0x10ui64);
    if ( !v109 )
    {
      do
      {
        if ( !off_4B678A0 || !off_4B678A0(0x10i64) )
        {
          v257 = 0x10i64;
          LODWORD(Src) = 2;
          LOBYTE(v110) = 1;
          log_err(
            "..\\..\\prog\\engine2\\memory\\dagmem.cpp",
            0x345,
            v110,
            "Not enough memory to alloc %llu bytes",
            &Src,
            1);
        }
        v111 = j__malloc_base(0x10ui64);
      }
      while ( !v111 );
      v109 = v111;
    }
    _InterlockedAdd(&dword_4B6788C, (j__msize(v109) + 0xF) >> 4);
    _InterlockedIncrement(&dword_4B67890);
    *v109 = &off_44A9350;
    v109[1] = v108;
    add_delayed_callback(
      &controller_do_reset_input,
      v109,
      0i64,
      0i64,
      "DelayedAction @\n\t..\\..\\skyquake\\prog\\weapon\\gun.cpp(457):");
  }
  *(a1 + 0x686) = 1;
  if ( (*(*(*(a1 + 8) + 0x50i64) + 0x18i64))(*(a1 + 8) + 0x50i64)
    && cur_hud_crosshair
    && LocalUnit
    && *(cur_hud_crosshair + 0x4A84) != 0.0
    && *(LocalUnit + 0x10B0) == 3 )
  {
    sub_11177A0(*(game + 0x440) + 0x910i64, v100, 0i64);
  }
LABEL_218:
  *(a1 + 0x441) = 0;
  if ( v59 )
  {
    LOBYTE(v12) = (*(a1 + 0x505) != 0) | v12;
    v112 = sub_1198FB0(*(*(a1 + 8) + 0x1AB4i64), *(a1 + 0x10), v37);
    v113 = a9;
    LOBYTE(v12) = v12 & 1;
    *(a1 + 0x444) = ((*&v112 * *&v18) * sub_215F90(a1, v12, v114, v98)) + v113;
    *(a1 + 0x441) = 1;
    *(a1 + 0x448) = a9;
    *(a1 + 0x686) = 1;
    if ( *(*(a1 + 0x2B0) + 0xCi64) )
      v115 = (*(*(*Unit_ + 0x50i64) + 0x10i64))(*Unit_ + 0x50i64);
    else
      v115 = 0;
    v116 = a11;
    *(a1 + 0x1F7) = v115;
    *(a1 + 0x3A2) = 0;
  }
  else
  {
    v116 = a11;
    if ( *(a1 + 0x44C) > a9 )
    {
      *(a1 + 0x444) = *(a1 + 0x444) + a7;
      *(a1 + 0x448) = *(a1 + 0x448) + a7;
    }
  }
  if ( !(*(a1 + 0x51C) | *(a1 + 0x3A2)) )
  {
    v117 = *(*(a1 + 0x2B0) + 0x298i64);
    if ( v117 > 0.0 )
    {
      *(a1 + 0x520) = fmaxf(*(a1 + 0x520) - (v117 * a7), 0.0);
      v118 = *(a1 + 0x720);
      if ( v118 && *(v118 + 0x13C) )
        sub_1667EE0(v118);
      v119 = *(a1 + 0x728);
      if ( v119 && *(v119 + 0x13C) )
        sub_1667EE0(v119);
      v120 = *(a1 + 0x1C);
      if ( v120 <= 0xFF )
      {
        v121 = *(*(a1 + 8) + 8i64) & 0x7FF;
        if ( qword_4B1E618 > v121 )
        {
          EnterCriticalSection(&stru_4B1E318);
          *(qword_4B1E608 + 0x118 * v121 + 8 * (v120 >> 6) + 0x68) &= __ROL8__(0xFFFFFFFFFFFFFFFEui64, v120);
          LeaveCriticalSection(&stru_4B1E318);
        }
      }
    }
  }
  *(a1 + 0x51C) = 0;
  if ( !*(a1 + 0x506) )
  {
    v133 = *Unit_;
    if ( *Unit_ )
    {
      v134 = *(v133 + 0x10B0);
      v135 = 0i64;
      if ( v134 == 5 )
        v135 = *Unit_;
      if ( v134 <= 0xF && (v136 = 0x897E, v137 = *Unit_, _bittest(&v136, v134)) )
      {
        if ( v135 )
        {
LABEL_268:
          v138 = *(v135 + 0x40A0);
          v139 = *(v133 + 0x11D0);
          v140 = 0xFFFFFFFF;
          if ( v139 )
          {
            v141 = *(a1 + 0x24);
            if ( v141 >= 0 && v141 < *(v139 + 0x1A0) )
              v140 = *(*(v139 + 0x190) + 0x290 * v141 + 0xC2);
          }
          v142 = v138 == v140;
          if ( !v137 )
            goto LABEL_281;
LABEL_367:
          v147 = 1;
          if ( *(v137 + 0x2D70) <= 0.0 && *(a1 + 0x231) )
          {
            v100 = *(a1 + 0x2B0) + 0x54i64;
            v147 = 1;
            goto LABEL_283;
          }
LABEL_282:
          v100 = *(a1 + 0x2B0) + 0x50i64;
LABEL_283:
          v148 = *v100;
          if ( !v116 || !v142 || v148 < 0 )
          {
            if ( v148 < 0 )
LABEL_292:
              *(a1 + 0x684) = 0;
LABEL_293:
            if ( !*(a1 + 0x685) )
              goto LABEL_237;
            v100 = *(a1 + 0x2B0);
            if ( *(v100 + 0x50) < 0 )
              goto LABEL_237;
            v150 = *Unit_;
            if ( !*Unit_ || *(v150 + 0x10B0) )
            {
              if ( *(a1 + 0x505) )
                goto LABEL_237;
              goto LABEL_383;
            }
            v175 = *(a1 + 0x2B8);
            if ( v175 < 0 )
            {
              v179 = *(a1 + 0x21C) == 0;
            }
            else
            {
              v176 = *(v150 + 0x11A0);
              if ( *(v176 + 0x2A8) <= v175
                || (v177 = *(*(v176 + 0x2A0) + 4 * v175), (v177 & 0x8000u) != 0)
                || (v178 = v177 >> 1, *(v176 + 0x4E0) <= v178) )
              {
                v185 = 0;
                goto LABEL_380;
              }
              v179 = ((*(*(v176 + 0x4D8) + v178) >> ((4 * v177) & 4)) & 0xE) == 0;
            }
            v185 = !v179;
LABEL_380:
            if ( v185 || *(a1 + 0x505) )
              goto LABEL_237;
            v215 = *(a1 + 0x2B8);
            if ( v215 < 0 )
            {
              if ( *(a1 + 0x21C) )
                goto LABEL_237;
            }
            else
            {
              v216 = *(v150 + 0x11A0);
              if ( *(v216 + 0x2A8) > v215 )
              {
                v217 = *(*(v216 + 0x2A0) + 4 * v215);
                if ( (v217 & 0x8000u) == 0 )
                {
                  v218 = v217 >> 1;
                  if ( *(v216 + 0x4E0) > v218 && ((*(*(v216 + 0x4D8) + v218) >> ((4 * v217) & 4)) & 0xE) != 0 )
                    goto LABEL_237;
                }
              }
            }
LABEL_383:
            if ( *(v100 + 0xB) )
            {
              if ( !*(v100 + 0xC) || !(*(*(v150 + 0x50) + 0x10i64))(v150 + 0x50) )
              {
                v186 = *(a1 + 0x1F4);
                goto LABEL_389;
              }
              v100 = *(a1 + 0x2B0);
            }
            v186 = *(v100 + (*(a1 + 0x43C) << 6) + 0xBC);
LABEL_389:
            if ( v186 && a9 > *(a1 + 0x444) )
            {
              v187 = *Unit_;
              if ( *Unit_ && *(v187 + 0x10B0) == 3 )
              {
                v188 = *(v187 + 0x11D0);
                v189 = 0xFFFFFFFFi64;
                if ( v188 )
                {
                  v190 = *(a1 + 0x24);
                  if ( v190 >= 0 && v190 < *(v188 + 0x1A0) )
                    v189 = *(*(v188 + 0x190) + 0x290 * v190 + 0xC2);
                }
                sub_1168540(v187, v189);
              }
              *(a1 + 0x685) = 0;
            }
            goto LABEL_237;
          }
          if ( !(*(*(v133 + 0x50) + 0x18i64))(v133 + 0x50, v100, v37) )
            goto LABEL_293;
          v149 = *Unit_;
          if ( !*Unit_ || (v100 = *(v149 + 0x10B0), v100) )
          {
            if ( *(a1 + 0x505) )
              goto LABEL_293;
            goto LABEL_407;
          }
          v181 = *(a1 + 0x2B8);
          if ( v181 < 0 )
          {
            v184 = *(a1 + 0x21C) == 0;
          }
          else
          {
            v37 = *(v149 + 0x11A0);
            if ( *(v37 + 0x2A8) <= v181
              || (v182 = *(*(v37 + 0x2A0) + 4 * v181), (v182 & 0x8000u) != 0)
              || (v183 = v182 >> 1, *(v37 + 0x4E0) <= v183) )
            {
              v191 = 0;
              goto LABEL_404;
            }
            v37 = *(*(v37 + 0x4D8) + v183);
            LOBYTE(v37) = v37 >> ((4 * v182) & 4);
            v184 = (v37 & 0xE) == 0;
          }
          v191 = !v184;
LABEL_404:
          if ( v191 || *(a1 + 0x505) )
            goto LABEL_293;
          v219 = *(a1 + 0x2B8);
          if ( v219 < 0 )
          {
            if ( *(a1 + 0x21C) )
              goto LABEL_293;
          }
          else
          {
            v100 = *(v149 + 0x11A0);
            if ( *(v100 + 0x2A8) > v219 )
            {
              v220 = *(*(v100 + 0x2A0) + 4 * v219);
              if ( (v220 & 0x8000u) == 0 )
              {
                v221 = v220 >> 1;
                if ( *(v100 + 0x4E0) > v221 )
                {
                  v100 = *(*(v100 + 0x4D8) + v221);
                  LOBYTE(v100) = v100 >> ((4 * v220) & 4);
                  if ( (v100 & 0xE) != 0 )
                    goto LABEL_293;
                }
              }
            }
          }
LABEL_407:
          v192 = *(a1 + 0x2B0);
          if ( *(v192 + 0xB) )
          {
            if ( !*(v192 + 0xC) || !(*(*(v149 + 0x50) + 0x10i64))(v149 + 0x50) )
            {
              v193 = *(a1 + 0x1F4);
LABEL_413:
              if ( !v193 )
                goto LABEL_293;
              v194 = *(a1 + 0x685);
              if ( *(a1 + 0x684) )
              {
                if ( !v194 )
                {
                  *(a1 + 0x685) = 1;
                  (*(**(a1 + 8) + 0x248i64))(*(a1 + 8));
                }
                if ( a9 > *(a1 + 0x448) )
                {
                  v195 = qword_4B1E5C8 <= v148 ? Y : *(qword_4B1E5B8 + v148);
                  if ( a9 > (*(a1 + 0x444) - v195) )
                  {
                    v222 = *(a1 + 0x46C);
                    v252 = *(a1 + 0x98);
                    v223 = *(a1 + 0x9C);
                    v224 = *(a1 + 0x478);
                    v225 = *(a1 + 0x484);
                    v226 = *(a1 + 0xA0);
                    *&Src = (v226 * v225) + ((v223 * v224) + (v252 * v222));
                    v227 = *(a1 + 0xA4);
                    v228 = *(a1 + 0xA8);
                    v229 = *(a1 + 0xAC);
                    *(&v257 + 1) = (v229 * v225) + ((v228 * v224) + (v227 * v222));
                    v230 = *(a1 + 0xB0);
                    v231 = *(a1 + 0xB4);
                    v232 = *(a1 + 0xB8);
                    v260 = (v232 * v225) + ((v231 * v224) + (v230 * v222));
                    v250 = *(a1 + 0xBC);
                    v245 = *(a1 + 0xC0);
                    v247 = *(a1 + 0xC4);
                    v263 = ((v225 * v247) + (v224 * v245)) + ((v222 * v250) + *(a1 + 0x490));
                    v233 = *(a1 + 0x470);
                    v234 = *(a1 + 0x47C);
                    v235 = *(a1 + 0x488);
                    *(&Src + 1) = (v235 * v226) + ((v234 * v223) + (v233 * v252));
                    v258 = (v235 * v229) + ((v234 * v228) + (v233 * v227));
                    v261 = (v235 * v232) + ((v234 * v231) + (v233 * v230));
                    v264 = ((v235 * v247) + ((v234 * v245) + (v233 * v250))) + *(a1 + 0x494);
                    v236 = *(a1 + 0x474);
                    v237 = *(a1 + 0x480);
                    v238 = *(a1 + 0x48C);
                    *&v257 = (v226 * v238) + ((v223 * v237) + (v252 * v236));
                    v259 = (v229 * v238) + ((v228 * v237) + (v227 * v236));
                    v262 = (v232 * v238) + ((v231 * v237) + (v230 * v236));
                    v265 = ((v238 * v247) + ((v237 * v245) + (v236 * v250))) + *(a1 + 0x498);
                    sub_EEC0E0(v148, &v263);
                    goto LABEL_292;
                  }
                }
              }
              else
              {
                if ( v194 )
                {
                  v196 = *(a1 + 0x46C);
                  v251 = *(a1 + 0x98);
                  v197 = *(a1 + 0x9C);
                  v198 = *(a1 + 0x478);
                  v199 = *(a1 + 0x484);
                  v200 = *(a1 + 0xA0);
                  *&Src = (v200 * v199) + ((v197 * v198) + (v251 * v196));
                  v201 = *(a1 + 0xA4);
                  v202 = *(a1 + 0xA8);
                  v203 = *(a1 + 0xAC);
                  *(&v257 + 1) = (v203 * v199) + ((v202 * v198) + (v201 * v196));
                  v204 = *(a1 + 0xB0);
                  v205 = *(a1 + 0xB4);
                  v206 = *(a1 + 0xB8);
                  v260 = (v206 * v199) + ((v205 * v198) + (v204 * v196));
                  v249 = *(a1 + 0xBC);
                  v244 = *(a1 + 0xC0);
                  v246 = *(a1 + 0xC4);
                  v263 = ((v199 * v246) + (v198 * v244)) + ((v196 * v249) + *(a1 + 0x490));
                  v207 = *(a1 + 0x470);
                  v208 = *(a1 + 0x47C);
                  v209 = *(a1 + 0x488);
                  *(&Src + 1) = (v209 * v200) + ((v208 * v197) + (v207 * v251));
                  v258 = (v209 * v203) + ((v208 * v202) + (v207 * v201));
                  v261 = (v209 * v206) + ((v208 * v205) + (v207 * v204));
                  v264 = ((v209 * v246) + ((v208 * v244) + (v207 * v249))) + *(a1 + 0x494);
                  v210 = *(a1 + 0x474);
                  v211 = *(a1 + 0x480);
                  v212 = *(a1 + 0x48C);
                  *&v257 = (v200 * v212) + ((v197 * v211) + (v251 * v210));
                  v259 = (v203 * v212) + ((v202 * v211) + (v201 * v210));
                  v262 = (v206 * v212) + ((v205 * v211) + (v204 * v210));
                  v265 = ((v212 * v246) + ((v211 * v244) + (v210 * v249))) + *(a1 + 0x498);
                  sub_EEC130(v148, &v263);
                }
                if ( !((*(a1 + 0x231) == 0) | v147 ^ 1) && *(v137 + 0x2D70) <= 0.0 )
                {
                  v213 = *(*(a1 + 0x2B0) + 0x50i64);
                  if ( qword_4B1E5B0 > v213 )
                  {
                    v214 = *(qword_4B1E5A0 + v213);
                    if ( v214 )
                    {
                      LOBYTE(v100) = 1;
                      sub_1667DF0(v214, v100);
                    }
                  }
                }
              }
              goto LABEL_293;
            }
            v192 = *(a1 + 0x2B0);
          }
          v193 = *(v192 + (*(a1 + 0x43C) << 6) + 0xBC);
          goto LABEL_413;
        }
      }
      else
      {
        v137 = 0i64;
        if ( v135 )
          goto LABEL_268;
      }
      v142 = 1;
      if ( v137 )
        goto LABEL_367;
    }
    else
    {
      v142 = 1;
    }
LABEL_281:
    v147 = 0;
    v137 = 0i64;
    goto LABEL_282;
  }
LABEL_237:
  v122 = *(a1 + 0x460);
  if ( v122 > 0.0 && v122 < a9 )
  {
    if ( dword_4ACFD8C > *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4i64) )
    {
      Init_thread_header(&dword_4ACFD8C);
      if ( dword_4ACFD8C == 0xFFFFFFFF )
      {
        dword_4ACFD88 = sub_1749370("ShootPrimary");
        Init_thread_footer(&dword_4ACFD8C);
      }
    }
    v100 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( dword_4ACFD94 > *(*(v100 + 8i64 * TlsIndex) + 4i64) )
    {
      Init_thread_header(&dword_4ACFD94);
      if ( dword_4ACFD94 == 0xFFFFFFFF )
      {
        dword_4ACFD90 = sub_1749370("ShootSecondary");
        Init_thread_footer(&dword_4ACFD94);
      }
    }
    if ( !*(a1 + 0x50C) )
    {
      (*(*(*Unit_ + 0x50i64) + 0x18i64))(*Unit_ + 0x50i64, v100, v37);
      v123 = dword_4B74CA8;
      if ( !dword_4B74CA8 )
      {
        v123 = sub_1623330(0i64, 0x2F, 0, "playHapticPattern", 0);
        dword_4B74CA8 = v123;
      }
      if ( (dword_4B70D40 & 2) != 0 )
      {
        v124 = sub_1625CD0(v123, &v257);
        Src = v124;
        if ( v124 )
          sub_1625D70(v124, v257);
      }
    }
    *(a1 + 0x460) = 0xBF800000;
  }
  *(a1 + 0x528) = 0;
  v125 = *(a1 + 0x3A2);
  if ( v116 )
  {
    if ( !v125 )
    {
      if ( *(a1 + 0x505) )
      {
        if ( *(a1 + 0x1F7) )
        {
          v126 = *(a1 + 0x444);
          if ( v126 > 0.0 && v126 <= a9 && (*(*Unit_ + 0x58i64) & 4) != 0 )
          {
            v127 = *(*Unit_ + 0x10B0i64);
            if ( v127 <= 0xF )
            {
              v100 = 0x897Ei64;
              if ( _bittest(&v100, v127) )
              {
                *(a1 + 0x505) = 0;
                *(a1 + 0x1F7) = 0;
              }
            }
          }
        }
      }
    }
  }
  v128 = *(a1 + 0x444);
  v129 = *(a1 + 0x448);
  if ( v128 > v129 )
  {
    if ( v129 <= v128 )
    {
      v130 = Y;
      v131 = 0.0;
      v132 = *(a1 + 0x444);
      if ( v129 >= a9 )
        goto LABEL_300;
    }
    else
    {
      v130 = 0.0;
      v131 = Y;
      v132 = *(a1 + 0x448);
      v129 = *(a1 + 0x444);
      if ( v128 >= a9 )
        goto LABEL_300;
    }
    if ( v132 <= a9 )
    {
      v130 = v131;
    }
    else
    {
      v143 = v132 - v129;
      v144 = LODWORD(a9);
      v144.m128_f32[0] = (a9 - v129) * (v131 - v130);
      if ( v143 > *&epsilon_unk || (v145 = 0i64, v143 < *&dword_449F1AC) )
      {
        v144.m128_f32[0] = v144.m128_f32[0] / v143;
        v145 = v144;
      }
      v146.m128_f32[0] = v129 - a9;
      v130 = v130 + _mm_andnot_ps(_mm_cmple_ss(0i64, v146), v145).m128_f32[0];
    }
LABEL_300:
    if ( v130 != 0.0 )
      goto LABEL_302;
  }
  v151 = *(a1 + 0x2B0);
  v100 = *(a1 + 0x43C) << 6;
  if ( !*(v151 + v100 + 0xD0) )
  {
    *(v151 + v100 + 0xD0) = 1;
    if ( !*(a1 + 0x3A2) )
      goto LABEL_316;
    goto LABEL_305;
  }
LABEL_302:
  if ( !v125 )
    goto LABEL_316;
LABEL_305:
  if ( *(a1 + 0x505)
    && (!*(*(a1 + 0x2B0) + 0xCi64)
     || *(a1 + 0x444) > a9
     || !(*(*(*Unit_ + 0x50i64) + 0x10i64))(*Unit_ + 0x50i64, v100, v37)) )
  {
LABEL_316:
    if ( *(a1 + 0x43E) )
      sub_217180(a1, 0, 0, 0xFFFFFFFF, 1);
    v158 = a9;
    v159 = *(a1 + 0x1F7) == 0 && a9 < *(a1 + 0x444);
    if ( !*(a1 + 0x4C0) )
    {
LABEL_327:
      if ( !*(a1 + 0x4F0) )
      {
LABEL_336:
        v166 = *(a1 + 0x2B0);
        if ( v166 )
        {
          v167 = *(v166 + 0x2D0);
          if ( v167 )
          {
            if ( v158 > (*(v167 + 8) + *(a1 + 0x378)) )
              *(a1 + 0x500) = fmaxf(0.0, *(a1 + 0x500) - (a7 * *(v167 + 4)));
          }
        }
        return;
      }
      if ( v159 )
      {
        if ( !*(a1 + 0x4D8) )
        {
          v165 = (*(a1 + 0x4D0) * a7) + *(a1 + 0x4F8);
          goto LABEL_335;
        }
        v163 = *(a1 + 0x4F8);
        v164 = *(*(a1 + 0x4E0) + 8i64 * *(a1 + 0x4F0) - 8);
        if ( v163 <= v164 )
        {
          v165 = fminf((*(a1 + 0x4D0) * a7) + v163, v164);
LABEL_335:
          *(a1 + 0x4F8) = v165;
          goto LABEL_336;
        }
      }
      else
      {
        v163 = *(a1 + 0x4F8);
      }
      v165 = fmaxf(0.0, v163 - (*(a1 + 0x4D4) * a7));
      goto LABEL_335;
    }
    if ( v159 )
    {
      if ( !*(a1 + 0x4A8) )
      {
        v162 = (*(a1 + 0x4A0) * a7) + *(a1 + 0x4C8);
        goto LABEL_326;
      }
      v160 = *(a1 + 0x4C8);
      v161 = *(*(a1 + 0x4B0) + 8i64 * *(a1 + 0x4C0) - 8);
      if ( v160 <= v161 )
      {
        v162 = fminf((*(a1 + 0x4A0) * a7) + v160, v161);
LABEL_326:
        *(a1 + 0x4C8) = v162;
        goto LABEL_327;
      }
    }
    else
    {
      v160 = *(a1 + 0x4C8);
    }
    v162 = fmaxf(0.0, v160 - (*(a1 + 0x4A4) * a7));
    goto LABEL_326;
  }
  v152 = Y;
  if ( *(a1 + 0x360) )
  {
    v153 = *(a1 + 0x2B0);
    if ( v153 )
      v152 = *(v153 + 0x84) / *(v153 + 0x80);
  }
  v154 = v152 * a7;
  if ( *(a1 + 0x4C0) )
  {
    if ( *(a1 + 0x4A8) )
    {
      v155 = *(a1 + 0x4C8);
      v156 = *(*(a1 + 0x4B0) + 8i64 * *(a1 + 0x4C0) - 8);
      if ( v155 <= v156 )
        v157 = fminf((*(a1 + 0x4A0) * v154) + v155, v156);
      else
        v157 = fmaxf(0.0, v155 - (*(a1 + 0x4A4) * v154));
    }
    else
    {
      v157 = (*(a1 + 0x4A0) * v154) + *(a1 + 0x4C8);
    }
    *(a1 + 0x4C8) = v157;
  }
  v168 = a10;
  if ( *(a1 + 0x4F0) )
  {
    if ( *(a1 + 0x4D8) )
    {
      v169 = *(a1 + 0x4F8);
      v170 = *(*(a1 + 0x4E0) + 8i64 * *(a1 + 0x4F0) - 8);
      if ( v169 <= v170 )
        v171 = fminf((v154 * *(a1 + 0x4D0)) + v169, v170);
      else
        v171 = fmaxf(0.0, v169 - (v154 * *(a1 + 0x4D4)));
    }
    else
    {
      v171 = (v154 * *(a1 + 0x4D0)) + *(a1 + 0x4F8);
    }
    *(a1 + 0x4F8) = v171;
  }
  sub_21CB00(a1, a2, v14, a4, a5, a6, a7, a8, a9, v168, v116, v18);
}