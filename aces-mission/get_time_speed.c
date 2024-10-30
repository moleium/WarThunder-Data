float get_time_speed()
{
  __m128 v0; // xmm0
  __m128 v1; // xmm1

  // game + 0x1AC is game speed
  if ( !*(game + 0x450) )
    return Y;
  v0 = _mm_and_ps(*(game + 0x1AC), xmmword_449AF40);
  v1 = dword_44A0308;
  v1.m128_f32[0] = *&dword_44A0308 * v0.m128_f32[0];
  return *(game
         + 8i64 * (_mm_cvtsi128_si32(_mm_or_ps(_mm_cmple_ps(v0, v1), _mm_cmple_ps(v0, dword_44A0634))) & 1)
         + 0x1AC);
}
