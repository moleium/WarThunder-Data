bool __fastcall is_alive(__int64 Unit)
{
  return Unit
      && (*(Unit + 0x10B0) || *(Unit + 0x10A8) <= 1u)
      && ((*(Unit + 0x1058) & 0x20000) == 0 || (*(*(Unit + 0x50) + 0x10i64))(Unit + 0x50))
      && *(Unit + 0x10A8) < 2u;
}
