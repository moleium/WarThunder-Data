void __fastcall vac::on_server_to_client_msg(__int64 message)
{
  _UNKNOWN **messageClass; // rax
  __int64 isPlayingReply; // rcx
  __int64 vac_message; // rcx
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-28h] BYREF
  const char *v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  messageClass = (*(*message + 8LL))(message);
  isPlayingReply = *(game + 0x450);
  if ( !isPlayingReply || !*(isPlayingReply + 0x5CA) )
  {
    vac_message = 0LL;
    if ( messageClass == &vac::server_msgclass )
      vac_message = message;
    v5 = *(vac_message + 0x20);
    if ( vac::receive_message )
    {
      vac::receive_message(*(vac_message + 0x10), v5);
    }
    else if ( !byte_4B9DF78 )
    {
      v7 = "receive_vac_message";
      v6 = 1;
      v9 = v5;
      v8 = 2;
      logmessage_fmt(1u, "%s receive message of %d bytes before load called?", &v6, 2);
      byte_4B9DF78 = 1;
    }
  }
}