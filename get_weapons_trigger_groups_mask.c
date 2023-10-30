__int64 get_weapons_trigger_groups_mask()
{
  __int64 LocalUnit_; // rax
  __int64 v1; // r15
  __int64 UnitWeaponInfo; // r14
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax

  LocalUnit_ = LocalUnit;
  if ( LocalUnit && *(LocalUnit + 0x10B0) == 3
    || (LocalUnit_ = LocalUnit, LODWORD(v1) = 0, LocalUnit) && *(LocalUnit + 0x10B0) == 5 )
  {
    UnitWeaponInfo = *(LocalUnit_ + 0x11D0);
    if ( UnitWeaponInfo && (v3 = *(UnitWeaponInfo + 0x2E0), *(UnitWeaponInfo + 0x2E0)) )
    {
      v4 = *(UnitWeaponInfo + 0x2D0);
      v5 = UnitWeaponInfo + 0x318;
      v6 = 8 * v3;
      v7 = 0i64;
      v1 = 0i64;
      do
      {
        v8 = *(v4 + v7);
        if ( !(*(*v8 + 0x198i64))(v8) )
        {
          v9 = *(*(v8 + 8) + 0x11D0i64);
          if ( v9 )
          {
            v10 = *(v8 + 0x24);
            if ( v10 >= 0 && v10 < *(v9 + 0x1A0) )
            {
              v11 = *(*(v9 + 0x190) + 0x290 * v10 + 0xC2);
              if ( v11 <= 0x15u )
              {
                if ( *(v5 + 0x18 * v11 + 0x10) )
                  v1 |= 1i64 << v11;
              }
            }
          }
        }
        v7 += 8i64;
      }
      while ( v6 != v7 );
    }
    else
    {
      LODWORD(v1) = 0;
    }
  }
  return v1;
}
