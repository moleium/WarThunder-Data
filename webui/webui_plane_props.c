const char *__fastcall webui_plane_props(__int64 a1)
{
  void (*v2)(void); // rax
  const char *result; // rax
  _BYTE *v4; // rdi
  signed __int64 v5; // rdx
  void (*v6)(void); // rax
  __int64 v7; // rbx
  __int64 air_movement; // rdi
  __m128i v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *ThreadLocalStoragePointer; // rcx
  unsigned __int64 v14; // rax
  const char *v15; // rbp
  char *v16; // rcx
  int v17; // eax
  int st_mtime; // ecx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  void **v27; // rbx
  __int64 v28; // rbx
  char v29; // r14
  unsigned __int64 v30; // r12
  int v31; // edx
  int v32; // r8d
  int v33; // r9d
  int v34; // edx
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // rcx
  int v38; // edx
  int v39; // r8d
  int v40; // r9d
  int v41; // edx
  int v42; // r8d
  int v43; // r9d
  int v44; // edx
  int v45; // r8d
  int v46; // r9d
  int v47; // edx
  int v48; // r8d
  int v49; // r9d
  __int64 v50; // rax
  __int64 v51; // rbp
  __int64 v52; // r15
  __int64 v53; // r14
  int v54; // edx
  int v55; // r8d
  int v56; // r9d
  char *v57; // rdx
  char v58; // [rsp+4Bh] [rbp-43Dh] BYREF
  int v59; // [rsp+4Ch] [rbp-43Ch]
  int v60; // [rsp+50h] [rbp-438h]
  int v61; // [rsp+54h] [rbp-434h]
  unsigned int v62; // [rsp+58h] [rbp-430h]
  int v63; // [rsp+5Ch] [rbp-42Ch]
  void **v64; // [rsp+60h] [rbp-428h] BYREF
  int v65; // [rsp+68h] [rbp-420h]
  int v66; // [rsp+6Ch] [rbp-41Ch] BYREF
  __int64 (__fastcall **v67)(void *); // [rsp+70h] [rbp-418h] BYREF
  char *FileName; // [rsp+78h] [rbp-410h]
  __int64 v69; // [rsp+80h] [rbp-408h]
  __int64 v70; // [rsp+88h] [rbp-400h]
  __int64 v71; // [rsp+90h] [rbp-3F8h]
  __int64 v72; // [rsp+98h] [rbp-3F0h]
  void *Block[2]; // [rsp+A0h] [rbp-3E8h] BYREF
  char v74; // [rsp+B7h] [rbp-3D1h]
  char v75[16]; // [rsp+B8h] [rbp-3D0h] BYREF
  __int64 v76; // [rsp+C8h] [rbp-3C0h]
  __int64 v77[6]; // [rsp+D0h] [rbp-3B8h] BYREF
  __int16 v78; // [rsp+107h] [rbp-381h]
  char v79; // [rsp+11Fh] [rbp-369h]
  __int64 v80; // [rsp+120h] [rbp-368h]
  char v81[32]; // [rsp+130h] [rbp-358h] BYREF
  __m128i v82[2]; // [rsp+150h] [rbp-338h] BYREF
  struct _stat64i32 v83[3]; // [rsp+170h] [rbp-318h] BYREF
  __int128 v84; // [rsp+200h] [rbp-288h]
  __int128 v85; // [rsp+210h] [rbp-278h]
  __int128 v86; // [rsp+220h] [rbp-268h]
  char Str1[512]; // [rsp+230h] [rbp-258h] BYREF

  if ( strcmp(*a1, "GET") )
    goto LABEL_80;
  if ( !*(game + 0x718)
    || !*(game + 0xDC) && (!byte_4B1C820 || dword_4B1C810 != 5 && dword_4B1C810 != 2)
    || !*(*(game + 0x430) + 0x365i64) )
  {
    if ( *(a1 + 0x4E8) )
    {
      v6 = *(a1 + 0x4F8);
      if ( v6 )
        v6();
    }
    result = "HTTP/1.1 403 Forbidden\r\n\r\n";
    *(a1 + 0x4E8) = "HTTP/1.1 403 Forbidden\r\n\r\n";
    *(a1 + 0x4F0) = 0x1A;
    goto LABEL_18;
  }
  v4 = *(a1 + 0x18);
  v5 = v4 ? strlen(*(a1 + 0x18)) : 0i64;
  if ( !parse_command_data(v4, v5, "cmd", v82, 0x20i64)
    || (v7 = LocalUnit) == 0
    || *(LocalUnit + 0x10A8) > 1u
    || (*(LocalUnit + 0x1058) & 0x7000014) != 0
    || *(LocalUnit + 0x10B0)
    || (air_movement = *(LocalUnit + 0x9D0)) == 0
    || (v9 = _mm_xor_si128(_mm_load_si128(v82), xmmword_44CB140), !_mm_testz_si128(v9, v9)) )
  {
LABEL_80:
    if ( *(a1 + 0x4E8) )
    {
      v2 = *(a1 + 0x4F8);
      if ( v2 )
        v2();
    }
    result = "HTTP/1.1 400 Bad Request\r\n\r\n";
    *(a1 + 0x4E8) = "HTTP/1.1 400 Bad Request\r\n\r\n";
    *(a1 + 0x4F0) = 0x1C;
LABEL_18:
    *(a1 + 0x4F8) = 0i64;
    return result;
  }
  v66 = 0;
  if ( !sub_B0ACA0(a1, Str1) || !sub_B09250(a1, &v66) )
    goto LABEL_42;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v10, v11, v12);
  v14 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  v77[0] = 0i64;
  *&v77[1] = v14;
  v15 = sub_B092C0(*(v7 + 0x4160), v77);
  sub_B093A0(&v67, v15);
  v16 = &szFile;
  if ( FileName )
    v16 = FileName;
  v17 = stat64i32(v16, v83);
  st_mtime = 0;
  if ( !v17 )
    st_mtime = v83[0].st_mtime;
  if ( v66 != st_mtime || strcmp(Str1, v15) )
  {
    if ( FileName )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    if ( v77[0] )
      (*(*v77[1] + 0x40i64))(v77[1]);
LABEL_42:
    v61 = 0;
    v60 = 0x3E4CCCCD;
    v59 = 0x3F99999A;
    v58 = 1;
    v63 = 0x3F800000;
    v62 = 0;
    v65 = 0;
    if ( !sub_B0A5E0(a1, "machMin")
      || !sub_B0A5E0(a1, "machStep")
      || !sub_B0A5E0(a1, "machMax")
      || !sub_B0BDF0(a1, "showFlaps", &v58)
      || !sub_B0A5E0(a1, "flaps")
      || !sub_B0A5E0(a1, "flapsMach")
      || !sub_B0A5E0(a1, "sweep") )
    {
      return sub_AF1600(a1, "{\"result\": \"OK\"}", 0x10i64);
    }
    v22 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v22[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(v22, v19, v20, v21);
    v23 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    v67 = &off_44CAF30;
    v69 = v23;
    v70 = 0x80000i64;
    v71 = 0i64;
    FileName = (*(*v23 + 0x18i64))(v23, 0x80000i64);
    *FileName = 0;
    sub_B09440(&v67, "{\n");
    sub_B09440(&v67, "  \"valid\": true,\n");
    sub_B094D0(v7, &v67);
    sub_B09440(&v67, ",\n");
    sub_14584E0(v81, off_4B678B0);
    sub_1577510(air_movement, v81, 0i64, *(*(v7 + 0x11A0) + 0x58i64));
    v86 = 0i64;
    v85 = 0i64;
    v84 = 0i64;
    v72 = sub_1587A40(air_movement, v24, v83);
    if ( *(air_movement + 0x4EA8) )
    {
      v25 = sub_145DB90(v81, "Aerodynamics");
      v26 = sub_145DB90(v25, "WingPlaneSweep");
      sub_2214DC0(v72, v26, 0i64);
    }
    v75[8] = 0;
    v75[0xC] = 0;
    v76 = 0i64;
    sub_14584E0(v77, off_4B678B0);
    sub_1F2E3D0(v81, v75, v77);
    sub_1458FF0(v77);
    v77[0] = &off_44CB348;
    memset(&v77[1], 0, 0x19);
    v78 = 0x17;
    v79 = 0x17;
    v80 = 0x30000004Ai64;
    v27 = Block;
    sub_1C574D0(v77, Block, v75);
    if ( v74 < 0 )
      v27 = Block[0];
    v64 = v27;
    sub_B09AE0(&v67, "  \"params\": %s,\n", &v64);
    sub_B09440(&v67, "  \"tables\": {\n");
    sub_B09440(&v67, "    \"polar\": {\n");
    if ( *(air_movement + 0x4EA8) )
    {
      v28 = air_movement + 0x4EB0;
      v29 = v58;
      v30 = 0i64;
      do
      {
        LODWORD(v64) = ++v30;
        sub_B0A540(&v67, "      \"wingSweep%d\": ", &v64);
        sub_B11480(v28, v31, v32, v33, v29 != 0, v63, _mm_cvtsi128_si32(_mm_cvtsi32_si128(v62)), &v67);
        sub_B09440(&v67, ",\n");
        v28 += 0xC0i64;
      }
      while ( v30 < *(air_movement + 0x4EA8) );
      sub_B09440(&v67, "      \"wingSweep\": ");
      sub_B11480(v72, v34, v35, v36, v29 != 0, v63, _mm_cvtsi128_si32(_mm_cvtsi32_si128(v62)), &v67);
    }
    else
    {
      sub_B09440(&v67, "      \"wing\": ");
      sub_B11480(air_movement + 0x4590, v38, v39, v40, v58, v63, _mm_cvtsi128_si32(_mm_cvtsi32_si128(v62)), &v67);
    }
    sub_B09440(&v67, ",\n");
    sub_B09440(&v67, "      \"stabilizer\": ");
    sub_B12D60(air_movement + 0x4868, v41, v42, v43, &v67);
    sub_B09440(&v67, ",\n");
    sub_B09440(&v67, "      \"fin\": ");
    sub_B12D60(air_movement + 0x4A70, v44, v45, v46, &v67);
    sub_B09440(&v67, ",\n");
    sub_B09440(&v67, "      \"fuselage\": ");
    sub_B12D60(air_movement + 0x4C78, v47, v48, v49, &v67);
    if ( *(*(air_movement + 0x3AC8) + 0x7098i64) <= 0 )
    {
      sub_B09440(&v67, &word_4A30321[1]);
    }
    else
    {
      sub_B09440(&v67, ",\n");
      v50 = *(air_movement + 0x3AC8);
      if ( *(v50 + 0x7098) > 0 )
      {
        v51 = 0i64;
        do
        {
          v52 = *(v50 + 8 * v51 + 0x70A0);
          v53 = v51 + 1;
          LODWORD(v64) = v51 + 1;
          sub_B0A540(&v67, "      \"propeller%dBlade\": ", &v64);
          sub_B12D60(*(v52 + 0x38), v54, v55, v56, &v67);
          v57 = &word_4A30321[1];
          if ( v51 < *(*(air_movement + 0x3AC8) + 0x7098i64) - 1i64 )
            v57 = ",\n";
          sub_B09440(&v67, v57);
          v50 = *(air_movement + 0x3AC8);
          ++v51;
        }
        while ( v53 < *(v50 + 0x7098) );
      }
    }
    sub_B09440(&v67, "    }");
    sub_B09440(&v67, "  }\n");
    sub_B09440(&v67, "}\n");
    sub_AF1600(a1, FileName, v71);
    if ( v74 < 0 && Block[0] )
      sub_1464430(Block[0]);
    sub_B13D10(v77);
    sub_180E1F0(v75);
    sub_B13E40(v83);
    sub_1458FF0(v81);
    v67 = &off_44CAF30;
    v37 = v69;
    return (*(*v37 + 0x40i64))(v37);
  }
  result = sub_AF1600(a1, "{\"result\": \"OK\"}", 0x10i64);
  if ( FileName )
    result = (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
  if ( v77[0] )
  {
    v37 = v77[1];
    return (*(*v37 + 0x40i64))(v37);
  }
  return result;
}
