const char *__fastcall webui_zhukovsky(__int64 a1, __int64 a2, double a3)
{
  void (*v4)(void); // rax
  const char *result; // rax
  _BYTE *v6; // rdi
  signed __int64 v7; // rdx
  void (*v8)(void); // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 air_movement; // rdi
  __m128i v14; // xmm0
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int16 *v18; // r15
  __int64 v19; // rbx
  const char *v20; // rbp
  _BYTE *v21; // r14
  signed __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int16 *v27; // rax
  const char *v28; // rdi
  const char *v29; // rcx
  int v30; // eax
  int st_mtime; // ecx
  _QWORD *v32; // rcx
  __int64 v33; // rcx
  const char *v34; // rcx
  char *v35; // rdx
  __int16 *v36; // rcx
  _QWORD *v37; // rcx
  __int64 v38; // rcx
  unsigned int v39; // ebx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // ebx
  __m128i v45; // xmm0
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  char *v50; // rdi
  __int64 v51; // rdi
  const char *v52; // rbx
  _BYTE *v53; // rbp
  signed __int64 v54; // rdx
  int v55; // r14d
  __int64 v56; // rdx
  __int64 v57; // rdi
  const char *v58; // rbx
  _BYTE *v59; // rbp
  signed __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rdi
  const char *v63; // rbx
  _BYTE *v64; // rbp
  signed __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rdi
  const char *v68; // rax
  _BYTE *v69; // rbx
  signed __int64 v70; // rdx
  int v71; // edx
  int v72; // r8d
  int v73; // r9d
  int v74; // edx
  int v75; // r8d
  int v76; // r9d
  int v77; // edx
  int v78; // r8d
  int v79; // edx
  int v80; // r8d
  int v81; // r9d
  char v82; // [rsp+4Bh] [rbp-30Dh] BYREF
  int v83; // [rsp+4Ch] [rbp-30Ch]
  char *v84; // [rsp+50h] [rbp-308h] BYREF
  __int16 *v85; // [rsp+58h] [rbp-300h]
  __int64 v86; // [rsp+60h] [rbp-2F8h]
  int v87[2]; // [rsp+68h] [rbp-2F0h] BYREF
  __int64 v88; // [rsp+70h] [rbp-2E8h] BYREF
  int v89; // [rsp+7Ch] [rbp-2DCh]
  struct _stat64i32 Buffer; // [rsp+80h] [rbp-2D8h] BYREF
  char *FileName[2]; // [rsp+B0h] [rbp-2A8h] BYREF
  __int64 v92; // [rsp+C8h] [rbp-290h] BYREF
  CHAR *v93; // [rsp+D0h] [rbp-288h]
  __int64 v94; // [rsp+D8h] [rbp-280h]
  __m128i v95; // [rsp+E0h] [rbp-278h] BYREF
  char Str1[8]; // [rsp+100h] [rbp-258h] BYREF
  char *v97; // [rsp+108h] [rbp-250h]
  __int16 *v98; // [rsp+110h] [rbp-248h]
  __int64 v99; // [rsp+118h] [rbp-240h]
  __int64 v100; // [rsp+120h] [rbp-238h]

  if ( strcmp(*a1, "GET") )
    goto LABEL_2;
  if ( !*(game + 0x718)
    || !*(game + 0xDC) && (!byte_4B1C820 || dword_4B1C810 != 5 && dword_4B1C810 != 2)
    || !*(*(game + 0x430) + 0x365i64) )
  {
    if ( *(a1 + 0x4E8) )
    {
      v8 = *(a1 + 0x4F8);
      if ( v8 )
        v8();
    }
    result = "HTTP/1.1 403 Forbidden\r\n\r\n";
    *(a1 + 0x4E8) = "HTTP/1.1 403 Forbidden\r\n\r\n";
    *(a1 + 0x4F0) = 0x1A;
    goto LABEL_18;
  }
  v6 = *(a1 + 0x18);
  v7 = v6 ? strlen(*(a1 + 0x18)) : 0i64;
  if ( !parse_command_data(v6, v7, "cmd", &v95, 0x20i64) )
    goto LABEL_2;
  v12 = LocalUnit;
  if ( !LocalUnit )
    goto LABEL_2;
  if ( *(LocalUnit + 0x10A8) > 1u )
    goto LABEL_2;
  if ( (*(LocalUnit + 0x1058) & 0x7000014) != 0 )
    goto LABEL_2;
  if ( *(LocalUnit + 0x10B0) )
    goto LABEL_2;
  air_movement = *(LocalUnit + 0x9D0);
  if ( !air_movement )
    goto LABEL_2;
  v14 = _mm_xor_si128(_mm_load_si128(&v95), xmmword_44CB140);
  if ( _mm_testz_si128(v14, v14) )
  {
    LODWORD(v88) = 0;
    if ( sub_B0ACA0(a1, Str1) && sub_B09250(a1, &v88) )
    {
      ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
        _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v23, v24, v25);
      v27 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
      v84 = 0i64;
      v85 = v27;
      v86 = 0i64;
      v28 = sub_B092C0(*(v12 + 0x4160), &v84);
      sub_B093A0(FileName, v28);
      v29 = &szFile;
      if ( FileName[1] )
        v29 = FileName[1];
      v30 = stat64i32(v29, &Buffer);
      st_mtime = 0;
      if ( !v30 )
        st_mtime = Buffer.st_mtime;
      if ( v88 == st_mtime && !strcmp(Str1, v28) )
      {
        result = sub_AF1600(a1, "{\"result\": \"OK\"}", 0x10i64);
        if ( FileName[1] )
          result = (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
        v35 = v84;
        if ( v84 )
        {
          v36 = v85;
          return (*(*v36 + 0x40i64))(v36, v35);
        }
        return result;
      }
      if ( FileName[1] )
        (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
      v23 = v84;
      if ( v84 )
        (*(*v85 + 0x40i64))(v85);
    }
    v32 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v32[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(v32, v23, v24, v25);
    v33 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    *&Buffer.st_dev = &off_44CAF30;
    *&Buffer.st_rdev = v33;
    Buffer.st_atime = 0x80000i64;
    Buffer.st_mtime = 0i64;
    *&Buffer.st_nlink = (*(*v33 + 0x18i64))(v33, 0x80000i64);
    **&Buffer.st_nlink = 0;
    sub_B09440(&Buffer, "{\n");
    sub_B09440(&Buffer, "  \"valid\": true,\n");
    sub_B094D0(v12, &Buffer);
    sub_B09440(&Buffer, ",\n");
    v34 = "true";
    if ( !*(*(v12 + 0x2E68) + 0x4EA0i64) )
      v34 = "false";
    v84 = v34;
    sub_B09AE0(&Buffer, "  \"sweepControl\": %s\n", &v84);
    sub_B09440(&Buffer, "}\n");
    sub_AF1600(a1, *&Buffer.st_nlink, Buffer.st_mtime);
    *&Buffer.st_dev = &off_44CAF30;
    v35 = *&Buffer.st_nlink;
    v36 = *&Buffer.st_rdev;
    return (*(*v36 + 0x40i64))(v36, v35);
  }
  if ( v95.m128i_i64[0] ^ 0x6465657053746573i64 | *(v95.m128i_i64 + 6) ^ 0x65676E61526465i64 )
  {
    if ( !(v95.m128i_i64[0] ^ 0x6261546D46746567i64 | v95.m128i_u32[2] ^ 0x73656Ci64) )
    {
      v15 = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(v15[TlsIndex] + 1i64) )
        _dyn_tls_on_demand_init(v15, v9, v10, v11);
      v94 = air_movement;
      v16 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
      *Str1 = &off_44CAF30;
      v98 = v16;
      v99 = 0x40000i64;
      v100 = 0i64;
      v97 = (*(*v16 + 0x18i64))(v16, 0x40000i64);
      *v97 = 0;
      v83 = 0;
      sub_B0A5E0(a1, "alt");
      v89 = 0x3F800000;
      sub_B0A5E0(a1, "throttle");
      v87[1] = 0;
      sub_B0A5E0(a1, "sweep");
      v87[0] = 1;
      sub_B0A980(a1, "speedType", v87);
      v82 = 0;
      sub_B0BDF0(a1, "speedRangeManual", &v82);
      v88 = 0xC47A0000447A0000ui64;
      if ( v82 )
      {
        sub_B0A5E0(a1, "speedMin");
        sub_B0A5E0(a1, "speedMax");
      }
      v92 = 0i64;
      v18 = 0i64;
      v93 = &szFile;
      do
      {
        *&Buffer.st_dev = 0i64;
        *&Buffer.st_rdev = 0i64;
        v85 = v18;
        LODWORD(v84) = 2;
        *&Buffer.st_nlink = off_4B678C8;
        sub_1546EF0(&Buffer, v17, "zhukovskyChartSeries%d", &v84, 1);
        v19 = *&Buffer.st_dev;
        v20 = *&Buffer.st_dev;
        if ( !Buffer.st_rdev )
          v20 = &szFile;
        v21 = *(a1 + 0x18);
        if ( v21 )
          v22 = strlen(*(a1 + 0x18));
        else
          v22 = 0i64;
        if ( parse_command_data(v21, v22, v20, &v84, 8i64) )
          *(&v92 + v18) = (*"true" ^ v84 | (aTrue_0[4] ^ BYTE4(v84))) == 0;
        if ( v19 )
          (*(**&Buffer.st_nlink + 0x40i64))(*&Buffer.st_nlink, v19);
        v18 = (v18 + 1);
      }
      while ( v18 != &word_8 );
      *FileName = 0i64;
      v84 = 0i64;
      v86 = 0i64;
      *&Buffer.st_nlink = 0i64;
      Buffer.st_dev = 2;
      v85 = off_4B678C8;
      sub_1546EF0(&v84, v17, "climbRate%d", &Buffer, 1);
      v51 = v84;
      v52 = v84;
      if ( !v86 )
        v52 = &szFile;
      v53 = *(a1 + 0x18);
      if ( v53 )
        v54 = strlen(*(a1 + 0x18));
      else
        v54 = 0i64;
      v55 = v94;
      if ( parse_command_data(v53, v54, v52, &Buffer, 0x20i64) )
        sub_1EC440(&Buffer, "%f");
      if ( v51 )
        (*(*v85 + 0x40i64))(v85, v51);
      v84 = 0i64;
      v86 = 0i64;
      *&Buffer.st_nlink = 1i64;
      Buffer.st_dev = 2;
      v85 = off_4B678C8;
      sub_1546EF0(&v84, v56, "climbRate%d", &Buffer, 1);
      v57 = v84;
      v58 = v84;
      if ( !v86 )
        v58 = &szFile;
      v59 = *(a1 + 0x18);
      if ( v59 )
        v60 = strlen(*(a1 + 0x18));
      else
        v60 = 0i64;
      if ( parse_command_data(v59, v60, v58, &Buffer, 0x20i64) )
        sub_1EC440(&Buffer, "%f");
      if ( v57 )
        (*(*v85 + 0x40i64))(v85, v57);
      v84 = 0i64;
      v86 = 0i64;
      *&Buffer.st_nlink = 2i64;
      Buffer.st_dev = 2;
      v85 = off_4B678C8;
      sub_1546EF0(&v84, v61, "climbRate%d", &Buffer, 1);
      v62 = v84;
      v63 = v84;
      if ( !v86 )
        v63 = &szFile;
      v64 = *(a1 + 0x18);
      if ( v64 )
        v65 = strlen(*(a1 + 0x18));
      else
        v65 = 0i64;
      if ( parse_command_data(v64, v65, v63, &Buffer, 0x20i64) )
        sub_1EC440(&Buffer, "%f");
      if ( v62 )
        (*(*v85 + 0x40i64))(v85, v62);
      v84 = 0i64;
      v86 = 0i64;
      *&Buffer.st_nlink = 3i64;
      Buffer.st_dev = 2;
      v85 = off_4B678C8;
      sub_1546EF0(&v84, v66, "climbRate%d", &Buffer, 1);
      v67 = v84;
      v68 = v93;
      if ( v86 )
        v68 = v84;
      v93 = v68;
      v69 = *(a1 + 0x18);
      if ( v69 )
        v70 = strlen(*(a1 + 0x18));
      else
        v70 = 0i64;
      if ( parse_command_data(v69, v70, v93, &Buffer, 0x20i64) )
        sub_1EC440(&Buffer, "%f");
      if ( v67 )
        (*(*v85 + 0x40i64))(v85, v67);
      Buffer.st_dev = 0x3F800000;
      sub_B0A5E0(a1, "loadFactor");
      sub_B09440(Str1, "{\n");
      sub_B09440(Str1, "  \"zhukovskyChart\":\n");
      sub_B14620(v55, v71, v72, v73, v87[0], &v88, &v92, FileName, Str1);
      sub_B09440(Str1, ",\n");
      sub_B09440(Str1, "  \"vgDiagram\":\n");
      sub_B159C0(v55, v74, v75, v76, v87[0], &v88, Str1);
      sub_B09440(Str1, ",\n");
      sub_B09440(Str1, "  \"vgDiagramLimits\":\n");
      sub_B16320(v55, v77, v78, v87[0], Str1);
      sub_B09440(Str1, ",\n");
      sub_B09440(Str1, "  \"balanceChart\":\n");
      sub_B169A0(v55, v79, v80, v81, _mm_cvtsi128_si32(_mm_cvtsi32_si128(Buffer.st_dev)), v87[0], &v88, Str1);
      sub_B09440(Str1, &word_4A30321[1]);
      sub_B09440(Str1, "}\n");
      sub_AF1600(a1, v97, v100);
      dg_debug(3u, v97, 0i64, 0);
      *Str1 = &off_44CAF30;
      v35 = v97;
      v36 = v98;
      return (*(*v36 + 0x40i64))(v36, v35);
    }
LABEL_2:
    if ( *(a1 + 0x4E8) )
    {
      v4 = *(a1 + 0x4F8);
      if ( v4 )
        v4();
    }
    result = "HTTP/1.1 400 Bad Request\r\n\r\n";
    *(a1 + 0x4E8) = "HTTP/1.1 400 Bad Request\r\n\r\n";
    *(a1 + 0x4F0) = 0x1C;
LABEL_18:
    *(a1 + 0x4F8) = 0i64;
    return result;
  }
  v37 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(v37[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(v37, v9, v10, v11);
  v38 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  *Str1 = &off_44CAF30;
  v98 = v38;
  v99 = 0x100i64;
  v100 = 0i64;
  v97 = (*(*v38 + 0x18i64))(v38, 0x100i64);
  *v97 = 0;
  LODWORD(v84) = 0;
  sub_B0A5E0(a1, "alt");
  LODWORD(FileName[0]) = 1;
  sub_B0A980(a1, "oldSpeedType", FileName);
  LODWORD(v88) = 1;
  sub_B0A980(a1, "speedType", &v88);
  *&Buffer.st_dev = 0xC47A0000447A0000ui64;
  sub_B0A5E0(a1, "speedMin");
  sub_B0A5E0(a1, "speedMax");
  sub_B09440(Str1, "{\n");
  v39 = v88;
  sub_154D270(v41, v40, LODWORD(FileName[0]));
  LODWORD(v92) = sub_154D350(v43, v42, v39);
  sub_B09B80(Str1, "  \"speedMin\": %f,", a3);
  v44 = v88;
  v45 = _mm_cvtsi32_si128(*&Buffer.st_ino);
  *v45.m128i_i64 = sub_154D270(v47, v46, LODWORD(FileName[0]));
  *v45.m128i_i32 = sub_154D350(v49, v48, v44);
  v83 = _mm_cvtsi128_si32(v45);
  sub_B09B80(Str1, "  \"speedMax\": %f", a3);
  sub_B09440(Str1, "}");
  v50 = v97;
  sub_AF1600(a1, v97, v100);
  return (*(*v98 + 0x40i64))(v98, v50);
}
