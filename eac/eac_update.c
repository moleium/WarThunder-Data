__int64 eac::update()
{
  void (__fastcall *update_eac_client_)(int, WPARAM, LPARAM); // rsi
  __int64 result; // rax
  LRESULT (__fastcall *manager_invoker_1)(int, WPARAM, LPARAM); // rbx
  unsigned int v3; // [rsp+24h] [rbp-64h] BYREF
  __int64 v4; // [rsp+28h] [rbp-60h] BYREF
  int code[4]; // [rsp+30h] [rbp-58h] BYREF
  LRESULT (__fastcall *update_eac_client)(int, WPARAM, LPARAM); // [rsp+40h] [rbp-48h]
  __int64 (__fastcall *v7)(void *, size_t, __int64, __int64); // [rsp+48h] [rbp-40h]
  int unk_var[4]; // [rsp+50h] [rbp-38h] BYREF
  LRESULT (__fastcall *manager_invoker_2)(int, WPARAM, LPARAM); // [rsp+60h] [rbp-28h]
  void (__fastcall *debug_eac_violation_)(int, __int64, __int64); // [rsp+68h] [rbp-20h]

  update_eac_client_ = fn;
  update_eac_client = fn;
  v7 = sub_745860;
  if ( !eac::is_inited || !(*(**(&eac_module + 1) + 0x18i64))(*(&eac_module + 1), &v4, &v3) )
    goto LABEL_5;
  do
    (v7)(v4, v3, code);
  while ( (*(**(&eac_module + 1) + 0x18i64))(*(&eac_module + 1), &v4, &v3) );
  update_eac_client_ = update_eac_client;
  if ( update_eac_client )
LABEL_5:
    update_eac_client_(code, 0i64, 0i64);

  // isInGame
  // return *(game + 0xCA) && *(game + 0xCB) && *(animated_loading_job + 0x1E) == 0;
  result = game;
  if ( *(game + 0xCA) )
  {
    result = *(game + 0xCB);
    if ( (result & 1) != 0 )
    {
      result = animated_loading_job;
      if ( !*(animated_loading_job + 0x1E) )
      {
        manager_invoker_1 = fn;
        manager_invoker_2 = fn;
        debug_eac_violation_ = debug_eac_violation;
        if ( !eac::is_inited )
          return manager_invoker_1(unk_var, 0i64, 0i64);

        // check_integrity_check_violation?
        result = (*(**(&eac_module + 1) + 0x28i64))(*(&eac_module + 1), sub_1F49EC0, 0i64, unk_var);
        manager_invoker_1 = manager_invoker_2;
        if ( manager_invoker_2 )
          return manager_invoker_1(unk_var, 0i64, 0i64);
      }
    }
  }
  return result;
}
