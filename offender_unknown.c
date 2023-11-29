void __fastcall offender_unknown(__int64 Unit, __int64 offender_unit)
{
  int v4; // ebp
  int v5; // eax
  void *hud; // rax
  float v7; // xmm0_4
  unsigned int UnitType; // edx
  int v9; // ecx
  __int64 v10; // r8
  double *v11; // rbp
  __int64 v12; // rcx
  float *v13; // rcx
  unsigned int offender_unittype; // ecx
  int v15; // edx
  float v16; // xmm0_4
  float v17; // xmm0_4
  char v18; // [rsp+2Fh] [rbp-39h] BYREF

  if ( offender_unit )
  {
    v4 = (*(*(offender_unit + 0x50) + 0x30i64))(offender_unit + 0x50);
    v5 = (*(*(Unit + 0x50) + 0x30i64))(Unit + 0x50);
    if ( (dword_4B1C814 & 0x80000) != 0 || v5 != v4 || (dword_4B1C814 & 0x1000000) != 0 )
    {
      hud = HudInfo;
      v7 = *(HudInfo + 0x137);
      if ( v7 > 0.0 )
      {
        UnitType = *(Unit + 0x10B0);
        if ( UnitType <= 0xF )
        {
          v9 = 0x897E;
          if ( _bittest(&v9, UnitType) )
          {
            if ( *(offender_unit + 0x10B8) )
            {
              v10 = *(*(game + 0x498) + 0x2990i64);
              if ( !qword_4B507E8 || *(game + 0xCD) || *(game + 0xCE) )
              {
                v12 = *(game + 0x450);
                if ( v12 && *(v12 + 0x5CA) )
                  v11 = (v12 + 0x620);
                else
                  v11 = (game + 0x2E0);
              }
              else
              {
                v11 = (qword_4B507E8 + 0x70);
              }
              v13 = (v10 + 8);
              if ( UnitType != 5 )
                v13 = *(*(game + 0x498) + 0x2990i64);
              if ( *v11 - *(Unit + 0x17D0) < *v13
                && (((*(Unit + 0x9C8) - *(Unit + 0x10D8)) * (*(Unit + 0x9C8) - *(Unit + 0x10D8)))
                  + ((*(Unit + 0x9C0) - *(Unit + 0x10D0)) * (*(Unit + 0x9C0) - *(Unit + 0x10D0)))) < *(v10 + 8i64 * (UnitType == 5) + 4) )
              {
                *(*(offender_unit + 0x11C8) + 0xCCi64) = fmaxf(v7, *(*(offender_unit + 0x11C8) + 0xCCi64));
                offender_unittype = *(offender_unit + 0x10B0);
                if ( offender_unittype <= 0xF )
                {
                  v15 = 0x897E;
                  if ( _bittest(&v15, offender_unittype) )
                  {
                    v18 = 1;
                    if ( *(offender_unit + 0x2788) != 1 )
                    {
                      sub_158CE00(offender_unit + 0x2768, offender_unit, &v18);
                      *(offender_unit + 0x2788) = v18;
                      hud = HudInfo;
                    }
                    *(offender_unit + 0x2790) = *(hud + 0x137);
                  }
                }
                if ( *(hud + 0x2A4) )
                {
                  sub_4BD060(*(Unit + 0x11C8), offender_unit);
                  hud = HudInfo;
                }
              }
            }
          }
        }
      }
      v16 = *(hud + 0xAB);
      if ( v16 > 0.0 )
      {
        *(*(offender_unit + 0x11C8) + 0xCCi64) = fmaxf(v16, *(*(offender_unit + 0x11C8) + 0xCCi64));
        if ( *(hud + 0x2A4) )
        {
          sub_4BD060(*(Unit + 0x11C8), offender_unit);
          hud = HudInfo;
        }
      }
      v17 = *(hud + 0xAC);
      if ( v17 > 0.0 )
      {
        *(*(Unit + 0x11C8) + 0xCCi64) = fmaxf(v17, *(*(Unit + 0x11C8) + 0xCCi64));
        if ( *(hud + 0x2A4) )
        {
          sub_4BD060(*(offender_unit + 0x11C8), Unit);
          hud = HudInfo;
        }
      }
      if ( *(hud + 0x2A4) && !(*(*(Unit + 0x50) + 0x20i64))(Unit + 0x50) )
      {
        if ( *(Unit + 0x10B0) )
          sub_328700(Unit, offender_unit, *(HudInfo + 0xAE));
        if ( *(offender_unit + 0x10B0) )
          sub_328700(offender_unit, Unit, *(HudInfo + 0xAD));
      }
    }
  }
}
