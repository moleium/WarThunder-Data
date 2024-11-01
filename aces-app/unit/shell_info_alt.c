__int64 __fastcall shell_info_alt(__int64 shell_info_18, __int64 a2)
{
  float v4; // xmm0_4
  float v5; // xmm0_4
  __int64 v6; // rsi
  unsigned int v7; // ebx
  unsigned int v8; // r15d
  __int64 v9; // rax
  int v10; // ebp
  int v11; // eax
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // edx
  __int64 *v15; // r8
  unsigned int v16; // ebx
  __int64 v17; // rbp
  unsigned int v18; // edi
  __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // ebx
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbp
  unsigned int v25; // esi
  __int64 v26; // rbp
  __int64 *v27; // rdx
  __int64 v29[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v30[7]; // [rsp+30h] [rbp-38h] BYREF

  LODWORD(v29[0]) = 0;
  v4 = data::set_real(a2, "mass", v29);
  *(shell_info_18 + 4) = v4;
  if ( v4 < *&FP32_EPSILON )
  {
    v29[0] = "?";
    v29[1] = data::get_str(a2, "bulletName", v29);
    LODWORD(v29[0]) = 1;
    logmessage_fmt(1u, "Bullet %s: 'mass' must be greater than 0!", v29, 1);
    *(shell_info_18 + 4) = 0x3F800000;
  }
  LODWORD(v29[0]) = 0;
  LODWORD(v29[0]) = data::set_real(a2, "caliber", v29);
  *(shell_info_18 + 8) = data::set_real(a2, "ballisticCaliber", v29);
  LODWORD(v29[0]) = 0;
  *(shell_info_18 + 0x14) = data::set_real(a2, "stucking", v29);
  LODWORD(v29[0]) = 0x42340000;
  v5 = data::set_real(a2, "stuckingAngle", v29);
  *(shell_info_18 + 0x18) = cosf(v5 * *&dword_449CFE0);
  LODWORD(v29[0]) = 0x44FA0000;
  *(shell_info_18 + 0x10) = data::set_real(a2, "maxDistance", v29);
  LODWORD(v29[0]) = 0x3EB33333;
  *(shell_info_18 + 0xC) = data::set_real(a2, "Cx", v29);
  v30[0] = 0x3BA3D70A3B03126Fi64;
  sub_145C170(a2, v29, "splinterMass", v30);
  *(shell_info_18 + 0x1C) = v29[0];
  v30[0] = 0x442F000043FA0000i64;
  sub_145C170(a2, v29, "velRange", v30);
  *(shell_info_18 + 0x24) = v29[0];
  LOBYTE(v29[0]) = 0;
  *shell_info_18 = data::get_bool(a2, "dynamicKv", v29);
  v6 = *a2;
  v7 = 0xFFFFFFFF;
  if ( *a2 )
  {
    v8 = data::get_name_id("ballisticsTable", 0xFui64);
    v9 = *(v6 + 0x50);
    if ( v9 )
    {
      v10 = *(v9 + 0x20);
      if ( !*(v6 + 0x20) )
        goto LABEL_10;
    }
    else
    {
      v10 = 0;
      if ( !*(v6 + 0x20) )
        goto LABEL_10;
    }
    v11 = data::get_name_id(v6, "ballisticsTable", 0xFui64, v8);
    if ( v11 >= 0 )
    {
      v12 = v10 + v11;
LABEL_12:
      v7 = v12;
      goto LABEL_13;
    }
LABEL_10:
    if ( !v10 )
      goto LABEL_13;
    v12 = data::get_name_id(*(v6 + 0x50), "ballisticsTable", 0xFui64, v8);
    goto LABEL_12;
  }
LABEL_13:
  v13 = *(a2 + 0x10);
  if ( v13 == 0xFFFFFFFF )
  {
    v20 = *(a2 + 0xE);
    v15 = 0i64;
    if ( *(a2 + 0xE) )
    {
      v21 = v7 + 1;
      v22 = *(a2 + 0x18);
      v23 = *v22;
      v24 = *(v22 + 2) - 8 * v20;
      v25 = 0;
      while ( (*(*(v23 + v24) + 8i64) & 0x3FFFFFFF) != v21 )
      {
        ++v25;
        v24 += 8i64;
        if ( v20 == v25 )
          goto LABEL_30;
      }
      if ( v25 >= v20 )
        v15 = 0i64;
      else
        v15 = *(v23 + v24);
    }
  }
  else
  {
    v14 = *(a2 + 0xE);
    v15 = 0i64;
    if ( v13 < (v13 + v14) )
    {
      v16 = v7 + 1;
      v17 = *a2 + *(*a2 + 0x5Ci64) + 0x90i64;
      v18 = 0;
      while ( 1 )
      {
        v19 = 0x20i64 * (v13 + v18);
        if ( (*(v17 + v19 + 8) & 0x3FFFFFFF) == v16 )
          break;
        if ( v14 == ++v18 )
          goto LABEL_30;
      }
      v26 = v19 + v17;
      v15 = 0i64;
      if ( v18 < v14 )
        v15 = v26;
    }
  }
LABEL_30:
  v27 = &data::get_block_by_name;
  if ( v15 )
    v27 = v15;
  return sub_1B3F020(shell_info_18 + 0x30, v27);
}
