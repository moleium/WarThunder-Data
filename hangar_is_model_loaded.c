bool hangar_is_model_loaded()
{
  return UnitToo && (*(UnitToo + 0x1058) & 0x2000010) == 0;
}
