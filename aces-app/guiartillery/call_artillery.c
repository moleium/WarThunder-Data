void __fastcall call_artillery(float a1, float a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // eax
  int v9; // edx
  float v10; // xmm9_4
  float v11; // xmm8_4
  float v12; // xmm10_4
  float v13; // xmm11_4
  float v14; // xmm7_4
  float v15; // xmm6_4
  float v16; // xmm11_4
  float v17; // xmm7_4
  __int64 v18; // rcx
  double v19; // xmm0_8
  __int64 hud; // rax
  __int64 v21; // rsi
  char v22; // [rsp+20h] [rbp-108h]
  float v23; // [rsp+80h] [rbp-A8h] BYREF
  float v24; // [rsp+84h] [rbp-A4h]
  float v25; // [rsp+88h] [rbp-A0h]
  float v26; // [rsp+90h] [rbp-98h] BYREF
  float v27; // [rsp+94h] [rbp-94h]
  float v28; // [rsp+98h] [rbp-90h]
  int v29[3]; // [rsp+A0h] [rbp-88h] BYREF
  char v30; // [rsp+ACh] [rbp-7Ch] BYREF

  if ( get_artillery_dispersion() >= 0.0 )
  {
    v3 = LocalUnit;
    if ( LocalUnit )
    {
      if ( qword_4B1BC60 )
      {
        v4 = 0i64;
        if ( *(LocalUnit + 0x13D0) == 1 )
        {
          if ( byte_4B1C341 )
          {
            v5 = *(LocalUnit + 0x10B8);
            if ( !v5
              || (v6 = *(v5 + 0x750), v4 = 0i64, *(game + 0x360) > v6)
              && (v7 = *(game + 0x350)) != 0
              && ((v4 = *(v7 + 8i64 * v6)) == 0 || (v8 = *(v4 + 0x10B0), v8 > 0xF) || (v9 = 0x897E, !_bittest(&v9, v8))) )
            {
              v4 = 0i64;
            }
          }
        }
        v10 = *(&qword_4A70DA8 + 1);
        v11 = a2 * *(&qword_4A70DA8 + 1);
        v12 = *&qword_4A70DA8;
        v13 = a1 * *&qword_4A70DA8;
        v14 = *(&qword_4A70DA8 + 1) * *&screenScaleFactor;
        v15 = *&screenScaleFactor * *&qword_4A70DA8;
        v23 = *&screenScaleFactor * *&qword_4A70DA8;
        v24 = *(&qword_4A70DA8 + 1) * *&screenScaleFactor;
        sub_C1E3C0(qword_4B1BC60, &v23, v29, &v26);
        v16 = (((v13 - v15) * *v29) / v12) + v26;
        v17 = (((v14 - v11) * *&v29[1]) / v10) + v27;
        v18 = *(game + 0x418);
        v26 = v16;
        v27 = 3000.0;
        v28 = v17;
        v22 = 0;
        v19 = sub_5B4DF0(v18, &v26, v29, &v30, v22, 0xFFFFFFFF, 0i64, 0x45E10000, 0, 1, 0, 0i64, 0, 1, 0xBF800000);
        v23 = v16;
        v24 = *&v19;
        v25 = v17;
        sub_348720(v3, v4, &v23);
        hud = *(game + 0x430);
        v21 = hud + 0x4F8;
        LOBYTE(v29[0]) = 1;
        if ( *(hud + 0x50C) != 0xFFFFFFFF )
          data::convert_to_owned(hud + 0x4F8);
        data::set_bool(v21, "artilleryTargettingUseMapFirst", v29);
      }
    }
  }
}
