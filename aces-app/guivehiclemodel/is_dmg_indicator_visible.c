bool is_dmg_indicator_visible()
{
  __int64 v0; // rax
  __int64 v1; // rax

  return game && (v0 = *(game + 0x630)) != 0 && (v1 = *(v0 + 0x3B3B0)) != 0 && *(*(v1 + 8) + 0x450i64) != 0;
}
