__int64 __fastcall set_gyro_sight_deflection(char a1)
{
  __int64 result; // rax

  result = *(game + 0x430);
  *(result + 0x311) = a1;
  return result;
}
