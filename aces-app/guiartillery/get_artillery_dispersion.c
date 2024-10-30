void __fastcall get_artillery_dispersion(float a1, float a2)
{
  // [COLLAPSED LOCAL DECLARATIONS. PRESS KEYPAD CTRL-"+" TO EXPAND]

  LocalUnit_ = LocalUnit;
  if ( LocalUnit )
  {
    if ( (*(LocalUnit + 0x1058) & 0x7000014) == 0 )
    {
      v3 = curTacticalMap;
      if ( curTacticalMap )
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
                        v10 = *(&lastScreenSize + 1);
                        v11 = a2 * *(&lastScreenSize + 1);
                        v12 = *&lastScreenSize;
                        v13 = a1 * *&lastScreenSize;
                        v14 = *(&lastScreenSize + 1) * *&dword_44801CC;
                        v15 = *&dword_44801CC * *&lastScreenSize;
                        v21 = *&dword_44801CC * *&lastScreenSize;
                        v22 = *(&lastScreenSize + 1) * *&dword_44801CC;
                        convWorldSize(curTacticalMap, &v21, v27, &v24);
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