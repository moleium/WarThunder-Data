__int64 __fastcall unit_builder_3(
        __int64 Unit,
        __int64 a2,
        int a3,
        __int64 *a4,
        __int16 a5,
        unsigned int a6,
        int a7,
        __int64 a8)
{
  __int64 v12; // r13
  __int64 v13; // rax
  void *v14; // rax
  int v15; // r8d
  void *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbp
  _QWORD *v19; // rbx
  __int64 v20; // rdx
  _DWORD *v21; // rbx
  __int64 v22; // rax
  unsigned int v23; // ecx
  void *v24; // rdi
  unsigned int v25; // ecx
  __int64 v26; // rax
  void *v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rax
  unsigned int v30; // ecx
  void *v31; // rdi
  int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 *v38; // rdi
  CHAR *v39; // rdx
  unsigned int v40; // eax
  __int64 v41; // rbp
  void *v42; // rdi
  __int64 v44; // rbp
  __int64 v45; // rdx
  CHAR *v46; // rdx
  int v47; // r8d
  unsigned int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rbp
  __int64 v54; // rdx
  __int64 v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rbp
  __int64 v58; // [rsp+50h] [rbp-98h] BYREF
  __int64 v59; // [rsp+58h] [rbp-90h]
  CHAR *v60; // [rsp+78h] [rbp-70h] BYREF
  void *v61; // [rsp+80h] [rbp-68h]
  __int64 v62; // [rsp+88h] [rbp-60h]

  *Unit = &off_44D55C0;
  v12 = Unit + 0x50;
  *(Unit + 0x50) = off_44D5E90;
  unit_builder(Unit, 3, a2, a5, Unit + 0x3250, a4, a6, a7, 0x19u);
  *Unit = &off_44D55C0;
  *(Unit + 0x50) = off_44D5E90;
  v13 = (*(*off_4B678C0 + 0x18i64))(off_4B678C0, 0x8370i64);
  *(Unit + 0x3030) = v13;
  *(Unit + 0x3038) = 0x101;
  *(Unit + 0x303A) = 0i64;
  *(Unit + 0x3040) = 0i64;
  *(Unit + 0x3048) = xmmword_44D5480;
  *(Unit + 0x3058) = 0x408000003F800000i64;
  *(Unit + 0x3060) = 0;
  *(Unit + 0x3068) = v12;
  *(Unit + 0x3070) = v13;
  *(Unit + 0x3078) = 0i64;
  v14 = off_4B678C0;
  *(Unit + 0x3088) = off_4B678C0;
  *(Unit + 0x3090) = 0i64;
  *(Unit + 0x30A0) = v14;
  *(Unit + 0x30A8) = 0i64;
  *(Unit + 0x30B8) = v14;
  *(Unit + 0x30C0) = 0i64;
  *(Unit + 0x30D0) = v14;
  *(Unit + 0x30D8) = 0i64;
  *(Unit + 0x30E8) = v14;
  *(Unit + 0x3104) = 0i64;
  *(Unit + 0x3110) = 0i64;
  *(Unit + 0x30F0) = 0i64;
  *(Unit + 0x3100) = 0;
  *(Unit + 0x3118) = v14;
  *(Unit + 0x3120) = 0i64;
  *(Unit + 0x3168) = 0i64;
  *(Unit + 0x3170) = 0;
  *(Unit + 0x3150) = 0i64;
  *(Unit + 0x3140) = 0i64;
  *(Unit + 0x3130) = 0i64;
  *(Unit + 0x3160) = 0;
  *(Unit + 0x3164) = 0x3F800000;
  *(Unit + 0x3178) = 0;
  *(Unit + 0x317C) = 0i64;
  *(Unit + 0x318C) = 0i64;
  *(Unit + 0x319C) = 0i64;
  *(Unit + 0x31A5) = 0i64;
  *(Unit + 0x31B5) = 1;
  *(Unit + 0x31B8) = 0i64;
  *(Unit + 0x31C8) = 0;
  *(Unit + 0x31D0) = 0;
  *(Unit + 0x31D2) = 1;
  *(Unit + 0x31D8) = Unit;
  *(Unit + 0x31E0) = 1;
  *(Unit + 0x31E4) = 0i64;
  *(Unit + 0x31F0) = 1;
  *(Unit + 0x31F2) = 0;
  *(Unit + 0x31F4) = 0x4348000042200000i64;
  *(Unit + 0x31FC) = 0x43480000;
  *(Unit + 0x3200) = 0x101;
  *(Unit + 0x3204) = 0i64;
  *(Unit + 0x320C) = 0;
  *(Unit + 0x3210) = xmmword_44AD470;
  *(Unit + 0x3220) = Unit;
  *(Unit + 0x3228) = 0;
  *(Unit + 0x322C) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x3234) = 1;
  *(Unit + 0x3238) = 0;
  *(Unit + 0x3248) = 0;
  sub_8A07F0(Unit + 0x3250, Unit);
  *(Unit + 0x3768) = 0;
  *(Unit + 0x376C) = 1;
  *(Unit + 0x3770) = 0;
  *(Unit + 0x3774) = 0;
  *(Unit + 0x3778) = 0xFFFFFFFF;
  *(Unit + 0x377C) = 0i64;
  *(Unit + 0x3784) = xmmword_44B1400;
  *(Unit + 0x3798) = 0i64;
  v16 = off_4B678C0;
  *(Unit + 0x37A0) = off_4B678C0;
  *(Unit + 0x37A8) = 0i64;
  *(Unit + 0x37B0) = 0xFFFFFFFF;
  *(Unit + 0x37B8) = 0i64;
  *(Unit + 0x37C0) = v16;
  *(Unit + 0x37C8) = 0i64;
  *(Unit + 0x37D0) = xmmword_44D5490;
  *(Unit + 0x37E0) = xmmword_44D54A0;
  *(Unit + 0x37F0) = 0xFFFFFFFF3F800000ui64;
  *(Unit + 0x37F8) = 0xBF800000BF800000ui64;
  *(Unit + 0x3800) = xmmword_44D54B0;
  *(Unit + 0x3820) = 0i64;
  *(Unit + 0x3810) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_98;
  v17 = Unit + 0x3810;
  v18 = *(Unit + 0x18);
  v19 = (v18 + 0x18);
  if ( !v18 )
    v19 = (Unit + 0x10);
  *v19 = v17;
  *(Unit + 0x18) = v17;
  *(Unit + 0x3828) = 0i64;
  *(Unit + 0x3810) = 0x8C;
  *(Unit + 0x3818) = "gunnerAvailableTime";
  *(Unit + 0x3812) = 0x200000;
  *(Unit + 0x3820) = sub_158E050;
  *(Unit + 0x3830) = 0xBF800000;
  *(Unit + 0x3838) = 0;
  *(Unit + 0x3840) = 0i64;
  *(Unit + 0x3848) = v16;
  *(Unit + 0x3850) = 0i64;
  *(Unit + 0x3858) = 1;
  *(Unit + 0x3860) = 0i64;
  *(Unit + 0x3868) = v16;
  *(Unit + 0x3870) = 0i64;
  *(Unit + 0x3880) = v16;
  *(Unit + 0x3888) = 0i64;
  *(Unit + 0x3898) = v16;
  *(Unit + 0x38A0) = 0i64;
  *(Unit + 0x38A8) = 0;
  *(Unit + 0x38AA) = 1;
  *(Unit + 0x38B0) = 0i64;
  *(Unit + 0x38B8) = v16;
  *(Unit + 0x38D0) = 0i64;
  *(Unit + 0x38E0) = 0i64;
  *(Unit + 0x38C0) = 0i64;
  *(Unit + 0x38C8) = 0;
  if ( *(Unit + 0x20) != 0x54454E44 )
  {
LABEL_98:
    v59 = Unit;
    LODWORD(v58) = 5;
    LOBYTE(v15) = 1;
    log_err(
      "../../prog/gameLibs/publicInclude\\daNet/reflection.h",
      0x13F,
      v15,
      "Reflection: invalid object 0x%p",
      &v58,
      1);
  }
  *(Unit + 0x3828) = Unit + 0x38D0;
  *(Unit + 0x38D0) = 0x86;
  *(Unit + 0x38D8) = "irProjectorEnabled";
  *(Unit + 0x38D4) = 8;
  *(Unit + 0x38E0) = sub_36E440;
  *(Unit + 0x38F0) = 0;
  *(Unit + 0x38F8) = 0i64;
  *(Unit + 0x38E8) = Unit + 0x38F8;
  *(Unit + 0x38F8) = 0x87;
  *(Unit + 0x3900) = "dummyVarForTerraform";
  *(Unit + 0x38FA) = 0x200020;
  *(Unit + 0x3908) = sub_11539E0;
  *(Unit + 0x3920) = 0i64;
  *(Unit + 0x3910) = Unit + 0x3920;
  *(Unit + 0x3920) = 0x88;
  *(Unit + 0x3928) = "sightDistance";
  *(Unit + 0x3924) = 0x20;
  *(Unit + 0x3930) = sub_158E050;
  *(Unit + 0x3940) = 0;
  *(Unit + 0x3948) = 0i64;
  *(Unit + 0x3938) = Unit + 0x3948;
  *(Unit + 0x3948) = 0x89;
  *(Unit + 0x3950) = "dummyVarForWeaponCooldown";
  *(Unit + 0x394A) = 0x200020;
  *(Unit + 0x3958) = sub_1153B80;
  *(Unit + 0x3970) = 0i64;
  *(Unit + 0x3960) = Unit + 0x3970;
  *(Unit + 0x3970) = 0x8A;
  *(Unit + 0x3978) = "dummyVarForTrackDamage";
  *(Unit + 0x3972) = 0x200020;
  *(Unit + 0x3980) = sub_1153E70;
  *(Unit + 0x3998) = 0x400000003F800000i64;
  *(Unit + 0x39B0) = 0i64;
  *(Unit + 0x39A0) = 0i64;
  *(Unit + 0x3988) = Unit + 0x39B8;
  *(Unit + 0x18) = Unit + 0x39B8;
  *(Unit + 0x39D0) = 0i64;
  *(Unit + 0x39B8) = 0x8B;
  *(Unit + 0x39C0) = "trailerUnitId";
  *(Unit + 0x39BC) = 0x20;
  *(Unit + 0x39C8) = sub_158DEB0;
  *(Unit + 0x39E0) = 0xFFFFFFFF;
  *(Unit + 0x39E4) = 0i64;
  *(Unit + 0x39EA) = 0i64;
  *(Unit + 0x39F4) = 0xBF800000FFFFFFFFui64;
  *(Unit + 0x3A00) = 0i64;
  *(Unit + 0x3A10) = 0i64;
  *(Unit + 0x3A18) = 0xBF800000;
  *(Unit + 0x3A1C) = 0x100;
  *(Unit + 0x3A28) = 0i64;
  *(Unit + 0x3A30) = 0;
  *(Unit + 0x3A22) = 0;
  *(Unit + 0x3A1E) = 0;
  *(Unit + 0x3A34) = 0x1010101i64;
  *(Unit + 0x3A40) = 0;
  *(Unit + 0x3A78) = 0i64;
  *(Unit + 0x3A80) = 0;
  *(Unit + 0x3A64) = 0i64;
  *(Unit + 0x3A54) = 0i64;
  *(Unit + 0x3A44) = 0i64;
  *(Unit + 0x3A74) = 0x3F800000;
  *(Unit + 0x3A88) = 0;
  *(Unit + 0x3AE0) = 0i64;
  *(Unit + 0x3AD0) = 0i64;
  *(Unit + 0x3AC0) = 0i64;
  *(Unit + 0x3AB0) = 0i64;
  *(Unit + 0x3AA0) = 0i64;
  *(Unit + 0x3A90) = 0i64;
  *(Unit + 0x3AF0) = 0i64;
  *(Unit + 0x3AF8) = off_4B678C0;
  *(Unit + 0x3B00) = 0i64;
  *(Unit + 0x3B10) = 0i64;
  *(Unit + 0x3B20) = 0i64;
  *(Unit + 0x3B30) = 0i64;
  *(Unit + 0x3B3F) = 0;
  *(Unit + 0x3B44) = xmmword_44D54C0;
  *(Unit + 0x3B54) = xmmword_44D54D0;
  *(Unit + 0x3B64) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x3B6C) = 0xFFFFFFFF;
  *(Unit + 0x3B70) = 0i64;
  *(Unit + 0x3B80) = 0xFFFFFFFF;
  *(Unit + 0x3B88) = 0;
  sub_172B300(*(Unit + 0x3030), *(Unit + 0x3030) - v12, *(Unit + 0x9E0));
  LOBYTE(v58) = 0;
  if ( *(Unit + 0x2710) )
  {
    on_reflection_var_changed(Unit + 0x26F0, Unit, &v58);
    *(Unit + 0x2710) = v58;
  }
  qword_4A79590 = 0x4058C00000000000i64;
  qword_4A79598 = 0i64;
  dword_4A795A0 = 0;
  if ( a8 )
    sub_33E1C0(*(Unit + 0x6F0), a8);
  v21 = *(Unit + 0x1E88);
  v22 = *(Unit + 0x2994);
  v23 = *(Unit + 0x2990);
  if ( v22 == v23 )
  {
    if ( *(Unit + 0x2994) )
    {
      if ( v22 > 0x3FF )
        v49 = ((v22 + 1) >> 1) + v22;
      else
        v49 = 2 * v22;
    }
    else
    {
      v49 = 4;
    }
    v52 = *(Unit + 0x2980);
    if ( !v52 )
      goto LABEL_71;
    v53 = 4i64;
    if ( v49 >= 5 )
      v53 = v49;
    v24 = (*(**(Unit + 0x2988) + 0x38i64))(*(Unit + 0x2988), v52, 4 * v53);
    v49 = v53;
    if ( !v24 )
    {
LABEL_71:
      v53 = 4i64;
      if ( v49 >= 5 )
        v53 = v49;
      v24 = (*(**(Unit + 0x2988) + 0x18i64))(*(Unit + 0x2988), 4 * v53);
      memmove(v24, *(Unit + 0x2980), 4i64 * *(Unit + 0x2990));
      v20 = *(Unit + 0x2980);
      if ( v20 )
        (*(**(Unit + 0x2988) + 0x40i64))(*(Unit + 0x2988));
    }
    *(Unit + 0x2980) = v24;
    *(Unit + 0x2994) = v53;
    v23 = *(Unit + 0x2990);
  }
  else
  {
    v24 = *(Unit + 0x2980);
  }
  *(Unit + 0x2990) = v23 + 1;
  *(v24 + v23) = *v21;
  if ( !*(Unit + 0x10B8) )
  {
    v25 = *(Unit + 0x2990);
    v26 = *(Unit + 0x2994);
    if ( v26 == v25 )
    {
      if ( *(Unit + 0x2994) )
      {
        if ( v26 > 0x3FF )
          v50 = ((v26 + 1) >> 1) + v26;
        else
          v50 = 2 * v26;
      }
      else
      {
        v50 = 4;
      }
      v54 = *(Unit + 0x2980);
      if ( !v54 )
        goto LABEL_83;
      v55 = 4i64;
      if ( v50 >= 5 )
        v55 = v50;
      v27 = (*(**(Unit + 0x2988) + 0x38i64))(*(Unit + 0x2988), v54, 4 * v55);
      v50 = v55;
      if ( !v27 )
      {
LABEL_83:
        v55 = 4i64;
        if ( v50 >= 5 )
          v55 = v50;
        v27 = (*(**(Unit + 0x2988) + 0x18i64))(*(Unit + 0x2988), 4 * v55);
        memmove(v27, *(Unit + 0x2980), 4i64 * *(Unit + 0x2990));
        v20 = *(Unit + 0x2980);
        if ( v20 )
          (*(**(Unit + 0x2988) + 0x40i64))(*(Unit + 0x2988));
      }
      *(Unit + 0x2980) = v27;
      *(Unit + 0x2994) = v55;
      v25 = *(Unit + 0x2990);
    }
    else
    {
      v27 = *(Unit + 0x2980);
    }
    *(Unit + 0x2990) = v25 + 1;
    *(v27 + v25) = *(Unit + 0x1E30);
    v28 = *(Unit + 0x1E88);
    v29 = *(Unit + 0x2994);
    v30 = *(Unit + 0x2990);
    if ( v29 == v30 )
    {
      if ( *(Unit + 0x2994) )
      {
        if ( v29 > 0x3FF )
          v51 = ((v29 + 1) >> 1) + v29;
        else
          v51 = 2 * v29;
      }
      else
      {
        v51 = 4;
      }
      v56 = *(Unit + 0x2980);
      if ( !v56 )
        goto LABEL_93;
      v57 = 4i64;
      if ( v51 >= 5 )
        v57 = v51;
      v31 = (*(**(Unit + 0x2988) + 0x38i64))(*(Unit + 0x2988), v56, 4 * v57);
      v51 = v57;
      if ( !v31 )
      {
LABEL_93:
        v57 = 4i64;
        if ( v51 >= 5 )
          v57 = v51;
        v31 = (*(**(Unit + 0x2988) + 0x18i64))(*(Unit + 0x2988), 4 * v57);
        memmove(v31, *(Unit + 0x2980), 4i64 * *(Unit + 0x2990));
        v20 = *(Unit + 0x2980);
        if ( v20 )
          (*(**(Unit + 0x2988) + 0x40i64))(*(Unit + 0x2988));
      }
      *(Unit + 0x2980) = v31;
      *(Unit + 0x2994) = v57;
      v30 = *(Unit + 0x2990);
    }
    else
    {
      v31 = *(Unit + 0x2980);
    }
    *(Unit + 0x2990) = v30 + 1;
    *(v31 + v30) = *(v28 + 0xC);
    v32 = *(Unit + 0x1DC4);
    if ( v32 <= *(Unit + 0x1DC8) )
    {
      do
      {
        v40 = *(Unit + 0x2990);
        v41 = *(Unit + 0x2994);
        if ( v41 == v40 )
        {
          if ( *(Unit + 0x2994) )
          {
            if ( v41 > 0x3FF )
              v44 = ((v41 + 1) >> 1) + v41;
            else
              v44 = 2 * v41;
          }
          else
          {
            v44 = 4i64;
          }
          v45 = *(Unit + 0x2980);
          if ( !v45 )
            goto LABEL_36;
          if ( v44 < 5 )
            v44 = 4i64;
          v42 = (*(**(Unit + 0x2988) + 0x38i64))(*(Unit + 0x2988), v45, 4 * v44);
          if ( !v42 )
          {
LABEL_36:
            if ( v44 < 5 )
              v44 = 4i64;
            v42 = (*(**(Unit + 0x2988) + 0x18i64))(*(Unit + 0x2988), 4 * v44);
            memmove(v42, *(Unit + 0x2980), 4i64 * *(Unit + 0x2990));
            v20 = *(Unit + 0x2980);
            if ( v20 )
              (*(**(Unit + 0x2988) + 0x40i64))(*(Unit + 0x2988));
          }
          *(Unit + 0x2980) = v42;
          *(Unit + 0x2994) = v44;
          v40 = *(Unit + 0x2990);
        }
        else
        {
          v42 = *(Unit + 0x2980);
        }
        *(Unit + 0x2990) = v40 + 1;
        *(v42 + v40) = v32;
      }
      while ( v32++ < *(Unit + 0x1DC8) );
    }
  }
  *(Unit + 0x3128) = 0xFFFFFFFFFFFFFFFFui64;
  LOBYTE(v20) = 0xFF;
  memset(*(Unit + 0x3130), v20, (4 * *(Unit + 0x3138)));
  *(Unit + 0x288) = *(*(game + 0x498) + 0x1F1Ci64);
  LOBYTE(v58) = 0;
  *(Unit + 0x3A1E) = data::get_bool(a4, "isPhysPredictionEnabled", &v58);
  if ( !*(game + 0x67F) )
  {
    v60 = 0i64;
    v62 = 0i64;
    v59 = a2;
    LODWORD(v58) = 1;
    v61 = off_4B678C8;
    ctor_vprintf(&v60, v33, "gameData/units/%s.blk", &v58, 1);
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v34, v35, v36);
    v38 = &v58;
    sub_14584E0(&v58, *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64));
    if ( !sub_A60A60(animated_loading_job) )
    {
      if ( v62 )
        v39 = v60;
      else
        v39 = &szFile;
      sub_1606B70(&v58, v39, 0i64);
    }
    if ( sub_A60A60(animated_loading_job) )
    {
      if ( v62 )
        v46 = v60;
      else
        v46 = &szFile;
      v38 = sub_564630(game, v46, 0);
    }
    sub_11389F0(Unit, v38, a4, a3, 0, 0);
    if ( (!g_net || *(Unit + 0x10B8)) && !*(*(Unit + 0x2280) + 0x308i64) && *(*(game + 0x498) + 0x216Ci64) )
      sub_1CA7630(*(*(game + 0x638) + 0xD0i64), *(Unit + 0x9D8), v47, (0x10 * *(*(game + 0x548) + 0x11Ci64)) | 4, 1);
    sub_893BF0(Unit, v38);
    sub_1458FF0(&v58);
    if ( v60 )
      (*(*v61 + 0x40i64))(v61);
  }
  return Unit;
}
