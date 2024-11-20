void __fastcall eac::debug_violation(int code, __int64 maybe_data, const CHAR *violation_msg)
{
  int is_set; // edi
  unsigned __int64 localized_text; // rax
  const CHAR *localized_text_; // rax
  int args; // [rsp+20h] [rbp-48h] BYREF
  __int64 code_arg; // [rsp+28h] [rbp-40h]
  int msg_arg; // [rsp+30h] [rbp-38h]
  const CHAR *msg; // [rsp+38h] [rbp-30h]
  int data_arg; // [rsp+40h] [rbp-28h]
  __int64 data; // [rsp+48h] [rbp-20h]

  code_arg = code;
  args = 2;
  msg = violation_msg;
  msg_arg = 1;
  data = maybe_data;
  data_arg = 1;
  logmessage_fmt(3u, "[EAC] Violation %d: message '%s' cause '%s'", &args, 3);
  is_set = watchdog_set_option(0, 0LL, 0LL);
  localized_text = get_localized_text_id("eac/eac_violation", 0LL);
  if ( localized_text )
  {
    if ( localization_table )
    {
      if ( (localized_text & 3) != 0 )
        localized_text_ = (localized_text & 0xFFFFFFFFFFFFFFFCuLL);
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
  on_message_box(violation_msg, localized_text_, 0x1000u);
  watchdog_set_option(0, is_set, 0LL);
  delayed_quit(0, 0LL);
}