__int64 __fastcall set_seen_nuclear(char value)
{
  __int64 result; // rax

  result = *(game + 0x430);
  *(result + 0xEB84) = value;
  return result;
}
