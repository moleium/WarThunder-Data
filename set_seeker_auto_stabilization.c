__int64 __fastcall set_seeker_auto_stabilization(char flag)
{
  __int64 result; // rax

  result = *(game + 0x430);
  *(result + 0x342) = flag;
  return result;
}
