__int64 get_engines_count()
{
  __int64 result; // rax
  int *v1; // rdx
  __int64 v2; // rax
  int v3; // r8d
  __int64 v4; // rcx

  if ( !LocalUnit || *(LocalUnit + 0x10B0) || (*(LocalUnit + 0x1058) & 0x7000014) != 0 )
    return 0i64;
  v1 = *(*(LocalUnit + 0x9D0) + 0x3AC8i64);
  v2 = *v1;
  v3 = v2 & (*v1 >> 0x1F);
  while ( v2 > 0 )
  {
    v4 = *&v1[2 * v2--];
    if ( !*(*v4 + 1i64) )
    {
      v3 = v2 + 1;
      break;
    }
  }
  result = 0i64;
  if ( v3 > 0 )
    return v3;
  return result;
}
