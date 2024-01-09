void __fastcall debug_eac_violation(int a1, __int64 a2, __int64 a3)
{
  int is_set; // edi
  unsigned __int64 localized_text; // rax
  CHAR *localized_text_; // rax
  int v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+28h] [rbp-40h]
  int v9; // [rsp+30h] [rbp-38h]
  __int64 v10; // [rsp+38h] [rbp-30h]
  int v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+48h] [rbp-20h]

  v8 = a1;
  v7 = 2;
  v10 = a3;
  v9 = 1;
  v12 = a2;
  v11 = 1;
  logmessage_fmt(3u, "[EAC] Violation %d: message '%s' cause '%s'", &v7, 3);
  is_set = watchdog_set_option(0i64, 0i64, 0i64);
  localized_text = get_localized_text_id("eac/eac_violation", 0i64);
  if ( localized_text )
  {
    if ( qword_4B77188 )
    {
      if ( (localized_text & 3) != 0 )
        localized_text_ = (localized_text & 0xFFFFFFFFFFFFFFFCui64);
      else
        localized_text_ = *localized_text;
    }
    else
    {
      localized_text_ = &szFile;
    }
  }
  else
  {
    localized_text_ = get_localized_text("eac/eac_violation");
  }
  on_message_box(a3, localized_text_, 0x1000i64);
  watchdog_set_option(0i64, is_set, 0i64);
  delayed_quit(0, 0i64);
}
