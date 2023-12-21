__int64 __fastcall hud_font(_DWORD *a1, __int64 *a2)
{
  const char *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rdi
  unsigned int v14; // ebx
  unsigned int v15; // ebp
  __int64 v16; // rax
  int v17; // esi
  int v18; // eax
  int v19; // eax
  unsigned int v20; // eax
  int v21; // ecx
  unsigned int v22; // edx
  __int64 *v23; // r8
  unsigned int v24; // ebx
  __int64 v25; // rbp
  unsigned int v26; // edi
  __int64 v27; // rax
  unsigned int v28; // ecx
  unsigned int v29; // ebx
  __int64 *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rbp
  unsigned int v33; // esi
  __int64 v34; // rbp
  __int64 *v35; // rcx
  const char *v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // edx
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // edx
  __int64 result; // rax
  int v47; // eax
  char v48[8]; // [rsp+28h] [rbp-60h] BYREF
  const char *v49; // [rsp+30h] [rbp-58h] BYREF
  const char *v50; // [rsp+38h] [rbp-50h]

  v49 = &szFile;
  v4 = data::get_str(a2, "vectorHudFont", &v49);
  v49 = v4;
  LODWORD(v50) = 0xFFFFFFFF;
  if ( byte_4B83688 )
  {
    v5 = sub_196D90(&v49, qword_4B83670, qword_4B83680, v48);
    if ( !v5 )
      goto LABEL_6;
  }
  else
  {
    v5 = sub_197140(&v49, qword_4B83670, qword_4B83680, v48);
    if ( !v5 )
    {
LABEL_6:
      a1[0x1B] = 0xFFFFFFFF;
LABEL_7:
      v50 = v4;
      LODWORD(v49) = 1;
      logmessage_fmt(1u, "<vectorHudFont> Font '%s' not found", &v49, 1);
      goto LABEL_8;
    }
  }
  v6 = v5 - qword_4B83670;
  if ( (~v6 & 0xFFFFFFFF0i64) == 0 )
    goto LABEL_6;
  v18 = *(qword_4B83670 + (v6 & 0xFFFFFFFF0i64) + 8);
  a1[0x1B] = v18;
  if ( v18 < 0 )
    goto LABEL_7;
LABEL_8:
  v49 = &szFile;
  v49 = data::get_str(a2, "measureFont", &v49);
  LODWORD(v50) = 0xFFFFFFFF;
  if ( byte_4B83688 )
  {
    v7 = sub_196D90(&v49, qword_4B83670, qword_4B83680, v48);
    if ( v7 )
      goto LABEL_10;
LABEL_13:
    v9 = 0xFFFFFFFF;
    goto LABEL_14;
  }
  v7 = sub_197140(&v49, qword_4B83670, qword_4B83680, v48);
  if ( !v7 )
    goto LABEL_13;
LABEL_10:
  v8 = v7 - qword_4B83670;
  v9 = 0xFFFFFFFF;
  if ( (~v8 & 0xFFFFFFFF0i64) != 0 )
    v9 = *(qword_4B83670 + (v8 & 0xFFFFFFFF0i64) + 8);
LABEL_14:
  a1[0x23] = v9;
  v49 = "medium_text_hud";
  v49 = data::get_str(a2, "mediumFontId", &v49);
  LODWORD(v50) = 0xFFFFFFFF;
  if ( byte_4B83688 )
  {
    v10 = sub_196D90(&v49, qword_4B83670, qword_4B83680, v48);
    if ( v10 )
      goto LABEL_16;
LABEL_19:
    v12 = 0xFFFFFFFF;
    goto LABEL_20;
  }
  v10 = sub_197140(&v49, qword_4B83670, qword_4B83680, v48);
  if ( !v10 )
    goto LABEL_19;
LABEL_16:
  v11 = v10 - qword_4B83670;
  v12 = 0xFFFFFFFF;
  if ( (~v11 & 0xFFFFFFFF0i64) != 0 )
    v12 = *(qword_4B83670 + (v11 & 0xFFFFFFFF0i64) + 8);
LABEL_20:
  a1[0x24] = v12;
  v13 = *a2;
  v14 = 0xFFFFFFFF;
  if ( !*a2 )
    goto LABEL_32;
  v15 = data::get_name_id("patc", 4ui64);
  v16 = *(v13 + 0x50);
  if ( v16 )
  {
    v17 = *(v16 + 0x20);
    if ( !*(v13 + 0x20) )
      goto LABEL_29;
  }
  else
  {
    v17 = 0;
    if ( !*(v13 + 0x20) )
      goto LABEL_29;
  }
  v19 = data::get_name_id(v13, "patc", 4i64, v15);
  if ( v19 >= 0 )
  {
    v20 = v17 + v19;
    goto LABEL_31;
  }
LABEL_29:
  if ( !v17 )
    goto LABEL_32;
  v20 = data::get_name_id(*(v13 + 0x50), "patc", 4i64, v15);
LABEL_31:
  v14 = v20;
LABEL_32:
  v21 = *(a2 + 4);
  if ( v21 == 0xFFFFFFFF )
  {
    v28 = *(a2 + 7);
    v23 = 0i64;
    if ( *(a2 + 7) )
    {
      v29 = v14 + 1;
      v30 = a2[3];
      v31 = *v30;
      v32 = *(v30 + 2) - 8 * v28;
      v33 = 0;
      while ( (*(*(v31 + v32) + 8i64) & 0x3FFFFFFF) != v29 )
      {
        ++v33;
        v32 += 8i64;
        if ( v28 == v33 )
          goto LABEL_49;
      }
      if ( v33 >= v28 )
        v23 = 0i64;
      else
        v23 = *(v31 + v32);
    }
  }
  else
  {
    v22 = *(a2 + 7);
    v23 = 0i64;
    if ( v21 < (v21 + v22) )
    {
      v24 = v14 + 1;
      v25 = *a2 + *(*a2 + 0x5C) + 0x90;
      v26 = 0;
      while ( 1 )
      {
        v27 = 0x20i64 * (v21 + v26);
        if ( (*(v25 + v27 + 8) & 0x3FFFFFFF) == v24 )
          break;
        if ( v22 == ++v26 )
          goto LABEL_49;
      }
      v34 = v27 + v25;
      v23 = 0i64;
      if ( v26 < v22 )
        v23 = v34;
    }
  }
LABEL_49:
  v35 = &qword_4B67850;
  if ( v23 )
    v35 = v23;
  v49 = "Hooge48_big";
  v36 = data::get_str(v35, "font", &v49);
  v49 = v36;
  LODWORD(v50) = 0xFFFFFFFF;
  if ( byte_4B83688 )
  {
    v37 = sub_196D90(&v49, qword_4B83670, qword_4B83680, v48);
    if ( !v37 )
      goto LABEL_56;
  }
  else
  {
    v37 = sub_197140(&v49, qword_4B83670, qword_4B83680, v48);
    if ( !v37 )
    {
LABEL_56:
      a1[0x115] = 0xFFFFFFFF;
LABEL_57:
      v50 = v36;
      LODWORD(v49) = 1;
      logmessage_fmt(1u, "HudMultiplaerScore: font '%s' is not found.", &v49, 1);
      goto LABEL_58;
    }
  }
  v38 = v37 - qword_4B83670;
  if ( (~v38 & 0xFFFFFFFF0i64) == 0 )
    goto LABEL_56;
  v47 = *(qword_4B83670 + (v38 & 0xFFFFFFFF0i64) + 8);
  a1[0x115] = v47;
  if ( v47 == 0xFFFFFFFF )
    goto LABEL_57;
LABEL_58:
  v49 = &szFile;
  v49 = data::get_str(a2, "debugFontName", &v49);
  LODWORD(v50) = 0xFFFFFFFF;
  if ( byte_4B83688 )
  {
    v39 = sub_196D90(&v49, qword_4B83670, qword_4B83680, v48);
    if ( v39 )
      goto LABEL_60;
LABEL_63:
    v41 = 0xFFFFFFFF;
    goto LABEL_64;
  }
  v39 = sub_197140(&v49, qword_4B83670, qword_4B83680, v48);
  if ( !v39 )
    goto LABEL_63;
LABEL_60:
  v40 = v39 - qword_4B83670;
  v41 = 0xFFFFFFFF;
  if ( (~v40 & 0xFFFFFFFF0i64) != 0 )
    v41 = *(qword_4B83670 + (v40 & 0xFFFFFFFF0i64) + 8);
LABEL_64:
  v42 = 0;
  if ( v41 > 0 )
    v42 = v41;
  dword_4B19A8C = v42;
  v49 = &szFile;
  v49 = data::get_str(a2, "consoleFontName", &v49);
  LODWORD(v50) = 0xFFFFFFFF;
  if ( byte_4B83688 )
    sub_196D90(&v49, qword_4B83670, qword_4B83680, v48);
  else
    sub_197140(&v49, qword_4B83670, qword_4B83680, v48);
  v49 = &szFile;
  v49 = data::get_str(a2, "smallTextHudFontName", &v49);
  LODWORD(v50) = 0xFFFFFFFF;
  if ( byte_4B83688 )
  {
    v43 = sub_196D90(&v49, qword_4B83670, qword_4B83680, v48);
    if ( v43 )
      goto LABEL_71;
LABEL_74:
    v45 = 0xFFFFFFFF;
    goto LABEL_75;
  }
  v43 = sub_197140(&v49, qword_4B83670, qword_4B83680, v48);
  if ( !v43 )
    goto LABEL_74;
LABEL_71:
  v44 = v43 - qword_4B83670;
  v45 = 0xFFFFFFFF;
  if ( (~v44 & 0xFFFFFFFF0i64) != 0 )
    v45 = *(qword_4B83670 + (v44 & 0xFFFFFFFF0i64) + 8);
LABEL_75:
  result = 0i64;
  if ( v45 > 0 )
    result = v45;
  dword_4B19A90 = result;
  return result;
}
