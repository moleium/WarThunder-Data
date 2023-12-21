__int64 quit_to_debriefing()
{
  __int64 result; // rax
  int v1; // [rsp+20h] [rbp-18h] BYREF
  const char *v2; // [rsp+28h] [rbp-10h]

  v2 = "quit_to_debriefing";
  v1 = 1;
  logmessage_fmt(3u, "%s", &v1, 1);
  result = game;
  if ( !*(game + 0x2C5) )
  {
    *(game + 0x2C0) = 0x3F800000;
    *(result + 0x2C4) = 1;
  }
  return result;
}
