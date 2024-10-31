__m128 __fastcall worldToMap(float a1)
{
  if ( !curTacticalMap )
    return dword_44801E8;
  v2 = *&a1;
  lastScreenSize_ = *&lastScreenSize;
  *v4 = *&screenScaleFactor * *&lastScreenSize;
  *&v4[1] = *(&lastScreenSize + 1) * *&screenScaleFactor;
  convWorldSize(curTacticalMap, v4, &v5, v6);
  *&v2 = (*&a1 * lastScreenSize_) / (*&lastScreenSize * v5);
  return v2;
}