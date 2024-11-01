void __fastcall send_dll_stat(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  if ( gather_sparse_freq )
  {
    if ( gather_sparse_freq <= 0
      || (g_rnd_seed = 0x41C64E6D * g_rnd_seed + 0x3039, a2 = (HIWORD(g_rnd_seed) & 0x7FFFui64) % gather_sparse_freq,
                                                         !a2) )
    {
      if ( xmmword_4B122A8 )
      {
        if ( !initial_sent )
        {
          ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
          if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
            _dyn_tls_on_demand_init(ThreadLocalStoragePointer, a2, a3, a4);

          /*
          v6 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
          v24 = g_net;
          v25[0] = v6;
          LOWORD(v25[1]) = 0xB0BA;
          BYTE2(v25[1]) = 0xFF;
          *v26 = 0i64;
          Block[0] = 0i64;
          Block[1] = v6;
          v28 = 0i64;
          v29 = 0i64;
          v30 = 0i64;
          v31 = 0i64;
          v32 = 0i64;
          v33 = 0i64;
          v34 = 0i64;
          v35 = 0i64;
          v36 = 0;
          v7 = 0xFF;
          if ( g_net )
          {
            v7 = 0x7D;
            if ( !*(g_net + 0x60) )
            {
              v7 = 0xFF;
              if ( LocalPlayer )
                v7 = *(LocalPlayer + 8);
            }
          }
          BYTE2(v25[1]) = v7;
          v23 = &off_44B5180;
          */
          // All of the above is just:
          // BaseNetMessage::BaseNetMessage(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
 
          send_dll_stat(&initial_dll_names, v26, &v23, 0i64);
          v23 = &off_44A0560;
          if ( SLODWORD(v26[0]) < 0 )
            (*(*Block[1] + 0x40i64))(Block[1], Block[0]);
          initial_sent = 1;
        }
        v23 = 0i64;
        v24 = &v23;
        *v25 = 0i64;
        *v26 = 0i64;
        *Block = 0i64;
        *&v28 = 0i64;
        DWORD2(v28) = 0xD0808;
        if ( populate_loaded_modules(&v23, &initial_dll_names) )
        {
          off_4A796D0(&PerformanceCount);
          v22 = PerformanceCount;
          LOBYTE(v8) = 1;
          send_dll_stat(&v23, a1 + 0x20, a1, v8);
          v9 = v22;
          off_4A796D0(&PerformanceCount);
          v10 = PerformanceCount.QuadPart - v9.QuadPart;
          if ( PerformanceCount.QuadPart - v9.QuadPart > 0x65DD0836FFFi64 )
          {
            LODWORD(v10) = (v10 / *&qword_4A796D8);
          }
          else
          {
            v10 *= 0xF4240i64;
            if ( (Frequency.QuadPart | v10) >> 0x20 )
              v10 /= Frequency.QuadPart;
            else
              LODWORD(v10) = v10 / Frequency.LowPart;
          }
          PerformanceCount.QuadPart = v10;
          
          // This section is used to send the DLL statistics to the server. 
          if ( send_is_filled == 1
            && PerformanceCount.QuadPart >= 0x186A1
            && PerformanceCount.QuadPart > 3 * send_time / 5 )
          {
            dgs_lag_handler("SendMpStat");
          }
          v11 = send_time + PerformanceCount.QuadPart;
          send_time += PerformanceCount.QuadPart;
          if ( send_is_filled == 1 )
            send_time = v11 - stru_4B12240[send_time_no].QuadPart;
          v12 = send_time_no++;
          stru_4B12240[v12] = PerformanceCount;
          if ( v12 >= 4 )
          {
            send_time_no = 0;
            send_is_filled = 1;
          }
        }
        v13 = Block[1];
        if ( Block[1] )
        {
          if ( !v28 )
            goto LABEL_36;
          v14 = 0x10i64 * v28;
          v15 = 0i64;
          do
          {
            v16 = *&v13[v15];
            if ( v16 )
            {
              *&v13[v15] = 0i64;
              _InterlockedAdd(&dword_4B6788C, -((j__msize(v16) + 0xF) >> 4));
              _InterlockedDecrement(&dword_4B67890);
              free(v16);
            }
            v15 += 0x10i64;
          }
          while ( v14 != v15 );
          v13 = Block[1];
          if ( Block[1] )
          {
LABEL_36:
            _InterlockedAdd(&dword_4B6788C, -((j__msize(v13) + 0xF) >> 4));
            _InterlockedDecrement(&dword_4B67890);
            free(v13);
          }
        }
        v17 = v26[1];
        if ( v26[1] )
        {
          v26[1] = 0i64;
          _InterlockedAdd(&dword_4B6788C, -((j__msize(v17) + 0xF) >> 4));
          _InterlockedDecrement(&dword_4B67890);
          free(v17);
        }
        v18 = v25[1];
        if ( v25[1] )
        {
          _InterlockedAdd(&dword_4B6788C, -((j__msize(v25[1]) + 0xF) >> 4));
          _InterlockedDecrement(&dword_4B67890);
          free(v18);
        }
        v19 = v24;
        if ( v24 != &v23 && v24 )
        {
          _InterlockedAdd(&dword_4B6788C, -((j__msize(v24) + 0xF) >> 4));
          _InterlockedDecrement(&dword_4B67890);
          free(v19);
        }
        v20 = v25[0];
        if ( v25[0] )
        {
          _InterlockedAdd(&dword_4B6788C, -((j__msize(v25[0]) + 0xF) >> 4));
          _InterlockedDecrement(&dword_4B67890);
          free(v20);
        }
      }
    }
  }
}