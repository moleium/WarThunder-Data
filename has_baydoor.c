bool has_baydoor()
{
  bool result; // al

  result = 0;
  if ( LocalUnit && !*(LocalUnit + 0x10B0) && !*(qword_4ACEE78 + 0x450) )
    return *(*(LocalUnit + 0x9D0) + 0x568Fi64) != 0;
  // Unit + 0x9D0  : Air Movement
  return result;
}
