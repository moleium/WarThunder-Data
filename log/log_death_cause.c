__int64 __fastcall log_death_cause(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // rax
  _DWORD *v7; // rax
  int v8; // ecx
  float v9; // xmm0_4
  int v10; // ecx
  float v11; // xmm1_4
  float v12; // xmm2_4
  int v13; // ecx
  float v14; // xmm2_4
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbp
  __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  char *v27; // rcx
  __int64 v28; // rdi
  char *v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 result; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  float v35; // xmm0_4
  float v36; // xmm1_4
  int v37; // r15d
  __int64 v38; // rcx
  int v39; // ebp
  int v40; // ecx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v46; // rax
  unsigned int v47; // eax
  const char *v48; // rax
  __int64 v49; // rax
  int v50; // ecx
  int v51; // esi
  __int64 v52; // rax
  char v53; // bl
  unsigned int v54; // edi
  _QWORD *v55; // rcx
  CHAR *v56; // rdx
  __int64 v57; // r15
  __int64 v58; // rsi
  CHAR *v59; // rcx
  CHAR *v60; // rbx
  char *v61; // rcx
  __int64 v62; // rax
  CHAR *v63; // r8
  char v64; // al
  char *v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  CHAR *v68; // r8
  __int64 v69; // rax
  CHAR *v70; // rdi
  int v71; // ebp
  const char *v72; // rax
  unsigned int v73; // eax
  int v74; // ecx
  unsigned __int8 v75; // cf
  __int64 v76; // rax
  const char *v77; // rdx
  char *v78; // rcx
  const char *v79; // rax
  unsigned int v80; // r8d
  CHAR *v81; // rsi
  char *v82; // rdx
  CHAR *v83; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v84; // [rsp+48h] [rbp-D0h]
  __int64 v85; // [rsp+50h] [rbp-C8h]
  __int64 v86; // [rsp+58h] [rbp-C0h]
  CHAR *v87; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v88; // [rsp+68h] [rbp-B0h]
  __int64 v89; // [rsp+70h] [rbp-A8h]
  CHAR *v90; // [rsp+78h] [rbp-A0h] BYREF
  char *v91; // [rsp+80h] [rbp-98h] BYREF
  __int64 v92; // [rsp+88h] [rbp-90h]
  __int64 v93; // [rsp+90h] [rbp-88h]
  CHAR *v94; // [rsp+98h] [rbp-80h] BYREF
  __int64 v95; // [rsp+A0h] [rbp-78h]
  __int64 v96; // [rsp+A8h] [rbp-70h]
  __int64 v97; // [rsp+B0h] [rbp-68h]
  __int64 v98; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v99; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v100; // [rsp+C8h] [rbp-50h]

  v4 = dword_4B19940;
  if ( !dword_4B19940 )
  {
    v5 = sub_1623330(0, 0x87C, 0, "drawPatc", 0);
    v4 = v5;
    dword_4B19940 = v5;
  }
  if ( (dword_4B70D40 & 2) != 0 )
    v6 = sub_1625CD0(v4, &v98);
  else
    v6 = 0i64;
  v97 = v6;
  *(a2 + 0x39) = 1;
  v7 = *a2;
  v8 = *(*a2 + 0x130i64);
  v9 = v8;
  *(a2 + 8) = v8;
  v10 = v7[0x4D];
  v11 = dword_44801E0;
  v12 = dword_44801E0 / v9;
  *(a2 + 9) = v10;
  *(a2 + 0xA) = v12;
  *(a2 + 0xB) = v11 / v10;
  *(a2 + 3) = v7[0x4F];
  v13 = v7[0x51];
  *(a2 + 5) = v13;
  v14 = v7[0x50];
  *(a2 + 2) = v7[0x4E];
  *(a2 + 4) = v14;
  *(a2 + 6) = v11 / v14;
  *(a2 + 7) = v11 / v13;
  sub_18960C0(a2, a2, a2 + 0x11, a2 + 0x35);
  v15 = *a2;
  LOBYTE(v16) = 1;
  sub_18A2CE0(*a2, v16);
  *(v15 + 0x2E0) = 1;
  *(a2 + 0x14) = 0;
  *(a2 + 4) = xmmword_44A4120;
  *(*a2 + 0x2C4i64) |= 2u;
  sub_18A2920(*a2, 1i64, 0i64);
  if ( *(game + 0x420) )
  {
    v18 = *&mUnit;
    if ( !*&mUnit
      || (*(*&mUnit + 0x1058i64) & 0x7000014) != 0
      || !(*(*(*&mUnit + 0x50i64) + 0x18i64))(*&mUnit + 0x50i64)
      || *(a1 + 0x1C9D) )
    {
      goto LABEL_11;
    }
    if ( *(v18 + 0x10A8) <= 1u )
    {
      if ( *(v18 + 0x10A8) != 1 )
      {
LABEL_11:
        v21 = *(a1 + 0x648);
        if ( *(v21 + 0x2E0) <= 0.0 )
        {
          if ( *(v21 + 0x110) )
          {
            v22 = *(v21 + 0x100);
            v23 = 0x30i64 * *(v21 + 0x110);
            v24 = 0i64;
            do
            {
              v17 = *(v22 + v24);
              if ( v17 )
                (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
              v24 += 0x30i64;
            }
            while ( v23 != v24 );
          }
          *(v21 + 0x110) = 0;
        }
        if ( qword_4B19AA0 && (byte_4B1993D & 1) != 0 )
        {
          sub_B27BC0(qword_4B19AA0 + 0x5A8, "hint:died_from_ammo_explosion:hide", &qword_4B67850);
          byte_4B1993D = 0;
        }
LABEL_21:
        if ( v18 && *(a1 + 0x1C9D) && !*(v18 + 0x10A8) )
          *(a1 + 0x1C9D) = 0;
        goto LABEL_25;
      }
      if ( (*(*v18 + 0x68i64))(v18) > *(*(game + 0x498) + 0x1E5Ci64) )
      {
        sub_BA6750(*(a1 + 0x648));
        *(a1 + 0x1C9D) = 1;
        goto LABEL_25;
      }
    }
    v37 = *(v18 + 0x844);
    if ( !*(*(a1 + 0x648) + 0x110i64) )
      goto LABEL_73;
    if ( (v37 - 0x11) <= 1 )
    {
      v38 = *(game + 0x430) + 0x4F8i64;
      LODWORD(v83) = 0;
      v39 = sub_145A390(v38, "timesShownExplosionDeathHint", &v83);
      v40 = *(*(game + 0x498) + 0x2180i64);
      if ( v39 <= v40 )
      {
        sub_145A750(*(game + 0x430) + 0x4F8i64, "timesShownExplosionDeathHint", ++v39);
        v40 = *(*(game + 0x498) + 0x2180i64);
      }
      if ( v39 <= v40 && qword_4B19AA0 && (byte_4B1993D & 1) == 0 )
      {
        sub_B27BC0(qword_4B19AA0 + 0x5A8, "hint:died_from_ammo_explosion:show", &qword_4B67850);
        byte_4B1993D = 1;
      }
    }
    v41 = *(a1 + 0x648);
    v42 = *(v41 + 0x110);
    v43 = *(v41 + 0x100);
    v44 = v42 - 1;
    while ( v44 >= 0 )
    {
      v17 = *(v43 + 0x30i64 * v44-- + 0x2C);
      if ( v17 >= 0 )
        goto LABEL_71;
    }
    v17 = 0xFFFFFFFFi64;
LABEL_71:
    if ( (v37 - 0xA) <= 2 && v37 != v17 )
    {
LABEL_73:
      ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
        _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v17, v19, v20);
      v46 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
      v91 = 0i64;
      v92 = v46;
      v93 = 0i64;
      *(a1 + 0x468) = *(v18 + 0x840);
      v47 = *(v18 + 0x844);
      *(a1 + 0x46C) = v47;
      *(a1 + 0x470) = *(v18 + 0x848);
      *(a1 + 0x472) = *(v18 + 0x84A);
      *(a1 + 0x473) = *(v18 + 0x84B);
      if ( !v47 && *(v18 + 0x199C) == 0xFFFF )
      {
        v53 = 0;
        goto LABEL_162;
      }
      if ( (v37 - 0xA) <= 2 )
      {
        sub_BA6750(*(a1 + 0x648));
        sub_BA66E0(*(a1 + 0x648));
        v47 = *(a1 + 0x46C);
      }
      if ( v47 - 1 <= 0x1F )
      {
        v48 = sub_BC2D50(dword_44CB900[v47]);
        sub_185590(&v91, v48);
        if ( !*(v18 + 0x10B0) )
        {
          v49 = *(v18 + 0x9D0);
          if ( v49 )
          {
            v50 = *(a1 + 0x46C);
            if ( v50 == 5 )
            {
              *&v84 = *(v49 + 0x4618);
              LODWORD(v83) = 3;
              add_server_param(&v91, 0x100i64, " %.2f", &v83, 1);
            }
            else if ( v50 == 4 )
            {
              v51 = ((*(qword_4AD8F98 + 0x28i64 * *(*(game + 0x430) + 0x90i64)) * *(v49 + 0x4614)) + *&dword_44801CC);
              v52 = sub_BC2D50(*(qword_4AD8F98 + 0x28i64 * *(*(game + 0x430) + 0x90i64) + 0x20));
              v84 = v51;
              LODWORD(v83) = 2;
              v86 = v52;
              LODWORD(v85) = 1;
              add_server_param(&v91, 0x100i64, " %d %s", &v83, 2);
            }
          }
        }
        if ( v93 )
          LODWORD(v56) = v91;
        else
          v56 = &szFile;
        sub_B9AFE0(0x10, v56, 0, 0, *(a1 + 0x46C), 0, 0xBF800000, 1);
      }
      v57 = *(v18 + 0x1940);
      v53 = 1;
      if ( !v57 || v57 == v18 )
      {
LABEL_162:
        v17 = v91;
        if ( v91 )
          (*(*v92 + 0x40i64))(v92);
        if ( v53 )
          goto LABEL_21;
        goto LABEL_25;
      }
      v83 = 0i64;
      v84 = off_4B678C8;
      v85 = 0i64;
      v58 = sub_1206DE0(*(v18 + 0x1980));
      if ( !v58 )
        goto LABEL_141;
      v90 = 0i64;
      v59 = *(v18 + 0x880);
      v60 = &szFile;
      if ( !v59 )
        v59 = &szFile;
      if ( sub_181B660(v59, 0i64) )
      {
        v61 = &szFile;
        if ( *(v18 + 0x880) )
          v61 = *(v18 + 0x880);
        v62 = sub_5400D0(v61);
        sub_277B70(&v90, v62);
        v53 = 1;
      }
      else
      {
        sub_393750(&v99, &qword_49E7BED, off_4B678C8);
        v63 = *(v18 + 0x880);
        if ( !v63 )
          v63 = &szFile;
        sub_196C10(&v99, &v94, v63);
        sub_196C10(&v94, &v87, "/short");
        if ( v94 )
          (*(*v95 + 0x40i64))(v95);
        if ( v99 )
          (*(*v100 + 0x40i64))(v100);
        if ( v89 )
          v60 = v87;
        v64 = sub_181B660(v60, 0i64);
        v53 = 1;
        if ( v64 )
        {
          if ( v89 )
            v65 = v87;
          else
            v65 = &szFile;
          v66 = sub_5400D0(v65);
          sub_277B70(&v90, v66);
        }
        if ( v87 )
          (*(*v88 + 0x40i64))(v88);
      }
      if ( v90 && *v90 )
      {
        v94 = v90;
        v99 = sub_326B00(v57);
        v67 = sub_5400D0("HUD_DESTROYED_BY_AMMO");
        sub_B38E80(&v87, v67, &v99, &v94);
        if ( v89 )
          v68 = v87;
        else
          v68 = &szFile;
        sub_1201E30(v58, &v94, v68);
        v70 = v94;
        v83 = v94;
        v84 = v95;
        v71 = v96;
        v85 = v96;
        if ( v87 )
          (*(*v88 + 0x40i64))(v88);
      }
      else
      {
        v69 = sub_326B00(v57);
        sub_1201E30(v58, &v87, v69);
        v70 = v87;
        v83 = v87;
        v84 = v88;
        v71 = v89;
        v85 = v89;
      }
      if ( v90 )
        (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
      if ( !v71 || !*v70 )
      {
LABEL_141:
        v72 = sub_326920(v57);
        sub_185590(&v83, v72);
        if ( !v85 )
          goto LABEL_160;
        if ( !*v83 )
        {
LABEL_161:
          (*(*v84 + 0x40i64))(v84);
          goto LABEL_162;
        }
      }
      v73 = *(v18 + 0x10B0);
      if ( v73 > 0xF || (v74 = 0x897E, v75 = _bittest(&v74, v73), v76 = v18, !v75) )
        v76 = 0i64;
      v77 = "HUD_YOUR_KILLER";
      if ( !v58 )
        v77 = "HUD_YOUR_KILLER_AI";
      v78 = "HUD_YOUR_KILLER_GM";
      if ( !v58 )
        v78 = "HUD_YOUR_KILLER_GM_AI";
      if ( !v76 )
        v78 = v77;
      v79 = sub_5400D0(v78);
      sub_185590(&v91, v79);
      sub_B38EF0(&v87, " ", &v83);
      v80 = v89 - 1;
      if ( !v89 )
        v80 = 0;
      v81 = &szFile;
      v82 = v87;
      if ( !v89 )
        v82 = &szFile;
      append_string(&v91, v82, v80);
      if ( v87 )
        (*(*v88 + 0x40i64))(v88);
      if ( v93 )
        LODWORD(v81) = v91;
      sub_B9AFE0(0x10, v81, 0, 0, 0xFFFFFFFF, 0, 0xBF800000, 1);
LABEL_160:
      if ( !v83 )
        goto LABEL_162;
      goto LABEL_161;
    }
  }
  if ( *(*(game + 0x420) + 0xD8i64) != 1 )
  {
    v25 = *(game + 0x450);
    if ( !v25 || !*(v25 + 0x5CA) )
      goto LABEL_39;
  }
LABEL_25:
  v26 = *(a1 + 0x454);
  if ( qword_4B83668 <= v26 )
  {
    v29 = 0i64;
  }
  else
  {
    v27 = qword_4B83658;
    v28 = 0x348 * v26;
    if ( !*(qword_4B83658 + 0x69 * v26 + 0x4A) && *(qword_4B83658 + v28 + 0x2C8) < 0 )
    {
      sub_299DFF0(qword_4B83658 + v28);
      v27 = qword_4B83658;
    }
    v29 = &v27[v28];
  }
  v83 = v29;
  LODWORD(v84) = 0;
  sub_18A1000(&v83);
  if ( *(*(game + 0x420) + 0xD8i64) != 1
    || !LocalUnit
    || *(LocalUnit + 0x10B0)
    || (*(LocalUnit + 0x1058) & 0x7000014) != 0
    || (*(LocalUnit + 0x1058) & 0x100) == 0 && *(LocalUnit + 0x10A8) < 2u )
  {
    goto LABEL_39;
  }
  v33 = game;
  if ( *(game + 0x6C4) >= 0.0 || *(qword_4B198C0 + 0x2B) && (dword_4A6C5A0 & 0x2F) == 0 )
    goto LABEL_39;
  v17 = NtCurrentTeb()->ThreadLocalStoragePointer;
  v34 = *(v17 + 8i64 * TlsIndex);
  if ( !*(v34 + 1) )
  {
    _dyn_tls_on_demand_init(v34, v17, v30, v31);
    v33 = game;
  }
  if ( *(v33 + 0x254) )
  {
    if ( LocalPlayer )
      v36 = *(LocalPlayer + 0x674);
    else
      v36 = 0.0;
    v35 = *(v33 + 0x240);
    v54 = 0;
    if ( (v35 - v36) > 0 )
      v54 = (v35 - v36);
    if ( dword_4A70BB8 != v54 )
    {
      dword_4A70BB8 = v54;
      byte_4B1993E = 0;
    }
    v55 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v55[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(v55, v17, v30, v31);
    sub_14584E0(&v83, *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64));
    if ( dword_4B1C508 <= 1 && !qword_4B507E8 )
      assign_string_int(&v83, "timer", v54);
    if ( qword_4B19AA0 && (byte_4B1993E & 1) == 0 )
    {
      sub_B27BC0(qword_4B19AA0 + 0x5A8, "hint:press_a_continue:show", &v83);
      byte_4B1993E = 1;
    }
    sub_1458FF0(&v83);
  }
  else
  {
LABEL_39:
    if ( qword_4B19AA0 && (byte_4B1993E & 1) != 0 )
    {
      sub_B27BC0(qword_4B19AA0 + 0x5A8, "hint:press_a_continue:hide", &qword_4B67850);
      byte_4B1993E = 0;
    }
  }
  LOBYTE(v17) = 1;
  sub_18A2CE0(*a2, v17);
  sub_18A2920(*a2, 0i64, 0i64);
  result = *a2;
  *(*a2 + 0x2E0i64) = 0;
  *(a2 + 0x39) = 0;
  if ( v97 )
    return sub_1625D70(v97, v98);
  return result;
}
