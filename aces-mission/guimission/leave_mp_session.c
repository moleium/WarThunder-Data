__int64 __fastcall leave_mp_session(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  result = g_net;
  if ( g_net && !*(g_net + 0x60) )
  {
    /*
    v7 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    v19 = result;
    v20 = v7;
    v21 = 0xB0B4;
    v23 = 0i64;
    v24 = 0i64;
    v25 = v7;
    v26 = 0i64;
    v27 = 0i64;
    v28 = 0i64;
    v29 = 0i64;
    v30 = 0i64;
    v31 = 0i64;
    v32 = 0i64;
    v33 = 0i64;
    v34 = 0;
    v8 = 0xFF;
    if ( result )
    {
      v8 = 0x7D;
      if ( !*(result + 0x60) )
      {
        v8 = 0xFF;
        if ( LocalPlayer )
          v8 = *(LocalPlayer + 8);
      }
    }
    v22 = v8;
    v18 = &off_44B5180;
    */
    // All of the above is just:
    // BaseNetMessage::BaseNetMessage(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
 
    send_dll_stat(&v18);
    v18 = &off_44A0560;
    if ( v23 < 0 )
      (*(*v25 + 0x40i64))(v25, v24);
    _g_net = g_net;
    if ( dword_4B1C810 == 3 )
      *(g_net + 0x65) = 1;
    v13 = NtCurrentTeb()->ThreadLocalStoragePointer;
    _g_net_ = _g_net;
    
    /*
    v15 = NtCurrentTeb()->ThreadLocalStoragePointer;
    v16 = *(v15[TlsIndex] + 0x160i64);
    v19 = _g_net;
    v20 = v16;
    v21 = 0xF010;
    v23 = 0i64;
    v24 = 0i64;
    v25 = v16;
    v26 = 0i64;
    v27 = 0i64;
    v28 = 0i64;
    v29 = 0i64;
    v30 = 0i64;
    v31 = 0i64;
    v32 = 0i64;
    v33 = 0i64;
    v34 = 0;
    v17 = 0xFF;
    if ( _g_net_ )
    {
      v17 = 0x7D;
      if ( !*(_g_net_ + 0x60) )
      {
        v17 = 0xFF;
        if ( LocalPlayer )
          v17 = *(LocalPlayer + 8);
      }
    }
    v22 = v17;
    v18 = &off_44B5180;
    LOBYTE(v15) = 0xFF;
    */
    result = mpi::send_to(&v18, v15);
    v18 = &off_44A0560;
    if ( v23 < 0 )
      return (*(*v25 + 0x40i64))(v25, v24);
  }
  return result;
}