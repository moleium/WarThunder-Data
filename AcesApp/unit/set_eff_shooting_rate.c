__int64 __fastcall set_eff_shooting_rate(float rate)
{
  __int64 result; // rax

  result = *(game + 0x1F8);
  *(result + 0x3AC) = rate;
  return result;
}
