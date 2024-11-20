__int64 __fastcall vac::init(__int64 path_prefix, const char *override_dll_name)
{
  const char *dll_name;
  const CHAR *final_path;
  HMODULE vikingac_module_;
  FARPROC vac_load_address_;
  __int64 (*unload_func_address)(void);
  unsigned int result;
  DWORD error_code;
  CHAR *dll_path;
  DWORD error_code_;
  CHAR *dll_path_;
  CHAR *combined_path;
  __int64 allocator;
  int path_valid;
  int log_param_1;
  CHAR *log_path;
  int log_param_2;
  CHAR *error_message;

  /*
  result is enum class InitResult
  enum class InitResult {
    Success = 0,
    DllLoadError = 2,
    ExportError = 3
  };
  */

  dll_name = "Client_64.dll";
  if ( override_dll_name )
    dll_name = override_dll_name;
  concatenate_strings(path_prefix, &combined_path, dll_name);
  if ( path_valid )
    final_path = combined_path;
  else
    final_path = &szFile;
  vikingac_module_ = LoadLibrary_unk(final_path);
  vikingac_module = vikingac_module_;
  if ( vikingac_module_ )
  {
    vac_load_address_ = GetProcAddress(vikingac_module_, "Load");
    vac_load_address = vac_load_address_;
    unload_func_address = GetProcAddress(vikingac_module, "Unload");
    vac_unload_address = unload_func_address;
    if ( !vac_load_address_ || (result = 0, !unload_func_address) )
    {
      error_code = GetLastError();
      FormatMessageA(0x12FFu, 0i64, error_code, 0x409u, lib_load_err, 0x400u, 0i64);
      if ( path_valid )
        dll_path = combined_path;
      else
        dll_path = &szFile;
      log_path = dll_path;
      log_param_1 = 1;
      error_message = lib_load_err;
      log_param_2 = 1;
      logmessage_fmt(1u, "[AC] Failed to load symbols from dll '%s' with '%s'", &log_param_1, 2);
      if ( vikingac_module )
        FreeLibrary(vikingac_module);
      vikingac_module = 0i64;
      vac_load_address = 0i64;
      vac_unload_address = 0i64;
      result = 3;
    }
  }
  else
  {
    error_code_ = GetLastError();
    FormatMessageA(0x12FFu, 0i64, error_code_, 0x409u, lib_load_err, 0x400u, 0i64);
    if ( path_valid )
      dll_path_ = combined_path;
    else
      dll_path_ = &szFile;
    log_path = dll_path_;
    log_param_1 = 1;
    error_message = lib_load_err;
    log_param_2 = 1;
    result = 2;
    logmessage_fmt(1u, "[AC] Failed to load dll '%s' with '%s'", &log_param_1, 2);
  }
  if ( combined_path )
    (*(*allocator + 0x40i64))(allocator);
  return result;
}