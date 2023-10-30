__int64 get_engine_control_bitmask()
{
  __int64 result; // rax

  result = 0i64;
  if ( LocalUnit && !*(LocalUnit + 0x10B0) && (*(LocalUnit + 0x1058) & 0x7000014) == 0 )
    return *(*(LocalUnit + 0x9D0) + 0x24C2i64);
  return result;
}
