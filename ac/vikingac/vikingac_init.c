__int64 __fastcall vikingac::init(__int64 a1, const char *vikinac_path_)
{
  vikinac_path = "Client_64.dll";
  if ( vikinac_path_ )
    vikinac_path = vikinac_path_;
  vikingac_module_ = LoadLibrary_unk(v3);
  vikingac_module = vikingac_module_;
  if ( vikingac_module_ )
  {
    ProcAddress = GetProcAddress(vikingac_module_, "Load");
    vac_load_address = ProcAddress;
    unload_func_address = GetProcAddress(vikingac_module, "Unload");
    vac_unload_address = unload_func_address;
    if ( !ProcAddress || (v7 = 0, !unload_func_address) )
    {
      LastError = GetLastError();
      FormatMessageA(0x12FFu, 0i64, LastError, 0x409u, byte_4C66160, 0x400u, 0i64);
      if ( v15 )
        v9 = v13;
      else
        v9 = &szFile;
      v17 = v9;
      v16 = 1;
      v19 = byte_4C66160;
      v18 = 1;
      logmessage_fmt(1u, "[AC] Failed to load symbols from dll '%s' with '%s'", &v16, 2);
      if ( vikingac_module )
        FreeLibrary(vikingac_module);
      vikingac_module = 0i64;
      vac_load_address = 0i64;
      vac_unload_address = 0i64;
      v7 = 3;
    }
  }
  else
  {
    lastError = GetLastError();
    FormatMessageA(0x12FFu, 0i64, lastError, 0x409u, byte_4C66160, 0x400u, 0i64);
    if ( v15 )
      v11 = v13;
    else
      v11 = &szFile;
    v17 = v11;
    v16 = 1;
    v19 = byte_4C66160;
    v18 = 1;
    v7 = 2;
    logmessage_fmt(1u, "[AC] Failed to load dll '%s' with '%s'", &v16, 2);
  }
  if ( v13 )
    (*(*v14 + 0x40i64))(v14);
  return v7;
}
