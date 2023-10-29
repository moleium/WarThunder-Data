int __stdcall __noreturn WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
  HMODULE user32_lib; // rax
  HMODULE dpi_lib; // rbx
  FARPROC SetThreadDpiAwarenessContextProc; // rax
  HMODULE dpi_aware_lib; // rax
  HMODULE dpi_aware_lib_; // rbx
  void (*SetProcessDPIAwareProc)(void); // rax
  FILE *stdout_file; // rax
  FILE *stderr_file; // rax
  __int64 dgsInitArgvResult; // rbx
  CHAR *NameId; // rdi
  CHAR *debugmode; // rbx
  int v17; // [rsp+24h] [rbp-24h] BYREF
  int v18; // [rsp+28h] [rbp-20h] BYREF
  int v19[7]; // [rsp+2Ch] [rbp-1Ch] BYREF

  user32_lib = LoadLibraryA("user32.dll");
  if ( user32_lib )
  {
    dpi_lib = user32_lib;
    SetThreadDpiAwarenessContextProc = GetProcAddress(user32_lib, "SetThreadDpiAwarenessContext");
    if ( SetThreadDpiAwarenessContextProc )
      (SetThreadDpiAwarenessContextProc)(-3i64);
    FreeLibrary(dpi_lib);
  }
  dpi_aware_lib = LoadLibraryA("User32.dll");
  if ( dpi_aware_lib )
  {
    dpi_aware_lib_ = dpi_aware_lib;
    SetProcessDPIAwareProc = GetProcAddress(dpi_aware_lib, "SetProcessDPIAware");
    if ( SetProcessDPIAwareProc )
      SetProcessDPIAwareProc();
    FreeLibrary(dpi_aware_lib_);
  }
  recover_systemroot_env();
  stdout_file = _acrt_iob_func(1u);
  setvbuf(stdout_file, 0i64, 4, 0i64);
  stderr_file = _acrt_iob_func(2u);
  setvbuf(stderr_file, 0i64, 4, 0i64);
  dgsInitArgvResult = *dgs_init_argv();
  dword_4B67994 = *sub_4410430();
  qword_4B67998 = dgsInitArgvResult;
  dgs_report_fatal_error = messagebox_win_report_fatal_error;
  ::hInstance = hInstance;
  v17 = 1;
  dgs_execute_quiet = dgs_get_argv("quiet", &v17, 0i64) != 0i64;
  v18 = 1;
  NameId = dgs_get_argv("noeh", &v18, 0i64);
  v19[0] = 1;
  debugmode = dgs_get_argv("debug", v19, 0i64);
  symhlp_init_default();
  signal(22, Function);
  if ( !(NameId | debugmode) )
    DagorHwException::setHandler("main");
  dagor_program_exec(nShowCmd);
}
