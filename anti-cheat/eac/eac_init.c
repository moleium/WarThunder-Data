__int64 eac::init()
{
  v0 = 0;
  if ( eac::is_inited )
    return v0;
  *&eac_module = 0LL;
  eac::is_inited = 1;
  sub_29D8100(&eac_path);
  append_string(&eac_path, "easyanticheat_x64.dll", 0x15u);
  if ( v15 )
    dll_path = eac_path;
  else
    dll_path = &szFile;
  eac_module_ = LoadLibrary_unk(dll_path);
  eac_module = eac_module;
  if ( eac_module != eac_module_ )
  {
    eac_module = eac_module_;
    if ( eac_module )
    {
      FreeLibrary(eac_module);
      eac_module_ = eac_module;
    }
  }
  if ( !eac_module_ )
  {
    if ( v15 )
      eac_path_ = eac_path;
    else
      eac_path_ = &szFile;
    eac_path_2 = eac_path_;
    v16 = 1;
    logmessage_fmt(1u, "failed to load %s", &v16, 1);
    v0 = 2;
    if ( !eac::is_inited )
      goto LABEL_33;
LABEL_28:
    eac_module_p = *(&eac_module + 1);
    if ( *(&eac_module + 1) )
    {
      *(&eac_module + 1) = 0LL;
      (*(*eac_module_p + 8LL))(eac_module_p);
    }
    goto LABEL_30;
  }
  CreateGameClient = GetProcAddress(eac_module_, "CreateGameClient");
  if ( !CreateGameClient )
  {
    eac_path_2 = "CreateGameClient";
    v16 = 1;
    if ( v15 )
      eac_path_3 = eac_path;
    else
      eac_path_3 = &szFile;
    eac_path_4 = eac_path_3;
    v18 = 1;
    logmessage_fmt(1u, "failed to get export '%s' from %s", &v16, 2);
    v0 = 3;
    if ( !eac::is_inited )
      goto LABEL_33;
    goto LABEL_28;
  }
  GameClientInterfaceV012 = (CreateGameClient)("GameClientInterfaceV012");
  eac_module = *(&eac_module + 1);
  if ( *(&eac_module + 1) != GameClientInterfaceV012 )
  {
    *(&eac_module + 1) = GameClientInterfaceV012;
    if ( eac_module )
    {
      (*(*eac_module + 8LL))(eac_module);
      GameClientInterfaceV012 = *(&eac_module + 1);
    }
  }
  if ( GameClientInterfaceV012 )
  {
    v0 = 0;
    (*(*GameClientInterfaceV012 + 0x50LL))(GameClientInterfaceV012, 0LL, 0LL);
    eac_module = &eac_module;
    if ( !eac::is_inited )
      eac_module = 0LL;
    (***(&eac_module + 1))(*(&eac_module + 1), fn, nullsub_3, eac_module);
    goto LABEL_33;
  }
  v0 = 4;
  if ( eac::is_inited )
  {
LABEL_30:
    eac_module = eac_module;
    if ( eac_module )
    {
      eac_module = 0LL;
      FreeLibrary(eac_module);
    }
    eac::is_inited = 0;
  }
LABEL_33:
  if ( eac_path )
    (*(*v14 + 0x40LL))(v14);
  return v0;
}