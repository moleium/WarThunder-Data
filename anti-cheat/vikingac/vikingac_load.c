void vikingac::load()
{
  char *message; // rdx
  __int128 dagmem_alloc_; // [rsp+20h] [rbp-28h] BYREF
  void (__fastcall *vac_on_debug_state_callback_)(int, __int64, __int64, __int64); // [rsp+30h] [rbp-18h]
  __int64 v3[2]; // [rsp+38h] [rbp-10h] BYREF

  if ( DWORD2(vac_unk_var) )
  {
    if ( vikingac_module )
    {
      *&dagmem_alloc_ = dagmem_alloc;
      *(&dagmem_alloc_ + 1) = 0i64;
      vac_on_debug_state_callback_ = vac_on_debug_state_callback;
      load_successful = vac_load_address(vac::vac_session_id, &dagmem_alloc_);
      if ( load_successful )
      {
        vac_dagmem = *(&dagmem_alloc_ + 1);
LABEL_11:
        DWORD2(vac_unk_var) = 0;
        return;
      }
      message = "[AC] Client load call unsuccessful";
    }
    else
    {
      message = "[AC] Can't load client, no DLL.";
    }
    logmessage_fmt(2u, message, 0i64, 0);
    if ( byte_4B841C8 == 1 )
    {
      dagmem_alloc_ = 0i64;
      v3[0] = &dagmem_alloc_;
      v3[1] = 1i64;
      statsd::counter("ac.load_fail", v3);
    }
    else
    {
      statsd::counter_x("ac.load_fail", 1i64);
    }
    logmessage_fmt(1u, "[AC] Failed to load, when server demands it", 0i64, 0);
    goto LABEL_11;
  }
}