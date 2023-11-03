__int64 get_game_params()
{
  if ( game )
    return *(game + 0x498);
  else
    return 0i64;
}
