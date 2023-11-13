__int64 __fastcall set_zoom_mult(float value)
{
  __int64 ballistics; // rax

  ballistics = *(game + 0x440);
  *(ballistics + 0x968) = value;
  return ballistics;
}
