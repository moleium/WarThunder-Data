__int64 restart_mission()
{
  __int64 result; // rax

  sub_59B710(game);
  result = game;
  *(game + 0xF6) = 1;
  return result;
}
