__int64 __fastcall calculate_unit_position_rotation(unsigned int *a1, __int64 pPosition)
{
  __int64 v4; // rsi
  __int64 Unit_; // rax
  __int64 _Unit; // rdi
  __int64 v7; // rdx
  int v8; // r9d
  __int64 Position; // rax
  unsigned __int64 i; // rsi
  int v11; // eax
  __int64 UnitWeaponsInfo_; // rbx
  __int16 *v13; // rdx
  int UnitType; // ecx
  __int64 ballistics; // rdx
  unsigned int some_ccrp_val; // eax
  int v17; // esi
  _OWORD *ballistics_; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 UnitWeaponsInfo; // rax
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 _UnitWeaponsInfo; // rcx
  __int64 v25; // r8
  __int64 ccip_turret; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 Unit; // rax
  char v32; // [rsp+28h] [rbp-70h]
  __int128 v33[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v34; // [rsp+60h] [rbp-38h]

  v4 = (*(*a1 + 0x158i64))(a1);
  Unit_ = get_unit(a1);
  if ( !Unit_ )
    goto LABEL_4;
  _Unit = Unit_;
  if ( (*(*(Unit_ + 0x50) + 0x10i64))(Unit_ + 0x50) )
  {
    if ( !*(v4 + 0x191) )
    {
      UnitType = *(_Unit + 0x10B0);
      if ( (UnitType - 3) <= 1u
        && *&mUnit == _Unit
        && ((ballistics = *(game + 0x440), some_ccrp_val = *(ballistics + 0x3F4), some_ccrp_val <= 0x18)
         && (v17 = 0x100F824, _bittest(&v17, some_ccrp_val))
         || UnitType == 3
         && ((ccip_turret = *(ballistics + 0x3F0), ccip_turret < *(ballistics + 0x278))
          && (v27 = *(*(ballistics + 0x268) + 8 * ccip_turret)) != 0
          && *(v27 + 0x28) == 1
          || some_ccrp_val == 0x15))
        && (*(*_Unit + 0xA0i64))(_Unit) )
      {
        ballistics_ = *(game + 0x440);
        v19 = ballistics_[0x45];
        v20 = ballistics_[0x46];
        v34 = ballistics_[0x47];
        v33[0] = v19;
        v33[1] = v20;
      }
      else
      {
        v28 = a1[0x10C];
        if ( v28 < 0 || (v29 = *(*(*(_Unit + 0x11D0) + 0x190i64) + 0x290 * v28 + 8)) == 0 )
        {
          Unit = get_unit(a1);
          if ( Unit && !*(Unit + 0x10B0) )
          {
            *(pPosition + 8) = *(Unit + 0x9C8);
            Position = *(Unit + 0x9C0);
            goto LABEL_42;
          }
          goto LABEL_4;
        }
        v32 = 0;
        (*(*v29 + 0x1F0i64))(v29, v33, _Unit + 0x99C, 0i64, 0xFFFFFFFF, v32);
      }
      *(pPosition + 8) = HIDWORD(v34);
      Position = *(&v34 + 4);
      goto LABEL_42;
    }
LABEL_4:
    *(pPosition + 8) = dword_4AD102C;
    Position = qword_4AD1024;
LABEL_42:
    *pPosition = Position;
    return pPosition;
  }
  LODWORD(i) = a1[0x10C];
  if ( *(_Unit + 0x10B0) == 3 && (i & 0x80000000) != 0i64 )
  {
    LOBYTE(v7) = 1;
    v11 = (*(*_Unit + 0x278i64))(_Unit, v7);
    if ( v11 < 0 )
    {
      LODWORD(i) = *(_Unit + 0x1CC0);
      if ( (i & 0x80000000) == 0i64 )
        goto LABEL_30;
      *(_Unit + 0x1CC0) = 0;
      UnitWeaponsInfo = *(_Unit + 0x11D0);
      if ( *(UnitWeaponsInfo + 0x1A0) )
      {
        v22 = 8i64;
        for ( i = 0i64; i < *(UnitWeaponsInfo + 0x1A0); ++i )
        {
          v23 = *(*(UnitWeaponsInfo + 0x190) + v22);
          if ( v23 )
          {
            if ( (*(*v23 + 0x198i64))(v23) )
            {
              *(_Unit + 0x1CC0) = i;
              goto LABEL_27;
            }
            UnitWeaponsInfo = *(_Unit + 0x11D0);
          }
          v22 += 0x290i64;
        }
      }
    }
    else
    {
      UnitWeaponsInfo_ = *(_Unit + 0x11D0);
      if ( *(UnitWeaponsInfo_ + 0x1A0) )
      {
        v13 = (*(UnitWeaponsInfo_ + 0x190) + 0xC0i64);
        i = 0i64;
        while ( v11 != *v13 )
        {
          ++i;
          v13 += 0x148;
          if ( *(UnitWeaponsInfo_ + 0x1A0) == i )
            goto LABEL_29;
        }
        goto LABEL_27;
      }
    }
LABEL_29:
    LODWORD(i) = 0;
    goto LABEL_30;
  }
LABEL_27:
  if ( (i & 0x80000000) != 0i64 )
    goto LABEL_32;
LABEL_30:
  _UnitWeaponsInfo = *(_Unit + 0x11D0);
  v25 = *(*(_UnitWeaponsInfo + 0x190) + 0x290i64 * i + 8);
  if ( !v25 )
  {
LABEL_32:
    *(pPosition + 8) = *(_Unit + 0x9C8);
    Position = *(_Unit + 0x9C0);
    goto LABEL_42;
  }
  LOBYTE(v8) = 1;
  sub_27BF70(_UnitWeaponsInfo, _Unit + 0x99C, v25, v8, 0xFFFFFFFF, v33, 0i64);
  *pPosition = *(&v34 + 4);
  *(pPosition + 8) = HIDWORD(v34);
  return pPosition;
}
