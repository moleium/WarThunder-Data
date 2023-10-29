void __fastcall hud_colors(_DWORD *a1, __int64 *a2)
{
  __int64 *v2; // r13
  int v4; // r15d
  __int64 v5; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // r12d
  __int64 v8; // rax
  int v9; // ebp
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  unsigned int v16; // ebp
  __int64 v17; // rdi
  unsigned int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // ebp
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // ecx
  int v28; // edx
  double v29; // xmm0_8
  double v30; // xmm0_8
  double v31; // xmm0_8
  int v32; // [rsp+28h] [rbp-50h] BYREF
  int v33[18]; // [rsp+30h] [rbp-48h] BYREF

  v2 = a2;
  v4 = *(*(game + 0x430) + 0x44i64);
  v5 = *a2;
  v6 = 0xFFFFFFFF;
  if ( *a2 )
  {
    v7 = sub_1285C0("colorPresets", 0xCui64);
    v8 = *(v5 + 0x50);
    if ( v8 )
    {
      v9 = *(v8 + 0x20);
      if ( !*(v5 + 0x20) )
        goto LABEL_8;
    }
    else
    {
      v9 = 0;
      if ( !*(v5 + 0x20) )
        goto LABEL_8;
    }
    v10 = sub_128A70(v5, "colorPresets", 0xCi64, v7);
    if ( v10 >= 0 )
    {
      v11 = v9 + v10;
LABEL_10:
      v6 = v11;
      goto LABEL_11;
    }
LABEL_8:
    if ( !v9 )
      goto LABEL_11;
    v11 = sub_128A70(*(v5 + 0x50), "colorPresets", 0xCi64, v7);
    goto LABEL_10;
  }
LABEL_11:
  v12 = *(v2 + 4);
  if ( v12 != 0xFFFFFFFF )
  {
    v13 = *(v2 + 7);
    if ( v12 >= (v12 + v13) )
      goto LABEL_33;
    v14 = v6 + 1;
    v15 = *(*v2 + 0x5C) + *v2 + 0x90;
    v16 = 0;
    while ( 1 )
    {
      v17 = 0x20i64 * (v12 + v16);
      if ( (*(v15 + v17 + 8) & 0x3FFFFFFF) == v14 )
        break;
      if ( v13 == ++v16 )
        goto LABEL_33;
    }
    v24 = v17 + v15;
    v25 = 0i64;
    if ( v16 < v13 )
      v25 = v24;
    if ( !v25 )
      goto LABEL_33;
LABEL_28:
    if ( v4 >= 0 )
    {
      v26 = *(v25 + 0xE);
      v27 = v4 - v26;
      if ( v4 < v26 )
      {
        v28 = *(v25 + 0x10);
        if ( v28 == 0xFFFFFFFF )
          v2 = *(**(v25 + 0x18) + *(*(v25 + 0x18) + 8i64) + 8 * v27);
        else
          v2 = (0x20i64 * (v4 + v28) + *v25 + *(*v25 + 0x5Ci64) + 0x90);
      }
    }
    goto LABEL_33;
  }
  v18 = *(v2 + 7);
  if ( *(v2 + 7) )
  {
    v19 = v6 + 1;
    v20 = v2[3];
    v21 = *v20;
    v22 = *(v20 + 8) - 8 * v18;
    v23 = 0;
    while ( (*(*(v21 + v22) + 8i64) & 0x3FFFFFFF) != v19 )
    {
      ++v23;
      v22 += 8i64;
      if ( v18 == v23 )
        goto LABEL_33;
    }
    if ( v23 < v18 )
    {
      v25 = *(v21 + v22);
      if ( v25 )
        goto LABEL_28;
    }
  }
LABEL_33:
  v32 = 0xFFFFFFFF;
  sub_145AAA0(v2, v33, "gunnerCrossRedColor", &v32);
  a1[0xF] = v33[0];
  v32 = 0xFFFFFFFF;
  sub_145AAA0(v2, v33, "vectorHudColor", &v32);
  a1[0x72F] = v33[0];
  v32 = 0xFFFFDCC8;
  sub_145AAA0(v2, v33, "vectorAlertHudColor", &v32);
  a1[0x10] = v33[0];
  v32 = 0xFFFF0A00;
  sub_145AAA0(v2, v33, "missileWarningColor", &v32);
  a1[0x11] = v33[0];
  v32 = 0x80;
  a1[0x1E] = sub_145A390(v2, "vectorHudShadowAlpha", &v32);
  v32 = 0x80;
  a1[0x1F] = sub_145A390(v2, "vectorFontShadowAlpha", &v32);
  v32 = 0x40400000;
  v29 = sub_145B6B0(v2, "vectorHudShadowSize", &v32);
  a1[0x20] = LODWORD(v29);
  v32 = 0x40400000;
  v30 = sub_145B6B0(v2, "vectorFontShadowSize", &v32);
  a1[0x21] = LODWORD(v30);
  v32 = 0xFFFFFFFF;
  sub_145AAA0(v2, v33, "vectorHudRadarColorBgd", &v32);
  a1[0x14] = v33[0];
  v32 = 0xFFFFFFFF;
  sub_145AAA0(v2, v33, "vectorHudRadarColorCamera", &v32);
  a1[0x15] = v33[0];
  v32 = 0xFFFFFFFF;
  sub_145AAA0(v2, v33, "vectorHudRadarColorCompass", &v32);
  a1[0x16] = v33[0];
  v32 = 0xFFFFFFFF;
  sub_145AAA0(v2, v33, "indicatorFontColor", &v32);
  a1[0x13] = v33[0];
  v32 = 0xC8;
  a1[0x17] = sub_145A390(v2, "indicatorShadowAlpha", &v32);
  v32 = 0x3FC00000;
  v31 = sub_145B6B0(v2, "indicatorShadowSize", &v32);
  a1[0x18] = LODWORD(v31);
}
