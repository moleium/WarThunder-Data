bool has_schraege_musik()
{
  float v1; // xmm6_4
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r15
  __int64 v5; // rdi
  float v6; // xmm6_4
  __int64 i; // rbx
  _QWORD *v8; // rsi

  if ( !LocalUnit || *(LocalUnit + 0x10B0) )
    return 0;
  v1 = 0.0;
  if ( (*(LocalUnit + 0x1058) & 0x7000014) == 0 )
  {
    v2 = *(*(LocalUnit + 0x11D0) + 0x300i64);
    v3 = *(v2 + 0x28);
    if ( v3 )
    {
      v4 = *(v2 + 0x20);
      v5 = v3;
      v6 = 0.0;
      for ( i = 0i64; i != v5; ++i )
      {
        v8 = *(v4 + 8 * i);
        if ( !(*(*v8 + 0x108i64))(v8) )
          v8 = 0i64;
        v6 = v6 + *(v8[0x56] + 0x24Ci64);
      }
      v1 = v6 / v5;
    }
  }
  return COERCE_FLOAT(LODWORD(v1) & FABSF_MASK) >= *&FP32_EPSILON;
}
