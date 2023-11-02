__int64 do_start_flight()
{
  __int64 result; // rax

  sub_B1E0F0(qword_4B198C0);
  result = game;
  *(game + 0xF5) = 1;
  return result;
}
