int __fastcall udp_bind(__int128 *client_socket_id, _QWORD *ip_address, u_short port)
{
  __int64 v5; // rax
  SOCKET v6; // rsi
  char *v7; // rdx
  CHAR *v8; // r8
  int v9; // eax
  int v10; // ecx
  int Error; // eax
  DWORD v12; // esi
  CHAR Buffer[16]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v15; // [rsp+50h] [rbp-58h]
  struct sockaddr name; // [rsp+60h] [rbp-48h] BYREF
  int v17; // [rsp+70h] [rbp-38h] BYREF
  CHAR *v18; // [rsp+78h] [rbp-30h]
  __int128 v19; // [rsp+80h] [rbp-28h] BYREF

  v19 = *client_socket_id;
  v5 = sub_2257CF0(&v19);
  if ( v5 == 0xFFFFFFFFFFFFFFFFui64 )
    return 0;
  v6 = v5;
  if ( sub_1989E70(1i64, *ip_address, &name, 0x10i64) )
  {
    *&Buffer[8] = *ip_address;
    *Buffer = 1;
    v7 = "[UDP] failed to bind socket: bad host address %s";
    v8 = Buffer;
LABEL_21:
    dg_debug(2u, v7, v8, 1);
    return 0;
  }
  if ( name.sa_family == 1 || name.sa_family == 0x17 )
  {
    *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x510i64) = 0x2726;
  }
  else if ( name.sa_family == 2 )
  {
    *name.sa_data = htons(port);
  }
  else
  {
    *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x510i64) = 0x66;
  }
  v9 = bind(v6, &name, 0x10);
  if ( v9 < 0 )
  {
    Error = WSAGetLastError();
    v10 = 0xB;
    if ( Error != 0x2733 )
      v10 = Error;
    *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x510i64) = v10;
    goto LABEL_16;
  }
  if ( v9 )
  {
    v10 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x510i64);
LABEL_16:
    v15 = 0i64;
    *Buffer = 0i64;
    v12 = 0x2733;
    if ( v10 != 0xB )
      v12 = v10;
    if ( !FormatMessageA(0x1000u, 0i64, v12, 0x409u, Buffer, 0x20u, 0i64) )
    {
      sub_17A810(Buffer, 0x20, "Unknown error %d");
      HIBYTE(v15) = 0;
    }
    v18 = Buffer;
    v17 = 1;
    v7 = "[UDP] failed to bind socket: %s";
    v8 = &v17;
    goto LABEL_21;
  }
  return 1;
}
