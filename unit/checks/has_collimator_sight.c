bool has_collimator_sight()
{
  __int64 v1; // rax

  return LocalUnit && !*(LocalUnit + 0x10B0) && (v1 = *(LocalUnit + 0x2DD8)) != 0 && *(v1 + 0x3A08) != 0;
}
