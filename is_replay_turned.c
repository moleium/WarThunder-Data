bool is_replay_turned()
{
  return *(game + 0x450) != 0i64;
}
