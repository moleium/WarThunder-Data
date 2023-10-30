void __fastcall get_artillery_dispersion(float a1, float a2)
{
  __int64 LocalUnit_; // rdi
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned int v8; // eax
  int v9; // ecx
  float v10; // xmm9_4
  float v11; // xmm7_4
  float v12; // xmm10_4
  float v13; // xmm6_4
  float v14; // xmm8_4
  float v15; // xmm11_4
  float v16; // xmm6_4
  float v17; // xmm8_4
  __int64 v18; // rcx
  double v19; // xmm0_8
  char v20; // [rsp+20h] [rbp-118h]
  float v21; // [rsp+80h] [rbp-B8h] BYREF
  float v22; // [rsp+84h] [rbp-B4h]
  float v23; // [rsp+88h] [rbp-B0h]
  float v24; // [rsp+90h] [rbp-A8h] BYREF
  float v25; // [rsp+94h] [rbp-A4h]
  float v26; // [rsp+98h] [rbp-A0h]
  int v27[3]; // [rsp+A0h] [rbp-98h] BYREF
  char v28; // [rsp+ACh] [rbp-8Ch] BYREF

  LocalUnit_ = LocalUnit;
  if ( LocalUnit )
  {
    if ( (*(LocalUnit + 0x1058) & 0x7000014) == 0 )
    {
      v3 = qword_4B1BC60;
      if ( qword_4B1BC60 )
      {
        if ( *(LocalUnit + 0x13D0) == 1 )
        {
          if ( byte_4B1C341 )
          {
            v4 = *(LocalUnit + 0x10B8);
            if ( v4 )
            {
              v5 = *(v4 + 0x750);
              if ( *(game + 0x360) > v5 )
              {
                v6 = *(game + 0x350);
                if ( v6 )
                {
                  v7 = *(v6 + 8i64 * v5);
                  if ( v7 )
                  {
                    v8 = *(v7 + 0x10B0);
                    if ( v8 <= 0xF )
                    {
                      v9 = 0x897E;
                      if ( _bittest(&v9, v8) )
                      {
                        v10 = *(&qword_4A70DA8 + 1);
                        v11 = a2 * *(&qword_4A70DA8 + 1);
                        v12 = *&qword_4A70DA8;
                        v13 = a1 * *&qword_4A70DA8;
                        v14 = *(&qword_4A70DA8 + 1) * *&dword_44801CC;
                        v15 = *&dword_44801CC * *&qword_4A70DA8;
                        v21 = *&dword_44801CC * *&qword_4A70DA8;
                        v22 = *(&qword_4A70DA8 + 1) * *&dword_44801CC;
                        sub_C1E3C0(qword_4B1BC60, &v21, v27, &v24);
                        v16 = (((v13 - v15) * *v27) / v12) + v24;
                        v17 = (((v14 - v11) * *&v27[1]) / v10) + v25;
                        v18 = *(game + 0x418);
                        v24 = v16;
                        v25 = 3000.0;
                        v26 = v17;
                        v20 = 0;
                        v19 = sub_5B4DF0(
                                v18,
                                &v24,
                                v27,
                                &v28,
                                v20,
                                0xFFFFFFFF,
                                0i64,
                                0x45E10000,
                                0,
                                1,
                                0,
                                0i64,
                                0,
                                1,
                                0xBF800000);
                        v21 = v16;
                        v22 = *&v19;
                        v23 = v17;
                        if ( sub_348530(LocalUnit_, v7, &v21) )
                        {
                          if ( *(LocalUnit_ + 0x11B0) )
                          {
                            if ( !*(*(game + 0x420) + 0x3B0i64) )
                            {
                              sub_348400(LocalUnit_, v7, &v21);
                              sub_C1E5F0(v3);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
