bool __fastcall has_feathering_control(int a1)
{
  bool result; // al
  int *v2; // r8
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rdx
  int *v8; // rax
  __m128i si128; // xmm0
  __m128i v10; // xmm1
  __int64 v11; // rdx
  __m128i v12; // xmm2
  __m128i inserted; // xmm4
  int *v14; // rax
  __int64 v15; // rcx
  int v17[18]; // [rsp+0h] [rbp-48h]

  if ( !LocalUnit )
    return 0;
  if ( *(LocalUnit + 0x10B0) )
    return 0;
  if ( (*(LocalUnit + 0x1058) & 0x7000014) != 0 )
    return 0;
  if ( a1 < 0 )
    return 0;
  v2 = *(*(LocalUnit + 0x9D0) + 0x3AC8i64);
  if ( *v2 <= a1 )
    return 0;
  v3 = v2[2 * a1 + 0x294D];
  if ( v3 < 0 )
    return 0;
  v4 = *&v2[2 * v3 + 0x292C];
  v5 = *(v4 + 0x38);
  if ( !*(v4 + 0x38) )
    return 0;
  if ( v5 >= 9 )
  {
    v7 = 8i64;
    if ( (v5 & 7) != 0 )
      v7 = v5 & 7;
    v6 = v5 - v7;
    v8 = (v4 + 0xC8);
    si128 = _mm_load_si128(&xmmword_44AD4D0);
    v10 = _mm_load_si128(&xmmword_44AD4E0);
    v11 = 0i64;
    v12 = _mm_load_si128(&xmmword_44AD4F0);
    do
    {
      inserted = _mm_insert_epi32(
                   _mm_insert_epi32(
                     _mm_insert_epi32(_mm_cvtsi32_si128(v8[0xFFFFFFF1]), v8[0xFFFFFFF6], 1),
                     v8[0xFFFFFFFB],
                     2),
                   *v8,
                   3);
      *&v17[v11 + 1] = _mm_insert_epi32(
                         _mm_insert_epi32(
                           _mm_insert_epi32(_mm_cvtsi32_si128(v8[0xFFFFFFDD]), v8[0xFFFFFFE2], 1),
                           v8[0xFFFFFFE7],
                           2),
                         v8[0xFFFFFFEC],
                         3);
      *&v17[v11 + 5] = inserted;
      v11 += 8i64;
      v10 = _mm_add_epi64(v10, v12);
      si128 = _mm_add_epi64(si128, v12);
      v8 += 0x28;
    }
    while ( v6 != v11 );
  }
  else
  {
    v6 = 0i64;
  }
  v14 = (v4 + 0x14 * v6 + 0x3C);
  do
  {
    v17[++v6] = *v14;
    v14 += 5;
  }
  while ( v5 != v6 );
  v15 = 1i64;
  do
  {
    result = *(*(*&v2[2 * v17[v15] + 0x1C28] + 0x38i64) + 0x32Ei64) != 0;
    if ( *(*(*&v2[2 * v17[v15] + 0x1C28] + 0x38i64) + 0x32Ei64) )
      break;
  }
  while ( v5 != v15++ );
  return result;
}
