__m128 getArtilleryRange()
{
  float *v0; // r8
  __int64 v1; // r9
  unsigned int v2; // r9d
  __int64 v3; // r10
  __int64 v4; // r9
  unsigned int v5; // r10d
  int v6; // eax
  __int128 v7; // xmm6
  float lastScreenSize_; // xmm7_4
  int v10[2]; // [rsp+28h] [rbp-40h] BYREF
  float v11; // [rsp+30h] [rbp-38h] BYREF
  char v12[8]; // [rsp+38h] [rbp-30h] BYREF

  if ( !curTacticalMap )
    return dword_44801E8;
  if ( LocalUnit )
  {
    v0 = (HudInfo + 0x338);
    if ( *(LocalUnit + 0x13D0) == 1
      && byte_4B1C341
      && (v1 = *(LocalUnit + 0x10B8)) != 0
      && (v2 = *(v1 + 0x750), *(game + 0x360) > v2)
      && (v3 = *(game + 0x350)) != 0
      && (v4 = *(v3 + 8i64 * v2)) != 0
      && (v5 = *(v4 + 0x10B0), v5 <= 0xF)
      && (v6 = 0x897E, _bittest(&v6, v5)) )
    {
      if ( *(LocalUnit + 0x10B0) == 5 )
        v0 = (HudInfo + 0x33C);
      v7 = *(*(v4 + 0x2280) + 0x420i64);
    }
    else
    {
      if ( *(LocalUnit + 0x10B0) == 5 )
        v0 = (HudInfo + 0x33C);
      v7 = LODWORD(Y);
    }
    *&v7 = *&v7 * *v0;
  }
  else
  {
    v7 = *(HudInfo + 0xCE);
  }
  lastScreenSize_ = *&lastScreenSize;
  *v10 = *&screenScaleFactor * *&lastScreenSize;
  *&v10[1] = *(&lastScreenSize + 1) * *&screenScaleFactor;
  convWorldSize(curTacticalMap, v10, &v11, v12);
  *&v7 = (*&v7 * lastScreenSize_) / (*&lastScreenSize * v11);
  return v7;
}