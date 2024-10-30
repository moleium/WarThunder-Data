__int64 __fastcall change_bullet_type(unsigned int a1, int a2)
{
  __int64 result; // rax

  result = a1;
  if ( LocalUnit )
    return (*(*LocalUnit + 0x240i64))(LocalUnit, a2 | (0x10 * a1));
  return result;
}
