void __fastcall unknown_ucav(__int64 a1, __int64 a2)
{
  __int64 LocalUnit_; // rbp
  __int64 v3; // rsi
  char v5; // al
  bool v6; // dl
  __int64 v7; // r15
  __int64 v8; // r12
  unsigned int v9; // ebp
  __int64 game_; // rbx
  struct _RTL_CRITICAL_SECTION *v11; // rsi
  __int64 currUnit; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int16 UnitState; // ax
  char v17; // bp
  __int64 Unit; // rdi
  bool v19; // si
  int v20; // eax
  bool v21; // r9
  __int64 v22; // r15
  __int64 v23; // r12
  __int64 v24; // rcx
  _BYTE *v25; // r8
  char *v26; // rax
  float v27; // xmm1_4
  float v28; // xmm0_4
  __m128 v29; // xmm7
  __m128 v30; // xmm2
  __m128 v31; // xmm6
  float v32; // xmm6_4
  float v33; // xmm3_4
  float v34; // xmm2_4
  float v35; // xmm1_4
  float v36; // xmm2_4
  __m128 v37; // xmm4
  __m128 v38; // xmm3
  __m128 v39; // xmm1
  unsigned int *v40; // rbp
  bool v41; // cl
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  bool v45; // di
  int v46; // eax
  bool v47; // al
  double *v48; // rcx
  __int64 v49; // rdx
  float v50; // xmm0_4
  float v51; // xmm1_4
  __int64 v52; // rcx
  unsigned int v53; // edx
  BOOL v54; // eax
  unsigned int v55; // ecx
  int v56; // eax
  CHAR *v57; // rax
  __int64 UnitWeaponInfo; // rax
  __int64 v59; // r14
  __int64 v60; // r12
  __int64 v61; // rbp
  __int64 v62; // rdx
  CHAR *v63; // rax
  __int64 v64; // rdi
  unsigned __int8 v65; // al
  unsigned __int8 v66; // bl
  __int64 v67; // r13
  __int64 v68; // r15
  __int64 v69; // r8
  unsigned __int64 v70; // rsi
  int v71; // ecx
  int v72; // eax
  int v73; // eax
  CHAR *v74; // rcx
  __int64 v75; // rcx
  CHAR *v76; // rax
  __int64 v77; // [rsp+28h] [rbp-80h]
  int v79; // [rsp+3Ch] [rbp-6Ch]

  LocalUnit_ = LocalUnit;
  if ( !LocalUnit )
    return;
  v3 = *(LocalUnit + 0x10B8);
  if ( !v3 )
    return;
  *(a2 + 0x18) = 0;
  v5 = *(a2 + 0x1A);
  byte_4B19B20 = v5;
  if ( *(LocalUnit_ + 0x10A8) > 1u )            // Check Unit State
  {
    v6 = 0;
  }
  else
  {
    v6 = (*(LocalUnit_ + 0x1058) & 0x7000014) == 0;
    v5 = byte_4B19B20;
  }
  *(a2 + 0x1A) = v6;
  v77 = LocalUnit_;
  if ( qword_4B19AA0 && v6 && v5 != 1 && *(LocalUnit_ + 0x10B0) == 5 )
    sub_B3A410(qword_4B19AA0 + 0x1C78, 0xD0);
  v7 = sub_11FE900(v3);
  v8 = (*(*a1 + 0x38i64))(a1) - 0x20;
  v9 = *(v3 + 2 * v8 + 0x2C0);
  if ( v9 == 0xFFFF )
    goto LABEL_30;
  game_ = game;
  if ( (*(game + 0xCB) & 1) != 0 )
  {
    v11 = 0i64;
  }
  else
  {
    v11 = *(game + 0x620);
    if ( v11 )
      EnterCriticalSection(*(game + 0x620));
  }
  if ( *(game_ + 0x360) <= v9 )
  {
    v13 = *(game_ + 0x378);
    if ( *(game_ + 0x378) )
    {
      v14 = *(game_ + 0x368);
      v15 = 0i64;
      while ( 1 )
      {
        currUnit = *(v14 + 8 * v15);
        if ( (*(currUnit + 8) & 0x7FF) == v9 )
          break;
        if ( v13 == ++v15 )
          goto LABEL_23;
      }
    }
    else
    {
LABEL_23:
      currUnit = 0i64;
    }
  }
  else
  {
    currUnit = *(*(game_ + 0x350) + 8i64 * v9);
  }
  if ( v11 )
    LeaveCriticalSection(v11);
  if ( !currUnit )
  {
LABEL_30:
    v17 = 0;
    currUnit = 0i64;
    v19 = 0;
    Unit = v77;
    if ( v7 != v77 )
      goto LABEL_37;
  }
  else
  {
    UnitState = *(currUnit + 0x10A8);
    v17 = 1;
    Unit = v77;
    if ( UnitState > 1u )
    {
      v19 = 0;
      if ( v7 != v77 )
        goto LABEL_37;
    }
    else
    {
      v19 = *(currUnit + 0x4E8) != 0 || UnitState != 1;
      if ( v7 != v77 )
        goto LABEL_37;
    }
  }
  if ( v8 < *(Unit + 0x13B0) )
  {
    v20 = *(Unit + 0x740);
    *(a2 + 0x19) = _bittest(&v20, v8);
    v21 = v17 && *(currUnit + 0x10A8) <= 1u && (*(currUnit + 0x1058) & 0x7000014) != 0;
    v22 = *(Unit + 0x13A0);
    v23 = 0x60 * v8;
    v24 = 0i64;
    v25 = qword_4ACEE78;
    if ( *(v22 + v23 + 0x44) <= 0 )
    {
      v26 = qword_4ACEE78 + 0x430;
    }
    else if ( v21 )
    {
      v26 = qword_4ACEE78 + 0x42C;
    }
    else
    {
      v26 = qword_4ACEE78 + 0x428;
    }
    v27 = *(v22 + v23 + 0x50);
    v28 = 0.0;
    if ( v27 >= 0.0 )
    {
      v32 = *(qword_4ACEE78 + 0x10E);
      v29 = *(v22 + v23 + 0x50);
    }
    else
    {
      LOBYTE(v24) = *(v22 + v23 + 0x44) <= 0;
      v29 = *(v22 + v23 + 4 * v24 + 0x48);
      v30.m128_i32[0] = *(v22 + v23 + 0x58);
      v31 = _mm_cmplt_ss(0i64, v30);
      LODWORD(v32) = _mm_andnot_ps(v31, *v26).m128_u32[0] | v30.m128_i32[0] & v31.m128_i32[0];
    }
    if ( !v19 || v27 >= 0.0 )
    {
      v28 = 0.0;
      if ( v32 >= 0.0 )
      {
        v33 = Y;
        v34 = v32;
        v35 = 0.0;
      }
      else
      {
        v28 = Y;
        v33 = 0.0;
        v34 = 0.0;
        v35 = v32;
      }
      if ( v35 < v29.m128_f32[0] )
      {
        if ( v34 <= v29.m128_f32[0] )
        {
          v28 = v33;
        }
        else
        {
          v36 = v34 - v35;
          v37 = v29;
          v37.m128_f32[0] = (v29.m128_f32[0] - v35) * (v33 - v28);
          if ( v36 > *&dword_449F1A8 || (v38 = 0i64, v36 < *&dword_449F1AC) )
          {
            v37.m128_f32[0] = v37.m128_f32[0] / v36;
            v38 = v37;
          }
          v39.m128_f32[0] = v35 - v29.m128_f32[0];
          v28 = v28 + _mm_andnot_ps(_mm_cmple_ss(0i64, v39), v38).m128_f32[0];
        }
      }
    }
    *(a2 + 0x1C) = v28;
    *(a2 + 0x20) = v32;
    if ( v17 )
    {
      v40 = (v22 + v23 + 0x44);
      v41 = 1;
      if ( !*(Unit + 0x980) && !v25[0x434] )
      {
        v42 = *(Unit + 0x970);
        v41 = v42
           && (v79 = *(v42 + 0x70),
               v43 = Unit + 0x50,
               v44 = *(Unit + 0x50),
               v45 = v21,
               v46 = (*(v44 + 0x30))(v43),
               v21 = v45,
               Unit = v77,
               (dword_4B1C814 & 0x80000) == 0)
           && (dword_4B1C814 & 0x1000000 | v79 ^ v46) == 0;
      }
      v47 = v41 || v19 || *v40 > 0;
      *(a2 + 0x1A) = v47;
      if ( !qword_4B507E8 || *(game + 0xCD) || *(game + 0xCE) )
      {
        v49 = *(game + 0x450);
        if ( v49 && *(v49 + 0x5CA) )
          v48 = (v49 + 0x620);
        else
          v48 = (game + 0x2E0);
      }
      else
      {
        v48 = (qword_4B507E8 + 0x70);
      }
      v50 = *v48;
      if ( v29.m128_f32[0] <= 0.0 || !v47 )
      {
        if ( *(Unit + 0x10B0) == 3 )
        {
          v51 = *(a2 + 0x24);
          if ( v51 >= 0.0 && v51 < v50 )
          {
            sub_EE9790(0x1Ai64, 0i64, v25);
            Unit = v77;
            v52 = *(v77 + 0x1890);
            if ( v52 )
            {
              sub_F1CA80(v52, v52 + 0x40, "ucavReady", 0i64);
              Unit = v77;
            }
          }
        }
        *(a2 + 0x24) = 0xBF800000;
      }
      else if ( (!v19 || v21) && *(a2 + 0x24) < v50 )
      {
        *(a2 + 0x24) = v32 + v50;
      }
      v53 = 0xFFFFFFFF;
      if ( *(v22 + v23 + 0x3C) != 1 )
        v53 = *v40;
      v54 = 0;
      v55 = *(qword_4ACEE78 + 0x427) != 0 ? 0xFFFFFFFF : v53;
      *(a2 + 0x44) = v55;
      if ( *(currUnit + 0x10A8) <= 1u )
        v54 = (*(currUnit + 0x1058) & 0x7000014) == 0;
      *(a2 + 0x48) = v55 + v54;
      *(a2 + 0x40) = v19;
      *(a2 + 0x3C) = 0;
      *(a2 + 0x4C) = 0;
LABEL_96:
      v56 = 0x30;
      v17 = 1;
      if ( *(currUnit + 0x10B0) == 3 )
        goto LABEL_98;
      goto LABEL_97;
    }
    *(a2 + 0x19) = 0;
    *(a2 + 0x24) = 0xBF800000;
    *(a2 + 0x44) = 0xFFFFFFFFFFFFFFFFui64;
    *(a2 + 0x40) = v19;
    *(a2 + 0x3C) = 0;
    *(a2 + 0x4C) = 0;
    goto LABEL_70;
  }
LABEL_37:
  *(a2 + 0x19) = 0;
  *(a2 + 0x1C) = 0i64;
  *(a2 + 0x24) = 0xBF800000;
  *(a2 + 0x44) = 0xFFFFFFFFFFFFFFFFui64;
  *(a2 + 0x40) = v19;
  *(a2 + 0x3C) = 0;
  *(a2 + 0x4C) = 0;
  if ( v7 == Unit )
  {
    if ( v17 )
      goto LABEL_96;
LABEL_70:
    v17 = 0;
    goto LABEL_97;
  }
  if ( ((currUnit == Unit) & v17) != 0 )
    goto LABEL_96;
LABEL_97:
  v56 = (*(*a1 + 0x38i64))(a1);
  Unit = v77;
LABEL_98:
  *a2 = v56;
  *(a2 + 8) = 0i64;
  if ( *(Unit + 0x4E8) && *(Unit + 0x11D0) )
  {
    v57 = &szFile;
    *(a2 + 0x60) = &szFile;
    if ( v17 )
    {
      v57 = (*(*currUnit + 0x198i64))(currUnit);
      Unit = v77;
    }
    *(a2 + 0x10) = v57;
    UnitWeaponInfo = *(Unit + 0x11D0);
    if ( *(UnitWeaponInfo + 0x2E0) )
    {
      v59 = *(UnitWeaponInfo + 0x2D0);
      v60 = 8i64 * *(UnitWeaponInfo + 0x2E0);
      v61 = 0i64;
      while ( 1 )
      {
        v64 = *(v59 + v61);
        if ( !v64 )
          goto LABEL_106;
        v65 = (*(*v64 + 0x108i64))(*(v59 + v61));
        v66 = v65;
        v67 = 0i64;
        v68 = v64;
        if ( !v65 )
          v68 = 0i64;
        if ( v65 )
        {
          v69 = *(v68 + 0x2B0);
          v70 = *(v68 + 0x43C) << 6;
          v71 = *(v69 + v70 + 0xA0);
          if ( v71 < 2 )
            v71 = 1;
          v67 = *(*(v69 + v70 + 0x98) + 8i64 * (*(v69 + v70 + 0xC0) % v71));
        }
        if ( !(*(*v64 + 0x180i64))(v64) )
          break;
        v72 = *(v77 + 0x6E4);
        if ( v72 == 6 )
        {
          if ( *(v64 + 0x3B8) != 3 )
            break;
        }
        else if ( v72 != 7 || *(v64 + 0x3B8) != 2 )
        {
          break;
        }
        v75 = *(v64 + 0x340);
        v76 = &szFile;
        if ( *(v75 + 0xC0) )
          v76 = *(v75 + 0xB0);
        v62 = a2;
        *(a2 + 0x60) = v76;
        v63 = &szFile;
LABEL_105:
        *(v62 + 0x10) = v63;
LABEL_106:
        v61 += 8i64;
        if ( v60 == v61 )
          return;
      }
      if ( (v67 == 0) | v66 ^ 1 )
        goto LABEL_106;
      v73 = *(v77 + 0x6E4);
      if ( v73 != 4 && (v73 != 5 || *(v64 + 0x10)) )
        goto LABEL_106;
      v74 = &szFile;
      if ( *(v67 + 0x10) )
        v74 = *(v67 + 0x10);
      v62 = a2;
      *(a2 + 0x60) = v74;
      v63 = &szFile;
      if ( **(v68 + 0x2B0) )
        v63 = **(v68 + 0x2B0);
      goto LABEL_105;
    }
  }
}
