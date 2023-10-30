__int64 __fastcall udp_send(__int128 *client_socket_id, _QWORD *ip_address, u_short port, __int64 data)
{
  SOCKET v7; // r13
  __int64 v8; // rdi
  __int64 v10; // rcx
  int v11; // edi
  int v12; // r8d
  _QWORD *v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // edx
  _QWORD *v18; // rcx
  bool v19; // zf
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // r12
  __int64 v25; // rbx
  int v26; // ebp
  int v27; // r8d
  _QWORD *v28; // r15
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rcx
  int v32; // edx
  _QWORD *v33; // rcx
  __int64 v34; // r15
  const char *v35; // r12
  __int64 v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rcx
  int v39; // eax
  int v40; // ecx
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  _QWORD *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rbp
  _QWORD *v49; // rcx
  int v50; // ebx
  int Error; // eax
  int v52; // ecx
  __int64 v53; // rax
  __int64 v54; // rdx
  _QWORD *v55; // rcx
  __int128 v56; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD *v57; // [rsp+40h] [rbp-B8h]
  int len[4]; // [rsp+48h] [rbp-B0h]
  int v59[2]; // [rsp+60h] [rbp-98h] BYREF
  _QWORD *v60; // [rsp+68h] [rbp-90h]
  struct sockaddr to; // [rsp+70h] [rbp-88h] BYREF
  __int128 v62; // [rsp+80h] [rbp-78h] BYREF
  char v63; // [rsp+90h] [rbp-68h] BYREF
  char v64; // [rsp+98h] [rbp-60h] BYREF

  v62 = *client_socket_id;
  v7 = sub_2257CF0(&v62);
  if ( sub_1989E70(1i64, *ip_address, &to, 0x10i64) )
  {
    *(&v56 + 1) = *ip_address;
    LODWORD(v56) = 1;
    dg_debug(2u, "[UDP] bad host address %s", &v56, 1);
LABEL_3:
    LODWORD(v8) = 0;
    goto LABEL_4;
  }
  if ( to.sa_family == 1 || to.sa_family == 0x17 )
  {
    *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x510i64) = 0x2726;
  }
  else if ( to.sa_family == 2 )
  {
    *to.sa_data = htons(port);
  }
  else
  {
    *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x510i64) = 0x66;
  }
  (*(*data + 0x10i64))(data, &v56);
  if ( v56 == 0x18000010 )
  {
    (*(*data + 0x10i64))(data, v59);
    v10 = *(data + 8);
    v11 = v59[0];
    v12 = v59[1];
    v13 = v60;
    if ( (v59[0] & 0x8000000) != 0 )
      ++v60[1];
    v14 = *(v10 + 0x30);
    v15 = *(v10 + 0x50);
    v16 = v15 + 1;
    v15 *= 0x10i64;
    *(v10 + 0x50) = v16;
    v17 = *(v14 + v15);
    v18 = *(v14 + v15 + 8);
    *(v14 + v15) = v11;
    *(v14 + v15 + 4) = v12;
    *(v14 + v15 + 8) = v13;
    if ( (v11 & 0x8000000) != 0 )
      ++v13[1];
    if ( (v17 & 0x8000000) != 0 )
    {
      v19 = v18[1]-- == 1i64;
      if ( v19 )
        (*(*v18 + 8i64))(v18);
    }
    if ( (v11 & 0x8000000) != 0 )
    {
      v19 = v13[1]-- == 1i64;
      if ( v19 )
        (*(*v13 + 8i64))(v13);
    }
    v20 = *(data + 8);
    *len = 0i64;
    sub_176CBD0(v20, 0xFFFFFFFFFFFFFFFFui64);
    v21 = 0x10i64 * v20[0xA] + v20[6] - 0x10;
    v56 = *v21;
    if ( *v21 == 0x18000010 )
    {
      v22 = *(v21 + 8);
      v23 = *(v22 + 0x28);
      v24 = v22 + 0x38;
    }
    else
    {
      v41 = sub_28A4B60(v20, v21);
      ++*(v41 + 8);
      sub_28A49E0(v20, "wrong argument type, expected '%s' got '%.50s'", "string", (v41 + 0x38));
      v23 = 0i64;
      v19 = (*(v41 + 8))-- == 1i64;
      v24 = 0i64;
      if ( v19 )
      {
        (*(*v41 + 8i64))(v41);
        v23 = 0i64;
        v24 = 0i64;
      }
    }
    if ( (BYTE3(v56) & 8) != 0 )
    {
      v42 = sub_28B5100(v20[0x28] + 0x38, &v56, &v64, &v63, 1);
      ++*(v42 + 0x10);
    }
    v43 = v20[6];
    v44 = v20[0xA] - 1i64;
    v20[0xA] = v44;
    v44 *= 0x10i64;
    v45 = *(v43 + v44 + 8);
    v19 = (*(v43 + v44) & 0x8000000) == 0;
    *(v43 + v44) = 0i64;
    *(v43 + v44) = 0x1000001;
    if ( !v19 )
    {
      v19 = v45[1]-- == 1i64;
      if ( v19 )
        (*(*v45 + 8i64))(v45);
    }
    v57 = v20;
    *len = v24;
    *&len[2] = v23;
    v46 = *(data + 8);
    v47 = *(v46 + 0x30);
    v48 = *(v46 + 0x50) - 1i64;
    *(v46 + 0x50) = v48;
    v48 *= 0x10i64;
    v49 = *(v47 + v48 + 8);
    v19 = (*(v47 + v48) & 0x8000000) == 0;
    *(v47 + v48) = 0i64;
    *(v47 + v48) = 0x1000001;
    if ( !v19 )
    {
      v19 = v49[1]-- == 1i64;
      if ( v19 )
        (*(*v49 + 8i64))(v49);
    }
    v8 = *&len[2];
    v50 = sendto(v7, *len, len[2], 0, &to, 0x10);
    if ( v50 < 0 )
    {
      Error = WSAGetLastError();
      v52 = 0xB;
      if ( Error != 0x2733 )
        v52 = Error;
      *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x510i64) = v52;
    }
    LOBYTE(v8) = v8 == v50;
    if ( v57 && v56 != 0x1000001 && (v56 & 0x8000000) != 0 )
      sub_28B55C0((v57[0x28] + 0x38i64), &v56);
  }
  else
  {
    (*(*data + 0x10i64))(data, &v56);
    if ( v56 != 0x1A008000 )
      goto LABEL_3;
    v25 = *(data + 8);
    v26 = *(data + 0x10);
    v27 = *(data + 0x14);
    v28 = *(data + 0x18);
    if ( (v26 & 0x8000000) != 0 )
      ++v28[1];
    v29 = *(v25 + 0x30);
    v30 = *(v25 + 0x50);
    v31 = v30 + 1;
    v30 *= 0x10i64;
    *(v25 + 0x50) = v31;
    v32 = *(v29 + v30);
    v33 = *(v29 + v30 + 8);
    *(v29 + v30) = v26;
    *(v29 + v30 + 4) = v27;
    *(v29 + v30 + 8) = v28;
    if ( (v26 & 0x8000000) != 0 )
      ++v28[1];
    if ( (v32 & 0x8000000) != 0 )
    {
      v19 = v33[1]-- == 1i64;
      if ( v19 )
        (*(*v33 + 8i64))(v33);
    }
    if ( (v26 & 0x8000000) != 0 )
    {
      v19 = v28[1]-- == 1i64;
      if ( v19 )
        (*(*v28 + 8i64))(v28);
    }
    v34 = 0xFFFFFFFFFFFFFFFFui64;
    if ( sub_176D620(v25, 0xFFFFFFFFFFFFFFFFui64, &v56, 0x80000002i64) < 0 )
    {
      v53 = *(v25 + 0x30);
      v54 = *(v25 + 0x50) - 1i64;
      *(v25 + 0x50) = v54;
      v54 *= 0x10i64;
      v55 = *(v53 + v54 + 8);
      v19 = (*(v53 + v54) & 0x8000000) == 0;
      *(v53 + v54) = 0i64;
      *(v53 + v54) = 0x1000001;
      if ( !v19 )
      {
        v19 = v55[1]-- == 1i64;
        if ( v19 )
          (*(*v55 + 8i64))(v55);
      }
      goto LABEL_3;
    }
    v35 = *(v56 + 0x28);
    if ( sub_176D620(v25, 0xFFFFFFFFFFFFFFFFui64, &v56, 0x80000002i64) >= 0 )
      v34 = (*(*v56 + 0x28i64))(v56);
    v36 = *(v25 + 0x30);
    v37 = *(v25 + 0x50) - 1i64;
    *(v25 + 0x50) = v37;
    v37 *= 0x10i64;
    v38 = *(v36 + v37 + 8);
    v19 = (*(v36 + v37) & 0x8000000) == 0;
    *(v36 + v37) = 0i64;
    *(v36 + v37) = 0x1000001;
    if ( !v19 )
    {
      v19 = v38[1]-- == 1i64;
      if ( v19 )
        (*(*v38 + 8i64))(v38);
    }
    LODWORD(v8) = sendto(v7, v35, v34, 0, &to, 0x10);
    if ( v8 < 0 )
    {
      v39 = WSAGetLastError();
      v40 = 0xB;
      if ( v39 != 0x2733 )
        v40 = v39;
      *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x510i64) = v40;
    }
    LOBYTE(v8) = v34 == v8;
  }
LABEL_4:
  *data = &off_44A93B0;
  if ( (*(data + 0x13) & 8) != 0 )
    sub_28B55C0((*(*(data + 8) + 0x140i64) + 0x38i64), data + 0x10);
  *(data + 0x18) = 0i64;
  *(data + 0x10) = 0x1000001;
  *(data + 0x14) = 0;
  return v8;
}
