float __fastcall unknown_gunsight(__int64 a1, __int64 a2, const char *a3, __int64 a4, __int64 a5)
{
  float result; // xmm0_4
  __int64 game_1; // rcx
  __int64 v10; // rax
  unsigned int v11; // edx
  int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // ecx
  int v16; // edx
  __int64 v17; // r9
  __int64 v18; // r11
  __int64 v19; // r10
  float v20; // xmm3_4
  float v21; // xmm13_4
  float v22; // xmm14_4
  __int64 v23; // r8
  __int64 v24; // rdi
  __m128i si128; // xmm5
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  bool v29; // si
  __m128i v30; // xmm7
  __int64 v31; // rbx
  __m128i v32; // xmm2
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  __m128i v36; // xmm1
  __int64 v37; // rax
  _DWORD *v38; // rcx
  __int64 v39; // rax
  unsigned int v40; // edx
  int v41; // ebp
  unsigned __int16 v43; // ax
  int v44; // ecx
  __int64 v45; // rax
  __int64 v46; // rax
  float v47; // xmm6_4
  __int64 game_; // rax
  char *v49; // rcx
  float *v50; // rcx
  float v51; // xmm3_4
  unsigned __int16 v52; // ax
  int v53; // ecx
  __int64 v54; // rax
  unsigned __int64 v55; // [rsp+30h] [rbp-108h] BYREF
  float v56; // [rsp+38h] [rbp-100h]
  float v57; // [rsp+40h] [rbp-F8h] BYREF
  float v58; // [rsp+44h] [rbp-F4h]
  float v59; // [rsp+48h] [rbp-F0h]
  float v60; // [rsp+4Ch] [rbp-ECh]
  float v61; // [rsp+50h] [rbp-E8h] BYREF
  float v62; // [rsp+54h] [rbp-E4h]
  int v63[2]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v64; // [rsp+68h] [rbp-D0h] BYREF

  if ( a4 > 0x30 )
    return result;
  sub_B37800(a1, &v57, a2, a4, 0, a5);
  result = v57;
  if ( v57 > v59 || (result = v58, v58 > v60) )
  {
    if ( !a5 || *(a5 + 0x10A8) > 1u )
      return result;
  }
  if ( !strcmp(a3, "crosshair") )
  {
    v11 = *(*(game + 0x440) + 0x3F4i64);
    if ( (v11 > 0x16 || (v12 = 0x410189, !_bittest(&v12, v11)))
      && !*(game + 0xCD)
      && *(game + 0xCA)
      && (*(game + 0xCB) & 1) != 0
      && *&qword_4AE58C0
      && !*(qword_4B176E8 + 0x1E)
      && (v43 = __ROR2__(*(*&qword_4AE58C0 + 0x10B0i64) - 3, 1), v43 <= 6u)
      && (v44 = 0x53, _bittest(&v44, v43)) )
    {
      v13 = 0x4D3Ci64;
    }
    else
    {
      v13 = 0x5FCi64;
    }
    v14 = *(a1 + 0x600) + v13;
    v15 = *(v14 + 8);
    v55 = *v14;
    v56 = *&v15;
    goto LABEL_18;
  }
  if ( strcmp(a3, "shipGunSight") )
  {
    if ( !strcmp(a3, "mouseAim") )
    {
      v40 = *(*(game + 0x440) + 0x3F4i64);
      if ( (v40 > 0x16 || (v41 = 0x410189, !_bittest(&v41, v40)))
        && !*(game + 0xCD)
        && *(game + 0xCA)
        && (*(game + 0xCB) & 1) != 0
        && *&qword_4AE58C0
        && !*(qword_4B176E8 + 0x1E)
        && (v52 = __ROR2__(*(*&qword_4AE58C0 + 0x10B0i64) - 3, 1), v52 <= 6u)
        && (v53 = 0x53, _bittest(&v53, v52)) )
      {
        v54 = *(a1 + 0x600);
        v56 = *(v54 + 0x604);
        v55 = *(v54 + 0x5FC);
      }
      else
      {
        if ( !byte_4AD1091 )
          return result;
        if ( !(byte_4AD2E70 | byte_4AD2E24) && byte_4AD2EBC == 0 )
          return result;
        if ( dword_4B19A88 == 0x200000 )
          return result;
        if ( game )
        {
          v45 = *(game + 0x440);
          if ( v45 )
          {
            if ( *(v45 + 4) >= 0 )
              return result;
          }
        }
        v46 = *(a1 + 0x600);
        v56 = *(v46 + 0x690);
        v55 = *(v46 + 0x688);
      }
    }
    else if ( !strcmp(a3, "mouseJoy") )
    {
      if ( LocalUnit && (*(LocalUnit + 0x1083) & 8) != 0 )
      {
        game_1 = game;
        v10 = 0x17Ci64;
      }
      else
      {
        game_1 = game;
        v10 = 0x178i64;
      }
      v47 = (*(a2 + 0x24) * *&dword_44801CC) * *(*(game_1 + 0x430) + v10);
      sub_515740(&v61, 0i64);
      if ( LocalUnit && (*(LocalUnit + 0x1083) & 8) != 0 )
      {
        game_ = game;
        v49 = ".text" + 4;
      }
      else
      {
        game_ = game;
        v49 = ".text";
      }
      v50 = &v49[*(game_ + 0x430)];
      result = *&dword_44801CC;
      v51 = fminf(fmaxf(((*(a2 + 0x20) * *&dword_44801CC) + *&dword_44A02D4) + (v61 * v47), 0.0), *(a2 + 0x20));
      if ( v51 >= v57 && v51 <= v59 )
        return fminf(
                 fmaxf(
                   (((*&dword_44801CC * *(a2 + 0x24)) + *&dword_44A02D4) + (v47 * v62))
                 + ((*(a2 + 0x24) - (v47 + (*&dword_44801CC * *(a2 + 0x24)))) * *v50),
                   0.0),
                 *(a2 + 0x24));
      return result;
    }
    goto LABEL_18;
  }
  if ( !LocalUnit || *(LocalUnit + 0x10B0) != 5 || (v17 = *(LocalUnit + 0x11D0)) == 0 )
  {
LABEL_18:
    v64 = 0i64;
    result = *(a2 + 0x14);
    v16 = (*(a2 + 0x1EC) << 6) + a2 + 0x128;
    *v63 = *(a2 + 0x10);
    *&v63[1] = result;
    if ( sub_B96960(v63, v16, &v55, &v64, &v61, 0i64) )
    {
      result = v61;
      if ( v61 >= v57 && v61 <= v59 )
        return v62;
    }
    return result;
  }
  v18 = *(v17 + 0x2E0);
  v19 = *(v17 + 0x2D0);
  v55 = 0i64;
  v56 = 0.0;
  v20 = 0.0;
  v21 = 0.0;
  v22 = 0.0;
  if ( !v18 )
    goto LABEL_69;
  v23 = *(a1 + 0x600) + 0x3E24i64;
  v20 = 0.0;
  v24 = 0i64;
  si128 = _mm_load_si128(&xmmword_44CB670);
  v21 = 0.0;
  v22 = 0.0;
  do
  {
    v26 = *(*(v19 + 8 * v24) + 0x2B0i64);
    if ( !v26 )
      goto LABEL_27;
    v27 = *(v26 + 0x90);
    if ( *(v26 + 0x90) )
    {
      if ( v27 < 8 )
      {
        v28 = 0i64;
        v29 = 0;
LABEL_36:
        v37 = v27 - v28;
        v38 = (v26 + (v28 << 6) + 0xBC);
        do
        {
          if ( *v38 )
            v29 = 1;
          v38 += 0x10;
          --v37;
        }
        while ( v37 );
        goto LABEL_40;
      }
      v28 = v27 & 0xFFFFFFF8;
      v30 = 0i64;
      v31 = 0i64;
      v32 = 0i64;
      do
      {
        v33 = _mm_cmpeq_epi32(
                _mm_insert_epi32(
                  _mm_insert_epi32(
                    _mm_insert_epi32(_mm_cvtsi32_si128(*(v26 + v31 + 0xBC)), *(v26 + v31 + 0xFC), 1),
                    *(v26 + v31 + 0x13C),
                    2),
                  *(v26 + v31 + 0x17C),
                  3),
                0i64);
        v34 = _mm_packs_epi32(v33, v33);
        v35 = _mm_cmpeq_epi32(
                _mm_insert_epi32(
                  _mm_insert_epi32(
                    _mm_insert_epi32(_mm_cvtsi32_si128(*(v26 + v31 + 0x1BC)), *(v26 + v31 + 0x1FC), 1),
                    *(v26 + v31 + 0x23C),
                    2),
                  *(v26 + v31 + 0x27C),
                  3),
                0i64);
        v36 = _mm_packs_epi32(v35, v35);
        v30 = _mm_blendv_epi8(si128, v30, _mm_packs_epi16(v34, v34));
        v32 = _mm_blendv_epi8(si128, v32, _mm_packs_epi16(v36, v36));
        v31 += 0x200i64;
      }
      while ( ((v27 << 6) & 0xFFFFFFFFFFFFFE00ui64) != v31 );
      v29 = _mm_movemask_ps(_mm_cvtepi8_epi32(_mm_xor_si128(_mm_cmpeq_epi8(_mm_or_si128(v30, v32), 0i64), 0xFFFFFFFFFFFFFFFFui64))) != 0;
      if ( v28 != v27 )
        goto LABEL_36;
    }
    else
    {
      v29 = 0;
    }
LABEL_40:
    v39 = *(v17 + 0x190);
    if ( !*(v39 + 0x290 * v24 + 0x205) && v29 && !*(v39 + 0x290 * v24 + 0xC2) )
    {
      v20 = *(v23 + 0xC * v24 + 8) + *&dword_4AD102C;
      v21 = *(v23 + 0xC * v24 + 4) + *(&qword_4AD1024 + 1);
      v22 = *(v23 + 0xC * v24) + *&qword_4AD1024;
    }
LABEL_27:
    ++v24;
  }
  while ( v24 != v18 );
  v55 = __PAIR64__(LODWORD(v21), LODWORD(v22));
  v56 = v20;
LABEL_69:
  result = fsqrt(((v20 * v20) + (v21 * v21)) + (v22 * v22));
  if ( result != 0.0 )
    goto LABEL_18;
  return result;
}
